// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1412f3180 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x6e0;
    *puVar1 = &PTR_FUN_1447b58f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1412f31d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AAFGameState::GetPrivateStaticClass(void)

{
  if (DAT_14687b128 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CarnivoraCannon",&DAT_14687b128,
                  StaticRegisterNativesAAFGameState,0x4d8,0x10000000,0,L"Engine",&LAB_1412f3620,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14687b128;
}



// FUNCTION 1412f3280 FUN_1412f3280 body=47 status=ok
// SIG undefined FUN_1412f3280(void)

longlong FUN_1412f3280(void)

{
  if (DAT_14687b120 == 0) {
    FUN_141786440(&DAT_14687b120,&PTR_GetPrivateStaticClass_1447b3120);
  }
  return DAT_14687b120;
}



// FUNCTION 1412f32b0 FUN_1412f32b0 body=47 status=ok
// SIG undefined FUN_1412f32b0(void)

longlong FUN_1412f32b0(void)

{
  if (DAT_14687b110 == 0) {
    FUN_141786a30(&DAT_14687b110,&PTR_FUN_1462bf510);
  }
  return DAT_14687b110;
}



// FUNCTION 1412f32e0 FUN_1412f32e0 body=47 status=ok
// SIG undefined FUN_1412f32e0(void)

longlong FUN_1412f32e0(void)

{
  if (DAT_14687b118 == 0) {
    FUN_141786a30(&DAT_14687b118,&PTR_FUN_1462bf590);
  }
  return DAT_14687b118;
}



// FUNCTION 1412f3320 FUN_1412f3320 body=162 status=ok
// SIG undefined FUN_1412f3320(void)

longlong FUN_1412f3320(void)

{
  if (DAT_14687b048 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CARConsoleAnimInstance",&DAT_14687b048,FUN_140447710,0x450,
                  0x10000008,0,L"Engine",&LAB_1412f36c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142256d30,thunk_FUN_1428eccf0,
                  &LAB_14084f730,0);
  }
  return DAT_14687b048;
}



// FUNCTION 1412f33d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGNewsMenuItem::GetPrivateStaticClass(void)

{
  if (DAT_14687b150 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CarnivoraDamageZoneComponent",&DAT_14687b150,FUN_1412f3ff0,
                  0x7e0,0x10000000,0,L"Engine",&LAB_1412f37e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412e8700,&LAB_140447700,0);
  }
  return DAT_14687b150;
}



// FUNCTION 1412f3490 FUN_1412f3490 body=47 status=ok
// SIG undefined FUN_1412f3490(void)

longlong FUN_1412f3490(void)

{
  if (DAT_14687b148 == 0) {
    FUN_141786440(&DAT_14687b148,&PTR_GetPrivateStaticClass_1447b4dd0);
  }
  return DAT_14687b148;
}



// FUNCTION 1412f34c0 FUN_1412f34c0 body=47 status=ok
// SIG undefined FUN_1412f34c0(void)

longlong FUN_1412f34c0(void)

{
  if (DAT_14687b140 == 0) {
    FUN_141786a30(&DAT_14687b140,&PTR_FUN_1462bfcc0);
  }
  return DAT_14687b140;
}



// FUNCTION 1412f34f0 FUN_1412f34f0 body=53 status=ok
// SIG undefined FUN_1412f34f0(void)

void FUN_1412f34f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_1447b5a28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1412f3540 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ALoreItem::GetPrivateStaticClass(void)

{
  if (DAT_14687b160 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CarnivoraTrackBuilder",&DAT_14687b160,FUN_140447710,0x4c8,
                  0x10000000,0,L"Engine",&LAB_1412f3640,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14687b160;
}



// FUNCTION 1412f3800 FUN_1412f3800 body=90 status=ok
// SIG undefined FUN_1412f3800(void)

void FUN_1412f3800(longlong *param_1)

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
    *puVar1 = &PTR__scalar_deleting_destructor__1447b5b60;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
  }
  return;
}



// FUNCTION 1412f3860 FUN_1412f3860 body=174 status=ok
// SIG undefined FUN_1412f3860(void)

undefined4 * FUN_1412f3860(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  if (0x7fffffff < (uint)param_1[9]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 6) = 0;
  }
  param_1[2] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x12] = 0;
  if (((int)param_1[0x13] < 0) && (param_1[0x13] != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  if (*(undefined2 **)(param_1 + 0x10) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x10) = 0;
  }
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 1412f3910 FUN_1412f3910 body=33 status=ok
// SIG undefined FUN_1412f3910(void)

void FUN_1412f3910(undefined8 param_1,undefined8 *param_2)

{
  FUN_14084bd40(param_2);
  *param_2 = &PTR_FUN_144204318;
  return;
}



// FUNCTION 1412f3950 FUN_1412f3950 body=84 status=ok
// SIG undefined FUN_1412f3950(void)

void FUN_1412f3950(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x60);
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0x20) = 0x453b8000;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x42960000;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0x459c4000;
  *(undefined4 *)((longlong)param_2 + 0x38) = 0x42340000;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_2 + 0x40) = 0x41200000;
  return;
}



// FUNCTION 1412f39b0 Construct body=36 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FLoadableModAsset>::Construct(undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x58);
  FUN_1412f3860(param_2);
  return;
}



// FUNCTION 1412f39f0 FUN_1412f39f0 body=149 status=ok
// SIG undefined FUN_1412f39f0(void)

undefined8 FUN_1412f39f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x6bc);
    do {
      FUN_14084cff0(puVar1 + -0x1af,param_3 + -0x6bc + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined4 *)(param_3 + 4 + (longlong)puVar1);
      puVar1[2] = *(undefined4 *)(param_3 + 8 + (longlong)puVar1);
      puVar1[3] = *(undefined4 *)(param_3 + 0xc + (longlong)puVar1);
      puVar1[4] = *(undefined4 *)(param_3 + 0x10 + (longlong)puVar1);
      puVar1[5] = *(undefined4 *)(param_3 + 0x14 + (longlong)puVar1);
      puVar1[6] = *(undefined4 *)(param_3 + 0x18 + (longlong)puVar1);
      puVar1[7] = *(undefined4 *)(param_3 + 0x1c + (longlong)puVar1);
      puVar1 = puVar1 + 0x1b8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412f3af0 FUN_1412f3af0 body=216 status=ok
// SIG undefined FUN_1412f3af0(void)

undefined8 FUN_1412f3af0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 local_38;
  undefined1 local_30 [16];
  undefined8 local_20;
  undefined1 local_18 [16];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x30);
    do {
      puVar1[-0xc] = *(undefined4 *)(param_3 + -0x30 + (longlong)puVar1);
      puVar1[-0xb] = *(undefined4 *)(param_3 + -0x2c + (longlong)puVar1);
      puVar1[-10] = *(undefined4 *)(param_3 + -0x28 + (longlong)puVar1);
      local_38 = *(undefined8 *)(param_3 + -0x20 + (longlong)puVar1);
      FString::FString(local_30,param_3 + -0x18 + (longlong)puVar1);
      FSoftObjectPath::operator=(puVar1 + -8,&local_38);
      puVar1[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      local_20 = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      FString::FString(local_18,param_3 + 0x10 + (longlong)puVar1);
      FSoftObjectPath::operator=(puVar1 + 2,&local_20);
      *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(param_3 + 0x20 + (longlong)puVar1);
      puVar1[9] = *(undefined4 *)(param_3 + 0x24 + (longlong)puVar1);
      puVar1 = puVar1 + 0x16;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412f3bd0 Destruct body=48 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FSpawnGenerator>::Destruct(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1412f3c00 FUN_1412f3c00 body=60 status=ok
// SIG undefined FUN_1412f3c00(void)

void FUN_1412f3c00(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res10 [24];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14687afb0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 1412f3c40 FUN_1412f3c40 body=55 status=ok
// SIG undefined FUN_1412f3c40(void)

void FUN_1412f3c40(void)

{
  undefined8 uVar1;
  
  if (DAT_14687ae30 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687ae30 = GetStaticEnum(FUN_1412f4480,uVar1,L"ECARStatus");
  }
  return;
}



// FUNCTION 1412f3c80 FUN_1412f3c80 body=55 status=ok
// SIG undefined FUN_1412f3c80(void)

void FUN_1412f3c80(void)

{
  undefined8 uVar1;
  
  if (DAT_14687ae20 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687ae20 = GetStaticEnum(FUN_1412f44b0,uVar1,L"ECarnivoraAverageLocation");
  }
  return;
}



// FUNCTION 1412f3cc0 FUN_1412f3cc0 body=55 status=ok
// SIG undefined FUN_1412f3cc0(void)

void FUN_1412f3cc0(void)

{
  undefined8 uVar1;
  
  if (DAT_14687ae18 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687ae18 = GetStaticEnum(FUN_1412f44e0,uVar1,L"ECarnivoraFakeTurretShootingStyle");
  }
  return;
}



// FUNCTION 1412f3d00 FUN_1412f3d00 body=55 status=ok
// SIG undefined FUN_1412f3d00(void)

void FUN_1412f3d00(void)

{
  undefined8 uVar1;
  
  if (DAT_14687ae28 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687ae28 = GetStaticEnum(FUN_1412f4510,uVar1,L"ECarnivoraPartName");
  }
  return;
}



// FUNCTION 1412f3d40 FUN_1412f3d40 body=6 status=ok
// SIG undefined FUN_1412f3d40(void)

undefined8 FUN_1412f3d40(void)

{
  return 0x5d8e4017;
}



// FUNCTION 1412f3d50 FUN_1412f3d50 body=6 status=ok
// SIG undefined FUN_1412f3d50(void)

undefined8 FUN_1412f3d50(void)

{
  return 0xa3f9cc2c;
}



// FUNCTION 1412f3d60 FUN_1412f3d60 body=6 status=ok
// SIG undefined FUN_1412f3d60(void)

undefined8 FUN_1412f3d60(void)

{
  return 0x1df7fe4a;
}



// FUNCTION 1412f3d70 FUN_1412f3d70 body=6 status=ok
// SIG undefined FUN_1412f3d70(void)

undefined8 FUN_1412f3d70(void)

{
  return 0xf9f46f74;
}



// FUNCTION 1412f3d80 FUN_1412f3d80 body=6 status=ok
// SIG undefined FUN_1412f3d80(void)

undefined8 FUN_1412f3d80(void)

{
  return 0x743c1cf5;
}



// FUNCTION 1412f3e20 FUN_1412f3e20 body=61 status=ok
// SIG undefined FUN_1412f3e20(void)

void FUN_1412f3e20(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14687af98);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1412f3e60 FUN_1412f3e60 body=65 status=ok
// SIG undefined FUN_1412f3e60(void)

void FUN_1412f3e60(longlong *param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18[0] = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_14687afa0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_18);
  return;
}



// FUNCTION 1412f3eb0 FUN_1412f3eb0 body=57 status=ok
// SIG undefined FUN_1412f3eb0(void)

void FUN_1412f3eb0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14687afa8);
                    /* WARNING: Could not recover jumptable at 0x0001412f3ee6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1412f3ef0 thunk_FUN_142fd5830 body=5 status=ok
// SIG undefined thunk_FUN_142fd5830(void)

void thunk_FUN_142fd5830(void)

{
  FUN_142fd5830();
  return;
}



// FUNCTION 1412f3f00 StaticRegisterNativesUSoUIInputKeySelector body=34 status=ok
// SIG undefined StaticRegisterNativesUSoUIInputKeySelector(void)

void USoUIInputKeySelector::StaticRegisterNativesUSoUIInputKeySelector(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_NotifyTriggerTouched_1447b5860,9);
  return;
}



// FUNCTION 1412f3f30 StaticRegisterNativesAAFGameState body=34 status=ok
// SIG undefined StaticRegisterNativesAAFGameState(void)

void AAFGameState::StaticRegisterNativesAAFGameState(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_FireCannon_1447b5a08,2);
  return;
}



// FUNCTION 1412f3f60 FUN_1412f3f60 body=34 status=ok
// SIG undefined FUN_1412f3f60(void)

void FUN_1412f3f60(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412f24d0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnComponentHitCallback_1447b5b50,1);
  return;
}



// FUNCTION 1412f3f90 FUN_1412f3f90 body=34 status=ok
// SIG undefined FUN_1412f3f90(void)

void FUN_1412f3f90(void)

{
  undefined8 uVar1;
  
  uVar1 = UUGButton::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CanRespawnVehicle_1447b5de8,3);
  return;
}



// FUNCTION 1412f3fc0 FUN_1412f3fc0 body=34 status=ok
// SIG undefined FUN_1412f3fc0(void)

void FUN_1412f3fc0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412f2580();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetOwnedVehicleOnPlatform_1447b5e20,4);
  return;
}



// FUNCTION 1412f3ff0 FUN_1412f3ff0 body=34 status=ok
// SIG undefined FUN_1412f3ff0(void)

void FUN_1412f3ff0(void)

{
  undefined8 uVar1;
  
  uVar1 = UGNewsMenuItem::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnActorComponentHit_1447b5b40,1);
  return;
}



// FUNCTION 1412f4020 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimInstanceProxy::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687b0f0 == 0) {
    uVar1 = FUN_1412f3d40();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b0f0 = GetStaticStruct(FUN_1412f4540,uVar2,L"CarnivoraAnimInstanceProxy",0x6e0,uVar1);
  }
  return;
}



// FUNCTION 1412f4080 FUN_1412f4080 body=82 status=ok
// SIG undefined FUN_1412f4080(void)

void FUN_1412f4080(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687b130 == 0) {
    uVar1 = FUN_1412f3d50();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b130 = GetStaticStruct(FUN_1412f4570,uVar2,L"CarnivoraDamageZoneInfo",0xc,uVar1);
  }
  return;
}



// FUNCTION 1412f40e0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687b068 == 0) {
    uVar1 = FUN_1412f3d60();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b068 = GetStaticStruct(FUN_1412f45a0,uVar2,L"CarnivoraFakeTurrets",0x60,uVar1);
  }
  return;
}



// FUNCTION 1412f4140 FUN_1412f4140 body=82 status=ok
// SIG undefined FUN_1412f4140(void)

void FUN_1412f4140(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687b078 == 0) {
    uVar1 = FUN_1412f3d70();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b078 = GetStaticStruct(FUN_1412f45d0,uVar2,L"SplineTriggers",0x58,uVar1);
  }
  return;
}



// FUNCTION 1412f41a0 FUN_1412f41a0 body=82 status=ok
// SIG undefined FUN_1412f41a0(void)

void FUN_1412f41a0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687b088 == 0) {
    uVar1 = FUN_1412f3d80();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b088 = GetStaticStruct(FUN_1412f4600,uVar2,L"WheelState",0xc,uVar1);
  }
  return;
}



// FUNCTION 1412f4200 FUN_1412f4200 body=57 status=ok
// SIG undefined FUN_1412f4200(void)

void FUN_1412f4200(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14687afc0);
                    /* WARNING: Could not recover jumptable at 0x0001412f4236. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1412f4240 FUN_1412f4240 body=47 status=ok
// SIG undefined FUN_1412f4240(void)

longlong FUN_1412f4240(void)

{
  if (DAT_14687b158 == 0) {
    FUN_141786440(&DAT_14687b158,&PTR_GetPrivateStaticClass_1447b5030);
  }
  return DAT_14687b158;
}



// FUNCTION 1412f4270 FUN_1412f4270 body=47 status=ok
// SIG undefined FUN_1412f4270(void)

longlong FUN_1412f4270(void)

{
  if (DAT_14687b040 == 0) {
    FUN_141786440(&DAT_14687b040,&PTR_FUN_1447b4a60);
  }
  return DAT_14687b040;
}



// FUNCTION 1412f42a0 FUN_1412f42a0 body=47 status=ok
// SIG undefined FUN_1412f42a0(void)

longlong FUN_1412f42a0(void)

{
  if (DAT_14687afc8 == 0) {
    FUN_141786440(&DAT_14687afc8,&PTR_GetPrivateStaticClass_1447b02d0);
  }
  return DAT_14687afc8;
}



// FUNCTION 1412f42d0 FUN_1412f42d0 body=47 status=ok
// SIG undefined FUN_1412f42d0(void)

longlong FUN_1412f42d0(void)

{
  if (DAT_14687afd8 == 0) {
    FUN_141786440(&DAT_14687afd8,&PTR_FUN_1447b06f0);
  }
  return DAT_14687afd8;
}



// FUNCTION 1412f4300 FUN_1412f4300 body=47 status=ok
// SIG undefined FUN_1412f4300(void)

longlong FUN_1412f4300(void)

{
  if (DAT_14687afe8 == 0) {
    FUN_141786440(&DAT_14687afe8,&PTR_GetPrivateStaticClass_1447b2b00);
  }
  return DAT_14687afe8;
}



// FUNCTION 1412f4330 FUN_1412f4330 body=47 status=ok
// SIG undefined FUN_1412f4330(void)

longlong FUN_1412f4330(void)

{
  if (DAT_14687aff8 == 0) {
    FUN_141786440(&DAT_14687aff8,&PTR_GetPrivateStaticClass_1447b08d0);
  }
  return DAT_14687aff8;
}



// FUNCTION 1412f4360 FUN_1412f4360 body=47 status=ok
// SIG undefined FUN_1412f4360(void)

longlong FUN_1412f4360(void)

{
  if (DAT_14687b008 == 0) {
    FUN_141786440(&DAT_14687b008,&PTR_FUN_1447b0ae0);
  }
  return DAT_14687b008;
}



// FUNCTION 1412f4390 FUN_1412f4390 body=47 status=ok
// SIG undefined FUN_1412f4390(void)

longlong FUN_1412f4390(void)

{
  if (DAT_14687b018 == 0) {
    FUN_141786440(&DAT_14687b018,&PTR_FUN_1447b1160);
  }
  return DAT_14687b018;
}



// FUNCTION 1412f43c0 FUN_1412f43c0 body=47 status=ok
// SIG undefined FUN_1412f43c0(void)

longlong FUN_1412f43c0(void)

{
  if (DAT_14687b028 == 0) {
    FUN_141786440(&DAT_14687b028,&PTR_FUN_1447b2760);
  }
  return DAT_14687b028;
}



// FUNCTION 1412f43f0 FUN_1412f43f0 body=47 status=ok
// SIG undefined FUN_1412f43f0(void)

longlong FUN_1412f43f0(void)

{
  if (DAT_14687b100 == 0) {
    FUN_141786440(&DAT_14687b100,&PTR_FUN_1447b2ec0);
  }
  return DAT_14687b100;
}



// FUNCTION 1412f4420 FUN_1412f4420 body=47 status=ok
// SIG undefined FUN_1412f4420(void)

longlong FUN_1412f4420(void)

{
  if (DAT_14687b188 == 0) {
    FUN_141786440(&DAT_14687b188,&PTR_FUN_1447ae5a0);
  }
  return DAT_14687b188;
}



// FUNCTION 1412f4450 FUN_1412f4450 body=47 status=ok
// SIG undefined FUN_1412f4450(void)

longlong FUN_1412f4450(void)

{
  if (DAT_14687b180 == 0) {
    FUN_141786a30(&DAT_14687b180,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c0760);
  }
  return DAT_14687b180;
}



// FUNCTION 1412f4480 FUN_1412f4480 body=47 status=ok
// SIG undefined FUN_1412f4480(void)

longlong FUN_1412f4480(void)

{
  if (DAT_14687b038 == 0) {
    FUN_1417866a0(&DAT_14687b038,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c1a50);
  }
  return DAT_14687b038;
}



// FUNCTION 1412f44b0 FUN_1412f44b0 body=47 status=ok
// SIG undefined FUN_1412f44b0(void)

longlong FUN_1412f44b0(void)

{
  if (DAT_14687b058 == 0) {
    FUN_1417866a0(&DAT_14687b058,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c1af0);
  }
  return DAT_14687b058;
}



// FUNCTION 1412f44e0 FUN_1412f44e0 body=47 status=ok
// SIG undefined FUN_1412f44e0(void)

longlong FUN_1412f44e0(void)

{
  if (DAT_14687b050 == 0) {
    FUN_1417866a0(&DAT_14687b050,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c1aa0);
  }
  return DAT_14687b050;
}



// FUNCTION 1412f4510 FUN_1412f4510 body=47 status=ok
// SIG undefined FUN_1412f4510(void)

longlong FUN_1412f4510(void)

{
  if (DAT_14687b060 == 0) {
    FUN_1417866a0(&DAT_14687b060,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c1b40);
  }
  return DAT_14687b060;
}



// FUNCTION 1412f4540 FUN_1412f4540 body=47 status=ok
// SIG undefined FUN_1412f4540(void)

longlong FUN_1412f4540(void)

{
  if (DAT_14687b0f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687b0f8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462bf450);
  }
  return DAT_14687b0f8;
}



// FUNCTION 1412f4570 FUN_1412f4570 body=47 status=ok
// SIG undefined FUN_1412f4570(void)

longlong FUN_1412f4570(void)

{
  if (DAT_14687b138 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687b138,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462bfb30);
  }
  return DAT_14687b138;
}



// FUNCTION 1412f45a0 FUN_1412f45a0 body=47 status=ok
// SIG undefined FUN_1412f45a0(void)

longlong FUN_1412f45a0(void)

{
  if (DAT_14687b070 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687b070,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462be2d0);
  }
  return DAT_14687b070;
}



// FUNCTION 1412f45d0 FUN_1412f45d0 body=47 status=ok
// SIG undefined FUN_1412f45d0(void)

longlong FUN_1412f45d0(void)

{
  if (DAT_14687b080 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687b080,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462be420);
  }
  return DAT_14687b080;
}



// FUNCTION 1412f4600 FUN_1412f4600 body=47 status=ok
// SIG undefined FUN_1412f4600(void)

longlong FUN_1412f4600(void)

{
  if (DAT_14687b090 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687b090,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462be4a0);
  }
  return DAT_14687b090;
}



// FUNCTION 1412f4630 FUN_1412f4630 body=247 status=ok
// SIG undefined FUN_1412f4630(void)

void FUN_1412f4630(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 local_res10;
  undefined1 local_198 [400];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FUN_140ac6910(local_198);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_198);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_198);
  }
  puVar2 = local_198;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140acec10(param_1,local_res10,puVar2);
  *param_3 = uVar1;
  FUN_140ac7ce0(local_198);
  return;
}



// FUNCTION 1412f4730 execBPC_GetPanel body=44 status=ok
// SIG undefined execBPC_GetPanel(void)

void UNewGridUI::execBPC_GetPanel(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = UGeometryCacheComponent::GetGeometryCache();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1412f4760 FUN_1412f4760 body=193 status=ok
// SIG undefined FUN_1412f4760(void)

void FUN_1412f4760(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int local_res10 [2];
  undefined8 local_res18 [2];
  
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
  uVar1 = FUN_140ad5e50(param_1,local_res18[0],local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1412f4830 FUN_1412f4830 body=192 status=ok
// SIG undefined FUN_1412f4830(void)

void FUN_1412f4830(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int local_res10 [2];
  undefined8 local_res18 [2];
  
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
  uVar1 = FUN_140ad6050(param_1,local_res18[0],local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1412f48f0 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140ad7ec0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1412f49b0 FUN_1412f49b0 body=194 status=ok
// SIG undefined FUN_1412f49b0(void)

void FUN_1412f49b0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
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
  FUN_140a377a0(param_1,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 1412f4a80 FUN_1412f4a80 body=431 status=ok
// SIG undefined FUN_1412f4a80(void)

void FUN_1412f4a80(undefined8 param_1,longlong param_2)

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
  FUN_140a69440(param_1,local_d8,local_res20,local_res10[0],&local_b8,puVar1);
  return;
}



// FUNCTION 1412f4c30 FUN_1412f4c30 body=431 status=ok
// SIG undefined FUN_1412f4c30(void)

void FUN_1412f4c30(undefined8 param_1,longlong param_2)

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
  FUN_140a37a70(param_1,local_d8,local_res20,local_res10[0],&local_b8,puVar1);
  return;
}



// FUNCTION 1412f4de0 FUN_1412f4de0 body=431 status=ok
// SIG undefined FUN_1412f4de0(void)

void FUN_1412f4de0(undefined8 param_1,longlong param_2)

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
  FUN_140a6a2b0(param_1,local_d8,local_res20,local_res10[0],&local_b8,puVar1);
  return;
}



// FUNCTION 1412f4fb0 FUN_1412f4fb0 body=493 status=ok
// SIG undefined FUN_1412f4fb0(void)

void FUN_1412f4fb0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined1 local_a8 [12];
  undefined4 local_9c;
  
  local_b8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  local_c0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_c8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
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
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140adf0c0(param_1,local_b8[0],local_c0,local_c8,local_res20[0],bVar2,puVar1);
  return;
}



// FUNCTION 1412f51a0 execOnProjectileOverlapEnd body=319 status=ok
// SIG undefined execOnProjectileOverlapEnd(void)

void AUGProjectile::execOnProjectileOverlapEnd(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
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
  FUN_140adf320(param_1,local_10,local_18,local_res20,local_res10[0]);
  return;
}



// FUNCTION 1412f52e0 FUN_1412f52e0 body=130 status=ok
// SIG undefined FUN_1412f52e0(void)

void FUN_1412f52e0(undefined8 param_1,longlong param_2)

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
  FUN_140a39740(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1412f5370 FUN_1412f5370 body=130 status=ok
// SIG undefined FUN_1412f5370(void)

void FUN_1412f5370(undefined8 param_1,longlong param_2)

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
  FUN_140ae3100(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1412f5400 FUN_1412f5400 body=130 status=ok
// SIG undefined FUN_1412f5400(void)

void FUN_1412f5400(undefined8 param_1,longlong param_2)

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
  SScrollBox::SetScrollType(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1412f5490 FUN_1412f5490 body=130 status=ok
// SIG undefined FUN_1412f5490(void)

void FUN_1412f5490(undefined8 param_1,longlong param_2)

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
  FUN_140a39b70(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1412f5520 FUN_1412f5520 body=194 status=ok
// SIG undefined FUN_1412f5520(void)

void FUN_1412f5520(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
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
  FUN_140a39b80(param_1,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 1412f55f0 FUN_1412f55f0 body=126 status=ok
// SIG undefined FUN_1412f55f0(void)

void FUN_1412f55f0(undefined8 param_1,longlong param_2)

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
  FUN_140a3b250(param_1,local_res10[0]);
  return;
}



// FUNCTION 1412f5670 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGNewsMenuItem::GetPrivateStaticClass(void)

{
  if (DAT_14687b718 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ChallengeTrophyBaseComponent",&DAT_14687b718,FUN_140447710,
                  0x7e0,0x10000000,0,L"Engine",&LAB_1412f6d00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1423c80f0,&LAB_1412f9100,
                  &LAB_140447700,0);
  }
  return DAT_14687b718;
}



// FUNCTION 1412f5740 FUN_1412f5740 body=162 status=ok
// SIG undefined FUN_1412f5740(void)

longlong FUN_1412f5740(void)

{
  if (DAT_14687b978 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CosmeticDamageableActor",&DAT_14687b978,FUN_140447710,0x460,
                  0x10000000,0,L"Engine",&LAB_1412f6ce0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14687b978;
}



// FUNCTION 1412f57f0 FUN_1412f57f0 body=47 status=ok
// SIG undefined FUN_1412f57f0(void)

longlong FUN_1412f57f0(void)

{
  if (DAT_14687b970 == 0) {
    FUN_141786440(&DAT_14687b970,&PTR_FUN_1447b65c0);
  }
  return DAT_14687b970;
}



// FUNCTION 1412f5820 FUN_1412f5820 body=47 status=ok
// SIG undefined FUN_1412f5820(void)

longlong FUN_1412f5820(void)

{
  if (DAT_14687b968 == 0) {
    FUN_141786a30(&DAT_14687b968,&PTR_FUN_1462c5c20);
  }
  return DAT_14687b968;
}



// FUNCTION 1412f5850 FUN_1412f5850 body=53 status=ok
// SIG undefined FUN_1412f5850(void)

void FUN_1412f5850(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_1447c3908;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412f58a0 FUN_1412f58a0 body=53 status=ok
// SIG undefined FUN_1412f58a0(void)

void FUN_1412f58a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe8;
    *puVar1 = &PTR_FUN_1447c1418;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412f58e0 FUN_1412f58e0 body=162 status=ok
// SIG undefined FUN_1412f58e0(void)

longlong FUN_1412f58e0(void)

{
  if (DAT_14687b740 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CharacterEchoData",&DAT_14687b740,FUN_140447710,0xa8,
                  0x10000000,0,L"Engine",FUN_1412f6d20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405fb680,&LAB_140447700,0);
  }
  return DAT_14687b740;
}



// FUNCTION 1412f5990 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong AUIWSRiver::StaticClass(void)

{
  if (DAT_14687b7f0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CheckpointTravelStationObject",&DAT_14687b7f0,FUN_140447710,
                  0x5d0,0x10000000,0,L"Engine",&LAB_1412f6be0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  AXUsableActorScriptedBotEncounter::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687b7f0;
}



// FUNCTION 1412f5a50 FUN_1412f5a50 body=53 status=ok
// SIG undefined FUN_1412f5a50(void)

void FUN_1412f5a50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &PTR_FUN_1447c2800;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412f5a90 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UXSkinAnimationProfile::GetPrivateStaticClass(void)

{
  if (DAT_14687b790 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CharacterItemPoolExpansionData",&DAT_14687b790,FUN_140447710,
                  0x80,0x10000000,0,L"Engine",InternalConstructor<ULocalizedOverlays>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14687b790;
}



// FUNCTION 1412f5b40 FUN_1412f5b40 body=162 status=ok
// SIG undefined FUN_1412f5b40(void)

longlong FUN_1412f5b40(void)

{
  if (DAT_14687b838 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CollisionDamageComponent",&DAT_14687b838,FUN_1412f91a0,0x2c8,
                  0x10000000,0,L"Engine",&LAB_1412f6e10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_14687b838;
}



// FUNCTION 1412f5c00 FUN_1412f5c00 body=47 status=ok
// SIG undefined FUN_1412f5c00(void)

longlong FUN_1412f5c00(void)

{
  if (DAT_14687b830 == 0) {
    FUN_141786440(&DAT_14687b830,&PTR_FUN_1447b95c0);
  }
  return DAT_14687b830;
}



// FUNCTION 1412f5c30 FUN_1412f5c30 body=47 status=ok
// SIG undefined FUN_1412f5c30(void)

longlong FUN_1412f5c30(void)

{
  if (DAT_14687b820 == 0) {
    FUN_141786a30(&DAT_14687b820,&PTR_FUN_1462c3e20);
  }
  return DAT_14687b820;
}



// FUNCTION 1412f5c60 FUN_1412f5c60 body=47 status=ok
// SIG undefined FUN_1412f5c60(void)

longlong FUN_1412f5c60(void)

{
  if (DAT_14687b828 == 0) {
    FUN_141786a30(&DAT_14687b828,&PTR_FUN_1462c3fe0);
  }
  return DAT_14687b828;
}



// FUNCTION 1412f5c90 FUN_1412f5c90 body=162 status=ok
// SIG undefined FUN_1412f5c90(void)

longlong FUN_1412f5c90(void)

{
  if (DAT_14687b750 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CharacterForcedSlidingVolume",&DAT_14687b750,FUN_140447710,
                  0x490,0x10000000,0,L"Engine",FUN_1412f6bb0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407fbfa0,&LAB_140447700,0);
  }
  return DAT_14687b750;
}



// FUNCTION 1412f5d50 FUN_1412f5d50 body=53 status=ok
// SIG undefined FUN_1412f5d50(void)

void FUN_1412f5d50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1447c2288;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412f5db0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AItem::GetPrivateStaticClass(void)

{
  if (DAT_14687b8c0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CommandRing",&DAT_14687b8c0,FUN_1412f9140,0x4b0,0x10000000,0,
                  L"Engine",&LAB_1412f6c00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14687b8c0;
}



// FUNCTION 1412f5e60 FUN_1412f5e60 body=53 status=ok
// SIG undefined FUN_1412f5e60(void)

void FUN_1412f5e60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_1447c23a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1412f5ea0 FUN_1412f5ea0 body=47 status=ok
// SIG undefined FUN_1412f5ea0(void)

longlong FUN_1412f5ea0(void)

{
  if (DAT_14687b840 == 0) {
    FUN_141786a30(&DAT_14687b840,&PTR_FUN_1462c4550);
  }
  return DAT_14687b840;
}



// FUNCTION 1412f5ed0 FUN_1412f5ed0 body=47 status=ok
// SIG undefined FUN_1412f5ed0(void)

longlong FUN_1412f5ed0(void)

{
  if (DAT_14687b8b8 == 0) {
    FUN_141786440(&DAT_14687b8b8,&PTR_GetPrivateStaticClass_1447bd2d0);
  }
  return DAT_14687b8b8;
}



// FUNCTION 1412f5f00 FUN_1412f5f00 body=47 status=ok
// SIG undefined FUN_1412f5f00(void)

longlong FUN_1412f5f00(void)

{
  if (DAT_14687b848 == 0) {
    FUN_141786a30(&DAT_14687b848,&PTR_FUN_1462c45d0);
  }
  return DAT_14687b848;
}



// FUNCTION 1412f5f30 FUN_1412f5f30 body=47 status=ok
// SIG undefined FUN_1412f5f30(void)

longlong FUN_1412f5f30(void)

{
  if (DAT_14687b878 == 0) {
    FUN_141786a30(&DAT_14687b878,&PTR_FUN_1462c4920);
  }
  return DAT_14687b878;
}



// FUNCTION 1412f5f60 FUN_1412f5f60 body=47 status=ok
// SIG undefined FUN_1412f5f60(void)

longlong FUN_1412f5f60(void)

{
  if (DAT_14687b880 == 0) {
    FUN_141786a30(&DAT_14687b880,&PTR_FUN_1462c4ae0);
  }
  return DAT_14687b880;
}



// FUNCTION 1412f5f90 FUN_1412f5f90 body=47 status=ok
// SIG undefined FUN_1412f5f90(void)

longlong FUN_1412f5f90(void)

{
  if (DAT_14687b888 == 0) {
    FUN_141786a30(&DAT_14687b888,&PTR_FUN_1462c4ba0);
  }
  return DAT_14687b888;
}



// FUNCTION 1412f5fc0 FUN_1412f5fc0 body=47 status=ok
// SIG undefined FUN_1412f5fc0(void)

longlong FUN_1412f5fc0(void)

{
  if (DAT_14687b890 == 0) {
    FUN_141786a30(&DAT_14687b890,&PTR_FUN_1462c4c20);
  }
  return DAT_14687b890;
}



// FUNCTION 1412f5ff0 FUN_1412f5ff0 body=47 status=ok
// SIG undefined FUN_1412f5ff0(void)

longlong FUN_1412f5ff0(void)

{
  if (DAT_14687b898 == 0) {
    FUN_141786a30(&DAT_14687b898,&PTR_FUN_1462c4cb0);
  }
  return DAT_14687b898;
}



// FUNCTION 1412f6020 FUN_1412f6020 body=47 status=ok
// SIG undefined FUN_1412f6020(void)

longlong FUN_1412f6020(void)

{
  if (DAT_14687b8a0 == 0) {
    FUN_141786a30(&DAT_14687b8a0,&PTR_FUN_1462c4cf0);
  }
  return DAT_14687b8a0;
}



// FUNCTION 1412f6050 FUN_1412f6050 body=47 status=ok
// SIG undefined FUN_1412f6050(void)

longlong FUN_1412f6050(void)

{
  if (DAT_14687b8a8 == 0) {
    FUN_141786a30(&DAT_14687b8a8,&PTR_FUN_1462c4d80);
  }
  return DAT_14687b8a8;
}



// FUNCTION 1412f6080 FUN_1412f6080 body=47 status=ok
// SIG undefined FUN_1412f6080(void)

longlong FUN_1412f6080(void)

{
  if (DAT_14687b8b0 == 0) {
    FUN_141786a30(&DAT_14687b8b0,&PTR_FUN_1462c4f00);
  }
  return DAT_14687b8b0;
}



// FUNCTION 1412f60b0 FUN_1412f60b0 body=53 status=ok
// SIG undefined FUN_1412f60b0(void)

void FUN_1412f60b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1447c2a00;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412f60f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAESHelper::GetPrivateStaticClass(void)

{
  if (DAT_14687b770 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CharacterGroundSlamData",&DAT_14687b770,FUN_140447710,0x48,
                  0x10000000,0,L"Engine",&LAB_1412f6d80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14687b770;
}



// FUNCTION 1412f61b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGTutorialStepBotDestroy::GetPrivateStaticClass(void)

{
  if (DAT_14687b8e0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CommandRing_Operative_GRMLN",&DAT_14687b8e0,
                  StaticRegisterNativesAGTutorialStepBotDestroy,0x538,0x10000000,0,L"Engine",
                  &LAB_1412f6c10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  AItem::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687b8e0;
}



// FUNCTION 1412f6260 FUN_1412f6260 body=47 status=ok
// SIG undefined FUN_1412f6260(void)

longlong FUN_1412f6260(void)

{
  if (DAT_14687b8d8 == 0) {
    FUN_141786440(&DAT_14687b8d8,&PTR_GetPrivateStaticClass_1447bd610);
  }
  return DAT_14687b8d8;
}



// FUNCTION 1412f6290 FUN_1412f6290 body=47 status=ok
// SIG undefined FUN_1412f6290(void)

longlong FUN_1412f6290(void)

{
  if (DAT_14687b8c8 == 0) {
    FUN_141786a30(&DAT_14687b8c8,&PTR_FUN_1462c5240);
  }
  return DAT_14687b8c8;
}



// FUNCTION 1412f62c0 FUN_1412f62c0 body=47 status=ok
// SIG undefined FUN_1412f62c0(void)

longlong FUN_1412f62c0(void)

{
  if (DAT_14687b8d0 == 0) {
    FUN_141786a30(&DAT_14687b8d0,&PTR_FUN_1462c5280);
  }
  return DAT_14687b8d0;
}



// FUNCTION 1412f6300 FUN_1412f6300 body=162 status=ok
// SIG undefined FUN_1412f6300(void)

longlong FUN_1412f6300(void)

{
  if (DAT_14687b8f0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"Condition_ShouldPlaySpecialEchoCartridgeInsert",
                  &DAT_14687b8f0,FUN_140447710,0x90,0x10000000,0,L"Engine",FUN_1412f6e30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_14687b8f0;
}



// FUNCTION 1412f63b0 FUN_1412f63b0 body=53 status=ok
// SIG undefined FUN_1412f63b0(void)

void FUN_1412f63b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1447c1ef0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412f6400 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGShrineUsable::GetPrivateStaticClass(void)

{
  if (DAT_14687b910 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ConditionalFlavorTextIO",&DAT_14687b910,FUN_140447710,0x690,
                  0x10000000,0,L"Engine",FUN_1412f6c20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  ALandscapeStreamingProxy::StaticClass,&LAB_140447700,0);
  }
  return DAT_14687b910;
}



// FUNCTION 1412f64b0 FUN_1412f64b0 body=162 status=ok
// SIG undefined FUN_1412f64b0(void)

longlong FUN_1412f64b0(void)

{
  if (DAT_14687b7e0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CharacterSlidingData",&DAT_14687b7e0,FUN_140447710,0x1090,
                  0x10000000,0,L"Engine",&LAB_1412f6df0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14687b7e0;
}



// FUNCTION 1412f6570 FUN_1412f6570 body=53 status=ok
// SIG undefined FUN_1412f6570(void)

void FUN_1412f6570(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe8;
    *puVar1 = &PTR_FUN_1447c24b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412f65b0 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x150;
    *puVar1 = &PTR_FUN_1447c26e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1412f65f0 FUN_1412f65f0 body=53 status=ok
// SIG undefined FUN_1412f65f0(void)

void FUN_1412f65f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1447c25d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412f6630 FUN_1412f6630 body=162 status=ok
// SIG undefined FUN_1412f6630(void)

longlong FUN_1412f6630(void)

{
  if (DAT_14687b6f8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CatchARideProxy",&DAT_14687b6f8,FUN_1412f9110,0x4f0,
                  0x10000008,0,L"Engine",&LAB_1412f6b90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1412d7880
                  ,&LAB_140447700,0);
  }
  return DAT_14687b6f8;
}



// FUNCTION 1412f66e0 FUN_1412f66e0 body=47 status=ok
// SIG undefined FUN_1412f66e0(void)

longlong FUN_1412f66e0(void)

{
  if (DAT_14687b6f0 == 0) {
    FUN_141786440(&DAT_14687b6f0,&PTR_FUN_1447c06b0);
  }
  return DAT_14687b6f0;
}



// FUNCTION 1412f6710 FUN_1412f6710 body=47 status=ok
// SIG undefined FUN_1412f6710(void)

longlong FUN_1412f6710(void)

{
  if (DAT_14687b6a8 == 0) {
    FUN_141786a30(&DAT_14687b6a8,&PTR_FUN_1462c1c10);
  }
  return DAT_14687b6a8;
}



// FUNCTION 1412f6740 FUN_1412f6740 body=47 status=ok
// SIG undefined FUN_1412f6740(void)

longlong FUN_1412f6740(void)

{
  if (DAT_14687b6b0 == 0) {
    FUN_141786a30(&DAT_14687b6b0,&PTR_FUN_1462c1c50);
  }
  return DAT_14687b6b0;
}



// FUNCTION 1412f6770 FUN_1412f6770 body=47 status=ok
// SIG undefined FUN_1412f6770(void)

longlong FUN_1412f6770(void)

{
  if (DAT_14687b6b8 == 0) {
    FUN_141786a30(&DAT_14687b6b8,&PTR_FUN_1462c1c90);
  }
  return DAT_14687b6b8;
}



// FUNCTION 1412f67a0 FUN_1412f67a0 body=47 status=ok
// SIG undefined FUN_1412f67a0(void)

longlong FUN_1412f67a0(void)

{
  if (DAT_14687b6c0 == 0) {
    FUN_141786a30(&DAT_14687b6c0,&PTR_FUN_1462c1cd0);
  }
  return DAT_14687b6c0;
}



// FUNCTION 1412f67d0 FUN_1412f67d0 body=47 status=ok
// SIG undefined FUN_1412f67d0(void)

longlong FUN_1412f67d0(void)

{
  if (DAT_14687b6c8 == 0) {
    FUN_141786a30(&DAT_14687b6c8,&PTR_FUN_1462c1d10);
  }
  return DAT_14687b6c8;
}



// FUNCTION 1412f6800 FUN_1412f6800 body=47 status=ok
// SIG undefined FUN_1412f6800(void)

longlong FUN_1412f6800(void)

{
  if (DAT_14687b6d0 == 0) {
    FUN_141786a30(&DAT_14687b6d0,&PTR_FUN_1462c1d50);
  }
  return DAT_14687b6d0;
}



// FUNCTION 1412f6830 FUN_1412f6830 body=47 status=ok
// SIG undefined FUN_1412f6830(void)

longlong FUN_1412f6830(void)

{
  if (DAT_14687b6d8 == 0) {
    FUN_141786a30(&DAT_14687b6d8,&PTR_FUN_1462c1d90);
  }
  return DAT_14687b6d8;
}



// FUNCTION 1412f6860 FUN_1412f6860 body=47 status=ok
// SIG undefined FUN_1412f6860(void)

longlong FUN_1412f6860(void)

{
  if (DAT_14687b6e0 == 0) {
    FUN_141786a30(&DAT_14687b6e0,&PTR_FUN_1462c1dd0);
  }
  return DAT_14687b6e0;
}



// FUNCTION 1412f6890 FUN_1412f6890 body=47 status=ok
// SIG undefined FUN_1412f6890(void)

longlong FUN_1412f6890(void)

{
  if (DAT_14687b6e8 == 0) {
    FUN_141786a30(&DAT_14687b6e8,&PTR_FUN_1462c1e10);
  }
  return DAT_14687b6e8;
}



// FUNCTION 1412f68c0 FUN_1412f68c0 body=53 status=ok
// SIG undefined FUN_1412f68c0(void)

void FUN_1412f68c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1447c37f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412f6920 FUN_1412f6920 body=162 status=ok
// SIG undefined FUN_1412f6920(void)

longlong FUN_1412f6920(void)

{
  if (DAT_14687b920 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ConsoleCommandSetterIntComponent",&DAT_14687b920,
                  FUN_140447710,0x2f0,0x10000000,0,L"Engine",&LAB_1412f6ea0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405bc4a0,&LAB_140447700,0);
  }
  return DAT_14687b920;
}



// FUNCTION 1412f69f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameplayTagAssetInterface::GetPrivateStaticClass(void)

{
  if (DAT_14687b930 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CorpseableInterface",&DAT_14687b930,FUN_140447710,0x28,
                  0x10004001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_14687b930;
}



// FUNCTION 1412f6ab0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPlatformInterfaceBase::GetPrivateStaticClass(void)

{
  if (DAT_14687b950 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CorpseManager",&DAT_14687b950,FUN_140447710,0x38,0x10000008,0
                  ,L"Game",&LAB_1412f6eb0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_14687b950;
}



// FUNCTION 1412f6b50 FUN_1412f6b50 body=53 status=ok
// SIG undefined FUN_1412f6b50(void)

void FUN_1412f6b50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1447c1300;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412f6bb0 FUN_1412f6bb0 body=41 status=ok
// SIG undefined FUN_1412f6bb0(void)

void FUN_1412f6bb0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1428c1a80(puVar1,param_1);
    *puVar1 = &PTR_FUN_1447c17d0;
  }
  return;
}



// FUNCTION 1412f6c20 FUN_1412f6c20 body=190 status=ok
// SIG undefined FUN_1412f6c20(void)

void FUN_1412f6c20(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140ac4d50(puVar1,param_1);
    *puVar1 = &PTR_FUN_1447c2e48;
    puVar1[0x8b] = &PTR_LAB_1447c35f0;
    puVar1[0x8c] = &PTR_LAB_1447c3650;
    puVar1[0x8d] = &PTR_LAB_1447c3678;
    puVar1[0x8e] = &PTR_LAB_1447c3690;
    puVar1[0x8f] = &PTR_LAB_1447c36b8;
    puVar1[0x90] = &PTR_LAB_1447c36c8;
    puVar1[0x92] = &PTR_LAB_1447c3708;
    puVar1[0x93] = &PTR_LAB_1447c3720;
    puVar1[0xcc] = 0;
    puVar1[0xcd] = 0;
    FText::FText(puVar1 + 0xce);
    return;
  }
  return;
}



// FUNCTION 1412f6d20 FUN_1412f6d20 body=96 status=ok
// SIG undefined FUN_1412f6d20(void)

void FUN_1412f6d20(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    puVar1[6] = 0;
    puVar1[7] = 0;
    *puVar1 = &PTR_FUN_1447c1530;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x84) = 0;
    puVar1[0x12] = 0;
    *(undefined4 *)(puVar1 + 0x13) = 0;
  }
  return;
}



// FUNCTION 1412f6da0 InternalConstructor<ULocalizedOverlays> body=76 status=ok
// SIG undefined InternalConstructor<ULocalizedOverlays>(void)

void InternalConstructor<ULocalizedOverlays>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1447c2008;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
  }
  return;
}



// FUNCTION 1412f6e30 FUN_1412f6e30 body=100 status=ok
// SIG undefined FUN_1412f6e30(void)

void FUN_1412f6e30(longlong *param_1)

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
    *puVar1 = &PTR__scalar_deleting_destructor__1447c2bc0;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
    *(undefined4 *)(puVar1 + 0x11) = 0x3c23d70a;
  }
  return;
}



// FUNCTION 1412f6ed0 TFunction<void___cdecl(void)> body=112 status=ok
// SIG undefined TFunction<void___cdecl(void)>(void)

undefined8 *
TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_2 + 8) != 0) {
    puVar2 = (undefined8 *)param_2[6];
    if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
      puVar2 = param_2 + 2;
    }
    if (puVar2 != (undefined8 *)0x0) {
      plVar1 = (longlong *)(**(code **)*puVar2)(puVar2,param_1 + 2);
      (**(code **)(*plVar1 + 8))(plVar1);
      *param_1 = *param_2;
      return param_1;
    }
  }
  *param_1 = AK::MemoryMgr::StartProfileThreadUsage;
  return param_1;
}



// FUNCTION 1412f6f40 FUN_1412f6f40 body=412 status=ok
// SIG undefined FUN_1412f6f40(void)

undefined8 * FUN_1412f6f40(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  byte bVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FLiveLinkFrame,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar2,(longlong)iVar1 * 0x90);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[2],pvVar2,(longlong)iVar1 * 0x18);
  }
  param_1[4] = param_2[4];
  *(byte *)(param_1 + 5) =
       *(byte *)(param_1 + 5) ^ (*(byte *)(param_1 + 5) ^ *(byte *)(param_2 + 5)) & 1;
  bVar3 = (*(byte *)(param_1 + 5) ^ *(byte *)(param_2 + 5)) & 2 ^ *(byte *)(param_1 + 5);
  *(byte *)(param_1 + 5) = bVar3;
  bVar3 = (bVar3 ^ *(byte *)(param_2 + 5)) & 4 ^ bVar3;
  *(byte *)(param_1 + 5) = bVar3;
  bVar3 = (bVar3 ^ *(byte *)(param_2 + 5)) & 8 ^ bVar3;
  *(byte *)(param_1 + 5) = bVar3;
  bVar3 = (bVar3 ^ *(byte *)(param_2 + 5)) & 0x10 ^ bVar3;
  *(byte *)(param_1 + 5) = bVar3;
  bVar3 = (bVar3 ^ *(byte *)(param_2 + 5)) & 0x20 ^ bVar3;
  *(byte *)(param_1 + 5) = bVar3;
  bVar3 = (bVar3 ^ *(byte *)(param_2 + 5)) & 0x40 ^ bVar3;
  *(byte *)(param_1 + 5) = bVar3;
  *(byte *)(param_1 + 5) = (bVar3 ^ *(byte *)(param_2 + 5)) & 0x7f ^ *(byte *)(param_2 + 5);
  *(byte *)((longlong)param_1 + 0x29) =
       *(byte *)((longlong)param_1 + 0x29) ^
       (*(byte *)((longlong)param_2 + 0x29) ^ *(byte *)((longlong)param_1 + 0x29)) & 1;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(param_1 + 6,param_2 + 6);
  param_1[0x10] = param_2[0x10];
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined8 *)((longlong)param_1 + 0x8c) = *(undefined8 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  param_1[0x13] = param_2[0x13];
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
  return param_1;
}



// FUNCTION 1412f70e0 FUN_1412f70e0 body=448 status=ok
// SIG undefined FUN_1412f70e0(void)

void FUN_1412f70e0(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
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
  local_58 = 0;
  uStack_54 = 1;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_1412f71a1;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
LAB_1412f71a1:
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
      lVar5 = (longlong)iStack_1c * 0x30 + *param_1;
      TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
      ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(lVar5 + 0x18);
      TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
      ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(lVar5 + 8);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1412f72a0 ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=396 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
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
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_1412f7361;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
LAB_1412f7361:
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
      if (*(longlong *)((longlong)iStack_1c * 0x20 + *param_1) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412f7430 FUN_1412f7430 body=548 status=ok
// SIG undefined FUN_1412f7430(void)

longlong * FUN_1412f7430(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  uint uVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar4 = (longlong *)(*param_1 + 0x48);
    do {
      FUN_1409c5510(plVar4 + 0xb);
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 0x2a;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = (int)param_2[1];
  lVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar6;
  if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1412f8fd0(param_1,iVar6);
    puVar8 = (undefined8 *)*param_1;
    if (iVar6 != 0) {
      puVar7 = (undefined1 *)(lVar2 + 0x11);
      puVar5 = (undefined4 *)((longlong)puVar8 + 0x54);
      do {
        *puVar8 = *(undefined8 *)(puVar7 + -0x11);
        *(undefined1 *)(puVar5 + -0x11) = puVar7[-1];
        *(undefined1 *)((longlong)puVar5 + -0x43) = *puVar7;
        *(undefined8 *)(puVar5 + -0xf) = *(undefined8 *)(puVar7 + 7);
        *(undefined1 *)(puVar5 + -0xd) = puVar7[0xf];
        *(undefined8 *)(puVar5 + -0xb) = *(undefined8 *)(puVar7 + 0x17);
        *(undefined8 *)(puVar5 + -9) = *(undefined8 *)(puVar7 + 0x1f);
        puVar5[-7] = puVar5[-7] ^ (puVar5[-7] ^ *(uint *)(puVar7 + 0x27)) & 1;
        uVar3 = (puVar5[-7] ^ *(uint *)(puVar7 + 0x27)) & 2 ^ puVar5[-7];
        puVar5[-7] = uVar3;
        uVar3 = (uVar3 ^ *(uint *)(puVar7 + 0x27)) & 4 ^ uVar3;
        puVar5[-7] = uVar3;
        puVar5[-7] = (uVar3 ^ *(uint *)(puVar7 + 0x27)) & 8 ^ uVar3;
        *(undefined8 *)(puVar5 + -5) = *(undefined8 *)(puVar7 + 0x2f);
        *(undefined8 *)(puVar5 + -3) = 0;
        iVar1 = *(int *)(puVar7 + 0x3f);
        _Src = *(void **)(puVar7 + 0x37);
        puVar5[-1] = iVar1;
        if (iVar1 == 0) {
          *puVar5 = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar5 + -3,iVar1,0)
          ;
          _guard_xfg_dispatch_icall_nop(*(void **)(puVar5 + -3),_Src,(longlong)iVar1 << 3);
        }
        puVar5[1] = *(undefined4 *)(puVar7 + 0x47);
        puVar5[2] = *(undefined4 *)(puVar7 + 0x4b);
        puVar5[3] = *(undefined4 *)(puVar7 + 0x4f);
        puVar5[4] = *(undefined4 *)(puVar7 + 0x53);
        puVar5[5] = *(undefined4 *)(puVar7 + 0x57);
        *(undefined1 *)(puVar5 + 6) = puVar7[0x5b];
        puVar5[7] = *(undefined4 *)(puVar7 + 0x5f);
        puVar5[8] = *(undefined4 *)(puVar7 + 99);
        puVar5[9] = *(undefined4 *)(puVar7 + 0x67);
        *(undefined8 *)(puVar5 + 0xb) = *(undefined8 *)(puVar7 + 0x6f);
        *(undefined1 *)(puVar5 + 0xd) = puVar7[0x77];
        *(undefined8 *)(puVar5 + 0xf) = *(undefined8 *)(puVar7 + 0x7f);
        *(undefined8 *)(puVar5 + 0x11) = *(undefined8 *)(puVar7 + 0x87);
        FUN_1412f6f40(puVar5 + 0x13,puVar7 + 0x8f);
        puVar8 = puVar8 + 0x2a;
        puVar5 = puVar5 + 0x54;
        puVar7 = puVar7 + 0x150;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return param_1;
}



// FUNCTION 1412f7660 FUN_1412f7660 body=644 status=ok
// SIG undefined FUN_1412f7660(void)

longlong * FUN_1412f7660(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 local_50 [24];
  
  if (param_1 != param_2) {
    iVar11 = (int)param_1[1];
    if (iVar11 != 0) {
      plVar7 = (longlong *)(*param_1 + 0x78);
      do {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 0x11;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    iVar11 = (int)param_2[1];
    lVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar11;
    if ((iVar11 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1406f4a40(param_1,iVar11);
      puVar13 = (undefined8 *)*param_1;
      if (iVar11 != 0) {
        puVar12 = (undefined8 *)(lVar2 + 8);
        puVar8 = (undefined4 *)((longlong)puVar13 + 0x84);
        do {
          *puVar13 = puVar12[-1];
          uVar6 = puVar12[1];
          *(undefined8 *)(puVar8 + -0x1f) = *puVar12;
          *(undefined8 *)(puVar8 + -0x1d) = uVar6;
          uVar6 = puVar12[3];
          *(undefined8 *)(puVar8 + -0x1b) = puVar12[2];
          *(undefined8 *)(puVar8 + -0x19) = uVar6;
          uVar6 = puVar12[5];
          *(undefined8 *)(puVar8 + -0x17) = puVar12[4];
          *(undefined8 *)(puVar8 + -0x15) = uVar6;
          *(undefined8 *)(puVar8 + -0x13) = puVar12[6];
          uVar6 = puVar12[8];
          *(undefined8 *)(puVar8 + -0x11) = puVar12[7];
          *(undefined8 *)(puVar8 + -0xf) = uVar6;
          uVar6 = puVar12[10];
          *(undefined8 *)(puVar8 + -0xd) = puVar12[9];
          *(undefined8 *)(puVar8 + -0xb) = uVar6;
          uVar3 = *(undefined4 *)((longlong)puVar12 + 0x5c);
          uVar4 = *(undefined4 *)(puVar12 + 0xc);
          uVar5 = *(undefined4 *)((longlong)puVar12 + 100);
          puVar8[-9] = *(undefined4 *)(puVar12 + 0xb);
          puVar8[-8] = uVar3;
          puVar8[-7] = uVar4;
          puVar8[-6] = uVar5;
          *(undefined8 *)(puVar8 + -5) = puVar12[0xd];
          *(undefined8 *)(puVar8 + -3) = 0;
          iVar1 = *(int *)(puVar12 + 0xf);
          _Src = (void *)puVar12[0xe];
          puVar8[-1] = iVar1;
          if (iVar1 == 0) {
            *puVar8 = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (puVar8 + -3,iVar1,0);
            _guard_xfg_dispatch_icall_nop(*(void **)(puVar8 + -3),_Src,(longlong)iVar1 << 3);
          }
          puVar13 = puVar13 + 0x11;
          puVar8 = puVar8 + 0x22;
          puVar12 = puVar12 + 0x11;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
  }
  plVar7 = param_1 + 2;
  if (plVar7 != param_2 + 2) {
    iVar11 = (int)param_1[3];
    if (iVar11 != 0) {
      plVar9 = (longlong *)(*plVar7 + 0x18);
      do {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 5;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    iVar11 = (int)param_2[3];
    lVar2 = param_2[2];
    *(int *)(param_1 + 3) = iVar11;
    if ((iVar11 == 0) && (*(int *)((longlong)param_1 + 0x1c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(plVar7,iVar11);
      puVar8 = (undefined4 *)*plVar7;
      if (iVar11 != 0) {
        puVar13 = (undefined8 *)(puVar8 + 8);
        puVar10 = (undefined4 *)(lVar2 + 4);
        do {
          puVar13[-1] = 0;
          *puVar13 = 0;
          *puVar8 = 0xffffffff;
          *(undefined4 *)((longlong)puVar13 + -0x1c) = 0;
          puVar13[-2] = 0;
          *(undefined4 *)puVar13 = 0;
          if (0x7fffffff < *(uint *)((longlong)puVar13 + 4)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar13 + -1,0);
          }
          if ((undefined2 *)puVar13[-1] != (undefined2 *)0x0) {
            *(undefined2 *)puVar13[-1] = 0;
          }
          *(undefined4 *)(puVar13 + -3) = 0;
          *puVar8 = puVar10[-1];
          *(undefined4 *)((longlong)puVar13 + -0x1c) = *puVar10;
          *(undefined4 *)(puVar13 + -3) = puVar10[1];
          FString::FString(local_50,puVar10 + 5);
          FSoftObjectPath::operator=(puVar13 + -2);
          puVar8 = puVar8 + 10;
          puVar13 = puVar13 + 5;
          puVar10 = puVar10 + 10;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
  }
  return param_1;
}



// FUNCTION 1412f78f0 FUN_1412f78f0 body=815 status=ok
// SIG undefined FUN_1412f78f0(void)

undefined1 * FUN_1412f78f0(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 local_50 [24];
  
  plVar1 = (longlong *)(param_1 + 8);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  if (plVar1 != (longlong *)(param_2 + 8)) {
    iVar6 = *(int *)(param_1 + 0x10);
    if (iVar6 != 0) {
      plVar4 = (longlong *)(*plVar1 + 0x20);
      do {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 7;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = *(int *)(param_2 + 0x10);
    lVar7 = *(longlong *)(param_2 + 8);
    *(int *)(param_1 + 0x10) = iVar6;
    if ((iVar6 == 0) && (*(int *)(param_1 + 0x14) == 0)) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    else {
      TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(plVar1,iVar6);
      puVar9 = (undefined4 *)*plVar1;
      if (iVar6 != 0) {
        puVar5 = (undefined8 *)(puVar9 + 10);
        puVar8 = (undefined4 *)(lVar7 + 0xc);
        do {
          *puVar9 = puVar8[-3];
          puVar5[-1] = 0;
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + -4) = 0xffffffff;
          *(undefined4 *)((longlong)puVar5 + -0x1c) = 0;
          puVar5[-2] = 0;
          *(undefined4 *)puVar5 = 0;
          if (0x7fffffff < *(uint *)((longlong)puVar5 + 4)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar5 + -1,0);
          }
          if ((undefined2 *)puVar5[-1] != (undefined2 *)0x0) {
            *(undefined2 *)puVar5[-1] = 0;
          }
          *(undefined4 *)(puVar5 + -3) = 0;
          *(undefined4 *)(puVar5 + -4) = puVar8[-1];
          *(undefined4 *)((longlong)puVar5 + -0x1c) = *puVar8;
          *(undefined4 *)(puVar5 + -3) = puVar8[1];
          FString::FString(local_50,puVar8 + 5);
          FSoftObjectPath::operator=(puVar5 + -2);
          puVar9 = puVar9 + 0xe;
          *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar8 + 9);
          puVar8 = puVar8 + 0xe;
          puVar5 = puVar5 + 7;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  FUN_14099b910(param_1 + 0x18,param_2 + 0x18);
  plVar1 = (longlong *)(param_1 + 0x60);
  if (plVar1 != (longlong *)(param_2 + 0x60)) {
    plVar4 = (longlong *)*plVar1;
    for (iVar6 = *(int *)(param_1 + 0x68); iVar6 != 0; iVar6 = iVar6 + -1) {
      if (plVar4[0xc] != 0) {
        FMemory::Free();
      }
      if (plVar4[10] != 0) {
        FMemory::Free();
      }
      if (plVar4[8] != 0) {
        FMemory::Free();
      }
      if (plVar4[6] != 0) {
        FMemory::Free();
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 0x10;
    }
    iVar6 = *(int *)(param_2 + 0x68);
    lVar7 = *(longlong *)(param_2 + 0x60);
    *(int *)(param_1 + 0x68) = iVar6;
    if ((iVar6 == 0) && (*(int *)(param_1 + 0x6c) == 0)) {
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    else {
      TArray<FModuleDescriptor,FDefaultAllocator>::ResizeForCopy(plVar1,iVar6);
      puVar5 = (undefined8 *)*plVar1;
      if (iVar6 != 0) {
        lVar7 = lVar7 + 0x10;
        do {
          *puVar5 = 0;
          iVar3 = *(int *)(lVar7 + -8);
          _Src = *(void **)(lVar7 + -0x10);
          *(int *)(puVar5 + 1) = iVar3;
          if (iVar3 == 0) {
            *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          }
          else {
            TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar5,iVar3,0);
            _guard_xfg_dispatch_icall_nop((void *)*puVar5,_Src,(longlong)iVar3);
          }
          FUN_140a4f390(puVar5 + 2,lVar7);
          puVar2 = (undefined1 *)(lVar7 + 0x68);
          lVar7 = lVar7 + 0x80;
          *(undefined1 *)(puVar5 + 0xf) = *puVar2;
          puVar5 = puVar5 + 0x10;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  if (plVar1 != (longlong *)(param_2 + 0x70)) {
    iVar6 = *(int *)(param_1 + 0x78);
    if (iVar6 != 0) {
      plVar4 = (longlong *)(*plVar1 + 8);
      do {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 3;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = *(int *)(param_2 + 0x78);
    puVar9 = *(undefined4 **)(param_2 + 0x70);
    *(int *)(param_1 + 0x78) = iVar6;
    if ((iVar6 == 0) && (*(int *)(param_1 + 0x7c) == 0)) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
      return param_1;
    }
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar6);
    puVar8 = (undefined4 *)*plVar1;
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar9;
      FString::FString(puVar8 + 2,puVar9 + 2);
      puVar8 = puVar8 + 6;
      puVar9 = puVar9 + 6;
    }
  }
  return param_1;
}



// FUNCTION 1412f7c20 FUN_1412f7c20 body=526 status=ok
// SIG undefined FUN_1412f7c20(void)

undefined8 * FUN_1412f7c20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  byte bVar5;
  longlong *plVar6;
  undefined1 local_78 [80];
  
  if (param_1 != param_2) {
    iVar2 = *(int *)(param_2 + 1);
    pvVar3 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FLiveLinkFrame,FDefaultAllocator>::ResizeForCopy(param_1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar3,(longlong)iVar2 * 0x90);
    }
  }
  puVar1 = param_1 + 2;
  if (puVar1 != param_2 + 2) {
    iVar2 = *(int *)(param_2 + 3);
    pvVar3 = (void *)param_2[2];
    *(int *)(param_1 + 3) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x1c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 * 0x18);
    }
  }
  param_1[4] = param_2[4];
  *(byte *)(param_1 + 5) =
       *(byte *)(param_1 + 5) ^ (*(byte *)(param_1 + 5) ^ *(byte *)(param_2 + 5)) & 1;
  bVar5 = (*(byte *)(param_1 + 5) ^ *(byte *)(param_2 + 5)) & 2 ^ *(byte *)(param_1 + 5);
  *(byte *)(param_1 + 5) = bVar5;
  bVar5 = (bVar5 ^ *(byte *)(param_2 + 5)) & 4 ^ bVar5;
  *(byte *)(param_1 + 5) = bVar5;
  bVar5 = (bVar5 ^ *(byte *)(param_2 + 5)) & 8 ^ bVar5;
  *(byte *)(param_1 + 5) = bVar5;
  bVar5 = (bVar5 ^ *(byte *)(param_2 + 5)) & 0x10 ^ bVar5;
  *(byte *)(param_1 + 5) = bVar5;
  bVar5 = (bVar5 ^ *(byte *)(param_2 + 5)) & 0x20 ^ bVar5;
  *(byte *)(param_1 + 5) = bVar5;
  bVar5 = (bVar5 ^ *(byte *)(param_2 + 5)) & 0x40 ^ bVar5;
  *(byte *)(param_1 + 5) = bVar5;
  *(byte *)(param_1 + 5) = (bVar5 ^ *(byte *)(param_2 + 5)) & 0x7f ^ *(byte *)(param_2 + 5);
  *(byte *)((longlong)param_1 + 0x29) =
       *(byte *)((longlong)param_1 + 0x29) ^
       (*(byte *)((longlong)param_2 + 0x29) ^ *(byte *)((longlong)param_1 + 0x29)) & 1;
  lVar4 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,param_2 + 6);
  FGenericPlatformMemory::MemswapGreaterThan8(lVar4,param_1 + 6,0x50);
  if (*(int *)(lVar4 + 0x40) != 0) {
    plVar6 = *(longlong **)(lVar4 + 0x30);
    if (*(longlong **)(lVar4 + 0x30) == (longlong *)0x0) {
      plVar6 = (longlong *)(lVar4 + 0x10);
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (*(longlong *)(lVar4 + 0x30) != 0) {
    FMemory::Free();
  }
  param_1[0x10] = param_2[0x10];
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined8 *)((longlong)param_1 + 0x8c) = *(undefined8 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  param_1[0x13] = param_2[0x13];
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
  return param_1;
}



// FUNCTION 1412f7e90 FUN_1412f7e90 body=73 status=ok
// SIG undefined FUN_1412f7e90(void)

longlong FUN_1412f7e90(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x490);
  }
  return param_1;
}



// FUNCTION 1412f7ee0 FUN_1412f7ee0 body=147 status=ok
// SIG undefined FUN_1412f7ee0(void)

longlong FUN_1412f7ee0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x678);
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
  FUN_14099a700(param_1 + 0x660);
  FUN_140a51170(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x690);
  }
  return param_1;
}



// FUNCTION 1412f7f80 FUN_1412f7f80 body=162 status=ok
// SIG undefined FUN_1412f7f80(void)

longlong FUN_1412f7f80(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x50);
  iVar2 = *(int *)(param_1 + 0x38);
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x30);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1412f8030 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ULocalizedOverlays::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  FUN_1412f70e0(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1412f80e0 FUN_1412f80e0 body=88 status=ok
// SIG undefined FUN_1412f80e0(void)

void FUN_1412f80e0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x80);
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  return;
}



// FUNCTION 1412f8180 FUN_1412f8180 body=38 status=ok
// SIG undefined FUN_1412f8180(void)

void FUN_1412f8180(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x150);
  FUN_140a4f290(param_2);
  return;
}



// FUNCTION 1412f81b0 FUN_1412f81b0 body=207 status=ok
// SIG undefined FUN_1412f81b0(void)

void FUN_1412f81b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0x16] = 0;
  param_2[0x18] = 0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_2 + 0xd4) = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)((longlong)param_2 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x11) = 0;
  *(undefined4 *)((longlong)param_2 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x12) = 0;
  *(undefined4 *)((longlong)param_2 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x13) = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  _guard_xfg_dispatch_icall_nop(param_2 + 4,0,0x90);
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3f800000;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1b] = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  return;
}



// FUNCTION 1412f82c0 FUN_1412f82c0 body=194 status=ok
// SIG undefined FUN_1412f82c0(void)

undefined8 FUN_1412f82c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar2 = (undefined8 *)(param_3 + 0x18);
    do {
      FText::operator=(param_2,puVar2 + -3);
      puVar3 = (undefined8 *)(param_2 + 0x18);
      if (puVar3 != puVar2) {
        iVar1 = *(int *)(puVar2 + 1);
        _Src = (void *)*puVar2;
        *(int *)(param_2 + 0x20) = iVar1;
        if ((iVar1 == 0) && (*(int *)(param_2 + 0x24) == 0)) {
          *(undefined4 *)(param_2 + 0x24) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar3,iVar1);
          _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 << 3);
        }
      }
      puVar2 = puVar2 + 5;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x28;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412f8390 FUN_1412f8390 body=433 status=ok
// SIG undefined FUN_1412f8390(void)

undefined8 FUN_1412f8390(undefined8 param_1,byte *param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  byte *_Dst;
  byte *_Src;
  byte *pbVar5;
  
  if (param_4 != 0) {
    pbVar5 = (byte *)(param_3 + 0x28);
    do {
      pbVar1 = param_2 + 0x28;
      *param_2 = *param_2 ^ (*param_2 ^ pbVar5[-0x28]) & 1;
      bVar3 = (*param_2 ^ pbVar5[-0x28]) & 2 ^ *param_2;
      *param_2 = bVar3;
      *param_2 = (pbVar5[-0x28] ^ bVar3) & 4 ^ bVar3;
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(pbVar5 + -0x24);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(pbVar5 + -0x20);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(pbVar5 + -0x18);
      *(uint *)(param_2 + 0x18) =
           *(uint *)(param_2 + 0x18) ^ (*(uint *)(param_2 + 0x18) ^ *(uint *)(pbVar5 + -0x10)) & 1;
      uVar4 = (*(uint *)(pbVar5 + -0x10) ^ *(uint *)(param_2 + 0x18)) & 2 ^
              *(uint *)(param_2 + 0x18);
      *(uint *)(param_2 + 0x18) = uVar4;
      *(uint *)(param_2 + 0x18) = (*(uint *)(pbVar5 + -0x10) ^ uVar4) & 4 ^ uVar4;
      *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(pbVar5 + -0xc);
      param_2[0x20] = pbVar5[-8];
      if (pbVar1 != pbVar5) {
        iVar2 = *(int *)(pbVar5 + 0x88);
        _Src = *(byte **)(pbVar5 + 0x80);
        *(int *)(param_2 + 0xb0) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0xb4) == 0)) {
          param_2[0xb4] = 0;
          param_2[0xb5] = 0;
          param_2[0xb6] = 0;
          param_2[0xb7] = 0;
        }
        else {
          TArray<FGameplayTag,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::ResizeForCopy
                    (pbVar1,iVar2);
          if (_Src == (byte *)0x0) {
            _Src = pbVar5;
          }
          _Dst = *(byte **)(param_2 + 0xa8);
          if (*(byte **)(param_2 + 0xa8) == (byte *)0x0) {
            _Dst = pbVar1;
          }
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar2 << 3);
        }
      }
      *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)(pbVar5 + 0x90);
      *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(pbVar5 + 0x98);
      *(undefined8 *)(param_2 + 200) = *(undefined8 *)(pbVar5 + 0xa0);
      *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(pbVar5 + 0xa8);
      *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(pbVar5 + 0xb0);
      pbVar1 = pbVar5 + 0xb8;
      pbVar5 = pbVar5 + 0xe8;
      *(undefined8 *)(param_2 + 0xe0) = *(undefined8 *)pbVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xe8;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412f8550 FUN_1412f8550 body=71 status=ok
// SIG undefined FUN_1412f8550(void)

undefined1 FUN_1412f8550(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1412f7660(param_2 + param_3,param_3);
      param_3 = param_3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412f85a0 FUN_1412f85a0 body=71 status=ok
// SIG undefined FUN_1412f85a0(void)

undefined1 FUN_1412f85a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1412f78f0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412f85f0 FUN_1412f85f0 body=439 status=ok
// SIG undefined FUN_1412f85f0(void)

undefined8 FUN_1412f85f0(undefined8 param_1,undefined1 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  uint uVar3;
  undefined1 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined1 *)(param_3 + 1);
    do {
      *param_2 = puVar4[-1];
      puVar1 = (undefined8 *)(param_2 + 0x38);
      param_2[1] = *puVar4;
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(puVar4 + 7);
      param_2[0x10] = puVar4[0xf];
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(puVar4 + 0x17);
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(puVar4 + 0x1f);
      *(uint *)(param_2 + 0x28) =
           *(uint *)(param_2 + 0x28) ^ (*(uint *)(param_2 + 0x28) ^ *(uint *)(puVar4 + 0x27)) & 1;
      uVar3 = (*(uint *)(param_2 + 0x28) ^ *(uint *)(puVar4 + 0x27)) & 2 ^ *(uint *)(param_2 + 0x28)
      ;
      *(uint *)(param_2 + 0x28) = uVar3;
      uVar3 = (uVar3 ^ *(uint *)(puVar4 + 0x27)) & 4 ^ uVar3;
      *(uint *)(param_2 + 0x28) = uVar3;
      *(uint *)(param_2 + 0x28) = (uVar3 ^ *(uint *)(puVar4 + 0x27)) & 8 ^ uVar3;
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(puVar4 + 0x2f);
      if (puVar1 != (undefined8 *)(puVar4 + 0x37)) {
        iVar2 = *(int *)(puVar4 + 0x3f);
        _Src = *(void **)(puVar4 + 0x37);
        *(int *)(param_2 + 0x40) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x44) == 0)) {
          *(undefined4 *)(param_2 + 0x44) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
        }
      }
      *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(puVar4 + 0x47);
      *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(puVar4 + 0x4b);
      *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(puVar4 + 0x4f);
      *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(puVar4 + 0x53);
      *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(puVar4 + 0x57);
      param_2[0x5c] = puVar4[0x5b];
      *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(puVar4 + 0x5f);
      *(undefined4 *)(param_2 + 100) = *(undefined4 *)(puVar4 + 99);
      *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(puVar4 + 0x67);
      *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(puVar4 + 0x6f);
      param_2[0x78] = puVar4[0x77];
      *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(puVar4 + 0x7f);
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(puVar4 + 0x87);
      FUN_1412f7c20(param_2 + 0x90,puVar4 + 0x8f);
      FUN_1412f7430(param_2 + 0x140,puVar4 + 0x13f);
      puVar4 = puVar4 + 0x150;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x150;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412f87b0 FUN_1412f87b0 body=487 status=ok
// SIG undefined FUN_1412f87b0(void)

undefined8 FUN_1412f87b0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  undefined8 *puVar8;
  
  if (param_4 != 0) {
    piVar6 = (int *)(param_3 + 0xe0);
    do {
      *param_2 = *(undefined8 *)(piVar6 + -0x38);
      param_2[1] = *(undefined8 *)(piVar6 + -0x36);
      param_2[2] = *(undefined8 *)(piVar6 + -0x34);
      *(char *)(param_2 + 3) = (char)piVar6[-0x32];
      FUN_140729f20(param_2 + 4,piVar6 + -0x30);
      plVar2 = param_2 + 0x17;
      *(int *)(param_2 + 0x16) = piVar6[-0xc];
      if (plVar2 != (longlong *)(piVar6 + -10)) {
        iVar7 = *(int *)(param_2 + 0x18);
        if (iVar7 != 0) {
          lVar4 = *plVar2 + 0x18;
          do {
            FUN_140591060(lVar4);
            lVar4 = lVar4 + 0x30;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        iVar7 = piVar6[-8];
        lVar4 = *(longlong *)(piVar6 + -10);
        *(int *)(param_2 + 0x18) = iVar7;
        if ((iVar7 == 0) && (*(int *)((longlong)param_2 + 0xc4) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc4) = 0;
        }
        else {
          TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(plVar2,iVar7);
          puVar8 = (undefined8 *)*plVar2;
          if (iVar7 != 0) {
            puVar5 = (undefined8 *)(lVar4 + 8);
            do {
              *puVar8 = puVar5[-1];
              puVar8[1] = *puVar5;
              *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(puVar5 + 1);
              FUN_14058f8f0(puVar8 + 3,puVar5 + 2);
              puVar1 = puVar5 + 4;
              puVar5 = puVar5 + 6;
              *(undefined4 *)(puVar8 + 5) = *(undefined4 *)puVar1;
              puVar8 = puVar8 + 6;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
      }
      plVar2 = param_2 + 0x1b;
      param_2[0x19] = *(undefined8 *)(piVar6 + -6);
      *(char *)(param_2 + 0x1a) = (char)piVar6[-4];
      if ((longlong *)(piVar6 + -2) != plVar2) {
        if ((*piVar6 == 0) || (plVar3 = *(longlong **)(piVar6 + -2), plVar3 == (longlong *)0x0)) {
          if ((*(int *)(param_2 + 0x1c) != 0) &&
             (plVar3 = (longlong *)*plVar2, plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 0x28))(plVar3,0);
            if (*plVar2 != 0) {
              lVar4 = FMemory::Realloc(*plVar2,0,0);
              *plVar2 = lVar4;
            }
            *(undefined4 *)(param_2 + 0x1c) = 0;
          }
        }
        else {
          (**(code **)(*plVar3 + 0x30))(plVar3,plVar2);
        }
      }
      piVar6 = piVar6 + 0x3a;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x1d;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412f89a0 Copy body=82 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FDialogTokenValuePair>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - (longlong)param_2;
    do {
      *param_2 = *(undefined8 *)(param_3 + (longlong)param_2);
      FText::operator=(param_2 + 1,param_3 + 8 + (longlong)param_2);
      param_2 = param_2 + 4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412f8a00 FUN_1412f8a00 body=107 status=ok
// SIG undefined FUN_1412f8a00(void)

undefined8 FUN_1412f8a00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 8);
    do {
      puVar1[-1] = *(undefined8 *)(param_3 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_3 + 8 + (longlong)puVar1);
      FUN_1405913a0(puVar1 + 2,param_3 + 0x10 + (longlong)puVar1);
      *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_3 + 0x20 + (longlong)puVar1);
      puVar1 = puVar1 + 6;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412f8a70 FUN_1412f8a70 body=94 status=ok
// SIG undefined FUN_1412f8a70(void)

void FUN_1412f8a70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
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



// FUNCTION 1412f8af0 Destruct body=31 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FSkeletalMeshSamplingBuiltData>::Destruct
               (undefined8 param_1,longlong param_2)

{
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_2 + 0x10);
  TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
  ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(param_2);
  return;
}



// FUNCTION 1412f8b10 FUN_1412f8b10 body=77 status=ok
// SIG undefined FUN_1412f8b10(void)

void FUN_1412f8b10(undefined8 param_1,longlong param_2)

{
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_2 + 0x70);
  FUN_140ce18a0(param_2 + 0x60);
  FUN_14099a9b0(param_2 + 0x50);
  FUN_14099aa40(param_2 + 0x40);
  TArray<FSpawnGenerator,FDefaultAllocator>::~TArray<FSpawnGenerator,FDefaultAllocator>
            (param_2 + 0x30);
  FUN_14099a950(param_2 + 0x20);
  TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator>::
  ~TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator>(param_2 + 8);
  return;
}



// FUNCTION 1412f8b60 FUN_1412f8b60 body=58 status=ok
// SIG undefined FUN_1412f8b60(void)

void FUN_1412f8b60(undefined8 param_1,longlong param_2)

{
  FUN_140a50ee0(param_2 + 0x140);
  FUN_1409c5510(param_2 + 0x90);
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1412f8ba0 FUN_1412f8ba0 body=113 status=ok
// SIG undefined FUN_1412f8ba0(void)

void FUN_1412f8ba0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0xd8);
  iVar2 = *(int *)(param_2 + 0xc0);
  lVar1 = *(longlong *)(param_2 + 0xb8);
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x18;
    do {
      FUN_140591060(lVar1);
      lVar1 = lVar1 + 0x30;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_2 + 0xb8);
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1412f8c30 FUN_1412f8c30 body=55 status=ok
// SIG undefined FUN_1412f8c30(void)

void FUN_1412f8c30(void)

{
  undefined8 uVar1;
  
  if (DAT_14687b220 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b220 = GetStaticEnum(FUN_1412f9980,uVar1,L"ECharacterEchoDataMediaPlaybackType");
  }
  return;
}



// FUNCTION 1412f8c70 FUN_1412f8c70 body=55 status=ok
// SIG undefined FUN_1412f8c70(void)

void FUN_1412f8c70(void)

{
  undefined8 uVar1;
  
  if (DAT_14687b238 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b238 = GetStaticEnum(FUN_1412f99b0,uVar1,L"ECommandRingAlignmentType");
  }
  return;
}



// FUNCTION 1412f8cb0 FUN_1412f8cb0 body=55 status=ok
// SIG undefined FUN_1412f8cb0(void)

void FUN_1412f8cb0(void)

{
  undefined8 uVar1;
  
  if (DAT_14687b230 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b230 = GetStaticEnum(FUN_1412f99e0,uVar1,L"ECommandRingLocationType");
  }
  return;
}



// FUNCTION 1412f8cf0 FUN_1412f8cf0 body=55 status=ok
// SIG undefined FUN_1412f8cf0(void)

void FUN_1412f8cf0(void)

{
  undefined8 uVar1;
  
  if (DAT_14687b228 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b228 = GetStaticEnum(FUN_1412f9a10,uVar1,L"ECommandRingReferenceActorType");
  }
  return;
}



// FUNCTION 1412f8d30 FUN_1412f8d30 body=6 status=ok
// SIG undefined FUN_1412f8d30(void)

undefined8 FUN_1412f8d30(void)

{
  return 0x5974aaaa;
}



// FUNCTION 1412f8d40 FUN_1412f8d40 body=6 status=ok
// SIG undefined FUN_1412f8d40(void)

undefined8 FUN_1412f8d40(void)

{
  return 0xfe0496df;
}



// FUNCTION 1412f8d50 FUN_1412f8d50 body=6 status=ok
// SIG undefined FUN_1412f8d50(void)

undefined8 FUN_1412f8d50(void)

{
  return 0x17760ec5;
}



// FUNCTION 1412f8d60 FUN_1412f8d60 body=6 status=ok
// SIG undefined FUN_1412f8d60(void)

undefined8 FUN_1412f8d60(void)

{
  return 0xcbb0ccaf;
}



// FUNCTION 1412f8d70 FUN_1412f8d70 body=6 status=ok
// SIG undefined FUN_1412f8d70(void)

undefined8 FUN_1412f8d70(void)

{
  return 0x9cbe7803;
}



// FUNCTION 1412f8d80 FUN_1412f8d80 body=6 status=ok
// SIG undefined FUN_1412f8d80(void)

undefined8 FUN_1412f8d80(void)

{
  return 0xf550b91b;
}



// FUNCTION 1412f8d90 FUN_1412f8d90 body=6 status=ok
// SIG undefined FUN_1412f8d90(void)

undefined8 FUN_1412f8d90(void)

{
  return 0xf5825150;
}



// FUNCTION 1412f8da0 FUN_1412f8da0 body=6 status=ok
// SIG undefined FUN_1412f8da0(void)

undefined8 FUN_1412f8da0(void)

{
  return 0x8b4cfc98;
}



// FUNCTION 1412f8db0 FUN_1412f8db0 body=6 status=ok
// SIG undefined FUN_1412f8db0(void)

undefined8 FUN_1412f8db0(void)

{
  return 0xcd1a685d;
}



// FUNCTION 1412f8dc0 FUN_1412f8dc0 body=6 status=ok
// SIG undefined FUN_1412f8dc0(void)

undefined8 FUN_1412f8dc0(void)

{
  return 0xe6bff3bb;
}



// FUNCTION 1412f8dd0 FUN_1412f8dd0 body=6 status=ok
// SIG undefined FUN_1412f8dd0(void)

undefined8 FUN_1412f8dd0(void)

{
  return 0x7c37fea4;
}



// FUNCTION 1412f8de0 FUN_1412f8de0 body=6 status=ok
// SIG undefined FUN_1412f8de0(void)

undefined8 FUN_1412f8de0(void)

{
  return 0x2126c28c;
}



// FUNCTION 1412f8df0 FUN_1412f8df0 body=6 status=ok
// SIG undefined FUN_1412f8df0(void)

undefined8 FUN_1412f8df0(void)

{
  return 0x8d3f6194;
}



// FUNCTION 1412f8e00 FUN_1412f8e00 body=6 status=ok
// SIG undefined FUN_1412f8e00(void)

undefined8 FUN_1412f8e00(void)

{
  return 0x89b7c18e;
}



// FUNCTION 1412f8e70 FUN_1412f8e70 body=57 status=ok
// SIG undefined FUN_1412f8e70(void)

void FUN_1412f8e70(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14687b328);
                    /* WARNING: Could not recover jumptable at 0x0001412f8ea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1412f8eb0 FUN_1412f8eb0 body=57 status=ok
// SIG undefined FUN_1412f8eb0(void)

void FUN_1412f8eb0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14687b330);
                    /* WARNING: Could not recover jumptable at 0x0001412f8ee6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1412f8ef0 FUN_1412f8ef0 body=93 status=ok
// SIG undefined FUN_1412f8ef0(void)

void FUN_1412f8ef0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  lVar1 = *param_1;
  local_38 = param_2[2];
  uStack_30 = param_2[3];
  local_28 = *(undefined4 *)(param_2 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_20 = *(undefined4 *)(param_2 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_18 = param_2[6];
  uVar2 = FUN_14178ac60(local_28,DAT_14687b6a0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_48);
  return;
}



// FUNCTION 1412f8f50 FUN_1412f8f50 body=57 status=ok
// SIG undefined FUN_1412f8f50(void)

void FUN_1412f8f50(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14687b350);
                    /* WARNING: Could not recover jumptable at 0x0001412f8f86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1412f8f90 FUN_1412f8f90 body=57 status=ok
// SIG undefined FUN_1412f8f90(void)

void FUN_1412f8f90(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14687b358);
                    /* WARNING: Could not recover jumptable at 0x0001412f8fc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1412f8fd0 FUN_1412f8fd0 body=142 status=ok
// SIG undefined FUN_1412f8fd0(void)

void FUN_1412f8fd0(longlong *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x150,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x8618618618618619) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 8);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if ((iVar4 != param_3) && ((*param_1 != 0 || (iVar4 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x150,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  return;
}



// FUNCTION 1412f9060 ResizeForCopy body=132 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FLiveLinkFrame,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x90,0);
    iVar3 = (int)(uVar1 / 0x90);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x90,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1412f90f0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void AXUsableActorScriptedBotEncounter::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1412f9110 FUN_1412f9110 body=34 status=ok
// SIG undefined FUN_1412f9110(void)

void FUN_1412f9110(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412f6630();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CanBeUsedByAPlayerInRange_1447c1270,9);
  return;
}



// FUNCTION 1412f9140 FUN_1412f9140 body=34 status=ok
// SIG undefined FUN_1412f9140(void)

void FUN_1412f9140(void)

{
  undefined8 uVar1;
  
  uVar1 = AItem::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ComputeLocation_1447c2b20,8);
  return;
}



// FUNCTION 1412f9170 StaticRegisterNativesAGTutorialStepBotDestroy body=34 status=ok
// SIG undefined StaticRegisterNativesAGTutorialStepBotDestroy(void)

void AGTutorialStepBotDestroy::StaticRegisterNativesAGTutorialStepBotDestroy(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_StartLookingForTarget_1447c2ba0,2);
  return;
}



// FUNCTION 1412f91a0 FUN_1412f91a0 body=34 status=ok
// SIG undefined FUN_1412f91a0(void)

void FUN_1412f91a0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412f5b40();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnHit_1447c2918,2);
  return;
}



// FUNCTION 1412f91d0 FUN_1412f91d0 body=82 status=ok
// SIG undefined FUN_1412f91d0(void)

void FUN_1412f91d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687b700 == 0) {
    uVar1 = FUN_1412f8d30();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b700 = GetStaticStruct(FUN_1412f9a40,uVar2,L"ChallengeFilterType",0x28,uVar1);
  }
  return;
}



// FUNCTION 1412f9230 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FStarSystemBlackboard::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687b720 == 0) {
    uVar1 = FUN_1412f8d40();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b720 = GetStaticStruct(FUN_1412f9a70,uVar2,L"CharacterCorpseState",0xe8,uVar1);
  }
  return;
}



// FUNCTION 1412f9290 FUN_1412f9290 body=82 status=ok
// SIG undefined FUN_1412f9290(void)

void FUN_1412f9290(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687b758 == 0) {
    uVar1 = FUN_1412f8d50();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b758 = GetStaticStruct(FUN_1412f9aa0,uVar2,L"CharacterGroundSlamGradeData",0x28,uVar1);
  }
  return;
}



// FUNCTION 1412f92f0 FUN_1412f92f0 body=82 status=ok
// SIG undefined FUN_1412f92f0(void)

void FUN_1412f92f0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687b778 == 0) {
    uVar1 = FUN_1412f8d60();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b778 =
         GetStaticStruct(FUN_1412f9ad0,uVar2,L"CharacterItemPoolExpansionInfo",0x20,uVar1);
  }
  return;
}



// FUNCTION 1412f9350 FUN_1412f9350 body=82 status=ok
// SIG undefined FUN_1412f9350(void)

void FUN_1412f9350(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687b798 == 0) {
    uVar1 = FUN_1412f8d70();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b798 = GetStaticStruct(FUN_1412f9b00,uVar2,L"CharacterJumpGoalSetting",0xc,uVar1);
  }
  return;
}



// FUNCTION 1412f93b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneCameraCutSectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687b7f8 == 0) {
    uVar1 = FUN_1412f8d80();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b7f8 = GetStaticStruct(FUN_1412f9b30,uVar2,L"ClientExpectedSaveGameValues",0x80,uVar1);
  }
  return;
}



// FUNCTION 1412f9410 FUN_1412f9410 body=82 status=ok
// SIG undefined FUN_1412f9410(void)

void FUN_1412f9410(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687b868 == 0) {
    uVar1 = FUN_1412f8d90();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b868 = GetStaticStruct(FUN_1412f9b60,uVar2,L"CommandRingTarget",0x28,uVar1);
  }
  return;
}



// FUNCTION 1412f9470 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687b938 == 0) {
    uVar1 = FUN_1412f8da0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b938 = GetStaticStruct(FUN_1412f9b90,uVar2,L"CorpseRecord",0x10,uVar1);
  }
  return;
}



// FUNCTION 1412f94d0 FUN_1412f94d0 body=82 status=ok
// SIG undefined FUN_1412f94d0(void)

void FUN_1412f94d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687b958 == 0) {
    uVar1 = FUN_1412f8db0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b958 = GetStaticStruct(FUN_1412f9bc0,uVar2,L"CosmeticDamageEventDetails",0x38,uVar1);
  }
  return;
}



// FUNCTION 1412f9530 FUN_1412f9530 body=82 status=ok
// SIG undefined FUN_1412f9530(void)

void FUN_1412f9530(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687b7c8 == 0) {
    uVar1 = FUN_1412f8dc0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b7c8 = GetStaticStruct(FUN_1412f9bf0,uVar2,L"ElementalSlideEffect",0x150,uVar1);
  }
  return;
}



// FUNCTION 1412f9590 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687b810 == 0) {
    uVar1 = FUN_1412f8dd0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b810 = GetStaticStruct(FUN_1412f9c20,uVar2,L"LastCollisionDamageInfo",0x18,uVar1);
  }
  return;
}



// FUNCTION 1412f95f0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FStarSystemBlackboard::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687b7a8 == 0) {
    uVar1 = FUN_1412f8de0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b7a8 = GetStaticStruct(FUN_1412f9c50,uVar2,L"SlidingImpactState",0xe8,uVar1);
  }
  return;
}



// FUNCTION 1412f9650 FUN_1412f9650 body=82 status=ok
// SIG undefined FUN_1412f9650(void)

void FUN_1412f9650(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687b8f8 == 0) {
    uVar1 = FUN_1412f8df0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b8f8 = GetStaticStruct(FUN_1412f9c80,uVar2,L"TextElementCondition",0x20,uVar1);
  }
  return;
}



// FUNCTION 1412f96b0 FUN_1412f96b0 body=82 status=ok
// SIG undefined FUN_1412f96b0(void)

void FUN_1412f96b0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687b7b8 == 0) {
    uVar1 = FUN_1412f8e00();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687b7b8 = GetStaticStruct(FUN_1412f9cb0,uVar2,L"TrackedSlidingImpactEffect",0x30,uVar1);
  }
  return;
}



// FUNCTION 1412f9710 FUN_1412f9710 body=47 status=ok
// SIG undefined FUN_1412f9710(void)

longlong FUN_1412f9710(void)

{
  if (DAT_14687b748 == 0) {
    FUN_141786440(&DAT_14687b748,&PTR_FUN_1447b92a0);
  }
  return DAT_14687b748;
}



// FUNCTION 1412f9740 FUN_1412f9740 body=47 status=ok
// SIG undefined FUN_1412f9740(void)

longlong FUN_1412f9740(void)

{
  if (DAT_14687b7e8 == 0) {
    FUN_141786440(&DAT_14687b7e8,&PTR_StaticClass_1447b68c0);
  }
  return DAT_14687b7e8;
}



// FUNCTION 1412f9770 FUN_1412f9770 body=47 status=ok
// SIG undefined FUN_1412f9770(void)

longlong FUN_1412f9770(void)

{
  if (DAT_14687b908 == 0) {
    FUN_141786440(&DAT_14687b908,&PTR_GetPrivateStaticClass_1447bffb0);
  }
  return DAT_14687b908;
}



// FUNCTION 1412f97a0 FUN_1412f97a0 body=47 status=ok
// SIG undefined FUN_1412f97a0(void)

longlong FUN_1412f97a0(void)

{
  if (DAT_14687b710 == 0) {
    FUN_141786440(&DAT_14687b710,&PTR_GetPrivateStaticClass_1447b5fe0);
  }
  return DAT_14687b710;
}



// FUNCTION 1412f97d0 FUN_1412f97d0 body=47 status=ok
// SIG undefined FUN_1412f97d0(void)

longlong FUN_1412f97d0(void)

{
  if (DAT_14687b738 == 0) {
    FUN_141786440(&DAT_14687b738,&PTR_FUN_1447b6d40);
  }
  return DAT_14687b738;
}



// FUNCTION 1412f9800 FUN_1412f9800 body=47 status=ok
// SIG undefined FUN_1412f9800(void)

longlong FUN_1412f9800(void)

{
  if (DAT_14687b768 == 0) {
    FUN_141786440(&DAT_14687b768,&PTR_GetPrivateStaticClass_1447bdb30);
  }
  return DAT_14687b768;
}



// FUNCTION 1412f9830 FUN_1412f9830 body=47 status=ok
// SIG undefined FUN_1412f9830(void)

longlong FUN_1412f9830(void)

{
  if (DAT_14687b788 == 0) {
    FUN_141786440(&DAT_14687b788,&PTR_GetPrivateStaticClass_1447ba770);
  }
  return DAT_14687b788;
}



// FUNCTION 1412f9860 FUN_1412f9860 body=47 status=ok
// SIG undefined FUN_1412f9860(void)

longlong FUN_1412f9860(void)

{
  if (DAT_14687b7d8 == 0) {
    FUN_141786440(&DAT_14687b7d8,&PTR_FUN_1447bed10);
  }
  return DAT_14687b7d8;
}



// FUNCTION 1412f9890 FUN_1412f9890 body=47 status=ok
// SIG undefined FUN_1412f9890(void)

longlong FUN_1412f9890(void)

{
  if (DAT_14687b8e8 == 0) {
    FUN_141786440(&DAT_14687b8e8,&PTR_FUN_1447bd890);
  }
  return DAT_14687b8e8;
}



// FUNCTION 1412f98c0 FUN_1412f98c0 body=47 status=ok
// SIG undefined FUN_1412f98c0(void)

longlong FUN_1412f98c0(void)

{
  if (DAT_14687b918 == 0) {
    FUN_141786440(&DAT_14687b918,&PTR_FUN_1447c0720);
  }
  return DAT_14687b918;
}



// FUNCTION 1412f98f0 FUN_1412f98f0 body=47 status=ok
// SIG undefined FUN_1412f98f0(void)

longlong FUN_1412f98f0(void)

{
  if (DAT_14687b948 == 0) {
    FUN_141786440(&DAT_14687b948,&PTR_GetPrivateStaticClass_1447b60d0);
  }
  return DAT_14687b948;
}



// FUNCTION 1412f9920 FUN_1412f9920 body=47 status=ok
// SIG undefined FUN_1412f9920(void)

longlong FUN_1412f9920(void)

{
  if (DAT_14687b928 == 0) {
    FUN_141786440(&DAT_14687b928,&PTR_GetPrivateStaticClass_1447c0bf0);
  }
  return DAT_14687b928;
}



// FUNCTION 1412f9950 FUN_1412f9950 body=47 status=ok
// SIG undefined FUN_1412f9950(void)

longlong FUN_1412f9950(void)

{
  if (DAT_14687b808 == 0) {
    FUN_141786a30(&DAT_14687b808,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c3bc0);
  }
  return DAT_14687b808;
}



// FUNCTION 1412f9980 FUN_1412f9980 body=47 status=ok
// SIG undefined FUN_1412f9980(void)

longlong FUN_1412f9980(void)

{
  if (DAT_14687b730 == 0) {
    FUN_1417866a0(&DAT_14687b730,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c5c90);
  }
  return DAT_14687b730;
}



// FUNCTION 1412f99b0 FUN_1412f99b0 body=47 status=ok
// SIG undefined FUN_1412f99b0(void)

longlong FUN_1412f99b0(void)

{
  if (DAT_14687b860 == 0) {
    FUN_1417866a0(&DAT_14687b860,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c5d80);
  }
  return DAT_14687b860;
}



// FUNCTION 1412f99e0 FUN_1412f99e0 body=47 status=ok
// SIG undefined FUN_1412f99e0(void)

longlong FUN_1412f99e0(void)

{
  if (DAT_14687b858 == 0) {
    FUN_1417866a0(&DAT_14687b858,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c5d30);
  }
  return DAT_14687b858;
}



// FUNCTION 1412f9a10 FUN_1412f9a10 body=47 status=ok
// SIG undefined FUN_1412f9a10(void)

longlong FUN_1412f9a10(void)

{
  if (DAT_14687b850 == 0) {
    FUN_1417866a0(&DAT_14687b850,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c5ce0);
  }
  return DAT_14687b850;
}



// FUNCTION 1412f9a40 FUN_1412f9a40 body=47 status=ok
// SIG undefined FUN_1412f9a40(void)

longlong FUN_1412f9a40(void)

{
  if (DAT_14687b708 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687b708,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c1f30);
  }
  return DAT_14687b708;
}



// FUNCTION 1412f9a70 FUN_1412f9a70 body=47 status=ok
// SIG undefined FUN_1412f9a70(void)

longlong FUN_1412f9a70(void)

{
  if (DAT_14687b728 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687b728,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c2100);
  }
  return DAT_14687b728;
}



// FUNCTION 1412f9aa0 FUN_1412f9aa0 body=47 status=ok
// SIG undefined FUN_1412f9aa0(void)

longlong FUN_1412f9aa0(void)

{
  if (DAT_14687b760 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687b760,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c24a0);
  }
  return DAT_14687b760;
}



// FUNCTION 1412f9ad0 FUN_1412f9ad0 body=47 status=ok
// SIG undefined FUN_1412f9ad0(void)

longlong FUN_1412f9ad0(void)

{
  if (DAT_14687b780 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687b780,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c26d0);
  }
  return DAT_14687b780;
}



// FUNCTION 1412f9b00 FUN_1412f9b00 body=47 status=ok
// SIG undefined FUN_1412f9b00(void)

longlong FUN_1412f9b00(void)

{
  if (DAT_14687b7a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687b7a0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c2910);
  }
  return DAT_14687b7a0;
}



// FUNCTION 1412f9b30 FUN_1412f9b30 body=47 status=ok
// SIG undefined FUN_1412f9b30(void)

longlong FUN_1412f9b30(void)

{
  if (DAT_14687b800 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687b800,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c3ab0);
  }
  return DAT_14687b800;
}



// FUNCTION 1412f9b60 FUN_1412f9b60 body=47 status=ok
// SIG undefined FUN_1412f9b60(void)

longlong FUN_1412f9b60(void)

{
  if (DAT_14687b870 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687b870,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c4710);
  }
  return DAT_14687b870;
}



// FUNCTION 1412f9b90 FUN_1412f9b90 body=47 status=ok
// SIG undefined FUN_1412f9b90(void)

longlong FUN_1412f9b90(void)

{
  if (DAT_14687b940 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687b940,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c5900);
  }
  return DAT_14687b940;
}



// FUNCTION 1412f9bc0 FUN_1412f9bc0 body=47 status=ok
// SIG undefined FUN_1412f9bc0(void)

longlong FUN_1412f9bc0(void)

{
  if (DAT_14687b960 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687b960,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c5b90);
  }
  return DAT_14687b960;
}



// FUNCTION 1412f9bf0 FUN_1412f9bf0 body=47 status=ok
// SIG undefined FUN_1412f9bf0(void)

longlong FUN_1412f9bf0(void)

{
  if (DAT_14687b7d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687b7d0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c2e00);
  }
  return DAT_14687b7d0;
}



// FUNCTION 1412f9c20 FUN_1412f9c20 body=47 status=ok
// SIG undefined FUN_1412f9c20(void)

longlong FUN_1412f9c20(void)

{
  if (DAT_14687b818 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687b818,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c3cd0);
  }
  return DAT_14687b818;
}



// FUNCTION 1412f9c50 FUN_1412f9c50 body=47 status=ok
// SIG undefined FUN_1412f9c50(void)

longlong FUN_1412f9c50(void)

{
  if (DAT_14687b7b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687b7b0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c2ba0);
  }
  return DAT_14687b7b0;
}



// FUNCTION 1412f9c80 FUN_1412f9c80 body=47 status=ok
// SIG undefined FUN_1412f9c80(void)

longlong FUN_1412f9c80(void)

{
  if (DAT_14687b900 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687b900,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c5570);
  }
  return DAT_14687b900;
}



// FUNCTION 1412f9cb0 FUN_1412f9cb0 body=47 status=ok
// SIG undefined FUN_1412f9cb0(void)

longlong FUN_1412f9cb0(void)

{
  if (DAT_14687b7c0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687b7c0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c2c70);
  }
  return DAT_14687b7c0;
}



// FUNCTION 1412f9d00 FUN_1412f9d00 body=483 status=ok
// SIG undefined FUN_1412f9d00(void)

void FUN_1412f9d00(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
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
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_38 = local_58;
  local_30 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)
           FUN_140a5cbc0(param_1,local_28,local_res10[0],local_res20,&local_38,local_res18[0],puVar2
                        );
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}


