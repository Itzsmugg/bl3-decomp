// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140795440 FUN_140795440 body=6 status=ok
// SIG undefined FUN_140795440(void)

undefined8 FUN_140795440(void)

{
  return 0x5e3c3a77;
}



// FUNCTION 140795450 FUN_140795450 body=6 status=ok
// SIG undefined FUN_140795450(void)

undefined8 FUN_140795450(void)

{
  return 0x3e08d8e7;
}



// FUNCTION 140795460 FUN_140795460 body=6 status=ok
// SIG undefined FUN_140795460(void)

undefined8 FUN_140795460(void)

{
  return 0x2ddca419;
}



// FUNCTION 140795470 FUN_140795470 body=6 status=ok
// SIG undefined FUN_140795470(void)

undefined8 FUN_140795470(void)

{
  return 0x8df03d19;
}



// FUNCTION 140795480 FUN_140795480 body=6 status=ok
// SIG undefined FUN_140795480(void)

undefined8 FUN_140795480(void)

{
  return 0xdf3d28f1;
}



// FUNCTION 140795490 FUN_140795490 body=6 status=ok
// SIG undefined FUN_140795490(void)

undefined8 FUN_140795490(void)

{
  return 0x9c56beb4;
}



// FUNCTION 1407954a0 FUN_1407954a0 body=6 status=ok
// SIG undefined FUN_1407954a0(void)

undefined8 FUN_1407954a0(void)

{
  return 0xe8d5c814;
}



// FUNCTION 1407954b0 FUN_1407954b0 body=6 status=ok
// SIG undefined FUN_1407954b0(void)

undefined8 FUN_1407954b0(void)

{
  return 0xb03945c5;
}



// FUNCTION 1407954c0 FUN_1407954c0 body=6 status=ok
// SIG undefined FUN_1407954c0(void)

undefined8 FUN_1407954c0(void)

{
  return 0xe6ef218a;
}



// FUNCTION 1407954d0 FUN_1407954d0 body=6 status=ok
// SIG undefined FUN_1407954d0(void)

undefined8 FUN_1407954d0(void)

{
  return 0xbe7ff0a5;
}



// FUNCTION 1407954e0 FUN_1407954e0 body=6 status=ok
// SIG undefined FUN_1407954e0(void)

undefined8 FUN_1407954e0(void)

{
  return 0x3e7da565;
}



// FUNCTION 1407954f0 FUN_1407954f0 body=6 status=ok
// SIG undefined FUN_1407954f0(void)

undefined8 FUN_1407954f0(void)

{
  return 0x60d9dc6e;
}



// FUNCTION 140795500 FUN_140795500 body=6 status=ok
// SIG undefined FUN_140795500(void)

undefined8 FUN_140795500(void)

{
  return 0xce36a64f;
}



// FUNCTION 140795510 FUN_140795510 body=6 status=ok
// SIG undefined FUN_140795510(void)

undefined8 FUN_140795510(void)

{
  return 0x84356991;
}



// FUNCTION 140795520 FUN_140795520 body=6 status=ok
// SIG undefined FUN_140795520(void)

undefined8 FUN_140795520(void)

{
  return 0xde7b4e3b;
}



// FUNCTION 140795530 FUN_140795530 body=6 status=ok
// SIG undefined FUN_140795530(void)

undefined8 FUN_140795530(void)

{
  return 0x27cca70d;
}



// FUNCTION 140795540 FUN_140795540 body=6 status=ok
// SIG undefined FUN_140795540(void)

undefined8 FUN_140795540(void)

{
  return 0xec218061;
}



// FUNCTION 140795670 StaticRegisterNativesUSafeZone body=34 status=ok
// SIG undefined StaticRegisterNativesUSafeZone(void)

void USafeZone::StaticRegisterNativesUSafeZone(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetQuerySettingsDescription_1440aa988,1);
  return;
}



// FUNCTION 1407956a0 StaticRegisterNativesULevelSequenceBurnIn body=34 status=ok
// SIG undefined StaticRegisterNativesULevelSequenceBurnIn(void)

void ULevelSequenceBurnIn::StaticRegisterNativesULevelSequenceBurnIn(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetSettingsDescription_1440ab568,1);
  return;
}



// FUNCTION 1407956d0 FUN_1407956d0 body=34 status=ok
// SIG undefined FUN_1407956d0(void)

void FUN_1407956d0(void)

{
  undefined8 uVar1;
  
  uVar1 = UUserWidget::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetNavSettingsDescription_1440ac178,1);
  return;
}



// FUNCTION 140795700 FUN_140795700 body=34 status=ok
// SIG undefined FUN_140795700(void)

void FUN_140795700(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140793390();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_GetRotationChannelSettingsDescri_1440ac970,2);
  return;
}



// FUNCTION 140795730 FUN_140795730 body=82 status=ok
// SIG undefined FUN_140795730(void)

void FUN_140795730(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a220 == 0) {
    uVar1 = FUN_140795440();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a220 =
         GetStaticStruct(FUN_1407960c0,uVar2,L"AIAspectSettings_IsInTerritory",0x18,uVar1);
  }
  return;
}



// FUNCTION 140795790 FUN_140795790 body=82 status=ok
// SIG undefined FUN_140795790(void)

void FUN_140795790(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a240 == 0) {
    uVar1 = FUN_140795450();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a240 = GetStaticStruct(FUN_1407960f0,uVar2,L"AIAspectSettings_Land",0xc,uVar1);
  }
  return;
}



// FUNCTION 1407957f0 FUN_1407957f0 body=82 status=ok
// SIG undefined FUN_1407957f0(void)

void FUN_1407957f0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a260 == 0) {
    uVar1 = FUN_140795460();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a260 = GetStaticStruct(FUN_140796120,uVar2,L"AIAspectSettings_LeadRoute",0x50,uVar1);
  }
  return;
}



// FUNCTION 140795850 FUN_140795850 body=82 status=ok
// SIG undefined FUN_140795850(void)

void FUN_140795850(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a280 == 0) {
    uVar1 = FUN_140795470();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a280 = GetStaticStruct(FUN_140796150,uVar2,L"AIAspectSettings_Leap",0x58,uVar1);
  }
  return;
}



// FUNCTION 1407958b0 FUN_1407958b0 body=82 status=ok
// SIG undefined FUN_1407958b0(void)

void FUN_1407958b0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a2a8 == 0) {
    uVar1 = FUN_140795480();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a2a8 = GetStaticStruct(FUN_140796180,uVar2,L"AIAspectSettings_Location",0x1e0,uVar1);
  }
  return;
}



// FUNCTION 140795910 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FVectorCurve::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a308 == 0) {
    uVar1 = FUN_140795490();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a308 = GetStaticStruct(FUN_1407961b0,uVar2,L"AIAspectSettings_Loop",0x198,uVar1);
  }
  return;
}



// FUNCTION 140795970 FUN_140795970 body=82 status=ok
// SIG undefined FUN_140795970(void)

void FUN_140795970(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a2b8 == 0) {
    uVar1 = FUN_1407954b0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a2b8 = GetStaticStruct(FUN_1407961e0,uVar2,L"AIAspectSettings_Move",8,uVar1);
  }
  return;
}



// FUNCTION 1407959d0 FUN_1407959d0 body=82 status=ok
// SIG undefined FUN_1407959d0(void)

void FUN_1407959d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a340 == 0) {
    uVar1 = FUN_1407954a0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a340 = GetStaticStruct(FUN_140796210,uVar2,L"AIAspectSettings_MoveSpline",0x50,uVar1);
  }
  return;
}



// FUNCTION 140795a30 FUN_140795a30 body=82 status=ok
// SIG undefined FUN_140795a30(void)

void FUN_140795a30(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a380 == 0) {
    uVar1 = FUN_1407954c0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a380 =
         GetStaticStruct(FUN_140796240,uVar2,L"AIAspectSettings_NavFlyOffset",0x120,uVar1);
  }
  return;
}



// FUNCTION 140795a90 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FInstancedStaticMeshComponentInstanceData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a3a0 == 0) {
    uVar1 = FUN_1407954e0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a3a0 = GetStaticStruct(FUN_140796270,uVar2,L"AIAspectSettings_Navigation",0x140,uVar1);
  }
  return;
}



// FUNCTION 140795af0 FUN_140795af0 body=82 status=ok
// SIG undefined FUN_140795af0(void)

void FUN_140795af0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a3b0 == 0) {
    uVar1 = FUN_1407954d0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a3b0 =
         GetStaticStruct(FUN_1407962a0,uVar2,L"AIAspectSettings_NavigationAdvanced",0x38,uVar1);
  }
  return;
}



// FUNCTION 140795b50 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_LookAt::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a3e0 == 0) {
    uVar1 = FUN_1407954f0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a3e0 = GetStaticStruct(FUN_1407962d0,uVar2,L"AIAspectSettings_Orbit",0x220,uVar1);
  }
  return;
}



// FUNCTION 140795bb0 FUN_140795bb0 body=82 status=ok
// SIG undefined FUN_140795bb0(void)

void FUN_140795bb0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a400 == 0) {
    uVar1 = FUN_140795500();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a400 = GetStaticStruct(FUN_140796300,uVar2,L"AIAspectSettings_Plan",0x20,uVar1);
  }
  return;
}



// FUNCTION 140795c10 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FTViewTarget::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a430 == 0) {
    uVar1 = FUN_140795520();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a430 = GetStaticStruct(FUN_140796330,uVar2,L"AIAspectSettings_Rotation",0x550,uVar1);
  }
  return;
}



// FUNCTION 140795c70 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FConstraintInstance::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a440 == 0) {
    uVar1 = FUN_140795510();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a440 =
         GetStaticStruct(FUN_140796360,uVar2,L"AIAspectSettings_RotationChannel",0x1b8,uVar1);
  }
  return;
}



// FUNCTION 140795cd0 FUN_140795cd0 body=82 status=ok
// SIG undefined FUN_140795cd0(void)

void FUN_140795cd0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a470 == 0) {
    uVar1 = FUN_140795530();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a470 = GetStaticStruct(FUN_140796390,uVar2,L"AIAspectSettings_Route",0x28,uVar1);
  }
  return;
}



// FUNCTION 140795d30 FUN_140795d30 body=82 status=ok
// SIG undefined FUN_140795d30(void)

void FUN_140795d30(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a2e8 == 0) {
    uVar1 = FUN_140795540();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a2e8 = GetStaticStruct(FUN_1407963c0,uVar2,L"LookAroundRandomlySettings",0xc,uVar1);
  }
  return;
}



// FUNCTION 140795d90 FUN_140795d90 body=47 status=ok
// SIG undefined FUN_140795d90(void)

longlong FUN_140795d90(void)

{
  if (DAT_14685a230 == 0) {
    FUN_141786440(&DAT_14685a230,&PTR_GetPrivateStaticClass_1440a97f0);
  }
  return DAT_14685a230;
}



// FUNCTION 140795dc0 FUN_140795dc0 body=47 status=ok
// SIG undefined FUN_140795dc0(void)

longlong FUN_140795dc0(void)

{
  if (DAT_14685a250 == 0) {
    FUN_141786440(&DAT_14685a250,&PTR_GetPrivateStaticClass_1440a6230);
  }
  return DAT_14685a250;
}



// FUNCTION 140795df0 FUN_140795df0 body=47 status=ok
// SIG undefined FUN_140795df0(void)

longlong FUN_140795df0(void)

{
  if (DAT_14685a270 == 0) {
    FUN_141786440(&DAT_14685a270,&PTR_FUN_1440a7db0);
  }
  return DAT_14685a270;
}



// FUNCTION 140795e20 FUN_140795e20 body=47 status=ok
// SIG undefined FUN_140795e20(void)

longlong FUN_140795e20(void)

{
  if (DAT_14685a2c8 == 0) {
    FUN_141786440(&DAT_14685a2c8,&PTR_GetPrivateStaticClass_1440a5eb0);
  }
  return DAT_14685a2c8;
}



// FUNCTION 140795e50 FUN_140795e50 body=47 status=ok
// SIG undefined FUN_140795e50(void)

longlong FUN_140795e50(void)

{
  if (DAT_14685a2d8 == 0) {
    FUN_141786440(&DAT_14685a2d8,&PTR_FUN_1440a6000);
  }
  return DAT_14685a2d8;
}



// FUNCTION 140795e80 FUN_140795e80 body=47 status=ok
// SIG undefined FUN_140795e80(void)

longlong FUN_140795e80(void)

{
  if (DAT_14685a2f8 == 0) {
    FUN_141786440(&DAT_14685a2f8,&PTR_FUN_1440a6410);
  }
  return DAT_14685a2f8;
}



// FUNCTION 140795eb0 FUN_140795eb0 body=47 status=ok
// SIG undefined FUN_140795eb0(void)

longlong FUN_140795eb0(void)

{
  if (DAT_14685a330 == 0) {
    FUN_141786440(&DAT_14685a330,&PTR_GetPrivateStaticClass_1440a6a20);
  }
  return DAT_14685a330;
}



// FUNCTION 140795ee0 FUN_140795ee0 body=47 status=ok
// SIG undefined FUN_140795ee0(void)

longlong FUN_140795ee0(void)

{
  if (DAT_14685a350 == 0) {
    FUN_141786440(&DAT_14685a350,&PTR_GetPrivateStaticClass_1440a6d40);
  }
  return DAT_14685a350;
}



// FUNCTION 140795f10 FUN_140795f10 body=47 status=ok
// SIG undefined FUN_140795f10(void)

longlong FUN_140795f10(void)

{
  if (DAT_14685a360 == 0) {
    FUN_141786440(&DAT_14685a360,&PTR_FUN_1440a6ea0);
  }
  return DAT_14685a360;
}



// FUNCTION 140795f40 FUN_140795f40 body=47 status=ok
// SIG undefined FUN_140795f40(void)

longlong FUN_140795f40(void)

{
  if (DAT_14685a370 == 0) {
    FUN_141786440(&DAT_14685a370,&PTR_GetPrivateStaticClass_1440a7030);
  }
  return DAT_14685a370;
}



// FUNCTION 140795f70 FUN_140795f70 body=47 status=ok
// SIG undefined FUN_140795f70(void)

longlong FUN_140795f70(void)

{
  if (DAT_14685a390 == 0) {
    FUN_141786440(&DAT_14685a390,&PTR_FUN_1440a7440);
  }
  return DAT_14685a390;
}



// FUNCTION 140795fa0 FUN_140795fa0 body=47 status=ok
// SIG undefined FUN_140795fa0(void)

longlong FUN_140795fa0(void)

{
  if (DAT_14685a3f0 == 0) {
    FUN_141786440(&DAT_14685a3f0,&PTR_FUN_1440a81f0);
  }
  return DAT_14685a3f0;
}



// FUNCTION 140795fd0 FUN_140795fd0 body=47 status=ok
// SIG undefined FUN_140795fd0(void)

longlong FUN_140795fd0(void)

{
  if (DAT_14685a410 == 0) {
    FUN_141786440(&DAT_14685a410,&PTR_FUN_1440a8720);
  }
  return DAT_14685a410;
}



// FUNCTION 140796000 FUN_140796000 body=47 status=ok
// SIG undefined FUN_140796000(void)

longlong FUN_140796000(void)

{
  if (DAT_14685a480 == 0) {
    FUN_141786440(&DAT_14685a480,&PTR_FUN_1440a9510);
  }
  return DAT_14685a480;
}



// FUNCTION 140796030 FUN_140796030 body=47 status=ok
// SIG undefined FUN_140796030(void)

longlong FUN_140796030(void)

{
  if (DAT_14685a420 == 0) {
    FUN_1417866a0(&DAT_14685a420,&PTR_Z_Construct_UPackage__Script_Engine_14623d7a0);
  }
  return DAT_14685a420;
}



// FUNCTION 140796060 FUN_140796060 body=47 status=ok
// SIG undefined FUN_140796060(void)

longlong FUN_140796060(void)

{
  if (DAT_14685a428 == 0) {
    FUN_1417866a0(&DAT_14685a428,&PTR_Z_Construct_UPackage__Script_Engine_14623d7f0);
  }
  return DAT_14685a428;
}



// FUNCTION 140796090 FUN_140796090 body=47 status=ok
// SIG undefined FUN_140796090(void)

longlong FUN_140796090(void)

{
  if (DAT_14685a3d8 == 0) {
    FUN_1417866a0(&DAT_14685a3d8,&PTR_Z_Construct_UPackage__Script_Engine_14623d750);
  }
  return DAT_14685a3d8;
}



// FUNCTION 1407960c0 FUN_1407960c0 body=47 status=ok
// SIG undefined FUN_1407960c0(void)

longlong FUN_1407960c0(void)

{
  if (DAT_14685a228 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a228,&PTR_Z_Construct_UPackage__Script_Engine_146239d70);
  }
  return DAT_14685a228;
}



// FUNCTION 1407960f0 FUN_1407960f0 body=47 status=ok
// SIG undefined FUN_1407960f0(void)

longlong FUN_1407960f0(void)

{
  if (DAT_14685a248 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a248,&PTR_Z_Construct_UPackage__Script_Engine_146239ed0);
  }
  return DAT_14685a248;
}



// FUNCTION 140796120 FUN_140796120 body=47 status=ok
// SIG undefined FUN_140796120(void)

longlong FUN_140796120(void)

{
  if (DAT_14685a268 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a268,&PTR_Z_Construct_UPackage__Script_Engine_14623a280);
  }
  return DAT_14685a268;
}



// FUNCTION 140796150 FUN_140796150 body=47 status=ok
// SIG undefined FUN_140796150(void)

longlong FUN_140796150(void)

{
  if (DAT_14685a288 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a288,&PTR_Z_Construct_UPackage__Script_Engine_14623a7a0);
  }
  return DAT_14685a288;
}



// FUNCTION 140796180 FUN_140796180 body=47 status=ok
// SIG undefined FUN_140796180(void)

longlong FUN_140796180(void)

{
  if (DAT_14685a2b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a2b0,&PTR_Z_Construct_UPackage__Script_Engine_14623abb0);
  }
  return DAT_14685a2b0;
}



// FUNCTION 1407961b0 FUN_1407961b0 body=47 status=ok
// SIG undefined FUN_1407961b0(void)

longlong FUN_1407961b0(void)

{
  if (DAT_14685a310 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a310,&PTR_Z_Construct_UPackage__Script_Engine_14623b210);
  }
  return DAT_14685a310;
}



// FUNCTION 1407961e0 FUN_1407961e0 body=47 status=ok
// SIG undefined FUN_1407961e0(void)

longlong FUN_1407961e0(void)

{
  if (DAT_14685a2c0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a2c0,&PTR_Z_Construct_UPackage__Script_Engine_14623ad70);
  }
  return DAT_14685a2c0;
}



// FUNCTION 140796210 FUN_140796210 body=47 status=ok
// SIG undefined FUN_140796210(void)

longlong FUN_140796210(void)

{
  if (DAT_14685a348 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a348,&PTR_Z_Construct_UPackage__Script_Engine_14623b6d0);
  }
  return DAT_14685a348;
}



// FUNCTION 140796240 FUN_140796240 body=47 status=ok
// SIG undefined FUN_140796240(void)

longlong FUN_140796240(void)

{
  if (DAT_14685a388 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a388,&PTR_Z_Construct_UPackage__Script_Engine_14623bb50);
  }
  return DAT_14685a388;
}



// FUNCTION 140796270 FUN_140796270 body=47 status=ok
// SIG undefined FUN_140796270(void)

longlong FUN_140796270(void)

{
  if (DAT_14685a3a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a3a8,&PTR_Z_Construct_UPackage__Script_Engine_14623bf60);
  }
  return DAT_14685a3a8;
}



// FUNCTION 1407962a0 FUN_1407962a0 body=47 status=ok
// SIG undefined FUN_1407962a0(void)

longlong FUN_1407962a0(void)

{
  if (DAT_14685a3b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a3b8,&PTR_Z_Construct_UPackage__Script_Engine_14623c3a0);
  }
  return DAT_14685a3b8;
}



// FUNCTION 1407962d0 FUN_1407962d0 body=47 status=ok
// SIG undefined FUN_1407962d0(void)

longlong FUN_1407962d0(void)

{
  if (DAT_14685a3e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a3e8,&PTR_Z_Construct_UPackage__Script_Engine_14623c790);
  }
  return DAT_14685a3e8;
}



// FUNCTION 140796300 FUN_140796300 body=47 status=ok
// SIG undefined FUN_140796300(void)

longlong FUN_140796300(void)

{
  if (DAT_14685a408 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a408,&PTR_Z_Construct_UPackage__Script_Engine_14623c940);
  }
  return DAT_14685a408;
}



// FUNCTION 140796330 FUN_140796330 body=47 status=ok
// SIG undefined FUN_140796330(void)

longlong FUN_140796330(void)

{
  if (DAT_14685a438 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a438,&PTR_Z_Construct_UPackage__Script_Engine_14623cde0);
  }
  return DAT_14685a438;
}



// FUNCTION 140796360 FUN_140796360 body=47 status=ok
// SIG undefined FUN_140796360(void)

longlong FUN_140796360(void)

{
  if (DAT_14685a448 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a448,&PTR_Z_Construct_UPackage__Script_Engine_14623d060);
  }
  return DAT_14685a448;
}



// FUNCTION 140796390 FUN_140796390 body=47 status=ok
// SIG undefined FUN_140796390(void)

longlong FUN_140796390(void)

{
  if (DAT_14685a478 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a478,&PTR_Z_Construct_UPackage__Script_Engine_14623d4d0);
  }
  return DAT_14685a478;
}



// FUNCTION 1407963c0 FUN_1407963c0 body=47 status=ok
// SIG undefined FUN_1407963c0(void)

longlong FUN_1407963c0(void)

{
  if (DAT_14685a2f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a2f0,&PTR_Z_Construct_UPackage__Script_Engine_14623af50);
  }
  return DAT_14685a2f0;
}



// FUNCTION 1407963f0 FUN_1407963f0 body=525 status=ok
// SIG undefined FUN_1407963f0(void)

void FUN_1407963f0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  longlong local_res10;
  undefined8 local_res18 [2];
  undefined2 *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined4 local_190;
  undefined4 local_18c;
  longlong local_188 [2];
  longlong local_178 [2];
  undefined1 local_168 [320];
  
  FUN_1406fedb0(local_168);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_168);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_168);
  }
  local_res10 = 0;
  puVar5 = local_168;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  lVar1 = local_res10;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = FUN_14070e4d0(puVar5,local_178);
  puVar3 = (undefined8 *)FString::Replace(uVar2,local_188,&DAT_1440a3e48,&DAT_1440a3e40,1);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar3;
  }
  if (lVar1 == 0) {
    local_1a8 = (undefined2 *)0x0;
    local_1a0 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
    FGenericPlatformString::Memcpy(local_1a8,&DAT_143f3edc8,10);
  }
  else {
    local_res18[0] = *(undefined8 *)(lVar1 + 0x18);
    FName::ToString(local_res18,&local_1a8);
  }
  puVar4 = &DAT_143f3eda8;
  if ((int)local_1a0 != 0) {
    puVar4 = local_1a8;
  }
  FString::PrintfImpl(&local_198,L"%s:\n\t%s",puVar4,puVar6);
  if (local_1a8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_188[0] != 0) {
    FMemory::Free();
  }
  if (local_178[0] != 0) {
    FMemory::Free();
  }
  if (param_3 == &local_198) {
    if (local_198 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_198;
    *(undefined4 *)(param_3 + 1) = local_190;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_18c;
  }
  return;
}



// FUNCTION 140796600 FUN_140796600 body=482 status=ok
// SIG undefined FUN_140796600(void)

void FUN_140796600(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  longlong local_res10;
  undefined8 local_res18 [2];
  undefined2 *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8 [2];
  longlong local_98 [2];
  undefined1 local_88 [96];
  
  FUN_1406fea20(local_88);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_res10 = 0;
  puVar5 = local_88;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  lVar1 = local_res10;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = FUN_14070d9c0(puVar5,local_98);
  puVar3 = (undefined8 *)FString::Replace(uVar2,local_a8,&DAT_1440a3e48,&DAT_1440a3e40,1);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar3;
  }
  if (lVar1 == 0) {
    local_c8 = (undefined2 *)0x0;
    local_c0 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    FGenericPlatformString::Memcpy(local_c8,&DAT_143f3edc8,10);
  }
  else {
    local_res18[0] = *(undefined8 *)(lVar1 + 0x18);
    FName::ToString(local_res18,&local_c8);
  }
  puVar4 = &DAT_143f3eda8;
  if ((int)local_c0 != 0) {
    puVar4 = local_c8;
  }
  FString::PrintfImpl(&local_b8,L"%s:\n\t%s",puVar4,puVar6);
  if (local_c8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  if (param_3 == &local_b8) {
    if (local_b8 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_b8;
    *(undefined4 *)(param_3 + 1) = local_b0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_ac;
  }
  return;
}



// FUNCTION 1407967f0 FUN_1407967f0 body=525 status=ok
// SIG undefined FUN_1407967f0(void)

void FUN_1407967f0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  longlong local_res10;
  undefined8 local_res18 [2];
  undefined2 *local_228;
  undefined8 local_220;
  longlong local_218;
  undefined4 local_210;
  undefined4 local_20c;
  longlong local_208 [2];
  longlong local_1f8 [2];
  undefined1 local_1e8 [448];
  
  FUN_1406ff2e0(local_1e8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_1e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_1e8);
  }
  local_res10 = 0;
  puVar5 = local_1e8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  lVar1 = local_res10;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = FUN_14070e850(puVar5,local_1f8);
  puVar3 = (undefined8 *)FString::Replace(uVar2,local_208,&DAT_1440a3e48,&DAT_1440a3e40,1);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar3;
  }
  if (lVar1 == 0) {
    local_228 = (undefined2 *)0x0;
    local_220 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
    FGenericPlatformString::Memcpy(local_228,&DAT_143f3edc8,10);
  }
  else {
    local_res18[0] = *(undefined8 *)(lVar1 + 0x18);
    FName::ToString(local_res18,&local_228);
  }
  puVar4 = &DAT_143f3eda8;
  if ((int)local_220 != 0) {
    puVar4 = local_228;
  }
  FString::PrintfImpl(&local_218,L"%s:\n\t%s",puVar4,puVar6);
  if (local_228 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_208[0] != 0) {
    FMemory::Free();
  }
  if (local_1f8[0] != 0) {
    FMemory::Free();
  }
  if (param_3 == &local_218) {
    if (local_218 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_218;
    *(undefined4 *)(param_3 + 1) = local_210;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_20c;
  }
  return;
}



// FUNCTION 140796a00 FUN_140796a00 body=525 status=ok
// SIG undefined FUN_140796a00(void)

void FUN_140796a00(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  longlong local_res10;
  undefined8 local_res18 [2];
  undefined2 *local_5b8;
  undefined8 local_5b0;
  longlong local_5a8;
  undefined4 local_5a0;
  undefined4 local_59c;
  longlong local_598 [2];
  longlong local_588 [2];
  undefined1 local_578 [1360];
  
  FUN_1406ff280(local_578);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_578);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_578);
  }
  local_res10 = 0;
  puVar5 = local_578;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  lVar1 = local_res10;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = FUN_14070e5c0(puVar5,local_588);
  puVar3 = (undefined8 *)FString::Replace(uVar2,local_598,&DAT_1440a3e48,&DAT_1440a3e40,1);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar3;
  }
  if (lVar1 == 0) {
    local_5b8 = (undefined2 *)0x0;
    local_5b0 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5b8,0);
    FGenericPlatformString::Memcpy(local_5b8,&DAT_143f3edc8,10);
  }
  else {
    local_res18[0] = *(undefined8 *)(lVar1 + 0x18);
    FName::ToString(local_res18,&local_5b8);
  }
  puVar4 = &DAT_143f3eda8;
  if ((int)local_5b0 != 0) {
    puVar4 = local_5b8;
  }
  FString::PrintfImpl(&local_5a8,L"%s:\n\t%s",puVar4,puVar6);
  if (local_5b8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_598[0] != 0) {
    FMemory::Free();
  }
  if (local_588[0] != 0) {
    FMemory::Free();
  }
  if (param_3 == &local_5a8) {
    if (local_5a8 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_5a8;
    *(undefined4 *)(param_3 + 1) = local_5a0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_59c;
  }
  return;
}



// FUNCTION 140796c10 FUN_140796c10 body=220 status=ok
// SIG undefined FUN_140796c10(void)

void FUN_140796c10(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 *puVar1;
  longlong local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined1 local_1a8 [416];
  
  FUN_1406feaf0(local_1a8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_1a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_1a8);
  }
  puVar1 = local_1a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14070e190(puVar1,&local_1b8);
  if (param_3 == &local_1b8) {
    if (local_1b8 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_1b8;
    *(undefined4 *)(param_3 + 1) = local_1b0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1ac;
  }
  return;
}



// FUNCTION 140796cf0 FUN_140796cf0 body=53 status=ok
// SIG undefined FUN_140796cf0(void)

void FUN_140796cf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_1440b3d90;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140796d30 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UWidget::GetPrivateStaticClass(void)

{
  if (DAT_14685a878 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIConstraint",&DAT_14685a878,FUN_140447710,0x100,0x10000001,0,
                  L"Engine",&LAB_140798760,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a878;
}



// FUNCTION 140796de0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AFGPoleHologram::GetPrivateStaticClass(void)

{
  if (DAT_14685a760 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_Weapon",&DAT_14685a760,
                  StaticRegisterNativesAFGPoleHologram,0x4d0,0x10000000,0,L"Engine",&LAB_140798680,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a760;
}



// FUNCTION 140796ea0 FUN_140796ea0 body=47 status=ok
// SIG undefined FUN_140796ea0(void)

longlong FUN_140796ea0(void)

{
  if (DAT_14685a758 == 0) {
    FUN_141786440(&DAT_14685a758,&PTR_GetPrivateStaticClass_1440acf10);
  }
  return DAT_14685a758;
}



// FUNCTION 140796ed0 FUN_140796ed0 body=47 status=ok
// SIG undefined FUN_140796ed0(void)

longlong FUN_140796ed0(void)

{
  if (DAT_14685a750 == 0) {
    FUN_141786a30(&DAT_14685a750,&PTR_FUN_14623f890);
  }
  return DAT_14685a750;
}



// FUNCTION 140796f00 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEnvQueryContext_Target::StaticClass(void)

{
  if (DAT_14685a8c8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIGroupBlueprintLibrary",&DAT_14685a8c8,FUN_14079ae50,0x28,
                  0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_14685a8c8;
}



// FUNCTION 140796fb0 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x3d0;
    *puVar1 = &PTR_FUN_1440b3238;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140796ff0 FUN_140796ff0 body=47 status=ok
// SIG undefined FUN_140796ff0(void)

longlong FUN_140796ff0(void)

{
  if (DAT_14685a8c0 == 0) {
    FUN_141786440(&DAT_14685a8c0,&PTR_StaticClass_1440ad6d0);
  }
  return DAT_14685a8c0;
}



// FUNCTION 140797020 FUN_140797020 body=47 status=ok
// SIG undefined FUN_140797020(void)

longlong FUN_140797020(void)

{
  if (DAT_14685a890 == 0) {
    FUN_141786a30(&DAT_14685a890,&PTR_FUN_146241310);
  }
  return DAT_14685a890;
}



// FUNCTION 140797050 FUN_140797050 body=47 status=ok
// SIG undefined FUN_140797050(void)

longlong FUN_140797050(void)

{
  if (DAT_14685a898 == 0) {
    FUN_141786a30(&DAT_14685a898,&PTR_FUN_1462414a0);
  }
  return DAT_14685a898;
}



// FUNCTION 140797080 FUN_140797080 body=47 status=ok
// SIG undefined FUN_140797080(void)

longlong FUN_140797080(void)

{
  if (DAT_14685a8a0 == 0) {
    FUN_141786a30(&DAT_14685a8a0,&PTR_FUN_1462415a0);
  }
  return DAT_14685a8a0;
}



// FUNCTION 1407970b0 FUN_1407970b0 body=47 status=ok
// SIG undefined FUN_1407970b0(void)

longlong FUN_1407970b0(void)

{
  if (DAT_14685a8a8 == 0) {
    FUN_141786a30(&DAT_14685a8a8,&PTR_FUN_146241660);
  }
  return DAT_14685a8a8;
}



// FUNCTION 1407970e0 FUN_1407970e0 body=47 status=ok
// SIG undefined FUN_1407970e0(void)

longlong FUN_1407970e0(void)

{
  if (DAT_14685a8b0 == 0) {
    FUN_141786a30(&DAT_14685a8b0,&PTR_FUN_146241730);
  }
  return DAT_14685a8b0;
}



// FUNCTION 140797110 FUN_140797110 body=47 status=ok
// SIG undefined FUN_140797110(void)

longlong FUN_140797110(void)

{
  if (DAT_14685a8b8 == 0) {
    FUN_141786a30(&DAT_14685a8b8,&PTR_FUN_146241890);
  }
  return DAT_14685a8b8;
}



// FUNCTION 140797150 FUN_140797150 body=162 status=ok
// SIG undefined FUN_140797150(void)

longlong FUN_140797150(void)

{
  if (DAT_14685a790 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_ZeroRotation",&DAT_14685a790,FUN_140447710,0x110,
                  0x10000000,0,L"Engine",FUN_140798690,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a790;
}



// FUNCTION 140797200 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FPhysicalOpenableInteractionsPlanes_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_1440b3700;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return;
  }
  return;
}



// FUNCTION 140797250 FUN_140797250 body=53 status=ok
// SIG undefined FUN_140797250(void)

void FUN_140797250(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = &PTR_FUN_1440b3818;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return;
  }
  return;
}



// FUNCTION 140797290 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AFGConveyorBeltHologram::GetPrivateStaticClass(void)

{
  if (DAT_14685a610 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_Sweep",&DAT_14685a610,FUN_140447710,0x508,0x10000000,0
                  ,L"Engine",&LAB_140798380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140793060,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a610;
}



// FUNCTION 140797350 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAISense_Hearing::GetPrivateStaticClass(void)

{
  if (DAT_14685a7a0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspectBlueprint",&DAT_14685a7a0,FUN_140447710,0xf0,0x10000004
                  ,0,L"Engine",&LAB_140798310,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14078c5c0,&LAB_140447700,0);
  }
  return DAT_14685a7a0;
}



// FUNCTION 140797400 FUN_140797400 body=53 status=ok
// SIG undefined FUN_140797400(void)

void FUN_140797400(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa8;
    *puVar1 = &PTR_FUN_1440b0f70;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140797450 FUN_140797450 body=162 status=ok
// SIG undefined FUN_140797450(void)

longlong FUN_140797450(void)

{
  if (DAT_14685a630 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_Swoop",&DAT_14685a630,FUN_140447710,0x580,0x10000000,0
                  ,L"Engine",&LAB_140798390,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UUserWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a630;
}



// FUNCTION 140797500 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 800;
    *puVar1 = &PTR_FUN_1440b1088;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140797550 FUN_140797550 body=162 status=ok
// SIG undefined FUN_140797550(void)

longlong FUN_140797550(void)

{
  if (DAT_14685a640 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_TakeOff",&DAT_14685a640,FUN_140447710,0x340,0x10000000
                  ,0,L"Engine",&LAB_1407983a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  ALevelScriptActor::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a640;
}



// FUNCTION 140797610 FUN_140797610 body=162 status=ok
// SIG undefined FUN_140797610(void)

longlong FUN_140797610(void)

{
  if (DAT_14685a668 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_Teleport",&DAT_14685a668,FUN_14079adc0,0x238,
                  0x10000000,0,L"Engine",FUN_1407983b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a668;
}



// FUNCTION 1407976c0 FUN_1407976c0 body=47 status=ok
// SIG undefined FUN_1407976c0(void)

longlong FUN_1407976c0(void)

{
  if (DAT_14685a660 == 0) {
    FUN_141786440(&DAT_14685a660,&PTR_FUN_1440ae3b0);
  }
  return DAT_14685a660;
}



// FUNCTION 1407976f0 FUN_1407976f0 body=47 status=ok
// SIG undefined FUN_1407976f0(void)

longlong FUN_1407976f0(void)

{
  if (DAT_14685a658 == 0) {
    FUN_141786a30(&DAT_14685a658,&PTR_FUN_14623e4b0);
  }
  return DAT_14685a658;
}



// FUNCTION 140797720 FUN_140797720 body=162 status=ok
// SIG undefined FUN_140797720(void)

longlong FUN_140797720(void)

{
  if (DAT_14685a718 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_UseCover",&DAT_14685a718,FUN_140447710,0x238,
                  0x10000000,0,L"Engine",FUN_1407985a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a718;
}



// FUNCTION 1407977d0 FUN_1407977d0 body=53 status=ok
// SIG undefined FUN_1407977d0(void)

void FUN_1407977d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x138;
    *puVar1 = &PTR_FUN_1440b1558;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140797820 FUN_140797820 body=162 status=ok
// SIG undefined FUN_140797820(void)

longlong FUN_140797820(void)

{
  if (DAT_14685a678 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_Territory",&DAT_14685a678,FUN_140447710,0x110,
                  0x10000000,0,L"Engine",&LAB_140798410,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a678;
}



// FUNCTION 1407978d0 FUN_1407978d0 body=53 status=ok
// SIG undefined FUN_1407978d0(void)

void FUN_1407978d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x138;
    *puVar1 = &PTR_FUN_1440b2d60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140797930 FUN_140797930 body=162 status=ok
// SIG undefined FUN_140797930(void)

longlong FUN_140797930(void)

{
  if (DAT_14685a5e8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_Stance",&DAT_14685a5e8,FUN_140447710,0x110,0x10000000,
                  0,L"Engine",FUN_140798320,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a5e8;
}



// FUNCTION 1407979e0 FUN_1407979e0 body=162 status=ok
// SIG undefined FUN_1407979e0(void)

longlong FUN_1407979e0(void)

{
  if (DAT_14685a7f0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AICloakData",&DAT_14685a7f0,FUN_140447710,0x48,0x10000000,0,
                  L"Engine",FUN_140798720,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685a7f0;
}



// FUNCTION 140797ab0 FUN_140797ab0 body=53 status=ok
// SIG undefined FUN_140797ab0(void)

void FUN_140797ab0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1440b0e28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140797af0 FUN_140797af0 body=162 status=ok
// SIG undefined FUN_140797af0(void)

longlong FUN_140797af0(void)

{
  if (DAT_14685a698 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_Ticket",&DAT_14685a698,FUN_140447710,0x228,0x10000000,
                  0,L"Engine",FUN_140798420,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a698;
}



// FUNCTION 140797bb0 FUN_140797bb0 body=53 status=ok
// SIG undefined FUN_140797bb0(void)

void FUN_140797bb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x128;
    *puVar1 = &PTR_FUN_1440b1a38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140797bf0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBorder::GetPrivateStaticClass(void)

{
  if (DAT_14685a858 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AICloakComponent",&DAT_14685a858,StaticRegisterNativesUBorder,
                  0x270,0x10000000,0,L"Engine",&LAB_140798700,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_14685a858;
}



// FUNCTION 140797cb0 FUN_140797cb0 body=47 status=ok
// SIG undefined FUN_140797cb0(void)

longlong FUN_140797cb0(void)

{
  if (DAT_14685a850 == 0) {
    FUN_141786440(&DAT_14685a850,&PTR_GetPrivateStaticClass_1440afe50);
  }
  return DAT_14685a850;
}



// FUNCTION 140797ce0 FUN_140797ce0 body=47 status=ok
// SIG undefined FUN_140797ce0(void)

longlong FUN_140797ce0(void)

{
  if (DAT_14685a7f8 == 0) {
    FUN_141786a30(&DAT_14685a7f8,&PTR_FUN_146240140);
  }
  return DAT_14685a7f8;
}



// FUNCTION 140797d10 FUN_140797d10 body=47 status=ok
// SIG undefined FUN_140797d10(void)

longlong FUN_140797d10(void)

{
  if (DAT_14685a800 == 0) {
    FUN_141786a30(&DAT_14685a800,&PTR_FUN_146240180);
  }
  return DAT_14685a800;
}



// FUNCTION 140797d40 FUN_140797d40 body=47 status=ok
// SIG undefined FUN_140797d40(void)

longlong FUN_140797d40(void)

{
  if (DAT_14685a808 == 0) {
    FUN_141786a30(&DAT_14685a808,&PTR_FUN_146240210);
  }
  return DAT_14685a808;
}



// FUNCTION 140797d70 FUN_140797d70 body=47 status=ok
// SIG undefined FUN_140797d70(void)

longlong FUN_140797d70(void)

{
  if (DAT_14685a810 == 0) {
    FUN_141786a30(&DAT_14685a810,&PTR_FUN_1462402a0);
  }
  return DAT_14685a810;
}



// FUNCTION 140797da0 FUN_140797da0 body=47 status=ok
// SIG undefined FUN_140797da0(void)

longlong FUN_140797da0(void)

{
  if (DAT_14685a818 == 0) {
    FUN_141786a30(&DAT_14685a818,&PTR_FUN_146240320);
  }
  return DAT_14685a818;
}



// FUNCTION 140797dd0 FUN_140797dd0 body=47 status=ok
// SIG undefined FUN_140797dd0(void)

longlong FUN_140797dd0(void)

{
  if (DAT_14685a820 == 0) {
    FUN_141786a30(&DAT_14685a820,&PTR_FUN_146240360);
  }
  return DAT_14685a820;
}



// FUNCTION 140797e00 FUN_140797e00 body=47 status=ok
// SIG undefined FUN_140797e00(void)

longlong FUN_140797e00(void)

{
  if (DAT_14685a828 == 0) {
    FUN_141786a30(&DAT_14685a828,&PTR_FUN_1462403f0);
  }
  return DAT_14685a828;
}



// FUNCTION 140797e30 FUN_140797e30 body=47 status=ok
// SIG undefined FUN_140797e30(void)

longlong FUN_140797e30(void)

{
  if (DAT_14685a830 == 0) {
    FUN_141786a30(&DAT_14685a830,&PTR_FUN_146240480);
  }
  return DAT_14685a830;
}



// FUNCTION 140797e60 FUN_140797e60 body=47 status=ok
// SIG undefined FUN_140797e60(void)

longlong FUN_140797e60(void)

{
  if (DAT_14685a838 == 0) {
    FUN_141786a30(&DAT_14685a838,&PTR_FUN_146240510);
  }
  return DAT_14685a838;
}



// FUNCTION 140797e90 FUN_140797e90 body=47 status=ok
// SIG undefined FUN_140797e90(void)

longlong FUN_140797e90(void)

{
  if (DAT_14685a840 == 0) {
    FUN_141786a30(&DAT_14685a840,&PTR_FUN_146240550);
  }
  return DAT_14685a840;
}



// FUNCTION 140797ec0 FUN_140797ec0 body=47 status=ok
// SIG undefined FUN_140797ec0(void)

longlong FUN_140797ec0(void)

{
  if (DAT_14685a848 == 0) {
    FUN_141786a30(&DAT_14685a848,&PTR_FUN_1462405d0);
  }
  return DAT_14685a848;
}



// FUNCTION 140797ef0 FUN_140797ef0 body=162 status=ok
// SIG undefined FUN_140797ef0(void)

longlong FUN_140797ef0(void)

{
  if (DAT_14685a6b8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_TimedCondition",&DAT_14685a6b8,FUN_140447710,0x218,
                  0x10000000,0,L"Engine",FUN_1407984e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a6b8;
}



// FUNCTION 140797fa0 FUN_140797fa0 body=53 status=ok
// SIG undefined FUN_140797fa0(void)

void FUN_140797fa0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &PTR_FUN_1440b3bc8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return;
  }
  return;
}



// FUNCTION 140797fe0 FUN_140797fe0 body=53 status=ok
// SIG undefined FUN_140797fe0(void)

void FUN_140797fe0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x118;
    *puVar1 = &PTR_FUN_1440b1f08;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140798030 FUN_140798030 body=162 status=ok
// SIG undefined FUN_140798030(void)

longlong FUN_140798030(void)

{
  if (DAT_14685a6d8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_TimeLimit",&DAT_14685a6d8,FUN_140447710,0x208,
                  0x10000000,0,L"Engine",FUN_140798480,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a6d8;
}



// FUNCTION 1407980f0 FUN_1407980f0 body=53 status=ok
// SIG undefined FUN_1407980f0(void)

void FUN_1407980f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x108;
    *puVar1 = &PTR_FUN_1440b23d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140798140 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AFGFreightWagon::GetPrivateStaticClass(void)

{
  if (DAT_14685a6f8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_Timer",&DAT_14685a6f8,FUN_140447710,0x5c8,0x10000000,0
                  ,L"Engine",FUN_140798540,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a6f8;
}



// FUNCTION 1407981f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ALevelScriptActor::GetPrivateStaticClass(void)

{
  if (DAT_14685a738 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_UseSmartObject",&DAT_14685a738,FUN_140447710,0x338,
                  0x10000000,0,L"Engine",FUN_140798610,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a738;
}



// FUNCTION 1407982b0 FUN_1407982b0 body=53 status=ok
// SIG undefined FUN_1407982b0(void)

void FUN_1407982b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x4c8;
    *puVar1 = &PTR_FUN_1440b28a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140798320 FUN_140798320 body=84 status=ok
// SIG undefined FUN_140798320(void)

void FUN_140798320(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR_FUN_1440b0a88;
    puVar1[5] = &PTR_LAB_1440a4a48;
    FUN_1406ff3b0(puVar1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 1407983b0 FUN_1407983b0 body=84 status=ok
// SIG undefined FUN_1407983b0(void)

void FUN_1407983b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR_FUN_1440b11a0;
    puVar1[5] = &PTR_LAB_1440b1540;
    FUN_1406ffa60(puVar1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 140798420 FUN_140798420 body=84 status=ok
// SIG undefined FUN_140798420(void)

void FUN_140798420(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR__scalar_deleting_destructor__1440b1680;
    puVar1[5] = &PTR_LAB_1440b1a20;
    FUN_1406ffb20(puVar1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 140798480 FUN_140798480 body=84 status=ok
// SIG undefined FUN_140798480(void)

void FUN_140798480(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR__scalar_deleting_destructor__1440b2020;
    puVar1[5] = &PTR_LAB_1440b23c0;
    FUN_1406ffb90(puVar1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 1407984e0 FUN_1407984e0 body=84 status=ok
// SIG undefined FUN_1407984e0(void)

void FUN_1407984e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR__scalar_deleting_destructor__1440b1b50;
    puVar1[5] = &PTR_LAB_1440b1ef0;
    FUN_1406ffbe0(puVar1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 140798540 FUN_140798540 body=84 status=ok
// SIG undefined FUN_140798540(void)

void FUN_140798540(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR_FUN_1440b24f0;
    puVar1[5] = &PTR_LAB_1440b2890;
    FUN_1406ffc20(puVar1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 1407985a0 FUN_1407985a0 body=84 status=ok
// SIG undefined FUN_1407985a0(void)

void FUN_1407985a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR_FUN_1440b29c0;
    puVar1[5] = &PTR_LAB_1440b1540;
    FUN_1406ffd20(puVar1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 140798610 FUN_140798610 body=100 status=ok
// SIG undefined FUN_140798610(void)

void FUN_140798610(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR__scalar_deleting_destructor__144063b08;
    puVar1[5] = &PTR_LAB_144063eb0;
    FUN_1406fe690(puVar1 + 0x20);
    *puVar1 = &PTR__scalar_deleting_destructor__1440b2e78;
    puVar1[5] = &PTR_LAB_1440b3220;
  }
  return;
}



// FUNCTION 140798690 FUN_140798690 body=97 status=ok
// SIG undefined FUN_140798690(void)

void FUN_140798690(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR_FUN_1440b3360;
    puVar1[5] = &PTR_LAB_1440a4a48;
    *(undefined4 *)(puVar1 + 0x20) = 0x1010001;
    *(undefined4 *)((longlong)puVar1 + 0x104) = 0x1010001;
    *(undefined4 *)(puVar1 + 0x21) = 0x1010001;
  }
  return;
}



// FUNCTION 140798720 FUN_140798720 body=51 status=ok
// SIG undefined FUN_140798720(void)

void FUN_140798720(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    *puVar1 = &PTR_FUN_1440b3930;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return;
}



// FUNCTION 140798770 FUN_140798770 body=1277 status=ok
// SIG undefined FUN_140798770(void)

undefined8 * FUN_140798770(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 0x11) = *(undefined1 *)((longlong)param_2 + 0x11);
  *(undefined1 *)((longlong)param_1 + 0x12) = *(undefined1 *)((longlong)param_2 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0x13) = *(undefined1 *)((longlong)param_2 + 0x13);
  *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  param_1[0xc] = param_2[0xc];
  uVar1 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar1;
  param_1[0xf] = param_2[0xf];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0x91) = *(undefined1 *)((longlong)param_2 + 0x91);
  *(undefined1 *)((longlong)param_1 + 0x92) = *(undefined1 *)((longlong)param_2 + 0x92);
  *(undefined1 *)((longlong)param_1 + 0x93) = *(undefined1 *)((longlong)param_2 + 0x93);
  *(undefined8 *)((longlong)param_1 + 0x94) = *(undefined8 *)((longlong)param_2 + 0x94);
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  uVar1 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar1;
  uVar1 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar1;
  uVar1 = param_2[0x1b];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar1;
  param_1[0x1c] = param_2[0x1c];
  uVar1 = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = uVar1;
  param_1[0x1f] = param_2[0x1f];
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)((longlong)param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x111) = *(undefined1 *)((longlong)param_2 + 0x111);
  *(undefined1 *)((longlong)param_1 + 0x112) = *(undefined1 *)((longlong)param_2 + 0x112);
  *(undefined1 *)((longlong)param_1 + 0x113) = *(undefined1 *)((longlong)param_2 + 0x113);
  *(undefined8 *)((longlong)param_1 + 0x114) = *(undefined8 *)((longlong)param_2 + 0x114);
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  uVar1 = param_2[0x27];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = uVar1;
  uVar1 = param_2[0x29];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = uVar1;
  uVar1 = param_2[0x2b];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = uVar1;
  param_1[0x2c] = param_2[0x2c];
  uVar1 = param_2[0x2e];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = uVar1;
  param_1[0x2f] = param_2[0x2f];
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)((longlong)param_2 + 0x184);
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(param_2 + 0x31);
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
  *(undefined1 *)((longlong)param_1 + 0x191) = *(undefined1 *)((longlong)param_2 + 0x191);
  *(undefined1 *)((longlong)param_1 + 0x192) = *(undefined1 *)((longlong)param_2 + 0x192);
  *(undefined1 *)((longlong)param_1 + 0x193) = *(undefined1 *)((longlong)param_2 + 0x193);
  *(undefined8 *)((longlong)param_1 + 0x194) = *(undefined8 *)((longlong)param_2 + 0x194);
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = param_2[0x35];
  uVar1 = param_2[0x37];
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = uVar1;
  uVar1 = param_2[0x39];
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = uVar1;
  uVar1 = param_2[0x3b];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3b] = uVar1;
  param_1[0x3c] = param_2[0x3c];
  uVar1 = param_2[0x3e];
  param_1[0x3d] = param_2[0x3d];
  param_1[0x3e] = uVar1;
  param_1[0x3f] = param_2[0x3f];
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x204) = *(undefined4 *)((longlong)param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)(param_2 + 0x41);
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_2 + 0x42);
  *(undefined1 *)((longlong)param_1 + 0x211) = *(undefined1 *)((longlong)param_2 + 0x211);
  *(undefined1 *)((longlong)param_1 + 0x212) = *(undefined1 *)((longlong)param_2 + 0x212);
  *(undefined1 *)((longlong)param_1 + 0x213) = *(undefined1 *)((longlong)param_2 + 0x213);
  *(undefined8 *)((longlong)param_1 + 0x214) = *(undefined8 *)((longlong)param_2 + 0x214);
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = param_2[0x45];
  uVar1 = param_2[0x47];
  param_1[0x46] = param_2[0x46];
  param_1[0x47] = uVar1;
  uVar1 = param_2[0x49];
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = uVar1;
  uVar1 = param_2[0x4b];
  param_1[0x4a] = param_2[0x4a];
  param_1[0x4b] = uVar1;
  param_1[0x4c] = param_2[0x4c];
  uVar1 = param_2[0x4e];
  param_1[0x4d] = param_2[0x4d];
  param_1[0x4e] = uVar1;
  param_1[0x4f] = param_2[0x4f];
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x284) = *(undefined4 *)((longlong)param_2 + 0x284);
  *(undefined4 *)(param_1 + 0x51) = *(undefined4 *)(param_2 + 0x51);
  *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_2 + 0x52);
  *(undefined1 *)((longlong)param_1 + 0x291) = *(undefined1 *)((longlong)param_2 + 0x291);
  *(undefined1 *)((longlong)param_1 + 0x292) = *(undefined1 *)((longlong)param_2 + 0x292);
  *(undefined1 *)((longlong)param_1 + 0x293) = *(undefined1 *)((longlong)param_2 + 0x293);
  *(undefined8 *)((longlong)param_1 + 0x294) = *(undefined8 *)((longlong)param_2 + 0x294);
  param_1[0x54] = param_2[0x54];
  param_1[0x55] = param_2[0x55];
  uVar1 = param_2[0x57];
  param_1[0x56] = param_2[0x56];
  param_1[0x57] = uVar1;
  uVar1 = param_2[0x59];
  param_1[0x58] = param_2[0x58];
  param_1[0x59] = uVar1;
  uVar1 = param_2[0x5b];
  param_1[0x5a] = param_2[0x5a];
  param_1[0x5b] = uVar1;
  param_1[0x5c] = param_2[0x5c];
  uVar1 = param_2[0x5e];
  param_1[0x5d] = param_2[0x5d];
  param_1[0x5e] = uVar1;
  param_1[0x5f] = param_2[0x5f];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_2 + 0x304);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_2 + 0x61);
  *(undefined4 *)(param_1 + 0x62) = *(undefined4 *)(param_2 + 0x62);
  *(undefined1 *)((longlong)param_1 + 0x314) = *(undefined1 *)((longlong)param_2 + 0x314);
  *(undefined4 *)(param_1 + 99) = *(undefined4 *)(param_2 + 99);
  return param_1;
}



// FUNCTION 140798c70 FUN_140798c70 body=1985 status=ok
// SIG undefined FUN_140798c70(void)

undefined1 * FUN_140798c70(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  param_1[0x80] = param_2[0x80];
  param_1[0x88] = param_2[0x88];
  param_1[0x89] = param_2[0x89];
  param_1[0x8a] = param_2[0x8a];
  param_1[0x8b] = param_2[0x8b];
  *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  uVar1 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  uVar1 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = uVar1;
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  param_1[0x108] = param_2[0x108];
  param_1[0x110] = param_2[0x110];
  param_1[0x111] = param_2[0x111];
  param_1[0x112] = param_2[0x112];
  param_1[0x113] = param_2[0x113];
  *(undefined8 *)(param_1 + 0x114) = *(undefined8 *)(param_2 + 0x114);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  uVar1 = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x158) = uVar1;
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  uVar1 = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x184);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  param_1[400] = param_2[400];
  param_1[0x198] = param_2[0x198];
  param_1[0x199] = param_2[0x199];
  param_1[0x19a] = param_2[0x19a];
  param_1[0x19b] = param_2[0x19b];
  *(undefined8 *)(param_1 + 0x19c) = *(undefined8 *)(param_2 + 0x19c);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  uVar1 = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1c0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1d0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_2 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1e0) = uVar1;
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_2 + 0x1e8);
  uVar1 = *(undefined8 *)(param_2 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f8) = uVar1;
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_2 + 0x20c);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  param_1[0x218] = param_2[0x218];
  param_1[0x220] = param_2[0x220];
  param_1[0x221] = param_2[0x221];
  param_1[0x222] = param_2[0x222];
  param_1[0x223] = param_2[0x223];
  *(undefined8 *)(param_1 + 0x224) = *(undefined8 *)(param_2 + 0x224);
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x230);
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 0x238);
  uVar1 = *(undefined8 *)(param_2 + 0x248);
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x240);
  *(undefined8 *)(param_1 + 0x248) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 600);
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_2 + 0x250);
  *(undefined8 *)(param_1 + 600) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x268);
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_2 + 0x260);
  *(undefined8 *)(param_1 + 0x268) = uVar1;
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_2 + 0x270);
  uVar1 = *(undefined8 *)(param_2 + 0x280);
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x278);
  *(undefined8 *)(param_1 + 0x280) = uVar1;
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_2 + 0x288);
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_2 + 0x290);
  *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_2 + 0x294);
  *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_2 + 0x298);
  param_1[0x2a0] = param_2[0x2a0];
  param_1[0x2a8] = param_2[0x2a8];
  param_1[0x2a9] = param_2[0x2a9];
  param_1[0x2aa] = param_2[0x2aa];
  param_1[0x2ab] = param_2[0x2ab];
  *(undefined8 *)(param_1 + 0x2ac) = *(undefined8 *)(param_2 + 0x2ac);
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_2 + 0x2b8);
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_2 + 0x2c0);
  uVar1 = *(undefined8 *)(param_2 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2d0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_2 + 0x2d8);
  *(undefined8 *)(param_1 + 0x2e0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_2 + 0x2e8);
  *(undefined8 *)(param_1 + 0x2f0) = uVar1;
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x2f8);
  uVar1 = *(undefined8 *)(param_2 + 0x308);
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_2 + 0x300);
  *(undefined8 *)(param_1 + 0x308) = uVar1;
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_2 + 0x310);
  *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_2 + 0x318);
  *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_2 + 0x31c);
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_2 + 800);
  param_1[0x328] = param_2[0x328];
  param_1[0x330] = param_2[0x330];
  param_1[0x331] = param_2[0x331];
  param_1[0x332] = param_2[0x332];
  param_1[0x333] = param_2[0x333];
  *(undefined8 *)(param_1 + 0x334) = *(undefined8 *)(param_2 + 0x334);
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_2 + 0x340);
  *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)(param_2 + 0x348);
  uVar1 = *(undefined8 *)(param_2 + 0x358);
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_2 + 0x350);
  *(undefined8 *)(param_1 + 0x358) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x368);
  *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_2 + 0x360);
  *(undefined8 *)(param_1 + 0x368) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x378);
  *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_2 + 0x370);
  *(undefined8 *)(param_1 + 0x378) = uVar1;
  *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(param_2 + 0x380);
  uVar1 = *(undefined8 *)(param_2 + 0x390);
  *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_2 + 0x388);
  *(undefined8 *)(param_1 + 0x390) = uVar1;
  *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(param_2 + 0x398);
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_2 + 0x3a0);
  *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_2 + 0x3a4);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_2 + 0x3a8);
  param_1[0x3b0] = param_2[0x3b0];
  param_1[0x3b8] = param_2[0x3b8];
  param_1[0x3b9] = param_2[0x3b9];
  param_1[0x3ba] = param_2[0x3ba];
  param_1[0x3bb] = param_2[0x3bb];
  *(undefined8 *)(param_1 + 0x3bc) = *(undefined8 *)(param_2 + 0x3bc);
  *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(param_2 + 0x3c8);
  *(undefined8 *)(param_1 + 0x3d0) = *(undefined8 *)(param_2 + 0x3d0);
  uVar1 = *(undefined8 *)(param_2 + 0x3e0);
  *(undefined8 *)(param_1 + 0x3d8) = *(undefined8 *)(param_2 + 0x3d8);
  *(undefined8 *)(param_1 + 0x3e0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x3f0);
  *(undefined8 *)(param_1 + 1000) = *(undefined8 *)(param_2 + 1000);
  *(undefined8 *)(param_1 + 0x3f0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x400);
  *(undefined8 *)(param_1 + 0x3f8) = *(undefined8 *)(param_2 + 0x3f8);
  *(undefined8 *)(param_1 + 0x400) = uVar1;
  *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(param_2 + 0x408);
  uVar1 = *(undefined8 *)(param_2 + 0x418);
  *(undefined8 *)(param_1 + 0x410) = *(undefined8 *)(param_2 + 0x410);
  *(undefined8 *)(param_1 + 0x418) = uVar1;
  *(undefined8 *)(param_1 + 0x420) = *(undefined8 *)(param_2 + 0x420);
  *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_2 + 0x428);
  *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(param_2 + 0x42c);
  *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(param_2 + 0x430);
  param_1[0x438] = param_2[0x438];
  param_1[0x440] = param_2[0x440];
  param_1[0x441] = param_2[0x441];
  param_1[0x442] = param_2[0x442];
  param_1[0x443] = param_2[0x443];
  *(undefined8 *)(param_1 + 0x444) = *(undefined8 *)(param_2 + 0x444);
  *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)(param_2 + 0x450);
  *(undefined8 *)(param_1 + 0x458) = *(undefined8 *)(param_2 + 0x458);
  uVar1 = *(undefined8 *)(param_2 + 0x468);
  *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(param_2 + 0x460);
  *(undefined8 *)(param_1 + 0x468) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x478);
  *(undefined8 *)(param_1 + 0x470) = *(undefined8 *)(param_2 + 0x470);
  *(undefined8 *)(param_1 + 0x478) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x488);
  *(undefined8 *)(param_1 + 0x480) = *(undefined8 *)(param_2 + 0x480);
  *(undefined8 *)(param_1 + 0x488) = uVar1;
  *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)(param_2 + 0x490);
  uVar1 = *(undefined8 *)(param_2 + 0x4a0);
  *(undefined8 *)(param_1 + 0x498) = *(undefined8 *)(param_2 + 0x498);
  *(undefined8 *)(param_1 + 0x4a0) = uVar1;
  *(undefined8 *)(param_1 + 0x4a8) = *(undefined8 *)(param_2 + 0x4a8);
  *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_2 + 0x4b0);
  *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(param_2 + 0x4b4);
  *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_2 + 0x4b8);
  param_1[0x4c0] = param_2[0x4c0];
  return param_1;
}



// FUNCTION 140799480 FUN_140799480 body=52 status=ok
// SIG undefined FUN_140799480(void)

undefined8 FUN_140799480(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x238);
  }
  return param_1;
}



// FUNCTION 1407994c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UUGXPBarUW::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x228);
  }
  return param_1;
}



// FUNCTION 140799500 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessDiaphragmDOFDownsampleCS::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x208);
  }
  return param_1;
}



// FUNCTION 140799540 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FEditableTextStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 140799580 FUN_140799580 body=52 status=ok
// SIG undefined FUN_140799580(void)

undefined8 FUN_140799580(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5c8);
  }
  return param_1;
}



// FUNCTION 1407995c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
ADungeonParticleSystem::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x338);
  }
  return param_1;
}



// FUNCTION 140799600 FUN_140799600 body=70 status=ok
// SIG undefined FUN_140799600(void)

longlong FUN_140799600(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140799730 FUN_140799730 body=106 status=ok
// SIG undefined FUN_140799730(void)

void FUN_140799730(longlong param_1,undefined4 *param_2)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    *param_2 = 0xffffffff;
    param_2[1] = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((longlong)param_2 + 0x42) = 1;
    param_2[0xd] = 0xff7fffff;
    param_2[0x12] = 0xffffffff;
    param_2[0x13] = 0;
    FWeakObjectPtr::operator=(&local_res8,0);
    param_2[0x12] = local_res8;
    param_2[0x13] = local_resc;
  }
  return;
}



// FUNCTION 1407998a0 FUN_1407998a0 body=81 status=ok
// SIG undefined FUN_1407998a0(void)

void FUN_1407998a0(longlong param_1,undefined4 *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x70);
    *param_2 = 0xffffffff;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((longlong)param_2 + 0x42) = 1;
    param_2[0xd] = 0xff7fffff;
    *(undefined8 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 140799900 FUN_140799900 body=166 status=ok
// SIG undefined FUN_140799900(void)

void FUN_140799900(longlong param_1,undefined4 *param_2)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    *param_2 = 0xffffffff;
    param_2[1] = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((longlong)param_2 + 0x42) = 1;
    param_2[0xd] = 0xff7fffff;
    param_2[0x12] = 0xffffffff;
    param_2[0x13] = 0;
    param_2[0x14] = 0xffffffff;
    param_2[0x15] = 0;
    param_2[0x16] = 0xffffffff;
    param_2[0x17] = 0;
    param_2[0x18] = 0xffffffff;
    param_2[0x19] = 0;
    FWeakObjectPtr::operator=(&local_res8,0);
    param_2[0x12] = local_res8;
    param_2[0x13] = local_resc;
    FWeakObjectPtr::operator=(&local_res8,0);
    param_2[0x16] = local_res8;
    param_2[0x17] = local_resc;
  }
  return;
}



// FUNCTION 140799ae0 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FAnimNode_AnimDynamics>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_140798770(param_2 + param_3,param_3);
      param_3 = param_3 + 800;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14079a3b0 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FHyperlinkStyle>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_140798c70(param_2 + param_3,param_3);
      param_3 = param_3 + 0x4c8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14079a690 FUN_14079a690 body=74 status=ok
// SIG undefined FUN_14079a690(void)

undefined1 FUN_14079a690(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1406d9bf0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x3d0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14079a710 FUN_14079a710 body=414 status=ok
// SIG undefined FUN_14079a710(void)

undefined8 FUN_14079a710(undefined8 param_1,int *param_2,longlong param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  
  if (param_4 != 0) {
    piVar4 = (int *)(param_3 + 0x20);
    do {
      *param_2 = piVar4[-8];
      piVar1 = param_2 + 2;
      if (piVar1 != piVar4 + -6) {
        iVar2 = piVar4[-4];
        pvVar3 = *(void **)(piVar4 + -6);
        param_2[4] = iVar2;
        if ((iVar2 == 0) && (param_2[5] == 0)) {
          param_2[5] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar1,iVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2 << 3);
        }
      }
      piVar1 = param_2 + 6;
      if (piVar1 != piVar4 + -2) {
        iVar2 = *piVar4;
        pvVar3 = *(void **)(piVar4 + -2);
        param_2[8] = iVar2;
        if ((iVar2 == 0) && (param_2[9] == 0)) {
          param_2[9] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar1,iVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2 << 3);
        }
      }
      piVar1 = param_2 + 10;
      if (piVar1 != piVar4 + 2) {
        iVar2 = piVar4[4];
        pvVar3 = *(void **)(piVar4 + 2);
        param_2[0xc] = iVar2;
        if ((iVar2 == 0) && (param_2[0xd] == 0)) {
          param_2[0xd] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar1,iVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2 << 3);
        }
      }
      piVar1 = param_2 + 0xe;
      if (piVar1 != piVar4 + 6) {
        iVar2 = piVar4[8];
        pvVar3 = *(void **)(piVar4 + 6);
        param_2[0x10] = iVar2;
        if ((iVar2 == 0) && (param_2[0x11] == 0)) {
          param_2[0x11] = 0;
        }
        else {
          TArray<FVector,FDefaultAllocator>::ResizeForCopy(piVar1,iVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2 * 0xc);
        }
      }
      piVar4 = piVar4 + 0x12;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x12;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14079a8d0 Destruct body=76 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FGameplayTagQuery>::Destruct(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14079a920 FUN_14079a920 body=55 status=ok
// SIG undefined FUN_14079a920(void)

void FUN_14079a920(void)

{
  undefined8 uVar1;
  
  if (DAT_14685a498 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a498 = GetStaticEnum(FUN_14079b810,uVar1,L"ECloakAction");
  }
  return;
}



// FUNCTION 14079a960 FUN_14079a960 body=55 status=ok
// SIG undefined FUN_14079a960(void)

void FUN_14079a960(void)

{
  undefined8 uVar1;
  
  if (DAT_14685a490 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a490 = GetStaticEnum(FUN_14079b840,uVar1,L"ESweepDirection");
  }
  return;
}



// FUNCTION 14079a9d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCurveLinearColor::GetPrivateStaticClass(void)

{
  if (DAT_14685a728 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAspect_UseNode",&DAT_14685a728,FUN_140447710,0x250,0x10000000
                  ,0,L"Engine",&LAB_140798600,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_14685a728;
}



// FUNCTION 14079aa80 FUN_14079aa80 body=6 status=ok
// SIG undefined FUN_14079aa80(void)

undefined8 FUN_14079aa80(void)

{
  return 0x8e22da02;
}



// FUNCTION 14079aa90 FUN_14079aa90 body=6 status=ok
// SIG undefined FUN_14079aa90(void)

undefined8 FUN_14079aa90(void)

{
  return 0x463bef83;
}



// FUNCTION 14079aaa0 FUN_14079aaa0 body=6 status=ok
// SIG undefined FUN_14079aaa0(void)

undefined8 FUN_14079aaa0(void)

{
  return 0xcf410ffd;
}



// FUNCTION 14079aab0 FUN_14079aab0 body=6 status=ok
// SIG undefined FUN_14079aab0(void)

undefined8 FUN_14079aab0(void)

{
  return 0x7b75309e;
}



// FUNCTION 14079aac0 FUN_14079aac0 body=6 status=ok
// SIG undefined FUN_14079aac0(void)

undefined8 FUN_14079aac0(void)

{
  return 0x3c492e98;
}



// FUNCTION 14079aad0 FUN_14079aad0 body=6 status=ok
// SIG undefined FUN_14079aad0(void)

undefined8 FUN_14079aad0(void)

{
  return 0x9fdc7cff;
}



// FUNCTION 14079aae0 FUN_14079aae0 body=6 status=ok
// SIG undefined FUN_14079aae0(void)

undefined8 FUN_14079aae0(void)

{
  return 0x1bab3971;
}



// FUNCTION 14079aaf0 FUN_14079aaf0 body=6 status=ok
// SIG undefined FUN_14079aaf0(void)

undefined8 FUN_14079aaf0(void)

{
  return 0x811287de;
}



// FUNCTION 14079ab00 FUN_14079ab00 body=6 status=ok
// SIG undefined FUN_14079ab00(void)

undefined8 FUN_14079ab00(void)

{
  return 0x699a5a35;
}



// FUNCTION 14079ab10 FUN_14079ab10 body=6 status=ok
// SIG undefined FUN_14079ab10(void)

undefined8 FUN_14079ab10(void)

{
  return 0x575c47d4;
}



// FUNCTION 14079ab20 FUN_14079ab20 body=6 status=ok
// SIG undefined FUN_14079ab20(void)

undefined8 FUN_14079ab20(void)

{
  return 0xf7f183bb;
}



// FUNCTION 14079ab30 FUN_14079ab30 body=6 status=ok
// SIG undefined FUN_14079ab30(void)

undefined8 FUN_14079ab30(void)

{
  return 0xa51a463d;
}



// FUNCTION 14079ab40 FUN_14079ab40 body=6 status=ok
// SIG undefined FUN_14079ab40(void)

undefined8 FUN_14079ab40(void)

{
  return 0x3b641d5c;
}



// FUNCTION 14079ab50 FUN_14079ab50 body=6 status=ok
// SIG undefined FUN_14079ab50(void)

undefined8 FUN_14079ab50(void)

{
  return 0xd15edda9;
}



// FUNCTION 14079ab60 FUN_14079ab60 body=6 status=ok
// SIG undefined FUN_14079ab60(void)

undefined8 FUN_14079ab60(void)

{
  return 0x982b8094;
}



// FUNCTION 14079ab70 FUN_14079ab70 body=6 status=ok
// SIG undefined FUN_14079ab70(void)

undefined8 FUN_14079ab70(void)

{
  return 0x8e8b48c3;
}



// FUNCTION 14079ab80 FUN_14079ab80 body=6 status=ok
// SIG undefined FUN_14079ab80(void)

undefined8 FUN_14079ab80(void)

{
  return 0xefce32bf;
}



// FUNCTION 14079ad50 Serialize body=112 status=ok
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
  FUN_14071b9e0(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 14079adc0 FUN_14079adc0 body=34 status=ok
// SIG undefined FUN_14079adc0(void)

void FUN_14079adc0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140797610();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_GetTeleportSettingsDescription_1440b1670,1);
  return;
}



// FUNCTION 14079adf0 StaticRegisterNativesAFGPoleHologram body=34 status=ok
// SIG undefined StaticRegisterNativesAFGPoleHologram(void)

void AFGPoleHologram::StaticRegisterNativesAFGPoleHologram(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetWeaponSettingsDescription_1440b3350,1)
  ;
  return;
}



// FUNCTION 14079ae20 StaticRegisterNativesUBorder body=34 status=ok
// SIG undefined StaticRegisterNativesUBorder(void)

void UBorder::StaticRegisterNativesUBorder(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClearCloakData_1440b3ce0,0xb);
  return;
}



// FUNCTION 14079ae50 FUN_14079ae50 body=34 status=ok
// SIG undefined FUN_14079ae50(void)

void FUN_14079ae50(void)

{
  undefined8 uVar1;
  
  uVar1 = UEnvQueryContext_Target::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddAITicket_1440b3eb0,6);
  return;
}



// FUNCTION 14079ae80 FUN_14079ae80 body=82 status=ok
// SIG undefined FUN_14079ae80(void)

void FUN_14079ae80(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a5d0 == 0) {
    uVar1 = FUN_14079aa80();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a5d0 = GetStaticStruct(FUN_14079b870,uVar2,L"AIAspectSettings_Stance",0x10,uVar1);
  }
  return;
}



// FUNCTION 14079aee0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FEnemyBaseSFX::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a5f8 == 0) {
    uVar1 = FUN_14079aa90();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a5f8 = GetStaticStruct(FUN_14079b8a0,uVar2,L"AIAspectSettings_Sweep",0xa8,uVar1);
  }
  return;
}



// FUNCTION 14079af40 FUN_14079af40 body=82 status=ok
// SIG undefined FUN_14079af40(void)

void FUN_14079af40(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a618 == 0) {
    uVar1 = FUN_14079aaa0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a618 = GetStaticStruct(FUN_14079b8d0,uVar2,L"AIAspectSettings_Swoop",800,uVar1);
  }
  return;
}



// FUNCTION 14079afa0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMeleeWeaponData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a648 == 0) {
    uVar1 = FUN_14079aab0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a648 = GetStaticStruct(FUN_14079b900,uVar2,L"AIAspectSettings_Teleport",0x138,uVar1);
  }
  return;
}



// FUNCTION 14079b000 FUN_14079b000 body=82 status=ok
// SIG undefined FUN_14079b000(void)

void FUN_14079b000(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a680 == 0) {
    uVar1 = FUN_14079aac0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a680 = GetStaticStruct(FUN_14079b930,uVar2,L"AIAspectSettings_Ticket",0x128,uVar1);
  }
  return;
}



// FUNCTION 14079b060 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FEdGraphSchemaAction_NewNode::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a6c0 == 0) {
    uVar1 = FUN_14079aad0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a6c0 = GetStaticStruct(FUN_14079b960,uVar2,L"AIAspectSettings_TimeLimit",0x108,uVar1);
  }
  return;
}



// FUNCTION 14079b0c0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_LinkedInputPose::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a6a0 == 0) {
    uVar1 = FUN_14079aae0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a6a0 =
         GetStaticStruct(FUN_14079b990,uVar2,L"AIAspectSettings_TimedCondition",0x118,uVar1);
  }
  return;
}



// FUNCTION 14079b120 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FHyperlinkStyle::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a6e0 == 0) {
    uVar1 = FUN_14079aaf0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a6e0 = GetStaticStruct(FUN_14079b9c0,uVar2,L"AIAspectSettings_Timer",0x4c8,uVar1);
  }
  return;
}



// FUNCTION 14079b180 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMeleeWeaponData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a700 == 0) {
    uVar1 = FUN_14079ab00();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a700 = GetStaticStruct(FUN_14079b9f0,uVar2,L"AIAspectSettings_UseCover",0x138,uVar1);
  }
  return;
}



// FUNCTION 14079b1e0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSaveSlotData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a740 == 0) {
    uVar1 = FUN_14079ab10();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a740 = GetStaticStruct(FUN_14079ba20,uVar2,L"AIAspectSettings_Weapon",0x3d0,uVar1);
  }
  return;
}



// FUNCTION 14079b240 FUN_14079b240 body=82 status=ok
// SIG undefined FUN_14079b240(void)

void FUN_14079b240(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a768 == 0) {
    uVar1 = FUN_14079ab30();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a768 = GetStaticStruct(FUN_14079ba50,uVar2,L"AIAspectSettings_ZeroRotation",0xc,uVar1);
  }
  return;
}



// FUNCTION 14079b2a0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FChaosPhysicsSettings::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a778 == 0) {
    uVar1 = FUN_14079ab20();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a778 =
         GetStaticStruct(FUN_14079ba80,uVar2,L"AIAspectSettings_ZeroRotationChannel",3,uVar1);
  }
  return;
}



// FUNCTION 14079b300 FUN_14079b300 body=82 status=ok
// SIG undefined FUN_14079b300(void)

void FUN_14079b300(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a860 == 0) {
    uVar1 = FUN_14079ab40();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a860 = GetStaticStruct(FUN_14079bab0,uVar2,L"AICommunicationManager",0x48,uVar1);
  }
  return;
}



// FUNCTION 14079b360 FUN_14079b360 body=82 status=ok
// SIG undefined FUN_14079b360(void)

void FUN_14079b360(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a880 == 0) {
    uVar1 = FUN_14079ab50();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a880 = GetStaticStruct(FUN_14079bae0,uVar2,L"AITicketHandle",0x10,uVar1);
  }
  return;
}



// FUNCTION 14079b3c0 FUN_14079b3c0 body=82 status=ok
// SIG undefined FUN_14079b3c0(void)

void FUN_14079b3c0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a7d8 == 0) {
    uVar1 = FUN_14079ab60();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a7d8 = GetStaticStruct(FUN_14079bb10,uVar2,L"CloakCondition",0x10,uVar1);
  }
  return;
}



// FUNCTION 14079b420 FUN_14079b420 body=82 status=ok
// SIG undefined FUN_14079b420(void)

void FUN_14079b420(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a7c8 == 0) {
    uVar1 = FUN_14079ab70();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a7c8 = GetStaticStruct(FUN_14079bb40,uVar2,L"CloakPrimData",0x10,uVar1);
  }
  return;
}



// FUNCTION 14079b480 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimCurveType::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a7b8 == 0) {
    uVar1 = FUN_14079ab80();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a7b8 = GetStaticStruct(FUN_14079bb70,uVar2,L"CloakRepData",2,uVar1);
  }
  return;
}



// FUNCTION 14079b4e0 FUN_14079b4e0 body=47 status=ok
// SIG undefined FUN_14079b4e0(void)

longlong FUN_14079b4e0(void)

{
  if (DAT_14685a798 == 0) {
    FUN_141786440(&DAT_14685a798,&PTR_GetPrivateStaticClass_1440ae630);
  }
  return DAT_14685a798;
}



// FUNCTION 14079b510 FUN_14079b510 body=47 status=ok
// SIG undefined FUN_14079b510(void)

longlong FUN_14079b510(void)

{
  if (DAT_14685a5e0 == 0) {
    FUN_141786440(&DAT_14685a5e0,&PTR_FUN_1440aeae0);
  }
  return DAT_14685a5e0;
}



// FUNCTION 14079b540 FUN_14079b540 body=47 status=ok
// SIG undefined FUN_14079b540(void)

longlong FUN_14079b540(void)

{
  if (DAT_14685a608 == 0) {
    FUN_141786440(&DAT_14685a608,&PTR_GetPrivateStaticClass_1440adc50);
  }
  return DAT_14685a608;
}



// FUNCTION 14079b570 FUN_14079b570 body=47 status=ok
// SIG undefined FUN_14079b570(void)

longlong FUN_14079b570(void)

{
  if (DAT_14685a628 == 0) {
    FUN_141786440(&DAT_14685a628,&PTR_FUN_1440adee0);
  }
  return DAT_14685a628;
}



// FUNCTION 14079b5a0 FUN_14079b5a0 body=47 status=ok
// SIG undefined FUN_14079b5a0(void)

longlong FUN_14079b5a0(void)

{
  if (DAT_14685a638 == 0) {
    FUN_141786440(&DAT_14685a638,&PTR_FUN_1440ae000);
  }
  return DAT_14685a638;
}



// FUNCTION 14079b5d0 FUN_14079b5d0 body=47 status=ok
// SIG undefined FUN_14079b5d0(void)

longlong FUN_14079b5d0(void)

{
  if (DAT_14685a670 == 0) {
    FUN_141786440(&DAT_14685a670,&PTR_FUN_1440ae900);
  }
  return DAT_14685a670;
}



// FUNCTION 14079b600 FUN_14079b600 body=47 status=ok
// SIG undefined FUN_14079b600(void)

longlong FUN_14079b600(void)

{
  if (DAT_14685a690 == 0) {
    FUN_141786440(&DAT_14685a690,&PTR_FUN_1440aedc0);
  }
  return DAT_14685a690;
}



// FUNCTION 14079b630 FUN_14079b630 body=47 status=ok
// SIG undefined FUN_14079b630(void)

longlong FUN_14079b630(void)

{
  if (DAT_14685a6d0 == 0) {
    FUN_141786440(&DAT_14685a6d0,&PTR_FUN_1440af790);
  }
  return DAT_14685a6d0;
}



// FUNCTION 14079b660 FUN_14079b660 body=47 status=ok
// SIG undefined FUN_14079b660(void)

longlong FUN_14079b660(void)

{
  if (DAT_14685a6b0 == 0) {
    FUN_141786440(&DAT_14685a6b0,&PTR_FUN_1440af210);
  }
  return DAT_14685a6b0;
}



// FUNCTION 14079b690 FUN_14079b690 body=47 status=ok
// SIG undefined FUN_14079b690(void)

longlong FUN_14079b690(void)

{
  if (DAT_14685a6f0 == 0) {
    FUN_141786440(&DAT_14685a6f0,&PTR_GetPrivateStaticClass_1440b0460);
  }
  return DAT_14685a6f0;
}



// FUNCTION 14079b6c0 FUN_14079b6c0 body=47 status=ok
// SIG undefined FUN_14079b6c0(void)

longlong FUN_14079b6c0(void)

{
  if (DAT_14685a710 == 0) {
    FUN_141786440(&DAT_14685a710,&PTR_FUN_1440ae590);
  }
  return DAT_14685a710;
}



// FUNCTION 14079b6f0 FUN_14079b6f0 body=47 status=ok
// SIG undefined FUN_14079b6f0(void)

longlong FUN_14079b6f0(void)

{
  if (DAT_14685a720 == 0) {
    FUN_141786440(&DAT_14685a720,&PTR_GetPrivateStaticClass_1440ae7e0);
  }
  return DAT_14685a720;
}



// FUNCTION 14079b720 FUN_14079b720 body=47 status=ok
// SIG undefined FUN_14079b720(void)

longlong FUN_14079b720(void)

{
  if (DAT_14685a730 == 0) {
    FUN_141786440(&DAT_14685a730,&PTR_GetPrivateStaticClass_1440afcb0);
  }
  return DAT_14685a730;
}



// FUNCTION 14079b750 FUN_14079b750 body=47 status=ok
// SIG undefined FUN_14079b750(void)

longlong FUN_14079b750(void)

{
  if (DAT_14685a788 == 0) {
    FUN_141786440(&DAT_14685a788,&PTR_FUN_1440ad8f0);
  }
  return DAT_14685a788;
}



// FUNCTION 14079b780 FUN_14079b780 body=47 status=ok
// SIG undefined FUN_14079b780(void)

longlong FUN_14079b780(void)

{
  if (DAT_14685a7e8 == 0) {
    FUN_141786440(&DAT_14685a7e8,&PTR_FUN_1440af440);
  }
  return DAT_14685a7e8;
}



// FUNCTION 14079b7b0 FUN_14079b7b0 body=47 status=ok
// SIG undefined FUN_14079b7b0(void)

longlong FUN_14079b7b0(void)

{
  if (DAT_14685a870 == 0) {
    FUN_141786440(&DAT_14685a870,&PTR_GetPrivateStaticClass_1440acb90);
  }
  return DAT_14685a870;
}



// FUNCTION 14079b7e0 FUN_14079b7e0 body=47 status=ok
// SIG undefined FUN_14079b7e0(void)

longlong FUN_14079b7e0(void)

{
  if (DAT_14685a7a8 == 0) {
    FUN_141786a30(&DAT_14685a7a8,&PTR_Z_Construct_UPackage__Script_Engine_14623fd60);
  }
  return DAT_14685a7a8;
}



// FUNCTION 14079b810 FUN_14079b810 body=47 status=ok
// SIG undefined FUN_14079b810(void)

longlong FUN_14079b810(void)

{
  if (DAT_14685a7b0 == 0) {
    FUN_1417866a0(&DAT_14685a7b0,&PTR_Z_Construct_UPackage__Script_Engine_146241950);
  }
  return DAT_14685a7b0;
}



// FUNCTION 14079b840 FUN_14079b840 body=47 status=ok
// SIG undefined FUN_14079b840(void)

longlong FUN_14079b840(void)

{
  if (DAT_14685a5f0 == 0) {
    FUN_1417866a0(&DAT_14685a5f0,&PTR_Z_Construct_UPackage__Script_Engine_146241900);
  }
  return DAT_14685a5f0;
}



// FUNCTION 14079b870 FUN_14079b870 body=47 status=ok
// SIG undefined FUN_14079b870(void)

longlong FUN_14079b870(void)

{
  if (DAT_14685a5d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a5d8,&PTR_Z_Construct_UPackage__Script_Engine_14623d910);
  }
  return DAT_14685a5d8;
}



// FUNCTION 14079b8a0 FUN_14079b8a0 body=47 status=ok
// SIG undefined FUN_14079b8a0(void)

longlong FUN_14079b8a0(void)

{
  if (DAT_14685a600 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a600,&PTR_Z_Construct_UPackage__Script_Engine_14623dbb0);
  }
  return DAT_14685a600;
}



// FUNCTION 14079b8d0 FUN_14079b8d0 body=47 status=ok
// SIG undefined FUN_14079b8d0(void)

longlong FUN_14079b8d0(void)

{
  if (DAT_14685a620 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a620,&PTR_Z_Construct_UPackage__Script_Engine_14623dee0);
  }
  return DAT_14685a620;
}



// FUNCTION 14079b900 FUN_14079b900 body=47 status=ok
// SIG undefined FUN_14079b900(void)

longlong FUN_14079b900(void)

{
  if (DAT_14685a650 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a650,&PTR_Z_Construct_UPackage__Script_Engine_14623e3b0);
  }
  return DAT_14685a650;
}



// FUNCTION 14079b930 FUN_14079b930 body=47 status=ok
// SIG undefined FUN_14079b930(void)

longlong FUN_14079b930(void)

{
  if (DAT_14685a688 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a688,&PTR_Z_Construct_UPackage__Script_Engine_14623e930);
  }
  return DAT_14685a688;
}



// FUNCTION 14079b960 FUN_14079b960 body=47 status=ok
// SIG undefined FUN_14079b960(void)

longlong FUN_14079b960(void)

{
  if (DAT_14685a6c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a6c8,&PTR_Z_Construct_UPackage__Script_Engine_14623ed50);
  }
  return DAT_14685a6c8;
}



// FUNCTION 14079b990 FUN_14079b990 body=47 status=ok
// SIG undefined FUN_14079b990(void)

longlong FUN_14079b990(void)

{
  if (DAT_14685a6a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a6a8,&PTR_Z_Construct_UPackage__Script_Engine_14623eb70);
  }
  return DAT_14685a6a8;
}



// FUNCTION 14079b9c0 FUN_14079b9c0 body=47 status=ok
// SIG undefined FUN_14079b9c0(void)

longlong FUN_14079b9c0(void)

{
  if (DAT_14685a6e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a6e8,&PTR_Z_Construct_UPackage__Script_Engine_14623f320);
  }
  return DAT_14685a6e8;
}



// FUNCTION 14079b9f0 FUN_14079b9f0 body=47 status=ok
// SIG undefined FUN_14079b9f0(void)

longlong FUN_14079b9f0(void)

{
  if (DAT_14685a708 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a708,&PTR_Z_Construct_UPackage__Script_Engine_14623f4a0);
  }
  return DAT_14685a708;
}



// FUNCTION 14079ba20 FUN_14079ba20 body=47 status=ok
// SIG undefined FUN_14079ba20(void)

longlong FUN_14079ba20(void)

{
  if (DAT_14685a748 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a748,&PTR_Z_Construct_UPackage__Script_Engine_14623f790);
  }
  return DAT_14685a748;
}



// FUNCTION 14079ba50 FUN_14079ba50 body=47 status=ok
// SIG undefined FUN_14079ba50(void)

longlong FUN_14079ba50(void)

{
  if (DAT_14685a770 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a770,&PTR_Z_Construct_UPackage__Script_Engine_14623faf0);
  }
  return DAT_14685a770;
}



// FUNCTION 14079ba80 FUN_14079ba80 body=47 status=ok
// SIG undefined FUN_14079ba80(void)

longlong FUN_14079ba80(void)

{
  if (DAT_14685a780 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a780,&PTR_Z_Construct_UPackage__Script_Engine_14623fc30);
  }
  return DAT_14685a780;
}



// FUNCTION 14079bab0 FUN_14079bab0 body=47 status=ok
// SIG undefined FUN_14079bab0(void)

longlong FUN_14079bab0(void)

{
  if (DAT_14685a868 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a868,&PTR_Z_Construct_UPackage__Script_Engine_146240fb0);
  }
  return DAT_14685a868;
}



// FUNCTION 14079bae0 FUN_14079bae0 body=47 status=ok
// SIG undefined FUN_14079bae0(void)

longlong FUN_14079bae0(void)

{
  if (DAT_14685a888 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a888,&PTR_Z_Construct_UPackage__Script_Engine_1462410a0);
  }
  return DAT_14685a888;
}



// FUNCTION 14079bb10 FUN_14079bb10 body=47 status=ok
// SIG undefined FUN_14079bb10(void)

longlong FUN_14079bb10(void)

{
  if (DAT_14685a7e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a7e0,&PTR_Z_Construct_UPackage__Script_Engine_146240000);
  }
  return DAT_14685a7e0;
}



// FUNCTION 14079bb40 FUN_14079bb40 body=47 status=ok
// SIG undefined FUN_14079bb40(void)

longlong FUN_14079bb40(void)

{
  if (DAT_14685a7d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a7d0,&PTR_Z_Construct_UPackage__Script_Engine_14623ff20);
  }
  return DAT_14685a7d0;
}



// FUNCTION 14079bb70 FUN_14079bb70 body=47 status=ok
// SIG undefined FUN_14079bb70(void)

longlong FUN_14079bb70(void)

{
  if (DAT_14685a7c0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685a7c0,&PTR_Z_Construct_UPackage__Script_Engine_14623fe40);
  }
  return DAT_14685a7c0;
}



// FUNCTION 14079bba0 FUN_14079bba0 body=527 status=ok
// SIG undefined FUN_14079bba0(void)

void FUN_14079bba0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  int local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [24];
  
  UCheatManagerGunfire::GetAllCheats(local_40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  local_48 = 0;
  puVar2 = local_40;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
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
  local_58[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
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
  bVar3 = local_res10[0] != 0;
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
  uVar1 = FUN_140751630(puVar2,local_48,local_50,local_58[0],local_res20[0],bVar3,
                        local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14079bdb0 FUN_14079bdb0 body=308 status=ok
// SIG undefined FUN_14079bdb0(void)

void FUN_14079bdb0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int local_res10 [2];
  undefined4 local_res18 [2];
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
  uVar1 = FUN_140753eb0(local_28[0],local_res20,local_res18[0],local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14079bef0 FUN_14079bef0 body=243 status=ok
// SIG undefined FUN_14079bef0(void)

void FUN_14079bef0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
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
  FUN_140754e90(local_18[0],local_res20,local_res10[0]);
  return;
}



// FUNCTION 14079c030 FUN_14079c030 body=213 status=ok
// SIG undefined FUN_14079c030(void)

void FUN_14079c030(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 local_res10 [2];
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
  local_res10[0] = 0;
  puVar1 = local_18;
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
  FUN_1407553c0(puVar1,local_res10[0]);
  return;
}



// FUNCTION 14079c110 FUN_14079c110 body=130 status=ok
// SIG undefined FUN_14079c110(void)

void FUN_14079c110(undefined8 param_1,longlong param_2)

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
  FUN_140736900(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 14079c1a0 FUN_14079c1a0 body=130 status=ok
// SIG undefined FUN_14079c1a0(void)

void FUN_14079c1a0(undefined8 param_1,longlong param_2)

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
  FUN_140736920(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 14079c230 FUN_14079c230 body=44 status=ok
// SIG undefined FUN_14079c230(void)

void FUN_14079c230(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1407380a0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14079c260 FUN_14079c260 body=525 status=ok
// SIG undefined FUN_14079c260(void)

void FUN_14079c260(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  longlong local_res10;
  undefined8 local_res18 [2];
  undefined2 *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined4 local_190;
  undefined4 local_18c;
  longlong local_188 [2];
  longlong local_178 [2];
  undefined1 local_168 [320];
  
  FUN_1406ffa60(local_168);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_168);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_168);
  }
  local_res10 = 0;
  puVar5 = local_168;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  lVar1 = local_res10;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = FUN_14070e960(puVar5,local_178);
  puVar3 = (undefined8 *)FString::Replace(uVar2,local_188,&DAT_1440a3e48,&DAT_1440a3e40,1);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar3;
  }
  if (lVar1 == 0) {
    local_1a8 = (undefined2 *)0x0;
    local_1a0 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
    FGenericPlatformString::Memcpy(local_1a8,&DAT_143f3edc8,10);
  }
  else {
    local_res18[0] = *(undefined8 *)(lVar1 + 0x18);
    FName::ToString(local_res18,&local_1a8);
  }
  puVar4 = &DAT_143f3eda8;
  if ((int)local_1a0 != 0) {
    puVar4 = local_1a8;
  }
  FString::PrintfImpl(&local_198,L"%s:\n\t%s",puVar4,puVar6);
  if (local_1a8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_188[0] != 0) {
    FMemory::Free();
  }
  if (local_178[0] != 0) {
    FMemory::Free();
  }
  if (param_3 == &local_198) {
    if (local_198 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_198;
    *(undefined4 *)(param_3 + 1) = local_190;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_18c;
  }
  return;
}



// FUNCTION 14079c470 FUN_14079c470 body=542 status=ok
// SIG undefined FUN_14079c470(void)

void FUN_14079c470(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  longlong local_res10;
  undefined8 local_res18 [2];
  undefined2 *local_438;
  undefined8 local_430;
  longlong local_428;
  undefined4 local_420;
  undefined4 local_41c;
  longlong local_418 [2];
  longlong local_408 [2];
  undefined1 local_3f8 [568];
  longlong local_1c0;
  
  FUN_1406ffe70(local_3f8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3f8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3f8);
  }
  local_res10 = 0;
  puVar5 = local_3f8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  lVar1 = local_res10;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = FUN_14070ea80(puVar5,local_408);
  puVar3 = (undefined8 *)FString::Replace(uVar2,local_418,&DAT_1440a3e48,&DAT_1440a3e40,1);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar3;
  }
  if (lVar1 == 0) {
    local_438 = (undefined2 *)0x0;
    local_430 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_438,0);
    FGenericPlatformString::Memcpy(local_438,&DAT_143f3edc8,10);
  }
  else {
    local_res18[0] = *(undefined8 *)(lVar1 + 0x18);
    FName::ToString(local_res18,&local_438);
  }
  puVar4 = &DAT_143f3eda8;
  if ((int)local_430 != 0) {
    puVar4 = local_438;
  }
  FString::PrintfImpl(&local_428,L"%s:\n\t%s",puVar4,puVar6);
  if (local_438 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_418[0] != 0) {
    FMemory::Free();
  }
  if (local_408[0] != 0) {
    FMemory::Free();
  }
  if (param_3 == &local_428) {
    if (local_428 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_428;
    *(undefined4 *)(param_3 + 1) = local_420;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_41c;
  }
  if (local_1c0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14079c6b0 FUN_14079c6b0 body=43 status=ok
// SIG undefined FUN_14079c6b0(void)

void FUN_14079c6b0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14073ca20();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14079c6e0 FUN_14079c6e0 body=43 status=ok
// SIG undefined FUN_14079c6e0(void)

void FUN_14079c6e0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14073ca30();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14079c710 FUN_14079c710 body=43 status=ok
// SIG undefined FUN_14079c710(void)

void FUN_14079c710(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14073d040();
  *param_3 = uVar1;
  return;
}


