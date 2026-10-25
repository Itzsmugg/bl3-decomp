// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142fd5a90 StaticRegisterNativesUPlayStateEffect body=34 status=ok
// SIG undefined StaticRegisterNativesUPlayStateEffect(void)

void UPlayStateEffect::StaticRegisterNativesUPlayStateEffect(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_DAT_145a280f0,3);
  return;
}



// FUNCTION 142fd5ac0 StaticRegisterNativesUKismetGuidLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUKismetGuidLibrary(void)

void UKismetGuidLibrary::StaticRegisterNativesUKismetGuidLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddCameraModeSet_145a28430,7);
  return;
}



// FUNCTION 142fd5af0 FUN_142fd5af0 body=34 status=ok
// SIG undefined FUN_142fd5af0(void)

void FUN_142fd5af0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142fd3f70();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddPostProcessBlend_145a286d0,9);
  return;
}



// FUNCTION 142fd5b20 FUN_142fd5b20 body=113 status=ok
// SIG undefined FUN_142fd5b20(void)

void FUN_142fd5b20(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b45190 == 0) {
    if (DAT_146b45350 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b45350,&PTR_s__Script_GbxCameraModes_145a28760);
    }
    lVar1 = DAT_146b45350;
    uVar2 = FUN_142fd5980();
    DAT_146b45190 = GetStaticStruct(FUN_142fd62e0,lVar1,L"CameraBehaviorLookAxis",0x18,uVar2);
  }
  return;
}



// FUNCTION 142fd5ba0 FUN_142fd5ba0 body=113 status=ok
// SIG undefined FUN_142fd5ba0(void)

void FUN_142fd5ba0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b452d8 == 0) {
    if (DAT_146b45350 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b45350,&PTR_s__Script_GbxCameraModes_145a28760);
    }
    lVar1 = DAT_146b45350;
    uVar2 = FUN_142fd5990();
    DAT_146b452d8 = GetStaticStruct(FUN_142fd6310,lVar1,L"CameraStatePostProcessBlend",0x610,uVar2);
  }
  return;
}



// FUNCTION 142fd5c20 FUN_142fd5c20 body=113 status=ok
// SIG undefined FUN_142fd5c20(void)

void FUN_142fd5c20(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b45140 == 0) {
    if (DAT_146b45350 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b45350,&PTR_s__Script_GbxCameraModes_145a28760);
    }
    lVar1 = DAT_146b45350;
    uVar2 = FUN_142fd59a0();
    DAT_146b45140 = GetStaticStruct(FUN_142fd6340,lVar1,L"InitialRotationAxisParams",0x30,uVar2);
  }
  return;
}



// FUNCTION 142fd5ca0 FUN_142fd5ca0 body=113 status=ok
// SIG undefined FUN_142fd5ca0(void)

void FUN_142fd5ca0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b452b8 == 0) {
    if (DAT_146b45350 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b45350,&PTR_s__Script_GbxCameraModes_145a28760);
    }
    lVar1 = DAT_146b45350;
    uVar2 = FUN_142fd59b0();
    DAT_146b452b8 = GetStaticStruct(FUN_142fd6370,lVar1,L"ReplicatedCameraModeState",0x10,uVar2);
  }
  return;
}



// FUNCTION 142fd5d20 FUN_142fd5d20 body=67 status=ok
// SIG undefined FUN_142fd5d20(void)

void FUN_142fd5d20(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18[0] = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146b44f80);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_18);
  return;
}



// FUNCTION 142fd5d70 FUN_142fd5d70 body=47 status=ok
// SIG undefined FUN_142fd5d70(void)

longlong FUN_142fd5d70(void)

{
  if (DAT_146b450c0 == 0) {
    FUN_141786440(&DAT_146b450c0,&PTR_FUN_145a242b0);
  }
  return DAT_146b450c0;
}



// FUNCTION 142fd5da0 FUN_142fd5da0 body=47 status=ok
// SIG undefined FUN_142fd5da0(void)

longlong FUN_142fd5da0(void)

{
  if (DAT_146b450d0 == 0) {
    FUN_141786440(&DAT_146b450d0,&PTR_FUN_145a24580);
  }
  return DAT_146b450d0;
}



// FUNCTION 142fd5dd0 FUN_142fd5dd0 body=47 status=ok
// SIG undefined FUN_142fd5dd0(void)

longlong FUN_142fd5dd0(void)

{
  if (DAT_146b450e0 == 0) {
    FUN_141786440(&DAT_146b450e0,&PTR_FUN_145a249d0);
  }
  return DAT_146b450e0;
}



// FUNCTION 142fd5e00 FUN_142fd5e00 body=47 status=ok
// SIG undefined FUN_142fd5e00(void)

longlong FUN_142fd5e00(void)

{
  if (DAT_146b450f0 == 0) {
    FUN_141786440(&DAT_146b450f0,&PTR_LAB_145a24e70);
  }
  return DAT_146b450f0;
}



// FUNCTION 142fd5e30 FUN_142fd5e30 body=47 status=ok
// SIG undefined FUN_142fd5e30(void)

longlong FUN_142fd5e30(void)

{
  if (DAT_146b45100 == 0) {
    FUN_141786440(&DAT_146b45100,&PTR_FUN_145a25270);
  }
  return DAT_146b45100;
}



// FUNCTION 142fd5e60 FUN_142fd5e60 body=47 status=ok
// SIG undefined FUN_142fd5e60(void)

longlong FUN_142fd5e60(void)

{
  if (DAT_146b45110 == 0) {
    FUN_141786440(&DAT_146b45110,&PTR_FUN_145a25640);
  }
  return DAT_146b45110;
}



// FUNCTION 142fd5e90 FUN_142fd5e90 body=47 status=ok
// SIG undefined FUN_142fd5e90(void)

longlong FUN_142fd5e90(void)

{
  if (DAT_146b45120 == 0) {
    FUN_141786440(&DAT_146b45120,&PTR_thunk_FUN_142fd5620_145a258d0);
  }
  return DAT_146b45120;
}



// FUNCTION 142fd5ec0 FUN_142fd5ec0 body=47 status=ok
// SIG undefined FUN_142fd5ec0(void)

longlong FUN_142fd5ec0(void)

{
  if (DAT_146b45130 == 0) {
    FUN_141786440(&DAT_146b45130,&PTR_FUN_145a25d20);
  }
  return DAT_146b45130;
}



// FUNCTION 142fd5ef0 FUN_142fd5ef0 body=47 status=ok
// SIG undefined FUN_142fd5ef0(void)

longlong FUN_142fd5ef0(void)

{
  if (DAT_146b45150 == 0) {
    FUN_141786440(&DAT_146b45150,&PTR_thunk_FUN_142fd56d0_145a266a0);
  }
  return DAT_146b45150;
}



// FUNCTION 142fd5f20 FUN_142fd5f20 body=47 status=ok
// SIG undefined FUN_142fd5f20(void)

longlong FUN_142fd5f20(void)

{
  if (DAT_146b45160 == 0) {
    FUN_141786440(&DAT_146b45160,&PTR_FUN_145a26aa0);
  }
  return DAT_146b45160;
}



// FUNCTION 142fd5f50 FUN_142fd5f50 body=47 status=ok
// SIG undefined FUN_142fd5f50(void)

longlong FUN_142fd5f50(void)

{
  if (DAT_146b45170 == 0) {
    FUN_141786440(&DAT_146b45170,&PTR_FUN_145a26e40);
  }
  return DAT_146b45170;
}



// FUNCTION 142fd5f80 FUN_142fd5f80 body=47 status=ok
// SIG undefined FUN_142fd5f80(void)

longlong FUN_142fd5f80(void)

{
  if (DAT_146b451a0 == 0) {
    FUN_141786440(&DAT_146b451a0,&PTR_thunk_FUN_142fd5780_145a26880);
  }
  return DAT_146b451a0;
}



// FUNCTION 142fd5fb0 FUN_142fd5fb0 body=47 status=ok
// SIG undefined FUN_142fd5fb0(void)

longlong FUN_142fd5fb0(void)

{
  if (DAT_146b451b0 == 0) {
    FUN_141786440(&DAT_146b451b0,&PTR_FUN_145a26c00);
  }
  return DAT_146b451b0;
}



// FUNCTION 142fd5fe0 FUN_142fd5fe0 body=47 status=ok
// SIG undefined FUN_142fd5fe0(void)

longlong FUN_142fd5fe0(void)

{
  if (DAT_146b451c0 == 0) {
    FUN_141786440(&DAT_146b451c0,&PTR_FUN_145a26f20);
  }
  return DAT_146b451c0;
}



// FUNCTION 142fd6010 FUN_142fd6010 body=47 status=ok
// SIG undefined FUN_142fd6010(void)

longlong FUN_142fd6010(void)

{
  if (DAT_146b451d0 == 0) {
    FUN_141786440(&DAT_146b451d0,&PTR_FUN_145a27190);
  }
  return DAT_146b451d0;
}



// FUNCTION 142fd6040 FUN_142fd6040 body=47 status=ok
// SIG undefined FUN_142fd6040(void)

longlong FUN_142fd6040(void)

{
  if (DAT_146b451e0 == 0) {
    FUN_141786440(&DAT_146b451e0,&PTR_thunk_FUN_142fd5830_145a273f0);
  }
  return DAT_146b451e0;
}



// FUNCTION 142fd6070 FUN_142fd6070 body=47 status=ok
// SIG undefined FUN_142fd6070(void)

longlong FUN_142fd6070(void)

{
  if (DAT_146b451f0 == 0) {
    FUN_141786440(&DAT_146b451f0,&PTR_FUN_145a277b0);
  }
  return DAT_146b451f0;
}



// FUNCTION 142fd60a0 FUN_142fd60a0 body=47 status=ok
// SIG undefined FUN_142fd60a0(void)

longlong FUN_142fd60a0(void)

{
  if (DAT_146b45200 == 0) {
    FUN_141786440(&DAT_146b45200,&PTR_FUN_145a27a90);
  }
  return DAT_146b45200;
}



// FUNCTION 142fd60d0 FUN_142fd60d0 body=47 status=ok
// SIG undefined FUN_142fd60d0(void)

longlong FUN_142fd60d0(void)

{
  if (DAT_146b45210 == 0) {
    FUN_141786440(&DAT_146b45210,&PTR_GetPrivateStaticClass_145a27c90);
  }
  return DAT_146b45210;
}



// FUNCTION 142fd6100 FUN_142fd6100 body=47 status=ok
// SIG undefined FUN_142fd6100(void)

longlong FUN_142fd6100(void)

{
  if (DAT_146b45220 == 0) {
    FUN_141786440(&DAT_146b45220,&PTR_FUN_145a23530);
  }
  return DAT_146b45220;
}



// FUNCTION 142fd6130 FUN_142fd6130 body=47 status=ok
// SIG undefined FUN_142fd6130(void)

longlong FUN_142fd6130(void)

{
  if (DAT_146b45240 == 0) {
    FUN_141786440(&DAT_146b45240,&PTR_FUN_145a239d0);
  }
  return DAT_146b45240;
}



// FUNCTION 142fd6160 FUN_142fd6160 body=47 status=ok
// SIG undefined FUN_142fd6160(void)

longlong FUN_142fd6160(void)

{
  if (DAT_146b45250 == 0) {
    FUN_141786440(&DAT_146b45250,&PTR_FUN_145a23cc0);
  }
  return DAT_146b45250;
}



// FUNCTION 142fd6190 FUN_142fd6190 body=47 status=ok
// SIG undefined FUN_142fd6190(void)

longlong FUN_142fd6190(void)

{
  if (DAT_146b45260 == 0) {
    FUN_141786440(&DAT_146b45260,&PTR_FUN_145a23dd0);
  }
  return DAT_146b45260;
}



// FUNCTION 142fd61c0 FUN_142fd61c0 body=47 status=ok
// SIG undefined FUN_142fd61c0(void)

longlong FUN_142fd61c0(void)

{
  if (DAT_146b452c8 == 0) {
    FUN_141786440(&DAT_146b452c8,&PTR_FUN_145a24d60);
  }
  return DAT_146b452c8;
}



// FUNCTION 142fd61f0 FUN_142fd61f0 body=47 status=ok
// SIG undefined FUN_142fd61f0(void)

longlong FUN_142fd61f0(void)

{
  if (DAT_146b45340 == 0) {
    FUN_141786440(&DAT_146b45340,&PTR_FUN_145a26260);
  }
  return DAT_146b45340;
}



// FUNCTION 142fd6220 FUN_142fd6220 body=47 status=ok
// SIG undefined FUN_142fd6220(void)

longlong FUN_142fd6220(void)

{
  if (DAT_146b45180 == 0) {
    FUN_1417866a0(&DAT_146b45180,&PTR_FUN_14677b930);
  }
  return DAT_146b45180;
}



// FUNCTION 142fd6250 FUN_142fd6250 body=47 status=ok
// SIG undefined FUN_142fd6250(void)

longlong FUN_142fd6250(void)

{
  if (DAT_146b45188 == 0) {
    FUN_1417866a0(&DAT_146b45188,&PTR_FUN_14677b980);
  }
  return DAT_146b45188;
}



// FUNCTION 142fd6280 FUN_142fd6280 body=47 status=ok
// SIG undefined FUN_142fd6280(void)

longlong FUN_142fd6280(void)

{
  if (DAT_146b45230 == 0) {
    FUN_1417866a0(&DAT_146b45230,&PTR_FUN_14677b9d0);
  }
  return DAT_146b45230;
}



// FUNCTION 142fd62b0 FUN_142fd62b0 body=47 status=ok
// SIG undefined FUN_142fd62b0(void)

longlong FUN_142fd62b0(void)

{
  if (DAT_146b45238 == 0) {
    FUN_1417866a0(&DAT_146b45238,&PTR_FUN_14677ba20);
  }
  return DAT_146b45238;
}



// FUNCTION 142fd62e0 FUN_142fd62e0 body=47 status=ok
// SIG undefined FUN_142fd62e0(void)

longlong FUN_142fd62e0(void)

{
  if (DAT_146b45198 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b45198,&PTR_FUN_146778c60);
  }
  return DAT_146b45198;
}



// FUNCTION 142fd6310 FUN_142fd6310 body=47 status=ok
// SIG undefined FUN_142fd6310(void)

longlong FUN_142fd6310(void)

{
  if (DAT_146b452e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b452e0,&PTR_FUN_14677aa00);
  }
  return DAT_146b452e0;
}



// FUNCTION 142fd6340 FUN_142fd6340 body=47 status=ok
// SIG undefined FUN_142fd6340(void)

longlong FUN_142fd6340(void)

{
  if (DAT_146b45148 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b45148,&PTR_FUN_1467785d0);
  }
  return DAT_146b45148;
}



// FUNCTION 142fd6370 FUN_142fd6370 body=47 status=ok
// SIG undefined FUN_142fd6370(void)

longlong FUN_142fd6370(void)

{
  if (DAT_146b452c0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b452c0,&PTR_FUN_14677a5e0);
  }
  return DAT_146b452c0;
}



// FUNCTION 142fd63a0 FUN_142fd63a0 body=175 status=ok
// SIG undefined FUN_142fd63a0(void)

void FUN_142fd63a0(undefined8 param_1,longlong param_2)

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
  FUN_142fc8ba0(local_res20,local_res10[0]);
  return;
}



// FUNCTION 142fd6450 FUN_142fd6450 body=292 status=ok
// SIG undefined FUN_142fd6450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fd6450(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_658 [32];
  undefined4 local_638 [4];
  undefined1 local_628 [1496];
  longlong local_50;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_658;
  FUN_142741540(local_628);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_628);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_628);
  }
  local_638[0] = 0;
  puVar1 = local_628;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_638);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_638);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142fc8dc0(param_1,puVar1,local_638[0]);
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142fd6580 execSimpleMoveToLocation body=185 status=ok
// SIG undefined execSimpleMoveToLocation(void)

void UNavigationSystemV1::execSimpleMoveToLocation(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 local_res10 [3];
  undefined1 local_18 [16];
  
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
  puVar1 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142fc8ff0(local_res10[0],puVar1);
  return;
}



// FUNCTION 142fd6640 FUN_142fd6640 body=528 status=ok
// SIG undefined FUN_142fd6640(void)

void FUN_142fd6640(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [12];
  undefined4 local_ac;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_f8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
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
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  _guard_xfg_dispatch_icall_nop(local_b8,0,0x90);
  local_ac = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  puVar2 = local_b8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_d8 = local_f8;
  local_c8 = local_e8;
  local_d0 = local_f0;
  local_c0 = local_e0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142fc9c40(param_1,&local_c8,&local_d8,local_res20[0],local_res10[0],local_res18[0],
                        puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142fd6850 FUN_142fd6850 body=132 status=ok
// SIG undefined FUN_142fd6850(void)

void FUN_142fd6850(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x278))(param_1,local_res8);
  return;
}



// FUNCTION 142fd68e0 execGetValue body=45 status=ok
// SIG undefined execGetValue(void)

void UFloatAiData::execGetValue(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = UGizmoAxisScaleParameterSource::GetParameter();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142fd6910 FUN_142fd6910 body=55 status=ok
// SIG undefined FUN_142fd6910(void)

void FUN_142fd6910(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FCulture::GetName();
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142fd6950 FUN_142fd6950 body=55 status=ok
// SIG undefined FUN_142fd6950(void)

void FUN_142fd6950(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_14058b280();
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142fd6990 FUN_142fd6990 body=309 status=ok
// SIG undefined FUN_142fd6990(void)

void FUN_142fd6990(undefined8 param_1,longlong param_2)

{
  int local_res10 [4];
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
  FUN_142fcc150(local_10,local_18,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 142fd6ad0 FUN_142fd6ad0 body=309 status=ok
// SIG undefined FUN_142fd6ad0(void)

void FUN_142fd6ad0(undefined8 param_1,longlong param_2)

{
  int local_res10 [4];
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
  FUN_142fccbf0(local_10,local_18,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 142fd6c10 FUN_142fd6c10 body=175 status=ok
// SIG undefined FUN_142fd6c10(void)

void FUN_142fd6c10(undefined8 param_1,longlong param_2)

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
  FUN_142fccd50(local_res20,local_res10[0]);
  return;
}



// FUNCTION 142fd6cc0 execSimpleMoveToLocation body=185 status=ok
// SIG undefined execSimpleMoveToLocation(void)

void UNavigationSystemV1::execSimpleMoveToLocation(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 local_res10 [3];
  undefined1 local_18 [16];
  
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
  puVar1 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142fcd030(local_res10[0],puVar1);
  return;
}



// FUNCTION 142fd6d80 FUN_142fd6d80 body=200 status=ok
// SIG undefined FUN_142fd6d80(void)

void FUN_142fd6d80(undefined8 param_1,longlong param_2)

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
  FUN_142fcd3e0(param_1,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 142fd6e50 FUN_142fd6e50 body=138 status=ok
// SIG undefined FUN_142fd6e50(void)

void FUN_142fd6e50(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_18 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  puVar1 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142fcd3f0(param_1,puVar1);
  return;
}



// FUNCTION 142fd6ee0 FUN_142fd6ee0 body=138 status=ok
// SIG undefined FUN_142fd6ee0(void)

void FUN_142fd6ee0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_18 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  puVar1 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  UTicketManager::SetNoTicketScoreFactor(param_1,puVar1);
  return;
}



// FUNCTION 142fd6f70 FUN_142fd6f70 body=391 status=ok
// SIG undefined FUN_142fd6f70(void)

void FUN_142fd6f70(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [2];
  int local_res20 [2];
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
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
  FUN_142fcd480(local_18[0],local_20,local_28[0],bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 142fd7100 FUN_142fd7100 body=200 status=ok
// SIG undefined FUN_142fd7100(void)

void FUN_142fd7100(undefined8 param_1,longlong param_2)

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
  FUN_142fcd6f0(param_1,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 142fd71d0 FUN_142fd71d0 body=132 status=ok
// SIG undefined FUN_142fd71d0(void)

void FUN_142fd71d0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x288))(param_1,local_res8);
  return;
}



// FUNCTION 142fd7260 FUN_142fd7260 body=201 status=ok
// SIG undefined FUN_142fd7260(void)

void FUN_142fd7260(longlong *param_1,longlong param_2)

{
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
  (**(code **)(*param_1 + 0x280))(param_1,local_res8[0],local_res10);
  return;
}



// FUNCTION 142fd7330 FUN_142fd7330 body=219 status=ok
// SIG undefined FUN_142fd7330(void)

void FUN_142fd7330(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined2 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined1 local_10 [8];
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0x3f800000;
  uStack_54 = 0x3f800000;
  uStack_50 = 0x3f800000;
  uStack_4c = 0x3f800000;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  FWeakObjectPtr::operator=(local_10,0);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar1 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142fcecf0(param_1,puVar1);
  if (local_20 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142fd7410 FUN_142fd7410 body=245 status=ok
// SIG undefined FUN_142fd7410(void)

void FUN_142fd7410(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_3f;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_20;
  
  local_70 = 0xffffffff;
  local_6c = 0;
  local_68 = 0x3f800000;
  uStack_64 = 0x3f800000;
  uStack_60 = 0x3f800000;
  uStack_5c = 0x3f800000;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_3f = 0;
  local_30 = 0xffffffff;
  local_2c = 0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar1 = local_78;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142fcf1b0(param_1,puVar1);
  if ((int)local_50 != 0) {
    lVar2 = local_58 + 8;
    iVar3 = (int)local_50;
    do {
      FRichCurve::~FRichCurve(lVar2);
      lVar2 = lVar2 + 0x80;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142fd7510 FUN_142fd7510 body=66 status=ok
// SIG undefined FUN_142fd7510(void)

void FUN_142fd7510(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145a34a10;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_145a34a58;
  }
  return;
}



// FUNCTION 142fd7570 FUN_142fd7570 body=26 status=ok
// SIG undefined FUN_142fd7570(void)

undefined1 FUN_142fd7570(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 8) + 8) == '\0') {
    FUN_143001bd0();
  }
  return 1;
}



// FUNCTION 142fd7590 FUN_142fd7590 body=66 status=ok
// SIG undefined FUN_142fd7590(void)

void FUN_142fd7590(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145a34aa0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_145a34ae8;
  }
  return;
}



// FUNCTION 142fd75e0 FUN_142fd75e0 body=70 status=ok
// SIG undefined FUN_142fd75e0(void)

void FUN_142fd75e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 5) == '\0') {
    puVar3 = (undefined8 *)FUN_142ff6100();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 5) != '\0') {
        *(undefined1 *)(puVar1 + 5) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      puVar1[4] = puVar3[4];
      *(undefined1 *)(puVar1 + 5) = 1;
    }
  }
  return;
}



// FUNCTION 142fd7630 FUN_142fd7630 body=72 status=ok
// SIG undefined FUN_142fd7630(void)

undefined1 FUN_142fd7630(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 5) == '\0') {
    puVar3 = (undefined8 *)FUN_142ff6100();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 5) != '\0') {
        *(undefined1 *)(puVar1 + 5) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      puVar1[4] = puVar3[4];
      *(undefined1 *)(puVar1 + 5) = 1;
    }
  }
  return 1;
}



// FUNCTION 142fd7680 FUN_142fd7680 body=333 status=ok
// SIG undefined FUN_142fd7680(void)

void FUN_142fd7680(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  iVar1 = (int)param_2[1];
  if (iVar1 != 0) {
    iVar8 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + iVar1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeTo()
      ;
      iVar8 = (int)param_1[1];
    }
    puVar11 = (undefined8 *)*param_2;
    puVar10 = puVar11 + 1;
    puVar9 = (undefined8 *)((longlong)iVar8 * 0x88 + *param_1);
    puVar7 = (undefined4 *)((longlong)puVar9 + 0x84);
    iVar8 = iVar1;
    do {
      *puVar9 = *puVar11;
      uVar6 = puVar10[1];
      *(undefined8 *)(puVar7 + -0x1f) = *puVar10;
      *(undefined8 *)(puVar7 + -0x1d) = uVar6;
      uVar6 = puVar10[3];
      *(undefined8 *)(puVar7 + -0x1b) = puVar10[2];
      *(undefined8 *)(puVar7 + -0x19) = uVar6;
      uVar6 = puVar10[5];
      *(undefined8 *)(puVar7 + -0x17) = puVar10[4];
      *(undefined8 *)(puVar7 + -0x15) = uVar6;
      *(undefined8 *)(puVar7 + -0x13) = puVar10[6];
      uVar6 = puVar10[8];
      *(undefined8 *)(puVar7 + -0x11) = puVar10[7];
      *(undefined8 *)(puVar7 + -0xf) = uVar6;
      uVar6 = puVar10[10];
      *(undefined8 *)(puVar7 + -0xd) = puVar10[9];
      *(undefined8 *)(puVar7 + -0xb) = uVar6;
      uVar3 = *(undefined4 *)((longlong)puVar10 + 0x5c);
      uVar4 = *(undefined4 *)(puVar10 + 0xc);
      uVar5 = *(undefined4 *)((longlong)puVar10 + 100);
      puVar7[-9] = *(undefined4 *)(puVar10 + 0xb);
      puVar7[-8] = uVar3;
      puVar7[-7] = uVar4;
      puVar7[-6] = uVar5;
      *(undefined8 *)(puVar7 + -5) = puVar10[0xd];
      *(undefined8 *)(puVar7 + -3) = 0;
      iVar2 = *(int *)(puVar10 + 0xf);
      _Src = (void *)puVar10[0xe];
      puVar7[-1] = iVar2;
      if (iVar2 == 0) {
        *puVar7 = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar7 + -3,iVar2,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar7 + -3),_Src,(longlong)iVar2 << 3);
      }
      puVar9 = puVar9 + 0x11;
      puVar7 = puVar7 + 0x22;
      puVar11 = puVar11 + 0x11;
      puVar10 = puVar10 + 0x11;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  return;
}



// FUNCTION 142fd77d0 FUN_142fd77d0 body=196 status=ok
// SIG undefined FUN_142fd77d0(void)

void FUN_142fd77d0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    iVar7 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + iVar1) {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo();
      iVar7 = (int)param_1[1];
    }
    param_2 = (undefined8 *)*param_2;
    puVar6 = (undefined8 *)((longlong)iVar7 * 0x58 + *param_1);
    iVar7 = iVar1;
    do {
      *puVar6 = *param_2;
      puVar6[1] = param_2[1];
      uVar5 = param_2[3];
      puVar6[2] = param_2[2];
      puVar6[3] = uVar5;
      uVar5 = param_2[5];
      puVar6[4] = param_2[4];
      puVar6[5] = uVar5;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x34);
      uVar3 = *(undefined4 *)(param_2 + 7);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
      *(undefined4 *)(puVar6 + 6) = *(undefined4 *)(param_2 + 6);
      *(undefined4 *)((longlong)puVar6 + 0x34) = uVar2;
      *(undefined4 *)(puVar6 + 7) = uVar3;
      *(undefined4 *)((longlong)puVar6 + 0x3c) = uVar4;
      puVar6[8] = param_2[8];
      puVar6[9] = 0;
      FUN_142fd78a0(puVar6 + 9,param_2[9],*(undefined4 *)(param_2 + 10),0,0);
      puVar6 = puVar6 + 0xb;
      param_2 = param_2 + 0xb;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  return;
}



// FUNCTION 142fd78a0 FUN_142fd78a0 body=267 status=ok
// SIG undefined FUN_142fd78a0(void)

void FUN_142fd78a0(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FCloudFileHeader,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  puVar8 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    puVar7 = (undefined8 *)(param_2 + 8);
    puVar6 = (undefined4 *)((longlong)puVar8 + 0x54);
    do {
      *puVar8 = puVar7[-1];
      *(undefined8 *)(puVar6 + -0x13) = *puVar7;
      uVar5 = puVar7[2];
      *(undefined8 *)(puVar6 + -0x11) = puVar7[1];
      *(undefined8 *)(puVar6 + -0xf) = uVar5;
      uVar5 = puVar7[4];
      *(undefined8 *)(puVar6 + -0xd) = puVar7[3];
      *(undefined8 *)(puVar6 + -0xb) = uVar5;
      uVar2 = *(undefined4 *)((longlong)puVar7 + 0x2c);
      uVar3 = *(undefined4 *)(puVar7 + 6);
      uVar4 = *(undefined4 *)((longlong)puVar7 + 0x34);
      puVar6[-9] = *(undefined4 *)(puVar7 + 5);
      puVar6[-8] = uVar2;
      puVar6[-7] = uVar3;
      puVar6[-6] = uVar4;
      *(undefined8 *)(puVar6 + -5) = puVar7[7];
      *(undefined8 *)(puVar6 + -3) = 0;
      iVar1 = *(int *)(puVar7 + 9);
      _Src = (void *)puVar7[8];
      puVar6[-1] = iVar1;
      if (iVar1 == 0) {
        *puVar6 = 0;
      }
      else {
        TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy
                  (puVar6 + -3,iVar1,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar6 + -3),_Src,(longlong)iVar1 * 0x48);
      }
      puVar8 = puVar8 + 0xb;
      puVar6 = puVar6 + 0x16;
      puVar7 = puVar7 + 0xb;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 142fd79b0 FUN_142fd79b0 body=704 status=ok
// SIG undefined FUN_142fd79b0(void)

uint * FUN_142fd79b0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  void *_Dst;
  int iVar9;
  uint uVar10;
  char cVar11;
  undefined4 uVar12;
  uint *_Src;
  bool bVar13;
  uint local_res8 [2];
  uint local_res10;
  uint local_res14;
  undefined8 *local_res18;
  undefined1 *local_res20;
  
  iVar9 = 1;
  uVar12 = 0xffffffff;
  local_res20 = param_4;
  local_res18 = param_3;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)(int)uVar10 * 0x20 + 4 + *param_1);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = uVar10;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 +
                   (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar10 & 0x1f);
  _Src = (uint *)((longlong)(int)uVar10 * 0x20 + *param_1);
  puVar1 = (uint *)*local_res18;
  *_Src = *puVar1;
  _Src[1] = puVar1[1];
  _Src[2] = 0;
  _Src[3] = 0;
  _Src[4] = 0;
  _Src[5] = 0;
  _Src[6] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = _Src[1];
    local_res10 = *_Src;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,&local_res10);
    uVar10 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      _Dst = (void *)(lVar8 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      uVar4 = *param_2;
      bVar3 = (byte)uVar4 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x20 + *param_1) = uVar4;
      }
      puVar7 = (undefined4 *)((longlong)(int)uVar4 * 0x20 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      puVar7[1] = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar4;
      plVar5 = (longlong *)param_1[4];
      *param_2 = uVar10;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar5 +
                       (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_142fd7c4f;
    }
  }
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar10) {
    uVar4 = (uVar10 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar11 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar9;
    }
    uVar4 = (uVar10 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar11 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar10 = (_Src[1] ^ *_Src) & (int)param_1[9] - 1U;
    _Src[7] = uVar10;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    _Src[6] = *(uint *)((longlong)plVar5 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(uint *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
    local_res20 = param_4;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
    local_res20 = param_4;
  }
LAB_142fd7c4f:
  if (local_res20 != (undefined1 *)0x0) {
    *local_res20 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 142fd7c70 FUN_142fd7c70 body=718 status=ok
// SIG undefined FUN_142fd7c70(void)

uint * FUN_142fd7c70(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  char *pcVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  void *_Dst;
  char cVar11;
  uint uVar12;
  ulonglong *_Src;
  uint uVar13;
  bool bVar14;
  uint local_res8 [2];
  
  iVar7 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)(int)uVar10 * 0x20 + 4 + *param_1);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar10;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar10 & 0x1f);
  _Src = (ulonglong *)((longlong)(int)uVar10 * 0x20 + *param_1);
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  _Src[1] = 0;
  _Src[2] = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    uVar4 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      _Dst = (void *)(lVar9 * 0x20 + *param_1);
      iVar7 = *(int *)((longlong)_Dst + 0x10);
      lVar9 = *(longlong *)((longlong)_Dst + 8);
      if (iVar7 != 0) {
        pcVar5 = (char *)(lVar9 + 0xc);
        do {
          if (*pcVar5 != '\0') {
            *pcVar5 = '\0';
          }
          pcVar5 = pcVar5 + 0x18;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        lVar9 = *(longlong *)((longlong)_Dst + 8);
      }
      if (lVar9 != 0) {
        FMemory::Free(lVar9);
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar4;
      goto LAB_142fd7f15;
    }
  }
  if (3 < uVar13) {
    uVar4 = (uVar13 >> 1) + 8;
    iVar7 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar11 = '\0';
    if (uVar4 != 0) {
      iVar8 = 0x1f - iVar7;
    }
    uVar4 = (uVar13 >> 1) + 7;
    iVar7 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar11 = '\x1f' - (char)iVar7;
    }
    iVar7 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    iVar7 = (int)(*_Src >> 4);
    uVar4 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
    uVar12 = -(iVar7 + uVar4) ^ uVar4 >> 0xd;
    uVar13 = (iVar7 - uVar4) - uVar12 ^ uVar12 >> 0xc;
    uVar4 = (uVar4 - uVar13) - uVar12 ^ uVar13 << 0x10;
    uVar12 = (uVar12 - uVar4) - uVar13 ^ uVar4 >> 5;
    uVar13 = (uVar13 - uVar4) - uVar12 ^ uVar12 >> 3;
    uVar4 = (uVar4 - uVar13) - uVar12 ^ uVar13 << 10;
    uVar13 = ((uVar12 - uVar4) - uVar13 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar13;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         uVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142fd7f15:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 142fd7f40 FUN_142fd7f40 body=704 status=ok
// SIG undefined FUN_142fd7f40(void)

int * FUN_142fd7f40(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  void *_Dst;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  bool local_res8;
  
  uVar10 = 0xffffffff;
  iVar9 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x30);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x30) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar12;
  local_res8 = false;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar13 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  plVar13 = (longlong *)((longlong)iVar12 * 0x30 + *param_1);
  lVar2 = *(longlong *)*param_3;
  *plVar13 = lVar2;
  plVar13[1] = 0;
  plVar13[2] = 0;
  plVar13[3] = 0;
  plVar13[4] = 0;
  *(undefined4 *)(plVar13 + 5) = 0xffffffff;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar12 != 1) {
    iVar8 = iVar9;
    if (iVar12 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        do {
          iVar8 = iVar5;
          if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x30) == lVar2) break;
          iVar5 = *(int *)(*param_1 + 0x28 + (longlong)iVar5 * 0x30);
          iVar8 = iVar9;
        } while (iVar5 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x30 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar13,0x28);
      iVar9 = *param_2;
      bVar3 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = iVar9;
      }
      puVar6 = (undefined4 *)((longlong)iVar9 * 0x30 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar10 = (undefined4)param_1[6];
      }
      puVar6[1] = uVar10;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar13 +
                       (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_142fd81dc;
    }
  }
  cVar4 = TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar12,0);
  if (cVar4 == '\0') {
    uVar11 = (int)((ulonglong)*plVar13 >> 0x20) + (int)*plVar13 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 0x2c) = uVar11;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 5) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_142fd81dc:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142fd8200 FUN_142fd8200 body=677 status=ok
// SIG undefined FUN_142fd8200(void)

int * FUN_142fd8200(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  bool bVar13;
  int local_res8 [2];
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)iVar8 * 0x18);
  uVar3 = *(ulonglong *)*param_3;
  puVar4 = (undefined4 *)param_3[1];
  bVar13 = false;
  *_Src = uVar3;
  *(undefined4 *)(_Src + 1) = *puVar4;
  *(undefined4 *)((longlong)_Src + 0xc) = puVar4[1];
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    bVar13 = local_res8[0] != -1;
    if (bVar13) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)local_res8[0] * 0x18),_Src,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_142fd847c;
    }
  }
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar10) {
    uVar6 = (uVar10 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar11 = '\0';
    if (uVar6 != 0) {
      iVar8 = 0x1f - iVar9;
    }
    uVar6 = (uVar10 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar11 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    iVar9 = (int)(*_Src >> 4);
    uVar6 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar12 = -(iVar9 + uVar6) ^ uVar6 >> 0xd;
    uVar10 = (iVar9 - uVar6) - uVar12 ^ uVar12 >> 0xc;
    uVar6 = (uVar6 - uVar10) - uVar12 ^ uVar10 << 0x10;
    uVar12 = (uVar12 - uVar6) - uVar10 ^ uVar6 >> 5;
    uVar10 = (uVar10 - uVar6) - uVar12 ^ uVar12 >> 3;
    uVar6 = (uVar6 - uVar10) - uVar12 ^ uVar10 << 10;
    uVar10 = ((uVar12 - uVar6) - uVar10 ^ uVar6 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar10;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142fd847c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 142fd84b0 FUN_142fd84b0 body=691 status=ok
// SIG undefined FUN_142fd84b0(void)

int * FUN_142fd84b0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong *_Src;
  uint *puVar16;
  undefined4 uVar17;
  bool bVar18;
  int local_res8 [2];
  int local_res10;
  
  uVar17 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar9 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar9;
  lVar7 = (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar16 = (uint *)((longlong)plVar8 + lVar7);
  *puVar16 = *puVar16 | 1 << ((byte)iVar9 & 0x1f);
  puVar3 = (ulonglong *)param_3[1];
  lVar11 = (longlong)iVar9 * 0x20;
  _Src = (ulonglong *)(*param_1 + lVar11);
  uVar4 = *(ulonglong *)*param_3;
  *_Src = uVar4;
  _Src[1] = *puVar3;
  *(int *)(_Src + 2) = (int)puVar3[1];
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  local_res10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (local_res10 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar4);
    iVar1 = local_res8[0];
    lVar14 = (longlong)local_res8[0];
    bVar18 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar18);
    if (bVar18) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar14 * 0x20 + *param_1),_Src,0x18);
      bVar5 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar9;
      }
      lVar14 = *param_1;
      *(undefined4 *)(lVar11 + lVar14) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar17 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar11 + 4 + lVar14) = uVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar1;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar16 = (uint *)((longlong)plVar8 + lVar7);
      *puVar16 = *puVar16 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      uVar13 = (undefined1)local_res8[0];
      goto LAB_142fd8739;
    }
  }
  uVar13 = 0;
  cVar6 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,local_res10,0);
  if (cVar6 == '\0') {
    iVar9 = (int)(*_Src >> 4);
    uVar12 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar15 = -(iVar9 + uVar12) ^ uVar12 >> 0xd;
    uVar10 = (iVar9 - uVar12) - uVar15 ^ uVar15 >> 0xc;
    uVar12 = (uVar12 - uVar10) - uVar15 ^ uVar10 << 0x10;
    uVar15 = (uVar15 - uVar12) - uVar10 ^ uVar12 >> 5;
    uVar10 = (uVar10 - uVar12) - uVar15 ^ uVar15 >> 3;
    uVar12 = (uVar12 - uVar10) - uVar15 ^ uVar10 << 10;
    uVar10 = ((uVar15 - uVar12) - uVar10 ^ uVar12 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar10;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_142fd8739:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar13;
  }
  return param_2;
}



// FUNCTION 142fd8770 FUN_142fd8770 body=641 status=ok
// SIG undefined FUN_142fd8770(void)

uint * FUN_142fd8770(longlong *param_1,uint *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  undefined4 *_Src;
  void *_Dst;
  undefined4 uVar15;
  bool bVar16;
  uint local_res8 [2];
  
  uVar15 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar13 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar13 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar13 = *(uint *)(param_1 + 6);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)(int)uVar13 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = uVar13;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar12 +
                   (longlong)((int)(uVar13 + ((int)uVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar13 & 0x1f);
  puVar3 = (undefined8 *)param_3[1];
  puVar11 = (undefined4 *)*param_3;
  _Src = (undefined4 *)((longlong)(int)uVar13 * 0x38 + *param_1);
  uVar5 = puVar11[1];
  uVar6 = puVar11[2];
  uVar7 = puVar11[3];
  *_Src = *puVar11;
  _Src[1] = uVar5;
  _Src[2] = uVar6;
  _Src[3] = uVar7;
  *(undefined8 *)(_Src + 4) = *puVar3;
  *(undefined8 *)(_Src + 6) = 0;
  *(undefined8 *)(_Src + 6) = puVar3[1];
  puVar3[1] = 0;
  _Src[8] = *(undefined4 *)(puVar3 + 2);
  _Src[9] = *(undefined4 *)((longlong)puVar3 + 0x14);
  puVar3[2] = 0;
  _Src[10] = *(undefined4 *)(puVar3 + 3);
  _Src[0xb] = *(undefined4 *)((longlong)puVar3 + 0x1c);
  _Src[0xc] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,FUdpMessageTunnel::FNodeInfo>,TDefaultMapHashableKeyFuncs<FGuid,FUdpMessageTunnel::FNodeInfo,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar13 = local_res8[0];
    lVar14 = (longlong)(int)local_res8[0];
    bVar16 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar16);
    if (bVar16) {
      _Dst = (void *)(lVar14 * 0x38 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x30);
      uVar10 = *param_2;
      bVar4 = (byte)uVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x38 + *param_1) = uVar10;
      }
      puVar11 = (undefined4 *)((longlong)(int)uVar10 * 0x38 + *param_1);
      *puVar11 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar15 = (undefined4)param_1[6];
      }
      puVar11[1] = uVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar10;
      plVar12 = (longlong *)param_1[4];
      *param_2 = uVar13;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar12 +
                       (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_142fd89cb;
    }
  }
  cVar8 = TSet<TTuple<FGuid,FUdpMessageTunnel::FNodeInfo>,TDefaultMapHashableKeyFuncs<FGuid,FUdpMessageTunnel::FNodeInfo,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar8 == '\0') {
    uVar13 = *param_2;
    uVar10 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar10 = (int)param_1[9] - 1U & uVar10;
    _Src[0xd] = uVar10;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    _Src[0xc] = *(undefined4 *)
                 ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(uint *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         uVar13;
  }
LAB_142fd89cb:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 142fd8a00 FUN_142fd8a00 body=694 status=ok
// SIG undefined FUN_142fd8a00(void)

uint * FUN_142fd8a00(longlong *param_1,uint *param_2,longlong *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  char cVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uVar16;
  bool bVar17;
  uint local_res8 [2];
  undefined8 *local_res10;
  
  iVar12 = 1;
  uVar16 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar11 + 1)) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = *(uint *)(param_1 + 6);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)(int)uVar11 * 0x30);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x30) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = uVar11;
  local_res8[0] = local_res8[0] & 0xffffff00;
  lVar6 = (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar15 = (uint *)((longlong)plVar8 + lVar6);
  *puVar15 = *puVar15 | 1 << ((byte)uVar11 & 0x1f);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  lVar7 = (longlong)(int)uVar11 * 0x30;
  local_res10 = (undefined8 *)(*param_1 + lVar7);
  *local_res10 = *puVar1;
  local_res10[1] = puVar1[1];
  *(undefined4 *)(local_res10 + 2) = *(undefined4 *)(puVar1 + 2);
  local_res10[3] = puVar1[3];
  *(undefined4 *)(local_res10 + 4) = *puVar2;
  *(undefined4 *)(local_res10 + 5) = 0xffffffff;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar14 != 1) {
    FUN_142ff3230(param_1,local_res8,local_res10);
    uVar5 = local_res8[0];
    lVar10 = (longlong)(int)local_res8[0];
    bVar17 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar17);
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar10 * 0x30 + *param_1),local_res10,0x28);
      bVar3 = (byte)uVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = uVar11;
      }
      lVar10 = *param_1;
      *(undefined4 *)(lVar7 + lVar10) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar16 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar7 + 4 + lVar10) = uVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar11;
      plVar8 = (longlong *)param_1[4];
      *param_2 = uVar5;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar15 = (uint *)((longlong)plVar8 + lVar6);
      *puVar15 = *puVar15 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_142fd8c87;
    }
  }
  puVar1 = local_res10;
  if (3 < uVar14) {
    uVar5 = (uVar14 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar9 = 0x20;
    cVar13 = '\0';
    if (uVar5 != 0) {
      iVar9 = 0x1f - iVar12;
    }
    uVar5 = (uVar14 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar13 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    uVar14 = FUN_142fffec0(local_res10);
    uVar14 = uVar14 & (int)param_1[9] - 1U;
    *(uint *)((longlong)puVar1 + 0x2c) = uVar14;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(puVar1 + 5) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(uint *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         uVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    TSet<TTuple<FAssetIdentifier,FDependsNode_*>,TDefaultMapHashableKeyFuncs<FAssetIdentifier,FDependsNode_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142fd8c87:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 142fd8cc0 FUN_142fd8cc0 body=615 status=ok
// SIG undefined FUN_142fd8cc0(void)

uint * FUN_142fd8cc0(longlong *param_1,uint *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *_Src;
  bool bVar13;
  uint local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar7 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar7 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar7 = *(uint *)(param_1 + 6);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)((longlong)(int)uVar7 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar9 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar7;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar7 & 0x1f);
  puVar2 = (ulonglong *)*param_3;
  _Src = (ulonglong *)((longlong)(int)uVar7 * 0x38 + *param_1);
  puVar3 = (undefined4 *)param_3[1];
  *_Src = *puVar2;
  _Src[1] = puVar2[1];
  _Src[2] = puVar2[2];
  *(int *)(_Src + 3) = (int)puVar2[3];
  _Src[4] = puVar2[4];
  *(undefined4 *)(_Src + 5) = *puVar3;
  *(undefined4 *)(_Src + 6) = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    FUN_142ff3310(param_1,local_res8,_Src);
    uVar10 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar8 * 0x38 + *param_1),_Src,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,uVar7,1);
      *param_2 = uVar10;
      goto LAB_142fd8ef9;
    }
  }
  cVar4 = FUN_142feb610(param_1,iVar9,0);
  if (cVar4 == '\0') {
    iVar9 = (int)(*_Src >> 4);
    uVar10 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar7 = -(uVar10 + iVar9) ^ uVar10 >> 0xd;
    uVar12 = (iVar9 - uVar10) - uVar7 ^ uVar7 >> 0xc;
    uVar11 = (uVar10 - uVar12) - uVar7 ^ uVar12 << 0x10;
    uVar10 = (uVar7 - uVar11) - uVar12 ^ uVar11 >> 5;
    uVar12 = (uVar12 - uVar11) - uVar10 ^ uVar10 >> 3;
    uVar11 = (uVar11 - uVar12) - uVar10 ^ uVar12 << 10;
    uVar7 = FUN_142fffec0(_Src + 1);
    uVar7 = (uVar7 ^ (uVar10 - uVar11) - uVar12 ^ uVar11 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x34) = uVar7;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 6) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_142fd8ef9:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 142fd8f30 FUN_142fd8f30 body=570 status=ok
// SIG undefined FUN_142fd8f30(void)

void FUN_142fd8f30(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_res20 [8];
  undefined1 local_108 [16];
  undefined8 local_f8 [4];
  undefined8 local_d8 [4];
  undefined8 local_b8;
  undefined1 local_b0 [128];
  undefined1 *local_30;
  undefined8 local_28;
  
  cVar2 = FUN_14218fd60();
  if (cVar2 == '\0') {
    FUN_142191860();
  }
  else {
    uVar7 = (int)((ulonglong)*param_2 >> 0x20) + (int)*param_2;
    iVar3 = FUN_14218de50(*param_3);
    uVar11 = iVar3 - uVar7 ^ uVar7 >> 0xd;
    uVar10 = (-0x61c88647 - uVar11) - uVar7 ^ uVar11 << 8;
    uVar7 = (uVar7 - uVar10) - uVar11 ^ uVar10 >> 0xd;
    uVar11 = (uVar11 - uVar10) - uVar7 ^ uVar7 >> 0xc;
    uVar10 = (uVar10 - uVar11) - uVar7 ^ uVar11 << 0x10;
    uVar7 = (uVar7 - uVar10) - uVar11 ^ uVar10 >> 5;
    uVar11 = (uVar11 - uVar10) - uVar7 ^ uVar7 >> 3;
    uVar10 = (uVar10 - uVar11) - uVar7 ^ uVar11 << 10;
    FUN_14217c550(local_res20,(uVar7 - uVar10) - uVar11 ^ uVar10 >> 0xf);
    uVar4 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(local_108,local_res20);
    lVar5 = FUN_14218b3a0(param_1,uVar4);
    if (lVar5 == 0) {
      uVar4 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=
                        (local_108,local_res20);
      icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(&local_b8,uVar4);
      local_30 = (undefined1 *)0x0;
      local_28 = 0;
      FUN_14217e740(local_f8);
      FUN_142194380(local_f8,0x13,0,0,0);
      local_f8[0] = *param_2;
      FUN_14217e740(local_d8);
      FUN_142194380(local_d8,0x28,0,0,0);
      local_d8[0] = *param_3;
      lVar5 = 2;
      if (local_28._4_4_ < 2) {
        FUN_140a70170(local_b0,2);
      }
      puVar9 = local_f8;
      do {
        uVar1 = local_28;
        lVar8 = (longlong)(int)local_28;
        iVar3 = (int)local_28 + 1;
        local_28 = CONCAT44(local_28._4_4_,iVar3);
        if (local_28._4_4_ < iVar3) {
          TArray<FBlendedCurve,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (local_b0,uVar1 & 0xffffffff);
        }
        puVar6 = local_b0;
        if (local_30 != (undefined1 *)0x0) {
          puVar6 = local_30;
        }
        FUN_14217e5b0(puVar6 + lVar8 * 0x20,puVar9);
        puVar9 = puVar9 + 4;
      } while (puVar9 != &local_b8);
      puVar9 = &local_b8;
      do {
        puVar9 = puVar9 + -4;
        FUN_14217f430(puVar9);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      FUN_1421912a0(param_1,&local_b8);
    }
  }
  return;
}



// FUNCTION 142fd9170 HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_> body=443 status=ok
// SIG undefined HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>(void)

void AlgoImpl::
     HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
               (undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar8 = iVar6;
    iVar9 = iVar5;
joined_r0x000142fd91b6:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar7 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          cVar4 = FUN_142fe1120(param_4,param_1 + (iVar6 + 2),param_1 + iVar7);
          if (cVar4 != '\0') {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        puVar10 = param_1 + iVar7;
        puVar1 = param_1 + iVar5;
        cVar4 = FUN_142fe1120(param_4,puVar1,puVar10);
        if (cVar4 != '\0') {
          if (puVar1 != puVar10) {
            uVar3 = *puVar1;
            *puVar1 = *puVar10;
            *puVar10 = uVar3;
          }
          iVar6 = iVar7 * 2 + 1;
          iVar5 = iVar7;
          goto joined_r0x000142fd91b6;
        }
      }
      iVar6 = iVar8 + -2;
      iVar5 = iVar9 + -1;
      iVar8 = iVar6;
      iVar9 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar10 = param_1 + param_2;
    do {
      if (param_1 != puVar10) {
        uVar3 = *param_1;
        *param_1 = *puVar10;
        *puVar10 = uVar3;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar6 = iVar5 * 2;
          iVar8 = iVar6 + 1;
          if (iVar6 + 2 < param_2) {
            cVar4 = FUN_142fe1120(param_4,param_1 + (iVar6 + 2),param_1 + iVar8);
            if (cVar4 != '\0') {
              iVar8 = iVar6;
            }
            iVar8 = iVar8 + 1;
          }
          puVar1 = param_1 + iVar8;
          puVar2 = param_1 + iVar5;
          cVar4 = FUN_142fe1120(param_4,puVar2,puVar1);
          if (cVar4 == '\0') break;
          if (puVar2 != puVar1) {
            uVar3 = *puVar2;
            *puVar2 = *puVar1;
            *puVar1 = uVar3;
          }
          iVar5 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar10 = puVar10 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142fd9330 HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_> body=443 status=ok
// SIG undefined HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>(void)

void AlgoImpl::
     HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
               (undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar8 = iVar6;
    iVar9 = iVar5;
joined_r0x000142fd9376:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar7 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          cVar4 = FUN_142fe1840(param_4,param_1 + (iVar6 + 2),param_1 + iVar7);
          if (cVar4 != '\0') {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        puVar10 = param_1 + iVar7;
        puVar1 = param_1 + iVar5;
        cVar4 = FUN_142fe1840(param_4,puVar1,puVar10);
        if (cVar4 != '\0') {
          if (puVar1 != puVar10) {
            uVar3 = *puVar1;
            *puVar1 = *puVar10;
            *puVar10 = uVar3;
          }
          iVar6 = iVar7 * 2 + 1;
          iVar5 = iVar7;
          goto joined_r0x000142fd9376;
        }
      }
      iVar6 = iVar8 + -2;
      iVar5 = iVar9 + -1;
      iVar8 = iVar6;
      iVar9 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar10 = param_1 + param_2;
    do {
      if (param_1 != puVar10) {
        uVar3 = *param_1;
        *param_1 = *puVar10;
        *puVar10 = uVar3;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar6 = iVar5 * 2;
          iVar8 = iVar6 + 1;
          if (iVar6 + 2 < param_2) {
            cVar4 = FUN_142fe1840(param_4,param_1 + (iVar6 + 2),param_1 + iVar8);
            if (cVar4 != '\0') {
              iVar8 = iVar6;
            }
            iVar8 = iVar8 + 1;
          }
          puVar1 = param_1 + iVar8;
          puVar2 = param_1 + iVar5;
          cVar4 = FUN_142fe1840(param_4,puVar2,puVar1);
          if (cVar4 == '\0') break;
          if (puVar2 != puVar1) {
            uVar3 = *puVar2;
            *puVar2 = *puVar1;
            *puVar1 = uVar3;
          }
          iVar5 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar10 = puVar10 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142fd94f0 HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_> body=443 status=ok
// SIG undefined HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>(void)

void AlgoImpl::
     HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
               (undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar8 = iVar6;
    iVar9 = iVar5;
joined_r0x000142fd9536:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar7 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          cVar4 = FUN_142fe1980(param_4,param_1 + (iVar6 + 2),param_1 + iVar7);
          if (cVar4 != '\0') {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        puVar10 = param_1 + iVar7;
        puVar1 = param_1 + iVar5;
        cVar4 = FUN_142fe1980(param_4,puVar1,puVar10);
        if (cVar4 != '\0') {
          if (puVar1 != puVar10) {
            uVar3 = *puVar1;
            *puVar1 = *puVar10;
            *puVar10 = uVar3;
          }
          iVar6 = iVar7 * 2 + 1;
          iVar5 = iVar7;
          goto joined_r0x000142fd9536;
        }
      }
      iVar6 = iVar8 + -2;
      iVar5 = iVar9 + -1;
      iVar8 = iVar6;
      iVar9 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar10 = param_1 + param_2;
    do {
      if (param_1 != puVar10) {
        uVar3 = *param_1;
        *param_1 = *puVar10;
        *puVar10 = uVar3;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar6 = iVar5 * 2;
          iVar8 = iVar6 + 1;
          if (iVar6 + 2 < param_2) {
            cVar4 = FUN_142fe1980(param_4,param_1 + (iVar6 + 2),param_1 + iVar8);
            if (cVar4 != '\0') {
              iVar8 = iVar6;
            }
            iVar8 = iVar8 + 1;
          }
          puVar1 = param_1 + iVar8;
          puVar2 = param_1 + iVar5;
          cVar4 = FUN_142fe1980(param_4,puVar2,puVar1);
          if (cVar4 == '\0') break;
          if (puVar2 != puVar1) {
            uVar3 = *puVar2;
            *puVar2 = *puVar1;
            *puVar1 = uVar3;
          }
          iVar5 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar10 = puVar10 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142fd96b0 IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_> body=706 status=ok
// SIG undefined IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar11);
    local_338 = (undefined4)(longlong)(fVar11 + fVar11);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar8 = &local_348;
    do {
      puVar6 = (undefined8 *)*plVar8;
      puVar10 = (undefined8 *)plVar8[1];
      local_358 = plVar8[2];
      lVar3 = ((longlong)puVar10 - (longlong)puVar6 >> 3) + 1;
      puVar9 = puVar6;
      iVar7 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_142fd9790:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          puVar6 = puVar9 + (lVar3 >> 1);
          if (puVar6 != puVar9) {
            uVar1 = *puVar6;
            *puVar6 = *puVar9;
            *puVar9 = uVar1;
          }
          puVar4 = puVar10 + 1;
          puVar6 = puVar9;
LAB_142fd97c7:
          puVar6 = puVar6 + 1;
          if (puVar6 <= puVar10) goto code_r0x000142fd97d0;
          goto LAB_142fd97e2;
        }
        for (; puVar4 = puVar9, puVar6 = puVar9, puVar9 < puVar10; puVar10 = puVar10 + -1) {
          while (puVar6 = puVar6 + 1, puVar6 <= puVar10) {
            cVar2 = FUN_142fe1120(param_4,puVar4,puVar6);
            if (cVar2 != '\0') {
              puVar4 = puVar6;
            }
          }
          if (puVar4 != puVar10) {
            uVar1 = *puVar4;
            *puVar4 = *puVar10;
            *puVar10 = uVar1;
          }
        }
        goto LAB_142fd98bf;
      }
LAB_142fd98b0:
      HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
                (puVar6,lVar3,param_3,param_4);
LAB_142fd98bf:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  return;
code_r0x000142fd97d0:
  cVar2 = FUN_142fe1120(param_4,puVar9,puVar6);
  if (cVar2 == '\0') goto LAB_142fd97c7;
LAB_142fd97e2:
  do {
    puVar5 = puVar4;
    puVar4 = puVar5 + -1;
    if (puVar4 <= puVar9) break;
    cVar2 = FUN_142fe1120(param_4,puVar4,puVar9);
  } while (cVar2 == '\0');
  if (puVar6 <= puVar4) {
    if (puVar6 != puVar4) {
      uVar1 = *puVar6;
      *puVar6 = *puVar4;
      *puVar4 = uVar1;
    }
    goto LAB_142fd97c7;
  }
  if (puVar9 != puVar4) {
    uVar1 = *puVar9;
    *puVar9 = *puVar4;
    *puVar4 = uVar1;
  }
  iVar7 = iVar7 + -1;
  if ((longlong)((longlong)puVar4 + (-8 - (longlong)puVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar10 - (longlong)puVar6 & 0xfffffffffffffff8U)) {
    if (puVar6 < puVar10) {
      *plVar8 = (longlong)puVar6;
      plVar8[1] = (longlong)puVar10;
      *(int *)(plVar8 + 2) = iVar7;
      plVar8 = plVar8 + 3;
    }
    if (puVar4 <= puVar9 + 1) goto LAB_142fd98bf;
    puVar10 = puVar5 + -2;
    puVar6 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar4) {
      *plVar8 = (longlong)puVar9;
      plVar8[1] = (longlong)(puVar5 + -2);
      *(int *)(plVar8 + 2) = iVar7;
      plVar8 = plVar8 + 3;
    }
    if (puVar10 <= puVar6) goto LAB_142fd98bf;
  }
  lVar3 = ((longlong)puVar10 - (longlong)puVar6 >> 3) + 1;
  puVar9 = puVar6;
  if (iVar7 == 0) goto LAB_142fd98b0;
  goto LAB_142fd9790;
}



// FUNCTION 142fd9980 IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_> body=706 status=ok
// SIG undefined IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar11);
    local_338 = (undefined4)(longlong)(fVar11 + fVar11);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar8 = &local_348;
    do {
      puVar6 = (undefined8 *)*plVar8;
      puVar10 = (undefined8 *)plVar8[1];
      local_358 = plVar8[2];
      lVar3 = ((longlong)puVar10 - (longlong)puVar6 >> 3) + 1;
      puVar9 = puVar6;
      iVar7 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_142fd9a60:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          puVar6 = puVar9 + (lVar3 >> 1);
          if (puVar6 != puVar9) {
            uVar1 = *puVar6;
            *puVar6 = *puVar9;
            *puVar9 = uVar1;
          }
          puVar4 = puVar10 + 1;
          puVar6 = puVar9;
LAB_142fd9a97:
          puVar6 = puVar6 + 1;
          if (puVar6 <= puVar10) goto code_r0x000142fd9aa0;
          goto LAB_142fd9ab2;
        }
        for (; puVar4 = puVar9, puVar6 = puVar9, puVar9 < puVar10; puVar10 = puVar10 + -1) {
          while (puVar6 = puVar6 + 1, puVar6 <= puVar10) {
            cVar2 = FUN_142fe1840(param_4,puVar4,puVar6);
            if (cVar2 != '\0') {
              puVar4 = puVar6;
            }
          }
          if (puVar4 != puVar10) {
            uVar1 = *puVar4;
            *puVar4 = *puVar10;
            *puVar10 = uVar1;
          }
        }
        goto LAB_142fd9b8f;
      }
LAB_142fd9b80:
      HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
                (puVar6,lVar3,param_3,param_4);
LAB_142fd9b8f:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  return;
code_r0x000142fd9aa0:
  cVar2 = FUN_142fe1840(param_4,puVar9,puVar6);
  if (cVar2 == '\0') goto LAB_142fd9a97;
LAB_142fd9ab2:
  do {
    puVar5 = puVar4;
    puVar4 = puVar5 + -1;
    if (puVar4 <= puVar9) break;
    cVar2 = FUN_142fe1840(param_4,puVar4,puVar9);
  } while (cVar2 == '\0');
  if (puVar6 <= puVar4) {
    if (puVar6 != puVar4) {
      uVar1 = *puVar6;
      *puVar6 = *puVar4;
      *puVar4 = uVar1;
    }
    goto LAB_142fd9a97;
  }
  if (puVar9 != puVar4) {
    uVar1 = *puVar9;
    *puVar9 = *puVar4;
    *puVar4 = uVar1;
  }
  iVar7 = iVar7 + -1;
  if ((longlong)((longlong)puVar4 + (-8 - (longlong)puVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar10 - (longlong)puVar6 & 0xfffffffffffffff8U)) {
    if (puVar6 < puVar10) {
      *plVar8 = (longlong)puVar6;
      plVar8[1] = (longlong)puVar10;
      *(int *)(plVar8 + 2) = iVar7;
      plVar8 = plVar8 + 3;
    }
    if (puVar4 <= puVar9 + 1) goto LAB_142fd9b8f;
    puVar10 = puVar5 + -2;
    puVar6 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar4) {
      *plVar8 = (longlong)puVar9;
      plVar8[1] = (longlong)(puVar5 + -2);
      *(int *)(plVar8 + 2) = iVar7;
      plVar8 = plVar8 + 3;
    }
    if (puVar10 <= puVar6) goto LAB_142fd9b8f;
  }
  lVar3 = ((longlong)puVar10 - (longlong)puVar6 >> 3) + 1;
  puVar9 = puVar6;
  if (iVar7 == 0) goto LAB_142fd9b80;
  goto LAB_142fd9a60;
}



// FUNCTION 142fd9c50 IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_> body=706 status=ok
// SIG undefined IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar11);
    local_338 = (undefined4)(longlong)(fVar11 + fVar11);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar8 = &local_348;
    do {
      puVar6 = (undefined8 *)*plVar8;
      puVar10 = (undefined8 *)plVar8[1];
      local_358 = plVar8[2];
      lVar3 = ((longlong)puVar10 - (longlong)puVar6 >> 3) + 1;
      puVar9 = puVar6;
      iVar7 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_142fd9d30:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          puVar6 = puVar9 + (lVar3 >> 1);
          if (puVar6 != puVar9) {
            uVar1 = *puVar6;
            *puVar6 = *puVar9;
            *puVar9 = uVar1;
          }
          puVar4 = puVar10 + 1;
          puVar6 = puVar9;
LAB_142fd9d67:
          puVar6 = puVar6 + 1;
          if (puVar6 <= puVar10) goto code_r0x000142fd9d70;
          goto LAB_142fd9d82;
        }
        for (; puVar4 = puVar9, puVar6 = puVar9, puVar9 < puVar10; puVar10 = puVar10 + -1) {
          while (puVar6 = puVar6 + 1, puVar6 <= puVar10) {
            cVar2 = FUN_142fe1980(param_4,puVar4,puVar6);
            if (cVar2 != '\0') {
              puVar4 = puVar6;
            }
          }
          if (puVar4 != puVar10) {
            uVar1 = *puVar4;
            *puVar4 = *puVar10;
            *puVar10 = uVar1;
          }
        }
        goto LAB_142fd9e5f;
      }
LAB_142fd9e50:
      HeapSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
                (puVar6,lVar3,param_3,param_4);
LAB_142fd9e5f:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  return;
code_r0x000142fd9d70:
  cVar2 = FUN_142fe1980(param_4,puVar9,puVar6);
  if (cVar2 == '\0') goto LAB_142fd9d67;
LAB_142fd9d82:
  do {
    puVar5 = puVar4;
    puVar4 = puVar5 + -1;
    if (puVar4 <= puVar9) break;
    cVar2 = FUN_142fe1980(param_4,puVar4,puVar9);
  } while (cVar2 == '\0');
  if (puVar6 <= puVar4) {
    if (puVar6 != puVar4) {
      uVar1 = *puVar6;
      *puVar6 = *puVar4;
      *puVar4 = uVar1;
    }
    goto LAB_142fd9d67;
  }
  if (puVar9 != puVar4) {
    uVar1 = *puVar9;
    *puVar9 = *puVar4;
    *puVar4 = uVar1;
  }
  iVar7 = iVar7 + -1;
  if ((longlong)((longlong)puVar4 + (-8 - (longlong)puVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar10 - (longlong)puVar6 & 0xfffffffffffffff8U)) {
    if (puVar6 < puVar10) {
      *plVar8 = (longlong)puVar6;
      plVar8[1] = (longlong)puVar10;
      *(int *)(plVar8 + 2) = iVar7;
      plVar8 = plVar8 + 3;
    }
    if (puVar4 <= puVar9 + 1) goto LAB_142fd9e5f;
    puVar10 = puVar5 + -2;
    puVar6 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar4) {
      *plVar8 = (longlong)puVar9;
      plVar8[1] = (longlong)(puVar5 + -2);
      *(int *)(plVar8 + 2) = iVar7;
      plVar8 = plVar8 + 3;
    }
    if (puVar10 <= puVar6) goto LAB_142fd9e5f;
  }
  lVar3 = ((longlong)puVar10 - (longlong)puVar6 >> 3) + 1;
  puVar9 = puVar6;
  if (iVar7 == 0) goto LAB_142fd9e50;
  goto LAB_142fd9d30;
}



// FUNCTION 142fd9f20 FUN_142fd9f20 body=69 status=ok
// SIG undefined FUN_142fd9f20(void)

ulonglong FUN_142fd9f20(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_14302b1c0();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142fd9f70 FUN_142fd9f70 body=69 status=ok
// SIG undefined FUN_142fd9f70(void)

ulonglong FUN_142fd9f70(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1429bed90();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142fd9fc0 FUN_142fd9fc0 body=69 status=ok
// SIG undefined FUN_142fd9fc0(void)

ulonglong FUN_142fd9fc0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_142a0cc80();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142fda010 FUN_142fda010 body=146 status=ok
// SIG undefined FUN_142fda010(void)

undefined8 * FUN_142fda010(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x628);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_145a3c100;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x618);
      FUN_142fdd4c0(_Dst,0);
      *_Dst = &PTR__scalar_deleting_destructor__145a38580;
      puVar1[0x60] = &PTR_LAB_145a37ab0;
      puVar1[0x86] = &PTR_IsPromotedBuild_145a37ad0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142fda0b0 FUN_142fda0b0 body=146 status=ok
// SIG undefined FUN_142fda0b0(void)

undefined8 * FUN_142fda0b0(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x628);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_145a3c100;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x618);
      FUN_142fdd6a0(_Dst,0);
      *_Dst = &PTR__scalar_deleting_destructor__145a38080;
      puVar1[0x60] = &PTR_LAB_145a37ab0;
      puVar1[0x86] = &PTR_IsPromotedBuild_145a37ad0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142fda150 FUN_142fda150 body=146 status=ok
// SIG undefined FUN_142fda150(void)

undefined8 * FUN_142fda150(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x628);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_145a3c100;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x618);
      FUN_142fdd880(_Dst,0);
      *_Dst = &PTR__scalar_deleting_destructor__145a38a80;
      puVar1[0x60] = &PTR_LAB_145a37ab0;
      puVar1[0x86] = &PTR_IsPromotedBuild_145a37ad0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142fda1f0 FUN_142fda1f0 body=146 status=ok
// SIG undefined FUN_142fda1f0(void)

undefined8 * FUN_142fda1f0(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x628);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_145a3c100;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x618);
      FUN_142fdda60(_Dst,0);
      *_Dst = &PTR__scalar_deleting_destructor__145a37b80;
      puVar1[0x60] = &PTR_LAB_145a37ab0;
      puVar1[0x86] = &PTR_IsPromotedBuild_145a37ad0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142fda290 FUN_142fda290 body=267 status=ok
// SIG undefined FUN_142fda290(void)

undefined8 * FUN_142fda290(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x450);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2 + 2;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_FUN_144044b48;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR__purecall_144043248;
      SBorder::SBorder(puVar2 + 3);
      *puVar1 = &PTR_StartProfileThreadUsage_145a3bd48;
      puVar2[3] = &PTR_LAB_145a3bdd0;
      puVar2[0x74] = 0;
      puVar2[0x75] = 0;
      *(undefined4 *)(puVar2 + 0x76) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x3b4) = 1;
      puVar2[0x79] = 0;
      *(undefined4 *)(puVar2 + 0x7a) = 0;
      puVar2[0x7b] = 0;
      *(undefined4 *)(puVar2 + 0x7c) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x3ec) = 0;
      puVar2[0x7e] = 0;
      *(undefined4 *)(puVar2 + 0x7f) = 0;
      puVar2[0x80] = 0;
      *(undefined4 *)(puVar2 + 0x81) = 0;
      puVar2[0x82] = 0;
      *(undefined4 *)(puVar2 + 0x83) = 0;
      puVar2[0x84] = 0;
      *(undefined4 *)(puVar2 + 0x85) = 0;
      puVar2[0x87] = 0;
      puVar2[0x88] = 0;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142fda3a0 FUN_142fda3a0 body=116 status=ok
// SIG undefined FUN_142fda3a0(void)

undefined8 * FUN_142fda3a0(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x310);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_145a3c110;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x300);
      FUN_1417f4470(_Dst);
      *_Dst = &PTR_FUN_145a373b0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142fda420 FUN_142fda420 body=116 status=ok
// SIG undefined FUN_142fda420(void)

undefined8 * FUN_142fda420(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x308);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_1459931f0;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x2f8);
      FUN_1417f4470(_Dst);
      *_Dst = &PTR_FUN_145a375b8;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142fda4a0 NewIntrusiveReferenceController<SSplitter> body=77 status=ok
// SIG undefined NewIntrusiveReferenceController<SSplitter>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SSplitter>(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x288);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_144d6a6e0;
    if (puVar1 != (undefined8 *)0xfffffffffffffff0) {
      SSplitter::SSplitter();
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142fda4f0 FUN_142fda4f0 body=411 status=ok
// SIG undefined FUN_142fda4f0(void)

longlong FUN_142fda4f0(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_28 [2];
  
  plVar6 = (longlong *)param_2[1];
  lVar5 = *param_2;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_28[0] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_145a397c8;
    plVar4[1] = lVar5;
    plVar4[2] = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
    }
    plVar4[3] = param_3;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    plVar4 = local_28[0];
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar4 = local_28[0];
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
        plVar4 = local_28[0];
      }
    }
  }
  pplVar2 = (longlong **)(param_1 + 0x188);
  if (local_28 != pplVar2) {
    if (plVar4 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 400) != 0) && (plVar6 = *pplVar2, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar6 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar6;
        }
        *(undefined4 *)(param_1 + 400) = 0;
      }
      goto LAB_142fda5ff;
    }
    (**(code **)(*plVar4 + 0x30))(plVar4,pplVar2);
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    local_28[0] = (longlong *)FMemory::Realloc(plVar4,0,0);
    if (local_28[0] != (longlong *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
LAB_142fda5ff:
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142fda690 FUN_142fda690 body=411 status=ok
// SIG undefined FUN_142fda690(void)

longlong FUN_142fda690(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_28 [2];
  
  plVar6 = (longlong *)param_2[1];
  lVar5 = *param_2;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_28[0] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_145a39668;
    plVar4[1] = lVar5;
    plVar4[2] = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
    }
    plVar4[3] = param_3;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    plVar4 = local_28[0];
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar4 = local_28[0];
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
        plVar4 = local_28[0];
      }
    }
  }
  pplVar2 = (longlong **)(param_1 + 0x108);
  if (local_28 != pplVar2) {
    if (plVar4 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x110) != 0) && (plVar6 = *pplVar2, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar6 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar6;
        }
        *(undefined4 *)(param_1 + 0x110) = 0;
      }
      goto LAB_142fda79f;
    }
    (**(code **)(*plVar4 + 0x30))(plVar4,pplVar2);
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    local_28[0] = (longlong *)FMemory::Realloc(plVar4,0,0);
    if (local_28[0] != (longlong *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
LAB_142fda79f:
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142fda830 FUN_142fda830 body=420 status=ok
// SIG undefined FUN_142fda830(void)

longlong FUN_142fda830(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_28 [2];
  
  plVar6 = (longlong *)param_2[1];
  lVar5 = *param_2;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_28[0] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_145a396a8;
    plVar4[1] = lVar5;
    plVar4[2] = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
    }
    plVar4[3] = param_3;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_145a396f0;
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    plVar4 = local_28[0];
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar4 = local_28[0];
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
        plVar4 = local_28[0];
      }
    }
  }
  pplVar2 = (longlong **)(param_1 + 0x188);
  if (local_28 != pplVar2) {
    if (plVar4 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 400) != 0) && (plVar6 = *pplVar2, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar6 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar6;
        }
        *(undefined4 *)(param_1 + 400) = 0;
      }
      goto LAB_142fda949;
    }
    (**(code **)(*plVar4 + 0x30))(plVar4,pplVar2);
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    local_28[0] = (longlong *)FMemory::Realloc(plVar4,0,0);
    if (local_28[0] != (longlong *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
LAB_142fda949:
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142fda9e0 FUN_142fda9e0 body=420 status=ok
// SIG undefined FUN_142fda9e0(void)

longlong FUN_142fda9e0(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_28 [2];
  
  plVar6 = (longlong *)param_2[1];
  lVar5 = *param_2;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_28[0] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_145a39738;
    plVar4[1] = lVar5;
    plVar4[2] = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
    }
    plVar4[3] = param_3;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_145a39780;
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    plVar4 = local_28[0];
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar4 = local_28[0];
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
        plVar4 = local_28[0];
      }
    }
  }
  pplVar2 = (longlong **)(param_1 + 0x198);
  if (local_28 != pplVar2) {
    if (plVar4 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x1a0) != 0) && (plVar6 = *pplVar2, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar6 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar6;
        }
        *(undefined4 *)(param_1 + 0x1a0) = 0;
      }
      goto LAB_142fdaaf9;
    }
    (**(code **)(*plVar4 + 0x30))(plVar4,pplVar2);
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    local_28[0] = (longlong *)FMemory::Realloc(plVar4,0,0);
    if (local_28[0] != (longlong *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
LAB_142fdaaf9:
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142fdab90 FUN_142fdab90 body=437 status=ok
// SIG undefined FUN_142fdab90(void)

void FUN_142fdab90(longlong param_1,longlong param_2,ulonglong *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if (param_2 != 0) {
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
    } while (*(char *)(param_2 + uVar6) != '\0');
    FUN_140a6ec50(param_1 + 0x30,5);
    FUN_140a78ce0(param_1 + 0x30,param_2,uVar6 & 0xffffffff);
  }
  FUN_140a6ec50(param_1 + 0x30,4);
  puVar4 = *(undefined8 **)(param_1 + 0x50);
  if (*(undefined8 **)(param_1 + 0x58) < puVar4 + 2) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::
    Expand<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0>::Level>
              (param_1 + 0x38,1);
    puVar4 = *(undefined8 **)(param_1 + 0x50);
  }
  uVar6 = 0;
  *(undefined8 **)(param_1 + 0x50) = puVar4 + 2;
  *puVar4 = 0;
  *(undefined1 *)(puVar4 + 1) = 1;
  lVar3 = *(longlong *)(param_1 + 0x30);
  puVar5 = *(undefined1 **)(lVar3 + 0x18);
  if (*(undefined1 **)(lVar3 + 0x20) < puVar5 + 1) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar3,1);
    puVar5 = *(undefined1 **)(lVar3 + 0x18);
  }
  *(undefined1 **)(lVar3 + 0x18) = puVar5 + 1;
  *puVar5 = 0x5b;
  puVar4 = (undefined8 *)*param_3;
  uVar8 = (longlong)(int)param_3[1] & 0x1fffffffffffffff;
  if (puVar4 + (int)param_3[1] < puVar4) {
    uVar8 = uVar6;
  }
  if (uVar8 != 0) {
    do {
      uVar2 = (**(code **)(*(longlong *)*puVar4 + 0x278))();
      FUN_140a6ec50(param_1 + 0x30,6);
      lVar3 = *(longlong *)(param_1 + 0x30);
      lVar7 = *(longlong *)(lVar3 + 0x18);
      if (*(ulonglong *)(lVar3 + 0x20) < lVar7 + 10U) {
        rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar3,10);
        lVar7 = *(longlong *)(lVar3 + 0x18);
      }
      *(longlong *)(lVar3 + 0x18) = lVar7 + 10;
      lVar3 = rapidjson::internal::u32toa(uVar2,lVar7);
      puVar4 = puVar4 + 1;
      uVar6 = uVar6 + 1;
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0x18);
      *plVar1 = *plVar1 + (lVar3 - lVar7) + -10;
    } while (uVar6 != uVar8);
  }
  *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + -0x10;
  lVar3 = *(longlong *)(param_1 + 0x30);
  puVar5 = *(undefined1 **)(lVar3 + 0x18);
  if (*(undefined1 **)(lVar3 + 0x20) < puVar5 + 1) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar3,1);
    puVar5 = *(undefined1 **)(lVar3 + 0x18);
  }
  *(undefined1 **)(lVar3 + 0x18) = puVar5 + 1;
  *puVar5 = 0x5d;
  return;
}



// FUNCTION 142fdad50 FUN_142fdad50 body=379 status=ok
// SIG undefined FUN_142fdad50(void)

undefined8 FUN_142fdad50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  ulonglong local_res10;
  longlong local_58 [4];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  local_res10 = local_res10 & 0xffffffff00000000;
  cVar4 = FWeakObjectPtr::IsValid(param_3);
  bVar7 = cVar4 == '\0';
  if (bVar7) {
    local_58[0] = 0;
    local_58[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
    FGenericPlatformString::Memcpy(local_58[0],&DAT_143f3edc8,10);
    uVar6 = FText::FromString(local_38,local_58);
  }
  else {
    lVar5 = FWeakObjectPtr::Get(param_3);
    local_res10 = *(ulonglong *)(lVar5 + 0x18);
    FName::ToString(&local_res10,local_58 + 2);
    uVar6 = FText::FromString(local_20,local_58 + 2);
  }
  FText::FText(param_2,uVar6);
  if (bVar7) {
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  }
  if (bVar7) {
    if (local_58[0] != 0) {
      FMemory::Free();
    }
  }
  if (!bVar7) {
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)local_18 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_18 + 8))(local_18,1);
        }
      }
    }
  }
  if ((!bVar7) && (local_58[2] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142fdaee0 FUN_142fdaee0 body=2224 status=ok
// SIG undefined FUN_142fdaee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142fdaee0(undefined8 param_1,longlong *param_2,undefined4 *param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  char cVar8;
  byte bVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong **pplVar15;
  longlong *plVar16;
  undefined1 auStack_7b8 [32];
  longlong local_798;
  longlong local_790;
  undefined4 local_788;
  longlong local_780;
  longlong local_778;
  longlong local_770;
  undefined1 local_768;
  undefined1 local_760;
  longlong local_758;
  ulonglong local_748;
  longlong *local_740;
  longlong *plStack_738;
  undefined4 local_730;
  undefined4 local_72c;
  longlong local_728 [2];
  undefined4 local_718;
  undefined4 local_714;
  longlong *local_710;
  longlong *local_708;
  undefined8 local_700;
  undefined8 local_6f8;
  undefined4 local_6f0;
  undefined4 uStack_6ec;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined4 local_6e0;
  undefined4 uStack_6dc;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined8 local_6d0;
  longlong *local_6c8;
  undefined8 local_6c0;
  undefined4 local_6b8;
  undefined1 local_6b4;
  undefined1 local_6b0;
  longlong *local_6a8;
  int local_6a0;
  undefined1 local_698 [8];
  longlong *local_690;
  undefined1 local_680;
  undefined8 local_678;
  undefined4 local_670;
  undefined1 local_668 [8];
  longlong *local_660;
  undefined1 local_650;
  undefined8 local_648;
  undefined4 local_640;
  longlong *local_638;
  longlong *local_630;
  longlong *local_620;
  longlong *local_618;
  undefined1 local_608 [8];
  longlong *local_600;
  undefined1 local_5f0 [8];
  longlong *local_5e8;
  undefined1 local_5d8 [8];
  longlong *local_5d0;
  undefined1 local_5c0 [8];
  longlong *local_5b8;
  longlong *local_5a8;
  longlong *plStack_5a0;
  undefined1 local_598 [448];
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_7b8;
  local_730 = *param_3;
  local_72c = param_3[1];
  local_748 = local_748 & 0xffffffff00000000;
  local_710 = param_4;
  cVar8 = FWeakObjectPtr::IsValid(&local_730);
  if (cVar8 == '\0') {
    uVar11 = FUN_1404b03b0();
    uVar11 = FText::FText(local_5f0,uVar11);
    bVar6 = false;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    lVar10 = FWeakObjectPtr::Get(&local_730);
    if (lVar10 == 0) {
      local_728[0] = 0;
      local_728[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_728,0);
      FGenericPlatformString::Memcpy(local_728[0],&DAT_143f3edc8,10);
    }
    else {
      UObjectBaseUtility::GetPathName(lVar10,local_728,0);
    }
    uVar11 = FText::FromString(local_5d8,local_728);
    bVar6 = true;
    bVar5 = true;
    bVar4 = false;
  }
  FText::FText(local_608,uVar11);
  if ((bVar4) && (local_5e8 != (longlong *)0x0)) {
    LOCK();
    plVar13 = local_5e8 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_5e8)(local_5e8);
      LOCK();
      piVar1 = (int *)((longlong)local_5e8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5e8 + 8))(local_5e8,1);
      }
    }
  }
  if ((bVar5) && (local_5d0 != (longlong *)0x0)) {
    LOCK();
    plVar13 = local_5d0 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_5d0)(local_5d0);
      LOCK();
      piVar1 = (int *)((longlong)local_5d0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5d0 + 8))(local_5d0,1);
      }
    }
  }
  if ((bVar6) && (local_728[0] != 0)) {
    FMemory::Free();
  }
  FText::FText(local_668,local_608);
  local_718 = *param_3;
  local_714 = param_3[1];
  local_650 = 1;
  local_648 = 0;
  local_640 = 0;
  uVar11 = FUN_142fdad50(param_1,local_5c0,&local_718);
  FText::FText(local_698,uVar11);
  local_680 = 1;
  local_678 = 0;
  local_670 = 0;
  puVar12 = (undefined8 *)FUN_142ffcac0();
  local_700 = *puVar12;
  local_6f0 = *(undefined4 *)(puVar12 + 2);
  uStack_6ec = *(undefined4 *)((longlong)puVar12 + 0x14);
  uStack_6e8 = *(undefined4 *)(puVar12 + 3);
  uStack_6e4 = *(undefined4 *)((longlong)puVar12 + 0x1c);
  local_6f8 = puVar12[1];
  local_6e0 = *(undefined4 *)(puVar12 + 4);
  uStack_6dc = *(undefined4 *)((longlong)puVar12 + 0x24);
  uStack_6d8 = *(undefined4 *)(puVar12 + 5);
  uStack_6d4 = *(undefined4 *)((longlong)puVar12 + 0x2c);
  local_6d0 = puVar12[6];
  local_6c8 = (longlong *)puVar12[7];
  if (local_6c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_6c8 + 1) = (int)local_6c8[1] + 1;
    UNLOCK();
  }
  local_6c0 = puVar12[8];
  local_6b8 = *(undefined4 *)(puVar12 + 9);
  local_6b4 = *(undefined1 *)((longlong)puVar12 + 0x4c);
  local_6b0 = 1;
  local_6a8 = (longlong *)0x0;
  local_6a0 = 0;
  lVar10 = STextBlock::FArguments::FArguments(local_3d8);
  FUN_1417f9360(lVar10 + 0x140,&local_700);
  *(undefined1 *)(lVar10 + 400) = local_6b0;
  pplVar15 = (longlong **)(lVar10 + 0x198);
  if (&local_6a8 != pplVar15) {
    if ((local_6a0 == 0) || (local_6a8 == (longlong *)0x0)) {
      if ((*(int *)(lVar10 + 0x1a0) != 0) && (plVar13 = *pplVar15, plVar13 != (longlong *)0x0)) {
        (**(code **)(*plVar13 + 0x28))(plVar13,0);
        if (*pplVar15 != (longlong *)0x0) {
          plVar13 = (longlong *)FMemory::Realloc(*pplVar15,0,0);
          *pplVar15 = plVar13;
        }
        *(undefined4 *)(lVar10 + 0x1a0) = 0;
      }
    }
    else {
      (**(code **)(*local_6a8 + 0x30))(local_6a8,pplVar15);
    }
  }
  FText::operator=(lVar10 + 0x108,local_698);
  *(undefined1 *)(lVar10 + 0x120) = local_680;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x128,&local_678);
  FText::operator=(lVar10,local_668);
  *(undefined1 *)(lVar10 + 0x18) = local_650;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x20,&local_648);
  plVar13 = (longlong *)operator_new(0x660);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar13 + 1) = 1;
    *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
    *plVar13 = (longlong)&PTR_FUN_144043520;
    if (plVar13 != (longlong *)0xfffffffffffffff0) {
      FUN_1419a9150();
    }
  }
  plVar2 = plVar13 + 2;
  local_638 = plVar2;
  local_630 = plVar13;
  FUN_14044f790(&local_638,plVar2);
  local_798 = 0x650;
  SWidget::SetDebugInfo
            (plVar2,"STextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\GearBuilderDebugMenu.cpp"
             ,0x37);
  local_788 = *(undefined4 *)(lVar10 + 0x90);
  local_758 = lVar10 + 0xf8;
  local_770 = lVar10 + 0xe8;
  local_760 = *(undefined1 *)(lVar10 + 0xf1);
  local_778 = lVar10 + 200;
  local_780 = lVar10 + 0x98;
  local_768 = *(undefined1 *)(lVar10 + 0xf0);
  local_790 = lVar10 + 0x78;
  local_798 = lVar10 + 0x60;
  SWidget::SWidgetConstruct(plVar2,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  FUN_1419b0120(plVar2,lVar10);
  if (((char)plVar13[5] < '\0') || (cVar8 = (**(code **)(*plVar2 + 0x1e8))(plVar2), cVar8 != '\0'))
  {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar9;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_748 = FUN_14068ed70(local_598);
  pplVar15 = (longlong **)(local_748 + 0x1a8);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_740 = plVar2;
  plStack_738 = plVar13;
  if (&local_740 != pplVar15) {
    local_740 = *pplVar15;
    plStack_738 = *(longlong **)(local_748 + 0x1b0);
    *pplVar15 = plVar2;
    *(longlong **)(local_748 + 0x1b0) = plVar13;
    local_5a8 = plVar2;
    plStack_5a0 = plVar13;
  }
  plVar2 = plStack_738;
  if (plStack_738 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_738 + 1;
    lVar10 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_738)(plStack_738);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_738 + 8))(plStack_738,1);
      }
    }
  }
  uVar7 = local_748;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar13 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  local_708 = local_710;
  plVar14 = (longlong *)FUN_142fda290();
  local_620 = plVar14 + 2;
  local_618 = plVar14;
  TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>::
  Init<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_>
            (&local_620,local_620);
  plVar16 = plVar14 + 3;
  local_798 = 0x440;
  SWidget::SetDebugInfo
            (plVar16,"STableRow<T>",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\GearBuilderDebugMenu.cpp"
             ,0x35);
  local_758 = uVar7 + 0xf8;
  local_770 = uVar7 + 0xe8;
  local_778 = uVar7 + 200;
  local_780 = uVar7 + 0x98;
  local_790 = uVar7 + 0x78;
  local_798 = uVar7 + 0x60;
  local_760 = *(undefined1 *)(local_748 + 0xf1);
  local_768 = *(undefined1 *)(local_748 + 0xf0);
  local_788 = *(undefined4 *)(local_748 + 0x90);
  SWidget::SWidgetConstruct(plVar16,local_748,local_748 + 0x30,local_748 + 0x40);
  plVar2 = local_708;
  FUN_142fee0f0(plVar14 + 2,local_748,local_708);
  (**(code **)(plVar14[2] + 0x78))
            (plVar14 + 2,*(undefined4 *)(*plVar2 + 0x2f8),local_748 + 0x178,pplVar15);
  if (((char)plVar14[6] < '\0') || (cVar8 = (**(code **)(*plVar16 + 0x1e8))(plVar16), cVar8 != '\0')
     ) {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  *(byte *)((longlong)plVar14 + 0x31) = *(byte *)((longlong)plVar14 + 0x31) & 0xfe;
  *(byte *)((longlong)plVar14 + 0x31) = *(byte *)((longlong)plVar14 + 0x31) | bVar9;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)(plVar14 + 2);
  param_2[1] = (longlong)plVar14;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar14 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
    LOCK();
    plVar2 = plVar14 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  FUN_140690c40(local_598);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar13 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    LOCK();
    plVar2 = plVar13 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  FUN_140691150(local_3d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_6a8);
  plVar13 = local_6c8;
  if (local_6c8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_6c8 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_6c8)(local_6c8);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_6c8 + 8))(local_6c8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_678);
  if (local_690 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_690 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_690)(local_690);
      LOCK();
      piVar1 = (int *)((longlong)local_690 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_690 + 8))(local_690,1);
      }
    }
  }
  if (local_5b8 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_5b8 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_5b8)(local_5b8);
      LOCK();
      piVar1 = (int *)((longlong)local_5b8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5b8 + 8))(local_5b8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_648);
  if (local_660 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_660 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_660)(local_660);
      LOCK();
      piVar1 = (int *)((longlong)local_660 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_660 + 8))(local_660,1);
      }
    }
  }
  if (local_600 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_600 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_600)(local_600);
      LOCK();
      piVar1 = (int *)((longlong)local_600 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_600 + 8))(local_600,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142fdb790 FUN_142fdb790 body=2224 status=ok
// SIG undefined FUN_142fdb790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142fdb790(undefined8 param_1,longlong *param_2,undefined4 *param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  char cVar8;
  byte bVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong **pplVar15;
  longlong *plVar16;
  undefined1 auStack_7b8 [32];
  longlong local_798;
  longlong local_790;
  undefined4 local_788;
  longlong local_780;
  longlong local_778;
  longlong local_770;
  undefined1 local_768;
  undefined1 local_760;
  longlong local_758;
  ulonglong local_748;
  longlong *local_740;
  longlong *plStack_738;
  undefined4 local_730;
  undefined4 local_72c;
  longlong local_728 [2];
  undefined4 local_718;
  undefined4 local_714;
  longlong *local_710;
  longlong *local_708;
  undefined8 local_700;
  undefined8 local_6f8;
  undefined4 local_6f0;
  undefined4 uStack_6ec;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined4 local_6e0;
  undefined4 uStack_6dc;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined8 local_6d0;
  longlong *local_6c8;
  undefined8 local_6c0;
  undefined4 local_6b8;
  undefined1 local_6b4;
  undefined1 local_6b0;
  longlong *local_6a8;
  int local_6a0;
  undefined1 local_698 [8];
  longlong *local_690;
  undefined1 local_680;
  undefined8 local_678;
  undefined4 local_670;
  undefined1 local_668 [8];
  longlong *local_660;
  undefined1 local_650;
  undefined8 local_648;
  undefined4 local_640;
  longlong *local_638;
  longlong *local_630;
  longlong *local_620;
  longlong *local_618;
  undefined1 local_608 [8];
  longlong *local_600;
  undefined1 local_5f0 [8];
  longlong *local_5e8;
  undefined1 local_5d8 [8];
  longlong *local_5d0;
  undefined1 local_5c0 [8];
  longlong *local_5b8;
  longlong *local_5a8;
  longlong *plStack_5a0;
  undefined1 local_598 [448];
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_7b8;
  local_730 = *param_3;
  local_72c = param_3[1];
  local_748 = local_748 & 0xffffffff00000000;
  local_710 = param_4;
  cVar8 = FWeakObjectPtr::IsValid(&local_730);
  if (cVar8 == '\0') {
    uVar11 = FUN_1404b03b0();
    uVar11 = FText::FText(local_5f0,uVar11);
    bVar6 = false;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    lVar10 = FWeakObjectPtr::Get(&local_730);
    if (lVar10 == 0) {
      local_728[0] = 0;
      local_728[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_728,0);
      FGenericPlatformString::Memcpy(local_728[0],&DAT_143f3edc8,10);
    }
    else {
      UObjectBaseUtility::GetPathName(lVar10,local_728,0);
    }
    uVar11 = FText::FromString(local_5d8,local_728);
    bVar6 = true;
    bVar5 = true;
    bVar4 = false;
  }
  FText::FText(local_608,uVar11);
  if ((bVar4) && (local_5e8 != (longlong *)0x0)) {
    LOCK();
    plVar13 = local_5e8 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_5e8)(local_5e8);
      LOCK();
      piVar1 = (int *)((longlong)local_5e8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5e8 + 8))(local_5e8,1);
      }
    }
  }
  if ((bVar5) && (local_5d0 != (longlong *)0x0)) {
    LOCK();
    plVar13 = local_5d0 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_5d0)(local_5d0);
      LOCK();
      piVar1 = (int *)((longlong)local_5d0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5d0 + 8))(local_5d0,1);
      }
    }
  }
  if ((bVar6) && (local_728[0] != 0)) {
    FMemory::Free();
  }
  FText::FText(local_668,local_608);
  local_718 = *param_3;
  local_714 = param_3[1];
  local_650 = 1;
  local_648 = 0;
  local_640 = 0;
  uVar11 = FUN_142fdad50(param_1,local_5c0,&local_718);
  FText::FText(local_698,uVar11);
  local_680 = 1;
  local_678 = 0;
  local_670 = 0;
  puVar12 = (undefined8 *)FUN_142ffcac0();
  local_700 = *puVar12;
  local_6f0 = *(undefined4 *)(puVar12 + 2);
  uStack_6ec = *(undefined4 *)((longlong)puVar12 + 0x14);
  uStack_6e8 = *(undefined4 *)(puVar12 + 3);
  uStack_6e4 = *(undefined4 *)((longlong)puVar12 + 0x1c);
  local_6f8 = puVar12[1];
  local_6e0 = *(undefined4 *)(puVar12 + 4);
  uStack_6dc = *(undefined4 *)((longlong)puVar12 + 0x24);
  uStack_6d8 = *(undefined4 *)(puVar12 + 5);
  uStack_6d4 = *(undefined4 *)((longlong)puVar12 + 0x2c);
  local_6d0 = puVar12[6];
  local_6c8 = (longlong *)puVar12[7];
  if (local_6c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_6c8 + 1) = (int)local_6c8[1] + 1;
    UNLOCK();
  }
  local_6c0 = puVar12[8];
  local_6b8 = *(undefined4 *)(puVar12 + 9);
  local_6b4 = *(undefined1 *)((longlong)puVar12 + 0x4c);
  local_6b0 = 1;
  local_6a8 = (longlong *)0x0;
  local_6a0 = 0;
  lVar10 = STextBlock::FArguments::FArguments(local_3d8);
  FUN_1417f9360(lVar10 + 0x140,&local_700);
  *(undefined1 *)(lVar10 + 400) = local_6b0;
  pplVar15 = (longlong **)(lVar10 + 0x198);
  if (&local_6a8 != pplVar15) {
    if ((local_6a0 == 0) || (local_6a8 == (longlong *)0x0)) {
      if ((*(int *)(lVar10 + 0x1a0) != 0) && (plVar13 = *pplVar15, plVar13 != (longlong *)0x0)) {
        (**(code **)(*plVar13 + 0x28))(plVar13,0);
        if (*pplVar15 != (longlong *)0x0) {
          plVar13 = (longlong *)FMemory::Realloc(*pplVar15,0,0);
          *pplVar15 = plVar13;
        }
        *(undefined4 *)(lVar10 + 0x1a0) = 0;
      }
    }
    else {
      (**(code **)(*local_6a8 + 0x30))(local_6a8,pplVar15);
    }
  }
  FText::operator=(lVar10 + 0x108,local_698);
  *(undefined1 *)(lVar10 + 0x120) = local_680;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x128,&local_678);
  FText::operator=(lVar10,local_668);
  *(undefined1 *)(lVar10 + 0x18) = local_650;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x20,&local_648);
  plVar13 = (longlong *)operator_new(0x660);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar13 + 1) = 1;
    *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
    *plVar13 = (longlong)&PTR_FUN_144043520;
    if (plVar13 != (longlong *)0xfffffffffffffff0) {
      FUN_1419a9150();
    }
  }
  plVar2 = plVar13 + 2;
  local_638 = plVar2;
  local_630 = plVar13;
  FUN_14044f790(&local_638,plVar2);
  local_798 = 0x650;
  SWidget::SetDebugInfo
            (plVar2,"STextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\GearBuilderDebugMenu.cpp"
             ,0x37);
  local_788 = *(undefined4 *)(lVar10 + 0x90);
  local_758 = lVar10 + 0xf8;
  local_770 = lVar10 + 0xe8;
  local_760 = *(undefined1 *)(lVar10 + 0xf1);
  local_778 = lVar10 + 200;
  local_780 = lVar10 + 0x98;
  local_768 = *(undefined1 *)(lVar10 + 0xf0);
  local_790 = lVar10 + 0x78;
  local_798 = lVar10 + 0x60;
  SWidget::SWidgetConstruct(plVar2,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  FUN_1419b0120(plVar2,lVar10);
  if (((char)plVar13[5] < '\0') || (cVar8 = (**(code **)(*plVar2 + 0x1e8))(plVar2), cVar8 != '\0'))
  {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar9;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_748 = FUN_14068ed70(local_598);
  pplVar15 = (longlong **)(local_748 + 0x1a8);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_740 = plVar2;
  plStack_738 = plVar13;
  if (&local_740 != pplVar15) {
    local_740 = *pplVar15;
    plStack_738 = *(longlong **)(local_748 + 0x1b0);
    *pplVar15 = plVar2;
    *(longlong **)(local_748 + 0x1b0) = plVar13;
    local_5a8 = plVar2;
    plStack_5a0 = plVar13;
  }
  plVar2 = plStack_738;
  if (plStack_738 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_738 + 1;
    lVar10 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_738)(plStack_738);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_738 + 8))(plStack_738,1);
      }
    }
  }
  uVar7 = local_748;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar13 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  local_708 = local_710;
  plVar14 = (longlong *)FUN_142fda290();
  local_620 = plVar14 + 2;
  local_618 = plVar14;
  TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>::
  Init<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_>
            (&local_620,local_620);
  plVar16 = plVar14 + 3;
  local_798 = 0x440;
  SWidget::SetDebugInfo
            (plVar16,"STableRow<T>",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\GearBuilderDebugMenu.cpp"
             ,0x35);
  local_758 = uVar7 + 0xf8;
  local_770 = uVar7 + 0xe8;
  local_778 = uVar7 + 200;
  local_780 = uVar7 + 0x98;
  local_790 = uVar7 + 0x78;
  local_798 = uVar7 + 0x60;
  local_760 = *(undefined1 *)(local_748 + 0xf1);
  local_768 = *(undefined1 *)(local_748 + 0xf0);
  local_788 = *(undefined4 *)(local_748 + 0x90);
  SWidget::SWidgetConstruct(plVar16,local_748,local_748 + 0x30,local_748 + 0x40);
  plVar2 = local_708;
  FUN_142fee440(plVar14 + 2,local_748,local_708);
  (**(code **)(plVar14[2] + 0x78))
            (plVar14 + 2,*(undefined4 *)(*plVar2 + 0x2f8),local_748 + 0x178,pplVar15);
  if (((char)plVar14[6] < '\0') || (cVar8 = (**(code **)(*plVar16 + 0x1e8))(plVar16), cVar8 != '\0')
     ) {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  *(byte *)((longlong)plVar14 + 0x31) = *(byte *)((longlong)plVar14 + 0x31) & 0xfe;
  *(byte *)((longlong)plVar14 + 0x31) = *(byte *)((longlong)plVar14 + 0x31) | bVar9;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)(plVar14 + 2);
  param_2[1] = (longlong)plVar14;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar14 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
    LOCK();
    plVar2 = plVar14 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  FUN_140690c40(local_598);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar13 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    LOCK();
    plVar2 = plVar13 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  FUN_140691150(local_3d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_6a8);
  plVar13 = local_6c8;
  if (local_6c8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_6c8 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_6c8)(local_6c8);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_6c8 + 8))(local_6c8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_678);
  if (local_690 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_690 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_690)(local_690);
      LOCK();
      piVar1 = (int *)((longlong)local_690 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_690 + 8))(local_690,1);
      }
    }
  }
  if (local_5b8 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_5b8 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_5b8)(local_5b8);
      LOCK();
      piVar1 = (int *)((longlong)local_5b8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5b8 + 8))(local_5b8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_648);
  if (local_660 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_660 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_660)(local_660);
      LOCK();
      piVar1 = (int *)((longlong)local_660 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_660 + 8))(local_660,1);
      }
    }
  }
  if (local_600 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_600 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_600)(local_600);
      LOCK();
      piVar1 = (int *)((longlong)local_600 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_600 + 8))(local_600,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142fdc040 FUN_142fdc040 body=2425 status=ok
// SIG undefined FUN_142fdc040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142fdc040(undefined8 param_1,longlong *param_2,undefined4 *param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  char cVar8;
  byte bVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong **pplVar16;
  longlong *plVar17;
  undefined1 auStack_7d8 [32];
  longlong local_7b8;
  longlong local_7b0;
  undefined4 local_7a8;
  longlong local_7a0;
  longlong local_798;
  longlong local_790;
  undefined1 local_788;
  undefined1 local_780;
  longlong local_778;
  ulonglong local_768;
  longlong *local_760;
  longlong *plStack_758;
  undefined4 local_750;
  undefined4 local_74c;
  undefined4 local_748;
  undefined4 local_744;
  longlong local_740 [5];
  longlong *local_718;
  longlong *local_710;
  undefined8 local_708;
  undefined8 local_700;
  undefined4 local_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined8 local_6d8;
  longlong *local_6d0;
  undefined8 local_6c8;
  undefined4 local_6c0;
  undefined1 local_6bc;
  undefined1 local_6b8;
  longlong *local_6b0;
  int local_6a8;
  longlong local_6a0 [2];
  undefined1 local_690 [8];
  longlong *local_688;
  undefined1 local_678;
  undefined8 local_670;
  undefined4 local_668;
  undefined1 local_660 [8];
  longlong *local_658;
  undefined1 local_648;
  undefined8 local_640;
  undefined4 local_638;
  undefined1 local_630 [8];
  longlong *local_628;
  longlong *local_618;
  longlong *local_610;
  longlong *local_600;
  longlong *local_5f8;
  undefined1 local_5e8 [8];
  longlong *local_5e0;
  undefined1 local_5d0 [8];
  longlong *local_5c8;
  undefined1 local_5b8 [8];
  longlong *local_5b0;
  longlong *local_5a0;
  longlong *plStack_598;
  undefined1 local_588 [448];
  undefined1 local_3c8 [912];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_7d8;
  local_750 = *param_3;
  local_74c = param_3[1];
  local_768 = local_768 & 0xffffffff00000000;
  local_718 = param_4;
  cVar8 = FWeakObjectPtr::IsValid(&local_750);
  if (cVar8 == '\0') {
    uVar11 = FUN_1404b03b0();
    uVar11 = FText::FText(local_5d0,uVar11);
    bVar6 = false;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    lVar10 = FWeakObjectPtr::Get(&local_750);
    if (lVar10 == 0) {
      local_740[0] = 0;
      local_740[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_740,0);
      FGenericPlatformString::Memcpy(local_740[0],&DAT_143f3edc8,10);
    }
    else {
      UObjectBaseUtility::GetPathName(lVar10,local_740,0);
    }
    uVar11 = FText::FromString(local_5b8,local_740);
    bVar6 = true;
    bVar5 = true;
    bVar4 = false;
  }
  FText::FText(local_5e8,uVar11);
  if ((bVar4) && (local_5c8 != (longlong *)0x0)) {
    LOCK();
    plVar13 = local_5c8 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_5c8)(local_5c8);
      LOCK();
      piVar1 = (int *)((longlong)local_5c8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5c8 + 8))(local_5c8,1);
      }
    }
  }
  if ((bVar5) && (local_5b0 != (longlong *)0x0)) {
    LOCK();
    plVar13 = local_5b0 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_5b0)(local_5b0);
      LOCK();
      piVar1 = (int *)((longlong)local_5b0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5b0 + 8))(local_5b0,1);
      }
    }
  }
  if ((bVar6) && (local_740[0] != 0)) {
    FMemory::Free();
  }
  FText::FText(local_660,local_5e8);
  local_748 = *param_3;
  local_744 = param_3[1];
  local_648 = 1;
  local_640 = 0;
  local_638 = 0;
  lVar12 = FWeakObjectPtr::Get(&local_748);
  plVar13 = (longlong *)FUN_14302b1c0();
  lVar10 = plVar13[0x1f];
  if (lVar10 == 0) {
    (**(code **)(*plVar13 + 0x368))(plVar13);
    lVar10 = plVar13[0x1f];
  }
  if (lVar12 == lVar10) {
    local_740[2] = 0;
    local_740[3] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_740 + 2,0);
    FGenericPlatformString::Memcpy(local_740[2],L"None",10);
    FText::FromString(local_630,local_740 + 2);
    local_6a0[0] = local_740[2];
  }
  else {
    lVar10 = FWeakObjectPtr::Get(&local_748);
    local_740[4] = *(undefined8 *)(lVar10 + 0x18);
    FName::ToString(local_740 + 4,local_6a0);
    FText::FromString(local_630,local_6a0);
  }
  if (local_6a0[0] != 0) {
    FMemory::Free();
  }
  FText::FText(local_690,local_630);
  local_678 = 1;
  local_670 = 0;
  local_668 = 0;
  puVar14 = (undefined8 *)FUN_142ffcac0();
  local_708 = *puVar14;
  local_6f8 = *(undefined4 *)(puVar14 + 2);
  uStack_6f4 = *(undefined4 *)((longlong)puVar14 + 0x14);
  uStack_6f0 = *(undefined4 *)(puVar14 + 3);
  uStack_6ec = *(undefined4 *)((longlong)puVar14 + 0x1c);
  local_700 = puVar14[1];
  local_6e8 = *(undefined4 *)(puVar14 + 4);
  uStack_6e4 = *(undefined4 *)((longlong)puVar14 + 0x24);
  uStack_6e0 = *(undefined4 *)(puVar14 + 5);
  uStack_6dc = *(undefined4 *)((longlong)puVar14 + 0x2c);
  local_6d8 = puVar14[6];
  local_6d0 = (longlong *)puVar14[7];
  if (local_6d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_6d0 + 1) = (int)local_6d0[1] + 1;
    UNLOCK();
  }
  local_6c8 = puVar14[8];
  local_6c0 = *(undefined4 *)(puVar14 + 9);
  local_6bc = *(undefined1 *)((longlong)puVar14 + 0x4c);
  local_6b8 = 1;
  local_6b0 = (longlong *)0x0;
  local_6a8 = 0;
  lVar10 = STextBlock::FArguments::FArguments(local_3c8);
  FUN_1417f9360(lVar10 + 0x140,&local_708);
  *(undefined1 *)(lVar10 + 400) = local_6b8;
  pplVar16 = (longlong **)(lVar10 + 0x198);
  if (&local_6b0 != pplVar16) {
    if ((local_6a8 == 0) || (local_6b0 == (longlong *)0x0)) {
      if ((*(int *)(lVar10 + 0x1a0) != 0) && (plVar13 = *pplVar16, plVar13 != (longlong *)0x0)) {
        (**(code **)(*plVar13 + 0x28))(plVar13,0);
        if (*pplVar16 != (longlong *)0x0) {
          plVar13 = (longlong *)FMemory::Realloc(*pplVar16,0,0);
          *pplVar16 = plVar13;
        }
        *(undefined4 *)(lVar10 + 0x1a0) = 0;
      }
    }
    else {
      (**(code **)(*local_6b0 + 0x30))(local_6b0,pplVar16);
    }
  }
  FText::operator=(lVar10 + 0x108,local_690);
  *(undefined1 *)(lVar10 + 0x120) = local_678;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x128,&local_670);
  FText::operator=(lVar10,local_660);
  *(undefined1 *)(lVar10 + 0x18) = local_648;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar10 + 0x20,&local_640);
  plVar13 = (longlong *)operator_new(0x660);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar13 + 1) = 1;
    *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
    *plVar13 = (longlong)&PTR_FUN_144043520;
    if (plVar13 != (longlong *)0xfffffffffffffff0) {
      FUN_1419a9150();
    }
  }
  plVar2 = plVar13 + 2;
  local_618 = plVar2;
  local_610 = plVar13;
  FUN_14044f790(&local_618,plVar2);
  local_7b8 = 0x650;
  SWidget::SetDebugInfo
            (plVar2,"STextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\GearBuilderDebugMenu.cpp"
             ,0x37);
  local_7a8 = *(undefined4 *)(lVar10 + 0x90);
  local_778 = lVar10 + 0xf8;
  local_790 = lVar10 + 0xe8;
  local_780 = *(undefined1 *)(lVar10 + 0xf1);
  local_798 = lVar10 + 200;
  local_7a0 = lVar10 + 0x98;
  local_788 = *(undefined1 *)(lVar10 + 0xf0);
  local_7b0 = lVar10 + 0x78;
  local_7b8 = lVar10 + 0x60;
  SWidget::SWidgetConstruct(plVar2,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  FUN_1419b0120(plVar2,lVar10);
  if (((char)plVar13[5] < '\0') || (cVar8 = (**(code **)(*plVar2 + 0x1e8))(plVar2), cVar8 != '\0'))
  {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar9;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_768 = FUN_14068ed70(local_588);
  pplVar16 = (longlong **)(local_768 + 0x1a8);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_760 = plVar2;
  plStack_758 = plVar13;
  if (&local_760 != pplVar16) {
    local_760 = *pplVar16;
    plStack_758 = *(longlong **)(local_768 + 0x1b0);
    *pplVar16 = plVar2;
    *(longlong **)(local_768 + 0x1b0) = plVar13;
    local_5a0 = plVar2;
    plStack_598 = plVar13;
  }
  plVar2 = plStack_758;
  if (plStack_758 != (longlong *)0x0) {
    LOCK();
    plVar15 = plStack_758 + 1;
    lVar10 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_758)(plStack_758);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_758 + 8))(plStack_758,1);
      }
    }
  }
  uVar7 = local_768;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar13 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  local_710 = local_718;
  plVar15 = (longlong *)FUN_142fda290();
  local_600 = plVar15 + 2;
  local_5f8 = plVar15;
  TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>::
  Init<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_>
            (&local_600,local_600);
  plVar17 = plVar15 + 3;
  local_7b8 = 0x440;
  SWidget::SetDebugInfo
            (plVar17,"STableRow<T>",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\GearBuilderDebugMenu.cpp"
             ,0x35);
  local_778 = uVar7 + 0xf8;
  local_790 = uVar7 + 0xe8;
  local_798 = uVar7 + 200;
  local_7a0 = uVar7 + 0x98;
  local_7b0 = uVar7 + 0x78;
  local_7b8 = uVar7 + 0x60;
  local_780 = *(undefined1 *)(local_768 + 0xf1);
  local_788 = *(undefined1 *)(local_768 + 0xf0);
  local_7a8 = *(undefined4 *)(local_768 + 0x90);
  SWidget::SWidgetConstruct(plVar17,local_768,local_768 + 0x30,local_768 + 0x40);
  plVar2 = local_710;
  FUN_142fee790(plVar15 + 2,local_768,local_710);
  (**(code **)(plVar15[2] + 0x78))
            (plVar15 + 2,*(undefined4 *)(*plVar2 + 0x2f8),local_768 + 0x178,pplVar16);
  if (((char)plVar15[6] < '\0') || (cVar8 = (**(code **)(*plVar17 + 0x1e8))(plVar17), cVar8 != '\0')
     ) {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  *(byte *)((longlong)plVar15 + 0x31) = *(byte *)((longlong)plVar15 + 0x31) & 0xfe;
  *(byte *)((longlong)plVar15 + 0x31) = *(byte *)((longlong)plVar15 + 0x31) | bVar9;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)(plVar15 + 2);
  param_2[1] = (longlong)plVar15;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar15 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
    LOCK();
    plVar2 = plVar15 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  FUN_140690c40(local_588);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar13 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    LOCK();
    plVar2 = plVar13 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  FUN_140691150(local_3c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_6b0);
  plVar13 = local_6d0;
  if (local_6d0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_6d0 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_6d0)(local_6d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_6d0 + 8))(local_6d0,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_670);
  if (local_688 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_688 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_688)(local_688);
      LOCK();
      piVar1 = (int *)((longlong)local_688 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_688 + 8))(local_688,1);
      }
    }
  }
  if (local_628 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_628 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_628)(local_628);
      LOCK();
      piVar1 = (int *)((longlong)local_628 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_628 + 8))(local_628,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_640);
  if (local_658 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_658 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_658)(local_658);
      LOCK();
      piVar1 = (int *)((longlong)local_658 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_658 + 8))(local_658,1);
      }
    }
  }
  if (local_5e0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_5e0 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_5e0)(local_5e0);
      LOCK();
      piVar1 = (int *)((longlong)local_5e0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5e0 + 8))(local_5e0,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142fdc9c0 FUN_142fdc9c0 body=2449 status=ok
// SIG undefined FUN_142fdc9c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142fdc9c0(undefined8 param_1,longlong *param_2,undefined4 *param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  char cVar7;
  byte bVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong **pplVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 auStack_7d8 [32];
  longlong local_7b8;
  longlong local_7b0;
  undefined4 local_7a8;
  longlong local_7a0;
  longlong local_798;
  longlong local_790;
  undefined1 local_788;
  undefined1 local_780;
  longlong local_778;
  ulonglong local_768;
  longlong *local_760;
  longlong *plStack_758;
  undefined4 local_750;
  undefined4 local_74c;
  undefined4 local_748;
  undefined4 local_744;
  longlong local_740 [2];
  longlong *local_730;
  longlong *local_728;
  undefined8 local_720;
  undefined8 local_718;
  undefined4 local_710;
  undefined4 uStack_70c;
  undefined4 uStack_708;
  undefined4 uStack_704;
  undefined4 local_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined8 local_6f0;
  longlong *local_6e8;
  undefined8 local_6e0;
  undefined4 local_6d8;
  undefined1 local_6d4;
  undefined1 local_6d0;
  longlong *local_6c8;
  int local_6c0;
  undefined1 local_6b8 [8];
  longlong *local_6b0;
  undefined1 local_6a0;
  undefined8 local_698;
  undefined4 local_690;
  undefined1 local_688 [8];
  longlong *local_680;
  undefined1 local_670;
  undefined8 local_668;
  undefined4 local_660;
  undefined1 local_658 [8];
  longlong *local_650;
  longlong *local_640;
  longlong *local_638;
  longlong *local_628;
  longlong *local_620;
  undefined1 local_610 [8];
  longlong *local_608;
  undefined1 local_5f8 [8];
  longlong *local_5f0;
  undefined1 local_5e0 [8];
  longlong *local_5d8;
  undefined1 local_5c8 [8];
  longlong *local_5c0;
  undefined1 local_5b0 [8];
  longlong *local_5a8;
  longlong *local_598;
  longlong *plStack_590;
  undefined1 local_588 [448];
  undefined1 local_3c8 [912];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_7d8;
  local_750 = *param_3;
  local_74c = param_3[1];
  local_768 = local_768 & 0xffffffff00000000;
  local_730 = param_4;
  cVar7 = FWeakObjectPtr::IsValid(&local_750);
  if (cVar7 == '\0') {
    uVar10 = FUN_1404b03b0();
    uVar10 = FText::FText(local_5e0,uVar10);
    bVar5 = false;
    bVar4 = false;
    bVar17 = true;
  }
  else {
    lVar9 = FWeakObjectPtr::Get(&local_750);
    if (lVar9 == 0) {
      local_740[0] = 0;
      local_740[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_740,0);
      FGenericPlatformString::Memcpy(local_740[0],&DAT_143f3edc8,10);
    }
    else {
      UObjectBaseUtility::GetPathName(lVar9,local_740,0);
    }
    uVar10 = FText::FromString(local_5c8,local_740);
    bVar5 = true;
    bVar4 = true;
    bVar17 = false;
  }
  FText::FText(local_5f8,uVar10);
  if ((bVar17) && (local_5d8 != (longlong *)0x0)) {
    LOCK();
    plVar13 = local_5d8 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_5d8)(local_5d8);
      LOCK();
      piVar1 = (int *)((longlong)local_5d8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5d8 + 8))(local_5d8,1);
      }
    }
  }
  if ((bVar4) && (local_5c0 != (longlong *)0x0)) {
    LOCK();
    plVar13 = local_5c0 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_5c0)(local_5c0);
      LOCK();
      piVar1 = (int *)((longlong)local_5c0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5c0 + 8))(local_5c0,1);
      }
    }
  }
  if ((bVar5) && (local_740[0] != 0)) {
    FMemory::Free();
  }
  FText::FText(local_688,local_5f8);
  local_748 = *param_3;
  local_744 = param_3[1];
  local_670 = 1;
  local_668 = 0;
  local_660 = 0;
  cVar7 = FWeakObjectPtr::IsValid(&local_748);
  bVar17 = cVar7 == '\0';
  if (bVar17) {
    uVar10 = FUN_1404b03b0();
    puVar11 = (undefined1 *)FText::FText(local_5b0,uVar10);
  }
  else {
    lVar9 = FWeakObjectPtr::Get(&local_748);
    FText::FText(local_658,lVar9 + 0xa8);
    puVar11 = local_658;
  }
  FText::FText(local_610,puVar11);
  if ((bVar17) && (local_5a8 != (longlong *)0x0)) {
    LOCK();
    plVar13 = local_5a8 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_5a8)(local_5a8);
      LOCK();
      piVar1 = (int *)((longlong)local_5a8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5a8 + 8))(local_5a8,1);
      }
    }
  }
  if ((!bVar17) && (local_650 != (longlong *)0x0)) {
    LOCK();
    plVar13 = local_650 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_650)(local_650);
      LOCK();
      piVar1 = (int *)((longlong)local_650 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_650 + 8))(local_650,1);
      }
    }
  }
  FText::FText(local_6b8,local_610);
  local_6a0 = 1;
  local_698 = 0;
  local_690 = 0;
  puVar12 = (undefined8 *)FUN_142ffcac0();
  local_720 = *puVar12;
  local_710 = *(undefined4 *)(puVar12 + 2);
  uStack_70c = *(undefined4 *)((longlong)puVar12 + 0x14);
  uStack_708 = *(undefined4 *)(puVar12 + 3);
  uStack_704 = *(undefined4 *)((longlong)puVar12 + 0x1c);
  local_718 = puVar12[1];
  local_700 = *(undefined4 *)(puVar12 + 4);
  uStack_6fc = *(undefined4 *)((longlong)puVar12 + 0x24);
  uStack_6f8 = *(undefined4 *)(puVar12 + 5);
  uStack_6f4 = *(undefined4 *)((longlong)puVar12 + 0x2c);
  local_6f0 = puVar12[6];
  local_6e8 = (longlong *)puVar12[7];
  if (local_6e8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_6e8 + 1) = (int)local_6e8[1] + 1;
    UNLOCK();
  }
  local_6e0 = puVar12[8];
  local_6d8 = *(undefined4 *)(puVar12 + 9);
  local_6d4 = *(undefined1 *)((longlong)puVar12 + 0x4c);
  local_6d0 = 1;
  local_6c8 = (longlong *)0x0;
  local_6c0 = 0;
  lVar9 = STextBlock::FArguments::FArguments(local_3c8);
  FUN_1417f9360(lVar9 + 0x140,&local_720);
  *(undefined1 *)(lVar9 + 400) = local_6d0;
  pplVar15 = (longlong **)(lVar9 + 0x198);
  if (&local_6c8 != pplVar15) {
    if ((local_6c0 == 0) || (local_6c8 == (longlong *)0x0)) {
      if ((*(int *)(lVar9 + 0x1a0) != 0) && (plVar13 = *pplVar15, plVar13 != (longlong *)0x0)) {
        (**(code **)(*plVar13 + 0x28))(plVar13,0);
        if (*pplVar15 != (longlong *)0x0) {
          plVar13 = (longlong *)FMemory::Realloc(*pplVar15,0,0);
          *pplVar15 = plVar13;
        }
        *(undefined4 *)(lVar9 + 0x1a0) = 0;
      }
    }
    else {
      (**(code **)(*local_6c8 + 0x30))(local_6c8,pplVar15);
    }
  }
  FText::operator=(lVar9 + 0x108,local_6b8);
  *(undefined1 *)(lVar9 + 0x120) = local_6a0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x128,&local_698);
  FText::operator=(lVar9,local_688);
  *(undefined1 *)(lVar9 + 0x18) = local_670;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x20,&local_668);
  plVar13 = (longlong *)operator_new(0x660);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar13 + 1) = 1;
    *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
    *plVar13 = (longlong)&PTR_FUN_144043520;
    if (plVar13 != (longlong *)0xfffffffffffffff0) {
      FUN_1419a9150();
    }
  }
  plVar2 = plVar13 + 2;
  local_640 = plVar2;
  local_638 = plVar13;
  FUN_14044f790(&local_640,plVar2);
  local_7b8 = 0x650;
  SWidget::SetDebugInfo
            (plVar2,"STextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\GearBuilderDebugMenu.cpp"
             ,0x37);
  local_7a8 = *(undefined4 *)(lVar9 + 0x90);
  local_778 = lVar9 + 0xf8;
  local_790 = lVar9 + 0xe8;
  local_780 = *(undefined1 *)(lVar9 + 0xf1);
  local_798 = lVar9 + 200;
  local_7a0 = lVar9 + 0x98;
  local_788 = *(undefined1 *)(lVar9 + 0xf0);
  local_7b0 = lVar9 + 0x78;
  local_7b8 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar2,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  FUN_1419b0120(plVar2,lVar9);
  if (((char)plVar13[5] < '\0') || (cVar7 = (**(code **)(*plVar2 + 0x1e8))(plVar2), cVar7 != '\0'))
  {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar8;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_768 = FUN_14068ed70(local_588);
  pplVar15 = (longlong **)(local_768 + 0x1a8);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_760 = plVar2;
  plStack_758 = plVar13;
  if (&local_760 != pplVar15) {
    local_760 = *pplVar15;
    plStack_758 = *(longlong **)(local_768 + 0x1b0);
    *pplVar15 = plVar2;
    *(longlong **)(local_768 + 0x1b0) = plVar13;
    local_598 = plVar2;
    plStack_590 = plVar13;
  }
  plVar2 = plStack_758;
  if (plStack_758 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_758 + 1;
    lVar9 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_758)(plStack_758);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_758 + 8))(plStack_758,1);
      }
    }
  }
  uVar6 = local_768;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar13 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  local_728 = local_730;
  plVar14 = (longlong *)FUN_142fda290();
  local_628 = plVar14 + 2;
  local_620 = plVar14;
  TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>::
  Init<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_>
            (&local_628,local_628);
  plVar16 = plVar14 + 3;
  local_7b8 = 0x440;
  SWidget::SetDebugInfo
            (plVar16,"STableRow<T>",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\GearBuilderDebugMenu.cpp"
             ,0x35);
  local_778 = uVar6 + 0xf8;
  local_790 = uVar6 + 0xe8;
  local_798 = uVar6 + 200;
  local_7a0 = uVar6 + 0x98;
  local_7b0 = uVar6 + 0x78;
  local_7b8 = uVar6 + 0x60;
  local_780 = *(undefined1 *)(local_768 + 0xf1);
  local_788 = *(undefined1 *)(local_768 + 0xf0);
  local_7a8 = *(undefined4 *)(local_768 + 0x90);
  SWidget::SWidgetConstruct(plVar16,local_768,local_768 + 0x30,local_768 + 0x40);
  plVar2 = local_728;
  FUN_142feeae0(plVar14 + 2,local_768,local_728);
  (**(code **)(plVar14[2] + 0x78))
            (plVar14 + 2,*(undefined4 *)(*plVar2 + 0x2f8),local_768 + 0x178,pplVar15);
  if (((char)plVar14[6] < '\0') || (cVar7 = (**(code **)(*plVar16 + 0x1e8))(plVar16), cVar7 != '\0')
     ) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar14 + 0x31) = *(byte *)((longlong)plVar14 + 0x31) & 0xfe;
  *(byte *)((longlong)plVar14 + 0x31) = *(byte *)((longlong)plVar14 + 0x31) | bVar8;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)(plVar14 + 2);
  param_2[1] = (longlong)plVar14;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar14 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
    LOCK();
    plVar2 = plVar14 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  FUN_140690c40(local_588);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar13 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    LOCK();
    plVar2 = plVar13 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  FUN_140691150(local_3c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_6c8);
  plVar13 = local_6e8;
  if (local_6e8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_6e8 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_6e8)(local_6e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_6e8 + 8))(local_6e8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_698);
  if (local_6b0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_6b0 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_6b0)(local_6b0);
      LOCK();
      piVar1 = (int *)((longlong)local_6b0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_6b0 + 8))(local_6b0,1);
      }
    }
  }
  if (local_608 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_608 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_608)(local_608);
      LOCK();
      piVar1 = (int *)((longlong)local_608 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_608 + 8))(local_608,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_668);
  if (local_680 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_680 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_680)(local_680);
      LOCK();
      piVar1 = (int *)((longlong)local_680 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_680 + 8))(local_680,1);
      }
    }
  }
  if (local_5f0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_5f0 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_5f0)(local_5f0);
      LOCK();
      piVar1 = (int *)((longlong)local_5f0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5f0 + 8))(local_5f0,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142fdd380 FUN_142fdd380 body=309 status=ok
// SIG undefined FUN_142fdd380(void)

longlong FUN_142fdd380(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *local_58;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  uVar5 = FUN_14187ce90(&local_58,param_2,&local_48);
  FText::FText(local_38);
  local_20 = 1;
  local_18 = 0;
  local_10 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_18,uVar5);
  FText::operator=(param_1 + 0x108,local_38);
  *(undefined1 *)(param_1 + 0x120) = local_20;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x128,&local_18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (local_50 != 0) {
    if (local_58 == (longlong *)0x0) {
      return param_1;
    }
    (**(code **)(*local_58 + 0x28))(local_58,0);
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  return param_1;
}



// FUNCTION 142fdd4c0 FUN_142fdd4c0 body=480 status=ok
// SIG undefined FUN_142fdd4c0(void)

undefined8 * FUN_142fdd4c0(undefined8 *param_1)

{
  FUN_1419a8fd0();
  *param_1 = &PTR__scalar_deleting_destructor__145a38300;
  param_1[0x5e] = &PTR_LAB_145a37ab0;
  param_1[0x84] = &PTR_IsPromotedBuild_145a37ad0;
  param_1[0x85] = param_1;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 0;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  FWeakObjectPtr::operator=(param_1 + 0xb3,0);
  FWeakObjectPtr::operator=(param_1 + 0xb4,0);
  param_1[0xb5] = 0;
  FWeakObjectPtr::operator=(param_1 + 0xb6,0);
  *(undefined4 *)(param_1 + 0xb7) = 0;
  FWeakObjectPtr::operator=((longlong)param_1 + 0x5bc,0);
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  *(undefined2 *)(param_1 + 0xbf) = 0x101;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x613) = 0;
  return param_1;
}



// FUNCTION 142fdd6a0 FUN_142fdd6a0 body=480 status=ok
// SIG undefined FUN_142fdd6a0(void)

undefined8 * FUN_142fdd6a0(undefined8 *param_1)

{
  FUN_1419a8fd0();
  *param_1 = &PTR__scalar_deleting_destructor__145a37e00;
  param_1[0x5e] = &PTR_LAB_145a37ab0;
  param_1[0x84] = &PTR_IsPromotedBuild_145a37ad0;
  param_1[0x85] = param_1;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 0;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  FWeakObjectPtr::operator=(param_1 + 0xb3,0);
  FWeakObjectPtr::operator=(param_1 + 0xb4,0);
  param_1[0xb5] = 0;
  FWeakObjectPtr::operator=(param_1 + 0xb6,0);
  *(undefined4 *)(param_1 + 0xb7) = 0;
  FWeakObjectPtr::operator=((longlong)param_1 + 0x5bc,0);
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  *(undefined2 *)(param_1 + 0xbf) = 0x101;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x613) = 0;
  return param_1;
}



// FUNCTION 142fdd880 FUN_142fdd880 body=480 status=ok
// SIG undefined FUN_142fdd880(void)

undefined8 * FUN_142fdd880(undefined8 *param_1)

{
  FUN_1419a8fd0();
  *param_1 = &PTR__scalar_deleting_destructor__145a38800;
  param_1[0x5e] = &PTR_LAB_145a37ab0;
  param_1[0x84] = &PTR_IsPromotedBuild_145a37ad0;
  param_1[0x85] = param_1;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 0;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  FWeakObjectPtr::operator=(param_1 + 0xb3,0);
  FWeakObjectPtr::operator=(param_1 + 0xb4,0);
  param_1[0xb5] = 0;
  FWeakObjectPtr::operator=(param_1 + 0xb6,0);
  *(undefined4 *)(param_1 + 0xb7) = 0;
  FWeakObjectPtr::operator=((longlong)param_1 + 0x5bc,0);
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  *(undefined2 *)(param_1 + 0xbf) = 0x101;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x613) = 0;
  return param_1;
}



// FUNCTION 142fdda60 FUN_142fdda60 body=480 status=ok
// SIG undefined FUN_142fdda60(void)

undefined8 * FUN_142fdda60(undefined8 *param_1)

{
  FUN_1419a8fd0();
  *param_1 = &PTR__scalar_deleting_destructor__145a37830;
  param_1[0x5e] = &PTR_LAB_145a37ab0;
  param_1[0x84] = &PTR_IsPromotedBuild_145a37ad0;
  param_1[0x85] = param_1;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 0;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  FWeakObjectPtr::operator=(param_1 + 0xb3,0);
  FWeakObjectPtr::operator=(param_1 + 0xb4,0);
  param_1[0xb5] = 0;
  FWeakObjectPtr::operator=(param_1 + 0xb6,0);
  *(undefined4 *)(param_1 + 0xb7) = 0;
  FWeakObjectPtr::operator=((longlong)param_1 + 0x5bc,0);
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  *(undefined2 *)(param_1 + 0xbf) = 0x101;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x613) = 0;
  return param_1;
}



// FUNCTION 142fddc40 FUN_142fddc40 body=588 status=ok
// SIG undefined FUN_142fddc40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142fddc40(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR__scalar_deleting_destructor__145a35b20;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x95] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  FText::FText(param_1 + 0xa8);
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"PickupSphereComponent",1);
  uVar4 = *puVar2;
  uVar3 = FUN_142a175e0();
  uVar4 = FUN_141789050(param_2,param_1,uVar4,uVar3,uVar3,1,0,0);
  param_1[0xa6] = uVar4;
  param_1[0x2d] = uVar4;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x95] = 0;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(byte *)((longlong)param_1 + 0x4a4) = *(byte *)((longlong)param_1 + 0x4a4) & 0xcb | 0x48;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x94) = 1;
  *(byte *)(param_1 + 0xb5) = *(byte *)(param_1 + 0xb5) & 0x18 | 0x82;
  *(undefined1 *)(param_1 + 0x8d) = 1;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined1 *)(param_1 + 0xab) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4b4) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x129) = 4;
  *param_1 = &PTR_FUN_145a36338;
  *(undefined4 *)(param_1 + 0x28) = 0x41000000;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xf9;
  *(byte *)((longlong)param_1 + 0x614) = *(byte *)((longlong)param_1 + 0x614) & 0xfd;
  *(byte *)((longlong)param_1 + 0x614) = *(byte *)((longlong)param_1 + 0x614) | 1;
  *(undefined4 *)(param_1 + 0xbf) = 0;
  uVar1 = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x5fc) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x604) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x60c) = 1;
  *(undefined4 *)(param_1 + 0xbd) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0xcb) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x5ec) = 0x43c80000;
  *(undefined4 *)(param_1 + 0xbe) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5f4) = 0x471c4000;
  *(undefined1 *)((longlong)param_1 + 0x129) = 1;
  return param_1;
}



// FUNCTION 142fdde90 FUN_142fdde90 body=439 status=ok
// SIG undefined FUN_142fdde90(void)

undefined8 * FUN_142fdde90(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR__scalar_deleting_destructor__145a35b20;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x95] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  FText::FText(param_1 + 0xa8);
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"PickupSphereComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a175e0();
  uVar3 = FUN_141789050(param_2,param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xa6] = uVar3;
  param_1[0x2d] = uVar3;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x95] = 0;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(byte *)((longlong)param_1 + 0x4a4) = *(byte *)((longlong)param_1 + 0x4a4) & 0xcb | 0x48;
  param_1[0x8f] = 0;
  param_1[0xad] = 0;
  *(byte *)(param_1 + 0xb5) = *(byte *)(param_1 + 0xb5) & 0x18 | 0x82;
  param_1[0xae] = 0;
  *(undefined1 *)(param_1 + 0xab) = 0;
  *(undefined4 *)(param_1 + 0x94) = 1;
  *(undefined1 *)(param_1 + 0x8d) = 1;
  *(undefined2 *)((longlong)param_1 + 0x4b4) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x129) = 4;
  *(undefined4 *)(param_1 + 0x28) = 0x41000000;
  return param_1;
}



// FUNCTION 142fde050 FUN_142fde050 body=74 status=ok
// SIG undefined FUN_142fde050(void)

undefined8 * FUN_142fde050(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_145a3a5e8;
  param_1[0x8b] = &PTR_LAB_145a3acd0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xf9;
  return param_1;
}



// FUNCTION 142fde0a0 FArguments body=227 status=ok
// SIG undefined FArguments(void)

longlong SReflectorToolTipWidget::FArguments::FArguments(longlong param_1)

{
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  return param_1;
}



// FUNCTION 142fde190 FArguments body=220 status=ok
// SIG undefined FArguments(void)

longlong SFlareShipStatus::FArguments::FArguments(longlong param_1)

{
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  return param_1;
}



// FUNCTION 142fde270 FUN_142fde270 body=205 status=ok
// SIG undefined FUN_142fde270(void)

undefined8 * FUN_142fde270(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x2c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
  }
  if ((undefined2 *)param_1[4] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[4] = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < 0) && (*(int *)((longlong)param_1 + 0x2c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
  }
  if ((undefined2 *)param_1[4] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[4] = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  return param_1;
}



// FUNCTION 142fde340 FUN_142fde340 body=252 status=ok
// SIG undefined FUN_142fde340(void)

undefined8 * FUN_142fde340(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  
  uVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar2 != (longlong *)0x0) {
    plVar2[1] = (longlong)param_1;
    *plVar2 = (longlong)&DAT_143f3ed00;
    plVar2[2] = (longlong)&LAB_143009a10;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146535868,1);
    puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
    iVar1 = DAT_146535870;
    lVar3 = (longlong)DAT_146535870;
    uVar5 = *puVar4;
    DAT_146535870 = DAT_146535870 + 1;
    if (DAT_146535874 < DAT_146535870) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146535868,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_146535868);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 3;
  }
  param_1[10] = uVar5;
  return param_1;
}



// FUNCTION 142fde440 FUN_142fde440 body=199 status=ok
// SIG undefined FUN_142fde440(void)

undefined8 *
FUN_142fde440(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             byte param_5,undefined1 param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  param_1[1] = 0xffffffffffffffff;
  param_1[4] = param_3;
  *(byte *)((longlong)param_1 + 0x29) =
       (*(byte *)((longlong)param_1 + 0x29) & 0xfe | param_5) & 0xf1;
  *param_1 = 0xffffffffffffffff;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x34) = param_6;
  *(undefined4 *)(param_1 + 7) = param_4;
  *(int *)((longlong)param_1 + 0xc) = DAT_14677bb20;
  DAT_14677bb20 = DAT_14677bb20 + 1;
  plVar1 = (longlong *)param_1[4];
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_14301f8f0();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar3 + 0x208);
    }
  }
  if (lVar4 != 0) {
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(lVar4 + 0x1e0);
    return param_1;
  }
  *(undefined1 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 142fde510 FUN_142fde510 body=63 status=ok
// SIG undefined FUN_142fde510(void)

undefined8 * FUN_142fde510(undefined8 *param_1)

{
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0;
  param_1[2] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 3) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 1;
  return param_1;
}



// FUNCTION 142fde550 FUN_142fde550 body=264 status=ok
// SIG undefined FUN_142fde550(void)

longlong * FUN_142fde550(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 local_28 [8];
  longlong local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 2,0,0x68);
  *(undefined1 *)(param_1 + 0xf) = 0;
  local_28[0] = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  cVar1 = FUN_142ff5940(param_2,local_28,1);
  if (cVar1 != '\0') {
    FUN_142ff1ff0(local_28);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1,0);
    }
    if (param_1 == &local_20) {
      iVar2 = local_18._4_4_;
    }
    else {
      if (*param_1 != 0) {
        FMemory::Free();
      }
      *param_1 = local_20;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_18;
      *(int *)((longlong)param_1 + 0xc) = local_18._4_4_;
      local_18 = 0;
      local_20 = 0;
      iVar2 = 0;
    }
    local_18 = local_18 & 0xffffffff00000000;
    if (iVar2 != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_20,0);
    }
  }
  if (local_20 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142fde660 FUN_142fde660 body=78 status=ok
// SIG undefined FUN_142fde660(void)

undefined8 * FUN_142fde660(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 2,0,0x68);
  *(undefined1 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 142fde6b0 FUN_142fde6b0 body=81 status=ok
// SIG undefined FUN_142fde6b0(void)

char * FUN_142fde6b0(char *param_1,undefined8 param_2,char param_3)

{
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=();
  if (0 < *(int *)(param_1 + 0x10)) {
    *param_1 = (param_3 + '\x01') * '\x02';
    return param_1;
  }
  *param_1 = '\0';
  return param_1;
}



// FUNCTION 142fde710 FUN_142fde710 body=137 status=ok
// SIG undefined FUN_142fde710(void)

undefined1 * FUN_142fde710(undefined1 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_18 [2];
  
  plVar1 = (longlong *)(param_1 + 8);
  *param_1 = 4;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  plVar2 = (longlong *)FUN_142ff01f0(local_18);
  if (plVar1 != plVar2) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar2;
    *plVar2 = 0;
    *(int *)(param_1 + 0x10) = (int)plVar2[1];
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142fde7a0 FUN_142fde7a0 body=164 status=ok
// SIG undefined FUN_142fde7a0(void)

char * FUN_142fde7a0(char *param_1,void *param_2,int param_3,char param_4)

{
  int iVar1;
  
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  *param_1 = (param_4 + '\x01') * '\x02';
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < param_3) {
    *(int *)(param_1 + 0x10) = param_3;
    if (*(int *)(param_1 + 0x14) < param_3) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 8);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar1 + *(longlong *)(param_1 + 8)),0,(longlong)(param_3 - iVar1))
    ;
  }
  else if ((param_3 < iVar1) && (param_3 != iVar1)) {
    *(int *)(param_1 + 0x10) = param_3;
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_1 + 8);
  }
  _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 8),param_2,(longlong)param_3);
  return param_1;
}



// FUNCTION 142fde850 FUN_142fde850 body=189 status=ok
// SIG undefined FUN_142fde850(void)

undefined8 * FUN_142fde850(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar5 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar5;
  uVar5 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar5;
  uVar5 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar5;
  param_1[7] = param_2[7];
  uVar5 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar5;
  uVar5 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar5;
  uVar2 = *(undefined4 *)((longlong)param_2 + 100);
  uVar3 = *(undefined4 *)(param_2 + 0xd);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0xd) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar4;
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = (void *)param_2[0xf];
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0xf,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[0xf],_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 142fde910 FUN_142fde910 body=108 status=ok
// SIG undefined FUN_142fde910(void)

undefined8 * FUN_142fde910(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  FUN_142c8c260(param_1 + 8,0x3f800000);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 1) = param_3;
  return param_1;
}



// FUNCTION 142fde980 FUN_142fde980 body=137 status=ok
// SIG undefined FUN_142fde980(void)

longlong FUN_142fde980(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  FWeakObjectPtr::operator=();
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 1000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar1 = FWeakObjectPtr::Get(param_1);
  fVar2 = (float)FUN_142c98860(lVar1 + 0x38,0);
  *(int *)(param_1 + 0x18) = (int)ROUND(fVar2 * 2.0 - 0.5) >> 1;
  lVar1 = FWeakObjectPtr::Get(param_1);
  fVar2 = (float)FUN_142c98860(lVar1 + 0x70,0);
  *(int *)(param_1 + 0x1c) = (int)ROUND(fVar2 * 2.0 - 0.5) >> 1;
  return param_1;
}



// FUNCTION 142fdea10 FUN_142fdea10 body=67 status=ok
// SIG undefined FUN_142fdea10(void)

undefined8 * FUN_142fdea10(undefined8 *param_1,undefined4 *param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 2);
  param_1[1] = *(undefined8 *)(param_2 + 4);
  param_1[2] = *(undefined8 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 3) = *param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 1;
  return param_1;
}



// FUNCTION 142fdea60 FUN_142fdea60 body=102 status=ok
// SIG undefined FUN_142fdea60(void)

undefined8 * FUN_142fdea60(undefined8 *param_1)

{
  FUN_141300770();
  *(undefined1 *)((longlong)param_1 + 0x2ed) = 1;
  *(undefined4 *)(param_1 + 0x5e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  *param_1 = &PTR_FUN_145a38fd0;
  param_1[0x20] = &PTR_LAB_145a39470;
  param_1[0x41] = &PTR_LAB_145a39498;
  param_1[0x57] = &PTR_LAB_145a394e8;
  return param_1;
}



// FUNCTION 142fdead0 FUN_142fdead0 body=377 status=ok
// SIG undefined FUN_142fdead0(void)

undefined8 * FUN_142fdead0(undefined8 *param_1)

{
  UWidget::UWidget();
  *(undefined2 *)(param_1 + 0x21) = 0;
  *param_1 = &PTR_FUN_145a38d00;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  _guard_xfg_dispatch_icall_nop((void *)((longlong)param_1 + 300),0,100);
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x25) = 1;
  return param_1;
}



// FUNCTION 142fdec50 UBehaviorTree body=51 status=ok
// SIG undefined UBehaviorTree(void)

undefined8 * UBehaviorTree::UBehaviorTree(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__145a398f8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 142fdec90 FUN_142fdec90 body=175 status=ok
// SIG undefined FUN_142fdec90(void)

undefined8 * FUN_142fdec90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142d7a640();
  *param_1 = &PTR__scalar_deleting_destructor__144288700;
  param_1[0x13] = &PTR_LAB_144288988;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  uVar1 = FUN_14301f8f0();
  param_1[0x14] = uVar1;
  *(uint *)(param_1 + 0x1e) = *(uint *)(param_1 + 0x1e) | 1;
  *(uint *)((longlong)param_1 + 0x124) = *(uint *)((longlong)param_1 + 0x124) | 1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x20) = 2;
  *(undefined1 *)(param_1 + 0x22) = 0;
  return param_1;
}



// FUNCTION 142fded40 FUN_142fded40 body=362 status=ok
// SIG undefined FUN_142fded40(void)

undefined8 * FUN_142fded40(undefined8 *param_1)

{
  FUN_142cb26e0();
  *param_1 = &PTR_FUN_145a355a0;
  param_1[5] = &PTR_LAB_145a35ad8;
  param_1[0x2f] = &PTR_LAB_145a35b08;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  FText::FText(param_1 + 0x4d);
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  UCheatManagerGunfire::GetAllCheats(param_1 + 0x5f);
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  param_1[0x41] = 0;
  *(byte *)(param_1 + 99) = *(byte *)(param_1 + 99) & 0xfd | 1;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  return param_1;
}



// FUNCTION 142fdeeb0 FUN_142fdeeb0 body=85 status=ok
// SIG undefined FUN_142fdeeb0(void)

undefined8 * FUN_142fdeeb0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_145a36b68;
  *(undefined1 *)((longlong)param_1 + 0x3b) = 1;
  FText::FText(param_1 + 8);
  *(undefined4 *)(param_1 + 0xb) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 0x5c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x5e) = 0;
  param_1[0xc] = 0;
  *(undefined1 *)((longlong)param_1 + 0x3a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined2 *)(param_1 + 7) = 0x101;
  return param_1;
}



// FUNCTION 142fdef10 FUN_142fdef10 body=43 status=ok
// SIG undefined FUN_142fdef10(void)

undefined8 * FUN_142fdef10(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__145a36e30;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 142fdef40 FUN_142fdef40 body=70 status=ok
// SIG undefined FUN_142fdef40(void)

undefined8 * FUN_142fdef40(undefined8 *param_1)

{
  FUN_142d0be80();
  *param_1 = &PTR_FUN_145a39df8;
  param_1[0x26] = &PTR_LAB_145a3a0b0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  return param_1;
}



// FUNCTION 142fdef90 FUN_142fdef90 body=652 status=ok
// SIG undefined FUN_142fdef90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142fdef90(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_144288468;
  param_1[6] = &PTR_LAB_1442886e8;
  FText::FText(param_1 + 8);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1c,0);
  FGenericPlatformString::Memcpy(param_1[0x1c],L"DesignerFixMe",0x1c);
  param_1[0x1e] = 0;
  uVar7 = uRam0000000146b453ec;
  uVar5 = uRam0000000146b453e8;
  uVar3 = uRam0000000146b453e4;
  uVar1 = _DAT_146b453e0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = DAT_1464aa788;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = DAT_1464aa790;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0x3f800000;
  uVar2 = uRam0000000146b453dc;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(uint *)((longlong)param_1 + 0x24c) = uVar2;
  uVar2 = uRam0000000146b453d4 & uVar3;
  uVar4 = uRam0000000146b453d8 & uVar5;
  uVar6 = uRam0000000146b453dc & uVar7;
  *(uint *)(param_1 + 0x4c) = _DAT_146b453d0 & uVar1;
  *(uint *)((longlong)param_1 + 0x264) = uVar2;
  *(uint *)(param_1 + 0x4d) = uVar4;
  *(uint *)((longlong)param_1 + 0x26c) = uVar6;
  uVar2 = uRam0000000146b453dc;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(uint *)((longlong)param_1 + 0x27c) = uVar2;
  uVar2 = uRam0000000146b453d4 & uVar3;
  uVar4 = uRam0000000146b453d8 & uVar5;
  uVar6 = uRam0000000146b453dc & uVar7;
  *(uint *)(param_1 + 0x52) = _DAT_146b453d0 & uVar1;
  *(uint *)((longlong)param_1 + 0x294) = uVar2;
  *(uint *)(param_1 + 0x53) = uVar4;
  *(uint *)((longlong)param_1 + 0x29c) = uVar6;
  uVar2 = uRam0000000146b453dc;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(uint *)((longlong)param_1 + 0x2ac) = uVar2;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  uVar2 = uRam0000000146b453d4 & uVar3;
  uVar4 = uRam0000000146b453d8 & uVar5;
  uVar6 = uRam0000000146b453dc & uVar7;
  *(uint *)(param_1 + 0x58) = _DAT_146b453d0 & uVar1;
  *(uint *)((longlong)param_1 + 0x2c4) = uVar2;
  *(uint *)(param_1 + 0x59) = uVar4;
  *(uint *)((longlong)param_1 + 0x2cc) = uVar6;
  uVar2 = uRam0000000146b453dc;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(uint *)((longlong)param_1 + 0x2dc) = uVar2;
  uVar3 = uRam0000000146b453d4 & uVar3;
  uVar5 = uRam0000000146b453d8 & uVar5;
  uVar7 = uRam0000000146b453dc & uVar7;
  *(uint *)(param_1 + 0x5e) = _DAT_146b453d0 & uVar1;
  *(uint *)((longlong)param_1 + 0x2f4) = uVar3;
  *(uint *)(param_1 + 0x5f) = uVar5;
  *(uint *)((longlong)param_1 + 0x2fc) = uVar7;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) & 0xfffffffe;
  param_1[0x2c] = 0;
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) | 3;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x3b] = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0x100;
  *(undefined4 *)(param_1 + 0x3d) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x45) = 1;
  *(undefined1 *)(param_1 + 0x20) = 1;
  return param_1;
}



// FUNCTION 142fdf220 FUN_142fdf220 body=67 status=ok
// SIG undefined FUN_142fdf220(void)

undefined8 * FUN_142fdf220(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142fdef90();
  *param_1 = &PTR__scalar_deleting_destructor__145a3a0c8;
  param_1[6] = &PTR_LAB_145a3a350;
  param_1[0x60] = 0;
  uVar1 = FUN_14301f8f0();
  param_1[0x60] = uVar1;
  return param_1;
}



// FUNCTION 142fdf270 FUN_142fdf270 body=84 status=ok
// SIG undefined FUN_142fdf270(void)

undefined8 * FUN_142fdf270(undefined8 *param_1)

{
  FUN_142fdf540();
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145a34de8;
  param_1[0x20] = &PTR_LAB_145a35080;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  return param_1;
}



// FUNCTION 142fdf2d0 FUN_142fdf2d0 body=65 status=ok
// SIG undefined FUN_142fdf2d0(void)

undefined8 * FUN_142fdf2d0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__145a3a368;
  *(undefined2 *)((longlong)param_1 + 0x49) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  return param_1;
}



// FUNCTION 142fdf320 FUN_142fdf320 body=474 status=ok
// SIG undefined FUN_142fdf320(void)

undefined8 * FUN_142fdf320(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142326e40();
  *param_1 = &PTR_FUN_145a3b570;
  param_1[5] = &PTR_LAB_145a3ba48;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0xffffffffffffffff;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x2a4);
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 2;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  uVar1 = FUN_142ff8700();
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) | 1;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  param_1[0x53] = uVar1;
  *(undefined1 *)(param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return param_1;
}



// FUNCTION 142fdf500 FUN_142fdf500 body=63 status=ok
// SIG undefined FUN_142fdf500(void)

undefined8 * FUN_142fdf500(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__145a39b78;
  FText::FText(param_1 + 6);
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb) = 1;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 100;
  return param_1;
}



// FUNCTION 142fdf540 FUN_142fdf540 body=323 status=ok
// SIG undefined FUN_142fdf540(void)

undefined8 * FUN_142fdf540(undefined8 *param_1)

{
  FUN_142d7a580();
  *param_1 = &PTR__scalar_deleting_destructor__145a34b38;
  param_1[0x20] = &PTR_LAB_145a34dd0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0x3f800000;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return param_1;
}



// FUNCTION 142fdf690 FUN_142fdf690 body=82 status=ok
// SIG undefined FUN_142fdf690(void)

undefined8 * FUN_142fdf690(undefined8 *param_1)

{
  FUN_142d7a6a0();
  *param_1 = &PTR_FUN_145a35098;
  *(undefined2 *)((longlong)param_1 + 0x81) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0xff;
  return param_1;
}



// FUNCTION 142fdf6f0 FUN_142fdf6f0 body=304 status=ok
// SIG undefined FUN_142fdf6f0(void)

undefined8 * FUN_142fdf6f0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *(undefined4 *)(param_1 + 10) = 10;
  *param_1 = &PTR_FUN_145a35320;
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FText::FText(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0x3f800000;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x144)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x27,0);
  }
  if ((undefined2 *)param_1[0x27] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x27] = 0;
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0x43020000;
  return param_1;
}



// FUNCTION 142fdf820 FUN_142fdf820 body=148 status=ok
// SIG undefined FUN_142fdf820(void)

undefined8 * FUN_142fdf820(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar1);
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_145a3ba78;
  param_1[8] = &PTR_LAB_145a3bd00;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  return param_1;
}



// FUNCTION 142fdf8c0 ULayer body=47 status=ok
// SIG undefined ULayer(void)

undefined8 * ULayer::ULayer(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__145a3afb8;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 142fdf8f0 FUN_142fdf8f0 body=231 status=ok
// SIG undefined FUN_142fdf8f0(void)

undefined8 * FUN_142fdf8f0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_145a37100;
  param_1[6] = &PTR_LAB_145a37380;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  FText::FText(param_1 + 0x15);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x18,L"Desiger: Write a blurb.",L"ManufacturerData",L"DesignerFixMeBlurb");
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe) = 0x42c80000;
  return param_1;
}



// FUNCTION 142fdf9e0 FUN_142fdf9e0 body=146 status=ok
// SIG undefined FUN_142fdf9e0(void)

undefined8 * FUN_142fdf9e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar1);
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) & 0xfffffff8;
  *param_1 = &PTR_FUN_145a3ad38;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x428c0000;
  *(undefined8 *)((longlong)param_1 + 0x3c) = DAT_1468b5da0;
  *(undefined4 *)((longlong)param_1 + 0x44) = DAT_1468b5da8;
  param_1[9] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 10) = DAT_1468b5da8;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x447a0000;
  *(undefined4 *)(param_1 + 0xc) = 0x44bb8000;
  *(undefined8 *)((longlong)param_1 + 100) = 0x41200000;
  *(undefined4 *)(param_1 + 0x11) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0xf) = 0x40a00000;
  return param_1;
}



// FUNCTION 142fdfa80 FUN_142fdfa80 body=190 status=ok
// SIG undefined FUN_142fdfa80(void)

void FUN_142fdfa80(longlong param_1)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x600);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x5e8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x5d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x5c8);
  *(undefined4 *)(param_1 + 0x590) = 0;
  if (*(longlong *)(param_1 + 0x588) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x548);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x538);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x528);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x518);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x508);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4f8);
  SListView<UObject_*>::FWidgetGenerator::~FWidgetGenerator(param_1 + 0x428);
  FUN_140691d50(param_1);
  return;
}



// FUNCTION 142fdfb40 FUN_142fdfb40 body=104 status=ok
// SIG undefined FUN_142fdfb40(void)

void FUN_142fdfb40(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      if (*(longlong *)(lVar1 + 0x18) != 0) {
        FMemory::Free();
      }
      TArray<FEdgeToCreate,FDefaultAllocator>::~TArray<FEdgeToCreate,FDefaultAllocator>(lVar1);
      lVar1 = lVar1 + 0x30;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142fdfbb0 FUN_142fdfbb0 body=179 status=ok
// SIG undefined FUN_142fdfbb0(void)

void FUN_142fdfbb0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x100);
  iVar6 = *(int *)(param_1 + 0x108);
  lVar7 = lVar5;
  if (lVar5 == 0) {
    lVar7 = param_1;
  }
  if (iVar6 != 0) {
    plVar8 = (longlong *)(lVar7 + 8);
    do {
      plVar4 = (longlong *)*plVar8;
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
      plVar8 = plVar8 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0x100);
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142fdfc70 FUN_142fdfc70 body=197 status=ok
// SIG undefined FUN_142fdfc70(void)

void FUN_142fdfc70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_142fdfeb0(param_1 + 0x578);
  plVar4 = *(longlong **)(param_1 + 0x548);
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
  if (*(longlong *)(param_1 + 0x4f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x490) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 142fdfd40 FUN_142fdfd40 body=361 status=ok
// SIG undefined FUN_142fdfd40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fdfd40(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  lVar7 = *(longlong *)(param_1 + 0x50);
  iVar5 = 0;
  iVar3 = DAT_146535870;
  if (0 < DAT_146535870) {
    lVar8 = 0;
    do {
      plVar6 = (longlong *)(DAT_146535868 + lVar8);
      if ((((int)plVar6[1] != 0) && (plVar2 = (longlong *)*plVar6, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
         iVar3 = DAT_146535870, *plVar2 == lVar7)) {
        if (((int)plVar6[1] != 0) && (plVar2 = (longlong *)*plVar6, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar6 != 0) {
            lVar7 = FMemory::Realloc(*plVar6,0,0);
            *plVar6 = lVar7;
          }
          *(undefined4 *)(plVar6 + 1) = 0;
          iVar3 = DAT_146535870;
        }
        break;
      }
      iVar5 = iVar5 + 1;
      lVar8 = lVar8 + 0x10;
    } while (iVar5 < iVar3);
  }
  if (DAT_14653587c < 1) {
    iVar4 = 0;
    iVar5 = iVar3;
    if (0 < iVar3) {
      lVar7 = 0;
      do {
        if (((*(int *)(lVar7 + 8 + DAT_146535868) == 0) ||
            (*(longlong **)(lVar7 + DAT_146535868) == (longlong *)0x0)) ||
           (cVar1 = (**(code **)(**(longlong **)(lVar7 + DAT_146535868) + 0x10))(), cVar1 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146535868,iVar4,1,1);
        }
        else {
          iVar4 = iVar4 + 1;
          lVar7 = lVar7 + 0x10;
        }
        iVar5 = DAT_146535870;
      } while (iVar4 < DAT_146535870);
    }
    _DAT_146535878 = iVar5 * 2;
    if (_DAT_146535878 < 3) {
      _DAT_146535878 = 2;
    }
    if ((_DAT_146535878 < iVar3) && (DAT_146535874 != iVar5)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146535868);
    }
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}



// FUNCTION 142fdfeb0 FUN_142fdfeb0 body=101 status=ok
// SIG undefined FUN_142fdfeb0(void)

void FUN_142fdfeb0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x20);
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x18);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142fdff20 FUN_142fdff20 body=872 status=ok
// SIG undefined FUN_142fdff20(void)

void FUN_142fdff20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x280);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x270);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x260);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x250);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x240);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 0x220);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 0x200);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 0x1e0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 0x1c0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x1b0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x1a0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  iVar4 = *(int *)(param_1 + 0x120);
  plVar5 = *(longlong **)(param_1 + 0x118);
  if (iVar4 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar5 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  FUN_140458e30(param_1);
  return;
}



// FUNCTION 142fe0290 FUN_142fe0290 body=241 status=ok
// SIG undefined FUN_142fe0290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_142fe0290(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  puVar1 = (undefined8 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uStack_40 = *(longlong **)(param_2 + 8);
  local_48 = *(undefined8 *)(param_2 + 6);
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_40 + 1) = (int)uStack_40[1] + 1;
    UNLOCK();
  }
  if (&local_48 != puVar1) {
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    uVar8 = *puVar1;
    plVar9 = *(longlong **)(param_1 + 8);
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = (undefined4)uStack_40;
    uStack_2c = uStack_40._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_48;
    param_1[7] = local_48._4_4_;
    param_1[8] = (undefined4)uStack_40;
    param_1[9] = uStack_40._4_4_;
    local_48 = uVar8;
    uStack_40 = plVar9;
  }
  plVar9 = uStack_40;
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_40 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*uStack_40)(uStack_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_40 + 8))(uStack_40,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xc,param_2 + 0xc);
  return param_1;
}



// FUNCTION 142fe0390 FUN_142fe0390 body=164 status=ok
// SIG undefined FUN_142fe0390(void)

undefined8 * FUN_142fe0390(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  plVar1 = param_2 + 2;
  *param_1 = *param_2;
  plVar2 = param_1 + 2;
  param_1[1] = param_2[1];
  if (plVar2 != plVar1) {
    lVar3 = *plVar2;
    iVar5 = *(int *)(param_1 + 3);
    if (iVar5 != 0) {
      plVar4 = (longlong *)(lVar3 + 8);
      do {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      lVar3 = *plVar2;
    }
    if (lVar3 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  return param_1;
}



// FUNCTION 142fe0440 FUN_142fe0440 body=235 status=ok
// SIG undefined FUN_142fe0440(void)

ulonglong FUN_142fe0440(uint *param_1,uint *param_2)

{
  int iVar1;
  ulonglong _Size;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  
  _Size = (ulonglong)*param_2;
  if ((((*param_1 == *param_2) &&
       (_Size = *(ulonglong *)(param_2 + 2), *(ulonglong *)(param_1 + 2) == _Size)) &&
      (_Size = *(ulonglong *)(param_2 + 4), *(ulonglong *)(param_1 + 4) == _Size)) &&
     ((_Size = *(ulonglong *)(param_2 + 6), *(ulonglong *)(param_1 + 6) == _Size &&
      (_Size = (ulonglong)(int)param_1[10], param_1[10] == param_2[10])))) {
    iVar1 = _guard_xfg_dispatch_icall_nop
                      (*(void **)(param_1 + 8),*(void **)(param_2 + 8),_Size << 3);
    _Size = CONCAT44(extraout_var,iVar1);
    if ((iVar1 == 0) && (_Size = (ulonglong)(int)param_1[0x12], param_1[0x12] == param_2[0x12])) {
      iVar1 = _guard_xfg_dispatch_icall_nop
                        (*(void **)(param_1 + 0x10),*(void **)(param_2 + 0x10),_Size);
      _Size = CONCAT44(extraout_var_00,iVar1);
      if ((iVar1 == 0) && (_Size = (ulonglong)(int)param_1[0x16], param_1[0x16] == param_2[0x16])) {
        iVar1 = _guard_xfg_dispatch_icall_nop
                          (*(void **)(param_1 + 0x14),*(void **)(param_2 + 0x14),_Size << 3);
        _Size = CONCAT44(extraout_var_01,iVar1);
        if ((iVar1 == 0) && (_Size = (ulonglong)(int)param_1[0xe], param_1[0xe] == param_2[0xe])) {
          iVar1 = _guard_xfg_dispatch_icall_nop
                            (*(void **)(param_1 + 0xc),*(void **)(param_2 + 0xc),_Size << 3);
          _Size = CONCAT44(extraout_var_02,iVar1);
          if ((iVar1 == 0) && (_Size = 0, (char)param_1[0x18] == (char)param_2[0x18])) {
            return 1;
          }
        }
      }
    }
  }
  return _Size & 0xffffffffffffff00;
}



// FUNCTION 142fe0530 FUN_142fe0530 body=54 status=ok
// SIG undefined FUN_142fe0530(void)

ulonglong FUN_142fe0530(char *param_1,char *param_2)

{
  int iVar1;
  ulonglong _Size;
  undefined4 extraout_var;
  
  _Size = 0;
  if ((*param_1 == *param_2) &&
     (_Size = (ulonglong)*(int *)(param_1 + 0x10),
     *(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))) {
    iVar1 = _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 8),*(void **)(param_2 + 8),_Size);
    _Size = CONCAT44(extraout_var,iVar1);
    if (iVar1 == 0) {
      return CONCAT71((int7)(_Size >> 8),1);
    }
  }
  return _Size & 0xffffffffffffff00;
}



// FUNCTION 142fe0570 FUN_142fe0570 body=372 status=ok
// SIG undefined FUN_142fe0570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_142fe0570(undefined8 param_1,void *param_2,uint param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulonglong _Size;
  undefined1 *_Dst;
  byte *pbVar9;
  ulonglong uVar10;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  undefined1 auStack_30 [8];
  
  puVar8 = auStack_58;
  local_38 = DAT_1468387a8 ^ (ulonglong)&local_38;
  _Size = (ulonglong)param_3;
  uVar7 = param_3 - 5;
  if (1 < (int)uVar7) {
    if (param_3 == 0) {
      _Dst = (undefined1 *)0x0;
      puVar8 = auStack_58;
    }
    else {
      uVar6 = (ulonglong)(param_3 + 0xf) + 0xf;
      if (uVar6 <= param_3 + 0xf) {
        uVar6 = 0xffffffffffffff0;
      }
      puVar8 = auStack_58 + -(uVar6 & 0xfffffffffffffff0);
      _Dst = auStack_30 + -(uVar6 & 0xfffffffffffffff0);
    }
    *(undefined8 *)(puVar8 + -8) = 0x142fe05f4;
    _guard_xfg_dispatch_icall_nop(_Dst,param_2,_Size);
    bVar1 = *(byte *)((longlong)param_2 + 4);
    uVar6 = (ulonglong)
            (uint)(CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((longlong)param_2 + 1),
                                              *(undefined1 *)((longlong)param_2 + 2)),
                                     *(undefined1 *)((longlong)param_2 + 3)),bVar1) >> 5);
    if (uVar7 != 0) {
      uVar10 = (ulonglong)uVar7;
      pbVar9 = _Dst + 5;
      do {
        uVar6 = (uVar6 * 0x10a860c1) % 0xfffffffb;
        *pbVar9 = *pbVar9 ^ (byte)uVar6;
        uVar10 = uVar10 - 1;
        pbVar9 = pbVar9 + 1;
      } while (uVar10 != 0);
    }
    *(undefined8 *)(puVar8 + -8) = 0x142fe067b;
    FUN_143012f80(bVar1 & 0x1f,_Dst + 5,uVar7);
    uVar2 = _Dst[5];
    uVar3 = _Dst[6];
    *(undefined2 *)(_Dst + 5) = 0xffff;
    *(undefined8 *)(puVar8 + -8) = 0x142fe069d;
    uVar4 = FCrc::MemCrc32(_Dst,_Size,0);
    if (CONCAT11(uVar2,uVar3) == (ushort)((ushort)((uint)uVar4 >> 0x10) ^ (ushort)uVar4)) {
      *(undefined8 *)(puVar8 + -8) = 0x142fe06b8;
      _guard_xfg_dispatch_icall_nop(param_2,_Dst,_Size);
      uVar5 = 1;
      goto LAB_142fe06be;
    }
  }
  uVar5 = 0;
LAB_142fe06be:
  *(undefined8 *)(puVar8 + -8) = 0x142fe06ca;
  return uVar5;
}



// FUNCTION 142fe06f0 FUN_142fe06f0 body=985 status=ok
// SIG undefined FUN_142fe06f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_142fe06f0(longlong *param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_178 [32];
  undefined4 *local_158;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_12c [8];
  int local_124;
  undefined1 local_120;
  int local_11c [5];
  char local_108 [192];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  plVar8 = (longlong *)0x0;
  if (((*(int *)(*param_1 + 0x3d0) != 0) &&
      (plVar10 = *(longlong **)(*param_1 + 0x3c8), plVar10 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*plVar10 + 0x18))(), cVar1 != '\0')) {
    lVar6 = *param_1;
    plVar10 = *(longlong **)(lVar6 + 0x398);
    plVar7 = plVar10;
    plVar9 = plVar8;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      iVar2 = (int)plVar10[1];
      bVar11 = iVar2 == 0;
      if (bVar11) {
        *(int *)(plVar10 + 1) = 0;
        iVar2 = 0;
      }
      UNLOCK();
      while (plVar7 = plVar8, plVar9 = (longlong *)0x0, !bVar11) {
        LOCK();
        bVar11 = iVar2 == (int)plVar10[1];
        if (bVar11) {
          *(int *)(plVar10 + 1) = iVar2 + 1;
        }
        UNLOCK();
        if (bVar11) {
          plVar7 = plVar10;
          if (plVar10 != (longlong *)0x0) {
            plVar9 = *(longlong **)(lVar6 + 0x390);
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
            LOCK();
            plVar7 = plVar10 + 1;
            lVar6 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            plVar7 = plVar10;
            if ((int)lVar6 == 1) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar4 = (int *)((longlong)plVar10 + 0xc);
              iVar2 = *piVar4;
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
          break;
        }
        LOCK();
        iVar2 = (int)plVar10[1];
        bVar11 = iVar2 == 0;
        if (bVar11) {
          *(int *)(plVar10 + 1) = 0;
          iVar2 = 0;
        }
        UNLOCK();
      }
    }
    lVar6 = *param_1;
    if ((local_12c != (undefined1 *)(lVar6 + 0x3d8)) && (*(char *)(lVar6 + 0x3dc) != '\0')) {
      *(undefined1 *)(lVar6 + 0x3dc) = 0;
      lVar6 = *param_1;
    }
    puVar3 = (undefined4 *)(**(code **)(*plVar9 + 0x38))(plVar9,lVar6);
    lVar6 = param_1[1];
    fVar12 = 1.0 / (*(float *)(lVar6 + 0x1c) * *(float *)(lVar6 + 0x28) -
                   *(float *)(lVar6 + 0x20) * *(float *)(lVar6 + 0x24));
    fVar14 = *(float *)(lVar6 + 0x1c) * fVar12;
    fVar12 = -(*(float *)(lVar6 + 0x20) * fVar12);
    fVar13 = *(float *)(lVar6 + 4) * 0.25;
    fVar14 = fVar14 * *(float *)(param_1[2] + 0x1c) + fVar12 * *(float *)(param_1[2] + 0x18) +
             (-(fVar12 * *(float *)(lVar6 + 0x2c)) - fVar14 * *(float *)(lVar6 + 0x30));
    fVar12 = 3.0;
    if ((3.0 <= fVar13) && (fVar12 = fVar13, 10.0 <= fVar13)) {
      fVar12 = 10.0;
    }
    plVar10 = plVar8;
    if (fVar12 <= fVar14) {
      plVar10 = (longlong *)(ulonglong)((*(float *)(lVar6 + 4) - fVar12 < fVar14) + 1);
    }
    if (((*(int *)(*param_1 + 0x3c0) == 0) ||
        (plVar5 = *(longlong **)(*param_1 + 0x3b8), plVar5 == (longlong *)0x0)) ||
       (cVar1 = (**(code **)(*plVar5 + 0x18))(), cVar1 == '\0')) {
      local_124 = (int)plVar10;
      piVar4 = &local_124;
      local_120 = 1;
    }
    else {
      local_148 = *puVar3;
      local_144 = puVar3[1];
      plVar5 = plVar8;
      if (*(int *)(*param_1 + 0x3c0) != 0) {
        plVar5 = *(longlong **)(*param_1 + 0x3b8);
      }
      local_158 = &local_148;
      (**(code **)(*plVar5 + 0x38))(plVar5,local_11c,param_1[2],plVar10);
      piVar4 = local_11c;
    }
    if ((char)piVar4[1] != '\0') {
      iVar2 = *piVar4;
      local_140 = *puVar3;
      local_13c = puVar3[1];
      if (*(int *)(*param_1 + 0x3d0) != 0) {
        plVar8 = *(longlong **)(*param_1 + 0x3c8);
      }
      local_158 = &local_140;
      (**(code **)(*plVar8 + 0x38))(plVar8,local_108,param_1[2],iVar2);
      if ((local_108[0] != '\0') && (iVar2 == 1)) {
        local_138 = *puVar3;
        local_134 = puVar3[1];
        (**(code **)(*plVar9 + 0x40))(plVar9,&local_138,1);
      }
      FReply::FReply(param_2,local_108);
      FUN_140438c20(local_108);
      if (plVar7 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar8 = plVar7 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 != 1) {
        return param_2;
      }
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar4 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        return param_2;
      }
      (**(code **)(*plVar7 + 8))(plVar7,1);
      return param_2;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar7 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar4 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 142fe0ad0 FUN_142fe0ad0 body=627 status=ok
// SIG undefined FUN_142fe0ad0(void)

void FUN_142fe0ad0(longlong *param_1,longlong param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int *piVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  
  lVar12 = *param_1;
  lVar5 = *(longlong *)(param_2 + 0x40);
  if (*(longlong *)(lVar12 + 0x290) == 0) {
    *(longlong *)(lVar12 + 0x290) = lVar5;
    lVar12 = *param_1;
  }
  uVar14 = 0;
  if (lVar5 == *(longlong *)(lVar12 + 0x290)) {
    plVar7 = (longlong *)(lVar12 + 0x298);
    if (*(int *)(lVar12 + 0x2a4) < *(int *)(param_2 + 0x58) + 1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar7);
    }
    if (*(longlong *)(param_2 + 0x48) != 0) {
      iVar4 = *(int *)(lVar12 + 0x2a0);
      *(int *)(lVar12 + 0x2a0) = iVar4 + 1;
      if (*(int *)(lVar12 + 0x2a4) < iVar4 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7,iVar4);
      }
      *(undefined8 *)(*plVar7 + (longlong)iVar4 * 8) = *(undefined8 *)(param_2 + 0x48);
    }
    plVar9 = *(longlong **)(param_2 + 0x50);
    plVar13 = plVar9 + *(int *)(param_2 + 0x58);
    for (; plVar9 != plVar13; plVar9 = plVar9 + 1) {
      if (*plVar9 != 0) {
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(plVar7,plVar9);
      }
    }
    piVar8 = *(int **)(param_2 + 0x60);
    piVar1 = piVar8 + (longlong)*(int *)(param_2 + 0x68) * 10;
    for (; piVar8 != piVar1; piVar8 = piVar8 + 10) {
      if (*piVar8 == param_3) {
        plVar9 = *(longlong **)(piVar8 + 2);
        plVar13 = plVar9 + piVar8[4];
        for (; plVar9 != plVar13; plVar9 = plVar9 + 1) {
          if (*plVar9 != 0) {
            TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>(plVar7,plVar9);
          }
        }
        plVar13 = *(longlong **)(piVar8 + 6);
        plVar9 = plVar13 + (longlong)piVar8[8] * 4;
        for (; plVar13 != plVar9; plVar13 = plVar13 + 4) {
          plVar11 = (longlong *)*plVar13;
          plVar2 = plVar11 + (int)plVar13[1];
          for (; plVar11 != plVar2; plVar11 = plVar11 + 1) {
            if (*plVar11 != 0) {
              plVar6 = *(longlong **)(lVar12 + 0x220);
              plVar3 = plVar6 + *(int *)(lVar12 + 0x228);
joined_r0x000142fe0c6d:
              if (plVar6 != plVar3) {
                if (*plVar6 != *plVar11) goto code_r0x000142fe0c75;
                plVar11 = (longlong *)plVar13[2];
                plVar2 = plVar11 + (int)plVar13[3];
                for (; plVar11 != plVar2; plVar11 = plVar11 + 1) {
                  if (*plVar11 != 0) {
                    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
                    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(plVar7,plVar11);
                  }
                }
                break;
              }
            }
          }
        }
        break;
      }
    }
  }
  plVar7 = *(longlong **)(param_2 + 0x208);
  uVar10 = (longlong)*(int *)(param_2 + 0x210) & 0x1fffffffffffffff;
  if (plVar7 + *(int *)(param_2 + 0x210) < plVar7) {
    uVar10 = uVar14;
  }
  if (uVar10 != 0) {
    do {
      plVar13 = (longlong *)*plVar7;
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x2a0))(plVar13,*param_1);
      }
      plVar7 = plVar7 + 1;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar10);
  }
  return;
code_r0x000142fe0c75:
  plVar6 = plVar6 + 1;
  goto joined_r0x000142fe0c6d;
}



// FUNCTION 142fe0d50 FUN_142fe0d50 body=258 status=ok
// SIG undefined FUN_142fe0d50(void)

void FUN_142fe0d50(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_142398820(param_2,*(byte *)(*param_1 + 0x5a8) >> 1 & 1);
  if ((*(byte *)(*param_1 + 0x5a8) & 2) != 0) {
    FUN_142397420(param_2,*(undefined4 *)param_1[1]);
    puVar1 = (undefined4 *)param_1[2];
    local_18 = *puVar1;
    uStack_14 = puVar1[1];
    uStack_10 = puVar1[2];
    uStack_c = puVar1[3];
    FUN_1423972b0(param_2,0,&local_18);
    FUN_142397350(param_2,0,1);
    puVar1 = (undefined4 *)param_1[2];
    local_18 = *puVar1;
    uStack_14 = puVar1[1];
    uStack_10 = puVar1[2];
    uStack_c = puVar1[3];
    FUN_1423972b0(param_2,1,&local_18);
    FUN_142397350(param_2,1,1);
    puVar1 = (undefined4 *)param_1[2];
    local_18 = *puVar1;
    uStack_14 = puVar1[1];
    uStack_10 = puVar1[2];
    uStack_c = puVar1[3];
    FUN_1423972b0(param_2,2,&local_18);
    FUN_142397350(param_2,2,1);
    puVar1 = (undefined4 *)param_1[2];
    local_18 = *puVar1;
    uStack_14 = puVar1[1];
    uStack_10 = puVar1[2];
    uStack_c = puVar1[3];
    FUN_1423972b0(param_2,3,&local_18);
    FUN_142397350(param_2,3,1);
  }
  return;
}



// FUNCTION 142fe0e60 FUN_142fe0e60 body=703 status=ok
// SIG undefined FUN_142fe0e60(void)

void FUN_142fe0e60(longlong *param_1,longlong param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *_Src;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *local_48;
  int local_40;
  
  plVar15 = (longlong *)param_1[1];
  lVar9 = *param_1;
  if (*(int *)((longlong)plVar15 + 0xc) < *(int *)(param_2 + 0x58) + 1) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar15);
  }
  if (*(longlong *)(param_2 + 0x48) != 0) {
    iVar7 = (int)plVar15[1];
    *(int *)(plVar15 + 1) = iVar7 + 1;
    if (*(int *)((longlong)plVar15 + 0xc) < iVar7 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar7);
    }
    *(undefined8 *)(*plVar15 + (longlong)iVar7 * 8) = *(undefined8 *)(param_2 + 0x48);
  }
  plVar11 = *(longlong **)(param_2 + 0x50);
  plVar14 = plVar11 + *(int *)(param_2 + 0x58);
  for (; plVar11 != plVar14; plVar11 = plVar11 + 1) {
    if (*plVar11 != 0) {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(plVar15,plVar11);
    }
  }
  piVar10 = *(int **)(param_2 + 0x60);
  piVar1 = piVar10 + (longlong)*(int *)(param_2 + 0x68) * 10;
  while( true ) {
    if (piVar10 == piVar1) goto LAB_142fe101a;
    if (*piVar10 == param_3) break;
    piVar10 = piVar10 + 10;
  }
  plVar11 = *(longlong **)(piVar10 + 2);
  plVar14 = plVar11 + piVar10[4];
  for (; plVar11 != plVar14; plVar11 = plVar11 + 1) {
    if (*plVar11 != 0) {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(plVar15,plVar11);
    }
  }
  plVar14 = *(longlong **)(piVar10 + 6);
  plVar11 = plVar14 + (longlong)piVar10[8] * 4;
  for (; plVar14 != plVar11; plVar14 = plVar14 + 4) {
    plVar13 = (longlong *)*plVar14;
    plVar2 = plVar13 + (int)plVar14[1];
    for (; plVar13 != plVar2; plVar13 = plVar13 + 1) {
      if (*plVar13 != 0) {
        plVar6 = *(longlong **)(lVar9 + 0x220);
        plVar3 = plVar6 + *(int *)(lVar9 + 0x228);
joined_r0x000142fe0fbf:
        if (plVar6 != plVar3) {
          if (*plVar6 != *plVar13) goto code_r0x000142fe0fc6;
          plVar13 = (longlong *)plVar14[2];
          plVar2 = plVar13 + (int)plVar14[3];
          for (; plVar13 != plVar2; plVar13 = plVar13 + 1) {
            if (*plVar13 != 0) {
              TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
              AddUniqueImpl<UGeometryCacheComponent_*_const_&>(plVar15,plVar13);
            }
          }
          break;
        }
      }
    }
  }
LAB_142fe101a:
  local_40 = *(int *)(param_2 + 0x238);
  lVar9 = (longlong)local_40;
  plVar15 = (longlong *)0x0;
  _Src = *(void **)(param_2 + 0x230);
  local_48 = (longlong *)0x0;
  if (local_40 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_48,local_40,0);
    plVar15 = local_48;
    _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar9 << 3);
  }
  lVar9 = (longlong)local_40;
  for (plVar14 = plVar15; plVar14 != plVar15 + lVar9; plVar14 = plVar14 + 1) {
    plVar11 = (longlong *)param_1[1];
    iVar8 = 0;
    iVar7 = (int)plVar11[1];
    if (0 < iVar7) {
      lVar12 = 0;
      do {
        lVar4 = *plVar11;
        if (*(longlong *)(lVar4 + lVar12) == *plVar14) {
          iVar5 = (iVar7 - iVar8) + -1;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar4 + (longlong)iVar8 * 8),
                       (void *)(lVar4 + (longlong)(iVar7 - iVar5) * 8),(longlong)iVar5 << 3);
            iVar7 = (int)plVar11[1];
          }
          *(int *)(plVar11 + 1) = iVar7 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar11);
          iVar7 = (int)plVar11[1];
          iVar8 = iVar8 + -1;
          lVar12 = lVar12 + -8;
        }
        iVar8 = iVar8 + 1;
        lVar12 = lVar12 + 8;
      } while (iVar8 < iVar7);
    }
  }
  if (plVar15 != (longlong *)0x0) {
    FMemory::Free(plVar15);
  }
  return;
code_r0x000142fe0fc6:
  plVar6 = plVar6 + 1;
  goto joined_r0x000142fe0fbf;
}



// FUNCTION 142fe1120 FUN_142fe1120 body=179 status=ok
// SIG undefined FUN_142fe1120(void)

bool FUN_142fe1120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined8 local_res20;
  undefined8 local_38;
  undefined2 *local_30;
  int local_28;
  undefined2 *local_20;
  int local_18;
  
  lVar2 = FWeakObjectPtr::Get(param_3);
  local_res20 = *(undefined8 *)(lVar2 + 0x18);
  FName::ToString(&local_res20,&local_20);
  puVar4 = &DAT_143f3eda8;
  if (local_18 != 0) {
    puVar4 = local_20;
  }
  lVar2 = FWeakObjectPtr::Get(param_2);
  local_38 = *(undefined8 *)(lVar2 + 0x18);
  FName::ToString(&local_38,&local_30);
  puVar3 = &DAT_143f3eda8;
  if (local_28 != 0) {
    puVar3 = local_30;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
  if (local_30 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_20 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return iVar1 < 0;
}



// FUNCTION 142fe11e0 FUN_142fe11e0 body=495 status=ok
// SIG undefined FUN_142fe11e0(void)

void FUN_142fe11e0(longlong *param_1,longlong param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int *piVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (*(char *)(param_2 + 0x228) == '\0') {
    lVar5 = *param_1;
    plVar6 = (longlong *)param_1[1];
    if (*(int *)((longlong)plVar6 + 0xc) < *(int *)(param_2 + 0x58) + 1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar6);
    }
    if (*(longlong *)(param_2 + 0x48) != 0) {
      iVar4 = (int)plVar6[1];
      *(int *)(plVar6 + 1) = iVar4 + 1;
      if (*(int *)((longlong)plVar6 + 0xc) < iVar4 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar4);
      }
      *(undefined8 *)(*plVar6 + (longlong)iVar4 * 8) = *(undefined8 *)(param_2 + 0x48);
    }
    plVar9 = *(longlong **)(param_2 + 0x50);
    plVar11 = plVar9 + *(int *)(param_2 + 0x58);
    for (; plVar9 != plVar11; plVar9 = plVar9 + 1) {
      if (*plVar9 != 0) {
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(plVar6,plVar9);
      }
    }
    piVar8 = *(int **)(param_2 + 0x60);
    piVar1 = piVar8 + (longlong)*(int *)(param_2 + 0x68) * 10;
    for (; piVar8 != piVar1; piVar8 = piVar8 + 10) {
      if (*piVar8 == param_3) {
        plVar9 = *(longlong **)(piVar8 + 2);
        plVar11 = plVar9 + piVar8[4];
        for (; plVar9 != plVar11; plVar9 = plVar9 + 1) {
          if (*plVar9 != 0) {
            TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>(plVar6,plVar9);
          }
        }
        plVar11 = *(longlong **)(piVar8 + 6);
        plVar9 = plVar11 + (longlong)piVar8[8] * 4;
        do {
          if (plVar11 == plVar9) {
            return;
          }
          plVar10 = (longlong *)*plVar11;
          plVar2 = plVar10 + (int)plVar11[1];
          for (; plVar10 != plVar2; plVar10 = plVar10 + 1) {
            if (*plVar10 != 0) {
              plVar7 = *(longlong **)(lVar5 + 0x220);
              plVar3 = plVar7 + *(int *)(lVar5 + 0x228);
joined_r0x000142fe134f:
              if (plVar7 != plVar3) {
                if (*plVar7 != *plVar10) goto code_r0x000142fe1356;
                plVar10 = (longlong *)plVar11[2];
                plVar2 = plVar10 + (int)plVar11[3];
                for (; plVar10 != plVar2; plVar10 = plVar10 + 1) {
                  if (*plVar10 != 0) {
                    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
                    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(plVar6,plVar10);
                  }
                }
                break;
              }
            }
          }
          plVar11 = plVar11 + 4;
        } while( true );
      }
    }
  }
  return;
code_r0x000142fe1356:
  plVar7 = plVar7 + 1;
  goto joined_r0x000142fe134f;
}



// FUNCTION 142fe13d0 FUN_142fe13d0 body=468 status=ok
// SIG undefined FUN_142fe13d0(void)

void FUN_142fe13d0(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte *pbVar16;
  
  if (param_2 != 0) {
    lVar11 = *(longlong *)(param_2 + 0x30);
    lVar10 = 0;
    if (lVar11 != 0) {
      lVar5 = FUN_14302b270();
      lVar14 = lVar11;
      do {
        lVar10 = lVar11;
        if (lVar14 == lVar5) break;
        lVar14 = *(longlong *)(lVar14 + 0x30);
        lVar10 = 0;
      } while (lVar14 != 0);
    }
    if (lVar10 == *(longlong *)(param_1[1] + 0x10)) {
      pbVar16 = *(byte **)(param_2 + 0x40);
      pbVar1 = pbVar16 + (longlong)*(int *)(param_2 + 0x48) * 0x18;
      for (; pbVar16 != pbVar1; pbVar16 = pbVar16 + 0x18) {
        uVar12 = 0;
        bVar2 = *pbVar16;
        lVar11 = *param_1;
        if (*(int *)(lVar11 + 0x28) <= (int)(uint)bVar2) {
          iVar3 = *(int *)(lVar11 + 0x28);
          iVar7 = bVar2 + 1;
          if (iVar3 < iVar7) {
            *(int *)(lVar11 + 0x28) = iVar7;
            iVar9 = iVar7 - iVar3;
            if (*(int *)(lVar11 + 0x2c) < iVar7) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(lVar11 + 0x20,iVar3);
            }
            puVar8 = (undefined1 *)(*(longlong *)(lVar11 + 0x20) + (longlong)iVar3 * 0x18);
            if (iVar9 != 0) {
              puVar6 = puVar8 + 0x14;
              do {
                *puVar8 = 0;
                puVar8 = puVar8 + 0x18;
                *(undefined8 *)(puVar6 + -0xc) = 0;
                *(undefined8 *)(puVar6 + -4) = 0;
                puVar6 = puVar6 + 0x18;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
          }
          else if (iVar7 < iVar3) {
            TArray<FVertexAndAttributes,FDefaultAllocator>::RemoveAtImpl
                      (lVar11 + 0x20,iVar7,iVar3 - iVar7,1);
          }
        }
        puVar13 = *(undefined8 **)(pbVar16 + 8);
        uVar15 = (longlong)*(int *)(pbVar16 + 0x10) & 0x1fffffffffffffff;
        if (puVar13 + *(int *)(pbVar16 + 0x10) < puVar13) {
          uVar15 = 0;
        }
        if (uVar15 != 0) {
          do {
            uVar4 = *puVar13;
            lVar11 = *(longlong *)(*param_1 + 0x20) + (ulonglong)(uint)bVar2 * 0x18;
            iVar3 = *(int *)(lVar11 + 0x10);
            *(int *)(lVar11 + 0x10) = iVar3 + 1;
            if (*(int *)(lVar11 + 0x14) < iVar3 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar11 + 8,iVar3);
            }
            puVar13 = puVar13 + 1;
            uVar12 = uVar12 + 1;
            *(undefined8 *)(*(longlong *)(lVar11 + 8) + (longlong)iVar3 * 8) = uVar4;
          } while (uVar12 != uVar15);
        }
      }
    }
  }
  return;
}



// FUNCTION 142fe15b0 FUN_142fe15b0 body=645 status=ok
// SIG undefined FUN_142fe15b0(void)

bool FUN_142fe15b0(undefined8 *param_1,undefined8 *param_2,wchar_t **param_3)

{
  uint uVar1;
  void *_Src;
  char cVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  uint uVar10;
  undefined2 *puVar11;
  uint uVar12;
  int iVar13;
  wchar_t *local_48;
  int local_40;
  int local_3c;
  wchar_t *local_38;
  int local_30;
  
  puVar11 = &DAT_143f3eda8;
  pwVar9 = (wchar_t *)0x0;
  if (*param_3 != L"") {
    *(undefined4 *)(param_3 + 1) = 0;
    pwVar5 = pwVar9;
    if (*(int *)((longlong)param_3 + 0xc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3);
      pwVar5 = (wchar_t *)(ulonglong)*(uint *)(param_3 + 1);
    }
    *(int *)(param_3 + 1) = (int)pwVar5;
    if (*(int *)((longlong)param_3 + 0xc) < (int)pwVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3);
    }
  }
  local_40 = *(int *)(param_2 + 1);
  lVar7 = (longlong)local_40;
  _Src = (void *)*param_2;
  local_48 = (wchar_t *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_48,(2 - (uint)(local_40 != 0)) + local_40,0);
  pwVar5 = local_48;
  _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar7 * 2);
  iVar4 = local_40;
  lVar7 = (longlong)local_40;
  local_40 = (2 - (uint)(local_40 != 0)) + local_40;
  local_38 = pwVar5;
  if (local_3c < local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar4);
    local_38 = local_48;
  }
  local_38[lVar7 - (ulonglong)(iVar4 != 0)] = L'=';
  (local_38 + (lVar7 - (ulonglong)(iVar4 != 0)))[1] = L'\0';
  puVar6 = *(undefined8 **)*param_1;
  puVar8 = puVar6 + (longlong)*(int *)((undefined8 *)*param_1 + 1) * 2;
  local_30 = local_40;
  do {
    if (puVar6 == puVar8) {
LAB_142fe17f3:
      iVar4 = *(int *)(param_3 + 1) + -1;
      if (*(int *)(param_3 + 1) == 0) {
        iVar4 = 0;
      }
      if (local_38 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      return 0 < iVar4;
    }
    cVar2 = FString::StartsWith(puVar6,&local_38,1);
    if (cVar2 != '\0') {
      uVar3 = 0;
      if (local_30 != 0) {
        uVar3 = local_30 - 1;
      }
      iVar4 = *(int *)(puVar6 + 1);
      uVar1 = uVar3 + 0x7fffffff;
      uVar10 = iVar4 - 1;
      if (iVar4 == 0) {
        uVar10 = 0;
      }
      uVar12 = iVar4 - 1;
      if (uVar3 < uVar10) {
        uVar10 = uVar3;
      }
      if (iVar4 == 0) {
        uVar12 = 0;
      }
      uVar3 = uVar10;
      if ((uVar10 <= uVar1) && (uVar3 = uVar12, uVar1 < uVar12)) {
        uVar3 = uVar1;
      }
      if (iVar4 != 0) {
        puVar11 = (undefined2 *)*puVar6;
      }
      iVar13 = uVar3 - uVar10;
      local_48 = (wchar_t *)0x0;
      local_3c = 0;
      iVar4 = iVar13 + 1;
      if (iVar13 == 0) {
        iVar4 = 0;
      }
      local_40 = iVar4;
      if ((0 < iVar4) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0), iVar4 = local_40,
         pwVar9 = local_48, 0 < local_40)) {
        wcsncpy(local_48,puVar11 + (int)uVar10,(longlong)iVar13);
        pwVar9[iVar13] = L'\0';
      }
      if (param_3 == &local_48) {
        if (pwVar9 != (wchar_t *)0x0) {
          FMemory::Free(pwVar9);
        }
      }
      else {
        if (*param_3 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        *param_3 = pwVar9;
        *(int *)(param_3 + 1) = iVar4;
        *(int *)((longlong)param_3 + 0xc) = local_3c;
      }
      goto LAB_142fe17f3;
    }
    puVar6 = puVar6 + 2;
  } while( true );
}



// FUNCTION 142fe1840 FUN_142fe1840 body=317 status=ok
// SIG undefined FUN_142fe1840(void)

bool FUN_142fe1840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  bool bVar7;
  undefined8 local_res20;
  undefined8 local_38;
  undefined2 *local_30;
  int local_28;
  undefined2 *local_20;
  int local_18;
  
  lVar2 = FWeakObjectPtr::Get(param_2);
  plVar3 = (longlong *)FUN_14302b1c0();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  if (lVar2 == lVar4) {
    bVar7 = true;
  }
  else {
    lVar2 = FWeakObjectPtr::Get(param_3);
    plVar3 = (longlong *)FUN_14302b1c0();
    lVar4 = plVar3[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar4 = plVar3[0x1f];
    }
    if (lVar2 == lVar4) {
      bVar7 = false;
    }
    else {
      lVar4 = FWeakObjectPtr::Get(param_3);
      local_res20 = *(undefined8 *)(lVar4 + 0x18);
      FName::ToString(&local_res20,&local_20);
      puVar5 = &DAT_143f3eda8;
      if (local_18 != 0) {
        puVar5 = local_20;
      }
      lVar4 = FWeakObjectPtr::Get(param_2);
      local_38 = *(undefined8 *)(lVar4 + 0x18);
      FName::ToString(&local_38,&local_30);
      puVar6 = &DAT_143f3eda8;
      if (local_28 != 0) {
        puVar6 = local_30;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar5);
      bVar7 = iVar1 < 0;
      if (local_30 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_20 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return bVar7;
}



// FUNCTION 142fe1980 FUN_142fe1980 body=267 status=ok
// SIG undefined FUN_142fe1980(void)

bool FUN_142fe1980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  lVar5 = FWeakObjectPtr::Get(param_3);
  FText::FText(local_20,lVar5 + 0xa8);
  puVar6 = (undefined8 *)FText::ToString(local_20);
  puVar7 = &DAT_143f3eda8;
  if (*(int *)(puVar6 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*puVar6;
  }
  lVar5 = FWeakObjectPtr::Get(param_2);
  FText::FText(local_38,lVar5 + 0xa8);
  puVar6 = (undefined8 *)FText::ToString(local_38);
  if (*(int *)(puVar6 + 1) != 0) {
    puVar7 = (undefined2 *)*puVar6;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return iVar4 < 0;
}



// FUNCTION 142fe1a90 FUN_142fe1a90 body=463 status=ok
// SIG undefined FUN_142fe1a90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fe1a90(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50 [8];
  int *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  cVar2 = FWeakObjectPtr::IsValid();
  if (cVar2 != '\0') {
    lVar5 = *(longlong *)(param_1 + 8);
    piVar6 = (int *)0x0;
    local_24 = 0;
    local_30 = (int *)0x0;
    local_28 = 0;
    iVar3 = *(int *)(lVar5 + 0x2b8);
    if (iVar3 != 0) {
      if (0 < iVar3) {
        FUN_141f62110(local_50,iVar3);
      }
      piVar4 = local_50;
      if (local_30 != (int *)0x0) {
        piVar4 = piVar6;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(((ulonglong)piVar4 | (ulonglong)local_30) + (longlong)local_28 * 4),
                 *(void **)(lVar5 + 0x2b0),(longlong)iVar3 << 2);
      local_28 = local_28 + iVar3;
    }
    lVar5 = *(longlong *)(param_1 + 8);
    *(undefined4 *)(lVar5 + 0x2b8) = 0;
    if (0x7fffffff < *(uint *)(lVar5 + 700)) {
      TArray<float,FDefaultAllocator>::ResizeTo(lVar5 + 0x2b0,0);
    }
    piVar4 = local_50;
    if (local_30 != (int *)0x0) {
      piVar4 = local_30;
    }
    piVar7 = (int *)((longlong)local_28 & 0x3fffffffffffffff);
    if (piVar4 + local_28 < piVar4) {
      piVar7 = piVar6;
    }
    if (piVar7 != (int *)0x0) {
      do {
        iVar3 = *piVar4;
        if ((-1 < iVar3) && (plVar1 = *(longlong **)(param_1 + 8), iVar3 < (int)plVar1[0x46])) {
          lVar5 = (longlong)iVar3 * 0x40 + plVar1[0x45];
          (**(code **)(*plVar1 + 0x4d0))(plVar1,lVar5);
          local_68[0] = *(undefined4 *)(lVar5 + 0xc);
          local_60 = *(undefined8 *)(lVar5 + 0x10);
          local_58 = *(undefined4 *)(lVar5 + 0x18);
          local_54 = 1;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (*(longlong *)(param_1 + 8) + 0x318,local_68);
        }
        piVar4 = piVar4 + 1;
        piVar6 = (int *)((longlong)piVar6 + 1);
      } while (piVar6 != piVar7);
    }
    iVar3 = FUN_14233f450(*(undefined8 *)(param_1 + 8));
    if ((iVar3 == 3) || ((*(byte *)(*(longlong *)(param_1 + 8) + 0xb8) & 8) == 0)) {
      TBaseMulticastDelegate<void>::Broadcast(*(longlong *)(param_1 + 8) + 0x2c0);
    }
    if (local_30 != (int *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142fe1c60 FUN_142fe1c60 body=287 status=ok
// SIG undefined FUN_142fe1c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fe1c60(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong *local_80;
  undefined1 local_78;
  undefined8 local_68;
  undefined1 local_60 [16];
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar2 = *param_2;
  local_68 = *param_1;
  uVar1 = *(undefined4 *)(param_1 + 1);
  if (lVar2 != 0) {
    uVar3 = param_1[2];
    uVar7 = FUN_142caac20(param_2 + 8,local_60,uVar3);
    for (iVar5 = FUN_142cc45a0(uVar7,0); 0 < iVar5; iVar5 = iVar5 + -1) {
      lVar4 = param_2[0x10];
      uVar7 = FUN_142cc0880();
      uVar6 = FUN_142cc1350(uVar7);
      local_78 = 0;
      local_80 = param_2 + 0xf;
      if ((int)lVar4 == 0) {
        local_80 = (longlong *)0x0;
      }
      local_88 = 0x3f800000;
      local_90 = 0;
      local_98 = uVar3;
      FUN_1430141a0(local_68,lVar2,uVar1,uVar6);
    }
  }
  return;
}



// FUNCTION 142fe1d80 FUN_142fe1d80 body=200 status=ok
// SIG undefined FUN_142fe1d80(void)

longlong FUN_142fe1d80(longlong *param_1,longlong param_2,ulonglong *param_3)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  plVar4 = (longlong *)*param_3;
  uVar5 = (longlong)(int)param_3[1] & 0x1fffffffffffffff;
  if (plVar4 + (int)param_3[1] < plVar4) {
    uVar5 = uVar3;
  }
  if (uVar5 != 0) {
    do {
      lVar1 = *plVar4;
      if ((((lVar1 != 0) && (0.0 < *(float *)(lVar1 + 0x48))) &&
          (*(int *)(lVar1 + 0x58) <= *(int *)param_1[1])) &&
         (((*(int *)param_1[1] <= *(int *)(lVar1 + 0x5c) &&
           (cVar2 = FUN_142c48f90(*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(*param_1 + 0x118),0)
           , cVar2 != '\0')) &&
          ((param_2 == 0 || (*(float *)(param_2 + 0x48) < *(float *)(lVar1 + 0x48))))))) {
        param_2 = lVar1;
      }
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar5);
  }
  return param_2;
}



// FUNCTION 142fe1e50 FUN_142fe1e50 body=469 status=ok
// SIG undefined FUN_142fe1e50(void)

void FUN_142fe1e50(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  undefined4 local_res8;
  undefined4 local_resc;
  
  plVar6 = (longlong *)
           ((ulonglong)*(byte *)(*param_1 + 0x109) * 0x10 + *(longlong *)(*param_1 + 0x118));
  iVar8 = (int)plVar6[1];
  if (iVar8 == 0) goto LAB_142fe2017;
  local_res8 = *(undefined4 *)(*plVar6 + -8 + (longlong)iVar8 * 8);
  local_resc = *(undefined4 *)(*plVar6 + (longlong)iVar8 * 8 + -4);
  *(int *)(plVar6 + 1) = iVar8 + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
  cVar4 = FWeakObjectPtr::IsValid(&local_res8);
  if (cVar4 == '\0') goto LAB_142fe2017;
  lVar2 = *param_1;
  lVar5 = *(longlong *)(lVar2 + 0x138);
  lVar3 = *(longlong *)(lVar5 + 0x38);
  if (lVar3 == 0) {
    if (*(longlong *)(lVar5 + 0x30) == 0) goto LAB_142fe1ef8;
    iVar8 = FUN_140b824e0();
  }
  else {
    lVar5 = *(longlong *)(lVar3 + 0x38);
    if (lVar5 == 0) {
LAB_142fe1ef8:
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(lVar5 + 0x48) + -1;
    }
  }
  bVar1 = *(byte *)(lVar2 + 0x109);
  lVar5 = FWeakObjectPtr::Get(&local_res8);
  lVar2 = *param_1;
  if ((int)(uint)bVar1 < iVar8) {
    plVar6 = *(longlong **)(lVar2 + 0x148);
    plVar7 = plVar6;
    if (plVar6 != plVar6 + *(int *)(lVar2 + 0x150)) {
      while (*plVar7 != lVar5) {
        plVar7 = plVar7 + 1;
        if (plVar7 == plVar6 + *(int *)(lVar2 + 0x150)) {
          FUN_14301c3e0(*param_1);
          return;
        }
      }
      iVar8 = (int)((longlong)plVar7 - (longlong)plVar6 >> 3);
      if (iVar8 != -1) {
        _guard_xfg_dispatch_icall_nop
                  (plVar6 + iVar8,plVar6 + iVar8 + 1,
                   (longlong)((*(int *)(lVar2 + 0x150) - iVar8) + -1) << 3);
        *(int *)(lVar2 + 0x150) = *(int *)(lVar2 + 0x150) + -1;
        FUN_14301c3e0(*param_1);
        return;
      }
    }
  }
  else {
    plVar6 = *(longlong **)(lVar2 + 0x158);
    plVar7 = plVar6;
    if (plVar6 != plVar6 + *(int *)(lVar2 + 0x160)) {
      while (*plVar7 != lVar5) {
        plVar7 = plVar7 + 1;
        if (plVar7 == plVar6 + *(int *)(lVar2 + 0x160)) {
          FUN_14301c3e0(*param_1);
          return;
        }
      }
      iVar8 = (int)((longlong)plVar7 - (longlong)plVar6 >> 3);
      if (iVar8 != -1) {
        _guard_xfg_dispatch_icall_nop
                  (plVar6 + iVar8,plVar6 + iVar8 + 1,
                   (longlong)((*(int *)(lVar2 + 0x160) - iVar8) + -1) << 3);
        *(int *)(lVar2 + 0x160) = *(int *)(lVar2 + 0x160) + -1;
      }
    }
  }
LAB_142fe2017:
  FUN_14301c3e0(*param_1);
  return;
}



// FUNCTION 142fe2030 FUN_142fe2030 body=922 status=ok
// SIG undefined FUN_142fe2030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_142fe2030(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  float fVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  byte bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float fStack_40;
  float fStack_3c;
  undefined8 local_38;
  float local_30;
  
  plVar6 = (longlong *)FUN_142227070(*param_1,param_2,0);
  if (plVar6 != (longlong *)0x0) {
    lVar7 = FUN_1429bed90();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      bVar12 = 1;
      lVar8 = FUN_142a07000();
      lVar7 = plVar6[2];
      if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      plVar10 = (longlong *)0x0;
      if (bVar4) {
        FUN_1423baf90(plVar6,CONCAT71((int7)((ulonglong)lVar7 >> 8),1));
        *(byte *)((longlong)plVar6 + 0xb1c) = *(byte *)((longlong)plVar6 + 0xb1c) | 0x10;
        bVar12 = *(byte *)((longlong)plVar6 + 0xb1a) >> 3 & 1;
        FUN_1427e67f0(plVar6,0);
        plVar10 = plVar6;
      }
      (**(code **)(*plVar6 + 0x418))(plVar6,&DAT_14653218c);
      if (0.0 < *(float *)(*param_1 + 0x4b0)) {
        *(float *)((longlong)plVar6 + 0x2dc) = *(float *)(*param_1 + 0x4b0);
        FUN_142397070(plVar6,*(undefined4 *)(*param_1 + 0x4b0));
      }
      *(undefined1 *)((longlong)plVar6 + 0xca) = 0;
      FUN_14234b150(plVar6);
      lVar7 = *param_1;
      if (*(char *)(lVar7 + 0x558) == '\0') {
        lVar7 = *(longlong *)(lVar7 + 0x168);
        if (lVar7 == 0) {
          local_50 = DAT_1468b5d98;
          local_58 = _DAT_1468b5d90;
          fStack_40 = DAT_1468b5d98;
          puVar9 = &local_48;
          local_48 = _DAT_1468b5d90;
        }
        else {
          puVar9 = &local_58;
          local_50 = *(float *)(lVar7 + 0x228);
          local_58 = *(undefined8 *)(lVar7 + 0x220);
        }
        local_38 = *puVar9;
        local_30 = *(float *)(puVar9 + 1);
        FUN_1423990b0(plVar6,&local_38,0,0,1);
        lVar7 = *(longlong *)(*param_1 + 0x168);
        if (lVar7 == 0) {
          local_30 = DAT_1468b5da8;
          local_38 = DAT_1468b5da0;
          fStack_40 = DAT_1468b5da8;
          puVar9 = &local_48;
          local_48 = DAT_1468b5da0;
        }
        else {
          fVar3 = *(float *)(lVar7 + 0x210);
          fStack_40 = *(float *)(lVar7 + 0x218);
          fStack_3c = *(float *)(lVar7 + 0x21c);
          local_48 = *(undefined8 *)(lVar7 + 0x210);
          auVar2._4_4_ = -(uint)(*(float *)(lVar7 + 0x214) != *(float *)(lVar7 + 0x254));
          auVar2._0_4_ = -(uint)(fVar3 != *(float *)(lVar7 + 0x250));
          auVar2._8_4_ = -(uint)(fStack_40 != *(float *)(lVar7 + 600));
          auVar2._12_4_ = -(uint)(fStack_3c != *(float *)(lVar7 + 0x25c));
          iVar5 = movmskps((int)*param_1,auVar2);
          if (iVar5 != 0) {
            *(float *)(lVar7 + 0x250) = fVar3;
            *(float *)(lVar7 + 0x254) = *(float *)(lVar7 + 0x214);
            *(float *)(lVar7 + 600) = fStack_40;
            *(float *)(lVar7 + 0x25c) = fStack_3c;
            puVar9 = (undefined8 *)FQuat::Rotator(&local_48,&local_38);
            *(undefined8 *)(lVar7 + 0x260) = *puVar9;
            *(undefined4 *)(lVar7 + 0x268) = *(undefined4 *)(puVar9 + 1);
          }
          local_30 = *(float *)(lVar7 + 0x268);
          puVar9 = &local_38;
          local_38 = *(undefined8 *)(lVar7 + 0x260);
        }
        uVar13 = (undefined4)*puVar9;
        uVar14 = (undefined4)((ulonglong)*puVar9 >> 0x20);
        local_50 = *(float *)(puVar9 + 1);
      }
      else {
        local_58 = *(undefined8 *)(lVar7 + 0x508);
        local_50 = *(float *)(lVar7 + 0x510);
        FUN_1423990b0(plVar6,&local_58,0,0,1);
        uVar1 = *(undefined8 *)(*param_1 + 0x514);
        uVar13 = (undefined4)uVar1;
        uVar14 = (undefined4)((ulonglong)uVar1 >> 0x20);
        local_50 = *(float *)(*param_1 + 0x51c);
      }
      local_58 = CONCAT44(uVar14,uVar13);
      FUN_142399b90(plVar6,&local_58,0,0,1);
      if (plVar10 != (longlong *)0x0) {
        FUN_1427e67f0(plVar10,bVar12);
      }
      lVar7 = FUN_142a0cc80();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        if ((*(longlong *)(*param_1 + 0x560) == 0) ||
           (lVar7 = *(longlong *)(*(longlong *)(*param_1 + 0x560) + 0x208), lVar7 == 0)) {
          FUN_1423b33f0(plVar6,param_2);
        }
        else {
          puVar11 = *(undefined8 **)(lVar7 + 0x178);
          puVar9 = puVar11 + *(int *)(lVar7 + 0x180);
          for (; puVar11 != puVar9; puVar11 = puVar11 + 1) {
            FUN_1423b2f40(plVar6,*puVar11,0);
          }
        }
      }
      return plVar6;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 142fe23d0 FUN_142fe23d0 body=220 status=ok
// SIG undefined FUN_142fe23d0(void)

longlong * FUN_142fe23d0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  wint_t _C;
  int iVar1;
  wint_t *pwVar2;
  ulonglong uVar3;
  wint_t *pwVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar3 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  pwVar4 = (wint_t *)*param_3;
  pwVar2 = pwVar4 + *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    pwVar2 = pwVar4 + *(int *)(param_3 + 1);
  }
  uVar6 = (ulonglong)((longlong)pwVar2 + (1 - (longlong)pwVar4)) >> 1;
  if (pwVar2 < pwVar4) {
    uVar6 = uVar3;
  }
  if (uVar6 != 0) {
    do {
      _C = *pwVar4;
      iVar1 = iswalnum(_C);
      if ((iVar1 != 0) && (_C != 0)) {
        iVar1 = (int)param_2[1];
        iVar5 = iVar1 + -1;
        if (iVar1 < 1) {
          iVar5 = 0;
        }
        iVar1 = (iVar1 < 1) + 1 + iVar1;
        *(int *)(param_2 + 1) = iVar1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
        }
        *(wint_t *)(*param_2 + (longlong)iVar5 * 2) = _C;
        *(undefined2 *)(*param_2 + 2 + (longlong)iVar5 * 2) = 0;
      }
      pwVar4 = pwVar4 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar6);
  }
  return param_2;
}



// FUNCTION 142fe24b0 FUN_142fe24b0 body=674 status=ok
// SIG undefined FUN_142fe24b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fe24b0(undefined8 *param_1,longlong *param_2,longlong param_3,char param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_142397000(param_2,0,0,*(undefined1 *)*param_1);
  local_a0 = *(undefined4 *)(param_3 + 0x20c);
  local_a8 = *(undefined8 *)(param_3 + 0x204);
  (**(code **)(*param_2 + 0x3f8))(param_2,&local_a8);
  if (*(longlong *)param_1[1] == 0) {
    puVar7 = &DAT_1468b5b70;
    if (*(longlong *)(*(longlong *)param_1[2] + 0x168) == 0) {
      puVar3 = (undefined4 *)&DAT_1468b5b70;
    }
    else {
      puVar3 = (undefined4 *)(*(longlong *)(*(longlong *)param_1[2] + 0x168) + 0x210);
    }
    local_78 = *puVar3;
    uStack_74 = puVar3[1];
    uStack_70 = puVar3[2];
    uStack_6c = puVar3[3];
    FQuat::Rotator(&local_78,&local_a8);
    local_90 = local_a0;
    local_98 = local_a8;
    if (*(longlong *)(*(longlong *)param_1[2] + 0x168) != 0) {
      puVar7 = (undefined *)(*(longlong *)(*(longlong *)param_1[2] + 0x168) + 0x210);
    }
    local_88 = *(undefined4 *)(puVar7 + 0x10);
    uStack_84 = *(undefined4 *)(puVar7 + 0x14);
    local_80 = *(undefined4 *)(puVar7 + 0x18);
    local_b0 = 0;
    local_b8 = 0;
    uStack_70 = local_80;
    FUN_1423982b0(param_2,&local_88,&local_98,0);
    FUN_14223f010(*(undefined8 *)param_1[2],param_2);
    *(longlong **)param_1[1] = param_2;
  }
  else {
    uVar4 = FUN_14238d0c0(param_3,local_68);
    local_b8 = local_b8 & 0xffffffffffffff00;
    FUN_142398770(param_2,uVar4,0,0);
    FUN_142399e30(param_2,*(undefined8 *)param_1[1],*(undefined8 *)(param_3 + 0x198));
  }
  FUN_1423974f0(param_2,*(byte *)(param_3 + 0x2ef) & 1);
  lVar5 = param_1[3];
  if (*(char *)(lVar5 + 0x13) != '\0') {
    *(byte *)(param_2 + 0x5e) = *(byte *)(param_2 + 0x5e) & 0xf7;
    lVar5 = param_1[3];
  }
  if (0.0 < *(float *)(lVar5 + 0x14)) {
    *(float *)((longlong)param_2 + 0x2dc) = *(float *)(lVar5 + 0x14);
    FUN_142397070(param_2,*(undefined4 *)(param_1[3] + 0x14));
  }
  FUN_14234b150(param_2);
  if (((param_4 != '\0') && (*(longlong *)(param_1[4] + 0x208) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1[4] + 0x208) + 0x180))) {
    lVar5 = FUN_142a0cc80();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      puVar6 = *(undefined8 **)(*(longlong *)(param_1[4] + 0x208) + 0x178);
      puVar1 = puVar6 + *(int *)(*(longlong *)(param_1[4] + 0x208) + 0x180);
      for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
        FUN_1423b2f40(param_2,*puVar6,0);
      }
    }
  }
  return;
}



// FUNCTION 142fe2760 FUN_142fe2760 body=532 status=ok
// SIG undefined FUN_142fe2760(void)

longlong * FUN_142fe2760(undefined8 *param_1,longlong *param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar2 = (longlong *)param_2[2];
  plVar4 = (longlong *)0x0;
  lVar3 = plVar2[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar3 = plVar2[0x1f];
  }
  plVar2 = (longlong *)FUN_142227070(*(undefined8 *)*param_1,lVar3,0);
  lVar3 = FUN_142a07000();
  if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar3 = FUN_142a07000();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar5 = param_2;
    if (!bVar1) {
      plVar5 = plVar4;
    }
    lVar3 = FUN_142a07000();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar4 = plVar2;
    }
    (**(code **)(*plVar4 + 0x930))
              (plVar4,plVar5[0xe3],CONCAT71((int7)((ulonglong)(lVar3 + 0x88) >> 8),1));
    FUN_1425d9a70(plVar4 + 0x11f,plVar5 + 0x11f);
  }
  else {
    lVar3 = FUN_142a232e0();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = FUN_142a232e0();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      plVar5 = param_2;
      if (!bVar1) {
        plVar5 = plVar4;
      }
      lVar3 = FUN_142a232e0();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        plVar4 = plVar2;
      }
      (**(code **)(*plVar4 + 0x928))(plVar4,plVar5[0xe5]);
    }
  }
  TArray<FName,FDefaultAllocator>::operator=(plVar2 + 0xde,param_2 + 0xde);
  return plVar2;
}



// FUNCTION 142fe2980 FUN_142fe2980 body=187 status=ok
// SIG undefined FUN_142fe2980(void)

longlong * FUN_142fe2980(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    iVar8 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + iVar1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo()
      ;
      iVar8 = (int)param_1[1];
    }
    puVar6 = (undefined8 *)((longlong)iVar8 * 0x70 + *param_1);
    puVar7 = (undefined8 *)*param_2;
    iVar8 = iVar1;
    do {
      *puVar6 = *puVar7;
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(puVar6 + 1,puVar7 + 1);
      puVar6[6] = puVar7[6];
      uVar5 = puVar7[8];
      puVar6[7] = puVar7[7];
      puVar6[8] = uVar5;
      uVar5 = puVar7[10];
      puVar6[9] = puVar7[9];
      puVar6[10] = uVar5;
      uVar2 = *(undefined4 *)((longlong)puVar7 + 0x5c);
      uVar3 = *(undefined4 *)(puVar7 + 0xc);
      uVar4 = *(undefined4 *)((longlong)puVar7 + 100);
      *(undefined4 *)(puVar6 + 0xb) = *(undefined4 *)(puVar7 + 0xb);
      *(undefined4 *)((longlong)puVar6 + 0x5c) = uVar2;
      *(undefined4 *)(puVar6 + 0xc) = uVar3;
      *(undefined4 *)((longlong)puVar6 + 100) = uVar4;
      puVar6[0xd] = puVar7[0xd];
      iVar8 = iVar8 + -1;
      puVar6 = puVar6 + 0xe;
      puVar7 = puVar7 + 0xe;
    } while (iVar8 != 0);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  return param_1;
}



// FUNCTION 142fe2af0 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
UMovieSceneTakeSection::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_142fdfa80();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x618);
  }
  return param_1;
}



// FUNCTION 142fe2b40 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SListView<UObject_*>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x628);
  }
  return param_1;
}



// FUNCTION 142fe2b70 FUN_142fe2b70 body=67 status=ok
// SIG undefined FUN_142fe2b70(void)

longlong FUN_142fe2b70(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x628);
  FUN_142fdfc70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x660);
  }
  return param_1;
}



// FUNCTION 142fe2bc0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TGPUSkinMorphVertexFactory<1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_142fdfc70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5e8);
  }
  return param_1;
}



// FUNCTION 142fe2c00 FUN_142fe2c00 body=149 status=ok
// SIG undefined FUN_142fe2c00(void)

longlong FUN_142fe2c00(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x480);
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
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_143fce298;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x488);
  }
  return param_1;
}



// FUNCTION 142fe2ca0 FUN_142fe2ca0 body=117 status=ok
// SIG undefined FUN_142fe2ca0(void)

undefined8 * FUN_142fe2ca0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145a37398;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  FUN_142fdfb40(param_1 + 3);
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 1) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,param_1);
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142fe2d20 FUN_142fe2d20 body=126 status=ok
// SIG undefined FUN_142fe2d20(void)

longlong FUN_142fe2d20(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_142ff1c00(param_1 + 0x18,0);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  FTickerObjectBase::~FTickerObjectBase(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142fe2da0 FUN_142fe2da0 body=85 status=ok
// SIG undefined FUN_142fe2da0(void)

longlong FUN_142fe2da0(longlong param_1,ulonglong param_2)

{
  FUN_142fdfbb0(param_1 + 0x420);
  if (*(longlong *)(param_1 + 0x410) != 0) {
    FMemory::Free();
  }
  FUN_1404bf750(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x530);
  }
  return param_1;
}



// FUNCTION 142fe2e00 FUN_142fe2e00 body=78 status=ok
// SIG undefined FUN_142fe2e00(void)

undefined8 FUN_142fe2e00(undefined8 param_1,ulonglong param_2)

{
  FUN_140458b70();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x300);
  }
  return param_1;
}



// FUNCTION 142fe2e50 FUN_142fe2e50 body=80 status=ok
// SIG undefined FUN_142fe2e50(void)

longlong FUN_142fe2e50(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x2b8) = &PTR_FUN_1445e3d48;
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x300);
  }
  return param_1;
}



// FUNCTION 142fe2ea0 FUN_142fe2ea0 body=52 status=ok
// SIG undefined FUN_142fe2ea0(void)

undefined8 FUN_142fe2ea0(undefined8 param_1,ulonglong param_2)

{
  FUN_142fdff20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x288);
  }
  return param_1;
}



// FUNCTION 142fe2ee0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAutoDestroySubsystem::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142fe2f30 FUN_142fe2f30 body=52 status=ok
// SIG undefined FUN_142fe2f30(void)

undefined8 FUN_142fe2f30(undefined8 param_1,ulonglong param_2)

{
  FUN_140aee3c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x348);
  }
  return param_1;
}



// FUNCTION 142fe2f70 FUN_142fe2f70 body=132 status=ok
// SIG undefined FUN_142fe2f70(void)

longlong FUN_142fe2f70(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x48);
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
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142fe3000 FUN_142fe3000 body=66 status=ok
// SIG undefined FUN_142fe3000(void)

longlong FUN_142fe3000(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x130) = &PTR_FUN_143fe0658;
  FUN_140a51930();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 142fe3050 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FFileIoStore::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140aee6d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,800);
  }
  return param_1;
}



// FUNCTION 142fe3090 `scalar_deleting_destructor' body=90 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong AMediumCameraTriggerActor::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  FUN_14128b250(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x278);
  }
  return param_1;
}



// FUNCTION 142fe30f0 FUN_142fe30f0 body=311 status=ok
// SIG undefined FUN_142fe30f0(void)

longlong FUN_142fe30f0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2c0);
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x2a4);
  *(undefined4 *)(param_1 + 0x290) = 0;
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x248);
  FUN_140a513a0(param_1 + 0x178);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x370);
  }
  return param_1;
}



// FUNCTION 142fe3230 `scalar_deleting_destructor' body=132 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMissionComplexity::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142fe32c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FShaderCompilerEnvironment::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14128b250();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x250);
  }
  return param_1;
}



// FUNCTION 142fe3300 FUN_142fe3300 body=91 status=ok
// SIG undefined FUN_142fe3300(void)

longlong FUN_142fe3300(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x58);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x48);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 142fe3360 FUN_142fe3360 body=163 status=ok
// SIG undefined FUN_142fe3360(void)

longlong FUN_142fe3360(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x78);
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
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x148);
  }
  return param_1;
}



// FUNCTION 142fe3410 FUN_142fe3410 body=107 status=ok
// SIG undefined FUN_142fe3410(void)

longlong FUN_142fe3410(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  FUN_141439310(param_1 + 0x48);
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_143fe0658;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 142fe3480 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UOnlinePIESettings::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x40);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 142fe34c0 FUN_142fe34c0 body=235 status=ok
// SIG undefined FUN_142fe34c0(void)

longlong FUN_142fe34c0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 200);
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
  plVar4 = *(longlong **)(param_1 + 0xb0);
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
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_143fe0658;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 142fe35b0 FUN_142fe35b0 body=509 status=ok
// SIG undefined FUN_142fe35b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe35b0(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((int)param_1[0xc6] == 0) || ((longlong *)param_1[0xc5] == (longlong *)0x0)) {
LAB_142fe3604:
    cVar2 = (char)param_1[0x25];
    if (cVar2 == '\x03') {
      *(int *)(param_1 + 0xbf) = (int)param_1[199];
      FUN_143015550(param_1);
      cVar2 = (char)param_1[0x25];
    }
    if (cVar2 == '\x03') {
      (**(code **)(*param_1 + 0x600))(param_1);
      *(undefined8 *)((longlong)param_1 + 0x5fc) = *(undefined8 *)((longlong)param_1 + 0x63c);
      *(undefined4 *)((longlong)param_1 + 0x604) = *(undefined4 *)((longlong)param_1 + 0x644);
      FUN_1430154c0(param_1,(undefined8 *)((longlong)param_1 + 0x63c));
    }
  }
  else {
    cVar2 = (**(code **)(*(longlong *)param_1[0xc5] + 0x18))();
    if (cVar2 == '\0') goto LAB_142fe3604;
    if ((int)param_1[0xc6] == 0) {
      (**(code **)(_DAT_00000000 + 0x38))(0,param_1);
    }
    else {
      (**(code **)(*(longlong *)param_1[0xc5] + 0x38))((longlong *)param_1[0xc5],param_1);
    }
  }
  if ((((*(byte *)((longlong)param_1 + 0x614) & 1) != 0) &&
      ((*(byte *)((longlong)param_1 + 0x614) & 2) != 0)) &&
     (*(char *)((longlong)param_1 + 0x129) == '\x01')) {
    plVar4 = (longlong *)param_1[0x91];
    if ((plVar4 != (longlong *)0x0) ||
       (plVar4 = (longlong *)param_1[0x90], plVar4 != (longlong *)0x0)) {
      cVar2 = (**(code **)(*plVar4 + 0x400))(plVar4,0);
      if (cVar2 != '\0') goto LAB_142fe36bd;
    }
    FUN_14223e980(param_1,2);
  }
LAB_142fe36bd:
  (**(code **)(*param_1 + 0x600))(param_1);
  bVar1 = *(byte *)(param_1 + 0x10);
  (**(code **)(*param_1 + 0x768))(param_1,0);
  (**(code **)(*param_1 + 0x310))(param_1,0);
  if ((*(byte *)(param_1 + 0xb5) & 0x40) != 0) {
    cVar2 = (**(code **)(*param_1 + 0x758))(param_1);
    if (cVar2 == '\0') goto LAB_142fe3717;
  }
  (**(code **)(*param_1 + 0x700))(param_1,1);
LAB_142fe3717:
  FUN_14223c460(param_1,1);
  lVar3 = FUN_14222e2a0(param_1);
  if (((lVar3 == 0) && ((*(byte *)((longlong)param_1 + 0x4a4) & 0x20) == 0)) &&
     ((param_1[0x91] != 0 || (param_1[0x90] != 0)))) {
    (**(code **)(*param_1 + 0x710))(param_1);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x99,0);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x9b,0);
  if ((bVar1 & 1) != 0) {
    FUN_143013120(param_1);
  }
  FUN_143015550(param_1,(int)param_1[0xbf]);
  FUN_1430154c0(param_1,(longlong)param_1 + 0x5fc);
  return;
}



// FUNCTION 142fe37b0 FUN_142fe37b0 body=220 status=ok
// SIG undefined FUN_142fe37b0(void)

void FUN_142fe37b0(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  
  (**(code **)(*param_1 + 0x600))();
  bVar1 = *(byte *)(param_1 + 0x10);
  (**(code **)(*param_1 + 0x768))(param_1,0);
  (**(code **)(*param_1 + 0x310))(param_1,0);
  if ((*(byte *)(param_1 + 0xb5) & 0x40) != 0) {
    cVar2 = (**(code **)(*param_1 + 0x758))(param_1);
    if (cVar2 == '\0') goto LAB_142fe3814;
  }
  (**(code **)(*param_1 + 0x700))(param_1,1);
LAB_142fe3814:
  FUN_14223c460(param_1,1);
  lVar3 = FUN_14222e2a0(param_1);
  if (((lVar3 == 0) && ((*(byte *)((longlong)param_1 + 0x4a4) & 0x20) == 0)) &&
     ((param_1[0x91] != 0 || (param_1[0x90] != 0)))) {
    (**(code **)(*param_1 + 0x710))(param_1);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x99,0);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x9b,0);
  if ((bVar1 & 1) != 0) {
    FUN_143013120(param_1);
  }
  return;
}



// FUNCTION 142fe3890 FUN_142fe3890 body=134 status=ok
// SIG undefined FUN_142fe3890(void)

void FUN_142fe3890(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  iVar2 = FUN_14233f450();
  if (iVar2 == 3) {
    plVar3 = *(longlong **)(param_1 + 0x1f0);
    uVar5 = 0;
    uVar4 = (longlong)*(int *)(param_1 + 0x1f8) & 0x1fffffffffffffff;
    if (plVar3 + *(int *)(param_1 + 0x1f8) < plVar3) {
      uVar4 = uVar5;
    }
    if (uVar4 != 0) {
      do {
        plVar1 = (longlong *)*plVar3;
        if ((plVar1 != (longlong *)0x0) && ((*(byte *)(plVar1 + 0xb5) & 1) != 0)) {
          (**(code **)(*plVar1 + 0x7f8))();
        }
        plVar3 = plVar3 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar4);
    }
  }
  return;
}



// FUNCTION 142fe3940 FUN_142fe3940 body=494 status=ok
// SIG undefined FUN_142fe3940(void)

undefined8 FUN_142fe3940(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_res10 [2];
  undefined4 local_res20 [2];
  int local_88;
  char local_84;
  undefined4 local_80;
  longlong *local_78;
  int *local_70;
  undefined1 local_68 [64];
  
  local_res10[0] = param_2;
  iVar2 = FUN_14233f450();
  if (((iVar2 == 3) || ((*(byte *)(param_1 + 0xb8) & 8) == 0)) && (local_res10[0] != 0)) {
    plVar1 = (longlong *)(param_1 + 0x228);
    lVar4 = *plVar1;
    lVar6 = (longlong)*(int *)(param_1 + 0x230) * 0x40 + lVar4;
    while( true ) {
      if (lVar4 == lVar6) {
        if (param_3 == '\0') {
          local_78 = local_res10;
          local_80 = 0xffffffff;
          local_70 = &local_88;
          local_88 = -1;
          local_84 = 0;
          FUN_142fd84b0(param_1 + 0x248,local_res20,&local_78,0);
          return 1;
        }
        uVar5 = FUN_142fde440(local_68,local_res10[0],0,0,0,0);
        iVar2 = *(int *)(param_1 + 0x230);
        *(int *)(param_1 + 0x230) = iVar2 + 1;
        if (*(int *)(param_1 + 0x234) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar1,iVar2);
        }
        FUN_140f16a00(*plVar1 + (longlong)iVar2 * 0x40,uVar5);
        lVar4 = (longlong)iVar2 * 0x40 + *plVar1;
        *(byte *)(lVar4 + 0x29) = *(byte *)(lVar4 + 0x29) & 0xfd;
        *(byte *)(lVar4 + 0x29) = *(byte *)(lVar4 + 0x29) | param_3 * '\x02';
        uVar3 = FUN_142ff5900(param_1);
        *(undefined4 *)(lVar4 + 0x2c) = uVar3;
        local_78 = local_res10;
        local_80 = 0xffffffff;
        local_70 = &local_88;
        local_88 = iVar2;
        local_84 = param_3;
        FUN_142fd84b0(param_1 + 0x248,local_res20,&local_78,0);
        FUN_143003f20(param_1);
        local_res20[0] = *(undefined4 *)(lVar4 + 0xc);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x2d8,local_res20);
        return 1;
      }
      if (*(longlong *)(lVar4 + 0x10) == local_res10[0]) break;
      lVar4 = lVar4 + 0x40;
    }
  }
  return 0;
}



// FUNCTION 142fe3b30 FUN_142fe3b30 body=557 status=ok
// SIG undefined FUN_142fe3b30(void)

void FUN_142fe3b30(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_78 [32];
  longlong local_58;
  longlong local_48;
  longlong local_38;
  longlong local_28;
  int local_20;
  int local_1c;
  
  if (((param_2 != (longlong *)0x0) && (param_3 != 0)) &&
     ((iVar2 = FUN_14233f450(), iVar2 == 3 || ((*(byte *)(param_1 + 0xb8) & 8) == 0)))) {
    lVar6 = *(longlong *)(param_1 + 0x228);
    lVar3 = (longlong)*(int *)(param_1 + 0x230) * 0x40 + lVar6;
    for (; lVar6 != lVar3; lVar6 = lVar6 + 0x40) {
      plVar5 = *(longlong **)(lVar6 + 0x20);
      if (plVar5 == param_2) {
        uVar4 = FUN_14301f8f0();
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x628))(plVar5,uVar4);
        if (plVar5 == (longlong *)0x0) {
          return;
        }
        cVar1 = (**(code **)(*plVar5 + 0x4f8))(plVar5);
        if (cVar1 == '\0') {
          return;
        }
        iVar2 = FUN_14233f450(plVar5);
        if (iVar2 != 3) {
          return;
        }
        _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
        FUN_142ff3000(plVar5,local_78);
        iVar2 = local_20;
        lVar3 = (longlong)local_20;
        local_20 = local_20 + 1;
        if (local_1c < local_20) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_28,iVar2);
        }
        *(longlong *)(local_28 + lVar3 * 8) = param_3;
        cVar1 = FUN_143003610(local_78);
        if (cVar1 != '\0') {
          lVar3 = plVar5[0x24];
          if (lVar3 == 0) {
            lVar3 = FUN_1423407b0(plVar5);
          }
          plVar5 = (longlong *)FUN_143019ed0(lVar3,local_78,1,0);
          if (plVar5 != (longlong *)0x0) {
            uVar4 = FUN_14301f8f0();
            lVar3 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar4);
            if (lVar3 != 0) {
              if (local_28 != 0) {
                FMemory::Free();
              }
              if (local_38 != 0) {
                FMemory::Free();
              }
              if (local_48 != 0) {
                FMemory::Free();
              }
              if (local_58 != 0) {
                FMemory::Free();
              }
              if (*(longlong *)(lVar3 + 0x118) == 0) {
                return;
              }
              FUN_142feb6c0(param_1,lVar6);
              return;
            }
          }
        }
        if (local_28 != 0) {
          FMemory::Free();
        }
        if (local_38 != 0) {
          FMemory::Free();
        }
        if (local_48 != 0) {
          FMemory::Free();
        }
        if (local_58 == 0) {
          return;
        }
        FMemory::Free();
        return;
      }
    }
  }
  return;
}



// FUNCTION 142fe3d60 FUN_142fe3d60 body=97 status=ok
// SIG undefined FUN_142fe3d60(void)

undefined8 FUN_142fe3d60(undefined8 param_1,undefined8 param_2)

{
  FUN_142fe3dd0();
  return param_2;
}



// FUNCTION 142fe3dd0 FUN_142fe3dd0 body=637 status=ok
// SIG undefined FUN_142fe3dd0(void)

int * FUN_142fe3dd0(longlong *param_1,int *param_2,longlong param_3,longlong *param_4,
                   undefined4 param_5,undefined4 param_6,char param_7,undefined4 param_8,
                   char param_9)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong lVar9;
  undefined4 local_res10 [2];
  longlong local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [72];
  
  *param_2 = -1;
  iVar3 = FUN_14233f450();
  if ((iVar3 == 3) || ((*(byte *)(param_1 + 0x17) & 8) == 0)) {
    if (param_3 == 0) {
      if (param_4 == (longlong *)0x0) {
        return param_2;
      }
      iVar3 = *param_2;
    }
    else {
      piVar4 = (int *)FUN_14301be80(param_1,local_res10,param_3,param_5);
      iVar3 = *piVar4;
      *param_2 = iVar3;
    }
    if (iVar3 == -1) {
      if ((((param_9 == '\0') && (DAT_146b45384 == '\0')) && (0 < (int)param_1[0x55])) &&
         (((int)param_1[0x55] <= (int)param_1[0x48] && (lVar6 = param_1[0x23], lVar6 != 0)))) {
        uVar5 = UUserObjectListEntry::GetPrivateStaticClass();
        lVar6 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar5);
        if (lVar6 != 0) {
          local_78 = param_6;
          local_74 = param_8;
          local_88 = param_3;
          local_80 = param_4;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x69,&local_88);
        }
      }
      uVar8 = 1;
      if (param_4 != (longlong *)0x0) {
        uVar5 = FUN_14301f8f0();
        lVar6 = (**(code **)(*param_4 + 0x628))(param_4,uVar5);
        if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x208) != 0)) {
          uVar8 = *(undefined1 *)(*(longlong *)(lVar6 + 0x208) + 0x1e1);
        }
      }
      FUN_143003f20(param_1);
      FUN_142fde440(local_70,param_3,param_4,param_5,param_4 != (longlong *)0x0,uVar8);
      plVar1 = param_1 + 0x45;
      iVar3 = (int)param_1[0x46];
      *(int *)(param_1 + 0x46) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0x234) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1,iVar3);
      }
      FUN_140f16a00(*plVar1 + (longlong)iVar3 * 0x40);
      lVar6 = *plVar1;
      lVar7 = (longlong)iVar3 * 0x40 + lVar6;
      lVar9 = (longlong)(int)param_1[0x46] * 0x40 + lVar6;
      *param_2 = *(int *)(lVar7 + 0xc);
      iVar3 = 0;
      for (; lVar6 != lVar9; lVar6 = lVar6 + 0x40) {
        iVar2 = *(int *)(lVar6 + 0x2c);
        if (*(int *)(lVar6 + 0x2c) <= iVar3) {
          iVar2 = iVar3;
        }
        iVar3 = iVar2;
      }
      *(int *)(lVar7 + 0x2c) = iVar3 + 1;
      if (param_4 != (longlong *)0x0) {
        FUN_1430174d0(param_1,param_4);
      }
      (**(code **)(*param_1 + 0x490))(param_1,lVar7,param_6,param_8);
      local_res10[0] = *(undefined4 *)(lVar7 + 0xc);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x5b,local_res10);
      FUN_142fe9980(param_1);
    }
    else if ((param_7 != '\0') && (param_4 != (longlong *)0x0)) {
      FUN_142227350(param_4,0,1);
    }
  }
  return param_2;
}



// FUNCTION 142fe4050 FUN_142fe4050 body=199 status=ok
// SIG undefined FUN_142fe4050(void)

undefined8 FUN_142fe4050(float *param_1,float param_2,undefined8 param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float local_res10 [2];
  int local_res20 [2];
  undefined8 local_28;
  float *local_20;
  
  if ((param_2 <= 1e-08) && (*(char *)(param_1 + 1) == '\0')) {
    return 0;
  }
  local_res10[0] = param_2;
  FUN_142ff3310(param_1 + 2);
  pfVar1 = (float *)0x0;
  if (local_res20[0] != -1) {
    pfVar1 = (float *)((longlong)local_res20[0] * 0x38 + *(longlong *)(param_1 + 2));
  }
  fVar3 = *param_1;
  pfVar2 = pfVar1 + 10;
  if (pfVar1 == (float *)0x0) {
    pfVar2 = (float *)0x0;
  }
  if (pfVar2 != (float *)0x0) {
    fVar3 = fVar3 - *pfVar2;
  }
  local_20 = local_res10;
  *param_1 = fVar3 + param_2;
  local_28 = param_3;
  FUN_142fd8cc0(param_1 + 2,local_res20,&local_28,0);
  return 1;
}



// FUNCTION 142fe4120 FUN_142fe4120 body=96 status=ok
// SIG undefined FUN_142fe4120(void)

undefined4 * FUN_142fe4120(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 local_res10 [6];
  
  *param_2 = 0xffffffff;
  if (param_3 != 0) {
    FUN_142fe3dd0(param_1,local_res10,*(undefined8 *)(param_3 + 0x4c0),
                  *(undefined8 *)(param_3 + 0x568),*(undefined4 *)(param_3 + 0x4a0),2,1,0,0);
    *param_2 = local_res10[0];
  }
  return param_2;
}



// FUNCTION 142fe4180 FUN_142fe4180 body=90 status=ok
// SIG undefined FUN_142fe4180(void)

void FUN_142fe4180(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_142ff30a0();
  if (iVar1 == -1) {
    iVar1 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar1);
    }
    FUN_142fde850((longlong)iVar1 * 0x88 + *param_1,param_2);
  }
  return;
}



// FUNCTION 142fe41e0 FUN_142fe41e0 body=241 status=ok
// SIG undefined FUN_142fe41e0(void)

void FUN_142fe41e0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uStack_8c;
  undefined4 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_24;
  
  iVar2 = *(int *)(param_1 + 200);
  *(int *)(param_1 + 200) = iVar2 + 1;
  if (*(int *)(param_1 + 0xcc) < iVar2 + 1) {
    TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0xc0),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar4 = (longlong)iVar2 * 0x80;
  *(undefined8 *)(lVar4 + lVar3) = param_2;
  ((undefined8 *)(lVar4 + lVar3))[1] = CONCAT44(uStack_8c,0x3f800000);
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar3);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar3);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar3);
  *puVar1 = 0;
  puVar1[1] = CONCAT44(uStack_5c,0x3f800000);
  puVar1 = (undefined8 *)(lVar4 + 0x40 + lVar3);
  *puVar1 = CONCAT44(uStack_54,0x42c80000);
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x50 + lVar3);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x60 + lVar3);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x70 + lVar3);
  *puVar1 = CONCAT44(uStack_24,0x3f800000);
  puVar1[1] = 0;
  return;
}



// FUNCTION 142fe42e0 FUN_142fe42e0 body=527 status=ok
// SIG undefined FUN_142fe42e0(void)

void FUN_142fe42e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  void *_Src;
  uint uVar8;
  longlong lVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x2c0);
  uVar13 = 0;
  uVar8 = 0;
  if (0 < (int)uVar2) {
    plVar4 = *(longlong **)(param_1 + 0x2b8);
    uVar6 = uVar13;
    uVar9 = uVar13;
    do {
      uVar8 = (uint)uVar9;
      if ((*plVar4 == param_2[7]) && (plVar4[1] == param_2[8])) break;
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar6 = uVar6 + 1;
      plVar4 = plVar4 + 4;
    } while ((longlong)uVar6 < (longlong)(int)uVar2);
  }
  if (uVar8 == uVar2) {
    plVar4 = (longlong *)(param_1 + 0x2b8);
    uVar8 = *(uint *)(param_1 + 0x2c0);
    *(uint *)(param_1 + 0x2c0) = uVar8 + 1;
    if (*(int *)(param_1 + 0x2c4) < (int)(uVar8 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar4,uVar8);
    }
    lVar10 = *plVar4;
    lVar7 = (longlong)(int)uVar8 * 0x20;
    *(undefined8 *)(lVar7 + lVar10) = 0;
    *(undefined8 *)(lVar7 + 8 + lVar10) = 0;
    *(undefined8 *)(lVar7 + 0x10 + lVar10) = 0;
    *(undefined8 *)(lVar7 + 0x18 + lVar10) = 0;
    *(longlong *)(lVar7 + *plVar4) = param_2[7];
    *(longlong *)(lVar7 + 8 + *plVar4) = param_2[8];
  }
  iVar12 = (int)param_2[9];
  lVar10 = (longlong)(int)uVar8 * 0x20 + *(longlong *)(param_1 + 0x2b8);
  if ((iVar12 < 0) || (*(int *)(lVar10 + 0x18) <= iVar12)) {
    iVar11 = (iVar12 - *(int *)(lVar10 + 0x18)) + 1;
    iVar12 = *(int *)(lVar10 + 0x18);
    iVar3 = iVar12 + iVar11;
    *(int *)(lVar10 + 0x18) = iVar3;
    if (*(int *)(lVar10 + 0x1c) < iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (lVar10 + 0x10);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar12 * 0x18),0,
               (longlong)iVar11 * 0x18);
    iVar12 = (int)param_2[9];
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar12 * 0x18);
  uVar6 = uVar13;
  if (*(longlong *)(param_1 + 0x210) != 0) {
    uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x210) + 0xb8);
  }
  lVar10 = (**(code **)(*param_2 + 0x2d0))(param_2,uVar6);
  if (lVar10 != 0) {
    plVar4 = (longlong *)*puVar1;
    if ((plVar4 == (longlong *)0x0) || (*(byte *)(plVar4 + 6) < *(byte *)(param_2 + 6))) {
      plVar4 = param_2;
    }
    *puVar1 = plVar4;
  }
  if (0 < *(int *)(puVar1 + 2)) {
    plVar5 = (longlong *)puVar1[1];
    plVar4 = puVar1 + 1;
    do {
      iVar12 = (int)uVar13;
      if (*(byte *)(*plVar5 + 0x30) < *(byte *)(param_2 + 6)) {
        iVar3 = *(int *)(puVar1 + 2);
        *(int *)(puVar1 + 2) = iVar3 + 1;
        if (*(int *)((longlong)puVar1 + 0x14) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar3);
        }
        _Src = (void *)(*plVar4 + (longlong)iVar12 * 8);
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)_Src + 8),_Src,(longlong)(iVar3 - iVar12) << 3);
        *(longlong **)((longlong)iVar12 * 8 + *plVar4) = param_2;
        return;
      }
      uVar13 = (ulonglong)(iVar12 + 1U);
      plVar5 = plVar5 + 1;
    } while ((int)(iVar12 + 1U) < *(int *)(puVar1 + 2));
  }
  iVar12 = *(int *)(puVar1 + 2);
  *(int *)(puVar1 + 2) = iVar12 + 1;
  if (*(int *)((longlong)puVar1 + 0x14) < iVar12 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar1 + 1,iVar12);
  }
  *(longlong **)(puVar1[1] + (longlong)iVar12 * 8) = param_2;
  return;
}



// FUNCTION 142fe44f0 FUN_142fe44f0 body=421 status=ok
// SIG undefined FUN_142fe44f0(void)

void FUN_142fe44f0(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 local_res10 [2];
  longlong local_res20;
  int local_88;
  undefined1 local_84;
  undefined4 local_80;
  longlong *local_78;
  int *local_70;
  undefined1 local_68 [64];
  
  local_res20 = param_2;
  iVar2 = FUN_14233f450();
  if (((iVar2 == 3) || ((*(byte *)(param_1 + 0xb8) & 8) == 0)) && (local_res20 != 0)) {
    plVar1 = (longlong *)(param_1 + 0x228);
    lVar4 = *plVar1;
    lVar6 = (longlong)*(int *)(param_1 + 0x230) * 0x40 + lVar4;
    for (; lVar4 != lVar6; lVar4 = lVar4 + 0x40) {
      if (*(longlong *)(lVar4 + 0x10) == local_res20) goto LAB_142fe4672;
    }
    uVar5 = FUN_142fde440(local_68,local_res20,0,0,0,0);
    iVar2 = *(int *)(param_1 + 0x230);
    *(int *)(param_1 + 0x230) = iVar2 + 1;
    if (*(int *)(param_1 + 0x234) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar1,iVar2);
    }
    FUN_140f16a00(*plVar1 + (longlong)iVar2 * 0x40,uVar5);
    lVar4 = (longlong)iVar2 * 0x40 + *plVar1;
    *(byte *)(lVar4 + 0x29) = *(byte *)(lVar4 + 0x29) | 2;
    uVar3 = FUN_142ff5900(param_1);
    *(undefined4 *)(lVar4 + 0x2c) = uVar3;
    local_78 = &local_res20;
    local_80 = 0xffffffff;
    local_70 = &local_88;
    local_84 = 1;
    local_88 = iVar2;
    FUN_142fd84b0(param_1 + 0x248,local_res10,&local_78,0);
    FUN_143003f20(param_1);
    local_res10[0] = *(undefined4 *)(lVar4 + 0xc);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x2d8,local_res10);
  }
LAB_142fe4672:
  FUN_14301be80(param_1,local_res10,param_2,param_3);
  return;
}



// FUNCTION 142fe46a0 FUN_142fe46a0 body=236 status=ok
// SIG undefined FUN_142fe46a0(void)

void FUN_142fe46a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar5 = (longlong)*(int *)(param_1 + 0x20) * 0x30 + lVar2;
  if (lVar2 != lVar5) {
    puVar4 = (undefined4 *)(lVar2 + 0x28);
    do {
      lVar1 = *(longlong *)(puVar4 + -8);
      lVar3 = (longlong)(int)puVar4[-6] * 0x30 + lVar1;
      for (; lVar1 != lVar3; lVar1 = lVar1 + 0x30) {
        (**(code **)(*param_2 + 0x40))
                  (param_2,*(undefined8 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x20),0,0);
      }
      (**(code **)(*param_2 + 0x40))(param_2,*(undefined8 *)(puVar4 + -2),*puVar4,0,0);
      lVar2 = lVar2 + 0x30;
      puVar4 = puVar4 + 0xc;
    } while (lVar2 != lVar5);
  }
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),0,0);
  return;
}



// FUNCTION 142fe4790 FUN_142fe4790 body=181 status=ok
// SIG undefined FUN_142fe4790(void)

void FUN_142fe4790(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (0 < *(int *)(param_2 + 0x288)) {
    uVar6 = uVar5;
    do {
      plVar1 = (longlong *)(*(longlong *)(param_2 + 0x280) + (longlong)(int)uVar5 * 8);
      if (*(longlong *)(*(longlong *)(uVar6 + *(longlong *)(param_2 + 0x280)) + 0x10) ==
          *(longlong *)(param_1 + 0x10)) {
        lVar3 = *plVar1;
        if ((lVar3 == 0) || (*(byte *)(lVar3 + 0x30) < *(byte *)(param_1 + 0x30))) {
          lVar3 = param_1;
        }
        *plVar1 = lVar3;
        return;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar6 = uVar6 + 8;
    } while ((int)uVar4 < *(int *)(param_2 + 0x288));
  }
  iVar2 = *(int *)(param_2 + 0x288);
  *(int *)(param_2 + 0x288) = iVar2 + 1;
  if (*(int *)(param_2 + 0x28c) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 0x280,iVar2);
  }
  *(longlong *)(*(longlong *)(param_2 + 0x280) + (longlong)iVar2 * 8) = param_1;
  return;
}



// FUNCTION 142fe4850 FUN_142fe4850 body=216 status=ok
// SIG undefined FUN_142fe4850(void)

void FUN_142fe4850(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_2 + 0x2e0)) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_2 + 0x2d8));
      cVar2 = (**(code **)(*plVar1 + 0x2d0))(plVar1,param_1);
      if (cVar2 != '\0') {
        if ((-1 < iVar3) && (iVar3 < *(int *)(param_2 + 0x2e0))) {
          lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x2d8) + (longlong)iVar3 * 8);
          if ((param_1 == 0) ||
             ((lVar4 != 0 && (*(byte *)(param_1 + 0x30) <= *(byte *)(lVar4 + 0x30))))) {
            param_1 = lVar4;
          }
          *(longlong *)(*(longlong *)(param_2 + 0x2d8) + (longlong)iVar3 * 8) = param_1;
          return;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_2 + 0x2e0));
  }
  iVar3 = *(int *)(param_2 + 0x2e0);
  *(int *)(param_2 + 0x2e0) = iVar3 + 1;
  if (*(int *)(param_2 + 0x2e4) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 0x2d8,iVar3);
  }
  *(longlong *)(*(longlong *)(param_2 + 0x2d8) + (longlong)iVar3 * 8) = param_1;
  return;
}



// FUNCTION 142fe4930 FUN_142fe4930 body=118 status=ok
// SIG undefined FUN_142fe4930(void)

void FUN_142fe4930(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0x40) * 2;
  if (plVar2 != plVar3) {
    while (*plVar2 == 0) {
      plVar2 = plVar2 + 2;
      if (plVar2 == plVar3) {
        return;
      }
    }
    iVar1 = *(int *)(param_2 + 0x2d0);
    *(int *)(param_2 + 0x2d0) = iVar1 + 1;
    if (*(int *)(param_2 + 0x2d4) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_2 + 0x2c8),iVar1);
    }
    *(longlong *)(*(longlong *)(param_2 + 0x2c8) + (longlong)iVar1 * 8) = param_1;
  }
  return;
}



// FUNCTION 142fe49b0 FUN_142fe49b0 body=112 status=ok
// SIG undefined FUN_142fe49b0(void)

void FUN_142fe49b0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  lVar1 = param_1[0x16];
  lVar2 = param_1[0x14];
  lVar3 = param_1[0x12];
  lVar4 = param_1[0x10];
  lVar5 = param_1[0xe];
  uVar7 = 0;
  if (*(longlong *)(param_2 + 0x210) != 0) {
    uVar7 = *(undefined8 *)(*(longlong *)(param_2 + 0x210) + 0xb8);
  }
  lVar6 = (**(code **)(*param_1 + 0x2d0))(param_1,uVar7);
  if ((lVar6 != 0) || ((int)lVar1 + (int)lVar2 + (int)lVar3 + (int)lVar4 + (int)lVar5 != 0)) {
    FUN_142fe42e0(param_2,param_1);
  }
  return;
}



// FUNCTION 142fe4a20 FUN_142fe4a20 body=182 status=ok
// SIG undefined FUN_142fe4a20(void)

void FUN_142fe4a20(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    if (0 < *(int *)(param_2 + 0x2f0)) {
      lVar3 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x2e8) + lVar3 * 8);
        if ((*(longlong *)(lVar2 + 0x38) == *(longlong *)(param_1 + 0x38)) ||
           (*(longlong *)(lVar2 + 0x40) == *(longlong *)(param_1 + 0x40))) {
          if ((lVar2 == 0) || (*(byte *)(lVar2 + 0x30) < *(byte *)(param_1 + 0x30))) {
            lVar2 = param_1;
          }
          *(longlong *)(*(longlong *)(param_2 + 0x2e8) + lVar3 * 8) = lVar2;
          return;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_2 + 0x2f0));
    }
    iVar1 = *(int *)(param_2 + 0x2f0);
    *(int *)(param_2 + 0x2f0) = iVar1 + 1;
    if (*(int *)(param_2 + 0x2f4) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 0x2e8,iVar1);
    }
    *(longlong *)(*(longlong *)(param_2 + 0x2e8) + (longlong)iVar1 * 8) = param_1;
  }
  return;
}



// FUNCTION 142fe4ae0 FUN_142fe4ae0 body=416 status=ok
// SIG undefined FUN_142fe4ae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142fe4ae0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = DAT_146b457e0;
  if (DAT_146b457e0 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FMemory::Malloc(0x500,0);
    *puVar1 = puVar1 + 10;
    puVar1[10] = puVar1 + 0x14;
    puVar1[0x14] = puVar1 + 0x1e;
    puVar1[0x1e] = puVar1 + 0x28;
    puVar1[0x28] = puVar1 + 0x32;
    puVar1[0x32] = puVar1 + 0x3c;
    puVar1[0x3c] = puVar1 + 0x46;
    puVar1[0x46] = puVar1 + 0x50;
    puVar1[0x50] = puVar1 + 0x5a;
    puVar1[0x5a] = puVar1 + 100;
    puVar1[100] = puVar1 + 0x6e;
    puVar1[0x6e] = puVar1 + 0x78;
    puVar1[0x78] = puVar1 + 0x82;
    puVar1[0x82] = puVar1 + 0x8c;
    puVar1[0x8c] = puVar1 + 0x96;
    puVar1[0x96] = DAT_146b457e0;
    _DAT_146b457e8 = _DAT_146b457e8 + 0x10;
  }
  DAT_146b457e0 = (undefined8 *)*puVar1;
  puVar3 = (undefined8 *)0x0;
  _DAT_146b457ec = _DAT_146b457ec + 1;
  *(undefined1 *)puVar1 = 0;
  *(undefined8 *)((longlong)puVar1 + 4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
  puVar1[3] = DAT_1468b5da0;
  *(undefined4 *)(puVar1 + 4) = DAT_1468b5da8;
  *(undefined8 *)((longlong)puVar1 + 0x24) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = DAT_1468b5d98;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
  *(undefined4 *)(puVar1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
  *(undefined4 *)(puVar1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_145a3c0f0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar1;
    puVar3 = puVar2;
  }
  *param_1 = puVar1;
  param_1[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar1,puVar1);
  return param_1;
}



// FUNCTION 142fe4c80 FUN_142fe4c80 body=1152 status=ok
// SIG undefined FUN_142fe4c80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fe4c80(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  undefined1 *puVar7;
  longlong lVar8;
  int iVar9;
  undefined4 *puVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  longlong *plVar15;
  undefined1 auStack_10d8 [32];
  undefined4 local_10b8;
  undefined4 local_10b4;
  undefined8 local_10b0;
  undefined8 local_10a8;
  int iStack_10a0;
  uint uStack_109c;
  undefined8 local_1098;
  undefined8 uStack_1090;
  undefined4 local_1088;
  undefined4 uStack_1084;
  undefined4 local_1080;
  undefined4 local_107c;
  longlong *local_1070;
  int iStack_1068;
  uint uStack_1064;
  uint *puStack_1060;
  undefined4 uStack_1058;
  int iStack_1054;
  undefined4 uStack_1050;
  undefined4 uStack_104c;
  undefined1 local_1048 [4096];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_10d8;
  iVar4 = (int)param_1[5];
  iVar12 = DAT_146b45cb4 + 1;
  puStack_1060 = (uint *)(param_1 + 2);
  local_10a8._0_4_ = 0;
  local_10a8._4_4_ = 1;
  DAT_146b45cb4 = 0;
  if (-1 < iVar12) {
    DAT_146b45cb4 = iVar12;
  }
  local_1098._4_4_ = 0;
  iVar12 = 0;
  uStack_1090 = uStack_1090 & 0xffffffff00000000;
  if (iVar4 != 0) {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = puStack_1060;
    }
    uVar3 = *puVar14;
    while (uVar3 == 0) {
      lVar8 = (longlong)(int)local_10a8;
      iVar12 = iVar12 + 0x20;
      iVar13 = (int)local_10a8 + 1;
      uStack_1090._4_4_ = (int)(uStack_1090 >> 0x20);
      uStack_1090 = CONCAT44(uStack_1090._4_4_,iVar12);
      bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_10a8;
      local_10a8._0_4_ = iVar13;
      if (bVar5) goto LAB_142fe4d82;
      uVar3 = puVar14[lVar8 + 1];
    }
    local_10a8._4_4_ = -uVar3 & uVar3;
    iVar13 = 0x1f;
    if (local_10a8._4_4_ != 0) {
      for (; local_10a8._4_4_ >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (local_10a8._4_4_ == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    local_1098._4_4_ = (iVar12 - iVar13) + 0x1f;
    if (iVar4 < local_1098._4_4_) {
LAB_142fe4d82:
      local_1098._4_4_ = iVar4;
    }
  }
  uStack_1058 = 0xffffffff;
  iStack_1054 = local_1098._4_4_;
  uStack_1050 = (uint)uStack_1090;
  uStack_104c = uStack_1090._4_4_;
  iStack_1068 = (int)local_10a8;
  uStack_1064 = local_10a8._4_4_;
  iVar12 = local_1098._4_4_;
  iStack_10a0 = (int)local_10a8;
  uStack_109c = local_10a8._4_4_;
  local_1088 = (uint)uStack_1090;
  uStack_1084 = uStack_1090._4_4_;
  bVar5 = local_1098._4_4_ < iVar4;
  local_10b0 = param_2;
  local_10a8 = param_1;
  local_1098 = puStack_1060;
  local_1070 = param_1;
  uStack_1090._0_4_ = 0xffffffff;
  uStack_1090._4_4_ = iVar12;
  if (bVar5) {
    do {
      plVar2 = local_10a8;
      lVar8 = (longlong)uStack_1090._4_4_ * 0x20;
      local_1080 = *(undefined4 *)(lVar8 + *local_10a8);
      local_107c = *(undefined4 *)(lVar8 + 4 + *local_10a8);
      cVar6 = FWeakObjectPtr::IsValid(&local_1080);
      if (cVar6 != '\0') {
        local_48 = (undefined1 *)0x0;
        local_40 = 0;
        puVar10 = *(undefined4 **)(*plVar2 + 8 + lVar8);
        puVar1 = puVar10 + (longlong)*(int *)(*plVar2 + 0x10 + lVar8) * 2;
        for (; puVar10 != puVar1; puVar10 = puVar10 + 2) {
          local_10b8 = *puVar10;
          local_10b4 = puVar10[1];
          cVar6 = FWeakObjectPtr::IsValid(&local_10b8);
          if (cVar6 != '\0') {
            lVar8 = FWeakObjectPtr::Get(&local_10b8);
            if ((*(longlong *)(lVar8 + 0x30) == 0) ||
               (cVar6 = FUN_142c48f60(*(longlong *)(lVar8 + 0x30),param_2,0), cVar6 != '\0')) {
              lVar8 = FWeakObjectPtr::Get(&local_10b8);
              iVar4 = *(int *)(lVar8 + 0x60);
              param_2 = local_10b0;
              if (iVar4 != 0) {
                if (local_40._4_4_ < (int)local_40 + iVar4) {
                  FUN_1430122b0(local_1048);
                }
                puVar7 = local_1048;
                if (local_48 != (undefined1 *)0x0) {
                  puVar7 = local_48;
                }
                _guard_xfg_dispatch_icall_nop
                          (puVar7 + (longlong)(int)local_40 * 0x40,*(void **)(lVar8 + 0x58),
                           (longlong)iVar4 << 6);
                local_40 = CONCAT44(local_40._4_4_,(int)local_40 + iVar4);
                param_2 = local_10b0;
              }
            }
          }
        }
        lVar8 = FWeakObjectPtr::Get();
        plVar15 = *(longlong **)(lVar8 + 0x48);
        plVar2 = plVar15 + *(int *)(lVar8 + 0x50);
        iVar4 = DAT_146b45cb4;
        for (; DAT_146b45cb4 = iVar4, plVar15 != plVar2; plVar15 = plVar15 + 1) {
          lVar8 = *plVar15;
          if (lVar8 != 0) {
            if (iVar4 != -1) {
              if (*(char *)(lVar8 + 0xd0) == '\0') goto LAB_142fe5078;
              if (*(int *)(lVar8 + 0xec) == -1) {
                *(undefined4 *)(lVar8 + 0xe8) = *(undefined4 *)(lVar8 + 0xe0);
              }
              else if ((iVar4 != *(int *)(lVar8 + 0xec)) &&
                      (iVar12 = *(int *)(lVar8 + 0xe8), -1 < iVar12)) {
                iVar13 = *(int *)(lVar8 + 0xe0);
                if (iVar13 < iVar12) {
                  *(int *)(lVar8 + 0xe0) = iVar12;
                  iVar9 = iVar12 - iVar13;
                  if (*(int *)(lVar8 + 0xe4) < iVar12) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>
                    ::ResizeGrow((longlong *)(lVar8 + 0xd8),iVar13);
                  }
                  if (iVar9 != 0) {
                    lVar11 = (longlong)iVar13 * 0x40 + 0x24 + *(longlong *)(lVar8 + 0xd8);
                    do {
                      *(undefined8 *)(lVar11 + -0x14) = 0;
                      *(undefined8 *)(lVar11 + -0xc) = 0;
                      *(undefined8 *)(lVar11 + -4) = 0;
                      *(undefined8 *)(lVar11 + 4) = 0;
                      *(undefined8 *)(lVar11 + 0xc) = 0;
                      *(undefined4 *)(lVar11 + 0x14) = 0x3f800000;
                      *(undefined4 *)(lVar11 + -0x1c) = 0x3f800000;
                      lVar11 = lVar11 + 0x40;
                      iVar9 = iVar9 + -1;
                    } while (iVar9 != 0);
                  }
                }
                else if ((iVar12 < iVar13) && (iVar12 != iVar13)) {
                  *(int *)(lVar8 + 0xe0) = iVar12;
                }
              }
              *(int *)(lVar8 + 0xec) = iVar4;
            }
            iVar4 = (int)local_40;
            lVar11 = (longlong)(int)local_40;
            if ((int)local_40 != 0) {
              iVar12 = *(int *)(lVar8 + 0xe0);
              if (*(int *)(lVar8 + 0xe4) < (int)local_40 + iVar12) {
                TArray<FBoneTransform,FDefaultAllocator>::ResizeTo((longlong *)(lVar8 + 0xd8));
                iVar12 = *(int *)(lVar8 + 0xe0);
              }
              puVar7 = local_1048;
              if (local_48 != (undefined1 *)0x0) {
                puVar7 = local_48;
              }
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar12 * 0x40 + *(longlong *)(lVar8 + 0xd8)),puVar7,
                         lVar11 << 6);
              *(int *)(lVar8 + 0xe0) = *(int *)(lVar8 + 0xe0) + iVar4;
            }
          }
LAB_142fe5078:
          iVar4 = DAT_146b45cb4;
        }
        param_2 = local_10b0;
        if (local_48 != (undefined1 *)0x0) {
          FMemory::Free();
          param_2 = local_10b0;
        }
      }
      uStack_1090._0_4_ = (uint)uStack_1090 & ~uStack_109c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_10a0);
    } while (uStack_1090._4_4_ < (int)local_1098[6]);
  }
  return;
}



// FUNCTION 142fe5100 FUN_142fe5100 body=136 status=ok
// SIG undefined FUN_142fe5100(void)

void FUN_142fe5100(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x280);
  uVar3 = (longlong)*(int *)(param_1 + 0x288) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x288) < puVar1) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x2b0))
                ((longlong *)*puVar1,*(undefined8 *)(param_1 + 0x118),param_1);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}



// FUNCTION 142fe5190 FUN_142fe5190 body=525 status=ok
// SIG undefined FUN_142fe5190(void)

void FUN_142fe5190(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    plVar11 = *(longlong **)(param_1 + 0x60);
    plVar2 = plVar11 + (longlong)*(int *)(param_1 + 0x68) * 9;
    for (; plVar11 != plVar2; plVar11 = plVar11 + 9) {
      uStack_70 = 0;
      local_78 = param_2;
      cVar4 = FUN_142ca5390(*plVar11,&local_78);
      if ((cVar4 != '\0') && (iVar8 = (int)param_3[1] + -1, -1 < iVar8)) {
        lVar9 = (longlong)iVar8 << 4;
        do {
          lVar5 = FUN_142c9feb0(*param_3 + lVar9);
          if (lVar5 == *plVar11) {
            FUN_142ca96a0(*param_3 + lVar9);
            TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (param_3,iVar8,1,1);
          }
          lVar9 = lVar9 + -0x10;
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
    }
  }
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  puVar3 = puVar10 + (longlong)*(int *)(param_1 + 0x68) * 9;
  for (; puVar10 != puVar3; puVar10 = puVar10 + 9) {
    local_98 = (undefined4)param_2;
    uStack_94 = (undefined4)((ulonglong)param_2 >> 0x20);
    local_68 = local_98;
    uStack_64 = uStack_94;
    uStack_60 = 0;
    uStack_5c = 0;
    cVar4 = FUN_142ca5390(*puVar10,&local_68);
    if (cVar4 != '\0') {
      local_58 = local_98;
      uStack_54 = uStack_94;
      uStack_50 = 0;
      uStack_4c = 0;
      puVar6 = (undefined8 *)FUN_142c901e0(puVar10,local_48,param_2,&local_58,0,local_res8);
      iVar8 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar8 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar8 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar8);
      }
      plVar2 = local_40;
      puVar7 = (undefined8 *)((longlong)iVar8 * 0x10 + *param_3);
      *puVar7 = *puVar6;
      puVar7[1] = puVar6[1];
      puVar6[1] = 0;
      *puVar6 = 0;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_40 + 1;
        lVar9 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142fe53a0 FUN_142fe53a0 body=345 status=ok
// SIG undefined FUN_142fe53a0(void)

void FUN_142fe53a0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [8];
  longlong *local_30;
  
  puVar10 = *(undefined8 **)(param_1 + 0x1b0);
  puVar3 = puVar10 + (longlong)*(int *)(param_1 + 0x1b8) * 9;
  for (; puVar10 != puVar3; puVar10 = puVar10 + 9) {
    local_78 = (undefined4)param_2;
    uStack_74 = (undefined4)((ulonglong)param_2 >> 0x20);
    local_58 = local_78;
    uStack_54 = uStack_74;
    uStack_50 = 0;
    uStack_4c = 0;
    cVar7 = FUN_142ca5390(*puVar10,&local_58);
    if (cVar7 != '\0') {
      local_48 = local_78;
      uStack_44 = uStack_74;
      uStack_40 = 0;
      uStack_3c = 0;
      puVar8 = (undefined8 *)FUN_142c901e0(puVar10,local_38,param_2,&local_48,0,local_res8);
      iVar4 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar4 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar4);
      }
      plVar6 = local_30;
      puVar9 = (undefined8 *)((longlong)iVar4 * 0x10 + *param_3);
      *puVar9 = *puVar8;
      puVar9[1] = puVar8[1];
      puVar8[1] = 0;
      *puVar8 = 0;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142fe5500 FUN_142fe5500 body=624 status=ok
// SIG undefined FUN_142fe5500(void)

void FUN_142fe5500(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 local_res8 [8];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar4 = *(longlong *)(param_1 + 0x208);
  uVar11 = 0;
  if (lVar4 != 0) {
    puVar12 = *(undefined8 **)(lVar4 + 0x98);
    puVar10 = puVar12 + (longlong)*(int *)(lVar4 + 0xa0) * 9;
    for (; puVar12 != puVar10; puVar12 = puVar12 + 9) {
      local_78 = (undefined4)*(undefined8 *)(param_1 + 0x118);
      uStack_74 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x118) >> 0x20);
      local_58 = local_78;
      uStack_54 = uStack_74;
      uStack_50 = 0;
      uStack_4c = 0;
      cVar7 = FUN_142ca5390(*puVar12,&local_58);
      if (cVar7 != '\0') {
        uVar5 = *(undefined8 *)(param_1 + 0x118);
        local_68 = (undefined4)uVar5;
        uStack_64 = (undefined4)((ulonglong)uVar5 >> 0x20);
        local_48 = local_68;
        uStack_44 = uStack_64;
        uStack_40 = 0;
        uStack_3c = 0;
        puVar8 = (undefined8 *)FUN_142c901e0(puVar12,local_38,uVar5,&local_48,0,local_res8);
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
        }
        plVar6 = local_30;
        puVar9 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
        *puVar9 = *puVar8;
        puVar9[1] = puVar8[1];
        puVar8[1] = 0;
        *puVar8 = 0;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_30)(local_30);
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
      }
    }
  }
  puVar10 = *(undefined8 **)(param_1 + 0x220);
  uVar14 = (longlong)*(int *)(param_1 + 0x228) & 0x1fffffffffffffff;
  if (puVar10 + *(int *)(param_1 + 0x228) < puVar10) {
    uVar14 = uVar11;
  }
  uVar13 = uVar11;
  if (uVar14 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar10 + 0x290))
                ((longlong *)*puVar10,*(undefined8 *)(param_1 + 0x118),param_2);
      uVar13 = uVar13 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar13 != uVar14);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x230);
  uVar14 = (longlong)*(int *)(param_1 + 0x238) & 0x1fffffffffffffff;
  if (puVar10 + *(int *)(param_1 + 0x238) < puVar10) {
    uVar14 = uVar11;
  }
  uVar13 = uVar11;
  if (uVar14 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar10 + 0x290))
                ((longlong *)*puVar10,*(undefined8 *)(param_1 + 0x118),param_2);
      uVar13 = uVar13 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar13 != uVar14);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x2d8);
  uVar14 = (longlong)*(int *)(param_1 + 0x2e0) & 0x1fffffffffffffff;
  if (puVar10 + *(int *)(param_1 + 0x2e0) < puVar10) {
    uVar14 = uVar11;
  }
  if (uVar14 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar10 + 0x2e0))
                ((longlong *)*puVar10,*(undefined8 *)(param_1 + 0x118),param_2);
      uVar11 = uVar11 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar11 != uVar14);
  }
  return;
}



// FUNCTION 142fe5770 FUN_142fe5770 body=30 status=ok
// SIG undefined FUN_142fe5770(void)

void FUN_142fe5770(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142ff63e0();
  FUN_142fe4c80(uVar1,param_2);
  return;
}



// FUNCTION 142fe5790 FUN_142fe5790 body=344 status=ok
// SIG undefined FUN_142fe5790(void)

void FUN_142fe5790(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 local_res8 [8];
  
  FUN_142cb6da0(*(longlong *)(param_1 + 0x208) + 0xa8,param_1 + 0x2a8,
                *(undefined8 *)(param_1 + 0x118),param_2,param_3,local_res8);
  uVar4 = 0;
  plVar1 = *(longlong **)(param_1 + 0x220);
  uVar3 = (longlong)*(int *)(param_1 + 0x228) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x228) < plVar1) {
    uVar3 = uVar4;
  }
  uVar2 = uVar4;
  if (uVar3 != 0) {
    do {
      FUN_142cb6da0(*plVar1 + 0x1c0,param_1 + 0x2a8,*(undefined8 *)(param_1 + 0x118),param_2,param_3
                    ,local_res8);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar2 != uVar3);
  }
  plVar1 = *(longlong **)(param_1 + 0x230);
  uVar3 = (longlong)*(int *)(param_1 + 0x238) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x238) < plVar1) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      FUN_142cb6da0(*plVar1 + 0x1c0,param_1 + 0x2a8,*(undefined8 *)(param_1 + 0x118),param_2,param_3
                    ,local_res8);
      uVar4 = uVar4 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar4 != uVar3);
  }
  return;
}



// FUNCTION 142fe58f0 FUN_142fe58f0 body=240 status=ok
// SIG undefined FUN_142fe58f0(void)

void FUN_142fe58f0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    plVar5 = *(longlong **)(param_1 + 0x60);
    plVar1 = plVar5 + (longlong)*(int *)(param_1 + 0x68) * 9;
    for (; plVar5 != plVar1; plVar5 = plVar5 + 9) {
      iVar3 = (int)param_3[1] + -1;
      if (-1 < iVar3) {
        lVar4 = (longlong)iVar3 << 4;
        do {
          lVar2 = FUN_142c9feb0(*param_3 + lVar4);
          if (lVar2 == *plVar5) {
            FUN_142ca96a0(*param_3 + lVar4);
            TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (param_3,iVar3,1,1);
          }
          lVar4 = lVar4 + -0x10;
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
    }
  }
  uStack_30 = 0;
  local_38 = param_2;
  FUN_142c90ad0(param_1 + 0x60,param_3,param_2,&local_38,0,local_res8);
  return;
}



// FUNCTION 142fe59e0 FUN_142fe59e0 body=283 status=ok
// SIG undefined FUN_142fe59e0(void)

void FUN_142fe59e0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = *(undefined8 *)(param_1 + 0x118);
  uVar4 = 0;
  uStack_20 = 0;
  FUN_142c90ad0(*(longlong *)(param_1 + 0x208) + 0x98,param_2,local_28,&local_28,0,local_res8);
  puVar1 = *(undefined8 **)(param_1 + 0x220);
  uVar3 = (longlong)*(int *)(param_1 + 0x228) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x228) < puVar1) {
    uVar3 = uVar4;
  }
  uVar2 = uVar4;
  if (uVar3 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x288))
                ((longlong *)*puVar1,*(undefined8 *)(param_1 + 0x118),param_2);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 != uVar3);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x230);
  uVar3 = (longlong)*(int *)(param_1 + 0x238) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x238) < puVar1) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x288))
                ((longlong *)*puVar1,*(undefined8 *)(param_1 + 0x118),param_2);
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar4 != uVar3);
  }
  return;
}



// FUNCTION 142fe5b00 FUN_142fe5b00 body=75 status=ok
// SIG undefined FUN_142fe5b00(void)

void FUN_142fe5b00(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0;
  local_18 = param_2;
  FUN_142c90ad0(param_1 + 0x1b0,param_3,param_2,&local_18,0,local_res8);
  return;
}



// FUNCTION 142fe5b50 FUN_142fe5b50 body=141 status=ok
// SIG undefined FUN_142fe5b50(void)

void FUN_142fe5b50(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x2d8);
  uVar2 = (longlong)*(int *)(param_1 + 0x2e0) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x2e0) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x2d8))
                ((longlong *)*puVar1,*(undefined8 *)(param_1 + 0x118),param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 142fe5be0 FUN_142fe5be0 body=593 status=ok
// SIG undefined FUN_142fe5be0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fe5be0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_f8 [32];
  uint local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  plVar12 = *(longlong **)(param_1 + 0x2e8);
  uVar10 = *(undefined8 *)(param_2 + 0x168);
  uVar3 = *(undefined8 *)(param_1 + 0x118);
  plVar11 = plVar12 + *(int *)(param_1 + 0x2f0);
  local_a0 = plVar11;
  local_98 = param_2;
  local_90 = uVar10;
  if (plVar12 != plVar11) {
    do {
      lVar4 = *plVar12;
      if (*(longlong *)(lVar4 + 0x38) != 0) {
        lVar5 = *(longlong *)(lVar4 + 0x40);
        local_a8 = 0;
        if (lVar5 == 0) {
          FUN_1417846f0(param_2,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
        }
        uVar6 = AGFreezeCharacterCue::GetPrivateStaticClass();
        local_b8 = 0;
        local_c0 = 0;
        local_c8 = 0;
        local_d0 = 0;
        local_d8 = 0;
        plVar7 = (longlong *)FUN_1417985e0(uVar6,param_2,lVar5,0);
        FRotator::Quaternion(lVar4 + 0x5c,&local_88);
        local_78 = local_88;
        uStack_70 = uStack_80;
        local_68._12_4_ = 0;
        local_68._0_12_ = *(undefined1 (*) [12])(lVar4 + 0x50);
        local_58._4_4_ = DAT_1464aa788._4_4_;
        local_58._0_4_ = (undefined4)DAT_1464aa788;
        local_58._8_4_ = DAT_1464aa790;
        local_58._12_4_ = 0;
        local_d8 = local_d8 & 0xffffff00;
        FUN_142398770(plVar7,&local_78,0);
        FUN_142399e30(plVar7,uVar10,*(undefined8 *)(lVar4 + 0x48));
        *(byte *)((longlong)plVar7 + 0xba) = *(byte *)((longlong)plVar7 + 0xba) & 0xfd;
        FUN_14260f940(plVar7,*(undefined8 *)(lVar4 + 0x38));
        FUN_14234b150(plVar7);
        FUN_142608c70(plVar7);
        puVar9 = *(undefined8 **)(lVar4 + 0x68);
        puVar1 = puVar9 + (longlong)*(int *)(lVar4 + 0x70) * 3;
        for (; puVar9 != puVar1; puVar9 = puVar9 + 3) {
          FUN_142c48f90(*puVar9,uVar3,0);
          puVar8 = (undefined8 *)puVar9[1];
          puVar2 = puVar8 + *(int *)(puVar9 + 2);
          for (; puVar8 != puVar2; puVar8 = puVar8 + 1) {
            (**(code **)(*plVar7 + 0x958))(plVar7,*puVar8);
          }
          plVar11 = local_a0;
        }
        *(byte *)((longlong)plVar7 + 0xba) = *(byte *)((longlong)plVar7 + 0xba) | 2;
        FUN_1425fcab0(plVar7,0);
        uVar10 = local_90;
        param_2 = local_98;
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar11);
  }
  return;
}



// FUNCTION 142fe5e40 FUN_142fe5e40 body=458 status=ok
// SIG undefined FUN_142fe5e40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fe5e40(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong *local_110;
  longlong local_108 [24];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  FUN_142fe5be0(param_1,*(undefined8 *)(param_1 + 0x118));
  plVar8 = *(longlong **)(param_1 + 0x2b8);
  plVar5 = plVar8 + (longlong)*(int *)(param_1 + 0x2c0) * 4;
  if (plVar8 != plVar5) {
    plVar6 = plVar8 + 1;
    local_118 = 0;
    local_110 = plVar5;
    do {
      plVar7 = *(longlong **)(param_1 + 0x118);
      if (*plVar8 == 0) {
        uVar3 = FUN_1429bed90();
        lVar4 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar3);
      }
      else {
        local_48 = (longlong *)0x0;
        local_40 = 0;
        FUN_140725150(plVar7,local_108,0);
        plVar7 = local_108;
        if (local_48 != (longlong *)0x0) {
          plVar7 = local_48;
        }
        plVar1 = plVar7 + (int)local_40;
        while ((lVar4 = 0, plVar7 != plVar1 &&
               ((lVar4 = *plVar7, *(longlong *)(lVar4 + 0x18) != *plVar8 ||
                ((((int)*plVar6 != 0 || (plVar5 = local_110, *(int *)((longlong)plVar6 + 4) != 0))
                 && (cVar2 = UActorComponent::ComponentHasTag(lVar4,*plVar6), plVar5 = local_110,
                    cVar2 == '\0'))))))) {
          plVar7 = plVar7 + 1;
          plVar5 = local_110;
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
      if (lVar4 != 0) {
        FUN_142fe6010(param_1,lVar4,plVar8,1);
      }
      plVar8 = plVar8 + 4;
      plVar6 = plVar6 + 4;
    } while (plVar8 != plVar5);
  }
  return;
}



// FUNCTION 142fe6010 FUN_142fe6010 body=2098 status=ok
// SIG undefined FUN_142fe6010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fe6010(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  int *piVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined1 auStack_238 [32];
  undefined4 local_218;
  ulonglong local_210;
  undefined1 local_208;
  longlong *local_200;
  undefined1 local_1f8;
  char local_1e8;
  int local_1e4;
  longlong local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  longlong local_198;
  undefined4 local_190;
  undefined4 local_18c;
  longlong *local_188;
  longlong local_180;
  longlong local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [8];
  longlong *local_140;
  longlong local_138 [4];
  longlong *local_118;
  undefined8 local_110;
  longlong local_108 [4];
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8 [4];
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8 [4];
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  plVar14 = (longlong *)(param_1 + 800);
  *(undefined4 *)(param_1 + 0x328) = 0;
  local_1e8 = param_4;
  local_1c0 = plVar14;
  local_1b0 = param_2;
  local_1a0 = param_1;
  local_180 = param_3;
  if (*(int *)(param_1 + 0x32c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar14);
  }
  iVar6 = (**(code **)(*param_2 + 0x6c8))(param_2);
  local_1e4 = 0;
  if (0 < *(int *)(param_3 + 0x18)) {
    local_178 = (longlong)iVar6;
    local_1e0 = 0;
    do {
      lVar18 = local_1e0;
      iVar6 = local_1e4;
      uVar7 = 0;
      if (local_178 <= local_1e0) {
        return;
      }
      lVar20 = *(longlong *)(param_3 + 0x10);
      if ((param_4 != '\0') &&
         (plVar17 = *(longlong **)(lVar20 + local_1e0 * 0x18), plVar17 != (longlong *)0x0)) {
        if (*(longlong *)(param_1 + 0x210) != 0) {
          uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x210) + 0xb8);
        }
        uVar7 = (**(code **)(*plVar17 + 0x2d0))(plVar17,uVar7);
        (**(code **)(*param_2 + 0x568))(param_2,iVar6,uVar7);
      }
      if (0 < *(int *)(lVar20 + 0x10 + lVar18 * 0x18)) {
        lVar8 = (**(code **)(*param_2 + 0x560))(param_2,iVar6);
        if (lVar8 == 0) {
LAB_142fe615e:
          local_1c8 = 0;
          lVar8 = (**(code **)(*param_2 + 0x5a8))(param_2,iVar6,0,0);
        }
        else {
          lVar9 = FUN_1429ba110();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_142fe615e;
        }
        local_1a8 = *(longlong **)(lVar20 + 8 + lVar18 * 0x18);
        local_88 = (longlong *)0x0;
        local_80 = 0;
        local_b8 = (longlong *)0x0;
        local_188 = local_1a8 + *(int *)(lVar20 + 0x10 + lVar18 * 0x18);
        local_b0 = 0;
        local_e8 = (longlong *)0x0;
        local_e0 = 0;
        local_58 = (undefined1 *)0x0;
        local_50 = 0;
        local_118 = (longlong *)0x0;
        local_110 = 0;
        param_4 = local_1e8;
        if (local_1a8 != local_188) {
          do {
            lVar18 = *local_1a8;
            if ((*(int *)(lVar18 + 0x40) == 0) && (*(int *)(lVar18 + 0x44) == 0)) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if ((bVar2) || (cVar5 = UActorComponent::ComponentHasTag(param_2), cVar5 != '\0')) {
              plVar16 = *(longlong **)(lVar18 + 0x68);
              plVar17 = plVar16 + (longlong)*(int *)(lVar18 + 0x70) * 3;
              if (plVar16 != plVar17) {
                plVar13 = plVar16 + 1;
                do {
                  uVar3 = local_80;
                  plVar14 = local_a8;
                  if (local_88 != (longlong *)0x0) {
                    plVar14 = local_88;
                  }
                  if (plVar14 != plVar14 + (int)local_80) {
                    plVar12 = plVar14;
                    do {
                      if (*plVar12 == *plVar16) {
                        if ((int)((longlong)plVar12 - (longlong)plVar14 >> 3) != -1)
                        goto LAB_142fe62d7;
                        break;
                      }
                      plVar12 = plVar12 + 1;
                    } while (plVar12 != plVar14 + (int)local_80);
                  }
                  lVar20 = (longlong)(int)local_80;
                  iVar6 = (int)local_80 + 1;
                  local_80 = CONCAT44(local_80._4_4_,iVar6);
                  if (local_80._4_4_ < iVar6) {
                    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::
                    ResizeGrow(local_a8,uVar3 & 0xffffffff);
                  }
                  plVar14 = local_a8;
                  if (local_88 != (longlong *)0x0) {
                    plVar14 = local_88;
                  }
                  plVar14[lVar20] = *plVar16;
                  local_158 = (undefined4)*plVar13;
                  uStack_154 = *(undefined4 *)((longlong)plVar13 + 4);
                  uStack_150 = (undefined4)plVar13[1];
                  uStack_14c = *(undefined4 *)((longlong)plVar13 + 0xc);
                  FUN_1425a2be0(lVar8);
LAB_142fe62d7:
                  plVar16 = plVar16 + 3;
                  plVar13 = plVar13 + 3;
                  plVar14 = local_1c0;
                } while (plVar16 != plVar17);
              }
              plVar17 = *(longlong **)(lVar18 + 0x78);
              plVar16 = plVar17 + (longlong)*(int *)(lVar18 + 0x80) * 2;
              uVar3 = local_b0;
              for (; plVar17 != plVar16; plVar17 = plVar17 + 2) {
                local_b0._0_4_ = (int)uVar3;
                plVar13 = local_d8;
                if (local_b8 != (longlong *)0x0) {
                  plVar13 = local_b8;
                }
                if (plVar13 != plVar13 + (int)local_b0) {
                  plVar12 = plVar13;
                  do {
                    if (*plVar12 == *plVar17) {
                      if ((int)((longlong)plVar12 - (longlong)plVar13 >> 3) != -1)
                      goto LAB_142fe63ab;
                      break;
                    }
                    plVar12 = plVar12 + 1;
                  } while (plVar12 != plVar13 + (int)local_b0);
                }
                lVar20 = (longlong)(int)local_b0;
                local_b0._0_4_ = (int)local_b0 + 1;
                local_b0._4_4_ = (int)(uVar3 >> 0x20);
                if (local_b0._4_4_ < (int)local_b0) {
                  TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::
                  ResizeGrow(local_d8,uVar3 & 0xffffffff);
                }
                plVar13 = local_d8;
                if (local_b8 != (longlong *)0x0) {
                  plVar13 = local_b8;
                }
                plVar13[lVar20] = *plVar17;
                FUN_1425a2750(lVar8,*plVar17,(int)plVar17[1]);
                uVar3 = local_b0;
LAB_142fe63ab:
                local_b0 = uVar3;
                uVar3 = local_b0;
              }
              plVar17 = *(longlong **)(lVar18 + 0x88);
              plVar16 = plVar17 + (longlong)*(int *)(lVar18 + 0x90) * 2;
              uVar4 = local_e0;
              local_b0 = uVar3;
              for (; plVar17 != plVar16; plVar17 = plVar17 + 2) {
                local_e0._0_4_ = (int)uVar4;
                plVar13 = local_108;
                if (local_e8 != (longlong *)0x0) {
                  plVar13 = local_e8;
                }
                if (plVar13 != plVar13 + (int)local_e0) {
                  plVar12 = plVar13;
                  do {
                    if (*plVar12 == *plVar17) {
                      if ((int)((longlong)plVar12 - (longlong)plVar13 >> 3) != -1)
                      goto LAB_142fe6463;
                      break;
                    }
                    plVar12 = plVar12 + 1;
                  } while (plVar12 != plVar13 + (int)local_e0);
                }
                lVar20 = (longlong)(int)local_e0;
                local_e0._0_4_ = (int)local_e0 + 1;
                local_e0._4_4_ = (int)(uVar4 >> 0x20);
                if (local_e0._4_4_ < (int)local_e0) {
                  TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::
                  ResizeGrow(local_108,uVar4 & 0xffffffff);
                }
                plVar13 = local_108;
                if (local_e8 != (longlong *)0x0) {
                  plVar13 = local_e8;
                }
                plVar13[lVar20] = *plVar17;
                FUN_1425a28b0(lVar8);
                uVar4 = local_e0;
LAB_142fe6463:
                local_e0 = uVar4;
                uVar4 = local_e0;
              }
              plVar16 = *(longlong **)(lVar18 + 0xa8);
              plVar17 = plVar16 + (longlong)*(int *)(lVar18 + 0xb0) * 3;
              uVar3 = local_110;
              local_e0 = uVar4;
              for (; plVar16 != plVar17; plVar16 = plVar16 + 3) {
                local_110._0_4_ = (int)uVar3;
                plVar14 = local_138;
                if (local_118 != (longlong *)0x0) {
                  plVar14 = local_118;
                }
                if (plVar14 != plVar14 + (int)local_110) {
                  plVar13 = plVar14;
                  do {
                    if (*plVar13 == *plVar16) {
                      if ((int)((longlong)plVar13 - (longlong)plVar14 >> 3) != -1)
                      goto LAB_142fe653a;
                      break;
                    }
                    plVar13 = plVar13 + 1;
                  } while (plVar13 != plVar14 + (int)local_110);
                }
                lVar20 = (longlong)(int)local_110;
                local_110._0_4_ = (int)local_110 + 1;
                local_110._4_4_ = (int)(uVar3 >> 0x20);
                if (local_110._4_4_ < (int)local_110) {
                  TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::
                  ResizeGrow(local_138,uVar3 & 0xffffffff);
                }
                local_190 = 0x202ffff;
                plVar14 = local_138;
                if (local_118 != (longlong *)0x0) {
                  plVar14 = local_118;
                }
                local_18c = 0xffffffff;
                plVar14[lVar20] = *plVar16;
                local_198 = *plVar16;
                FUN_1425a2210(lVar8,&local_198,plVar16[1],(int)plVar16[2]);
                uVar3 = local_110;
LAB_142fe653a:
                local_110 = uVar3;
                plVar14 = local_1c0;
                uVar3 = local_110;
              }
              puVar19 = *(undefined8 **)(lVar18 + 0x98);
              puVar21 = puVar19 + (longlong)*(int *)(lVar18 + 0xa0) * 6;
              param_2 = local_1b0;
              local_110 = uVar3;
              if (puVar19 != puVar21) {
                local_1b8 = 0;
                do {
                  uVar3 = local_50;
                  lVar18 = (longlong)(int)local_50;
                  iVar6 = (int)local_50 + 1;
                  local_50 = CONCAT44(local_50._4_4_,iVar6);
                  if (local_50._4_4_ < iVar6) {
                    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::
                    ResizeGrow(local_78,uVar3 & 0xffffffff);
                  }
                  puVar15 = local_78;
                  if (local_58 != (undefined1 *)0x0) {
                    puVar15 = local_58;
                  }
                  *(undefined8 *)(puVar15 + lVar18 * 8) = *puVar19;
                  uVar7 = GetTransientPackage();
                  FUN_1417846f0(uVar7,
                                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                               );
                  uVar10 = FUN_143028bc0();
                  local_1f8 = 0;
                  local_200 = (longlong *)0x0;
                  local_208 = 0;
                  local_210 = 0;
                  local_218 = 0;
                  lVar18 = FUN_1417985e0(uVar10,uVar7,local_1b8,0);
                  local_1d8 = 0;
                  local_1d0 = 0x20;
                  *(undefined8 **)(lVar18 + 0x28) = puVar19;
                  *(longlong *)(lVar18 + 0x30) = lVar8;
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
                  FGenericPlatformString::Memcpy(local_1d8,L"RequestAsyncLoad SingleDelegate",0x40);
                  FUN_1422ca050();
                  local_170 = 0;
                  local_168 = 0;
                  puVar11 = (undefined8 *)operator_new(0x28,&local_170);
                  if (puVar11 != (undefined8 *)0x0) {
                    *puVar11 = &PTR_FUN_143f4d170;
                    FWeakObjectPtr::operator=(puVar11 + 1,lVar18);
                    puVar11[2] = FUN_143009020;
                    uVar7 = FDelegateHandle::GenerateNewID();
                    puVar11[4] = uVar7;
                    *puVar11 = &PTR_FUN_143f4d1b8;
                  }
                  lVar20 = *(longlong *)(lVar18 + 0x28);
                  lVar9 = FUN_1422ca050();
                  local_200 = &local_1d8;
                  local_208 = 0;
                  local_210 = local_210 & 0xffffffffffffff00;
                  local_218 = 0;
                  puVar11 = (undefined8 *)
                            FStreamableManager::RequestAsyncLoad
                                      (lVar9 + 0x178,local_148,lVar20 + 0x18);
                  if ((undefined8 *)(lVar18 + 0x38) != puVar11) {
                    *(undefined8 *)(lVar18 + 0x38) = *puVar11;
                    *puVar11 = 0;
                    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar18 + 0x40);
                  }
                  plVar17 = local_140;
                  if (local_140 != (longlong *)0x0) {
                    LOCK();
                    plVar16 = local_140 + 1;
                    lVar20 = *plVar16;
                    *(int *)plVar16 = (int)*plVar16 + -1;
                    UNLOCK();
                    if ((int)lVar20 == 1) {
                      (**(code **)*local_140)(local_140);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar17 + 0xc);
                      iVar6 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*plVar17 + 8))(plVar17);
                      }
                    }
                  }
                  if (local_1d8 != 0) {
                    FMemory::Free();
                  }
                  lVar20 = plVar14[1];
                  iVar6 = (int)lVar20 + 1;
                  *(int *)(plVar14 + 1) = iVar6;
                  if (*(int *)((longlong)plVar14 + 0xc) < iVar6) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14);
                  }
                  puVar19 = puVar19 + 6;
                  *(longlong *)(*plVar14 + (longlong)(int)lVar20 * 8) = lVar18;
                  param_2 = local_1b0;
                } while (puVar19 != puVar21);
              }
            }
            local_1a8 = local_1a8 + 1;
          } while (local_1a8 != local_188);
          if (local_118 != (longlong *)0x0) {
            FMemory::Free();
          }
          if (local_58 != (undefined1 *)0x0) {
            FMemory::Free();
          }
          if (local_e8 != (longlong *)0x0) {
            FMemory::Free();
          }
          if (local_b8 != (longlong *)0x0) {
            FMemory::Free();
          }
          param_1 = local_1a0;
          param_4 = local_1e8;
          iVar6 = local_1e4;
          if (local_88 != (longlong *)0x0) {
            FMemory::Free();
            param_1 = local_1a0;
            param_4 = local_1e8;
            iVar6 = local_1e4;
          }
        }
      }
      local_1e4 = iVar6 + 1;
      local_1e0 = local_1e0 + 1;
      param_3 = local_180;
    } while (local_1e4 < *(int *)(local_180 + 0x18));
  }
  return;
}



// FUNCTION 142fe6850 FUN_142fe6850 body=4065 status=ok
// SIG undefined FUN_142fe6850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe6850(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float fVar6;
  char cVar7;
  char cVar8;
  undefined1 (*pauVar9) [16];
  longlong lVar10;
  float *pfVar11;
  float *pfVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  int iVar16;
  undefined4 *puVar17;
  char cVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar27;
  float fVar28;
  undefined1 auVar26 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auStack_288 [32];
  ulonglong local_268;
  undefined1 local_260;
  undefined8 local_258;
  float local_250;
  char local_248;
  char local_247;
  char local_246;
  undefined1 local_240 [8];
  float fStack_238;
  float fStack_234;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_218;
  float local_210;
  undefined8 local_208;
  float local_200;
  longlong local_1f8;
  undefined8 uStack_1f0;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined1 local_1d0;
  undefined4 local_1c8;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  undefined4 local_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [48];
  undefined1 local_118 [48];
  ulonglong local_e8;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  if (param_2 == (longlong *)0x0) {
    return;
  }
  local_218 = *(ulonglong *)((longlong)param_1 + 0x204);
  local_210 = *(float *)((longlong)param_1 + 0x20c);
  puVar17 = (undefined4 *)&DAT_146532188;
  if (*(char *)(param_3 + 8) == '\0') {
    puVar17 = &DAT_146532184;
  }
  FUN_142382f60(local_218,param_2,puVar17,*param_3);
  cVar8 = *(char *)(param_3 + 1);
  cVar18 = (byte)(cVar8 - 1U) < 3;
  local_246 = (byte)(cVar8 - 2U) < 3;
  local_248 = cVar8;
  local_247 = cVar18;
  if (cVar8 == '\0') {
    fStack_1d8 = DAT_1468b5d94;
    fStack_1dc = DAT_1468b5d90;
    fStack_1d4 = DAT_1468b5d98;
    fStack_1e0 = DAT_1468b5d98;
    pauVar9 = (undefined1 (*) [16])&local_1e8;
    _local_1e8 = _fStack_1dc;
    local_1d0 = 0;
  }
  else {
    pauVar9 = (undefined1 (*) [16])FUN_142ffbf70(&local_1e8,param_1,param_3[4]);
  }
  _local_240 = *pauVar9;
  uVar19 = 0;
  local_230 = *(undefined8 *)pauVar9[1];
  local_228 = *(undefined4 *)(pauVar9[1] + 8);
  if ((bool)cVar18) {
    puVar20 = (ulonglong *)param_1[0x34];
    local_208 = puVar20 + (int)param_1[0x35];
    cVar8 = local_248;
    if (puVar20 != local_208) {
      do {
        uVar14 = *puVar20;
        if (uVar14 == 0) {
LAB_142fe6a03:
          uVar14 = uVar19;
        }
        else {
          lVar10 = FUN_1429bed90();
          if ((*(int *)(*(longlong *)(uVar14 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar14 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) goto LAB_142fe6a03;
        }
        if (uVar14 != 0) {
          FUN_142ffbf70(&local_1e8,uVar14,0);
          pfVar11 = (float *)(**(code **)(*param_1 + 0x420))
                                       (param_1,local_118,*(undefined8 *)(uVar14 + 0x198),2);
          pfVar12 = (float *)FUN_14238d0c0(uVar14,local_148);
          fVar6 = fRam0000000146b45438;
          fVar55 = fRam0000000146b45434;
          fVar39 = _DAT_146b45430;
          fVar29 = fRam0000000146b453d8;
          fVar45 = fRam0000000146b453d4;
          fVar43 = _DAT_146b453d0;
          auVar26 = *(undefined1 (*) [16])(pfVar11 + 8);
          fVar54 = auVar26._0_4_;
          fVar56 = auVar26._4_4_;
          fVar57 = auVar26._8_4_;
          fVar33 = *pfVar11;
          fVar38 = pfVar11[1];
          fVar41 = pfVar11[2];
          fVar25 = pfVar11[3];
          auVar21 = *(undefined1 (*) [16])(pfVar12 + 8);
          local_178 = auVar21._0_4_;
          fStack_174 = auVar21._4_4_;
          fStack_170 = auVar21._8_4_;
          fStack_16c = auVar21._12_4_;
          auVar21 = minps(auVar21,auVar26);
          auVar22._4_4_ = -(uint)(auVar21._4_4_ < fRam0000000146b45434);
          auVar22._0_4_ = -(uint)(auVar21._0_4_ < _DAT_146b45430);
          auVar22._8_4_ = -(uint)(auVar21._8_4_ < fRam0000000146b45438);
          auVar22._12_4_ = -(uint)(auVar21._12_4_ < fRam0000000146b4543c);
          iVar16 = movmskps((int)uVar14,auVar22);
          if (iVar16 == 0) {
            fVar54 = pfVar12[4] * fVar54;
            fVar56 = pfVar12[5] * fVar56;
            fVar57 = pfVar12[6] * fVar57;
            fVar43 = fVar57 * fVar38 - fVar56 * fVar41;
            fVar45 = fVar54 * fVar41 - fVar57 * fVar33;
            fVar29 = fVar56 * fVar33 - fVar54 * fVar38;
            fVar43 = fVar43 + fVar43;
            fVar45 = fVar45 + fVar45;
            fVar29 = fVar29 + fVar29;
            fStack_16c = (fVar29 * fVar38 - fVar45 * fVar41) + fVar25 * fVar43 + fVar54 + pfVar11[4]
            ;
            fStack_168 = (fVar43 * fVar41 - fVar29 * fVar33) + fVar25 * fVar45 + fVar56 + pfVar11[5]
            ;
            fStack_164 = (fVar45 * fVar33 - fVar43 * fVar38) + fVar25 * fVar29 + fVar57 + pfVar11[6]
            ;
          }
          else {
            fVar30 = fVar38 + fVar38;
            fVar32 = fVar41 + fVar41;
            fVar2 = pfVar11[4];
            fVar3 = pfVar11[5];
            fVar4 = pfVar11[6];
            fVar34 = fVar33 * (fVar33 + fVar33);
            fVar31 = (fVar33 + fVar33) * fVar25;
            fVar51 = (fVar32 * fVar25 + fVar30 * fVar33) * fVar54;
            fVar52 = (fVar31 + fVar32 * fVar38) * fVar56;
            fVar53 = (fVar30 * fVar25 + fVar32 * fVar33) * fVar57;
            fVar36 = fVar56 * (fVar30 * fVar33 - fVar32 * fVar25);
            fVar40 = fVar57 * (fVar32 * fVar38 - fVar31);
            fVar42 = fVar54 * (fVar32 * fVar33 - fVar30 * fVar25);
            fVar31 = (float)((uint)((_DAT_146b453d0 - (fVar41 * fVar32 + fVar38 * fVar30)) * fVar54)
                            & _DAT_146b453e0);
            fVar32 = (float)((uint)((fRam0000000146b453d4 - (fVar41 * fVar32 + fVar34)) * fVar56) &
                            uRam0000000146b453e4);
            fVar27 = (float)((uint)((fRam0000000146b453d8 - (fVar38 * fVar30 + fVar34)) * fVar57) &
                            uRam0000000146b453e8);
            fVar28 = (float)((uint)((fRam0000000146b453dc - (fVar34 + fVar34)) * auVar26._12_4_) &
                            uRam0000000146b453ec);
            fVar33 = *pfVar12;
            fVar38 = pfVar12[1];
            fVar41 = pfVar12[2];
            fVar25 = pfVar12[3];
            fVar34 = fVar38 + fVar38;
            fVar35 = fVar41 + fVar41;
            fVar37 = (fVar33 + fVar33) * fVar33;
            fVar30 = (fVar33 + fVar33) * fVar25;
            fVar48 = (fVar35 * fVar25 + fVar34 * fVar33) * local_178;
            fVar49 = (fVar30 + fVar35 * fVar38) * fStack_174;
            fVar50 = (fVar34 * fVar25 + fVar35 * fVar33) * fStack_170;
            fVar44 = fStack_174 * (fVar34 * fVar33 - fVar35 * fVar25);
            fVar46 = fStack_170 * (fVar35 * fVar38 - fVar30);
            fVar47 = local_178 * (fVar35 * fVar33 - fVar34 * fVar25);
            fVar25 = (float)((uint)((_DAT_146b453d0 - (fVar35 * fVar41 + fVar34 * fVar38)) *
                                   local_178) & _DAT_146b453e0);
            fVar30 = (float)((uint)((fRam0000000146b453d4 - (fVar35 * fVar41 + fVar37)) * fStack_174
                                   ) & uRam0000000146b453e4);
            fVar34 = (float)((uint)((fRam0000000146b453d8 - (fVar34 * fVar38 + fVar37)) * fStack_170
                                   ) & uRam0000000146b453e8);
            fVar35 = (float)((uint)((fRam0000000146b453dc - (fVar37 + fVar37)) * fStack_16c) &
                            uRam0000000146b453ec);
            fVar33 = pfVar12[4];
            fVar38 = pfVar12[5];
            fVar41 = pfVar12[6];
            local_1b8 = fVar48 * fVar36 + fVar25 * fVar31 + fVar47 * fVar53 + fVar35 * fVar2;
            fStack_1b4 = fVar48 * fVar32 + fVar25 * fVar51 + fVar47 * fVar40 + fVar35 * fVar3;
            fStack_1b0 = fVar48 * fVar52 + fVar25 * fVar42 + fVar47 * fVar27 + fVar35 * fVar4;
            fStack_1ac = fVar48 * fVar28 + fVar25 * fVar28 + fVar47 * fVar28 +
                         fVar35 * fRam0000000146b453dc;
            local_1a8 = fVar30 * fVar36 + fVar44 * fVar31 + fVar49 * fVar53 + fVar35 * fVar2;
            fStack_1a4 = fVar30 * fVar32 + fVar44 * fVar51 + fVar49 * fVar40 + fVar35 * fVar3;
            fStack_1a0 = fVar30 * fVar52 + fVar44 * fVar42 + fVar49 * fVar27 + fVar35 * fVar4;
            fStack_19c = fVar30 * fVar28 + fVar44 * fVar28 + fVar49 * fVar28 +
                         fVar35 * fRam0000000146b453dc;
            local_198 = fVar46 * fVar36 + fVar50 * fVar31 + fVar34 * fVar53 + fVar35 * fVar2;
            fStack_194 = fVar46 * fVar32 + fVar50 * fVar51 + fVar34 * fVar40 + fVar35 * fVar3;
            fStack_190 = fVar46 * fVar52 + fVar50 * fVar42 + fVar34 * fVar27 + fVar35 * fVar4;
            fStack_18c = fVar46 * fVar28 + fVar50 * fVar28 + fVar34 * fVar28 +
                         fVar35 * fRam0000000146b453dc;
            local_188 = fVar38 * fVar36 + fVar33 * fVar31 + fVar41 * fVar53 +
                        fRam0000000146b453dc * fVar2;
            fStack_184 = fVar38 * fVar32 + fVar33 * fVar51 + fVar41 * fVar40 +
                         fRam0000000146b453dc * fVar3;
            fStack_180 = fVar38 * fVar52 + fVar33 * fVar42 + fVar41 * fVar27 +
                         fRam0000000146b453dc * fVar4;
            fStack_17c = fVar38 * fVar28 + fVar33 * fVar28 + fVar41 * fVar28 +
                         fRam0000000146b453dc * fRam0000000146b453dc;
            FMatrix::RemoveScaling(&local_1b8);
            fVar54 = (float)(-(uint)(fVar39 <= local_178 * fVar54) & (_DAT_146b45420 ^ (uint)fVar43)
                            ^ _DAT_146b45420);
            fVar56 = (float)(-(uint)(fVar55 <= fStack_174 * fVar56) &
                             (uRam0000000146b45424 ^ (uint)fVar45) ^ uRam0000000146b45424);
            fVar57 = (float)(-(uint)(fVar6 <= fStack_170 * fVar57) &
                             (uRam0000000146b45428 ^ (uint)fVar29) ^ uRam0000000146b45428);
            local_1b8 = local_1b8 * fVar54;
            fStack_1b4 = fStack_1b4 * fVar54;
            fStack_1b0 = fStack_1b0 * fVar54;
            fStack_1a4 = fStack_1a4 * fVar56;
            fStack_1a0 = fStack_1a0 * fVar56;
            local_1a8 = local_1a8 * fVar56;
            fStack_194 = fStack_194 * fVar57;
            fStack_190 = fStack_190 * fVar57;
            local_198 = local_198 * fVar57;
            FQuat::FQuat(&local_158,&local_1b8);
            local_1c8 = 0x322bcc77;
            auVar21._0_4_ = local_158 * local_158 + fStack_150 * fStack_150;
            auVar21._4_4_ = fStack_154 * fStack_154 + fStack_14c * fStack_14c;
            auVar21._8_4_ = fStack_150 * fStack_150 + local_158 * local_158;
            auVar21._12_4_ = fStack_14c * fStack_14c + fStack_154 * fStack_154;
            fVar38 = auVar21._4_4_ + auVar21._0_4_;
            fVar41 = auVar21._8_4_ + auVar21._4_4_;
            fVar25 = auVar21._12_4_ + auVar21._8_4_;
            fVar43 = auVar21._0_4_ + auVar21._12_4_;
            auVar26._4_4_ = fVar41;
            auVar26._0_4_ = fVar38;
            auVar26._8_4_ = fVar25;
            auVar26._12_4_ = fVar43;
            auVar26 = rsqrtps(auVar21,auVar26);
            fVar54 = auVar26._0_4_;
            fVar56 = auVar26._4_4_;
            fVar57 = auVar26._8_4_;
            fVar33 = auVar26._12_4_;
            fVar54 = (_DAT_146b453c0 - fVar54 * fVar54 * fVar38 * _DAT_146b453c0) * fVar54 + fVar54;
            fVar56 = (fRam0000000146b453c4 - fVar56 * fVar56 * fVar41 * fRam0000000146b453c4) *
                     fVar56 + fVar56;
            fVar57 = (fRam0000000146b453c8 - fVar57 * fVar57 * fVar25 * fRam0000000146b453c8) *
                     fVar57 + fVar57;
            fVar33 = (fRam0000000146b453cc - fVar33 * fVar33 * fVar43 * fRam0000000146b453cc) *
                     fVar33 + fVar33;
            local_158 = (float)(((uint)(((_DAT_146b453c0 - fVar54 * fVar54 * fVar38 * _DAT_146b453c0
                                         ) * fVar54 + fVar54) * local_158) ^ _DAT_146b453b0) &
                                -(uint)(1e-08 <= fVar38) ^ _DAT_146b453b0);
            fStack_154 = (float)(((uint)(((fRam0000000146b453c4 -
                                          fVar56 * fVar56 * fVar41 * fRam0000000146b453c4) * fVar56
                                         + fVar56) * fStack_154) ^ uRam0000000146b453b4) &
                                 -(uint)(1e-08 <= fVar41) ^ uRam0000000146b453b4);
            fStack_150 = (float)(((uint)(((fRam0000000146b453c8 -
                                          fVar57 * fVar57 * fVar25 * fRam0000000146b453c8) * fVar57
                                         + fVar57) * fStack_150) ^ uRam0000000146b453b8) &
                                 -(uint)(1e-08 <= fVar25) ^ uRam0000000146b453b8);
            fStack_14c = (float)(((uint)(((fRam0000000146b453cc -
                                          fVar33 * fVar33 * fVar43 * fRam0000000146b453cc) * fVar33
                                         + fVar33) * fStack_14c) ^ uRam0000000146b453bc) &
                                 -(uint)(1e-08 <= fVar43) ^ uRam0000000146b453bc);
            fStack_16c = local_188;
            fStack_168 = fStack_184;
            fStack_164 = fStack_180;
          }
          local_160 = CONCAT31(local_160._1_3_,1);
          local_178 = fStack_16c + local_1e8;
          fStack_174 = fStack_168 + fStack_1e4;
          fStack_16c = fStack_16c + fStack_1dc;
          local_250 = fStack_164 + fStack_1e0;
          fStack_168 = fStack_168 + fStack_1d8;
          fStack_164 = fStack_164 + fStack_1d4;
          uStack_1f0 = CONCAT44(uStack_1f0._4_4_,fStack_164);
          fStack_170 = local_250;
          if ((char)local_228 == '\0') {
            local_240._4_4_ = fStack_174;
            local_240._0_4_ = local_178;
            fStack_238 = local_250;
            fStack_234 = fStack_16c;
            local_228 = local_160;
            local_230 = CONCAT44(fStack_164,fStack_168);
          }
          else {
            if (local_178 < (float)local_240._0_4_) {
              local_240._0_4_ = local_178;
            }
            if (fStack_174 < (float)local_240._4_4_) {
              local_240._4_4_ = fStack_174;
            }
            if (local_250 < fStack_238) {
              fStack_238 = local_250;
            }
            if (fStack_234 < fStack_16c) {
              fStack_234 = fStack_16c;
            }
            if ((float)local_230 < fStack_168) {
              local_230 = CONCAT44(local_230._4_4_,fStack_168);
            }
            if (local_230._4_4_ < fStack_164) {
              local_230 = CONCAT44(fStack_164,(float)local_230);
            }
          }
        }
        puVar20 = puVar20 + 1;
        cVar8 = local_248;
        cVar18 = local_247;
      } while (puVar20 != local_208);
    }
  }
  auVar26 = _local_240;
  if (*(char *)(param_3 + 8) != '\0') {
    local_240._4_4_ = (float)local_240._4_4_ * local_218._4_4_;
    local_240._0_4_ = (float)local_240._0_4_ * (float)local_218;
    fStack_234 = auVar26._12_4_;
    fStack_238 = fStack_238 * local_210;
    fStack_234 = fStack_234 * (float)local_218;
    local_230 = CONCAT44(local_230._4_4_ * local_210,(float)local_230 * local_218._4_4_);
  }
  fVar54 = *(float *)(param_3 + 5);
  fVar56 = (float)(int)(fVar54 * 0.0027777778) * 360.0;
  if (ABS(fVar54) < ABS(fVar56)) {
    fVar56 = fVar54;
  }
  fVar54 = fVar54 - fVar56;
  if (fVar54 < 0.0) {
    fVar54 = fVar54 + 360.0;
  }
  if (fVar54 == 0.0) {
    fVar54 = *(float *)((longlong)param_3 + 0x2c);
    fVar56 = (float)(int)(fVar54 * 0.0027777778) * 360.0;
    if (ABS(fVar54) < ABS(fVar56)) {
      fVar56 = fVar54;
    }
    fVar54 = fVar54 - fVar56;
    if (fVar54 < 0.0) {
      fVar54 = fVar54 + 360.0;
    }
    if (fVar54 == 0.0) {
      fVar54 = *(float *)(param_3 + 6);
      fVar56 = (float)(int)(fVar54 * 0.0027777778) * 360.0;
      if (ABS(fVar54) < ABS(fVar56)) {
        fVar56 = fVar54;
      }
      fVar54 = fVar54 - fVar56;
      if (fVar54 < 0.0) {
        fVar54 = fVar54 + 360.0;
      }
      if (fVar54 == 0.0) {
        bVar5 = true;
        goto LAB_142fe70d5;
      }
    }
  }
  bVar5 = false;
LAB_142fe70d5:
  if (!bVar5) {
    uVar13 = FRotationMatrix::FRotationMatrix(&local_1b8,param_3 + 5);
    pauVar9 = (undefined1 (*) [16])FBox::TransformBy(local_240,&local_1e8,uVar13);
    _local_240 = *pauVar9;
    local_230 = *(undefined8 *)pauVar9[1];
    local_228 = *(undefined4 *)(pauVar9[1] + 8);
  }
  cVar7 = *(char *)(param_3 + 8);
  fVar56 = (fStack_234 + (float)local_240._0_4_) * 0.5;
  fVar57 = ((float)local_230 + (float)local_240._4_4_) * 0.5;
  fVar54 = (local_230._4_4_ + fStack_238) * 0.5;
  if (cVar7 == '\0') {
    lVar10 = (**(code **)(*param_2 + 0x420))(param_2,local_148,*param_3,0);
    cVar7 = *(char *)(param_3 + 8);
    local_258 = *(longlong *)(lVar10 + 0x20);
    local_250 = *(float *)(lVar10 + 0x28);
  }
  else {
    local_258 = DAT_1464aa788;
    local_250 = DAT_1464aa790;
  }
  fVar33 = local_250;
  fVar43 = (float)local_258;
  local_208 = (ulonglong *)local_258;
  fVar38 = fVar43;
  fVar41 = local_258._4_4_;
  fVar25 = local_250;
  if (cVar7 != '\0') {
    fVar38 = fVar43 * (float)local_218;
    fVar41 = local_258._4_4_ * local_218._4_4_;
    fVar25 = local_250 * local_210;
    local_208 = (ulonglong *)CONCAT44(fVar41,fVar38);
  }
  lVar10 = local_258;
  local_200 = fVar25;
  if (local_246 != '\0') {
    cVar7 = FUN_142fd9fc0(param_2);
    uVar14 = uVar19;
    if (cVar7 != '\0') {
      uVar14 = FUN_1423b0a60(param_2,*param_3);
    }
    fVar29 = (fStack_234 - (float)local_240._0_4_) * 0.5;
    fVar39 = ((float)local_230 - (float)local_240._4_4_) * 0.5;
    fVar45 = (local_230._4_4_ - fStack_238) * 0.5;
    fVar43 = fVar29 * fVar43;
    fVar55 = fVar39 * local_258._4_4_;
    fVar33 = fVar33 * fVar45;
    if (*(char *)(param_3 + 3) == '\0') {
      if (uVar14 == 0) {
        plVar15 = (longlong *)&DAT_1468b5d90;
      }
      else {
        plVar15 = (longlong *)(uVar14 + 0x60);
      }
    }
    else {
      plVar15 = (longlong *)((longlong)param_3 + 0xc);
    }
    lVar10 = *plVar15;
    local_250 = *(float *)(plVar15 + 1);
    if (((fVar43 == 0.0) && (fVar55 == 0.0)) && (fVar33 == 0.0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (!bVar5) {
      local_258._0_4_ = (float)lVar10;
      local_258._4_4_ = (float)((ulonglong)lVar10 >> 0x20);
      if ((((float)local_258 == 0.0) && (local_258._4_4_ == 0.0)) && (local_250 == 0.0)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (!bVar5) {
        if ((*(char *)((longlong)param_3 + 0x41) != '\0') && ((float)local_258 < fVar43)) {
          bVar5 = true;
        }
        if ((*(char *)((longlong)param_3 + 0x42) != '\0') && (local_258._4_4_ < fVar55)) {
          bVar5 = true;
        }
        if ((((*(char *)((longlong)param_3 + 0x43) != '\0') && (local_250 < fVar33)) || (bVar5)) ||
           (cVar8 == '\x03')) {
          if (*(char *)((longlong)param_3 + 0x41) == '\0') {
            local_258._0_4_ = 3.4028235e+38;
          }
          else {
            local_258._0_4_ = (float)local_258 / fVar29;
          }
          if (*(char *)((longlong)param_3 + 0x42) == '\0') {
            local_200 = 3.4028235e+38;
          }
          else {
            local_200 = local_258._4_4_ / fVar39;
          }
          if (*(char *)((longlong)param_3 + 0x43) == '\0') {
            fVar45 = 3.4028235e+38;
          }
          else {
            fVar45 = local_250 / fVar45;
          }
          if ((float)local_258 <= local_200) {
            local_200 = (float)local_258;
          }
          if (fVar45 <= local_200) {
            local_200 = fVar45;
          }
          local_208 = (ulonglong *)CONCAT44(local_200,local_200);
          fVar56 = fVar56 * (local_200 / fVar38);
          fVar57 = fVar57 * (local_200 / fVar41);
          fVar54 = fVar54 * (local_200 / fVar25);
        }
      }
    }
  }
  local_258 = lVar10;
  if (cVar18 != '\0') {
    if (*(char *)((longlong)param_3 + 0x41) == '\0') {
      fVar56 = 0.0;
    }
    if (*(char *)((longlong)param_3 + 0x42) == '\0') {
      fVar57 = 0.0;
    }
    if (*(char *)((longlong)param_3 + 0x43) == '\0') {
      fVar54 = 0.0;
    }
    pfVar11 = (float *)(param_1 + 0x50);
    uStack_1f0 = CONCAT44(uStack_1f0._4_4_,fVar54) ^ 0x80000000;
    local_218 = CONCAT44(fVar57,fVar56) ^ 0x8000000080000000;
    local_210 = (float)uStack_1f0;
    if (((*(float *)(param_1 + 0x3f) == *pfVar11) &&
        (*(float *)((longlong)param_1 + 0x1fc) == *(float *)((longlong)param_1 + 0x284))) &&
       (*(float *)(param_1 + 0x40) == *(float *)(param_1 + 0x51))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      local_258 = *(longlong *)*(undefined1 (*) [12])(param_1 + 0x3f);
      auVar23._12_4_ = 0;
      auVar23._0_12_ = *(undefined1 (*) [12])(param_1 + 0x3f);
      fVar54 = (float)DAT_146b453a0;
      fVar56 = DAT_146b453a0._4_4_;
      fVar57 = DAT_146b453a0._8_4_;
      auVar26 = divps(auVar23,_DAT_146b453a0);
      fVar33 = (float)local_258 - (float)(int)auVar26._0_4_ * fVar54;
      fVar38 = (float)((ulonglong)local_258 >> 0x20) - (float)(int)auVar26._4_4_ * fVar56;
      fVar41 = *(float *)(param_1 + 0x40) - (float)(int)auVar26._8_4_ * fVar57;
      fVar33 = (float)(((uint)(fVar33 + fVar54) ^ (uint)fVar33) & -(uint)(0.0 <= fVar33) ^
                      (uint)(fVar33 + fVar54));
      fVar38 = (float)(((uint)(fVar38 + fVar56) ^ (uint)fVar38) & -(uint)(0.0 <= fVar38) ^
                      (uint)(fVar38 + fVar56));
      local_250 = (float)(((uint)(fVar41 + fVar57) ^ (uint)fVar41) & -(uint)(0.0 <= fVar41) ^
                         (uint)(fVar41 + fVar57));
      local_250 = (float)(((uint)(local_250 - fVar57) ^ (uint)local_250) &
                          -(uint)(fRam0000000146b45398 < local_250) ^ (uint)local_250);
      *(ulonglong *)pfVar11 =
           CONCAT44(((uint)(fVar38 - fVar56) ^ (uint)fVar38) &
                    -(uint)(fRam0000000146b45394 < fVar38) ^ (uint)fVar38,
                    ((uint)(fVar33 - fVar54) ^ (uint)fVar33) & -(uint)(_DAT_146b45390 < fVar33) ^
                    (uint)fVar33);
      *(float *)(param_1 + 0x51) = local_250;
      plVar15 = (longlong *)FRotator::Quaternion(pfVar11,&local_158);
      lVar10 = plVar15[1];
      param_1[0x4e] = *plVar15;
      param_1[0x4f] = lVar10;
    }
    local_1f8 = param_1[0x4e];
    uStack_1f0 = param_1[0x4f];
    local_260 = 1;
    local_268 = 0;
    FUN_142397be0(param_1,&local_218,&local_1f8,0);
  }
  if (((DAT_1468b5d90 == *(float *)((longlong)param_3 + 0x34)) &&
      (DAT_1468b5d94 == *(float *)(param_3 + 7))) &&
     (DAT_1468b5d98 == *(float *)((longlong)param_3 + 0x3c))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (bVar5) {
    local_258 = *(longlong *)((longlong)param_3 + 0x34);
    pfVar11 = (float *)(param_1 + 0x50);
    local_250 = *(float *)((longlong)param_3 + 0x3c);
    local_210 = local_250 + *(float *)((longlong)param_1 + 500);
    uStack_1f0 = CONCAT44(uStack_1f0._4_4_,local_210);
    local_218 = CONCAT44((float)((ulonglong)local_258 >> 0x20) + *(float *)(param_1 + 0x3e),
                         (float)local_258 + *(float *)((longlong)param_1 + 0x1ec));
    if (((*(float *)(param_1 + 0x3f) == *pfVar11) &&
        (*(float *)((longlong)param_1 + 0x1fc) == *(float *)((longlong)param_1 + 0x284))) &&
       (*(float *)(param_1 + 0x40) == *(float *)(param_1 + 0x51))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      local_258 = *(longlong *)*(undefined1 (*) [12])(param_1 + 0x3f);
      auVar24._12_4_ = 0;
      auVar24._0_12_ = *(undefined1 (*) [12])(param_1 + 0x3f);
      fVar54 = (float)DAT_146b453a0;
      fVar56 = DAT_146b453a0._4_4_;
      fVar57 = DAT_146b453a0._8_4_;
      auVar26 = divps(auVar24,_DAT_146b453a0);
      fVar33 = (float)local_258 - (float)(int)auVar26._0_4_ * fVar54;
      fVar38 = (float)((ulonglong)local_258 >> 0x20) - (float)(int)auVar26._4_4_ * fVar56;
      fVar41 = *(float *)(param_1 + 0x40) - (float)(int)auVar26._8_4_ * fVar57;
      fVar33 = (float)(((uint)(fVar33 + fVar54) ^ (uint)fVar33) & -(uint)(0.0 <= fVar33) ^
                      (uint)(fVar33 + fVar54));
      fVar38 = (float)(((uint)(fVar38 + fVar56) ^ (uint)fVar38) & -(uint)(0.0 <= fVar38) ^
                      (uint)(fVar38 + fVar56));
      local_250 = (float)(((uint)(fVar41 + fVar57) ^ (uint)fVar41) & -(uint)(0.0 <= fVar41) ^
                         (uint)(fVar41 + fVar57));
      local_250 = (float)(((uint)(local_250 - fVar57) ^ (uint)local_250) &
                          -(uint)(fRam0000000146b45398 < local_250) ^ (uint)local_250);
      *(ulonglong *)pfVar11 =
           CONCAT44(((uint)(fVar38 - fVar56) ^ (uint)fVar38) &
                    -(uint)(fRam0000000146b45394 < fVar38) ^ (uint)fVar38,
                    ((uint)(fVar33 - fVar54) ^ (uint)fVar33) & -(uint)(_DAT_146b45390 < fVar33) ^
                    (uint)fVar33);
      *(float *)(param_1 + 0x51) = local_250;
      plVar15 = (longlong *)FRotator::Quaternion(pfVar11,&local_158);
      lVar10 = plVar15[1];
      param_1[0x4e] = *plVar15;
      param_1[0x4f] = lVar10;
    }
    local_1f8 = param_1[0x4e];
    uStack_1f0 = param_1[0x4f];
    local_260 = 0;
    local_268 = 0;
    FUN_142397be0(param_1,&local_218,&local_1f8,0);
  }
  fVar54 = local_200;
  lVar10 = (longlong)local_208;
  local_258 = (longlong)local_208;
  local_250 = local_200;
  (**(code **)(*param_1 + 0x3f8))(param_1,&local_258);
  local_258 = param_3[5];
  local_250 = *(float *)(param_3 + 6);
  local_268 = local_268 & 0xffffffffffffff00;
  FUN_142398470(param_1,&local_258,0,0);
  plVar15 = (longlong *)param_1[0x34];
  uVar14 = (longlong)(int)param_1[0x35] & 0x1fffffffffffffff;
  if (plVar15 + (int)param_1[0x35] < plVar15) {
    uVar14 = uVar19;
  }
  if (uVar14 != 0) {
    do {
      plVar1 = (longlong *)*plVar15;
      if (((plVar1 != (longlong *)0x0) && (cVar8 = FUN_142fd9f70(plVar1), cVar8 != '\0')) &&
         ((*(byte *)((longlong)plVar1 + 0x24c) & 0x10) != 0)) {
        local_258 = lVar10;
        local_250 = fVar54;
        (**(code **)(*plVar1 + 0x3f8))(plVar1,&local_258);
      }
      plVar15 = plVar15 + 1;
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar14);
  }
  return;
}



// FUNCTION 142fe7840 FUN_142fe7840 body=339 status=ok
// SIG undefined FUN_142fe7840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142fe7840(longlong *param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (((char)param_1[0x25] == '\x03') && (param_2 != 0)) {
    bVar1 = *(byte *)((longlong)param_1 + 0x614);
    *(byte *)((longlong)param_1 + 0x614) = bVar1 & 0xfe;
    (**(code **)(*param_1 + 0x820))();
    local_68 = param_1[0xac];
    if (local_68 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(local_68 + 0x208);
    }
    local_60 = DAT_1468b5da0;
    local_58 = DAT_1468b5da8;
    local_54 = _DAT_1468b5d90;
    local_70 = 0;
    local_4c = DAT_1468b5d98;
    local_48 = 0x1000100;
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x1b8) != '\0')) {
      local_60 = *(undefined8 *)(lVar2 + 0x1bc);
      local_58 = *(undefined4 *)(lVar2 + 0x1c4);
    }
    lVar2 = param_1[0x91];
    if (lVar2 == 0) {
      lVar2 = param_1[0x90];
    }
    local_88 = param_3;
    local_80 = param_4;
    FUN_142fe6850(lVar2,param_2,&local_88);
    if (((bVar1 & 1) != 0) &&
       (*(byte *)((longlong)param_1 + 0x614) = *(byte *)((longlong)param_1 + 0x614) | 1,
       (*(byte *)(param_1 + 0xb5) & 1) == 0)) {
      FUN_14223e980(param_1,2);
    }
  }
  return;
}



// FUNCTION 142fe79a0 FUN_142fe79a0 body=177 status=ok
// SIG undefined FUN_142fe79a0(void)

void FUN_142fe79a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1[0x95] != 0) {
    lVar2 = FUN_1428dfc70();
    for (lVar1 = param_1[0x95]; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        if ((param_1[0x95] != 0) && ((char)param_1[0x25] == '\x03')) {
          FUN_143018530(param_1);
        }
        break;
      }
    }
  }
  *(byte *)(param_1 + 0xb5) = *(byte *)(param_1 + 0xb5) | 4;
  FUN_142223710(param_1);
  if ((((char)param_1[0x25] != '\x03') && (param_1[0xad] == 0)) &&
     (((char)param_1[0xaf] != '\0' || (0 < (int)param_1[0xb1])))) {
    (**(code **)(*param_1 + 0x790))(param_1);
  }
  FUN_142fea280(param_1);
  if ((*(byte *)((longlong)param_1 + 0x4a4) & 0x20) != 0) {
    FUN_142ff0a90(param_1);
    return;
  }
  return;
}



// FUNCTION 142fe7a60 FUN_142fe7a60 body=153 status=ok
// SIG undefined FUN_142fe7a60(void)

void FUN_142fe7a60(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1[0x95] != 0) {
    lVar2 = FUN_1428dfc70();
    for (lVar1 = param_1[0x95]; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        if ((param_1[0x95] != 0) && ((char)param_1[0x25] == '\x03')) {
          FUN_143018530(param_1);
        }
        break;
      }
    }
  }
  *(byte *)(param_1 + 0xb5) = *(byte *)(param_1 + 0xb5) | 4;
  FUN_142223710(param_1);
  if ((((char)param_1[0x25] != '\x03') && (param_1[0xad] == 0)) &&
     (((char)param_1[0xaf] != '\0' || (0 < (int)param_1[0xb1])))) {
                    /* WARNING: Could not recover jumptable at 0x000142fe7aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x790))(param_1);
    return;
  }
  return;
}



// FUNCTION 142fe7b10 FUN_142fe7b10 body=1124 status=ok
// SIG undefined FUN_142fe7b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_142fe7b10(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  float fVar12;
  undefined1 auStack_68 [32];
  ulonglong local_48 [4];
  
  local_48[3] = DAT_1468387a8 ^ (ulonglong)auStack_68;
  FUN_142cb7380();
  if ((param_1[0x52] != 0) && (0 < (int)param_1[0x54])) {
    plVar7 = (longlong *)param_1[0x23];
    uVar3 = FUN_142a07000();
    lVar4 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar3);
    if (lVar4 != 0) {
      FUN_1424a3300(param_1[0x52],lVar4,param_1 + 0x53);
    }
  }
  (**(code **)(*param_1 + 0x4c8))(param_1);
  uVar10 = 0;
  puVar6 = (undefined8 *)param_1[0x50];
  uVar5 = (longlong)(int)param_1[0x51] & 0x1fffffffffffffff;
  if (puVar6 + (int)param_1[0x51] < puVar6) {
    uVar5 = uVar10;
  }
  uVar9 = uVar10;
  if (uVar5 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar6 + 0x2a8))((longlong *)*puVar6,param_1[0x23],param_1);
      uVar9 = uVar9 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar9 != uVar5);
  }
  iVar2 = FUN_14233f450(param_1);
  if (iVar2 == 3) {
    (**(code **)(*param_1 + 0x4a0))();
    (**(code **)(*param_1 + 0x4a8))(param_1,param_1 + 0x66);
    if (param_1[0x41] != 0) {
      *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)(param_1[0x41] + 0x224);
      uVar5 = uVar10;
      uVar9 = uVar10;
      if (0 < (int)param_1[0x45]) {
        do {
          fVar12 = (float)FUN_142c98860(*(longlong *)(uVar5 + param_1[0x44]) + 0x108,param_1[0x23]);
          uVar8 = (int)uVar9 + 1;
          *(float *)(param_1 + 0x3f) = fVar12 * *(float *)(param_1 + 0x3f);
          uVar5 = uVar5 + 8;
          uVar9 = (ulonglong)uVar8;
        } while ((int)uVar8 < (int)param_1[0x45]);
      }
      uVar5 = uVar10;
      uVar9 = uVar10;
      if (0 < (int)param_1[0x47]) {
        do {
          fVar12 = (float)FUN_142c98860(*(longlong *)(param_1[0x46] + uVar9) + 0x108,param_1[0x23]);
          uVar8 = (int)uVar5 + 1;
          *(float *)(param_1 + 0x3f) = fVar12 * *(float *)(param_1 + 0x3f);
          uVar5 = (ulonglong)uVar8;
          uVar9 = uVar9 + 8;
        } while ((int)uVar8 < (int)param_1[0x47]);
      }
      uVar5 = uVar10;
      if (param_1[0x42] != 0) {
        uVar5 = *(ulonglong *)(param_1[0x42] + 0xb8);
      }
      if (uVar5 != 0) {
        fVar12 = (float)FUN_142c98860(uVar5 + 0xe8,param_1[0x23]);
        *(float *)(param_1 + 0x3f) = fVar12 * *(float *)(param_1 + 0x3f);
      }
      fVar12 = (float)FUN_142c98860(param_1[0x41] + 0x1e8,param_1[0x23]);
      *(int *)((longlong)param_1 + 0x1fc) = (int)fVar12;
    }
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar4 = *(longlong *)(DAT_146b33f38 + 0x58);
    if (lVar4 != 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      plVar7 = (longlong *)param_1[0x44];
      uVar5 = (longlong)(int)param_1[0x45] & 0x1fffffffffffffff;
      if (plVar7 + (int)param_1[0x45] < plVar7) {
        uVar5 = uVar10;
      }
      uVar9 = uVar10;
      if (uVar5 != 0) {
        do {
          fVar12 = (float)FUN_142c98860(*plVar7 + 0x140,param_1[0x23]);
          plVar7 = plVar7 + 1;
          uVar9 = uVar9 + 1;
          *(float *)(param_1 + 0x40) = fVar12 + *(float *)(param_1 + 0x40);
        } while (uVar9 != uVar5);
      }
      plVar7 = (longlong *)param_1[0x46];
      uVar5 = (longlong)(int)param_1[0x47] & 0x1fffffffffffffff;
      if (plVar7 + (int)param_1[0x47] < plVar7) {
        uVar5 = uVar10;
      }
      uVar9 = uVar10;
      if (uVar5 != 0) {
        do {
          fVar12 = (float)FUN_142c98860(*plVar7 + 0x140,param_1[0x23]);
          plVar7 = plVar7 + 1;
          uVar9 = uVar9 + 1;
          *(float *)(param_1 + 0x40) = fVar12 + *(float *)(param_1 + 0x40);
        } while (uVar9 != uVar5);
      }
      fVar12 = (float)FUN_142c98860(lVar4 + 0x98,param_1[0x23]);
      *(int *)((longlong)param_1 + 0x204) = (int)fVar12;
    }
  }
  else {
    (**(code **)(*param_1 + 0x4b0))(param_1,param_1 + 0x66);
  }
  if (param_1[0x41] != 0) {
    if ((*(byte *)(param_1[0x41] + 0x38) & 1) == 0) {
      lVar4 = param_1[0x42];
      plVar7 = param_1 + 0x3d;
      *(undefined4 *)(param_1 + 0x3e) = 0;
      if (*(int *)((longlong)param_1 + 500) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar7,0);
      }
      plVar1 = *(longlong **)(param_1[0x41] + 0x88);
      if (plVar1 == (longlong *)0x0) {
        local_48[2] = 0;
        local_48[0] = 0;
        local_48[1] = 0;
        FUN_142ff04c0(param_1,local_48,local_48 + 1,local_48 + 2);
        puVar11 = local_48;
        if (*(int *)(lVar4 + 0x100) == 0) {
          local_48[0] = uVar10;
        }
        uVar5 = 3;
        if (local_48 + 3 < local_48) {
          uVar5 = uVar10;
        }
        do {
          uVar9 = *puVar11;
          if (uVar9 != 0) {
            iVar2 = (int)param_1[0x3e];
            *(int *)(param_1 + 0x3e) = iVar2 + 1;
            if (*(int *)((longlong)param_1 + 500) < iVar2 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7,iVar2);
            }
            *(ulonglong *)(*plVar7 + (longlong)iVar2 * 8) = uVar9;
          }
          puVar11 = puVar11 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar5);
      }
      else {
        (**(code **)(*plVar1 + 0x280))(plVar1,param_1,plVar7);
      }
    }
    FUN_143002580(param_1);
  }
  return;
}



// FUNCTION 142fe7f80 FUN_142fe7f80 body=619 status=ok
// SIG undefined FUN_142fe7f80(void)

void FUN_142fe7f80(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  undefined4 uStack_2c;
  
  FUN_142330a70();
  lVar6 = *(longlong *)(param_1 + 0x118);
  uVar8 = 0;
  if (lVar6 != 0) {
    plVar1 = (longlong *)(lVar6 + 0x3c8);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = 0x43000e80;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 1;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_2c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
      iVar2 = *(int *)(lVar6 + 0x3d0);
      *(int *)(lVar6 + 0x3d0) = iVar2 + 1;
      if (*(int *)(lVar6 + 0x3d4) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar5 = plVar3;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
    plVar1 = (longlong *)(lVar6 + 0x3b0);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = 0x43000cf0;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 1;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_2c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
      iVar2 = *(int *)(lVar6 + 0x3b8);
      *(int *)(lVar6 + 0x3b8) = iVar2 + 1;
      if (*(int *)(lVar6 + 0x3bc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar5 = plVar3;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
  }
  iVar2 = FUN_14233f450(param_1);
  if (((iVar2 == 3) && (*(longlong *)(param_1 + 0x1a8) != 0)) && (*(int *)(param_1 + 0x1e8) == 0)) {
    plVar1 = (longlong *)(param_1 + 0x1e0);
    iVar2 = *(int *)(param_1 + 0x1e8);
    if (iVar2 != 0) {
      lVar6 = *plVar1 + 0x48;
      do {
        TArray<FMovieSceneSegment,FDefaultAllocator>::~TArray<FMovieSceneSegment,FDefaultAllocator>
                  (lVar6);
        lVar6 = lVar6 + 0x58;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    if (*(int *)(param_1 + 0x1ec) != 0) {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(plVar1,0);
    }
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      FUN_142ff8b70(param_1);
      lVar6 = *(longlong *)(param_1 + 0x1a8);
      FUN_142fd77d0(plVar1,lVar6 + 0x30);
      plVar3 = *(longlong **)(lVar6 + 0x40);
      uVar7 = (longlong)*(int *)(lVar6 + 0x48) & 0x1fffffffffffffff;
      if (plVar3 + *(int *)(lVar6 + 0x48) < plVar3) {
        uVar7 = uVar8;
      }
      if (uVar7 != 0) {
        do {
          if (*plVar3 != 0) {
            FUN_142fd77d0(plVar1,*plVar3 + 0x30);
          }
          plVar3 = plVar3 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar7);
      }
    }
  }
  return;
}



// FUNCTION 142fe81f0 FUN_142fe81f0 body=424 status=ok
// SIG undefined FUN_142fe81f0(void)

void FUN_142fe81f0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  uVar8 = 0;
  lVar3 = *(longlong *)(param_1 + 0x208);
  plVar4 = *(longlong **)(lVar3 + 0xb8);
  uVar6 = (longlong)*(int *)(lVar3 + 0xc0) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(lVar3 + 0xc0) < plVar4) {
    uVar6 = uVar8;
  }
  uVar7 = uVar8;
  if (uVar6 != 0) {
    do {
      plVar9 = (longlong *)*plVar4;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x2a0))(plVar9,param_1);
      }
      plVar4 = plVar4 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar6);
    lVar3 = *(longlong *)(param_1 + 0x208);
  }
  plVar4 = *(longlong **)(lVar3 + 200);
  uVar6 = (longlong)*(int *)(lVar3 + 0xd0) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(lVar3 + 0xd0) < plVar4) {
    uVar6 = uVar8;
  }
  uVar7 = uVar8;
  if (uVar6 != 0) {
    do {
      plVar9 = (longlong *)*plVar4;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x2a0))(plVar9,param_1);
      }
      plVar4 = plVar4 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar6);
  }
  local_38 = 0;
  local_28 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = param_1;
    *puVar2 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_142fe9a00;
  FUN_142ff3570(param_1,local_68);
  plVar9 = *(longlong **)(param_1 + 0x230);
  plVar4 = plVar9 + *(int *)(param_1 + 0x238);
  for (; plVar9 != plVar4; plVar9 = plVar9 + 1) {
    plVar5 = *(longlong **)(*plVar9 + 0x208);
    uVar7 = (ulonglong)*(int *)(*plVar9 + 0x210);
    uVar6 = uVar7 & 0x1fffffffffffffff;
    if (plVar5 + uVar7 < plVar5) {
      uVar6 = uVar8;
    }
    uVar7 = uVar8;
    if (uVar6 != 0) {
      do {
        plVar1 = (longlong *)*plVar5;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1);
        }
        plVar5 = plVar5 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar6);
    }
  }
  return;
}



// FUNCTION 142fe83a0 FUN_142fe83a0 body=4186 status=ok
// SIG undefined FUN_142fe83a0(void)

void FUN_142fe83a0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  float *pfVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  wchar_t *pwVar14;
  wchar_t *_Str;
  undefined2 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_res8;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  ulonglong in_stack_fffffffffffffdb8;
  undefined8 in_stack_fffffffffffffdc0;
  undefined4 uVar22;
  longlong *local_208;
  undefined8 local_200;
  wchar_t *local_1f8;
  undefined8 local_1f0;
  float local_1e8;
  float fStack_1e4;
  float local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  undefined8 local_1c8;
  float local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  undefined1 local_198 [16];
  int local_188 [2];
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong *local_168;
  int local_160;
  int local_15c;
  longlong *local_158;
  int local_150;
  int local_14c;
  longlong local_148;
  longlong *local_138;
  int local_130;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined1 local_a8 [112];
  
  local_res8 = param_1;
  _guard_xfg_dispatch_icall_nop(local_188,0,0x68);
  local_200 = 10;
  local_1f8 = (wchar_t *)0x0;
  local_1f0 = 0;
  local_208 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
  FGenericPlatformString::Memcpy(local_208,L"GameStage",0x14);
  cVar3 = FUN_142fe15b0(&local_res8,&local_208,&local_1f8);
  if (local_208 != (longlong *)0x0) {
    FMemory::Free();
  }
  _Str = L"";
  if (cVar3 != '\0') {
    pwVar14 = L"";
    if ((int)local_1f0 != 0) {
      pwVar14 = local_1f8;
    }
    local_188[0] = _wtoi(pwVar14);
  }
  local_208 = (longlong *)0x0;
  local_200 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
  FGenericPlatformString::Memcpy(local_208,L"InventoryData",0x1c);
  cVar3 = FUN_142fe15b0(&local_res8,&local_208,&local_1f8);
  if (local_208 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    pwVar14 = L"";
    if ((int)local_1f0 != 0) {
      pwVar14 = local_1f8;
    }
    uVar5 = UUGStartScreenUW::GetPrivateStaticClass();
    in_stack_fffffffffffffdc0 = 0;
    in_stack_fffffffffffffdb8 = in_stack_fffffffffffffdb8 & 0xffffffff00000000;
    local_180 = FUN_141799c90(uVar5,0,pwVar14,0,in_stack_fffffffffffffdb8,0,1);
    if (local_180 != 0) {
      lVar6 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(local_180 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_180 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_142fe859b;
    }
    pwVar14 = L"";
    if ((int)local_1f0 != 0) {
      pwVar14 = local_1f8;
    }
    uVar5 = UUGStartScreenUW::GetPrivateStaticClass();
    local_180 = FUN_141799410(uVar5,0xffffffffffffffff,pwVar14);
    if (local_180 != 0) {
      lVar6 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(local_180 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_180 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_142fe859b;
    }
    local_180 = 0;
  }
LAB_142fe859b:
  local_208 = (longlong *)0x0;
  local_200 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
  FGenericPlatformString::Memcpy(local_208,L"InventoryBalanceData",0x2a);
  cVar3 = FUN_142fe15b0(&local_res8,&local_208,&local_1f8);
  if (local_208 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    pwVar14 = L"";
    if ((int)local_1f0 != 0) {
      pwVar14 = local_1f8;
    }
    uVar5 = FUN_14301f840();
    in_stack_fffffffffffffdc0 = 0;
    in_stack_fffffffffffffdb8 = in_stack_fffffffffffffdb8 & 0xffffffff00000000;
    local_178 = FUN_141799c90(uVar5,0,pwVar14,0,in_stack_fffffffffffffdb8,0,1);
    if (local_178 != 0) {
      lVar6 = FUN_14301f840();
      if ((*(int *)(*(longlong *)(local_178 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_178 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_142fe86d5;
    }
    pwVar14 = L"";
    if ((int)local_1f0 != 0) {
      pwVar14 = local_1f8;
    }
    uVar5 = FUN_14301f840();
    local_178 = FUN_141799410(uVar5,0xffffffffffffffff,pwVar14);
    if (local_178 != 0) {
      lVar6 = FUN_14301f840();
      if ((*(int *)(*(longlong *)(local_178 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_178 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_142fe86d5;
    }
    local_178 = 0;
  }
LAB_142fe86d5:
  local_208 = (longlong *)0x0;
  local_200 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
  FGenericPlatformString::Memcpy(local_208,L"ManufacturerData",0x22);
  cVar3 = FUN_142fe15b0(&local_res8,&local_208,&local_1f8);
  if (local_208 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    pwVar14 = L"";
    if ((int)local_1f0 != 0) {
      pwVar14 = local_1f8;
    }
    uVar5 = FUN_14302d420();
    in_stack_fffffffffffffdc0 = 0;
    in_stack_fffffffffffffdb8 = in_stack_fffffffffffffdb8 & 0xffffffff00000000;
    local_170 = FUN_141799c90(uVar5,0,pwVar14,0,in_stack_fffffffffffffdb8,0,1);
    if (local_170 != 0) {
      lVar6 = FUN_14302d420();
      if ((*(int *)(*(longlong *)(local_170 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_170 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_142fe880f;
    }
    pwVar14 = L"";
    if ((int)local_1f0 != 0) {
      pwVar14 = local_1f8;
    }
    uVar5 = FUN_14302d420();
    local_170 = FUN_141799410(uVar5,0xffffffffffffffff,pwVar14);
    if (local_170 != 0) {
      lVar6 = FUN_14302d420();
      if ((*(int *)(*(longlong *)(local_170 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_170 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_142fe880f;
    }
    local_170 = 0;
  }
LAB_142fe880f:
  local_208 = (longlong *)0x0;
  local_200 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
  FGenericPlatformString::Memcpy(local_208,L"Parts",0xc);
  cVar3 = FUN_142fe15b0(&local_res8,&local_208,&local_1f8);
  if (local_208 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    local_208 = (longlong *)0x0;
    local_200 = 0;
    iVar4 = FUN_141594550(&local_1f8,&local_208,&DAT_145a287c4,1);
    if (0 < iVar4) {
      plVar17 = local_208 + (longlong)(int)local_200 * 2;
      for (plVar8 = local_208; plVar8 != plVar17; plVar8 = plVar8 + 2) {
        if ((int)plVar8[1] == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*plVar8;
        }
        uVar5 = FUN_14302b1c0();
        in_stack_fffffffffffffdc0 = 0;
        in_stack_fffffffffffffdb8 = in_stack_fffffffffffffdb8 & 0xffffffff00000000;
        lVar6 = FUN_141799c90(uVar5,0,puVar15,0,in_stack_fffffffffffffdb8,0,1);
        if (lVar6 == 0) {
LAB_142fe893c:
          if ((int)plVar8[1] == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = (undefined2 *)*plVar8;
          }
          uVar5 = FUN_14302b1c0();
          lVar6 = FUN_141799410(uVar5,0xffffffffffffffff,puVar15);
          if (lVar6 != 0) {
            lVar7 = FUN_14302b1c0();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) goto LAB_142fe899f;
          }
        }
        else {
          lVar7 = FUN_14302b1c0();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_142fe893c;
LAB_142fe899f:
          lVar7 = (longlong)local_160;
          local_160 = local_160 + 1;
          if (local_15c < local_160) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168);
          }
          local_168[lVar7] = lVar6;
        }
      }
    }
    plVar8 = local_208;
    for (iVar4 = (int)local_200; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_208 != (longlong *)0x0) {
      FMemory::Free(local_208);
    }
  }
  local_208 = (longlong *)0x0;
  local_200 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
  FGenericPlatformString::Memcpy(local_208,L"GenericParts",0x1a);
  cVar3 = FUN_142fe15b0(&local_res8,&local_208,&local_1f8);
  if (local_208 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    local_208 = (longlong *)0x0;
    local_200 = 0;
    iVar4 = FUN_141594550(&local_1f8,&local_208,&DAT_145a287e4,1);
    if (0 < iVar4) {
      plVar17 = local_208 + (longlong)(int)local_200 * 2;
      for (plVar8 = local_208; plVar8 != plVar17; plVar8 = plVar8 + 2) {
        if ((int)plVar8[1] == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*plVar8;
        }
        uVar5 = FUN_143025520();
        in_stack_fffffffffffffdc0 = 0;
        in_stack_fffffffffffffdb8 = in_stack_fffffffffffffdb8 & 0xffffffff00000000;
        lVar6 = FUN_141799c90(uVar5,0,puVar15,0,in_stack_fffffffffffffdb8,0,1);
        if (lVar6 == 0) {
LAB_142fe8b1c:
          if ((int)plVar8[1] == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = (undefined2 *)*plVar8;
          }
          uVar5 = FUN_143025520();
          lVar6 = FUN_141799410(uVar5,0xffffffffffffffff,puVar15);
          if (lVar6 != 0) {
            lVar7 = FUN_143025520();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) goto LAB_142fe8b7f;
          }
        }
        else {
          lVar7 = FUN_143025520();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_142fe8b1c;
LAB_142fe8b7f:
          lVar7 = (longlong)local_150;
          local_150 = local_150 + 1;
          if (local_14c < local_150) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_158);
          }
          local_158[lVar7] = lVar6;
        }
      }
    }
    plVar8 = local_208;
    for (iVar4 = (int)local_200; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_208 != (longlong *)0x0) {
      FMemory::Free(local_208);
    }
  }
  if ((((0 < local_188[0]) && (local_178 != 0)) && (local_170 != 0)) && (local_180 != 0)) {
    for (plVar8 = local_168; plVar8 != local_168 + local_160; plVar8 = plVar8 + 1) {
      if (*plVar8 == 0) goto LAB_142fe8fb3;
    }
    for (plVar8 = local_158; plVar8 != local_158 + local_150; plVar8 = plVar8 + 1) {
      if (*plVar8 == 0) goto LAB_142fe8fb3;
    }
    for (plVar8 = local_138; plVar8 != local_138 + local_130; plVar8 = plVar8 + 1) {
      if (*plVar8 == 0) goto LAB_142fe8fb3;
    }
    local_108 = local_180;
    local_100 = local_178;
    local_f8 = local_170;
    local_f0 = local_188[0];
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 1;
    uVar5 = (**(code **)(*param_2 + 0x148))(param_2);
    plVar8 = (longlong *)FUN_14301a2a0(uVar5,&local_108,&DAT_1468b5b70,0);
    if (plVar8 != (longlong *)0x0) {
      lVar6 = plVar8[0x23];
      (**(code **)(*plVar8 + 0x460))(plVar8,local_188);
      (**(code **)(*plVar8 + 0x468))(plVar8,local_188,0,1);
      UGameplayStatics::FinishSpawningActor(lVar6,&DAT_1468b5b70);
      plVar8 = (longlong *)param_2[0x91];
      if (plVar8 == (longlong *)0x0) {
        (**(code **)(*param_2 + 0x7a8))(param_2,&local_1c8,&local_1b8);
      }
      else {
        puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x790))(plVar8,local_198);
        local_1c8 = *puVar9;
        local_1c0 = *(float *)(puVar9 + 1);
        puVar9 = (undefined8 *)
                 (**(code **)(*(longlong *)param_2[0x91] + 0x788))
                           ((longlong *)param_2[0x91],local_198);
        local_1b8 = *puVar9;
        local_1b0 = *(undefined4 *)(puVar9 + 1);
      }
      FName::FName(local_res18,L"Vehicle",1);
      uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffffdc0 >> 0x20);
      lVar7 = *(longlong *)(lVar6 + 0x10);
      if (lVar7 != 0) {
LAB_142fe8de0:
        local_res20 = *(undefined8 *)(lVar7 + 0x18);
        iVar4 = FName::Compare(&local_res20,local_res18);
        uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffffdc0 >> 0x20);
        if (iVar4 != 0) goto code_r0x000142fe8e06;
        pfVar10 = (float *)FRotator::Vector(&local_1b8,local_198);
        local_208 = (longlong *)0x0;
        local_200 = 10;
        local_1e8 = (float)local_1c8 + *pfVar10 * 600.0;
        fStack_1e4 = local_1c8._4_4_ + pfVar10[1] * 600.0;
        local_1e0 = local_1c0 + pfVar10[2] * 600.0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
        FGenericPlatformString::Memcpy(local_208,L"CustomLoc",0x14);
        cVar3 = FUN_142fe15b0(&local_res8,&local_208,&local_1f8);
        if (local_208 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (cVar3 != '\0') {
          local_208 = (longlong *)0x0;
          local_200 = 0;
          iVar4 = FUN_141594550(&local_1f8,&local_208,&DAT_145a28814,1);
          if (2 < iVar4) {
            if ((int)local_208[1] == 0) {
              pwVar14 = L"";
            }
            else {
              pwVar14 = (wchar_t *)*local_208;
            }
            dVar18 = _wtof(pwVar14);
            local_1e8 = (float)dVar18;
            if ((int)local_208[3] == 0) {
              pwVar14 = L"";
            }
            else {
              pwVar14 = (wchar_t *)local_208[2];
            }
            dVar18 = _wtof(pwVar14);
            fStack_1e4 = (float)dVar18;
            if ((int)local_208[5] == 0) {
              pwVar14 = L"";
            }
            else {
              pwVar14 = (wchar_t *)local_208[4];
            }
            dVar18 = _wtof(pwVar14);
            local_1e0 = (float)dVar18;
          }
          plVar8 = local_208;
          for (iVar4 = (int)local_200; iVar4 != 0; iVar4 = iVar4 + -1) {
            if (*plVar8 != 0) {
              FMemory::Free();
            }
            plVar8 = plVar8 + 2;
          }
          if (local_208 != (longlong *)0x0) {
            FMemory::Free(local_208);
          }
        }
        pfVar10 = (float *)FRotator::Quaternion(&local_1b8,&local_208);
        fVar21 = *pfVar10;
        fVar19 = fVar21 + fVar21;
        fVar20 = -pfVar10[2];
        fVar20 = fVar20 + fVar20;
        local_1d4 = (fVar21 * fVar19 - pfVar10[2] * fVar20) - 1.0;
        local_1d0 = pfVar10[1] * fVar20 - pfVar10[3] * fVar19;
        local_1d8 = -(pfVar10[1] * fVar19 + pfVar10[3] * fVar20);
        uVar5 = FRotationMatrix::MakeFromZX(local_a8,&DAT_1464aa798,&local_1d8);
        FMatrix::ToQuat(uVar5,&local_118);
        local_208 = (longlong *)0x0;
        local_200 = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
        FGenericPlatformString::Memcpy(local_208,L"CustomRot",0x14);
        cVar3 = FUN_142fe15b0(&local_res8,&local_208,&local_1f8);
        if (local_208 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (cVar3 != '\0') {
          local_208 = (longlong *)0x0;
          local_200 = 0;
          iVar4 = FUN_141594550(&local_1f8,&local_208,&DAT_145a2883c,1);
          if (2 < iVar4) {
            if ((int)local_208[1] == 0) {
              pwVar14 = L"";
            }
            else {
              pwVar14 = (wchar_t *)*local_208;
            }
            dVar18 = _wtof(pwVar14);
            local_1d8 = (float)dVar18;
            if ((int)local_208[3] == 0) {
              pwVar14 = L"";
            }
            else {
              pwVar14 = (wchar_t *)local_208[2];
            }
            dVar18 = _wtof(pwVar14);
            local_1d4 = (float)dVar18;
            if ((int)local_208[5] != 0) {
              _Str = (wchar_t *)local_208[4];
            }
            dVar18 = _wtof(_Str);
            local_1d0 = (float)dVar18;
            puVar13 = (undefined4 *)FRotator::Quaternion(&local_1d8,local_198);
            local_118 = *puVar13;
            uStack_114 = puVar13[1];
            uStack_110 = puVar13[2];
            uStack_10c = puVar13[3];
          }
          plVar8 = local_208;
          for (iVar4 = (int)local_200; iVar4 != 0; iVar4 = iVar4 + -1) {
            if (*plVar8 != 0) {
              FMemory::Free();
            }
            plVar8 = plVar8 + 2;
          }
          if (local_208 != (longlong *)0x0) {
            FMemory::Free(local_208);
          }
        }
        local_1a8 = CONCAT44(fStack_1e4,local_1e8);
        local_1a0 = local_1e0;
        FUN_14223c960(lVar6,&local_1a8,&local_118,0,0,1);
        goto LAB_142fe8fa7;
      }
LAB_142fe8e0f:
      FRotator::Vector(&local_1b8,&local_1d8);
      local_1a0 = local_1c0 + local_1d0 * 64.0;
      local_1a8 = CONCAT44(local_1c8._4_4_ + local_1d4 * 64.0,(float)local_1c8 + local_1d8 * 64.0);
      iVar4 = rand();
      fVar21 = (float)iVar4 * 0.0076296274 + 750.0;
      pfVar10 = (float *)FRotator::Vector(&local_1b8,local_198);
      local_1e0 = fVar21 * pfVar10[2];
      fStack_1e4 = fVar21 * pfVar10[1];
      local_1e8 = fVar21 * *pfVar10;
      FUN_140c65880(&local_res8,local_198,0x42c80000,0x43160000);
      lVar7 = local_180;
      fVar20 = fStack_1e4 * fStack_1e4;
      fVar21 = local_1e8 * local_1e8;
      fVar19 = local_1e0 * local_1e0;
      lVar16 = 0;
      if (*(longlong *)(local_180 + 0x160) != 0) {
        lVar11 = FUN_143025260();
        for (lVar1 = *(longlong *)(lVar7 + 0x160);
            (lVar16 = 0, lVar1 != 0 && (lVar16 = *(longlong *)(lVar7 + 0x160), lVar1 != lVar11));
            lVar1 = *(longlong *)(lVar1 + 0x30)) {
        }
      }
      uVar5 = FVector::Rotation(&local_1e8,&local_208);
      uVar12 = (**(code **)(*param_2 + 0x148))(param_2);
      FUN_142ff1380(uVar12,lVar16,1,lVar6,*(undefined8 *)(local_180 + 0x1d8),
                    CONCAT44(uVar22,SQRT(fVar20 + fVar21 + fVar19)),local_198,&local_1a8,uVar5,0,0);
    }
LAB_142fe8fa7:
    TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
              (&local_e8);
  }
LAB_142fe8fb3:
  if (local_1f8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_138 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_148 != 0) {
    FMemory::Free();
  }
  if (local_158 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
code_r0x000142fe8e06:
  lVar7 = *(longlong *)(lVar7 + 0x30);
  if (lVar7 == 0) goto LAB_142fe8e0f;
  goto LAB_142fe8de0;
}



// FUNCTION 142fe9400 FUN_142fe9400 body=512 status=ok
// SIG undefined FUN_142fe9400(void)

void FUN_142fe9400(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
                  char *param_5)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar9;
  undefined8 *local_28;
  undefined8 local_20;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if ((param_5 == (char *)0x0) || (*param_5 != '\x01')) {
    lVar4 = *(longlong *)(param_1 + 0x38);
    if ((lVar4 != 0) ||
       ((*(longlong *)(param_1 + 0x30) != 0 && (lVar4 = FUN_140cb9700(), lVar4 != 0)))) {
      lVar5 = FUN_14302b270();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (iVar1 = *(int *)(param_1 + 0xe0), 0 < iVar1)) {
        uVar8 = 0;
        local_28 = (undefined8 *)0x0;
        local_20 = 0;
        if (*(char *)(lVar4 + 0x81) == '\0') {
          FUN_142d90810(*(undefined8 *)(param_1 + 0xd8),iVar1,param_2,param_3,&local_28,param_5);
        }
        else {
          FUN_142d8fc60(lVar4 + 0x78,*(undefined8 *)(param_1 + 0xd8),iVar1,param_2,
                        CONCAT44(uVar9,param_3),&local_28,param_5);
        }
        uVar7 = (ulonglong)((longlong)(local_28 + (int)local_20) + (7 - (longlong)local_28)) >> 3;
        if (local_28 + (int)local_20 < local_28) {
          uVar7 = uVar8;
        }
        puVar6 = local_28;
        if (uVar7 != 0) {
          do {
            iVar1 = (int)param_4[1];
            uVar2 = *puVar6;
            *(int *)(param_4 + 1) = iVar1 + 1;
            if (*(int *)((longlong)param_4 + 0xc) < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_4,iVar1);
            }
            puVar6 = puVar6 + 1;
            uVar8 = uVar8 + 1;
            *(undefined8 *)(*param_4 + (longlong)iVar1 * 8) = uVar2;
          } while (uVar8 != uVar7);
        }
        if (local_28 != (undefined8 *)0x0) {
          FMemory::Free(local_28);
        }
      }
    }
  }
  else {
    puVar6 = *(undefined8 **)(param_5 + 8);
    uVar7 = 0;
    uVar8 = (longlong)*(int *)(param_5 + 0x10) & 0x1fffffffffffffff;
    if (puVar6 + *(int *)(param_5 + 0x10) < puVar6) {
      uVar8 = uVar7;
    }
    if (uVar8 != 0) {
      do {
        iVar1 = (int)param_4[1];
        uVar2 = *puVar6;
        *(int *)(param_4 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_4 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_4,iVar1);
        }
        puVar6 = puVar6 + 1;
        uVar7 = uVar7 + 1;
        *(undefined8 *)(*param_4 + (longlong)iVar1 * 8) = uVar2;
      } while (uVar7 != uVar8);
    }
  }
  return;
}



// FUNCTION 142fe9600 FUN_142fe9600 body=115 status=ok
// SIG undefined FUN_142fe9600(void)

undefined8 FUN_142fe9600(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *param_3;
  local_10 = *(undefined4 *)(param_3 + 1);
  uVar1 = FUN_142fef1c0(local_18,param_2,&local_18);
  if (*(longlong *)(param_4 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_4 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_4 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_4 + 0x20) != 0) {
    FMemory::Free();
  }
  return uVar1;
}


