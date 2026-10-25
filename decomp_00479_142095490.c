// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142095490 FUN_142095490 body=6 status=ok
// SIG undefined FUN_142095490(void)

undefined8 FUN_142095490(void)

{
  return 0x173ea534;
}



// FUNCTION 1420954a0 FUN_1420954a0 body=6 status=ok
// SIG undefined FUN_1420954a0(void)

undefined8 FUN_1420954a0(void)

{
  return 0xf2b4d571;
}



// FUNCTION 1420954b0 FUN_1420954b0 body=6 status=ok
// SIG undefined FUN_1420954b0(void)

undefined8 FUN_1420954b0(void)

{
  return 0x2476cea1;
}



// FUNCTION 1420954c0 FUN_1420954c0 body=6 status=ok
// SIG undefined FUN_1420954c0(void)

undefined8 FUN_1420954c0(void)

{
  return 0xe7204396;
}



// FUNCTION 1420954d0 FUN_1420954d0 body=6 status=ok
// SIG undefined FUN_1420954d0(void)

undefined8 FUN_1420954d0(void)

{
  return 0xf95cbc7a;
}



// FUNCTION 1420954e0 FUN_1420954e0 body=6 status=ok
// SIG undefined FUN_1420954e0(void)

undefined8 FUN_1420954e0(void)

{
  return 0x340d73a8;
}



// FUNCTION 142095690 FUN_142095690 body=34 status=ok
// SIG undefined FUN_142095690(void)

void FUN_142095690(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142093e60();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_Close_144f91c00,0x31);
  return;
}



// FUNCTION 1420956c0 FUN_1420956c0 body=34 status=ok
// SIG undefined FUN_1420956c0(void)

void FUN_1420956c0(void)

{
  undefined8 uVar1;
  
  uVar1 = UPlatformInterfaceBase::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetColorTransform_144f91f10,0x15);
  return;
}



// FUNCTION 1420956f0 FUN_1420956f0 body=34 status=ok
// SIG undefined FUN_1420956f0(void)

void FUN_1420956f0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142094480();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CloseMovie_144f92060,8);
  return;
}



// FUNCTION 142095720 FUN_142095720 body=113 status=ok
// SIG undefined FUN_142095720(void)

void FUN_142095720(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ae4528 == 0) {
    if (DAT_146ae4848 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ae4848,&PTR_s__Script_ScaleformUI_144f92100);
    }
    lVar1 = DAT_146ae4848;
    uVar2 = FUN_142095450();
    DAT_146ae4528 = GetStaticStruct(FUN_142095e90,lVar1,L"ASColorTransform",0x20,uVar2);
  }
  return;
}



// FUNCTION 1420957a0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FDestructibleDebrisParameters::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ae4538 == 0) {
    if (DAT_146ae4848 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ae4848,&PTR_s__Script_ScaleformUI_144f92100);
    }
    lVar1 = DAT_146ae4848;
    uVar2 = FUN_142095460();
    DAT_146ae4538 = GetStaticStruct(FUN_142095ec0,lVar1,L"ASDisplayInfo",0x2c,uVar2);
  }
  return;
}



// FUNCTION 142095820 FUN_142095820 body=113 status=ok
// SIG undefined FUN_142095820(void)

void FUN_142095820(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ae4548 == 0) {
    if (DAT_146ae4848 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ae4848,&PTR_s__Script_ScaleformUI_144f92100);
    }
    lVar1 = DAT_146ae4848;
    uVar2 = FUN_142095470();
    DAT_146ae4548 = GetStaticStruct(FUN_142095ef0,lVar1,L"ASPerspectiveTransform",0x40,uVar2);
  }
  return;
}



// FUNCTION 1420958a0 FUN_1420958a0 body=113 status=ok
// SIG undefined FUN_1420958a0(void)

void FUN_1420958a0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ae4558 == 0) {
    if (DAT_146ae4848 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ae4848,&PTR_s__Script_ScaleformUI_144f92100);
    }
    lVar1 = DAT_146ae4848;
    uVar2 = FUN_142095480();
    DAT_146ae4558 = GetStaticStruct(FUN_142095f20,lVar1,L"ASValue",0x38,uVar2);
  }
  return;
}



// FUNCTION 142095920 FUN_142095920 body=113 status=ok
// SIG undefined FUN_142095920(void)

void FUN_142095920(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ae4578 == 0) {
    if (DAT_146ae4848 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ae4848,&PTR_s__Script_ScaleformUI_144f92100);
    }
    lVar1 = DAT_146ae4848;
    uVar2 = FUN_142095490();
    DAT_146ae4578 = GetStaticStruct(FUN_142095f50,lVar1,L"ExternalTexture",0x18,uVar2);
  }
  return;
}



// FUNCTION 1420959a0 FUN_1420959a0 body=113 status=ok
// SIG undefined FUN_1420959a0(void)

void FUN_1420959a0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ae4858 == 0) {
    if (DAT_146ae4848 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ae4848,&PTR_s__Script_ScaleformUI_144f92100);
    }
    lVar1 = DAT_146ae4848;
    uVar2 = FUN_1420954a0();
    DAT_146ae4858 = GetStaticStruct(FUN_142095f80,lVar1,L"FlashNativeBindingInfo",0x30,uVar2);
  }
  return;
}



// FUNCTION 142095a20 FUN_142095a20 body=113 status=ok
// SIG undefined FUN_142095a20(void)

void FUN_142095a20(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ae4568 == 0) {
    if (DAT_146ae4848 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ae4848,&PTR_s__Script_ScaleformUI_144f92100);
    }
    lVar1 = DAT_146ae4848;
    uVar2 = FUN_1420954b0();
    DAT_146ae4568 = GetStaticStruct(FUN_142095fb0,lVar1,L"GFxWidgetBinding",0x10,uVar2);
  }
  return;
}



// FUNCTION 142095aa0 FUN_142095aa0 body=113 status=ok
// SIG undefined FUN_142095aa0(void)

void FUN_142095aa0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ae4868 == 0) {
    if (DAT_146ae4848 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ae4848,&PTR_s__Script_ScaleformUI_144f92100);
    }
    lVar1 = DAT_146ae4848;
    uVar2 = FUN_1420954c0();
    DAT_146ae4868 = GetStaticStruct(FUN_142095fe0,lVar1,L"GbxGFxBounds",0x10,uVar2);
  }
  return;
}



// FUNCTION 142095b20 FUN_142095b20 body=113 status=ok
// SIG undefined FUN_142095b20(void)

void FUN_142095b20(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ae44e0 == 0) {
    if (DAT_146ae4848 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ae4848,&PTR_s__Script_ScaleformUI_144f92100);
    }
    lVar1 = DAT_146ae4848;
    uVar2 = FUN_1420954d0();
    DAT_146ae44e0 = GetStaticStruct(FUN_142096010,lVar1,L"ScaleformAssetReference",0x28,uVar2);
  }
  return;
}



// FUNCTION 142095ba0 FUN_142095ba0 body=113 status=ok
// SIG undefined FUN_142095ba0(void)

void FUN_142095ba0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ae44d0 == 0) {
    if (DAT_146ae4848 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ae4848,&PTR_s__Script_ScaleformUI_144f92100);
    }
    lVar1 = DAT_146ae4848;
    uVar2 = FUN_1420954e0();
    DAT_146ae44d0 = GetStaticStruct(FUN_142096040,lVar1,L"ScaleformTextureReference",0x50,uVar2);
  }
  return;
}



// FUNCTION 142095c20 FUN_142095c20 body=47 status=ok
// SIG undefined FUN_142095c20(void)

longlong FUN_142095c20(void)

{
  if (DAT_146ae4878 == 0) {
    FUN_141786440(&DAT_146ae4878,&PTR_GetPrivateStaticClass_144f8cfd0);
  }
  return DAT_146ae4878;
}



// FUNCTION 142095c50 FUN_142095c50 body=47 status=ok
// SIG undefined FUN_142095c50(void)

longlong FUN_142095c50(void)

{
  if (DAT_146ae4588 == 0) {
    FUN_141786a30(&DAT_146ae4588,&PTR_FUN_1464fb970);
  }
  return DAT_146ae4588;
}



// FUNCTION 142095c80 FUN_142095c80 body=47 status=ok
// SIG undefined FUN_142095c80(void)

longlong FUN_142095c80(void)

{
  if (DAT_146ae4590 == 0) {
    FUN_141786a30(&DAT_146ae4590,&PTR_FUN_1464fb9b0);
  }
  return DAT_146ae4590;
}



// FUNCTION 142095cb0 FUN_142095cb0 body=47 status=ok
// SIG undefined FUN_142095cb0(void)

longlong FUN_142095cb0(void)

{
  if (DAT_146ae45a0 == 0) {
    FUN_141786a30(&DAT_146ae45a0,&PTR_FUN_1464fba30);
  }
  return DAT_146ae45a0;
}



// FUNCTION 142095ce0 FUN_142095ce0 body=47 status=ok
// SIG undefined FUN_142095ce0(void)

longlong FUN_142095ce0(void)

{
  if (DAT_146ae4598 == 0) {
    FUN_141786a30(&DAT_146ae4598,&PTR_FUN_1464fb9f0);
  }
  return DAT_146ae4598;
}



// FUNCTION 142095d10 FUN_142095d10 body=47 status=ok
// SIG undefined FUN_142095d10(void)

longlong FUN_142095d10(void)

{
  if (DAT_146ae44f0 == 0) {
    FUN_1417866a0(&DAT_146ae44f0,&PTR_FUN_146500ba0);
  }
  return DAT_146ae44f0;
}



// FUNCTION 142095d40 FUN_142095d40 body=47 status=ok
// SIG undefined FUN_142095d40(void)

longlong FUN_142095d40(void)

{
  if (DAT_146ae4520 == 0) {
    FUN_1417866a0(&DAT_146ae4520,&PTR_FUN_146500d80);
  }
  return DAT_146ae4520;
}



// FUNCTION 142095d70 FUN_142095d70 body=47 status=ok
// SIG undefined FUN_142095d70(void)

longlong FUN_142095d70(void)

{
  if (DAT_146ae4510 == 0) {
    FUN_1417866a0(&DAT_146ae4510,&PTR_FUN_146500ce0);
  }
  return DAT_146ae4510;
}



// FUNCTION 142095da0 FUN_142095da0 body=47 status=ok
// SIG undefined FUN_142095da0(void)

longlong FUN_142095da0(void)

{
  if (DAT_146ae4518 == 0) {
    FUN_1417866a0(&DAT_146ae4518,&PTR_FUN_146500d30);
  }
  return DAT_146ae4518;
}



// FUNCTION 142095dd0 FUN_142095dd0 body=47 status=ok
// SIG undefined FUN_142095dd0(void)

longlong FUN_142095dd0(void)

{
  if (DAT_146ae4508 == 0) {
    FUN_1417866a0(&DAT_146ae4508,&PTR_FUN_146500c90);
  }
  return DAT_146ae4508;
}



// FUNCTION 142095e00 FUN_142095e00 body=47 status=ok
// SIG undefined FUN_142095e00(void)

longlong FUN_142095e00(void)

{
  if (DAT_146ae44f8 == 0) {
    FUN_1417866a0(&DAT_146ae44f8,&PTR_FUN_146500bf0);
  }
  return DAT_146ae44f8;
}



// FUNCTION 142095e30 FUN_142095e30 body=47 status=ok
// SIG undefined FUN_142095e30(void)

longlong FUN_142095e30(void)

{
  if (DAT_146ae4850 == 0) {
    FUN_1417866a0(&DAT_146ae4850,&PTR_FUN_146500dd0);
  }
  return DAT_146ae4850;
}



// FUNCTION 142095e60 FUN_142095e60 body=47 status=ok
// SIG undefined FUN_142095e60(void)

longlong FUN_142095e60(void)

{
  if (DAT_146ae4500 == 0) {
    FUN_1417866a0(&DAT_146ae4500,&PTR_FUN_146500c40);
  }
  return DAT_146ae4500;
}



// FUNCTION 142095e90 FUN_142095e90 body=47 status=ok
// SIG undefined FUN_142095e90(void)

longlong FUN_142095e90(void)

{
  if (DAT_146ae4530 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146ae4530,&PTR_FUN_1464fb240);
  }
  return DAT_146ae4530;
}



// FUNCTION 142095ec0 FUN_142095ec0 body=47 status=ok
// SIG undefined FUN_142095ec0(void)

longlong FUN_142095ec0(void)

{
  if (DAT_146ae4540 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146ae4540,&PTR_FUN_1464fb3c0);
  }
  return DAT_146ae4540;
}



// FUNCTION 142095ef0 FUN_142095ef0 body=47 status=ok
// SIG undefined FUN_142095ef0(void)

longlong FUN_142095ef0(void)

{
  if (DAT_146ae4550 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146ae4550,&PTR_FUN_1464fb540);
  }
  return DAT_146ae4550;
}



// FUNCTION 142095f20 FUN_142095f20 body=47 status=ok
// SIG undefined FUN_142095f20(void)

longlong FUN_142095f20(void)

{
  if (DAT_146ae4560 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146ae4560,&PTR_FUN_1464fb730);
  }
  return DAT_146ae4560;
}



// FUNCTION 142095f50 FUN_142095f50 body=47 status=ok
// SIG undefined FUN_142095f50(void)

longlong FUN_142095f50(void)

{
  if (DAT_146ae4580 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146ae4580,&PTR_FUN_1464fb8f0);
  }
  return DAT_146ae4580;
}



// FUNCTION 142095f80 FUN_142095f80 body=47 status=ok
// SIG undefined FUN_142095f80(void)

longlong FUN_142095f80(void)

{
  if (DAT_146ae4860 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146ae4860,&PTR_FUN_146500300);
  }
  return DAT_146ae4860;
}



// FUNCTION 142095fb0 FUN_142095fb0 body=47 status=ok
// SIG undefined FUN_142095fb0(void)

longlong FUN_142095fb0(void)

{
  if (DAT_146ae4570 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146ae4570,&PTR_FUN_1464fb830);
  }
  return DAT_146ae4570;
}



// FUNCTION 142095fe0 FUN_142095fe0 body=47 status=ok
// SIG undefined FUN_142095fe0(void)

longlong FUN_142095fe0(void)

{
  if (DAT_146ae4870 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146ae4870,&PTR_FUN_146500460);
  }
  return DAT_146ae4870;
}



// FUNCTION 142096010 FUN_142096010 body=47 status=ok
// SIG undefined FUN_142096010(void)

longlong FUN_142096010(void)

{
  if (DAT_146ae44e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146ae44e8,&PTR_FUN_1464fb140);
  }
  return DAT_146ae44e8;
}



// FUNCTION 142096040 FUN_142096040 body=47 status=ok
// SIG undefined FUN_142096040(void)

longlong FUN_142096040(void)

{
  if (DAT_146ae44d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146ae44d8,&PTR_FUN_1464fb080);
  }
  return DAT_146ae44d8;
}



// FUNCTION 142096090 FUN_142096090 body=112 status=ok
// SIG undefined FUN_142096090(void)

void FUN_142096090(undefined8 param_1,longlong param_2)

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
  FUN_142082d20(local_res10[0]);
  return;
}



// FUNCTION 142096100 FUN_142096100 body=352 status=ok
// SIG undefined FUN_142096100(void)

void FUN_142096100(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int local_res10 [2];
  undefined8 local_res20;
  undefined8 local_28;
  longlong local_20 [3];
  
  local_28 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_20[0] = 0;
  local_20[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_20);
  }
  local_res20 = 0;
  plVar1 = local_20;
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
  FUN_142084ef0(local_28,plVar1,local_res20,local_res10[0] != 0);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142096260 FUN_142096260 body=186 status=ok
// SIG undefined FUN_142096260(void)

void FUN_142096260(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  longlong local_38 [2];
  undefined1 local_28 [32];
  
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
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x388))(param_1,local_28,local_38);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *param_3 = *puVar4;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = puVar4[5];
  uVar2 = puVar4[6];
  uVar3 = puVar4[7];
  param_3[4] = puVar4[4];
  param_3[5] = uVar1;
  param_3[6] = uVar2;
  param_3[7] = uVar3;
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142096320 execGetLevelProperties body=60 status=ok
// SIG undefined execGetLevelProperties(void)

void AShipPlusPlus::execGetLevelProperties(undefined4 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_142085ad0(param_1,local_28);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  uVar1 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar1;
  return;
}



// FUNCTION 142096360 FUN_142096360 body=205 status=ok
// SIG undefined FUN_142096360(void)

void FUN_142096360(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_48 [2];
  undefined1 local_38 [48];
  
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
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x368))(param_1,local_38,local_48);
  uVar4 = puVar5[1];
  *param_3 = *puVar5;
  param_3[1] = uVar4;
  uVar1 = *(undefined4 *)((longlong)puVar5 + 0x14);
  uVar2 = *(undefined4 *)(puVar5 + 3);
  uVar3 = *(undefined4 *)((longlong)puVar5 + 0x1c);
  *(undefined4 *)(param_3 + 2) = *(undefined4 *)(puVar5 + 2);
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar1;
  *(undefined4 *)(param_3 + 3) = uVar2;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar3;
  param_3[4] = puVar5[4];
  *(undefined4 *)(param_3 + 5) = *(undefined4 *)(puVar5 + 5);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142096430 FUN_142096430 body=76 status=ok
// SIG undefined FUN_142096430(void)

void FUN_142096430(undefined4 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_38 [48];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_142085dc0(param_1,local_38);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  uVar1 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar1;
  param_3[4] = puVar2[4];
  *(undefined4 *)(param_3 + 5) = *(undefined4 *)(puVar2 + 5);
  return;
}



// FUNCTION 142096480 FUN_142096480 body=209 status=ok
// SIG undefined FUN_142096480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142096480(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  local_68[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x378))(param_1,local_58,local_68);
  uVar4 = puVar5[1];
  *param_3 = *puVar5;
  param_3[1] = uVar4;
  uVar1 = *(undefined4 *)((longlong)puVar5 + 0x14);
  uVar2 = *(undefined4 *)(puVar5 + 3);
  uVar3 = *(undefined4 *)((longlong)puVar5 + 0x1c);
  *(undefined4 *)(param_3 + 2) = *(undefined4 *)(puVar5 + 2);
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar1;
  *(undefined4 *)(param_3 + 3) = uVar2;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)puVar5 + 0x24);
  uVar2 = *(undefined4 *)(puVar5 + 5);
  uVar3 = *(undefined4 *)((longlong)puVar5 + 0x2c);
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(puVar5 + 4);
  *(undefined4 *)((longlong)param_3 + 0x24) = uVar1;
  *(undefined4 *)(param_3 + 5) = uVar2;
  *(undefined4 *)((longlong)param_3 + 0x2c) = uVar3;
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142096560 FUN_142096560 body=96 status=ok
// SIG undefined FUN_142096560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142096560(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_142086190(param_1,local_48);
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



// FUNCTION 1420965c0 execImportFileAsTexture2D body=211 status=ok
// SIG undefined execImportFileAsTexture2D(void)

void UKismetRenderingLibrary::execImportFileAsTexture2D
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_142087040(local_res10,local_18);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1420966a0 FUN_1420966a0 body=208 status=ok
// SIG undefined FUN_1420966a0(void)

void FUN_1420966a0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong local_58 [2];
  undefined1 local_48 [16];
  longlong local_38;
  longlong local_28;
  
  local_58[0] = 0;
  local_58[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142087050(param_1,local_48,local_58);
  FUN_142094c70(param_3,uVar1);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142096770 FUN_142096770 body=247 status=ok
// SIG undefined FUN_142096770(void)

void FUN_142096770(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong local_28 [3];
  int local_10;
  
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
  uVar1 = FUN_142087330(param_1,local_28 + 2,local_28);
  FUN_142094bd0(param_3,uVar1);
  if (local_10 != 0) {
    plVar2 = (longlong *)(local_28[2] + 0x10);
    iVar3 = local_10;
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 7;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142096870 FUN_142096870 body=164 status=ok
// SIG undefined FUN_142096870(void)

void FUN_142096870(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_1420876d0(param_1,local_18);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142096920 FUN_142096920 body=80 status=ok
// SIG undefined FUN_142096920(void)

void FUN_142096920(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_48 [64];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1,local_48);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  uVar1 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar1;
  uVar1 = puVar2[5];
  param_3[4] = puVar2[4];
  param_3[5] = uVar1;
  uVar1 = puVar2[7];
  param_3[6] = puVar2[6];
  param_3[7] = uVar1;
  return;
}



// FUNCTION 142096970 FUN_142096970 body=323 status=ok
// SIG undefined FUN_142096970(void)

void FUN_142096970(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  longlong local_28 [2];
  
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_res8;
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar3 = local_res10;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x348))(param_1,local_28,puVar2,puVar3);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142096ac0 execGetMousePosition body=238 status=ok
// SIG undefined execGetMousePosition(void)

void APlayerController::execGetMousePosition
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  local_res18[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_res10;
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  puVar3 = local_res18;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142087ad0(param_1,puVar2,puVar3);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142096bb0 FUN_142096bb0 body=323 status=ok
// SIG undefined FUN_142096bb0(void)

void FUN_142096bb0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  longlong local_28 [2];
  
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_res8;
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar3 = local_res10;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x358))(param_1,local_28,puVar2,puVar3);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142096d00 execGetMousePosition body=238 status=ok
// SIG undefined execGetMousePosition(void)

void APlayerController::execGetMousePosition
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  local_res18[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_res10;
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  puVar3 = local_res18;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142087f50(param_1,puVar2,puVar3);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142096df0 FUN_142096df0 body=301 status=ok
// SIG undefined FUN_142096df0(void)

void FUN_142096df0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong local_68 [4];
  undefined1 local_48 [16];
  longlong local_38;
  longlong local_28;
  
  local_68[2] = 0;
  local_68[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x300))(param_1,local_48,local_68 + 2,local_68);
  FUN_142094c70(param_3,uVar1);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142096f20 FUN_142096f20 body=332 status=ok
// SIG undefined FUN_142096f20(void)

void FUN_142096f20(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong local_38 [5];
  int local_10;
  
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
  uVar1 = (**(code **)(*param_1 + 0x310))(param_1,local_38 + 4,local_38 + 2,local_38);
  FUN_142094bd0(param_3,uVar1);
  if (local_10 != 0) {
    plVar2 = (longlong *)(local_38[4] + 0x10);
    iVar3 = local_10;
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 7;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (local_38[4] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142097070 FUN_142097070 body=100 status=ok
// SIG undefined FUN_142097070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142097070(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x2d8))(param_1,local_48);
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



// FUNCTION 1420970e0 FUN_1420970e0 body=170 status=ok
// SIG undefined FUN_1420970e0(void)

void FUN_1420970e0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = (**(code **)(*param_1 + 0x338))(param_1,local_18);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142097190 FUN_142097190 body=43 status=ok
// SIG undefined FUN_142097190(void)

void FUN_142097190(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142088620();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1420971c0 FUN_1420971c0 body=235 status=ok
// SIG undefined FUN_1420971c0(void)

void FUN_1420971c0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x318))(param_1,local_28 + 2,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1420972b0 FUN_1420972b0 body=148 status=ok
// SIG undefined FUN_1420972b0(void)

void FUN_1420972b0(undefined8 param_1,longlong param_2)

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
  FUN_142088910(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142097350 FUN_142097350 body=214 status=ok
// SIG undefined FUN_142097350(void)

void FUN_142097350(longlong *param_1,longlong param_2)

{
  undefined4 local_res8 [2];
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
  (**(code **)(*param_1 + 800))(param_1,local_18,local_res8[0]);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142097430 FUN_142097430 body=126 status=ok
// SIG undefined FUN_142097430(void)

void FUN_142097430(undefined8 param_1,longlong param_2)

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
  FUN_142088b00(param_1,local_res10[0]);
  return;
}



// FUNCTION 1420974b0 FUN_1420974b0 body=235 status=ok
// SIG undefined FUN_1420974b0(void)

void FUN_1420974b0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x328))(param_1,local_28 + 2,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1420975a0 FUN_1420975a0 body=148 status=ok
// SIG undefined FUN_1420975a0(void)

void FUN_1420975a0(undefined8 param_1,longlong param_2)

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
  FUN_142088cf0(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142097640 FUN_142097640 body=214 status=ok
// SIG undefined FUN_142097640(void)

void FUN_142097640(longlong *param_1,longlong param_2)

{
  undefined4 local_res8 [2];
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
  (**(code **)(*param_1 + 0x330))(param_1,local_18,local_res8[0]);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142097720 FUN_142097720 body=126 status=ok
// SIG undefined FUN_142097720(void)

void FUN_142097720(undefined8 param_1,longlong param_2)

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
  FUN_142088ee0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1420977a0 FUN_1420977a0 body=448 status=ok
// SIG undefined FUN_1420977a0(void)

void FUN_1420977a0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong local_78;
  undefined8 local_70;
  longlong local_68 [4];
  undefined1 local_48 [16];
  longlong local_38;
  longlong local_28;
  
  local_68[2] = 0;
  local_68[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_78 = 0;
  local_70 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  plVar2 = &local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x398))(param_1,local_48,local_68 + 2,local_68,plVar2);
  FUN_142094c70(param_3,uVar1);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if ((int)local_70 != 0) {
    plVar2 = (longlong *)(local_78 + 0x10);
    iVar3 = (int)local_70;
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 7;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142097960 FUN_142097960 body=365 status=ok
// SIG undefined FUN_142097960(void)

void FUN_142097960(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong local_68;
  undefined8 local_60;
  longlong local_58 [2];
  undefined1 local_48 [16];
  longlong local_38;
  longlong local_28;
  
  local_58[0] = 0;
  local_58[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_68 = 0;
  local_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  plVar2 = &local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142089960(param_1,local_48,local_58,plVar2);
  FUN_142094c70(param_3,uVar1);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if ((int)local_60 != 0) {
    plVar2 = (longlong *)(local_68 + 0x10);
    iVar3 = (int)local_60;
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 7;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142097ad0 FUN_142097ad0 body=477 status=ok
// SIG undefined FUN_142097ad0(void)

void FUN_142097ad0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_res10;
  longlong local_88;
  undefined8 local_80;
  void *local_78;
  ulonglong local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined1 local_58 [16];
  longlong local_48;
  longlong local_38;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_88 = 0;
  local_80 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  _Src = local_78;
  local_68 = (void *)0x0;
  plVar3 = &local_88;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_70;
  local_60 = (int)local_70;
  if ((int)local_70 == 0) {
    local_5c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_70 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_68,_Src,lVar2 * 2);
  }
  uVar1 = FUN_142089d50(local_58,local_res10,&local_68,plVar3);
  FUN_142094c70(param_3,uVar1);
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if ((int)local_80 != 0) {
    plVar3 = (longlong *)(local_88 + 0x10);
    iVar4 = (int)local_80;
    do {
      if (plVar3[2] != 0) {
        FMemory::Free();
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 7;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142097cb0 FUN_142097cb0 body=340 status=ok
// SIG undefined FUN_142097cb0(void)

void FUN_142097cb0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10;
  void *local_68;
  ulonglong local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  longlong local_38;
  longlong local_28;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  _Src = local_68;
  local_58 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_60;
  local_50 = (int)local_60;
  if ((int)local_60 == 0) {
    local_4c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_60 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar2 * 2);
  }
  uVar1 = FUN_142089dc0(local_48,local_res10,&local_58);
  FUN_142094c70(param_3,uVar1);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142097e10 FUN_142097e10 body=43 status=ok
// SIG undefined FUN_142097e10(void)

void FUN_142097e10(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14208a080();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142097e40 FUN_142097e40 body=43 status=ok
// SIG undefined FUN_142097e40(void)

void FUN_142097e40(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14208a170();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142097e90 FUN_142097e90 body=130 status=ok
// SIG undefined FUN_142097e90(void)

void FUN_142097e90(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 1000))(param_1,local_res8[0]);
  return;
}



// FUNCTION 142097f20 FUN_142097f20 body=130 status=ok
// SIG undefined FUN_142097f20(void)

void FUN_142097f20(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x3f0))(param_1,local_res8[0]);
  return;
}



// FUNCTION 142097fb0 execSetPeripheralVisionAngle body=127 status=ok
// SIG undefined execSetPeripheralVisionAngle(void)

void UPawnSensingComponent::execSetPeripheralVisionAngle(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x3e0))(param_1,local_res8[0]);
  return;
}



// FUNCTION 142098050 FUN_142098050 body=127 status=ok
// SIG undefined FUN_142098050(void)

void FUN_142098050(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x3d8))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1420980d0 FUN_1420980d0 body=425 status=ok
// SIG undefined FUN_1420980d0(void)

void FUN_1420980d0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  
  local_38[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
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
  uVar1 = FUN_14208b4d0(local_38[0],local_40,local_48,local_res20,bVar2,local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142098280 FUN_142098280 body=425 status=ok
// SIG undefined FUN_142098280(void)

void FUN_142098280(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  
  local_38[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
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
  uVar1 = FUN_14208b690(local_38[0],local_40,local_48,local_res20,bVar2,local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142098430 FUN_142098430 body=235 status=ok
// SIG undefined FUN_142098430(void)

void FUN_142098430(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x3c0))(param_1,local_28 + 2,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142098520 FUN_142098520 body=122 status=ok
// SIG undefined FUN_142098520(void)

void FUN_142098520(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2b8))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1420985a0 FUN_1420985a0 body=162 status=ok
// SIG undefined FUN_1420985a0(void)

void FUN_1420985a0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x3b0))(param_1,puVar1);
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_18);
  return;
}



// FUNCTION 142098650 FUN_142098650 body=225 status=ok
// SIG undefined FUN_142098650(void)

void FUN_142098650(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong local_38 [2];
  undefined1 local_28 [32];
  
  local_38[0] = 0;
  local_38[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar1 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x390))(param_1,local_38,puVar1);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142098740 execOnNavDirtied body=138 status=ok
// SIG undefined execOnNavDirtied(void)

void AUGNavListenerActor::execOnNavDirtied(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_28 [32];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar1 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14208db90(param_1,puVar1);
  return;
}



// FUNCTION 1420987d0 FUN_1420987d0 body=285 status=ok
// SIG undefined FUN_1420987d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420987d0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong local_48 [3];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  undefined4 local_14;
  undefined1 local_10;
  
  local_48[0] = 0;
  local_48[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_48[2] = _DAT_1468b5d90;
  local_2c = 0x42c80000;
  uStack_28 = 0x42c80000;
  uStack_24 = 0x42c80000;
  uStack_20 = 0;
  local_30 = DAT_1468b5d98;
  local_14 = 0x437f0000;
  local_1c = 0;
  local_10 = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  plVar1 = local_48 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x370))(param_1,local_48,plVar1);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1420988f0 FUN_1420988f0 body=202 status=ok
// SIG undefined FUN_1420988f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420988f0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  undefined4 local_14;
  undefined1 local_10;
  
  local_38 = _DAT_1468b5d90;
  local_2c = 0x42c80000;
  uStack_28 = 0x42c80000;
  uStack_24 = 0x42c80000;
  uStack_20 = 0;
  local_30 = DAT_1468b5d98;
  local_14 = 0x437f0000;
  local_1c = 0;
  local_10 = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14208ddb0(param_1,puVar1);
  return;
}



// FUNCTION 1420989c0 FUN_1420989c0 body=300 status=ok
// SIG undefined FUN_1420989c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420989c0(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_58[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_28 = _DAT_146ae44b0 & _DAT_146ae44c0;
  uStack_24 = uRam0000000146ae44b4 & uRam0000000146ae44c4;
  uStack_20 = uRam0000000146ae44b8 & uRam0000000146ae44c8;
  uStack_1c = uRam0000000146ae44bc & uRam0000000146ae44cc;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam0000000146ae44bc;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x380))(param_1,local_58,puVar1);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142098af0 execAddRecoilInstance body=213 status=ok
// SIG undefined execAddRecoilInstance(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UGS_GunTools::execAddRecoilInstance(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = _DAT_146ae44b0 & _DAT_146ae44c0;
  uStack_24 = uRam0000000146ae44b4 & uRam0000000146ae44c4;
  uStack_20 = uRam0000000146ae44b8 & uRam0000000146ae44c8;
  uStack_1c = uRam0000000146ae44bc & uRam0000000146ae44cc;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam0000000146ae44bc;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14208e4e0(param_1,puVar1);
  return;
}



// FUNCTION 142098bd0 FUN_142098bd0 body=215 status=ok
// SIG undefined FUN_142098bd0(void)

void FUN_142098bd0(longlong *param_1,longlong param_2)

{
  undefined8 local_res8;
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
  (**(code **)(*param_1 + 0x2a0))(param_1,local_18,local_res8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142098cb0 FUN_142098cb0 body=162 status=ok
// SIG undefined FUN_142098cb0(void)

void FUN_142098cb0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x3b8))(param_1,puVar1);
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_18);
  return;
}



// FUNCTION 142098d60 FUN_142098d60 body=295 status=ok
// SIG undefined FUN_142098d60(void)

void FUN_142098d60(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  longlong local_58 [2];
  undefined2 local_48 [2];
  undefined4 local_44;
  undefined4 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_58[0] = 0;
  local_58[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_48[0] = 0;
  local_40 = 0;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar1 = local_48;
  if (*(undefined2 **)(param_2 + 0x38) != (undefined2 *)0x0) {
    puVar1 = *(undefined2 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14208f550(param_1,local_58,puVar1);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142098e90 FUN_142098e90 body=370 status=ok
// SIG undefined FUN_142098e90(void)

void FUN_142098e90(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_res10;
  longlong local_28;
  undefined8 local_20;
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
  local_28 = 0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  plVar1 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14208f7a0(param_1,local_res10,local_18,plVar1);
  if ((int)local_20 != 0) {
    plVar1 = (longlong *)(local_28 + 0x10);
    iVar2 = (int)local_20;
    do {
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142099010 FUN_142099010 body=134 status=ok
// SIG undefined FUN_142099010(void)

void FUN_142099010(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x3a0))(param_1,local_res8[0] != 0);
  return;
}



// FUNCTION 1420990a0 FUN_1420990a0 body=134 status=ok
// SIG undefined FUN_1420990a0(void)

void FUN_1420990a0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x3a8))(param_1,local_res8[0] != 0);
  return;
}



// FUNCTION 142099130 execMuteVOIP body=134 status=ok
// SIG undefined execMuteVOIP(void)

void UGunfireTechRequirementsImpl::execMuteVOIP(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x298))(param_1,local_res8[0] != 0);
  return;
}



// FUNCTION 1420991c0 FUN_1420991c0 body=168 status=ok
// SIG undefined FUN_1420991c0(void)

void FUN_1420991c0(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0x3f800000;
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0x3f800000;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x3f800000;
  local_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x2f0))(param_1,puVar1);
  return;
}



// FUNCTION 142099270 FUN_142099270 body=278 status=ok
// SIG undefined FUN_142099270(void)

void FUN_142099270(longlong *param_1,longlong param_2)

{
  undefined4 local_res8 [2];
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
  (**(code **)(*param_1 + 0x350))(param_1,local_18,local_res10[0],local_res8[0]);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142099390 FUN_142099390 body=190 status=ok
// SIG undefined FUN_142099390(void)

void FUN_142099390(undefined8 param_1,longlong param_2)

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
  FUN_14208ff10(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 142099450 FUN_142099450 body=278 status=ok
// SIG undefined FUN_142099450(void)

void FUN_142099450(longlong *param_1,longlong param_2)

{
  undefined4 local_res8 [2];
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
  (**(code **)(*param_1 + 0x360))(param_1,local_18,local_res10[0],local_res8[0]);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142099570 FUN_142099570 body=190 status=ok
// SIG undefined FUN_142099570(void)

void FUN_142099570(undefined8 param_1,longlong param_2)

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
  FUN_142090300(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 142099630 FUN_142099630 body=122 status=ok
// SIG undefined FUN_142099630(void)

void FUN_142099630(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2c0))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1420996b0 FUN_1420996b0 body=376 status=ok
// SIG undefined FUN_1420996b0(void)

void FUN_1420996b0(longlong *param_1,longlong param_2)

{
  undefined2 *puVar1;
  longlong local_68 [4];
  undefined2 local_48 [2];
  undefined4 local_44;
  undefined4 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_68[2] = 0;
  local_68[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_48[0] = 0;
  local_40 = 0;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar1 = local_48;
  if (*(undefined2 **)(param_2 + 0x38) != (undefined2 *)0x0) {
    puVar1 = *(undefined2 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x2f8))(param_1,local_68 + 2,local_68,puVar1);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142099830 FUN_142099830 body=386 status=ok
// SIG undefined FUN_142099830(void)

void FUN_142099830(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong local_38;
  undefined8 local_30;
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
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x308))(param_1,local_28 + 2,local_28,plVar1);
  if ((int)local_30 != 0) {
    plVar1 = (longlong *)(local_38 + 0x10);
    iVar2 = (int)local_30;
    do {
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1420999c0 FUN_1420999c0 body=217 status=ok
// SIG undefined FUN_1420999c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420999c0(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = _DAT_146ae44b0 & _DAT_146ae44c0;
  uStack_24 = uRam0000000146ae44b4 & uRam0000000146ae44c4;
  uStack_20 = uRam0000000146ae44b8 & uRam0000000146ae44c8;
  uStack_1c = uRam0000000146ae44bc & uRam0000000146ae44cc;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam0000000146ae44bc;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x2e0))(param_1,puVar1);
  return;
}



// FUNCTION 142099aa0 FUN_142099aa0 body=122 status=ok
// SIG undefined FUN_142099aa0(void)

void FUN_142099aa0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2b0))(param_1,local_res8[0]);
  return;
}



// FUNCTION 142099b20 FUN_142099b20 body=305 status=ok
// SIG undefined FUN_142099b20(void)

void FUN_142099b20(longlong *param_1,longlong param_2)

{
  undefined4 local_res8 [2];
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_28 [4];
  
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
  (**(code **)(*param_1 + 0x2a8))(param_1,local_28[0],local_res20[0],local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 142099c60 FUN_142099c60 body=218 status=ok
// SIG undefined FUN_142099c60(void)

void FUN_142099c60(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
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
  (**(code **)(*param_1 + 0x340))(param_1,local_18,local_res8[0] != 0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142099d40 FUN_142099d40 body=130 status=ok
// SIG undefined FUN_142099d40(void)

void FUN_142099d40(undefined8 param_1,longlong param_2)

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
  FUN_142090ed0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 142099dd0 FUN_142099dd0 body=134 status=ok
// SIG undefined FUN_142099dd0(void)

void FUN_142099dd0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x278))(param_1,local_res8[0] != 0);
  return;
}



// FUNCTION 142099e60 FUN_142099e60 body=151 status=ok
// SIG undefined FUN_142099e60(void)

void FUN_142099e60(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = (**(code **)(*param_1 + 0x278))(param_1,local_res8[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142099f00 FUN_142099f00 body=20 status=ok
// SIG undefined FUN_142099f00(void)

void FUN_142099f00(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1420a0810(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 142099f20 FUN_142099f20 body=78 status=ok
// SIG undefined FUN_142099f20(void)

undefined1 FUN_142099f20(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c120();
  FUN_1419e0a40(param_2,param_1 + 0x110);
  FUN_1419e0a40(param_2,param_1 + 0x116);
  return uVar1;
}



// FUNCTION 142099f80 FUN_142099f80 body=364 status=ok
// SIG undefined FUN_142099f80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_142099f80(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  undefined2 local_138;
  undefined4 local_136;
  undefined2 local_132 [125];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_38 = 1;
  TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,0);
  lVar3 = (longlong)(int)local_38;
  local_138 = 0;
  local_136 = 0x280004;
  local_132[0] = 0;
  iVar1 = (int)local_38 + 1;
  if (local_38._4_4_ < iVar1) {
    uVar2 = local_38 & 0xffffffff;
    local_38._0_4_ = iVar1;
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,uVar2);
    iVar1 = (int)local_38;
  }
  local_38._0_4_ = iVar1;
  (&local_138)[lVar3 * 4] = 0x1000;
  *(undefined4 *)((longlong)local_132 + (lVar3 * 2 + -1) * 4) = 0x280102;
  *(undefined2 *)((longlong)local_132 + lVar3 * 2 * 4) = 0;
  iVar1 = (int)local_38;
  lVar3 = (longlong)(int)local_38;
  local_38._0_4_ = (int)local_38 + 1;
  if (local_38._4_4_ < (int)local_38) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,iVar1);
  }
  (&local_138)[lVar3 * 4] = 0x1800;
  *(undefined4 *)((longlong)local_132 + (lVar3 * 2 + -1) * 4) = 0x280202;
  *(undefined2 *)((longlong)local_132 + lVar3 * 2 * 4) = 0;
  iVar1 = (int)local_38;
  lVar3 = (longlong)(int)local_38;
  local_38._0_4_ = (int)local_38 + 1;
  if (local_38._4_4_ < (int)local_38) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,iVar1);
  }
  (&local_138)[lVar3 * 4] = 0x2000;
  *(undefined4 *)((longlong)local_132 + (lVar3 * 2 + -1) * 4) = 0x280308;
  *(undefined2 *)((longlong)local_132 + lVar3 * 2 * 4) = 0;
  iVar1 = (int)local_38;
  lVar3 = (longlong)(int)local_38;
  local_38._0_4_ = (int)local_38 + 1;
  if (local_38._4_4_ < (int)local_38) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,iVar1);
  }
  (&local_138)[lVar3 * 4] = 0x2400;
  *(undefined4 *)((longlong)local_132 + (lVar3 * 2 + -1) * 4) = 0x28040f;
  *(undefined2 *)((longlong)local_132 + lVar3 * 2 * 4) = 0;
  (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,local_148,&DAT_146ab6e78,&local_138);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_148);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_148);
  return;
}



// FUNCTION 14209a0f0 FUN_14209a0f0 body=74 status=ok
// SIG undefined FUN_14209a0f0(void)

undefined8 * FUN_14209a0f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f95718;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14209a140 FUN_14209a140 body=426 status=ok
// SIG undefined FUN_14209a140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_14209a140(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  undefined2 local_138;
  undefined4 local_136;
  undefined2 local_132 [125];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_38 = 1;
  TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,0);
  lVar3 = (longlong)(int)local_38;
  local_138 = 0;
  local_136 = 0x280004;
  local_132[0] = 0;
  iVar1 = (int)local_38 + 1;
  if (local_38._4_4_ < iVar1) {
    uVar2 = local_38 & 0xffffffff;
    local_38._0_4_ = iVar1;
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,uVar2);
    iVar1 = (int)local_38;
  }
  local_38._0_4_ = iVar1;
  (&local_138)[lVar3 * 4] = 0x1000;
  *(undefined4 *)((longlong)local_132 + (lVar3 * 2 + -1) * 4) = 0x280102;
  *(undefined2 *)((longlong)local_132 + lVar3 * 2 * 4) = 0;
  iVar1 = (int)local_38;
  lVar3 = (longlong)(int)local_38;
  local_38._0_4_ = (int)local_38 + 1;
  if (local_38._4_4_ < (int)local_38) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,iVar1);
  }
  (&local_138)[lVar3 * 4] = 0x1800;
  *(undefined4 *)((longlong)local_132 + (lVar3 * 2 + -1) * 4) = 0x280202;
  *(undefined2 *)((longlong)local_132 + lVar3 * 2 * 4) = 0;
  iVar1 = (int)local_38;
  lVar3 = (longlong)(int)local_38;
  local_38._0_4_ = (int)local_38 + 1;
  if (local_38._4_4_ < (int)local_38) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,iVar1);
  }
  (&local_138)[lVar3 * 4] = 0x2000;
  *(undefined4 *)((longlong)local_132 + (lVar3 * 2 + -1) * 4) = 0x280308;
  *(undefined2 *)((longlong)local_132 + lVar3 * 2 * 4) = 0;
  iVar1 = (int)local_38;
  lVar3 = (longlong)(int)local_38;
  local_38._0_4_ = (int)local_38 + 1;
  if (local_38._4_4_ < (int)local_38) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,iVar1);
  }
  (&local_138)[lVar3 * 4] = 0x2400;
  *(undefined4 *)((longlong)local_132 + (lVar3 * 2 + -1) * 4) = 0x28040f;
  *(undefined2 *)((longlong)local_132 + lVar3 * 2 * 4) = 0;
  iVar1 = (int)local_38;
  lVar3 = (longlong)(int)local_38;
  local_38._0_4_ = (int)local_38 + 1;
  if (local_38._4_4_ < (int)local_38) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,iVar1);
  }
  (&local_138)[lVar3 * 4] = 1;
  *(undefined4 *)((longlong)local_132 + (lVar3 * 2 + -1) * 4) = 0x100504;
  *(undefined2 *)((longlong)local_132 + lVar3 * 2 * 4) = 1;
  (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,local_148,&DAT_146ab6e78,&local_138);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_148);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_148);
  return;
}



// FUNCTION 14209a300 FUN_14209a300 body=326 status=ok
// SIG undefined FUN_14209a300(void)

undefined8 * FUN_14209a300(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)operator_new(0x50);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 8);
    FSlateFontAtlas::FSlateFontAtlas(puVar2,uVar1,uVar1);
    *puVar2 = &PTR__scalar_deleting_destructor__144f96610;
    puVar2[1] = &PTR_LAB_144f96630;
    puVar3 = (undefined8 *)operator_new(0x90);
    if (puVar3 == (undefined8 *)0x0) {
      puVar2[9] = 0;
    }
    else {
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 3) = 4;
      puVar3[4] = 0;
      puVar3[5] = 0;
      *(undefined1 *)(puVar3 + 7) = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0xc7efffffe0000000;
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      *(undefined4 *)(puVar3 + 0xe) = 0;
      *(undefined2 *)((longlong)puVar3 + 0x74) = 0;
      *(undefined1 *)((longlong)puVar3 + 0x76) = 0;
      *puVar3 = &PTR_LAB_144f96550;
      *(undefined4 *)(puVar3 + 0xf) = uVar1;
      *(undefined4 *)((longlong)puVar3 + 0x7c) = uVar1;
      puVar3[2] = &PTR_LAB_144f96570;
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      puVar2[9] = puVar3;
    }
  }
  puVar3 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)operator_new(0x18);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    puVar4[2] = puVar2;
    puVar3 = puVar4;
  }
  *param_2 = puVar2;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar2,puVar2);
  return param_2;
}



// FUNCTION 14209a450 FUN_14209a450 body=43 status=ok
// SIG undefined FUN_14209a450(void)

undefined8 * FUN_14209a450(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_144f95758;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14209a480 FUN_14209a480 body=89 status=ok
// SIG undefined FUN_14209a480(void)

undefined1 FUN_14209a480(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc4);
  FUN_1419e0a40(param_2,param_1 + 200);
  FUN_1419e0a40(param_2,param_1 + 0xce);
  return 0;
}



// FUNCTION 14209a4e0 Serialize body=104 status=ok
// SIG undefined Serialize(void)

undefined1 FSlateDebugBatchingPS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc4);
  FUN_1419e0a40(param_2,param_1 + 200);
  FUN_1419e0a40(param_2,param_1 + 0xce);
  FUN_1419e0a40(param_2,param_1 + 0xd8);
  return 0;
}



// FUNCTION 14209a550 Serialize body=149 status=ok
// SIG undefined Serialize(void)

undefined1 FSlatePostProcessBlurPS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xd8);
  FUN_1419e0a40(param_2,param_1 + 0xde);
  FUN_1419e0a40(param_2,param_1 + 0xe4);
  FUN_1419e0a40(param_2,param_1 + 0xea);
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc4);
  FUN_1419e0a40(param_2,param_1 + 200);
  FUN_1419e0a40(param_2,param_1 + 0xce);
  return 0;
}



// FUNCTION 14209a5f0 FUN_14209a5f0 body=193 status=ok
// SIG undefined FUN_14209a5f0(void)

undefined8 * FUN_14209a5f0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  FUN_1420a52a0();
  lVar1 = operator_new(0x2e0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_20 = *(longlong *)(param_1 + 0x10);
    local_28 = *(undefined8 *)(param_1 + 8);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    local_18 = *(undefined8 *)(param_1 + 0x18);
    local_10 = *(longlong *)(param_1 + 0x20);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    uVar2 = FUN_14209cba0(lVar1,&local_18,&local_28);
  }
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = uVar2;
  }
  *param_2 = uVar2;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,uVar2,uVar2);
  return param_2;
}



// FUNCTION 14209a6c0 FUN_14209a6c0 body=399 status=ok
// SIG undefined FUN_14209a6c0(void)

undefined8 * FUN_14209a6c0(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  FUN_1420a52a0();
  lVar3 = operator_new(0x130);
  plVar7 = (longlong *)0x0;
  plVar4 = plVar7;
  if (lVar3 != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    local_28 = *(undefined8 *)(param_1 + 8);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    local_18 = *(undefined8 *)(param_1 + 0x18);
    local_10 = *(longlong *)(param_1 + 0x20);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    plVar4 = (longlong *)FUN_14209c480(lVar3,&local_18,&local_28,param_3);
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar6 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_144f95ba0;
    plVar5[2] = (longlong)plVar4;
    plVar6 = plVar5;
  }
  *param_2 = plVar4;
  param_2[1] = plVar6;
  plVar5 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar2 = *piVar1;
        if (iVar2 == 0) {
          *piVar1 = 0;
          iVar2 = 0;
        }
        UNLOCK();
        if (0 < iVar2) {
          return param_2;
        }
      }
      plVar6 = (longlong *)param_2[1];
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar4;
    plVar4 = (longlong *)plVar5[1];
    if (plVar6 != plVar4) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar4 = (longlong *)plVar5[1];
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      plVar5[1] = (longlong)plVar6;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar6 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 14209a850 CreateSlateFontAtlasFactory body=121 status=ok
// SIG undefined CreateSlateFontAtlasFactory(void)

undefined8 *
FSlateRHIRendererModule::CreateSlateFontAtlasFactory(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = operator_new(0x10);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FSlateRHIFontAtlasFactory::FSlateRHIFontAtlasFactory(lVar1);
  }
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_FUN_143fd0100;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = uVar2;
  }
  *param_2 = uVar2;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,uVar2,uVar2);
  return param_2;
}



// FUNCTION 14209a8d0 FUN_14209a8d0 body=319 status=ok
// SIG undefined FUN_14209a8d0(void)

undefined8 * FUN_14209a8d0(undefined8 param_1,undefined8 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  puVar3 = (undefined8 *)operator_new(0x88);
  puVar4 = (undefined8 *)0x0;
  puVar7 = puVar4;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR__scalar_deleting_destructor__144f96680;
    puVar5 = puVar3 + 1;
    *puVar5 = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *(undefined4 *)(puVar3 + 8) = 4;
    puVar3[9] = 0;
    puVar3[10] = 0;
    *(undefined1 *)(puVar3 + 0xc) = 0;
    puVar3[0xd] = 0;
    puVar3[7] = &PTR__scalar_deleting_destructor__144f96080;
    *(undefined4 *)(puVar3 + 0xe) = 0;
    *(undefined4 *)(puVar3 + 0xf) = 0;
    iVar2 = 100;
    if (99 < param_3) {
      iVar2 = param_3;
    }
    *(undefined4 *)((longlong)puVar3 + 0x84) = 0;
    *(int *)((longlong)puVar3 + 0x74) = iVar2 << 4;
    cVar1 = IsInRenderingThread();
    if (cVar1 == '\0') {
      FUN_141edf270(puVar3 + 7);
    }
    else {
      (**(code **)(puVar3[7] + 0x28))();
    }
    lVar6 = 3;
    do {
      if (*(int *)((longlong)puVar5 + 0xc) < param_3) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(puVar5,param_3);
      }
      puVar5 = puVar5 + 2;
      lVar6 = lVar6 + -1;
      puVar7 = puVar3;
    } while (lVar6 != 0);
  }
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = puVar7;
    puVar4 = puVar3;
  }
  *param_2 = puVar7;
  param_2[1] = puVar4;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar7,puVar7);
  return param_2;
}



// FUNCTION 14209aa10 `scalar_deleting_destructor' body=186 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSlateRHIRendererModule::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[4];
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
  plVar4 = (longlong *)param_1[2];
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
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14209aad0 Serialize body=104 status=ok
// SIG undefined Serialize(void)

undefined1 FSlatePostProcessDownsamplePS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xd8);
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc4);
  FUN_1419e0a40(param_2,param_1 + 200);
  FUN_1419e0a40(param_2,param_1 + 0xce);
  return 0;
}



// FUNCTION 14209ab40 FUN_14209ab40 body=89 status=ok
// SIG undefined FUN_14209ab40(void)

undefined8 * FUN_14209ab40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f95b60;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_144f95718;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14209aba0 FUN_14209aba0 body=9 status=ok
// SIG undefined FUN_14209aba0(void)

void FUN_14209aba0(longlong param_1)

{
  FUN_1420a4340(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 14209abb0 FUN_14209abb0 body=189 status=ok
// SIG undefined FUN_14209abb0(void)

undefined1 FUN_14209abb0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(uVar1,param_1 + 200);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xcc);
  FUN_1419e0b60(uVar1,param_1 + 0xd0);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xd4);
  FUN_1419e0b60(uVar1,param_1 + 0xd8);
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0xdc);
  FUN_1419e0a40(uVar1,param_1 + 0xe2);
  FUN_1419e0b60(param_2,param_1 + 0xc4);
  FUN_1419e0a40(param_2,param_1 + 0xe8);
  return 0;
}



// FUNCTION 14209ac70 FUN_14209ac70 body=89 status=ok
// SIG undefined FUN_14209ac70(void)

undefined8 * FUN_14209ac70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f95d70;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_144f95718;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14209acd0 FUN_14209acd0 body=108 status=ok
// SIG undefined FUN_14209acd0(void)

undefined1 FUN_14209acd0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c120();
  FUN_1419e0a40(param_2,param_1 + 0x110);
  FUN_1419e0a40(param_2,param_1 + 0x116);
  FUN_1419e0b60(param_2,param_1 + 0x11c);
  FUN_1419e0b60(param_2,param_1 + 0x120);
  return uVar1;
}



// FUNCTION 14209ad40 FUN_14209ad40 body=613 status=ok
// SIG undefined FUN_14209ad40(void)

uint * FUN_14209ad40(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  longlong lVar9;
  int iVar10;
  void *_Dst;
  ulonglong uVar11;
  uint uVar12;
  ulonglong *_Src;
  bool bVar13;
  uint local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = (ulonglong)*(uint *)(param_1 + 1);
    iVar10 = *(uint *)(param_1 + 1) + 1;
    *(int *)(param_1 + 1) = iVar10;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = (ulonglong)(int)param_1[6];
    iVar2 = *(int *)(uVar11 * 0x20 + 4 + *param_1);
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  uVar6 = (uint)uVar11;
  *param_2 = uVar6;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 +
                   (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
  _Src = (ulonglong *)((longlong)(int)uVar6 * 0x20 + *param_1);
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  _Src[1] = 0;
  _Src[2] = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    uVar6 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      _Dst = (void *)(lVar9 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
        uVar11 = (ulonglong)*param_2;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,uVar11 & 0xffffffff,1);
      *param_2 = uVar6;
      uVar8 = (undefined1)local_res8[0];
      goto LAB_14209af7c;
    }
  }
  uVar8 = 0;
  cVar4 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar4 == '\0') {
    iVar10 = (int)(*_Src >> 4);
    uVar7 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar12 = -(uVar7 + iVar10) ^ uVar7 >> 0xd;
    uVar6 = (iVar10 - uVar7) - uVar12 ^ uVar12 >> 0xc;
    uVar7 = (uVar7 - uVar6) - uVar12 ^ uVar6 << 0x10;
    uVar12 = (uVar12 - uVar7) - uVar6 ^ uVar7 >> 5;
    uVar6 = (uVar6 - uVar7) - uVar12 ^ uVar12 >> 3;
    uVar7 = (uVar7 - uVar6) - uVar12 ^ uVar6 << 10;
    uVar6 = ((uVar12 - uVar7) - uVar6 ^ uVar7 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar6;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(uint *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_14209af7c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar8;
  }
  return param_2;
}



// FUNCTION 14209afb0 FUN_14209afb0 body=704 status=ok
// SIG undefined FUN_14209afb0(void)

int * FUN_14209afb0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  bool local_res8;
  
  iVar11 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar10 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x28);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x28) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar12;
  local_res8 = false;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar13 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar12 & 0x1f);
  plVar13 = (longlong *)(*param_1 + (longlong)iVar12 * 0x28);
  lVar4 = *(longlong *)*param_3;
  *plVar13 = lVar4;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *(undefined2 *)(plVar13 + 3) = 0x101;
  *(undefined4 *)(plVar13 + 4) = 0xffffffff;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar14 != 1) {
    iVar10 = iVar15;
    if (uVar14 != 0) {
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar8 +
                      ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar6 != -1) {
        do {
          iVar10 = iVar6;
          if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x28) == lVar4) break;
          iVar6 = *(int *)(*param_1 + 0x20 + (longlong)iVar6 * 0x28);
          iVar10 = iVar15;
        } while (iVar6 != -1);
      }
    }
    local_res8 = iVar10 != -1;
    if (local_res8) {
      lVar4 = *param_1;
      plVar8 = *(longlong **)(lVar4 + 0x10 + (longlong)iVar10 * 0x28);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar10 * 0x28),plVar13,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar10;
      goto LAB_14209b24a;
    }
  }
  if (3 < uVar14) {
    uVar7 = (uVar14 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar15 = 0x20;
    cVar9 = '\0';
    if (uVar7 != 0) {
      iVar15 = 0x1f - iVar11;
    }
    uVar7 = (uVar14 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar7 != 0) {
      cVar9 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar15 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    uVar14 = (int)((ulonglong)*plVar13 >> 0x20) + (int)*plVar13 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 0x24) = uVar14;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 4) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         iVar12;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14209b24a:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 14209b270 FUN_14209b270 body=701 status=ok
// SIG undefined FUN_14209b270(void)

int * FUN_14209b270(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  char cVar13;
  uint *_Src;
  void *_Dst;
  bool local_res8;
  int local_res10 [2];
  undefined8 *local_res18;
  longlong local_res20;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  
  iVar11 = 1;
  local_res20 = param_4;
  local_res18 = param_3;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar5 = *(int *)((longlong)iVar10 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar10;
  local_res8 = false;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar4 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar4 = *puVar4 | 1 << ((byte)iVar10 & 0x1f);
  puVar4 = (uint *)*local_res18;
  puVar6 = (undefined8 *)local_res18[1];
  _Src = (uint *)((longlong)iVar10 * 0x20 + *param_1);
  *_Src = *puVar4;
  _Src[1] = puVar4[1];
  *(undefined8 *)(_Src + 2) = *puVar6;
  *(undefined8 *)(_Src + 4) = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  _Src[6] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_68 = *_Src;
    local_64 = _Src[1];
    local_60 = local_68;
    local_5c = local_64;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,&local_68);
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_res10[0] * 0x20 + *param_1);
      plVar9 = *(longlong **)((longlong)_Dst + 0x10);
      iVar11 = local_res10[0];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          iVar10 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          iVar11 = local_res10[0];
          if (iVar10 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
            iVar11 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar11;
      goto LAB_14209b509;
    }
  }
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar12) {
    uVar8 = (uVar12 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar10 = 0x20;
    cVar13 = '\0';
    if (uVar8 != 0) {
      iVar10 = 0x1f - iVar11;
    }
    uVar8 = (uVar12 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar8 != 0) {
      cVar13 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    uVar12 = (*_Src ^ _Src[1]) & (int)param_1[9] - 1U;
    _Src[7] = uVar12;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    _Src[6] = *(uint *)((longlong)plVar9 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
    local_res20 = param_4;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
    local_res20 = param_4;
  }
LAB_14209b509:
  if (local_res20 != 0) {
    *(bool *)local_res20 = local_res8;
  }
  return param_2;
}



// FUNCTION 14209b530 FUN_14209b530 body=595 status=ok
// SIG undefined FUN_14209b530(void)

int * FUN_14209b530(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  char cVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  uint *_Src;
  void *_Dst;
  bool local_res8;
  int local_res10 [2];
  uint local_res20;
  uint local_res24;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar5 = *(int *)((longlong)iVar10 * 0x20 + 4 + *param_1);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar10;
  local_res8 = false;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar3 = *puVar3 | 1 << ((byte)iVar10 & 0x1f);
  puVar3 = (uint *)*param_3;
  puVar6 = (undefined8 *)param_3[1];
  _Src = (uint *)((longlong)iVar10 * 0x20 + *param_1);
  *_Src = *puVar3;
  _Src[1] = puVar3[1];
  *(undefined8 *)(_Src + 2) = *puVar6;
  *(undefined8 *)(_Src + 4) = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  _Src[6] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res20 = *_Src;
    local_res24 = _Src[1];
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,&local_res20);
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_res10[0] * 0x20 + *param_1);
      plVar9 = *(longlong **)((longlong)_Dst + 0x10);
      iVar10 = local_res10[0];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          iVar10 = local_res10[0];
          if (iVar4 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
            iVar10 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar10;
      goto LAB_14209b75a;
    }
  }
  cVar8 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar8 == '\0') {
    uVar11 = (*_Src ^ _Src[1]) & (int)param_1[9] - 1U;
    _Src[7] = uVar11;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    _Src[6] = *(uint *)((longlong)plVar9 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_14209b75a:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 14209b790 FUN_14209b790 body=574 status=ok
// SIG undefined FUN_14209b790(void)

int * FUN_14209b790(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  undefined4 *_Src;
  void *_Dst;
  bool local_res8;
  int local_res10 [2];
  
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
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x30);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x30) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar12;
  local_res8 = false;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar11 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar12 & 0x1f);
  puVar5 = (undefined4 *)*param_3;
  puVar6 = (undefined8 *)param_3[1];
  _Src = (undefined4 *)((longlong)iVar12 * 0x30 + *param_1);
  *_Src = *puVar5;
  _Src[1] = puVar5[1];
  *(undefined8 *)(_Src + 2) = *(undefined8 *)(puVar5 + 2);
  _Src[4] = puVar5[4];
  *(undefined8 *)(_Src + 6) = *puVar6;
  *(undefined8 *)(_Src + 8) = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  _Src[10] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,0>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,_Src);
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_res10[0] * 0x30 + *param_1);
      plVar11 = *(longlong **)((longlong)_Dst + 0x20);
      iVar12 = local_res10[0];
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar11 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          iVar12 = local_res10[0];
          if (iVar4 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
            iVar12 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar12;
      goto LAB_14209b9a8;
    }
  }
  cVar8 = TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,0>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar8 == '\0') {
    iVar12 = *param_2;
    uVar10 = GetTypeHash(_Src);
    uVar10 = (int)param_1[9] - 1U & uVar10;
    _Src[0xb] = uVar10;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    _Src[10] = *(undefined4 *)
                ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar12;
  }
LAB_14209b9a8:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 14209b9d0 FUN_14209b9d0 body=631 status=ok
// SIG undefined FUN_14209b9d0(void)

int * FUN_14209b9d0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong *_Src;
  void *_Dst;
  bool bVar12;
  
  iVar9 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar7 = *(int *)((longlong)iVar11 * 0x20 + 4 + *param_1);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar3 = *puVar3 | 1 << ((byte)iVar11 & 0x1f);
  plVar6 = (longlong *)param_3[1];
  bVar12 = false;
  _Src = (longlong *)((longlong)iVar11 * 0x20 + *param_1);
  *_Src = *(longlong *)*param_3;
  _Src[1] = *plVar6;
  _Src[2] = plVar6[1];
  plVar6[1] = 0;
  *plVar6 = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar11 != 1) {
    lVar4 = *_Src;
    iVar8 = iVar9;
    if (iVar11 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(longlong *)((longlong)iVar7 * 0x20 + *param_1) == lVar4) break;
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *param_1);
          iVar8 = iVar9;
        } while (iVar7 != -1);
      }
    }
    bVar12 = iVar8 != -1;
    if (bVar12) {
      _Dst = (void *)((longlong)iVar8 * 0x20 + *param_1);
      plVar6 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar8;
      goto LAB_14209bc1f;
    }
  }
  cVar5 = TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar11,0);
  if (cVar5 == '\0') {
    uVar10 = (int)((ulonglong)*_Src >> 0x20) + (int)*_Src & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar10;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_14209bc1f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 14209bc50 HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FName,FNewTextureInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FNewTextureInfo>,TDefaultMapHashableKeyFuncs<FName,FNewTextureInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FNewTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNewTextureInfo,0>_>::FValueComparisonClass<FCompareFNewTextureInfoByTextureSize>_>_>_>_> body=562 status=ok
// SIG undefined HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FName,FNewTextureInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FNewTextureInfo>,TDefaultMapHashableKeyFuncs<FName,FNewTextureInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FNewTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNewTextureInfo,0>_>::FValueComparisonClass<FCompareFNewTextureInfoByTextureSize>_>_>_>_>(void)

void AlgoImpl::
     HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FName,FNewTextureInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FNewTextureInfo>,TDefaultMapHashableKeyFuncs<FName,FNewTextureInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FNewTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNewTextureInfo,0>_>::FValueComparisonClass<FCompareFNewTextureInfoByTextureSize>_>_>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  
  iVar10 = (param_2 + -2) / 2;
  if (-1 < iVar10) {
    iVar11 = iVar10 * 2 + 1;
    iVar4 = iVar11;
    iVar12 = iVar10;
joined_r0x00014209bc7a:
    do {
      if (iVar11 < param_2) {
        iVar11 = iVar10 * 2;
        iVar14 = iVar11 + 1;
        if (iVar11 + 2 < param_2) {
          if ((uint)(*(int *)(param_1[(longlong)iVar14 * 5 + 1] + 0x14) +
                    *(int *)(param_1[(longlong)iVar14 * 5 + 1] + 0x10)) <
              (uint)(*(int *)(param_1[(longlong)iVar11 * 5 + 0xb] + 0x14) +
                    *(int *)(param_1[(longlong)iVar11 * 5 + 0xb] + 0x10))) {
            iVar14 = iVar11;
          }
          iVar14 = iVar14 + 1;
        }
        puVar13 = param_1 + (longlong)iVar14 * 5;
        puVar1 = param_1 + (longlong)iVar10 * 5;
        if ((uint)(*(int *)(puVar13[1] + 0x14) + *(int *)(puVar13[1] + 0x10)) <
            (uint)(*(int *)(param_1[(longlong)iVar10 * 5 + 1] + 0x14) +
                  *(int *)(param_1[(longlong)iVar10 * 5 + 1] + 0x10))) {
          if (puVar1 != puVar13) {
            uVar5 = puVar13[1];
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            uVar8 = puVar1[2];
            uVar9 = puVar1[3];
            uVar3 = puVar1[4];
            *puVar1 = *puVar13;
            puVar1[1] = uVar5;
            uVar5 = puVar13[3];
            puVar1[2] = puVar13[2];
            puVar1[3] = uVar5;
            puVar1[4] = puVar13[4];
            *puVar13 = uVar6;
            puVar13[1] = uVar7;
            puVar13[2] = uVar8;
            puVar13[3] = uVar9;
            puVar13[4] = uVar3;
          }
          iVar11 = iVar14 * 2 + 1;
          iVar10 = iVar14;
          goto joined_r0x00014209bc7a;
        }
      }
      iVar11 = iVar4 + -2;
      iVar10 = iVar12 + -1;
      iVar4 = iVar11;
      iVar12 = iVar10;
    } while (-1 < iVar10);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar13 = param_1 + (longlong)param_2 * 5;
    do {
      if (param_1 != puVar13) {
        uVar5 = puVar13[1];
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar8 = param_1[2];
        uVar9 = param_1[3];
        uVar3 = param_1[4];
        *param_1 = *puVar13;
        param_1[1] = uVar5;
        uVar5 = puVar13[3];
        param_1[2] = puVar13[2];
        param_1[3] = uVar5;
        param_1[4] = puVar13[4];
        *puVar13 = uVar6;
        puVar13[1] = uVar7;
        puVar13[2] = uVar8;
        puVar13[3] = uVar9;
        puVar13[4] = uVar3;
      }
      iVar10 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar10 * 2;
          iVar11 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if ((uint)(*(int *)(param_1[(longlong)iVar11 * 5 + 1] + 0x14) +
                      *(int *)(param_1[(longlong)iVar11 * 5 + 1] + 0x10)) <
                (uint)(*(int *)(param_1[(longlong)iVar4 * 5 + 0xb] + 0x14) +
                      *(int *)(param_1[(longlong)iVar4 * 5 + 0xb] + 0x10))) {
              iVar11 = iVar4;
            }
            iVar11 = iVar11 + 1;
          }
          puVar1 = param_1 + (longlong)iVar11 * 5;
          puVar2 = param_1 + (longlong)iVar10 * 5;
          if ((uint)(*(int *)(param_1[(longlong)iVar10 * 5 + 1] + 0x14) +
                    *(int *)(param_1[(longlong)iVar10 * 5 + 1] + 0x10)) <=
              (uint)(*(int *)(puVar1[1] + 0x14) + *(int *)(puVar1[1] + 0x10))) break;
          if (puVar2 != puVar1) {
            uVar5 = puVar1[1];
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            uVar8 = puVar2[2];
            uVar9 = puVar2[3];
            uVar3 = puVar2[4];
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            uVar5 = puVar1[3];
            puVar2[2] = puVar1[2];
            puVar2[3] = uVar5;
            puVar2[4] = puVar1[4];
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            puVar1[2] = uVar8;
            puVar1[3] = uVar9;
            puVar1[4] = uVar3;
          }
          iVar10 = iVar11;
        } while (iVar11 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar13 = puVar13 + -5;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14209be90 IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FName,FNewTextureInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FNewTextureInfo>,TDefaultMapHashableKeyFuncs<FName,FNewTextureInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FNewTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNewTextureInfo,0>_>::FValueComparisonClass<FCompareFNewTextureInfoByTextureSize>_>_>_>_> body=946 status=ok
// SIG undefined IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FName,FNewTextureInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FNewTextureInfo>,TDefaultMapHashableKeyFuncs<FName,FNewTextureInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FNewTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNewTextureInfo,0>_>::FValueComparisonClass<FCompareFNewTextureInfoByTextureSize>_>_>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FName,FNewTextureInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FNewTextureInfo>,TDefaultMapHashableKeyFuncs<FName,FNewTextureInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FNewTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNewTextureInfo,0>_>::FValueComparisonClass<FCompareFNewTextureInfoByTextureSize>_>_>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  float fVar16;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + param_2 * 0x28 + -0x28;
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar16 = ::_guard_xfg_dispatch_icall_nop(fVar16);
    local_328 = (undefined4)(longlong)(fVar16 + fVar16);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar15 = &local_338;
    do {
      puVar14 = (undefined8 *)*plVar15;
      puVar9 = (undefined8 *)plVar15[1];
      lVar1 = plVar15[2];
      local_348._0_4_ = (int)lVar1;
      lVar8 = ((longlong)puVar9 - (longlong)puVar14) / 0x28 + 1;
      puVar13 = puVar14;
      if ((int)local_348 != 0) {
LAB_14209bf80:
        if (8 < lVar8) {
          if (lVar8 < 0) {
            lVar8 = lVar8 + 1;
          }
          puVar14 = puVar13 + (lVar8 >> 1) * 5;
          if (puVar14 != puVar13) {
            uVar3 = puVar13[1];
            uVar4 = *puVar14;
            uVar5 = puVar14[1];
            uVar6 = puVar14[2];
            uVar7 = puVar14[3];
            uVar2 = puVar14[4];
            *puVar14 = *puVar13;
            puVar14[1] = uVar3;
            uVar3 = puVar13[3];
            puVar14[2] = puVar13[2];
            puVar14[3] = uVar3;
            puVar14[4] = puVar13[4];
            *puVar13 = uVar4;
            puVar13[1] = uVar5;
            puVar13[2] = uVar6;
            puVar13[3] = uVar7;
            puVar13[4] = uVar2;
          }
          puVar11 = puVar9 + 5;
          puVar14 = puVar13;
LAB_14209bfe0:
          puVar10 = puVar14;
          puVar14 = puVar10 + 5;
          if (puVar14 <= puVar9) goto code_r0x00014209bfe9;
          goto LAB_14209c001;
        }
        for (; puVar11 = puVar13, puVar14 = puVar13, puVar13 < puVar9; puVar9 = puVar9 + -5) {
          while (puVar10 = puVar11, puVar14 = puVar14 + 5, puVar14 <= puVar9) {
            puVar11 = puVar14;
            if ((uint)(*(int *)(puVar10[1] + 0x14) + *(int *)(puVar10[1] + 0x10)) <=
                (uint)(*(int *)(puVar14[1] + 0x14) + *(int *)(puVar14[1] + 0x10))) {
              puVar11 = puVar10;
            }
          }
          if (puVar10 != puVar9) {
            uVar3 = puVar9[1];
            uVar4 = *puVar10;
            uVar5 = puVar10[1];
            uVar6 = puVar10[2];
            uVar7 = puVar10[3];
            uVar2 = puVar10[4];
            *puVar10 = *puVar9;
            puVar10[1] = uVar3;
            uVar3 = puVar9[3];
            puVar10[2] = puVar9[2];
            puVar10[3] = uVar3;
            puVar10[4] = puVar9[4];
            *puVar9 = uVar4;
            puVar9[1] = uVar5;
            puVar9[2] = uVar6;
            puVar9[3] = uVar7;
            puVar9[4] = uVar2;
          }
        }
        goto LAB_14209c168;
      }
LAB_14209c159:
      local_348 = lVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FName,FNewTextureInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,FNewTextureInfo>,TDefaultMapHashableKeyFuncs<FName,FNewTextureInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,FNewTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNewTextureInfo,0>_>::FValueComparisonClass<FCompareFNewTextureInfoByTextureSize>_>_>_>_>
                (puVar14,lVar8,param_3,param_4);
LAB_14209c168:
      plVar15 = plVar15 + -3;
    } while (&local_338 <= plVar15);
  }
  return;
code_r0x00014209bfe9:
  if ((uint)(*(int *)(puVar13[1] + 0x14) + *(int *)(puVar13[1] + 0x10)) <=
      (uint)(*(int *)(puVar10[6] + 0x14) + *(int *)(puVar10[6] + 0x10))) goto LAB_14209bfe0;
LAB_14209c001:
  do {
    puVar12 = puVar11;
    puVar11 = puVar12 + -5;
    if (puVar11 <= puVar13) break;
  } while ((uint)(*(int *)(puVar12[-4] + 0x14) + *(int *)(puVar12[-4] + 0x10)) <=
           (uint)(*(int *)(puVar13[1] + 0x14) + *(int *)(puVar13[1] + 0x10)));
  if (puVar14 <= puVar11) {
    if (puVar14 != puVar11) {
      uVar3 = puVar12[-4];
      uVar4 = *puVar14;
      uVar5 = puVar10[6];
      uVar6 = puVar10[7];
      uVar7 = puVar10[8];
      uVar2 = puVar10[9];
      *puVar14 = *puVar11;
      puVar10[6] = uVar3;
      uVar3 = puVar12[-2];
      puVar10[7] = puVar12[-3];
      puVar10[8] = uVar3;
      puVar10[9] = puVar12[-1];
      *puVar11 = uVar4;
      puVar12[-4] = uVar5;
      puVar12[-3] = uVar6;
      puVar12[-2] = uVar7;
      puVar12[-1] = uVar2;
    }
    goto LAB_14209bfe0;
  }
  if (puVar13 != puVar11) {
    uVar3 = puVar12[-4];
    uVar4 = *puVar13;
    uVar5 = puVar13[1];
    uVar6 = puVar13[2];
    uVar7 = puVar13[3];
    uVar2 = puVar13[4];
    *puVar13 = *puVar11;
    puVar13[1] = uVar3;
    uVar3 = puVar12[-2];
    puVar13[2] = puVar12[-3];
    puVar13[3] = uVar3;
    puVar13[4] = puVar12[-1];
    *puVar11 = uVar4;
    puVar12[-4] = uVar5;
    puVar12[-3] = uVar6;
    puVar12[-2] = uVar7;
    puVar12[-1] = uVar2;
  }
  local_348._0_4_ = (int)local_348 + -1;
  if (((longlong)puVar11 + (-0x28 - (longlong)puVar13)) / 0x28 <
      ((longlong)puVar9 - (longlong)puVar14) / 0x28) {
    if (puVar14 < puVar9) {
      *plVar15 = (longlong)puVar14;
      plVar15[1] = (longlong)puVar9;
      *(int *)(plVar15 + 2) = (int)local_348;
      plVar15 = plVar15 + 3;
    }
    if (puVar11 <= puVar13 + 5) goto LAB_14209c168;
    puVar9 = puVar12 + -10;
    puVar14 = puVar13;
  }
  else {
    if (puVar13 + 5 < puVar11) {
      *plVar15 = (longlong)puVar13;
      plVar15[1] = (longlong)(puVar12 + -10);
      *(int *)(plVar15 + 2) = (int)local_348;
      plVar15 = plVar15 + 3;
    }
    if (puVar9 <= puVar14) goto LAB_14209c168;
  }
  lVar8 = ((longlong)puVar9 - (longlong)puVar14) / 0x28 + 1;
  puVar13 = puVar14;
  if ((int)local_348 == 0) goto LAB_14209c159;
  goto LAB_14209bf80;
}



// FUNCTION 14209c250 FUN_14209c250 body=405 status=ok
// SIG undefined FUN_14209c250(void)

undefined8 * FUN_14209c250(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144f95c08;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0;
  FShaderResourceParameter::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"UITexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xc4,*(undefined8 *)(param_2 + 0x18),L"ScaleformUITexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x19,*(undefined8 *)(param_2 + 0x18),L"UISampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xcc,*(undefined8 *)(param_2 + 0x18),L"SceneTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x1a,*(undefined8 *)(param_2 + 0x18),L"SceneSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xd4,*(undefined8 *)(param_2 + 0x18),L"ColorSpaceLUT",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1b,*(undefined8 *)(param_2 + 0x18),L"ColorSpaceLUTSampler",0);
  FShaderParameter::Bind((longlong)param_1 + 0xdc,*(undefined8 *)(param_2 + 0x18),L"UILevel",0);
  FShaderParameter::Bind((longlong)param_1 + 0xe2,*(undefined8 *)(param_2 + 0x18),L"OutputDevice",0)
  ;
  FShaderParameter::Bind(param_1 + 0x1d,*(undefined8 *)(param_2 + 0x18),L"NativeOutputNits",0);
  return param_1;
}



// FUNCTION 14209c3f0 EURCMacro_DrawWidgetRendererImmediate body=140 status=ok
// SIG undefined EURCMacro_DrawWidgetRendererImmediate(void)

void * `FSlateRHIRenderer::DrawWindows_Private'::`37'::EURCMacro_DrawWidgetRendererImmediate::
       EURCMacro_DrawWidgetRendererImmediate(void *param_1,void *param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x48);
  _Src = *(void **)((longlong)param_2 + 0x40);
  *(int *)((longlong)param_1 + 0x48) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    TArray<FRenderThreadUpdateContext,TInlineAllocator<2,FDefaultAllocator>_>::ResizeForCopy
              (param_1,iVar1,0);
    if (_Src == (void *)0x0) {
      _Src = param_2;
    }
    _Dst = *(void **)((longlong)param_1 + 0x40);
    if (*(void **)((longlong)param_1 + 0x40) == (void *)0x0) {
      _Dst = param_1;
    }
    ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1 << 5);
  }
  return param_1;
}



// FUNCTION 14209c480 FUN_14209c480 body=951 status=ok
// SIG undefined FUN_14209c480(void)

undefined8 *
FUN_14209c480(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 local_res8;
  undefined1 local_resc;
  longlong *local_res10;
  undefined8 *local_res18;
  undefined1 local_res20;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  
  lVar10 = 0;
  local_res8 = 0;
  param_1[1] = 0;
  puVar8 = param_1 + 4;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144f961d8;
  lVar9 = 4;
  param_1[3] = &PTR_LAB_144f96200;
  lVar5 = (longlong)param_1 + 0x3c;
  do {
    *puVar8 = 0;
    puVar8 = puVar8 + 6;
    *(undefined8 *)(lVar5 + -0x14) = 0;
    *(undefined8 *)(lVar5 + -0xc) = 0;
    *(undefined8 *)(lVar5 + -4) = 0;
    *(undefined4 *)(lVar5 + 4) = 0;
    *(undefined4 *)(lVar5 + 8) = 0;
    lVar5 = lVar5 + 0x30;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  param_1[0x1c] = *param_2;
  lVar5 = param_2[1];
  param_1[0x1d] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  param_1[0x1e] = *param_3;
  lVar5 = param_3[1];
  param_1[0x1f] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar7 = param_1 + 0x20;
  *plVar7 = 0;
  plVar3 = param_1 + 0x22;
  param_1[0x21] = 0;
  *plVar3 = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  lVar9 = operator_new(0x100);
  lVar5 = lVar10;
  if (lVar9 != 0) {
    local_78 = param_1[0x1e];
    local_70 = param_1[0x1f];
    local_res8 = 200;
    local_resc = 1;
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    local_68 = param_1[0x1c];
    local_60 = param_1[0x1d];
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    lVar5 = FUN_14209cee0(lVar9,&local_68,&local_78,&local_res8);
  }
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
    plVar6[2] = lVar5;
  }
  local_98 = lVar5;
  local_90 = plVar6;
  SharedPointerInternals::EnableSharedFromThis(&local_98,lVar5,lVar5);
  if (plVar7 != &local_98) {
    *plVar7 = lVar5;
    local_98 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x21,&local_90);
    plVar6 = local_90;
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
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
  *(undefined1 *)(*plVar7 + 0xd8) = local_res20;
  lVar5 = operator_new(0x48);
  if (lVar5 == 0) {
    lVar5 = 0;
    plVar6 = local_res10;
  }
  else {
    plVar6 = (longlong *)param_1[0x21];
    local_58 = *plVar7;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_50 = plVar6;
    lVar5 = FUN_1417ef420(lVar5,&local_58);
    lVar10 = 1;
  }
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_DestroyObject_144f96dd8;
    plVar7[2] = lVar5;
  }
  local_88 = lVar5;
  local_80 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_88,lVar5,lVar5);
  if (plVar3 != &local_88) {
    *plVar3 = lVar5;
    local_88 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x23,&local_80);
    plVar7 = local_80;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if ((lVar10 != 0) && (plVar6 != (longlong *)0x0)) {
    LOCK();
    plVar7 = plVar6 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
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
  plVar7 = (longlong *)local_res10[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  plVar7 = (longlong *)local_res18[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14209c840 FUN_14209c840 body=159 status=ok
// SIG undefined FUN_14209c840(void)

undefined8 * FUN_14209c840(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_res8;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  puVar3 = (undefined8 *)0x0;
  puVar4 = puVar3;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 1) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x3f800000;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar4 = puVar1;
  }
  *param_1 = puVar4;
  if (param_2 == (undefined8 *)0x0) {
    lVar2 = operator_new(0x78);
    if (lVar2 != 0) {
      local_res8 = 0;
      puVar3 = (undefined8 *)FUN_1427ee880(lVar2,&local_res8,0,0);
    }
    puVar4 = (undefined8 *)*param_1;
    param_2 = puVar3;
  }
  param_1[1] = param_2;
  puVar4[2] = param_2;
  return param_1;
}



// FUNCTION 14209c8e0 FSlateElementPS body=199 status=ok
// SIG undefined FSlateElementPS(void)

undefined8 * FSlateElementPS::FSlateElementPS(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144f957b8;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  FShaderResourceParameter::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"ElementTexture",0)
  ;
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xc4,*(undefined8 *)(param_2 + 0x18),L"ElementTextureSampler",0);
  FShaderParameter::Bind(param_1 + 0x19,*(undefined8 *)(param_2 + 0x18),L"ShaderParams",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xce,*(undefined8 *)(param_2 + 0x18),L"GammaAndAlphaValues",0);
  return param_1;
}



// FUNCTION 14209c9b0 FUN_14209c9b0 body=211 status=ok
// SIG undefined FUN_14209c9b0(void)

undefined8 * FUN_14209c9b0(undefined8 *param_1,longlong param_2)

{
  FUN_141d89a50();
  *param_1 = &PTR_FUN_144f95de0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined2 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)((longlong)param_1 + 0x116) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  FShaderParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0x116),*(undefined8 *)(param_2 + 0x18),
             L"ShaderParams",0);
  FShaderParameter::Bind(param_1 + 0x22,*(undefined8 *)(param_2 + 0x18),L"GammaAndAlphaValues",0);
  FShaderResourceParameter::Bind(param_1 + 0x24,*(undefined8 *)(param_2 + 0x18),L"ElementTexture",0)
  ;
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x11c,*(undefined8 *)(param_2 + 0x18),L"ElementTextureSampler",0);
  return param_1;
}



// FUNCTION 14209ca90 FUN_14209ca90 body=128 status=ok
// SIG undefined FUN_14209ca90(void)

undefined8 * FUN_14209ca90(undefined8 *param_1,longlong param_2)

{
  FUN_141d89a50();
  *param_1 = &PTR_FUN_144f95db0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined2 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)((longlong)param_1 + 0x116) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11a) = 0;
  FShaderParameter::Bind(param_1 + 0x22,*(undefined8 *)(param_2 + 0x18),L"ViewProjection",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x116,*(undefined8 *)(param_2 + 0x18),
             L"SwitchVerticalAxisMultiplier",0);
  return param_1;
}



// FUNCTION 14209cb10 FSlateRHIFontAtlasFactory body=130 status=ok
// SIG undefined FSlateRHIFontAtlasFactory(void)

undefined8 * FSlateRHIFontAtlasFactory::FSlateRHIFontAtlasFactory(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 1) = 0x400;
  *param_1 = &PTR_LAB_144f95758;
  if (DAT_1468b6148 != 0) {
    FConfigCacheIni::GetInt
              (DAT_1468b6148,L"SlateRenderer",L"FontAtlasSize",param_1 + 1,&DAT_1468e2360);
    iVar1 = *(int *)(param_1 + 1);
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      return param_1;
    }
    iVar2 = 0x800;
    if (iVar1 < 0x800) {
      iVar2 = iVar1;
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return param_1;
}



// FUNCTION 14209cba0 FUN_14209cba0 body=817 status=ok
// SIG undefined FUN_14209cba0(void)

undefined8 * FUN_14209cba0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *param_1 = &PTR__scalar_deleting_destructor__144f95e40;
  param_1[1] = *param_2;
  lVar5 = param_2[1];
  param_1[2] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x12),4000);
  *(undefined2 *)(param_1 + 0x17) = 0;
  *param_1 = &PTR_FUN_144f962b0;
  puVar6 = param_1 + 0x2b;
  param_1[0x18] = 0;
  lVar7 = 3;
  param_1[0x19] = 0;
  lVar5 = (longlong)param_1 + 0x174;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x2a] = 0;
  do {
    *puVar6 = 0;
    puVar6 = puVar6 + 6;
    *(undefined8 *)(lVar5 + -0x14) = 0;
    *(undefined8 *)(lVar5 + -0xc) = 0;
    *(undefined8 *)(lVar5 + -4) = 0;
    *(undefined4 *)(lVar5 + 4) = 0;
    *(undefined4 *)(lVar5 + 8) = 0;
    lVar5 = lVar5 + 0x30;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  *(undefined1 *)(param_1 + 0x3d) = 0;
  puVar6 = param_1 + 0x40;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *puVar6 = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
  local_60 = (longlong *)param_3[1];
  local_68 = *param_3;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  if (puVar6 != &local_68) {
    *puVar6 = local_68;
    local_68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x41,&local_60);
  }
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3f800000;
  plVar4 = (longlong *)param_2[1];
  local_58 = 0x3f800000;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_48 = 0;
  uStack_44 = 0x3f800000;
  uStack_40 = 0;
  uStack_3c = 0;
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0x3f800000;
  uStack_2c = 0;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x3f800000;
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
  plVar4 = (longlong *)param_3[1];
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
  return param_1;
}



// FUNCTION 14209cee0 FUN_14209cee0 body=843 status=ok
// SIG undefined FUN_14209cee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_14209cee0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  int local_res8 [2];
  
  *param_1 = &PTR_FUN_144f96170;
  param_1[1] = *param_2;
  lVar3 = param_2[1];
  param_1[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar11 = (undefined8 *)0x0;
  *param_1 = &PTR_FUN_144f961a0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 5) = 4;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[4] = &PTR__scalar_deleting_destructor__144f96080;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xe) = 4;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0xd] = &PTR_FUN_144f96018;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  puVar6 = (undefined8 *)operator_new(8);
  if (puVar6 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x70);
    puVar8 = puVar11;
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar7 + 2) = 4;
      puVar7[3] = 0;
      puVar7[4] = 0;
      *(undefined1 *)(puVar7 + 6) = 0;
      *puVar7 = &PTR_GetId_144f964e0;
      puVar7[1] = &PTR_LAB_144f96500;
      puVar7[7] = &PTR_LAB_144f96540;
      puVar7[10] = 0;
      puVar7[0xb] = 0;
      *(undefined8 *)((longlong)puVar7 + 100) = _DAT_1468b5ca0;
      *(undefined4 *)((longlong)puVar7 + 0x6c) = 2;
      puVar8 = puVar7;
    }
    *puVar6 = puVar8;
    puVar7 = puVar8 + 1;
    if (puVar8 == (undefined8 *)0x0) {
      puVar7 = puVar11;
    }
    FUN_141edf270(puVar7);
    puVar11 = puVar6;
  }
  param_1[0x17] = puVar11;
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_DestroyObject_144f96d98;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar11;
  }
  param_1[0x18] = puVar6;
  SharedPointerInternals::EnableSharedFromThis(param_1 + 0x17,puVar11,puVar11);
  param_1[0x19] = *param_3;
  lVar3 = param_3[1];
  param_1[0x1a] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x1b) = 1;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  if (*(char *)(param_4 + 1) != '\0') {
    *(undefined4 *)((longlong)param_1 + 0xdc) = *param_4;
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (*(char *)(param_1 + 0x1c) == '\0') {
    iVar10 = 100;
    if (DAT_1468b6148 != 0) {
      local_res8[0] = 0;
      cVar5 = FConfigCacheIni::GetInt
                        (DAT_1468b6148,L"SlateRenderer",L"NumPreallocatedVertices",local_res8,
                         &DAT_1468e2360);
      iVar9 = local_res8[0];
      iVar10 = 100;
      if (cVar5 != '\0') goto LAB_14209d12b;
    }
  }
  else {
    iVar9 = *(int *)((longlong)param_1 + 0xdc);
LAB_14209d12b:
    iVar10 = iVar9;
    if (iVar9 < 100) {
      iVar9 = 100;
      goto LAB_14209d13f;
    }
  }
  iVar9 = 1000000;
  if (iVar10 < 1000000) {
    iVar9 = iVar10;
  }
LAB_14209d13f:
  iVar10 = 100;
  if (99 < iVar9) {
    iVar10 = iVar9;
  }
  *(int *)((longlong)param_1 + 0x5c) = iVar10 * 0x28;
  cVar5 = IsInRenderingThread();
  if (cVar5 == '\0') {
    FUN_141edf270(param_1 + 4);
  }
  else {
    (**(code **)(param_1[4] + 0x28))();
  }
  *(int *)((longlong)param_1 + 0xac) = iVar10 * 4;
  cVar5 = IsInRenderingThread();
  if (cVar5 == '\0') {
    FUN_141edf270(param_1 + 0xd);
  }
  else {
    (**(code **)(param_1[0xd] + 0x28))();
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (*(char *)(param_4 + 1) != '\0') {
    *(undefined1 *)(param_4 + 1) = 0;
  }
  return param_1;
}



// FUNCTION 14209d230 FUN_14209d230 body=1560 status=ok
// SIG undefined FUN_14209d230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14209d230(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  undefined2 *puVar10;
  uint local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined8 in_stack_ffffffffffffff78;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  longlong *local_50;
  
  uVar8 = (uint)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  *param_1 = &PTR_FUN_143fca6f8;
  puVar6 = param_1 + 0xd;
  param_1[1] = &PTR__purecall_144f95e38;
  param_1[2] = &PTR__scalar_deleting_destructor__144f95e10;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *puVar6 = &PTR__purecall_143f740d8;
  plVar3 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar2 * 8) = puVar6;
  *param_1 = &PTR_FUN_144f960c0;
  param_1[1] = &PTR_FUN_144f960f8;
  param_1[2] = &PTR_LAB_144f96100;
  *puVar6 = &PTR_FUN_144f96128;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xe),4000);
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
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
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  local_78 = FSlateRHIResourceManager::DeleteBrushResourcesCommand;
  uStack_70 = 0;
  local_68 = (code *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  iStack_60 = 3;
  local_68 = (code *)plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_143f77a38;
    plVar3[1] = (longlong)param_1;
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_78;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_78._4_4_;
    *(undefined4 *)(plVar3 + 3) = uStack_70;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_6c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f77a80;
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_58,
                     L"Flushes and deletes all resources created by Slate\'s RHI Resource Manager.",
                     L"Slate",L"CommandText_DeleteResources");
  puVar6 = (undefined8 *)FText::ToString(uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar6;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar5 = (**(code **)(*DAT_1468b1f88 + 0x88))
                    (DAT_1468b1f88,L"Slate.DeleteResources",puVar10,&local_68,
                     (ulonglong)uVar8 << 0x20);
  param_1[0x62] = uVar5;
  param_1[0x61] = &PTR_FUN_143f3ecf0;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (iStack_60 != 0) {
    if (local_68 == (code *)0x0) goto LAB_14209d613;
    (**(code **)(*(longlong *)local_68 + 0x28))(local_68,0);
    if (local_68 != (code *)0x0) {
      local_68 = (code *)FMemory::Realloc(local_68,0,0);
    }
    iStack_60 = 0;
  }
  if (local_68 != (code *)0x0) {
    FMemory::Free(local_68);
  }
LAB_14209d613:
  iStack_60 = 0;
  local_68 = FSlateRHIResourceManager::OnAppExit;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_143f77a38;
    plVar3[1] = (longlong)param_1;
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_68;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_68._4_4_;
    *(int *)(plVar3 + 3) = iStack_60;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_5c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f77a80;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af190,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res20);
    iVar2 = DAT_1464af198;
    lVar4 = (longlong)DAT_1464af198;
    DAT_1464af198 = DAT_1464af198 + 1;
    if (DAT_1464af19c < DAT_1464af198) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af190,iVar2);
    }
    puVar6 = (undefined8 *)(lVar4 * 0x10 + _DAT_1464af190);
    *puVar6 = plVar3;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  iStack_60 = 0;
  local_68 = (code *)&LAB_1420bb210;
  plVar3 = (longlong *)FUN_14178e330();
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_GetPoolName_143f77a38;
    plVar7[1] = (longlong)param_1;
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_68;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_68._4_4_;
    *(int *)(plVar7 + 3) = iStack_60;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_5c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar4;
    *plVar7 = (longlong)&PTR_GetPoolName_143f77a80;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
    iVar2 = (int)plVar3[1];
    *(int *)(plVar3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar2);
    }
    puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar3);
    *puVar6 = plVar7;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  *(undefined4 *)((longlong)param_1 + 0x234) = 0x100;
  *(undefined4 *)(param_1 + 0x47) = 0x100;
  *(undefined4 *)(param_1 + 0x46) = 0x400;
  if (DAT_1468b6148 != 0) {
    local_res8[0] = 0x400;
    FConfigCacheIni::GetInt
              (DAT_1468b6148,L"SlateRenderer",L"TextureAtlasSize",local_res8,&DAT_1468e2360);
    local_res10[0] = 0x100;
    local_res18[0] = 0x100;
    uVar8 = 0x800;
    if (local_res8[0] < 0x800) {
      uVar8 = local_res8[0];
    }
    *(uint *)(param_1 + 0x46) = uVar8;
    FConfigCacheIni::GetInt
              (DAT_1468b6148,L"SlateRenderer",L"MaxAtlasedTextureWidth",local_res10,&DAT_1468e2360);
    FConfigCacheIni::GetInt
              (DAT_1468b6148,L"SlateRenderer",L"MaxAtlasedTextureHeight",local_res18,&DAT_1468e2360)
    ;
    iVar2 = *(int *)(param_1 + 0x46);
    iVar9 = 0;
    if ((-1 < local_res10[0]) && (iVar9 = iVar2, local_res10[0] < iVar2)) {
      iVar9 = local_res10[0];
    }
    *(int *)((longlong)param_1 + 0x234) = iVar9;
    iVar9 = 0;
    if ((-1 < local_res18[0]) && (iVar9 = iVar2, local_res18[0] < iVar2)) {
      iVar9 = local_res18[0];
    }
    *(int *)(param_1 + 0x47) = iVar9;
  }
  return param_1;
}



// FUNCTION 14209d850 FSlateTextureData body=130 status=ok
// SIG undefined FSlateTextureData(void)

undefined8 *
FSlateTextureData::FSlateTextureData
          (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined8 *param_5)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_5 + 1);
  _Src = (void *)*param_5;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1);
  }
  *(undefined4 *)((longlong)param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 3) = param_4;
  *(undefined4 *)(param_1 + 2) = param_2;
  return param_1;
}



// FUNCTION 14209d8e0 FUN_14209d8e0 body=171 status=ok
// SIG undefined FUN_14209d8e0(void)

undefined8 * FUN_14209d8e0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_144f96480;
  puVar2 = (undefined8 *)operator_new(0x30);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 1) = 0x3f800000;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0x3f800000;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar3 = puVar2;
  }
  param_1[2] = puVar3;
  if (param_1[1] != 0) {
    fVar4 = (float)(**(code **)(*param_2 + 0x2b8))(param_2);
    fVar5 = (float)(**(code **)(*param_2 + 0x2b0))(param_2);
    lVar1 = param_1[2];
    *(int *)(lVar1 + 0x1c) = (int)fVar4;
    *(int *)(lVar1 + 0x18) = (int)fVar5;
    *(undefined8 **)(param_1[2] + 0x10) = param_1;
  }
  return param_1;
}



// FUNCTION 14209d990 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<7,0,0,2,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f96c28;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,0,2,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 14209da20 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f96be8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 14209dab0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f96c68;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,4,5,0,7,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 14209db40 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,1,4,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f96aa8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x4010700;
    local_14 = 0x1000000;
    local_10 = 4;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 14209dc00 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,0,0,2,1,7,0,0,2,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f96b28;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010700;
    local_14 = 0x1020000;
    local_10 = 0x2000007;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 14209dcc0 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,0,0,3,1,7,0,0,3,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f96ae8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010700;
    local_14 = 0x1030000;
    local_10 = 0x3000007;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 14209dd80 FStaticStateResource body=186 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<1,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f967a8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 0x101;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 14209de40 FStaticStateResource body=186 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<1,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f968e8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 0x10001;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 14209df00 FStaticStateResource body=186 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<2,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f96828;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 0x102;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 14209dfc0 FStaticStateResource body=186 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<2,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f96968;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 0x10002;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 14209e080 FStaticStateResource body=186 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<3,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f96768;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 0x1010103;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 14209e140 FStaticStateResource body=186 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<3,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f96868;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 0x103;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 14209e200 FStaticStateResource body=186 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<3,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f969a8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 0x10003;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 14209e2c0 FStaticStateResource body=186 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<3,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f96a68;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 3;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 14209e380 FStaticStateResource body=186 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<4,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f96728;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 0x1010104;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 14209e440 FStaticStateResource body=186 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<4,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f967e8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 0x104;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 14209e500 FStaticStateResource body=186 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<4,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f96928;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 0x10004;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 14209e5c0 FStaticStateResource body=186 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<4,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f96a28;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 4;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 14209e680 FStaticStateResource body=186 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<0,1,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f968a8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 0x100;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 14209e740 FStaticStateResource body=186 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<0,0,1,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f969e8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_28 = 0x10000;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 14209e800 ~TArray<TRefCountPtr<FRHITexture2D>,TInlineAllocator<2,FDefaultAllocator>_> body=275 status=ok
// SIG undefined ~TArray<TRefCountPtr<FRHITexture2D>,TInlineAllocator<2,FDefaultAllocator>_>(void)

void TArray<TRefCountPtr<FRHITexture2D>,TInlineAllocator<2,FDefaultAllocator>_>::
     ~TArray<TRefCountPtr<FRHITexture2D>,TInlineAllocator<2,FDefaultAllocator>_>(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar7 = (longlong *)param_1[2];
  iVar8 = (int)param_1[3];
  plVar9 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    plVar9 = param_1;
  }
  if (iVar8 != 0) {
    do {
      puVar3 = (undefined8 *)*plVar9;
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if ((*(char *)(puVar3 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            LOCK();
            bVar10 = *(int *)((longlong)puVar3 + 0xc) == 0;
            if (bVar10) {
              *(int *)((longlong)puVar3 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar10) {
              uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar5 == 0) {
                lVar6 = 0;
              }
              else {
                lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar6 + 8) = puVar3;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
      }
      plVar9 = plVar9 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    plVar7 = (longlong *)param_1[2];
  }
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 14209e920 FUN_14209e920 body=294 status=ok
// SIG undefined FUN_14209e920(void)

void FUN_14209e920(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x1e,0);
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FMemory::Free();
  }
  FUN_1420b2540(param_1 + 0x14,0);
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 10,0);
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1,0);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14209ea50 ~FPostProcessRectParams body=138 status=ok
// SIG undefined ~FPostProcessRectParams(void)

void FPostProcessRectParams::~FPostProcessRectParams(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    plVar1 = *(longlong **)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xb0) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_1 + 0x90);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x60) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_1 + 0x40);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1);
  return;
}



// FUNCTION 14209eae0 FUN_14209eae0 body=381 status=ok
// SIG undefined FUN_14209eae0(void)

void FUN_14209eae0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x25);
  plVar4 = (longlong *)param_1[0x23];
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
  plVar4 = (longlong *)param_1[0x21];
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
  plVar4 = (longlong *)param_1[0x1f];
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
  plVar4 = (longlong *)param_1[0x1d];
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
  lVar5 = 4;
  puVar6 = param_1 + 0x1c;
  do {
    puVar6 = puVar6 + -6;
    FUN_1417f7480(puVar6);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  param_1[3] = &PTR_FUN_1440780a8;
  *param_1 = &PTR_FUN_144f95ff0;
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}



// FUNCTION 14209ec60 FUN_14209ec60 body=583 status=ok
// SIG undefined FUN_14209ec60(void)

void FUN_14209ec60(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint *puVar11;
  int local_a8;
  uint uStack_a4;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_80;
  uint *local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  undefined8 uStack_40;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  plVar1 = param_1 + 2;
  uStack_a4 = 1;
  local_78 = (uint *)(param_1 + 4);
  local_a8 = 0;
  *param_1 = &PTR_FUN_144f964a0;
  iVar4 = *(int *)(param_1 + 7);
  iStack_94 = 0;
  iStack_90 = 0;
  if (iVar4 != 0) {
    puVar11 = (uint *)param_1[6];
    if ((uint *)param_1[6] == (uint *)0x0) {
      puVar11 = local_78;
    }
    uVar5 = *puVar11;
    local_a8 = 0;
    iStack_90 = 0;
    while (uVar5 == 0) {
      lVar9 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar10 = local_a8 + 1;
      bVar7 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar10;
      if (bVar7) goto LAB_14209ed40;
      uVar5 = puVar11[lVar9 + 1];
    }
    uStack_a4 = -uVar5 & uVar5;
    iVar10 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    iStack_94 = (iStack_90 - iVar10) + 0x1f;
    if (iVar4 < iStack_94) {
LAB_14209ed40:
      iStack_94 = iVar4;
    }
  }
  uStack_70 = CONCAT44(iStack_94,0xffffffff);
  auStack_30._8_4_ = iStack_90;
  auStack_30._0_8_ = uStack_70;
  auStack_30._12_4_ = uStack_8c;
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  local_50 = 0;
  local_20._0_4_ = SUB84(plVar1,0);
  local_20._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  local_68._8_4_ = (undefined4)local_20;
  local_68._0_8_ = auStack_30._8_8_;
  local_68._12_4_ = local_20._4_4_;
  local_58 = plVar1;
  local_48 = plVar1;
  uStack_40 = uStack_80;
  puStack_38 = local_78;
  local_20 = plVar1;
  if (iStack_94 < *(int *)(param_1 + 7)) {
    do {
      lVar9 = *(longlong *)(*plVar1 + 8 + (longlong)iStack_94 * 0x18);
      if (lVar9 != 0) {
        if (*(undefined8 **)(lVar9 + 0x20) != (undefined8 *)0x0) {
          **(undefined8 **)(lVar9 + 0x20) = 0;
        }
        plVar6 = *(longlong **)(lVar9 + 0x28);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar6 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar3 = (int *)((longlong)plVar6 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        FMemory::operator_delete(lVar9,0x30);
      }
      uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_80._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
      iStack_94 = uStack_70._4_4_;
    } while (uStack_70._4_4_ < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (plVar1);
  *param_1 = &PTR__purecall_143fcfdf8;
  return;
}



// FUNCTION 14209eeb0 FUN_14209eeb0 body=493 status=ok
// SIG undefined FUN_14209eeb0(void)

void FUN_14209eeb0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  
  *param_1 = &PTR_FUN_144f962b0;
  if (param_1[0x58] != 0) {
    FMemory::Free();
  }
  if (param_1[0x52] != 0) {
    FMemory::Free();
  }
  lVar10 = 3;
  plVar11 = param_1 + 0x4a;
  lVar9 = 3;
  do {
    iVar7 = (int)plVar11[-1];
    plVar11 = plVar11 + -2;
    lVar5 = *plVar11;
    lVar9 = lVar9 + -1;
    if (iVar7 != 0) {
      plVar8 = (longlong *)(lVar5 + 8);
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
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      lVar5 = *plVar11;
    }
    if (lVar5 != 0) {
      FMemory::Free();
    }
  } while (lVar9 != 0);
  plVar11 = (longlong *)param_1[0x43];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar11 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  plVar11 = (longlong *)param_1[0x41];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar11 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  plVar11 = (longlong *)param_1[0x3f];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar11 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  puVar6 = param_1 + 0x3d;
  do {
    puVar6 = puVar6 + -6;
    FUN_1417f7480(puVar6);
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x18);
  FUN_14209f2a0(param_1);
  return;
}



// FUNCTION 14209f0a0 FUN_14209f0a0 body=510 status=ok
// SIG undefined FUN_14209f0a0(void)

void FUN_14209f0a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_144f960c0;
  param_1[1] = &PTR_FUN_144f960f8;
  param_1[2] = &PTR_LAB_144f96100;
  param_1[0xd] = &PTR_FUN_144f96128;
  FUN_140483870(&DAT_1464af190,param_1);
  uVar1 = FUN_14178e330();
  FUN_140483870(uVar1,param_1);
  if (DAT_146ab62c8 != '\0') {
    FUN_141ee24f0(0);
    FUN_1420a9200(param_1);
  }
  param_1[0x61] = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,param_1[0x62],1);
  if (param_1[0x5f] != 0) {
    FMemory::Free();
  }
  if (param_1[0x5d] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (param_1[0x5b] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x53,0);
  if (param_1[0x57] != 0) {
    FMemory::Free();
  }
  if (param_1[0x53] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x52) = 0;
  if (param_1[0x51] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x49);
  if (param_1[0x44] != 0) {
    FMemory::Free();
  }
  if (param_1[0x42] != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x40);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x3e);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x3c);
  FUN_14209e920(param_1 + 0x14);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  FUN_1404bf750(param_1 + 0xd);
  param_1[2] = &PTR__scalar_deleting_destructor__144f95e10;
  FUN_1420a45f0(param_1 + 2);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 3);
  *param_1 = &PTR_FUN_143fca6f8;
  return;
}



// FUNCTION 14209f2a0 FUN_14209f2a0 body=155 status=ok
// SIG undefined FUN_14209f2a0(void)

void FUN_14209f2a0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined1 *)((longlong)param_1 + 0xb9) = 1;
  *param_1 = &PTR__scalar_deleting_destructor__144f95e40;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xf);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xc);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 9);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 6);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 3);
  plVar4 = (longlong *)param_1[2];
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



// FUNCTION 14209f340 FUN_14209f340 body=812 status=ok
// SIG undefined FUN_14209f340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14209f340(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  lVar5 = param_1[1];
  plVar6 = (longlong *)param_1[3];
  plVar14 = (longlong *)(lVar5 + 0x28);
  puVar3 = (undefined8 *)(lVar5 + 0x98);
  local_68 = param_1[2];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  uStack_60 = plVar6;
  if (&local_68 != plVar14) {
    local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
    uStack_60._0_4_ = SUB84(plVar6,0);
    uStack_60._4_4_ = (undefined4)((ulonglong)plVar6 >> 0x20);
    lVar12 = *plVar14;
    plVar7 = *(longlong **)(lVar5 + 0x30);
    local_50 = (undefined4)local_68;
    uStack_4c = local_68._4_4_;
    uStack_48 = (undefined4)uStack_60;
    uStack_44 = uStack_60._4_4_;
    *(undefined4 *)plVar14 = (undefined4)local_68;
    *(undefined4 *)(lVar5 + 0x2c) = local_68._4_4_;
    *(undefined4 *)(lVar5 + 0x30) = (undefined4)uStack_60;
    *(undefined4 *)(lVar5 + 0x34) = uStack_60._4_4_;
    local_68 = lVar12;
    uStack_60 = plVar7;
  }
  plVar7 = uStack_60;
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_60 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*uStack_60)(uStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*uStack_60 + 8))(uStack_60,1);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    lVar12 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  FSlateBatchData::CreateRenderBatches(plVar14,puVar3);
  lVar12 = *param_1;
  lVar8 = FUN_1420b41f0(*(undefined8 *)(lVar12 + 200),param_1 + 2);
  local_78 = lVar8 + 0x48;
  FUN_1420c0c80(lVar12,param_2,plVar14,lVar8);
  local_58 = (int)param_1[4];
  if (*(int *)(lVar5 + 0x910) != local_58) {
    TSet<TTuple<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>,0>,FDefaultSetAllocator>
    ::Empty(lVar5 + 0x8b8,0);
    plVar14 = (longlong *)(lVar5 + 0xb8);
    lVar12 = 0x100;
    do {
      lVar8 = *plVar14;
      iVar11 = *(int *)(lVar8 + 0x1d0);
      lVar9 = *(longlong *)(lVar8 + 0x1c0);
      if (*(longlong *)(lVar8 + 0x1c0) == 0) {
        lVar9 = lVar8;
      }
      if (iVar11 != 0) {
        pcVar10 = (char *)(lVar9 + 0xd8);
        do {
          if (*pcVar10 != '\0') {
            *pcVar10 = '\0';
            if (*(longlong *)(pcVar10 + -0x10) != 0) {
              FMemory::Free();
            }
            if (pcVar10[-0x18] != '\0') {
              pcVar10[-0x18] = '\0';
            }
          }
          plVar6 = *(longlong **)(pcVar10 + -0xa8);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar6 + 1;
            lVar9 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar6)(plVar6);
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
          plVar6 = *(longlong **)(pcVar10 + -0xc0);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar6 + 1;
            lVar9 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar6)(plVar6);
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
          plVar6 = *(longlong **)(pcVar10 + -0xd0);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if ((iVar4 == 1) && (plVar6 != (longlong *)0x0)) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
          pcVar10 = pcVar10 + 0xe0;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      *(undefined4 *)(lVar8 + 0x1d0) = 0;
      if (*(int *)(lVar8 + 0x1d4) != 0) {
        TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>::ResizeTo(lVar8,0);
      }
      plVar14 = plVar14 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    *(undefined4 *)(lVar5 + 0x908) = 0xffffffff;
    *(undefined4 *)(lVar5 + 0x90c) = 0;
    *(undefined4 *)(lVar5 + 0xb0) = 0;
    if (*(int *)(lVar5 + 0xb4) != 0x100) {
      *(undefined4 *)(lVar5 + 0xb4) = 0x100;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar3,0);
    }
    *(undefined4 *)(lVar5 + 0xb0) = 0x100;
    puVar13 = *(undefined8 **)(lVar5 + 0xa8);
    if (*(undefined8 **)(lVar5 + 0xa8) == (undefined8 *)0x0) {
      puVar13 = puVar3;
    }
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[2] = 0;
    puVar13[3] = 0;
    *(int *)(lVar5 + 0x910) = local_58;
  }
  return;
}



// FUNCTION 14209f670 FUN_14209f670 body=143 status=ok
// SIG undefined FUN_14209f670(void)

void FUN_14209f670(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FRHICommandList::EndFrame(param_2);
  uVar1 = FRealtimeGPUProfiler::Get();
  FRealtimeGPUProfiler::EndFrame(uVar1,param_2);
  puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar2 = puVar3 + 2;
  if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
    puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 2;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar2;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar3;
  *(undefined8 **)(param_2 + 8) = puVar3 + 1;
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_143f3edf8;
  AK::MemoryMgr::StartProfileThreadUsage((long)puVar3);
  return;
}



// FUNCTION 14209f700 FUN_14209f700 body=386 status=ok
// SIG undefined FUN_14209f700(void)

void FUN_14209f700(undefined8 param_1,longlong param_2)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  short *psVar11;
  short *local_28;
  int local_20;
  
  FUN_141ec6070(0);
  DAT_1464aaa90 = DAT_1464aaa90 + 1;
  FString::PrintfImpl(&local_28,L"Frame %d");
  AK::MemoryMgr::StartProfileThreadUsage(0x464aa744);
  uVar4 = DAT_1464aa73c;
  lVar5 = -1;
  psVar11 = &DAT_143f3eda8;
  if (local_20 != 0) {
    psVar11 = local_28;
  }
  do {
    lVar3 = lVar5 + 1;
    lVar5 = lVar5 + 1;
  } while (psVar11[lVar3] != 0);
  iVar2 = (int)lVar5 * 2;
  lVar5 = (longlong)(iVar2 + 2);
  uVar10 = *(longlong *)(param_2 + 0x30) + 1U & 0xfffffffffffffffe;
  uVar6 = lVar5 + uVar10;
  if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,iVar2 + 4);
    uVar10 = *(longlong *)(param_2 + 0x30) + 1U & 0xfffffffffffffffe;
    uVar6 = lVar5 + uVar10;
  }
  *(ulonglong *)(param_2 + 0x30) = uVar6;
  lVar5 = uVar10 - (longlong)psVar11;
  do {
    sVar1 = *psVar11;
    *(short *)(lVar5 + (longlong)psVar11) = sVar1;
    psVar11 = psVar11 + 1;
  } while (sVar1 != 0);
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 4;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x28);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 4;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar9;
  *(undefined8 **)(param_2 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f3ede8;
  puVar9[2] = uVar10;
  *(undefined4 *)(puVar9 + 3) = uVar4;
  uVar8 = FRealtimeGPUProfiler::Get();
  FRealtimeGPUProfiler::BeginFrame(uVar8,param_2);
  FRHICommandList::BeginFrame(param_2);
  if (local_28 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14209f890 FUN_14209f890 body=208 status=ok
// SIG undefined FUN_14209f890(void)

void FUN_14209f890(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  int local_res8 [2];
  
  lVar1 = param_1[1];
  lVar2 = *(longlong *)(*param_1 + 200);
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x298,local_res8,lVar1);
  puVar5 = (ulonglong *)0x0;
  puVar4 = puVar5;
  if (local_res8[0] != -1) {
    puVar4 = (ulonglong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(lVar2 + 0x298));
  }
  puVar3 = puVar4 + 1;
  if (puVar4 == (ulonglong *)0x0) {
    puVar3 = puVar5;
  }
  if (puVar3 != (ulonglong *)0x0) {
    puVar6 = (undefined8 *)*puVar3;
    puVar4 = (ulonglong *)((longlong)(int)puVar3[1] & 0x1fffffffffffffff);
    if (puVar6 + (int)puVar3[1] < puVar6) {
      puVar4 = puVar5;
    }
    if (puVar4 != (ulonglong *)0x0) {
      do {
        FUN_1420bb800(lVar2,param_2,*puVar6);
        puVar5 = (ulonglong *)((longlong)puVar5 + 1);
        puVar6 = puVar6 + 1;
      } while (puVar5 != puVar4);
    }
    FUN_141efa480(lVar2 + 0x298,lVar1);
  }
  return;
}



// FUNCTION 14209f960 FUN_14209f960 body=134 status=ok
// SIG undefined FUN_14209f960(void)

void FUN_14209f960(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar2 = *param_1;
  uVar1 = *(undefined4 *)param_1[1];
  puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar4 + 3;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x20);
    puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 3;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar3;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar4;
  *(undefined8 **)(lVar2 + 8) = puVar4 + 1;
  puVar4[1] = 0;
  *(undefined4 *)(puVar4 + 2) = uVar1;
  *puVar4 = &PTR_LAB_143f489c0;
  return;
}



// FUNCTION 14209fa40 FUN_14209fa40 body=356 status=ok
// SIG undefined FUN_14209fa40(void)

longlong FUN_14209fa40(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  int iVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x1c0);
  iVar8 = *(int *)(param_1 + 0x1d0);
  lVar6 = lVar5;
  if (lVar5 == 0) {
    lVar6 = param_1;
  }
  if (iVar8 != 0) {
    pcVar7 = (char *)(lVar6 + 0xd8);
    do {
      if (*pcVar7 != '\0') {
        *pcVar7 = '\0';
        if (*(longlong *)(pcVar7 + -0x10) != 0) {
          FMemory::Free();
        }
        if (pcVar7[-0x18] != '\0') {
          pcVar7[-0x18] = '\0';
        }
      }
      plVar4 = *(longlong **)(pcVar7 + -0xa8);
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
      plVar4 = *(longlong **)(pcVar7 + -0xc0);
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
      plVar4 = *(longlong **)(pcVar7 + -0xd0);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pcVar7 = pcVar7 + 0xe0;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    lVar5 = *(longlong *)(param_1 + 0x1c0);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 14209fbb0 FUN_14209fbb0 body=43 status=ok
// SIG undefined FUN_14209fbb0(void)

undefined8 * FUN_14209fbb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14209fbe0 FUN_14209fbe0 body=97 status=ok
// SIG undefined FUN_14209fbe0(void)

undefined8 * FUN_14209fbe0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f96d58;
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14209fc50 FUN_14209fc50 body=97 status=ok
// SIG undefined FUN_14209fc50(void)

undefined8 * FUN_14209fc50(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f96d48;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14209fcc0 FUN_14209fcc0 body=97 status=ok
// SIG undefined FUN_14209fcc0(void)

undefined8 * FUN_14209fcc0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f96ca8;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14209fd30 FUN_14209fd30 body=97 status=ok
// SIG undefined FUN_14209fd30(void)

undefined8 * FUN_14209fd30(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f96d38;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14209fda0 FUN_14209fda0 body=97 status=ok
// SIG undefined FUN_14209fda0(void)

undefined8 * FUN_14209fda0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f96d68;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14209fe10 FUN_14209fe10 body=97 status=ok
// SIG undefined FUN_14209fe10(void)

undefined8 * FUN_14209fe10(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f96cd8;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14209fe80 FUN_14209fe80 body=97 status=ok
// SIG undefined FUN_14209fe80(void)

undefined8 * FUN_14209fe80(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f96cc8;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14209fef0 FUN_14209fef0 body=97 status=ok
// SIG undefined FUN_14209fef0(void)

undefined8 * FUN_14209fef0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f96ce8;
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14209ff60 FUN_14209ff60 body=97 status=ok
// SIG undefined FUN_14209ff60(void)

undefined8 * FUN_14209ff60(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f96cf8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14209ffd0 FUN_14209ffd0 body=97 status=ok
// SIG undefined FUN_14209ffd0(void)

undefined8 * FUN_14209ffd0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f96d08;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1420a0040 FUN_1420a0040 body=97 status=ok
// SIG undefined FUN_1420a0040(void)

undefined8 * FUN_1420a0040(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f96d18;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1420a00b0 FUN_1420a00b0 body=97 status=ok
// SIG undefined FUN_1420a00b0(void)

undefined8 * FUN_1420a00b0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f96d28;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1420a0120 FUN_1420a0120 body=97 status=ok
// SIG undefined FUN_1420a0120(void)

undefined8 * FUN_1420a0120(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f96cb8;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420a0190 FUN_1420a0190 body=97 status=ok
// SIG undefined FUN_1420a0190(void)

undefined8 * FUN_1420a0190(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f966c8;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1420a0200 FUN_1420a0200 body=97 status=ok
// SIG undefined FUN_1420a0200(void)

undefined8 * FUN_1420a0200(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f96670;
  if (param_1[7] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[7] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1420a0270 FUN_1420a0270 body=97 status=ok
// SIG undefined FUN_1420a0270(void)

undefined8 * FUN_1420a0270(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f96650;
  if (param_1[0xd] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xd] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1420a02e0 FUN_1420a02e0 body=97 status=ok
// SIG undefined FUN_1420a02e0(void)

undefined8 * FUN_1420a02e0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f966d8;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420a0350 FUN_1420a0350 body=97 status=ok
// SIG undefined FUN_1420a0350(void)

undefined8 * FUN_1420a0350(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f96660;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1420a03c0 FUN_1420a03c0 body=97 status=ok
// SIG undefined FUN_1420a03c0(void)

undefined8 * FUN_1420a03c0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f966e8;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420a0430 FUN_1420a0430 body=97 status=ok
// SIG undefined FUN_1420a0430(void)

undefined8 * FUN_1420a0430(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f96718;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1420a04a0 FUN_1420a04a0 body=97 status=ok
// SIG undefined FUN_1420a04a0(void)

undefined8 * FUN_1420a04a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f966f8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1420a0510 FUN_1420a0510 body=97 status=ok
// SIG undefined FUN_1420a0510(void)

undefined8 * FUN_1420a0510(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f96640;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1420a0580 `scalar_deleting_destructor' body=74 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSlateElementIndexBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1420a05d0 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TSlateTexture<TRefCountPtr<FRHITexture2D>_>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144f96210;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 1);
  *param_1 = &PTR__purecall_143fcfdf8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1420a0620 FUN_1420a0620 body=158 status=ok
// SIG undefined FUN_1420a0620(void)

undefined8 * FUN_1420a0620(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[0x13] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x13] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  param_1[9] = &PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x10);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xf);
  FUN_141edd2d0(param_1 + 9);
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1420a06c0 FUN_1420a06c0 body=52 status=ok
// SIG undefined FUN_1420a06c0(void)

undefined8 FUN_1420a06c0(undefined8 param_1,ulonglong param_2)

{
  FUN_14209eae0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 1420a0700 FUN_1420a0700 body=52 status=ok
// SIG undefined FUN_1420a0700(void)

undefined8 FUN_1420a0700(undefined8 param_1,ulonglong param_2)

{
  FUN_14209ec60();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1420a0740 FUN_1420a0740 body=83 status=ok
// SIG undefined FUN_1420a0740(void)

undefined8 * FUN_1420a0740(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1420a07a0 `scalar_deleting_destructor' body=97 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSlateFontAtlasRHI::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__144f96610;
  param_1[1] = &PTR_LAB_144f96630;
  plVar1 = (longlong *)param_1[9];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
  }
  FSlateFontAtlas::~FSlateFontAtlas(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1420a0810 FUN_1420a0810 body=286 status=ok
// SIG undefined FUN_1420a0810(void)

longlong FUN_1420a0810(longlong param_1,ulonglong param_2)

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
  plVar4 = *(longlong **)(param_1 + 0x18);
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1420a0930 `scalar_deleting_destructor' body=151 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSlateFontTextureRHIResource::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  param_1[2] = &PTR__scalar_deleting_destructor__144e13920;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 10);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 9);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 8);
  FUN_141edd2d0(param_1 + 2);
  *param_1 = &PTR__purecall_144f96210;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 1);
  *param_1 = &PTR__purecall_143fcfdf8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1420a09d0 FUN_1420a09d0 body=87 status=ok
// SIG undefined FUN_1420a09d0(void)

undefined8 * FUN_1420a09d0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_GetNumIndices_144f964c0;
  if (param_1[2] != 0) {
    FSlateShaderResourceProxy::_scalar_deleting_destructor_(param_1[2],1);
  }
  *param_1 = &PTR__purecall_143fcfdf8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1420a0a30 `scalar_deleting_destructor' body=129 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSlatePostProcessResource::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_GetId_144f964e0;
  param_1[1] = &PTR_LAB_144f96500;
  param_1[7] = &PTR_LAB_144f96540;
  TArray<TRefCountPtr<FRHITexture2D>,TInlineAllocator<2,FDefaultAllocator>_>::
  ~TArray<TRefCountPtr<FRHITexture2D>,TInlineAllocator<2,FDefaultAllocator>_>(param_1 + 8);
  param_1[7] = &PTR_FUN_1440780a8;
  FUN_141edd2d0(param_1 + 1);
  *param_1 = &PTR__purecall_143fcfdf8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1420a0ac0 FUN_1420a0ac0 body=52 status=ok
// SIG undefined FUN_1420a0ac0(void)

undefined8 FUN_1420a0ac0(undefined8 param_1,ulonglong param_2)

{
  FUN_14209eeb0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2e0);
  }
  return param_1;
}



// FUNCTION 1420a0b00 FUN_1420a0b00 body=353 status=ok
// SIG undefined FUN_1420a0b00(void)

undefined8 * FUN_1420a0b00(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1[0x1d] != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  plVar4 = (longlong *)param_1[0x1a];
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
  plVar4 = (longlong *)param_1[0x18];
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
  param_1[0xd] = &PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x14);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x13);
  FUN_141edd2d0(param_1 + 0xd);
  param_1[4] = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 10);
  FUN_141edd2d0(param_1 + 4);
  *param_1 = &PTR_FUN_144f96170;
  plVar4 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1420a0c70 FUN_1420a0c70 body=52 status=ok
// SIG undefined FUN_1420a0c70(void)

undefined8 FUN_1420a0c70(undefined8 param_1,ulonglong param_2)

{
  FUN_14209f0a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x318);
  }
  return param_1;
}



// FUNCTION 1420a0cb0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FGlobalShader::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14209f2a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1420a0cf0 FUN_1420a0cf0 body=134 status=ok
// SIG undefined FUN_1420a0cf0(void)

undefined8 * FUN_1420a0cf0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144f96170;
  plVar4 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1420a0d80 `scalar_deleting_destructor' body=103 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSlateShaderResourceManager::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f95e10;
  FUN_1420a45f0();
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1420a0df0 `scalar_deleting_destructor' body=140 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FSlateShaderResourceProxy::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x20) = 0;
  }
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1420a0e80 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSlateTextureAtlasRHI::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__144f966b8;
  plVar1 = (longlong *)param_1[8];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
  }
  FSlateTextureAtlas::~FSlateTextureAtlas(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1420a0ee0 `scalar_deleting_destructor' body=87 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSlateUTextureResource::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144f96480;
  if (param_1[2] != 0) {
    FSlateShaderResourceProxy::_scalar_deleting_destructor_(param_1[2],1);
  }
  *param_1 = &PTR__purecall_143fcfdf8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1420a0f40 `scalar_deleting_destructor' body=191 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSlateUpdatableInstanceBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR__scalar_deleting_destructor__144f96680;
  plVar3 = param_1 + 7;
  cVar2 = IsInRenderingThread();
  if (cVar2 == '\0') {
    FUN_141edf360(plVar3);
  }
  else {
    (**(code **)(*plVar3 + 0x30))();
  }
  FUN_141ee24f0(0);
  *plVar3 = (longlong)&PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xd);
  FUN_141edd2d0(plVar3);
  lVar4 = 3;
  do {
    plVar1 = plVar3 + -2;
    plVar3 = plVar3 + -2;
    lVar4 = lVar4 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar4 != 0);
  *param_1 = &PTR_FUN_143fca6f8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1420a1000 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f96c28;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420a1050 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f96be8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420a10a0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f96c68;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420a10f0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f96aa8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420a1140 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f96b28;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420a1190 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f96ae8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420a11e0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f967a8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420a1230 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f968e8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420a1280 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f96828;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420a12d0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f96968;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420a1320 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f96768;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420a1370 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f96868;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420a13c0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f969a8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420a1410 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f96a68;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1420a1460 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f96728;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}


