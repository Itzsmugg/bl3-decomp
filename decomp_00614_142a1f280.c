// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142a1f280 Get_Z_Construct_UScriptStruct_FMeshSectionInfo_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMeshSectionInfo_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMeshSectionInfo_CRC(void)

{
  return 0x1ecf5767;
}



// FUNCTION 142a1f290 FUN_142a1f290 body=6 status=ok
// SIG undefined FUN_142a1f290(void)

undefined8 FUN_142a1f290(void)

{
  return 0x34e169bf;
}



// FUNCTION 142a1f2a0 Get_Z_Construct_UScriptStruct_FSplineMeshParams_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSplineMeshParams_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSplineMeshParams_CRC(void)

{
  return 0xaae32a75;
}



// FUNCTION 142a1f2b0 Get_Z_Construct_UScriptStruct_FStaticMaterial_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FStaticMaterial_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FStaticMaterial_CRC(void)

{
  return 0xbf778115;
}



// FUNCTION 142a1f2c0 Get_Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_CRC(void)

{
  return 0xdef215b;
}



// FUNCTION 142a1f2d0 FUN_142a1f2d0 body=6 status=ok
// SIG undefined FUN_142a1f2d0(void)

undefined8 FUN_142a1f2d0(void)

{
  return 0xa9fe87c2;
}



// FUNCTION 142a1f3a0 Serialize body=112 status=ok
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
  FUN_1423def00(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a1f410 Serialize body=112 status=ok
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
  FUN_142826000(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a1f480 Serialize body=112 status=ok
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
  FUN_1428269e0(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a1f4f0 StaticRegisterNativesARemnantMiniMapDisplayActor body=34 status=ok
// SIG undefined StaticRegisterNativesARemnantMiniMapDisplayActor(void)

void ARemnantMiniMapDisplayActor::StaticRegisterNativesARemnantMiniMapDisplayActor(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetInnerConeAngle_145348d20,2);
  return;
}



// FUNCTION 142a1f520 StaticRegisterNativesUARBlueprintLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUARBlueprintLibrary(void)

void UARBlueprintLibrary::StaticRegisterNativesUARBlueprintLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = AUGDungeon::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetBoundaryMax_145348b40,0x1e);
  return;
}



// FUNCTION 142a1f550 FUN_142a1f550 body=34 status=ok
// SIG undefined FUN_142a1f550(void)

void FUN_142a1f550(void)

{
  undefined8 uVar1;
  
  uVar1 = UPhysicsConstraintComponent::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetInnerConeAngle_145348d40,2);
  return;
}



// FUNCTION 142a1f580 StaticRegisterNativesAXBakeableSplineMesh body=34 status=ok
// SIG undefined StaticRegisterNativesAXBakeableSplineMesh(void)

void AXBakeableSplineMesh::StaticRegisterNativesAXBakeableSplineMesh(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetTargetRotation_145348d60,3);
  return;
}



// FUNCTION 142a1f5b0 FUN_142a1f5b0 body=34 status=ok
// SIG undefined FUN_142a1f5b0(void)

void FUN_142a1f5b0(void)

{
  undefined8 uVar1;
  
  uVar1 = UNodeMappingContainer::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetBoundingBox_1453498a0,7);
  return;
}



// FUNCTION 142a1f5e0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAssetEditorOrbitCameraPosition::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28930 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28930 =
         GetStaticStruct(FUN_142a1faf0,uVar2,L"AssetEditorOrbitCameraPosition",0x28,uVar1);
  }
  return;
}



// FUNCTION 142a1f640 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FGameplayEffectExecutionScopedModifierInfo::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28980 == 0) {
    uVar1 = FUN_142a1f250();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28980 =
         GetStaticStruct(FUN_142a1fb50,uVar2,L"GroupedStaticMeshOptimizationSettings",0x248,uVar1);
  }
  return;
}



// FUNCTION 142a1f6a0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMaterialRemapIndex::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28910 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMaterialRemapIndex_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28910 = GetStaticStruct(FUN_142a1fb80,uVar2,L"MaterialRemapIndex",0x18,uVar1);
  }
  return;
}



// FUNCTION 142a1f700 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMeshSectionInfo::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28950 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMeshSectionInfo_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28950 = GetStaticStruct(FUN_142a1fbb0,uVar2,L"MeshSectionInfo",8,uVar1);
  }
  return;
}



// FUNCTION 142a1f760 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMeshSectionInfoMap::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28940 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMeshSectionInfoMap_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28940 = GetStaticStruct(FUN_142a1fbe0,uVar2,L"MeshSectionInfoMap",0x50,uVar1);
  }
  return;
}



// FUNCTION 142a1f7c0 FUN_142a1f7c0 body=82 status=ok
// SIG undefined FUN_142a1f7c0(void)

void FUN_142a1f7c0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28970 == 0) {
    uVar1 = FUN_142a1f290();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28970 = GetStaticStruct(FUN_142a1fc10,uVar2,L"PerLODPlatformSettings",4,uVar1);
  }
  return;
}



// FUNCTION 142a1f820 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSplineMeshParams::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28768 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FSplineMeshParams_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28768 = GetStaticStruct(FUN_142a1fc40,uVar2,L"SplineMeshParams",0x58,uVar1);
  }
  return;
}



// FUNCTION 142a1f880 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FStaticMaterial::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28920 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FStaticMaterial_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28920 = GetStaticStruct(FUN_142a1fc70,uVar2,L"StaticMaterial",0x30,uVar1);
  }
  return;
}



// FUNCTION 142a1f8e0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FStaticMeshOptimizationSettings::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28990 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28990 =
         GetStaticStruct(FUN_142a1fca0,uVar2,L"StaticMeshOptimizationSettings",0x1c,uVar1);
  }
  return;
}



// FUNCTION 142a1f940 FUN_142a1f940 body=82 status=ok
// SIG undefined FUN_142a1f940(void)

void FUN_142a1f940(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28960 == 0) {
    uVar1 = FUN_142a1f2d0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28960 = GetStaticStruct(FUN_142a1fcd0,uVar2,L"StaticMeshSourceModel",0x490,uVar1);
  }
  return;
}



// FUNCTION 142a1f9a0 FUN_142a1f9a0 body=47 status=ok
// SIG undefined FUN_142a1f9a0(void)

longlong FUN_142a1f9a0(void)

{
  if (DAT_146b28750 == 0) {
    FUN_141786440(&DAT_146b28750,&PTR_GetPrivateStaticClass_145345a20);
  }
  return DAT_146b28750;
}



// FUNCTION 142a1f9d0 FUN_142a1f9d0 body=47 status=ok
// SIG undefined FUN_142a1f9d0(void)

longlong FUN_142a1f9d0(void)

{
  if (DAT_146b289a0 == 0) {
    FUN_141786440(&DAT_146b289a0,&PTR_StaticClass_1453469d0);
  }
  return DAT_146b289a0;
}



// FUNCTION 142a1fa00 FUN_142a1fa00 body=47 status=ok
// SIG undefined FUN_142a1fa00(void)

longlong FUN_142a1fa00(void)

{
  if (DAT_146b28900 == 0) {
    FUN_1417866a0(&DAT_146b28900,&PTR_Z_Construct_UPackage__Script_Engine_14666c1a0);
  }
  return DAT_146b28900;
}



// FUNCTION 142a1fa30 FUN_142a1fa30 body=47 status=ok
// SIG undefined FUN_142a1fa30(void)

longlong FUN_142a1fa30(void)

{
  if (DAT_146b28908 == 0) {
    FUN_1417866a0(&DAT_146b28908,&PTR_Z_Construct_UPackage__Script_Engine_14666c1f0);
  }
  return DAT_146b28908;
}



// FUNCTION 142a1fa60 FUN_142a1fa60 body=47 status=ok
// SIG undefined FUN_142a1fa60(void)

longlong FUN_142a1fa60(void)

{
  if (DAT_146b288f8 == 0) {
    FUN_1417866a0(&DAT_146b288f8,&PTR_Z_Construct_UPackage__Script_Engine_14666c150);
  }
  return DAT_146b288f8;
}



// FUNCTION 142a1fa90 FUN_142a1fa90 body=47 status=ok
// SIG undefined FUN_142a1fa90(void)

longlong FUN_142a1fa90(void)

{
  if (DAT_146b28760 == 0) {
    FUN_1417866a0(&DAT_146b28760,&PTR_Z_Construct_UPackage__Script_Engine_14666c0b0);
  }
  return DAT_146b28760;
}



// FUNCTION 142a1fac0 FUN_142a1fac0 body=47 status=ok
// SIG undefined FUN_142a1fac0(void)

longlong FUN_142a1fac0(void)

{
  if (DAT_146b288f0 == 0) {
    FUN_1417866a0(&DAT_146b288f0,&PTR_Z_Construct_UPackage__Script_Engine_14666c100);
  }
  return DAT_146b288f0;
}



// FUNCTION 142a1faf0 FUN_142a1faf0 body=47 status=ok
// SIG undefined FUN_142a1faf0(void)

longlong FUN_142a1faf0(void)

{
  if (DAT_146b28938 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28938,&PTR_Z_Construct_UPackage__Script_Engine_14666aa50);
  }
  return DAT_146b28938;
}



// FUNCTION 142a1fb20 FUN_142a1fb20 body=47 status=ok
// SIG undefined FUN_142a1fb20(void)

longlong FUN_142a1fb20(void)

{
  if (DAT_146b288e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b288e8,&PTR_Z_Construct_UPackage__Script_Engine_14666a710);
  }
  return DAT_146b288e8;
}



// FUNCTION 142a1fb50 FUN_142a1fb50 body=47 status=ok
// SIG undefined FUN_142a1fb50(void)

longlong FUN_142a1fb50(void)

{
  if (DAT_146b28988 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28988,&PTR_Z_Construct_UPackage__Script_Engine_14666b300);
  }
  return DAT_146b28988;
}



// FUNCTION 142a1fb80 FUN_142a1fb80 body=47 status=ok
// SIG undefined FUN_142a1fb80(void)

longlong FUN_142a1fb80(void)

{
  if (DAT_146b28918 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28918,&PTR_Z_Construct_UPackage__Script_Engine_14666a790);
  }
  return DAT_146b28918;
}



// FUNCTION 142a1fbb0 FUN_142a1fbb0 body=47 status=ok
// SIG undefined FUN_142a1fbb0(void)

longlong FUN_142a1fbb0(void)

{
  if (DAT_146b28958 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28958,&PTR_Z_Construct_UPackage__Script_Engine_14666ac90);
  }
  return DAT_146b28958;
}



// FUNCTION 142a1fbe0 FUN_142a1fbe0 body=47 status=ok
// SIG undefined FUN_142a1fbe0(void)

longlong FUN_142a1fbe0(void)

{
  if (DAT_146b28948 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28948,&PTR_Z_Construct_UPackage__Script_Engine_14666ab10);
  }
  return DAT_146b28948;
}



// FUNCTION 142a1fc10 FUN_142a1fc10 body=47 status=ok
// SIG undefined FUN_142a1fc10(void)

longlong FUN_142a1fc10(void)

{
  if (DAT_146b28978 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28978,&PTR_Z_Construct_UPackage__Script_Engine_14666b180);
  }
  return DAT_146b28978;
}



// FUNCTION 142a1fc40 FUN_142a1fc40 body=47 status=ok
// SIG undefined FUN_142a1fc40(void)

longlong FUN_142a1fc40(void)

{
  if (DAT_146b28770 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28770,&PTR_Z_Construct_UPackage__Script_Engine_146668570);
  }
  return DAT_146b28770;
}



// FUNCTION 142a1fc70 FUN_142a1fc70 body=47 status=ok
// SIG undefined FUN_142a1fc70(void)

longlong FUN_142a1fc70(void)

{
  if (DAT_146b28928 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28928,&PTR_Z_Construct_UPackage__Script_Engine_14666a890);
  }
  return DAT_146b28928;
}



// FUNCTION 142a1fca0 FUN_142a1fca0 body=47 status=ok
// SIG undefined FUN_142a1fca0(void)

longlong FUN_142a1fca0(void)

{
  if (DAT_146b28998 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28998,&PTR_Z_Construct_UPackage__Script_Engine_14666b500);
  }
  return DAT_146b28998;
}



// FUNCTION 142a1fcd0 FUN_142a1fcd0 body=47 status=ok
// SIG undefined FUN_142a1fcd0(void)

longlong FUN_142a1fcd0(void)

{
  if (DAT_146b28968 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28968,&PTR_Z_Construct_UPackage__Script_Engine_14666af10);
  }
  return DAT_146b28968;
}



// FUNCTION 142a1fd00 FUN_142a1fd00 body=47 status=ok
// SIG undefined FUN_142a1fd00(void)

longlong FUN_142a1fd00(void)

{
  if (DAT_146b288e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b288e0,&PTR_Z_Construct_UPackage__Script_Engine_14666a690);
  }
  return DAT_146b288e0;
}



// FUNCTION 142a1fd30 execGetTeleportDistanceThreshold body=45 status=ok
// SIG undefined execGetTeleportDistanceThreshold(void)

void USkeletalMeshComponent::execGetTeleportDistanceThreshold
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetTeleportDistanceThreshold();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a1fd60 FUN_142a1fd60 body=45 status=ok
// SIG undefined FUN_142a1fd60(void)

void FUN_142a1fd60(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1423d05d0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a1fd90 FUN_142a1fd90 body=68 status=ok
// SIG undefined FUN_142a1fd90(void)

void FUN_142a1fd90(undefined4 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_14281d030(param_1,local_28);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  param_3[2] = puVar2[2];
  *(undefined4 *)(param_3 + 3) = *(undefined4 *)(puVar2 + 3);
  return;
}



// FUNCTION 142a1fde0 execGetBounds body=68 status=ok
// SIG undefined execGetBounds(void)

void UStaticMesh::execGetBounds(undefined4 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)GetBounds(param_1,local_28);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  param_3[2] = puVar2[2];
  *(undefined4 *)(param_3 + 3) = *(undefined4 *)(puVar2 + 3);
  return;
}



// FUNCTION 142a1fe30 FUN_142a1fe30 body=54 status=ok
// SIG undefined FUN_142a1fe30(void)

void FUN_142a1fe30(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1423d17b0(param_1,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142a1fe70 FUN_142a1fe70 body=60 status=ok
// SIG undefined FUN_142a1fe70(void)

void FUN_142a1fe70(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1423d17c0(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a1feb0 execGetCurrentPlaybackProgressTime body=45 status=ok
// SIG undefined execGetCurrentPlaybackProgressTime(void)

void USynthSamplePlayer::execGetCurrentPlaybackProgressTime
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetCurrentPlaybackProgressTime();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a1fee0 FUN_142a1fee0 body=54 status=ok
// SIG undefined FUN_142a1fee0(void)

void FUN_142a1fee0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1423d17f0(param_1,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142a1ff20 FUN_142a1ff20 body=60 status=ok
// SIG undefined FUN_142a1ff20(void)

void FUN_142a1ff20(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1423d1800(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a1ff60 execIsPlaying body=43 status=ok
// SIG undefined execIsPlaying(void)

void UGeometryCacheComponent::execIsPlaying(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = IsPlaying();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a1ff90 execGetMaterial body=142 status=ok
// SIG undefined execGetMaterial(void)

void UStaticMesh::execGetMaterial(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = GetMaterial(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a20020 execGetMaterialIndex body=143 status=ok
// SIG undefined execGetMaterialIndex(void)

void UStaticMesh::execGetMaterialIndex(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = GetMaterialIndex(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a200b0 execGetNumLODs body=43 status=ok
// SIG undefined execGetNumLODs(void)

void UStaticMesh::execGetNumLODs(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetNumLODs();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a200e0 FUN_142a200e0 body=141 status=ok
// SIG undefined FUN_142a200e0(void)

void FUN_142a200e0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_14281e7d0(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a20170 FUN_142a20170 body=60 status=ok
// SIG undefined FUN_142a20170(void)

void FUN_142a20170(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1423d58d0(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a201b0 FUN_142a201b0 body=54 status=ok
// SIG undefined FUN_142a201b0(void)

void FUN_142a201b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1423d58f0(param_1,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142a201f0 execGetSplineUpDir body=60 status=ok
// SIG undefined execGetSplineUpDir(void)

void USplineMeshComponent::execGetSplineUpDir
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)GetSplineUpDir(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a20230 execGetEnvelopeValue body=45 status=ok
// SIG undefined execGetEnvelopeValue(void)

void UMediaSoundComponent::execGetEnvelopeValue
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetEnvelopeValue();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a20260 FUN_142a20260 body=54 status=ok
// SIG undefined FUN_142a20260(void)

void FUN_142a20260(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1423d5930(param_1,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142a202a0 FUN_142a202a0 body=60 status=ok
// SIG undefined FUN_142a202a0(void)

void FUN_142a202a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1423d5940(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a202e0 FUN_142a202e0 body=60 status=ok
// SIG undefined FUN_142a202e0(void)

void FUN_142a202e0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142451c10(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a20320 FUN_142a20320 body=60 status=ok
// SIG undefined FUN_142a20320(void)

void FUN_142a20320(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142451db0(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a20360 execIsRunning body=43 status=ok
// SIG undefined execIsRunning(void)

void AFunctionalTest::execIsRunning(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = IsRunning();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142a20390 FUN_142a20390 body=327 status=ok
// SIG undefined FUN_142a20390(void)

void FUN_142a20390(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_28 [2];
  undefined8 local_20;
  
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
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142823750(param_1,local_28[0],bVar1,local_res20[0],local_20);
  return;
}



// FUNCTION 142a204e0 FUN_142a204e0 body=200 status=ok
// SIG undefined FUN_142a204e0(void)

void FUN_142a204e0(undefined8 param_1,longlong param_2)

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
  FUN_1423df240(param_1,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 142a205b0 FUN_142a205b0 body=200 status=ok
// SIG undefined FUN_142a205b0(void)

void FUN_142a205b0(undefined8 param_1,longlong param_2)

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
  FUN_1423df260(param_1,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 142a20680 execSetPositionInViewport body=190 status=ok
// SIG undefined execSetPositionInViewport(void)

void UUserWidget::execSetPositionInViewport(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined8 local_res20;
  
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
  FUN_1423df710(param_1,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 142a20740 FUN_142a20740 body=210 status=ok
// SIG undefined FUN_142a20740(void)

void FUN_142a20740(undefined8 param_1,longlong param_2)

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
  FUN_1423df730(param_1,&local_18,local_res10[0] != 0);
  return;
}



// FUNCTION 142a20820 FUN_142a20820 body=200 status=ok
// SIG undefined FUN_142a20820(void)

void FUN_142a20820(undefined8 param_1,longlong param_2)

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
  FUN_1423df760(param_1,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 142a208f0 execSetPositionInViewport body=190 status=ok
// SIG undefined execSetPositionInViewport(void)

void UUserWidget::execSetPositionInViewport(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined8 local_res20;
  
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
  FUN_1423df780(param_1,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 142a209b0 FUN_142a209b0 body=210 status=ok
// SIG undefined FUN_142a209b0(void)

void FUN_142a209b0(undefined8 param_1,longlong param_2)

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
  FUN_1423df7a0(param_1,&local_18,local_res10[0] != 0);
  return;
}



// FUNCTION 142a20a90 FUN_142a20a90 body=195 status=ok
// SIG undefined FUN_142a20a90(void)

void FUN_142a20a90(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  int local_res20 [2];
  
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
  FUN_1423df840(param_1,local_res10[0],local_res20[0] != 0);
  return;
}



// FUNCTION 142a20b60 FUN_142a20b60 body=123 status=ok
// SIG undefined FUN_142a20b60(void)

void FUN_142a20b60(undefined8 param_1,longlong param_2)

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
  FUN_142826ee0(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a20be0 FUN_142a20be0 body=123 status=ok
// SIG undefined FUN_142a20be0(void)

void FUN_142a20be0(undefined8 param_1,longlong param_2)

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
  FUN_1423df9a0(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a20c60 FUN_142a20c60 body=123 status=ok
// SIG undefined FUN_142a20c60(void)

void FUN_142a20c60(undefined8 param_1,longlong param_2)

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
  FUN_142827090(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a20ce0 FUN_142a20ce0 body=123 status=ok
// SIG undefined FUN_142a20ce0(void)

void FUN_142a20ce0(undefined8 param_1,longlong param_2)

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
  FUN_1423e0360(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a20d60 execSetSplineUpDir body=217 status=ok
// SIG undefined execSetSplineUpDir(void)

void USplineMeshComponent::execSetSplineUpDir(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  int local_res10 [2];
  undefined1 local_18 [16];
  
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
  FUN_1423e0530(param_1,puVar1,local_res10[0] != 0);
  return;
}



// FUNCTION 142a20e40 execSetStartAndEnd body=445 status=ok
// SIG undefined execSetStartAndEnd(void)

void USplineMeshComponent::execSetStartAndEnd(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_48 = local_88;
  local_38 = local_78;
  local_40 = local_80;
  local_30 = local_70;
  local_20 = local_60;
  local_10 = local_50;
  local_28 = local_68;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_18 = local_58;
  FUN_1423e0690(param_1,&local_18,&local_28,&local_38,&local_48,local_res10[0] != 0);
  return;
}



// FUNCTION 142a21000 execSetPositionInViewport body=190 status=ok
// SIG undefined execSetPositionInViewport(void)

void UUserWidget::execSetPositionInViewport(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined8 local_res20;
  
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
  FUN_1423e0710(param_1,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 142a210c0 FUN_142a210c0 body=210 status=ok
// SIG undefined FUN_142a210c0(void)

void FUN_142a210c0(undefined8 param_1,longlong param_2)

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
  FUN_1423e0730(param_1,&local_18,local_res10[0] != 0);
  return;
}



// FUNCTION 142a211a0 FUN_142a211a0 body=200 status=ok
// SIG undefined FUN_142a211a0(void)

void FUN_142a211a0(undefined8 param_1,longlong param_2)

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
  FUN_1423e0760(param_1,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 142a21270 execSetPositionInViewport body=190 status=ok
// SIG undefined execSetPositionInViewport(void)

void UUserWidget::execSetPositionInViewport(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined8 local_res20;
  
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
  FUN_1423e0780(param_1,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 142a21330 FUN_142a21330 body=210 status=ok
// SIG undefined FUN_142a21330(void)

void FUN_142a21330(undefined8 param_1,longlong param_2)

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
  FUN_1423e07a0(param_1,&local_18,local_res10[0] != 0);
  return;
}



// FUNCTION 142a21440 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTextureLODSettings::GetPrivateStaticClass(void)

{
  if (DAT_146b28c48 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"StreamingLevelRemap",&DAT_146b28c48,FUN_140447710,0x38,
                  0x10000004,0,L"Engine",FUN_1408e0a20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b28c48;
}



// FUNCTION 142a214f0 FUN_142a214f0 body=53 status=ok
// SIG undefined FUN_142a214f0(void)

void FUN_142a214f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &PTR_FUN_14534dbf0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a21530 FUN_142a21530 body=53 status=ok
// SIG undefined FUN_142a21530(void)

void FUN_142a21530(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_14534dd08;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a21570 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UStringTable::GetPrivateStaticClass(void)

{
  if (DAT_146b28c78 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"StringTable",&DAT_146b28c78,FUN_140447710,0x40,0x10000000,0,
                  L"Engine",&LAB_142a227e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b28c78;
}



// FUNCTION 142a21620 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong USubsurfaceProfile::StaticClass(void)

{
  if (DAT_146b28c98 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SubsurfaceProfile",&DAT_146b28c98,FUN_140447710,0x78,
                  0x10000000,0,L"Engine",&LAB_142a22810,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b28c98;
}



// FUNCTION 142a216c0 FUN_142a216c0 body=47 status=ok
// SIG undefined FUN_142a216c0(void)

longlong FUN_142a216c0(void)

{
  if (DAT_146b28ab8 == 0) {
    FUN_141786440(&DAT_146b28ab8,&PTR_LAB_14534a0e0);
  }
  return DAT_146b28ab8;
}



// FUNCTION 142a216f0 FUN_142a216f0 body=47 status=ok
// SIG undefined FUN_142a216f0(void)

longlong FUN_142a216f0(void)

{
  if (DAT_146b28ab0 == 0) {
    FUN_141786a30(&DAT_146b28ab0,&PTR_FUN_14666c280);
  }
  return DAT_146b28ab0;
}



// FUNCTION 142a21720 FUN_142a21720 body=53 status=ok
// SIG undefined FUN_142a21720(void)

void FUN_142a21720(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_14534de20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142a21770 FUN_142a21770 body=47 status=ok
// SIG undefined FUN_142a21770(void)

longlong FUN_142a21770(void)

{
  if (DAT_146b28b18 == 0) {
    FUN_141786440(&DAT_146b28b18,&PTR_thunk_FUN_142a232e0_14534acb0);
  }
  return DAT_146b28b18;
}



// FUNCTION 142a217a0 FUN_142a217a0 body=47 status=ok
// SIG undefined FUN_142a217a0(void)

longlong FUN_142a217a0(void)

{
  if (DAT_146b28ae8 == 0) {
    FUN_141786a30(&DAT_146b28ae8,&PTR_FUN_14666c6e0);
  }
  return DAT_146b28ae8;
}



// FUNCTION 142a217d0 FUN_142a217d0 body=47 status=ok
// SIG undefined FUN_142a217d0(void)

longlong FUN_142a217d0(void)

{
  if (DAT_146b28af0 == 0) {
    FUN_141786a30(&DAT_146b28af0,&PTR_FUN_14666c760);
  }
  return DAT_146b28af0;
}



// FUNCTION 142a21800 FUN_142a21800 body=47 status=ok
// SIG undefined FUN_142a21800(void)

longlong FUN_142a21800(void)

{
  if (DAT_146b28af8 == 0) {
    FUN_141786a30(&DAT_146b28af8,&PTR_FUN_14666c7a0);
  }
  return DAT_146b28af8;
}



// FUNCTION 142a21830 FUN_142a21830 body=47 status=ok
// SIG undefined FUN_142a21830(void)

longlong FUN_142a21830(void)

{
  if (DAT_146b28b00 == 0) {
    FUN_141786a30(&DAT_146b28b00,&PTR_FUN_14666c7e0);
  }
  return DAT_146b28b00;
}



// FUNCTION 142a21860 FUN_142a21860 body=47 status=ok
// SIG undefined FUN_142a21860(void)

longlong FUN_142a21860(void)

{
  if (DAT_146b28b08 == 0) {
    FUN_141786a30(&DAT_146b28b08,&PTR_FUN_14666c8a0);
  }
  return DAT_146b28b08;
}



// FUNCTION 142a21890 FUN_142a21890 body=47 status=ok
// SIG undefined FUN_142a21890(void)

longlong FUN_142a21890(void)

{
  if (DAT_146b28b10 == 0) {
    FUN_141786a30(&DAT_146b28b10,&PTR_FUN_14666c9a0);
  }
  return DAT_146b28b10;
}



// FUNCTION 142a218d0 FUN_142a218d0 body=53 status=ok
// SIG undefined FUN_142a218d0(void)

void FUN_142a218d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &PTR_FUN_14534d288;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a21910 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong USubUVAnimation::StaticClass(void)

{
  if (DAT_146b28cb8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"SubUVAnimation",&DAT_146b28cb8,FUN_140447710,0x60,0x10000000,0
                  ,L"Engine",&LAB_142a227f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b28cb8;
}



// FUNCTION 142a219b0 FUN_142a219b0 body=53 status=ok
// SIG undefined FUN_142a219b0(void)

void FUN_142a219b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_14534d3a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 142a21a00 FUN_142a21a00 body=53 status=ok
// SIG undefined FUN_142a21a00(void)

void FUN_142a21a00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &PTR_FUN_14534dfb0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a21a40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong APlayerState::GetPrivateStaticClass(void)

{
  if (DAT_146b28cd8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"TargetPoint",&DAT_146b28cd8,FUN_140447710,0x458,0x10000000,0,
                  L"Engine",&LAB_142a22740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146b28cd8;
}



// FUNCTION 142a21b10 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UTextPropertyTestObject::StaticClass(void)

{
  if (DAT_146b28ce8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"TextPropertyTestObject",&DAT_146b28ce8,FUN_140447710,0x70,
                  0x10000000,0,L"Engine",&LAB_142a22830,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b28ce8;
}



// FUNCTION 142a21bb0 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UStaticMeshSocket::StaticClass(void)

{
  if (DAT_146b28b30 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"StaticMeshSocket",&DAT_146b28b30,FUN_140447710,0x68,0x10000000
                  ,0,L"Engine",&LAB_142a227a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b28b30;
}



// FUNCTION 142a21c60 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UParticleModuleTypeDataGpu::GetPrivateStaticClass(void)

{
  if (DAT_146b28cf8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"TextRenderActor",&DAT_146b28cf8,FUN_140447710,0x460,0x10000000
                  ,0,L"Engine",&LAB_142a22760,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146b28cf8;
}



// FUNCTION 142a21d30 FUN_142a21d30 body=53 status=ok
// SIG undefined FUN_142a21d30(void)

void FUN_142a21d30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_14534d520;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a21d70 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ACharacter::GetPrivateStaticClass(void)

{
  if (DAT_146b28d88 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"TextRenderComponent",&DAT_146b28d88,FUN_142a23800,0x760,
                  0x10000000,0,L"Engine",&LAB_142a22850,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_146b28d88;
}



// FUNCTION 142a21e20 FUN_142a21e20 body=53 status=ok
// SIG undefined FUN_142a21e20(void)

void FUN_142a21e20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_14534d638;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a21e60 FUN_142a21e60 body=53 status=ok
// SIG undefined FUN_142a21e60(void)

void FUN_142a21e60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_14534d750;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a21ea0 FUN_142a21ea0 body=47 status=ok
// SIG undefined FUN_142a21ea0(void)

longlong FUN_142a21ea0(void)

{
  if (DAT_146b28d80 == 0) {
    FUN_141786440(&DAT_146b28d80,&PTR_GetPrivateStaticClass_14534c360);
  }
  return DAT_146b28d80;
}



// FUNCTION 142a21ed0 FUN_142a21ed0 body=47 status=ok
// SIG undefined FUN_142a21ed0(void)

longlong FUN_142a21ed0(void)

{
  if (DAT_146b28d10 == 0) {
    FUN_141786a30(&DAT_146b28d10,&PTR_FUN_14666f180);
  }
  return DAT_146b28d10;
}



// FUNCTION 142a21f00 FUN_142a21f00 body=47 status=ok
// SIG undefined FUN_142a21f00(void)

longlong FUN_142a21f00(void)

{
  if (DAT_146b28d18 == 0) {
    FUN_141786a30(&DAT_146b28d18,&PTR_FUN_14666f200);
  }
  return DAT_146b28d18;
}



// FUNCTION 142a21f30 FUN_142a21f30 body=47 status=ok
// SIG undefined FUN_142a21f30(void)

longlong FUN_142a21f30(void)

{
  if (DAT_146b28d20 == 0) {
    FUN_141786a30(&DAT_146b28d20,&PTR_FUN_14666f240);
  }
  return DAT_146b28d20;
}



// FUNCTION 142a21f60 FUN_142a21f60 body=47 status=ok
// SIG undefined FUN_142a21f60(void)

longlong FUN_142a21f60(void)

{
  if (DAT_146b28d28 == 0) {
    FUN_141786a30(&DAT_146b28d28,&PTR_FUN_14666f2c0);
  }
  return DAT_146b28d28;
}



// FUNCTION 142a21f90 FUN_142a21f90 body=47 status=ok
// SIG undefined FUN_142a21f90(void)

longlong FUN_142a21f90(void)

{
  if (DAT_146b28d30 == 0) {
    FUN_141786a30(&DAT_146b28d30,&PTR_FUN_14666f340);
  }
  return DAT_146b28d30;
}



// FUNCTION 142a21fc0 FUN_142a21fc0 body=47 status=ok
// SIG undefined FUN_142a21fc0(void)

longlong FUN_142a21fc0(void)

{
  if (DAT_146b28d38 == 0) {
    FUN_141786a30(&DAT_146b28d38,&PTR_FUN_14666f3f0);
  }
  return DAT_146b28d38;
}



// FUNCTION 142a21ff0 FUN_142a21ff0 body=47 status=ok
// SIG undefined FUN_142a21ff0(void)

longlong FUN_142a21ff0(void)

{
  if (DAT_146b28d40 == 0) {
    FUN_141786a30(&DAT_146b28d40,&PTR_FUN_14666f430);
  }
  return DAT_146b28d40;
}



// FUNCTION 142a22020 FUN_142a22020 body=47 status=ok
// SIG undefined FUN_142a22020(void)

longlong FUN_142a22020(void)

{
  if (DAT_146b28d48 == 0) {
    FUN_141786a30(&DAT_146b28d48,&PTR_FUN_14666f4b0);
  }
  return DAT_146b28d48;
}



// FUNCTION 142a22050 FUN_142a22050 body=47 status=ok
// SIG undefined FUN_142a22050(void)

longlong FUN_142a22050(void)

{
  if (DAT_146b28d50 == 0) {
    FUN_141786a30(&DAT_146b28d50,&PTR_FUN_14666f530);
  }
  return DAT_146b28d50;
}



// FUNCTION 142a22080 FUN_142a22080 body=47 status=ok
// SIG undefined FUN_142a22080(void)

longlong FUN_142a22080(void)

{
  if (DAT_146b28d58 == 0) {
    FUN_141786a30(&DAT_146b28d58,&PTR_FUN_14666f5b0);
  }
  return DAT_146b28d58;
}



// FUNCTION 142a220b0 FUN_142a220b0 body=47 status=ok
// SIG undefined FUN_142a220b0(void)

longlong FUN_142a220b0(void)

{
  if (DAT_146b28d60 == 0) {
    FUN_141786a30(&DAT_146b28d60,&PTR_FUN_14666f660);
  }
  return DAT_146b28d60;
}



// FUNCTION 142a220e0 FUN_142a220e0 body=47 status=ok
// SIG undefined FUN_142a220e0(void)

longlong FUN_142a220e0(void)

{
  if (DAT_146b28d68 == 0) {
    FUN_141786a30(&DAT_146b28d68,&PTR_FUN_14666f6a0);
  }
  return DAT_146b28d68;
}



// FUNCTION 142a22110 FUN_142a22110 body=47 status=ok
// SIG undefined FUN_142a22110(void)

longlong FUN_142a22110(void)

{
  if (DAT_146b28d70 == 0) {
    FUN_141786a30(&DAT_146b28d70,&PTR_FUN_14666f750);
  }
  return DAT_146b28d70;
}



// FUNCTION 142a22140 FUN_142a22140 body=47 status=ok
// SIG undefined FUN_142a22140(void)

longlong FUN_142a22140(void)

{
  if (DAT_146b28d78 == 0) {
    FUN_141786a30(&DAT_146b28d78,&PTR_FUN_14666f790);
  }
  return DAT_146b28d78;
}



// FUNCTION 142a22170 FUN_142a22170 body=53 status=ok
// SIG undefined FUN_142a22170(void)

void FUN_142a22170(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_14534d868;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a221b0 FUN_142a221b0 body=53 status=ok
// SIG undefined FUN_142a221b0(void)

void FUN_142a221b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_14534d980;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a221f0 FUN_142a221f0 body=162 status=ok
// SIG undefined FUN_142a221f0(void)

longlong FUN_142a221f0(void)

{
  if (DAT_146b28b90 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"StaticWorldBounds",&DAT_146b28b90,FUN_140447710,0x470,
                  0x10000000,0,L"Engine",&LAB_142a22720,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146b28b90;
}



// FUNCTION 142a222c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGameStateBase::GetPrivateStaticClass(void)

{
  if (DAT_146b28bf8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"StereoLayerComponent",&DAT_146b28bf8,
                  StaticRegisterNativesAGameStateBase,0x370,0x10000000,0,L"Engine",&LAB_142a227c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405bc4a0,&LAB_140447700,0);
  }
  return DAT_146b28bf8;
}



// FUNCTION 142a22370 FUN_142a22370 body=47 status=ok
// SIG undefined FUN_142a22370(void)

longlong FUN_142a22370(void)

{
  if (DAT_146b28bf0 == 0) {
    FUN_141786440(&DAT_146b28bf0,&PTR_GetPrivateStaticClass_14534cc30);
  }
  return DAT_146b28bf0;
}



// FUNCTION 142a223a0 FUN_142a223a0 body=47 status=ok
// SIG undefined FUN_142a223a0(void)

longlong FUN_142a223a0(void)

{
  if (DAT_146b28ba8 == 0) {
    FUN_141786a30(&DAT_146b28ba8,&PTR_FUN_14666de20);
  }
  return DAT_146b28ba8;
}



// FUNCTION 142a223d0 FUN_142a223d0 body=47 status=ok
// SIG undefined FUN_142a223d0(void)

longlong FUN_142a223d0(void)

{
  if (DAT_146b28bb0 == 0) {
    FUN_141786a30(&DAT_146b28bb0,&PTR_FUN_14666dea0);
  }
  return DAT_146b28bb0;
}



// FUNCTION 142a22400 FUN_142a22400 body=47 status=ok
// SIG undefined FUN_142a22400(void)

longlong FUN_142a22400(void)

{
  if (DAT_146b28bb8 == 0) {
    FUN_141786a30(&DAT_146b28bb8,&PTR_FUN_14666df20);
  }
  return DAT_146b28bb8;
}



// FUNCTION 142a22430 FUN_142a22430 body=47 status=ok
// SIG undefined FUN_142a22430(void)

longlong FUN_142a22430(void)

{
  if (DAT_146b28bc0 == 0) {
    FUN_141786a30(&DAT_146b28bc0,&PTR_FUN_14666dfa0);
  }
  return DAT_146b28bc0;
}



// FUNCTION 142a22460 FUN_142a22460 body=47 status=ok
// SIG undefined FUN_142a22460(void)

longlong FUN_142a22460(void)

{
  if (DAT_146b28bc8 == 0) {
    FUN_141786a30(&DAT_146b28bc8,&PTR_FUN_14666dfe0);
  }
  return DAT_146b28bc8;
}



// FUNCTION 142a22490 FUN_142a22490 body=47 status=ok
// SIG undefined FUN_142a22490(void)

longlong FUN_142a22490(void)

{
  if (DAT_146b28bd0 == 0) {
    FUN_141786a30(&DAT_146b28bd0,&PTR_FUN_14666e020);
  }
  return DAT_146b28bd0;
}



// FUNCTION 142a224c0 FUN_142a224c0 body=47 status=ok
// SIG undefined FUN_142a224c0(void)

longlong FUN_142a224c0(void)

{
  if (DAT_146b28bd8 == 0) {
    FUN_141786a30(&DAT_146b28bd8,&PTR_FUN_14666e0a0);
  }
  return DAT_146b28bd8;
}



// FUNCTION 142a224f0 FUN_142a224f0 body=47 status=ok
// SIG undefined FUN_142a224f0(void)

longlong FUN_142a224f0(void)

{
  if (DAT_146b28be0 == 0) {
    FUN_141786a30(&DAT_146b28be0,&PTR_FUN_14666e120);
  }
  return DAT_146b28be0;
}



// FUNCTION 142a22520 FUN_142a22520 body=47 status=ok
// SIG undefined FUN_142a22520(void)

longlong FUN_142a22520(void)

{
  if (DAT_146b28be8 == 0) {
    FUN_141786a30(&DAT_146b28be8,&PTR_FUN_14666e1a0);
  }
  return DAT_146b28be8;
}



// FUNCTION 142a22560 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UStereoLayerFunctionLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146b28c28 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"StereoLayerFunctionLibrary",&DAT_146b28c28,
                  StaticRegisterNativesUStereoLayerFunctionLibrary,0x28,0x10000000,0,L"Engine",
                  &LAB_140492340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146b28c28;
}



// FUNCTION 142a22610 FUN_142a22610 body=47 status=ok
// SIG undefined FUN_142a22610(void)

longlong FUN_142a22610(void)

{
  if (DAT_146b28c20 == 0) {
    FUN_141786440(&DAT_146b28c20,&PTR_GetPrivateStaticClass_1453499f0);
  }
  return DAT_146b28c20;
}



// FUNCTION 142a22640 FUN_142a22640 body=47 status=ok
// SIG undefined FUN_142a22640(void)

longlong FUN_142a22640(void)

{
  if (DAT_146b28c00 == 0) {
    FUN_141786a30(&DAT_146b28c00,&PTR_FUN_14666e5d0);
  }
  return DAT_146b28c00;
}



// FUNCTION 142a22670 FUN_142a22670 body=47 status=ok
// SIG undefined FUN_142a22670(void)

longlong FUN_142a22670(void)

{
  if (DAT_146b28c08 == 0) {
    FUN_141786a30(&DAT_146b28c08,&PTR_FUN_14666e610);
  }
  return DAT_146b28c08;
}



// FUNCTION 142a226a0 FUN_142a226a0 body=47 status=ok
// SIG undefined FUN_142a226a0(void)

longlong FUN_142a226a0(void)

{
  if (DAT_146b28c10 == 0) {
    FUN_141786a30(&DAT_146b28c10,&PTR_FUN_14666e810);
  }
  return DAT_146b28c10;
}



// FUNCTION 142a226d0 FUN_142a226d0 body=47 status=ok
// SIG undefined FUN_142a226d0(void)

longlong FUN_142a226d0(void)

{
  if (DAT_146b28c18 == 0) {
    FUN_141786a30(&DAT_146b28c18,&PTR_FUN_14666e850);
  }
  return DAT_146b28c18;
}



// FUNCTION 142a22870 FUN_142a22870 body=187 status=ok
// SIG undefined FUN_142a22870(void)

undefined8 * FUN_142a22870(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 1) = 0x202ffff;
  *param_1 = 0;
  plVar1 = param_1 + 6;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *plVar1 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  iVar2 = *(int *)(param_1 + 3);
  iVar3 = iVar2 + 1;
  *(int *)(param_1 + 3) = iVar3;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar3) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 2);
  }
  *(undefined8 *)(param_1[2] + (longlong)iVar2 * 8) = 0;
  iVar2 = *(int *)(param_1 + 7);
  *(int *)(param_1 + 7) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x3c) < iVar2 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined1 *)((longlong)iVar2 + *plVar1) = 1;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  return param_1;
}



// FUNCTION 142a229c0 FUN_142a229c0 body=77 status=ok
// SIG undefined FUN_142a229c0(void)

void FUN_142a229c0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_2 + 4;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  lVar1 = 2;
  if (param_2 + 5 < puVar2) {
    lVar1 = 0;
  }
  param_2[3] = 0x3f800000;
  if (puVar2 <= param_2 + 5) {
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined4 *)puVar2 = 0;
      puVar2 = (undefined8 *)((longlong)puVar2 + 4);
    }
  }
  return;
}



// FUNCTION 142a22ac0 Construct body=86 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FStringCurve>::Construct(undefined8 param_1,undefined8 *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x78);
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  *param_2 = &PTR__scalar_deleting_destructor__144f4e700;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  return;
}



// FUNCTION 142a22c90 FUN_142a22c90 body=276 status=ok
// SIG undefined FUN_142a22c90(void)

undefined8 FUN_142a22c90(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  
  if (param_4 != 0) {
    puVar7 = (undefined8 *)(param_3 + 0x30);
    do {
      *param_2 = puVar7[-6];
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(puVar7 + -5);
      *(undefined1 *)((longlong)param_2 + 10) = *(undefined1 *)((longlong)puVar7 + -0x26);
      *(undefined1 *)((longlong)param_2 + 0xb) = *(undefined1 *)((longlong)puVar7 + -0x25);
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)puVar7 + -0x24);
      TArray<FName,FDefaultAllocator>::operator=(param_2 + 2,puVar7 + -4);
      TArray<FName,FDefaultAllocator>::operator=(param_2 + 4,puVar7 + -2);
      puVar1 = param_2 + 6;
      if (puVar1 != puVar7) {
        iVar3 = *(int *)(puVar7 + 1);
        _Src = (void *)*puVar7;
        *(int *)(param_2 + 7) = iVar3;
        if ((iVar3 == 0) && (*(int *)((longlong)param_2 + 0x3c) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar1,iVar3);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar3);
        }
      }
      FString::operator=(param_2 + 8,puVar7 + 2);
      *(undefined1 *)(param_2 + 10) = *(undefined1 *)(puVar7 + 4);
      puVar2 = (undefined4 *)((longlong)puVar7 + 0x24);
      uVar4 = *(undefined4 *)(puVar7 + 5);
      uVar5 = *(undefined4 *)((longlong)puVar7 + 0x2c);
      uVar6 = *(undefined4 *)(puVar7 + 6);
      puVar7 = puVar7 + 0xd;
      *(undefined4 *)((longlong)param_2 + 0x54) = *puVar2;
      *(undefined4 *)(param_2 + 0xb) = uVar4;
      *(undefined4 *)((longlong)param_2 + 0x5c) = uVar5;
      *(undefined4 *)(param_2 + 0xc) = uVar6;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xd;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a22db0 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FStaticParameterSet>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1425805a0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a22ee0 Copy body=276 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FStringCurve>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  
  if (param_4 != 0) {
    plVar6 = (longlong *)(param_3 + 0x68);
    do {
      FString::operator=(param_2 + 0x58,plVar6 + -2);
      plVar1 = (longlong *)(param_2 + 0x68);
      if (plVar1 != plVar6) {
        iVar5 = *(int *)(param_2 + 0x70);
        if (iVar5 != 0) {
          plVar4 = (longlong *)(*plVar1 + 8);
          do {
            if (*plVar4 != 0) {
              FMemory::Free();
            }
            plVar4 = plVar4 + 3;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar5 = (int)plVar6[1];
        puVar2 = (undefined4 *)*plVar6;
        *(int *)(param_2 + 0x70) = iVar5;
        if ((iVar5 == 0) && (*(int *)(param_2 + 0x74) == 0)) {
          *(undefined4 *)(param_2 + 0x74) = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar5);
          puVar3 = (undefined4 *)*plVar1;
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar3 = *puVar2;
            FString::FString(puVar3 + 2,puVar2 + 2);
            puVar3 = puVar3 + 6;
            puVar2 = puVar2 + 6;
          }
        }
      }
      plVar6 = plVar6 + 0xf;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x78;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a23000 Destruct body=76 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FStaticMaterialLayersParameter>::Destruct
               (undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FMemory::Free();
  }
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



// FUNCTION 142a23060 Destruct body=70 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FStaticParameterSet>::Destruct
               (undefined8 param_1,longlong *param_2)

{
  TArray<FStaticMaterialLayersParameter,FDefaultAllocator>::
  ~TArray<FStaticMaterialLayersParameter,FDefaultAllocator>(param_2 + 6);
  if (param_2[4] != 0) {
    FMemory::Free();
  }
  if (param_2[2] != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142a230b0 EHorizTextAligment_StaticEnum body=55 status=ok
// SIG undefined EHorizTextAligment_StaticEnum(void)

void EHorizTextAligment_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b28a10 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28a10 = GetStaticEnum(FUN_142a23e60,uVar1,L"EHorizTextAligment");
  }
  return;
}



// FUNCTION 142a230f0 EOpacitySourceMode_StaticEnum body=55 status=ok
// SIG undefined EOpacitySourceMode_StaticEnum(void)

void EOpacitySourceMode_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b289f8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b289f8 = GetStaticEnum(FUN_142a23e90,uVar1,L"EOpacitySourceMode");
  }
  return;
}



// FUNCTION 142a23130 EStereoLayerShape_StaticEnum body=55 status=ok
// SIG undefined EStereoLayerShape_StaticEnum(void)

void EStereoLayerShape_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b28a18 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28a18 = GetStaticEnum(FUN_142a23ec0,uVar1,L"EStereoLayerShape");
  }
  return;
}



// FUNCTION 142a23170 EStereoLayerType_StaticEnum body=55 status=ok
// SIG undefined EStereoLayerType_StaticEnum(void)

void EStereoLayerType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b28a20 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28a20 = GetStaticEnum(FUN_142a23ef0,uVar1,L"EStereoLayerType");
  }
  return;
}



// FUNCTION 142a231b0 ESubUVBoundingVertexCount_StaticEnum body=55 status=ok
// SIG undefined ESubUVBoundingVertexCount_StaticEnum(void)

void ESubUVBoundingVertexCount_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b28a00 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28a00 = GetStaticEnum(FUN_142a23f20,uVar1,L"ESubUVBoundingVertexCount");
  }
  return;
}



// FUNCTION 142a231f0 EVerticalTextAligment_StaticEnum body=55 status=ok
// SIG undefined EVerticalTextAligment_StaticEnum(void)

void EVerticalTextAligment_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b28a08 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28a08 = GetStaticEnum(FUN_142a23f50,uVar1,L"EVerticalTextAligment");
  }
  return;
}



// FUNCTION 142a23230 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AAfrPlayerState::GetPrivateStaticClass(void)

{
  if (DAT_146b28ac0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"StaticMeshActor",&DAT_146b28ac0,FUN_142a23740,0x468,0x10000000
                  ,0,L"Engine",&LAB_142a22700,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146b28ac0;
}



// FUNCTION 142a232e0 FUN_142a232e0 body=168 status=ok
// SIG undefined FUN_142a232e0(void)

longlong FUN_142a232e0(void)

{
  if (DAT_146b28b20 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"StaticMeshComponent",&DAT_146b28b20,FUN_142a23770,0x7b0,
                  0x10000000,0x200000000000,L"Engine",&LAB_142a22780,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1423c80f0,thunk_FUN_1429bed90,
                  &LAB_140447700,0);
  }
  return DAT_146b28b20;
}



// FUNCTION 142a23390 Get_Z_Construct_UScriptStruct_FKTaperedCapsuleElem_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FKTaperedCapsuleElem_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FKTaperedCapsuleElem_CRC(void)

{
  return 0xf589b284;
}



// FUNCTION 142a233a0 FUN_142a233a0 body=6 status=ok
// SIG undefined FUN_142a233a0(void)

undefined8 FUN_142a233a0(void)

{
  return 0xb4747c9d;
}



// FUNCTION 142a233b0 Get_Z_Construct_UScriptStruct_FStaticComponentMaskParameter_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FStaticComponentMaskParameter_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FStaticComponentMaskParameter_CRC(void)

{
  return 0xa4dfc52;
}



// FUNCTION 142a233c0 Get_Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_CRC(void)

{
  return 0x1ff9652f;
}



// FUNCTION 142a233d0 Get_Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_CRC(void)

{
  return 0x64b368dc;
}



// FUNCTION 142a233e0 Get_Z_Construct_UScriptStruct_FStaticParameterSet_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FStaticParameterSet_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FStaticParameterSet_CRC(void)

{
  return 0xf238e41f;
}



// FUNCTION 142a233f0 Get_Z_Construct_UScriptStruct_FStaticSwitchParameter_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FStaticSwitchParameter_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FStaticSwitchParameter_CRC(void)

{
  return 0x81d699fc;
}



// FUNCTION 142a23400 Get_Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_CRC(void)

{
  return 0x5b9744b5;
}



// FUNCTION 142a23410 FUN_142a23410 body=6 status=ok
// SIG undefined FUN_142a23410(void)

undefined8 FUN_142a23410(void)

{
  return 0x38b7f650;
}



// FUNCTION 142a23420 Get_Z_Construct_UScriptStruct_FStringCurveKey_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FStringCurveKey_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FStringCurveKey_CRC(void)

{
  return 0x88582fd8;
}



// FUNCTION 142a23430 Get_Z_Construct_UScriptStruct_FStringCurve_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FStringCurve_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FStringCurve_CRC(void)

{
  return 0x354d89ad;
}



// FUNCTION 142a23440 Get_Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_CRC(void)

{
  return 0x5ebed647;
}



// FUNCTION 142a23450 Identical body=29 status=ok
// SIG undefined Identical(void)

undefined1
UScriptStruct::TCppStructOps<FStringCurveKey>::Identical
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FStringCurveKey::operator==(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 142a23580 Serialize body=112 status=ok
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
  FUN_1423defc0(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a235f0 Serialize body=112 status=ok
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
  UStaticMeshSocket::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a23660 Serialize body=112 status=ok
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
  UStringTable::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a236d0 Serialize body=112 status=ok
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
  FUN_1426a84b0(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a23740 FUN_142a23740 body=34 status=ok
// SIG undefined FUN_142a23740(void)

void FUN_142a23740(void)

{
  undefined8 uVar1;
  
  uVar1 = AAfrPlayerState::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetMobility_14534d278,1);
  return;
}



// FUNCTION 142a23770 FUN_142a23770 body=34 status=ok
// SIG undefined FUN_142a23770(void)

void FUN_142a23770(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142a232e0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetLocalBounds_14534d4c0,6);
  return;
}



// FUNCTION 142a237a0 StaticRegisterNativesAGameStateBase body=34 status=ok
// SIG undefined StaticRegisterNativesAGameStateBase(void)

void AGameStateBase::StaticRegisterNativesAGameStateBase(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetPriority_14534db20,9);
  return;
}



// FUNCTION 142a237d0 StaticRegisterNativesUStereoLayerFunctionLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUStereoLayerFunctionLibrary(void)

void UStereoLayerFunctionLibrary::StaticRegisterNativesUStereoLayerFunctionLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_EnableAutoLoadingSplashScreen_14534dbb0,4);
  return;
}



// FUNCTION 142a23800 FUN_142a23800 body=34 status=ok
// SIG undefined FUN_142a23800(void)

void FUN_142a23800(void)

{
  undefined8 uVar1;
  
  uVar1 = ACharacter::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetTextLocalSize_14534e140,0xe);
  return;
}



// FUNCTION 142a23830 FUN_142a23830 body=82 status=ok
// SIG undefined FUN_142a23830(void)

void FUN_142a23830(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28cc0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FKTaperedCapsuleElem_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28cc0 = GetStaticStruct(FUN_142a23f80,uVar2,L"KTaperedCapsuleElem",0x88,uVar1);
  }
  return;
}



// FUNCTION 142a23890 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPaintedVertex::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28ad8 == 0) {
    uVar1 = FUN_142a233a0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28ad8 = GetStaticStruct(FUN_142a23fb0,uVar2,L"PaintedVertex",0x30,uVar1);
  }
  return;
}



// FUNCTION 142a238f0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FStaticComponentMaskParameter::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28b68 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FStaticComponentMaskParameter_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28b68 = GetStaticStruct(FUN_142a23fe0,uVar2,L"StaticComponentMaskParameter",0x28,uVar1);
  }
  return;
}



// FUNCTION 142a23950 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FStaticMaterialLayersParameter::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28b48 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28b48 = GetStaticStruct(FUN_142a24010,uVar2,L"StaticMaterialLayersParameter",0x68,uVar1)
    ;
  }
  return;
}



// FUNCTION 142a239b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FRootMotionSource_MoveToForce::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28ac8 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28ac8 = GetStaticStruct(FUN_142a24040,uVar2,L"StaticMeshComponentLODInfo",0xc0,uVar1);
  }
  return;
}



// FUNCTION 142a23a10 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FStaticParameterSet::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28b38 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FStaticParameterSet_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28b38 = GetStaticStruct(FUN_142a24070,uVar2,L"StaticParameterSet",0x40,uVar1);
  }
  return;
}



// FUNCTION 142a23a70 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FStaticSwitchParameter::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28b78 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FStaticSwitchParameter_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28b78 = GetStaticStruct(FUN_142a240a0,uVar2,L"StaticSwitchParameter",0x28,uVar1);
  }
  return;
}



// FUNCTION 142a23ad0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FStaticTerrainLayerWeightParameter::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28b58 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28b58 =
         GetStaticStruct(FUN_142a240d0,uVar2,L"StaticTerrainLayerWeightParameter",0x30,uVar1);
  }
  return;
}



// FUNCTION 142a23b30 FUN_142a23b30 body=82 status=ok
// SIG undefined FUN_142a23b30(void)

void FUN_142a23b30(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28c30 == 0) {
    uVar1 = FUN_142a23410();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28c30 = GetStaticStruct(FUN_142a24100,uVar2,L"StreamingLevelRemapData",0x10,uVar1);
  }
  return;
}



// FUNCTION 142a23b90 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FStringCurve::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28c50 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FStringCurve_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28c50 = GetStaticStruct(FUN_142a24130,uVar2,L"StringCurve",0x78,uVar1);
  }
  return;
}



// FUNCTION 142a23bf0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FStringCurveKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28c60 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FStringCurveKey_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28c60 = GetStaticStruct(FUN_142a24160,uVar2,L"StringCurveKey",0x18,uVar1);
  }
  return;
}



// FUNCTION 142a23c50 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSubsurfaceProfileStruct::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b28c80 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b28c80 = GetStaticStruct(FUN_142a24190,uVar2,L"SubsurfaceProfileStruct",0x50,uVar1);
  }
  return;
}



// FUNCTION 142a23cb0 FUN_142a23cb0 body=47 status=ok
// SIG undefined FUN_142a23cb0(void)

longlong FUN_142a23cb0(void)

{
  if (DAT_146b28b88 == 0) {
    FUN_141786440(&DAT_146b28b88,&PTR_FUN_14534c650);
  }
  return DAT_146b28b88;
}



// FUNCTION 142a23ce0 FUN_142a23ce0 body=47 status=ok
// SIG undefined FUN_142a23ce0(void)

longlong FUN_142a23ce0(void)

{
  if (DAT_146b28cd0 == 0) {
    FUN_141786440(&DAT_146b28cd0,&PTR_GetPrivateStaticClass_14534b160);
  }
  return DAT_146b28cd0;
}



// FUNCTION 142a23d10 FUN_142a23d10 body=47 status=ok
// SIG undefined FUN_142a23d10(void)

longlong FUN_142a23d10(void)

{
  if (DAT_146b28cf0 == 0) {
    FUN_141786440(&DAT_146b28cf0,&PTR_GetPrivateStaticClass_14534b600);
  }
  return DAT_146b28cf0;
}



// FUNCTION 142a23d40 FUN_142a23d40 body=47 status=ok
// SIG undefined FUN_142a23d40(void)

longlong FUN_142a23d40(void)

{
  if (DAT_146b28b28 == 0) {
    FUN_141786440(&DAT_146b28b28,&PTR_StaticClass_14534b3d0);
  }
  return DAT_146b28b28;
}



// FUNCTION 142a23d70 FUN_142a23d70 body=47 status=ok
// SIG undefined FUN_142a23d70(void)

longlong FUN_142a23d70(void)

{
  if (DAT_146b28c40 == 0) {
    FUN_141786440(&DAT_146b28c40,&PTR_GetPrivateStaticClass_145349c70);
  }
  return DAT_146b28c40;
}



// FUNCTION 142a23da0 FUN_142a23da0 body=47 status=ok
// SIG undefined FUN_142a23da0(void)

longlong FUN_142a23da0(void)

{
  if (DAT_146b28c70 == 0) {
    FUN_141786440(&DAT_146b28c70,&PTR_GetPrivateStaticClass_145349ef0);
  }
  return DAT_146b28c70;
}



// FUNCTION 142a23dd0 FUN_142a23dd0 body=47 status=ok
// SIG undefined FUN_142a23dd0(void)

longlong FUN_142a23dd0(void)

{
  if (DAT_146b28cb0 == 0) {
    FUN_141786440(&DAT_146b28cb0,&PTR_StaticClass_14534a9c0);
  }
  return DAT_146b28cb0;
}



// FUNCTION 142a23e00 FUN_142a23e00 body=47 status=ok
// SIG undefined FUN_142a23e00(void)

longlong FUN_142a23e00(void)

{
  if (DAT_146b28c90 == 0) {
    FUN_141786440(&DAT_146b28c90,&PTR_StaticClass_14534a360);
  }
  return DAT_146b28c90;
}



// FUNCTION 142a23e30 FUN_142a23e30 body=47 status=ok
// SIG undefined FUN_142a23e30(void)

longlong FUN_142a23e30(void)

{
  if (DAT_146b28ce0 == 0) {
    FUN_141786440(&DAT_146b28ce0,&PTR_StaticClass_14534b310);
  }
  return DAT_146b28ce0;
}



// FUNCTION 142a23e60 FUN_142a23e60 body=47 status=ok
// SIG undefined FUN_142a23e60(void)

longlong FUN_142a23e60(void)

{
  if (DAT_146b28d08 == 0) {
    FUN_1417866a0(&DAT_146b28d08,&PTR_Z_Construct_UPackage__Script_Engine_14666fca0);
  }
  return DAT_146b28d08;
}



// FUNCTION 142a23e90 FUN_142a23e90 body=47 status=ok
// SIG undefined FUN_142a23e90(void)

longlong FUN_142a23e90(void)

{
  if (DAT_146b28ca0 == 0) {
    FUN_1417866a0(&DAT_146b28ca0,&PTR_Z_Construct_UPackage__Script_Engine_14666fbb0);
  }
  return DAT_146b28ca0;
}



// FUNCTION 142a23ec0 FUN_142a23ec0 body=47 status=ok
// SIG undefined FUN_142a23ec0(void)

longlong FUN_142a23ec0(void)

{
  if (DAT_146b28b98 == 0) {
    FUN_1417866a0(&DAT_146b28b98,&PTR_Z_Construct_UPackage__Script_Engine_14666fb10);
  }
  return DAT_146b28b98;
}



// FUNCTION 142a23ef0 FUN_142a23ef0 body=47 status=ok
// SIG undefined FUN_142a23ef0(void)

longlong FUN_142a23ef0(void)

{
  if (DAT_146b28ba0 == 0) {
    FUN_1417866a0(&DAT_146b28ba0,&PTR_Z_Construct_UPackage__Script_Engine_14666fb60);
  }
  return DAT_146b28ba0;
}



// FUNCTION 142a23f20 FUN_142a23f20 body=47 status=ok
// SIG undefined FUN_142a23f20(void)

longlong FUN_142a23f20(void)

{
  if (DAT_146b28ca8 == 0) {
    FUN_1417866a0(&DAT_146b28ca8,&PTR_Z_Construct_UPackage__Script_Engine_14666fc00);
  }
  return DAT_146b28ca8;
}



// FUNCTION 142a23f50 FUN_142a23f50 body=47 status=ok
// SIG undefined FUN_142a23f50(void)

longlong FUN_142a23f50(void)

{
  if (DAT_146b28d00 == 0) {
    FUN_1417866a0(&DAT_146b28d00,&PTR_Z_Construct_UPackage__Script_Engine_14666fc50);
  }
  return DAT_146b28d00;
}



// FUNCTION 142a23f80 FUN_142a23f80 body=47 status=ok
// SIG undefined FUN_142a23f80(void)

longlong FUN_142a23f80(void)

{
  if (DAT_146b28cc8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28cc8,&PTR_Z_Construct_UPackage__Script_Engine_14666ef60);
  }
  return DAT_146b28cc8;
}



// FUNCTION 142a23fb0 FUN_142a23fb0 body=47 status=ok
// SIG undefined FUN_142a23fb0(void)

longlong FUN_142a23fb0(void)

{
  if (DAT_146b28ae0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28ae0,&PTR_Z_Construct_UPackage__Script_Engine_14666c5e0);
  }
  return DAT_146b28ae0;
}



// FUNCTION 142a23fe0 FUN_142a23fe0 body=47 status=ok
// SIG undefined FUN_142a23fe0(void)

longlong FUN_142a23fe0(void)

{
  if (DAT_146b28b70 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28b70,&PTR_Z_Construct_UPackage__Script_Engine_14666db70);
  }
  return DAT_146b28b70;
}



// FUNCTION 142a24010 FUN_142a24010 body=47 status=ok
// SIG undefined FUN_142a24010(void)

longlong FUN_142a24010(void)

{
  if (DAT_146b28b50 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28b50,&PTR_Z_Construct_UPackage__Script_Engine_14666d620);
  }
  return DAT_146b28b50;
}



// FUNCTION 142a24040 FUN_142a24040 body=47 status=ok
// SIG undefined FUN_142a24040(void)

longlong FUN_142a24040(void)

{
  if (DAT_146b28ad0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28ad0,&PTR_Z_Construct_UPackage__Script_Engine_14666c4a0);
  }
  return DAT_146b28ad0;
}



// FUNCTION 142a24070 FUN_142a24070 body=47 status=ok
// SIG undefined FUN_142a24070(void)

longlong FUN_142a24070(void)

{
  if (DAT_146b28b40 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28b40,&PTR_Z_Construct_UPackage__Script_Engine_14666d460);
  }
  return DAT_146b28b40;
}



// FUNCTION 142a240a0 FUN_142a240a0 body=47 status=ok
// SIG undefined FUN_142a240a0(void)

longlong FUN_142a240a0(void)

{
  if (DAT_146b28b80 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28b80,&PTR_Z_Construct_UPackage__Script_Engine_14666dd70);
  }
  return DAT_146b28b80;
}



// FUNCTION 142a240d0 FUN_142a240d0 body=47 status=ok
// SIG undefined FUN_142a240d0(void)

longlong FUN_142a240d0(void)

{
  if (DAT_146b28b60 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28b60,&PTR_Z_Construct_UPackage__Script_Engine_14666d810);
  }
  return DAT_146b28b60;
}



// FUNCTION 142a24100 FUN_142a24100 body=47 status=ok
// SIG undefined FUN_142a24100(void)

longlong FUN_142a24100(void)

{
  if (DAT_146b28c38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28c38,&PTR_Z_Construct_UPackage__Script_Engine_14666e890);
  }
  return DAT_146b28c38;
}



// FUNCTION 142a24130 FUN_142a24130 body=47 status=ok
// SIG undefined FUN_142a24130(void)

longlong FUN_142a24130(void)

{
  if (DAT_146b28c58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28c58,&PTR_Z_Construct_UPackage__Script_Engine_14666e990);
  }
  return DAT_146b28c58;
}



// FUNCTION 142a24160 FUN_142a24160 body=47 status=ok
// SIG undefined FUN_142a24160(void)

longlong FUN_142a24160(void)

{
  if (DAT_146b28c68 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28c68,&PTR_Z_Construct_UPackage__Script_Engine_14666ea10);
  }
  return DAT_146b28c68;
}



// FUNCTION 142a24190 FUN_142a24190 body=47 status=ok
// SIG undefined FUN_142a24190(void)

longlong FUN_142a24190(void)

{
  if (DAT_146b28c88 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b28c88,&PTR_Z_Construct_UPackage__Script_Engine_14666ec20);
  }
  return DAT_146b28c88;
}



// FUNCTION 142a241c0 FUN_142a241c0 body=114 status=ok
// SIG undefined FUN_142a241c0(void)

void FUN_142a241c0(undefined8 param_1,longlong param_2)

{
  int local_res10 [6];
  
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
  FUN_1428384a0(local_res10[0] != 0);
  return;
}



// FUNCTION 142a24240 FUN_142a24240 body=224 status=ok
// SIG undefined FUN_142a24240(void)

void FUN_142a24240(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = local_28;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
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
  FUN_1423d28d0(param_1,puVar1,puVar2);
  return;
}



// FUNCTION 142a24350 execGetTextLocalSize body=60 status=ok
// SIG undefined execGetTextLocalSize(void)

void UTextRenderComponent::execGetTextLocalSize
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)GetTextLocalSize(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a24390 FUN_142a24390 body=60 status=ok
// SIG undefined FUN_142a24390(void)

void FUN_142a24390(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1423d5ea0(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142a24440 FUN_142a24440 body=204 status=ok
// SIG undefined FUN_142a24440(void)

void FUN_142a24440(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar5 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1423d97c0(param_1,puVar5);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 142a24530 FUN_142a24530 body=128 status=ok
// SIG undefined FUN_142a24530(void)

void FUN_142a24530(undefined8 param_1,longlong param_2)

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
  FUN_1423da3d0(param_1,local_res10);
  return;
}



// FUNCTION 142a245b0 FUN_142a245b0 body=123 status=ok
// SIG undefined FUN_142a245b0(void)

void FUN_142a245b0(undefined8 param_1,longlong param_2)

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
  FUN_1423df550(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a24630 FUN_142a24630 body=128 status=ok
// SIG undefined FUN_142a24630(void)

void FUN_142a24630(undefined8 param_1,longlong param_2)

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
  FUN_1423df7d0(param_1,local_res10);
  return;
}



// FUNCTION 142a246b0 FUN_142a246b0 body=126 status=ok
// SIG undefined FUN_142a246b0(void)

void FUN_142a246b0(undefined8 param_1,longlong param_2)

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
  FUN_1423df820(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a24730 FUN_142a24730 body=123 status=ok
// SIG undefined FUN_142a24730(void)

void FUN_142a24730(undefined8 param_1,longlong param_2)

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
  FUN_1423df860(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a247b0 FUN_142a247b0 body=118 status=ok
// SIG undefined FUN_142a247b0(void)

void FUN_142a247b0(undefined8 param_1,longlong param_2)

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
  FUN_1423df890(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a24830 FUN_142a24830 body=118 status=ok
// SIG undefined FUN_142a24830(void)

void FUN_142a24830(undefined8 param_1,longlong param_2)

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
  FUN_142827000(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a248b0 FUN_142a248b0 body=126 status=ok
// SIG undefined FUN_142a248b0(void)

void FUN_142a248b0(undefined8 param_1,longlong param_2)

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
  FUN_1423e04a0(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a24930 FUN_142a24930 body=113 status=ok
// SIG undefined FUN_142a24930(void)

void FUN_142a24930(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1423e04c0(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a249b0 FUN_142a249b0 body=130 status=ok
// SIG undefined FUN_142a249b0(void)

void FUN_142a249b0(undefined8 param_1,longlong param_2)

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
  FUN_1423e0500(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 142a24a40 execSetSplashScreen body=376 status=ok
// SIG undefined execSetSplashScreen(void)

void UStereoLayerFunctionLibrary::execSetSplashScreen(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [2];
  int local_res20 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [2];
  
  local_28 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
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
  FUN_142842d90(local_28,local_18[0],local_20,bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 142a24bc0 FUN_142a24bc0 body=148 status=ok
// SIG undefined FUN_142a24bc0(void)

void FUN_142a24bc0(undefined8 param_1,longlong param_2)

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
  FUN_1423e0c60(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a24c60 FUN_142a24c60 body=128 status=ok
// SIG undefined FUN_142a24c60(void)

void FUN_142a24c60(undefined8 param_1,longlong param_2)

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
  FUN_1423e0ce0(param_1,local_res10);
  return;
}



// FUNCTION 142a24ce0 FUN_142a24ce0 body=112 status=ok
// SIG undefined FUN_142a24ce0(void)

void FUN_142a24ce0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1423e0d10(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a24d50 FUN_142a24d50 body=128 status=ok
// SIG undefined FUN_142a24d50(void)

void FUN_142a24d50(undefined8 param_1,longlong param_2)

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
  FUN_1423e0d40(param_1,local_res10);
  return;
}



// FUNCTION 142a24dd0 execSetUVRect body=131 status=ok
// SIG undefined execSetUVRect(void)

void UStereoLayerComponent::execSetUVRect(undefined8 param_1,longlong param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_18 = local_38;
  FUN_1423e0d60(param_1,&local_28);
  return;
}



// FUNCTION 142a24e60 FUN_142a24e60 body=123 status=ok
// SIG undefined FUN_142a24e60(void)

void FUN_142a24e60(undefined8 param_1,longlong param_2)

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
  FUN_1423e0dc0(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a24ee0 FUN_142a24ee0 body=118 status=ok
// SIG undefined FUN_142a24ee0(void)

void FUN_142a24ee0(undefined8 param_1,longlong param_2)

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
  FUN_1423e0df0(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a24f60 FUN_142a24f60 body=123 status=ok
// SIG undefined FUN_142a24f60(void)

void FUN_142a24f60(undefined8 param_1,longlong param_2)

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
  FUN_1423e0e20(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a24fe0 FUN_142a24fe0 body=123 status=ok
// SIG undefined FUN_142a24fe0(void)

void FUN_142a24fe0(undefined8 param_1,longlong param_2)

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
  FUN_1423e0e50(param_1,local_res10[0]);
  return;
}


