// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1404013d0 FUN_1404013d0 body=66 status=ok
// SIG undefined FUN_1404013d0(void)

void FUN_1404013d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponShotDamageModifierType",1);
  UObjectCompiledInDeferEnum(FUN_1430bf270,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140401420 FUN_140401420 body=66 status=ok
// SIG undefined FUN_140401420(void)

void FUN_140401420(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightBeamFlagName",1);
  UObjectCompiledInDeferStruct(FUN_1430bfb50,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140401470 FUN_140401470 body=66 status=ok
// SIG undefined FUN_140401470(void)

void FUN_140401470(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LightProjectileFlagName",1);
  UObjectCompiledInDeferStruct(FUN_1430bfbb0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1404014c0 FUN_1404014c0 body=66 status=ok
// SIG undefined FUN_1404014c0(void)

void FUN_1404014c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponActionTypeName",1);
  UObjectCompiledInDeferStruct(FUN_1430bfc10,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140401510 FUN_140401510 body=66 status=ok
// SIG undefined FUN_140401510(void)

void FUN_140401510(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponEffectTypeName",1);
  UObjectCompiledInDeferStruct(FUN_1430bfc70,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140401560 FUN_140401560 body=66 status=ok
// SIG undefined FUN_140401560(void)

void FUN_140401560(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponHeatEventNotify",1);
  UObjectCompiledInDeferStruct(FUN_1430bfcd0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1404015b0 FUN_1404015b0 body=66 status=ok
// SIG undefined FUN_1404015b0(void)

void FUN_1404015b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponShotModifierTypeName",1);
  UObjectCompiledInDeferStruct(FUN_1430bfd30,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140401600 FUN_140401600 body=58 status=ok
// SIG undefined FUN_140401600(void)

void FUN_140401600(void)

{
  UObjectCompiledInDefer
            (FUN_1430be6f0,FUN_1430be640,L"UWeaponFireBeamComponent",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140401640 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UWeaponFireComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UWeaponFireComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UWeaponFireComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_1430be720,FUN_1430bdfe0,L"UWeaponFireComponent",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140401680 FUN_140401680 body=58 status=ok
// SIG undefined FUN_140401680(void)

void FUN_140401680(void)

{
  UObjectCompiledInDefer
            (FUN_1430be250,thunk_FUN_1430bf300,L"UWeaponFireProjectileComponent",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1404016c0 FUN_1404016c0 body=58 status=ok
// SIG undefined FUN_1404016c0(void)

void FUN_1404016c0(void)

{
  UObjectCompiledInDefer
            (FUN_1430bfd90,FUN_1430bdf00,L"UWeaponFireRateAccelPercentValueResolver",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140401700 FUN_140401700 body=58 status=ok
// SIG undefined FUN_140401700(void)

void FUN_140401700(void)

{
  UObjectCompiledInDefer
            (FUN_1430be400,&LAB_1414ea430,L"UWeaponHeatComponent",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140401740 FUN_140401740 body=58 status=ok
// SIG undefined FUN_140401740(void)

void FUN_140401740(void)

{
  UObjectCompiledInDefer
            (FUN_1430beab0,thunk_FUN_1430bf460,L"UWeaponPreUseComponent",L"/Script/GbxWeapon",0,0,0)
  ;
  return;
}



// FUNCTION 140401780 FUN_140401780 body=58 status=ok
// SIG undefined FUN_140401780(void)

void FUN_140401780(void)

{
  UObjectCompiledInDefer
            (FUN_1430bec00,FUN_1430beb50,L"UWeaponRecoilComponent",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1404017c0 FUN_1404017c0 body=58 status=ok
// SIG undefined FUN_1404017c0(void)

void FUN_1404017c0(void)

{
  UObjectCompiledInDefer
            (FUN_1430bfdc0,FUN_1430becd0,L"UWeaponRecoilGoodnessValueResolver",L"/Script/GbxWeapon",
             0,0,0);
  return;
}



// FUNCTION 140401800 FUN_140401800 body=58 status=ok
// SIG undefined FUN_140401800(void)

void FUN_140401800(void)

{
  UObjectCompiledInDefer
            (FUN_1430bee30,UMovieSceneActorReferenceSection::GetPrivateStaticClass,
             L"UWeaponRecoilPatternComponent",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140401840 FUN_140401840 body=58 status=ok
// SIG undefined FUN_140401840(void)

void FUN_140401840(void)

{
  UObjectCompiledInDefer
            (FUN_1430bdfb0,UAnimMontage::GetPrivateStaticClass,L"UWeaponReloadComponent",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140401880 FUN_140401880 body=58 status=ok
// SIG undefined FUN_140401880(void)

void FUN_140401880(void)

{
  UObjectCompiledInDefer
            (FUN_1430bfdf0,UGunfireSaveSystemSettings::GetPrivateStaticClass,L"UWeaponSettings",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1404018c0 FUN_1404018c0 body=58 status=ok
// SIG undefined FUN_1404018c0(void)

void FUN_1404018c0(void)

{
  UObjectCompiledInDefer
            (FUN_1430bfe20,FUN_1430be340,L"UWeaponShotModifier",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140401c00 FUN_140401c00 body=92 status=ok
// SIG undefined FUN_140401c00(void)

void FUN_140401c00(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145a960e0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponSkeletalControlState",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140401c60 FUN_140401c60 body=92 status=ok
// SIG undefined FUN_140401c60(void)

void FUN_140401c60(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_145a96880;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponTriggerFeedbackData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140401cc0 FUN_140401cc0 body=92 status=ok
// SIG undefined FUN_140401cc0(void)

void FUN_140401cc0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 4;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_14403fc60;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponTriggerFireThreasholdData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140401d20 FUN_140401d20 body=92 status=ok
// SIG undefined FUN_140401d20(void)

void FUN_140401d20(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_145a96650;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponTriggerVibrationData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140401d80 FUN_140401d80 body=92 status=ok
// SIG undefined FUN_140401d80(void)

void FUN_140401d80(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_145a96768;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponTriggerWeaponData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140401de0 FUN_140401de0 body=92 status=ok
// SIG undefined FUN_140401de0(void)

void FUN_140401de0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    *puVar1 = &PTR_FUN_145a97000;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponVisibleAmmoEffectData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140401e40 FUN_140401e40 body=92 status=ok
// SIG undefined FUN_140401e40(void)

void FUN_140401e40(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_145a974c0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponZoomLevel",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140401ea0 FUN_140401ea0 body=92 status=ok
// SIG undefined FUN_140401ea0(void)

void FUN_140401ea0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 2;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_145a975d8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WeaponZoomState",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140401f40 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1467ac818,0);
  FGenericPlatformString::Memcpy(DAT_1467ac818,&DAT_145a946a8,8);
  atexit((_func_5014 *)&LAB_143ec35e0);
  return;
}



// FUNCTION 140401fa0 FUN_140401fa0 body=66 status=ok
// SIG undefined FUN_140401fa0(void)

void FUN_140401fa0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESimpleMotionInputHandler",1);
  UObjectCompiledInDeferEnum(FUN_1430c1de0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140401ff0 FUN_140401ff0 body=66 status=ok
// SIG undefined FUN_140401ff0(void)

void FUN_140401ff0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponShotModifierType",1);
  UObjectCompiledInDeferEnum(FUN_1430c1e20,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140402040 FUN_140402040 body=66 status=ok
// SIG undefined FUN_140402040(void)

void FUN_140402040(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponTriggerFeedbackMode",1);
  UObjectCompiledInDeferEnum(FUN_1430c1e60,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140402090 FUN_140402090 body=66 status=ok
// SIG undefined FUN_140402090(void)

void FUN_140402090(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponTypeDataTableType",1);
  UObjectCompiledInDeferEnum(FUN_1430c1ea0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1404020e0 FUN_1404020e0 body=66 status=ok
// SIG undefined FUN_1404020e0(void)

void FUN_1404020e0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponVisibleAmmoState",1);
  UObjectCompiledInDeferEnum(FUN_1430c1ee0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140402130 FUN_140402130 body=66 status=ok
// SIG undefined FUN_140402130(void)

void FUN_140402130(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponVisibleAmmoUpdateMethod",1);
  UObjectCompiledInDeferEnum(FUN_1430c1f20,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140402180 FUN_140402180 body=66 status=ok
// SIG undefined FUN_140402180(void)

void FUN_140402180(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWeaponZoomState",1);
  UObjectCompiledInDeferEnum(FUN_1430c1f60,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1404021d0 FUN_1404021d0 body=66 status=ok
// SIG undefined FUN_1404021d0(void)

void FUN_1404021d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponSkeletalControlState",1);
  UObjectCompiledInDeferStruct(FReferenceBoneFrame::StaticStruct,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140402220 FUN_140402220 body=66 status=ok
// SIG undefined FUN_140402220(void)

void FUN_140402220(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponTriggerFeedbackData",1);
  UObjectCompiledInDeferStruct(FUN_1430c2520,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140402270 FUN_140402270 body=66 status=ok
// SIG undefined FUN_140402270(void)

void FUN_140402270(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponTriggerFireThreasholdData",1);
  UObjectCompiledInDeferStruct(FUN_1430c2580,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1404022c0 FUN_1404022c0 body=66 status=ok
// SIG undefined FUN_1404022c0(void)

void FUN_1404022c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponTriggerVibrationData",1);
  UObjectCompiledInDeferStruct(FUN_1430c25e0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140402310 FUN_140402310 body=66 status=ok
// SIG undefined FUN_140402310(void)

void FUN_140402310(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponTriggerWeaponData",1);
  UObjectCompiledInDeferStruct(FUN_1430c2640,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140402360 FUN_140402360 body=66 status=ok
// SIG undefined FUN_140402360(void)

void FUN_140402360(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponVisibleAmmoEffectData",1);
  UObjectCompiledInDeferStruct(FUN_1430c26a0,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 1404023b0 FUN_1404023b0 body=66 status=ok
// SIG undefined FUN_1404023b0(void)

void FUN_1404023b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponZoomLevel",1);
  UObjectCompiledInDeferStruct(FUN_1430c2700,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140402400 FUN_140402400 body=66 status=ok
// SIG undefined FUN_140402400(void)

void FUN_140402400(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WeaponZoomState",1);
  UObjectCompiledInDeferStruct(FAnimCurveType::StaticStruct,L"/Script/GbxWeapon",*puVar1,0,0);
  return;
}



// FUNCTION 140402450 FUN_140402450 body=58 status=ok
// SIG undefined FUN_140402450(void)

void FUN_140402450(void)

{
  UObjectCompiledInDefer
            (FUN_1430c2810,FUN_1430c05e0,L"UWeaponEffectShotStrengthValueResolver",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140402490 FUN_140402490 body=58 status=ok
// SIG undefined FUN_140402490(void)

void FUN_140402490(void)

{
  UObjectCompiledInDefer
            (FUN_1430c2840,FUN_1430c0eb0,L"UWeaponMaxZoomFOVScaleValueResolver",L"/Script/GbxWeapon"
             ,0,0,0);
  return;
}



// FUNCTION 1404024d0 FUN_1404024d0 body=58 status=ok
// SIG undefined FUN_1404024d0(void)

void FUN_1404024d0(void)

{
  UObjectCompiledInDefer
            (FUN_1430c2870,FUN_1430c1910,L"UWeaponSimpleMotionBlendControl",L"/Script/GbxWeapon",0,0
             ,0);
  return;
}



// FUNCTION 140402510 FUN_140402510 body=58 status=ok
// SIG undefined FUN_140402510(void)

void FUN_140402510(void)

{
  UObjectCompiledInDefer
            (FUN_1430c28a0,FUN_1430c14d0,L"UWeaponSimpleMotionBoneControl",L"/Script/GbxWeapon",0,0,
             0);
  return;
}



// FUNCTION 140402550 FUN_140402550 body=58 status=ok
// SIG undefined FUN_140402550(void)

void FUN_140402550(void)

{
  UObjectCompiledInDefer
            (FUN_1430c19c0,FUN_1430c15e0,L"UWeaponSimpleMotionControlBase",L"/Script/GbxWeapon",0,0,
             0);
  return;
}



// FUNCTION 140402590 FUN_140402590 body=58 status=ok
// SIG undefined FUN_140402590(void)

void FUN_140402590(void)

{
  UObjectCompiledInDefer
            (FUN_1430c1440,UCurveLinearColor::GetPrivateStaticClass,
             L"UWeaponSingleFeedReloadComponent",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1404025d0 FUN_1404025d0 body=58 status=ok
// SIG undefined FUN_1404025d0(void)

void FUN_1404025d0(void)

{
  UObjectCompiledInDefer
            (FUN_1430c1690,UMaterialInterface::GetPrivateStaticClass,L"UWeaponSkeletalControlBase",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140402610 FUN_140402610 body=58 status=ok
// SIG undefined FUN_140402610(void)

void FUN_140402610(void)

{
  UObjectCompiledInDefer
            (FUN_1430c08c0,UKismetArrayLibrary::GetPrivateStaticClass,L"UWeaponStatics",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140402650 FUN_140402650 body=58 status=ok
// SIG undefined FUN_140402650(void)

void FUN_140402650(void)

{
  UObjectCompiledInDefer
            (FUN_1430c28d0,FUN_1430c0f60,L"UWeaponTriggerFeedbackAsset",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140402690 FUN_140402690 body=58 status=ok
// SIG undefined FUN_140402690(void)

void FUN_140402690(void)

{
  UObjectCompiledInDefer
            (Z_Construct_UClass_UConsole,FUN_1430c1230,L"UWeaponTypeAsset",L"/Script/GbxWeapon",0,0,
             0);
  return;
}



// FUNCTION 1404026d0 FUN_1404026d0 body=58 status=ok
// SIG undefined FUN_1404026d0(void)

void FUN_1404026d0(void)

{
  UObjectCompiledInDefer(FUN_1430c2930,FUN_1430c16c0,L"UWeaponTypeData",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140402710 FUN_140402710 body=58 status=ok
// SIG undefined FUN_140402710(void)

void FUN_140402710(void)

{
  UObjectCompiledInDefer
            (FUN_1430c2960,FUN_1430c17a0,L"UWeaponTypeDataTableAttributeValueResolver",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140402750 FUN_140402750 body=58 status=ok
// SIG undefined FUN_140402750(void)

void FUN_140402750(void)

{
  UObjectCompiledInDefer
            (FUN_1430c0740,&LAB_1414ea450,L"UWeaponUseComponent",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140402790 FUN_140402790 body=58 status=ok
// SIG undefined FUN_140402790(void)

void FUN_140402790(void)

{
  UObjectCompiledInDefer
            (FUN_1430c0ca0,UCurveLinearColor::GetPrivateStaticClass,L"UWeaponVisibleAmmoComponent",
             L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 1404027d0 FUN_1404027d0 body=58 status=ok
// SIG undefined FUN_1404027d0(void)

void FUN_1404027d0(void)

{
  UObjectCompiledInDefer
            (FUN_1430c10d0,thunk_FUN_1430c20f0,L"UWeaponZoomComponent",L"/Script/GbxWeapon",0,0,0);
  return;
}



// FUNCTION 140402810 FUN_140402810 body=256 status=ok
// SIG undefined FUN_140402810(void)

void FUN_140402810(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146b4a2c0;
    plVar1[2] = (longlong)FUN_1430c5b40;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"GbxSparkAnalytics",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140402910 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_1467b15f8;
  if ((PTR_DAT_1467b15f8 != (undefined *)0x0) && (*(short *)PTR_DAT_1467b15f8 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_1467b15f8 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_146b4a2b8 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146b4a2b0,0);
    }
    FGenericPlatformString::Memcpy(DAT_146b4a2b0,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143ec3660);
  return;
}



// FUNCTION 1404029d0 FUN_1404029d0 body=51 status=ok
// SIG undefined FUN_1404029d0(void)

void FUN_1404029d0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146b4a3b8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146b4a3b8,4000);
  atexit((_func_5014 *)&LAB_143ec3700);
  return;
}



// FUNCTION 140402b20 FUN_140402b20 body=256 status=ok
// SIG undefined FUN_140402b20(void)

void FUN_140402b20(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146b4a3ac;
    plVar1[2] = (longlong)FUN_1430d8720;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"GbxVehicle",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140402cd0 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1467b1650,0);
  FGenericPlatformString::Memcpy(DAT_1467b1650,&DAT_145a9a6e8,8);
  atexit((_func_5014 *)&LAB_143ec3710);
  return;
}



// FUNCTION 1404031e0 FUN_1404031e0 body=92 status=ok
// SIG undefined FUN_1404031e0(void)

void FUN_1404031e0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x158;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145aa6d50;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimNode_ComplexWheelHandler",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140403240 FUN_140403240 body=92 status=ok
// SIG undefined FUN_140403240(void)

void FUN_140403240(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_143fd6698;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AntiRollBarData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1404032a0 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFBuildPromotionImportWorkflowSettings'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFBuildPromotionImportWorkflowSettings''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFBuildPromotionImportWorkflowSettings__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x150;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145aa7350;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"BoostPhysicsParams",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140403300 FUN_140403300 body=92 status=ok
// SIG undefined FUN_140403300(void)

void FUN_140403300(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145aa7170;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"BoostRegenerateEvent",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140403360 FUN_140403360 body=92 status=ok
// SIG undefined FUN_140403360(void)

void FUN_140403360(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145aa6e68;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ComplexWheelMovement",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1404033c0 FUN_1404033c0 body=92 status=ok
// SIG undefined FUN_1404033c0(void)

void FUN_1404033c0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145aa7468;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"PushbackCharactersTickFunction",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140403420 FUN_140403420 body=92 status=ok
// SIG undefined FUN_140403420(void)

void FUN_140403420(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_145aa7690;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ReplicatedHoverComponentState",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140403480 FUN_140403480 body=92 status=ok
// SIG undefined FUN_140403480(void)

void FUN_140403480(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145aa7aa0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"VehiclePartList",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140403520 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1467b1730,0);
  FGenericPlatformString::Memcpy(DAT_1467b1730,&DAT_145aa0358,8);
  atexit((_func_5014 *)&LAB_143ec3730);
  return;
}



// FUNCTION 140403580 FUN_140403580 body=66 status=ok
// SIG undefined FUN_140403580(void)

void FUN_140403580(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EInAirBehavior",1);
  UObjectCompiledInDeferEnum(FUN_1430e5720,L"/Script/GbxVehicle",*puVar1,0,0);
  return;
}



// FUNCTION 1404035d0 FUN_1404035d0 body=66 status=ok
// SIG undefined FUN_1404035d0(void)

void FUN_1404035d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EVehicleCameraRelativeDrivingMode",1);
  UObjectCompiledInDeferEnum(FUN_1430e5780,L"/Script/GbxVehicle",*puVar1,0,0);
  return;
}



// FUNCTION 140403620 FUN_140403620 body=66 status=ok
// SIG undefined FUN_140403620(void)

void FUN_140403620(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EVehicleDriveType",1);
  UObjectCompiledInDeferEnum(FUN_1430e57e0,L"/Script/GbxVehicle",*puVar1,0,0);
  return;
}



// FUNCTION 140403670 FUN_140403670 body=66 status=ok
// SIG undefined FUN_140403670(void)

void FUN_140403670(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AnimNode_ComplexWheelHandler",1);
  UObjectCompiledInDeferStruct(FClothLODDataCommon::StaticStruct,L"/Script/GbxVehicle",*puVar1,0,0);
  return;
}



// FUNCTION 1404036c0 FUN_1404036c0 body=66 status=ok
// SIG undefined FUN_1404036c0(void)

void FUN_1404036c0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AntiRollBarData",1);
  UObjectCompiledInDeferStruct(FUN_1430e62b0,L"/Script/GbxVehicle",*puVar1,0,0);
  return;
}



// FUNCTION 140403710 FUN_140403710 body=66 status=ok
// SIG undefined FUN_140403710(void)

void FUN_140403710(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"BoostPhysicsParams",1);
  UObjectCompiledInDeferStruct(FUN_1430e6330,L"/Script/GbxVehicle",*puVar1,0,0);
  return;
}



// FUNCTION 140403760 FUN_140403760 body=66 status=ok
// SIG undefined FUN_140403760(void)

void FUN_140403760(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"BoostRegenerateEvent",1);
  UObjectCompiledInDeferStruct(FUN_1430e63b0,L"/Script/GbxVehicle",*puVar1,0,0);
  return;
}



// FUNCTION 1404037b0 FUN_1404037b0 body=66 status=ok
// SIG undefined FUN_1404037b0(void)

void FUN_1404037b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ComplexWheelMovement",1);
  UObjectCompiledInDeferStruct
            (FNodeHierarchyWithUserData::StaticStruct,L"/Script/GbxVehicle",*puVar1,0,0);
  return;
}



// FUNCTION 140403800 FUN_140403800 body=66 status=ok
// SIG undefined FUN_140403800(void)

void FUN_140403800(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"PushbackCharactersTickFunction",1);
  UObjectCompiledInDeferStruct(FUN_1430e64b0,L"/Script/GbxVehicle",*puVar1,0,0);
  return;
}



// FUNCTION 140403850 FUN_140403850 body=66 status=ok
// SIG undefined FUN_140403850(void)

void FUN_140403850(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ReplicatedHoverComponentState",1);
  UObjectCompiledInDeferStruct(FUN_1430e6530,L"/Script/GbxVehicle",*puVar1,0,0);
  return;
}



// FUNCTION 1404038a0 FUN_1404038a0 body=66 status=ok
// SIG undefined FUN_1404038a0(void)

void FUN_1404038a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"VehiclePartList",1);
  UObjectCompiledInDeferStruct(FUN_1430e65b0,L"/Script/GbxVehicle",*puVar1,0,0);
  return;
}



// FUNCTION 1404038f0 FUN_1404038f0 body=58 status=ok
// SIG undefined FUN_1404038f0(void)

void FUN_1404038f0(void)

{
  UObjectCompiledInDefer(FUN_1430e3000,&LAB_14148f930,L"AVehicle",L"/Script/GbxVehicle",0,0,0);
  return;
}



// FUNCTION 140403930 FUN_140403930 body=58 status=ok
// SIG undefined FUN_140403930(void)

void FUN_140403930(void)

{
  UObjectCompiledInDefer
            (FUN_1430e46c0,APlayerState::GetPrivateStaticClass,L"AVehiclePartActor",
             L"/Script/GbxVehicle",0,0,0);
  return;
}



// FUNCTION 140403970 FUN_140403970 body=58 status=ok
// SIG undefined FUN_140403970(void)

void FUN_140403970(void)

{
  UObjectCompiledInDefer
            (FUN_1430e6630,FUN_1430e3550,L"UGbxVehicleWheel",L"/Script/GbxVehicle",0,0,0);
  return;
}



// FUNCTION 1404039b0 FUN_1404039b0 body=58 status=ok
// SIG undefined FUN_1404039b0(void)

void FUN_1404039b0(void)

{
  UObjectCompiledInDefer
            (FUN_1430e3b90,URemnantQuestSubQuest::GetPrivateStaticClass,L"UTurretMovementComponent",
             L"/Script/GbxVehicle",0,0,0);
  return;
}



// FUNCTION 1404039f0 FUN_1404039f0 body=58 status=ok
// SIG undefined FUN_1404039f0(void)

void FUN_1404039f0(void)

{
  UObjectCompiledInDefer
            (FUN_1430e6660,FUN_1430e38c0,L"UVehicleAirControlComponent",L"/Script/GbxVehicle",0,0,0)
  ;
  return;
}



// FUNCTION 140403a30 FUN_140403a30 body=58 status=ok
// SIG undefined FUN_140403a30(void)

void FUN_140403a30(void)

{
  UObjectCompiledInDefer
            (FUN_1430e42f0,UTextBlock::GetPrivateStaticClass,L"UVehicleBoostComponent",
             L"/Script/GbxVehicle",0,0,0);
  return;
}



// FUNCTION 140403a70 FUN_140403a70 body=58 status=ok
// SIG undefined FUN_140403a70(void)

void FUN_140403a70(void)

{
  UObjectCompiledInDefer
            (FUN_1430e6690,&LAB_1414970a0,L"UVehicleBoostData",L"/Script/GbxVehicle",0,0,0);
  return;
}



// FUNCTION 140403ab0 FUN_140403ab0 body=58 status=ok
// SIG undefined FUN_140403ab0(void)

void FUN_140403ab0(void)

{
  UObjectCompiledInDefer
            (FUN_1430e66c0,FUN_1430e36b0,L"UVehicleCollisionResponseModificationContext",
             L"/Script/GbxVehicle",0,0,0);
  return;
}



// FUNCTION 140403af0 FUN_140403af0 body=58 status=ok
// SIG undefined FUN_140403af0(void)

void FUN_140403af0(void)

{
  UObjectCompiledInDefer
            (FUN_1430e66f0,FUN_1430e3bf0,L"UVehicleContactPtModifierInterface",L"/Script/GbxVehicle"
             ,0,0,0);
  return;
}



// FUNCTION 140403b30 FUN_140403b30 body=58 status=ok
// SIG undefined FUN_140403b30(void)

void FUN_140403b30(void)

{
  UObjectCompiledInDefer
            (FUN_1430e4c80,FUN_1430e4ad0,L"UVehicleDigiThrustComponent",L"/Script/GbxVehicle",0,0,0)
  ;
  return;
}



// FUNCTION 140403b70 FUN_140403b70 body=58 status=ok
// SIG undefined FUN_140403b70(void)

void FUN_140403b70(void)

{
  UObjectCompiledInDefer
            (FUN_1430e6720,FUN_1430e2f40,L"UVehicleFlightComponent",L"/Script/GbxVehicle",0,0,0);
  return;
}



// FUNCTION 140403bb0 FUN_140403bb0 body=58 status=ok
// SIG undefined FUN_140403bb0(void)

void FUN_140403bb0(void)

{
  UObjectCompiledInDefer
            (FUN_1430e3330,AUGWeapon_Hook::GetPrivateStaticClass,L"UVehicleHitchAttachPtComponent",
             L"/Script/GbxVehicle",0,0,0);
  return;
}



// FUNCTION 140403bf0 FUN_140403bf0 body=58 status=ok
// SIG undefined FUN_140403bf0(void)

void FUN_140403bf0(void)

{
  UObjectCompiledInDefer
            (FUN_1430e3750,ARemnantQuest::GetPrivateStaticClass,L"UVehicleHitchComponent",
             L"/Script/GbxVehicle",0,0,0);
  return;
}



// FUNCTION 140403c30 FUN_140403c30 body=58 status=ok
// SIG undefined FUN_140403c30(void)

void FUN_140403c30(void)

{
  UObjectCompiledInDefer
            (FUN_1430e3a40,FUN_1430e3990,L"UVehicleHoverComponent",L"/Script/GbxVehicle",0,0,0);
  return;
}



// FUNCTION 140403c70 FUN_140403c70 body=58 status=ok
// SIG undefined FUN_140403c70(void)

void FUN_140403c70(void)

{
  UObjectCompiledInDefer
            (FUN_1430e6750,thunk_FUN_1430e5b00,L"UVehicleInventoryBalanceStateComponent",
             L"/Script/GbxVehicle",0,0,0);
  return;
}



// FUNCTION 140403cb0 FUN_140403cb0 body=58 status=ok
// SIG undefined FUN_140403cb0(void)

void FUN_140403cb0(void)

{
  UObjectCompiledInDefer
            (FUN_1430e4290,UUserObjectListEntry::GetPrivateStaticClass,L"UVehicleMovementInterface",
             L"/Script/GbxVehicle",0,0,0);
  return;
}



// FUNCTION 140403cf0 FUN_140403cf0 body=58 status=ok
// SIG undefined FUN_140403cf0(void)

void FUN_140403cf0(void)

{
  UObjectCompiledInDefer
            (FUN_1430e6780,thunk_FUN_1430e5bb0,L"UVehiclePartData",L"/Script/GbxVehicle",0,0,0);
  return;
}



// FUNCTION 140403d30 FUN_140403d30 body=58 status=ok
// SIG undefined FUN_140403d30(void)

void FUN_140403d30(void)

{
  UObjectCompiledInDefer
            (FUN_1430e67b0,FUN_1430e47e0,L"UVehiclePartSelectionData",L"/Script/GbxVehicle",0,0,0);
  return;
}



// FUNCTION 140403d70 FUN_140403d70 body=58 status=ok
// SIG undefined FUN_140403d70(void)

void FUN_140403d70(void)

{
  UObjectCompiledInDefer
            (FUN_1430e49e0,AGameStateBase::GetPrivateStaticClass,L"UVehiclePowerSlideComponent",
             L"/Script/GbxVehicle",0,0,0);
  return;
}



// FUNCTION 140403db0 FUN_140403db0 body=58 status=ok
// SIG undefined FUN_140403db0(void)

void FUN_140403db0(void)

{
  UObjectCompiledInDefer
            (FUN_1430e3d40,FUN_1430e3810,L"UWheeledVehicleMovementComponentNW",L"/Script/GbxVehicle"
             ,0,0,0);
  return;
}



// FUNCTION 140403e90 FUN_140403e90 body=256 status=ok
// SIG undefined FUN_140403e90(void)

void FUN_140403e90(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146b4acec;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"GbxFluidSurface",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140404150 FUN_140404150 body=58 status=ok
// SIG undefined FUN_140404150(void)

void FUN_140404150(void)

{
  UObjectCompiledInDefer
            (FUN_1430e96b0,FUN_1430e9600,L"AFluidSurface",L"/Script/GbxFluidSurface",0,0,0);
  return;
}



// FUNCTION 1404041d0 FUN_1404041d0 body=256 status=ok
// SIG undefined FUN_1404041d0(void)

void FUN_1404041d0(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146b4ae21;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"GbxAbilities",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 1404044f0 FUN_1404044f0 body=92 status=ok
// SIG undefined FUN_1404044f0(void)

void FUN_1404044f0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145ab2af8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxAbilityEffect",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140404550 FUN_140404550 body=92 status=ok
// SIG undefined FUN_140404550(void)

void FUN_140404550(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145ab28c8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxAbilityEffectInstance",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1404045b0 FUN_1404045b0 body=92 status=ok
// SIG undefined FUN_1404045b0(void)

void FUN_1404045b0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145ab29e0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxAbilityEffectInstanceTarget",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140404610 FUN_140404610 body=92 status=ok
// SIG undefined FUN_140404610(void)

void FUN_140404610(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145ab2df8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxAbilityManagerComponentDeferredOperation",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140404670 FUN_140404670 body=92 status=ok
// SIG undefined FUN_140404670(void)

void FUN_140404670(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145ab2ce0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxAbilityManagerComponentListLock",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1404046d0 FUN_1404046d0 body=92 status=ok
// SIG undefined FUN_1404046d0(void)

void FUN_1404046d0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145ab2f50;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxAbilityResourceController",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140404730 FUN_140404730 body=92 status=ok
// SIG undefined FUN_140404730(void)

void FUN_140404730(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145ab3088;
  }
  puVar2 = (undefined8 *)
           FName::FName(local_res8,L"GbxAbilityResourceController_ConditionalDamageModifier",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140404790 FUN_140404790 body=92 status=ok
// SIG undefined FUN_140404790(void)

void FUN_140404790(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145ab3260;
  }
  puVar2 = (undefined8 *)
           FName::FName(local_res8,L"GbxAbilityResourceController_ResourcePoolDelegate",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1404047f0 FUN_1404047f0 body=92 status=ok
// SIG undefined FUN_1404047f0(void)

void FUN_1404047f0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145ab34b0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxAbilityResourceController_ScriptDelegate",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140404850 FUN_140404850 body=92 status=ok
// SIG undefined FUN_140404850(void)

void FUN_140404850(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_143f61bc8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxAbilityResourceSpec",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1404048b0 FUN_1404048b0 body=92 status=ok
// SIG undefined FUN_1404048b0(void)

void FUN_1404048b0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1447c2a00;
  }
  puVar2 = (undefined8 *)
           FName::FName(local_res8,L"GbxAbilityResourceSpec_ConditionalDamageModifier",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140404910 FUN_140404910 body=92 status=ok
// SIG undefined FUN_140404910(void)

void FUN_140404910(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_145ab3378;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxAbilityResourceSpec_ResourcePoolDelegate",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140404970 FUN_140404970 body=92 status=ok
// SIG undefined FUN_140404970(void)

void FUN_140404970(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1449b8d80;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxAbilityResourceSpec_ScriptDelegate",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1404049d0 FUN_1404049d0 body=92 status=ok
// SIG undefined FUN_1404049d0(void)

void FUN_1404049d0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1447d9d28;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"GbxAbilitySpec",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140404a30 FUN_140404a30 body=66 status=ok
// SIG undefined FUN_140404a30(void)

void FUN_140404a30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EAbilityResourceDelegateType",1);
  UObjectCompiledInDeferEnum(FUN_1430f0f70,L"/Script/GbxAbilities",*puVar1,0,0);
  return;
}



// FUNCTION 140404a80 FUN_140404a80 body=66 status=ok
// SIG undefined FUN_140404a80(void)

void FUN_140404a80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxAbilityDurationType",1);
  UObjectCompiledInDeferEnum(FUN_1430f0fd0,L"/Script/GbxAbilities",*puVar1,0,0);
  return;
}



// FUNCTION 140404ad0 FUN_140404ad0 body=66 status=ok
// SIG undefined FUN_140404ad0(void)

void FUN_140404ad0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EGbxAbilityState",1);
  UObjectCompiledInDeferEnum(FUN_1430f1030,L"/Script/GbxAbilities",*puVar1,0,0);
  return;
}



// FUNCTION 140404b20 FUN_140404b20 body=66 status=ok
// SIG undefined FUN_140404b20(void)

void FUN_140404b20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxAbilityEffect",1);
  UObjectCompiledInDeferStruct(FUN_1430f15c0,L"/Script/GbxAbilities",*puVar1,0,0);
  return;
}



// FUNCTION 140404b70 FUN_140404b70 body=66 status=ok
// SIG undefined FUN_140404b70(void)

void FUN_140404b70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxAbilityEffectInstance",1);
  UObjectCompiledInDeferStruct(FUN_1430f1640,L"/Script/GbxAbilities",*puVar1,0,0);
  return;
}



// FUNCTION 140404bc0 FUN_140404bc0 body=66 status=ok
// SIG undefined FUN_140404bc0(void)

void FUN_140404bc0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxAbilityEffectInstanceTarget",1);
  UObjectCompiledInDeferStruct(FUN_1430f16c0,L"/Script/GbxAbilities",*puVar1,0,0);
  return;
}



// FUNCTION 140404c10 FUN_140404c10 body=66 status=ok
// SIG undefined FUN_140404c10(void)

void FUN_140404c10(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxAbilityManagerComponentDeferredOperation",1);
  UObjectCompiledInDeferStruct(FUN_1430f1740,L"/Script/GbxAbilities",*puVar1,0,0);
  return;
}



// FUNCTION 140404c60 FUN_140404c60 body=66 status=ok
// SIG undefined FUN_140404c60(void)

void FUN_140404c60(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxAbilityManagerComponentListLock",1);
  UObjectCompiledInDeferStruct(FUN_1430f17c0,L"/Script/GbxAbilities",*puVar1,0,0);
  return;
}



// FUNCTION 140404cb0 FUN_140404cb0 body=66 status=ok
// SIG undefined FUN_140404cb0(void)

void FUN_140404cb0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxAbilityResourceController",1);
  UObjectCompiledInDeferStruct(FUN_1430f1840,L"/Script/GbxAbilities",*puVar1,0,0);
  return;
}



// FUNCTION 140404d00 FUN_140404d00 body=66 status=ok
// SIG undefined FUN_140404d00(void)

void FUN_140404d00(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)
           FName::FName(local_res8,L"GbxAbilityResourceController_ConditionalDamageModifier",1);
  UObjectCompiledInDeferStruct(FUN_1430f18c0,L"/Script/GbxAbilities",*puVar1,0,0);
  return;
}



// FUNCTION 140404d50 FUN_140404d50 body=66 status=ok
// SIG undefined FUN_140404d50(void)

void FUN_140404d50(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)
           FName::FName(local_res8,L"GbxAbilityResourceController_ResourcePoolDelegate",1);
  UObjectCompiledInDeferStruct(FUN_1430f1940,L"/Script/GbxAbilities",*puVar1,0,0);
  return;
}



// FUNCTION 140404da0 FUN_140404da0 body=66 status=ok
// SIG undefined FUN_140404da0(void)

void FUN_140404da0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxAbilityResourceController_ScriptDelegate",1);
  UObjectCompiledInDeferStruct(FUN_1430f19c0,L"/Script/GbxAbilities",*puVar1,0,0);
  return;
}



// FUNCTION 140404df0 FUN_140404df0 body=66 status=ok
// SIG undefined FUN_140404df0(void)

void FUN_140404df0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxAbilityResourceSpec",1);
  UObjectCompiledInDeferStruct(FUN_1430f1a40,L"/Script/GbxAbilities",*puVar1,0,0);
  return;
}



// FUNCTION 140404e40 FUN_140404e40 body=66 status=ok
// SIG undefined FUN_140404e40(void)

void FUN_140404e40(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)
           FName::FName(local_res8,L"GbxAbilityResourceSpec_ConditionalDamageModifier",1);
  UObjectCompiledInDeferStruct(FUN_1430f1ac0,L"/Script/GbxAbilities",*puVar1,0,0);
  return;
}



// FUNCTION 140404e90 FUN_140404e90 body=66 status=ok
// SIG undefined FUN_140404e90(void)

void FUN_140404e90(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxAbilityResourceSpec_ResourcePoolDelegate",1);
  UObjectCompiledInDeferStruct(FUN_1430f1b40,L"/Script/GbxAbilities",*puVar1,0,0);
  return;
}



// FUNCTION 140404ee0 FUN_140404ee0 body=66 status=ok
// SIG undefined FUN_140404ee0(void)

void FUN_140404ee0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxAbilityResourceSpec_ScriptDelegate",1);
  UObjectCompiledInDeferStruct(FUN_1430f1bc0,L"/Script/GbxAbilities",*puVar1,0,0);
  return;
}



// FUNCTION 140404f30 FUN_140404f30 body=66 status=ok
// SIG undefined FUN_140404f30(void)

void FUN_140404f30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxAbilitySpec",1);
  UObjectCompiledInDeferStruct(FUN_1430f1c40,L"/Script/GbxAbilities",*puVar1,0,0);
  return;
}



// FUNCTION 140404f80 FUN_140404f80 body=58 status=ok
// SIG undefined FUN_140404f80(void)

void FUN_140404f80(void)

{
  UObjectCompiledInDefer(FUN_1430efcf0,&LAB_1413d2550,L"UGbxAbility",L"/Script/GbxAbilities",0,0,0);
  return;
}



// FUNCTION 140404fc0 FUN_140404fc0 body=58 status=ok
// SIG undefined FUN_140404fc0(void)

void FUN_140404fc0(void)

{
  UObjectCompiledInDefer
            (FUN_1430f1cc0,UTextureRenderTargetCube::GetPrivateStaticClass,
             L"UGbxAbilityAttributePropertyValueResolver",L"/Script/GbxAbilities",0,0,0);
  return;
}



// FUNCTION 140405000 FUN_140405000 body=58 status=ok
// SIG undefined FUN_140405000(void)

void FUN_140405000(void)

{
  UObjectCompiledInDefer
            (FUN_1430f01e0,thunk_FUN_1430f1130,L"UGbxAbilityEffectTargetResolutionData",
             L"/Script/GbxAbilities",0,0,0);
  return;
}



// FUNCTION 140405040 FUN_140405040 body=58 status=ok
// SIG undefined FUN_140405040(void)

void FUN_140405040(void)

{
  UObjectCompiledInDefer
            (FUN_1430f1cf0,FUN_1430f0220,L"UGbxAbilityEffectTargetResolutionData_Owner",
             L"/Script/GbxAbilities",0,0,0);
  return;
}



// FUNCTION 140405080 FUN_140405080 body=58 status=ok
// SIG undefined FUN_140405080(void)

void FUN_140405080(void)

{
  UObjectCompiledInDefer
            (FUN_1430f1d20,FUN_1430f0320,L"UGbxAbilityEffectTargetResolutionData_Self",
             L"/Script/GbxAbilities",0,0,0);
  return;
}



// FUNCTION 1404050c0 FUN_1404050c0 body=58 status=ok
// SIG undefined FUN_1404050c0(void)

void FUN_1404050c0(void)

{
  UObjectCompiledInDefer
            (FUN_1430efaa0,&LAB_141405e70,L"UGbxAbilityManagerComponent",L"/Script/GbxAbilities",0,0
             ,0);
  return;
}



// FUNCTION 140405100 FUN_140405100 body=58 status=ok
// SIG undefined FUN_140405100(void)

void FUN_140405100(void)

{
  UObjectCompiledInDefer
            (FUN_1430f0490,FUN_1430f03e0,L"UGbxAbilityResourceControllerBlueprintFunctionLibrary",
             L"/Script/GbxAbilities",0,0,0);
  return;
}



// FUNCTION 140405140 FUN_140405140 body=58 status=ok
// SIG undefined FUN_140405140(void)

void FUN_140405140(void)

{
  UObjectCompiledInDefer
            (FUN_1430f1d50,FUN_1430ef9d0,L"UGbxCondition_HasAbility",L"/Script/GbxAbilities",0,0,0);
  return;
}



// FUNCTION 140405180 FUN_140405180 body=256 status=ok
// SIG undefined FUN_140405180(void)

void FUN_140405180(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146b4b140;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"GbxStatusEffects",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 1404052a0 FUN_1404052a0 body=58 status=ok
// SIG undefined FUN_1404052a0(void)

void FUN_1404052a0(void)

{
  UObjectCompiledInDefer
            (FUN_1430f2af0,FUN_1430f2a30,L"UGbxStatusEffectsPrivate",L"/Script/GbxStatusEffects",0,0
             ,0);
  return;
}



// FUNCTION 1404053c0 FUN_1404053c0 body=256 status=ok
// SIG undefined FUN_1404053c0(void)

void FUN_1404053c0(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146b4b174;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"GbxDynamicRoom",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140405550 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1467bb610,0);
  FGenericPlatformString::Memcpy(DAT_1467bb610,&DAT_145ab3d78,8);
  atexit((_func_5014 *)&LAB_143ec3770);
  return;
}



// FUNCTION 140405710 FUN_140405710 body=92 status=ok
// SIG undefined FUN_140405710(void)

void FUN_140405710(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1440d7bd8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DynamicRoomInstanceInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140405770 FUN_140405770 body=92 status=ok
// SIG undefined FUN_140405770(void)

void FUN_140405770(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_143ff1be8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DynamicRoomReplicationInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1404057f0 FUN_1404057f0 body=66 status=ok
// SIG undefined FUN_1404057f0(void)

void FUN_1404057f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DynamicRoomInstanceInfo",1);
  UObjectCompiledInDeferStruct(FUN_1430f5750,L"/Script/GbxDynamicRoom",*puVar1,0,0);
  return;
}



// FUNCTION 140405840 FUN_140405840 body=66 status=ok
// SIG undefined FUN_140405840(void)

void FUN_140405840(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DynamicRoomReplicationInfo",1);
  UObjectCompiledInDeferStruct(FUN_1430f57d0,L"/Script/GbxDynamicRoom",*puVar1,0,0);
  return;
}



// FUNCTION 140405890 FUN_140405890 body=58 status=ok
// SIG undefined FUN_140405890(void)

void FUN_140405890(void)

{
  UObjectCompiledInDefer
            (FUN_1430f5850,FUN_1430f4e00,L"ADynamicRoomActor",L"/Script/GbxDynamicRoom",0,0,0);
  return;
}



// FUNCTION 1404058d0 FUN_1404058d0 body=58 status=ok
// SIG undefined FUN_1404058d0(void)

void FUN_1404058d0(void)

{
  UObjectCompiledInDefer
            (FUN_1430f5100,thunk_FUN_1430f5570,L"ADynamicRoomBase",L"/Script/GbxDynamicRoom",0,0,0);
  return;
}



// FUNCTION 140405910 FUN_140405910 body=58 status=ok
// SIG undefined FUN_140405910(void)

void FUN_140405910(void)

{
  UObjectCompiledInDefer
            (FUN_1430f5060,FUN_1430f4fb0,L"UDynamicRoomActorData",L"/Script/GbxDynamicRoom",0,0,0);
  return;
}



// FUNCTION 140405950 FUN_140405950 body=58 status=ok
// SIG undefined FUN_140405950(void)

void FUN_140405950(void)

{
  UObjectCompiledInDefer
            (FUN_1430f5090,FUN_1430f4f00,L"UDynamicRoomBaseData",L"/Script/GbxDynamicRoom",0,0,0);
  return;
}



// FUNCTION 140405990 FUN_140405990 body=58 status=ok
// SIG undefined FUN_140405990(void)

void FUN_140405990(void)

{
  UObjectCompiledInDefer
            (FUN_1430f5880,thunk_FUN_1430f5620,L"UDynamicRoomLevelData",L"/Script/GbxDynamicRoom",0,
             0,0);
  return;
}



// FUNCTION 1404059d0 FUN_1404059d0 body=58 status=ok
// SIG undefined FUN_1404059d0(void)

void FUN_1404059d0(void)

{
  UObjectCompiledInDefer
            (FUN_1430f58b0,FUN_1430f53a0,L"UDynamicRoomModuleSettings",L"/Script/GbxDynamicRoom",0,0
             ,0);
  return;
}



// FUNCTION 140405a10 FUN_140405a10 body=256 status=ok
// SIG undefined FUN_140405a10(void)

void FUN_140405a10(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146b4b478;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"GbxPortcullis",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140405b10 FUN_140405b10 body=256 status=ok
// SIG undefined FUN_140405b10(void)

void FUN_140405b10(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146b4b488;
    plVar1[2] = (longlong)FUN_1430f5f90;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"GbxDNA",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140405c40 FUN_140405c40 body=66 status=ok
// SIG undefined FUN_140405c40(void)

void FUN_140405c40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,&DAT_146b4b550);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3f130;
  }
  DAT_146b4b540 = &LAB_1430fcfc0;
  atexit(FUN_143ec37b0);
  return;
}



// FUNCTION 140405c90 FUN_140405c90 body=100 status=ok
// SIG undefined FUN_140405c90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140405c90(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b5c8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"Net.RepGraph.Spatial.DebugNextNewActor",&DAT_146b4b490,
                  &DAT_145ab6e9c,0);
  _DAT_146b4b5c0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec3920);
  return;
}



// FUNCTION 140405d00 FUN_140405d00 body=100 status=ok
// SIG undefined FUN_140405d00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140405d00(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b4f8 =
       (**(code **)(*DAT_1468b1f88 + 0x20))
                 (DAT_1468b1f88,L"Net.RepGraph.FixedBudget",&DAT_146b4b4a8,
                  L"Set fixed (independent of frame rate) packet budget. In BIts/frame",0);
  _DAT_146b4b4f0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec3970);
  return;
}



// FUNCTION 140405d70 FUN_140405d70 body=100 status=ok
// SIG undefined FUN_140405d70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140405d70(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b4d8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"Net.RepGraph.Frequency",&DAT_146b4b4a4,
                  L"Enabled Replication Manager. 0 will fallback to legacy NetDriver implementation."
                  ,0);
  _DAT_146b4b4d0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec39c0);
  return;
}



// FUNCTION 140405de0 FUN_140405de0 body=100 status=ok
// SIG undefined FUN_140405de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140405de0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b4c8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"Net.RepGraph.Pause",&DAT_146b4b4a0,
                  L"Pauses actor replication in the Replication Graph.",0);
  _DAT_146b4b4c0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec3a10);
  return;
}



// FUNCTION 140405e50 FUN_140405e50 body=100 status=ok
// SIG undefined FUN_140405e50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140405e50(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b518 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"Net.RepGraph.PrintCulledOnConnectionClasses",&DAT_146b4b4b0,
                  &DAT_145ab782c,0);
  _DAT_146b4b510 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec3a60);
  return;
}



// FUNCTION 140405ec0 FUN_140405ec0 body=100 status=ok
// SIG undefined FUN_140405ec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140405ec0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b538 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"Net.RepGraph.PrintTrackClassReplication",&DAT_146b4b4b8,
                  &DAT_145ab79d4,0);
  _DAT_146b4b530 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec3ab0);
  return;
}



// FUNCTION 140405f30 FUN_140405f30 body=100 status=ok
// SIG undefined FUN_140405f30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140405f30(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b508 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"Net.RepGraph.SkipDistanceCull",&DAT_146b4b4ac,&DAT_145ab778c,0);
  _DAT_146b4b500 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec3b00);
  return;
}



// FUNCTION 140405fa0 FUN_140405fa0 body=100 status=ok
// SIG undefined FUN_140405fa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140405fa0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b5f8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"Net.RepGraph.Spatial.BiasCreep",&DAT_146b4b49c,
                  L"Changes bias each frame by this much and force rebuld. For stress test debugging"
                  ,0);
  _DAT_146b4b5f0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec3b50);
  return;
}



// FUNCTION 140406010 FUN_140406010 body=100 status=ok
// SIG undefined FUN_140406010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140406010(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b5e8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"Net.RepGraph.Spatial.DebugDynamic",&DAT_146b4b498,
                  L"Prints debug info whenever dynamic actors changes spatial cells",0);
  _DAT_146b4b5e0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec3ba0);
  return;
}



// FUNCTION 140406080 FUN_140406080 body=100 status=ok
// SIG undefined FUN_140406080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140406080(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b528 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"Net.RepGraph.TrackClassReplication",&DAT_146b4b4b4,&DAT_145ab7904,
                  0);
  _DAT_146b4b520 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec3bf0);
  return;
}



// FUNCTION 1404060f0 FUN_1404060f0 body=100 status=ok
// SIG undefined FUN_1404060f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404060f0(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b4e8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"Net.RepGraph.UseLegacyBudget",&DAT_1467bc37c,
                  L"Use legacy IsNetReady() to make dynamic packget budgets",0);
  _DAT_146b4b4e0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec3c40);
  return;
}



// FUNCTION 140406160 FUN_140406160 body=100 status=ok
// SIG undefined FUN_140406160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140406160(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b5d8 =
       (**(code **)(*DAT_1468b1f88 + 0x28))
                 (DAT_1468b1f88,L"Net.RepGraph.Spatial.PauseDynamic",&DAT_146b4b494,
                  L"Pauses updating dynamic actor positions in the spatialization nodes.",0);
  _DAT_146b4b5d0 = &PTR_FUN_143f3ecf0;
  atexit(FUN_143ec3c90);
  return;
}



// FUNCTION 1404061f0 FUN_1404061f0 body=256 status=ok
// SIG undefined FUN_1404061f0(void)

void FUN_1404061f0(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146b4b4bc;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"ReplicationGraph",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 1404062f0 FUN_1404062f0 body=255 status=ok
// SIG undefined FUN_1404062f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404062f0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_145abee00;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[2] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_145abee48;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b638 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"Net.RepGraph.Spatial.CellInfo",&DAT_145abb474,&local_18,0);
  _DAT_146b4b630 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1404063de;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1404063de:
  atexit(FUN_143ec3d70);
  return;
}



// FUNCTION 1404063f0 FUN_1404063f0 body=255 status=ok
// SIG undefined FUN_1404063f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404063f0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_145abec50;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[2] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_145abec98;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b608 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"Net.RepGraph.Debug.Start",&DAT_145ab8c84,&local_18,0);
  _DAT_146b4b600 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1404064de;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1404064de:
  atexit(FUN_143ec3dc0);
  return;
}



// FUNCTION 1404064f0 FUN_1404064f0 body=255 status=ok
// SIG undefined FUN_1404064f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404064f0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_145abed70;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[2] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_145abedb8;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b628 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"Net.RepGraph.PrintAllActorInfo",&DAT_145ab9e34,&local_18,0);
  _DAT_146b4b620 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1404065de;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1404065de:
  atexit(FUN_143ec3e10);
  return;
}



// FUNCTION 1404065f0 FUN_1404065f0 body=255 status=ok
// SIG undefined FUN_1404065f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404065f0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_145abece0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[2] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_145abed28;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b618 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"Net.RepGraph.PrintCullDistances",&DAT_145ab962c,&local_18,0);
  _DAT_146b4b610 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1404066de;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1404066de:
  atexit(FUN_143ec3e60);
  return;
}



// FUNCTION 1404066f0 FUN_1404066f0 body=255 status=ok
// SIG undefined FUN_1404066f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404066f0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_145abee90;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[2] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_145abeed8;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b648 =
       (**(code **)(*DAT_1468b1f88 + 0x70))
                 (DAT_1468b1f88,L"Net.RepGraph.SetClassCullDistance",&DAT_145ab6e1c,&local_18,0);
  _DAT_146b4b640 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1404067de;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1404067de:
  atexit(FUN_143ec3eb0);
  return;
}



// FUNCTION 140406800 FUN_140406800 body=269 status=ok
// SIG undefined FUN_140406800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140406800(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_1444d51e8;
    plVar1[1] = (longlong)FUN_143109760;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d5230;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b6b8 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"ReplicationGraph.Reload",&DAT_145ab8b64,&local_18,0);
  _DAT_146b4b6b0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1404068fc;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1404068fc:
  atexit(FUN_143ec3f30);
  return;
}



// FUNCTION 140406910 `dynamic_initializer_for_'LeakReporterReportCommand'' body=258 status=ok
// SIG undefined `dynamic_initializer_for_'LeakReporterReportCommand''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__LeakReporterReportCommand__(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_145abef20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[2] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_145abef68;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b658 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"Net.RepGraph.StarvedList",&DAT_145ab7434,&local_18,0);
  _DAT_146b4b650 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140406a01;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140406a01:
  atexit(FUN_143ec3f80);
  return;
}



// FUNCTION 140406a20 `dynamic_initializer_for_'LeakReporterReportCommand'' body=258 status=ok
// SIG undefined `dynamic_initializer_for_'LeakReporterReportCommand''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__LeakReporterReportCommand__(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_145abf040;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[2] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_145abf088;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b678 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"Net.RepGraph.DrawGraph",&DAT_145ab76dc,&local_18,0);
  _DAT_146b4b670 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140406b11;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140406b11:
  atexit(FUN_143ec3fd0);
  return;
}



// FUNCTION 140406b30 `dynamic_initializer_for_'LeakReporterReportCommand'' body=258 status=ok
// SIG undefined `dynamic_initializer_for_'LeakReporterReportCommand''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__LeakReporterReportCommand__(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_145abf160;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[2] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_145abf1a8;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b698 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"Net.RepGraph.PrioritizedLists.Draw",&DAT_145ab82ec,&local_18,0);
  _DAT_146b4b690 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140406c21;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140406c21:
  atexit(FUN_143ec4020);
  return;
}



// FUNCTION 140406c40 `dynamic_initializer_for_'LeakReporterReportCommand'' body=258 status=ok
// SIG undefined `dynamic_initializer_for_'LeakReporterReportCommand''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__LeakReporterReportCommand__(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_145abf1f0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[2] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_145abf238;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b6a8 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"Net.RepGraph.PrintAll",&DAT_145ab8ab4,&local_18,0);
  _DAT_146b4b6a0 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140406d31;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140406d31:
  atexit(FUN_143ec4070);
  return;
}



// FUNCTION 140406d50 `dynamic_initializer_for_'LeakReporterReportCommand'' body=258 status=ok
// SIG undefined `dynamic_initializer_for_'LeakReporterReportCommand''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__LeakReporterReportCommand__(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_145abefb0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[2] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_145abeff8;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b668 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"Net.RepGraph.PrintGraph",&DAT_145ab763c,&local_18,0);
  _DAT_146b4b660 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140406e41;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140406e41:
  atexit(FUN_143ec40c0);
  return;
}



// FUNCTION 140406e60 `dynamic_initializer_for_'LeakReporterReportCommand'' body=258 status=ok
// SIG undefined `dynamic_initializer_for_'LeakReporterReportCommand''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__LeakReporterReportCommand__(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  local_18 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_145abf0d0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[2] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_145abf118;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146b4b688 =
       (**(code **)(*DAT_1468b1f88 + 0x80))
                 (DAT_1468b1f88,L"Net.RepGraph.PrioritizedLists.Print",&DAT_145ab803c,&local_18,0);
  _DAT_146b4b680 = &PTR_FUN_143f3ecf0;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140406f51;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140406f51:
  atexit(FUN_143ec4110);
  return;
}



// FUNCTION 1404071f0 `dynamic_initializer_for_'ScriptStruct_ReplicationGraph_StaticRegisterNativesFConnectionAlwaysRelevantNodePair'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_ReplicationGraph_StaticRegisterNativesFConnectionAlwaysRelevantNodePair''(void)

void _dynamic_initializer_for__ScriptStruct_ReplicationGraph_StaticRegisterNativesFConnectionAlwaysRelevantNodePair__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_143f61bc8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ConnectionAlwaysRelevantNodePair",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140407250 FUN_140407250 body=92 status=ok
// SIG undefined FUN_140407250(void)

void FUN_140407250(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144a0c978;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"TearOffActorInfo",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 1404072b0 FUN_1404072b0 body=66 status=ok
// SIG undefined FUN_1404072b0(void)

void FUN_1404072b0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ConnectionAlwaysRelevantNodePair",1);
  UObjectCompiledInDeferStruct
            (FConnectionAlwaysRelevantNodePair::StaticStruct,L"/Script/ReplicationGraph",*puVar1,0,0
            );
  return;
}



// FUNCTION 140407300 FUN_140407300 body=66 status=ok
// SIG undefined FUN_140407300(void)

void FUN_140407300(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TearOffActorInfo",1);
  UObjectCompiledInDeferStruct(FUN_14310f1c0,L"/Script/ReplicationGraph",*puVar1,0,0);
  return;
}



// FUNCTION 140407350 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_AReplicationGraphDebugActor'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_AReplicationGraphDebugActor''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_AReplicationGraphDebugActor__(void)

{
  UObjectCompiledInDefer
            (FUN_14310de70,FUN_14310dc30,L"AReplicationGraphDebugActor",L"/Script/ReplicationGraph",
             0,0,0);
  return;
}



// FUNCTION 140407390 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UBasicReplicationGraph'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UBasicReplicationGraph''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UBasicReplicationGraph__(void)

{
  UObjectCompiledInDefer
            (FUN_14310f240,FUN_14310dce0,L"UBasicReplicationGraph",L"/Script/ReplicationGraph",0,0,0
            );
  return;
}



// FUNCTION 1404073d0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNetReplicationGraphConnection'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UNetReplicationGraphConnection''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UNetReplicationGraphConnection__(void)

{
  UObjectCompiledInDefer
            (FUN_14310f270,thunk_FUN_14310ece0,L"UNetReplicationGraphConnection",
             L"/Script/ReplicationGraph",0,0,0);
  return;
}



// FUNCTION 140407410 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UReplicationGraph'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UReplicationGraph''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UReplicationGraph__(void)

{
  UObjectCompiledInDefer
            (FUN_14310ddc0,thunk_FUN_14310ed90,L"UReplicationGraph",L"/Script/ReplicationGraph",0,0,
             0);
  return;
}



// FUNCTION 140407450 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UReplicationGraphNode'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UReplicationGraphNode''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UReplicationGraphNode__(void)

{
  UObjectCompiledInDefer
            (FUN_14310de10,USelection::StaticClass,L"UReplicationGraphNode",
             L"/Script/ReplicationGraph",0,0,0);
  return;
}



// FUNCTION 140407490 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UReplicationGraphNode_ActorList'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UReplicationGraphNode_ActorList''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UReplicationGraphNode_ActorList__(void)

{
  UObjectCompiledInDefer
            (FUN_14310de40,thunk_FUN_14310ee40,L"UReplicationGraphNode_ActorList",
             L"/Script/ReplicationGraph",0,0,0);
  return;
}



// FUNCTION 1404074d0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UReplicationGraphNode_ActorListFrequencyBuckets'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UReplicationGraphNode_ActorListFrequencyBuckets''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UReplicationGraphNode_ActorListFrequencyBuckets__
               (void)

{
  UObjectCompiledInDefer
            (FUN_14310f2a0,FUN_14310e320,L"UReplicationGraphNode_ActorListFrequencyBuckets",
             L"/Script/ReplicationGraph",0,0,0);
  return;
}



// FUNCTION 140407510 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UReplicationGraphNode_AlwaysRelevant'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UReplicationGraphNode_AlwaysRelevant''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UReplicationGraphNode_AlwaysRelevant__(void)

{
  UObjectCompiledInDefer
            (FUN_14310f2d0,UDemoPendingNetGame::GetPrivateStaticClass,
             L"UReplicationGraphNode_AlwaysRelevant",L"/Script/ReplicationGraph",0,0,0);
  return;
}



// FUNCTION 140407550 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UReplicationGraphNode_AlwaysRelevant_ForConnection__
               (void)

{
  UObjectCompiledInDefer
            (FUN_14310f300,UPlatformGameInstance::StaticClass,
             L"UReplicationGraphNode_AlwaysRelevant_ForConnection",L"/Script/ReplicationGraph",0,0,0
            );
  return;
}



// FUNCTION 140407590 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UReplicationGraphNode_ConnectionDormanyNode'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UReplicationGraphNode_ConnectionDormanyNode''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UReplicationGraphNode_ConnectionDormanyNode__
               (void)

{
  UObjectCompiledInDefer
            (FUN_14310f330,FUN_14310e3e0,L"UReplicationGraphNode_ConnectionDormanyNode",
             L"/Script/ReplicationGraph",0,0,0);
  return;
}



// FUNCTION 1404075d0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UReplicationGraphNode_DormancyNode'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UReplicationGraphNode_DormancyNode''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UReplicationGraphNode_DormancyNode__(void)

{
  UObjectCompiledInDefer
            (FUN_14310f360,FUN_14310e4a0,L"UReplicationGraphNode_DormancyNode",
             L"/Script/ReplicationGraph",0,0,0);
  return;
}



// FUNCTION 140407610 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UReplicationGraphNode_GridCell'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UReplicationGraphNode_GridCell''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UReplicationGraphNode_GridCell__(void)

{
  UObjectCompiledInDefer
            (FUN_14310f390,ULevelStreamingPersistent::GetPrivateStaticClass,
             L"UReplicationGraphNode_GridCell",L"/Script/ReplicationGraph",0,0,0);
  return;
}



// FUNCTION 140407650 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UReplicationGraphNode_GridSpatialization2D'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UReplicationGraphNode_GridSpatialization2D''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UReplicationGraphNode_GridSpatialization2D__
               (void)

{
  UObjectCompiledInDefer
            (FUN_14310f3c0,FUN_14310e600,L"UReplicationGraphNode_GridSpatialization2D",
             L"/Script/ReplicationGraph",0,0,0);
  return;
}



// FUNCTION 140407690 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UReplicationGraphNode_TearOff_ForConnection'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UReplicationGraphNode_TearOff_ForConnection''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UReplicationGraphNode_TearOff_ForConnection__
               (void)

{
  UObjectCompiledInDefer
            (FUN_14310f3f0,FUN_14310e270,L"UReplicationGraphNode_TearOff_ForConnection",
             L"/Script/ReplicationGraph",0,0,0);
  return;
}



// FUNCTION 140407810 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1467bd3c0,0);
  FGenericPlatformString::Memcpy(DAT_1467bd3c0,&DAT_145ac4528,8);
  atexit((_func_5014 *)&LAB_143ec41d0);
  return;
}



// FUNCTION 140407a20 FUN_140407a20 body=256 status=ok
// SIG undefined FUN_140407a20(void)

void FUN_140407a20(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146b505ec;
    plVar1[2] = (longlong)BuildPatchServices::FChunkDataSizeProviderFactory::Create;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"OakDestruction",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 140407ca0 FUN_140407ca0 body=58 status=ok
// SIG undefined FUN_140407ca0(void)

void FUN_140407ca0(void)

{
  UObjectCompiledInDefer
            (FUN_1431150c0,UMultiLineEditableTextBox::GetPrivateStaticClass,
             L"UCryoDestructibleComponent",L"/Script/OakDestruction",0,0,0);
  return;
}



// FUNCTION 140407e20 FUN_140407e20 body=58 status=ok
// SIG undefined FUN_140407e20(void)

void FUN_140407e20(void)

{
  UObjectCompiledInDefer
            (FUN_1431151a0,AXGameMode::GetPrivateStaticClass,L"AOakDestructibleFXManager",
             L"/Script/OakDestruction",0,0,0);
  return;
}



// FUNCTION 140407ec0 FUN_140407ec0 body=33 status=ok
// SIG undefined FUN_140407ec0(void)

void FUN_140407ec0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  atexit((_func_5014 *)&LAB_143ec4250);
  return;
}



// FUNCTION 140408020 FUN_140408020 body=33 status=ok
// SIG undefined FUN_140408020(void)

void FUN_140408020(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146b50ee8);
  atexit((_func_5014 *)&LAB_143ec4320);
  return;
}



// FUNCTION 140408070 FUN_140408070 body=33 status=ok
// SIG undefined FUN_140408070(void)

void FUN_140408070(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146b50fb8);
  atexit((_func_5014 *)&LAB_143ec4360);
  return;
}



// FUNCTION 1404080b0 m_GlobalLimiter'' body=44 status=ok
// SIG undefined m_GlobalLimiter''(void)

void `dynamic_initializer_for_'CAkURenderer::m_GlobalLimiter__(void)

{
  CAkLimiter::CAkLimiter(&DAT_146b50ff0,0x100,1);
  atexit((_func_5014 *)&DAT_143ec4380);
  return;
}



// FUNCTION 140408130 FUN_140408130 body=33 status=ok
// SIG undefined FUN_140408130(void)

void FUN_140408130(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146b51ec8);
  atexit((_func_5014 *)&LAB_143ec43e0);
  return;
}



// FUNCTION 140408260 FUN_140408260 body=33 status=ok
// SIG undefined FUN_140408260(void)

void FUN_140408260(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  atexit((_func_5014 *)&LAB_143ec4480);
  return;
}



// FUNCTION 1404082f0 m_segmentInfoRepository'' body=32 status=ok
// SIG undefined m_segmentInfoRepository''(void)

void `dynamic_initializer_for_'CAkMusicRenderer::m_segmentInfoRepository__(void)

{
  CAkSegmentInfoRepository::CAkSegmentInfoRepository(&DAT_146b520e8);
  atexit((_func_5014 *)&LAB_143ec44f0);
  return;
}



// FUNCTION 140408340 FUN_140408340 body=33 status=ok
// SIG undefined FUN_140408340(void)

void FUN_140408340(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146b521d8);
  atexit((_func_5014 *)&LAB_143ec4580);
  return;
}



// FUNCTION 140408770 FUN_140408770 body=99 status=ok
// SIG undefined FUN_140408770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140408770(void)

{
  DAT_146b5aaf0 = FUN_14325c540("VU_Band0");
  DAT_146b5aaf4 = FUN_14325c540("VU_Band1");
  _DAT_146b5aaf8 = FUN_14325c540("VU_Band2");
  _DAT_146b5aafc = FUN_14325c540("VU_Band3");
  _DAT_146b5ab00 = FUN_14325c540("VU_Band4");
  return;
}



// FUNCTION 140408920 FUN_140408920 body=51 status=ok
// SIG undefined FUN_140408920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140408920(void)

{
  Scaleform::Render::StateData::Interface::Interface(&DAT_146b630c8,1);
  _DAT_146b630c8 = &PTR_FUN_145af8270;
  atexit((_func_5014 *)&LAB_143ec45f0);
  return;
}



// FUNCTION 140408960 FUN_140408960 body=51 status=ok
// SIG undefined FUN_140408960(void)

void FUN_140408960(void)

{
  Scaleform::Render::StateData::Interface::Interface(&DAT_146b630d8,3);
  DAT_146b630d8 = &PTR_FUN_145af8288;
  atexit((_func_5014 *)&LAB_143ec4600);
  return;
}



// FUNCTION 1404089a0 FUN_1404089a0 body=51 status=ok
// SIG undefined FUN_1404089a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404089a0(void)

{
  Scaleform::Render::StateData::Interface::Interface(&DAT_146b630f8,9);
  _DAT_146b630f8 = &PTR_FUN_145af8270;
  atexit((_func_5014 *)&LAB_143ec4610);
  return;
}



// FUNCTION 1404089e0 FUN_1404089e0 body=51 status=ok
// SIG undefined FUN_1404089e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404089e0(void)

{
  Scaleform::Render::StateData::Interface::Interface(&DAT_146b630b8,4);
  _DAT_146b630b8 = &PTR_FUN_145af8258;
  atexit((_func_5014 *)&LAB_143ec4620);
  return;
}



// FUNCTION 140408a20 FUN_140408a20 body=51 status=ok
// SIG undefined FUN_140408a20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140408a20(void)

{
  Scaleform::Render::StateData::Interface::Interface(&DAT_146b63118,10);
  _DAT_146b63118 = &PTR_FUN_145af8288;
  atexit((_func_5014 *)&LAB_143ec4630);
  return;
}



// FUNCTION 140408a60 FUN_140408a60 body=51 status=ok
// SIG undefined FUN_140408a60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140408a60(void)

{
  Scaleform::Render::StateData::Interface::Interface(&DAT_146b63108,8);
  _DAT_146b63108 = &PTR_FUN_145af8228;
  atexit((_func_5014 *)&LAB_143ec4640);
  return;
}



// FUNCTION 140408aa0 FUN_140408aa0 body=51 status=ok
// SIG undefined FUN_140408aa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140408aa0(void)

{
  Scaleform::Render::StateData::Interface::Interface(&DAT_146b63128,6);
  _DAT_146b63128 = &PTR_FUN_145af8288;
  atexit((_func_5014 *)&LAB_143ec4650);
  return;
}



// FUNCTION 140408ae0 FUN_140408ae0 body=51 status=ok
// SIG undefined FUN_140408ae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140408ae0(void)

{
  Scaleform::Render::StateData::Interface::Interface(&DAT_146b63098,2);
  _DAT_146b63098 = &PTR_FUN_145af8288;
  atexit((_func_5014 *)&LAB_143ec4660);
  return;
}



// FUNCTION 140408b20 FUN_140408b20 body=51 status=ok
// SIG undefined FUN_140408b20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140408b20(void)

{
  Scaleform::Render::StateData::Interface::Interface(&DAT_146b63088,7);
  _DAT_146b63088 = &PTR_FUN_145af8288;
  atexit((_func_5014 *)&LAB_143ec4670);
  return;
}



// FUNCTION 140408b60 FUN_140408b60 body=51 status=ok
// SIG undefined FUN_140408b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140408b60(void)

{
  Scaleform::Render::StateData::Interface::Interface(&DAT_146b630e8,5);
  _DAT_146b630e8 = &PTR_FUN_145af8288;
  atexit((_func_5014 *)&LAB_143ec4680);
  return;
}



// FUNCTION 140408ba0 FUN_140408ba0 body=48 status=ok
// SIG undefined FUN_140408ba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140408ba0(void)

{
  Scaleform::Render::StateData::Interface::Interface(&DAT_146b630a8,0);
  _DAT_146b630a8 = &PTR_FUN_145af8270;
  atexit((_func_5014 *)&LAB_143ec4690);
  return;
}



// FUNCTION 140408ea0 FUN_140408ea0 body=27 status=ok
// SIG undefined FUN_140408ea0(void)

void FUN_140408ea0(void)

{
  undefined4 uVar1;
  
  uVar1 = Scaleform::Timer::GetTicksMs();
  Scaleform::Alg::Random::Generator::SeedRandom(&DAT_1467ce810,uVar1);
  return;
}



// FUNCTION 140408ef0 `dynamic_initializer_for_'Point_NanParams'' body=60 status=ok
// SIG undefined `dynamic_initializer_for_'Point_NanParams''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Scaleform::GFx::AS2::_dynamic_initializer_for__Point_NanParams__(void)

{
  _DAT_146b74658 = NumberUtil::NaN();
  DAT_146b74650 = 3;
  _DAT_146b74678 = NumberUtil::NaN();
  DAT_146b74670 = 3;
  atexit(FUN_143ec4bd0);
  return;
}



// FUNCTION 140408f40 `dynamic_initializer_for_'Rectangle_NaNParams'' body=100 status=ok
// SIG undefined `dynamic_initializer_for_'Rectangle_NaNParams''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Scaleform::GFx::AS2::_dynamic_initializer_for__Rectangle_NaNParams__(void)

{
  _DAT_146b745d8 = NumberUtil::NaN();
  DAT_146b745d0 = 3;
  _DAT_146b745f8 = NumberUtil::NaN();
  DAT_146b745f0 = 3;
  _DAT_146b74618 = NumberUtil::NaN();
  DAT_146b74610 = 3;
  _DAT_146b74638 = NumberUtil::NaN();
  DAT_146b74630 = 3;
  atexit(FUN_143ec4c70);
  return;
}



// FUNCTION 140408fc0 FUN_140408fc0 body=39 status=ok
// SIG undefined FUN_140408fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140408fc0(void)

{
  uint uStack_c;
  
  _DAT_146b74d10 = FUN_1434b7210;
  lRam0000000146b74d18 = (ulonglong)uStack_c << 0x20;
  return;
}



// FUNCTION 140408ff0 FUN_140408ff0 body=39 status=ok
// SIG undefined FUN_140408ff0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140408ff0(void)

{
  uint uStack_c;
  
  DAT_146b74d30 = FUN_1434b72e0;
  _DAT_146b74d38 = (ulonglong)uStack_c << 0x20;
  return;
}



// FUNCTION 140409020 FUN_140409020 body=39 status=ok
// SIG undefined FUN_140409020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140409020(void)

{
  uint uStack_c;
  
  _DAT_146b74d50 = FUN_1434b7410;
  lRam0000000146b74d58 = (ulonglong)uStack_c << 0x20;
  return;
}



// FUNCTION 140409050 FUN_140409050 body=39 status=ok
// SIG undefined FUN_140409050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140409050(void)

{
  uint uStack_c;
  
  DAT_146b74ce0 = Scaleform::GFx::AS3::Instances::fl_display::FrameLabel::frameGet;
  _DAT_146b74ce8 = (ulonglong)uStack_c << 0x20;
  return;
}



// FUNCTION 140409080 FUN_140409080 body=39 status=ok
// SIG undefined FUN_140409080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140409080(void)

{
  uint uStack_c;
  
  DAT_146b74720 = FUN_1434c6830;
  _DAT_146b74728 = (ulonglong)uStack_c << 0x20;
  return;
}



// FUNCTION 1404090b0 FUN_1404090b0 body=39 status=ok
// SIG undefined FUN_1404090b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404090b0(void)

{
  uint uStack_c;
  
  DAT_146b74730 = FUN_1434c6910;
  _DAT_146b74738 = (ulonglong)uStack_c << 0x20;
  return;
}



// FUNCTION 1404090e0 FUN_1404090e0 body=39 status=ok
// SIG undefined FUN_1404090e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404090e0(void)

{
  uint uStack_c;
  
  DAT_146b74740 = FUN_1434c69c0;
  _DAT_146b74748 = (ulonglong)uStack_c << 0x20;
  return;
}



// FUNCTION 140409110 FUN_140409110 body=39 status=ok
// SIG undefined FUN_140409110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140409110(void)

{
  uint uStack_c;
  
  DAT_146b74750 = &LAB_1434c6c00;
  _DAT_146b74758 = (ulonglong)uStack_c << 0x20;
  return;
}



// FUNCTION 140409140 FUN_140409140 body=39 status=ok
// SIG undefined FUN_140409140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140409140(void)

{
  uint uStack_c;
  
  DAT_146b74760 = &LAB_1434c6c10;
  _DAT_146b74768 = (ulonglong)uStack_c << 0x20;
  return;
}



// FUNCTION 140409170 FUN_140409170 body=39 status=ok
// SIG undefined FUN_140409170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140409170(void)

{
  uint uStack_c;
  
  DAT_146b74770 = &LAB_1434c6c20;
  _DAT_146b74778 = (ulonglong)uStack_c << 0x20;
  return;
}



// FUNCTION 1404091a0 FUN_1404091a0 body=39 status=ok
// SIG undefined FUN_1404091a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404091a0(void)

{
  uint uStack_c;
  
  DAT_146b74780 = FUN_1434c6c30;
  _DAT_146b74788 = (ulonglong)uStack_c << 0x20;
  return;
}



// FUNCTION 1404091d0 FUN_1404091d0 body=39 status=ok
// SIG undefined FUN_1404091d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404091d0(void)

{
  uint uStack_c;
  
  DAT_146b74790 = Scaleform::GFx::AS3::Instances::fl::Date::AS3getUTCFullYear;
  _DAT_146b74798 = (ulonglong)uStack_c << 0x20;
  return;
}



// FUNCTION 140409200 FUN_140409200 body=39 status=ok
// SIG undefined FUN_140409200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140409200(void)

{
  uint uStack_c;
  
  DAT_146b747a0 = FUN_1434c6d40;
  _DAT_146b747a8 = (ulonglong)uStack_c << 0x20;
  return;
}



// FUNCTION 140409230 FUN_140409230 body=39 status=ok
// SIG undefined FUN_140409230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140409230(void)

{
  uint uStack_c;
  
  DAT_146b74700 = FUN_1434c6760;
  _DAT_146b74708 = (ulonglong)uStack_c << 0x20;
  return;
}



// FUNCTION 140409260 FUN_140409260 body=39 status=ok
// SIG undefined FUN_140409260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140409260(void)

{
  uint uStack_c;
  
  DAT_146b74800 = Scaleform::GFx::AS3::Instances::fl::Date::AS3getUTCMilliseconds;
  _DAT_146b74808 = (ulonglong)uStack_c << 0x20;
  return;
}



// FUNCTION 140409290 FUN_140409290 body=39 status=ok
// SIG undefined FUN_140409290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140409290(void)

{
  uint uStack_c;
  
  DAT_146b74810 = Scaleform::GFx::AS3::Instances::fl::Date::AS3getFullYear;
  _DAT_146b74818 = (ulonglong)uStack_c << 0x20;
  return;
}



// FUNCTION 1404092c0 FUN_1404092c0 body=39 status=ok
// SIG undefined FUN_1404092c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404092c0(void)

{
  uint uStack_c;
  
  DAT_146b74820 = FUN_1434c7100;
  _DAT_146b74828 = (ulonglong)uStack_c << 0x20;
  return;
}



// FUNCTION 1404092f0 FUN_1404092f0 body=39 status=ok
// SIG undefined FUN_1404092f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404092f0(void)

{
  uint uStack_c;
  
  DAT_146b74830 = FUN_1434c7180;
  _DAT_146b74838 = (ulonglong)uStack_c << 0x20;
  return;
}


