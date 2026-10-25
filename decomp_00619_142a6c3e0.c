// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142a6c3e0 EClothingWindMethod_StaticEnum body=85 status=ok
// SIG undefined EClothingWindMethod_StaticEnum(void)

void EClothingWindMethod_StaticEnum(void)

{
  if (DAT_146b29be0 == 0) {
    if (DAT_146b29da0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b29da0,&PTR_s__Script_ClothingSystemRuntime_145369e90);
    }
    DAT_146b29be0 = GetStaticEnum(FUN_142a6ca40,DAT_146b29da0,L"EClothingWindMethod");
  }
  return;
}



// FUNCTION 142a6c440 FUN_142a6c440 body=6 status=ok
// SIG undefined FUN_142a6c440(void)

undefined8 FUN_142a6c440(void)

{
  return 0x687b37ea;
}



// FUNCTION 142a6c450 Get_Z_Construct_UScriptStruct_FClothConstraintSetup_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FClothConstraintSetup_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FClothConstraintSetup_CRC(void)

{
  return 0xda572def;
}



// FUNCTION 142a6c460 Get_Z_Construct_UScriptStruct_FClothLODData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FClothLODData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FClothLODData_CRC(void)

{
  return 0xfdbea825;
}



// FUNCTION 142a6c470 Get_Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_CRC(void)

{
  return 0xe7646a59;
}



// FUNCTION 142a6c480 Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_CRC(void)

{
  return 0xe24dbec7;
}



// FUNCTION 142a6c490 Get_Z_Construct_UScriptStruct_FClothVertBoneData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FClothVertBoneData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FClothVertBoneData_CRC(void)

{
  return 0x316e4b16;
}



// FUNCTION 142a6c4a0 MaskTarget_PhysMesh_StaticEnum body=85 status=ok
// SIG undefined MaskTarget_PhysMesh_StaticEnum(void)

void MaskTarget_PhysMesh_StaticEnum(void)

{
  if (DAT_146b29be8 == 0) {
    if (DAT_146b29da0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b29da0,&PTR_s__Script_ClothingSystemRuntime_145369e90);
    }
    DAT_146b29be8 = GetStaticEnum(FUN_142a6ca70,DAT_146b29da0,L"MaskTarget_PhysMesh");
  }
  return;
}



// FUNCTION 142a6c500 ResizeForCopy body=124 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FBatchedLine,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x34,0);
    iVar3 = (int)(uVar1 / 0x34);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x34,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 142a6c590 FUN_142a6c590 body=125 status=ok
// SIG undefined FUN_142a6c590(void)

undefined1 FUN_142a6c590(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FClothLODData::StaticStruct();
  if ((*(byte *)(param_2 + 0x2a) & 0x20) == 0) {
    (**(code **)(*plVar2 + 0x2a0))(plVar2,param_2,param_1,plVar2,0,0);
  }
  uVar1 = FUN_14271fa70(param_2,param_1 + 0xd8);
  FUN_14271fa70(uVar1,param_1 + 0xe8);
  FUN_142a63860(param_1,param_2);
  return 1;
}



// FUNCTION 142a6c610 Serialize body=112 status=ok
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
  FUN_142a65730(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142a6c680 StaticRegisterNativesUClothingSimulationInteractorNv body=34 status=ok
// SIG undefined StaticRegisterNativesUClothingSimulationInteractorNv(void)

void UClothingSimulationInteractorNv::StaticRegisterNativesUClothingSimulationInteractorNv(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_DisableGravityOverride_145369e50,4);
  return;
}



// FUNCTION 142a6c6b0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FPL_SpecializeFootIk::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b29ce0 == 0) {
    if (DAT_146b29da0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b29da0,&PTR_s__Script_ClothingSystemRuntime_145369e90);
    }
    lVar1 = DAT_146b29da0;
    uVar2 = FUN_142a6c440();
    DAT_146b29ce0 = GetStaticStruct(FUN_142a6caa0,lVar1,L"ClothConfig",0xc4,uVar2);
  }
  return;
}



// FUNCTION 142a6c730 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FClothConstraintSetup::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b29cf0 == 0) {
    if (DAT_146b29da0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b29da0,&PTR_s__Script_ClothingSystemRuntime_145369e90);
    }
    lVar1 = DAT_146b29da0;
    uVar2 = Get_Z_Construct_UScriptStruct_FClothConstraintSetup_CRC();
    DAT_146b29cf0 = GetStaticStruct(FUN_142a6cad0,lVar1,L"ClothConstraintSetup",0x10,uVar2);
  }
  return;
}



// FUNCTION 142a6c7b0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FClothLODData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b29d00 == 0) {
    if (DAT_146b29da0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b29da0,&PTR_s__Script_ClothingSystemRuntime_145369e90);
    }
    lVar1 = DAT_146b29da0;
    uVar2 = Get_Z_Construct_UScriptStruct_FClothLODData_CRC();
    DAT_146b29d00 = GetStaticStruct(FUN_142a6cb00,lVar1,L"ClothLODData",0x108,uVar2);
  }
  return;
}



// FUNCTION 142a6c830 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FClothParameterMask_PhysMesh::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b29d30 == 0) {
    if (DAT_146b29da0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b29da0,&PTR_s__Script_ClothingSystemRuntime_145369e90);
    }
    lVar1 = DAT_146b29da0;
    uVar2 = Get_Z_Construct_UScriptStruct_FClothParameterMask_PhysMesh_CRC();
    DAT_146b29d30 = GetStaticStruct(FUN_142a6cb30,lVar1,L"ClothParameterMask_PhysMesh",0x30,uVar2);
  }
  return;
}



// FUNCTION 142a6c8b0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FClothPhysicalMeshData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b29d10 == 0) {
    if (DAT_146b29da0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b29da0,&PTR_s__Script_ClothingSystemRuntime_145369e90);
    }
    lVar1 = DAT_146b29da0;
    uVar2 = Get_Z_Construct_UScriptStruct_FClothPhysicalMeshData_CRC();
    DAT_146b29d10 = GetStaticStruct(FUN_142a6cb60,lVar1,L"ClothPhysicalMeshData",0xa8,uVar2);
  }
  return;
}



// FUNCTION 142a6c930 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FClothVertBoneData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b29d20 == 0) {
    if (DAT_146b29da0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b29da0,&PTR_s__Script_ClothingSystemRuntime_145369e90);
    }
    lVar1 = DAT_146b29da0;
    uVar2 = Get_Z_Construct_UScriptStruct_FClothVertBoneData_CRC();
    DAT_146b29d20 = GetStaticStruct(FUN_142a6cb90,lVar1,L"ClothVertBoneData",0x34,uVar2);
  }
  return;
}



// FUNCTION 142a6c9b0 FUN_142a6c9b0 body=47 status=ok
// SIG undefined FUN_142a6c9b0(void)

longlong FUN_142a6c9b0(void)

{
  if (DAT_146b29d50 == 0) {
    FUN_141786440(&DAT_146b29d50,&PTR_GetPrivateStaticClass_145368b30);
  }
  return DAT_146b29d50;
}



// FUNCTION 142a6c9e0 FUN_142a6c9e0 body=47 status=ok
// SIG undefined FUN_142a6c9e0(void)

longlong FUN_142a6c9e0(void)

{
  if (DAT_146b29d40 == 0) {
    FUN_141786440(&DAT_146b29d40,&PTR_StaticClass_145368980);
  }
  return DAT_146b29d40;
}



// FUNCTION 142a6ca10 FUN_142a6ca10 body=47 status=ok
// SIG undefined FUN_142a6ca10(void)

longlong FUN_142a6ca10(void)

{
  if (DAT_146b29d60 == 0) {
    FUN_141786440(&DAT_146b29d60,&PTR_GetPrivateStaticClass_145368cd0);
  }
  return DAT_146b29d60;
}



// FUNCTION 142a6ca40 FUN_142a6ca40 body=47 status=ok
// SIG undefined FUN_142a6ca40(void)

longlong FUN_142a6ca40(void)

{
  if (DAT_146b29cd0 == 0) {
    FUN_1417866a0(&DAT_146b29cd0,&PTR_FUN_14667d810);
  }
  return DAT_146b29cd0;
}



// FUNCTION 142a6ca70 FUN_142a6ca70 body=47 status=ok
// SIG undefined FUN_142a6ca70(void)

longlong FUN_142a6ca70(void)

{
  if (DAT_146b29cd8 == 0) {
    FUN_1417866a0(&DAT_146b29cd8,&PTR_FUN_14667d860);
  }
  return DAT_146b29cd8;
}



// FUNCTION 142a6caa0 FUN_142a6caa0 body=47 status=ok
// SIG undefined FUN_142a6caa0(void)

longlong FUN_142a6caa0(void)

{
  if (DAT_146b29ce8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b29ce8,&PTR_FUN_14667c830);
  }
  return DAT_146b29ce8;
}



// FUNCTION 142a6cad0 FUN_142a6cad0 body=47 status=ok
// SIG undefined FUN_142a6cad0(void)

longlong FUN_142a6cad0(void)

{
  if (DAT_146b29cf8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b29cf8,&PTR_FUN_14667c960);
  }
  return DAT_146b29cf8;
}



// FUNCTION 142a6cb00 FUN_142a6cb00 body=47 status=ok
// SIG undefined FUN_142a6cb00(void)

longlong FUN_142a6cb00(void)

{
  if (DAT_146b29d08 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b29d08,&PTR_FUN_14667ca30);
  }
  return DAT_146b29d08;
}



// FUNCTION 142a6cb30 FUN_142a6cb30 body=47 status=ok
// SIG undefined FUN_142a6cb30(void)

longlong FUN_142a6cb30(void)

{
  if (DAT_146b29d38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b29d38,&PTR_FUN_14667d2a0);
  }
  return DAT_146b29d38;
}



// FUNCTION 142a6cb60 FUN_142a6cb60 body=47 status=ok
// SIG undefined FUN_142a6cb60(void)

longlong FUN_142a6cb60(void)

{
  if (DAT_146b29d18 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b29d18,&PTR_FUN_14667cf70);
  }
  return DAT_146b29d18;
}



// FUNCTION 142a6cb90 FUN_142a6cb90 body=47 status=ok
// SIG undefined FUN_142a6cb90(void)

longlong FUN_142a6cb90(void)

{
  if (DAT_146b29d28 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b29d28,&PTR_FUN_14667d060);
  }
  return DAT_146b29d28;
}



// FUNCTION 142a6cbe0 execEnableGravityOverride body=138 status=ok
// SIG undefined execEnableGravityOverride(void)

void UClothingSimulationInteractorNv::execEnableGravityOverride(undefined8 param_1,longlong param_2)

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
  EnableGravityOverride(param_1,puVar1);
  return;
}



// FUNCTION 142a6cc70 FUN_142a6cc70 body=123 status=ok
// SIG undefined FUN_142a6cc70(void)

void FUN_142a6cc70(undefined8 param_1,longlong param_2)

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
  FUN_142a65770(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a6ccf0 FUN_142a6ccf0 body=123 status=ok
// SIG undefined FUN_142a6ccf0(void)

void FUN_142a6ccf0(undefined8 param_1,longlong param_2)

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
  FUN_142a65860(param_1,local_res10[0]);
  return;
}



// FUNCTION 142a6cd70 FUN_142a6cd70 body=53 status=ok
// SIG undefined FUN_142a6cd70(void)

void FUN_142a6cd70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_14536a4e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a6cdb0 FUN_142a6cdb0 body=53 status=ok
// SIG undefined FUN_142a6cdb0(void)

void FUN_142a6cdb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x98;
    *puVar1 = &PTR_FUN_14536a600;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a6cdf0 FUN_142a6cdf0 body=47 status=ok
// SIG undefined FUN_142a6cdf0(void)

longlong FUN_142a6cdf0(void)

{
  if (DAT_146b29db0 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146b29db0,&PTR_s__Script_SessionMessages_14536a4c0);
  }
  return DAT_146b29db0;
}



// FUNCTION 142a6ce20 Construct body=99 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FSessionServicePong>::Construct(undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x98);
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  return;
}



// FUNCTION 142a6ce90 Copy body=124 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FSessionServiceLog>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar5 = (undefined4 *)(param_2 + 0x18);
    do {
      *(undefined8 *)(puVar5 + -6) = *(undefined8 *)(param_3 + -0x18 + (longlong)puVar5);
      FString::operator=(puVar5 + -4,param_3 + -0x10 + (longlong)puVar5);
      puVar1 = (undefined4 *)(param_3 + (longlong)puVar5);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(param_3 + 0x10 + (longlong)puVar5);
      *(undefined1 *)(puVar5 + 6) = *(undefined1 *)(param_3 + 0x18 + (longlong)puVar5);
      puVar5 = puVar5 + 0xe;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a6cf10 Copy body=216 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FSessionServicePong>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x18;
    do {
      *(undefined1 *)(param_2 + -0x18) = *(undefined1 *)(param_3 + -0x18 + param_2);
      FString::operator=(param_2 + -0x10,param_3 + -0x10 + param_2);
      FString::operator=(param_2,param_3 + param_2);
      puVar1 = (undefined4 *)(param_3 + 0x10 + param_2);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(param_2 + 0x10) = *puVar1;
      *(undefined4 *)(param_2 + 0x14) = uVar2;
      *(undefined4 *)(param_2 + 0x18) = uVar3;
      *(undefined4 *)(param_2 + 0x1c) = uVar4;
      FString::operator=(param_2 + 0x20,param_3 + 0x20 + param_2);
      *(undefined1 *)(param_2 + 0x30) = *(undefined1 *)(param_3 + 0x30 + param_2);
      FString::operator=(param_2 + 0x38,param_3 + 0x38 + param_2);
      puVar1 = (undefined4 *)(param_3 + 0x48 + param_2);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(param_2 + 0x48) = *puVar1;
      *(undefined4 *)(param_2 + 0x4c) = uVar2;
      *(undefined4 *)(param_2 + 0x50) = uVar3;
      *(undefined4 *)(param_2 + 0x54) = uVar4;
      FString::operator=(param_2 + 0x58,param_3 + 0x58 + param_2);
      FString::operator=(param_2 + 0x68,param_3 + 0x68 + param_2);
      *(undefined1 *)(param_2 + 0x78) = *(undefined1 *)(param_3 + 0x78 + param_2);
      param_2 = param_2 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a6cff0 Destruct body=107 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FSessionServicePong>::Destruct
               (undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x38) != 0) {
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



// FUNCTION 142a6d060 Get_Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_CRC(void)

{
  return 0xfe6dbde8;
}



// FUNCTION 142a6d070 Get_Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_CRC(void)

{
  return 0xc2797eb7;
}



// FUNCTION 142a6d080 Get_Z_Construct_UScriptStruct_FSessionServiceLog_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSessionServiceLog_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSessionServiceLog_CRC(void)

{
  return 0x418ba3aa;
}



// FUNCTION 142a6d090 Get_Z_Construct_UScriptStruct_FSessionServicePing_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSessionServicePing_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSessionServicePing_CRC(void)

{
  return 0x1cb0bc45;
}



// FUNCTION 142a6d0a0 Get_Z_Construct_UScriptStruct_FSessionServicePong_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSessionServicePong_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSessionServicePong_CRC(void)

{
  return 0x6fa8a5ff;
}



// FUNCTION 142a6d0b0 FUN_142a6d0b0 body=113 status=ok
// SIG undefined FUN_142a6d0b0(void)

void FUN_142a6d0b0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b29de8 == 0) {
    if (DAT_146b29db0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b29db0,&PTR_s__Script_SessionMessages_14536a4c0)
      ;
    }
    lVar1 = DAT_146b29db0;
    uVar2 = Get_Z_Construct_UScriptStruct_FSessionServiceLog_CRC();
    DAT_146b29de8 = GetStaticStruct(FUN_142a6d330,lVar1,L"SessionServiceLog",0x38,uVar2);
  }
  return;
}



// FUNCTION 142a6d130 FUN_142a6d130 body=113 status=ok
// SIG undefined FUN_142a6d130(void)

void FUN_142a6d130(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b29dd8 == 0) {
    if (DAT_146b29db0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b29db0,&PTR_s__Script_SessionMessages_14536a4c0)
      ;
    }
    lVar1 = DAT_146b29db0;
    uVar2 = Get_Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_CRC();
    DAT_146b29dd8 = GetStaticStruct(FUN_142a6d360,lVar1,L"SessionServiceLogSubscribe",1,uVar2);
  }
  return;
}



// FUNCTION 142a6d1b0 FUN_142a6d1b0 body=113 status=ok
// SIG undefined FUN_142a6d1b0(void)

void FUN_142a6d1b0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b29db8 == 0) {
    if (DAT_146b29db0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b29db0,&PTR_s__Script_SessionMessages_14536a4c0)
      ;
    }
    lVar1 = DAT_146b29db0;
    uVar2 = Get_Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_CRC();
    DAT_146b29db8 = GetStaticStruct(FUN_142a6d390,lVar1,L"SessionServiceLogUnsubscribe",1,uVar2);
  }
  return;
}



// FUNCTION 142a6d230 FUN_142a6d230 body=113 status=ok
// SIG undefined FUN_142a6d230(void)

void FUN_142a6d230(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b29e08 == 0) {
    if (DAT_146b29db0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b29db0,&PTR_s__Script_SessionMessages_14536a4c0)
      ;
    }
    lVar1 = DAT_146b29db0;
    uVar2 = Get_Z_Construct_UScriptStruct_FSessionServicePing_CRC();
    DAT_146b29e08 = GetStaticStruct(FUN_142a6d3c0,lVar1,L"SessionServicePing",0x10,uVar2);
  }
  return;
}



// FUNCTION 142a6d2b0 FUN_142a6d2b0 body=113 status=ok
// SIG undefined FUN_142a6d2b0(void)

void FUN_142a6d2b0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b29df8 == 0) {
    if (DAT_146b29db0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b29db0,&PTR_s__Script_SessionMessages_14536a4c0)
      ;
    }
    lVar1 = DAT_146b29db0;
    uVar2 = Get_Z_Construct_UScriptStruct_FSessionServicePong_CRC();
    DAT_146b29df8 = GetStaticStruct(FUN_142a6d3f0,lVar1,L"SessionServicePong",0x98,uVar2);
  }
  return;
}



// FUNCTION 142a6d330 FUN_142a6d330 body=47 status=ok
// SIG undefined FUN_142a6d330(void)

longlong FUN_142a6d330(void)

{
  if (DAT_146b29df0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b29df0,&PTR_FUN_14667daa0);
  }
  return DAT_146b29df0;
}



// FUNCTION 142a6d360 FUN_142a6d360 body=47 status=ok
// SIG undefined FUN_142a6d360(void)

longlong FUN_142a6d360(void)

{
  if (DAT_146b29de0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b29de0,&PTR_FUN_14667d930);
  }
  return DAT_146b29de0;
}



// FUNCTION 142a6d390 FUN_142a6d390 body=47 status=ok
// SIG undefined FUN_142a6d390(void)

longlong FUN_142a6d390(void)

{
  if (DAT_146b29dd0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b29dd0,&PTR_FUN_14667d8b0);
  }
  return DAT_146b29dd0;
}



// FUNCTION 142a6d3c0 FUN_142a6d3c0 body=47 status=ok
// SIG undefined FUN_142a6d3c0(void)

longlong FUN_142a6d3c0(void)

{
  if (DAT_146b29e10 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b29e10,&PTR_FUN_14667dde0);
  }
  return DAT_146b29e10;
}



// FUNCTION 142a6d3f0 FUN_142a6d3f0 body=47 status=ok
// SIG undefined FUN_142a6d3f0(void)

longlong FUN_142a6d3f0(void)

{
  if (DAT_146b29e00 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b29e00,&PTR_FUN_14667dd90);
  }
  return DAT_146b29e00;
}



// FUNCTION 142a6d420 Exec body=1303 status=ok
// SIG undefined Exec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FSessionServicesModule::Exec
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  void *_Dst;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  void *pvVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined8 local_res18;
  undefined2 *local_38;
  int local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_res18 = param_3;
  cVar3 = FParse::Command(&local_res18,L"SESSION",1);
  if (cVar3 == '\0') {
    return 0;
  }
  cVar3 = FParse::Command(&local_res18,L"AUTH",1);
  if (cVar3 != '\0') {
    uVar6 = FParse::Token(&local_38,&local_res18,0);
    iVar4 = TArray<FString,FDefaultAllocator>::Find(&DAT_1468b5d40,uVar6);
    iVar1 = DAT_1468b5d48;
    puVar11 = local_38;
    if (iVar4 == -1) {
      lVar9 = (longlong)DAT_1468b5d48;
      DAT_1468b5d48 = DAT_1468b5d48 + 1;
      if (DAT_1468b5d4c < DAT_1468b5d48) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1468b5d40,iVar1);
      }
      FString::FString(DAT_1468b5d40 + lVar9 * 2,uVar6);
      puVar11 = local_38;
    }
    goto LAB_142a6d88a;
  }
  cVar3 = FParse::Command(&local_res18,L"DENY",1);
  if (cVar3 == '\0') {
    cVar3 = FParse::Command(&local_res18,L"DENYALL",1);
    plVar2 = DAT_1468b5d40;
    iVar1 = DAT_1468b5d48;
    if (cVar3 != '\0') {
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 2;
      }
      DAT_1468b5d48 = 0;
      if (DAT_1468b5d4c == 0) {
        DAT_1468b5d48 = 0;
        return 1;
      }
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1468b5d40,0);
      return 1;
    }
    cVar3 = FParse::Command(&local_res18,L"STATUS",1);
    if (cVar3 != '\0') {
      local_28 = _DAT_1468b5cb8;
      uStack_24 = uRam00000001468b5cbc;
      uStack_20 = uRam00000001468b5cc0;
      uStack_1c = uRam00000001468b5cc4;
      FUN_141682af0(&local_28,&local_38,0);
      puVar11 = &DAT_143f3eda8;
      puVar10 = &DAT_143f3eda8;
      if (local_30 != 0) {
        puVar10 = local_38;
      }
      FOutputDevice::LogfImpl(param_4,L"Instance ID: %s",puVar10);
      if (local_38 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      DVar5 = FWindowsPlatformProcess::GetCurrentProcessId();
      uVar6 = FWindowsPlatformProcess::ComputerName();
      FString::PrintfImpl(&local_38,L"%s-%i",uVar6,DVar5);
      puVar10 = &DAT_143f3eda8;
      if (local_30 != 0) {
        puVar10 = local_38;
      }
      FOutputDevice::LogfImpl(param_4,L"Instance Name: %s",puVar10);
      if (local_38 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_28 = _DAT_1468b5d10;
      uStack_24 = uRam00000001468b5d14;
      uStack_20 = uRam00000001468b5d18;
      uStack_1c = uRam00000001468b5d1c;
      FUN_141682af0(&local_28,&local_38,0);
      puVar10 = &DAT_143f3eda8;
      if (local_30 != 0) {
        puVar10 = local_38;
      }
      FOutputDevice::LogfImpl(param_4,L"Session ID: %s",puVar10);
      if (local_38 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      pvVar12 = DAT_1468b5d20;
      lVar9 = (longlong)DAT_1468b5d28;
      puVar10 = (undefined2 *)0x0;
      local_38 = (undefined2 *)0x0;
      local_30 = DAT_1468b5d28;
      if (DAT_1468b5d28 == 0) {
        puVar14 = (undefined2 *)0x0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,DAT_1468b5d28,0);
        puVar14 = local_38;
        ::_guard_xfg_dispatch_icall_nop(local_38,pvVar12,lVar9 * 2);
      }
      puVar13 = &DAT_143f3eda8;
      if (local_30 != 0) {
        puVar13 = puVar14;
      }
      FOutputDevice::LogfImpl(param_4,L"Session Name: %s",puVar13);
      if (puVar14 != (undefined2 *)0x0) {
        FMemory::Free(puVar14);
      }
      pvVar12 = DAT_1468b5d30;
      lVar9 = (longlong)(int)DAT_1468b5d38;
      local_38 = (undefined2 *)0x0;
      local_30 = (int)DAT_1468b5d38;
      if ((int)DAT_1468b5d38 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,(int)DAT_1468b5d38,0);
        puVar10 = local_38;
        ::_guard_xfg_dispatch_icall_nop(local_38,pvVar12,lVar9 * 2);
      }
      puVar14 = &DAT_143f3eda8;
      if (local_30 != 0) {
        puVar14 = puVar10;
      }
      FOutputDevice::LogfImpl(param_4,L"Session Owner: %s",puVar14);
      if (puVar10 != (undefined2 *)0x0) {
        FMemory::Free(puVar10);
      }
      puVar8 = &DAT_1468e22d8;
      if (DAT_1464a97c0 == '\0') {
        puVar8 = &DAT_1468e22f0;
      }
      puVar7 = (undefined8 *)FText::ToString(puVar8);
      if (*(int *)(puVar7 + 1) != 0) {
        puVar11 = (undefined2 *)*puVar7;
      }
      FOutputDevice::LogfImpl(param_4,L"Standalone: %s",puVar11);
      return 1;
    }
    cVar3 = FParse::Command(&local_res18,L"SETNAME",1);
    if (cVar3 == '\0') {
      cVar3 = FParse::Command(&local_res18,L"SETOWNER",1);
      if (cVar3 == '\0') {
        FOutputDevice::Log(param_4,L"Usage: SESSION <Command>");
        FOutputDevice::Log(param_4,&DAT_143f3eda8);
        FOutputDevice::Log(param_4,L"Command");
        FOutputDevice::Log(param_4,
                           L"    AUTH <UserName> = Authorize a user to interact with this instance")
        ;
        FOutputDevice::Log(param_4,
                           L"    DENY <UserName> = Unauthorize a user from interacting with this instance"
                          );
        FOutputDevice::Log(param_4,L"    DENYALL = Removes all authorized session users");
        FOutputDevice::Log(param_4,L"    SETNAME <Name> = Sets the name of this instance");
        FOutputDevice::Log(param_4,
                           L"    SETOWNER <Owner> = Sets the name of the owner of this instance");
        FOutputDevice::Log(param_4,L"    STATUS = Displays the status of this application session");
        return 1;
      }
      puVar7 = (undefined8 *)FParse::Token(&local_28,&local_res18,0);
      if ((void **)puVar7 != &DAT_1468b5d30) {
        iVar1 = *(int *)(puVar7 + 1);
        pvVar12 = (void *)*puVar7;
        DAT_1468b5d38._0_4_ = iVar1;
        if ((iVar1 != 0) || (DAT_1468b5d38._4_4_ != 0)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&DAT_1468b5d30,iVar1);
          _Dst = DAT_1468b5d30;
          goto LAB_142a6d878;
        }
        DAT_1468b5d38._4_4_ = 0;
      }
    }
    else {
      puVar7 = (undefined8 *)FParse::Token(&local_28,&local_res18,0);
      if ((void **)puVar7 != &DAT_1468b5d20) {
        iVar1 = *(int *)(puVar7 + 1);
        pvVar12 = (void *)*puVar7;
        DAT_1468b5d28 = iVar1;
        if ((iVar1 == 0) && (DAT_1468b5d2c == 0)) {
          DAT_1468b5d2c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&DAT_1468b5d20,iVar1);
          _Dst = DAT_1468b5d20;
LAB_142a6d878:
          ::_guard_xfg_dispatch_icall_nop(_Dst,pvVar12,(longlong)iVar1 * 2);
        }
      }
    }
  }
  else {
    local_38 = (undefined2 *)FParse::Token(&local_28,&local_res18,0);
    TArray<FString,FDefaultAllocator>::RemoveAll<<lambda_0089088ead215b5f35713e72b81bce1f>_>
              (&DAT_1468b5d40,&local_38);
  }
  puVar11 = (undefined2 *)CONCAT44(uStack_24,local_28);
LAB_142a6d88a:
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142a6d940 FUN_142a6d940 body=758 status=ok
// SIG undefined FUN_142a6d940(void)

longlong * FUN_142a6d940(longlong param_1,longlong *param_2)

{
  longlong **pplVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  uint uStackX_c;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  
  plVar7 = (longlong *)0x0;
  pplVar1 = (longlong **)(param_1 + 0x18);
  if (((*pplVar1 != (longlong *)0x0) || (*(longlong *)(param_1 + 8) == 0)) ||
     (*(longlong *)(param_1 + 0x10) == 0)) goto LAB_142a6dbf8;
  piVar2 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
  LOCK();
  iVar3 = *piVar2;
  if (iVar3 == 0) {
    *piVar2 = 0;
    iVar3 = 0;
  }
  UNLOCK();
  if (iVar3 < 1) goto LAB_142a6dbf8;
  lVar4 = operator_new(0x168);
  if (lVar4 == 0) {
    plVar10 = (longlong *)((ulonglong)uStackX_c << 0x20);
    plVar9 = plVar7;
    plVar5 = plVar7;
  }
  else {
    plVar9 = *(longlong **)(param_1 + 0x10);
    local_38 = plVar7;
    plVar10 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      iVar3 = (int)plVar9[1];
      bVar11 = iVar3 == 0;
      if (bVar11) {
        *(int *)(plVar9 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
      while (local_38 = (longlong *)0x0, plVar10 = plVar7, !bVar11) {
        LOCK();
        bVar11 = iVar3 == (int)plVar9[1];
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar3 + 1;
        }
        UNLOCK();
        if (bVar11) {
          plVar10 = plVar9;
          if (plVar9 != (longlong *)0x0) {
            local_38 = *(longlong **)(param_1 + 8);
          }
          break;
        }
        LOCK();
        iVar3 = (int)plVar9[1];
        bVar11 = iVar3 == 0;
        if (bVar11) {
          *(int *)(plVar9 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
      }
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_30 = plVar10;
    plVar5 = (longlong *)FUN_142a6ee00(lVar4);
    plVar9 = (longlong *)0x3;
  }
  plVar6 = (longlong *)operator_new(0x18);
  plVar8 = plVar7;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_14536acd0;
    plVar6[2] = (longlong)plVar5;
    plVar8 = plVar6;
  }
  plVar6 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = plVar7;
  }
  local_48 = plVar5;
  local_40 = plVar8;
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar2 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar3 = *piVar2;
      if (iVar3 == 0) {
        *piVar2 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_142a6db0c;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)plVar5;
    plVar7 = (longlong *)plVar6[1];
    if (plVar8 != plVar7) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar6[1];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))();
        }
      }
      plVar6[1] = (longlong)plVar8;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
  }
LAB_142a6db0c:
  if (pplVar1 != &local_48) {
    local_48 = (longlong *)0x0;
    *pplVar1 = plVar5;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x20,&local_40);
  }
  plVar7 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  plVar7 = local_30;
  if ((((ulonglong)plVar9 & 2) != 0) &&
     (plVar9 = (longlong *)(ulonglong)((uint)plVar9 & 0xfffffffd), local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if ((((ulonglong)plVar9 & 1) != 0) && (plVar10 != (longlong *)0x0)) {
    LOCK();
    plVar7 = plVar10 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
LAB_142a6dbf8:
  *param_2 = (longlong)*pplVar1;
  lVar4 = *(longlong *)(param_1 + 0x20);
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 142a6dc40 FUN_142a6dc40 body=666 status=ok
// SIG undefined FUN_142a6dc40(void)

longlong * FUN_142a6dc40(longlong param_1,longlong *param_2)

{
  longlong **pplVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  uint uStackX_c;
  longlong *local_38;
  longlong *local_30;
  
  pplVar1 = (longlong **)(param_1 + 0x28);
  plVar11 = (longlong *)0x0;
  if (((*pplVar1 == (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) &&
     (*(longlong *)(param_1 + 0x10) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
    LOCK();
    iVar4 = *piVar2;
    if (iVar4 == 0) {
      *piVar2 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar5 = (longlong *)operator_new(0x70);
      if (plVar5 == (longlong *)0x0) {
        plVar10 = (longlong *)((ulonglong)uStackX_c << 0x20);
        plVar9 = (longlong *)((ulonglong)uStackX_c << 0x20);
        plVar8 = plVar11;
        plVar5 = plVar11;
      }
      else {
        plVar10 = *(longlong **)(param_1 + 0x10);
        plVar8 = plVar11;
        plVar9 = plVar10;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          iVar4 = (int)plVar10[1];
          bVar12 = iVar4 == 0;
          if (bVar12) {
            *(int *)(plVar10 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          while (plVar8 = (longlong *)0x0, plVar9 = plVar11, !bVar12) {
            LOCK();
            bVar12 = iVar4 == (int)plVar10[1];
            if (bVar12) {
              *(int *)(plVar10 + 1) = iVar4 + 1;
            }
            UNLOCK();
            if (bVar12) {
              plVar9 = plVar10;
              if (plVar10 != (longlong *)0x0) {
                plVar8 = *(longlong **)(param_1 + 8);
              }
              break;
            }
            LOCK();
            iVar4 = (int)plVar10[1];
            bVar12 = iVar4 == 0;
            if (bVar12) {
              *(int *)(plVar10 + 1) = 0;
              iVar4 = 0;
            }
            UNLOCK();
          }
        }
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        *(undefined2 *)(plVar5 + 1) = 0x100;
        *plVar5 = (longlong)&PTR__scalar_deleting_destructor__14536af88;
        plVar5[2] = (longlong)&PTR_IsServerRunning_14536afc8;
        plVar5[3] = 0;
        plVar5[4] = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)(plVar5 + 5));
        SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar5 + 5),4000);
        plVar5[10] = (longlong)plVar8;
        plVar5[0xb] = (longlong)plVar9;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
          UNLOCK();
        }
        plVar5[0xc] = 0;
        plVar5[0xd] = 0;
        plVar8 = (longlong *)0x3;
        plVar10 = plVar9;
      }
      plVar6 = (longlong *)operator_new(0x18);
      plVar7 = plVar11;
      if (plVar6 != (longlong *)0x0) {
        *(undefined4 *)(plVar6 + 1) = 1;
        *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
        *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
        plVar6[2] = (longlong)plVar5;
        plVar7 = plVar6;
      }
      if (plVar5 != (longlong *)0x0) {
        plVar11 = plVar5 + 2;
      }
      local_38 = plVar11;
      local_30 = plVar7;
      SharedPointerInternals::EnableSharedFromThis(&local_38,plVar5,plVar5);
      if (pplVar1 != &local_38) {
        *pplVar1 = plVar11;
        local_38 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_30);
        plVar7 = local_30;
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar7 + 1;
        lVar3 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
      if ((((ulonglong)plVar8 & 2) != 0) &&
         (plVar8 = (longlong *)(ulonglong)((uint)plVar8 & 0xfffffffd), plVar10 != (longlong *)0x0))
      {
        LOCK();
        plVar11 = plVar10 + 1;
        lVar3 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      if ((((ulonglong)plVar8 & 1) != 0) && (plVar9 != (longlong *)0x0)) {
        LOCK();
        plVar11 = plVar9 + 1;
        lVar3 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
  }
  *param_2 = (longlong)*pplVar1;
  lVar3 = *(longlong *)(param_1 + 0x30);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 142a6dee0 StartupModule body=212 status=ok
// SIG undefined StartupModule(void)

void FSessionServicesModule::StartupModule(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FName::FName(local_res8,"Messaging",1);
  uVar3 = *puVar5;
  uVar6 = FUN_14168dc80();
  plVar7 = (longlong *)FUN_141690010(uVar6,uVar3);
  puVar5 = (undefined8 *)(**(code **)(*plVar7 + 0x50))(plVar7,local_18);
  *(undefined8 *)(param_1 + 8) = *puVar5;
  plVar7 = (longlong *)puVar5[1];
  plVar8 = *(longlong **)(param_1 + 0x10);
  if (plVar7 != plVar8) {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_1 + 0x10);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    *(longlong **)(param_1 + 0x10) = plVar7;
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_10 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 142a6dfc0 ShutdownModule body=246 status=ok
// SIG undefined ShutdownModule(void)

void FSessionServicesModule::ShutdownModule(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x18) != &local_28) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x20,&local_20);
    plVar5 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x28) != &local_18) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_10);
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142a6e0c0 FUN_142a6e0c0 body=232 status=ok
// SIG undefined FUN_142a6e0c0(void)

longlong FUN_142a6e0c0(longlong param_1,ulonglong param_2)

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
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *(undefined ***)(param_1 + 8) = IModuleInterface::vftable;
  FSelfRegisteringExec::~FSelfRegisteringExec(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142a6e1c0 FUN_142a6e1c0 body=22 status=ok
// SIG undefined FUN_142a6e1c0(void)

void FUN_142a6e1c0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a6e1d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x70))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 142a6e1e0 FUN_142a6e1e0 body=418 status=ok
// SIG undefined FUN_142a6e1e0(void)

undefined8 * FUN_142a6e1e0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  int *piVar12;
  bool bVar13;
  
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  plVar1 = *(longlong **)(param_2 + 0x10);
  plVar10 = plVar1;
  plVar11 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar1[1];
    bVar13 = iVar7 == 0;
    if (bVar13) {
      *(int *)(plVar1 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (plVar10 = (longlong *)0x0, plVar11 = (longlong *)0x0, !bVar13) {
      LOCK();
      bVar13 = iVar7 == (int)plVar1[1];
      if (bVar13) {
        *(int *)(plVar1 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar13) {
        plVar10 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          plVar11 = *(longlong **)(param_2 + 8);
          LOCK();
          *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
          UNLOCK();
          LOCK();
          plVar10 = plVar1 + 1;
          lVar6 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar1)(plVar1);
            LOCK();
            piVar12 = (int *)((longlong)plVar1 + 0xc);
            iVar7 = *piVar12;
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar1 + 8))(plVar1,1);
            }
          }
          LOCK();
          *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
          UNLOCK();
          plVar10 = plVar1;
        }
        break;
      }
      LOCK();
      iVar7 = (int)plVar1[1];
      bVar13 = iVar7 == 0;
      if (bVar13) {
        *(int *)(plVar1 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  puVar8 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &PTR_GetPoolName_143f9e980;
    puVar8[1] = plVar11;
    puVar8[2] = plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar8 + 3) = uVar2;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar3;
    *(undefined4 *)(puVar8 + 4) = uVar4;
    *(undefined4 *)((longlong)puVar8 + 0x24) = uVar5;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[6] = uVar9;
    *puVar8 = &PTR_GetPoolName_143f9e9c8;
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar10)(plVar10);
      piVar12 = (int *)((longlong)plVar10 + 0xc);
      LOCK();
      iVar7 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    piVar12 = (int *)((longlong)plVar10 + 0xc);
    LOCK();
    plVar1 = plVar10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      iVar7 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    LOCK();
    plVar1 = plVar10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      iVar7 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142a6e390 FUN_142a6e390 body=527 status=ok
// SIG undefined FUN_142a6e390(void)

int * FUN_142a6e390(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *_Src;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  bool local_res8;
  int local_res10 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar15 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar15);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar15 = (int)param_1[6];
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)(*param_1 + 4 + (longlong)iVar15 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar14 = (longlong *)param_1[4];
  *param_2 = iVar15;
  local_res8 = false;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar14 +
                   (longlong)((int)(iVar15 + (iVar15 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar15 & 0x1f);
  puVar5 = (undefined4 *)*param_3;
  uVar7 = puVar5[1];
  uVar8 = puVar5[2];
  uVar9 = puVar5[3];
  _Src = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x28);
  *_Src = *puVar5;
  _Src[1] = uVar7;
  _Src[2] = uVar8;
  _Src[3] = uVar9;
  *(undefined8 *)(_Src + 4) = 0;
  *(undefined8 *)(_Src + 6) = 0;
  _Src[8] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,_Src);
    lVar16 = (longlong)local_res10[0];
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      lVar6 = *param_1;
      plVar14 = *(longlong **)(lVar6 + 0x18 + lVar16 * 0x28);
      iVar15 = local_res10[0];
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar14 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          iVar15 = local_res10[0];
          if (iVar4 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
            iVar15 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar6 + lVar16 * 0x28),_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar15;
      goto LAB_142a6e579;
    }
  }
  cVar11 = TSet<TTuple<FGuid,FLevelSequenceBindingReferenceArray>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceBindingReferenceArray,0>,FDefaultSetAllocator>
           ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar11 == '\0') {
    iVar15 = *param_2;
    uVar13 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar13 = (int)param_1[9] - 1U & uVar13;
    _Src[9] = uVar13;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    _Src[8] = *(undefined4 *)
               ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar15;
  }
LAB_142a6e579:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142a6e5a0 FUN_142a6e5a0 body=658 status=ok
// SIG undefined FUN_142a6e5a0(void)

int * FUN_142a6e5a0(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *_Src;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  undefined4 uVar18;
  bool local_res8;
  int local_res10 [2];
  longlong *local_res18;
  longlong local_res20;
  
  uVar18 = 0xffffffff;
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar16 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar16);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar16 = (int)param_1[6];
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)(*param_1 + 4 + (longlong)iVar16 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar15 = (longlong *)param_1[4];
  *param_2 = iVar16;
  local_res8 = false;
  if (plVar15 == (longlong *)0x0) {
    plVar15 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar15 +
                   (longlong)((int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar16 & 0x1f);
  _Src = (undefined4 *)(*param_1 + (longlong)iVar16 * 0x28);
  puVar5 = (undefined4 *)*local_res18;
  uVar8 = puVar5[1];
  uVar9 = puVar5[2];
  uVar10 = puVar5[3];
  *_Src = *puVar5;
  _Src[1] = uVar8;
  _Src[2] = uVar9;
  _Src[3] = uVar10;
  *(undefined8 *)(_Src + 4) = 0;
  *(undefined8 *)(_Src + 6) = 0;
  _Src[8] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,_Src);
    lVar17 = (longlong)local_res10[0];
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      lVar6 = *param_1;
      plVar15 = *(longlong **)(lVar6 + 0x18 + lVar17 * 0x28);
      iVar16 = local_res10[0];
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar15 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          iVar16 = local_res10[0];
          if (iVar4 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
            iVar16 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar6 + lVar17 * 0x28),_Src,0x20);
      iVar4 = *param_2;
      bVar7 = (byte)iVar4 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar4;
      }
      lVar17 = *param_1;
      *(undefined4 *)(lVar17 + (longlong)iVar4 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar18 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar17 + 4 + (longlong)iVar4 * 0x28) = uVar18;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar4;
      plVar15 = (longlong *)param_1[4];
      *param_2 = iVar16;
      if (plVar15 == (longlong *)0x0) {
        plVar15 = param_1 + 2;
      }
      puVar3 = (uint *)((longlong)plVar15 +
                       (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << bVar7 | 1U >> 0x20 - bVar7);
      param_4 = local_res20;
      goto LAB_142a6e80f;
    }
  }
  cVar12 = TSet<TTuple<FGuid,FLevelSequenceBindingReferenceArray>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceBindingReferenceArray,0>,FDefaultSetAllocator>
           ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar12 == '\0') {
    iVar16 = *param_2;
    uVar14 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar14 = (int)param_1[9] - 1U & uVar14;
    _Src[9] = uVar14;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    _Src[8] = *(undefined4 *)
               ((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         iVar16;
  }
LAB_142a6e80f:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142a6e840 FUN_142a6e840 body=686 status=ok
// SIG undefined FUN_142a6e840(void)

undefined8 *
FUN_142a6e840(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 local_res8;
  undefined8 local_88;
  longlong *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  puVar11 = (undefined8 *)0x0;
  param_1[1] = 0;
  puVar3 = param_1 + 0x19;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14536add0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  *(undefined4 *)(param_1 + 0xf) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar6;
  *(undefined4 *)(param_1 + 0x10) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar8;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *puVar3 = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = *param_3;
  lVar5 = param_3[1];
  param_1[0x1c] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 2;
  local_68 = FUN_142a709a0;
  uStack_60 = 0;
  FName::FName(&local_res8,"FSessionInstanceInfo",1);
  local_58 = *param_4;
  local_50 = (longlong *)param_4[1];
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_50 + 0xc) = *(int *)((longlong)local_50 + 0xc) + 1;
    UNLOCK();
  }
  local_28 = local_res8;
  local_48 = 0;
  local_40 = (undefined8 *)0x0;
  local_34 = 0;
  local_30 = 0;
  plVar9 = (longlong *)FTaskGraphInterface::Get();
  local_20 = (**(code **)(*plVar9 + 0x10))(plVar9,0);
  puVar10 = (undefined8 *)operator_new(0x20);
  local_78 = puVar11;
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[1] = param_1;
    *puVar10 = &PTR_FUN_14536ae68;
    *(undefined4 *)(puVar10 + 2) = (undefined4)local_68;
    *(undefined4 *)((longlong)puVar10 + 0x14) = local_68._4_4_;
    *(undefined4 *)(puVar10 + 3) = uStack_60;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_5c;
    local_78 = puVar10;
  }
  puVar10 = (undefined8 *)operator_new(0x18);
  if (puVar10 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar10 + 1) = 1;
    *puVar10 = &PTR_FUN_143f3f2d0;
    *(undefined4 *)((longlong)puVar10 + 0xc) = 1;
    puVar10[2] = local_78;
    puVar11 = puVar10;
  }
  local_70 = puVar11;
  SharedPointerInternals::EnableSharedFromThis(&local_78,local_78,local_78);
  local_38 = 1;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_40,0);
  *local_40 = local_78;
  local_40[1] = local_70;
  local_70 = (undefined8 *)0x0;
  local_78 = (undefined8 *)0x0;
  FMessageEndpointBuilder::Build(&local_58,&local_88);
  if (puVar3 != &local_88) {
    *puVar3 = local_88;
    local_88 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1a,&local_80);
  }
  plVar9 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_40);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_50 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*local_50 + 8))(local_50,1);
    }
  }
  return param_1;
}



// FUNCTION 142a6eaf0 FSessionLogMessage body=773 status=ok
// SIG undefined FSessionLogMessage(void)

longlong *
FSessionLogMessage::FSessionLogMessage
          (longlong *param_1,undefined4 *param_2,undefined8 param_3,float param_4,
          undefined8 *param_5,undefined1 param_6,longlong *param_7)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  void **ppvVar14;
  int iVar15;
  void *pvVar16;
  void *local_68;
  int local_60;
  int local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  plVar12 = param_7;
  *param_1 = *param_7;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  FString::FString(param_1 + 3,param_3);
  param_7 = (void *)0x0;
  if (*plVar12 == 0) {
    local_50 = *(int *)(param_5 + 1);
    lVar13 = (longlong)local_50;
    pvVar16 = (void *)*param_5;
    local_58 = (void *)0x0;
    if (local_50 == 0) {
      local_4c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
      ::_guard_xfg_dispatch_icall_nop(local_58,pvVar16,lVar13 * 2);
    }
    ppvVar14 = &local_58;
    bVar9 = false;
    bVar8 = false;
    bVar7 = false;
    bVar6 = true;
  }
  else {
    plVar12 = (longlong *)FName::ToString(plVar12);
    lVar13 = plVar12[1];
    local_68 = (void *)*plVar12;
    *plVar12 = 0;
    local_60 = (int)plVar12[1];
    local_5c = *(int *)((longlong)plVar12 + 0xc);
    plVar12[1] = 0;
    iVar11 = local_60;
    if (local_5c < (int)((3 - (uint)((int)lVar13 != 0)) + local_60)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
      iVar11 = local_60;
    }
    local_60 = (3 - (uint)(iVar11 != 0)) + iVar11;
    pvVar16 = local_68;
    if (local_5c < local_60) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar11);
      pvVar16 = local_68;
    }
    lVar13 = (longlong)iVar11 - (ulonglong)(iVar11 != 0);
    *(undefined4 *)((longlong)pvVar16 + lVar13 * 2) = 0x20003a;
    *(undefined2 *)((longlong)pvVar16 + lVar13 * 2 + 4) = 0;
    iVar11 = *(int *)(param_5 + 1);
    if (local_60 < 2) {
      pvVar1 = (void *)*param_5;
      local_68 = (void *)0x0;
      param_7 = pvVar16;
      local_60 = iVar11;
      if (iVar11 == 0) {
        local_5c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar11,0);
        ::_guard_xfg_dispatch_icall_nop(local_68,pvVar1,(longlong)iVar11 * 2);
      }
    }
    else {
      iVar2 = iVar11 + -1;
      if (iVar11 == 0) {
        iVar2 = 0;
      }
      if ((local_60 != 0) || (iVar11 = 1, iVar2 == 0)) {
        iVar11 = 0;
      }
      param_7 = (void *)0x0;
      iVar15 = local_60;
      local_68 = pvVar16;
      if (local_5c < iVar11 + iVar2 + local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
        iVar15 = local_60;
      }
      pvVar16 = (void *)*param_5;
      local_60 = iVar15;
      if (iVar2 != 0) {
        local_60 = iVar2 + (uint)(iVar15 == 0) + iVar15;
        if (local_5c < local_60) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar15);
        }
        iVar10 = local_5c;
        iVar11 = local_60;
        pvVar1 = (void *)((longlong)local_68 + ((longlong)iVar15 - (ulonglong)(iVar15 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar16,(longlong)iVar2 * 2);
        *(undefined2 *)((longlong)iVar2 * 2 + (longlong)pvVar1) = 0;
        local_60 = iVar11;
        local_5c = iVar10;
      }
    }
    ppvVar14 = &local_68;
    bVar9 = true;
    bVar8 = true;
    bVar7 = true;
    bVar6 = false;
  }
  FString::FString(param_1 + 5,ppvVar14);
  if ((bVar6) && (local_58 != (void *)0x0)) {
    FMemory::Free();
  }
  if ((bVar7) && (local_68 != (void *)0x0)) {
    FMemory::Free();
  }
  if ((bVar8) && (param_7 != (void *)0x0)) {
    FMemory::Free(param_7);
  }
  if ((bVar9) && (local_48 != 0)) {
    FMemory::Free();
  }
  FDateTime::Now(param_1 + 7);
  *(undefined1 *)(param_1 + 9) = param_6;
  param_1[8] = (longlong)(double)param_4;
  return param_1;
}



// FUNCTION 142a6ee00 FUN_142a6ee00 body=1921 status=ok
// SIG undefined FUN_142a6ee00(void)

undefined8 * FUN_142a6ee00(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  wchar_t *pwVar17;
  int iVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  uint uVar21;
  wchar_t *pwVar22;
  wchar_t *local_128;
  undefined8 local_120;
  wchar_t *local_118;
  ulonglong local_110;
  longlong *local_108;
  int local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  wchar_t *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong *local_a0;
  undefined1 local_98;
  undefined8 *local_90;
  int local_88;
  int local_84;
  undefined1 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50 [16];
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_AddOwner_14536aef0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = *param_2;
  lVar9 = param_2[1];
  param_1[7] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 0xc) = *(int *)(lVar9 + 0xc) + 1;
    UNLOCK();
  }
  param_1[8] = 0;
  param_1[9] = 0;
  plVar10 = param_1 + 0x1e;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 2;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 2;
  *plVar10 = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 2;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 2;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 2;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 2;
  param_1[0x2c] = 0;
  local_128 = (wchar_t *)0x0;
  local_120 = 0;
  uVar8 = FCommandLine::Get();
  cVar5 = FParse::Value(uVar8,L"SessionFilter=",&local_128,1);
  if (cVar5 != '\0') {
    uVar6 = FUN_141592950(&local_128,&DAT_14536a738,1,0,0xffffffff);
    while (uVar6 != 0xffffffff) {
      pwVar17 = (wchar_t *)0x0;
      uVar21 = 0;
      if ((int)local_120 == 0) {
        pwVar20 = L"";
        uVar14 = uVar21;
      }
      else {
        pwVar20 = local_128;
        uVar14 = (int)local_120 - 1;
      }
      uVar15 = uVar21;
      if ((-1 < (int)uVar6) && (uVar15 = uVar14, (int)uVar6 < (int)uVar14)) {
        uVar15 = uVar6;
      }
      local_c8 = (wchar_t *)0x0;
      local_bc = 0;
      pwVar19 = (wchar_t *)(ulonglong)(uVar15 + 1);
      if (uVar15 == 0) {
        pwVar19 = pwVar17;
      }
      iVar18 = (int)pwVar19;
      pwVar19 = pwVar17;
      local_c0 = iVar18;
      if ((0 < iVar18) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0), iVar18 = local_c0,
         pwVar19 = local_c8, 0 < local_c0)) {
        wcsncpy(local_c8,pwVar20,(longlong)(int)uVar15);
        pwVar19[(int)uVar15] = L'\0';
      }
      iVar3 = *(int *)(param_1 + 0x1f);
      *(int *)(param_1 + 0x1f) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0xfc) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar3);
      }
      puVar16 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar10);
      *puVar16 = 0;
      *(int *)(puVar16 + 1) = iVar18;
      if (iVar18 == 0) {
        *(undefined4 *)((longlong)puVar16 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar16,iVar18,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar16,pwVar19,(longlong)iVar18 * 2);
      }
      uVar14 = (int)local_120 - 1;
      if ((int)local_120 == 0) {
        uVar14 = uVar21;
      }
      uVar15 = (uVar14 - uVar6) - 1;
      if ((int)local_120 == 0) {
        pwVar20 = L"";
        uVar13 = uVar21;
      }
      else {
        pwVar20 = local_128;
        uVar13 = (int)local_120 - 1;
      }
      uVar7 = uVar21;
      if ((-1 < (int)uVar15) && (uVar7 = uVar13, (int)(uVar14 - uVar6) <= (int)uVar13)) {
        uVar7 = uVar15;
      }
      local_118 = (wchar_t *)0x0;
      local_110 = local_110 & 0xffffffff;
      pwVar20 = pwVar20 + ((longlong)(int)uVar13 - (longlong)(int)uVar7);
      pwVar22 = pwVar17;
      if ((pwVar20 != (wchar_t *)0x0) && (*pwVar20 != L'\0')) {
        lVar9 = -1;
        do {
          lVar4 = lVar9 + 1;
          lVar9 = lVar9 + 1;
        } while (pwVar20[lVar4] != L'\0');
        uVar6 = (int)lVar9 + 1;
        local_110 = (ulonglong)uVar6;
        uVar21 = uVar6;
        if (0 < (int)uVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
          pwVar22 = (wchar_t *)(local_110 >> 0x20);
          uVar21 = (uint)local_110;
        }
        pwVar17 = local_118;
        FGenericPlatformString::Memcpy(local_118,pwVar20,(longlong)(int)uVar6 * 2);
      }
      if (local_128 != (wchar_t *)0x0) {
        FMemory::Free(local_128);
      }
      local_118 = (wchar_t *)0x0;
      local_120 = CONCAT44((int)pwVar22,uVar21);
      local_110 = 0;
      local_128 = pwVar17;
      uVar6 = FUN_141592950(&local_128,&DAT_14536a73c,1,0,0xffffffff);
      if (pwVar19 != (wchar_t *)0x0) {
        FMemory::Free(pwVar19);
      }
    }
    iVar18 = *(int *)(param_1 + 0x1f);
    *(int *)(param_1 + 0x1f) = iVar18 + 1;
    if (*(int *)((longlong)param_1 + 0xfc) < iVar18 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar18);
    }
    pwVar17 = local_128;
    puVar16 = (undefined8 *)((longlong)iVar18 * 0x10 + *plVar10);
    *puVar16 = 0;
    lVar9 = (longlong)(int)local_120;
    *(int *)(puVar16 + 1) = (int)local_120;
    if ((int)local_120 == 0) {
      *(undefined4 *)((longlong)puVar16 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar16,local_120 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop((void *)*puVar16,pwVar17,lVar9 * 2);
    }
  }
  puVar16 = (undefined8 *)0x0;
  uStack_b0 = 0;
  local_b8 = FUN_142a70ea0;
  uStack_58 = 0;
  local_60 = FUN_142a703a0;
  FName::FName(&local_68,"FSessionManager",1);
  local_a8 = *param_2;
  local_a0 = (longlong *)param_2[1];
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_a0 + 0xc) = *(int *)((longlong)local_a0 + 0xc) + 1;
    UNLOCK();
  }
  local_78 = local_68;
  local_98 = 0;
  local_90 = (undefined8 *)0x0;
  local_84 = 0;
  local_80 = 0;
  plVar10 = (longlong *)FTaskGraphInterface::Get();
  local_70 = (**(code **)(*plVar10 + 0x10))(plVar10,0);
  local_e8 = (undefined8 *)operator_new(0x20);
  if (local_e8 == (undefined8 *)0x0) {
    local_e8 = (undefined8 *)0x0;
  }
  else {
    local_e8[1] = param_1;
    *local_e8 = &PTR_FUN_14536af68;
    *(undefined4 *)(local_e8 + 2) = (undefined4)local_60;
    *(undefined4 *)((longlong)local_e8 + 0x14) = local_60._4_4_;
    *(undefined4 *)(local_e8 + 3) = uStack_58;
    *(undefined4 *)((longlong)local_e8 + 0x1c) = uStack_54;
  }
  puVar11 = (undefined8 *)operator_new(0x18);
  local_e0 = puVar16;
  if (puVar11 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar11 + 1) = 1;
    *puVar11 = &PTR_FUN_143f3f2d0;
    *(undefined4 *)((longlong)puVar11 + 0xc) = 1;
    puVar11[2] = local_e8;
    local_e0 = puVar11;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_e8,local_e8,local_e8);
  local_88 = 1;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_90,0);
  puVar11 = local_90;
  *local_90 = local_e8;
  local_90[1] = local_e0;
  local_e0 = (undefined8 *)0x0;
  local_e8 = (undefined8 *)0x0;
  local_d8 = (undefined8 *)operator_new(0x20);
  if (local_d8 == (undefined8 *)0x0) {
    local_d8 = (undefined8 *)0x0;
  }
  else {
    local_d8[1] = param_1;
    *local_d8 = &PTR_FUN_14536af78;
    *(undefined4 *)(local_d8 + 2) = (undefined4)local_b8;
    *(undefined4 *)((longlong)local_d8 + 0x14) = local_b8._4_4_;
    *(undefined4 *)(local_d8 + 3) = uStack_b0;
    *(undefined4 *)((longlong)local_d8 + 0x1c) = uStack_ac;
  }
  puVar12 = (undefined8 *)operator_new(0x18);
  if (puVar12 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar12 + 1) = 1;
    *puVar12 = &PTR_FUN_143f3f2d0;
    *(undefined4 *)((longlong)puVar12 + 0xc) = 1;
    puVar12[2] = local_d8;
    puVar16 = puVar12;
  }
  local_d0 = puVar16;
  SharedPointerInternals::EnableSharedFromThis(&local_d8,local_d8,local_d8);
  iVar18 = local_88;
  lVar9 = (longlong)local_88;
  local_88 = local_88 + 1;
  if (local_84 < local_88) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_90,iVar18);
    puVar11 = local_90;
  }
  puVar11[lVar9 * 2] = local_d8;
  puVar11[lVar9 * 2 + 1] = local_d0;
  local_d0 = (undefined8 *)0x0;
  local_d8 = (undefined8 *)0x0;
  FMessageEndpointBuilder::Build(&local_a8,&local_f8);
  if (param_1 + 8 != &local_f8) {
    param_1[8] = local_f8;
    local_f8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 9,&local_f0);
  }
  plVar10 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar18 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_90);
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_a0 + 0xc);
    iVar18 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar18 == 1) {
      (**(code **)(*local_a0 + 8))(local_a0,1);
    }
  }
  uStack_b0 = 0;
  local_108 = (longlong *)0x0;
  local_b8 = FSessionManager::HandleTicker;
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  local_100 = 3;
  local_108 = plVar10;
  if (plVar10 != (longlong *)0x0) {
    plVar10[1] = (longlong)param_1;
    *plVar10 = (longlong)&PTR_GetPoolName_144042030;
    *(undefined4 *)(plVar10 + 2) = (undefined4)local_b8;
    *(undefined4 *)((longlong)plVar10 + 0x14) = local_b8._4_4_;
    *(undefined4 *)(plVar10 + 3) = uStack_b0;
    *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_ac;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar10[5] = lVar9;
  }
  uVar8 = FUN_14164ab60();
  puVar16 = (undefined8 *)
            FUN_14158f860(uVar8,local_50,&local_108,L"FSessionManager_HandleTicker",0x3f800000);
  param_1[0x2c] = *puVar16;
  if (local_100 != 0) {
    if (local_108 == (longlong *)0x0) goto LAB_142a6f553;
    (**(code **)(*local_108 + 0x28))(local_108,0);
    if (local_108 != (longlong *)0x0) {
      local_108 = (longlong *)FMemory::Realloc(local_108,0,0);
    }
    local_100 = 0;
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free(local_108);
  }
LAB_142a6f553:
  FSessionManager::SendPing(param_1);
  if (local_128 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142a6f590 FUN_142a6f590 body=465 status=ok
// SIG undefined FUN_142a6f590(void)

void FUN_142a6f590(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  
  *param_1 = &PTR_AddOwner_14536aef0;
  uVar4 = FUN_14164ab60();
  FUN_141597530(uVar4,param_1[0x2c]);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x29);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x26);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x23);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x1f);
  plVar5 = (longlong *)param_1[0x1e];
  if (iVar6 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar5 = (longlong *)param_1[0x1e];
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1b);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xe,0);
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  plVar5 = (longlong *)param_1[0xd];
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
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 10);
  plVar5 = (longlong *)param_1[9];
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
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = (longlong *)param_1[7];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar6 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar6 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  *param_1 = &PTR__purecall_14536ae78;
  plVar5 = (longlong *)param_1[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar6 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar6 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}



// FUNCTION 142a6f770 FUN_142a6f770 body=43 status=ok
// SIG undefined FUN_142a6f770(void)

undefined8 * FUN_142a6f770(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ef70;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142a6f7a0 FUN_142a6f7a0 body=268 status=ok
// SIG undefined FUN_142a6f7a0(void)

undefined8 * FUN_142a6f7a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1a);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x17);
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  plVar3 = (longlong *)param_1[0xf];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 3,0);
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_145129d58;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 142a6f8b0 FUN_142a6f8b0 body=328 status=ok
// SIG undefined FUN_142a6f8b0(void)

undefined8 * FUN_142a6f8b0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x20);
  if (param_1[0x1d] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[0x1c];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = (longlong *)param_1[0x1a];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x17);
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_14536ace0;
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 142a6fa00 FUN_142a6fa00 body=52 status=ok
// SIG undefined FUN_142a6fa00(void)

undefined8 FUN_142a6fa00(undefined8 param_1,ulonglong param_2)

{
  FUN_142a6f590();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 142a6fa40 `scalar_deleting_destructor' body=361 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSessionService::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 local_18;
  longlong *local_10;
  
  *param_1 = &PTR__scalar_deleting_destructor__14536af88;
  param_1[2] = &PTR_IsServerRunning_14536afc8;
  cVar6 = FUdpMessageTunnel::IsServerRunning(param_1 + 2);
  if (cVar6 != '\0') {
    uVar7 = FUN_141672640();
    FOutputDeviceRedirector::RemoveOutputDevice(uVar7);
    local_10 = (longlong *)0x0;
    if (param_1 + 0xc != &local_18) {
      param_1[0xc] = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd,&local_10);
      plVar4 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
  plVar4 = (longlong *)param_1[0xd];
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
  plVar4 = (longlong *)param_1[0xb];
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
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  param_1[2] = &PTR__purecall_143fcfdf8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142a6fbb0 FUN_142a6fbb0 body=43 status=ok
// SIG undefined FUN_142a6fbb0(void)

undefined8 * FUN_142a6fbb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14536ace0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142a6fbe0 FUN_142a6fbe0 body=43 status=ok
// SIG undefined FUN_142a6fbe0(void)

undefined8 * FUN_142a6fbe0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14536ae78;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142a6fc10 AddOwner body=83 status=ok
// SIG undefined AddOwner(void)

void FSessionManager::AddOwner(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xf8);
  *(int *)(param_1 + 0xf8) = iVar1 + 1;
  if (*(int *)(param_1 + 0xfc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0xf0),iVar1);
  }
  FString::FString((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0xf0),param_2);
  return;
}



// FUNCTION 142a6fc70 DestroyObject body=67 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FSessionLogMessage,SharedPointerInternals::DefaultDeleter<FSessionLogMessage>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x28) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0x18) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar1,0x50);
    return;
  }
  return;
}



// FUNCTION 142a6fcc0 FUN_142a6fcc0 body=22 status=ok
// SIG undefined FUN_142a6fcc0(void)

void FUN_142a6fcc0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a6fcd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 142a6fce0 FUN_142a6fce0 body=618 status=ok
// SIG undefined FUN_142a6fce0(void)

void FUN_142a6fce0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  short *psVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined4 *_Src;
  void *_Src_00;
  bool bVar14;
  ulonglong local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  void *local_88;
  ulonglong local_80;
  undefined4 *local_78;
  ulonglong local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *plStack_50;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  bVar14 = false;
  if ((*(longlong *)(param_1 + 200) != 0) &&
     (((*(int *)(param_1 + 0x6c) != 0 || *(int *)(param_1 + 0x68) != 0) ||
      *(int *)(param_1 + 100) != 0) || *(int *)(param_1 + 0x60) != 0)) {
    local_res10 = param_2;
    lVar8 = operator_new(0x20);
    lVar13 = -1;
    if (lVar8 == 0) {
      lVar8 = 0;
      _Src_00 = local_88;
    }
    else {
      psVar9 = (short *)FWindowsPlatformProcess::UserName(0);
      local_88 = (void *)0x0;
      local_80 = 0;
      uVar11 = 0;
      _Src_00 = (void *)0x0;
      if ((psVar9 != (short *)0x0) && (_Src_00 = (void *)0x0, *psVar9 != 0)) {
        do {
          lVar13 = lVar13 + 1;
        } while (psVar9[lVar13] != 0);
        uVar12 = (int)lVar13 + 1;
        local_80 = (ulonglong)uVar12;
        uVar11 = uVar12;
        if (0 < (int)uVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
          uVar11 = (uint)local_80;
        }
        _Src_00 = local_88;
        FGenericPlatformString::Memcpy(local_88,psVar9,(longlong)(int)uVar12 * 2);
      }
      FString::FString(lVar8,local_res10);
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(uint *)(lVar8 + 0x18) = uVar11;
      if (uVar11 == 0) {
        *(undefined4 *)(lVar8 + 0x1c) = 0;
        bVar14 = true;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(lVar8 + 0x10,uVar11,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(lVar8 + 0x10),_Src_00,(longlong)(int)uVar11 * 2);
        bVar14 = true;
      }
    }
    local_res20 = *(undefined8 *)(param_1 + 200);
    local_78 = (undefined4 *)0x0;
    local_70 = 1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_78,0);
    _Src = local_78;
    uVar4 = *(undefined4 *)(param_1 + 100);
    uVar5 = *(undefined4 *)(param_1 + 0x68);
    uVar6 = *(undefined4 *)(param_1 + 0x6c);
    *local_78 = *(undefined4 *)(param_1 + 0x60);
    local_78[1] = uVar4;
    local_78[2] = uVar5;
    local_78[3] = uVar6;
    local_68 = (void *)0x0;
    lVar13 = (longlong)(int)local_70;
    local_60 = (int)local_70;
    if ((int)local_70 == 0) {
      local_5c = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_68,local_70 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_68,_Src,lVar13 << 4);
    }
    local_res18 = 0;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    local_res8 = 0x2bca2875f4373fff;
    uVar10 = FUN_1421d00e0();
    FUN_1408494a0(local_res20,lVar8,uVar10,&local_58,&local_68,&local_res18,&local_res8);
    plVar7 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      _Src = local_78;
      _Src_00 = local_88;
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        _Src = local_78;
        _Src_00 = local_88;
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
          _Src = local_78;
          _Src_00 = local_88;
        }
      }
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free();
    }
    FMemory::Free(_Src);
    if ((bVar14) && (_Src_00 != (void *)0x0)) {
      FMemory::Free(_Src_00);
    }
  }
  return;
}



// FUNCTION 142a6ff50 FUN_142a6ff50 body=435 status=ok
// SIG undefined FUN_142a6ff50(void)

void FUN_142a6ff50(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined8 uStack_60;
  uint *local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_2,0);
  uStack_84 = 1;
  local_88 = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  local_58 = (uint *)(param_1 + 0x28);
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar1 != 0) {
    puVar9 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar9 = local_58;
    }
    uVar2 = *puVar9;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar2 == 0) {
      lVar8 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar5 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar5) goto LAB_142a70022;
      uVar2 = puVar9[lVar8 + 1];
    }
    uStack_84 = -uVar2 & uVar2;
    iVar7 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_74 = (iStack_70 - iVar7) + 0x1f;
    if (iVar1 < iStack_74) {
LAB_142a70022:
      iStack_74 = iVar1;
    }
  }
  uStack_60 = CONCAT44(uStack_84,local_88);
  uStack_28 = 0xffffffff;
  iStack_24 = iStack_74;
  iStack_20 = iStack_70;
  uStack_50 = 0xffffffff;
  iStack_4c = iStack_74;
  local_48 = iStack_70;
  local_40 = (longlong *)(param_1 + 0x18);
  uStack_38 = uStack_60;
  puStack_30 = local_58;
  if (iStack_74 < iVar1) {
    do {
      lVar8 = *(longlong *)(param_1 + 0x18);
      lVar3 = *(longlong *)(lVar8 + 0x18 + (longlong)iStack_4c * 0x28);
      uVar4 = *(undefined8 *)(lVar8 + 0x10 + (longlong)iStack_4c * 0x28);
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
      }
      puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
      *puVar6 = uVar4;
      puVar6[1] = lVar3;
      uStack_50 = uStack_50 & ~uStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  return;
}



// FUNCTION 142a70180 FUN_142a70180 body=532 status=ok
// SIG undefined FUN_142a70180(void)

void FUN_142a70180(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined8 uStack_70;
  uint *local_68;
  uint uStack_60;
  int iStack_5c;
  int local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  
  iVar14 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0xa4);
  iVar13 = (int)param_2[1];
  if (iVar13 != 0) {
    plVar11 = (longlong *)(*param_2 + 8);
    do {
      plVar5 = (longlong *)*plVar11;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
      plVar11 = plVar11 + 2;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar14) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar14);
  }
  local_98 = 0;
  iVar13 = *(int *)(param_1 + 0x98);
  local_68 = (uint *)(param_1 + 0x80);
  uStack_94 = 1;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar13 != 0) {
    puVar12 = *(uint **)(param_1 + 0x90);
    if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
      puVar12 = local_68;
    }
    uVar4 = *puVar12;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar10 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar14 = local_98 + 1;
      bVar8 = (int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar14;
      if (bVar8) goto LAB_142a702be;
      uVar4 = puVar12[lVar10 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
    iVar14 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar14 = 0x20;
    }
    else {
      iVar14 = 0x1f - iVar14;
    }
    iStack_84 = (iStack_80 - iVar14) + 0x1f;
    if (iVar13 < iStack_84) {
LAB_142a702be:
      iStack_84 = iVar13;
    }
  }
  uStack_70 = CONCAT44(uStack_94,local_98);
  uStack_38 = 0xffffffff;
  iStack_34 = iStack_84;
  iStack_30 = iStack_80;
  uStack_60 = 0xffffffff;
  iStack_5c = iStack_84;
  local_58 = iStack_80;
  local_50 = (longlong *)(param_1 + 0x70);
  uStack_48 = uStack_70;
  puStack_40 = local_68;
  if (iStack_84 < iVar13) {
    do {
      lVar10 = *(longlong *)(param_1 + 0x70);
      lVar6 = *(longlong *)(lVar10 + 0x18 + (longlong)iStack_5c * 0x28);
      uVar7 = *(undefined8 *)(lVar10 + 0x10 + (longlong)iStack_5c * 0x28);
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      iVar13 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar13 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar13 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar13);
      }
      puVar9 = (undefined8 *)((longlong)iVar13 * 0x10 + *param_2);
      *puVar9 = uVar7;
      puVar9[1] = lVar6;
      uStack_60 = uStack_60 & ~uStack_70._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
  }
  return;
}



// FUNCTION 142a703a0 FUN_142a703a0 body=216 status=ok
// SIG undefined FUN_142a703a0(void)

void FUN_142a703a0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int local_res10 [2];
  
  if (((*(int *)(param_2 + 0x44) != 0 || *(int *)(param_2 + 0x40) != 0) ||
      *(int *)(param_2 + 0x3c) != 0) || *(int *)(param_2 + 0x38) != 0) {
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x70,local_res10);
    if ((local_res10[0] == -1) ||
       (lVar3 = *(longlong *)(param_1 + 0x70) + (longlong)local_res10[0] * 0x28, lVar3 == 0)) {
      lVar5 = 0;
      plVar6 = (longlong *)0x0;
    }
    else {
      lVar5 = *(longlong *)(lVar3 + 0x10);
      plVar6 = *(longlong **)(lVar3 + 0x18);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
    }
    if (lVar5 != 0) {
      FUN_142a731d0(lVar5,param_2,param_3);
      TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x148);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
  }
  return;
}



// FUNCTION 142a70480 FUN_142a70480 body=214 status=ok
// SIG undefined FUN_142a70480(void)

void FUN_142a70480(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_18);
  local_28 = *puVar6;
  local_20 = (longlong *)puVar6[1];
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  TBaseMulticastDelegate<void,TSharedRef<ISessionInfo,0>_const_&,TSharedRef<ISessionInstanceInfo,0>_const_&,TSharedRef<FSessionLogMessage,0>_const_&>
  ::Broadcast(param_1 + 0xd0,&local_28,param_2,param_3);
  plVar3 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 142a70580 FUN_142a70580 body=169 status=ok
// SIG undefined FUN_142a70580(void)

void FUN_142a70580(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_1421d0260();
  if (lVar3 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x18);
  plVar1 = (longlong *)*param_2;
  lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
    cVar2 = FWeakObjectPtr::IsValid(uVar5,0,1);
    if (cVar2 != '\0') {
      uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
      lVar4 = FWeakObjectPtr::Get(uVar5);
      lVar4 = *(longlong *)(lVar4 + 0x18);
      goto LAB_142a705f5;
    }
  }
  lVar4 = 0;
LAB_142a705f5:
  if (lVar4 == lVar3) {
    uVar5 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),uVar5,param_2);
  }
  return;
}



// FUNCTION 142a70630 FUN_142a70630 body=169 status=ok
// SIG undefined FUN_142a70630(void)

void FUN_142a70630(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_142a6d0b0();
  if (lVar3 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x18);
  plVar1 = (longlong *)*param_2;
  lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
    cVar2 = FWeakObjectPtr::IsValid(uVar5,0,1);
    if (cVar2 != '\0') {
      uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
      lVar4 = FWeakObjectPtr::Get(uVar5);
      lVar4 = *(longlong *)(lVar4 + 0x18);
      goto LAB_142a706a5;
    }
  }
  lVar4 = 0;
LAB_142a706a5:
  if (lVar4 == lVar3) {
    uVar5 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),uVar5,param_2);
  }
  return;
}



// FUNCTION 142a706e0 FUN_142a706e0 body=169 status=ok
// SIG undefined FUN_142a706e0(void)

void FUN_142a706e0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_142a6d130();
  if (lVar3 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x18);
  plVar1 = (longlong *)*param_2;
  lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
    cVar2 = FWeakObjectPtr::IsValid(uVar5,0,1);
    if (cVar2 != '\0') {
      uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
      lVar4 = FWeakObjectPtr::Get(uVar5);
      lVar4 = *(longlong *)(lVar4 + 0x18);
      goto LAB_142a70755;
    }
  }
  lVar4 = 0;
LAB_142a70755:
  if (lVar4 == lVar3) {
    uVar5 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),uVar5,param_2);
  }
  return;
}



// FUNCTION 142a70790 FUN_142a70790 body=169 status=ok
// SIG undefined FUN_142a70790(void)

void FUN_142a70790(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_142a6d1b0();
  if (lVar3 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x18);
  plVar1 = (longlong *)*param_2;
  lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
    cVar2 = FWeakObjectPtr::IsValid(uVar5,0,1);
    if (cVar2 != '\0') {
      uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
      lVar4 = FWeakObjectPtr::Get(uVar5);
      lVar4 = *(longlong *)(lVar4 + 0x18);
      goto LAB_142a70805;
    }
  }
  lVar4 = 0;
LAB_142a70805:
  if (lVar4 == lVar3) {
    uVar5 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),uVar5,param_2);
  }
  return;
}



// FUNCTION 142a70840 FUN_142a70840 body=169 status=ok
// SIG undefined FUN_142a70840(void)

void FUN_142a70840(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_142a6d230();
  if (lVar3 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x18);
  plVar1 = (longlong *)*param_2;
  lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
    cVar2 = FWeakObjectPtr::IsValid(uVar5,0,1);
    if (cVar2 != '\0') {
      uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
      lVar4 = FWeakObjectPtr::Get(uVar5);
      lVar4 = *(longlong *)(lVar4 + 0x18);
      goto LAB_142a708b5;
    }
  }
  lVar4 = 0;
LAB_142a708b5:
  if (lVar4 == lVar3) {
    uVar5 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),uVar5,param_2);
  }
  return;
}



// FUNCTION 142a708f0 FUN_142a708f0 body=169 status=ok
// SIG undefined FUN_142a708f0(void)

void FUN_142a708f0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_142a6d2b0();
  if (lVar3 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x18);
  plVar1 = (longlong *)*param_2;
  lVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
    cVar2 = FWeakObjectPtr::IsValid(uVar5,0,1);
    if (cVar2 != '\0') {
      uVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
      lVar4 = FWeakObjectPtr::Get(uVar5);
      lVar4 = *(longlong *)(lVar4 + 0x18);
      goto LAB_142a70965;
    }
  }
  lVar4 = 0;
LAB_142a70965:
  if (lVar4 == lVar3) {
    uVar5 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),uVar5,param_2);
  }
  return;
}



// FUNCTION 142a709a0 FUN_142a709a0 body=694 status=ok
// SIG undefined FUN_142a709a0(void)

void FUN_142a709a0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  lVar6 = operator_new(0x50);
  plVar10 = (longlong *)0x0;
  plVar7 = plVar10;
  if (lVar6 != 0) {
    plVar7 = (longlong *)
             FSessionLogMessage::FSessionLogMessage
                       (lVar6,param_1 + 0x78,param_1 + 0x88,(float)*(double *)(param_2 + 0x28),
                        param_2 + 8,*(undefined1 *)(param_2 + 0x30),param_2);
  }
  plVar8 = (longlong *)operator_new(0x18);
  local_30 = plVar10;
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
    *plVar8 = (longlong)&PTR_DestroyObject_14536b038;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    plVar8[2] = (longlong)plVar7;
    local_30 = plVar8;
  }
  local_38 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_38,plVar7,plVar7);
  plVar8 = local_30;
  plVar7 = local_38;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0xc0);
  *(int *)(param_1 + 0xc0) = iVar4 + 1;
  if (*(int *)(param_1 + 0xc4) < iVar4 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xb8,iVar4);
  }
  puVar9 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0xb8));
  *puVar9 = plVar7;
  puVar9[1] = plVar8;
  plVar7 = *(longlong **)(param_1 + 0x10);
  plVar8 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar7[1];
    bVar12 = iVar4 == 0;
    if (bVar12) {
      *(int *)(plVar7 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar8 = plVar10, !bVar12) {
      LOCK();
      bVar12 = iVar4 == (int)plVar7[1];
      if (bVar12) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar12) {
        plVar8 = plVar7;
        if (plVar7 != (longlong *)0x0) {
          plVar10 = *(longlong **)(param_1 + 8);
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar8 = plVar7 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          plVar8 = plVar7;
          if ((int)lVar6 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar12 = iVar4 == 0;
      if (bVar12) {
        *(int *)(plVar7 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  bVar12 = false;
  *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
  iVar4 = *(int *)(param_1 + 0x114);
  iVar5 = *(int *)(param_1 + 0x108) + -1;
  lVar6 = (longlong)iVar5;
  local_28 = plVar10;
  local_20 = plVar8;
  if (-1 < iVar5) {
    lVar11 = lVar6 << 4;
    bVar12 = false;
    do {
      lVar2 = *(longlong *)(param_1 + 0x100);
      if (((*(int *)(lVar11 + 8 + lVar2) == 0) ||
          (plVar10 = *(longlong **)(lVar11 + lVar2), plVar10 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar10 + 0x40))(plVar10,&local_28,&local_38), cVar3 == '\0')) {
        bVar12 = true;
      }
      lVar11 = lVar11 + -0x10;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
    iVar4 = *(int *)(param_1 + 0x114);
  }
  *(int *)(param_1 + 0x114) = iVar4 + -1;
  if (bVar12) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x100),0);
  }
  plVar10 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_20 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar10 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return;
}



// FUNCTION 142a70c60 HandleSessionLogSubscribeMessage body=154 status=ok
// SIG undefined HandleSessionLogSubscribeMessage(void)

void FSessionService::HandleSessionLogSubscribeMessage
               (longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  BOOL BVar5;
  int iVar6;
  undefined4 *puVar7;
  
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  puVar7 = (undefined4 *)(**(code **)(*(longlong *)*param_3 + 0x40))();
  iVar6 = TArray<FGuid,FDefaultAllocator>::IndexOfByKey<FGuid>(param_1 + 0x18,puVar7);
  if (iVar6 == -1) {
    iVar6 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = iVar6 + 1;
    if (*(int *)(param_1 + 0x24) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x18,iVar6);
    }
    uVar2 = puVar7[1];
    uVar3 = puVar7[2];
    uVar4 = puVar7[3];
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 0x10);
    *puVar1 = *puVar7;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000142a70cf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 142a70d00 FUN_142a70d00 body=385 status=ok
// SIG undefined FUN_142a70d00(void)

void FUN_142a70d00(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x28);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  piVar2 = (int *)(**(code **)(*(longlong *)*param_3 + 0x40))();
  lVar7 = (longlong)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar8 = 0;
    piVar3 = *(int **)(param_1 + 0x18);
    bVar9 = ((piVar3[3] != piVar2[3] || piVar3[1] != piVar2[1]) || piVar3[2] != piVar2[2]) ||
            *piVar2 != *piVar3;
    lVar6 = 0;
    iVar4 = 0;
    do {
      lVar6 = lVar6 + 1;
      iVar5 = iVar4 + 1;
      if (lVar6 < lVar7) {
        piVar3 = (int *)(lVar6 * 0x10 + *(longlong *)(param_1 + 0x18));
        do {
          if (bVar9 != (((piVar3[1] != piVar2[1] || piVar3[2] != piVar2[2]) ||
                        piVar3[3] != piVar2[3]) || *piVar3 != *piVar2)) break;
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + 1;
          piVar3 = piVar3 + 4;
        } while (lVar6 < lVar7);
      }
      if (bVar9 != false) {
        if (iVar8 != iVar4) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar8 * 0x10 + *(longlong *)(param_1 + 0x18)),
                     (void *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x18)),
                     (longlong)(iVar5 - iVar4) << 4);
        }
        iVar8 = iVar8 + (iVar5 - iVar4);
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar4 = iVar5;
    } while (lVar6 < lVar7);
    *(int *)(param_1 + 0x20) = iVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x000142a70e7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 142a70ea0 FUN_142a70ea0 body=1329 status=ok
// SIG undefined FUN_142a70ea0(void)

void FUN_142a70ea0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  longlong *plVar15;
  undefined2 *puVar16;
  longlong lVar17;
  longlong **pplVar18;
  bool bVar19;
  int local_res20 [2];
  int local_a8 [2];
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  int local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int *local_68;
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  piVar1 = (int *)(param_2 + 0x60);
  if ((((*(int *)(param_2 + 0x6c) != 0 || *(int *)(param_2 + 0x68) != 0) ||
       *(int *)(param_2 + 100) != 0) || *piVar1 != 0) &&
     (((*(char *)(param_2 + 0x90) != '\0' ||
       (cVar7 = FSessionManager::IsValidOwner(), cVar7 != '\0')) &&
      (plVar2 = *(longlong **)(param_1 + 0x38), plVar2 != (longlong *)0x0)))) {
    LOCK();
    iVar8 = (int)plVar2[1];
    bVar19 = iVar8 == 0;
    if (bVar19) {
      *(int *)(plVar2 + 1) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    while (!bVar19) {
      LOCK();
      bVar19 = iVar8 == (int)plVar2[1];
      if (bVar19) {
        *(int *)(plVar2 + 1) = iVar8 + 1;
      }
      UNLOCK();
      if (bVar19) {
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        local_78 = *(undefined1 **)(param_1 + 0x30);
        if (local_78 == (undefined1 *)0x0) goto LAB_142a71386;
        TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
        ::FindId(param_1 + 0x70,local_res20,piVar1);
        if ((local_res20[0] == -1) ||
           (lVar17 = *(longlong *)(param_1 + 0x70) + (longlong)local_res20[0] * 0x28, lVar17 == 0))
        {
          local_68 = piVar1;
          FUN_142a6e390(param_1 + 0x70,local_a8,&local_68,0);
          lVar17 = *(longlong *)(param_1 + 0x70) + (longlong)local_a8[0] * 0x28;
        }
        pplVar18 = (longlong **)(lVar17 + 0x10);
        if (*(longlong **)(lVar17 + 0x10) == (longlong *)0x0) {
          plVar10 = (longlong *)operator_new(0xe8);
          plVar12 = (longlong *)0x0;
          plVar13 = plVar12;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
            plVar10[1] = 0;
            plVar10[2] = 0;
            *plVar10 = (longlong)&PTR_FUN_14536ad78;
            plVar10[3] = 0;
            plVar10[4] = 0;
            plVar10[7] = 0;
            plVar10[8] = 0;
            *(undefined4 *)(plVar10 + 9) = 0xffffffff;
            *(undefined4 *)((longlong)plVar10 + 0x4c) = 0;
            plVar10[0xb] = 0;
            *(undefined4 *)(plVar10 + 0xc) = 0;
            plVar10[0xe] = (longlong)local_78;
            plVar10[0xf] = (longlong)plVar2;
            LOCK();
            *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
            UNLOCK();
            uVar3 = *(undefined4 *)(param_2 + 100);
            uVar4 = *(undefined4 *)(param_2 + 0x68);
            uVar5 = *(undefined4 *)(param_2 + 0x6c);
            *(int *)(plVar10 + 0x10) = *piVar1;
            *(undefined4 *)((longlong)plVar10 + 0x84) = uVar3;
            *(undefined4 *)(plVar10 + 0x11) = uVar4;
            *(undefined4 *)((longlong)plVar10 + 0x8c) = uVar5;
            plVar10[0x12] = 0;
            plVar10[0x13] = 0;
            plVar10[0x14] = 0;
            plVar10[0x15] = 0;
            plVar10[0x17] = 0;
            plVar10[0x18] = 0;
            plVar10[0x19] = 2;
            plVar10[0x1a] = 0;
            plVar10[0x1b] = 0;
            plVar10[0x1c] = 2;
            plVar13 = plVar10;
          }
          plVar11 = (longlong *)operator_new(0x18);
          if (plVar11 != (longlong *)0x0) {
            *(undefined4 *)(plVar11 + 1) = 1;
            *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
            *plVar11 = (longlong)&PTR_FUN_14536b028;
            plVar11[2] = (longlong)plVar13;
            plVar12 = plVar11;
          }
          plVar11 = plVar13 + 1;
          if (plVar13 == (longlong *)0x0) {
            plVar11 = (longlong *)0x0;
          }
          local_a0 = plVar13;
          local_98 = plVar12;
          if (plVar11 != (longlong *)0x0) {
            if ((*plVar11 != 0) && (plVar11[1] != 0)) {
              piVar1 = (int *)(plVar11[1] + 8);
              LOCK();
              iVar8 = *piVar1;
              if (iVar8 == 0) {
                *piVar1 = 0;
                iVar8 = 0;
              }
              UNLOCK();
              if (0 < iVar8) goto LAB_142a711cc;
            }
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
            }
            *plVar11 = (longlong)plVar13;
            plVar15 = (longlong *)plVar11[1];
            if (plVar12 != plVar15) {
              if (plVar12 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
                UNLOCK();
                plVar15 = (longlong *)plVar11[1];
              }
              if (plVar15 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar15 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar15 + 8))();
                }
              }
              plVar11[1] = (longlong)plVar12;
            }
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              plVar11 = plVar12 + 1;
              lVar6 = *plVar11;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*plVar12)();
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar12 + 8))();
                }
              }
            }
          }
LAB_142a711cc:
          if (pplVar18 != &local_a0) {
            local_a0 = (longlong *)0x0;
            *pplVar18 = plVar13;
            SharedPointerInternals::FSharedReferencer<1>::operator=(lVar17 + 0x18);
          }
          plVar12 = local_98;
          if (local_98 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_98 + 1;
            lVar17 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*local_98)(local_98);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_98 + 8))();
              }
            }
          }
          if ((plVar10 != (longlong *)0x0) && (plVar2 != (longlong *)0x0)) {
            LOCK();
            plVar12 = plVar2 + 1;
            lVar17 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*plVar2)(plVar2);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar2 + 8))(plVar2);
              }
            }
          }
          local_78 = &LAB_142a70560;
          uStack_70 = 0;
          plVar12 = (longlong *)(**(code **)(**pplVar18 + 0x48))();
          local_58 = (undefined4)local_78;
          uStack_54 = local_78._4_4_;
          uStack_50 = uStack_70;
          uStack_4c = uStack_6c;
          plVar13 = (longlong *)FUN_142a6e1e0(&local_90,param_1,&local_58);
          if (((int)plVar13[1] != 0) && (*plVar13 != 0)) {
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar12,1);
            if (((int)plVar13[1] != 0) &&
               (plVar10 = (longlong *)*plVar13, plVar10 != (longlong *)0x0)) {
              (**(code **)(*plVar10 + 0x20))(plVar10,local_60);
            }
            iVar8 = (int)plVar12[1];
            *(int *)(plVar12 + 1) = iVar8 + 1;
            if (*(int *)((longlong)plVar12 + 0xc) < iVar8 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar8);
            }
            plVar12 = (longlong *)((longlong)iVar8 * 0x10 + *plVar12);
            *plVar12 = 0;
            *plVar12 = *plVar13;
            *plVar13 = 0;
            *(int *)(plVar12 + 1) = (int)plVar13[1];
            *(undefined4 *)(plVar13 + 1) = 0;
          }
          if (local_88 == 0) {
LAB_142a7134d:
            if (local_90 != (longlong *)0x0) {
              FMemory::Free(local_90);
            }
          }
          else if (local_90 != (longlong *)0x0) {
            (**(code **)(*local_90 + 0x28))(local_90,0);
            if (local_90 != (longlong *)0x0) {
              local_90 = (longlong *)FMemory::Realloc(local_90,0,0);
            }
            local_88 = 0;
            goto LAB_142a7134d;
          }
          FUN_142a73460(*pplVar18,param_2,param_3);
        }
        else {
          puVar9 = (undefined8 *)(**(code **)(**(longlong **)(lVar17 + 0x10) + 0x28))();
          puVar14 = &DAT_143f3eda8;
          if (*(int *)(param_2 + 0x88) == 0) {
            puVar16 = &DAT_143f3eda8;
          }
          else {
            puVar16 = *(undefined2 **)(param_2 + 0x80);
          }
          if (*(int *)(puVar9 + 1) != 0) {
            puVar14 = (undefined2 *)*puVar9;
          }
          iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar16);
          FUN_142a73460(*pplVar18,param_2,param_3);
          if (iVar8 == 0) goto LAB_142a71386;
        }
        TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x130);
LAB_142a71386:
        LOCK();
        plVar12 = plVar2 + 1;
        lVar17 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar17 != 1) {
          return;
        }
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 != 1) {
          return;
        }
        (**(code **)(*plVar2 + 8))(plVar2,1);
        return;
      }
      LOCK();
      iVar8 = (int)plVar2[1];
      bVar19 = iVar8 == 0;
      if (bVar19) {
        *(int *)(plVar2 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 142a713e0 HandleTicker body=58 status=ok
// SIG undefined HandleTicker(void)

undefined8 FSessionManager::HandleTicker(longlong param_1)

{
  longlong local_res8 [4];
  
  FDateTime::UtcNow(local_res8);
  if (*(longlong *)(param_1 + 0x28) + 25000000 <= local_res8[0]) {
    SendPing(param_1);
  }
  return 1;
}



// FUNCTION 142a71420 InitializeModule body=117 status=ok
// SIG undefined InitializeModule(void)

undefined8 * FStaticallyLinkedModuleRegistrant<FSessionServicesModule>::InitializeModule(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  FSelfRegisteringExec::FSelfRegisteringExec();
  *puVar1 = &PTR_FUN_14536a7d8;
  puVar1[1] = &PTR_LAB_14536a7e8;
  puVar1[2] = 0;
  puVar2 = puVar1 + 1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return puVar2;
}



// FUNCTION 142a714a0 FUN_142a714a0 body=191 status=ok
// SIG undefined FUN_142a714a0(void)

undefined8 FUN_142a714a0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar4 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,local_18);
  if (*plVar4 == *(longlong *)(param_1 + 0x60)) {
    plVar4 = *(longlong **)(param_1 + 0x50);
    plVar5 = plVar4 + (longlong)*(int *)(param_1 + 0x58) * 2;
    for (; plVar4 != plVar5; plVar4 = plVar4 + 2) {
      if ((*plVar4 != 0) && (*plVar4 == *param_2)) {
        uVar6 = 1;
        goto LAB_142a714f9;
      }
    }
  }
  uVar6 = 0;
LAB_142a714f9:
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 142a71570 IsValidOwner body=174 status=ok
// SIG undefined IsValidOwner(void)

uint FSessionManager::IsValidOwner(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar1 = FWindowsPlatformProcess::UserName(0);
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  uVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,uVar1);
  if (uVar2 != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0xf0);
    puVar6 = puVar5 + (longlong)*(int *)(param_1 + 0xf8) * 2;
    while( true ) {
      if (puVar5 == puVar6) {
        return uVar2 & 0xffffff00;
      }
      if (*(int *)(param_2 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*param_2;
      }
      if (*(int *)(puVar5 + 1) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = (undefined2 *)*puVar5;
      }
      uVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
      if (uVar2 == 0) break;
      puVar5 = puVar5 + 2;
    }
  }
  return 1;
}



// FUNCTION 142a71620 RefreshSessions body=463 status=ok
// SIG undefined RefreshSessions(void)

void FSessionManager::RefreshSessions(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  char local_40;
  char cStack_3f;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 0x70);
  local_78 = 0;
  uStack_74 = 1;
  iVar2 = *(int *)(param_1 + 0x98);
  puStack_28 = (uint *)(param_1 + 0x80);
  bVar5 = false;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar10 = *(uint **)(param_1 + 0x90);
    if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
      puVar10 = puStack_28;
    }
    uVar3 = *puVar10;
    local_78 = 0;
    uStack_60 = 0;
    while (uVar3 == 0) {
      lVar8 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar9 = local_78 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar9;
      if (bVar4) goto LAB_142a716ed;
      uVar3 = puVar10[lVar8 + 1];
    }
    uStack_74 = -uVar3 & uVar3;
    iVar9 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    local_68._4_4_ = (uStack_60 - iVar9) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_142a716ed:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  iStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = '\0';
  cStack_3f = '\0';
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar4 = local_68._4_4_ < *(int *)(param_1 + 0x98);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar4) {
    do {
      iVar2 = iStack_5c;
      uVar7 = (**(code **)(**(longlong **)(*plVar1 + 0x10 + (longlong)iStack_5c * 0x28) + 0x28))();
      cVar6 = IsValidOwner(param_1,uVar7);
      if (cVar6 == '\0') {
        FUN_142a717f0(local_58._8_8_,iVar2);
        local_40 = '\x01';
        bVar5 = true;
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if ((local_40 != '\0') && (cStack_3f != '\0')) {
      TSet<TTuple<FGuid,FLevelSequenceBindingReferenceArray>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceBindingReferenceArray,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
    if (bVar5) {
      TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x130);
    }
  }
  return;
}



// FUNCTION 142a717f0 FUN_142a717f0 body=228 status=ok
// SIG undefined FUN_142a717f0(void)

void FUN_142a717f0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = *param_1;
    lVar3 = lVar6 + (longlong)param_2 * 0x28;
    lVar8 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar3 + 0x24));
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    puVar4 = (undefined4 *)((longlong)plVar7 + lVar8 * 4);
    iVar5 = *(int *)((longlong)plVar7 + lVar8 * 4);
    while (iVar5 != -1) {
      if (iVar5 == param_2) {
        *puVar4 = *(undefined4 *)(lVar3 + 0x20);
        break;
      }
      lVar8 = (longlong)iVar5 * 5 + 4;
      puVar4 = (undefined4 *)(lVar6 + lVar8 * 8);
      iVar5 = *(int *)(lVar6 + lVar8 * 8);
    }
  }
  plVar7 = *(longlong **)(*param_1 + 0x18 + (longlong)param_2 * 0x28);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 142a718e0 RemoveOwner body=44 status=ok
// SIG undefined RemoveOwner(void)

void FSessionManager::RemoveOwner(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TArray<FString,FDefaultAllocator>::RemoveAll<<lambda_0089088ead215b5f35713e72b81bce1f>_>
            (param_1 + 0xf0,local_res8);
  RefreshSessions(param_1);
  return;
}



// FUNCTION 142a71910 FUN_142a71910 body=509 status=ok
// SIG undefined FUN_142a71910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142a71910(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  char local_68 [8];
  longlong local_60;
  longlong *plStack_58;
  undefined1 local_50 [8];
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0x60);
  plVar2 = (longlong *)*param_2;
  if (plVar2 == (longlong *)*plVar1) {
LAB_142a71ae5:
    uVar7 = 1;
  }
  else {
    if (plVar2 == (longlong *)0x0) {
LAB_142a7196d:
      local_68[0] = '\x01';
      *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
      bVar4 = false;
      iVar9 = *(int *)(param_1 + 0xd4);
      iVar6 = *(int *)(param_1 + 200) + -1;
      lVar10 = (longlong)iVar6;
      if (-1 < iVar6) {
        lVar11 = lVar10 << 4;
        bVar4 = false;
        do {
          lVar3 = *(longlong *)(param_1 + 0xc0);
          if ((*(int *)(lVar11 + 8 + lVar3) == 0) ||
             (plVar2 = *(longlong **)(lVar11 + lVar3), plVar2 == (longlong *)0x0)) {
LAB_142a719b9:
            bVar4 = true;
          }
          else {
            cVar5 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,local_68);
            if (cVar5 == '\0') goto LAB_142a719b9;
          }
          lVar11 = lVar11 + -0x10;
          lVar10 = lVar10 + -1;
        } while (-1 < lVar10);
        iVar9 = *(int *)(param_1 + 0xd4);
      }
      *(int *)(param_1 + 0xd4) = iVar9 + -1;
      if (bVar4) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                  ((longlong *)(param_1 + 0xc0),0);
      }
      if (local_68[0] != '\0') {
        TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty
                  (param_1 + 0x50,0);
        plVar2 = (longlong *)param_2[1];
        lVar10 = *param_2;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        local_60 = lVar10;
        plStack_58 = plVar2;
        if (&local_60 != plVar1) {
          local_60 = *plVar1;
          plStack_58 = *(longlong **)(param_1 + 0x68);
          *plVar1 = lVar10;
          *(longlong **)(param_1 + 0x68) = plVar2;
          local_48 = lVar10;
          plStack_40 = plVar2;
        }
        plVar1 = plStack_58;
        if (plStack_58 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_58 + 1;
          lVar10 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plStack_58)(plStack_58);
            LOCK();
            piVar8 = (int *)((longlong)plVar1 + 0xc);
            iVar9 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plStack_58 + 8))(plStack_58,1);
            }
          }
        }
        bVar4 = false;
        *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
        iVar9 = *(int *)(param_1 + 300);
        iVar6 = *(int *)(param_1 + 0x120) + -1;
        lVar10 = (longlong)iVar6;
        if (-1 < iVar6) {
          lVar11 = lVar10 << 4;
          bVar4 = false;
          do {
            lVar3 = *(longlong *)(param_1 + 0x118);
            if ((*(int *)(lVar11 + 8 + lVar3) == 0) ||
               (plVar1 = *(longlong **)(lVar11 + lVar3), plVar1 == (longlong *)0x0)) {
LAB_142a71ac0:
              bVar4 = true;
            }
            else {
              cVar5 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
              if (cVar5 == '\0') goto LAB_142a71ac0;
            }
            lVar11 = lVar11 + -0x10;
            lVar10 = lVar10 + -1;
          } while (-1 < lVar10);
          iVar9 = *(int *)(param_1 + 300);
        }
        *(int *)(param_1 + 300) = iVar9 + -1;
        if (bVar4) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                    ((longlong *)(param_1 + 0x118),0);
        }
        goto LAB_142a71ae5;
      }
    }
    else {
      uVar7 = (**(code **)(*plVar2 + 0x18))();
      piVar8 = (int *)TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
                      ::FindId(param_1 + 0x70,local_50,uVar7);
      if (*piVar8 != -1) goto LAB_142a7196d;
    }
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 142a71b10 FUN_142a71b10 body=672 status=ok
// SIG undefined FUN_142a71b10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a71b10(longlong param_1,short *param_2,undefined1 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  longlong *plVar6;
  BOOL BVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  void *_Src;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  LARGE_INTEGER local_res8;
  undefined8 local_88;
  undefined8 local_80;
  void *local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong *plStack_60;
  
  uVar12 = 0;
  local_res8.s.LowPart = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    if (BVar7 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    }
    if (0 < *(int *)(param_1 + 0x20)) {
      puVar8 = (undefined8 *)operator_new(0x38);
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
        _Src = local_78;
      }
      else {
        _Src = (void *)0x0;
        local_78 = (void *)0x0;
        local_70 = 0;
        if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
          lVar11 = -1;
          do {
            lVar11 = lVar11 + 1;
          } while (param_2[lVar11] != 0);
          uVar10 = (int)lVar11 + 1;
          local_70 = (ulonglong)uVar10;
          uVar12 = uVar10;
          if (0 < (int)uVar10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
            uVar12 = (uint)local_70;
          }
          _Src = local_78;
          FGenericPlatformString::Memcpy(local_78,param_2,(longlong)(int)uVar10 * 2);
        }
        QueryPerformanceCounter(&local_res8);
        uVar9 = uRam00000001468b5cc0;
        uVar4 = _DAT_1468b5cb8;
        dVar5 = ((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) * DAT_1468b02f8 +
                16777216.0) - DAT_1468e2430;
        *puVar8 = *param_4;
        puVar8[1] = 0;
        *(uint *)(puVar8 + 2) = uVar12;
        if (uVar12 == 0) {
          *(undefined4 *)((longlong)puVar8 + 0x14) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar8 + 1,uVar12,0);
          _guard_xfg_dispatch_icall_nop((void *)puVar8[1],_Src,(longlong)(int)uVar12 * 2);
        }
        uVar12 = 1;
        puVar8[5] = dVar5;
        puVar8[3] = uVar4;
        puVar8[4] = uVar9;
        *(undefined1 *)(puVar8 + 6) = param_3;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      local_80 = 0;
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      local_88 = 0x2bca2875f4373fff;
      uVar9 = FUN_142a6d0b0();
      FUN_1408494a0(uVar4,puVar8,uVar9,&local_68,param_1 + 0x18,&local_80,&local_88);
      plVar6 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_60 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        _Src = local_78;
        if ((int)lVar11 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          _Src = local_78;
          if (iVar3 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
            _Src = local_78;
          }
        }
      }
      if ((uVar12 != 0) && (_Src != (void *)0x0)) {
        FMemory::Free(_Src);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 142a71db0 SendPing body=484 status=ok
// SIG undefined SendPing(void)

/* WARNING: Type propagation algorithm not settling */

void FSessionManager::SendPing(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  short *psVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  void *pvVar9;
  void *_Src;
  ulonglong local_res8 [2];
  void *local_48;
  uint local_40;
  undefined4 local_3c;
  
  pvVar9 = (void *)0x0;
  local_res8[0] = local_res8[0] & 0xffffffff00000000;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar2 = operator_new(1);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    local_res8[0] = 0x2bca2875f4373fff;
    local_res8[1] = 0;
    uVar3 = FLiveLinkHeartbeatMessage::StaticStruct();
    FMessageEndpoint::Publish(uVar1,uVar2,uVar3,2,local_res8 + 1,local_res8);
    puVar4 = (undefined8 *)operator_new(0x10);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      _Src = local_48;
    }
    else {
      psVar5 = (short *)FWindowsPlatformProcess::UserName(0);
      local_48 = (void *)0x0;
      local_3c = 0;
      _Src = pvVar9;
      if ((psVar5 != (short *)0x0) && (pvVar9 = (void *)0x0, _Src = (void *)0x0, *psVar5 != 0)) {
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (psVar5[lVar7] != 0);
        uVar6 = (int)lVar7 + 1;
        local_40 = uVar6;
        if (0 < (int)uVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        }
        _Src = local_48;
        pvVar9 = (void *)(ulonglong)local_40;
        FGenericPlatformString::Memcpy(local_48,psVar5,(longlong)(int)uVar6 * 2);
      }
      *puVar4 = 0;
      iVar8 = (int)pvVar9;
      *(int *)(puVar4 + 1) = iVar8;
      if (iVar8 == 0) {
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        pvVar9 = (void *)0x1;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar4,pvVar9,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar4,_Src,(longlong)iVar8 * 2);
        pvVar9 = (void *)0x1;
      }
    }
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    local_res8[0] = 0x2bca2875f4373fff;
    local_res8[1] = 0;
    uVar2 = FUN_142a6d230();
    FMessageEndpoint::Publish(uVar1,puVar4,uVar2,2,local_res8 + 1,local_res8);
    if ((pvVar9 != (void *)0x0) && (_Src != (void *)0x0)) {
      FMemory::Free(_Src);
    }
  }
  puVar4 = (undefined8 *)FDateTime::UtcNow(local_res8);
  *(undefined8 *)(param_1 + 0x28) = *puVar4;
  return;
}



// FUNCTION 142a71fa0 FUN_142a71fa0 body=1321 status=ok
// SIG undefined FUN_142a71fa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a71fa0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  void **ppvVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  DWORD DVar11;
  undefined1 *_Dst;
  undefined8 uVar12;
  longlong *plVar13;
  short *_Src;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined2 *puVar16;
  void *pvVar17;
  longlong lVar18;
  void *pvVar19;
  void *pvVar20;
  undefined2 *puVar21;
  undefined4 *_Src_00;
  longlong local_res8;
  undefined8 *local_res10;
  undefined8 local_res20;
  longlong local_b8;
  undefined8 local_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  ulonglong local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48 [2];
  
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return;
  }
  local_res8 = param_1;
  local_res10 = param_2;
  _Dst = (undefined1 *)operator_new(0x98);
  if (_Dst == (undefined1 *)0x0) {
    _Dst = (undefined1 *)0x0;
  }
  else {
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x98);
    *(undefined8 *)(_Dst + 0x10) = 0;
    *(undefined8 *)(_Dst + 0x18) = 0;
    *(undefined8 *)(_Dst + 0x20) = 0;
    *(undefined8 *)(_Dst + 0x28) = 0;
    *(undefined8 *)(_Dst + 0x30) = 0;
    *(undefined8 *)(_Dst + 0x38) = 0;
    *(undefined8 *)(_Dst + 0x40) = 0;
    *(undefined8 *)(_Dst + 0x50) = 0;
    *(undefined8 *)(_Dst + 0x58) = 0;
    *(undefined8 *)(_Dst + 0x60) = 0;
    *(undefined8 *)(_Dst + 0x68) = 0;
    *(undefined8 *)(_Dst + 0x70) = 0;
    *(undefined8 *)(_Dst + 0x78) = 0;
    *(undefined8 *)(_Dst + 0x80) = 0;
    *(undefined8 *)(_Dst + 0x88) = 0;
  }
  pvVar20 = (void *)0x0;
  uVar12 = FWindowsPlatformProcess::UserName(0);
  if (*(int *)(param_3 + 1) == 0) {
    puVar16 = &DAT_143f3eda8;
  }
  else {
    puVar16 = (undefined2 *)*param_3;
  }
  iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(uVar12,puVar16);
  if (iVar9 != 0) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)*param_3;
    }
    puVar21 = &DAT_143f3eda8;
    if ((int)DAT_1468b5d38 != 0) {
      puVar21 = DAT_1468b5d30;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar21,puVar16);
    if (iVar9 != 0) {
      cVar7 = TArray<FString,FDefaultAllocator>::Contains<FString>(&DAT_1468b5d40,param_3);
      uVar8 = 0;
      if (cVar7 == '\0') goto LAB_142a720ac;
    }
  }
  uVar8 = 1;
LAB_142a720ac:
  *_Dst = uVar8;
  plVar13 = (longlong *)FApp::GetBuildDate(local_48);
  plVar1 = (longlong *)(_Dst + 8);
  if (plVar1 != plVar13) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar13;
    *plVar13 = 0;
    *(int *)(_Dst + 0x10) = (int)plVar13[1];
    *(undefined4 *)(_Dst + 0x14) = *(undefined4 *)((longlong)plVar13 + 0xc);
    plVar13[1] = 0;
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  _Src = (short *)FWindowsPlatformProcess::ComputerName();
  if (*(short **)(_Dst + 0x18) != _Src) {
    pvVar19 = pvVar20;
    if ((_Src != (short *)0x0) && (*_Src != 0)) {
      lVar18 = -1;
      do {
        lVar18 = lVar18 + 1;
      } while (_Src[lVar18] != 0);
      pvVar19 = (void *)(ulonglong)((int)lVar18 + 1);
    }
    *(undefined4 *)(_Dst + 0x20) = 0;
    iVar9 = (int)pvVar19;
    pvVar17 = pvVar20;
    if (*(int *)(_Dst + 0x24) != iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(_Dst + 0x18,pvVar19);
      pvVar17 = (void *)(ulonglong)*(uint *)(_Dst + 0x20);
    }
    iVar10 = iVar9 + (int)pvVar17;
    *(int *)(_Dst + 0x20) = iVar10;
    if (*(int *)(_Dst + 0x24) < iVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(_Dst + 0x18);
    }
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop(*(void **)(_Dst + 0x18),_Src,(longlong)iVar9 * 2);
    }
  }
  uVar12 = uRam00000001468b5cc0;
  *(undefined8 *)(_Dst + 0x28) = _DAT_1468b5cb8;
  *(undefined8 *)(_Dst + 0x30) = uVar12;
  DVar11 = FWindowsPlatformProcess::GetCurrentProcessId();
  uVar12 = FWindowsPlatformProcess::ComputerName();
  FString::PrintfImpl(&local_68,L"%s-%i",uVar12,DVar11);
  plVar1 = (longlong *)(_Dst + 0x38);
  if (plVar1 == &local_68) {
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = local_68;
    *(undefined4 *)(_Dst + 0x40) = local_60;
    *(undefined4 *)(_Dst + 0x44) = local_5c;
  }
  _Dst[0x48] = 0;
  local_b8 = 0;
  local_b0 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  lVar18 = local_b8;
  FGenericPlatformString::Convert<char,wchar_t>(local_b8,0x10,"WindowsNoEditor",0x10,0x3f);
  plVar1 = (longlong *)(_Dst + 0x50);
  if (plVar1 == &local_b8) {
    if (lVar18 != 0) {
      FMemory::Free(lVar18);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar18;
    *(undefined4 *)(_Dst + 0x58) = (undefined4)local_b0;
    *(undefined4 *)(_Dst + 0x5c) = local_b0._4_4_;
  }
  uVar6 = uRam00000001468b5d1c;
  uVar5 = uRam00000001468b5d18;
  uVar4 = uRam00000001468b5d14;
  local_a8 = (void *)0x0;
  *(undefined4 *)(_Dst + 0x60) = _DAT_1468b5d10;
  *(undefined4 *)(_Dst + 100) = uVar4;
  *(undefined4 *)(_Dst + 0x68) = uVar5;
  *(undefined4 *)(_Dst + 0x6c) = uVar6;
  pvVar19 = DAT_1468b5d20;
  iVar9 = (int)_DAT_1468b5d28;
  local_a0 = iVar9;
  if (iVar9 == 0) {
    local_9c = 0;
    pvVar17 = pvVar20;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,_DAT_1468b5d28 & 0xffffffff,0);
    pvVar17 = local_a8;
    _guard_xfg_dispatch_icall_nop(local_a8,pvVar19,(longlong)iVar9 * 2);
  }
  uVar4 = local_9c;
  iVar9 = local_a0;
  ppvVar2 = (void **)(_Dst + 0x70);
  if (ppvVar2 == &local_a8) {
    if (pvVar17 != (void *)0x0) {
      FMemory::Free(pvVar17);
    }
  }
  else {
    if (*ppvVar2 != (void *)0x0) {
      FMemory::Free();
    }
    *ppvVar2 = pvVar17;
    *(int *)(_Dst + 0x78) = iVar9;
    *(undefined4 *)(_Dst + 0x7c) = uVar4;
  }
  iVar9 = (int)DAT_1468b5d38;
  puVar16 = DAT_1468b5d30;
  local_98 = (void *)0x0;
  local_90 = (int)DAT_1468b5d38;
  if ((int)DAT_1468b5d38 == 0) {
    local_8c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,(int)DAT_1468b5d38,0);
    pvVar20 = local_98;
    _guard_xfg_dispatch_icall_nop(local_98,puVar16,(longlong)iVar9 * 2);
  }
  uVar4 = local_8c;
  iVar9 = local_90;
  ppvVar2 = (void **)(_Dst + 0x80);
  if (ppvVar2 == &local_98) {
    if (pvVar20 != (void *)0x0) {
      FMemory::Free(pvVar20);
    }
  }
  else {
    if (*ppvVar2 != (void *)0x0) {
      FMemory::Free();
    }
    *ppvVar2 = pvVar20;
    *(int *)(_Dst + 0x88) = iVar9;
    *(undefined4 *)(_Dst + 0x8c) = uVar4;
  }
  _Dst[0x90] = DAT_1464a97c0;
  uVar12 = *(undefined8 *)(local_res8 + 0x60);
  puVar14 = (undefined4 *)(**(code **)(*(longlong *)*local_res10 + 0x40))();
  local_88 = (undefined4 *)0x0;
  local_80 = 1;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_88,0);
  _Src_00 = local_88;
  uVar4 = puVar14[1];
  uVar5 = puVar14[2];
  uVar6 = puVar14[3];
  lVar18 = (longlong)(int)local_80;
  *local_88 = *puVar14;
  local_88[1] = uVar4;
  local_88[2] = uVar5;
  local_88[3] = uVar6;
  local_78 = (void *)0x0;
  local_70 = (int)local_80;
  if ((int)local_80 == 0) {
    local_6c = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_78,local_80 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_78,_Src_00,lVar18 << 4);
  }
  local_res20 = 0;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_res8 = 0x2bca2875f4373fff;
  uVar15 = FUN_142a6d2b0();
  FUN_1408494a0(uVar12,_Dst,uVar15,&local_58,&local_78,&local_res20,&local_res8);
  plVar1 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_50 + 1;
    lVar18 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    _Src_00 = local_88;
    if ((int)lVar18 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar9 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      _Src_00 = local_88;
      if (iVar9 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
        _Src_00 = local_88;
      }
    }
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  FMemory::Free(_Src_00);
  return;
}



// FUNCTION 142a724e0 FUN_142a724e0 body=905 status=ok
// SIG undefined FUN_142a724e0(void)

undefined8 FUN_142a724e0(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool local_res20;
  uint local_88;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  
  plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,local_50);
  lVar4 = *plVar8;
  lVar9 = *(longlong *)(param_1 + 0x60);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_48 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  if (lVar4 != lVar9) {
    return 0;
  }
  if (param_3 == '\0') {
    plVar8 = (longlong *)param_2[1];
    lVar4 = *param_2;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    iVar3 = *(int *)(param_1 + 0x58);
    lVar9 = (longlong)iVar3;
    uVar12 = 0;
    iVar7 = 0;
    if (iVar3 != 0) {
      local_88 = 0;
      local_res20 = **(longlong **)(param_1 + 0x50) != lVar4;
      uVar14 = uVar12;
      uVar15 = uVar12;
      do {
        iVar7 = (int)uVar15;
        uVar14 = uVar14 + 1;
        uVar15 = (ulonglong)(iVar7 + 1);
        if ((longlong)uVar14 < lVar9) {
          plVar10 = (longlong *)(uVar14 * 0x10 + *(longlong *)(param_1 + 0x50));
          do {
            if (local_res20 != (*plVar10 != lVar4)) break;
            uVar15 = (ulonglong)((int)uVar15 + 1);
            uVar14 = uVar14 + 1;
            plVar10 = plVar10 + 2;
          } while ((longlong)uVar14 < lVar9);
        }
        iVar13 = (int)uVar15 - iVar7;
        if (local_res20 == false) {
          if (iVar13 != 0) {
            plVar10 = (longlong *)((longlong)iVar7 * 0x10 + 8 + *(longlong *)(param_1 + 0x50));
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
                  piVar1 = (int *)((longlong)plVar5 + 0xc);
                  iVar7 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*plVar5 + 8))(plVar5,1);
                  }
                }
              }
              plVar10 = plVar10 + 2;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
            uVar12 = (ulonglong)local_88;
          }
        }
        else {
          iVar11 = (int)uVar12;
          if (iVar11 != iVar7) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar11 * 0x10 + *(longlong *)(param_1 + 0x50)),
                       (void *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x50)),
                       (longlong)iVar13 << 4);
          }
          local_88 = iVar11 + iVar13;
          uVar12 = (ulonglong)local_88;
        }
        local_res20 = (bool)(local_res20 ^ 1);
      } while ((longlong)uVar14 < lVar9);
      iVar7 = iVar3 - (int)uVar12;
      *(int *)(param_1 + 0x58) = (int)uVar12;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar8 + 1;
      lVar4 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if (iVar7 < 1) {
      return 1;
    }
    local_60 = *param_2;
    local_58 = (longlong *)param_2[1];
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(param_1 + 0xd8,&local_60,0);
    plVar8 = local_58;
  }
  else {
    plVar8 = *(longlong **)(param_1 + 0x50);
    plVar10 = plVar8 + (longlong)*(int *)(param_1 + 0x58) * 2;
    for (; plVar8 != plVar10; plVar8 = plVar8 + 2) {
      if ((*plVar8 != 0) && (*plVar8 == *param_2)) {
        return 1;
      }
    }
    lVar4 = param_2[1];
    lVar9 = *param_2;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    iVar3 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar3 + 1;
    if (*(int *)(param_1 + 0x5c) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x50),iVar3);
    }
    plVar8 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x50));
    *plVar8 = lVar9;
    plVar8[1] = lVar4;
    local_70 = *param_2;
    local_68 = (longlong *)param_2[1];
    if (local_68 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
    }
    TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(param_1 + 0xd8,&local_70,1);
    plVar8 = local_68;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return 1;
}



// FUNCTION 142a72870 Start body=1201 status=ok
// SIG undefined Start(void)

undefined8 FSessionService::Start(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  longlong local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined1 local_b8;
  longlong *local_b0;
  int local_a8;
  int local_a4;
  undefined1 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  plVar9 = *(longlong **)(param_1 + 0x48);
  plVar6 = (longlong *)0x0;
  plVar4 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar9[1];
    bVar11 = iVar3 == 0;
    if (bVar11) {
      *(int *)(plVar9 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar4 = plVar6, !bVar11) {
      LOCK();
      bVar11 = iVar3 == (int)plVar9[1];
      if (bVar11) {
        *(int *)(plVar9 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar11) {
        plVar4 = plVar9;
        if ((plVar9 != (longlong *)0x0) && (lVar10 = *(longlong *)(param_1 + 0x40), lVar10 != 0)) {
          local_60 = &LAB_142a70e90;
          local_70 = FUN_142a70d00;
          uStack_58 = 0;
          local_80 = HandleSessionLogSubscribeMessage;
          uStack_68 = 0;
          uStack_78 = 0;
          FName::FName(&local_res20,"FSessionService",1);
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
          UNLOCK();
          local_98 = local_res20;
          local_b8 = 0;
          local_b0 = (longlong *)0x0;
          local_a4 = 0;
          local_a0 = 0;
          local_c8 = lVar10;
          local_c0 = plVar9;
          plVar4 = (longlong *)FTaskGraphInterface::Get();
          local_90 = (**(code **)(*plVar4 + 0x10))(plVar4,0);
          plVar4 = (longlong *)operator_new(0x20);
          lVar10 = param_1 + -0x10;
          local_f8 = plVar6;
          if (plVar4 != (longlong *)0x0) {
            plVar4[1] = lVar10;
            *plVar4 = (longlong)&PTR_FUN_14536aff8;
            *(undefined4 *)(plVar4 + 2) = (undefined4)local_80;
            *(undefined4 *)((longlong)plVar4 + 0x14) = local_80._4_4_;
            *(undefined4 *)(plVar4 + 3) = uStack_78;
            *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_74;
            local_f8 = plVar4;
          }
          plVar4 = (longlong *)operator_new(0x18);
          local_f0 = plVar6;
          if (plVar4 != (longlong *)0x0) {
            *(undefined4 *)(plVar4 + 1) = 1;
            *plVar4 = (longlong)&PTR_FUN_143f3f2d0;
            *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
            plVar4[2] = (longlong)local_f8;
            local_f0 = plVar4;
          }
          SharedPointerInternals::EnableSharedFromThis(&local_f8,local_f8,local_f8);
          local_a8 = 1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_b0,0);
          plVar4 = local_b0;
          *local_b0 = (longlong)local_f8;
          local_b0[1] = (longlong)local_f0;
          local_f0 = (longlong *)0x0;
          local_f8 = (longlong *)0x0;
          plVar5 = (longlong *)operator_new(0x20);
          local_e8 = plVar6;
          if (plVar5 != (longlong *)0x0) {
            plVar5[1] = lVar10;
            *plVar5 = (longlong)&PTR_FUN_14536b008;
            *(undefined4 *)(plVar5 + 2) = (undefined4)local_70;
            *(undefined4 *)((longlong)plVar5 + 0x14) = local_70._4_4_;
            *(undefined4 *)(plVar5 + 3) = uStack_68;
            *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_64;
            local_e8 = plVar5;
          }
          plVar5 = (longlong *)operator_new(0x18);
          if (plVar5 != (longlong *)0x0) {
            *(undefined4 *)(plVar5 + 1) = 1;
            *plVar5 = (longlong)&PTR_FUN_143f3f2d0;
            *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
            plVar5[2] = (longlong)local_e8;
            plVar6 = plVar5;
          }
          local_e0 = plVar6;
          SharedPointerInternals::EnableSharedFromThis(&local_e8,local_e8,local_e8);
          iVar3 = local_a8;
          lVar8 = (longlong)local_a8;
          local_a8 = local_a8 + 1;
          if (local_a4 < local_a8) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_b0,iVar3);
            plVar4 = local_b0;
          }
          iVar2 = local_a4;
          iVar3 = local_a8;
          plVar4[lVar8 * 2] = (longlong)local_e8;
          plVar4[lVar8 * 2 + 1] = (longlong)local_e0;
          local_e0 = (longlong *)0x0;
          local_e8 = (longlong *)0x0;
          local_d8 = (undefined8 *)operator_new(0x20);
          if (local_d8 == (undefined8 *)0x0) {
            local_d8 = (undefined8 *)0x0;
          }
          else {
            local_d8[1] = lVar10;
            *local_d8 = &PTR_FUN_14536b018;
            *(undefined4 *)(local_d8 + 2) = (undefined4)local_60;
            *(undefined4 *)((longlong)local_d8 + 0x14) = local_60._4_4_;
            *(undefined4 *)(local_d8 + 3) = uStack_58;
            *(undefined4 *)((longlong)local_d8 + 0x1c) = uStack_54;
          }
          local_d0 = (undefined8 *)operator_new(0x18);
          if (local_d0 != (undefined8 *)0x0) {
            *(undefined4 *)(local_d0 + 1) = 1;
            *local_d0 = &PTR_FUN_143f3f2d0;
            *(undefined4 *)((longlong)local_d0 + 0xc) = 1;
            local_d0[2] = local_d8;
          }
          SharedPointerInternals::EnableSharedFromThis(&local_d8,local_d8,local_d8);
          local_a8 = iVar3 + 1;
          if (iVar2 < local_a8) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_b0,iVar3);
            plVar4 = local_b0;
          }
          plVar4[(longlong)iVar3 * 2] = (longlong)local_d8;
          plVar4[(longlong)iVar3 * 2 + 1] = (longlong)local_d0;
          local_d0 = (undefined8 *)0x0;
          local_d8 = (undefined8 *)0x0;
          FMessageEndpointBuilder::Build(&local_c8,&local_108);
          plVar6 = (longlong *)(param_1 + 0x50);
          if (plVar6 != &local_108) {
            *plVar6 = local_108;
            local_108 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x58,&local_100);
          }
          plVar4 = local_100;
          if (local_100 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_100 + 1;
            lVar10 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_100)(local_100);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_100 + 8))(local_100,1);
              }
            }
          }
          TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
          ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_b0);
          if (local_c0 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_c0 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_c0 + 8))(local_c0,1);
            }
          }
          LOCK();
          plVar4 = plVar9 + 1;
          lVar10 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
          lVar10 = *plVar6;
          plVar4 = plVar9;
          if (lVar10 != 0) {
            local_res10[0] = 0x20001;
            lVar8 = FUN_142a6d230();
            local_88 = *(undefined8 *)(lVar8 + 0x18);
            FMessageEndpoint::Subscribe(lVar10,&local_88,local_res10);
            uVar7 = FUN_141672640();
            FOutputDeviceRedirector::AddOutputDevice(uVar7,param_1 + -0x10);
            uVar7 = 1;
            goto LAB_142a728c9;
          }
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar9[1];
      bVar11 = iVar3 == 0;
      if (bVar11) {
        *(int *)(plVar9 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  uVar7 = 0;
  plVar9 = plVar4;
LAB_142a728c9:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar10 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 142a72d30 Stop body=161 status=ok
// SIG undefined Stop(void)

void FSessionService::Stop(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 local_18;
  longlong *local_10;
  
  cVar6 = (**(code **)*param_1)();
  if (cVar6 != '\0') {
    uVar7 = FUN_141672640();
    FOutputDeviceRedirector::RemoveOutputDevice(uVar7);
    local_10 = (longlong *)0x0;
    if (param_1 + 10 != &local_18) {
      param_1[10] = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb,&local_10);
      plVar5 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142a72de0 Terminate body=392 status=ok
// SIG undefined Terminate(void)

void FSessionInfo::Terminate(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
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
  
  plVar1 = (longlong *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x40);
  puStack_28 = (uint *)(param_1 + 0x28);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar7 = puStack_28;
    }
    uVar5 = *puVar7;
    local_78 = 0;
    uStack_60 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      uVar5 = local_78 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78 = uVar5;
      if (bVar3) goto LAB_142a72e9f;
      uVar5 = puVar7[lVar6 + 1];
    }
    uStack_74 = -uVar5 & uVar5;
    iVar4 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_68._4_4_ = (uStack_60 - iVar4) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_142a72e9f:
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
  bVar3 = local_68._4_4_ < *(int *)(param_1 + 0x40);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar3) {
    do {
      (**(code **)(**(longlong **)(*plVar1 + 0x10 + (longlong)iStack_5c * 0x28) + 0x80))();
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<FGuid,FLevelSequenceBindingReferenceArray>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceBindingReferenceArray,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 142a72f70 FUN_142a72f70 body=596 status=ok
// SIG undefined FUN_142a72f70(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_142a72f70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  short *psVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined4 *_Src;
  void *_Src_00;
  void *pvVar14;
  ulonglong local_res8 [3];
  void *local_78;
  ulonglong local_70;
  undefined4 *local_68;
  ulonglong local_60;
  void *local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  longlong *plStack_40;
  
  pvVar14 = (void *)0x0;
  local_res8[0] = local_res8[0] & 0xffffffff00000000;
  if ((*(longlong *)(param_1 + 200) != 0) &&
     (((*(int *)(param_1 + 0x6c) != 0 || *(int *)(param_1 + 0x68) != 0) ||
      *(int *)(param_1 + 100) != 0) || *(int *)(param_1 + 0x60) != 0)) {
    puVar8 = (undefined8 *)operator_new(0x10);
    lVar13 = -1;
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
      _Src_00 = local_78;
    }
    else {
      psVar9 = (short *)FWindowsPlatformProcess::UserName(0);
      local_78 = (void *)0x0;
      local_70 = 0;
      uVar11 = 0;
      _Src_00 = pvVar14;
      if ((psVar9 != (short *)0x0) && (_Src_00 = (void *)0x0, *psVar9 != 0)) {
        do {
          lVar13 = lVar13 + 1;
        } while (psVar9[lVar13] != 0);
        uVar12 = (int)lVar13 + 1;
        local_70 = (ulonglong)uVar12;
        uVar11 = uVar12;
        if (0 < (int)uVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
          uVar11 = (uint)local_70;
        }
        _Src_00 = local_78;
        FGenericPlatformString::Memcpy(local_78,psVar9,(longlong)(int)uVar12 * 2);
      }
      *puVar8 = 0;
      *(uint *)(puVar8 + 1) = uVar11;
      if (uVar11 == 0) {
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
        pvVar14 = (void *)0x1;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar8,uVar11,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar8,_Src_00,(longlong)(int)uVar11 * 2);
        pvVar14 = (void *)0x1;
      }
    }
    local_res8[2] = *(undefined8 *)(param_1 + 200);
    local_68 = (undefined4 *)0x0;
    local_60 = 1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_68,0);
    _Src = local_68;
    uVar4 = *(undefined4 *)(param_1 + 100);
    uVar5 = *(undefined4 *)(param_1 + 0x68);
    uVar6 = *(undefined4 *)(param_1 + 0x6c);
    *local_68 = *(undefined4 *)(param_1 + 0x60);
    local_68[1] = uVar4;
    local_68[2] = uVar5;
    local_68[3] = uVar6;
    local_58 = (void *)0x0;
    lVar13 = (longlong)(int)local_60;
    local_50 = (int)local_60;
    if ((int)local_60 == 0) {
      local_4c = (int)local_60;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_58,local_60 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar13 << 4);
    }
    local_res8[1] = 0;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    local_res8[0] = 0x2bca2875f4373fff;
    uVar10 = FUN_1421d02e0();
    FUN_1408494a0(local_res8[2],puVar8,uVar10,&local_48,&local_58,local_res8 + 1,local_res8);
    plVar7 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      _Src = local_68;
      _Src_00 = local_78;
      if ((int)lVar13 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        _Src = local_68;
        _Src_00 = local_78;
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
          _Src = local_68;
          _Src_00 = local_78;
        }
      }
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
    FMemory::Free(_Src);
    if ((pvVar14 != (void *)0x0) && (_Src_00 != (void *)0x0)) {
      FMemory::Free(_Src_00);
    }
  }
  return;
}



// FUNCTION 142a731d0 FUN_142a731d0 body=656 status=ok
// SIG undefined FUN_142a731d0(void)

void FUN_142a731d0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong lVar11;
  uint *puVar12;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  if (((*(int *)(param_2 + 0x44) == *(int *)(param_1 + 0x8c) &&
       *(int *)(param_2 + 0x40) == *(int *)(param_1 + 0x88)) &&
      *(int *)(param_2 + 0x3c) == *(int *)(param_1 + 0x84)) &&
      *(int *)(param_2 + 0x38) == *(int *)(param_1 + 0x80)) {
    plVar1 = (longlong *)(param_1 + 0x18);
    iVar2 = *(int *)(param_1 + 0x40);
    puStack_28 = (uint *)(param_1 + 0x28);
    local_78 = 0;
    uStack_74 = 1;
    local_68._4_4_ = 0;
    uStack_60 = 0;
    if (iVar2 != 0) {
      puVar12 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar3 = *puVar12;
      uStack_60 = 0;
      local_78 = 0;
      while (uVar3 == 0) {
        lVar11 = (longlong)local_78;
        uStack_60 = uStack_60 + 0x20;
        iVar10 = local_78 + 1;
        bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar10;
        if (bVar4) goto LAB_142a732cf;
        uVar3 = puVar12[lVar11 + 1];
      }
      uStack_74 = -uVar3 & uVar3;
      iVar10 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      local_68._4_4_ = (uStack_60 - iVar10) + 0x1f;
      if (iVar2 < local_68._4_4_) {
LAB_142a732cf:
        local_68._4_4_ = iVar2;
      }
    }
    auStack_20._4_4_ = local_68._4_4_;
    auStack_20._0_4_ = 0xffffffff;
    auStack_20._8_4_ = uStack_60;
    auStack_20._12_4_ = iStack_5c;
    iStack_30 = local_78;
    uStack_2c = uStack_74;
    local_40 = 0;
    local_10._0_4_ = SUB84(plVar1,0);
    local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
    uStack_60 = 0xffffffff;
    iStack_5c = local_68._4_4_;
    iStack_70 = local_78;
    uStack_6c = uStack_74;
    local_58._8_4_ = (undefined4)local_10;
    local_58._0_8_ = auStack_20._8_8_;
    local_58._12_4_ = local_10._4_4_;
    bVar4 = local_68._4_4_ < *(int *)(param_1 + 0x40);
    local_48 = plVar1;
    local_38 = plVar1;
    local_10 = plVar1;
    local_68 = puStack_28;
    if (bVar4) {
      do {
        iVar2 = iStack_5c;
        piVar8 = (int *)(**(code **)(**(longlong **)(*plVar1 + 0x10 + (longlong)iStack_5c * 0x28) +
                                    0x28))();
        if (((piVar8[1] == *(int *)(param_2 + 0x1c) && piVar8[2] == *(int *)(param_2 + 0x20)) &&
            piVar8[3] == *(int *)(param_2 + 0x24)) && *(int *)(param_2 + 0x18) == *piVar8) {
          lVar11 = *(longlong *)(*plVar1 + 0x10 + (longlong)iVar2 * 0x28);
          if (((*(int *)(lVar11 + 0x7c) == *(int *)(param_2 + 0x1c) &&
               *(int *)(lVar11 + 0x80) == *(int *)(param_2 + 0x20)) &&
              *(int *)(lVar11 + 0x84) == *(int *)(param_2 + 0x24)) &&
              *(int *)(param_2 + 0x18) == *(int *)(lVar11 + 0x78)) {
            FString::operator=(lVar11 + 0x40,param_2);
            puVar9 = (undefined4 *)(**(code **)(*(longlong *)*param_3 + 0x40))();
            uVar5 = puVar9[1];
            uVar6 = puVar9[2];
            uVar7 = puVar9[3];
            *(undefined4 *)(lVar11 + 0x60) = *puVar9;
            *(undefined4 *)(lVar11 + 100) = uVar5;
            *(undefined4 *)(lVar11 + 0x68) = uVar6;
            *(undefined4 *)(lVar11 + 0x6c) = uVar7;
            *(undefined4 *)(lVar11 + 0x70) = *(undefined4 *)(param_2 + 0x10);
            *(undefined1 *)(lVar11 + 0x74) = *(undefined1 *)(param_2 + 0x14);
            *(undefined4 *)(lVar11 + 0xf8) = *(undefined4 *)(param_2 + 0x48);
            FString::operator=(lVar11 + 0x98,param_2 + 0x28);
          }
          break;
        }
        uStack_60 = uStack_60 & ~uStack_6c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
      } while (iStack_5c < (int)local_68[6]);
      if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
        TSet<TTuple<FGuid,FLevelSequenceBindingReferenceArray>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceBindingReferenceArray,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
      }
    }
  }
  return;
}



// FUNCTION 142a73460 FUN_142a73460 body=1790 status=ok
// SIG undefined FUN_142a73460(void)

void FUN_142a73460(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  bool bVar18;
  int local_res20 [2];
  int local_108 [2];
  longlong local_100;
  longlong *local_f8;
  longlong *local_f0;
  int local_e8;
  longlong local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  code *local_b8;
  undefined4 uStack_b0;
  undefined8 local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  local_res20[0] = 0;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  if (((*(int *)(param_2 + 0x6c) == *(int *)(param_1 + 0x8c) &&
       *(int *)(param_2 + 0x68) == *(int *)(param_1 + 0x88)) &&
      *(int *)(param_2 + 100) == *(int *)(param_1 + 0x84)) &&
      *(int *)(param_1 + 0x80) == *(int *)(param_2 + 0x60)) {
    *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0x90);
    FString::operator=(param_1 + 0xa0,param_2 + 0x80);
    FString::operator=(param_1 + 0x90,param_2 + 0x70);
    uVar10 = (**(code **)(*(longlong *)*param_3 + 0x40))();
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x18,local_res20,uVar10);
    if ((local_res20[0] == -1) ||
       (lVar17 = *(longlong *)(param_1 + 0x18) + (longlong)local_res20[0] * 0x28, lVar17 == 0)) {
      local_a0 = uVar10;
      FUN_142a6e5a0(param_1 + 0x18,local_108,&local_a0,0);
      lVar17 = *(longlong *)(param_1 + 0x18) + (longlong)local_108[0] * 0x28;
    }
    plVar1 = (longlong *)(lVar17 + 0x10);
    if (*(longlong *)(lVar17 + 0x10) == 0) {
      plVar3 = *(longlong **)(param_1 + 0x78);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        iVar8 = (int)plVar3[1];
        bVar18 = iVar8 == 0;
        if (bVar18) {
          *(int *)(plVar3 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        if (!bVar18) {
LAB_142a735a0:
          LOCK();
          bVar18 = iVar8 == (int)plVar3[1];
          if (bVar18) {
            *(int *)(plVar3 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (!bVar18) goto code_r0x000142a735aa;
          if (plVar3 != (longlong *)0x0) {
            lVar12 = *(longlong *)(param_1 + 0x70);
            if (lVar12 != 0) {
              lVar11 = operator_new(0x118);
              if (lVar11 == 0) {
                lVar12 = 0;
              }
              else {
                puVar15 = (undefined8 *)
                          TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_68)
                ;
                local_d0 = *puVar15;
                local_c8 = (longlong *)puVar15[1];
                if (local_c8 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
                  UNLOCK();
                }
                LOCK();
                *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                UNLOCK();
                local_e0 = lVar12;
                local_d8 = plVar3;
                lVar12 = FUN_142a6e840(lVar11,param_2 + 0x28,&local_d0,&local_e0);
                bVar6 = true;
                bVar5 = true;
                bVar4 = true;
              }
              plVar13 = (longlong *)operator_new(0x18);
              plVar14 = (longlong *)0x0;
              if (plVar13 != (longlong *)0x0) {
                *(undefined4 *)(plVar13 + 1) = 1;
                *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
                *plVar13 = (longlong)&PTR_FUN_1441591c0;
                plVar13[2] = lVar12;
                plVar14 = plVar13;
              }
              plVar13 = (longlong *)(lVar12 + 8);
              if (lVar12 == 0) {
                plVar13 = (longlong *)0x0;
              }
              local_100 = lVar12;
              local_f8 = plVar14;
              if (plVar13 != (longlong *)0x0) {
                if ((*plVar13 != 0) && (plVar13[1] != 0)) {
                  piVar2 = (int *)(plVar13[1] + 8);
                  LOCK();
                  iVar8 = *piVar2;
                  if (iVar8 == 0) {
                    *piVar2 = 0;
                    iVar8 = 0;
                  }
                  UNLOCK();
                  if (0 < iVar8) goto LAB_142a73720;
                }
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
                  UNLOCK();
                }
                *plVar13 = lVar12;
                plVar16 = (longlong *)plVar13[1];
                if (plVar14 != plVar16) {
                  if (plVar14 != (longlong *)0x0) {
                    LOCK();
                    *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
                    UNLOCK();
                    plVar16 = (longlong *)plVar13[1];
                  }
                  if (plVar16 != (longlong *)0x0) {
                    LOCK();
                    piVar2 = (int *)((longlong)plVar16 + 0xc);
                    iVar8 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar8 == 1) {
                      (**(code **)(*plVar16 + 8))(plVar16,1);
                    }
                  }
                  plVar13[1] = (longlong)plVar14;
                }
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  plVar13 = plVar14 + 1;
                  lVar11 = *plVar13;
                  *(int *)plVar13 = (int)*plVar13 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*plVar14)(plVar14);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar14 + 0xc);
                    iVar8 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar8 == 1) {
                      (**(code **)(*plVar14 + 8))(plVar14,1);
                    }
                  }
                }
              }
LAB_142a73720:
              if (plVar1 != &local_100) {
                *plVar1 = lVar12;
                local_100 = 0;
                SharedPointerInternals::FSharedReferencer<1>::operator=(lVar17 + 0x18,&local_f8);
              }
              plVar14 = local_f8;
              if (local_f8 != (longlong *)0x0) {
                LOCK();
                plVar13 = local_f8 + 1;
                lVar12 = *plVar13;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                if ((int)lVar12 == 1) {
                  (**(code **)*local_f8)(local_f8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar14 + 0xc);
                  iVar8 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*local_f8 + 8))(local_f8,1);
                  }
                }
              }
              plVar14 = local_d8;
              if ((bVar4) && (local_d8 != (longlong *)0x0)) {
                LOCK();
                plVar13 = local_d8 + 1;
                lVar12 = *plVar13;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                if ((int)lVar12 == 1) {
                  (**(code **)*local_d8)(local_d8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar14 + 0xc);
                  iVar8 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*local_d8 + 8))(local_d8,1);
                  }
                }
              }
              plVar14 = local_c8;
              if ((bVar5) && (local_c8 != (longlong *)0x0)) {
                LOCK();
                plVar13 = local_c8 + 1;
                lVar12 = *plVar13;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                if ((int)lVar12 == 1) {
                  (**(code **)*local_c8)(local_c8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar14 + 0xc);
                  iVar8 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*local_c8 + 8))(local_c8,1);
                  }
                }
              }
              if ((bVar6) && (local_60 != (longlong *)0x0)) {
                LOCK();
                plVar14 = local_60 + 1;
                lVar12 = *plVar14;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                if ((int)lVar12 == 1) {
                  (**(code **)*local_60)(local_60);
                  LOCK();
                  piVar2 = (int *)((longlong)local_60 + 0xc);
                  iVar8 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*local_60 + 8))(local_60,1);
                  }
                }
              }
              local_b8 = FUN_142a70480;
              uStack_b0 = 0;
              plVar14 = (longlong *)(**(code **)(*(longlong *)*plVar1 + 0x88))();
              plVar13 = (longlong *)FUN_14191f310(&local_f0,param_1,&local_b8);
              if (((int)plVar13[1] != 0) && (*plVar13 != 0)) {
                FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar14,1);
                if (((int)plVar13[1] != 0) &&
                   (plVar16 = (longlong *)*plVar13, plVar16 != (longlong *)0x0)) {
                  (**(code **)(*plVar16 + 0x20))(plVar16,local_78);
                }
                iVar8 = (int)plVar14[1];
                *(int *)(plVar14 + 1) = iVar8 + 1;
                if (*(int *)((longlong)plVar14 + 0xc) < iVar8 + 1) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar8);
                }
                plVar14 = (longlong *)((longlong)iVar8 * 0x10 + *plVar14);
                *plVar14 = 0;
                *plVar14 = *plVar13;
                *plVar13 = 0;
                *(int *)(plVar14 + 1) = (int)plVar13[1];
                *(undefined4 *)(plVar13 + 1) = 0;
              }
              if (local_e8 == 0) {
LAB_142a73940:
                if (local_f0 != (longlong *)0x0) {
                  FMemory::Free(local_f0);
                }
              }
              else if (local_f0 != (longlong *)0x0) {
                (**(code **)(*local_f0 + 0x28))(local_f0,0);
                if (local_f0 != (longlong *)0x0) {
                  local_f0 = (longlong *)FMemory::Realloc(local_f0,0,0);
                }
                local_e8 = 0;
                goto LAB_142a73940;
              }
              FUN_142a73b60(*plVar1,param_2,param_3);
              plVar14 = *(longlong **)(lVar17 + 0x18);
              local_88 = *plVar1;
              if (plVar14 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
                UNLOCK();
              }
              local_80 = plVar14;
              puVar15 = (undefined8 *)
                        TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_58);
              local_98 = *puVar15;
              local_90 = (longlong *)puVar15[1];
              if (local_90 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_90 + 1) = (int)local_90[1] + 1;
                UNLOCK();
              }
              bVar4 = false;
              *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
              iVar8 = *(int *)(param_1 + 0xcc);
              iVar9 = *(int *)(param_1 + 0xc0) + -1;
              lVar17 = (longlong)iVar9;
              if (-1 < iVar9) {
                lVar12 = lVar17 << 4;
                bVar4 = false;
                do {
                  lVar11 = *(longlong *)(param_1 + 0xb8);
                  if (((*(int *)(lVar12 + 8 + lVar11) == 0) ||
                      (plVar1 = *(longlong **)(lVar12 + lVar11), plVar1 == (longlong *)0x0)) ||
                     (cVar7 = (**(code **)(*plVar1 + 0x40))(plVar1,&local_98,&local_88),
                     cVar7 == '\0')) {
                    bVar4 = true;
                  }
                  lVar12 = lVar12 + -0x10;
                  lVar17 = lVar17 + -1;
                } while (-1 < lVar17);
                iVar8 = *(int *)(param_1 + 0xcc);
              }
              *(int *)(param_1 + 0xcc) = iVar8 + -1;
              if (bVar4) {
                FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                          ((longlong *)(param_1 + 0xb8),0);
              }
              plVar1 = local_90;
              if (local_90 != (longlong *)0x0) {
                LOCK();
                plVar13 = local_90 + 1;
                lVar17 = *plVar13;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                if ((int)lVar17 == 1) {
                  (**(code **)*local_90)(local_90);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar1 + 0xc);
                  iVar8 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*plVar1 + 8))(plVar1,1);
                  }
                }
              }
              if (local_50 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_50 + 1;
                lVar17 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar17 == 1) {
                  (**(code **)*local_50)(local_50);
                  LOCK();
                  piVar2 = (int *)((longlong)local_50 + 0xc);
                  iVar8 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*local_50 + 8))(local_50,1);
                  }
                }
              }
              plVar1 = local_80;
              if (local_80 != (longlong *)0x0) {
                LOCK();
                plVar13 = local_80 + 1;
                lVar17 = *plVar13;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                if ((int)lVar17 == 1) {
                  (**(code **)*local_80)(local_80);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar1 + 0xc);
                  iVar8 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*plVar1 + 8))(plVar1,1);
                  }
                }
              }
              if (plVar14 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar14 + 1;
                lVar17 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar17 == 1) {
                  (**(code **)*plVar14)(plVar14);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar14 + 0xc);
                  iVar8 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*plVar14 + 8))(plVar14,1);
                  }
                }
              }
            }
            LOCK();
            plVar1 = plVar3 + 1;
            lVar17 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              iVar8 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
        }
      }
    }
    else {
      FUN_142a73b60(*(longlong *)(lVar17 + 0x10),param_2,param_3);
    }
LAB_142a73b26:
    puVar15 = (undefined8 *)FDateTime::UtcNow(local_70);
    *(undefined8 *)(param_1 + 0x68) = *puVar15;
  }
  return;
code_r0x000142a735aa:
  LOCK();
  iVar8 = (int)plVar3[1];
  bVar18 = iVar8 == 0;
  if (bVar18) {
    *(int *)(plVar3 + 1) = 0;
    iVar8 = 0;
  }
  UNLOCK();
  if (bVar18) goto LAB_142a73b26;
  goto LAB_142a735a0;
}



// FUNCTION 142a73b60 FUN_142a73b60 body=642 status=ok
// SIG undefined FUN_142a73b60(void)

void FUN_142a73b60(longlong param_1,undefined1 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_res20 [8];
  undefined4 *local_68;
  ulonglong local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *plStack_40;
  
  if (((*(int *)(param_2 + 0x34) == *(int *)(param_1 + 0x84) &&
       *(int *)(param_2 + 0x30) == *(int *)(param_1 + 0x80)) &&
      *(int *)(param_2 + 0x2c) == *(int *)(param_1 + 0x7c)) &&
      *(int *)(param_2 + 0x28) == *(int *)(param_1 + 0x78)) {
    if ((*(longlong *)(param_1 + 200) != 0) &&
       (piVar8 = (int *)(**(code **)(*(longlong *)*param_3 + 0x40))(),
       ((*(int *)(param_1 + 0x24) != piVar8[3] || *(int *)(param_1 + 0x20) != piVar8[2]) ||
       *(int *)(param_1 + 0x1c) != piVar8[1]) || *(int *)(param_1 + 0x18) != *piVar8)) {
      uVar9 = operator_new(1);
      uVar3 = *(undefined8 *)(param_1 + 200);
      puVar10 = (undefined4 *)(**(code **)(*(longlong *)*param_3 + 0x40))();
      local_60 = 1;
      local_68 = (undefined4 *)0x0;
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_68,0);
      puVar12 = local_68;
      uVar4 = puVar10[1];
      uVar5 = puVar10[2];
      uVar6 = puVar10[3];
      lVar14 = (longlong)(int)local_60;
      *local_68 = *puVar10;
      local_68[1] = uVar4;
      local_68[2] = uVar5;
      local_68[3] = uVar6;
      local_58 = (void *)0x0;
      local_50 = (int)local_60;
      if ((int)local_60 == 0) {
        local_4c = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_58,local_60 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_58,puVar12,lVar14 << 4);
      }
      local_res10 = 0;
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      local_res8 = 0x2bca2875f4373fff;
      uVar11 = FUN_142a6d130();
      FUN_1408494a0(uVar3,uVar9,uVar11,&local_48,&local_58,&local_res10,&local_res8);
      plVar7 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_40 + 1;
        lVar14 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        puVar12 = local_68;
        if ((int)lVar14 == 1) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar8 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          puVar12 = local_68;
          if (iVar2 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
            puVar12 = local_68;
          }
        }
      }
      if (local_58 != (void *)0x0) {
        FMemory::Free();
      }
      FMemory::Free(puVar12);
    }
    *(undefined1 *)(param_1 + 0x28) = *param_2;
    puVar12 = (undefined4 *)(**(code **)(*(longlong *)*param_3 + 0x40))();
    uVar4 = puVar12[1];
    uVar5 = puVar12[2];
    uVar6 = puVar12[3];
    *(undefined4 *)(param_1 + 0x18) = *puVar12;
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    *(undefined4 *)(param_1 + 0x20) = uVar5;
    *(undefined4 *)(param_1 + 0x24) = uVar6;
    FString::operator=(param_1 + 0x30,param_2 + 8);
    FString::operator=(param_1 + 0x50,param_2 + 0x18);
    FString::operator=(param_1 + 0x88,param_2 + 0x38);
    *(undefined1 *)(param_1 + 0xa8) = param_2[0x48];
    FString::operator=(param_1 + 0xe8,param_2 + 0x50);
    puVar13 = (undefined8 *)FDateTime::UtcNow(local_res20);
    *(undefined8 *)(param_1 + 0xb0) = *puVar13;
  }
  return;
}



// FUNCTION 142a73df0 calc_output_hex body=743 status=ok
// SIG undefined calc_output_hex(void)

void calc_output_hex(longlong param_1,int param_2,int param_3,double param_4,undefined8 *param_5)

{
  float *pfVar1;
  float *pfVar2;
  double *pdVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  double dVar14;
  double local_c8 [24];
  
  lVar10 = *(longlong *)(param_1 + 0x30);
  local_c8[0xb] = 0.0;
  local_c8[10] = 0.0;
  local_c8[9] = 0.0;
  local_c8[8] = 0.0;
  local_c8[5] = 0.0;
  local_c8[7] = 0.0;
  iVar13 = *(int *)(param_1 + 0x18) * 0x1000;
  local_c8[6] = 0.0;
  iVar7 = (iVar13 - param_3) / param_2;
  uVar12 = iVar7 * param_2 + param_3;
  pfVar11 = (float *)(param_1 +
                     ((longlong)(*(int *)(param_1 + 0x38) - *(int *)(param_1 + 4) * iVar7) + 0x213)
                     * 4);
  do {
    fVar4 = *(float *)(lVar10 + ((longlong)(int)uVar12 >> 0xc) * 4);
    dVar14 = (double)(*(float *)(lVar10 + 4 + ((longlong)(int)uVar12 >> 0xc) * 4) - fVar4) *
             (double)(uVar12 & 0xfff) * 0.000244140625 + (double)fVar4;
    local_c8[6] = local_c8[6] + (double)pfVar11[-1] * dVar14;
    local_c8[7] = local_c8[7] + (double)*pfVar11 * dVar14;
    local_c8[8] = local_c8[8] + (double)pfVar11[1] * dVar14;
    pfVar1 = pfVar11 + 3;
    local_c8[9] = local_c8[9] + (double)pfVar11[2] * dVar14;
    pfVar2 = pfVar11 + 4;
    pfVar11 = pfVar11 + 6;
    uVar12 = uVar12 - param_2;
    local_c8[10] = local_c8[10] + (double)*pfVar1 * dVar14;
    local_c8[0xb] = local_c8[0xb] + (double)*pfVar2 * dVar14;
  } while (-1 < (int)uVar12);
  iVar7 = (iVar13 - (param_2 - param_3)) / param_2;
  local_c8[4] = 0.0;
  local_c8[3] = 0.0;
  local_c8[2] = 0.0;
  local_c8[1] = 0.0;
  local_c8[0] = 0.0;
  uVar12 = (param_2 - param_3) + iVar7 * param_2;
  pfVar11 = (float *)(param_1 +
                     ((longlong)((iVar7 + 1) * *(int *)(param_1 + 4) + *(int *)(param_1 + 0x38)) +
                     0x213) * 4);
  do {
    lVar9 = (longlong)(int)uVar12;
    fVar4 = *(float *)(lVar10 + (lVar9 >> 0xc) * 4);
    uVar8 = uVar12 & 0xfff;
    uVar12 = uVar12 - param_2;
    dVar14 = (double)(*(float *)(lVar10 + 4 + (lVar9 >> 0xc) * 4) - fVar4) * (double)uVar8 *
             0.000244140625 + (double)fVar4;
    local_c8[0] = local_c8[0] + (double)pfVar11[-1] * dVar14;
    local_c8[1] = local_c8[1] + (double)*pfVar11 * dVar14;
    local_c8[2] = local_c8[2] + (double)pfVar11[1] * dVar14;
    pfVar1 = pfVar11 + 3;
    local_c8[3] = local_c8[3] + (double)pfVar11[2] * dVar14;
    pfVar2 = pfVar11 + 4;
    pfVar11 = pfVar11 + -6;
    local_c8[4] = local_c8[4] + (double)*pfVar1 * dVar14;
    local_c8[5] = local_c8[5] + (double)*pfVar2 * dVar14;
  } while (0 < (int)uVar12);
  lVar10 = 0;
  do {
    lVar9 = lVar10 + 0x30;
    lVar5 = lVar10 + 0x38;
    pdVar3 = (double *)((longlong)local_c8 + lVar10);
    lVar6 = lVar10 + 8;
    lVar10 = lVar10 + 0x10;
    *param_5 = CONCAT44((float)((*(double *)((longlong)local_c8 + lVar6) +
                                *(double *)((longlong)local_c8 + lVar5)) * param_4),
                        (float)((*pdVar3 + *(double *)((longlong)local_c8 + lVar9)) * param_4));
    param_5 = param_5 + 1;
  } while (lVar10 < 0x30);
  return;
}



// FUNCTION 142a740e0 FUN_142a740e0 body=1418 status=ok
// SIG undefined FUN_142a740e0(void)

void FUN_142a740e0(longlong param_1,int param_2,int param_3,uint param_4,double param_5,
                  longlong param_6)

{
  void *_Dst;
  float fVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  double dVar10;
  
  _Dst = (void *)(param_1 + 0x448);
  uVar8 = (ulonglong)(int)param_4;
  iVar7 = *(int *)(param_1 + 0x18) * 0x1000;
  iVar2 = (iVar7 - param_3) / param_2;
  iVar6 = *(int *)(param_1 + 0x38) - iVar2 * param_4;
  uVar9 = iVar2 * param_2 + param_3;
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x48),0,uVar8 << 3);
  do {
    iVar6 = iVar6 + param_4;
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x30) + ((longlong)(int)uVar9 >> 0xc) * 4);
    dVar10 = (double)(*(float *)(*(longlong *)(param_1 + 0x30) + 4 +
                                ((longlong)(int)uVar9 >> 0xc) * 4) - fVar1) *
             (double)(uVar9 & 0xfff) * 0.000244140625 + (double)fVar1;
    uVar5 = param_4;
    iVar2 = iVar6;
    do {
      uVar3 = uVar5 & 0x80000007;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
      }
      switch(uVar3) {
      case 1:
        break;
      default:
        uVar5 = uVar5 - 1;
        iVar2 = iVar2 + -1;
        *(double *)(param_1 + 0x48 + (longlong)(int)uVar5 * 8) =
             (double)*(float *)(param_1 + 0x848 + (longlong)iVar2 * 4) * dVar10 +
             *(double *)(param_1 + 0x48 + (longlong)(int)uVar5 * 8);
      case 7:
        uVar5 = uVar5 - 1;
        iVar2 = iVar2 + -1;
        *(double *)(param_1 + 0x48 + (longlong)(int)uVar5 * 8) =
             (double)*(float *)(param_1 + 0x848 + (longlong)iVar2 * 4) * dVar10 +
             *(double *)(param_1 + 0x48 + (longlong)(int)uVar5 * 8);
      case 6:
        uVar5 = uVar5 - 1;
        iVar2 = iVar2 + -1;
        *(double *)(param_1 + 0x48 + (longlong)(int)uVar5 * 8) =
             (double)*(float *)(param_1 + 0x848 + (longlong)iVar2 * 4) * dVar10 +
             *(double *)(param_1 + 0x48 + (longlong)(int)uVar5 * 8);
      case 5:
        uVar5 = uVar5 - 1;
        iVar2 = iVar2 + -1;
        *(double *)(param_1 + 0x48 + (longlong)(int)uVar5 * 8) =
             (double)*(float *)(param_1 + 0x848 + (longlong)iVar2 * 4) * dVar10 +
             *(double *)(param_1 + 0x48 + (longlong)(int)uVar5 * 8);
      case 4:
        uVar5 = uVar5 - 1;
        iVar2 = iVar2 + -1;
        *(double *)(param_1 + 0x48 + (longlong)(int)uVar5 * 8) =
             (double)*(float *)(param_1 + 0x848 + (longlong)iVar2 * 4) * dVar10 +
             *(double *)(param_1 + 0x48 + (longlong)(int)uVar5 * 8);
      case 3:
        uVar5 = uVar5 - 1;
        iVar2 = iVar2 + -1;
        *(double *)(param_1 + 0x48 + (longlong)(int)uVar5 * 8) =
             (double)*(float *)(param_1 + 0x848 + (longlong)iVar2 * 4) * dVar10 +
             *(double *)(param_1 + 0x48 + (longlong)(int)uVar5 * 8);
      case 2:
        uVar5 = uVar5 - 1;
        iVar2 = iVar2 + -1;
        *(double *)(param_1 + 0x48 + (longlong)(int)uVar5 * 8) =
             (double)*(float *)(param_1 + 0x848 + (longlong)iVar2 * 4) * dVar10 +
             *(double *)(param_1 + 0x48 + (longlong)(int)uVar5 * 8);
      }
      iVar2 = iVar2 + -1;
      uVar5 = uVar5 - 1;
      *(double *)(param_1 + 0x48 + (longlong)(int)uVar5 * 8) =
           (double)*(float *)(param_1 + 0x848 + (longlong)iVar2 * 4) * dVar10 +
           *(double *)(param_1 + 0x48 + (longlong)(int)uVar5 * 8);
    } while (0 < (int)uVar5);
    uVar9 = uVar9 - param_2;
  } while (-1 < (int)uVar9);
  iVar2 = (iVar7 - (param_2 - param_3)) / param_2;
  uVar9 = (param_2 - param_3) + iVar2 * param_2;
  iVar6 = *(int *)(param_1 + 0x38);
  _guard_xfg_dispatch_icall_nop(_Dst,0,uVar8 << 3);
  iVar6 = (iVar2 + 1) * param_4 + iVar6 + param_4;
  do {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x30) + ((longlong)(int)uVar9 >> 0xc) * 4);
    dVar10 = (double)(*(float *)(*(longlong *)(param_1 + 0x30) + 4 +
                                ((longlong)(int)uVar9 >> 0xc) * 4) - fVar1) *
             (double)(uVar9 & 0xfff) * 0.000244140625 + (double)fVar1;
    uVar5 = param_4;
    iVar2 = iVar6;
    do {
      uVar3 = uVar5 & 0x80000007;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
      }
      switch(uVar3) {
      case 1:
        break;
      default:
        uVar5 = uVar5 - 1;
        iVar2 = iVar2 + -1;
        *(double *)((longlong)_Dst + (longlong)(int)uVar5 * 8) =
             (double)*(float *)(param_1 + 0x848 + (longlong)iVar2 * 4) * dVar10 +
             *(double *)((longlong)_Dst + (longlong)(int)uVar5 * 8);
      case 7:
        uVar5 = uVar5 - 1;
        iVar2 = iVar2 + -1;
        *(double *)((longlong)_Dst + (longlong)(int)uVar5 * 8) =
             (double)*(float *)(param_1 + 0x848 + (longlong)iVar2 * 4) * dVar10 +
             *(double *)((longlong)_Dst + (longlong)(int)uVar5 * 8);
      case 6:
        uVar5 = uVar5 - 1;
        iVar2 = iVar2 + -1;
        *(double *)((longlong)_Dst + (longlong)(int)uVar5 * 8) =
             (double)*(float *)(param_1 + 0x848 + (longlong)iVar2 * 4) * dVar10 +
             *(double *)((longlong)_Dst + (longlong)(int)uVar5 * 8);
      case 5:
        uVar5 = uVar5 - 1;
        iVar2 = iVar2 + -1;
        *(double *)((longlong)_Dst + (longlong)(int)uVar5 * 8) =
             (double)*(float *)(param_1 + 0x848 + (longlong)iVar2 * 4) * dVar10 +
             *(double *)((longlong)_Dst + (longlong)(int)uVar5 * 8);
      case 4:
        uVar5 = uVar5 - 1;
        iVar2 = iVar2 + -1;
        *(double *)((longlong)_Dst + (longlong)(int)uVar5 * 8) =
             (double)*(float *)(param_1 + 0x848 + (longlong)iVar2 * 4) * dVar10 +
             *(double *)((longlong)_Dst + (longlong)(int)uVar5 * 8);
      case 3:
        uVar5 = uVar5 - 1;
        iVar2 = iVar2 + -1;
        *(double *)((longlong)_Dst + (longlong)(int)uVar5 * 8) =
             (double)*(float *)(param_1 + 0x848 + (longlong)iVar2 * 4) * dVar10 +
             *(double *)((longlong)_Dst + (longlong)(int)uVar5 * 8);
      case 2:
        uVar5 = uVar5 - 1;
        iVar2 = iVar2 + -1;
        *(double *)((longlong)_Dst + (longlong)(int)uVar5 * 8) =
             (double)*(float *)(param_1 + 0x848 + (longlong)iVar2 * 4) * dVar10 +
             *(double *)((longlong)_Dst + (longlong)(int)uVar5 * 8);
      }
      iVar2 = iVar2 + -1;
      uVar5 = uVar5 - 1;
      *(double *)((longlong)_Dst + (longlong)(int)uVar5 * 8) =
           (double)*(float *)(param_1 + 0x848 + (longlong)iVar2 * 4) * dVar10 +
           *(double *)((longlong)_Dst + (longlong)(int)uVar5 * 8);
    } while (0 < (int)uVar5);
    uVar9 = uVar9 - param_2;
    iVar6 = iVar6 - param_4;
  } while (0 < (int)uVar9);
  do {
    uVar5 = (uint)uVar8;
    uVar9 = uVar5 & 0x80000007;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
    }
    switch(uVar9) {
    case 1:
      break;
    default:
      uVar5 = uVar5 - 1;
      lVar4 = (longlong)(int)uVar5;
      *(float *)(param_6 + lVar4 * 4) =
           (float)((*(double *)((longlong)_Dst + lVar4 * 8) +
                   *(double *)(param_1 + 0x48 + lVar4 * 8)) * param_5);
    case 7:
      uVar5 = uVar5 - 1;
      lVar4 = (longlong)(int)uVar5;
      *(float *)(param_6 + lVar4 * 4) =
           (float)((*(double *)((longlong)_Dst + lVar4 * 8) +
                   *(double *)(param_1 + 0x48 + lVar4 * 8)) * param_5);
    case 6:
      uVar5 = uVar5 - 1;
      lVar4 = (longlong)(int)uVar5;
      *(float *)(param_6 + lVar4 * 4) =
           (float)((*(double *)((longlong)_Dst + lVar4 * 8) +
                   *(double *)(param_1 + 0x48 + lVar4 * 8)) * param_5);
    case 5:
      uVar5 = uVar5 - 1;
      lVar4 = (longlong)(int)uVar5;
      *(float *)(param_6 + lVar4 * 4) =
           (float)((*(double *)((longlong)_Dst + lVar4 * 8) +
                   *(double *)(param_1 + 0x48 + lVar4 * 8)) * param_5);
    case 4:
      uVar5 = uVar5 - 1;
      lVar4 = (longlong)(int)uVar5;
      *(float *)(param_6 + lVar4 * 4) =
           (float)((*(double *)((longlong)_Dst + lVar4 * 8) +
                   *(double *)(param_1 + 0x48 + lVar4 * 8)) * param_5);
    case 3:
      uVar5 = uVar5 - 1;
      lVar4 = (longlong)(int)uVar5;
      *(float *)(param_6 + lVar4 * 4) =
           (float)((*(double *)((longlong)_Dst + lVar4 * 8) +
                   *(double *)(param_1 + 0x48 + lVar4 * 8)) * param_5);
    case 2:
      uVar5 = uVar5 - 1;
      lVar4 = (longlong)(int)uVar5;
      *(float *)(param_6 + lVar4 * 4) =
           (float)((*(double *)((longlong)_Dst + lVar4 * 8) +
                   *(double *)(param_1 + 0x48 + lVar4 * 8)) * param_5);
    }
    uVar5 = uVar5 - 1;
    uVar8 = (ulonglong)uVar5;
    lVar4 = (longlong)(int)uVar5;
    *(float *)(param_6 + lVar4 * 4) =
         (float)((*(double *)((longlong)_Dst + lVar4 * 8) + *(double *)(param_1 + 0x48 + lVar4 * 8))
                * param_5);
  } while (0 < (int)uVar5);
  return;
}



// FUNCTION 142a746c0 calc_output_quad body=623 status=ok
// SIG undefined calc_output_quad(void)

void calc_output_quad(longlong param_1,int param_2,int param_3,double param_4,undefined8 *param_5)

{
  float *pfVar1;
  float *pfVar2;
  double *pdVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  double dVar14;
  double local_88 [16];
  
  lVar10 = *(longlong *)(param_1 + 0x30);
  iVar13 = *(int *)(param_1 + 0x18) * 0x1000;
  local_88[7] = 0.0;
  iVar7 = (iVar13 - param_3) / param_2;
  local_88[3] = 0.0;
  local_88[6] = 0.0;
  local_88[5] = 0.0;
  local_88[4] = 0.0;
  uVar12 = iVar7 * param_2 + param_3;
  pfVar11 = (float *)(param_1 +
                     ((longlong)(*(int *)(param_1 + 0x38) - *(int *)(param_1 + 4) * iVar7) + 0x213)
                     * 4);
  do {
    fVar4 = *(float *)(lVar10 + ((longlong)(int)uVar12 >> 0xc) * 4);
    dVar14 = (double)(*(float *)(lVar10 + 4 + ((longlong)(int)uVar12 >> 0xc) * 4) - fVar4) *
             (double)(uVar12 & 0xfff) * 0.000244140625 + (double)fVar4;
    local_88[4] = local_88[4] + (double)pfVar11[-1] * dVar14;
    pfVar1 = pfVar11 + 1;
    local_88[5] = local_88[5] + (double)*pfVar11 * dVar14;
    pfVar2 = pfVar11 + 2;
    pfVar11 = pfVar11 + 4;
    uVar12 = uVar12 - param_2;
    local_88[6] = local_88[6] + (double)*pfVar1 * dVar14;
    local_88[7] = local_88[7] + (double)*pfVar2 * dVar14;
  } while (-1 < (int)uVar12);
  local_88[2] = 0.0;
  iVar7 = (iVar13 - (param_2 - param_3)) / param_2;
  local_88[1] = 0.0;
  local_88[0] = 0.0;
  uVar12 = (param_2 - param_3) + iVar7 * param_2;
  pfVar11 = (float *)(param_1 +
                     ((longlong)((iVar7 + 1) * *(int *)(param_1 + 4) + *(int *)(param_1 + 0x38)) +
                     0x213) * 4);
  do {
    lVar9 = (longlong)(int)uVar12;
    fVar4 = *(float *)(lVar10 + (lVar9 >> 0xc) * 4);
    uVar8 = uVar12 & 0xfff;
    uVar12 = uVar12 - param_2;
    dVar14 = (double)(*(float *)(lVar10 + 4 + (lVar9 >> 0xc) * 4) - fVar4) * (double)uVar8 *
             0.000244140625 + (double)fVar4;
    local_88[0] = local_88[0] + (double)pfVar11[-1] * dVar14;
    pfVar1 = pfVar11 + 1;
    local_88[1] = local_88[1] + (double)*pfVar11 * dVar14;
    pfVar2 = pfVar11 + 2;
    pfVar11 = pfVar11 + -4;
    local_88[2] = local_88[2] + (double)*pfVar1 * dVar14;
    local_88[3] = local_88[3] + (double)*pfVar2 * dVar14;
  } while (0 < (int)uVar12);
  lVar10 = 0;
  do {
    lVar9 = lVar10 + 0x20;
    lVar5 = lVar10 + 0x28;
    pdVar3 = (double *)((longlong)local_88 + lVar10);
    lVar6 = lVar10 + 8;
    lVar10 = lVar10 + 0x10;
    *param_5 = CONCAT44((float)((*(double *)((longlong)local_88 + lVar6) +
                                *(double *)((longlong)local_88 + lVar5)) * param_4),
                        (float)((*pdVar3 + *(double *)((longlong)local_88 + lVar9)) * param_4));
    param_5 = param_5 + 1;
  } while (lVar10 < 0x20);
  return;
}



// FUNCTION 142a74960 linear_vari_process body=1080 status=ok
// SIG undefined linear_vari_process(void)

undefined4 linear_vari_process(double *param_1,longlong *param_2)

{
  float fVar1;
  double dVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  if (0 < (int)param_2[2]) {
    dVar2 = param_1[4];
    if (dVar2 == 0.0) {
      return 5;
    }
    uVar13 = 0;
    if (*(int *)((longlong)dVar2 + 8) != 0) {
      uVar4 = uVar13;
      uVar6 = uVar13;
      if (0 < *(int *)((longlong)dVar2 + 4)) {
        do {
          uVar9 = (int)uVar6 + 1;
          *(undefined4 *)((longlong)dVar2 + 0x18 + uVar4 + 4) = *(undefined4 *)(uVar4 + *param_2);
          uVar4 = uVar4 + 4;
          uVar6 = (ulonglong)uVar9;
        } while ((int)uVar9 < *(int *)((longlong)dVar2 + 4));
      }
      *(undefined4 *)((longlong)dVar2 + 8) = 0;
    }
    iVar12 = *(int *)((longlong)dVar2 + 4);
    *(int *)((longlong)dVar2 + 0xc) = iVar12 * (int)param_2[2];
    iVar10 = *(int *)((longlong)param_2 + 0x14) * iVar12;
    *(undefined4 *)((longlong)dVar2 + 0x18) = 0;
    *(undefined4 *)((longlong)dVar2 + 0x10) = 0;
    *(int *)((longlong)dVar2 + 0x14) = iVar10;
    dVar15 = *param_1;
    if ((dVar15 < 0.00390625) || (256.0 < dVar15)) {
      return 0x16;
    }
    uVar9 = 0;
    uVar4 = uVar13;
    uVar6 = uVar13;
    for (dVar16 = param_1[1]; iVar7 = (int)uVar4, dVar16 < 1.0; dVar16 = dVar16 + 1.0 / dVar15) {
      uVar9 = (uint)uVar6;
      iVar10 = *(int *)((longlong)dVar2 + 0x14);
      if ((iVar10 <= iVar7) ||
         (uVar9 = *(uint *)((longlong)dVar2 + 0x10),
         (double)*(int *)((longlong)dVar2 + 0xc) <=
         (dVar16 + 1.0) * (double)iVar12 + (double)(int)uVar9)) break;
      if (0 < iVar10) {
        dVar14 = *param_1;
        if (1e-20 < ABS(dVar14 - (double)param_2[5])) {
          dVar15 = (((double)param_2[5] - dVar14) * (double)iVar7) / (double)iVar10 + dVar14;
        }
      }
      uVar6 = uVar13;
      uVar11 = uVar13;
      if (0 < iVar12) {
        do {
          fVar1 = *(float *)(uVar11 + 0x1c + (longlong)dVar2);
          uVar8 = (int)uVar6 + 1;
          *(float *)(param_2[1] + (longlong)*(int *)((longlong)dVar2 + 0x18) * 4) =
               (float)((double)(*(float *)(uVar11 + *param_2) - fVar1) * dVar16 + (double)fVar1);
          uVar9 = *(int *)((longlong)dVar2 + 0x18) + 1;
          uVar4 = (ulonglong)uVar9;
          *(uint *)((longlong)dVar2 + 0x18) = uVar9;
          iVar12 = *(int *)((longlong)dVar2 + 4);
          uVar6 = (ulonglong)uVar8;
          uVar11 = uVar11 + 4;
        } while ((int)uVar8 < iVar12);
        uVar9 = *(uint *)((longlong)dVar2 + 0x10);
        iVar10 = *(int *)((longlong)dVar2 + 0x14);
      }
      uVar6 = (ulonglong)uVar9;
    }
    dVar14 = dVar16 - (double)(int)dVar16;
    if (dVar14 < 0.0) {
      dVar14 = dVar14 + 1.0;
    }
    iVar3 = (int)(dVar16 - dVar14) * iVar12 + uVar9;
    *(int *)((longlong)dVar2 + 0x10) = iVar3;
    if (iVar7 < iVar10) {
      do {
        if ((double)*(int *)((longlong)dVar2 + 0xc) <= (double)iVar12 * dVar14 + (double)iVar3)
        break;
        if (0 < iVar10) {
          dVar16 = *param_1;
          if (1e-20 < ABS(dVar16 - (double)param_2[5])) {
            dVar15 = (((double)param_2[5] - dVar16) * (double)(int)uVar4) / (double)iVar10 + dVar16;
          }
        }
        uVar4 = uVar13;
        if (0 < iVar12) {
          do {
            iVar10 = (int)uVar4;
            fVar1 = *(float *)(*param_2 +
                              (longlong)
                              ((*(int *)((longlong)dVar2 + 0x10) - *(int *)((longlong)dVar2 + 4)) +
                              iVar10) * 4);
            uVar4 = (ulonglong)(iVar10 + 1U);
            *(float *)(param_2[1] + (longlong)*(int *)((longlong)dVar2 + 0x18) * 4) =
                 (float)((double)(*(float *)(*param_2 +
                                            (longlong)(*(int *)((longlong)dVar2 + 0x10) + iVar10) *
                                            4) - fVar1) * dVar14 + (double)fVar1);
            *(int *)((longlong)dVar2 + 0x18) = *(int *)((longlong)dVar2 + 0x18) + 1;
            iVar12 = *(int *)((longlong)dVar2 + 4);
          } while ((int)(iVar10 + 1U) < iVar12);
          iVar3 = *(int *)((longlong)dVar2 + 0x10);
        }
        dVar16 = 1.0 / dVar15 + dVar14;
        dVar14 = dVar16 - (double)(int)dVar16;
        if (dVar14 < 0.0) {
          dVar14 = dVar14 + 1.0;
        }
        uVar4 = (ulonglong)*(uint *)((longlong)dVar2 + 0x18);
        iVar3 = (int)(dVar16 - dVar14) * iVar12 + iVar3;
        *(int *)((longlong)dVar2 + 0x10) = iVar3;
        iVar10 = *(int *)((longlong)dVar2 + 0x14);
      } while ((int)*(uint *)((longlong)dVar2 + 0x18) < iVar10);
    }
    iVar10 = *(int *)((longlong)dVar2 + 0xc);
    if (iVar10 < iVar3) {
      *(int *)((longlong)dVar2 + 0x10) = iVar10;
      dVar14 = (double)((iVar3 - iVar10) / iVar12) + dVar14;
    }
    param_1[1] = dVar14;
    if ((0 < *(int *)((longlong)dVar2 + 0x10)) && (0 < *(int *)((longlong)dVar2 + 4))) {
      puVar5 = (undefined4 *)((longlong)dVar2 + 0x1c);
      do {
        iVar12 = (int)uVar13;
        uVar9 = iVar12 + 1;
        uVar13 = (ulonglong)uVar9;
        *puVar5 = *(undefined4 *)
                   (*param_2 +
                   (longlong)
                   ((*(int *)((longlong)dVar2 + 0x10) - *(int *)((longlong)dVar2 + 4)) + iVar12) * 4
                   );
        puVar5 = puVar5 + 1;
      } while ((int)uVar9 < *(int *)((longlong)dVar2 + 4));
    }
    *param_1 = dVar15;
    *(int *)(param_2 + 3) = *(int *)((longlong)dVar2 + 0x10) / *(int *)((longlong)dVar2 + 4);
    *(int *)((longlong)param_2 + 0x1c) =
         *(int *)((longlong)dVar2 + 0x18) / *(int *)((longlong)dVar2 + 4);
  }
  return 0;
}



// FUNCTION 142a74da0 prepare_data body=446 status=ok
// SIG undefined prepare_data(void)

undefined8 prepare_data(longlong param_1,longlong *param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x40) < 0) {
    iVar2 = *(int *)(param_1 + 0x38);
    iVar5 = *(int *)(param_1 + 0x44);
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x3c) = param_3;
      *(int *)(param_1 + 0x38) = param_3;
      iVar2 = iVar5 + param_3 * -2;
      iVar4 = param_3;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x3c);
      if (*(int *)(param_1 + 4) + iVar4 + param_3 < iVar5) {
        iVar2 = (iVar5 - iVar2) - param_3;
        if (iVar2 < 1) {
          iVar2 = 0;
        }
      }
      else {
        iVar4 = (iVar4 - iVar2) + param_3;
        _guard_xfg_dispatch_icall_nop
                  ((void *)(param_1 + 0x848),
                   (void *)(param_1 + (((longlong)iVar2 - (longlong)param_3) + 0x212) * 4),
                   (longlong)iVar4 << 2);
        iVar5 = *(int *)(param_1 + 0x44);
        *(int *)(param_1 + 0x38) = param_3;
        iVar2 = iVar5 + param_3 * -2;
        *(int *)(param_1 + 0x3c) = iVar4;
        if (iVar2 < 1) {
          iVar2 = 0;
        }
      }
    }
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc);
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
    iVar3 = iVar3 - iVar3 % *(int *)(param_1 + 4);
    if ((iVar3 < 0) || (iVar5 < iVar4 + iVar3)) {
      uVar1 = 0x15;
    }
    else {
      _guard_xfg_dispatch_icall_nop
                ((void *)(param_1 + ((longlong)iVar4 + 0x212) * 4),
                 (void *)(*param_2 + (longlong)*(int *)(param_1 + 0xc) * 4),(longlong)iVar3 << 2);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar3;
      iVar3 = *(int *)(param_1 + 0x3c) + iVar3;
      *(int *)(param_1 + 0x3c) = iVar3;
      if (*(int *)(param_1 + 0xc) == *(int *)(param_1 + 8)) {
        iVar2 = iVar3 - *(int *)(param_1 + 0x38);
        if ((iVar2 < param_3 * 2) && ((int)param_2[4] != 0)) {
          iVar5 = param_3 + 5;
          if (*(int *)(param_1 + 0x44) - iVar3 < iVar5) {
            iVar3 = iVar2 + param_3;
            _guard_xfg_dispatch_icall_nop
                      ((void *)(param_1 + 0x848),
                       (void *)(param_1 +
                               (((longlong)*(int *)(param_1 + 0x38) - (longlong)param_3) + 0x212) *
                               4),(longlong)iVar3 << 2);
            *(int *)(param_1 + 0x38) = param_3;
            *(int *)(param_1 + 0x3c) = iVar3;
          }
          *(int *)(param_1 + 0x40) = iVar3;
          if ((iVar5 < 0) || (*(int *)(param_1 + 0x44) < iVar3 + iVar5)) {
            iVar5 = *(int *)(param_1 + 0x44) - iVar3;
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_1 + ((longlong)iVar3 + 0x212) * 4),0,(longlong)iVar5 << 2);
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + iVar5;
        }
      }
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0;
}



// FUNCTION 142a74f60 psrc_set_converter body=863 status=ok
// SIG undefined psrc_set_converter(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 psrc_set_converter(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  void *_Dst;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_8a8 [32];
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined4 local_868;
  int local_864;
  undefined1 local_860 [16];
  int local_850;
  int local_84c;
  undefined *local_838;
  int local_824;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_8a8;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  _guard_xfg_dispatch_icall_nop(local_860,0,0x848);
  local_864 = *(int *)(param_1 + 0x14);
  iVar5 = 0x80;
  local_868 = 0x26a5050;
  if (local_864 < 0x81) {
    if (local_864 == 1) {
      pcVar3 = sinc_mono_vari_process;
    }
    else if (local_864 == 2) {
      pcVar3 = sinc_stereo_vari_process;
    }
    else if (local_864 == 4) {
      pcVar3 = sinc_quad_vari_process;
    }
    else {
      pcVar3 = sinc_multichan_vari_process;
      if (local_864 == 6) {
        pcVar3 = sinc_hex_vari_process;
      }
    }
    *(code **)(param_1 + 0x30) = pcVar3;
    *(code **)(param_1 + 0x28) = pcVar3;
    *(code **)(param_1 + 0x38) = sinc_reset;
    if (param_2 == 0) {
      iVar5 = 0x94d;
      local_838 = &DAT_145383ac4;
      local_850 = 0x5310d;
    }
    else if (param_2 == 1) {
      iVar5 = 0x1eb;
      local_838 = &DAT_14536dc24;
      local_850 = 0x57a4;
    }
    else {
      if (param_2 != 2) goto LAB_142a7512e;
      local_838 = &DAT_14536b594;
      local_850 = 0x99e;
    }
    iVar2 = (int)((((double)local_850 * 2.5) / (double)iVar5) * 256.0);
    local_824 = 0x1000;
    if (0x1000 < iVar2) {
      local_824 = iVar2;
    }
    local_824 = local_824 * local_864;
    local_84c = iVar5;
    _Dst = (void *)FMemory::Malloc((longlong)(local_824 + local_864) * 4 + 0x84c);
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,&local_868,0x850);
      *(void **)(param_1 + 0x20) = _Dst;
      sinc_reset();
      uVar7 = *(uint *)((longlong)_Dst + 0x18);
      uVar6 = 0;
      if (1 < (int)uVar7) {
        do {
          uVar7 = uVar7 | 1 << (uVar6 & 0x1f);
          uVar6 = uVar6 + 1;
        } while (1 << ((byte)uVar6 & 0x1f) < (int)uVar7);
      }
      if ((int)(uVar6 + 0xb) < 0x20) {
        return 0;
      }
    }
  }
LAB_142a7512e:
  if (param_2 == 3) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FMemory::Free();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    puVar4 = (undefined8 *)FMemory::Malloc((longlong)*(int *)(param_1 + 0x14) * 4 + 0x20);
    local_888 = 0;
    uStack_880 = 0;
    local_878 = 0;
    uStack_870 = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    _guard_xfg_dispatch_icall_nop(puVar4 + 4,0,(longlong)*(int *)(param_1 + 0x14) << 2);
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    *(undefined4 *)puVar4 = 0x6f70a93;
    *(undefined4 *)((longlong)puVar4 + 4) = *(undefined4 *)(param_1 + 0x14);
    *(code **)(param_1 + 0x30) = zoh_vari_process;
    *(code **)(param_1 + 0x28) = zoh_vari_process;
  }
  else {
    if (param_2 != 4) {
      return 10;
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FMemory::Free();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    puVar4 = (undefined8 *)FMemory::Malloc((longlong)*(int *)(param_1 + 0x14) * 4 + 0x20);
    local_888 = 0;
    uStack_880 = 0;
    local_878 = 0;
    uStack_870 = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    _guard_xfg_dispatch_icall_nop(puVar4 + 4,0,(longlong)*(int *)(param_1 + 0x14) << 2);
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    *(undefined4 *)puVar4 = 0x787c4fc;
    *(undefined4 *)((longlong)puVar4 + 4) = *(undefined4 *)(param_1 + 0x14);
    *(code **)(param_1 + 0x30) = linear_vari_process;
    *(code **)(param_1 + 0x28) = linear_vari_process;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  *(undefined1 **)(param_1 + 0x38) = &LAB_142a74930;
  if (lVar1 != 0) {
    iVar5 = *(int *)(param_1 + 0x14);
    *(int *)(lVar1 + 4) = iVar5;
    *(undefined4 *)(lVar1 + 8) = 1;
    _guard_xfg_dispatch_icall_nop((void *)(lVar1 + 0x1c),0,(longlong)iVar5 << 2);
  }
  return 0;
}



// FUNCTION 142a752c0 sinc_hex_vari_process body=827 status=ok
// SIG undefined sinc_hex_vari_process(void)

undefined8 sinc_hex_vari_process(double *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  
  dVar2 = param_1[4];
  if (dVar2 == 0.0) {
    uVar5 = 5;
  }
  else {
    iVar9 = *(int *)((longlong)dVar2 + 4);
    *(int *)((longlong)dVar2 + 8) = *(int *)(param_2 + 0x10) * iVar9;
    iVar8 = *(int *)(param_2 + 0x14) * iVar9;
    *(undefined4 *)((longlong)dVar2 + 0x14) = 0;
    *(undefined4 *)((longlong)dVar2 + 0xc) = 0;
    *(int *)((longlong)dVar2 + 0x10) = iVar8;
    dVar1 = *param_1;
    if ((dVar1 < 0.00390625) || (256.0 < dVar1)) {
      uVar5 = 0x16;
    }
    else {
      dVar10 = ((double)*(int *)((longlong)dVar2 + 0x18) + 2.0) /
               (double)*(int *)((longlong)dVar2 + 0x1c);
      dVar11 = *(double *)(param_2 + 0x28);
      if (dVar1 <= *(double *)(param_2 + 0x28)) {
        dVar11 = dVar1;
      }
      if (dVar11 < 1.0) {
        dVar10 = dVar10 / dVar11;
      }
      dVar11 = param_1[1];
      iVar7 = ((int)dVar10 + 1) * iVar9;
      dVar10 = dVar11 - (double)(int)dVar11;
      if (dVar10 < 0.0) {
        dVar10 = dVar10 + 1.0;
      }
      iVar6 = *(int *)((longlong)dVar2 + 0x44);
      dVar4 = 1.0 / dVar1;
      lVar3 = (longlong)((int)(dVar11 - dVar10) * iVar9 + *(int *)((longlong)dVar2 + 0x38)) %
              (longlong)iVar6;
      *(int *)((longlong)dVar2 + 0x38) = (int)lVar3;
      if (0 < iVar8) {
        do {
          iVar9 = (int)lVar3;
          if (((iVar6 - iVar9) + *(int *)((longlong)dVar2 + 0x3c)) % iVar6 <= iVar7) {
            uVar5 = prepare_data(dVar2,param_2,iVar7);
            *(int *)(param_1 + 2) = (int)uVar5;
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            iVar9 = *(int *)((longlong)dVar2 + 0x38);
            if (((*(int *)((longlong)dVar2 + 0x44) - iVar9) + *(int *)((longlong)dVar2 + 0x3c)) %
                *(int *)((longlong)dVar2 + 0x44) <= iVar7) break;
          }
          if ((-1 < *(int *)((longlong)dVar2 + 0x40)) &&
             ((double)*(int *)((longlong)dVar2 + 0x40) <= (double)iVar9 + dVar10 + dVar4 + 1e-20))
          break;
          if (0 < *(int *)((longlong)dVar2 + 0x10)) {
            dVar11 = *param_1;
            if (1e-10 < ABS(dVar11 - *(double *)(param_2 + 0x28))) {
              dVar1 = ((*(double *)(param_2 + 0x28) - dVar11) *
                      (double)*(int *)((longlong)dVar2 + 0x14)) /
                      (double)*(int *)((longlong)dVar2 + 0x10) + dVar11;
            }
          }
          dVar11 = dVar1;
          if (1.0 <= dVar1) {
            dVar11 = 1.0;
          }
          dVar11 = dVar11 * (double)*(int *)((longlong)dVar2 + 0x1c);
          calc_output_hex(dVar2,(int)(dVar11 * 4096.0),(int)(dVar10 * dVar11 * 4096.0),
                          dVar11 / (double)*(int *)((longlong)dVar2 + 0x1c),
                          *(longlong *)(param_2 + 8) +
                          (longlong)*(int *)((longlong)dVar2 + 0x14) * 4);
          iVar9 = *(int *)((longlong)dVar2 + 0x14) + 6;
          *(int *)((longlong)dVar2 + 0x14) = iVar9;
          dVar11 = 1.0 / dVar1 + dVar10;
          dVar10 = dVar11 - (double)(int)dVar11;
          if (dVar10 < 0.0) {
            dVar10 = dVar10 + 1.0;
          }
          iVar6 = *(int *)((longlong)dVar2 + 0x44);
          lVar3 = (longlong)
                  ((int)(dVar11 - dVar10) * *(int *)((longlong)dVar2 + 4) +
                  *(int *)((longlong)dVar2 + 0x38)) % (longlong)iVar6;
          *(int *)((longlong)dVar2 + 0x38) = (int)lVar3;
        } while (iVar9 < *(int *)((longlong)dVar2 + 0x10));
      }
      param_1[1] = dVar10;
      *param_1 = dVar1;
      *(int *)(param_2 + 0x18) = *(int *)((longlong)dVar2 + 0xc) / *(int *)((longlong)dVar2 + 4);
      *(int *)(param_2 + 0x1c) = *(int *)((longlong)dVar2 + 0x14) / *(int *)((longlong)dVar2 + 4);
      uVar5 = 0;
    }
  }
  return uVar5;
}



// FUNCTION 142a75600 sinc_mono_vari_process body=1159 status=ok
// SIG undefined sinc_mono_vari_process(void)

undefined8 sinc_mono_vari_process(double *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  dVar4 = param_1[4];
  if (dVar4 == 0.0) {
    uVar9 = 5;
  }
  else {
    iVar8 = *(int *)((longlong)dVar4 + 4);
    *(int *)((longlong)dVar4 + 8) = *(int *)(param_2 + 0x10) * iVar8;
    iVar14 = *(int *)(param_2 + 0x14) * iVar8;
    *(undefined4 *)((longlong)dVar4 + 0x14) = 0;
    *(undefined4 *)((longlong)dVar4 + 0xc) = 0;
    *(int *)((longlong)dVar4 + 0x10) = iVar14;
    dVar3 = *param_1;
    if ((dVar3 < 0.00390625) || (256.0 < dVar3)) {
      uVar9 = 0x16;
    }
    else {
      dVar18 = ((double)*(int *)((longlong)dVar4 + 0x18) + 2.0) /
               (double)*(int *)((longlong)dVar4 + 0x1c);
      dVar22 = *(double *)(param_2 + 0x28);
      if (dVar3 <= *(double *)(param_2 + 0x28)) {
        dVar22 = dVar3;
      }
      if (dVar22 < 1.0) {
        dVar18 = dVar18 / dVar22;
      }
      dVar22 = param_1[1];
      iVar17 = ((int)dVar18 + 1) * iVar8;
      dVar18 = dVar22 - (double)(int)dVar22;
      if (dVar18 < 0.0) {
        dVar18 = dVar18 + 1.0;
      }
      iVar13 = *(int *)((longlong)dVar4 + 0x44);
      dVar6 = 1.0 / dVar3;
      lVar5 = (longlong)((int)(dVar22 - dVar18) * iVar8 + *(int *)((longlong)dVar4 + 0x38)) %
              (longlong)iVar13;
      *(int *)((longlong)dVar4 + 0x38) = (int)lVar5;
      if (0 < iVar14) {
        do {
          iVar8 = (int)lVar5;
          if (((iVar13 - iVar8) + *(int *)((longlong)dVar4 + 0x3c)) % iVar13 <= iVar17) {
            uVar9 = prepare_data(dVar4,param_2,iVar17);
            *(int *)(param_1 + 2) = (int)uVar9;
            if ((int)uVar9 != 0) {
              return uVar9;
            }
            iVar8 = *(int *)((longlong)dVar4 + 0x38);
            if (((*(int *)((longlong)dVar4 + 0x44) - iVar8) + *(int *)((longlong)dVar4 + 0x3c)) %
                *(int *)((longlong)dVar4 + 0x44) <= iVar17) break;
          }
          if ((-1 < *(int *)((longlong)dVar4 + 0x40)) &&
             ((double)*(int *)((longlong)dVar4 + 0x40) < (double)iVar8 + dVar18 + dVar6 + 1e-20))
          break;
          if (0 < *(int *)((longlong)dVar4 + 0x10)) {
            dVar22 = *param_1;
            if (1e-10 < ABS(dVar22 - *(double *)(param_2 + 0x28))) {
              dVar3 = ((*(double *)(param_2 + 0x28) - dVar22) *
                      (double)*(int *)((longlong)dVar4 + 0x14)) /
                      (double)*(int *)((longlong)dVar4 + 0x10) + dVar22;
            }
          }
          dVar22 = dVar3;
          if (1.0 <= dVar3) {
            dVar22 = 1.0;
          }
          lVar5 = *(longlong *)((longlong)dVar4 + 0x30);
          iVar16 = *(int *)((longlong)dVar4 + 0x18) * 0x1000;
          dVar21 = 0.0;
          dVar22 = dVar22 * (double)*(int *)((longlong)dVar4 + 0x1c);
          iVar15 = (int)(dVar22 * 4096.0);
          iVar13 = (int)(dVar18 * dVar22 * 4096.0);
          iVar14 = (iVar16 - iVar13) / iVar15;
          uVar11 = iVar14 * iVar15 + iVar13;
          pfVar12 = (float *)((longlong)dVar4 + ((longlong)(iVar8 - iVar14) + 0x212) * 4);
          do {
            lVar10 = (longlong)(int)uVar11;
            fVar1 = *(float *)(lVar5 + (lVar10 >> 0xc) * 4);
            uVar7 = uVar11 & 0xfff;
            fVar2 = *pfVar12;
            pfVar12 = pfVar12 + 1;
            uVar11 = uVar11 - iVar15;
            dVar21 = dVar21 + ((double)(*(float *)(lVar5 + 4 + (lVar10 >> 0xc) * 4) - fVar1) *
                               (double)uVar7 * 0.000244140625 + (double)fVar1) * (double)fVar2;
          } while (-1 < (int)uVar11);
          dVar20 = 0.0;
          iVar8 = (iVar16 - (iVar15 - iVar13)) / iVar15;
          uVar11 = (iVar15 - iVar13) + iVar8 * iVar15;
          pfVar12 = (float *)((longlong)dVar4 +
                             ((longlong)(*(int *)((longlong)dVar4 + 0x38) + iVar8) + 0x213) * 4);
          do {
            lVar10 = (longlong)(int)uVar11;
            fVar1 = *(float *)(lVar5 + (lVar10 >> 0xc) * 4);
            uVar7 = uVar11 & 0xfff;
            uVar11 = uVar11 - iVar15;
            fVar2 = *pfVar12;
            pfVar12 = pfVar12 + -1;
            dVar20 = dVar20 + ((double)(*(float *)(lVar5 + 4 + (lVar10 >> 0xc) * 4) - fVar1) *
                               (double)uVar7 * 0.000244140625 + (double)fVar1) * (double)fVar2;
          } while (0 < (int)uVar11);
          dVar19 = 1.0 / dVar3 + dVar18;
          *(float *)(*(longlong *)(param_2 + 8) + (longlong)*(int *)((longlong)dVar4 + 0x14) * 4) =
               (float)((dVar22 / (double)*(int *)((longlong)dVar4 + 0x1c)) * (dVar20 + dVar21));
          iVar8 = *(int *)((longlong)dVar4 + 0x14) + 1;
          *(int *)((longlong)dVar4 + 0x14) = iVar8;
          dVar18 = dVar19 - (double)(int)dVar19;
          if (dVar18 < 0.0) {
            dVar18 = dVar18 + 1.0;
          }
          iVar13 = *(int *)((longlong)dVar4 + 0x44);
          lVar5 = (longlong)
                  ((int)(dVar19 - dVar18) * *(int *)((longlong)dVar4 + 4) +
                  *(int *)((longlong)dVar4 + 0x38)) % (longlong)iVar13;
          *(int *)((longlong)dVar4 + 0x38) = (int)lVar5;
        } while (iVar8 < *(int *)((longlong)dVar4 + 0x10));
      }
      param_1[1] = dVar18;
      *param_1 = dVar3;
      *(int *)(param_2 + 0x18) = *(int *)((longlong)dVar4 + 0xc) / *(int *)((longlong)dVar4 + 4);
      *(int *)(param_2 + 0x1c) = *(int *)((longlong)dVar4 + 0x14) / *(int *)((longlong)dVar4 + 4);
      uVar9 = 0;
    }
  }
  return uVar9;
}



// FUNCTION 142a75a90 sinc_multichan_vari_process body=835 status=ok
// SIG undefined sinc_multichan_vari_process(void)

undefined8 sinc_multichan_vari_process(double *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  
  dVar2 = param_1[4];
  if (dVar2 == 0.0) {
    uVar5 = 5;
  }
  else {
    iVar9 = *(int *)((longlong)dVar2 + 4);
    *(int *)((longlong)dVar2 + 8) = *(int *)(param_2 + 0x10) * iVar9;
    iVar8 = *(int *)(param_2 + 0x14) * iVar9;
    *(undefined4 *)((longlong)dVar2 + 0x14) = 0;
    *(undefined4 *)((longlong)dVar2 + 0xc) = 0;
    *(int *)((longlong)dVar2 + 0x10) = iVar8;
    dVar1 = *param_1;
    if ((dVar1 < 0.00390625) || (256.0 < dVar1)) {
      uVar5 = 0x16;
    }
    else {
      dVar10 = ((double)*(int *)((longlong)dVar2 + 0x18) + 2.0) /
               (double)*(int *)((longlong)dVar2 + 0x1c);
      dVar11 = *(double *)(param_2 + 0x28);
      if (dVar1 <= *(double *)(param_2 + 0x28)) {
        dVar11 = dVar1;
      }
      if (dVar11 < 1.0) {
        dVar10 = dVar10 / dVar11;
      }
      dVar11 = param_1[1];
      iVar7 = ((int)dVar10 + 1) * iVar9;
      dVar10 = dVar11 - (double)(int)dVar11;
      if (dVar10 < 0.0) {
        dVar10 = dVar10 + 1.0;
      }
      iVar6 = *(int *)((longlong)dVar2 + 0x44);
      dVar4 = 1.0 / dVar1;
      lVar3 = (longlong)((int)(dVar11 - dVar10) * iVar9 + *(int *)((longlong)dVar2 + 0x38)) %
              (longlong)iVar6;
      *(int *)((longlong)dVar2 + 0x38) = (int)lVar3;
      if (0 < iVar8) {
        do {
          iVar9 = (int)lVar3;
          if (((iVar6 - iVar9) + *(int *)((longlong)dVar2 + 0x3c)) % iVar6 <= iVar7) {
            uVar5 = prepare_data(dVar2,param_2,iVar7);
            *(int *)(param_1 + 2) = (int)uVar5;
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            iVar9 = *(int *)((longlong)dVar2 + 0x38);
            if (((*(int *)((longlong)dVar2 + 0x44) - iVar9) + *(int *)((longlong)dVar2 + 0x3c)) %
                *(int *)((longlong)dVar2 + 0x44) <= iVar7) break;
          }
          if ((-1 < *(int *)((longlong)dVar2 + 0x40)) &&
             ((double)*(int *)((longlong)dVar2 + 0x40) <= (double)iVar9 + dVar10 + dVar4 + 1e-20))
          break;
          if (0 < *(int *)((longlong)dVar2 + 0x10)) {
            dVar11 = *param_1;
            if (1e-10 < ABS(dVar11 - *(double *)(param_2 + 0x28))) {
              dVar1 = ((*(double *)(param_2 + 0x28) - dVar11) *
                      (double)*(int *)((longlong)dVar2 + 0x14)) /
                      (double)*(int *)((longlong)dVar2 + 0x10) + dVar11;
            }
          }
          dVar11 = dVar1;
          if (1.0 <= dVar1) {
            dVar11 = 1.0;
          }
          dVar11 = dVar11 * (double)*(int *)((longlong)dVar2 + 0x1c);
          FUN_142a740e0(dVar2,(int)(dVar11 * 4096.0),(int)(dVar10 * dVar11 * 4096.0),
                        *(undefined4 *)((longlong)dVar2 + 4),
                        dVar11 / (double)*(int *)((longlong)dVar2 + 0x1c),
                        *(longlong *)(param_2 + 8) + (longlong)*(int *)((longlong)dVar2 + 0x14) * 4)
          ;
          iVar9 = *(int *)((longlong)param_1 + 0x14) + *(int *)((longlong)dVar2 + 0x14);
          *(int *)((longlong)dVar2 + 0x14) = iVar9;
          dVar11 = 1.0 / dVar1 + dVar10;
          dVar10 = dVar11 - (double)(int)dVar11;
          if (dVar10 < 0.0) {
            dVar10 = dVar10 + 1.0;
          }
          iVar6 = *(int *)((longlong)dVar2 + 0x44);
          lVar3 = (longlong)
                  ((int)(dVar11 - dVar10) * *(int *)((longlong)dVar2 + 4) +
                  *(int *)((longlong)dVar2 + 0x38)) % (longlong)iVar6;
          *(int *)((longlong)dVar2 + 0x38) = (int)lVar3;
        } while (iVar9 < *(int *)((longlong)dVar2 + 0x10));
      }
      param_1[1] = dVar10;
      *param_1 = dVar1;
      *(int *)(param_2 + 0x18) = *(int *)((longlong)dVar2 + 0xc) / *(int *)((longlong)dVar2 + 4);
      *(int *)(param_2 + 0x1c) = *(int *)((longlong)dVar2 + 0x14) / *(int *)((longlong)dVar2 + 4);
      uVar5 = 0;
    }
  }
  return uVar5;
}



// FUNCTION 142a75de0 sinc_quad_vari_process body=827 status=ok
// SIG undefined sinc_quad_vari_process(void)

undefined8 sinc_quad_vari_process(double *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  
  dVar2 = param_1[4];
  if (dVar2 == 0.0) {
    uVar5 = 5;
  }
  else {
    iVar9 = *(int *)((longlong)dVar2 + 4);
    *(int *)((longlong)dVar2 + 8) = *(int *)(param_2 + 0x10) * iVar9;
    iVar8 = *(int *)(param_2 + 0x14) * iVar9;
    *(undefined4 *)((longlong)dVar2 + 0x14) = 0;
    *(undefined4 *)((longlong)dVar2 + 0xc) = 0;
    *(int *)((longlong)dVar2 + 0x10) = iVar8;
    dVar1 = *param_1;
    if ((dVar1 < 0.00390625) || (256.0 < dVar1)) {
      uVar5 = 0x16;
    }
    else {
      dVar10 = ((double)*(int *)((longlong)dVar2 + 0x18) + 2.0) /
               (double)*(int *)((longlong)dVar2 + 0x1c);
      dVar11 = *(double *)(param_2 + 0x28);
      if (dVar1 <= *(double *)(param_2 + 0x28)) {
        dVar11 = dVar1;
      }
      if (dVar11 < 1.0) {
        dVar10 = dVar10 / dVar11;
      }
      dVar11 = param_1[1];
      iVar7 = ((int)dVar10 + 1) * iVar9;
      dVar10 = dVar11 - (double)(int)dVar11;
      if (dVar10 < 0.0) {
        dVar10 = dVar10 + 1.0;
      }
      iVar6 = *(int *)((longlong)dVar2 + 0x44);
      dVar4 = 1.0 / dVar1;
      lVar3 = (longlong)((int)(dVar11 - dVar10) * iVar9 + *(int *)((longlong)dVar2 + 0x38)) %
              (longlong)iVar6;
      *(int *)((longlong)dVar2 + 0x38) = (int)lVar3;
      if (0 < iVar8) {
        do {
          iVar9 = (int)lVar3;
          if (((iVar6 - iVar9) + *(int *)((longlong)dVar2 + 0x3c)) % iVar6 <= iVar7) {
            uVar5 = prepare_data(dVar2,param_2,iVar7);
            *(int *)(param_1 + 2) = (int)uVar5;
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            iVar9 = *(int *)((longlong)dVar2 + 0x38);
            if (((*(int *)((longlong)dVar2 + 0x44) - iVar9) + *(int *)((longlong)dVar2 + 0x3c)) %
                *(int *)((longlong)dVar2 + 0x44) <= iVar7) break;
          }
          if ((-1 < *(int *)((longlong)dVar2 + 0x40)) &&
             ((double)*(int *)((longlong)dVar2 + 0x40) <= (double)iVar9 + dVar10 + dVar4 + 1e-20))
          break;
          if (0 < *(int *)((longlong)dVar2 + 0x10)) {
            dVar11 = *param_1;
            if (1e-10 < ABS(dVar11 - *(double *)(param_2 + 0x28))) {
              dVar1 = ((*(double *)(param_2 + 0x28) - dVar11) *
                      (double)*(int *)((longlong)dVar2 + 0x14)) /
                      (double)*(int *)((longlong)dVar2 + 0x10) + dVar11;
            }
          }
          dVar11 = dVar1;
          if (1.0 <= dVar1) {
            dVar11 = 1.0;
          }
          dVar11 = dVar11 * (double)*(int *)((longlong)dVar2 + 0x1c);
          calc_output_quad(dVar2,(int)(dVar11 * 4096.0),(int)(dVar10 * dVar11 * 4096.0),
                           dVar11 / (double)*(int *)((longlong)dVar2 + 0x1c),
                           *(longlong *)(param_2 + 8) +
                           (longlong)*(int *)((longlong)dVar2 + 0x14) * 4);
          iVar9 = *(int *)((longlong)dVar2 + 0x14) + 4;
          *(int *)((longlong)dVar2 + 0x14) = iVar9;
          dVar11 = 1.0 / dVar1 + dVar10;
          dVar10 = dVar11 - (double)(int)dVar11;
          if (dVar10 < 0.0) {
            dVar10 = dVar10 + 1.0;
          }
          iVar6 = *(int *)((longlong)dVar2 + 0x44);
          lVar3 = (longlong)
                  ((int)(dVar11 - dVar10) * *(int *)((longlong)dVar2 + 4) +
                  *(int *)((longlong)dVar2 + 0x38)) % (longlong)iVar6;
          *(int *)((longlong)dVar2 + 0x38) = (int)lVar3;
        } while (iVar9 < *(int *)((longlong)dVar2 + 0x10));
      }
      param_1[1] = dVar10;
      *param_1 = dVar1;
      *(int *)(param_2 + 0x18) = *(int *)((longlong)dVar2 + 0xc) / *(int *)((longlong)dVar2 + 4);
      *(int *)(param_2 + 0x1c) = *(int *)((longlong)dVar2 + 0x14) / *(int *)((longlong)dVar2 + 4);
      uVar5 = 0;
    }
  }
  return uVar5;
}



// FUNCTION 142a76120 sinc_reset body=101 status=ok
// SIG undefined sinc_reset(void)

void sinc_reset(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    _guard_xfg_dispatch_icall_nop((void *)(lVar1 + 0x848),0,(longlong)*(int *)(lVar1 + 0x44) << 2);
    _guard_xfg_dispatch_icall_nop
              ((void *)(lVar1 + ((longlong)*(int *)(lVar1 + 0x44) + 0x212) * 4),0xaa,
               (longlong)*(int *)(lVar1 + 4) << 2);
    return;
  }
  return;
}



// FUNCTION 142a76190 sinc_stereo_vari_process body=1300 status=ok
// SIG undefined sinc_stereo_vari_process(void)

undefined8 sinc_stereo_vari_process(double *param_1,longlong param_2)

{
  float *pfVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  float *pfVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  dVar4 = param_1[4];
  if (dVar4 == 0.0) {
    return 5;
  }
  iVar10 = *(int *)((longlong)dVar4 + 4);
  *(int *)((longlong)dVar4 + 8) = *(int *)(param_2 + 0x10) * iVar10;
  iVar17 = *(int *)(param_2 + 0x14) * iVar10;
  *(undefined4 *)((longlong)dVar4 + 0x14) = 0;
  *(undefined4 *)((longlong)dVar4 + 0xc) = 0;
  *(int *)((longlong)dVar4 + 0x10) = iVar17;
  dVar3 = *param_1;
  if ((dVar3 < 0.00390625) || (256.0 < dVar3)) {
    uVar12 = 0x16;
  }
  else {
    dVar22 = ((double)*(int *)((longlong)dVar4 + 0x18) + 2.0) /
             (double)*(int *)((longlong)dVar4 + 0x1c);
    dVar23 = dVar3;
    if (*(double *)(param_2 + 0x28) <= dVar3) {
      dVar23 = *(double *)(param_2 + 0x28);
    }
    if (dVar23 < 1.0) {
      dVar22 = dVar22 / dVar23;
    }
    dVar23 = param_1[1];
    iVar16 = ((int)dVar22 + 1) * iVar10;
    dVar22 = dVar23 - (double)(int)dVar23;
    if (dVar22 < 0.0) {
      dVar22 = dVar22 + 1.0;
    }
    iVar9 = *(int *)((longlong)dVar4 + 0x44);
    dVar8 = 1.0 / dVar3;
    lVar6 = (longlong)((int)(dVar23 - dVar22) * iVar10 + *(int *)((longlong)dVar4 + 0x38)) %
            (longlong)iVar9;
    *(int *)((longlong)dVar4 + 0x38) = (int)lVar6;
    if (0 < iVar17) {
      do {
        iVar10 = (int)lVar6;
        if (((iVar9 - iVar10) + *(int *)((longlong)dVar4 + 0x3c)) % iVar9 <= iVar16) {
          uVar12 = prepare_data(dVar4,param_2,iVar16);
          *(int *)(param_1 + 2) = (int)uVar12;
          if ((int)uVar12 != 0) {
            return uVar12;
          }
          iVar10 = *(int *)((longlong)dVar4 + 0x38);
          if (((*(int *)((longlong)dVar4 + 0x44) - iVar10) + *(int *)((longlong)dVar4 + 0x3c)) %
              *(int *)((longlong)dVar4 + 0x44) <= iVar16) break;
        }
        if ((-1 < *(int *)((longlong)dVar4 + 0x40)) &&
           ((double)*(int *)((longlong)dVar4 + 0x40) <= (double)iVar10 + dVar22 + dVar8 + 1e-20))
        break;
        if (0 < *(int *)((longlong)dVar4 + 0x10)) {
          dVar23 = *param_1;
          if (1e-10 < ABS(dVar23 - *(double *)(param_2 + 0x28))) {
            dVar3 = ((*(double *)(param_2 + 0x28) - dVar23) *
                    (double)*(int *)((longlong)dVar4 + 0x14)) /
                    (double)*(int *)((longlong)dVar4 + 0x10) + dVar23;
          }
        }
        dVar23 = dVar3;
        if (1.0 <= dVar3) {
          dVar23 = 1.0;
        }
        iVar17 = *(int *)((longlong)dVar4 + 0x14);
        lVar6 = *(longlong *)(param_2 + 8);
        dVar26 = 0.0;
        lVar5 = *(longlong *)((longlong)dVar4 + 0x30);
        iVar19 = *(int *)((longlong)dVar4 + 0x18) * 0x1000;
        dVar23 = dVar23 * (double)*(int *)((longlong)dVar4 + 0x1c);
        dVar7 = dVar23 / (double)*(int *)((longlong)dVar4 + 0x1c);
        dVar25 = 0.0;
        iVar18 = (int)(dVar23 * 4096.0);
        iVar20 = (int)(dVar22 * dVar23 * 4096.0);
        iVar9 = (iVar19 - iVar20) / iVar18;
        uVar15 = iVar9 * iVar18 + iVar20;
        pfVar14 = (float *)((longlong)dVar4 +
                           ((longlong)(iVar10 - *(int *)((longlong)dVar4 + 4) * iVar9) + 0x213) * 4)
        ;
        do {
          fVar2 = *(float *)(lVar5 + ((longlong)(int)uVar15 >> 0xc) * 4);
          pfVar1 = pfVar14 + -1;
          dVar23 = (double)(*(float *)(lVar5 + 4 + ((longlong)(int)uVar15 >> 0xc) * 4) - fVar2) *
                   (double)(uVar15 & 0xfff) * 0.000244140625 + (double)fVar2;
          fVar2 = *pfVar14;
          pfVar14 = pfVar14 + 2;
          uVar15 = uVar15 - iVar18;
          dVar25 = dVar25 + (double)*pfVar1 * dVar23;
          dVar26 = dVar26 + (double)fVar2 * dVar23;
        } while (-1 < (int)uVar15);
        dVar21 = 0.0;
        dVar23 = 0.0;
        iVar10 = (iVar19 - (iVar18 - iVar20)) / iVar18;
        uVar15 = (iVar18 - iVar20) + iVar10 * iVar18;
        pfVar14 = (float *)((longlong)dVar4 +
                           ((longlong)
                            ((iVar10 + 1) * *(int *)((longlong)dVar4 + 4) +
                            *(int *)((longlong)dVar4 + 0x38)) + 0x213) * 4);
        do {
          lVar13 = (longlong)(int)uVar15;
          fVar2 = *(float *)(lVar5 + (lVar13 >> 0xc) * 4);
          uVar11 = uVar15 & 0xfff;
          uVar15 = uVar15 - iVar18;
          pfVar1 = pfVar14 + -1;
          dVar24 = (double)(*(float *)(lVar5 + 4 + (lVar13 >> 0xc) * 4) - fVar2) * (double)uVar11 *
                   0.000244140625 + (double)fVar2;
          fVar2 = *pfVar14;
          pfVar14 = pfVar14 + -2;
          dVar23 = (double)*pfVar1 * dVar24 + dVar23;
          dVar21 = (double)fVar2 * dVar24 + dVar21;
        } while (0 < (int)uVar15);
        dVar24 = 1.0 / dVar3 + dVar22;
        *(float *)(lVar6 + (longlong)iVar17 * 4) = (float)((dVar25 + dVar23) * dVar7);
        *(float *)(lVar6 + 4 + (longlong)iVar17 * 4) = (float)((dVar21 + dVar26) * dVar7);
        iVar10 = *(int *)((longlong)dVar4 + 0x14) + 2;
        *(int *)((longlong)dVar4 + 0x14) = iVar10;
        dVar22 = dVar24 - (double)(int)dVar24;
        if (dVar22 < 0.0) {
          dVar22 = dVar22 + 1.0;
        }
        iVar9 = *(int *)((longlong)dVar4 + 0x44);
        lVar6 = (longlong)
                ((int)(dVar24 - dVar22) * *(int *)((longlong)dVar4 + 4) +
                *(int *)((longlong)dVar4 + 0x38)) % (longlong)iVar9;
        *(int *)((longlong)dVar4 + 0x38) = (int)lVar6;
      } while (iVar10 < *(int *)((longlong)dVar4 + 0x10));
    }
    param_1[1] = dVar22;
    *param_1 = dVar3;
    *(int *)(param_2 + 0x18) = *(int *)((longlong)dVar4 + 0xc) / *(int *)((longlong)dVar4 + 4);
    *(int *)(param_2 + 0x1c) = *(int *)((longlong)dVar4 + 0x14) / *(int *)((longlong)dVar4 + 4);
    uVar12 = 0;
  }
  return uVar12;
}



// FUNCTION 142a766b0 zoh_vari_process body=1024 status=ok
// SIG undefined zoh_vari_process(void)

undefined4 zoh_vari_process(double *param_1,longlong *param_2)

{
  undefined4 uVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if ((int)param_2[2] < 1) {
    return 0;
  }
  dVar2 = param_1[4];
  if (dVar2 == 0.0) {
    return 5;
  }
  iVar7 = 0;
  if (*(int *)((longlong)dVar2 + 8) != 0) {
    iVar8 = 0;
    if (0 < *(int *)((longlong)dVar2 + 4)) {
      lVar5 = 0;
      do {
        iVar8 = iVar8 + 1;
        *(undefined4 *)((longlong)dVar2 + 0x18 + lVar5 + 4) = *(undefined4 *)(lVar5 + *param_2);
        lVar5 = lVar5 + 4;
      } while (iVar8 < *(int *)((longlong)dVar2 + 4));
    }
    *(undefined4 *)((longlong)dVar2 + 8) = 0;
  }
  iVar8 = *(int *)((longlong)dVar2 + 4);
  *(int *)((longlong)dVar2 + 0xc) = iVar8 * (int)param_2[2];
  iVar9 = *(int *)((longlong)param_2 + 0x14) * iVar8;
  *(undefined4 *)((longlong)dVar2 + 0x18) = 0;
  *(undefined4 *)((longlong)dVar2 + 0x10) = 0;
  *(int *)((longlong)dVar2 + 0x14) = iVar9;
  dVar13 = *param_1;
  if ((dVar13 < 0.00390625) || (256.0 < dVar13)) {
    return 0x16;
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_1[1];
  iVar4 = 0;
  iVar3 = 0;
  if (param_1[1] < 1.0) {
    iVar4 = 0;
    do {
      iVar9 = *(int *)((longlong)dVar2 + 0x14);
      if (iVar9 <= iVar4) break;
      iVar3 = *(int *)((longlong)dVar2 + 0x10);
      if ((double)*(int *)((longlong)dVar2 + 0xc) <= (double)iVar8 * auVar14._0_8_ + (double)iVar3)
      break;
      if (0 < iVar9) {
        dVar12 = *param_1;
        if (1e-20 < ABS(dVar12 - (double)param_2[5])) {
          dVar13 = (((double)param_2[5] - dVar12) * (double)iVar4) / (double)iVar9 + dVar12;
        }
      }
      iVar10 = 0;
      if (0 < iVar8) {
        puVar6 = (undefined4 *)((longlong)dVar2 + 0x1c);
        do {
          iVar10 = iVar10 + 1;
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          *(undefined4 *)(param_2[1] + (longlong)*(int *)((longlong)dVar2 + 0x18) * 4) = uVar1;
          iVar4 = *(int *)((longlong)dVar2 + 0x18) + 1;
          *(int *)((longlong)dVar2 + 0x18) = iVar4;
          iVar8 = *(int *)((longlong)dVar2 + 4);
        } while (iVar10 < iVar8);
        iVar3 = *(int *)((longlong)dVar2 + 0x10);
        iVar9 = *(int *)((longlong)dVar2 + 0x14);
      }
      auVar14._0_8_ = auVar14._0_8_ + 1.0 / dVar13;
    } while (auVar14._0_8_ < 1.0);
  }
  dVar11 = auVar14._0_8_;
  auVar15._8_4_ = auVar14._8_4_;
  auVar15._12_4_ = auVar14._12_4_;
  dVar12 = dVar11 - (double)(int)dVar11;
  if (dVar12 < 0.0) {
    dVar12 = dVar12 + 1.0;
  }
  auVar15._0_8_ = dVar12;
  iVar3 = (int)(dVar11 - dVar12) * iVar8 + iVar3;
  *(int *)((longlong)dVar2 + 0x10) = iVar3;
  dVar11 = dVar12;
  if (iVar4 < iVar9) {
    do {
      dVar11 = auVar15._0_8_;
      if ((double)*(int *)((longlong)dVar2 + 0xc) < (double)iVar8 * dVar12 + (double)iVar3) break;
      if (0 < iVar9) {
        dVar11 = *param_1;
        if (1e-20 < ABS(dVar11 - (double)param_2[5])) {
          dVar13 = (((double)param_2[5] - dVar11) * (double)iVar4) / (double)iVar9 + dVar11;
        }
      }
      iVar9 = 0;
      if (0 < iVar8) {
        do {
          iVar8 = (*(int *)((longlong)dVar2 + 0x10) - *(int *)((longlong)dVar2 + 4)) + iVar9;
          iVar9 = iVar9 + 1;
          *(undefined4 *)(param_2[1] + (longlong)*(int *)((longlong)dVar2 + 0x18) * 4) =
               *(undefined4 *)(*param_2 + (longlong)iVar8 * 4);
          *(int *)((longlong)dVar2 + 0x18) = *(int *)((longlong)dVar2 + 0x18) + 1;
          iVar8 = *(int *)((longlong)dVar2 + 4);
        } while (iVar9 < iVar8);
        iVar3 = *(int *)((longlong)dVar2 + 0x10);
      }
      dVar11 = 1.0 / dVar13 + dVar12;
      dVar12 = dVar11 - (double)(int)dVar11;
      if (dVar12 < 0.0) {
        dVar12 = dVar12 + 1.0;
      }
      iVar4 = *(int *)((longlong)dVar2 + 0x18);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = dVar12;
      iVar3 = (int)(dVar11 - dVar12) * iVar8 + iVar3;
      *(int *)((longlong)dVar2 + 0x10) = iVar3;
      iVar9 = *(int *)((longlong)dVar2 + 0x14);
      dVar11 = dVar12;
    } while (iVar4 < iVar9);
  }
  iVar9 = *(int *)((longlong)dVar2 + 0xc);
  if (iVar9 < iVar3) {
    *(int *)((longlong)dVar2 + 0x10) = iVar9;
    dVar11 = (double)((iVar3 - iVar9) / iVar8) + dVar12;
  }
  param_1[1] = dVar11;
  if ((0 < *(int *)((longlong)dVar2 + 0x10)) && (0 < *(int *)((longlong)dVar2 + 4))) {
    puVar6 = (undefined4 *)((longlong)dVar2 + 0x1c);
    do {
      iVar8 = (*(int *)((longlong)dVar2 + 0x10) - *(int *)((longlong)dVar2 + 4)) + iVar7;
      iVar7 = iVar7 + 1;
      *puVar6 = *(undefined4 *)(*param_2 + (longlong)iVar8 * 4);
      puVar6 = puVar6 + 1;
    } while (iVar7 < *(int *)((longlong)dVar2 + 4));
  }
  *param_1 = dVar13;
  *(int *)(param_2 + 3) = *(int *)((longlong)dVar2 + 0x10) / *(int *)((longlong)dVar2 + 4);
  *(int *)((longlong)param_2 + 0x1c) =
       *(int *)((longlong)dVar2 + 0x18) / *(int *)((longlong)dVar2 + 4);
  return 0;
}



// FUNCTION 142a76ab0 src_callback_new body=178 status=ok
// SIG undefined src_callback_new(void)

undefined8 *
src_callback_new(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined8 param_5)

{
  undefined8 *puVar1;
  
                    /* 0x2a76ab0  615  src_callback_new */
  if (param_1 == 0) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0x11;
      return (undefined8 *)0x0;
    }
  }
  else {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
    puVar1 = (undefined8 *)src_new(param_2,param_3,param_4);
    if (puVar1 != (undefined8 *)0x0) {
      if ((code *)puVar1[7] != (code *)0x0) {
        (*(code *)puVar1[7])(puVar1);
      }
      puVar1[9] = param_5;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[0xb] = 0;
      *(undefined4 *)(puVar1 + 10) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)(puVar1 + 3) = 0x22c;
      puVar1[8] = param_1;
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142a76b70 src_callback_read body=429 status=ok
// SIG undefined src_callback_read(void)

int src_callback_read(longlong param_1,double param_2,int param_3,longlong param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_res8 [8];
  undefined1 *local_58;
  undefined1 *local_50;
  longlong local_48;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  double local_28;
  
  iVar3 = 0;
                    /* 0x2a76b70  616  src_callback_read */
  iVar2 = 0;
  if ((param_1 != 0) && (0 < param_3)) {
    if (*(int *)(param_1 + 0x18) == 0x22c) {
      if (*(longlong *)(param_1 + 0x40) == 0) {
        *(undefined4 *)(param_1 + 0x10) = 0x13;
        return 0;
      }
      local_38 = 0;
      uStack_30 = 0;
      if ((param_2 < 0.00390625) || (256.0 < param_2)) {
        *(undefined4 *)(param_1 + 0x10) = 6;
        return 0;
      }
      local_50 = *(undefined1 **)(param_1 + 0x58);
      local_40 = *(int *)(param_1 + 0x50);
      local_48 = param_4;
      local_3c = param_3;
      local_28 = param_2;
      if (0 < param_3) {
        while( true ) {
          if (local_40 == 0) {
            local_58 = local_res8;
            local_40 = (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x48),&local_58);
            local_50 = local_58;
            uVar1 = (int)uStack_30;
            if (local_40 == 0) {
              uVar1 = 1;
            }
            uStack_30 = CONCAT44(uStack_30._4_4_,uVar1);
          }
          *(undefined4 *)(param_1 + 0x18) = 0x22b;
          iVar2 = src_process(param_1,&local_50);
          *(undefined4 *)(param_1 + 0x18) = 0x22c;
          if (iVar2 != 0) break;
          iVar3 = iVar3 + local_38._4_4_;
          local_3c = local_3c - local_38._4_4_;
          local_50 = local_50 + (longlong)(*(int *)(param_1 + 0x14) * (int)local_38) * 4;
          local_40 = local_40 - (int)local_38;
          local_48 = local_48 + (longlong)(*(int *)(param_1 + 0x14) * local_38._4_4_) * 4;
          if ((((int)uStack_30 == 1) && (local_38._4_4_ == 0)) || (param_3 <= iVar3)) break;
        }
      }
      *(undefined1 **)(param_1 + 0x58) = local_50;
      *(int *)(param_1 + 0x50) = local_40;
      if (iVar2 == 0) {
        return iVar3;
      }
      *(int *)(param_1 + 0x10) = iVar2;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0x12;
  }
  return 0;
}



// FUNCTION 142a76d20 src_delete body=58 status=ok
// SIG undefined src_delete(void)

undefined8 src_delete(void *param_1)

{
                    /* 0x2a76d20  617  src_delete */
  if (param_1 != (void *)0x0) {
    if (*(longlong *)((longlong)param_1 + 0x20) != 0) {
      FMemory::Free();
    }
    _guard_xfg_dispatch_icall_nop(param_1,0,0x60);
    FMemory::Free(param_1);
  }
  return 0;
}



// FUNCTION 142a76d60 src_error body=12 status=ok
// SIG undefined src_error(void)

undefined4 src_error(longlong param_1)

{
                    /* 0x2a76d60  618  src_error */
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  return 0;
}



// FUNCTION 142a76d70 src_float_to_int_array body=106 status=ok
// SIG undefined src_float_to_int_array(void)

void src_float_to_int_array(longlong param_1,longlong param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  
                    /* 0x2a76d70  619  src_float_to_int_array */
  if (param_3 != 0) {
    piVar4 = (int *)(param_2 + (longlong)param_3 * 4);
    do {
      pfVar1 = (float *)((param_1 - param_2) + -4 + (longlong)piVar4);
      piVar4 = piVar4 + -1;
      param_3 = param_3 + -1;
      fVar2 = *pfVar1 * 2.1474836e+09;
      if (fVar2 < 2.1474836e+09) {
        iVar3 = -0x80000000;
        if (-2.1474836e+09 < fVar2) {
          iVar3 = (int)fVar2;
        }
      }
      else {
        iVar3 = 0x7fffffff;
      }
      *piVar4 = iVar3;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 142a76de0 src_float_to_short_array body=112 status=ok
// SIG undefined src_float_to_short_array(void)

void src_float_to_short_array(longlong param_1,longlong param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  
                    /* 0x2a76de0  620  src_float_to_short_array */
  if (param_3 != 0) {
    puVar4 = (undefined2 *)(param_2 + (longlong)param_3 * 2);
    param_1 = param_1 + (longlong)param_3 * 4;
    do {
      pfVar1 = (float *)(param_1 + -4);
      param_1 = param_1 + -4;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + -1;
      fVar2 = *pfVar1 * 2.1474836e+09;
      if (fVar2 < 2.1474836e+09) {
        if (-2.1474836e+09 < fVar2) {
          uVar3 = (undefined2)((uint)(int)fVar2 >> 0x10);
        }
        else {
          uVar3 = 0x8000;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      *puVar4 = uVar3;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 142a76e50 src_get_channels body=33 status=ok
// SIG undefined src_get_channels(void)

undefined4 src_get_channels(longlong param_1)

{
                    /* 0x2a76e50  621  src_get_channels */
  if (param_1 == 0) {
    return 2;
  }
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    return *(undefined4 *)(param_1 + 0x14);
  }
  return 7;
}



// FUNCTION 142a76e80 src_get_description body=76 status=ok
// SIG undefined src_get_description(void)

char * src_get_description(int param_1)

{
  char *pcVar1;
  
                    /* 0x2a76e80  622  src_get_description */
  if (param_1 == 0) {
    pcVar1 = "Band limited sinc interpolation, best quality, 144dB SNR, 96% BW.";
  }
  else {
    if (param_1 == 1) {
      return "Band limited sinc interpolation, medium quality, 121dB SNR, 90% BW.";
    }
    if (param_1 == 2) {
      return "Band limited sinc interpolation, fastest, 97dB SNR, 80% BW.";
    }
    pcVar1 = "Zero order hold interpolator, very fast, poor quality.";
    if (param_1 != 3) {
      pcVar1 = (char *)0x0;
    }
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "Linear interpolator, very fast, poor quality.";
      if (param_1 != 4) {
        pcVar1 = (char *)0x0;
      }
      return pcVar1;
    }
  }
  return pcVar1;
}



// FUNCTION 142a76ed0 src_get_name body=76 status=ok
// SIG undefined src_get_name(void)

char * src_get_name(int param_1)

{
  char *pcVar1;
  
                    /* 0x2a76ed0  623  src_get_name */
  if (param_1 == 0) {
    pcVar1 = "Best Sinc Interpolator";
  }
  else {
    if (param_1 == 1) {
      return "Medium Sinc Interpolator";
    }
    if (param_1 == 2) {
      return "Fastest Sinc Interpolator";
    }
    pcVar1 = "ZOH Interpolator";
    if (param_1 != 3) {
      pcVar1 = (char *)0x0;
    }
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "Linear Interpolator";
      if (param_1 != 4) {
        pcVar1 = (char *)0x0;
      }
      return pcVar1;
    }
  }
  return pcVar1;
}



// FUNCTION 142a76f20 src_get_version body=8 status=ok
// SIG undefined src_get_version(void)

char * src_get_version(void)

{
                    /* 0x2a76f20  624  src_get_version */
  return "libsamplerate-0.1.8 (c) 2002-2008 Erik de Castro Lopo";
}



// FUNCTION 142a76f30 src_int_to_float_array body=67 status=ok
// SIG undefined src_int_to_float_array(void)

void src_int_to_float_array(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  float *pfVar2;
  
                    /* 0x2a76f30  625  src_int_to_float_array */
  if (param_3 != 0) {
    pfVar2 = (float *)(param_2 + (longlong)param_3 * 4);
    do {
      piVar1 = (int *)((param_1 - param_2) + -4 + (longlong)pfVar2);
      pfVar2 = pfVar2 + -1;
      *pfVar2 = (float)*piVar1 * 4.656613e-10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 142a76f80 src_is_valid_ratio body=29 status=ok
// SIG undefined src_is_valid_ratio(void)

undefined8 src_is_valid_ratio(double param_1)

{
                    /* 0x2a76f80  626  src_is_valid_ratio */
  if ((0.00390625 <= param_1) && (param_1 <= 256.0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 142a76fa0 src_new body=226 status=ok
// SIG undefined src_new(void)

undefined8 * src_new(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 *_Dst;
  
                    /* 0x2a76fa0  627  src_new */
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_2 < 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xb;
      return (undefined8 *)0x0;
    }
  }
  else {
    _Dst = (undefined8 *)FMemory::Malloc(0x60);
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x60);
      *(int *)((longlong)_Dst + 0x14) = param_2;
      *(undefined4 *)(_Dst + 3) = 0x22b;
      iVar1 = psrc_set_converter(_Dst,param_1);
      if (iVar1 != 0) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = 10;
        }
        FMemory::Free(_Dst);
        return (undefined8 *)0x0;
      }
      if ((code *)_Dst[7] != (code *)0x0) {
        (*(code *)_Dst[7])(_Dst);
      }
      _Dst[1] = 0;
      *_Dst = 0;
      _Dst[0xb] = 0;
      *(undefined4 *)(_Dst + 10) = 0;
      *(undefined4 *)(_Dst + 2) = 0;
      return _Dst;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142a77090 src_process body=331 status=ok
// SIG undefined src_process(void)

undefined8 src_process(double *param_1,ulonglong *param_2)

{
  double dVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  
                    /* 0x2a77090  628  src_process */
  if (param_1 == (double *)0x0) {
    return 2;
  }
  if ((param_1[5] == 0.0) || (param_1[6] == 0.0)) {
    return 7;
  }
  if (*(int *)(param_1 + 3) != 0x22b) {
    return 0x12;
  }
  if (param_2 == (ulonglong *)0x0) {
    return 3;
  }
  uVar2 = *param_2;
  if ((uVar2 == 0) || (uVar3 = param_2[1], uVar3 == 0)) {
    return 4;
  }
  dVar1 = (double)param_2[5];
  if ((0.00390625 <= dVar1) && (dVar1 <= 256.0)) {
    iVar6 = (int)param_2[2];
    if ((int)param_2[2] < 0) {
      *(undefined4 *)(param_2 + 2) = 0;
      iVar6 = 0;
    }
    iVar5 = *(int *)((longlong)param_2 + 0x14);
    if (*(int *)((longlong)param_2 + 0x14) < 0) {
      *(undefined4 *)((longlong)param_2 + 0x14) = 0;
      iVar5 = 0;
    }
    if (uVar2 < uVar3) {
      uVar2 = uVar2 + (longlong)(*(int *)((longlong)param_1 + 0x14) * iVar6) * 4;
      bVar7 = uVar2 < uVar3;
      bVar8 = uVar2 == uVar3;
    }
    else {
      uVar3 = uVar3 + (longlong)(*(int *)((longlong)param_1 + 0x14) * iVar5) * 4;
      bVar7 = uVar3 < uVar2;
      bVar8 = uVar3 == uVar2;
    }
    if (!bVar7 && !bVar8) {
      return 0x10;
    }
    param_2[3] = 0;
    dVar9 = *param_1;
    dVar10 = dVar1;
    if (*param_1 < 0.00390625) {
      *param_1 = dVar1;
      dVar10 = (double)param_2[5];
      dVar9 = dVar1;
    }
    if (ABS(dVar9 - dVar10) < 1e-15) {
                    /* WARNING: Could not recover jumptable at 0x000142a771ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)param_1[6])();
      return uVar4;
    }
                    /* WARNING: Could not recover jumptable at 0x000142a771b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)param_1[5])(param_1);
    return uVar4;
  }
  return 6;
}



// FUNCTION 142a771e0 src_reset body=59 status=ok
// SIG undefined src_reset(void)

undefined4 src_reset(undefined8 *param_1)

{
                    /* 0x2a771e0  629  src_reset */
  if (param_1 == (undefined8 *)0x0) {
    return 2;
  }
  if ((code *)param_1[7] != (code *)0x0) {
    (*(code *)param_1[7])();
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return 0;
}



// FUNCTION 142a77220 src_set_ratio body=62 status=ok
// SIG undefined src_set_ratio(void)

undefined4 src_set_ratio(double *param_1,double param_2)

{
                    /* 0x2a77220  630  src_set_ratio */
  if (param_1 == (double *)0x0) {
    return 2;
  }
  if ((param_1[5] != 0.0) && (param_1[6] != 0.0)) {
    if ((0.00390625 <= param_2) && (param_2 <= 256.0)) {
      *param_1 = param_2;
      return 0;
    }
    return 6;
  }
  return 7;
}



// FUNCTION 142a77260 src_short_to_float_array body=71 status=ok
// SIG undefined src_short_to_float_array(void)

void src_short_to_float_array(longlong param_1,longlong param_2,int param_3)

{
  short *psVar1;
  float *pfVar2;
  
                    /* 0x2a77260  631  src_short_to_float_array */
  if (param_3 != 0) {
    pfVar2 = (float *)(param_2 + (longlong)param_3 * 4);
    param_1 = param_1 + (longlong)param_3 * 2;
    do {
      psVar1 = (short *)(param_1 + -2);
      param_1 = param_1 + -2;
      pfVar2 = pfVar2 + -1;
      *pfVar2 = (float)(int)*psVar1 * 3.0517578e-05;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 142a772b0 src_simple body=228 status=ok
// SIG undefined src_simple(void)

undefined4 src_simple(longlong param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 *_Dst;
  undefined4 uVar2;
  
                    /* 0x2a772b0  632  src_simple */
  if (param_3 < 1) {
    uVar2 = 0xb;
  }
  else {
    _Dst = (undefined8 *)FMemory::Malloc(0x60);
    if (_Dst == (undefined8 *)0x0) {
      uVar2 = 1;
    }
    else {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x60);
      *(int *)((longlong)_Dst + 0x14) = param_3;
      *(undefined4 *)(_Dst + 3) = 0x22b;
      iVar1 = psrc_set_converter(_Dst,param_2);
      if (iVar1 == 0) {
        if ((code *)_Dst[7] != (code *)0x0) {
          (*(code *)_Dst[7])(_Dst);
        }
        _Dst[1] = 0;
        *_Dst = 0;
        _Dst[0xb] = 0;
        *(undefined4 *)(_Dst + 10) = 0;
        *(undefined4 *)(_Dst + 2) = 0;
        *(undefined4 *)(param_1 + 0x20) = 1;
        uVar2 = src_process(_Dst);
        if (_Dst[4] != 0) {
          FMemory::Free();
        }
        _guard_xfg_dispatch_icall_nop(_Dst,0,0x60);
      }
      else {
        uVar2 = 10;
      }
      FMemory::Free(_Dst);
    }
  }
  return uVar2;
}



// FUNCTION 142a773a0 src_strerror body=226 status=ok
// SIG undefined src_strerror(void)

char * src_strerror(undefined4 param_1)

{
                    /* 0x2a773a0  633  src_strerror */
  switch(param_1) {
  case 0:
    return "No error.";
  case 1:
    return "Malloc failed.";
  case 2:
    return "SRC_STATE pointer is NULL.";
  case 3:
    return "SRC_DATA pointer is NULL.";
  case 4:
    return "SRC_DATA->data_out or SRC_DATA->data_in is NULL.";
  case 5:
    return "Internal error. No private data.";
  case 6:
    return "SRC ratio outside [1/256, 256] range.";
  case 7:
    return "Internal error. No process pointer.";
  case 8:
    return "Internal error. SHIFT_BITS too large.";
  case 9:
    return "Internal error. Filter length too large.";
  case 10:
    return "Bad converter number.";
  case 0xb:
    return "Channel count must be >= 1.";
  case 0xc:
    return "Internal error. Bad buffer length. Please report this.";
  case 0xd:
    return "Internal error. Input data / internal buffer size difference. Please report this.";
  case 0xe:
    return "Internal error. Private pointer is NULL. Please report this.";
  case 0xf:
    return "src_process() called without reset after end_of_input.";
  case 0x10:
    return "Input and output data arrays overlap.";
  case 0x11:
    return "Supplied callback function pointer is NULL.";
  case 0x12:
    return "Calling mode differs from initialisation mode (ie process v callback).";
  case 0x13:
    return "Callback function pointer is NULL in src_callback_read ().";
  case 0x14:
    return "This converter only allows constant conversion ratios.";
  case 0x15:
    return "Internal error : Bad length in prepare_data ().";
  case 0x16:
    return "Error : Someone is trampling on my internal state.";
  case 0x17:
    return "Placeholder. No error defined for this error number.";
  default:
    return (char *)0x0;
  }
}



// FUNCTION 142a774f0 FUN_142a774f0 body=107 status=ok
// SIG undefined FUN_142a774f0(void)

undefined8 * FUN_142a774f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
  TArray<float,TAlignedHeapAllocator<16>_>::ResizeForCopy(param_1,iVar1);
  _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 2);
  return param_1;
}



// FUNCTION 142a77560 operator<unsigned_int,TArray<FSourceEffectChainEntry,FDefaultAllocator>_>_TTuple<unsigned_int,TArray<FSourceEffectChainEntry,FDefaultAllocator>_> body=116 status=ok
// SIG undefined operator<unsigned_int,TArray<FSourceEffectChainEntry,FDefaultAllocator>_>_TTuple<unsigned_int,TArray<FSourceEffectChainEntry,FDefaultAllocator>_>(void)

undefined4 *
TPairInitializer<unsigned_int_const_&,TArray<FSourceEffectChainEntry,FDefaultAllocator>_const_&>::
operator<unsigned_int,TArray<FSourceEffectChainEntry,FDefaultAllocator>_>_TTuple<unsigned_int,TArray<FSourceEffectChainEntry,FDefaultAllocator>_>
          (undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 2) = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  param_2[4] = iVar1;
  if (iVar1 == 0) {
    param_2[5] = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2 + 2,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_2 + 2),_Src,(longlong)iVar1 << 4);
  }
  return param_2;
}



// FUNCTION 142a775e0 operator<unsigned_int,Audio::FMixerBus>_TTuple<unsigned_int,Audio::FMixerBus> body=379 status=ok
// SIG undefined operator<unsigned_int,Audio::FMixerBus>_TTuple<unsigned_int,Audio::FMixerBus>(void)

undefined4 *
TPairInitializer<unsigned_int_const_&,Audio::FMixerBus_const_&>::
operator<unsigned_int,Audio::FMixerBus>_TTuple<unsigned_int,Audio::FMixerBus>
          (undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar9 = (undefined8 *)(param_2 + 2);
  *param_2 = *(undefined4 *)*param_1;
  *puVar9 = 0;
  iVar3 = *(int *)(puVar4 + 1);
  pvVar5 = (void *)*puVar4;
  param_2[4] = iVar3;
  if (iVar3 == 0) {
    param_2[5] = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(puVar9,iVar3,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*puVar9,pvVar5,(longlong)iVar3 << 2);
  }
  puVar7 = (undefined8 *)(param_2 + 6);
  lVar10 = 2;
  lVar8 = 2;
  lVar1 = (longlong)puVar9 + (8 - (longlong)puVar4);
  lVar2 = (longlong)puVar9 + (0xc - (longlong)puVar4);
  puVar9 = puVar4;
  do {
    puVar6 = puVar9 + 2;
    *puVar7 = 0;
    lVar8 = lVar8 + -1;
    iVar3 = *(int *)(puVar9 + 3);
    pvVar5 = (void *)*puVar6;
    *(int *)(lVar1 + (longlong)puVar6) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)((longlong)puVar6 + lVar2) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar7,iVar3,0);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar7,pvVar5,(longlong)iVar3 << 3);
    }
    puVar7 = puVar7 + 2;
    puVar9 = puVar6;
  } while (lVar8 != 0);
  puVar9 = (undefined8 *)(param_2 + 0xe);
  puVar7 = puVar4 + 6;
  do {
    *puVar9 = 0;
    lVar10 = lVar10 + -1;
    iVar3 = *(int *)(puVar7 + 1);
    pvVar5 = (void *)*puVar7;
    *(int *)((longlong)puVar7 + lVar1) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)((longlong)puVar7 + lVar2) = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(puVar9,iVar3,0);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar9,pvVar5,(longlong)iVar3 << 2);
    }
    puVar9 = puVar9 + 2;
    puVar7 = puVar7 + 2;
  } while (lVar10 != 0);
  param_2[0x16] = *(undefined4 *)(puVar4 + 10);
  param_2[0x17] = *(undefined4 *)((longlong)puVar4 + 0x54);
  param_2[0x18] = *(undefined4 *)(puVar4 + 0xb);
  *(undefined8 *)(param_2 + 0x1a) = puVar4[0xc];
  return param_2;
}



// FUNCTION 142a77760 operator<enum_ESubmixChannelFormat,TArray<enum_EAudioMixerChannel::Type,FDefaultAllocator>_>_TTuple<enum_ESubmixChannelFormat,TArray<enum_EAudioMixerChannel::Type,FDefaultAllocator>_> body=117 status=ok
// SIG undefined operator<enum_ESubmixChannelFormat,TArray<enum_EAudioMixerChannel::Type,FDefaultAllocator>_>_TTuple<enum_ESubmixChannelFormat,TArray<enum_EAudioMixerChannel::Type,FDefaultAllocator>_>(void)

undefined1 *
TPairInitializer<enum_ESubmixChannelFormat_&&,TArray<enum_EAudioMixerChannel::Type,FDefaultAllocator>_const_&>
::
operator<enum_ESubmixChannelFormat,TArray<enum_EAudioMixerChannel::Type,FDefaultAllocator>_>_TTuple<enum_ESubmixChannelFormat,TArray<enum_EAudioMixerChannel::Type,FDefaultAllocator>_>
          (undefined8 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined1 *)*param_1;
  *(undefined8 *)(param_2 + 8) = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_2 + 8,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_2 + 8),_Src,(longlong)iVar1 << 2);
  }
  return param_2;
}



// FUNCTION 142a777e0 Append<FNetworkGUID,FDefaultAllocator> body=92 status=ok
// SIG undefined Append<FNetworkGUID,FDefaultAllocator>(void)

void TArray<FNetworkGUID,FDefaultAllocator>::Append<FNetworkGUID,FDefaultAllocator>
               (longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    iVar2 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + iVar1) {
      TArray<int,TAlignedHeapAllocator<16>_>::ResizeTo();
      iVar2 = (int)param_1[1];
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + (longlong)iVar2 * 4),(void *)*param_2,(longlong)iVar1 << 2);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  return;
}



// FUNCTION 142a77840 ApplyAttenuationInternal<short> body=540 status=ok
// SIG undefined ApplyAttenuationInternal<short>(void)

void Audio::IAudioMixerPlatformInterface::ApplyAttenuationInternal<short>
               (longlong param_1,void *param_2,int param_3)

{
  longlong lVar1;
  short *psVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = 0;
  LOCK();
  bVar5 = *(int *)(param_1 + 0x18c) == 0;
  if (bVar5) {
    *(int *)(param_1 + 0x18c) = 0;
  }
  UNLOCK();
  if (bVar5) {
    LOCK();
    bVar5 = *(int *)(param_1 + 400) == 0;
    if (bVar5) {
      *(int *)(param_1 + 400) = 0;
    }
    UNLOCK();
    if (!bVar5) {
      ::_guard_xfg_dispatch_icall_nop(param_2,0,(longlong)param_3 * 2);
    }
  }
  else {
    fVar7 = *(float *)(param_1 + 0x11c);
    *(float *)(param_1 + 0x128) = fVar7;
    if ((*(char *)(param_1 + 0x130) == '\0') && (param_3 != 0)) {
      fVar6 = (fVar7 - *(float *)(param_1 + 0x120)) / (float)param_3;
      fVar7 = *(float *)(param_1 + 0x120);
    }
    else {
      *(float *)(param_1 + 0x120) = fVar7;
      fVar6 = 0.0;
      *(undefined1 *)(param_1 + 0x130) = 0;
    }
    *(float *)(param_1 + 300) = fVar6;
    lVar3 = (longlong)param_3;
    *(float *)(param_1 + 0x124) = fVar7;
    if (3 < lVar3) {
      psVar2 = (short *)((longlong)param_2 + 4);
      lVar4 = (lVar3 - 4U >> 2) + 1;
      lVar1 = lVar4 * 4;
      do {
        fVar7 = *(float *)(param_1 + 0x120) + *(float *)(param_1 + 300);
        *(float *)(param_1 + 0x120) = fVar7;
        psVar2[-2] = (short)(int)((float)(int)psVar2[-2] * fVar7);
        fVar7 = *(float *)(param_1 + 0x120) + *(float *)(param_1 + 300);
        *(float *)(param_1 + 0x120) = fVar7;
        psVar2[-1] = (short)(int)((float)(int)psVar2[-1] * fVar7);
        fVar7 = *(float *)(param_1 + 0x120) + *(float *)(param_1 + 300);
        *(float *)(param_1 + 0x120) = fVar7;
        *psVar2 = (short)(int)((float)(int)*psVar2 * fVar7);
        fVar7 = *(float *)(param_1 + 0x120) + *(float *)(param_1 + 300);
        *(float *)(param_1 + 0x120) = fVar7;
        psVar2[1] = (short)(int)((float)(int)psVar2[1] * fVar7);
        psVar2 = psVar2 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    for (; lVar1 < lVar3; lVar1 = lVar1 + 1) {
      fVar7 = *(float *)(param_1 + 0x120) + *(float *)(param_1 + 300);
      *(float *)(param_1 + 0x120) = fVar7;
      *(short *)((longlong)param_2 + lVar1 * 2) =
           (short)(int)((float)(int)*(short *)((longlong)param_2 + lVar1 * 2) * fVar7);
    }
    LOCK();
    *(uint *)(param_1 + 400) = (uint)(*(float *)(param_1 + 0x11c) == 0.0);
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0x18c) = 0;
    UNLOCK();
    (**(code **)(**(longlong **)(param_1 + 0x108) + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 300) = 0;
  return;
}



// FUNCTION 142a77a60 ApplyAttenuationInternal<float> body=480 status=ok
// SIG undefined ApplyAttenuationInternal<float>(void)

void Audio::IAudioMixerPlatformInterface::ApplyAttenuationInternal<float>
               (longlong param_1,void *param_2,int param_3)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = 0;
  LOCK();
  bVar5 = *(int *)(param_1 + 0x18c) == 0;
  if (bVar5) {
    *(int *)(param_1 + 0x18c) = 0;
  }
  UNLOCK();
  if (bVar5) {
    LOCK();
    bVar5 = *(int *)(param_1 + 400) == 0;
    if (bVar5) {
      *(int *)(param_1 + 400) = 0;
    }
    UNLOCK();
    if (!bVar5) {
      ::_guard_xfg_dispatch_icall_nop(param_2,0,(longlong)param_3 * 4);
    }
  }
  else {
    fVar6 = *(float *)(param_1 + 0x11c);
    *(float *)(param_1 + 0x128) = fVar6;
    if ((*(char *)(param_1 + 0x130) == '\0') && (param_3 != 0)) {
      fVar7 = (fVar6 - *(float *)(param_1 + 0x120)) / (float)param_3;
      fVar6 = *(float *)(param_1 + 0x120);
    }
    else {
      *(float *)(param_1 + 0x120) = fVar6;
      fVar7 = 0.0;
      *(undefined1 *)(param_1 + 0x130) = 0;
    }
    lVar3 = (longlong)param_3;
    *(float *)(param_1 + 300) = fVar7;
    *(float *)(param_1 + 0x124) = fVar6;
    if (3 < lVar3) {
      pfVar2 = (float *)((longlong)param_2 + 8);
      lVar4 = (lVar3 - 4U >> 2) + 1;
      lVar1 = lVar4 * 4;
      do {
        fVar6 = *(float *)(param_1 + 0x120) + *(float *)(param_1 + 300);
        *(float *)(param_1 + 0x120) = fVar6;
        pfVar2[-2] = fVar6 * pfVar2[-2];
        fVar6 = *(float *)(param_1 + 0x120) + *(float *)(param_1 + 300);
        *(float *)(param_1 + 0x120) = fVar6;
        pfVar2[-1] = fVar6 * pfVar2[-1];
        fVar6 = *(float *)(param_1 + 0x120) + *(float *)(param_1 + 300);
        *(float *)(param_1 + 0x120) = fVar6;
        *pfVar2 = fVar6 * *pfVar2;
        fVar6 = *(float *)(param_1 + 0x120) + *(float *)(param_1 + 300);
        *(float *)(param_1 + 0x120) = fVar6;
        pfVar2[1] = fVar6 * pfVar2[1];
        pfVar2 = pfVar2 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    for (; lVar1 < lVar3; lVar1 = lVar1 + 1) {
      fVar6 = *(float *)(param_1 + 0x120) + *(float *)(param_1 + 300);
      *(float *)(param_1 + 0x120) = fVar6;
      *(float *)((longlong)param_2 + lVar1 * 4) = fVar6 * *(float *)((longlong)param_2 + lVar1 * 4);
    }
    LOCK();
    *(uint *)(param_1 + 400) = (uint)(*(float *)(param_1 + 0x11c) == 0.0);
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0x18c) = 0;
    UNLOCK();
    (**(code **)(**(longlong **)(param_1 + 0x108) + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 300) = 0;
  return;
}



// FUNCTION 142a77c40 FUN_142a77c40 body=801 status=ok
// SIG undefined FUN_142a77c40(void)

int * FUN_142a77c40(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  bool local_res8;
  
  iVar15 = 1;
  iVar14 = -1;
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
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar12 & 0x1f);
  puVar3 = (uint *)(*param_1 + (longlong)iVar12 * 0x28);
  puVar5 = (undefined8 *)param_3[1];
  *puVar3 = *(uint *)*param_3;
  *(undefined8 *)(puVar3 + 2) = *puVar5;
  lVar6 = puVar5[1];
  *(longlong *)(puVar3 + 4) = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar3 + 6) = *(undefined1 *)(puVar5 + 2);
  puVar3[8] = 0xffffffff;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar16 != 1) {
    iVar12 = iVar14;
    if (uVar16 != 0) {
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar13 = *(int *)((longlong)plVar10 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar3) * 4);
      if (iVar13 != -1) {
        do {
          iVar12 = iVar13;
          if (*(uint *)(*param_1 + (longlong)iVar13 * 0x28) == *puVar3) break;
          iVar13 = *(int *)(*param_1 + 0x20 + (longlong)iVar13 * 0x28);
          iVar12 = iVar14;
        } while (iVar13 != -1);
      }
    }
    local_res8 = iVar12 != -1;
    if (local_res8) {
      lVar6 = *param_1;
      plVar10 = *(longlong **)(lVar6 + 0x10 + (longlong)iVar12 * 0x28);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar10 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar6 + (longlong)iVar12 * 0x28),puVar3,0x20);
      iVar15 = *param_2;
      bVar7 = (byte)iVar15 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar15;
      }
      lVar6 = *param_1;
      *(undefined4 *)(lVar6 + (longlong)iVar15 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      *(int *)(lVar6 + 4 + (longlong)iVar15 * 0x28) = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar15;
      plVar10 = (longlong *)param_1[4];
      *param_2 = iVar12;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar3 = (uint *)((longlong)plVar10 +
                       (longlong)((int)(iVar15 + (iVar15 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << bVar7 | 1U >> 0x20 - bVar7);
      goto LAB_142a77f38;
    }
  }
  if (3 < uVar16) {
    uVar9 = (uVar16 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar15 = 0x20;
    cVar11 = '\0';
    if (uVar9 != 0) {
      iVar15 = 0x1f - iVar14;
    }
    uVar9 = (uVar16 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar9 != 0) {
      cVar11 = '\x1f' - (char)iVar14;
    }
    iVar15 = 1 << (~(byte)((iVar15 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar15 <= (int)param_1[9])))) {
    uVar16 = (int)param_1[9] - 1U & *puVar3;
    puVar3[9] = uVar16;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    puVar3[8] = *(uint *)((longlong)plVar10 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar15;
    TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142a77f38:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142a77f70 FUN_142a77f70 body=801 status=ok
// SIG undefined FUN_142a77f70(void)

int * FUN_142a77f70(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  bool local_res8;
  
  iVar15 = 1;
  iVar14 = -1;
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
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar12 & 0x1f);
  puVar3 = (uint *)(*param_1 + (longlong)iVar12 * 0x28);
  puVar5 = (undefined8 *)param_3[1];
  *puVar3 = *(uint *)*param_3;
  *(undefined8 *)(puVar3 + 2) = *puVar5;
  lVar6 = puVar5[1];
  *(longlong *)(puVar3 + 4) = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  puVar3[6] = *(uint *)(puVar5 + 2);
  *(undefined1 *)(puVar3 + 7) = *(undefined1 *)((longlong)puVar5 + 0x14);
  puVar3[8] = 0xffffffff;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar16 != 1) {
    iVar12 = iVar14;
    if (uVar16 != 0) {
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar13 = *(int *)((longlong)plVar10 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar3) * 4);
      if (iVar13 != -1) {
        do {
          iVar12 = iVar13;
          if (*(uint *)(*param_1 + (longlong)iVar13 * 0x28) == *puVar3) break;
          iVar13 = *(int *)(*param_1 + 0x20 + (longlong)iVar13 * 0x28);
          iVar12 = iVar14;
        } while (iVar13 != -1);
      }
    }
    local_res8 = iVar12 != -1;
    if (local_res8) {
      lVar6 = *param_1;
      plVar10 = *(longlong **)(lVar6 + 0x10 + (longlong)iVar12 * 0x28);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar10 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar6 + (longlong)iVar12 * 0x28),puVar3,0x20);
      iVar15 = *param_2;
      bVar7 = (byte)iVar15 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar15;
      }
      lVar6 = *param_1;
      *(undefined4 *)(lVar6 + (longlong)iVar15 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      *(int *)(lVar6 + 4 + (longlong)iVar15 * 0x28) = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar15;
      plVar10 = (longlong *)param_1[4];
      *param_2 = iVar12;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar3 = (uint *)((longlong)plVar10 +
                       (longlong)((int)(iVar15 + (iVar15 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << bVar7 | 1U >> 0x20 - bVar7);
      goto LAB_142a78268;
    }
  }
  if (3 < uVar16) {
    uVar9 = (uVar16 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar15 = 0x20;
    cVar11 = '\0';
    if (uVar9 != 0) {
      iVar15 = 0x1f - iVar14;
    }
    uVar9 = (uVar16 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar9 != 0) {
      cVar11 = '\x1f' - (char)iVar14;
    }
    iVar15 = 1 << (~(byte)((iVar15 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar15 <= (int)param_1[9])))) {
    uVar16 = (int)param_1[9] - 1U & *puVar3;
    puVar3[9] = uVar16;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    puVar3[8] = *(uint *)((longlong)plVar10 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar15;
    TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142a78268:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142a782a0 FUN_142a782a0 body=725 status=ok
// SIG undefined FUN_142a782a0(void)

int * FUN_142a782a0(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  void *_Dst;
  char cVar10;
  uint uVar11;
  byte *_Src;
  int iVar12;
  bool local_res8;
  
  iVar6 = 1;
  iVar12 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar8 * 0x20 + 4 + *param_1);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  _Src = (byte *)((longlong)iVar8 * 0x20 + *param_1);
  TPairInitializer<enum_ESubmixChannelFormat_&&,TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_>_const_&>
  ::
  operator<enum_ESubmixChannelFormat,TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_>_>_TTuple<enum_ESubmixChannelFormat,TArray<Audio::FChannelPositionInfo,TSizedDefaultAllocator<32>_>_>
            (param_3,_Src);
  _Src[0x18] = 0xff;
  _Src[0x19] = 0xff;
  _Src[0x1a] = 0xff;
  _Src[0x1b] = 0xff;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar11 != 1) {
    iVar8 = iVar12;
    if (uVar11 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (ulonglong)*_Src) * 4);
      if (iVar9 != -1) {
        do {
          iVar8 = iVar9;
          if (*(byte *)((longlong)iVar9 * 0x20 + *param_1) == *_Src) break;
          iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *param_1);
          iVar8 = iVar12;
        } while (iVar9 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      iVar6 = *param_2;
      bVar3 = (byte)iVar6 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar6;
      }
      puVar7 = (undefined4 *)((longlong)iVar6 * 0x20 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar12 = (int)param_1[6];
      }
      puVar7[1] = iVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar6;
      plVar5 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar5 +
                       (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_142a7854c;
    }
  }
  if (3 < uVar11) {
    uVar4 = (uVar11 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar10 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar12;
    }
    uVar4 = (uVar11 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar10 = '\x1f' - (char)iVar12;
    }
    iVar6 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar11 = (int)param_1[9] - 1U & (uint)*_Src;
    *(uint *)(_Src + 0x1c) = uVar11;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x18) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar11) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar11) * 4) = *param_2
    ;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    TSet<TTuple<unsigned_char,TArray<FGuid,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FGuid,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142a7854c:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142a78580 FUN_142a78580 body=725 status=ok
// SIG undefined FUN_142a78580(void)

int * FUN_142a78580(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  void *_Dst;
  char cVar10;
  uint uVar11;
  byte *_Src;
  int iVar12;
  bool local_res8;
  
  iVar6 = 1;
  iVar12 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar8 * 0x20 + 4 + *param_1);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  _Src = (byte *)((longlong)iVar8 * 0x20 + *param_1);
  TPairInitializer<enum_ESubmixChannelFormat_&&,TArray<enum_EAudioMixerChannel::Type,FDefaultAllocator>_const_&>
  ::
  operator<enum_ESubmixChannelFormat,TArray<enum_EAudioMixerChannel::Type,FDefaultAllocator>_>_TTuple<enum_ESubmixChannelFormat,TArray<enum_EAudioMixerChannel::Type,FDefaultAllocator>_>
            (param_3,_Src);
  _Src[0x18] = 0xff;
  _Src[0x19] = 0xff;
  _Src[0x1a] = 0xff;
  _Src[0x1b] = 0xff;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar11 != 1) {
    iVar8 = iVar12;
    if (uVar11 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (ulonglong)*_Src) * 4);
      if (iVar9 != -1) {
        do {
          iVar8 = iVar9;
          if (*(byte *)((longlong)iVar9 * 0x20 + *param_1) == *_Src) break;
          iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *param_1);
          iVar8 = iVar12;
        } while (iVar9 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      iVar6 = *param_2;
      bVar3 = (byte)iVar6 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar6;
      }
      puVar7 = (undefined4 *)((longlong)iVar6 * 0x20 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar12 = (int)param_1[6];
      }
      puVar7[1] = iVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar6;
      plVar5 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar5 +
                       (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_142a7882c;
    }
  }
  if (3 < uVar11) {
    uVar4 = (uVar11 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar10 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar12;
    }
    uVar4 = (uVar11 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar10 = '\x1f' - (char)iVar12;
    }
    iVar6 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar11 = (int)param_1[9] - 1U & (uint)*_Src;
    *(uint *)(_Src + 0x1c) = uVar11;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x18) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar11) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar11) * 4) = *param_2
    ;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    TSet<TTuple<unsigned_char,TArray<FGuid,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FGuid,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142a7882c:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142a78860 FUN_142a78860 body=713 status=ok
// SIG undefined FUN_142a78860(void)

int * FUN_142a78860(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  char cVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  bool local_res8;
  
  iVar5 = 1;
  iVar12 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar1 = *(int *)((longlong)iVar7 * 0x20 + 4 + *param_1);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar11 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar11 = *puVar11 | 1 << ((byte)iVar7 & 0x1f);
  puVar11 = (uint *)((longlong)iVar7 * 0x20 + *param_1);
  TPairInitializer<unsigned_int_const_&,TArray<FSourceEffectChainEntry,FDefaultAllocator>_const_&>::
  operator<unsigned_int,TArray<FSourceEffectChainEntry,FDefaultAllocator>_>_TTuple<unsigned_int,TArray<FSourceEffectChainEntry,FDefaultAllocator>_>
            (param_3,puVar11);
  puVar11[6] = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar10 != 1) {
    iVar7 = iVar12;
    if (uVar10 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar11) * 4);
      if (iVar8 != -1) {
        do {
          iVar7 = iVar8;
          if (*(uint *)((longlong)iVar8 * 0x20 + *param_1) == *puVar11) break;
          iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *param_1);
          iVar7 = iVar12;
        } while (iVar8 != -1);
      }
    }
    local_res8 = iVar7 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar7 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,puVar11,0x18);
      iVar5 = *param_2;
      bVar2 = (byte)iVar5 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar5;
      }
      puVar6 = (undefined4 *)((longlong)iVar5 * 0x20 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar12 = (int)param_1[6];
      }
      puVar6[1] = iVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar5;
      plVar4 = (longlong *)param_1[4];
      *param_2 = iVar7;
      if (plVar4 == (longlong *)0x0) {
        plVar4 = param_1 + 2;
      }
      puVar11 = (uint *)((longlong)plVar4 +
                        (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar11 = *puVar11 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_142a78b00;
    }
  }
  if (3 < uVar10) {
    uVar3 = (uVar10 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar5 = 0x20;
    cVar9 = '\0';
    if (uVar3 != 0) {
      iVar5 = 0x1f - iVar12;
    }
    uVar3 = (uVar10 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar3 != 0) {
      cVar9 = '\x1f' - (char)iVar12;
    }
    iVar5 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar5 <= (int)param_1[9])))) {
    uVar10 = (int)param_1[9] - 1U & *puVar11;
    puVar11[7] = uVar10;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar11[6] = *(uint *)((longlong)plVar4 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar5;
    TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142a78b00:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142a78b30 FUN_142a78b30 body=610 status=ok
// SIG undefined FUN_142a78b30(void)

int * FUN_142a78b30(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  void *_Dst;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  bool bVar10;
  
  iVar6 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                (param_1,iVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar5 = (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar1 = *(int *)((longlong)iVar5 * 0x78 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x78 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar5;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar9 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar9 = *puVar9 | 1 << ((byte)iVar5 & 0x1f);
  puVar9 = (uint *)((longlong)iVar5 * 0x78 + *param_1);
  TPairInitializer<unsigned_int_const_&,Audio::FMixerBus_const_&>::
  operator<unsigned_int,Audio::FMixerBus>_TTuple<unsigned_int,Audio::FMixerBus>(param_3,puVar9);
  puVar9[0x1c] = 0xffffffff;
  bVar10 = false;
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar8 != 1) {
    if (uVar8 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar9) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)((longlong)iVar5 * 0x78 + *param_1) == *puVar9) goto LAB_142a78c6b;
          iVar5 = *(int *)((longlong)iVar5 * 0x78 + 0x70 + *param_1);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_142a78c6b:
    bVar10 = iVar5 != -1;
    if (bVar10) {
      _Dst = (void *)((longlong)iVar5 * 0x78 + *param_1);
      Audio::FMixerBus::~FMixerBus((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar9,0x70);
      TSparseArray<TSetElement<TTuple<unsigned_int,Audio::FMixerBus>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_142a78d69;
    }
  }
  if (3 < uVar8) {
    uVar3 = (uVar8 >> 1) + 8;
    iVar6 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    iVar5 = 0x20;
    cVar7 = '\0';
    if (uVar3 != 0) {
      iVar5 = 0x1f - iVar6;
    }
    uVar3 = (uVar8 >> 1) + 7;
    iVar6 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar3 != 0) {
      cVar7 = '\x1f' - (char)iVar6;
    }
    iVar6 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar7 & 0x1f);
  }
  if (((int)uVar8 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar8 = (int)param_1[9] - 1U & *puVar9;
    puVar9[0x1d] = uVar8;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar9[0x1c] = *(uint *)((longlong)plVar4 +
                            ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    TSet<TTuple<unsigned_int,Audio::FMixerBus>,TDefaultMapHashableKeyFuncs<unsigned_int,Audio::FMixerBus,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142a78d69:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 142a78da0 FUN_142a78da0 body=751 status=ok
// SIG undefined FUN_142a78da0(void)

uint * FUN_142a78da0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  ulonglong *_Src;
  uint uVar13;
  bool bVar14;
  uint local_res8 [2];
  
  iVar10 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar9 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar9 + 1)) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,uVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar9 = *(uint *)(param_1 + 6);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)((longlong)(int)uVar9 * 0x60 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x60 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar9;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
  puVar2 = (undefined4 *)param_3[1];
  _Src = (ulonglong *)((longlong)(int)uVar9 * 0x60 + *param_1);
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  *(undefined4 *)(_Src + 2) = *puVar2;
  *(undefined4 *)((longlong)_Src + 0x14) = puVar2[1];
  _Src[4] = *(ulonglong *)(puVar2 + 4);
  *(undefined4 *)(_Src + 5) = puVar2[6];
  _Src[6] = *(ulonglong *)(puVar2 + 8);
  _Src[7] = *(ulonglong *)(puVar2 + 10);
  *(undefined4 *)(_Src + 8) = puVar2[0xc];
  *(undefined4 *)((longlong)_Src + 0x44) = puVar2[0xd];
  *(undefined4 *)(_Src + 9) = puVar2[0xe];
  *(undefined4 *)((longlong)_Src + 0x4c) = puVar2[0xf];
  *(undefined4 *)(_Src + 10) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    FUN_142694030(param_1,local_res8,uVar3);
    uVar5 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar8 * 0x60 + *param_1),_Src,0x50);
      TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,uVar9,1);
      *param_2 = uVar5;
      goto LAB_142a79061;
    }
  }
  if (3 < uVar13) {
    uVar5 = (uVar13 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar11 = '\0';
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar10;
    }
    uVar5 = (uVar13 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar11 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    iVar10 = (int)(*_Src >> 4);
    uVar5 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar12 = -(iVar10 + uVar5) ^ uVar5 >> 0xd;
    uVar13 = (iVar10 - uVar5) - uVar12 ^ uVar12 >> 0xc;
    uVar5 = (uVar5 - uVar13) - uVar12 ^ uVar13 << 0x10;
    uVar12 = (uVar12 - uVar5) - uVar13 ^ uVar5 >> 5;
    uVar13 = (uVar13 - uVar5) - uVar12 ^ uVar12 >> 3;
    uVar5 = (uVar5 - uVar13) - uVar12 ^ uVar13 << 10;
    uVar13 = ((uVar12 - uVar5) - uVar13 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x54) = uVar13;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 10) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         uVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData>,TDefaultMapHashableKeyFuncs<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142a79061:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 142a79090 HeapSortInternal<Audio::FChannelPositionInfo,FIdentityFunctor,TDereferenceWrapper<Audio::FChannelPositionInfo,`Audio::FMixerDevice::InitializeChannelAzimuthMap'::`2'::FCompareByAzimuth>_> body=341 status=ok
// SIG undefined HeapSortInternal<Audio::FChannelPositionInfo,FIdentityFunctor,TDereferenceWrapper<Audio::FChannelPositionInfo,`Audio::FMixerDevice::InitializeChannelAzimuthMap'::`2'::FCompareByAzimuth>_>(void)

void AlgoImpl::
     HeapSortInternal<Audio::FChannelPositionInfo,FIdentityFunctor,TDereferenceWrapper<Audio::FChannelPositionInfo,_Audio::FMixerDevice::InitializeChannelAzimuthMap_::_2_::FCompareByAzimuth>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar4 = iVar6;
    iVar8 = iVar5;
joined_r0x000142a790ba:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar7 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          if (*(int *)((longlong)param_1 + (longlong)iVar6 * 8 + 0x14) <
              *(int *)((longlong)param_1 + (longlong)iVar7 * 8 + 4)) {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        puVar9 = param_1 + iVar7;
        puVar1 = param_1 + iVar5;
        if (*(int *)((longlong)puVar1 + 4) < *(int *)((longlong)puVar9 + 4)) {
          if (puVar1 != puVar9) {
            uVar3 = *puVar1;
            *puVar1 = *puVar9;
            *puVar9 = uVar3;
          }
          iVar6 = iVar7 * 2 + 1;
          iVar5 = iVar7;
          goto joined_r0x000142a790ba;
        }
      }
      iVar6 = iVar4 + -2;
      iVar5 = iVar8 + -1;
      iVar4 = iVar6;
      iVar8 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar9 = param_1 + param_2;
    do {
      if (param_1 != puVar9) {
        uVar3 = *param_1;
        *param_1 = *puVar9;
        *puVar9 = uVar3;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar5 * 2;
          iVar6 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if (*(int *)((longlong)param_1 + (longlong)iVar4 * 8 + 0x14) <
                *(int *)((longlong)param_1 + (longlong)iVar6 * 8 + 4)) {
              iVar6 = iVar4;
            }
            iVar6 = iVar6 + 1;
          }
          puVar1 = param_1 + iVar6;
          puVar2 = param_1 + iVar5;
          if (*(int *)((longlong)puVar1 + 4) <= *(int *)((longlong)puVar2 + 4)) break;
          if (puVar2 != puVar1) {
            uVar3 = *puVar2;
            *puVar2 = *puVar1;
            *puVar1 = uVar3;
          }
          iVar5 = iVar6;
        } while (iVar6 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar9 = puVar9 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142a791f0 IntroSortInternal<Audio::FChannelPositionInfo,FIdentityFunctor,TDereferenceWrapper<Audio::FChannelPositionInfo,`Audio::FMixerDevice::InitializeChannelAzimuthMap'::`2'::FCompareByAzimuth>_> body=625 status=ok
// SIG undefined IntroSortInternal<Audio::FChannelPositionInfo,FIdentityFunctor,TDereferenceWrapper<Audio::FChannelPositionInfo,`Audio::FMixerDevice::InitializeChannelAzimuthMap'::`2'::FCompareByAzimuth>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<Audio::FChannelPositionInfo,FIdentityFunctor,TDereferenceWrapper<Audio::FChannelPositionInfo,_Audio::FMixerDevice::InitializeChannelAzimuthMap_::_2_::FCompareByAzimuth>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar11);
    local_318 = (undefined4)(longlong)(fVar11 + fVar11);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar6 = &local_328;
    do {
      puVar10 = (undefined8 *)*plVar6;
      puVar8 = (undefined8 *)plVar6[1];
      lVar2 = plVar6[2];
      local_338._0_4_ = (int)lVar2;
      lVar4 = ((longlong)puVar8 - (longlong)puVar10 >> 3) + 1;
      puVar9 = puVar10;
      if ((int)local_338 != 0) {
LAB_142a792b0:
        if (8 < lVar4) {
          if (lVar4 < 0) {
            lVar4 = lVar4 + 1;
          }
          puVar10 = puVar9 + (lVar4 >> 1);
          if (puVar10 != puVar9) {
            uVar3 = *puVar10;
            *puVar10 = *puVar9;
            *puVar9 = uVar3;
          }
          puVar7 = puVar8 + 1;
          puVar5 = puVar9;
LAB_142a792e7:
          puVar10 = puVar5 + 1;
          if (puVar10 <= puVar8) goto code_r0x000142a792f0;
          goto LAB_142a79300;
        }
        for (; puVar10 = puVar9, puVar7 = puVar9, puVar9 < puVar8; puVar8 = puVar8 + -1) {
          while (puVar5 = puVar10, puVar10 = puVar7 + 1, puVar10 <= puVar8) {
            piVar1 = (int *)((longlong)puVar7 + 0xc);
            puVar7 = puVar10;
            if (*piVar1 <= *(int *)((longlong)puVar5 + 4)) {
              puVar10 = puVar5;
            }
          }
          if (puVar5 != puVar8) {
            uVar3 = *puVar5;
            *puVar5 = *puVar8;
            *puVar8 = uVar3;
          }
        }
        goto LAB_142a793d3;
      }
LAB_142a793c4:
      local_338 = lVar2;
      HeapSortInternal<Audio::FChannelPositionInfo,FIdentityFunctor,TDereferenceWrapper<Audio::FChannelPositionInfo,_Audio::FMixerDevice::InitializeChannelAzimuthMap_::_2_::FCompareByAzimuth>_>
                (puVar10,lVar4,param_3,param_4);
LAB_142a793d3:
      plVar6 = plVar6 + -3;
    } while (&local_328 <= plVar6);
  }
  return;
code_r0x000142a792f0:
  piVar1 = (int *)((longlong)puVar5 + 0xc);
  puVar5 = puVar10;
  if (*piVar1 <= *(int *)((longlong)puVar9 + 4)) goto LAB_142a792e7;
LAB_142a79300:
  do {
    puVar5 = puVar7;
    puVar7 = puVar5 + -1;
    if (puVar7 <= puVar9) break;
  } while (*(int *)((longlong)puVar9 + 4) <= *(int *)((longlong)puVar5 + -4));
  if (puVar10 <= puVar7) {
    puVar5 = puVar10;
    if (puVar10 != puVar7) {
      uVar3 = *puVar10;
      *puVar10 = *puVar7;
      *puVar7 = uVar3;
    }
    goto LAB_142a792e7;
  }
  if (puVar9 != puVar7) {
    uVar3 = *puVar9;
    *puVar9 = *puVar7;
    *puVar7 = uVar3;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar7 + (-8 - (longlong)puVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar8 - (longlong)puVar10 & 0xfffffffffffffff8U)) {
    if (puVar10 < puVar8) {
      *plVar6 = (longlong)puVar10;
      plVar6[1] = (longlong)puVar8;
      *(int *)(plVar6 + 2) = (int)local_338;
      plVar6 = plVar6 + 3;
    }
    if (puVar7 <= puVar9 + 1) goto LAB_142a793d3;
    puVar8 = puVar5 + -2;
    puVar10 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar7) {
      *plVar6 = (longlong)puVar9;
      plVar6[1] = (longlong)(puVar5 + -2);
      *(int *)(plVar6 + 2) = (int)local_338;
      plVar6 = plVar6 + 3;
    }
    if (puVar8 <= puVar10) goto LAB_142a793d3;
  }
  lVar4 = ((longlong)puVar8 - (longlong)puVar10 >> 3) + 1;
  puVar9 = puVar10;
  if ((int)local_338 == 0) goto LAB_142a793c4;
  goto LAB_142a792b0;
}



// FUNCTION 142a79470 FUN_142a79470 body=146 status=ok
// SIG undefined FUN_142a79470(void)

void FUN_142a79470(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar1 = FUN_142a14bf0();
  FUN_1417985e0(uVar1,param_1,param_2,param_3,0,param_4,param_5,param_6,0);
  return;
}



// FUNCTION 142a79510 FDelayAPF body=96 status=ok
// SIG undefined FDelayAPF(void)

undefined8 * Audio::FDelayAPF::FDelayAPF(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__1454d45f8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x38d1b717;
  *(undefined4 *)(param_1 + 6) = 0x38d1b717;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x3f800000;
  FDelay::Reset();
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1454d4708;
  return param_1;
}



// FUNCTION 142a79570 FUN_142a79570 body=264 status=ok
// SIG undefined FUN_142a79570(void)

undefined4 * FUN_142a79570(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 local_res8;
  
  *param_1 = 0;
  lVar3 = 2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0x41200000;
  param_1[0x17] = 0x41a00000;
  param_1[0x18] = 0x447a0000;
  param_1[0x19] = 0xc0c00000;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1b] = 0x40a00000;
  param_1[0x1c] = 0x3f800000;
  param_1[0x1d] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x1e) = 0x101;
  if (param_1[0xd] != 2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 10,2);
  }
  do {
    iVar2 = param_1[0xc];
    param_1[0xc] = iVar2 + 1;
    if ((int)param_1[0xd] < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 10,iVar2);
    }
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 10) + (longlong)iVar2 * 8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = local_res8;
      puVar1[1] = local_res8;
    }
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return param_1;
}



// FUNCTION 142a79680 FEnvelopeFollower body=43 status=ok
// SIG undefined FEnvelopeFollower(void)

undefined8 * Audio::FEnvelopeFollower::FEnvelopeFollower(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 2;
  *param_1 = &PTR_FUN_14416bf40;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x472c4400;
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return param_1;
}



// FUNCTION 142a796b0 FUN_142a796b0 body=171 status=ok
// SIG undefined FUN_142a796b0(void)

undefined8 *
FUN_142a796b0(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  float fVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__1454d4378;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = param_4;
  fVar1 = (float)USoundWave::GetSampleRateForCurrentPlatform(param_3);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(int *)((longlong)param_1 + 0x44) = (int)fVar1;
  *(undefined2 *)(param_1 + 9) = 0x10;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if ((byte)(*(char *)(param_3 + 0xb1) - 2U) < 2) {
    param_1[10] = *(undefined8 *)(param_3 + 0x130);
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_3 + 0xe8);
    *(undefined8 *)(param_3 + 0x130) = 0;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_3 + 0xe4);
  return param_1;
}



// FUNCTION 142a79760 FMixerBus body=243 status=ok
// SIG undefined FMixerBus(void)

undefined8 *
Audio::FMixerBus::FMixerBus(undefined8 *param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  
  piVar2 = (int *)(param_1 + 7);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar3 = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 1;
  *(int *)((longlong)param_1 + 0x54) = param_3;
  *(int *)(param_1 + 0xb) = param_4;
  param_1[0xc] = param_2;
  do {
    iVar4 = 0;
    *piVar2 = 0;
    if ((piVar2[1] < 0) && (piVar2[1] != 0)) {
      TArray<float,FDefaultAllocator>::ResizeTo(piVar2 + -2);
      iVar4 = *piVar2;
    }
    iVar1 = iVar4 + param_3 * param_4;
    *piVar2 = iVar1;
    if (piVar2[1] < iVar1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(piVar2 + -2);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(piVar2 + -2) + (longlong)iVar4 * 4),0,
               (longlong)(param_3 * param_4) << 2);
    piVar2 = piVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return param_1;
}



// FUNCTION 142a79860 FUN_142a79860 body=1009 status=ok
// SIG undefined FUN_142a79860(void)

undefined8 * FUN_142a79860(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_1422bc5d0();
  *(undefined1 *)(param_1 + 0xe4) = 0;
  puVar3 = (undefined8 *)0x0;
  *param_1 = &PTR__scalar_deleting_destructor__1454d44a8;
  param_1[0xe3] = &PTR_FUN_1454d45e0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = param_2;
  param_1[0xe8] = 0x12;
  param_1[0xe9] = 0x12;
  param_1[0xea] = 0x12;
  param_1[0xeb] = 0x12;
  param_1[0xec] = 0x12;
  param_1[0xed] = 0x12;
  param_1[0xee] = 0x12;
  param_1[0xef] = 0x12;
  param_1[0xf0] = 0x12;
  param_1[0xf1] = 0x12;
  param_1[0xf2] = 0x12;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  *(undefined4 *)(param_1 + 0xf9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7cc) = 0;
  param_1[0xfb] = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  *(undefined4 *)(param_1 + 0x106) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x834) = 0;
  param_1[0x108] = 0;
  *(undefined4 *)(param_1 + 0x109) = 0;
  *(undefined4 *)(param_1 + 0x10b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x85c) = 0x400;
  *(undefined4 *)(param_1 + 0x10c) = 1;
  param_1[0x10d] = 0;
  *(undefined4 *)(param_1 + 0x10e) = 0xac44;
  *(undefined1 *)((longlong)param_1 + 0x874) = 0;
  *(undefined4 *)(param_1 + 0x10f) = 0x20;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x116] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0x3fa999999999999a;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  Audio::FAudioPlatformDeviceInfo::Reset();
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  *(undefined4 *)(param_1 + 0x125) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x92c) = 0;
  param_1[0x127] = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  puVar1 = (undefined8 *)operator_new(0x10);
  puVar2 = puVar3;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar2 = puVar1;
  }
  param_1[299] = puVar2;
  param_1[0x12a] = puVar2;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  *(undefined4 *)(param_1 + 0x132) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x994) = 0;
  param_1[0x134] = 0;
  *(undefined4 *)(param_1 + 0x135) = 0;
  param_1[0x136] = param_1;
  param_1[0x137] = 0;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  *(undefined4 *)(param_1 + 0x13f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9fc) = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa64) = 0;
  param_1[0x14e] = 0;
  *(undefined4 *)(param_1 + 0x14f) = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  *(byte *)((longlong)param_1 + 0xaf4) = *(byte *)((longlong)param_1 + 0xaf4) & 0xfc;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  *(undefined4 *)(param_1 + 0x15e) = 4;
  *(undefined4 *)(param_1 + 0x15f) = 0;
  param_1[0x160] = 0xffffffffffffffff;
  puVar2 = (undefined8 *)operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 10) = 0;
    puVar2[2] = AK::MemoryMgr::StartProfileThreadUsage;
    puVar3 = puVar2;
  }
  param_1[0x163] = puVar3;
  param_1[0x162] = puVar3;
  *(byte *)(param_1 + 0x6b) = *(byte *)(param_1 + 0x6b) | 0x20;
  *(undefined1 *)(param_1 + 0x164) = 0;
  return param_1;
}



// FUNCTION 142a79c60 FMixerSource body=466 status=ok
// SIG undefined FMixerSource(void)

undefined8 * Audio::FMixerSource::FMixerSource(undefined8 *param_1,longlong param_2)

{
  param_1[1] = param_2;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1454d41a0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f000000;
  *(undefined4 *)(param_1 + 5) = 0x469c4000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x41a00000;
  *(undefined4 *)(param_1 + 6) = 0x469c4000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x41a00000;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 1;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(uint *)((longlong)param_1 + 0x7c) = *(uint *)((longlong)param_1 + 0x7c) & 0xfffffffe;
  param_1[0x11] = param_2;
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xd0 | 0x10;
  *param_1 = &PTR_FUN_1454d4638;
  param_1[0x10] = &PTR_StartProfileThreadUsage_1454d46b8;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xbf800000;
  FSpatializationParams::FSpatializationParams(param_1 + 0x2a);
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) & 0xffffffe0;
  *(uint *)(param_1 + 0x3d) =
       ((uint)*(byte *)(param_2 + 0x358) * 2 ^ *(uint *)(param_1 + 0x3d)) & 0x20 ^
       *(uint *)(param_1 + 0x3d);
  return param_1;
}



// FUNCTION 142a79e40 FUN_142a79e40 body=632 status=ok
// SIG undefined FUN_142a79e40(void)

undefined8 * FUN_142a79e40(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  *param_1 = *param_2;
  lVar7 = param_2[1];
  param_1[1] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = param_2[2];
  param_1[3] = 0;
  iVar5 = *(int *)(param_2 + 4);
  lVar7 = param_2[3];
  *(int *)(param_1 + 4) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1 + 3,iVar5,0);
    puVar3 = (undefined8 *)param_1[3];
    puVar4 = (undefined4 *)(lVar7 + 0x10);
    do {
      *puVar3 = *(undefined8 *)(puVar4 + -4);
      lVar7 = *(longlong *)(puVar4 + -2);
      puVar3[1] = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      *(undefined4 *)(puVar3 + 2) = *puVar4;
      puVar1 = puVar4 + 1;
      puVar4 = puVar4 + 6;
      *(undefined1 *)((longlong)puVar3 + 0x14) = *(undefined1 *)puVar1;
      puVar3 = puVar3 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar3 = param_1 + 5;
  puVar6 = param_2 + 5;
  lVar7 = 2;
  do {
    *puVar3 = 0;
    lVar7 = lVar7 + -1;
    iVar5 = *(int *)(puVar6 + 1);
    pvVar2 = (void *)*puVar6;
    *(int *)((longlong)param_1 + (8 - (longlong)param_2) + (longlong)puVar6) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)((longlong)param_1 + (0xc - (longlong)param_2) + (longlong)puVar6) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar3,iVar5,0);
      _guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar5 << 3);
    }
    puVar3 = puVar3 + 2;
    puVar6 = puVar6 + 2;
  } while (lVar7 != 0);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[0xb] = 0;
  iVar5 = *(int *)(param_2 + 0xc);
  pvVar2 = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0xb,iVar5,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[0xb],pvVar2,(longlong)iVar5 << 4);
  }
  param_1[0xd] = param_2[0xd];
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  FString::FString(param_1 + 0x10,param_2 + 0x10);
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  *(undefined1 *)((longlong)param_1 + 0xb9) = *(undefined1 *)((longlong)param_2 + 0xb9);
  *(undefined1 *)((longlong)param_1 + 0xba) = *(undefined1 *)((longlong)param_2 + 0xba);
  *(undefined1 *)((longlong)param_1 + 0xbb) = *(undefined1 *)((longlong)param_2 + 0xbb);
  *(undefined1 *)((longlong)param_1 + 0xbc) = *(undefined1 *)((longlong)param_2 + 0xbc);
  *(undefined1 *)((longlong)param_1 + 0xbd) = *(undefined1 *)((longlong)param_2 + 0xbd);
  *(undefined1 *)((longlong)param_1 + 0xbe) = *(undefined1 *)((longlong)param_2 + 0xbe);
  return param_1;
}



// FUNCTION 142a7a0c0 FUN_142a7a0c0 body=438 status=ok
// SIG undefined FUN_142a7a0c0(void)

undefined8 * FUN_142a7a0c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  *(int *)(param_1 + 1) = DAT_146b29fc0;
  *param_1 = 0;
  DAT_146b29fc0 = DAT_146b29fc0 + 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_2;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0xffffffffffffffff;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  puVar1 = (undefined8 *)operator_new(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    puVar1[2] = AK::MemoryMgr::StartProfileThreadUsage;
    puVar2 = puVar1;
  }
  param_1[0x2f] = puVar2;
  param_1[0x2e] = puVar2;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x32));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x32),4000);
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xfe;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x3a),4000);
  param_1[0x3f] = 0;
  return param_1;
}



// FUNCTION 142a7a280 FPlate body=199 status=ok
// SIG undefined FPlate(void)

longlong Audio::FPlateReverb::FPlate::FPlate(longlong param_1)

{
  FDelayAPF::FDelayAPF();
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined ***)(param_1 + 0x48) = &PTR__scalar_deleting_destructor__1454d45f8;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0x38d1b717;
  *(undefined4 *)(param_1 + 0x78) = 0x38d1b717;
  *(undefined8 *)(param_1 + 0x7c) = 0x3f800000;
  FDelay::Reset();
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0x3f800000;
  FDelayAPF::FDelayAPF(param_1 + 0x98);
  *(undefined ***)(param_1 + 0xe0) = &PTR__scalar_deleting_destructor__1454d45f8;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0x38d1b717;
  *(undefined4 *)(param_1 + 0x110) = 0x38d1b717;
  *(undefined8 *)(param_1 + 0x114) = 0x3f800000;
  FDelay::Reset();
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  return param_1;
}



// FUNCTION 142a7a350 FPlateReverb body=605 status=ok
// SIG undefined FPlateReverb(void)

undefined8 * Audio::FPlateReverb::FPlateReverb(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *param_1 = 0x3f800000;
  *(undefined4 *)(param_1 + 1) = 0x3f4ccccd;
  puVar3 = param_1 + 0xb;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f000000;
  lVar1 = (longlong)param_1 + 0x84;
  param_1[2] = 0x3f333333;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f000000;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f000000;
  *(undefined4 *)(param_1 + 5) = 0x3f000000;
  lVar2 = 2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f000000;
  *(undefined4 *)(param_1 + 6) = 0x3f000000;
  param_1[7] = &PTR__scalar_deleting_destructor__1454d4718;
  param_1[8] = 0x3f800000;
  *(undefined4 *)(param_1 + 9) = 0x3f4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f000000;
  *(undefined4 *)(param_1 + 10) = 0x3f333333;
  do {
    *puVar3 = &PTR__scalar_deleting_destructor__1454d45f8;
    *(undefined8 *)(lVar1 + -0x24) = 0;
    *(undefined8 *)(lVar1 + -0x1c) = 0;
    *(undefined8 *)(lVar1 + -0x14) = 0;
    *(undefined8 *)(lVar1 + -0xc) = 0;
    *(undefined8 *)(lVar1 + -4) = 0x38d1b717;
    *(undefined4 *)(lVar1 + 4) = 0x38d1b717;
    *(undefined8 *)(lVar1 + 8) = 0x3f800000;
    FDelay::Reset(puVar3);
    *(undefined8 *)(lVar1 + 0x14) = 0;
    *(undefined8 *)(lVar1 + 0x1c) = 0x3f800000;
    _vector_constructor_iterator_(lVar1 + 0x24,0x48,4,FDelayAPF::FDelayAPF);
    *(undefined8 *)(lVar1 + 0x144) = 0;
    puVar3 = puVar3 + 0x3a;
    *(undefined8 *)(lVar1 + 0x14c) = 0x3f800000;
    *(undefined8 *)(lVar1 + 0x154) = 0;
    *(undefined8 *)(lVar1 + 0x15c) = 0x3f800000;
    *(undefined8 *)(lVar1 + 0x164) = 0;
    *(undefined8 *)(lVar1 + 0x16c) = 0x3f800000;
    *(undefined8 *)(lVar1 + 0x174) = 0;
    *(undefined8 *)(lVar1 + 0x17c) = 0x3f800000;
    lVar1 = lVar1 + 0x1d0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0x7f] = &PTR__scalar_deleting_destructor__1454d45f8;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0x38d1b717;
  *(undefined4 *)(param_1 + 0x85) = 0x38d1b717;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0x3f800000;
  FDelay::Reset();
  param_1[0x87] = 0;
  param_1[0x88] = 0x3f800000;
  FDelayAPF::FDelayAPF(param_1 + 0x89);
  FDelayAPF::FDelayAPF(param_1 + 0x92);
  FDelayAPF::FDelayAPF(param_1 + 0x9b);
  FDelayAPF::FDelayAPF(param_1 + 0xa4);
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  FPlate::FPlate(param_1 + 0xaf);
  FPlate::FPlate(param_1 + 0xd5);
  *(undefined2 *)(param_1 + 0x102) = 0x101;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  return param_1;
}



// FUNCTION 142a7a5b0 FUN_142a7a5b0 body=908 status=ok
// SIG undefined FUN_142a7a5b0(void)

undefined8 * FUN_142a7a5b0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  
  plVar1 = param_1 + 0x27;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 1;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 1;
  *plVar1 = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 1;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  if (*(int *)((longlong)param_1 + 0x144) != 1) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1,1);
  }
  iVar3 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x144) < iVar3 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
  }
  puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar3 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
  }
  param_1[0x29] = *plVar1;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x472c4400;
  *(undefined4 *)(param_1 + 0x2f) = 1;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x468ca000;
  param_1[0x30] = 0x468ca000;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0x3fc00000;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0x3fc00000;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x2d] = &PTR__scalar_deleting_destructor__1454d4440;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x46,0,0x70);
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = &PTR_FUN_14416bf40;
  *(undefined4 *)(param_1 + 0x59) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0x472c4400;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2e4) = 1;
  FSpatializationParams::FSpatializationParams(param_1 + 0x5e);
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(undefined1 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  return param_1;
}



// FUNCTION 142a7a940 FSpatializationParams body=223 status=ok
// SIG undefined FSpatializationParams(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FSpatializationParams::FSpatializationParams(undefined8 *param_1)

{
  *param_1 = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 1) = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 2) = DAT_1464aa810;
  *(undefined4 *)((longlong)param_1 + 0x14) = DAT_1464aa814;
  *(undefined4 *)(param_1 + 3) = DAT_1464aa818;
  *(undefined4 *)((longlong)param_1 + 0x1c) = DAT_1464aa81c;
  param_1[4] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 5) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x2c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x34) = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 8) = DAT_1464aa810;
  *(undefined4 *)((longlong)param_1 + 0x44) = DAT_1464aa814;
  *(undefined4 *)(param_1 + 9) = DAT_1464aa818;
  *(undefined4 *)((longlong)param_1 + 0x4c) = DAT_1464aa81c;
  param_1[10] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xb) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x5c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 100) = DAT_1468b5d98;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 142a7aa20 FSubmixEffectDynamicsProcessor body=75 status=ok
// SIG undefined FSubmixEffectDynamicsProcessor(void)

undefined8 * FSubmixEffectDynamicsProcessor::FSubmixEffectDynamicsProcessor(undefined8 *param_1)

{
  FSoundEffectBase::FSoundEffectBase();
  *param_1 = &PTR__scalar_deleting_destructor__1454d4608;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_142a79570(param_1 + 0x14);
  return param_1;
}



// FUNCTION 142a7aa70 FUN_142a7aa70 body=323 status=ok
// SIG undefined FUN_142a7aa70(void)

undefined8 * FUN_142a7aa70(undefined8 *param_1)

{
  FSoundEffectBase::FSoundEffectBase();
  *param_1 = &PTR_FUN_1454d4720;
  Audio::FPlateReverb::FPlateReverb(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x113) = 0;
  *(undefined8 *)((longlong)param_1 + 0x89c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8a4) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x115) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x8ac) = 0x3f333333;
  *(undefined4 *)((longlong)param_1 + 0x8b4) = 0;
  *(undefined4 *)(param_1 + 0x117) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x8bc) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x118) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x8c4) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x119) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x8cc) = 0x3f000000;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11a));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x11a),4000);
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  *(undefined4 *)((longlong)param_1 + 0x934) = 0;
  *(undefined4 *)(param_1 + 0x126) = 0xffffffff;
  param_1[0x128] = 0;
  *(undefined4 *)(param_1 + 0x129) = 0;
  param_1[0x11f] = &PTR_FUN_14413ebc8;
  *(undefined2 *)(param_1 + 0x12a) = 0x404;
  *(undefined4 *)((longlong)param_1 + 0x954) = 0x7f7fffff;
  param_1[299] = 0;
  param_1[300] = 0;
  *(undefined1 *)(param_1 + 0x12d) = 0;
  return param_1;
}



// FUNCTION 142a7abc0 FSubmixEffectSubmixEQ body=180 status=ok
// SIG undefined FSubmixEffectSubmixEQ(void)

undefined8 * FSubmixEffectSubmixEQ::FSubmixEffectSubmixEQ(undefined8 *param_1)

{
  FSoundEffectBase::FSoundEffectBase();
  *param_1 = &PTR__scalar_deleting_destructor__1454d4750;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x40000000;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x19));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x19),4000);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 142a7ac80 FUN_142a7ac80 body=484 status=ok
// SIG undefined FUN_142a7ac80(void)

undefined8 * FUN_142a7ac80(undefined8 *param_1)

{
  *param_1 = &PTR_IsPromotedBuild_1454d4220;
  param_1[1] = &PTR_LAB_1454d4338;
  param_1[2] = &PTR_StartProfileThreadUsage_144163940;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  Audio::FAudioPlatformDeviceInfo::Reset(param_1 + 4);
  *(undefined4 *)(param_1 + 3) = 0;
  Audio::FAudioPlatformDeviceInfo::Reset(param_1 + 4);
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 2;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x400;
  *(undefined4 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xac44;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x20;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0xffffffffffffffff;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 1;
  param_1[0x27] = 0;
  param_1[0x28] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x27,0);
  FGenericPlatformString::Memcpy(param_1[0x27],L"None",10);
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2f] = 0;
  *(int *)(param_1 + 0x30) = DAT_146b29e30;
  DAT_146b29e30 = DAT_146b29e30 + 1;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 1;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  return param_1;
}



// FUNCTION 142a7ae70 FUN_142a7ae70 body=743 status=ok
// SIG undefined FUN_142a7ae70(void)

undefined8 * FUN_142a7ae70(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_14237f6c0();
  puVar3 = (undefined8 *)0x0;
  *param_1 = &PTR_FUN_1454d4bb0;
  param_1[5] = &PTR_LAB_1454d5128;
  param_1[0x5c] = &PTR_FUN_143f48bb8;
  *(undefined2 *)(param_1 + 0x5d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0xc2700000;
  param_1[0x5e] = 0x43c80000;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x45610000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x61);
  *(byte *)((longlong)param_1 + 0x381) = *(byte *)((longlong)param_1 + 0x381) & 0xfc;
  param_1[0x5c] = &PTR_FUN_143f48bc8;
  *(undefined1 *)(param_1 + 0x70) = 0x83;
  *(undefined4 *)((longlong)param_1 + 0x382) = 0x30000;
  *(undefined4 *)(param_1 + 0x71) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0x43480000;
  *(undefined4 *)(param_1 + 0x72) = 0x453b8000;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0x45bb8000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x73);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x82);
  *(float *)((longlong)param_1 + 0x4d4) = *(float *)(param_1 + 0x5e);
  *(undefined4 *)(param_1 + 0x91) = 0x469c4000;
  *(undefined8 *)((longlong)param_1 + 0x48c) = 0x469c4000;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0;
  *(undefined4 *)(param_1 + 0x93) = 0x41f00000;
  *(float *)(param_1 + 0x9b) = *(float *)(param_1 + 0x5e) + *(float *)(param_1 + 0x60);
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0x42700000;
  *(undefined4 *)(param_1 + 0x94) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x95) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x96) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x97) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x98) = 0x469c4000;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x99) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x9a) = 0x3f733333;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0x3e4ccccd;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x9c);
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 2;
  puVar1 = (undefined8 *)operator_new(0x60);
  puVar2 = puVar3;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    puVar1[2] = AK::MemoryMgr::StartProfileThreadUsage;
    puVar2 = puVar1;
  }
  param_1[199] = puVar2;
  param_1[0xc6] = puVar2;
  puVar2 = (undefined8 *)operator_new(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar3 = puVar2;
  }
  param_1[0xc9] = puVar3;
  param_1[200] = puVar3;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) & 0xfd;
  *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) | 2;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 0x40;
  *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) | 2;
  *(byte *)(param_1 + 0xbb) = *(byte *)(param_1 + 0xbb) & 0xfe;
  *(undefined2 *)((longlong)param_1 + 0x62c) = 0;
  param_1[0xc3] = 0;
  param_1[0xb2] = DAT_146b15e60;
  *(undefined4 *)((longlong)param_1 + 0x614) = 0x400;
  return param_1;
}



// FUNCTION 142a7b160 USynthSound body=56 status=ok
// SIG undefined USynthSound(void)

undefined8 * USynthSound::USynthSound(undefined8 *param_1)

{
  FUN_1427f00a0();
  *param_1 = &PTR__scalar_deleting_destructor__1454d4870;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  return param_1;
}



// FUNCTION 142a7b1a0 ~TArray<Audio::FBiquadFilter,FDefaultAllocator> body=139 status=ok
// SIG undefined ~TArray<Audio::FBiquadFilter,FDefaultAllocator>(void)

void TArray<Audio::FBiquadFilter,FDefaultAllocator>::~TArray<Audio::FBiquadFilter,FDefaultAllocator>
               (undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  puVar2 = (undefined8 *)*param_1;
  iVar3 = *(int *)(param_1 + 1);
  if (iVar3 != 0) {
    do {
      puVar1 = (undefined8 *)puVar2[2];
      *puVar2 = &PTR__vector_deleting_destructor__1454d43d0;
      if (puVar1 != (undefined8 *)0x0) {
        if (puVar1[-1] == 0) {
          FMemory::operator_delete(puVar1 + -1);
        }
        else {
          (**(code **)*puVar1)(puVar1,3);
        }
      }
      puVar2 = puVar2 + 6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar2 = (undefined8 *)*param_1;
  }
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar2);
  return;
}



// FUNCTION 142a7b230 ~TArray<Audio::FDelay,FDefaultAllocator> body=125 status=ok
// SIG undefined ~TArray<Audio::FDelay,FDefaultAllocator>(void)

void TArray<Audio::FDelay,FDefaultAllocator>::~TArray<Audio::FDelay,FDefaultAllocator>
               (undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR__scalar_deleting_destructor__1454d45f8;
      if (puVar1[1] != 0) {
        FMemory::operator_delete();
        puVar1[1] = 0;
      }
      puVar1 = puVar1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 142a7b2b0 ~TSparseArray<TSetElement<TTuple<unsigned_int,Audio::FMixerBus>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=392 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<unsigned_int,Audio::FMixerBus>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<unsigned_int,Audio::FMixerBus>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<unsigned_int,Audio::FMixerBus>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_142a7b371;
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
LAB_142a7b371:
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
      Audio::FMixerBus::~FMixerBus((longlong)iStack_1c * 0x78 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo(param_1,0)
    ;
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



// FUNCTION 142a7b440 ~FDecodeHandleBase body=215 status=ok
// SIG undefined ~FDecodeHandleBase(void)

void Audio::FDecodeHandleBase::~FDecodeHandleBase(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  
  lVar1 = param_1[1];
  *param_1 = &PTR__scalar_deleting_destructor__1454d4780;
  if (lVar1 == 0) {
    *param_1 = &PTR_FUN_1454d4348;
    return;
  }
  plVar2 = *(longlong **)(lVar1 + 0x70);
  if (plVar2 == (longlong *)0x0) {
    LOCK();
    bVar4 = *(int *)(lVar1 + 0x60) == 0;
    if (bVar4) {
      *(int *)(lVar1 + 0x60) = 0;
    }
    UNLOCK();
    if (!bVar4) {
      FUN_142a83750(lVar1 + 8);
      LOCK();
      *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + -1;
      UNLOCK();
    }
code_r0x000142a7b4b8:
    if (*(longlong *)(lVar1 + 0x70) == 0) goto LAB_142a7b4d4;
    (**(code **)(**(longlong **)(lVar1 + 0x68) + 0x20))(*(longlong **)(lVar1 + 0x68),0xffffffff,0);
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
    if (cVar3 == '\0') goto code_r0x000142a7b4b8;
    FUN_142a83750(lVar1 + 8);
    LOCK();
    *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + -1;
    UNLOCK();
    if (*(longlong **)(lVar1 + 0x68) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 0x68) + 0x10))();
    }
  }
  *(undefined8 *)(lVar1 + 0x70) = 0;
LAB_142a7b4d4:
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,1);
  }
  *param_1 = &PTR_FUN_1454d4348;
  return;
}



// FUNCTION 142a7b520 ~FDelayAPF body=47 status=ok
// SIG undefined ~FDelayAPF(void)

void Audio::FDelayAPF::~FDelayAPF(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__1454d45f8;
  if (param_1[1] != 0) {
    FMemory::operator_delete();
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 142a7b550 ~FDynamicsProcessor body=120 status=ok
// SIG undefined ~FDynamicsProcessor(void)

void Audio::FDynamicsProcessor::~FDynamicsProcessor(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x20);
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (iVar1 != 0) {
    do {
      *puVar2 = &PTR_FUN_14416bf40;
      puVar2 = puVar2 + 5;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    puVar2 = *(undefined8 **)(param_1 + 0x18);
  }
  if (puVar2 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  TArray<Audio::FDelay,FDefaultAllocator>::~TArray<Audio::FDelay,FDefaultAllocator>(param_1 + 8);
  return;
}



// FUNCTION 142a7b5d0 ~FEarlyReflections body=146 status=ok
// SIG undefined ~FEarlyReflections(void)

void Audio::FEarlyReflections::~FEarlyReflections(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 2;
  *param_1 = &PTR__scalar_deleting_destructor__1454d4718;
  puVar1 = param_1 + 0x78;
  do {
    lVar2 = lVar2 + -1;
    _vector_destructor_iterator_(puVar1 + -0x30,0x48,4,FDelayAPF::~FDelayAPF);
    puVar1[-0x3a] = &PTR__scalar_deleting_destructor__1454d45f8;
    if (puVar1[-0x39] != 0) {
      FMemory::operator_delete();
      puVar1[-0x39] = 0;
    }
    puVar1 = puVar1 + -0x3a;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 142a7b670 FUN_142a7b670 body=11 status=ok
// SIG undefined FUN_142a7b670(void)

void FUN_142a7b670(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14416bf40;
  return;
}



// FUNCTION 142a7b680 ~FMixerBus body=141 status=ok
// SIG undefined ~FMixerBus(void)

void Audio::FMixerBus::~FMixerBus(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = 2;
  plVar3 = param_1 + 10;
  lVar4 = 2;
  do {
    plVar1 = plVar3 + -2;
    plVar3 = plVar3 + -2;
    lVar4 = lVar4 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar4 != 0);
  plVar3 = param_1 + 6;
  do {
    plVar1 = plVar3 + -2;
    plVar3 = plVar3 + -2;
    lVar2 = lVar2 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a7b710 FUN_142a7b710 body=460 status=ok
// SIG undefined FUN_142a7b710(void)

void FUN_142a7b710(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar4 = 0;
  uVar7 = uVar4;
  if (0 < *(int *)(param_1 + 0xd8)) {
    do {
      lVar8 = *(longlong *)(param_1 + 0xd0);
      plVar3 = *(longlong **)(uVar7 + lVar8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,1);
        lVar8 = *(longlong *)(param_1 + 0xd0);
      }
      *(undefined8 *)(uVar7 + lVar8) = 0;
      uVar5 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar5;
      uVar7 = uVar7 + 8;
    } while ((int)uVar5 < *(int *)(param_1 + 0xd8));
    *(undefined4 *)(param_1 + 0xd8) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0xdc)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xd0,0);
    }
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xe0);
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,Audio::FMixerBus>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned_int,Audio::FMixerBus>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x80);
  iVar6 = *(int *)(param_1 + 0x78);
  lVar8 = *(longlong *)(param_1 + 0x70);
  if (iVar6 != 0) {
    do {
      FUN_142a7bdc0(lVar8);
      lVar8 = lVar8 + 0x4b0;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar8 = *(longlong *)(param_1 + 0x70);
  }
  if (lVar8 != 0) {
    FMemory::Free(lVar8);
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  lVar9 = 2;
  lVar8 = param_1 + 0x48;
  do {
    lVar8 = lVar8 + -0x10;
    TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
    ::
    ~TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
              (lVar8);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142a7b8e0 ~FMixerSourceVoiceInitParams body=170 status=ok
// SIG undefined ~FMixerSourceVoiceInitParams(void)

void Audio::FMixerSourceVoiceInitParams::~FMixerSourceVoiceInitParams(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  lVar5 = 2;
  lVar6 = param_1 + 0x48;
  do {
    plVar1 = (longlong *)(lVar6 + -0x10);
    lVar6 = lVar6 + -0x10;
    lVar5 = lVar5 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar5 != 0);
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_1 + 0x18);
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  return;
}



// FUNCTION 142a7b990 ~FMixerSubmix body=619 status=ok
// SIG undefined ~FMixerSubmix(void)

void Audio::FMixerSubmix::~FMixerSubmix(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_28 [4];
  
  ClearSoundEffectSubmixes();
  if (*(int *)(param_1 + 0x138) != -1) {
    (**(code **)(**(longlong **)(param_1 + 0x128) + 0x28))();
    *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x13c) != -1) {
    (**(code **)(**(longlong **)(param_1 + 0x128) + 0x40))();
    *(undefined4 *)(param_1 + 0x13c) = 0xffffffff;
  }
  if (((*(byte *)(param_1 + 0x1c8) & 1) != 0) && (*(longlong *)(param_1 + 0x1f8) != 0)) {
    local_28[0] = 0;
    local_28[1] = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"InterruptedRecording.wav",0x32);
    local_28[2] = 0;
    local_28[3] = 0;
    FUN_1428112d0(*(undefined8 *)(param_1 + 0x1f8),*(undefined8 *)(param_1 + 0x80),1,local_28,
                  local_28 + 2,0);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d0));
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 400));
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  TQueue<TFunction<void___cdecl(void)>,1>::~TQueue<TFunction<void___cdecl(void)>,1>(param_1 + 0x170)
  ;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x130);
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
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FNodeItem>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FNodeItem>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x88);
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x20,0);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
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
  return;
}



// FUNCTION 142a7bc00 ~FPlate body=148 status=ok
// SIG undefined ~FPlate(void)

void Audio::FPlateReverb::FPlate::~FPlate(undefined8 *param_1)

{
  param_1[0x1c] = &PTR__scalar_deleting_destructor__1454d45f8;
  if (param_1[0x1d] != 0) {
    FMemory::operator_delete();
    param_1[0x1d] = 0;
  }
  param_1[0x13] = &PTR__scalar_deleting_destructor__1454d45f8;
  if (param_1[0x14] != 0) {
    FMemory::operator_delete();
    param_1[0x14] = 0;
  }
  param_1[9] = &PTR__scalar_deleting_destructor__1454d45f8;
  if (param_1[10] != 0) {
    FMemory::operator_delete();
    param_1[10] = 0;
  }
  *param_1 = &PTR__scalar_deleting_destructor__1454d45f8;
  if (param_1[1] != 0) {
    FMemory::operator_delete();
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 142a7bca0 FUN_142a7bca0 body=288 status=ok
// SIG undefined FUN_142a7bca0(void)

void FUN_142a7bca0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  Audio::FPlateReverb::FPlate::~FPlate(param_1 + 0x6a8);
  Audio::FPlateReverb::FPlate::~FPlate(param_1 + 0x578);
  plVar4 = *(longlong **)(param_1 + 0x570);
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
  *(undefined ***)(param_1 + 0x520) = &PTR__scalar_deleting_destructor__1454d45f8;
  if (*(longlong *)(param_1 + 0x528) != 0) {
    FMemory::operator_delete();
    *(undefined8 *)(param_1 + 0x528) = 0;
  }
  *(undefined ***)(param_1 + 0x4d8) = &PTR__scalar_deleting_destructor__1454d45f8;
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    FMemory::operator_delete();
    *(undefined8 *)(param_1 + 0x4e0) = 0;
  }
  *(undefined ***)(param_1 + 0x490) = &PTR__scalar_deleting_destructor__1454d45f8;
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::operator_delete();
    *(undefined8 *)(param_1 + 0x498) = 0;
  }
  *(undefined ***)(param_1 + 0x448) = &PTR__scalar_deleting_destructor__1454d45f8;
  if (*(longlong *)(param_1 + 0x450) != 0) {
    FMemory::operator_delete();
    *(undefined8 *)(param_1 + 0x450) = 0;
  }
  *(undefined ***)(param_1 + 0x3f8) = &PTR__scalar_deleting_destructor__1454d45f8;
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FMemory::operator_delete();
    *(undefined8 *)(param_1 + 0x400) = 0;
  }
  Audio::FEarlyReflections::~FEarlyReflections(param_1 + 0x38);
  return;
}



// FUNCTION 142a7bdc0 FUN_142a7bdc0 body=568 status=ok
// SIG undefined FUN_142a7bdc0(void)

void FUN_142a7bdc0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  lVar4 = 6;
  plVar5 = (longlong *)(param_1 + 0x478);
  do {
    plVar1 = plVar5 + -3;
    plVar5 = plVar5 + -5;
    lVar4 = lVar4 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    if (*plVar5 != 0) {
      FMemory::Free();
    }
  } while (lVar4 != 0);
  if (*(longlong *)(param_1 + 0x370) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x360) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x2c0) = &PTR_FUN_14416bf40;
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x168) = &PTR__scalar_deleting_destructor__1454d4440;
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::operator_delete();
  }
  *(undefined ***)(param_1 + 0x168) = &PTR__scalar_deleting_destructor__1454d43d8;
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  lVar6 = 2;
  lVar4 = param_1 + 0xd8;
  do {
    plVar5 = (longlong *)(lVar4 + -0x10);
    lVar4 = lVar4 + -0x10;
    lVar6 = lVar6 + -1;
    if (*plVar5 != 0) {
      FMemory::Free();
    }
  } while (lVar6 != 0);
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 0x20);
  if (plVar5 != (longlong *)0x0) {
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
  plVar5 = *(longlong **)(param_1 + 8);
  if (plVar5 != (longlong *)0x0) {
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
  return;
}



// FUNCTION 142a7c000 ~IAudioMixerPlatformInterface body=173 status=ok
// SIG undefined ~IAudioMixerPlatformInterface(void)

void Audio::IAudioMixerPlatformInterface::~IAudioMixerPlatformInterface(undefined8 *param_1)

{
  *param_1 = &PTR_IsPromotedBuild_1454d4220;
  param_1[1] = &PTR_LAB_1454d4338;
  param_1[2] = &PTR_StartProfileThreadUsage_144163940;
  if (param_1[0x27] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  TArray<FEdgeToCreate,FDefaultAllocator>::~TArray<FEdgeToCreate,FDefaultAllocator>(param_1 + 0x15);
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR_FUN_143f47c98;
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  return;
}



// FUNCTION 142a7c0b0 FUN_142a7c0b0 body=239 status=ok
// SIG undefined FUN_142a7c0b0(void)

void FUN_142a7c0b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)0x0;
  if (*(int *)(param_1 + 0x240) == 0) {
    plVar4 = *(longlong **)(param_1 + 0x238);
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x238);
    plVar4 = plVar3;
  }
  if (plVar3 == (longlong *)0x0) {
    if ((*(int *)(param_1 + 0x240) == 0) || (plVar4 == (longlong *)0x0)) goto LAB_142a7c120;
    lVar1 = *plVar4;
  }
  else {
    lVar1 = *plVar3;
    plVar4 = plVar3;
  }
  (**(code **)(lVar1 + 0x28))(plVar4,0);
  if (*(longlong *)(param_1 + 0x238) != 0) {
    uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x238),0,0);
    *(undefined8 *)(param_1 + 0x238) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x240) = 0;
LAB_142a7c120:
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  lVar1 = *(longlong *)(param_1 + 0x208);
  while (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x208) = **(undefined8 **)(param_1 + 0x208);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 8) != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(lVar1,0x18);
    }
    lVar1 = *(longlong *)(param_1 + 0x208);
  }
  USoundWave::~USoundWave(param_1);
  return;
}



// FUNCTION 142a7c1a0 operator= body=243 status=ok
// SIG undefined operator=(void)

longlong * Audio::FAudioPlatformDeviceInfo::operator=(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  plVar1 = param_2 + 2;
  plVar2 = param_1 + 2;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  plVar1 = param_2 + 6;
  *(int *)(param_1 + 4) = (int)param_2[4];
  plVar2 = param_1 + 6;
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 5) = (int)param_2[5];
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 7) = (int)param_2[7];
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    param_2[7] = 0;
  }
  *(byte *)(param_1 + 8) =
       *(byte *)(param_1 + 8) ^ (*(byte *)(param_2 + 8) ^ *(byte *)(param_1 + 8)) & 1;
  return param_1;
}



// FUNCTION 142a7c2a0 operator() body=123 status=ok
// SIG undefined operator()(void)

void <lambda_270b93f2682c753f78c9c594053dd35a>::operator()(longlong *param_1)

{
  longlong lVar1;
  longlong local_18;
  undefined8 *local_10;
  
  lVar1 = param_1[2];
  local_10 = (undefined8 *)operator_new(0x18);
  if (local_10 != (undefined8 *)0x0) {
    *(undefined4 *)(local_10 + 1) = 1;
    *local_10 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)local_10 + 0xc) = 1;
    local_10[2] = lVar1;
  }
  local_18 = lVar1;
  SharedPointerInternals::EnableSharedFromThis(&local_18,lVar1,lVar1);
  FUN_142a7ed70(**(undefined8 **)(*param_1 + 0x728),(int)param_1[1],&local_18);
  return;
}



// FUNCTION 142a7c3b0 FUN_142a7c3b0 body=317 status=ok
// SIG undefined FUN_142a7c3b0(void)

void FUN_142a7c3b0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_68;
  undefined4 *local_60;
  undefined4 local_58;
  undefined4 local_54;
  
  lVar7 = (longlong)(int)param_1[1] * 0x4b0 + *(longlong *)(*param_1 + 0x70);
  plVar1 = (longlong *)(lVar7 + 0x98);
  iVar3 = *(int *)(lVar7 + 0xa0);
  lVar8 = (longlong)iVar3;
  plVar6 = (longlong *)*plVar1;
  plVar2 = plVar6 + lVar8 * 3;
  if (plVar6 != plVar2) {
    do {
      if (*(int *)(*plVar6 + 8) == *(int *)(param_1[2] + 8)) {
        *(int *)(plVar6 + 2) = (int)param_1[4];
        goto LAB_142a7c474;
      }
      plVar6 = plVar6 + 3;
    } while (plVar6 != plVar2);
  }
  *(int *)(lVar7 + 0xa0) = iVar3 + 1;
  if (*(int *)(lVar7 + 0xa4) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar1,iVar3);
  }
  lVar4 = *plVar1;
  *(longlong *)(lVar4 + lVar8 * 0x18) = param_1[2];
  lVar5 = param_1[3];
  *(longlong *)(lVar4 + 8 + lVar8 * 0x18) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  *(int *)(lVar4 + 0x10 + lVar8 * 0x18) = (int)param_1[4];
  *(undefined1 *)(lVar4 + 0x14 + lVar8 * 0x18) = *(undefined1 *)((longlong)param_1 + 0x24);
  *(undefined1 *)(lVar7 + 0x3a8 + (ulonglong)*(byte *)(param_1[2] + 0x118) * 0x28) = 1;
LAB_142a7c474:
  local_58 = (undefined4)param_1[4];
  local_54 = 0xffffffff;
  local_res10 = *(undefined8 *)(*(longlong *)(*param_1 + 0x18) + (longlong)(int)param_1[1] * 8);
  local_68 = &local_res10;
  local_60 = &local_58;
  FUN_142a78da0(param_1[2] + 0x88,local_res8,&local_68,0);
  return;
}



// FUNCTION 142a7c4f0 operator() body=432 status=ok
// SIG undefined operator()(void)

void <lambda_ac4bcb9f8b3c3b4863183fcf06799165>::operator()(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int local_res8;
  float local_48;
  undefined4 local_44;
  float local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  local_44 = 0;
  local_40 = 0.0;
  local_30 = 0xffffffff;
  plVar6 = (longlong *)*param_1;
  local_res8 = 0;
  local_38 = *(undefined8 *)(*plVar6 + 0x360);
  local_48 = (float)*(int *)(*plVar6 + 0x14);
  if (0 < *(int *)((longlong)plVar6 + 0x134)) {
    lVar7 = 0;
    do {
      lVar2 = plVar6[0xe];
      if (*(int *)(lVar7 + 0x200 + lVar2) == (int)param_1[1]) {
        *(bool *)(lVar7 + 0x228 + lVar2) = (char)param_1[4] == '\0';
        iVar1 = *(int *)(lVar7 + 0x210 + lVar2);
        if ((int)param_1[3] == iVar1) {
          iVar8 = 0;
          if (0 < iVar1) {
            lVar10 = 0;
            lVar9 = 0;
            do {
              lVar3 = param_1[2];
              uVar4 = *(undefined8 *)(lVar10 + *(longlong *)(lVar7 + 0x208 + lVar2));
              cVar5 = FSoundEffectBase::IsParentPreset(uVar4,*(undefined8 *)(lVar9 + lVar3));
              if (cVar5 == '\0') goto LAB_142a7c602;
              FSoundEffectBase::SetEnabled(uVar4,~*(byte *)(lVar9 + 8 + lVar3) & 1);
              iVar8 = iVar8 + 1;
              lVar9 = lVar9 + 0x10;
              lVar10 = lVar10 + 8;
            } while (iVar8 < *(int *)(lVar7 + 0x210 + lVar2));
          }
        }
        else {
LAB_142a7c602:
          local_44 = *(undefined4 *)(lVar7 + 0x490 + lVar2);
          iVar1 = *(int *)(lVar7 + 0x498 + lVar2);
          if (iVar1 == -1) {
            local_40 = -1.0;
          }
          else {
            local_40 = (float)iVar1 / local_48;
          }
          FUN_142a926b0(*param_1,local_res8);
          FUN_142a7f7b0(*param_1,local_res8,&local_48,param_1 + 2);
        }
      }
      plVar6 = (longlong *)*param_1;
      local_res8 = local_res8 + 1;
      lVar7 = lVar7 + 0x4b0;
    } while (local_res8 < *(int *)((longlong)plVar6 + 0x134));
  }
  return;
}



// FUNCTION 142a7c730 FUN_142a7c730 body=347 status=ok
// SIG undefined FUN_142a7c730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142a7c7ab) */
/* WARNING: Removing unreachable block (ram,0x000142a7c7b7) */
/* WARNING: Removing unreachable block (ram,0x000142a7c7d0) */

void FUN_142a7c730(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  longlong local_50;
  longlong *plStack_48;
  undefined1 local_40;
  undefined1 local_38 [8];
  undefined4 *local_30;
  longlong *local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_50 = param_1[1];
  plStack_48 = (longlong *)param_1[2];
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_48 + 1) = (int)plStack_48[1] + 1;
    UNLOCK();
  }
  local_60._0_4_ = (undefined4)local_50;
  local_60._4_4_ = (undefined4)((ulonglong)local_50 >> 0x20);
  uStack_58._0_4_ = SUB84(plStack_48,0);
  uStack_58._4_4_ = (undefined4)((ulonglong)plStack_48 >> 0x20);
  uStack_14 = uStack_58._4_4_;
  uStack_18 = (undefined4)uStack_58;
  uStack_1c = local_60._4_4_;
  local_20 = (undefined4)local_60;
  uStack_58 = 0;
  local_60 = 0;
  local_40 = 0;
  local_68[0] = *(undefined4 *)(param_1[1] + 8);
  local_30 = local_68;
  local_28 = &local_50;
  FUN_142a77c40(*param_1 + 0x20,local_38,&local_30,0);
  if ((*(char *)(*param_1 + 0x118) == '\x05') && (*(longlong *)(*param_1 + 0x128) != 0)) {
    FUN_142a968f0();
  }
  plVar5 = plStack_48;
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_48 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_48)(plStack_48);
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



// FUNCTION 142a7c920 operator() body=232 status=ok
// SIG undefined operator()(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void <lambda_eb41caed53d90115c566805eaffab3ad>::operator()(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  uStack_30 = (longlong *)param_1[2];
  lVar3 = *param_1;
  local_38 = param_1[1];
  plVar6 = (longlong *)(lVar3 + 0x10);
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != plVar6) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    lVar4 = *plVar6;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)plVar6 = (undefined4)local_38;
    *(undefined4 *)(lVar3 + 0x14) = local_38._4_4_;
    *(undefined4 *)(lVar3 + 0x18) = (undefined4)uStack_30;
    *(undefined4 *)(lVar3 + 0x1c) = uStack_30._4_4_;
    local_38 = lVar4;
    uStack_30 = plVar5;
  }
  plVar6 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = uStack_30 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
    }
  }
  if ((*(char *)(*param_1 + 0x118) == '\x05') && (*(longlong *)(*param_1 + 0x128) != 0)) {
    FUN_142a967f0();
  }
  return;
}



// FUNCTION 142a7ca10 FUN_142a7ca10 body=2652 status=ok
// SIG undefined FUN_142a7ca10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142a7ca10(longlong *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  byte bVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int *piVar15;
  undefined1 *puVar16;
  uint uVar17;
  longlong *plVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_288 [32];
  longlong local_268;
  char local_258;
  uint local_254;
  longlong local_250;
  longlong *plStack_248;
  undefined4 local_240;
  int iStack_23c;
  undefined1 local_238 [4];
  undefined1 local_234 [4];
  undefined1 local_230 [8];
  int *local_228;
  longlong local_220;
  longlong *local_218;
  longlong local_210;
  float local_208;
  undefined4 local_204;
  float local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  int *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  undefined4 *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  longlong local_178;
  int local_170;
  int local_16c;
  longlong local_108;
  longlong *plStack_100;
  longlong local_f8 [2];
  longlong local_e8;
  int aiStack_e0 [2];
  longlong local_d8 [2];
  undefined1 local_c8 [16];
  longlong local_b8 [2];
  undefined1 local_a8 [32];
  ulonglong local_88;
  longlong *plVar18;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  plVar19 = (longlong *)((longlong)(int)param_1[1] * 0x4b0 + *(longlong *)(*param_1 + 0x70));
  lVar12 = param_1[2];
  plVar18 = (longlong *)param_1[3];
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
  }
  local_250 = lVar12;
  plStack_248 = plVar18;
  if (&local_250 != plVar19) {
    local_250 = *plVar19;
    plStack_248 = (longlong *)plVar19[1];
    *plVar19 = lVar12;
    plVar19[1] = (longlong)plVar18;
    local_108 = lVar12;
    plStack_100 = plVar18;
  }
  plVar18 = plStack_248;
  local_218 = plVar19;
  if (plStack_248 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_248 + 1;
    lVar12 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_248)(plStack_248);
      LOCK();
      piVar15 = (int *)((longlong)plVar18 + 0xc);
      iVar8 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_248 + 8))(plStack_248,1);
      }
    }
  }
  plVar18 = *(longlong **)(*plVar19 + 0x50);
  if ((plVar18 != (longlong *)0x0) && ((*(byte *)((longlong)plVar18 + 0xb3) & 4) != 0)) {
    (**(code **)(*plVar18 + 0x2e8))();
  }
  *(byte *)((longlong)plVar19 + 0x479) = *(byte *)((longlong)plVar19 + 0x479) & 0xe7;
  *(byte *)(plVar19 + 0x8f) = *(byte *)(plVar19 + 0x8f) & 199;
  *(byte *)(plVar19 + 0x8f) = *(byte *)(plVar19 + 0x8f) | 0x84;
  bVar9 = (*(byte *)((longlong)param_1 + 0xc9) ^ *(byte *)((longlong)plVar19 + 0x479)) & 1 ^
          *(byte *)((longlong)plVar19 + 0x479);
  *(byte *)((longlong)plVar19 + 0x479) = bVar9;
  *(byte *)((longlong)plVar19 + 0x479) =
       (*(char *)((longlong)param_1 + 0xcc) << 6 ^ bVar9) & 0x40 ^ bVar9;
  plVar19[0x94] = param_1[0x18];
  puVar5 = (undefined8 *)param_1[4];
  plVar19[2] = (longlong)puVar5;
  (**(code **)*puVar5)();
  plVar18 = plVar19 + 0x27;
  *(int *)(plVar19 + 0x92) = (int)param_1[0x10];
  plVar13 = (longlong *)0x0;
  *(undefined4 *)(plVar19 + 0x93) = *(undefined4 *)((longlong)param_1 + 0x84);
  uVar17 = *(uint *)(param_1 + 0x10);
  uVar14 = (ulonglong)uVar17;
  *(undefined4 *)(plVar19 + 0x2b) = *(undefined4 *)(*(longlong *)*param_1 + 0x14);
  *(uint *)(plVar19 + 0x2a) = uVar17;
  *(undefined4 *)((longlong)plVar19 + 0x154) = 0xbf800000;
  *(undefined4 *)(plVar19 + 0x28) = 0;
  if (*(uint *)((longlong)plVar19 + 0x144) != uVar17) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar18,uVar17);
  }
  if (0 < (int)uVar17) {
    do {
      iVar8 = (int)plVar19[0x28];
      *(int *)(plVar19 + 0x28) = iVar8 + 1;
      if (*(int *)((longlong)plVar19 + 0x144) < iVar8 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar18,iVar8);
      }
      puVar1 = (undefined4 *)(*plVar18 + (longlong)iVar8 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
      }
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  plVar19[0x29] = *plVar18;
  *(undefined4 *)((longlong)plVar19 + 0x15c) = 0;
  *(undefined4 *)(plVar19 + 0x2c) = 0x3f800000;
  Audio::FOnePoleLPFBank::ClearMemory(plVar18);
  plVar18 = plVar19 + 0x2d;
  local_268 = 0;
  (**(code **)(*plVar18 + 8))(plVar18);
  (**(code **)(*plVar18 + 0x48))(plVar18,1);
  fVar2 = *(float *)((longlong)param_1 + 0x8c);
  fVar3 = *(float *)(param_1 + 0x11);
  fVar22 = -1002.3935;
  fVar23 = (float)(*(int *)(*(longlong *)*param_1 + 0x14) / (int)((longlong *)*param_1)[0x27]);
  if (local_258 == '\0') {
    fVar21 = -4605.1704;
  }
  else {
    fVar21 = -1002.3935;
  }
  fVar21 = _guard_xfg_dispatch_icall_nop(fVar21 / (fVar23 * fVar3));
  if (local_258 == '\0') {
    fVar22 = -4605.1704;
  }
  fVar22 = _guard_xfg_dispatch_icall_nop(fVar22 / (fVar23 * fVar2));
  *(float *)((longlong)plVar19 + 0x2dc) = fVar22;
  *(float *)((longlong)plVar19 + 0x2cc) = fVar23;
  *(float *)(plVar19 + 0x5a) = fVar3;
  *(float *)((longlong)plVar19 + 0x2d4) = fVar21;
  *(float *)(plVar19 + 0x5b) = fVar2;
  *(uint *)(plVar19 + 0x5c) = local_254;
  *(undefined4 *)(plVar19 + 0x59) = 2;
  *(char *)((longlong)plVar19 + 0x2e4) = local_258;
  if (*(char *)((longlong)param_1 + 0xc9) != '\0') {
    (**(code **)(**(longlong **)(*param_1 + 8) + 0x40))
              (*(longlong **)(*param_1 + 8),(int)param_1[1],param_1 + 0x17,param_1[0x14]);
  }
  if (param_1[0x15] != 0) {
    local_268 = param_1[0x15];
    (**(code **)(**(longlong **)(*(longlong *)*param_1 + 0x60) + 0x10))
              (*(longlong **)(*(longlong *)*param_1 + 0x60),(int)param_1[1],param_1 + 0x17,
               (int)param_1[0x10]);
    *(byte *)((longlong)plVar19 + 0x479) = *(byte *)((longlong)plVar19 + 0x479) | 2;
  }
  if (param_1[0x16] != 0) {
    local_268 = param_1[0x16];
    (**(code **)(**(longlong **)(*(longlong *)*param_1 + 0x50) + 0x20))
              (*(longlong **)(*(longlong *)*param_1 + 0x50),(int)param_1[1],param_1 + 0x17,
               (int)param_1[0x10]);
    *(byte *)((longlong)plVar19 + 0x479) = *(byte *)((longlong)plVar19 + 0x479) | 4;
  }
  *(undefined1 *)(plVar19 + 0x45) = 1;
  uVar17 = *(uint *)(param_1 + 0x10);
  if ((int)uVar17 < 3) {
    local_1f0 = 0xffffffff;
    *(bool *)(plVar19 + 0x45) = (char)param_1[0x19] == '\0';
    local_204 = (undefined4)param_1[0x10];
    local_208 = (float)*(int *)(*(longlong *)*param_1 + 0x14);
    local_1f8 = (**(code **)(**(longlong **)*param_1 + 0xc0))();
    if (*(int *)((longlong)param_1 + 0x84) == -1) {
      local_200 = -1.0;
    }
    else {
      local_200 = (float)*(int *)((longlong)param_1 + 0x84) /
                  (float)*(int *)(*(longlong *)*param_1 + 0x14);
    }
    *(int *)(plVar19 + 0x40) = (int)param_1[0xc];
    FUN_142a7f7b0(*param_1,(int)param_1[1],&local_208,param_1 + 0xd);
    plVar18 = param_1 + 0xb;
    *(byte *)((longlong)plVar19 + 0x479) =
         *(byte *)((longlong)plVar19 + 0x479) ^
         (*(char *)((longlong)param_1 + 0xcb) << 5 ^ *(byte *)((longlong)plVar19 + 0x479)) & 0x20;
    if ((int)*plVar18 != -1) {
      *(int *)(plVar19 + 0x15) = (int)*plVar18;
      if (*(float *)((longlong)param_1 + 0x5c) != 0.0) {
        plVar19[0x16] =
             (longlong)
             ((float)*(int *)(*(longlong *)*param_1 + 0x14) * *(float *)((longlong)param_1 + 0x5c));
      }
      lVar12 = *param_1;
      if (*(int *)(lVar12 + 0x88) != *(int *)(lVar12 + 0xb4)) {
        lVar20 = *(longlong *)(lVar12 + 0xc0);
        if (*(longlong *)(lVar12 + 0xc0) == 0) {
          lVar20 = lVar12 + 0xb8;
        }
        iVar8 = *(int *)(lVar20 + ((longlong)*(int *)(lVar12 + 200) - 1U & (longlong)(int)*plVar18)
                                  * 4);
        if (iVar8 != -1) {
          do {
            plVar10 = (longlong *)((longlong)iVar8 * 0x78 + *(longlong *)(lVar12 + 0x80));
            if ((int)*plVar10 == (int)*plVar18) {
              if (iVar8 != -1) goto LAB_142a7cf91;
              break;
            }
            iVar8 = (int)plVar10[0xe];
          } while (iVar8 != -1);
        }
      }
      plVar10 = plVar13;
LAB_142a7cf91:
      plVar11 = plVar10 + 1;
      if (plVar10 == (longlong *)0x0) {
        plVar11 = plVar13;
      }
      if (plVar11 == (longlong *)0x0) {
        Audio::FMixerBus::FMixerBus
                  (&local_178,lVar12,(int)param_1[0x10],*(undefined4 *)(lVar12 + 0x138));
        iVar8 = local_170;
        lVar20 = (longlong)local_170;
        lVar12 = param_1[1];
        local_170 = local_170 + 1;
        if (local_16c < local_170) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_178,iVar8);
        }
        *(int *)(local_178 + lVar20 * 4) = (int)lVar12;
        local_1e0 = &local_178;
        local_1e8 = plVar18;
        FUN_142a78b30(*param_1 + 0x80,local_238,&local_1e8,0);
        Audio::FMixerBus::~FMixerBus(&local_178);
      }
      else {
        iVar8 = (int)plVar11[1];
        lVar12 = param_1[1];
        *(int *)(plVar11 + 1) = iVar8 + 1;
        if (*(int *)((longlong)plVar11 + 0xc) < iVar8 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar11,iVar8);
        }
        *(int *)(*plVar11 + (longlong)iVar8 * 4) = (int)lVar12;
      }
    }
    plVar18 = plVar19 + 0x18;
    local_220 = (longlong)param_1 - (longlong)plVar19;
    local_254 = 0;
    plVar19 = plVar13;
    do {
      piVar15 = *(int **)(local_220 + -0x88 + (longlong)plVar18);
      local_228 = piVar15 + (longlong)*(int *)(local_220 + -0x80 + (longlong)plVar18) * 2;
      uVar17 = (uint)plVar19;
      if (piVar15 != local_228) {
        uVar14 = (ulonglong)plVar19 & 0xff;
        do {
          lVar12 = *param_1;
          local_240 = (undefined4)param_1[1];
          iStack_23c = piVar15[1];
          if (*(int *)(lVar12 + 0x88) != *(int *)(lVar12 + 0xb4)) {
            lVar20 = *(longlong *)(lVar12 + 0xc0);
            if (*(longlong *)(lVar12 + 0xc0) == 0) {
              lVar20 = lVar12 + 0xb8;
            }
            iVar8 = *(int *)(lVar20 + ((longlong)*(int *)(lVar12 + 200) - 1U & (longlong)*piVar15) *
                                      4);
            if (iVar8 != -1) {
              do {
                plVar19 = (longlong *)((longlong)iVar8 * 0x78 + *(longlong *)(lVar12 + 0x80));
                if ((int)*plVar19 == *piVar15) {
                  if (iVar8 != -1) goto LAB_142a7d101;
                  break;
                }
                iVar8 = (int)plVar19[0xe];
              } while (iVar8 != -1);
            }
          }
          plVar19 = plVar13;
LAB_142a7d101:
          plVar10 = plVar19 + 1;
          if (plVar19 == (longlong *)0x0) {
            plVar10 = plVar13;
          }
          if (plVar10 == (longlong *)0x0) {
            Audio::FMixerBus::FMixerBus
                      (local_f8,lVar12,(int)param_1[0x10],*(undefined4 *)(lVar12 + 0x138));
            iVar8 = aiStack_e0[uVar14 * 4];
            aiStack_e0[uVar14 * 4] = iVar8 + 1;
            if (aiStack_e0[uVar14 * 4 + 1] < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&local_e8 + uVar14 * 2,iVar8);
            }
            *(ulonglong *)((&local_e8)[uVar14 * 2] + (longlong)iVar8 * 8) =
                 CONCAT44(iStack_23c,local_240);
            local_1d0 = local_f8;
            local_1d8 = piVar15;
            FUN_142a78b30(*param_1 + 0x80,local_234,&local_1d8,0);
            lVar12 = 2;
            puVar16 = local_a8;
            do {
              plVar19 = (longlong *)(puVar16 + -0x10);
              puVar16 = puVar16 + -0x10;
              lVar12 = lVar12 + -1;
              if (*plVar19 != 0) {
                FMemory::Free();
              }
            } while (lVar12 != 0);
            lVar12 = 2;
            puVar16 = local_c8;
            do {
              plVar19 = (longlong *)(puVar16 + -0x10);
              puVar16 = puVar16 + -0x10;
              lVar12 = lVar12 + -1;
              if (*plVar19 != 0) {
                FMemory::Free();
              }
            } while (lVar12 != 0);
            if (local_f8[0] != 0) {
              FMemory::Free();
            }
          }
          else {
            iVar8 = (int)plVar10[uVar14 * 2 + 3];
            *(int *)(plVar10 + uVar14 * 2 + 3) = iVar8 + 1;
            if (*(int *)((longlong)plVar10 + uVar14 * 0x10 + 0x1c) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (plVar10 + uVar14 * 2 + 2,iVar8);
            }
            *(ulonglong *)(plVar10[uVar14 * 2 + 2] + (longlong)iVar8 * 8) =
                 CONCAT44(iStack_23c,local_240);
          }
          iVar8 = (int)*plVar18;
          *(int *)plVar18 = iVar8 + 1;
          if (*(int *)((longlong)plVar18 + 4) < iVar8 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar18 + -1,iVar8);
          }
          iVar4 = *piVar15;
          piVar15 = piVar15 + 2;
          *(int *)(plVar18[-1] + (longlong)iVar8 * 4) = iVar4;
          uVar17 = local_254;
        } while (piVar15 != local_228);
      }
      local_254 = uVar17 + 1;
      plVar19 = (longlong *)(ulonglong)local_254;
      plVar18 = plVar18 + 2;
    } while ((int)local_254 < 2);
    uVar17 = *(uint *)(param_1 + 0x10);
    plVar19 = local_218;
  }
  *(undefined4 *)(plVar19 + 0xd) = 0;
  if (*(uint *)((longlong)plVar19 + 0x6c) != uVar17) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar19 + 0xc,uVar17);
  }
  if (0 < (int)uVar17) {
    uVar14 = (ulonglong)uVar17;
    do {
      iVar8 = (int)plVar19[0xd];
      *(int *)(plVar19 + 0xd) = iVar8 + 1;
      if (*(int *)((longlong)plVar19 + 0x6c) < iVar8 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar19 + 0xc,iVar8);
      }
      puVar1 = (undefined4 *)(plVar19[0xc] + (longlong)iVar8 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
      }
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  uVar17 = *(uint *)(param_1 + 0x10);
  uVar14 = (ulonglong)uVar17;
  *(undefined4 *)(plVar19 + 0xf) = 0;
  if (*(uint *)((longlong)plVar19 + 0x7c) != uVar17) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar19 + 0xe,uVar17);
  }
  if (0 < (int)uVar17) {
    do {
      iVar8 = (int)plVar19[0xf];
      *(int *)(plVar19 + 0xf) = iVar8 + 1;
      if (*(int *)((longlong)plVar19 + 0x7c) < iVar8 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar19 + 0xe,iVar8);
      }
      puVar1 = (undefined4 *)(plVar19[0xe] + (longlong)iVar8 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
      }
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  *(longlong *)(*(longlong *)(*param_1 + 0x18) + (longlong)(int)param_1[1] * 8) = param_1[0xf];
  if (0 < (int)param_1[6]) {
    local_1c8 = &local_210;
    local_1c0 = &local_1b8;
    plVar18 = plVar13;
    do {
      iVar8 = (int)plVar19[0x14];
      lVar20 = (longlong)iVar8;
      lVar12 = param_1[5];
      *(int *)(plVar19 + 0x14) = iVar8 + 1;
      if (*(int *)((longlong)plVar19 + 0xa4) < iVar8 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar19 + 0x13,iVar8);
      }
      lVar6 = plVar19[0x13];
      *(undefined8 *)(lVar6 + lVar20 * 0x18) = *(undefined8 *)((longlong)plVar13 + lVar12);
      lVar7 = *(longlong *)((longlong)plVar13 + lVar12 + 8);
      *(longlong *)(lVar6 + 8 + lVar20 * 0x18) = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar20 * 0x18) =
           *(undefined4 *)((longlong)plVar13 + lVar12 + 0x10);
      *(undefined1 *)(lVar6 + 0x14 + lVar20 * 0x18) =
           *(undefined1 *)((longlong)plVar13 + lVar12 + 0x14);
      local_210 = param_1[0xf];
      local_1b8 = *(undefined4 *)((longlong)plVar13 + lVar12 + 0x10);
      local_1b4 = 0xffffffff;
      FUN_142a78da0(*(longlong *)((longlong)plVar13 + lVar12) + 0x88,local_230,&local_1c8,0);
      plVar10 = (longlong *)((longlong)plVar13 + lVar12);
      uVar17 = (int)plVar18 + 1;
      plVar18 = (longlong *)(ulonglong)uVar17;
      plVar13 = plVar13 + 3;
      *(undefined1 *)(plVar19 + (ulonglong)*(byte *)(*plVar10 + 0x118) * 5 + 0x75) = 1;
    } while ((int)uVar17 < (int)param_1[6]);
  }
  return;
}



// FUNCTION 142a7d470 operator() body=119 status=ok
// SIG undefined operator()(void)

void <lambda_0ea95d77e5bc0a5bcc8a5b020c08f2d5>::operator()(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  longlong *plVar3;
  
  lVar2 = *param_1;
  plVar3 = (longlong *)(lVar2 + 0x60);
  if (plVar3 != param_1 + 1) {
    _Src = (void *)param_1[1];
    iVar1 = (int)param_1[2];
    *(int *)(lVar2 + 0x68) = iVar1;
    if ((iVar1 == 0) && (*(int *)(lVar2 + 0x6c) == 0)) {
      *(undefined4 *)(lVar2 + 0x6c) = 0;
      return;
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(plVar3,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*plVar3,_Src,(longlong)iVar1 * 0x30);
  }
  return;
}



// FUNCTION 142a7d4f0 FUN_142a7d4f0 body=248 status=ok
// SIG undefined FUN_142a7d4f0(void)

void FUN_142a7d4f0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int local_18 [2];
  longlong *local_10;
  
  uVar7 = 0;
  lVar3 = **(longlong **)(*param_1 + 0x728);
  if (0 < *(int *)(lVar3 + 0x78)) {
    piVar6 = *(int **)(lVar3 + 0x70);
    uVar9 = uVar7;
    while (iVar8 = (int)uVar9, *piVar6 != (int)param_1[1]) {
      uVar9 = (ulonglong)(iVar8 + 1);
      uVar7 = uVar7 + 1;
      piVar6 = piVar6 + 6;
      if ((longlong)*(int *)(lVar3 + 0x78) <= (longlong)uVar7) {
        return;
      }
    }
    local_10 = (longlong *)0x0;
    piVar6 = *(int **)(lVar3 + 0x70) + (longlong)iVar8 * 6 + 2;
    if (piVar6 != local_18) {
      piVar6[0] = 0;
      piVar6[1] = 0;
      local_18[0] = 0;
      local_18[1] = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(piVar6 + 2,&local_10);
      plVar5 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar6 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
    *(undefined4 *)((longlong)iVar8 * 0x18 + *(longlong *)(lVar3 + 0x70)) = 0xffffffff;
  }
  return;
}



// FUNCTION 142a7d670 FUN_142a7d670 body=1624 status=ok
// SIG undefined FUN_142a7d670(void)

void FUN_142a7d670(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  void *pvVar8;
  ulonglong uVar9;
  uint uVar10;
  void *pvVar11;
  ulonglong uVar12;
  void *pvVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  longlong local_res8;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  
  lVar7 = (longlong)(int)param_1[1] * 0x4b0 + *(longlong *)(*param_1 + 0x70);
  *(byte *)(lVar7 + 0x478) =
       *(byte *)(lVar7 + 0x478) ^ (*(byte *)(lVar7 + 0x478) ^ *(byte *)(param_1 + 4)) & 1;
  *(byte *)(lVar7 + 0x478) =
       (*(char *)((longlong)param_1 + 0x21) * '\x02' ^ *(byte *)(lVar7 + 0x478)) & 2 ^
       *(byte *)(lVar7 + 0x478);
  plVar1 = (longlong *)(lVar7 + (ulonglong)*(byte *)((longlong)param_1 + 0xc) * 0x28 + 0x388);
  *(undefined1 *)(plVar1 + 4) = 1;
  if (*(char *)((longlong)param_1 + 0xc) == '\0') {
    iVar5 = 2;
    if ((*(byte *)(lVar7 + 0x479) & 1) == 0) {
      iVar5 = *(int *)(lVar7 + 0x490);
    }
    pvVar4 = (void *)0x0;
    iVar2 = *(int *)(*(longlong *)*param_1 + 0x8d0);
    iVar14 = iVar2 * iVar5;
    if ((int)param_1[3] == iVar14) {
      *(undefined1 *)((longlong)(int)param_1[1] + ((longlong *)*param_1)[0x22]) = 0;
      iVar5 = *(int *)(*param_1 + 0x138);
      if ((int)plVar1[1] == (int)param_1[3]) {
        pvVar8 = pvVar4;
        pvVar13 = pvVar4;
        if (0 < (int)param_1[3]) {
          do {
            fVar16 = *(float *)((longlong)pvVar8 + param_1[2]);
            lVar7 = *plVar1;
            *(float *)((longlong)pvVar4 + lVar7 + 8) = fVar16;
            if ((*(char *)((longlong)pvVar4 + lVar7 + 0x10) == '\0') && (iVar5 != 0)) {
              fVar15 = (fVar16 - *(float *)((longlong)pvVar4 + lVar7)) / (float)iVar5;
              fVar16 = *(float *)((longlong)pvVar4 + lVar7);
            }
            else {
              *(float *)((longlong)pvVar4 + lVar7) = fVar16;
              fVar15 = 0.0;
              *(undefined1 *)((longlong)pvVar4 + lVar7 + 0x10) = 0;
            }
            *(float *)((longlong)pvVar4 + lVar7 + 0xc) = fVar15;
            uVar10 = (int)pvVar13 + 1;
            *(float *)((longlong)pvVar4 + lVar7 + 4) = fVar16;
            pvVar4 = (void *)((longlong)pvVar4 + 0x14);
            pvVar8 = (void *)((longlong)pvVar8 + 4);
            pvVar13 = (void *)(ulonglong)uVar10;
          } while ((int)uVar10 < (int)param_1[3]);
        }
      }
      else {
        *(undefined4 *)(plVar1 + 1) = 0;
        if ((*(int *)((longlong)plVar1 + 0xc) < 0) && (*(int *)((longlong)plVar1 + 0xc) != 0)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
          ResizeTo(plVar1,0);
        }
        pvVar8 = pvVar4;
        pvVar13 = pvVar4;
        if (0 < (int)param_1[3]) {
          do {
            iVar2 = (int)plVar1[1];
            local_58 = CONCAT31(local_58._1_3_,1);
            *(int *)(plVar1 + 1) = iVar2 + 1;
            if (*(int *)((longlong)plVar1 + 0xc) < iVar2 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
              ResizeGrow(plVar1,iVar2);
            }
            lVar7 = *plVar1;
            puVar3 = (undefined8 *)(lVar7 + (longlong)iVar2 * 0x14);
            *puVar3 = 0;
            puVar3[1] = 0;
            *(undefined4 *)(lVar7 + 0x10 + (longlong)iVar2 * 0x14) = local_58;
            fVar16 = *(float *)(param_1[2] + (longlong)pvVar8);
            lVar7 = *plVar1;
            *(float *)((longlong)pvVar13 + lVar7 + 8) = fVar16;
            if ((*(char *)((longlong)pvVar13 + lVar7 + 0x10) == '\0') && (iVar5 != 0)) {
              fVar15 = (fVar16 - *(float *)((longlong)pvVar13 + lVar7)) / (float)iVar5;
              fVar16 = *(float *)((longlong)pvVar13 + lVar7);
            }
            else {
              *(float *)((longlong)pvVar13 + lVar7) = fVar16;
              fVar15 = 0.0;
              *(undefined1 *)((longlong)pvVar13 + lVar7 + 0x10) = 0;
            }
            *(float *)((longlong)pvVar13 + lVar7 + 0xc) = fVar15;
            uVar10 = (int)pvVar4 + 1;
            pvVar4 = (void *)(ulonglong)uVar10;
            *(float *)((longlong)pvVar13 + lVar7 + 4) = fVar16;
            pvVar8 = (void *)((longlong)pvVar8 + 4);
            pvVar13 = (void *)((longlong)pvVar13 + 0x14);
          } while ((int)uVar10 < (int)param_1[3]);
        }
      }
    }
    else {
      local_68 = (void *)0x0;
      local_5c = 0;
      local_60 = iVar14;
      if ((char)param_1[4] == '\0') {
        if ((iVar5 < 9) && (iVar2 < 9)) {
          if (((*(byte *)(lVar7 + 0x479) & 0x40) == 0) || (iVar5 != 6)) {
            iVar14 = 0x37;
            if (*(char *)((longlong)param_1 + 0x21) == '\0') {
              iVar14 = -9;
            }
            puVar3 = (undefined8 *)((longlong)(iVar14 + iVar5 + iVar2 * 8) * 0x10 + DAT_146b29e98);
            local_60 = *(int *)(puVar3 + 1);
            pvVar13 = (void *)*puVar3;
          }
          else {
            local_60 = *(int *)(DAT_146b29ea8 + -8 + (longlong)iVar2 * 0x10);
            pvVar13 = *(void **)(DAT_146b29ea8 + -0x10 + (longlong)iVar2 * 0x10);
          }
          lVar7 = (longlong)local_60;
          pvVar8 = pvVar4;
          iVar5 = local_60;
          if (local_60 != 0) {
            TArray<float,TAlignedHeapAllocator<16>_>::ResizeForCopy(&local_68,local_60,0);
            pvVar8 = local_68;
            _guard_xfg_dispatch_icall_nop(local_68,pvVar13,lVar7 << 2);
            iVar5 = local_60;
          }
        }
        else {
          if (0 < iVar14) {
            TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(&local_68);
          }
          iVar5 = local_60;
          pvVar8 = local_68;
          _guard_xfg_dispatch_icall_nop(local_68,0,(longlong)iVar14 << 2);
        }
      }
      else {
        if (0 < iVar14) {
          TArray<float,TAlignedHeapAllocator<16>_>::ResizeGrow(&local_68);
        }
        iVar5 = local_60;
        pvVar8 = local_68;
        _guard_xfg_dispatch_icall_nop(local_68,0,(longlong)iVar14 << 2);
        *(undefined1 *)((longlong)(int)param_1[1] + *(longlong *)(*param_1 + 0x110)) = 1;
      }
      if ((int)plVar1[1] == iVar5) {
        pvVar13 = pvVar4;
        pvVar11 = pvVar4;
        if (0 < iVar5) {
          do {
            lVar7 = *plVar1;
            fVar16 = *(float *)((longlong)pvVar13 + (longlong)pvVar8);
            *(float *)((longlong)pvVar4 + lVar7 + 8) = fVar16;
            if ((*(char *)((longlong)pvVar4 + lVar7 + 0x10) == '\0') && (iVar2 != 0)) {
              fVar15 = (fVar16 - *(float *)((longlong)pvVar4 + lVar7)) / (float)iVar2;
              fVar16 = *(float *)((longlong)pvVar4 + lVar7);
            }
            else {
              *(float *)((longlong)pvVar4 + lVar7) = fVar16;
              fVar15 = 0.0;
              *(undefined1 *)((longlong)pvVar4 + lVar7 + 0x10) = 0;
            }
            *(float *)((longlong)pvVar4 + lVar7 + 0xc) = fVar15;
            uVar10 = (int)pvVar11 + 1;
            *(float *)((longlong)pvVar4 + lVar7 + 4) = fVar16;
            pvVar4 = (void *)((longlong)pvVar4 + 0x14);
            pvVar13 = (void *)((longlong)pvVar13 + 4);
            pvVar11 = (void *)(ulonglong)uVar10;
          } while ((int)uVar10 < iVar5);
        }
      }
      else {
        *(undefined4 *)(plVar1 + 1) = 0;
        if ((*(int *)((longlong)plVar1 + 0xc) < 0) && (*(int *)((longlong)plVar1 + 0xc) != 0)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
          ResizeTo(plVar1,0);
        }
        if (0 < iVar5) {
          local_res8 = 0;
          pvVar13 = pvVar4;
          do {
            iVar14 = (int)plVar1[1];
            local_58 = CONCAT31(local_58._1_3_,1);
            *(int *)(plVar1 + 1) = iVar14 + 1;
            if (*(int *)((longlong)plVar1 + 0xc) < iVar14 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
              ResizeGrow(plVar1,iVar14);
            }
            lVar7 = *plVar1;
            puVar3 = (undefined8 *)(lVar7 + (longlong)iVar14 * 0x14);
            *puVar3 = 0;
            puVar3[1] = 0;
            *(undefined4 *)(lVar7 + 0x10 + (longlong)iVar14 * 0x14) = local_58;
            lVar7 = *plVar1;
            fVar16 = *(float *)((longlong)pvVar8 + local_res8);
            *(float *)((longlong)pvVar13 + lVar7 + 8) = fVar16;
            if ((*(char *)((longlong)pvVar13 + lVar7 + 0x10) == '\0') && (iVar2 != 0)) {
              fVar15 = (fVar16 - *(float *)((longlong)pvVar13 + lVar7)) / (float)iVar2;
              fVar16 = *(float *)((longlong)pvVar13 + lVar7);
            }
            else {
              *(float *)((longlong)pvVar13 + lVar7) = fVar16;
              fVar15 = 0.0;
              *(undefined1 *)((longlong)pvVar13 + lVar7 + 0x10) = 0;
            }
            *(float *)((longlong)pvVar13 + lVar7 + 0xc) = fVar15;
            local_res8 = local_res8 + 4;
            *(float *)((longlong)pvVar13 + lVar7 + 4) = fVar16;
            uVar10 = (int)pvVar4 + 1;
            pvVar4 = (void *)(ulonglong)uVar10;
            pvVar13 = (void *)((longlong)pvVar13 + 0x14);
          } while ((int)uVar10 < iVar5);
        }
      }
      if (pvVar8 != (void *)0x0) {
        FMemory::Free(pvVar8);
      }
    }
  }
  else {
    uVar6 = 0;
    iVar5 = *(int *)(*param_1 + 0x138);
    if ((int)plVar1[1] == (int)param_1[3]) {
      uVar9 = uVar6;
      uVar12 = uVar6;
      if (0 < (int)param_1[3]) {
        do {
          fVar16 = *(float *)(uVar9 + param_1[2]);
          lVar7 = *plVar1;
          *(float *)(uVar6 + 8 + lVar7) = fVar16;
          if ((*(char *)(uVar6 + 0x10 + lVar7) == '\0') && (iVar5 != 0)) {
            fVar15 = (fVar16 - *(float *)(uVar6 + lVar7)) / (float)iVar5;
            fVar16 = *(float *)(uVar6 + lVar7);
          }
          else {
            *(float *)(uVar6 + lVar7) = fVar16;
            fVar15 = 0.0;
            *(undefined1 *)(uVar6 + 0x10 + lVar7) = 0;
          }
          *(float *)(uVar6 + 0xc + lVar7) = fVar15;
          uVar10 = (int)uVar12 + 1;
          *(float *)(uVar6 + 4 + lVar7) = fVar16;
          uVar6 = uVar6 + 0x14;
          uVar9 = uVar9 + 4;
          uVar12 = (ulonglong)uVar10;
        } while ((int)uVar10 < (int)param_1[3]);
      }
    }
    else {
      *(undefined4 *)(plVar1 + 1) = 0;
      if ((*(int *)((longlong)plVar1 + 0xc) < 0) && (*(int *)((longlong)plVar1 + 0xc) != 0)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
                  (plVar1,0);
      }
      uVar9 = uVar6;
      uVar12 = uVar6;
      if (0 < (int)param_1[3]) {
        do {
          iVar2 = (int)plVar1[1];
          local_58 = CONCAT31(local_58._1_3_,1);
          *(int *)(plVar1 + 1) = iVar2 + 1;
          if (*(int *)((longlong)plVar1 + 0xc) < iVar2 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
            ResizeGrow(plVar1,iVar2);
          }
          lVar7 = *plVar1;
          puVar3 = (undefined8 *)(lVar7 + (longlong)iVar2 * 0x14);
          *puVar3 = 0;
          puVar3[1] = 0;
          *(undefined4 *)(lVar7 + 0x10 + (longlong)iVar2 * 0x14) = local_58;
          fVar16 = *(float *)(param_1[2] + uVar9);
          lVar7 = *plVar1;
          *(float *)(uVar12 + 8 + lVar7) = fVar16;
          if ((*(char *)(uVar12 + 0x10 + lVar7) == '\0') && (iVar5 != 0)) {
            fVar15 = (fVar16 - *(float *)(uVar12 + lVar7)) / (float)iVar5;
            fVar16 = *(float *)(uVar12 + lVar7);
          }
          else {
            *(float *)(uVar12 + lVar7) = fVar16;
            fVar15 = 0.0;
            *(undefined1 *)(uVar12 + 0x10 + lVar7) = 0;
          }
          *(float *)(uVar12 + 0xc + lVar7) = fVar15;
          uVar10 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar10;
          *(float *)(uVar12 + 4 + lVar7) = fVar16;
          uVar9 = uVar9 + 4;
          uVar12 = uVar12 + 0x14;
        } while ((int)uVar10 < (int)param_1[3]);
      }
    }
  }
  return;
}



// FUNCTION 142a7dcd0 `vector_deleting_destructor' body=144 status=ok
// SIG undefined `vector_deleting_destructor'(void)

undefined8 * Audio::FBiquad::_vector_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((param_2 & 2) != 0) {
    lVar2 = param_1[-1];
    puVar1 = param_1 + lVar2 * 6;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      puVar1[-6] = &PTR__vector_deleting_destructor__1454d43c8;
      puVar1 = puVar1 + -6;
    }
    if ((param_2 & 1) != 0) {
      FMemory::operator_delete(param_1 + -1,param_1[-1] * 0x30 + 8);
    }
    return param_1 + -1;
  }
  *param_1 = &PTR__vector_deleting_destructor__1454d43c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142a7dd60 `vector_deleting_destructor' body=255 status=ok
// SIG undefined `vector_deleting_destructor'(void)

undefined8 *
Audio::FBiquadFilter::_vector_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if ((param_2 & 2) == 0) {
    *param_1 = &PTR__vector_deleting_destructor__1454d43d0;
    puVar2 = (undefined8 *)param_1[2];
    if (puVar2 != (undefined8 *)0x0) {
      if (puVar2[-1] == 0) {
        FMemory::operator_delete(puVar2 + -1);
      }
      else {
        (**(code **)*puVar2)(puVar2,3);
      }
    }
    if ((param_2 & 1) != 0) {
      FMemory::operator_delete(param_1,0x30);
    }
    return param_1;
  }
  lVar3 = param_1[-1];
  puVar2 = param_1 + lVar3 * 6;
  while (lVar3 != 0) {
    puVar1 = (undefined8 *)puVar2[-4];
    puVar2 = puVar2 + -6;
    lVar3 = lVar3 + -1;
    *puVar2 = &PTR__vector_deleting_destructor__1454d43d0;
    if (puVar1 != (undefined8 *)0x0) {
      if (puVar1[-1] == 0) {
        FMemory::operator_delete(puVar1 + -1);
      }
      else {
        (**(code **)*puVar1)(puVar1,3);
      }
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1 + -1,param_1[-1] * 0x30 + 8);
  }
  return param_1 + -1;
}



// FUNCTION 142a7de80 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAsyncTask<Audio::FAsyncDecodeWorker>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1454d47b0;
  FUN_1415b5910(param_1[0xd]);
  param_1[0xd] = 0;
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142a7dee0 FUN_142a7dee0 body=84 status=ok
// SIG undefined FUN_142a7dee0(void)

undefined8 * FUN_142a7dee0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_Abandon_1454d4858;
  FUN_1415b5910(param_1[5]);
  param_1[5] = 0;
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142a7df40 `scalar_deleting_destructor' body=134 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_8e16915dd32e6fc00de1fc3d1037c398>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

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
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142a7dfd0 FUN_142a7dfd0 body=43 status=ok
// SIG undefined FUN_142a7dfd0(void)

undefined8 * FUN_142a7dfd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 142a7e000 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_627c5f8085291d35e1fa6c346b091ed2>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  Audio::FMixerSourceVoiceInitParams::~FMixerSourceVoiceInitParams(param_1 + 3);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 142a7e050 FUN_142a7e050 body=79 status=ok
// SIG undefined FUN_142a7e050(void)

undefined8 * FUN_142a7e050(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1454d46d8;
  FRichCurve::~FRichCurve(param_1 + 0x3f);
  *param_1 = &PTR__scalar_deleting_destructor__145034c38;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x270);
  }
  return param_1;
}



// FUNCTION 142a7e0a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 Audio::FDecodeHandle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FDecodeHandleBase::~FDecodeHandleBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 142a7e0e0 `scalar_deleting_destructor' body=80 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * Audio::FDelay::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1454d45f8;
  if (param_1[1] != 0) {
    FMemory::operator_delete();
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142a7e130 `scalar_deleting_destructor' body=80 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * Audio::FDelayAPF::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1454d45f8;
  if (param_1[1] != 0) {
    FMemory::operator_delete();
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142a7e180 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
Audio::FEarlyReflections::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FEarlyReflections();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3c0);
  }
  return param_1;
}



// FUNCTION 142a7e1c0 `scalar_deleting_destructor' body=235 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * Audio::FMixerBuffer::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__1454d4378;
  if (*(char *)(param_1 + 4) != '\0') {
    puVar2 = &DAT_143f3eda8;
    if (*(int *)(param_1 + 3) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)param_1[2];
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x25,L"Can\'t free resource \'%s\' as it was allocated in permanent pool.",
               puVar3);
    if (*(int *)(param_1 + 3) != 0) {
      puVar2 = (undefined2 *)param_1[2];
    }
    FDebug::AssertFailed
              (&DAT_1454d01be,"Unknown",0x25,
               L"Can\'t free resource \'%s\' as it was allocated in permanent pool.",puVar2);
  }
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[7] = 0;
  }
  if (((*(int *)(param_1 + 8) == 0) ||
      ((*(int *)(param_1 + 8) == 1 && (*(char *)(param_1 + 0xc) != '\0')))) && (param_1[10] != 0)) {
    FMemory::Free();
  }
  FSoundBuffer::~FSoundBuffer(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142a7e2b0 `scalar_deleting_destructor' body=399 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * Audio::FMixerDevice::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__1454d44a8;
  param_1[0xe3] = &PTR_FUN_1454d45e0;
  plVar1 = (longlong *)param_1[0xe7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  TQueue<TFunction<void___cdecl(void)>,1>::~TQueue<TFunction<void___cdecl(void)>,1>(param_1 + 0x162)
  ;
  FUN_142a7b710(param_1 + 0x136);
  *(undefined4 *)(param_1 + 0x135) = 0;
  if (param_1[0x134] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 300);
  lVar2 = param_1[299];
  while (lVar2 != 0) {
    puVar3 = (undefined8 *)param_1[299];
    param_1[299] = *puVar3;
    FMemory::operator_delete(puVar3,0x10);
    lVar2 = param_1[299];
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (param_1[0x127] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x11f);
  if (param_1[0x11c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x118] != 0) {
    FMemory::Free();
  }
  if (param_1[0x116] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x109) = 0;
  if (param_1[0x108] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x100);
  *(undefined4 *)(param_1 + 0xfc) = 0;
  if (param_1[0xfb] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TArray<double,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,TArray<double,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xf3);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xe5);
  FAudioDevice::~FAudioDevice(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb30);
  }
  return param_1;
}



// FUNCTION 142a7e440 FUN_142a7e440 body=217 status=ok
// SIG undefined FUN_142a7e440(void)

undefined8 * FUN_142a7e440(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_FUN_1454d4638;
  param_1[0x10] = &PTR_StartProfileThreadUsage_1454d46b8;
  FUN_142a84010();
  lVar5 = 6;
  puVar6 = param_1 + 0x28;
  do {
    plVar4 = puVar6 + -3;
    puVar6 = puVar6 + -3;
    lVar5 = lVar5 + -1;
    if (*plVar4 != 0) {
      FMemory::Free();
    }
  } while (lVar5 != 0);
  plVar4 = (longlong *)param_1[0x14];
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
  *param_1 = &PTR_FUN_1454d41a0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f0);
  }
  return param_1;
}



// FUNCTION 142a7e520 `scalar_deleting_destructor' body=113 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
Audio::FOnePoleFilter::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1454d4440;
  if (param_1[0x12] != 0) {
    FMemory::operator_delete();
  }
  *param_1 = &PTR__scalar_deleting_destructor__1454d43d8;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 142a7e5a0 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSoundEffectSubmix::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1454d3f58;
  FSoundEffectBase::~FSoundEffectBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142a7e5e0 FUN_142a7e5e0 body=43 status=ok
// SIG undefined FUN_142a7e5e0(void)

undefined8 * FUN_142a7e5e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1454d41a0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142a7e610 `scalar_deleting_destructor' body=112 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSubmixEffectDynamicsProcessor::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  Audio::FDynamicsProcessor::~FDynamicsProcessor(param_1 + 0x14);
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__1454d3f58;
  FSoundEffectBase::~FSoundEffectBase(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 142a7e680 FUN_142a7e680 body=102 status=ok
// SIG undefined FUN_142a7e680(void)

undefined8 * FUN_142a7e680(undefined8 *param_1,ulonglong param_2)

{
  FRichCurve::~FRichCurve(param_1 + 0x11f);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11a));
  FUN_142a7bca0(param_1 + 0x10);
  *param_1 = &PTR__scalar_deleting_destructor__1454d3f58;
  FSoundEffectBase::~FSoundEffectBase(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x970);
  }
  return param_1;
}



// FUNCTION 142a7e6f0 `scalar_deleting_destructor' body=207 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSubmixEffectSubmixEQ::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1[0x20] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x19));
  if (param_1[0x17] != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x11);
  lVar2 = param_1[0x10];
  if (iVar1 != 0) {
    lVar2 = lVar2 + 8;
    do {
      TArray<Audio::FBiquadFilter,FDefaultAllocator>::
      ~TArray<Audio::FBiquadFilter,FDefaultAllocator>(lVar2);
      lVar2 = lVar2 + 0x18;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    lVar2 = param_1[0x10];
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__1454d3f58;
  FSoundEffectBase::~FSoundEffectBase(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 142a7e7c0 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
Audio::FWaveTableOsc::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1454d45f0;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142a7e810 `scalar_deleting_destructor' body=206 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
Audio::IAudioMixerPlatformInterface::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_IsPromotedBuild_1454d4220;
  param_1[1] = &PTR_LAB_1454d4338;
  param_1[2] = &PTR_StartProfileThreadUsage_144163940;
  if (param_1[0x27] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  TArray<FEdgeToCreate,FDefaultAllocator>::~TArray<FEdgeToCreate,FDefaultAllocator>(param_1 + 0x15);
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR_FUN_143f47c98;
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 142a7e8e0 FUN_142a7e8e0 body=43 status=ok
// SIG undefined FUN_142a7e8e0(void)

undefined8 * FUN_142a7e8e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1454d4348;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142a7e910 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * Audio::IFilter::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1454d43d8;
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 142a7e970 FUN_142a7e970 body=214 status=ok
// SIG undefined FUN_142a7e970(void)

longlong FUN_142a7e970(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x648);
  while (lVar1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x648);
    *(undefined8 *)(param_1 + 0x648) = *puVar2;
    FMemory::operator_delete(puVar2,0x10);
    lVar1 = *(longlong *)(param_1 + 0x648);
  }
  TQueue<TFunction<void___cdecl(void)>,1>::~TQueue<TFunction<void___cdecl(void)>,1>(param_1 + 0x630)
  ;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x5f8);
  if (*(longlong *)(param_1 + 0x5e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    FMemory::Free();
  }
  FUN_1404584f0(param_1 + 0x2e0);
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x650);
  }
  return param_1;
}



// FUNCTION 142a7ea50 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USynthSound::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  FUN_142a7c0b0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x270);
  }
  return param_1;
}



// FUNCTION 142a7eaa0 FUN_142a7eaa0 body=49 status=ok
// SIG undefined FUN_142a7eaa0(void)

void FUN_142a7eaa0(longlong param_1)

{
  FUN_142a83750(param_1 + 8);
  LOCK();
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
  UNLOCK();
  if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a7eac7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 142a7eae0 Abandon body=41 status=ok
// SIG undefined Abandon(void)

void FAsyncTask<Audio::FMixerSourceManager::FAudioMixerSourceWorker>::Abandon(longlong param_1)

{
  DoWork();
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a7eaff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 142a7eb10 FUN_142a7eb10 body=88 status=ok
// SIG undefined FUN_142a7eb10(void)

void FUN_142a7eb10(longlong *param_1,char param_2)

{
  char cVar1;
  longlong *local_18;
  char local_10;
  
  if ((param_2 == '\0') && (cVar1 = (**(code **)(*param_1 + 0x2c8))(), cVar1 != '\x01')) {
    return;
  }
  FUN_142a949c0(param_1);
  if ((*(byte *)((longlong)param_1 + 0xba) & 4) != 0) {
    local_18 = param_1;
    local_10 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x1f,&local_18);
  }
  return;
}



// FUNCTION 142a7eb70 FUN_142a7eb70 body=254 status=ok
// SIG undefined FUN_142a7eb70(void)

void FUN_142a7eb70(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  plVar7 = (longlong *)param_2[1];
  uVar4 = *param_2;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_28 = 0;
  local_18 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x20,local_48);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_14467a5d8;
    puVar6[1] = param_1;
    puVar6[2] = uVar4;
    puVar6[3] = plVar7;
    plVar7 = (longlong *)0x0;
  }
  local_58[0] = &LAB_142a7fd90;
  Audio::FMixerSubmix::SubmixCommand(param_1,local_58);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return;
}



// FUNCTION 142a7ec70 FUN_142a7ec70 body=251 status=ok
// SIG undefined FUN_142a7ec70(void)

void FUN_142a7ec70(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 local_88 [8];
  float local_80;
  longlong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if ((param_2 != (longlong *)0x0) && (lVar1 = FUN_142a84f20(), lVar1 != 0)) {
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x290))(param_2);
    local_80 = (float)*(int *)(lVar1 + 0x14);
    (**(code **)(*plVar2 + 0x10))(plVar2,local_88);
    FSoundEffectBase::SetPreset(plVar2,param_2);
    FSoundEffectBase::SetEnabled(plVar2,1);
    uStack_70 = *(undefined4 *)((longlong)param_2 + 0xc);
    local_28 = 0;
    local_18 = 0;
    local_78 = lVar1;
    local_68 = plVar2;
    puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_48);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = local_78;
      puVar3[2] = CONCAT44(uStack_6c,uStack_70);
      *puVar3 = &PTR_FUN_143f4d0b0;
      puVar3[3] = local_68;
    }
    local_58[0] = &LAB_142a7faf0;
    Audio::FMixerDevice::AudioRenderThreadCommand(lVar1,local_58);
  }
  return;
}



// FUNCTION 142a7ed70 FUN_142a7ed70 body=435 status=ok
// SIG undefined FUN_142a7ed70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142a7ee0c) */
/* WARNING: Removing unreachable block (ram,0x000142a7ee18) */
/* WARNING: Removing unreachable block (ram,0x000142a7ee31) */

void FUN_142a7ed70(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  undefined8 local_40;
  longlong *plStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_1 + 0x78)) {
    lVar5 = 0;
    piVar4 = *(int **)(param_1 + 0x70);
    do {
      if (*piVar4 == param_2) {
        plVar3 = (longlong *)param_3[1];
        goto joined_r0x000142a7ef1a;
      }
      lVar5 = lVar5 + 1;
      piVar4 = piVar4 + 6;
    } while (lVar5 < *(int *)(param_1 + 0x78));
  }
  local_40 = *param_3;
  plStack_38 = (longlong *)param_3[1];
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_38 + 1) = (int)plStack_38[1] + 1;
    UNLOCK();
  }
  local_58._0_4_ = (undefined4)local_40;
  local_58._4_4_ = (undefined4)((ulonglong)local_40 >> 0x20);
  uStack_50._0_4_ = SUB84(plStack_38,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)plStack_38 >> 0x20);
  uStack_24 = uStack_50._4_4_;
  uStack_28 = (undefined4)uStack_50;
  uStack_2c = local_58._4_4_;
  local_30 = (undefined4)local_58;
  uStack_50 = 0;
  local_58 = 0;
  iVar2 = *(int *)(param_1 + 0x78);
  *(int *)(param_1 + 0x78) = iVar2 + 1;
  local_48 = param_2;
  if (*(int *)(param_1 + 0x7c) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x70),iVar2);
  }
  plVar3 = plStack_38;
  piVar4 = (int *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x18);
  *piVar4 = local_48;
  *(undefined8 *)(piVar4 + 2) = local_40;
  *(longlong **)(piVar4 + 4) = plStack_38;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_38 + 1) = (int)plStack_38[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plStack_38 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar4 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_38 + 8))(plStack_38,1);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
joined_r0x000142a7ef1a:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar4 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142a7ef30 FUN_142a7ef30 body=376 status=ok
// SIG undefined FUN_142a7ef30(void)

void FUN_142a7ef30(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  void *local_28;
  undefined8 local_20;
  
  lVar9 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if ((((lVar9 != 0) && ((*(uint *)(lVar9 + 0x830) & 0x4000) != 0)) &&
      (iVar8 = FUN_1428cf800(lVar9), iVar8 != 1)) &&
     ((plVar10 = (longlong *)UWorld::GetAudioDevice(lVar9), plVar10 != (longlong *)0x0 &&
      ((*(byte *)(plVar10 + 0x6b) & 0x20) != 0)))) {
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    local_28 = (void *)0x0;
    local_20 = 0;
    cVar7 = (**(code **)(*plVar10 + 0xe0))(plVar10,uVar2,&local_28);
    if ((cVar7 == '\0') && (&local_28 != (void **)(param_2 + 0x28))) {
      iVar8 = *(int *)(param_2 + 0x30);
      _Src = *(void **)(param_2 + 0x28);
      local_20 = CONCAT44(local_20._4_4_,iVar8);
      if ((iVar8 == 0) && (local_20._4_4_ == 0)) {
        local_20 = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_28,iVar8);
        _guard_xfg_dispatch_icall_nop(local_28,_Src,(longlong)iVar8 << 4);
      }
    }
    uVar6 = local_20;
    lVar9 = (longlong)(int)local_20;
    iVar8 = (int)local_20 + 1;
    local_20 = CONCAT44(local_20._4_4_,iVar8);
    if (local_20._4_4_ < iVar8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_28,uVar6 & 0xffffffff);
    }
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    puVar1 = (undefined4 *)((longlong)local_28 + lVar9 * 0x10);
    *puVar1 = *param_3;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    (**(code **)(*plVar10 + 0xd8))(plVar10,uVar2,&local_28,*(byte *)(param_2 + 0x38) & 1);
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142a7f0b0 AddZeroed body=82 status=ok
// SIG undefined AddZeroed(void)

int TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_2) {
    ResizeGrow();
  }
  ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar1 * 4),0,(longlong)param_2 << 2)
  ;
  return iVar1;
}



// FUNCTION 142a7f110 ApplySettings body=483 status=ok
// SIG undefined ApplySettings(void)

void Audio::FEarlyReflections::ApplySettings(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  
  pfVar1 = (float *)(param_1 + 0x68);
  lVar3 = param_1 + 0x20;
  lVar2 = 2;
  do {
    FDelay::SetDelayMsec(lVar3,*(undefined4 *)(param_1 + 0xc));
    fVar4 = *(float *)(param_1 + 0x10);
    pfVar1[-1] = fVar4;
    lVar3 = lVar3 + 0x1d0;
    *pfVar1 = 1.0 - fVar4;
    pfVar1 = pfVar1 + 0x74;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  fVar4 = *(float *)(param_1 + 0x18) + 0.1;
  if (0.9999 <= fVar4) {
    fVar4 = 0.9999;
  }
  *(float *)(param_1 + 0x194) = fVar4;
  *(float *)(param_1 + 0x198) = 1.0 - fVar4;
  fVar4 = *(float *)(param_1 + 0x18) - 0.12;
  if (0.9999 <= fVar4) {
    fVar4 = 0.9999;
  }
  *(float *)(param_1 + 0x1a4) = fVar4;
  *(float *)(param_1 + 0x1a8) = 1.0 - fVar4;
  fVar4 = *(float *)(param_1 + 0x18) + 0.08;
  if (0.9999 <= fVar4) {
    fVar4 = 0.9999;
  }
  *(float *)(param_1 + 0x1b4) = fVar4;
  *(float *)(param_1 + 0x1b8) = 1.0 - fVar4;
  fVar4 = *(float *)(param_1 + 0x18) - 0.07;
  if (0.9999 <= fVar4) {
    fVar4 = 0.9999;
  }
  *(float *)(param_1 + 0x1c4) = fVar4;
  *(float *)(param_1 + 0x1c8) = 1.0 - fVar4;
  fVar4 = *(float *)(param_1 + 0x18) + 0.17;
  if (0.999 <= fVar4) {
    fVar4 = 0.999;
  }
  *(float *)(param_1 + 0x364) = fVar4;
  *(float *)(param_1 + 0x368) = 1.0 - fVar4;
  fVar4 = *(float *)(param_1 + 0x18) - 0.07;
  if (0.999 <= fVar4) {
    fVar4 = 0.999;
  }
  *(float *)(param_1 + 0x374) = fVar4;
  *(float *)(param_1 + 0x378) = 1.0 - fVar4;
  fVar4 = *(float *)(param_1 + 0x18) + 0.05;
  if (0.999 <= fVar4) {
    fVar4 = 0.999;
  }
  *(float *)(param_1 + 900) = fVar4;
  *(float *)(param_1 + 0x388) = 1.0 - fVar4;
  fVar4 = *(float *)(param_1 + 0x18) - 0.11;
  if (0.999 <= fVar4) {
    fVar4 = 0.999;
  }
  *(float *)(param_1 + 0x394) = fVar4;
  *(float *)(param_1 + 0x398) = 1.0 - fVar4;
  *(float *)(param_1 + 0x1c) = (1.0 - *(float *)(param_1 + 0x14)) * 0.707;
  return;
}



// FUNCTION 142a7f300 ApplySettings body=291 status=ok
// SIG undefined ApplySettings(void)

void Audio::FPlateReverb::ApplySettings(longlong param_1)

{
  float fVar1;
  
  FDelay::SetDelayMsec(param_1 + 0x3f8,*(undefined4 *)(param_1 + 0x14));
  *(float *)(param_1 + 0x430) = *(float *)(param_1 + 0x18);
  fVar1 = ::_guard_xfg_dispatch_icall_nop(10.0,*(float *)(param_1 + 0x18) * 0.05);
  *(float *)(param_1 + 0x42c) = fVar1;
  fVar1 = 1.0 - *(float *)(param_1 + 0x1c);
  *(float *)(param_1 + 0x43c) = fVar1;
  *(float *)(param_1 + 0x440) = 1.0 - fVar1;
  fVar1 = *(float *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x5b8) = *(uint *)(param_1 + 0x2c) ^ 0x80000000;
  *(float *)(param_1 + 0x488) = fVar1;
  *(float *)(param_1 + 0x4d0) = fVar1;
  *(float *)(param_1 + 0x518) = fVar1 - 0.125;
  *(float *)(param_1 + 0x560) = fVar1 - 0.125;
  *(float *)(param_1 + 0x604) = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x608) = 1.0 - *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x6e8) = -*(float *)(param_1 + 0x2c);
  *(float *)(param_1 + 0x650) = *(float *)(param_1 + 0x2c) - 0.15;
  *(float *)(param_1 + 0x734) = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x738) = 1.0 - *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x780) = *(float *)(param_1 + 0x2c) - 0.15;
  return;
}



// FUNCTION 142a7f430 AudioMixerThreadCommand body=150 status=ok
// SIG undefined AudioMixerThreadCommand(void)

void Audio::FMixerSourceManager::AudioMixerThreadCommand(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  LOCK();
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x48) = 0;
    iVar1 = 0;
  }
  UNLOCK();
  param_1 = (longlong)iVar1 * 0x10 + param_1;
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
  }
  ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x28),param_2);
  if (*(int *)(param_2 + 0x40) != 0) {
    plVar2 = *(longlong **)(param_2 + 0x30);
    if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_2 + 0x10);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a7f4d0 AudioRenderThreadCommand body=136 status=ok
// SIG undefined AudioRenderThreadCommand(void)

void Audio::FMixerDevice::AudioRenderThreadCommand(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  puVar2 = (undefined8 *)operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar2 + 2,param_2);
    puVar1 = *(undefined8 **)(param_1 + 0xb10);
    *(undefined8 **)(param_1 + 0xb10) = puVar2;
    *puVar1 = puVar2;
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x30);
    if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
      plVar3 = (longlong *)(param_2 + 0x10);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a7f560 BeginGeneratingAudio body=579 status=ok
// SIG undefined BeginGeneratingAudio(void)

void Audio::IAudioMixerPlatformInterface::BeginGeneratingAudio(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  undefined2 *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0xa8);
  iVar11 = *(int *)(param_1 + 0x84) * *(int *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x114) = 1;
  iVar9 = 2;
  if (1 < *(int *)(param_1 + 0x88)) {
    iVar9 = *(int *)(param_1 + 0x88);
  }
  iVar7 = 0;
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(int *)(param_1 + 0x118) = iVar9;
  iVar9 = *(int *)(param_1 + 0xb4);
  iVar8 = *(int *)(param_1 + 0xb0);
  if (iVar9 < 0) {
    if (iVar8 != 0) {
      plVar10 = (longlong *)(*plVar1 + 8);
      do {
        if (plVar10[2] != 0) {
          FMemory::Free();
        }
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 6;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      iVar9 = *(int *)(param_1 + 0xb4);
    }
    *(undefined4 *)(param_1 + 0xb0) = 0;
    if (iVar9 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(plVar1,0);
      iVar6 = *(int *)(param_1 + 0xb0);
    }
  }
  else {
    if (iVar8 != 0) {
      plVar10 = (longlong *)(*plVar1 + 8);
      do {
        if (plVar10[2] != 0) {
          FMemory::Free();
        }
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 6;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  iVar9 = *(int *)(param_1 + 0x118);
  *(int *)(param_1 + 0xb0) = iVar6 + iVar9;
  if (*(int *)(param_1 + 0xb4) < iVar6 + iVar9) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
  }
  puVar4 = (undefined8 *)((longlong)iVar6 * 0x30 + *plVar1);
  if (iVar9 != 0) {
    lVar2 = (longlong)puVar4 + 0x14;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 6;
      *(undefined8 *)(lVar2 + -0xc) = 0;
      *(undefined8 *)(lVar2 + -4) = 0;
      *(undefined8 *)(lVar2 + 4) = 0;
      *(undefined8 *)(lVar2 + 0xc) = 0;
      *(undefined4 *)(lVar2 + 0x14) = 0;
      *(undefined4 *)(lVar2 + 0x18) = 0;
      lVar2 = lVar2 + 0x30;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (0 < *(int *)(param_1 + 0x118)) {
    do {
      FOutputBuffer::Init((longlong)iVar7 * 0x30 + *plVar1,*(undefined8 *)(param_1 + 0x70),iVar11,
                          *(undefined4 *)(param_1 + 0x48));
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x118));
  }
  FOutputBuffer::Init(param_1 + 0xb8,*(undefined8 *)(param_1 + 0x70),iVar11,
                      *(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x68) = 4;
  uVar3 = FUN_1415ab270(0);
  *(undefined8 *)(param_1 + 0xf8) = uVar3;
  uVar3 = FUN_1415ab270(0);
  *(undefined8 *)(param_1 + 0x108) = uVar3;
  LOCK();
  UNLOCK();
  iVar9 = DAT_146b29e4c + 1;
  DAT_146b29e4c = DAT_146b29e4c + 1;
  FString::PrintfImpl(&local_28,L"AudioMixerRenderThread(%d)",iVar9);
  puVar5 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar5 = local_28;
  }
  uVar3 = FUN_1415d42a0(param_1,puVar5,0,DAT_14667e9fc,0xffffffffffffffff);
  *(undefined8 *)(param_1 + 0xf0) = uVar3;
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a7f7b0 FUN_142a7f7b0 body=312 status=ok
// SIG undefined FUN_142a7f7b0(void)

void FUN_142a7f7b0(longlong param_1,int param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)*param_4;
  plVar4 = plVar3 + (longlong)(int)param_4[1] * 2;
  for (; plVar3 != plVar4; plVar3 = plVar3 + 2) {
    if ((longlong *)*plVar3 != (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(*(longlong *)*plVar3 + 0x290))();
      FUN_14280cb80(plVar2,*plVar3);
      *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(*plVar3 + 0xc);
      (**(code **)(*plVar2 + 0x10))(plVar2,param_3);
      FSoundEffectBase::SetPreset(plVar2,*plVar3);
      FSoundEffectBase::SetEnabled(plVar2,~*(byte *)(plVar3 + 1) & 1);
      lVar5 = (longlong)param_2 * 0x4b0 + *(longlong *)(param_1 + 0x70);
      iVar1 = *(int *)(lVar5 + 0x210);
      *(int *)(lVar5 + 0x210) = iVar1 + 1;
      if (*(int *)(lVar5 + 0x214) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar5 + 0x208,iVar1);
      }
      *(longlong **)(*(longlong *)(lVar5 + 0x208) + (longlong)iVar1 * 8) = plVar2;
      iVar1 = *(int *)(lVar5 + 0x220);
      *(int *)(lVar5 + 0x220) = iVar1 + 1;
      if (*(int *)(lVar5 + 0x224) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar5 + 0x218,iVar1);
      }
      *(undefined8 *)(*(longlong *)(lVar5 + 0x218) + (longlong)iVar1 * 8) = 0;
    }
  }
  return;
}



// FUNCTION 142a7f8f0 CalculateBiquadCoefficients body=500 status=ok
// SIG undefined CalculateBiquadCoefficients(void)

void Audio::FBiquadFilter::CalculateBiquadCoefficients(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar6;
  
  fVar10 = (6.2831855 / *(float *)(param_1 + 0x18)) * *(float *)(param_1 + 0x20);
  uVar5 = __libm_sse2_sincosf_(fVar10);
  fVar6 = (float)((ulonglong)uVar5 >> 0x20);
  fVar10 = ::_guard_xfg_dispatch_icall_nop
                     ((*(float *)(param_1 + 0x24) * 0.3465736 * fVar10) / (float)uVar5);
  iVar2 = *(int *)(param_1 + 8);
  fVar10 = fVar10 * (float)uVar5;
  if (iVar2 == 1) {
    fVar8 = fVar6 + 1.0;
    fVar9 = -1.0 - fVar6;
LAB_142a7fa50:
    fVar8 = fVar8 * 0.5;
    fVar3 = fVar8;
  }
  else if (iVar2 == 2) {
    fVar8 = -fVar10;
    fVar9 = 0.0;
    fVar3 = fVar10;
  }
  else if (iVar2 == 3) {
    fVar9 = fVar6 * -2.0;
    fVar8 = 1.0;
    fVar3 = 1.0;
  }
  else {
    if (iVar2 != 4) {
      if (iVar2 == 5) {
        fVar4 = 1.0 - fVar10;
        fVar7 = fVar10 + 1.0;
        fVar9 = fVar6 * -2.0;
        fVar3 = fVar4;
        fVar8 = fVar7;
        goto LAB_142a7fa69;
      }
      fVar8 = 1.0 - fVar6;
      fVar9 = fVar8;
      goto LAB_142a7fa50;
    }
    fVar3 = ::_guard_xfg_dispatch_icall_nop(10.0,*(float *)(param_1 + 0x28) * 0.025);
    fVar4 = fVar3 * fVar10;
    fVar9 = fVar6 * -2.0;
    fVar8 = 1.0 - fVar4;
    fVar10 = fVar10 / fVar3;
    fVar3 = fVar4 + 1.0;
  }
  fVar7 = fVar10 + 1.0;
  fVar4 = 1.0 - fVar10;
LAB_142a7fa69:
  fVar7 = 1.0 / fVar7;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    lVar1 = 0;
    do {
      iVar2 = iVar2 + 1;
      *(float *)(lVar1 + 8 + *(longlong *)(param_1 + 0x10)) = fVar3 * fVar7;
      *(float *)(lVar1 + 0xc + *(longlong *)(param_1 + 0x10)) = fVar9 * fVar7;
      *(float *)(lVar1 + 0x10 + *(longlong *)(param_1 + 0x10)) = fVar8 * fVar7;
      *(float *)(lVar1 + 0x14 + *(longlong *)(param_1 + 0x10)) = fVar6 * fVar7 * -2.0;
      *(float *)(lVar1 + 0x18 + *(longlong *)(param_1 + 0x10)) = fVar4 * fVar7;
      lVar1 = lVar1 + 0x30;
    } while (iVar2 < *(int *)(param_1 + 0x1c));
  }
  return;
}



// FUNCTION 142a7fb90 Call body=107 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_796cd00fd631cd64e30265ec170a96df>,void___cdecl(void)>::Call
               (longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_res8 [4];
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x68))) {
    local_res8[0] = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar1 + 0x60,local_res8);
  }
  puVar2 = DAT_146b29e90;
  DAT_146b29e90 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    Audio::FSoundWavePCMWriter::~FSoundWavePCMWriter(puVar2 + 4);
    FMemory::operator_delete(*puVar2);
    FMemory::operator_delete(puVar2,0x90);
    return;
  }
  return;
}


