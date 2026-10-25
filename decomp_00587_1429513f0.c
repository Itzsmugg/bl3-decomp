// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1429513f0 FUN_1429513f0 body=66 status=ok
// SIG undefined FUN_1429513f0(void)

void FUN_1429513f0(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined1 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146b1f468);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 142951440 Serialize body=112 status=ok
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
  FUN_1424d0430(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1429514b0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void ARemnantMiniMapDisplayActor::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1429514c0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UParticleModuleTypeDataGpu::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1429514d0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void ACameraActor::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1429514e0 StaticRegisterNativesUUIBlueprintFunctionLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUUIBlueprintFunctionLibrary(void)

void UUIBlueprintFunctionLibrary::StaticRegisterNativesUUIBlueprintFunctionLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142950fd0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddDebugText_145275570,0x1c);
  return;
}



// FUNCTION 142951510 StaticRegisterNativesUVOIPStatics body=34 status=ok
// SIG undefined StaticRegisterNativesUVOIPStatics(void)

void UVOIPStatics::StaticRegisterNativesUVOIPStatics(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_TraceAsync_145274438,1);
  return;
}



// FUNCTION 142951540 FUN_142951540 body=34 status=ok
// SIG undefined FUN_142951540(void)

void FUN_142951540(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14294ff00();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_EnumeratePartNames_145274db0,1);
  return;
}



// FUNCTION 142951570 StaticRegisterNativesAUGCompanionAIController body=34 status=ok
// SIG undefined StaticRegisterNativesAUGCompanionAIController(void)

void AUGCompanionAIController::StaticRegisterNativesAUGCompanionAIController(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_RemoveInstances_145275448,1);
  return;
}



// FUNCTION 1429515a0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FActiveHapticFeedbackEffect::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1f5a0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f5a0 = GetStaticStruct(FUN_142951de0,uVar2,L"ActiveHapticFeedbackEffect",0x18,uVar1);
  }
  return;
}



// FUNCTION 142951600 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FClusterNode::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1f648 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FClusterNode_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f648 = GetStaticStruct(FUN_142951e10,uVar2,L"ClusterNode",0x40,uVar1);
  }
  return;
}



// FUNCTION 142951660 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FClusterNode_DEPRECATED::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1f658 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f658 = GetStaticStruct(FUN_142951e40,uVar2,L"ClusterNode_DEPRECATED",0x28,uVar1);
  }
  return;
}



// FUNCTION 1429516c0 FUN_1429516c0 body=82 status=ok
// SIG undefined FUN_1429516c0(void)

void FUN_1429516c0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1f4b8 == 0) {
    uVar1 = FUN_142951160();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f4b8 = GetStaticStruct(FUN_142951e70,uVar2,L"GbxTraceAsyncRequest",0xb0,uVar1);
  }
  return;
}



// FUNCTION 142951720 FUN_142951720 body=82 status=ok
// SIG undefined FUN_142951720(void)

void FUN_142951720(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1f4e0 == 0) {
    uVar1 = FUN_142951170();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f4e0 = GetStaticStruct(FUN_142951ea0,uVar2,L"GbxViewFlagSettings",0x18,uVar1);
  }
  return;
}



// FUNCTION 142951780 FUN_142951780 body=82 status=ok
// SIG undefined FUN_142951780(void)

void FUN_142951780(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1f518 == 0) {
    uVar1 = FUN_142951180();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f518 = GetStaticStruct(FUN_142951ed0,uVar2,L"GbxZoneMapFODSavedLevelData",0x30,uVar1);
  }
  return;
}



// FUNCTION 1429517e0 FUN_1429517e0 body=82 status=ok
// SIG undefined FUN_1429517e0(void)

void FUN_1429517e0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1f558 == 0) {
    uVar1 = FUN_142951190();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f558 = GetStaticStruct(FUN_142951f00,uVar2,L"GestaltInfo",0x10,uVar1);
  }
  return;
}



// FUNCTION 142951840 FUN_142951840 body=82 status=ok
// SIG undefined FUN_142951840(void)

void FUN_142951840(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1f568 == 0) {
    uVar1 = FUN_1429511b0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f568 = GetStaticStruct(FUN_142951f30,uVar2,L"GestaltPart",0x28,uVar1);
  }
  return;
}



// FUNCTION 1429518a0 FUN_1429518a0 body=82 status=ok
// SIG undefined FUN_1429518a0(void)

void FUN_1429518a0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1f578 == 0) {
    uVar1 = FUN_1429511a0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f578 = GetStaticStruct(FUN_142951f60,uVar2,L"GestaltPartBoundsEntry",0x28,uVar1);
  }
  return;
}



// FUNCTION 142951900 FUN_142951900 body=82 status=ok
// SIG undefined FUN_142951900(void)

void FUN_142951900(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1f548 == 0) {
    uVar1 = FUN_1429511c0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f548 = GetStaticStruct(FUN_142951f90,uVar2,L"GestaltSocketMapping",0x18,uVar1);
  }
  return;
}



// FUNCTION 142951960 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FHLODProxyMesh::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1f680 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FHLODProxyMesh_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f680 = GetStaticStruct(FUN_142951fc0,uVar2,L"HLODProxyMesh",0x30,uVar1);
  }
  return;
}



// FUNCTION 1429519c0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FHapticFeedbackDetails_Curve::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1f5d0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f5d0 = GetStaticStruct(FUN_142951ff0,uVar2,L"HapticFeedbackDetails_Curve",0xf0,uVar1);
  }
  return;
}



// FUNCTION 142951a20 FUN_142951a20 body=82 status=ok
// SIG undefined FUN_142951a20(void)

void FUN_142951a20(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1f620 == 0) {
    uVar1 = FUN_1429511f0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f620 = GetStaticStruct(FUN_142952020,uVar2,L"HavokNavGeometrySettings",0x20,uVar1);
  }
  return;
}



// FUNCTION 142951a80 FUN_142951a80 body=47 status=ok
// SIG undefined FUN_142951a80(void)

longlong FUN_142951a80(void)

{
  if (DAT_146b1f500 == 0) {
    FUN_141786440(&DAT_146b1f500,&PTR_thunk_FUN_142950f20_1452704e0);
  }
  return DAT_146b1f500;
}



// FUNCTION 142951ab0 FUN_142951ab0 body=47 status=ok
// SIG undefined FUN_142951ab0(void)

longlong FUN_142951ab0(void)

{
  if (DAT_146b1f538 == 0) {
    FUN_141786440(&DAT_146b1f538,&PTR_FUN_145272600);
  }
  return DAT_146b1f538;
}



// FUNCTION 142951ae0 FUN_142951ae0 body=47 status=ok
// SIG undefined FUN_142951ae0(void)

longlong FUN_142951ae0(void)

{
  if (DAT_146b1f4f0 == 0) {
    FUN_141786440(&DAT_146b1f4f0,&PTR_StaticClass_145270290);
  }
  return DAT_146b1f4f0;
}



// FUNCTION 142951b10 FUN_142951b10 body=47 status=ok
// SIG undefined FUN_142951b10(void)

longlong FUN_142951b10(void)

{
  if (DAT_146b1f528 == 0) {
    FUN_141786440(&DAT_146b1f528,&PTR_GetPrivateStaticClass_145272200);
  }
  return DAT_146b1f528;
}



// FUNCTION 142951b40 FUN_142951b40 body=47 status=ok
// SIG undefined FUN_142951b40(void)

longlong FUN_142951b40(void)

{
  if (DAT_146b1f690 == 0) {
    FUN_141786440(&DAT_146b1f690,&PTR_StaticClass_14526f7f0);
  }
  return DAT_146b1f690;
}



// FUNCTION 142951b70 FUN_142951b70 body=47 status=ok
// SIG undefined FUN_142951b70(void)

longlong FUN_142951b70(void)

{
  if (DAT_146b1f5c0 == 0) {
    FUN_141786440(&DAT_146b1f5c0,&PTR_StaticClass_1452708b0);
  }
  return DAT_146b1f5c0;
}



// FUNCTION 142951ba0 FUN_142951ba0 body=47 status=ok
// SIG undefined FUN_142951ba0(void)

longlong FUN_142951ba0(void)

{
  if (DAT_146b1f5e0 == 0) {
    FUN_141786440(&DAT_146b1f5e0,&PTR_StaticClass_145270b20);
  }
  return DAT_146b1f5e0;
}



// FUNCTION 142951bd0 FUN_142951bd0 body=47 status=ok
// SIG undefined FUN_142951bd0(void)

longlong FUN_142951bd0(void)

{
  if (DAT_146b1f5f0 == 0) {
    FUN_141786440(&DAT_146b1f5f0,&PTR_StaticClass_145271080);
  }
  return DAT_146b1f5f0;
}



// FUNCTION 142951c00 FUN_142951c00 body=47 status=ok
// SIG undefined FUN_142951c00(void)

longlong FUN_142951c00(void)

{
  if (DAT_146b1f630 == 0) {
    FUN_141786440(&DAT_146b1f630,&PTR_FUN_145271b20);
  }
  return DAT_146b1f630;
}



// FUNCTION 142951c30 FUN_142951c30 body=47 status=ok
// SIG undefined FUN_142951c30(void)

longlong FUN_142951c30(void)

{
  if (DAT_146b1f4a0 == 0) {
    FUN_141786a30(&DAT_146b1f4a0,&PTR_Z_Construct_UPackage__Script_Engine_1465a0c50);
  }
  return DAT_146b1f4a0;
}



// FUNCTION 142951c60 FUN_142951c60 body=47 status=ok
// SIG undefined FUN_142951c60(void)

longlong FUN_142951c60(void)

{
  if (DAT_146b1f4b0 == 0) {
    FUN_1417866a0(&DAT_146b1f4b0,&PTR_Z_Construct_UPackage__Script_Engine_1465a5a90);
  }
  return DAT_146b1f4b0;
}



// FUNCTION 142951c90 FUN_142951c90 body=47 status=ok
// SIG undefined FUN_142951c90(void)

longlong FUN_142951c90(void)

{
  if (DAT_146b1f4a8 == 0) {
    FUN_1417866a0(&DAT_146b1f4a8,&PTR_Z_Construct_UPackage__Script_Engine_1465a5a40);
  }
  return DAT_146b1f4a8;
}



// FUNCTION 142951cc0 FUN_142951cc0 body=47 status=ok
// SIG undefined FUN_142951cc0(void)

longlong FUN_142951cc0(void)

{
  if (DAT_146b1f510 == 0) {
    FUN_1417866a0(&DAT_146b1f510,&PTR_Z_Construct_UPackage__Script_Engine_1465a5ae0);
  }
  return DAT_146b1f510;
}



// FUNCTION 142951cf0 FUN_142951cf0 body=47 status=ok
// SIG undefined FUN_142951cf0(void)

longlong FUN_142951cf0(void)

{
  if (DAT_146b1f640 == 0) {
    FUN_1417866a0(&DAT_146b1f640,&PTR_Z_Construct_UPackage__Script_Engine_1465a5c70);
  }
  return DAT_146b1f640;
}



// FUNCTION 142951d20 FUN_142951d20 body=47 status=ok
// SIG undefined FUN_142951d20(void)

longlong FUN_142951d20(void)

{
  if (DAT_146b1f618 == 0) {
    FUN_1417866a0(&DAT_146b1f618,&PTR_Z_Construct_UPackage__Script_Engine_1465a5c20);
  }
  return DAT_146b1f618;
}



// FUNCTION 142951d50 FUN_142951d50 body=47 status=ok
// SIG undefined FUN_142951d50(void)

longlong FUN_142951d50(void)

{
  if (DAT_146b1f610 == 0) {
    FUN_1417866a0(&DAT_146b1f610,&PTR_Z_Construct_UPackage__Script_Engine_1465a5bd0);
  }
  return DAT_146b1f610;
}



// FUNCTION 142951d80 FUN_142951d80 body=47 status=ok
// SIG undefined FUN_142951d80(void)

longlong FUN_142951d80(void)

{
  if (DAT_146b1f608 == 0) {
    FUN_1417866a0(&DAT_146b1f608,&PTR_Z_Construct_UPackage__Script_Engine_1465a5b80);
  }
  return DAT_146b1f608;
}



// FUNCTION 142951db0 FUN_142951db0 body=47 status=ok
// SIG undefined FUN_142951db0(void)

longlong FUN_142951db0(void)

{
  if (DAT_146b1f600 == 0) {
    FUN_1417866a0(&DAT_146b1f600,&PTR_Z_Construct_UPackage__Script_Engine_1465a5b30);
  }
  return DAT_146b1f600;
}



// FUNCTION 142951de0 FUN_142951de0 body=47 status=ok
// SIG undefined FUN_142951de0(void)

longlong FUN_142951de0(void)

{
  if (DAT_146b1f5a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1f5a8,&PTR_Z_Construct_UPackage__Script_Engine_1465a2060);
  }
  return DAT_146b1f5a8;
}



// FUNCTION 142951e10 FUN_142951e10 body=47 status=ok
// SIG undefined FUN_142951e10(void)

longlong FUN_142951e10(void)

{
  if (DAT_146b1f650 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1f650,&PTR_Z_Construct_UPackage__Script_Engine_1465a2750);
  }
  return DAT_146b1f650;
}



// FUNCTION 142951e40 FUN_142951e40 body=47 status=ok
// SIG undefined FUN_142951e40(void)

longlong FUN_142951e40(void)

{
  if (DAT_146b1f660 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1f660,&PTR_Z_Construct_UPackage__Script_Engine_1465a2930);
  }
  return DAT_146b1f660;
}



// FUNCTION 142951e70 FUN_142951e70 body=47 status=ok
// SIG undefined FUN_142951e70(void)

longlong FUN_142951e70(void)

{
  if (DAT_146b1f4c0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1f4c0,&PTR_Z_Construct_UPackage__Script_Engine_1465a1270);
  }
  return DAT_146b1f4c0;
}



// FUNCTION 142951ea0 FUN_142951ea0 body=47 status=ok
// SIG undefined FUN_142951ea0(void)

longlong FUN_142951ea0(void)

{
  if (DAT_146b1f4e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1f4e8,&PTR_Z_Construct_UPackage__Script_Engine_1465a1590);
  }
  return DAT_146b1f4e8;
}



// FUNCTION 142951ed0 FUN_142951ed0 body=47 status=ok
// SIG undefined FUN_142951ed0(void)

longlong FUN_142951ed0(void)

{
  if (DAT_146b1f520 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1f520,&PTR_Z_Construct_UPackage__Script_Engine_1465a1810);
  }
  return DAT_146b1f520;
}



// FUNCTION 142951f00 FUN_142951f00 body=47 status=ok
// SIG undefined FUN_142951f00(void)

longlong FUN_142951f00(void)

{
  if (DAT_146b1f560 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1f560,&PTR_Z_Construct_UPackage__Script_Engine_1465a1ac0);
  }
  return DAT_146b1f560;
}



// FUNCTION 142951f30 FUN_142951f30 body=47 status=ok
// SIG undefined FUN_142951f30(void)

longlong FUN_142951f30(void)

{
  if (DAT_146b1f570 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1f570,&PTR_Z_Construct_UPackage__Script_Engine_1465a1c60);
  }
  return DAT_146b1f570;
}



// FUNCTION 142951f60 FUN_142951f60 body=47 status=ok
// SIG undefined FUN_142951f60(void)

longlong FUN_142951f60(void)

{
  if (DAT_146b1f580 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1f580,&PTR_Z_Construct_UPackage__Script_Engine_1465a1d20);
  }
  return DAT_146b1f580;
}



// FUNCTION 142951f90 FUN_142951f90 body=47 status=ok
// SIG undefined FUN_142951f90(void)

longlong FUN_142951f90(void)

{
  if (DAT_146b1f550 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1f550,&PTR_Z_Construct_UPackage__Script_Engine_1465a1a00);
  }
  return DAT_146b1f550;
}



// FUNCTION 142951fc0 FUN_142951fc0 body=47 status=ok
// SIG undefined FUN_142951fc0(void)

longlong FUN_142951fc0(void)

{
  if (DAT_146b1f688 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1f688,&PTR_Z_Construct_UPackage__Script_Engine_1465a2f90);
  }
  return DAT_146b1f688;
}



// FUNCTION 142951ff0 FUN_142951ff0 body=47 status=ok
// SIG undefined FUN_142951ff0(void)

longlong FUN_142951ff0(void)

{
  if (DAT_146b1f5d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1f5d8,&PTR_Z_Construct_UPackage__Script_Engine_1465a2250);
  }
  return DAT_146b1f5d8;
}



// FUNCTION 142952020 FUN_142952020 body=47 status=ok
// SIG undefined FUN_142952020(void)

longlong FUN_142952020(void)

{
  if (DAT_146b1f628 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1f628,&PTR_Z_Construct_UPackage__Script_Engine_1465a2500);
  }
  return DAT_146b1f628;
}



// FUNCTION 142952050 execAddDebugText body=889 status=ok
// SIG undefined execAddDebugText(void)

void AHUD::execAddDebugText(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int local_res10 [2];
  int local_res20 [2];
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80 [3];
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  local_80[0] = 0;
  local_80[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  local_88 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_9c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_9c);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_80 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_80 + 2);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
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
  bVar2 = local_res20[0] != 0;
  local_a8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  bVar3 = local_a8 != 0;
  local_90 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_90);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_a0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a4 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  local_48 = local_80[2];
  local_40 = local_68;
  local_30 = local_58;
  local_38 = local_60;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1424e2d30(param_1,local_80,local_88,local_9c,&local_38,&local_48,local_98[0],bVar1,bVar2,bVar3
                ,local_90,local_a0,local_a4 != 0);
  if (local_80[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1429523d0 execAddHitBox body=387 status=ok
// SIG undefined execAddHitBox(void)

void AHUD::execAddHitBox(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  undefined4 local_res20 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28 [2];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
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
  FUN_1424e3070(param_1,local_28[0],local_30,local_38,bVar1,local_res20[0]);
  return;
}



// FUNCTION 142952560 execDeproject body=355 status=ok
// SIG undefined execDeproject(void)

void AHUD::execDeproject(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_38;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
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
  FUN_1424ea6e0(param_1,local_res20[0],local_res10[0],puVar2,puVar1);
  return;
}



// FUNCTION 1429526d0 execDrawLine body=471 status=ok
// SIG undefined execDrawLine(void)

void AHUD::execDrawLine(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_30[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  local_34 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_34);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
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
  uStack_10 = uStack_20;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1424eb3a0(param_1,local_30[0],local_34,local_38,local_res20[0],&local_18,local_res10[0]);
  return;
}



// FUNCTION 1429528b0 execDrawMaterial body=909 status=ok
// SIG undefined execDrawMaterial(void)

void AHUD::execDrawMaterial(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28 [2];
  
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_3c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_3c);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_44);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_4c);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_54);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1424eb480(param_1,local_30,local_38[0],local_3c,local_40,local_44,local_48,local_4c,local_50,
                local_54,local_58,bVar1,local_res20[0],local_28[0]);
  return;
}



// FUNCTION 142952c40 execDrawMaterialSimple body=502 status=ok
// SIG undefined execDrawMaterialSimple(void)

void AHUD::execDrawMaterialSimple(undefined8 param_1,longlong param_2)

{
  int local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28 [2];
  
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_2c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_2c);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_34);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  FUN_1424eb600(param_1,local_28[0],local_2c,local_30,local_34,local_38,local_res20[0],
                local_res10[0] != 0);
  return;
}



// FUNCTION 142952e40 execDrawMaterialTriangle body=697 status=ok
// SIG undefined execDrawMaterialTriangle(void)

void AHUD::execDrawMaterialTriangle(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
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
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_90);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_48 = local_80;
  uStack_40 = uStack_78;
  local_28 = local_60;
  uStack_20 = uStack_58;
  local_38 = local_70;
  uStack_30 = uStack_68;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1424eb710(param_1,local_res10[0],local_88,local_90,local_98,local_a0,local_a8,local_res20,
                &local_28,&local_38,&local_48);
  return;
}



// FUNCTION 142953100 execDrawRect body=420 status=ok
// SIG undefined execDrawRect(void)

void AHUD::execDrawRect(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_34);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  local_18 = local_30;
  uStack_10 = uStack_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1424eb8e0(param_1,&local_18,local_34,local_38,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 1429532b0 execDrawText body=530 status=ok
// SIG undefined execDrawText(void)

void AHUD::execDrawText(undefined8 param_1,longlong param_2)

{
  int local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48 [3];
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_48[0] = 0;
  local_48[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_54 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_54);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
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
  local_28 = local_48[2];
  uStack_20 = uStack_30;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1424eb990(param_1,local_48,&local_28,local_54,local_58,local_50,local_res20[0],
                local_res10[0] != 0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1429534d0 execDrawTexture body=1041 status=ok
// SIG undefined execDrawTexture(void)

void AHUD::execDrawTexture(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined1 local_res10 [8];
  int local_res20 [2];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_54);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_5c);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  local_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_64);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_6c);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_70 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_74 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_74);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar1 = local_res20[0] != 0;
  local_78 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_28 = local_40;
  uStack_20 = uStack_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1424ebb00(param_1,local_50,local_54,local_58,local_5c,local_60,local_64,local_68,local_6c,
                local_70,&local_28,local_res10[0],local_74,bVar1,local_78,local_48);
  return;
}



// FUNCTION 1429538f0 execDrawTextureSimple body=392 status=ok
// SIG undefined execDrawTextureSimple(void)

void AHUD::execDrawTextureSimple(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_10);
  }
  local_14 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_14);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
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
  FUN_1424ebc90(param_1,local_10,local_14,local_18,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 142953a80 FUN_142953a80 body=163 status=ok
// SIG undefined FUN_142953a80(void)

void FUN_142953a80(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
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
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14249d000(param_1,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142953b30 execGetActorsInSelectionRectangle body=514 status=ok
// SIG undefined execGetActorsInSelectionRectangle(void)

void AHUD::execGetActorsInSelectionRectangle(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  int local_res10 [4];
  int local_res20 [2];
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  longlong local_50 [3];
  
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar3 = local_60;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_50[0] = 0;
  local_50[1] = 0;
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  local_res10[0] = 0;
  plVar1 = local_50;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar4 = local_res10[0] != 0;
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
  FUN_1424f0470(param_1,local_68,puVar3,puVar2,plVar1,bVar4,local_res20[0] != 0);
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142953d40 FUN_142953d40 body=44 status=ok
// SIG undefined FUN_142953d40(void)

void FUN_142953d40(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1424f8c70();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142953d70 execGetTextSize body=466 status=ok
// SIG undefined execGetTextSize(void)

void AHUD::execGetTextSize(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_38 [2];
  undefined8 local_30;
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
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_res20[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = local_res10;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_30 = 0;
  puVar2 = local_res20;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1424f92c0(param_1,local_28,puVar1,puVar2,local_30,local_38[0]);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142953f50 FUN_142953f50 body=165 status=ok
// SIG undefined FUN_142953f50(void)

void FUN_142953f50(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_28 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = local_30;
  puVar1 = (undefined8 *)FUN_142500490(param_1,local_18,&local_28);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142954020 FUN_142954020 body=194 status=ok
// SIG undefined FUN_142954020(void)

void FUN_142954020(undefined8 param_1,longlong param_2)

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
  FUN_142502be0(param_1,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 1429540f0 execBP_GetSelectedItems body=178 status=ok
// SIG undefined execBP_GetSelectedItems(void)

void UListView::execBP_GetSelectedItems(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
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
  plVar2 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1424ce8e0(param_1,plVar2);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1429541b0 execHandleOnLoadoutChangedChanged body=223 status=ok
// SIG undefined execHandleOnLoadoutChangedChanged(void)

void URefinementWidget::execHandleOnLoadoutChangedChanged(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  void *local_28;
  ulonglong local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  _Src = local_28;
  local_18 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_20;
  local_10 = (int)local_20;
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_20 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 2);
  }
  FUN_142509ec0(param_1,&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142954290 execHandleOnLoadoutChangedChanged body=223 status=ok
// SIG undefined execHandleOnLoadoutChangedChanged(void)

void URefinementWidget::execHandleOnLoadoutChangedChanged(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  void *local_28;
  ulonglong local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  _Src = local_28;
  local_18 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_20;
  local_10 = (int)local_20;
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_20 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 2);
  }
  FUN_14250a050(param_1,&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142954390 FUN_142954390 body=128 status=ok
// SIG undefined FUN_142954390(void)

void FUN_142954390(undefined8 param_1,longlong param_2)

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
  FUN_14250a230(param_1,local_res10);
  return;
}



// FUNCTION 142954410 FUN_142954410 body=128 status=ok
// SIG undefined FUN_142954410(void)

void FUN_142954410(undefined8 param_1,longlong param_2)

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
  FUN_14250a710(param_1,local_res10);
  return;
}



// FUNCTION 142954490 FUN_142954490 body=130 status=ok
// SIG undefined FUN_142954490(void)

void FUN_142954490(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x6e8))(param_1,local_res8[0]);
  return;
}



// FUNCTION 142954540 FUN_142954540 body=668 status=ok
// SIG undefined FUN_142954540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142954540(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  size_t _Size;
  longlong lVar2;
  undefined8 local_res10;
  undefined2 local_168;
  undefined1 local_166;
  void *local_160;
  ulonglong local_158;
  undefined1 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined1 local_120;
  undefined1 local_11f;
  void *local_118;
  ulonglong local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined1 local_70;
  undefined1 local_6f;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_168 = 0;
  local_fc = _DAT_1464aa6f0;
  uStack_f4 = uRam00000001464aa6f8;
  local_160 = (void *)0x0;
  local_dc = 0x40a00000;
  local_158 = 0;
  local_150 = 0;
  local_11f = 0;
  local_118 = (void *)0x0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_ec = _DAT_1464aa700;
  uStack_e8 = uRam00000001464aa704;
  uStack_e4 = uRam00000001464aa708;
  uStack_e0 = uRam00000001464aa70c;
  FWeakObjectPtr::operator=(&local_d8,0);
  local_d0 = 0;
  FWeakObjectPtr::operator=(&local_c8,0);
  local_c0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_168);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_168);
  }
  pvVar1 = local_160;
  local_b0 = (void *)0x0;
  local_b8 = (undefined1)local_168;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  _Size = (size_t)(int)local_158;
  local_b7 = local_168._1_1_;
  local_b6 = local_166;
  local_a8 = (int)local_158;
  if ((int)local_158 == 0) {
    local_a4 = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_b0,local_158 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_b0,pvVar1,_Size);
  }
  pvVar1 = local_118;
  lVar2 = (longlong)(int)local_110;
  local_a0 = local_150;
  local_94 = local_144;
  local_9c = local_14c;
  local_88 = local_138;
  local_74 = local_124;
  local_90 = local_140;
  local_70 = local_120;
  local_84 = local_134;
  local_6f = local_11f;
  local_80 = local_130;
  local_7c = local_12c;
  local_68 = (void *)0x0;
  local_60 = (int)local_110;
  if ((int)local_110 == 0) {
    local_5c = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
              (&local_68,local_110 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_68,pvVar1,lVar2 << 3);
  }
  local_58 = local_108;
  local_50 = local_100;
  local_28 = local_d8;
  local_24 = local_d4;
  local_20 = local_d0;
  local_18 = local_c8;
  local_14 = local_c4;
  local_4c = local_fc;
  uStack_44 = uStack_f4;
  local_10 = local_c0;
  local_2c = local_dc;
  local_3c = local_ec;
  uStack_38 = uStack_e8;
  uStack_34 = uStack_e4;
  uStack_30 = uStack_e0;
  FUN_1424ae740(local_res10,&local_b8);
  if (local_118 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_160 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142954820 FUN_142954820 body=162 status=ok
// SIG undefined FUN_142954820(void)

longlong FUN_142954820(void)

{
  if (DAT_146b1f858 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"HavokNavSeed",&DAT_146b1f858,FUN_140447710,0x28,0x10004001,0,
                  L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b1f858;
}



// FUNCTION 1429548e0 FUN_1429548e0 body=53 status=ok
// SIG undefined FUN_1429548e0(void)

void FUN_1429548e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &PTR_FUN_145279fb0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142954920 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UImportanceSamplingLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146b1f8c8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"ImportanceSamplingLibrary",&DAT_146b1f8c8,
                  StaticRegisterNativesUImportanceSamplingLibrary,0x28,0x10000000,0,L"Engine",
                  &LAB_140492340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146b1f8c8;
}



// FUNCTION 1429549e0 FUN_1429549e0 body=162 status=ok
// SIG undefined FUN_1429549e0(void)

longlong FUN_1429549e0(void)

{
  if (DAT_146b1fa68 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"InputDelegateBinding",&DAT_146b1fa68,FUN_140447710,0x28,
                  0x10000001,0,L"Engine",&LAB_142956020,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDynamicBlueprintBinding::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b1fa68;
}



// FUNCTION 142954a90 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInputActionDelegateBinding::GetPrivateStaticClass(void)

{
  if (DAT_146b1f970 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"InputActionDelegateBinding",&DAT_146b1f970,FUN_140447710,0x38,
                  0x10000000,0,L"Engine",&LAB_142955fa0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1429549e0,&LAB_140447700,0);
  }
  return DAT_146b1f970;
}



// FUNCTION 142954b40 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInputSettings::GetPrivateStaticClass(void)

{
  if (DAT_146b1fb38 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"InputSettings",&DAT_146b1fb38,
                  StaticRegisterNativesUInputSettings,0xe0,0x10000006,0,L"Input",&LAB_142956060,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1fb38;
}



// FUNCTION 142954be0 FUN_142954be0 body=47 status=ok
// SIG undefined FUN_142954be0(void)

longlong FUN_142954be0(void)

{
  if (DAT_146b1f8c0 == 0) {
    FUN_141786440(&DAT_146b1f8c0,&PTR_GetPrivateStaticClass_145277460);
  }
  return DAT_146b1f8c0;
}



// FUNCTION 142954c10 FUN_142954c10 body=47 status=ok
// SIG undefined FUN_142954c10(void)

longlong FUN_142954c10(void)

{
  if (DAT_146b1f878 == 0) {
    FUN_141786a30(&DAT_146b1f878,&PTR_FUN_1465a6150);
  }
  return DAT_146b1f878;
}



// FUNCTION 142954c40 FUN_142954c40 body=47 status=ok
// SIG undefined FUN_142954c40(void)

longlong FUN_142954c40(void)

{
  if (DAT_146b1f880 == 0) {
    FUN_141786a30(&DAT_146b1f880,&PTR_FUN_1465a6300);
  }
  return DAT_146b1f880;
}



// FUNCTION 142954c70 FUN_142954c70 body=47 status=ok
// SIG undefined FUN_142954c70(void)

longlong FUN_142954c70(void)

{
  if (DAT_146b1f888 == 0) {
    FUN_141786a30(&DAT_146b1f888,&PTR_FUN_1465a6400);
  }
  return DAT_146b1f888;
}



// FUNCTION 142954ca0 FUN_142954ca0 body=47 status=ok
// SIG undefined FUN_142954ca0(void)

longlong FUN_142954ca0(void)

{
  if (DAT_146b1f890 == 0) {
    FUN_141786a30(&DAT_146b1f890,&PTR_FUN_1465a6530);
  }
  return DAT_146b1f890;
}



// FUNCTION 142954cd0 FUN_142954cd0 body=47 status=ok
// SIG undefined FUN_142954cd0(void)

longlong FUN_142954cd0(void)

{
  if (DAT_146b1f898 == 0) {
    FUN_141786a30(&DAT_146b1f898,&PTR_FUN_1465a6660);
  }
  return DAT_146b1f898;
}



// FUNCTION 142954d00 FUN_142954d00 body=47 status=ok
// SIG undefined FUN_142954d00(void)

longlong FUN_142954d00(void)

{
  if (DAT_146b1f8a0 == 0) {
    FUN_141786a30(&DAT_146b1f8a0,&PTR_FUN_1465a6780);
  }
  return DAT_146b1f8a0;
}



// FUNCTION 142954d30 FUN_142954d30 body=47 status=ok
// SIG undefined FUN_142954d30(void)

longlong FUN_142954d30(void)

{
  if (DAT_146b1f8a8 == 0) {
    FUN_141786a30(&DAT_146b1f8a8,&PTR_FUN_1465a68f0);
  }
  return DAT_146b1f8a8;
}



// FUNCTION 142954d60 FUN_142954d60 body=47 status=ok
// SIG undefined FUN_142954d60(void)

longlong FUN_142954d60(void)

{
  if (DAT_146b1f8b0 == 0) {
    FUN_141786a30(&DAT_146b1f8b0,&PTR_FUN_1465a6a60);
  }
  return DAT_146b1f8b0;
}



// FUNCTION 142954d90 FUN_142954d90 body=47 status=ok
// SIG undefined FUN_142954d90(void)

longlong FUN_142954d90(void)

{
  if (DAT_146b1f8b8 == 0) {
    FUN_141786a30(&DAT_146b1f8b8,&PTR_FUN_1465a6b80);
  }
  return DAT_146b1f8b8;
}



// FUNCTION 142954dc0 FUN_142954dc0 body=47 status=ok
// SIG undefined FUN_142954dc0(void)

longlong FUN_142954dc0(void)

{
  if (DAT_146b1fb30 == 0) {
    FUN_141786440(&DAT_146b1fb30,&PTR_GetPrivateStaticClass_145277000);
  }
  return DAT_146b1fb30;
}



// FUNCTION 142954df0 FUN_142954df0 body=53 status=ok
// SIG undefined FUN_142954df0(void)

void FUN_142954df0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_145279a40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142954e30 FUN_142954e30 body=47 status=ok
// SIG undefined FUN_142954e30(void)

longlong FUN_142954e30(void)

{
  if (DAT_146b1fad8 == 0) {
    FUN_141786a30(&DAT_146b1fad8,&PTR_FUN_1465a8c50);
  }
  return DAT_146b1fad8;
}



// FUNCTION 142954e60 FUN_142954e60 body=47 status=ok
// SIG undefined FUN_142954e60(void)

longlong FUN_142954e60(void)

{
  if (DAT_146b1fae0 == 0) {
    FUN_141786a30(&DAT_146b1fae0,&PTR_FUN_1465a8d50);
  }
  return DAT_146b1fae0;
}



// FUNCTION 142954e90 FUN_142954e90 body=47 status=ok
// SIG undefined FUN_142954e90(void)

longlong FUN_142954e90(void)

{
  if (DAT_146b1fae8 == 0) {
    FUN_141786a30(&DAT_146b1fae8,&PTR_FUN_1465a8d90);
  }
  return DAT_146b1fae8;
}



// FUNCTION 142954ec0 FUN_142954ec0 body=47 status=ok
// SIG undefined FUN_142954ec0(void)

longlong FUN_142954ec0(void)

{
  if (DAT_146b1faf0 == 0) {
    FUN_141786a30(&DAT_146b1faf0,&PTR_FUN_1465a8e10);
  }
  return DAT_146b1faf0;
}



// FUNCTION 142954ef0 FUN_142954ef0 body=47 status=ok
// SIG undefined FUN_142954ef0(void)

longlong FUN_142954ef0(void)

{
  if (DAT_146b1faf8 == 0) {
    FUN_141786a30(&DAT_146b1faf8,&PTR_FUN_1465a8ec0);
  }
  return DAT_146b1faf8;
}



// FUNCTION 142954f20 FUN_142954f20 body=47 status=ok
// SIG undefined FUN_142954f20(void)

longlong FUN_142954f20(void)

{
  if (DAT_146b1fb00 == 0) {
    FUN_141786a30(&DAT_146b1fb00,&PTR_FUN_1465a8fb0);
  }
  return DAT_146b1fb00;
}



// FUNCTION 142954f50 FUN_142954f50 body=47 status=ok
// SIG undefined FUN_142954f50(void)

longlong FUN_142954f50(void)

{
  if (DAT_146b1fb08 == 0) {
    FUN_141786a30(&DAT_146b1fb08,&PTR_FUN_1465a9060);
  }
  return DAT_146b1fb08;
}



// FUNCTION 142954f80 FUN_142954f80 body=47 status=ok
// SIG undefined FUN_142954f80(void)

longlong FUN_142954f80(void)

{
  if (DAT_146b1fb10 == 0) {
    FUN_141786a30(&DAT_146b1fb10,&PTR_FUN_1465a90e0);
  }
  return DAT_146b1fb10;
}



// FUNCTION 142954fb0 FUN_142954fb0 body=47 status=ok
// SIG undefined FUN_142954fb0(void)

longlong FUN_142954fb0(void)

{
  if (DAT_146b1fb18 == 0) {
    FUN_141786a30(&DAT_146b1fb18,&PTR_FUN_1465a91e0);
  }
  return DAT_146b1fb18;
}



// FUNCTION 142954fe0 FUN_142954fe0 body=47 status=ok
// SIG undefined FUN_142954fe0(void)

longlong FUN_142954fe0(void)

{
  if (DAT_146b1fb20 == 0) {
    FUN_141786a30(&DAT_146b1fb20,&PTR_FUN_1465a92e0);
  }
  return DAT_146b1fb20;
}



// FUNCTION 142955010 FUN_142955010 body=47 status=ok
// SIG undefined FUN_142955010(void)

longlong FUN_142955010(void)

{
  if (DAT_146b1fb28 == 0) {
    FUN_141786a30(&DAT_146b1fb28,&PTR_FUN_1465a9320);
  }
  return DAT_146b1fb28;
}



// FUNCTION 142955040 FUN_142955040 body=47 status=ok
// SIG undefined FUN_142955040(void)

longlong FUN_142955040(void)

{
  if (DAT_146b1fa58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1fa58,&PTR_Z_Construct_UPackage__Script_Engine_1465a8360);
  }
  return DAT_146b1fa58;
}



// FUNCTION 142955070 FUN_142955070 body=47 status=ok
// SIG undefined FUN_142955070(void)

longlong FUN_142955070(void)

{
  if (DAT_146b1fa60 == 0) {
    FUN_141786440(&DAT_146b1fa60,&PTR_FUN_145278aa0);
  }
  return DAT_146b1fa60;
}



// FUNCTION 1429550a0 FUN_1429550a0 body=53 status=ok
// SIG undefined FUN_1429550a0(void)

void FUN_1429550a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_14527a0c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1429550f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInputAxisDelegateBinding::GetPrivateStaticClass(void)

{
  if (DAT_146b1f990 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"InputAxisDelegateBinding",&DAT_146b1f990,FUN_140447710,0x38,
                  0x10000000,0,L"Engine",&LAB_142955fc0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1429549e0,&LAB_140447700,0);
  }
  return DAT_146b1f990;
}



// FUNCTION 1429551b0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UImportantToggleSettingInterface::StaticClass(void)

{
  if (DAT_146b1f8d8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"ImportantToggleSettingInterface",&DAT_146b1f8d8,FUN_140447710,
                  0x28,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b1f8d8;
}



// FUNCTION 142955270 FUN_142955270 body=53 status=ok
// SIG undefined FUN_142955270(void)

void FUN_142955270(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_14527a1e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1429552d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInputAxisKeyDelegateBinding::GetPrivateStaticClass(void)

{
  if (DAT_146b1f9b0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"InputAxisKeyDelegateBinding",&DAT_146b1f9b0,FUN_140447710,0x38
                  ,0x10000000,0,L"Engine",&LAB_142955fe0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1429549e0,&LAB_140447700,0);
  }
  return DAT_146b1f9b0;
}



// FUNCTION 142955380 FUN_142955380 body=53 status=ok
// SIG undefined FUN_142955380(void)

void FUN_142955380(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_145279bf0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1429553d0 FUN_1429553d0 body=53 status=ok
// SIG undefined FUN_1429553d0(void)

void FUN_1429553d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_14527a2f8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142955420 FUN_142955420 body=47 status=ok
// SIG undefined FUN_142955420(void)

longlong FUN_142955420(void)

{
  if (DAT_146b1fa40 == 0) {
    FUN_141786440(&DAT_146b1fa40,&PTR_thunk_FUN_142956f50_145278780);
  }
  return DAT_146b1fa40;
}



// FUNCTION 142955450 FUN_142955450 body=47 status=ok
// SIG undefined FUN_142955450(void)

longlong FUN_142955450(void)

{
  if (DAT_146b1f9f8 == 0) {
    FUN_141786a30(&DAT_146b1f9f8,&PTR_FUN_1465a7a10);
  }
  return DAT_146b1f9f8;
}



// FUNCTION 142955480 FUN_142955480 body=47 status=ok
// SIG undefined FUN_142955480(void)

longlong FUN_142955480(void)

{
  if (DAT_146b1fa00 == 0) {
    FUN_141786a30(&DAT_146b1fa00,&PTR_FUN_1465a7b00);
  }
  return DAT_146b1fa00;
}



// FUNCTION 1429554b0 FUN_1429554b0 body=47 status=ok
// SIG undefined FUN_1429554b0(void)

longlong FUN_1429554b0(void)

{
  if (DAT_146b1fa08 == 0) {
    FUN_141786a30(&DAT_146b1fa08,&PTR_FUN_1465a7bf0);
  }
  return DAT_146b1fa08;
}



// FUNCTION 1429554e0 FUN_1429554e0 body=47 status=ok
// SIG undefined FUN_1429554e0(void)

longlong FUN_1429554e0(void)

{
  if (DAT_146b1fa10 == 0) {
    FUN_141786a30(&DAT_146b1fa10,&PTR_FUN_1465a7ca0);
  }
  return DAT_146b1fa10;
}



// FUNCTION 142955510 FUN_142955510 body=47 status=ok
// SIG undefined FUN_142955510(void)

longlong FUN_142955510(void)

{
  if (DAT_146b1fa18 == 0) {
    FUN_141786a30(&DAT_146b1fa18,&PTR_FUN_1465a7d60);
  }
  return DAT_146b1fa18;
}



// FUNCTION 142955540 FUN_142955540 body=47 status=ok
// SIG undefined FUN_142955540(void)

longlong FUN_142955540(void)

{
  if (DAT_146b1fa20 == 0) {
    FUN_141786a30(&DAT_146b1fa20,&PTR_FUN_1465a7e90);
  }
  return DAT_146b1fa20;
}



// FUNCTION 142955570 FUN_142955570 body=47 status=ok
// SIG undefined FUN_142955570(void)

longlong FUN_142955570(void)

{
  if (DAT_146b1fa28 == 0) {
    FUN_141786a30(&DAT_146b1fa28,&PTR_FUN_1465a7f80);
  }
  return DAT_146b1fa28;
}



// FUNCTION 1429555a0 FUN_1429555a0 body=47 status=ok
// SIG undefined FUN_1429555a0(void)

longlong FUN_1429555a0(void)

{
  if (DAT_146b1fa30 == 0) {
    FUN_141786a30(&DAT_146b1fa30,&PTR_FUN_1465a8070);
  }
  return DAT_146b1fa30;
}



// FUNCTION 1429555d0 FUN_1429555d0 body=47 status=ok
// SIG undefined FUN_1429555d0(void)

longlong FUN_1429555d0(void)

{
  if (DAT_146b1fa38 == 0) {
    FUN_141786a30(&DAT_146b1fa38,&PTR_FUN_1465a8170);
  }
  return DAT_146b1fa38;
}



// FUNCTION 142955600 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UAmbisonicsSubmixSettingsBase::StaticClass(void)

{
  if (DAT_146b1f7e0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"AmbisonicsSubmixSettingsBase",&DAT_146b1f7e0,FUN_140447710,
                  0x28,0x10000001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1f7e0;
}



// FUNCTION 1429556a0 FUN_1429556a0 body=53 status=ok
// SIG undefined FUN_1429556a0(void)

void FUN_1429556a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &PTR_FUN_14527a440;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1429556e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInGameAdManager::GetPrivateStaticClass(void)

{
  if (DAT_146b1f920 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"InGameAdManager",&DAT_146b1f920,FUN_140447710,0x60,0x10000008,
                  0,L"Engine",&LAB_142955f40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPlatformInterfaceBase::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b1f920;
}



// FUNCTION 1429557a0 FUN_1429557a0 body=53 status=ok
// SIG undefined FUN_1429557a0(void)

void FUN_1429557a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &PTR_FUN_14527a5f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1429557f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInputKeyDelegateBinding::GetPrivateStaticClass(void)

{
  if (DAT_146b1fa88 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"InputKeyDelegateBinding",&DAT_146b1fa88,FUN_140447710,0x38,
                  0x10000000,0,L"Engine",&LAB_142956040,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1429549e0,&LAB_140447700,0);
  }
  return DAT_146b1fa88;
}



// FUNCTION 1429558b0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInheritableComponentHandler::GetPrivateStaticClass(void)

{
  if (DAT_146b1f950 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"InheritableComponentHandler",&DAT_146b1f950,FUN_140447710,0x48
                  ,0x10000000,0,L"Engine",FUN_142955f60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1f950;
}



// FUNCTION 142955950 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USpatializationPluginSourceSettingsBase::GetPrivateStaticClass(void)

{
  if (DAT_146b1f828 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SpatializationPluginSourceSettingsBase",&DAT_146b1f828,
                  FUN_140447710,0x28,0x10000001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1f828;
}



// FUNCTION 1429559f0 FUN_1429559f0 body=53 status=ok
// SIG undefined FUN_1429559f0(void)

void FUN_1429559f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_14527a708;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142955a40 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UOcclusionPluginSourceSettingsBase::GetPrivateStaticClass(void)

{
  if (DAT_146b1f838 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"OcclusionPluginSourceSettingsBase",&DAT_146b1f838,
                  FUN_140447710,0x28,0x10000001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1f838;
}



// FUNCTION 142955ae0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UReverbPluginSourceSettingsBase::GetPrivateStaticClass(void)

{
  if (DAT_146b1f848 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"ReverbPluginSourceSettingsBase",&DAT_146b1f848,FUN_140447710,
                  0x28,0x10000001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1f848;
}



// FUNCTION 142955b80 FUN_142955b80 body=53 status=ok
// SIG undefined FUN_142955b80(void)

void FUN_142955b80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_14527a850;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142955bc0 FUN_142955bc0 body=53 status=ok
// SIG undefined FUN_142955bc0(void)

void FUN_142955bc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x3c;
    *puVar1 = &PTR_FUN_14527a968;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142955c00 FUN_142955c00 body=53 status=ok
// SIG undefined FUN_142955c00(void)

void FUN_142955c00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_14527aa80;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142955c40 FUN_142955c40 body=730 status=ok
// SIG undefined FUN_142955c40(void)

int * FUN_142955c40(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  int iVar10;
  void *_Dst;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  bool local_res8;
  
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar10 = *(int *)(*param_1 + 4 + (longlong)iVar13 * 0x30);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x30) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar13;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar11 +
                   (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar13 & 0x1f);
  plVar11 = (longlong *)((longlong)iVar13 * 0x30 + *param_1);
  FUN_142956080(plVar11,param_3);
  *(undefined4 *)(plVar11 + 5) = 0xffffffff;
  iVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (iVar13 != 1) {
    iVar10 = iVar14;
    if (iVar13 != 0) {
      lVar4 = *plVar11;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar9 +
                      ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          iVar10 = iVar7;
          if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x30) == lVar4) break;
          iVar7 = *(int *)(*param_1 + 0x28 + (longlong)iVar7 * 0x30);
          iVar10 = iVar14;
        } while (iVar7 != -1);
      }
    }
    local_res8 = iVar10 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar10 * 0x30 + *param_1);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>
                ((longlong)_Dst + 0x18);
      plVar9 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar11,0x28);
      iVar13 = *param_2;
      bVar5 = (byte)iVar13 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = iVar13;
      }
      puVar8 = (undefined4 *)((longlong)iVar13 * 0x30 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar8[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar13;
      plVar11 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar3 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_142955ef9;
    }
  }
  cVar6 = TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar13,0);
  if (cVar6 == '\0') {
    uVar12 = (int)((ulonglong)*plVar11 >> 0x20) + (int)*plVar11 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar11 + 0x2c) = uVar12;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 5) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
LAB_142955ef9:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142955f60 FUN_142955f60 body=59 status=ok
// SIG undefined FUN_142955f60(void)

void FUN_142955f60(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__145279d38;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
  }
  return;
}



// FUNCTION 142956080 FUN_142956080 body=159 status=ok
// SIG undefined FUN_142956080(void)

undefined8 * FUN_142956080(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = 0;
  iVar4 = *(int *)(param_2 + 4);
  puVar3 = (undefined8 *)param_2[3];
  *(int *)(param_1 + 4) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 3,iVar4,0);
    puVar2 = (undefined8 *)param_1[3];
    do {
      *puVar2 = *puVar3;
      lVar1 = puVar3[1];
      puVar2[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar2 = puVar2 + 2;
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return param_1;
}



// FUNCTION 142956120 ~TArray<FComponentOverrideRecord,FDefaultAllocator> body=118 status=ok
// SIG undefined ~TArray<FComponentOverrideRecord,FDefaultAllocator>(void)

void TArray<FComponentOverrideRecord,FDefaultAllocator>::
     ~TArray<FComponentOverrideRecord,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x60;
    do {
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        FMemory::Free();
      }
      TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>::
      ~TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>(lVar1);
      if (*(longlong *)(lVar1 + -0x28) != 0) {
        FMemory::Free();
      }
      lVar1 = lVar1 + 0x80;
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



// FUNCTION 1429561a0 FUN_1429561a0 body=469 status=ok
// SIG undefined FUN_1429561a0(void)

longlong * FUN_1429561a0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  undefined4 uStack_34;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    FUN_140679550(param_1,iVar9);
    cVar3 = TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9);
    uVar7 = 0;
    if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_20;
      }
      uVar1 = *puVar11;
      uVar8 = uVar7;
      while (uVar1 == 0) {
        iVar4 = (int)uVar8;
        uStack_40 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_40;
        local_58 = iVar4 + 1;
        uVar8 = (ulonglong)local_58;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1429562dd;
        uVar1 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_54 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
      if (iVar9 < local_48._4_4_) {
LAB_1429562dd:
        local_48._4_4_ = iVar9;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    uStack_10 = uStack_40;
    uStack_c = iStack_3c;
    uStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar4 = local_48._4_4_;
    uStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar2 = local_48._4_4_ < iVar9;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar4;
    if (bVar2) {
      do {
        FUN_142955c40(param_1,local_res8,(longlong)iStack_3c * 0x30 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 142956380 operator= body=391 status=ok
// SIG undefined operator=(void)

undefined1 *
FBlueprintCookedComponentInstancingData::operator=(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_1 = *param_2;
  uVar13 = 0;
  if (puVar1 != (undefined8 *)(param_2 + 8)) {
    iVar3 = *(int *)(param_2 + 0x10);
    pvVar4 = *(void **)(param_2 + 8);
    *(int *)(param_1 + 0x10) = iVar3;
    if ((iVar3 == 0) && (*(int *)(param_1 + 0x14) == 0)) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar1,iVar3);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar4,(longlong)iVar3 * 0x18);
    }
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  puVar2 = (ulonglong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  if ((ulonglong *)(param_2 + 0x30) != puVar2) {
    TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>::Empty
              (puVar2,*(undefined4 *)(param_2 + 0x38));
    plVar11 = *(longlong **)(param_2 + 0x30);
    uVar12 = (longlong)*(int *)(param_2 + 0x38) & 0x1fffffffffffffff;
    if (plVar11 + *(int *)(param_2 + 0x38) < plVar11) {
      uVar12 = uVar13;
    }
    if (uVar12 != 0) {
      do {
        puVar5 = (undefined4 *)*plVar11;
        puVar10 = (undefined4 *)operator_new(0x20);
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          uVar6 = puVar5[1];
          uVar7 = puVar5[2];
          uVar8 = puVar5[3];
          *puVar10 = *puVar5;
          puVar10[1] = uVar6;
          puVar10[2] = uVar7;
          puVar10[3] = uVar8;
          uVar9 = *(undefined8 *)(puVar5 + 6);
          *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(puVar5 + 4);
          *(undefined8 *)(puVar10 + 6) = uVar9;
        }
        iVar3 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar3 + 1;
        if (*(int *)(param_1 + 0x3c) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar2,iVar3);
        }
        plVar11 = plVar11 + 1;
        uVar13 = uVar13 + 1;
        *(undefined4 **)(*puVar2 + (longlong)iVar3 * 8) = puVar10;
      } while (uVar13 != uVar12);
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)(param_2 + 0x40)) {
    iVar3 = *(int *)(param_2 + 0x48);
    pvVar4 = *(void **)(param_2 + 0x40);
    *(int *)(param_1 + 0x48) = iVar3;
    if ((iVar3 == 0) && (*(int *)(param_1 + 0x4c) == 0)) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar1,iVar3);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar4,(longlong)iVar3);
    }
  }
  return param_1;
}



// FUNCTION 142956510 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UInheritableComponentHandler::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  TArray<FComponentOverrideRecord,FDefaultAllocator>::
  ~TArray<FComponentOverrideRecord,FDefaultAllocator>(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142956560 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142956750 FUN_142956750 body=59 status=ok
// SIG undefined FUN_142956750(void)

void FUN_142956750(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  FWeakObjectPtr::operator=(param_2 + 0x40,0);
  *(undefined1 *)(param_2 + 0x48) = 0;
  return;
}



// FUNCTION 1429567c0 FUN_1429567c0 body=48 status=ok
// SIG undefined FUN_1429567c0(void)

void FUN_1429567c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  FAlphaBlend::FAlphaBlend(param_2 + 3,0x3e4ccccd);
  *(undefined1 *)(param_2 + 10) = 0;
  return;
}



// FUNCTION 142956880 Copy body=90 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FBlueprintInputAxisKeyDelegateBinding>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x20);
    do {
      *(undefined4 *)(puVar1 + -4) = *(undefined4 *)(param_3 + -0x20 + (longlong)puVar1);
      FKey::operator=(puVar1 + -3,param_3 + -0x18 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      puVar1 = puVar1 + 5;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1429568e0 Copy body=146 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FBlueprintInputKeyDelegateBinding>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar2 = (uint *)(param_2 + 0x20);
    do {
      puVar2[-8] = *(uint *)(param_3 + -0x20 + (longlong)puVar2);
      FKey::operator=(puVar2 + -6,param_3 + -0x18 + (longlong)puVar2);
      *puVar2 = *puVar2 ^ (*puVar2 ^ *(uint *)(param_3 + (longlong)puVar2)) & 1;
      uVar1 = (*puVar2 ^ *(uint *)(param_3 + (longlong)puVar2)) & 2 ^ *puVar2;
      *puVar2 = uVar1;
      uVar1 = (uVar1 ^ *(uint *)(param_3 + (longlong)puVar2)) & 4 ^ uVar1;
      *puVar2 = uVar1;
      *puVar2 = (uVar1 ^ *(uint *)(param_3 + (longlong)puVar2)) & 8 ^ uVar1;
      *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(param_3 + 8 + (longlong)puVar2);
      *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_3 + 0x10 + (longlong)puVar2);
      puVar2 = puVar2 + 0xe;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142956980 FUN_142956980 body=345 status=ok
// SIG undefined FUN_142956980(void)

undefined8 FUN_142956980(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (param_4 != 0) {
    plVar11 = (longlong *)(param_3 + 0x60);
    do {
      *param_2 = plVar11[-0xc];
      *(int *)(param_2 + 1) = (int)plVar11[-0xb];
      FUN_1429561a0(param_2 + 2);
      plVar1 = param_2 + 0xc;
      if (plVar1 != plVar11) {
        iVar9 = (int)param_2[0xd];
        if (iVar9 != 0) {
          plVar10 = (longlong *)(*plVar1 + 8);
          do {
            plVar5 = (longlong *)*plVar10;
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
            plVar10 = plVar10 + 2;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        iVar9 = (int)plVar11[1];
        puVar8 = (undefined8 *)*plVar11;
        *(int *)(param_2 + 0xd) = iVar9;
        if ((iVar9 == 0) && (*(int *)((longlong)param_2 + 0x6c) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x6c) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar1,iVar9);
          puVar7 = (undefined8 *)*plVar1;
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar7 = *puVar8;
            lVar6 = puVar8[1];
            puVar7[1] = lVar6;
            if (lVar6 != 0) {
              LOCK();
              *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
              UNLOCK();
            }
            puVar7 = puVar7 + 2;
            puVar8 = puVar8 + 2;
          }
        }
      }
      plVar11 = plVar11 + 0xe;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xe;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142956ae0 Copy body=110 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FComponentOverrideRecord>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar5 = (undefined4 *)(param_2 + 0x10);
    do {
      *(undefined8 *)(puVar5 + -4) = *(undefined8 *)(param_3 + -0x10 + (longlong)puVar5);
      *(undefined8 *)(puVar5 + -2) = *(undefined8 *)(param_3 + -8 + (longlong)puVar5);
      puVar1 = (undefined4 *)(param_3 + (longlong)puVar5);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      puVar1 = (undefined4 *)(param_3 + 0x10 + (longlong)puVar5);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      puVar5[4] = *puVar1;
      puVar5[5] = uVar2;
      puVar5[6] = uVar3;
      puVar5[7] = uVar4;
      FBlueprintCookedComponentInstancingData::operator=
                (puVar5 + 8,param_3 + 0x20 + (longlong)puVar5);
      puVar5 = puVar5 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142956b50 Copy body=257 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FImportanceTexture>::Copy
          (undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *_Src;
  undefined4 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined4 *)(param_3 + 0x44);
    do {
      *param_2 = puVar4[-0x11];
      param_2[1] = puVar4[-0x10];
      param_2[2] = puVar4[-0xf];
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2 + 4,puVar4 + -0xd);
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2 + 8,puVar4 + -9);
      puVar1 = (undefined8 *)(param_2 + 0xc);
      if (puVar1 != (undefined8 *)(puVar4 + -5)) {
        iVar3 = puVar4[-3];
        _Src = *(void **)(puVar4 + -5);
        param_2[0xe] = iVar3;
        if ((iVar3 == 0) && (param_2[0xf] == 0)) {
          param_2[0xf] = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(puVar1,iVar3);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar3 << 2);
        }
      }
      param_2[0x10] = puVar4[-1];
      param_2[0x11] = *puVar4;
      puVar2 = puVar4 + 1;
      puVar4 = puVar4 + 0x14;
      *(undefined1 *)(param_2 + 0x12) = *(undefined1 *)puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x14;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142956c60 Destruct body=89 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FCachedKeyToActionInfo>::Destruct
               (undefined8 param_1,longlong param_2)

{
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_2 + 0x60);
  *(undefined4 *)(param_2 + 0x58) = 0;
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_140679550(param_2 + 0x10,0);
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142956cc0 Destruct body=57 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FComponentOverrideRecord>::Destruct
               (undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x70) != 0) {
    FMemory::Free();
  }
  TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>::
  ~TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>(param_2 + 0x60);
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142956d00 FUN_142956d00 body=62 status=ok
// SIG undefined FUN_142956d00(void)

void FUN_142956d00(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x30) != 0) {
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



// FUNCTION 142956d40 EAdManagerDelegate_StaticEnum body=55 status=ok
// SIG undefined EAdManagerDelegate_StaticEnum(void)

void EAdManagerDelegate_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1f7c8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f7c8 = GetStaticEnum(FUN_142957b80,uVar1,L"EAdManagerDelegate");
  }
  return;
}



// FUNCTION 142956d80 EAnimAlphaInputType_StaticEnum body=55 status=ok
// SIG undefined EAnimAlphaInputType_StaticEnum(void)

void EAnimAlphaInputType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1f7d0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f7d0 = GetStaticEnum(FUN_142957bb0,uVar1,L"EAnimAlphaInputType");
  }
  return;
}



// FUNCTION 142956dc0 EControllerAnalogStick_StaticEnum body=55 status=ok
// SIG undefined EControllerAnalogStick_StaticEnum(void)

void EControllerAnalogStick_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1f7c0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f7c0 = GetStaticEnum(FUN_142957be0,uVar1,L"EControllerAnalogStick");
  }
  return;
}



// FUNCTION 142956e00 EImportanceWeight_StaticEnum body=55 status=ok
// SIG undefined EImportanceWeight_StaticEnum(void)

void EImportanceWeight_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1f7b8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f7b8 = GetStaticEnum(FUN_142957c10,uVar1,L"EImportanceWeight");
  }
  return;
}



// FUNCTION 142956e40 Empty body=95 status=ok
// SIG undefined Empty(void)

void TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>::Empty
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    FMemory::Free(*puVar1);
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 142956ea0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AXScriptedBotSpawner::GetPrivateStaticClass(void)

{
  if (DAT_146b1f8f8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"Info",&DAT_146b1f8f8,FUN_140447710,0x458,0x10000001,0,
                  L"Engine",&LAB_142955f20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146b1f8f8;
}



// FUNCTION 142956f50 FUN_142956f50 body=162 status=ok
// SIG undefined FUN_142956f50(void)

longlong FUN_142956f50(void)

{
  if (DAT_146b1fa48 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"InputComponent",&DAT_146b1fa48,FUN_142957220,0x200,0x10000008,
                  0,L"Input",&LAB_142956000,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b1fa48;
}



// FUNCTION 142957000 Get_Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_CRC(void)

{
  return 0x890dd1fc;
}



// FUNCTION 142957010 Get_Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_CRC(void)

{
  return 0x3dff23d1;
}



// FUNCTION 142957020 Get_Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_CRC(void)

{
  return 0x87e3b119;
}



// FUNCTION 142957030 Get_Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_CRC(void)

{
  return 0x8a72f3d8;
}



// FUNCTION 142957040 Get_Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_CRC(void)

{
  return 0xb87a44b;
}



// FUNCTION 142957050 Get_Z_Construct_UScriptStruct_FCachedKeyToActionInfo_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FCachedKeyToActionInfo_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FCachedKeyToActionInfo_CRC(void)

{
  return 0xf4100414;
}



// FUNCTION 142957060 Get_Z_Construct_UScriptStruct_FComponentKey_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FComponentKey_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FComponentKey_CRC(void)

{
  return 0xc77df67c;
}



// FUNCTION 142957070 Get_Z_Construct_UScriptStruct_FComponentOverrideRecord_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FComponentOverrideRecord_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FComponentOverrideRecord_CRC(void)

{
  return 0x64e4a673;
}



// FUNCTION 142957080 Get_Z_Construct_UScriptStruct_FImportanceTexture_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FImportanceTexture_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FImportanceTexture_CRC(void)

{
  return 0x523d7a97;
}



// FUNCTION 142957090 Get_Z_Construct_UScriptStruct_FIndexedCurve_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FIndexedCurve_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FIndexedCurve_CRC(void)

{
  return 0x85369a1f;
}



// FUNCTION 1429570a0 FUN_1429570a0 body=6 status=ok
// SIG undefined FUN_1429570a0(void)

undefined8 FUN_1429570a0(void)

{
  return 0xb593eba2;
}



// FUNCTION 1429570b0 Get_Z_Construct_UScriptStruct_FInputRange_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FInputRange_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FInputRange_CRC(void)

{
  return 0xd73d0ff9;
}



// FUNCTION 1429570c0 FUN_1429570c0 body=6 status=ok
// SIG undefined FUN_1429570c0(void)

undefined8 FUN_1429570c0(void)

{
  return 0x10b0cc2c;
}



// FUNCTION 1429570d0 Get_Z_Construct_UScriptStruct_FInputScaleBias_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FInputScaleBias_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FInputScaleBias_CRC(void)

{
  return 0x8334010f;
}



// FUNCTION 142957180 Serialize body=112 status=ok
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
  AAkReverbVolume::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1429571f0 StaticRegisterNativesUImportanceSamplingLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUImportanceSamplingLibrary(void)

void UImportanceSamplingLibrary::StaticRegisterNativesUImportanceSamplingLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_BreakImportanceTexture_145279b60,9);
  return;
}



// FUNCTION 142957220 FUN_142957220 body=34 status=ok
// SIG undefined FUN_142957220(void)

void FUN_142957220(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142956f50();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetControllerAnalogKeyState_14527a560,9);
  return;
}



// FUNCTION 142957250 StaticRegisterNativesUInputSettings body=34 status=ok
// SIG undefined StaticRegisterNativesUInputSettings(void)

void UInputSettings::StaticRegisterNativesUInputSettings(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddActionMapping_14527aba0,0xb);
  return;
}



// FUNCTION 142957280 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBlueprintInputActionDelegateBinding::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1f958 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FBlueprintInputActionDelegateBinding_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f958 =
         GetStaticStruct(FUN_142957c40,uVar2,L"BlueprintInputActionDelegateBinding",0x20,uVar1);
  }
  return;
}



// FUNCTION 1429572e0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBlueprintInputAxisDelegateBinding::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1f978 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FBlueprintInputAxisDelegateBinding_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f978 =
         GetStaticStruct(FUN_142957c70,uVar2,L"BlueprintInputAxisDelegateBinding",0x18,uVar1);
  }
  return;
}



// FUNCTION 142957340 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBlueprintInputAxisKeyDelegateBinding::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1f998 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f998 =
         GetStaticStruct(FUN_142957ca0,uVar2,L"BlueprintInputAxisKeyDelegateBinding",0x28,uVar1);
  }
  return;
}



// FUNCTION 1429573a0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBlueprintInputDelegateBinding::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1fa50 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1fa50 = GetStaticStruct(FUN_142955040,uVar2,L"BlueprintInputDelegateBinding",4,uVar1);
  }
  return;
}



// FUNCTION 142957400 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBlueprintInputKeyDelegateBinding::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1fa70 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1fa70 =
         GetStaticStruct(FUN_142957cd0,uVar2,L"BlueprintInputKeyDelegateBinding",0x38,uVar1);
  }
  return;
}



// FUNCTION 142957460 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FCachedKeyToActionInfo::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1f9e8 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FCachedKeyToActionInfo_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f9e8 = GetStaticStruct(FUN_142957d00,uVar2,L"CachedKeyToActionInfo",0x70,uVar1);
  }
  return;
}



// FUNCTION 1429574c0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FComponentKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1f938 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FComponentKey_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f938 = GetStaticStruct(FUN_142957d30,uVar2,L"ComponentKey",0x20,uVar1);
  }
  return;
}



// FUNCTION 142957520 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FComponentOverrideRecord::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1f928 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FComponentOverrideRecord_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f928 = GetStaticStruct(FUN_142957d60,uVar2,L"ComponentOverrideRecord",0x80,uVar1);
  }
  return;
}



// FUNCTION 142957580 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FImportanceTexture::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1f868 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FImportanceTexture_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f868 = GetStaticStruct(FUN_142957d90,uVar2,L"ImportanceTexture",0x50,uVar1);
  }
  return;
}



// FUNCTION 1429575e0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FIndexedCurve::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1f8e0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FIndexedCurve_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1f8e0 = GetStaticStruct(FUN_142957dc0,uVar2,L"IndexedCurve",0x58,uVar1);
  }
  return;
}



// FUNCTION 142957640 FUN_142957640 body=82 status=ok
// SIG undefined FUN_142957640(void)

void FUN_142957640(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1fa98 == 0) {
    uVar1 = FUN_1429570a0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1fa98 = GetStaticStruct(FUN_142957df0,uVar2,L"InputAlphaBoolBlend",0x58,uVar1);
  }
  return;
}



// FUNCTION 1429576a0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FInputRange::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1fab8 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FInputRange_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1fab8 = GetStaticStruct(FUN_142957e20,uVar2,L"InputRange",8,uVar1);
  }
  return;
}



// FUNCTION 142957700 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FInputScaleBias::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1fac8 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FInputScaleBias_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1fac8 = GetStaticStruct(FUN_142957e50,uVar2,L"InputScaleBias",8,uVar1);
  }
  return;
}



// FUNCTION 142957760 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FNavAvoidanceData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1faa8 == 0) {
    uVar1 = FUN_1429570c0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1faa8 = GetStaticStruct(FUN_142957e80,uVar2,L"InputScaleBiasClamp",0x3c,uVar1);
  }
  return;
}



// FUNCTION 1429577c0 FUN_1429577c0 body=47 status=ok
// SIG undefined FUN_1429577c0(void)

longlong FUN_1429577c0(void)

{
  if (DAT_146b1f8f0 == 0) {
    FUN_141786440(&DAT_146b1f8f0,&PTR_LAB_145277c90);
  }
  return DAT_146b1f8f0;
}



// FUNCTION 1429577f0 FUN_1429577f0 body=47 status=ok
// SIG undefined FUN_1429577f0(void)

longlong FUN_1429577f0(void)

{
  if (DAT_146b1f7d8 == 0) {
    FUN_141786440(&DAT_146b1f7d8,&PTR_StaticClass_145275750);
  }
  return DAT_146b1f7d8;
}



// FUNCTION 142957820 FUN_142957820 body=47 status=ok
// SIG undefined FUN_142957820(void)

longlong FUN_142957820(void)

{
  if (DAT_146b1f850 == 0) {
    FUN_141786440(&DAT_146b1f850,&PTR_FUN_145275db0);
  }
  return DAT_146b1f850;
}



// FUNCTION 142957850 FUN_142957850 body=47 status=ok
// SIG undefined FUN_142957850(void)

longlong FUN_142957850(void)

{
  if (DAT_146b1f8d0 == 0) {
    FUN_141786440(&DAT_146b1f8d0,&PTR_StaticClass_145277940);
  }
  return DAT_146b1f8d0;
}



// FUNCTION 142957880 FUN_142957880 body=47 status=ok
// SIG undefined FUN_142957880(void)

longlong FUN_142957880(void)

{
  if (DAT_146b1f918 == 0) {
    FUN_141786440(&DAT_146b1f918,&PTR_GetPrivateStaticClass_145278d10);
  }
  return DAT_146b1f918;
}



// FUNCTION 1429578b0 FUN_1429578b0 body=47 status=ok
// SIG undefined FUN_1429578b0(void)

longlong FUN_1429578b0(void)

{
  if (DAT_146b1f948 == 0) {
    FUN_141786440(&DAT_146b1f948,&PTR_GetPrivateStaticClass_145275fe0);
  }
  return DAT_146b1f948;
}



// FUNCTION 1429578e0 FUN_1429578e0 body=47 status=ok
// SIG undefined FUN_1429578e0(void)

longlong FUN_1429578e0(void)

{
  if (DAT_146b1f968 == 0) {
    FUN_141786440(&DAT_146b1f968,&PTR_GetPrivateStaticClass_145276940);
  }
  return DAT_146b1f968;
}



// FUNCTION 142957910 FUN_142957910 body=47 status=ok
// SIG undefined FUN_142957910(void)

longlong FUN_142957910(void)

{
  if (DAT_146b1f988 == 0) {
    FUN_141786440(&DAT_146b1f988,&PTR_GetPrivateStaticClass_1452779d0);
  }
  return DAT_146b1f988;
}



// FUNCTION 142957940 FUN_142957940 body=47 status=ok
// SIG undefined FUN_142957940(void)

longlong FUN_142957940(void)

{
  if (DAT_146b1f9a8 == 0) {
    FUN_141786440(&DAT_146b1f9a8,&PTR_GetPrivateStaticClass_145277e70);
  }
  return DAT_146b1f9a8;
}



// FUNCTION 142957970 FUN_142957970 body=47 status=ok
// SIG undefined FUN_142957970(void)

longlong FUN_142957970(void)

{
  if (DAT_146b1fa80 == 0) {
    FUN_141786440(&DAT_146b1fa80,&PTR_GetPrivateStaticClass_145278fc0);
  }
  return DAT_146b1fa80;
}



// FUNCTION 1429579a0 FUN_1429579a0 body=47 status=ok
// SIG undefined FUN_1429579a0(void)

longlong FUN_1429579a0(void)

{
  if (DAT_146b1f830 == 0) {
    FUN_141786440(&DAT_146b1f830,&PTR_GetPrivateStaticClass_145275a20);
  }
  return DAT_146b1f830;
}



// FUNCTION 1429579d0 FUN_1429579d0 body=47 status=ok
// SIG undefined FUN_1429579d0(void)

longlong FUN_1429579d0(void)

{
  if (DAT_146b1f840 == 0) {
    FUN_141786440(&DAT_146b1f840,&PTR_GetPrivateStaticClass_145275c30);
  }
  return DAT_146b1f840;
}



// FUNCTION 142957a00 FUN_142957a00 body=47 status=ok
// SIG undefined FUN_142957a00(void)

longlong FUN_142957a00(void)

{
  if (DAT_146b1f820 == 0) {
    FUN_141786440(&DAT_146b1f820,&PTR_GetPrivateStaticClass_1452758a0);
  }
  return DAT_146b1f820;
}



// FUNCTION 142957a30 FUN_142957a30 body=47 status=ok
// SIG undefined FUN_142957a30(void)

longlong FUN_142957a30(void)

{
  if (DAT_146b1f9d8 == 0) {
    FUN_141786a30(&DAT_146b1f9d8,&PTR_Z_Construct_UPackage__Script_Engine_1465a78d0);
  }
  return DAT_146b1f9d8;
}



// FUNCTION 142957a60 FUN_142957a60 body=47 status=ok
// SIG undefined FUN_142957a60(void)

longlong FUN_142957a60(void)

{
  if (DAT_146b1f9c8 == 0) {
    FUN_141786a30(&DAT_146b1f9c8,&PTR_Z_Construct_UPackage__Script_Engine_1465a7790);
  }
  return DAT_146b1f9c8;
}



// FUNCTION 142957a90 FUN_142957a90 body=47 status=ok
// SIG undefined FUN_142957a90(void)

longlong FUN_142957a90(void)

{
  if (DAT_146b1f9b8 == 0) {
    FUN_141786a30(&DAT_146b1f9b8,&PTR_Z_Construct_UPackage__Script_Engine_1465a76d0);
  }
  return DAT_146b1f9b8;
}



// FUNCTION 142957ac0 FUN_142957ac0 body=47 status=ok
// SIG undefined FUN_142957ac0(void)

longlong FUN_142957ac0(void)

{
  if (DAT_146b1f9d0 == 0) {
    FUN_141786a30(&DAT_146b1f9d0,&PTR_Z_Construct_UPackage__Script_Engine_1465a7850);
  }
  return DAT_146b1f9d0;
}



// FUNCTION 142957af0 FUN_142957af0 body=47 status=ok
// SIG undefined FUN_142957af0(void)

longlong FUN_142957af0(void)

{
  if (DAT_146b1f9c0 == 0) {
    FUN_141786a30(&DAT_146b1f9c0,&PTR_Z_Construct_UPackage__Script_Engine_1465a7750);
  }
  return DAT_146b1f9c0;
}



// FUNCTION 142957b20 FUN_142957b20 body=47 status=ok
// SIG undefined FUN_142957b20(void)

longlong FUN_142957b20(void)

{
  if (DAT_146b1f908 == 0) {
    FUN_141786a30(&DAT_146b1f908,&PTR_Z_Construct_UPackage__Script_Engine_1465a6d00);
  }
  return DAT_146b1f908;
}



// FUNCTION 142957b50 FUN_142957b50 body=47 status=ok
// SIG undefined FUN_142957b50(void)

longlong FUN_142957b50(void)

{
  if (DAT_146b1f900 == 0) {
    FUN_141786a30(&DAT_146b1f900,&PTR_Z_Construct_UPackage__Script_Engine_1465a6cc0);
  }
  return DAT_146b1f900;
}



// FUNCTION 142957b80 FUN_142957b80 body=47 status=ok
// SIG undefined FUN_142957b80(void)

longlong FUN_142957b80(void)

{
  if (DAT_146b1f910 == 0) {
    FUN_1417866a0(&DAT_146b1f910,&PTR_Z_Construct_UPackage__Script_Engine_1465a9bb0);
  }
  return DAT_146b1f910;
}



// FUNCTION 142957bb0 FUN_142957bb0 body=47 status=ok
// SIG undefined FUN_142957bb0(void)

longlong FUN_142957bb0(void)

{
  if (DAT_146b1fa90 == 0) {
    FUN_1417866a0(&DAT_146b1fa90,&PTR_Z_Construct_UPackage__Script_Engine_1465a9c50);
  }
  return DAT_146b1fa90;
}



// FUNCTION 142957be0 FUN_142957be0 body=47 status=ok
// SIG undefined FUN_142957be0(void)

longlong FUN_142957be0(void)

{
  if (DAT_146b1f9e0 == 0) {
    FUN_1417866a0(&DAT_146b1f9e0,&PTR_Z_Construct_UPackage__Script_Engine_1465a9c00);
  }
  return DAT_146b1f9e0;
}



// FUNCTION 142957c10 FUN_142957c10 body=47 status=ok
// SIG undefined FUN_142957c10(void)

longlong FUN_142957c10(void)

{
  if (DAT_146b1f860 == 0) {
    FUN_1417866a0(&DAT_146b1f860,&PTR_Z_Construct_UPackage__Script_Engine_1465a9b60);
  }
  return DAT_146b1f860;
}



// FUNCTION 142957c40 FUN_142957c40 body=47 status=ok
// SIG undefined FUN_142957c40(void)

longlong FUN_142957c40(void)

{
  if (DAT_146b1f960 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1f960,&PTR_Z_Construct_UPackage__Script_Engine_1465a72c0);
  }
  return DAT_146b1f960;
}



// FUNCTION 142957c70 FUN_142957c70 body=47 status=ok
// SIG undefined FUN_142957c70(void)

longlong FUN_142957c70(void)

{
  if (DAT_146b1f980 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1f980,&PTR_Z_Construct_UPackage__Script_Engine_1465a7450);
  }
  return DAT_146b1f980;
}



// FUNCTION 142957ca0 FUN_142957ca0 body=47 status=ok
// SIG undefined FUN_142957ca0(void)

longlong FUN_142957ca0(void)

{
  if (DAT_146b1f9a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1f9a0,&PTR_Z_Construct_UPackage__Script_Engine_1465a75b0);
  }
  return DAT_146b1f9a0;
}



// FUNCTION 142957cd0 FUN_142957cd0 body=47 status=ok
// SIG undefined FUN_142957cd0(void)

longlong FUN_142957cd0(void)

{
  if (DAT_146b1fa78 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1fa78,&PTR_Z_Construct_UPackage__Script_Engine_1465a8460);
  }
  return DAT_146b1fa78;
}



// FUNCTION 142957d00 FUN_142957d00 body=47 status=ok
// SIG undefined FUN_142957d00(void)

longlong FUN_142957d00(void)

{
  if (DAT_146b1f9f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1f9f0,&PTR_Z_Construct_UPackage__Script_Engine_1465a7950);
  }
  return DAT_146b1f9f0;
}



// FUNCTION 142957d30 FUN_142957d30 body=47 status=ok
// SIG undefined FUN_142957d30(void)

longlong FUN_142957d30(void)

{
  if (DAT_146b1f940 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1f940,&PTR_Z_Construct_UPackage__Script_Engine_1465a7120);
  }
  return DAT_146b1f940;
}



// FUNCTION 142957d60 FUN_142957d60 body=47 status=ok
// SIG undefined FUN_142957d60(void)

longlong FUN_142957d60(void)

{
  if (DAT_146b1f930 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1f930,&PTR_Z_Construct_UPackage__Script_Engine_1465a6fe0);
  }
  return DAT_146b1f930;
}



// FUNCTION 142957d90 FUN_142957d90 body=47 status=ok
// SIG undefined FUN_142957d90(void)

longlong FUN_142957d90(void)

{
  if (DAT_146b1f870 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1f870,&PTR_Z_Construct_UPackage__Script_Engine_1465a6010);
  }
  return DAT_146b1f870;
}



// FUNCTION 142957dc0 FUN_142957dc0 body=47 status=ok
// SIG undefined FUN_142957dc0(void)

longlong FUN_142957dc0(void)

{
  if (DAT_146b1f8e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1f8e8,&PTR_Z_Construct_UPackage__Script_Engine_1465a6c50);
  }
  return DAT_146b1f8e8;
}



// FUNCTION 142957df0 FUN_142957df0 body=47 status=ok
// SIG undefined FUN_142957df0(void)

longlong FUN_142957df0(void)

{
  if (DAT_146b1faa0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1faa0,&PTR_Z_Construct_UPackage__Script_Engine_1465a86a0);
  }
  return DAT_146b1faa0;
}



// FUNCTION 142957e20 FUN_142957e20 body=47 status=ok
// SIG undefined FUN_142957e20(void)

longlong FUN_142957e20(void)

{
  if (DAT_146b1fac0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1fac0,&PTR_Z_Construct_UPackage__Script_Engine_1465a8a90);
  }
  return DAT_146b1fac0;
}



// FUNCTION 142957e50 FUN_142957e50 body=47 status=ok
// SIG undefined FUN_142957e50(void)

longlong FUN_142957e50(void)

{
  if (DAT_146b1fad0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1fad0,&PTR_Z_Construct_UPackage__Script_Engine_1465a8b10);
  }
  return DAT_146b1fad0;
}



// FUNCTION 142957e80 FUN_142957e80 body=47 status=ok
// SIG undefined FUN_142957e80(void)

longlong FUN_142957e80(void)

{
  if (DAT_146b1fab0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1fab0,&PTR_Z_Construct_UPackage__Script_Engine_1465a8a10);
  }
  return DAT_146b1fab0;
}



// FUNCTION 142957eb0 FUN_142957eb0 body=395 status=ok
// SIG undefined FUN_142957eb0(void)

void FUN_142957eb0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int local_res10 [2];
  undefined8 local_48;
  byte local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  
  plVar5 = DAT_1469eae38;
  local_30 = DAT_1469eae30;
  local_38 = DAT_1469eae28;
  if (DAT_1469eae38 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_1469eae38 + 1) = (int)DAT_1469eae38[1] + 1;
    UNLOCK();
  }
  local_40 = local_40 & 0xf0;
  local_48 = 0;
  local_28 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_res10[0] = 0;
  puVar6 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
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
  UInputSettings::AddActionMapping(param_1,puVar6,local_res10[0] != 0);
  plVar5 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_28)(local_28);
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



// FUNCTION 142958040 FUN_142958040 body=404 status=ok
// SIG undefined FUN_142958040(void)

void FUN_142958040(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int local_res10 [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  
  plVar5 = DAT_1469eae38;
  local_30 = DAT_1469eae30;
  local_38 = DAT_1469eae28;
  if (DAT_1469eae38 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_1469eae38 + 1) = (int)DAT_1469eae38[1] + 1;
    UNLOCK();
  }
  local_40 = 0x3f800000;
  local_48 = 0;
  local_28 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_res10[0] = 0;
  puVar6 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
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
  UInputSettings::AddAxisMapping(param_1,puVar6,local_res10[0] != 0);
  plVar5 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_28)(local_28);
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



// FUNCTION 1429581e0 FUN_1429581e0 body=378 status=ok
// SIG undefined FUN_1429581e0(void)

void FUN_1429581e0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 local_res10 [8];
  undefined8 local_res20;
  undefined1 local_68 [8];
  undefined4 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined1 local_20;
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FWeakObjectPtr::operator=(local_28,0);
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_res20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar4 = local_68;
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = &local_res20;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar3 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  UImportanceSamplingLibrary::BreakImportanceTexture(puVar4,puVar2,puVar3);
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142958380 FUN_142958380 body=221 status=ok
// SIG undefined FUN_142958380(void)

void FUN_142958380(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined8 local_18;
  undefined8 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
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
  UInputSettings::GetActionMappingByName(param_1,local_res10,puVar1);
  TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>::
  ~TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>(&local_18);
  return;
}



// FUNCTION 142958460 execGetActionNames body=163 status=ok
// SIG undefined execGetActionNames(void)

void UInputSettings::execGetActionNames(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
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
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  GetActionNames(param_1,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142958510 FUN_142958510 body=221 status=ok
// SIG undefined FUN_142958510(void)

void FUN_142958510(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined8 local_18;
  undefined8 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
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
  FUN_1428aba30(param_1,local_res10,puVar1);
  TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>::
  ~TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>(&local_18);
  return;
}



// FUNCTION 1429585f0 execGetAxisNames body=163 status=ok
// SIG undefined execGetAxisNames(void)

void UInputSettings::execGetAxisNames(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
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
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  GetAxisNames(param_1,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1429586a0 FUN_1429586a0 body=249 status=ok
// SIG undefined FUN_1429586a0(void)

void FUN_1429586a0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined8 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_38 = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_20 = local_38;
  local_18 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
    UNLOCK();
  }
  uVar6 = UInputComponent::GetControllerAnalogKeyState(param_1,&local_20);
  plVar5 = plStack_28;
  *param_3 = uVar6;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_28)(plStack_28);
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



// FUNCTION 1429587a0 execGetControllerAnalogStickState body=284 status=ok
// SIG undefined execGetControllerAnalogStickState(void)

void UInputComponent::execGetControllerAnalogStickState(long param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  undefined4 local_28 [4];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_28[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 1429588c0 execGetControllerMouseDelta body=220 status=ok
// SIG undefined execGetControllerMouseDelta(void)

void UInputComponent::execGetControllerMouseDelta(long param_1,longlong param_2)

{
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 1429589a0 FUN_1429589a0 body=267 status=ok
// SIG undefined FUN_1429589a0(void)

void FUN_1429589a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_38 = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_20 = local_38;
  local_18 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
    UNLOCK();
  }
  puVar6 = (undefined8 *)UInputComponent::GetControllerVectorKeyState(param_1,local_48,&local_20);
  plVar5 = plStack_28;
  *param_3 = *puVar6;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar6 + 1);
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_28)(plStack_28);
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



// FUNCTION 142958ab0 execGetInputSettings body=42 status=ok
// SIG undefined execGetInputSettings(void)

void UInputSettings::execGetInputSettings(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetDefault<UInputSettings>();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142958ae0 execGetTouchState body=375 status=ok
// SIG undefined execGetTouchState(void)

void UInputComponent::execGetTouchState(long param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined4 local_res20 [2];
  undefined4 local_28;
  undefined4 local_24 [3];
  
  local_24[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_24);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_24);
  }
  local_res20[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 142958c60 FUN_142958c60 body=736 status=ok
// SIG undefined FUN_142958c60(void)

void FUN_142958c60(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [8];
  undefined1 local_a8 [16];
  undefined1 local_98 [8];
  undefined4 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined1 local_50;
  undefined1 local_48 [16];
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  FWeakObjectPtr::operator=(local_58,0);
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar4 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar5 = local_98;
  if (puVar4 != (undefined1 *)0x0) {
    puVar5 = puVar4;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b0);
  }
  local_b4 = 0;
  puVar4 = local_b0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_b4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b4);
  }
  local_b8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar7 = local_a8;
  if (puVar1 != (undefined1 *)0x0) {
    puVar7 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar6 = local_48;
  if (puVar1 != (undefined1 *)0x0) {
    puVar6 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  local_res20[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_res10;
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  puVar3 = local_res20;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  thunk_FUN_14252acb0(puVar5,puVar4,local_b4,local_b8,puVar7,puVar6,puVar2,puVar3);
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142958f40 FUN_142958f40 body=247 status=ok
// SIG undefined FUN_142958f40(void)

void FUN_142958f40(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  undefined8 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_38 = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_20 = local_38;
  local_18 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
    UNLOCK();
  }
  uVar6 = FUN_1423723c0(param_1,&local_20);
  plVar5 = plStack_28;
  *param_3 = uVar6;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_28)(plStack_28);
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



// FUNCTION 142959040 execMakeImportanceTexture body=461 status=ok
// SIG undefined execMakeImportanceTexture(void)

void UImportanceSamplingLibrary::execMakeImportanceTexture
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  undefined1 local_78 [16];
  longlong local_68;
  longlong local_58;
  longlong local_48;
  
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
  local_res18[0] = local_res10[0];
  puVar3 = (undefined4 *)MakeImportanceTexture(local_78,local_res20,local_res18);
  plVar1 = (longlong *)(param_3 + 4);
  plVar2 = (longlong *)(puVar3 + 4);
  *param_3 = *puVar3;
  param_3[1] = puVar3[1];
  param_3[2] = puVar3[2];
  if (plVar1 != plVar2) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar2;
    *plVar2 = 0;
    param_3[6] = puVar3[6];
    param_3[7] = puVar3[7];
    *(undefined8 *)(puVar3 + 6) = 0;
  }
  plVar1 = (longlong *)(puVar3 + 8);
  plVar2 = (longlong *)(param_3 + 8);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    param_3[10] = puVar3[10];
    param_3[0xb] = puVar3[0xb];
    *(undefined8 *)(puVar3 + 10) = 0;
  }
  plVar1 = (longlong *)(puVar3 + 0xc);
  plVar2 = (longlong *)(param_3 + 0xc);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    param_3[0xe] = puVar3[0xe];
    param_3[0xf] = puVar3[0xf];
    *(undefined8 *)(puVar3 + 0xe) = 0;
  }
  param_3[0x10] = puVar3[0x10];
  param_3[0x11] = puVar3[0x11];
  *(undefined1 *)(param_3 + 0x12) = *(undefined1 *)(puVar3 + 0x12);
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142959210 execNextSobolCell2D body=241 status=ok
// SIG undefined execNextSobolCell2D(void)

void UImportanceSamplingLibrary::execNextSobolCell2D
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined1 local_28 [16];
  
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)NextSobolCell2D(local_28,local_res18[0],local_res10[0],local_res20);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142959310 execNextSobolCell3D body=282 status=ok
// SIG undefined execNextSobolCell3D(void)

void UImportanceSamplingLibrary::execNextSobolCell3D
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_28 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = local_30;
  puVar1 = (undefined8 *)NextSobolCell3D(local_18,local_res18[0],local_res10[0],&local_28);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}


