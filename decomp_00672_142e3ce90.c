// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142e3ce90 FUN_142e3ce90 body=6 status=ok
// SIG undefined FUN_142e3ce90(void)

undefined8 FUN_142e3ce90(void)

{
  return 0xdaaf61a3;
}



// FUNCTION 142e3cea0 FUN_142e3cea0 body=6 status=ok
// SIG undefined FUN_142e3cea0(void)

undefined8 FUN_142e3cea0(void)

{
  return 0x650adfd2;
}



// FUNCTION 142e3ceb0 FUN_142e3ceb0 body=6 status=ok
// SIG undefined FUN_142e3ceb0(void)

undefined8 FUN_142e3ceb0(void)

{
  return 0x4c85e58a;
}



// FUNCTION 142e3d180 FUN_142e3d180 body=57 status=ok
// SIG undefined FUN_142e3d180(void)

void FUN_142e3d180(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b38e50);
                    /* WARNING: Could not recover jumptable at 0x000142e3d1b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 142e3d1c0 FUN_142e3d1c0 body=81 status=ok
// SIG undefined FUN_142e3d1c0(void)

void FUN_142e3d1c0(longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  lVar1 = *param_1;
  local_18 = *(undefined8 *)(param_2 + 4);
  local_10 = param_3;
  uVar2 = FUN_14178ac60(local_28,DAT_146b38ec8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  return;
}



// FUNCTION 142e3d220 FUN_142e3d220 body=132 status=ok
// SIG undefined FUN_142e3d220(void)

void FUN_142e3d220(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  
  FUN_142cdd100(&local_28);
  local_28 = *param_2;
  local_20 = *(undefined8 *)(param_2 + 2);
  local_24 = param_2[1];
  local_18 = param_2[4];
  local_14 = param_2[5];
  local_10 = local_10 ^ (param_2[6] ^ local_10) & 0xf;
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b38ed0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  return;
}



// FUNCTION 142e3d2b0 FUN_142e3d2b0 body=57 status=ok
// SIG undefined FUN_142e3d2b0(void)

void FUN_142e3d2b0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b38ed8);
                    /* WARNING: Could not recover jumptable at 0x000142e3d2e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 142e3d2f0 FUN_142e3d2f0 body=34 status=ok
// SIG undefined FUN_142e3d2f0(void)

void FUN_142e3d2f0(void)

{
  undefined8 uVar1;
  
  uVar1 = UMonkeyAnim::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetDesiredFacialEmoteWeight_14591e3c0,1);
  return;
}



// FUNCTION 142e3d320 FUN_142e3d320 body=34 status=ok
// SIG undefined FUN_142e3d320(void)

void FUN_142e3d320(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142e39920();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CanStartMantle_14591fa40,0x33);
  return;
}



// FUNCTION 142e3d350 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSplineIKCachedBoneData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b39038 == 0) {
    uVar1 = FUN_142e3cd50();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b39038 = GetStaticStruct(FUN_142e3dcb0,uVar2,L"CachedStoppingInfo",0x14,uVar1);
  }
  return;
}



// FUNCTION 142e3d3b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMeleeWeaponData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b39068 == 0) {
    uVar1 = FUN_142e3cd60();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b39068 =
         GetStaticStruct(FUN_142e3dce0,uVar2,L"CharacterScriptedMeshOffsetCommand",0x138,uVar1);
  }
  return;
}



// FUNCTION 142e3d410 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_CopyPoseFromMesh::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b39058 == 0) {
    uVar1 = FUN_142e3cd70();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b39058 =
         GetStaticStruct(FUN_142e3dd10,uVar2,L"CharacterScriptedMeshOffsetState",0x140,uVar1);
  }
  return;
}



// FUNCTION 142e3d470 FUN_142e3d470 body=82 status=ok
// SIG undefined FUN_142e3d470(void)

void FUN_142e3d470(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38f28 == 0) {
    uVar1 = FUN_142e3cd80();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38f28 = GetStaticStruct(FUN_142e3dd40,uVar2,L"ControlledMoveNetCorrection",0x10,uVar1);
  }
  return;
}



// FUNCTION 142e3d4d0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FReferenceBoneFrame::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38f48 == 0) {
    uVar1 = FUN_142e3cd90();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38f48 = GetStaticStruct(FUN_142e3dd70,uVar2,L"ControlledMoveParameters",0x28,uVar1);
  }
  return;
}



// FUNCTION 142e3d530 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_Root::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38f38 == 0) {
    uVar1 = FUN_142e3cda0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38f38 = GetStaticStruct(FUN_142e3dda0,uVar2,L"ControlledMoveReplicationData",0x48,uVar1)
    ;
  }
  return;
}



// FUNCTION 142e3d590 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_PoseDriver::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38f18 == 0) {
    uVar1 = FUN_142e3cdb0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38f18 = GetStaticStruct(FUN_142e3ddd0,uVar2,L"ControlledMoveState",0x160,uVar1);
  }
  return;
}



// FUNCTION 142e3d5f0 FUN_142e3d5f0 body=82 status=ok
// SIG undefined FUN_142e3d5f0(void)

void FUN_142e3d5f0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b39048 == 0) {
    uVar1 = FUN_142e3cdc0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b39048 = GetStaticStruct(FUN_142e39a80,uVar2,L"DistanceMatchingInfo",0x70,uVar1);
  }
  return;
}



// FUNCTION 142e3d650 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimInstanceProxy::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38ee8 == 0) {
    uVar1 = FUN_142e3cdd0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38ee8 =
         GetStaticStruct(FUN_142e3de00,uVar2,L"GbxCharacterAnimInstanceProxy",0x6d0,uVar1);
  }
  return;
}



// FUNCTION 142e3d6b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FReferenceBoneFrame::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b39078 == 0) {
    uVar1 = FUN_142e3cde0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b39078 = GetStaticStruct(FUN_142e3de30,uVar2,L"LadderAnimState",0x28,uVar1);
  }
  return;
}



// FUNCTION 142e3d710 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSplineIKCachedBoneData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38f90 == 0) {
    uVar1 = FUN_142e3cdf0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38f90 = GetStaticStruct(FUN_142e3de60,uVar2,L"MantleActiveActionData",0x20,uVar1);
  }
  return;
}



// FUNCTION 142e3d770 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPoseDriverTransform::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38fa0 == 0) {
    uVar1 = FUN_142e3ce00();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38fa0 = GetStaticStruct(FUN_142e3de90,uVar2,L"MantleAttemptInfo",0x18,uVar1);
  }
  return;
}



// FUNCTION 142e3d7d0 FUN_142e3d7d0 body=82 status=ok
// SIG undefined FUN_142e3d7d0(void)

void FUN_142e3d7d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38fc0 == 0) {
    uVar1 = FUN_142e3ce10();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38fc0 = GetStaticStruct(FUN_142e3dec0,uVar2,L"MantleCheckData",0x208,uVar1);
  }
  return;
}



// FUNCTION 142e3d830 FUN_142e3d830 body=82 status=ok
// SIG undefined FUN_142e3d830(void)

void FUN_142e3d830(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38fe0 == 0) {
    uVar1 = FUN_142e3ce20();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38fe0 = GetStaticStruct(FUN_142e39670,uVar2,L"MantleCheckTypeData",0xb8,uVar1);
  }
  return;
}



// FUNCTION 142e3d890 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FCS_LandingTrace::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38fd0 == 0) {
    uVar1 = FUN_142e3ce30();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38fd0 = GetStaticStruct(FUN_142e3def0,uVar2,L"MantleCheckTypeData_MantleUp",0xbc,uVar1);
  }
  return;
}



// FUNCTION 142e3d8f0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FIKChainLink::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38ff0 == 0) {
    uVar1 = FUN_142e3ce40();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38ff0 = GetStaticStruct(FUN_142e3df20,uVar2,L"MantleStandData",0x3c,uVar1);
  }
  return;
}



// FUNCTION 142e3d950 FUN_142e3d950 body=82 status=ok
// SIG undefined FUN_142e3d950(void)

void FUN_142e3d950(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38f60 == 0) {
    uVar1 = FUN_142e3ce50();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38f60 = GetStaticStruct(FUN_142e3df50,uVar2,L"MantleState",0x6e8,uVar1);
  }
  return;
}



// FUNCTION 142e3d9b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FRichTextStyleRow::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38f70 == 0) {
    uVar1 = FUN_142e3ce60();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38f70 = GetStaticStruct(FUN_142e3df80,uVar2,L"MantleTraceCheck",0x278,uVar1);
  }
  return;
}



// FUNCTION 142e3da10 FUN_142e3da10 body=82 status=ok
// SIG undefined FUN_142e3da10(void)

void FUN_142e3da10(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38f80 == 0) {
    uVar1 = FUN_142e3ce70();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38f80 = GetStaticStruct(FUN_142e3dfb0,uVar2,L"MantleTraceInputs",0x68,uVar1);
  }
  return;
}



// FUNCTION 142e3da70 FUN_142e3da70 body=82 status=ok
// SIG undefined FUN_142e3da70(void)

void FUN_142e3da70(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b39088 == 0) {
    uVar1 = FUN_142e3ce80();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b39088 = GetStaticStruct(FUN_142e3dfe0,uVar2,L"ReplicatedLadderState",2,uVar1);
  }
  return;
}



// FUNCTION 142e3dad0 FUN_142e3dad0 body=82 status=ok
// SIG undefined FUN_142e3dad0(void)

void FUN_142e3dad0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38fb0 == 0) {
    uVar1 = FUN_142e3ce90();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38fb0 = GetStaticStruct(FUN_142e3e010,uVar2,L"ReplicatedMantleState",8,uVar1);
  }
  return;
}



// FUNCTION 142e3db30 FUN_142e3db30 body=82 status=ok
// SIG undefined FUN_142e3db30(void)

void FUN_142e3db30(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b39018 == 0) {
    uVar1 = FUN_142e3cea0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b39018 = GetStaticStruct(FUN_142e3e040,uVar2,L"RotationDeltaMatchingInfo",0xc0,uVar1);
  }
  return;
}



// FUNCTION 142e3db90 FUN_142e3db90 body=82 status=ok
// SIG undefined FUN_142e3db90(void)

void FUN_142e3db90(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b39028 == 0) {
    uVar1 = FUN_142e3ceb0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b39028 = GetStaticStruct(FUN_142e3e070,uVar2,L"StopDistanceMatchingInfo",0xc0,uVar1);
  }
  return;
}



// FUNCTION 142e3dbf0 FUN_142e3dbf0 body=47 status=ok
// SIG undefined FUN_142e3dbf0(void)

longlong FUN_142e3dbf0(void)

{
  if (DAT_146b38ee0 == 0) {
    FUN_1417866a0(&DAT_146b38ee0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466fa360);
  }
  return DAT_146b38ee0;
}



// FUNCTION 142e3dc20 FUN_142e3dc20 body=47 status=ok
// SIG undefined FUN_142e3dc20(void)

longlong FUN_142e3dc20(void)

{
  if (DAT_146b39010 == 0) {
    FUN_1417866a0(&DAT_146b39010,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466fa450);
  }
  return DAT_146b39010;
}



// FUNCTION 142e3dc50 FUN_142e3dc50 body=47 status=ok
// SIG undefined FUN_142e3dc50(void)

longlong FUN_142e3dc50(void)

{
  if (DAT_146b38f58 == 0) {
    FUN_1417866a0(&DAT_146b38f58,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466fa3b0);
  }
  return DAT_146b38f58;
}



// FUNCTION 142e3dc80 FUN_142e3dc80 body=47 status=ok
// SIG undefined FUN_142e3dc80(void)

longlong FUN_142e3dc80(void)

{
  if (DAT_146b39008 == 0) {
    FUN_1417866a0(&DAT_146b39008,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466fa400);
  }
  return DAT_146b39008;
}



// FUNCTION 142e3dcb0 FUN_142e3dcb0 body=47 status=ok
// SIG undefined FUN_142e3dcb0(void)

longlong FUN_142e3dcb0(void)

{
  if (DAT_146b39040 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b39040,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f5830);
  }
  return DAT_146b39040;
}



// FUNCTION 142e3dce0 FUN_142e3dce0 body=47 status=ok
// SIG undefined FUN_142e3dce0(void)

longlong FUN_142e3dce0(void)

{
  if (DAT_146b39070 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b39070,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f5ad0);
  }
  return DAT_146b39070;
}



// FUNCTION 142e3dd10 FUN_142e3dd10 body=47 status=ok
// SIG undefined FUN_142e3dd10(void)

longlong FUN_142e3dd10(void)

{
  if (DAT_146b39060 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b39060,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f59c0);
  }
  return DAT_146b39060;
}



// FUNCTION 142e3dd40 FUN_142e3dd40 body=47 status=ok
// SIG undefined FUN_142e3dd40(void)

longlong FUN_142e3dd40(void)

{
  if (DAT_146b38f30 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38f30,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f4b80);
  }
  return DAT_146b38f30;
}



// FUNCTION 142e3dd70 FUN_142e3dd70 body=47 status=ok
// SIG undefined FUN_142e3dd70(void)

longlong FUN_142e3dd70(void)

{
  if (DAT_146b38f50 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38f50,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f4f00);
  }
  return DAT_146b38f50;
}



// FUNCTION 142e3dda0 FUN_142e3dda0 body=47 status=ok
// SIG undefined FUN_142e3dda0(void)

longlong FUN_142e3dda0(void)

{
  if (DAT_146b38f40 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38f40,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f4d80);
  }
  return DAT_146b38f40;
}



// FUNCTION 142e3ddd0 FUN_142e3ddd0 body=47 status=ok
// SIG undefined FUN_142e3ddd0(void)

longlong FUN_142e3ddd0(void)

{
  if (DAT_146b38f20 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38f20,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f4ab0);
  }
  return DAT_146b38f20;
}



// FUNCTION 142e3de00 FUN_142e3de00 body=47 status=ok
// SIG undefined FUN_142e3de00(void)

longlong FUN_142e3de00(void)

{
  if (DAT_146b38ef0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38ef0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f2810);
  }
  return DAT_146b38ef0;
}



// FUNCTION 142e3de30 FUN_142e3de30 body=47 status=ok
// SIG undefined FUN_142e3de30(void)

longlong FUN_142e3de30(void)

{
  if (DAT_146b39080 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b39080,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f5c20);
  }
  return DAT_146b39080;
}



// FUNCTION 142e3de60 FUN_142e3de60 body=47 status=ok
// SIG undefined FUN_142e3de60(void)

longlong FUN_142e3de60(void)

{
  if (DAT_146b38f98 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38f98,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f5300);
  }
  return DAT_146b38f98;
}



// FUNCTION 142e3de90 FUN_142e3de90 body=47 status=ok
// SIG undefined FUN_142e3de90(void)

longlong FUN_142e3de90(void)

{
  if (DAT_146b38fa8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38fa8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f5410);
  }
  return DAT_146b38fa8;
}



// FUNCTION 142e3dec0 FUN_142e3dec0 body=47 status=ok
// SIG undefined FUN_142e3dec0(void)

longlong FUN_142e3dec0(void)

{
  if (DAT_146b38fc8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38fc8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f5520);
  }
  return DAT_146b38fc8;
}



// FUNCTION 142e3def0 FUN_142e3def0 body=47 status=ok
// SIG undefined FUN_142e3def0(void)

longlong FUN_142e3def0(void)

{
  if (DAT_146b38fd8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38fd8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f5570);
  }
  return DAT_146b38fd8;
}



// FUNCTION 142e3df20 FUN_142e3df20 body=47 status=ok
// SIG undefined FUN_142e3df20(void)

longlong FUN_142e3df20(void)

{
  if (DAT_146b38ff8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38ff8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f5610);
  }
  return DAT_146b38ff8;
}



// FUNCTION 142e3df50 FUN_142e3df50 body=47 status=ok
// SIG undefined FUN_142e3df50(void)

longlong FUN_142e3df50(void)

{
  if (DAT_146b38f68 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38f68,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f5090);
  }
  return DAT_146b38f68;
}



// FUNCTION 142e3df80 FUN_142e3df80 body=47 status=ok
// SIG undefined FUN_142e3df80(void)

longlong FUN_142e3df80(void)

{
  if (DAT_146b38f78 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38f78,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f5120);
  }
  return DAT_146b38f78;
}



// FUNCTION 142e3dfb0 FUN_142e3dfb0 body=47 status=ok
// SIG undefined FUN_142e3dfb0(void)

longlong FUN_142e3dfb0(void)

{
  if (DAT_146b38f88 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38f88,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f5270);
  }
  return DAT_146b38f88;
}



// FUNCTION 142e3dfe0 FUN_142e3dfe0 body=47 status=ok
// SIG undefined FUN_142e3dfe0(void)

longlong FUN_142e3dfe0(void)

{
  if (DAT_146b39090 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b39090,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f5d30);
  }
  return DAT_146b39090;
}



// FUNCTION 142e3e010 FUN_142e3e010 body=47 status=ok
// SIG undefined FUN_142e3e010(void)

longlong FUN_142e3e010(void)

{
  if (DAT_146b38fb8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38fb8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f54d0);
  }
  return DAT_146b38fb8;
}



// FUNCTION 142e3e040 FUN_142e3e040 body=47 status=ok
// SIG undefined FUN_142e3e040(void)

longlong FUN_142e3e040(void)

{
  if (DAT_146b39020 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b39020,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f56e0);
  }
  return DAT_146b39020;
}



// FUNCTION 142e3e070 FUN_142e3e070 body=47 status=ok
// SIG undefined FUN_142e3e070(void)

longlong FUN_142e3e070(void)

{
  if (DAT_146b39030 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b39030,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f57e0);
  }
  return DAT_146b39030;
}



// FUNCTION 142e3e0a0 FUN_142e3e0a0 body=50 status=ok
// SIG undefined FUN_142e3e0a0(void)

void FUN_142e3e0a0(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142cbb8e0(param_1 + 0x1950);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e3e0e0 FUN_142e3e0e0 body=50 status=ok
// SIG undefined FUN_142e3e0e0(void)

void FUN_142e3e0e0(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142cbbb00(param_1 + 0x1950);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e3e120 FUN_142e3e120 body=694 status=ok
// SIG undefined FUN_142e3e120(void)

void FUN_142e3e120(longlong *param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res20 [2];
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_a8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  local_68 = 0;
  uStack_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
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
  local_a0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
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
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  local_58 = local_90;
  local_48 = local_80;
  local_50 = local_88;
  local_40 = local_78;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_38 = local_68;
  uStack_34 = uStack_64;
  uStack_30 = (undefined4)uStack_60;
  uStack_2c = uStack_60._4_4_;
  (**(code **)(*param_1 + 0xac8))
            (param_1,local_a8[0],&local_38,&local_48,&local_58,local_98,local_a0,bVar1,bVar2,
             local_res8[0]);
  return;
}



// FUNCTION 142e3e3e0 FUN_142e3e3e0 body=931 status=ok
// SIG undefined FUN_142e3e3e0(void)

void FUN_142e3e3e0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined2 local_78 [2];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_6c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_6c);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
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
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_70 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  local_74 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_74);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_78[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_38 = local_58;
  local_28 = local_48;
  local_30 = local_50;
  local_20 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0xaf0))
                    (param_1,local_6c,&local_28,&local_38,local_res20[0],local_res10[0],local_70,
                     local_60,local_68,local_res8[0],local_74,local_78[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ControlledServerMove_Validate");
  }
  else {
    local_20 = local_50;
    local_30 = local_40;
    local_28 = local_58;
    local_38 = local_48;
    (**(code **)(*param_1 + 0xaf8))
              (param_1,local_6c,&local_38,&local_28,local_res20[0],local_res10[0],local_70,local_60,
               local_68,local_res8[0],local_74,local_78[0]);
  }
  return;
}



// FUNCTION 142e3e790 FUN_142e3e790 body=1325 status=ok
// SIG undefined FUN_142e3e790(void)

void FUN_142e3e790(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined1 local_a8 [4];
  undefined2 local_a4 [2];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
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
  
  local_8c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_8c);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_a8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  local_90 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_90);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_94 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_94);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  local_98 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
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
  local_9c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_9c);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
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
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  local_a0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a4[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a4);
  }
  local_48 = local_78;
  local_40 = local_70;
  local_30 = local_60;
  local_20 = local_50;
  local_38 = local_68;
  local_28 = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0xae0))
                    (param_1,local_8c,&local_28,local_a8[0],local_90,local_94,local_98,&local_38,
                     &local_48,local_res20[0],local_res10[0],local_9c,local_80,local_88,
                     local_res8[0],local_a0,local_a4[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ControlledServerMoveDual_Validate");
  }
  else {
    local_20 = local_70;
    local_30 = local_60;
    local_40 = local_50;
    local_28 = local_78;
    local_38 = local_68;
    local_48 = local_58;
    (**(code **)(*param_1 + 0xae8))
              (param_1,local_8c,&local_48,local_a8[0],local_90,local_94,local_98,&local_38,&local_28
               ,local_res20[0],local_res10[0],local_9c,local_80,local_88,local_res8[0],local_a0,
               local_a4[0]);
  }
  return;
}



// FUNCTION 142e3ecc0 FUN_142e3ecc0 body=409 status=ok
// SIG undefined FUN_142e3ecc0(void)

void FUN_142e3ecc0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
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
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_28 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = local_30;
  cVar1 = (**(code **)(*param_1 + 0xad0))
                    (param_1,local_res20[0],&local_28,local_res8[0],local_res10[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ControlledServerMoveOld_Validate");
    return;
  }
  local_20 = local_30;
  local_28 = local_38;
  (**(code **)(*param_1 + 0xad8))(param_1,local_res20[0],&local_28,local_res8[0],local_res10[0]);
  return;
}



// FUNCTION 142e3ee60 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_142cec150(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 142e3ef20 execGetDefaultUpVector body=151 status=ok
// SIG undefined execGetDefaultUpVector(void)

void USplineComponent::execGetDefaultUpVector
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined1 local_18 [16];
  
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
  puVar1 = (undefined8 *)FUN_142ced030(param_1,local_18,local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142e3efc0 execGetDefaultUpVector body=151 status=ok
// SIG undefined execGetDefaultUpVector(void)

void USplineComponent::execGetDefaultUpVector
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined1 local_18 [16];
  
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
  puVar1 = (undefined8 *)FUN_142ced180(param_1,local_18,local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142e3f060 execGetDefaultUpVector body=151 status=ok
// SIG undefined execGetDefaultUpVector(void)

void USplineComponent::execGetDefaultUpVector
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined1 local_18 [16];
  
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
  puVar1 = (undefined8 *)FUN_142ced280(param_1,local_18,local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142e3f100 FUN_142e3f100 body=177 status=ok
// SIG undefined FUN_142e3f100(void)

void FUN_142e3f100(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 local_res10 [8];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c [68];
  
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
  uVar1 = FUN_142ced5e0(param_1,local_4c,local_res10[0]);
  FUN_142ce6b40(param_1,&local_58,uVar1);
  *param_3 = local_58;
  *(undefined4 *)(param_3 + 1) = local_50;
  return;
}



// FUNCTION 142e3f1c0 FUN_142e3f1c0 body=177 status=ok
// SIG undefined FUN_142e3f1c0(void)

void FUN_142e3f1c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 local_res10 [8];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c [68];
  
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
  uVar1 = FUN_142ced5e0(param_1,local_4c,local_res10[0]);
  FUN_142ce6bb0(param_1,&local_58,uVar1);
  *param_3 = local_58;
  *(undefined4 *)(param_3 + 1) = local_50;
  return;
}



// FUNCTION 142e3f2a0 FUN_142e3f2a0 body=49 status=ok
// SIG undefined FUN_142e3f2a0(void)

void FUN_142e3f2a0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0xc20))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e3f2e0 FUN_142e3f2e0 body=203 status=ok
// SIG undefined FUN_142e3f2e0(void)

void FUN_142e3f2e0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  
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
  uVar1 = FUN_142cf34c0(param_1,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e3f3b0 FUN_142e3f3b0 body=43 status=ok
// SIG undefined FUN_142e3f3b0(void)

void FUN_142e3f3b0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142cf3790();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e3f3e0 FUN_142e3f3e0 body=43 status=ok
// SIG undefined FUN_142e3f3e0(void)

void FUN_142e3f3e0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142cf3800();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e3f410 FUN_142e3f410 body=43 status=ok
// SIG undefined FUN_142e3f410(void)

void FUN_142e3f410(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142cf3880();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e3f440 FUN_142e3f440 body=43 status=ok
// SIG undefined FUN_142e3f440(void)

void FUN_142e3f440(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142cf3960();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e3f4a0 FUN_142e3f4a0 body=43 status=ok
// SIG undefined FUN_142e3f4a0(void)

void FUN_142e3f4a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142cc7560();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e3f550 FUN_142e3f550 body=254 status=ok
// SIG undefined FUN_142e3f550(void)

void FUN_142e3f550(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  lVar1 = local_res8;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if ((((*(longlong *)(param_1 + 0x1778) != 0) && ((*(byte *)(param_1 + 0x18cc) & 2) == 0)) &&
      (*(longlong *)(param_1 + 0x178) != 0)) && (local_res8 != 0)) {
    lVar2 = FUN_142e07420();
    lVar4 = lVar1;
    do {
      if (lVar4 == lVar2) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1778) + 0x10);
        lVar3 = FUN_142e07420();
        lVar2 = lVar1;
        goto LAB_142e3f630;
      }
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  goto LAB_142e3f5fe;
  while (lVar2 = *(longlong *)(lVar2 + 0x30), lVar5 = 0, lVar2 != 0) {
LAB_142e3f630:
    lVar5 = lVar1;
    if (lVar2 == lVar3) break;
  }
  if (lVar4 == lVar5) {
    *param_3 = 1;
    return;
  }
LAB_142e3f5fe:
  *param_3 = 0;
  return;
}



// FUNCTION 142e3f650 FUN_142e3f650 body=130 status=ok
// SIG undefined FUN_142e3f650(void)

void FUN_142e3f650(undefined8 param_1,longlong param_2)

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
  FUN_142cf3f20(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 142e3f6e0 FUN_142e3f6e0 body=243 status=ok
// SIG undefined FUN_142e3f6e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e3f6e0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 local_res10 [3];
  undefined4 local_44;
  undefined4 local_40;
  
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
  FWeakObjectPtr::operator=(&local_44,local_res10[0]);
  uVar2 = DAT_1468b5d98;
  uVar1 = _DAT_1468b5d90;
  *param_3 = 1;
  *(undefined4 *)(param_3 + 4) = local_44;
  *(undefined4 *)(param_3 + 8) = local_40;
  *(undefined4 *)(param_3 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x14) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(undefined8 *)(param_3 + 0x2c) = uVar1;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined4 *)(param_3 + 0x28) = 0;
  *(undefined4 *)(param_3 + 0x34) = uVar2;
  param_3[0x38] = 0;
  return;
}



// FUNCTION 142e3f7e0 FUN_142e3f7e0 body=282 status=ok
// SIG undefined FUN_142e3f7e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e3f7e0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 local_res10;
  undefined1 local_48 [4];
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  undefined4 local_14;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_48[0] = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_34 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  local_14 = DAT_1468b5d98;
  local_1c = _DAT_1468b5d90;
  local_44 = 0xffffffff;
  uStack_3c = 0xffffffff;
  local_10 = 0;
  FUN_142ccefb0(local_48,local_res10);
  *param_3 = local_48[0];
  *(undefined4 *)(param_3 + 4) = (undefined4)local_44;
  *(undefined4 *)(param_3 + 8) = local_44._4_4_;
  *(undefined4 *)(param_3 + 0xc) = (undefined4)uStack_3c;
  *(undefined4 *)(param_3 + 0x10) = uStack_3c._4_4_;
  *(undefined8 *)(param_3 + 0x14) = local_34;
  *(undefined4 *)(param_3 + 0x1c) = uStack_2c;
  *(ulonglong *)(param_3 + 0x20) = CONCAT44(uStack_24,uStack_28);
  *(undefined4 *)(param_3 + 0x28) = uStack_20;
  *(undefined8 *)(param_3 + 0x2c) = local_1c;
  *(undefined4 *)(param_3 + 0x34) = local_14;
  param_3[0x38] = local_10;
  return;
}



// FUNCTION 142e3f900 FUN_142e3f900 body=259 status=ok
// SIG undefined FUN_142e3f900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e3f900(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 local_res10 [3];
  undefined4 local_3c;
  undefined4 local_38;
  
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
  FWeakObjectPtr::operator=(&local_3c,local_res10[0]);
  uVar2 = DAT_1468b5d98;
  uVar1 = _DAT_1468b5d90;
  *param_3 = 3;
  *(undefined4 *)(param_3 + 4) = 0xffffffff;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0xc) = local_3c;
  *(undefined4 *)(param_3 + 0x10) = local_38;
  *(undefined8 *)(param_3 + 0x14) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(undefined8 *)(param_3 + 0x2c) = uVar1;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined4 *)(param_3 + 0x28) = 0;
  *(undefined4 *)(param_3 + 0x34) = uVar2;
  param_3[0x38] = 0;
  return;
}



// FUNCTION 142e3fa10 FUN_142e3fa10 body=194 status=ok
// SIG undefined FUN_142e3fa10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142e3fa10(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 local_58;
  undefined4 local_50;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = DAT_1468b5d98;
  uVar1 = _DAT_1468b5d90;
  *param_3 = 5;
  *(undefined4 *)(param_3 + 4) = 0xffffffff;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x14) = local_58;
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(undefined4 *)(param_3 + 0x1c) = local_50;
  *(undefined8 *)(param_3 + 0x2c) = uVar1;
  *(undefined4 *)(param_3 + 0x28) = 0;
  *(undefined4 *)(param_3 + 0x34) = uVar2;
  param_3[0x38] = 0;
  return 0;
}



// FUNCTION 142e3fae0 FUN_142e3fae0 body=194 status=ok
// SIG undefined FUN_142e3fae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142e3fae0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 local_58;
  undefined4 local_50;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = DAT_1468b5d98;
  uVar1 = _DAT_1468b5d90;
  *param_3 = 4;
  *(undefined4 *)(param_3 + 4) = 0xffffffff;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x14) = local_58;
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(undefined4 *)(param_3 + 0x1c) = local_50;
  *(undefined8 *)(param_3 + 0x2c) = uVar1;
  *(undefined4 *)(param_3 + 0x28) = 0;
  *(undefined4 *)(param_3 + 0x34) = uVar2;
  param_3[0x38] = 0;
  return 0;
}



// FUNCTION 142e3fbb0 FUN_142e3fbb0 body=140 status=ok
// SIG undefined FUN_142e3fbb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e3fbb0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = DAT_1468b5d98;
  uVar1 = _DAT_1468b5d90;
  *param_3 = 0;
  *(undefined4 *)(param_3 + 4) = 0xffffffff;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x14) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(undefined8 *)(param_3 + 0x2c) = uVar1;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined4 *)(param_3 + 0x28) = 0;
  *(undefined4 *)(param_3 + 0x34) = uVar2;
  param_3[0x38] = 0;
  return;
}



// FUNCTION 142e3fc40 FUN_142e3fc40 body=194 status=ok
// SIG undefined FUN_142e3fc40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e3fc40(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 local_58;
  undefined4 local_50;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = DAT_1468b5d98;
  uVar1 = _DAT_1468b5d90;
  *param_3 = 6;
  *(undefined4 *)(param_3 + 4) = 0xffffffff;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x14) = 0;
  *(undefined8 *)(param_3 + 0x20) = local_58;
  *(undefined8 *)(param_3 + 0x2c) = uVar1;
  *(undefined4 *)(param_3 + 0x28) = local_50;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined4 *)(param_3 + 0x34) = uVar2;
  param_3[0x38] = 0;
  return;
}



// FUNCTION 142e3fd10 FUN_142e3fd10 body=481 status=ok
// SIG undefined FUN_142e3fd10(void)

void FUN_142e3fd10(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int local_res8 [2];
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [12];
  undefined4 local_ac;
  
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
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  bVar2 = local_res8[0] != 0;
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
  puVar1 = local_b8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0xb38))(param_1,local_c0,local_c8,local_res20,local_res10[0],bVar2,puVar1)
  ;
  return;
}



// FUNCTION 142e3ff00 FUN_142e3ff00 body=309 status=ok
// SIG undefined FUN_142e3ff00(void)

void FUN_142e3ff00(longlong *param_1,longlong param_2)

{
  undefined4 local_res8 [2];
  undefined8 local_res10 [2];
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
  (**(code **)(*param_1 + 0xb40))(param_1,local_28[0],local_res20,local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 142e40060 FUN_142e40060 body=156 status=ok
// SIG undefined FUN_142e40060(void)

void FUN_142e40060(longlong *param_1,longlong param_2)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_38 = local_68;
  uStack_30 = uStack_60;
  local_28 = local_58;
  uStack_24 = uStack_54;
  uStack_20 = uStack_50;
  uStack_1c = uStack_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_18 = local_48;
  uStack_14 = uStack_44;
  uStack_10 = uStack_40;
  uStack_c = uStack_3c;
  (**(code **)(*param_1 + 0xc98))(param_1,&local_38);
  return;
}



// FUNCTION 142e40100 FUN_142e40100 body=287 status=ok
// SIG undefined FUN_142e40100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e40100(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_28 = 0xffffffff;
  local_24 = _DAT_1468b5d90;
  local_1c = DAT_1468b5d98;
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
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
  cVar1 = (**(code **)(*param_1 + 0xab8))(param_1,&local_28,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerAttemptMantle_Validate");
    return;
  }
  (**(code **)(*param_1 + 0xac0))(param_1,&local_28,local_res8[0]);
  return;
}



// FUNCTION 142e40220 FUN_142e40220 body=171 status=ok
// SIG undefined FUN_142e40220(void)

void FUN_142e40220(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_28 [32];
  
  FUN_142cdd100(local_28);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0xb10))(param_1,local_28);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerStartMoveTo_Validate");
    return;
  }
  (**(code **)(*param_1 + 0xb18))(param_1,local_28);
  return;
}



// FUNCTION 142e402d0 FUN_142e402d0 body=78 status=ok
// SIG undefined FUN_142e402d0(void)

void FUN_142e402d0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0xb00))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerStopMoveTo_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142e40317. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb08))(param_1);
  return;
}



// FUNCTION 142e40320 FUN_142e40320 body=190 status=ok
// SIG undefined FUN_142e40320(void)

void FUN_142e40320(undefined8 param_1,longlong param_2)

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
  FUN_142ccf4b0(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 142e403e0 FUN_142e403e0 body=276 status=ok
// SIG undefined FUN_142e403e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e403e0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_res10 [8];
  undefined1 local_48 [4];
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  undefined1 local_10;
  
  local_34 = 0;
  uStack_2c = 0;
  local_48[0] = 0;
  local_1c = _DAT_1468b5d90;
  local_24 = 0;
  local_44 = 0xffffffff;
  uStack_3c = 0xffffffff;
  local_14 = DAT_1468b5d98;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_res10[0] = 0;
  puVar1 = local_48;
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
  FUN_142cff0b0(param_1,puVar1,local_res10[0]);
  return;
}



// FUNCTION 142e40500 FUN_142e40500 body=191 status=ok
// SIG undefined FUN_142e40500(void)

void FUN_142e40500(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  undefined8 local_res20;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar1 = local_res10[0] != 0;
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
  FUN_142cff920(param_1,bVar1,local_res20);
  return;
}



// FUNCTION 142e405c0 FUN_142e405c0 body=124 status=ok
// SIG undefined FUN_142e405c0(void)

void FUN_142e405c0(longlong param_1,longlong param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x2650) = local_18;
  *(undefined4 *)(param_1 + 0x2658) = local_10;
  return;
}



// FUNCTION 142e40640 FUN_142e40640 body=517 status=ok
// SIG undefined FUN_142e40640(void)

void FUN_142e40640(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined4 local_30;
  
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
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
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_30 = local_48;
  local_38 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142d00740(param_1,local_58,local_60,local_res20[0],local_res18[0],local_res10[0],
                        local_68,&local_38);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e40850 FUN_142e40850 body=148 status=ok
// SIG undefined FUN_142e40850(void)

void FUN_142e40850(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_28 [32];
  
  FUN_142cdd100(local_28);
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
  FUN_142d008a0(param_1,puVar1);
  return;
}



// FUNCTION 142e408f0 FUN_142e408f0 body=301 status=ok
// SIG undefined FUN_142e408f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e408f0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_58 = _DAT_1468b5d90;
  local_3c = 0x3f800000;
  local_30 = 0xbf800000;
  local_34 = 0x41200000;
  local_20 = 0x40000000;
  local_2c = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = DAT_1468b5d98;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_24 = 0;
  local_1c = 2;
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
  FUN_142d00b40(param_1,puVar1);
  return;
}



// FUNCTION 142e40a20 execSelect body=257 status=ok
// SIG undefined execSelect(void)

void AMiniMapDisplayActor::execSelect(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  int local_res20 [2];
  undefined8 local_28 [2];
  
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
  FUN_142d01010(param_1,local_28[0],bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 142e40b30 execLockAIResources body=194 status=ok
// SIG undefined execLockAIResources(void)

void UAnimInstance::execLockAIResources(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  int local_res20 [2];
  
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
  FUN_142d010e0(param_1,bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 142e40c20 FUN_142e40c20 body=53 status=ok
// SIG undefined FUN_142e40c20(void)

void FUN_142e40c20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_145928a20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e40c60 FUN_142e40c60 body=53 status=ok
// SIG undefined FUN_142e40c60(void)

void FUN_142e40c60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_145928b38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e40ca0 FUN_142e40ca0 body=53 status=ok
// SIG undefined FUN_142e40ca0(void)

void FUN_142e40ca0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &PTR_FUN_145926780;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e40cf0 FUN_142e40cf0 body=47 status=ok
// SIG undefined FUN_142e40cf0(void)

longlong FUN_142e40cf0(void)

{
  if (DAT_146b39498 == 0) {
    FUN_141786440(&DAT_146b39498,&PTR_GetPrivateStaticClass_145922760);
  }
  return DAT_146b39498;
}



// FUNCTION 142e40d20 FUN_142e40d20 body=47 status=ok
// SIG undefined FUN_142e40d20(void)

longlong FUN_142e40d20(void)

{
  if (DAT_146b39428 == 0) {
    FUN_141786a30(&DAT_146b39428,&PTR_FUN_1466fac00);
  }
  return DAT_146b39428;
}



// FUNCTION 142e40d50 FUN_142e40d50 body=47 status=ok
// SIG undefined FUN_142e40d50(void)

longlong FUN_142e40d50(void)

{
  if (DAT_146b39430 == 0) {
    FUN_141786a30(&DAT_146b39430,&PTR_FUN_1466fac40);
  }
  return DAT_146b39430;
}



// FUNCTION 142e40d80 FUN_142e40d80 body=47 status=ok
// SIG undefined FUN_142e40d80(void)

longlong FUN_142e40d80(void)

{
  if (DAT_146b39438 == 0) {
    FUN_141786a30(&DAT_146b39438,&PTR_FUN_1466fac80);
  }
  return DAT_146b39438;
}



// FUNCTION 142e40db0 FUN_142e40db0 body=47 status=ok
// SIG undefined FUN_142e40db0(void)

longlong FUN_142e40db0(void)

{
  if (DAT_146b39440 == 0) {
    FUN_141786a30(&DAT_146b39440,&PTR_FUN_1466facc0);
  }
  return DAT_146b39440;
}



// FUNCTION 142e40de0 FUN_142e40de0 body=47 status=ok
// SIG undefined FUN_142e40de0(void)

longlong FUN_142e40de0(void)

{
  if (DAT_146b39448 == 0) {
    FUN_141786a30(&DAT_146b39448,&PTR_FUN_1466fad00);
  }
  return DAT_146b39448;
}



// FUNCTION 142e40e10 FUN_142e40e10 body=47 status=ok
// SIG undefined FUN_142e40e10(void)

longlong FUN_142e40e10(void)

{
  if (DAT_146b39450 == 0) {
    FUN_141786a30(&DAT_146b39450,&PTR_FUN_1466fad40);
  }
  return DAT_146b39450;
}



// FUNCTION 142e40e40 FUN_142e40e40 body=47 status=ok
// SIG undefined FUN_142e40e40(void)

longlong FUN_142e40e40(void)

{
  if (DAT_146b39458 == 0) {
    FUN_141786a30(&DAT_146b39458,&PTR_FUN_1466fadc0);
  }
  return DAT_146b39458;
}



// FUNCTION 142e40e70 FUN_142e40e70 body=47 status=ok
// SIG undefined FUN_142e40e70(void)

longlong FUN_142e40e70(void)

{
  if (DAT_146b39460 == 0) {
    FUN_141786a30(&DAT_146b39460,&PTR_FUN_1466fae40);
  }
  return DAT_146b39460;
}



// FUNCTION 142e40ea0 FUN_142e40ea0 body=47 status=ok
// SIG undefined FUN_142e40ea0(void)

longlong FUN_142e40ea0(void)

{
  if (DAT_146b39468 == 0) {
    FUN_141786a30(&DAT_146b39468,&PTR_FUN_1466fae80);
  }
  return DAT_146b39468;
}



// FUNCTION 142e40ed0 FUN_142e40ed0 body=47 status=ok
// SIG undefined FUN_142e40ed0(void)

longlong FUN_142e40ed0(void)

{
  if (DAT_146b39470 == 0) {
    FUN_141786a30(&DAT_146b39470,&PTR_FUN_1466faf40);
  }
  return DAT_146b39470;
}



// FUNCTION 142e40f00 FUN_142e40f00 body=47 status=ok
// SIG undefined FUN_142e40f00(void)

longlong FUN_142e40f00(void)

{
  if (DAT_146b39478 == 0) {
    FUN_141786a30(&DAT_146b39478,&PTR_FUN_1466fafc0);
  }
  return DAT_146b39478;
}



// FUNCTION 142e40f30 FUN_142e40f30 body=47 status=ok
// SIG undefined FUN_142e40f30(void)

longlong FUN_142e40f30(void)

{
  if (DAT_146b39480 == 0) {
    FUN_141786a30(&DAT_146b39480,&PTR_FUN_1466fb070);
  }
  return DAT_146b39480;
}



// FUNCTION 142e40f60 FUN_142e40f60 body=47 status=ok
// SIG undefined FUN_142e40f60(void)

longlong FUN_142e40f60(void)

{
  if (DAT_146b39488 == 0) {
    FUN_141786a30(&DAT_146b39488,&PTR_FUN_1466fb0b0);
  }
  return DAT_146b39488;
}



// FUNCTION 142e40f90 FUN_142e40f90 body=47 status=ok
// SIG undefined FUN_142e40f90(void)

longlong FUN_142e40f90(void)

{
  if (DAT_146b39490 == 0) {
    FUN_141786a30(&DAT_146b39490,&PTR_FUN_1466fb130);
  }
  return DAT_146b39490;
}



// FUNCTION 142e40fc0 FUN_142e40fc0 body=162 status=ok
// SIG undefined FUN_142e40fc0(void)

longlong FUN_142e40fc0(void)

{
  if (DAT_146b39578 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCondition_HasGameplayTags",&DAT_146b39578,
                  FUN_140447710,0xa8,0x10000000,0,L"Engine",&LAB_142e426e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146b39578;
}



// FUNCTION 142e41090 FUN_142e41090 body=53 status=ok
// SIG undefined FUN_142e41090(void)

void FUN_142e41090(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_145926320;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e410d0 FUN_142e410d0 body=47 status=ok
// SIG undefined FUN_142e410d0(void)

longlong FUN_142e410d0(void)

{
  if (DAT_146b394c0 == 0) {
    FUN_141786440(&DAT_146b394c0,&PTR_LAB_145922de0);
  }
  return DAT_146b394c0;
}



// FUNCTION 142e41100 FUN_142e41100 body=47 status=ok
// SIG undefined FUN_142e41100(void)

longlong FUN_142e41100(void)

{
  if (DAT_146b394b0 == 0) {
    FUN_141786a30(&DAT_146b394b0,&PTR_FUN_1466fb260);
  }
  return DAT_146b394b0;
}



// FUNCTION 142e41130 FUN_142e41130 body=47 status=ok
// SIG undefined FUN_142e41130(void)

longlong FUN_142e41130(void)

{
  if (DAT_146b394b8 == 0) {
    FUN_141786a30(&DAT_146b394b8,&PTR_FUN_1466fb2a0);
  }
  return DAT_146b394b8;
}



// FUNCTION 142e41160 FUN_142e41160 body=53 status=ok
// SIG undefined FUN_142e41160(void)

void FUN_142e41160(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_145926438;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142e411a0 FUN_142e411a0 body=53 status=ok
// SIG undefined FUN_142e411a0(void)

void FUN_142e411a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &PTR_FUN_145926550;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142e411f0 FUN_142e411f0 body=53 status=ok
// SIG undefined FUN_142e411f0(void)

void FUN_142e411f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_145926668;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e41230 FUN_142e41230 body=162 status=ok
// SIG undefined FUN_142e41230(void)

longlong FUN_142e41230(void)

{
  if (DAT_146b39588 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCondition_HasInstigatedStatusEffect",
                  &DAT_146b39588,FUN_140447710,0x90,0x10000000,0,L"Engine",FUN_142e426f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146b39588;
}



// FUNCTION 142e412f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBTTask_RunBehaviorDynamic::GetPrivateStaticClass(void)

{
  if (DAT_146b39598 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCondition_IsBlackboardTarget",&DAT_146b39598,
                  FUN_140447710,0x88,0x10000000,0,L"Engine",FUN_142e42750,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146b39598;
}



// FUNCTION 142e413b0 FUN_142e413b0 body=162 status=ok
// SIG undefined FUN_142e413b0(void)

longlong FUN_142e413b0(void)

{
  if (DAT_146b395a8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCondition_IsLowOnHealth",&DAT_146b395a8,
                  FUN_140447710,0x90,0x10000000,0,L"Engine",&LAB_142e427b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146b395a8;
}



// FUNCTION 142e41470 FUN_142e41470 body=162 status=ok
// SIG undefined FUN_142e41470(void)

longlong FUN_142e41470(void)

{
  if (DAT_146b394e8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCondition_AttackedRecently",&DAT_146b394e8,
                  FUN_140447710,0x108,0x10000000,0,L"Engine",&LAB_142e42430,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146b394e8;
}



// FUNCTION 142e41520 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBTTask_RunBehaviorDynamic::GetPrivateStaticClass(void)

{
  if (DAT_146b395b8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCondition_IsPlayerController",&DAT_146b395b8,
                  FUN_140447710,0x88,0x10000000,0,L"Engine",FUN_142e427d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146b395b8;
}



// FUNCTION 142e415f0 FUN_142e415f0 body=162 status=ok
// SIG undefined FUN_142e415f0(void)

longlong FUN_142e415f0(void)

{
  if (DAT_146b395c8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCondition_IsTargetAimedAtMe",&DAT_146b395c8,
                  FUN_140447710,0x108,0x10000000,0,L"Engine",&LAB_142e42830,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146b395c8;
}



// FUNCTION 142e416a0 FUN_142e416a0 body=162 status=ok
// SIG undefined FUN_142e416a0(void)

longlong FUN_142e416a0(void)

{
  if (DAT_146b39500 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCondition_Blueprint",&DAT_146b39500,
                  FUN_142e43950,0x88,0x10000001,0,L"Engine",FUN_142e42440,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146b39500;
}



// FUNCTION 142e41750 FUN_142e41750 body=47 status=ok
// SIG undefined FUN_142e41750(void)

longlong FUN_142e41750(void)

{
  if (DAT_146b394f8 == 0) {
    FUN_141786440(&DAT_146b394f8,&PTR_FUN_145923ca0);
  }
  return DAT_146b394f8;
}



// FUNCTION 142e41780 FUN_142e41780 body=47 status=ok
// SIG undefined FUN_142e41780(void)

longlong FUN_142e41780(void)

{
  if (DAT_146b394f0 == 0) {
    FUN_141786a30(&DAT_146b394f0,&PTR_FUN_1466fb6d0);
  }
  return DAT_146b394f0;
}



// FUNCTION 142e417c0 FUN_142e417c0 body=162 status=ok
// SIG undefined FUN_142e417c0(void)

longlong FUN_142e417c0(void)

{
  if (DAT_146b395d8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCondition_IsTrue",&DAT_146b395d8,FUN_140447710,
                  0x90,0x10000000,0,L"Engine",&LAB_142e42840,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146b395d8;
}



// FUNCTION 142e41890 FUN_142e41890 body=162 status=ok
// SIG undefined FUN_142e41890(void)

longlong FUN_142e41890(void)

{
  if (DAT_146b39518 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCondition_CharacterMass",&DAT_146b39518,
                  FUN_140447710,0xa8,0x10000000,0,L"Engine",&LAB_142e424a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146b39518;
}



// FUNCTION 142e41940 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGJournalKey::GetPrivateStaticClass(void)

{
  if (DAT_146b395f8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCondition_List",&DAT_146b395f8,
                  StaticRegisterNativesUUGJournalKey,0xa0,0x10000000,0,L"Engine",&LAB_142e42860,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146b395f8;
}



// FUNCTION 142e419f0 FUN_142e419f0 body=162 status=ok
// SIG undefined FUN_142e419f0(void)

longlong FUN_142e419f0(void)

{
  if (DAT_146b394d8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCondition_ActorIsOfClass",&DAT_146b394d8,
                  FUN_140447710,0x98,0x10000000,0,L"Engine",&LAB_142e42410,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146b394d8;
}



// FUNCTION 142e41ac0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCurveLinearColorAtlas::GetPrivateStaticClass(void)

{
  if (DAT_146b39530 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCondition_Comparison",&DAT_146b39530,
                  FUN_140447710,0x100,0x10000000,0,L"Engine",FUN_142e424b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146b39530;
}



// FUNCTION 142e41b80 FUN_142e41b80 body=47 status=ok
// SIG undefined FUN_142e41b80(void)

longlong FUN_142e41b80(void)

{
  if (DAT_146b395f0 == 0) {
    FUN_141786440(&DAT_146b395f0,&PTR_GetPrivateStaticClass_1459248c0);
  }
  return DAT_146b395f0;
}



// FUNCTION 142e41bb0 FUN_142e41bb0 body=47 status=ok
// SIG undefined FUN_142e41bb0(void)

longlong FUN_142e41bb0(void)

{
  if (DAT_146b395e0 == 0) {
    FUN_141786a30(&DAT_146b395e0,&PTR_FUN_1466fbe70);
  }
  return DAT_146b395e0;
}



// FUNCTION 142e41be0 FUN_142e41be0 body=47 status=ok
// SIG undefined FUN_142e41be0(void)

longlong FUN_142e41be0(void)

{
  if (DAT_146b395e8 == 0) {
    FUN_141786a30(&DAT_146b395e8,&PTR_FUN_1466fbf00);
  }
  return DAT_146b395e8;
}



// FUNCTION 142e41c10 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGJournalKey::GetPrivateStaticClass(void)

{
  if (DAT_146b39548 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCondition_Compound",&DAT_146b39548,FUN_140447710
                  ,0xa0,0x10000000,0,L"Engine",FUN_142e42580,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146b39548;
}



// FUNCTION 142e41ce0 FUN_142e41ce0 body=162 status=ok
// SIG undefined FUN_142e41ce0(void)

longlong FUN_142e41ce0(void)

{
  if (DAT_146b39608 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCondition_SensedRecently",&DAT_146b39608,
                  FUN_140447710,0x120,0x10000000,0,L"Engine",&LAB_142e42880,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146b39608;
}



// FUNCTION 142e41d90 FUN_142e41d90 body=47 status=ok
// SIG undefined FUN_142e41d90(void)

longlong FUN_142e41d90(void)

{
  if (DAT_146b39718 == 0) {
    FUN_141786440(&DAT_146b39718,&PTR_LAB_145921ea0);
  }
  return DAT_146b39718;
}



// FUNCTION 142e41dc0 FUN_142e41dc0 body=47 status=ok
// SIG undefined FUN_142e41dc0(void)

longlong FUN_142e41dc0(void)

{
  if (DAT_146b396c8 == 0) {
    FUN_141786a30(&DAT_146b396c8,&PTR_FUN_1466fcf50);
  }
  return DAT_146b396c8;
}



// FUNCTION 142e41df0 FUN_142e41df0 body=47 status=ok
// SIG undefined FUN_142e41df0(void)

longlong FUN_142e41df0(void)

{
  if (DAT_146b396d0 == 0) {
    FUN_141786a30(&DAT_146b396d0,&PTR_FUN_1466fd060);
  }
  return DAT_146b396d0;
}



// FUNCTION 142e41e20 FUN_142e41e20 body=47 status=ok
// SIG undefined FUN_142e41e20(void)

longlong FUN_142e41e20(void)

{
  if (DAT_146b396d8 == 0) {
    FUN_141786a30(&DAT_146b396d8,&PTR_FUN_1466fd170);
  }
  return DAT_146b396d8;
}



// FUNCTION 142e41e50 FUN_142e41e50 body=47 status=ok
// SIG undefined FUN_142e41e50(void)

longlong FUN_142e41e50(void)

{
  if (DAT_146b396e0 == 0) {
    FUN_141786a30(&DAT_146b396e0,&PTR_FUN_1466fd1f0);
  }
  return DAT_146b396e0;
}



// FUNCTION 142e41e80 FUN_142e41e80 body=47 status=ok
// SIG undefined FUN_142e41e80(void)

longlong FUN_142e41e80(void)

{
  if (DAT_146b396e8 == 0) {
    FUN_141786a30(&DAT_146b396e8,&PTR_FUN_1466fd270);
  }
  return DAT_146b396e8;
}



// FUNCTION 142e41eb0 FUN_142e41eb0 body=47 status=ok
// SIG undefined FUN_142e41eb0(void)

longlong FUN_142e41eb0(void)

{
  if (DAT_146b396f0 == 0) {
    FUN_141786a30(&DAT_146b396f0,&PTR_FUN_1466fd2f0);
  }
  return DAT_146b396f0;
}



// FUNCTION 142e41ee0 FUN_142e41ee0 body=47 status=ok
// SIG undefined FUN_142e41ee0(void)

longlong FUN_142e41ee0(void)

{
  if (DAT_146b396f8 == 0) {
    FUN_141786a30(&DAT_146b396f8,&PTR_FUN_1466fd330);
  }
  return DAT_146b396f8;
}



// FUNCTION 142e41f10 FUN_142e41f10 body=47 status=ok
// SIG undefined FUN_142e41f10(void)

longlong FUN_142e41f10(void)

{
  if (DAT_146b39700 == 0) {
    FUN_141786a30(&DAT_146b39700,&PTR_FUN_1466fd400);
  }
  return DAT_146b39700;
}



// FUNCTION 142e41f40 FUN_142e41f40 body=47 status=ok
// SIG undefined FUN_142e41f40(void)

longlong FUN_142e41f40(void)

{
  if (DAT_146b39708 == 0) {
    FUN_141786a30(&DAT_146b39708,&PTR_FUN_1466fd5a0);
  }
  return DAT_146b39708;
}



// FUNCTION 142e41f70 FUN_142e41f70 body=47 status=ok
// SIG undefined FUN_142e41f70(void)

longlong FUN_142e41f70(void)

{
  if (DAT_146b39710 == 0) {
    FUN_141786a30(&DAT_146b39710,&PTR_FUN_1466fd660);
  }
  return DAT_146b39710;
}



// FUNCTION 142e41fa0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UARTrackedObject::GetPrivateStaticClass(void)

{
  if (DAT_146b39558 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCondition_Flag",&DAT_146b39558,FUN_140447710,
                  0xd0,0x10000000,0,L"Engine",FUN_142e425e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146b39558;
}



// FUNCTION 142e42060 FUN_142e42060 body=53 status=ok
// SIG undefined FUN_142e42060(void)

void FUN_142e42060(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_1459285c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e420b0 FUN_142e420b0 body=162 status=ok
// SIG undefined FUN_142e420b0(void)

longlong FUN_142e420b0(void)

{
  if (DAT_146b39618 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCondition_TeamAttitude",&DAT_146b39618,
                  FUN_140447710,0x90,0x10000000,0,L"Engine",FUN_142e42890,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146b39618;
}



// FUNCTION 142e42160 FUN_142e42160 body=53 status=ok
// SIG undefined FUN_142e42160(void)

void FUN_142e42160(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1459286d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e421a0 FUN_142e421a0 body=162 status=ok
// SIG undefined FUN_142e421a0(void)

longlong FUN_142e421a0(void)

{
  if (DAT_146b39568 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCondition_HasActorTags",&DAT_146b39568,
                  FUN_140447710,0x98,0x10000000,0,L"Engine",FUN_142e42670,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146b39568;
}



// FUNCTION 142e42260 FUN_142e42260 body=53 status=ok
// SIG undefined FUN_142e42260(void)

void FUN_142e42260(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1459287f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e422a0 FUN_142e422a0 body=162 status=ok
// SIG undefined FUN_142e422a0(void)

longlong FUN_142e422a0(void)

{
  if (DAT_146b39628 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCondition_TeamCheck",&DAT_146b39628,
                  FUN_140447710,0x90,0x10000000,0,L"Engine",FUN_142e428f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146b39628;
}



// FUNCTION 142e42360 FUN_142e42360 body=53 status=ok
// SIG undefined FUN_142e42360(void)

void FUN_142e42360(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x34;
    *puVar1 = &PTR_FUN_145928908;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142e423b0 FUN_142e423b0 body=52 status=ok
// SIG undefined FUN_142e423b0(void)

void FUN_142e423b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UCheatManager::UCheatManager(puVar1,param_1);
    *puVar1 = &PTR_FUN_144a294c8;
    puVar1[0x10] = 0;
  }
  return;
}



// FUNCTION 142e42440 FUN_142e42440 body=90 status=ok
// SIG undefined FUN_142e42440(void)

void FUN_142e42440(longlong *param_1)

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
    *puVar1 = &PTR__scalar_deleting_destructor__145926a30;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
  }
  return;
}



// FUNCTION 142e424b0 FUN_142e424b0 body=196 status=ok
// SIG undefined FUN_142e424b0(void)

void FUN_142e424b0(longlong *param_1)

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
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
    *puVar1 = &PTR_FUN_145926d30;
    *(undefined4 *)(puVar1 + 0x11) = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    *(undefined4 *)(puVar1 + 0x17) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    *(undefined4 *)(puVar1 + 0x1f) = 0x3f800000;
  }
  return;
}



// FUNCTION 142e42580 FUN_142e42580 body=90 status=ok
// SIG undefined FUN_142e42580(void)

void FUN_142e42580(longlong *param_1)

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
    *puVar1 = &PTR_FUN_145927020;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
  }
  return;
}



// FUNCTION 142e425e0 FUN_142e425e0 body=141 status=ok
// SIG undefined FUN_142e425e0(void)

void FUN_142e425e0(longlong *param_1)

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
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
    *puVar1 = &PTR_FUN_1459272f0;
    *(undefined4 *)(puVar1 + 0x13) = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0x3f800000;
  }
  return;
}



// FUNCTION 142e42670 FUN_142e42670 body=104 status=ok
// SIG undefined FUN_142e42670(void)

void FUN_142e42670(longlong *param_1)

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
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
    *puVar1 = &PTR_FUN_145927578;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
  }
  return;
}



// FUNCTION 142e426f0 FUN_142e426f0 body=90 status=ok
// SIG undefined FUN_142e426f0(void)

void FUN_142e426f0(longlong *param_1)

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
    *puVar1 = &PTR__scalar_deleting_destructor__145927800;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
  }
  return;
}



// FUNCTION 142e42750 FUN_142e42750 body=90 status=ok
// SIG undefined FUN_142e42750(void)

void FUN_142e42750(longlong *param_1)

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
    *puVar1 = &PTR__scalar_deleting_destructor__145927a88;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
  }
  return;
}



// FUNCTION 142e427d0 FUN_142e427d0 body=90 status=ok
// SIG undefined FUN_142e427d0(void)

void FUN_142e427d0(longlong *param_1)

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
    *puVar1 = &PTR__scalar_deleting_destructor__145927d10;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
  }
  return;
}



// FUNCTION 142e42890 FUN_142e42890 body=90 status=ok
// SIG undefined FUN_142e42890(void)

void FUN_142e42890(longlong *param_1)

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
    *puVar1 = &PTR__scalar_deleting_destructor__145927fb8;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
  }
  return;
}



// FUNCTION 142e428f0 FUN_142e428f0 body=90 status=ok
// SIG undefined FUN_142e428f0(void)

void FUN_142e428f0(longlong *param_1)

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
    *puVar1 = &PTR__scalar_deleting_destructor__145928240;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
  }
  return;
}



// FUNCTION 142e42970 FUN_142e42970 body=114 status=ok
// SIG undefined FUN_142e42970(void)

void FUN_142e42970(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[5];
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
  if (*param_1 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 142e429f0 FUN_142e429f0 body=143 status=ok
// SIG undefined FUN_142e429f0(void)

undefined8 * FUN_142e429f0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  if ((undefined8 *)((longlong)param_2 + 0x1c) != (undefined8 *)((longlong)param_1 + 0x1c)) {
    if (*(char *)(param_1 + 5) != '\0') {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    if (*(char *)(param_2 + 5) != '\0') {
      *(undefined8 *)((longlong)param_1 + 0x1c) = *(undefined8 *)((longlong)param_2 + 0x1c);
      *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
      *(undefined1 *)(param_1 + 5) = 1;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x44) = *(undefined1 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  return param_1;
}



// FUNCTION 142e42a80 FUN_142e42a80 body=96 status=ok
// SIG undefined FUN_142e42a80(void)

longlong FUN_142e42a80(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 142e42ae0 FUN_142e42ae0 body=96 status=ok
// SIG undefined FUN_142e42ae0(void)

longlong FUN_142e42ae0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 142e42b40 FUN_142e42b40 body=108 status=ok
// SIG undefined FUN_142e42b40(void)

longlong FUN_142e42b40(longlong param_1,ulonglong param_2)

{
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 142e42bc0 FUN_142e42bc0 body=56 status=ok
// SIG undefined FUN_142e42bc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e42bc0(undefined8 param_1,longlong param_2)

{
  FUN_142cdd100(param_2);
  *(undefined8 *)(param_2 + 0x1c) = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 0x24) = DAT_1468b5d98;
  *(undefined1 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  return;
}



// FUNCTION 142e42fa0 FUN_142e42fa0 body=122 status=ok
// SIG undefined FUN_142e42fa0(void)

undefined8 FUN_142e42fa0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x5c);
    do {
      FUN_142e429f0(puVar1 + -0x5c,puVar1 + param_3 + -0x5c);
      *(undefined8 *)(puVar1 + -0xc) = *(undefined8 *)(puVar1 + param_3 + -0xc);
      *(undefined4 *)(puVar1 + -4) = *(undefined4 *)(puVar1 + param_3 + -4);
      *puVar1 = puVar1[param_3];
      *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(puVar1 + param_3 + 4);
      puVar1 = puVar1 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e43020 FUN_142e43020 body=123 status=ok
// SIG undefined FUN_142e43020(void)

undefined8 FUN_142e43020(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x18);
    do {
      TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=
                (puVar1 + -3,param_3 + -0x18 + (longlong)puVar1);
      puVar1[-1] = *(undefined8 *)(param_3 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      FText::operator=(puVar1 + 1,param_3 + 8 + (longlong)puVar1);
      puVar1 = puVar1 + 7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e430a0 FUN_142e430a0 body=210 status=ok
// SIG undefined FUN_142e430a0(void)

undefined8 FUN_142e430a0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_4 != 0) {
    puVar2 = (undefined8 *)(param_3 + 0x10);
    do {
      if (param_2 != puVar2 + -2) {
        iVar1 = *(int *)(puVar2 + -1);
        _Src = (void *)puVar2[-2];
        *(int *)(param_2 + 1) = iVar1;
        if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar1);
          _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 4);
        }
      }
      param_2[2] = *puVar2;
      param_2[3] = puVar2[1];
      TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(param_2 + 4,puVar2 + 2);
      puVar2 = puVar2 + 6;
      param_4 = param_4 + -1;
      param_2 = param_2 + 6;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e43180 FUN_142e43180 body=351 status=ok
// SIG undefined FUN_142e43180(void)

undefined8 FUN_142e43180(undefined8 param_1,int *param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_4 != 0) {
    piVar3 = (int *)(param_3 + 0x30);
    do {
      if (param_2 != piVar3 + -0xc) {
        iVar1 = piVar3[-10];
        pvVar2 = *(void **)(piVar3 + -0xc);
        param_2[2] = iVar1;
        if ((iVar1 == 0) && (param_2[3] == 0)) {
          param_2[3] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar1);
          _guard_xfg_dispatch_icall_nop(*(void **)param_2,pvVar2,(longlong)iVar1 << 3);
        }
      }
      piVar4 = param_2 + 6;
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(piVar3 + -8);
      if (piVar4 != piVar3 + -6) {
        iVar1 = piVar3[-4];
        pvVar2 = *(void **)(piVar3 + -6);
        param_2[8] = iVar1;
        if ((iVar1 == 0) && (param_2[9] == 0)) {
          param_2[9] = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(piVar4,iVar1);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar4,pvVar2,(longlong)iVar1 * 0x18);
        }
      }
      piVar4 = param_2 + 10;
      if (piVar4 != piVar3 + -2) {
        iVar1 = *piVar3;
        pvVar2 = *(void **)(piVar3 + -2);
        param_2[0xc] = iVar1;
        if ((iVar1 == 0) && (param_2[0xd] == 0)) {
          param_2[0xd] = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(piVar4,iVar1);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar4,pvVar2,(longlong)iVar1 * 0x18);
        }
      }
      piVar3 = piVar3 + 0xe;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xe;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e432e0 FUN_142e432e0 body=147 status=ok
// SIG undefined FUN_142e432e0(void)

undefined8 FUN_142e432e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x98);
    do {
      *(undefined8 *)(puVar1 + -0x26) = *(undefined8 *)(param_3 + -0x98 + (longlong)puVar1);
      FUN_140729f20(puVar1 + -0x24,param_3 + -0x90 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 1) = *(undefined8 *)(param_3 + 4 + (longlong)puVar1);
      puVar1[3] = *(undefined4 *)(param_3 + 0xc + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 0x10 + (longlong)puVar1);
      puVar1 = puVar1 + 0x2c;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e433a0 FUN_142e433a0 body=55 status=ok
// SIG undefined FUN_142e433a0(void)

void FUN_142e433a0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b39250 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b39250 = GetStaticEnum(FUN_142e44250,uVar1,L"ECompoundConditionOperatorType");
  }
  return;
}



// FUNCTION 142e433e0 FUN_142e433e0 body=55 status=ok
// SIG undefined FUN_142e433e0(void)

void FUN_142e433e0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b39248 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b39248 = GetStaticEnum(FUN_142e44280,uVar1,L"EConditionComparisonOperatorType");
  }
  return;
}



// FUNCTION 142e43420 FUN_142e43420 body=55 status=ok
// SIG undefined FUN_142e43420(void)

void FUN_142e43420(void)

{
  undefined8 uVar1;
  
  if (DAT_146b39260 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b39260 = GetStaticEnum(FUN_142e442b0,uVar1,L"EGbxCustomizationComponentInitSourceType");
  }
  return;
}



// FUNCTION 142e43460 FUN_142e43460 body=55 status=ok
// SIG undefined FUN_142e43460(void)

void FUN_142e43460(void)

{
  undefined8 uVar1;
  
  if (DAT_146b39258 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b39258 = GetStaticEnum(FUN_142e442e0,uVar1,L"ELinkedParameterType");
  }
  return;
}



// FUNCTION 142e434a0 FUN_142e434a0 body=55 status=ok
// SIG undefined FUN_142e434a0(void)

void FUN_142e434a0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b39240 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b39240 = GetStaticEnum(FUN_142e44310,uVar1,L"EMassComparison");
  }
  return;
}



// FUNCTION 142e434e0 FUN_142e434e0 body=79 status=ok
// SIG undefined FUN_142e434e0(void)

bool FUN_142e434e0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  char local_18;
  
  lVar1 = *param_1;
  local_18 = '\0';
  local_28 = param_2;
  local_20 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146b39398);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  return local_18 != '\0';
}



// FUNCTION 142e43530 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBTTask_RunBehaviorDynamic::GetPrivateStaticClass(void)

{
  if (DAT_146b394a0 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCheatManager",&DAT_146b394a0,FUN_142e438f0,0x88,
                  0x10000000,0,L"Engine",FUN_142e423b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UCheatManager::GetPrivateStaticClass,
                  UCharacterMovementComponentGunfire::GetPrivateStaticClass,0);
  }
  return DAT_146b394a0;
}



// FUNCTION 142e435e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGCombatTextWidget::GetPrivateStaticClass(void)

{
  if (DAT_146b394c8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxChildActorComponent",&DAT_146b394c8,
                  StaticRegisterNativesUGCombatTextWidget,800,0x10000000,0,L"Engine",&LAB_142e423f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1423612e0,
                  UUGStartScreenUW::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b394c8;
}



// FUNCTION 142e43690 FUN_142e43690 body=162 status=ok
// SIG undefined FUN_142e43690(void)

longlong FUN_142e43690(void)

{
  if (DAT_146b39720 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCustomizationComponent",&DAT_146b39720,
                  FUN_142e439b0,0x3a0,0x10000000,0,L"Engine",&LAB_142e42950,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b39720;
}



// FUNCTION 142e43740 FUN_142e43740 body=6 status=ok
// SIG undefined FUN_142e43740(void)

undefined8 FUN_142e43740(void)

{
  return 0x60db1e6;
}



// FUNCTION 142e43750 FUN_142e43750 body=6 status=ok
// SIG undefined FUN_142e43750(void)

undefined8 FUN_142e43750(void)

{
  return 0x6cfa8fc6;
}



// FUNCTION 142e43760 FUN_142e43760 body=6 status=ok
// SIG undefined FUN_142e43760(void)

undefined8 FUN_142e43760(void)

{
  return 0xcfeaa9e8;
}



// FUNCTION 142e43770 FUN_142e43770 body=6 status=ok
// SIG undefined FUN_142e43770(void)

undefined8 FUN_142e43770(void)

{
  return 0xfc013462;
}



// FUNCTION 142e43780 FUN_142e43780 body=6 status=ok
// SIG undefined FUN_142e43780(void)

undefined8 FUN_142e43780(void)

{
  return 0x9bdc0ef4;
}



// FUNCTION 142e43790 FUN_142e43790 body=6 status=ok
// SIG undefined FUN_142e43790(void)

undefined8 FUN_142e43790(void)

{
  return 0x99518258;
}



// FUNCTION 142e437a0 FUN_142e437a0 body=6 status=ok
// SIG undefined FUN_142e437a0(void)

undefined8 FUN_142e437a0(void)

{
  return 0x16c0750;
}



// FUNCTION 142e437b0 FUN_142e437b0 body=6 status=ok
// SIG undefined FUN_142e437b0(void)

undefined8 FUN_142e437b0(void)

{
  return 0x5ede0f09;
}



// FUNCTION 142e437c0 FUN_142e437c0 body=6 status=ok
// SIG undefined FUN_142e437c0(void)

undefined8 FUN_142e437c0(void)

{
  return 0x537b841;
}



// FUNCTION 142e437d0 FUN_142e437d0 body=6 status=ok
// SIG undefined FUN_142e437d0(void)

undefined8 FUN_142e437d0(void)

{
  return 0x70ac92cc;
}



// FUNCTION 142e437e0 FUN_142e437e0 body=6 status=ok
// SIG undefined FUN_142e437e0(void)

undefined8 FUN_142e437e0(void)

{
  return 0x38f55537;
}



// FUNCTION 142e437f0 FUN_142e437f0 body=6 status=ok
// SIG undefined FUN_142e437f0(void)

undefined8 FUN_142e437f0(void)

{
  return 0xaa7c27af;
}



// FUNCTION 142e43800 FUN_142e43800 body=6 status=ok
// SIG undefined FUN_142e43800(void)

undefined8 FUN_142e43800(void)

{
  return 0x79b513a2;
}



// FUNCTION 142e43820 FUN_142e43820 body=116 status=ok
// SIG undefined FUN_142e43820(void)

void FUN_142e43820(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  
  local_1c = *(undefined4 *)(param_3 + 1);
  local_24 = *param_3;
  lVar1 = *param_1;
  local_10 = *(undefined4 *)(param_4 + 1);
  local_c = param_5;
  local_18 = *param_4;
  local_b = param_6;
  local_28 = param_2;
  uVar2 = FUN_14178ac60(local_18,DAT_146b393c0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  return;
}



// FUNCTION 142e438a0 FUN_142e438a0 body=66 status=ok
// SIG undefined FUN_142e438a0(void)

void FUN_142e438a0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146b393c8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 142e438f0 FUN_142e438f0 body=34 status=ok
// SIG undefined FUN_142e438f0(void)

void FUN_142e438f0(void)

{
  undefined8 uVar1;
  
  uVar1 = UBTTask_RunBehaviorDynamic::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClearPlayerInit_145926930,0xe);
  return;
}



// FUNCTION 142e43920 StaticRegisterNativesUGCombatTextWidget body=34 status=ok
// SIG undefined StaticRegisterNativesUGCombatTextWidget(void)

void UGCombatTextWidget::StaticRegisterNativesUGCombatTextWidget(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_DespawnChildActor_145926a10,2);
  return;
}



// FUNCTION 142e43950 FUN_142e43950 body=34 status=ok
// SIG undefined FUN_142e43950(void)

void FUN_142e43950(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142e416a0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_EvaluateCondition_145926cc0,1);
  return;
}



// FUNCTION 142e43980 StaticRegisterNativesUUGJournalKey body=34 status=ok
// SIG undefined StaticRegisterNativesUUGJournalKey(void)

void UUGJournalKey::StaticRegisterNativesUUGJournalKey(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetRequiredInterface_145927f98,2);
  return;
}



// FUNCTION 142e439b0 FUN_142e439b0 body=34 status=ok
// SIG undefined FUN_142e439b0(void)

void FUN_142e439b0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142e43690();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CopyFromCustomization_145928c50,10);
  return;
}



// FUNCTION 142e439e0 FUN_142e439e0 body=82 status=ok
// SIG undefined FUN_142e439e0(void)

void FUN_142e439e0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b393f8 == 0) {
    uVar1 = FUN_142e43740();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b393f8 = GetStaticStruct(FUN_142e44340,uVar2,L"CharacterMoveToCommand",0x1c,uVar1);
  }
  return;
}



// FUNCTION 142e43a40 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_MeshSpaceRefPose::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b393e8 == 0) {
    uVar1 = FUN_142e43750();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b393e8 = GetStaticStruct(FUN_142e44370,uVar2,L"CharacterMoveToState",0x30,uVar1);
  }
  return;
}



// FUNCTION 142e43aa0 FUN_142e43aa0 body=82 status=ok
// SIG undefined FUN_142e43aa0(void)

void FUN_142e43aa0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b39408 == 0) {
    uVar1 = FUN_142e43760();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b39408 = GetStaticStruct(FUN_142e443a0,uVar2,L"CharacterRotateToCommand",0x50,uVar1);
  }
  return;
}



// FUNCTION 142e43b00 FUN_142e43b00 body=82 status=ok
// SIG undefined FUN_142e43b00(void)

void FUN_142e43b00(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b393d8 == 0) {
    uVar1 = FUN_142e43770();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b393d8 = GetStaticStruct(FUN_142e443d0,uVar2,L"CharacterRotateToState",0x68,uVar1);
  }
  return;
}



// FUNCTION 142e43b60 FUN_142e43b60 body=82 status=ok
// SIG undefined FUN_142e43b60(void)

void FUN_142e43b60(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b39688 == 0) {
    uVar1 = FUN_142e43780();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b39688 = GetStaticStruct(FUN_142e44400,uVar2,L"CustomizationColorApplication",0x34,uVar1)
    ;
  }
  return;
}



// FUNCTION 142e43bc0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_RefPose::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b396b8 == 0) {
    uVar1 = FUN_142e43790();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b396b8 = GetStaticStruct(FUN_142e44430,uVar2,L"CustomizationColorEntry",0x38,uVar1);
  }
  return;
}



// FUNCTION 142e43c20 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPoseDriverTransform::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b39668 == 0) {
    uVar1 = FUN_142e437a0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b39668 =
         GetStaticStruct(FUN_142e44460,uVar2,L"CustomizationInheritedTextureBaseMaterial",0x18,uVar1
                        );
  }
  return;
}



// FUNCTION 142e43c80 FUN_142e43c80 body=82 status=ok
// SIG undefined FUN_142e43c80(void)

void FUN_142e43c80(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b396a8 == 0) {
    uVar1 = FUN_142e437c0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b396a8 = GetStaticStruct(FUN_142e44490,uVar2,L"CustomizationLinkedParameter",0x10,uVar1);
  }
  return;
}



// FUNCTION 142e43ce0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_MeshSpaceRefPose::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b39698 == 0) {
    uVar1 = FUN_142e437b0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b39698 =
         GetStaticStruct(FUN_142e444c0,uVar2,L"CustomizationLinkedParameterEntry",0x30,uVar1);
  }
  return;
}



// FUNCTION 142e43d40 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_RefPose::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b39658 == 0) {
    uVar1 = FUN_142e437d0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b39658 =
         GetStaticStruct(FUN_142e444f0,uVar2,L"CustomizationTextureInheritanceSettings",0x38,uVar1);
  }
  return;
}



// FUNCTION 142e43da0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_PoseSnapshot::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b39418 == 0) {
    uVar1 = FUN_142e437e0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b39418 = GetStaticStruct(FUN_142e44520,uVar2,L"GbxCharacterNavWalking",0xb0,uVar1);
  }
  return;
}



// FUNCTION 142e43e00 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPoseDriverTransform::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b39678 == 0) {
    uVar1 = FUN_142e437f0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b39678 =
         GetStaticStruct(FUN_142e44550,uVar2,L"InheritedCustomizationTextureExtraParam",0x18,uVar1);
  }
  return;
}



// FUNCTION 142e43e60 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMaterialArray::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b39648 == 0) {
    uVar1 = FUN_142e43800();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b39648 = GetStaticStruct(FUN_142e44580,uVar2,L"MaterialArray",0x10,uVar1);
  }
  return;
}



// FUNCTION 142e43ec0 FUN_142e43ec0 body=47 status=ok
// SIG undefined FUN_142e43ec0(void)

longlong FUN_142e43ec0(void)

{
  if (DAT_146b394d0 == 0) {
    FUN_141786440(&DAT_146b394d0,&PTR_FUN_145924180);
  }
  return DAT_146b394d0;
}



// FUNCTION 142e43ef0 FUN_142e43ef0 body=47 status=ok
// SIG undefined FUN_142e43ef0(void)

longlong FUN_142e43ef0(void)

{
  if (DAT_146b394e0 == 0) {
    FUN_141786440(&DAT_146b394e0,&PTR_FUN_1459237d0);
  }
  return DAT_146b394e0;
}



// FUNCTION 142e43f20 FUN_142e43f20 body=47 status=ok
// SIG undefined FUN_142e43f20(void)

longlong FUN_142e43f20(void)

{
  if (DAT_146b39510 == 0) {
    FUN_141786440(&DAT_146b39510,&PTR_FUN_1459240b0);
  }
  return DAT_146b39510;
}



// FUNCTION 142e43f50 FUN_142e43f50 body=47 status=ok
// SIG undefined FUN_142e43f50(void)

longlong FUN_142e43f50(void)

{
  if (DAT_146b39528 == 0) {
    FUN_141786440(&DAT_146b39528,&PTR_GetPrivateStaticClass_145924660);
  }
  return DAT_146b39528;
}



// FUNCTION 142e43f80 FUN_142e43f80 body=47 status=ok
// SIG undefined FUN_142e43f80(void)

longlong FUN_142e43f80(void)

{
  if (DAT_146b39540 == 0) {
    FUN_141786440(&DAT_146b39540,&PTR_GetPrivateStaticClass_145924b10);
  }
  return DAT_146b39540;
}



// FUNCTION 142e43fb0 FUN_142e43fb0 body=47 status=ok
// SIG undefined FUN_142e43fb0(void)

longlong FUN_142e43fb0(void)

{
  if (DAT_146b39550 == 0) {
    FUN_141786440(&DAT_146b39550,&PTR_GetPrivateStaticClass_145925140);
  }
  return DAT_146b39550;
}



// FUNCTION 142e43fe0 FUN_142e43fe0 body=47 status=ok
// SIG undefined FUN_142e43fe0(void)

longlong FUN_142e43fe0(void)

{
  if (DAT_146b39560 == 0) {
    FUN_141786440(&DAT_146b39560,&PTR_FUN_145925990);
  }
  return DAT_146b39560;
}



// FUNCTION 142e44010 FUN_142e44010 body=47 status=ok
// SIG undefined FUN_142e44010(void)

longlong FUN_142e44010(void)

{
  if (DAT_146b39570 == 0) {
    FUN_141786440(&DAT_146b39570,&PTR_FUN_145922940);
  }
  return DAT_146b39570;
}



// FUNCTION 142e44040 FUN_142e44040 body=47 status=ok
// SIG undefined FUN_142e44040(void)

longlong FUN_142e44040(void)

{
  if (DAT_146b39580 == 0) {
    FUN_141786440(&DAT_146b39580,&PTR_FUN_1459232f0);
  }
  return DAT_146b39580;
}



// FUNCTION 142e44070 FUN_142e44070 body=47 status=ok
// SIG undefined FUN_142e44070(void)

longlong FUN_142e44070(void)

{
  if (DAT_146b39590 == 0) {
    FUN_141786440(&DAT_146b39590,&PTR_GetPrivateStaticClass_1459234d0);
  }
  return DAT_146b39590;
}



// FUNCTION 142e440a0 FUN_142e440a0 body=47 status=ok
// SIG undefined FUN_142e440a0(void)

longlong FUN_142e440a0(void)

{
  if (DAT_146b395a0 == 0) {
    FUN_141786440(&DAT_146b395a0,&PTR_FUN_1459236e0);
  }
  return DAT_146b395a0;
}



// FUNCTION 142e440d0 FUN_142e440d0 body=47 status=ok
// SIG undefined FUN_142e440d0(void)

longlong FUN_142e440d0(void)

{
  if (DAT_146b395b0 == 0) {
    FUN_141786440(&DAT_146b395b0,&PTR_GetPrivateStaticClass_145923870);
  }
  return DAT_146b395b0;
}



// FUNCTION 142e44100 FUN_142e44100 body=47 status=ok
// SIG undefined FUN_142e44100(void)

longlong FUN_142e44100(void)

{
  if (DAT_146b395c0 == 0) {
    FUN_141786440(&DAT_146b395c0,&PTR_FUN_145923af0);
  }
  return DAT_146b395c0;
}



// FUNCTION 142e44130 FUN_142e44130 body=47 status=ok
// SIG undefined FUN_142e44130(void)

longlong FUN_142e44130(void)

{
  if (DAT_146b395d0 == 0) {
    FUN_141786440(&DAT_146b395d0,&PTR_FUN_145923d60);
  }
  return DAT_146b395d0;
}



// FUNCTION 142e44160 FUN_142e44160 body=47 status=ok
// SIG undefined FUN_142e44160(void)

longlong FUN_142e44160(void)

{
  if (DAT_146b39600 == 0) {
    FUN_141786440(&DAT_146b39600,&PTR_FUN_145925460);
  }
  return DAT_146b39600;
}



// FUNCTION 142e44190 FUN_142e44190 body=47 status=ok
// SIG undefined FUN_142e44190(void)

longlong FUN_142e44190(void)

{
  if (DAT_146b39610 == 0) {
    FUN_141786440(&DAT_146b39610,&PTR_FUN_1459258c0);
  }
  return DAT_146b39610;
}



// FUNCTION 142e441c0 FUN_142e441c0 body=47 status=ok
// SIG undefined FUN_142e441c0(void)

longlong FUN_142e441c0(void)

{
  if (DAT_146b39620 == 0) {
    FUN_141786440(&DAT_146b39620,&PTR_FUN_145925cb0);
  }
  return DAT_146b39620;
}



// FUNCTION 142e441f0 FUN_142e441f0 body=47 status=ok
// SIG undefined FUN_142e441f0(void)

longlong FUN_142e441f0(void)

{
  if (DAT_146b39630 == 0) {
    FUN_141786a30(&DAT_146b39630,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466fc370);
  }
  return DAT_146b39630;
}



// FUNCTION 142e44220 FUN_142e44220 body=47 status=ok
// SIG undefined FUN_142e44220(void)

longlong FUN_142e44220(void)

{
  if (DAT_146b394a8 == 0) {
    FUN_141786a30(&DAT_146b394a8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466fb220);
  }
  return DAT_146b394a8;
}



// FUNCTION 142e44250 FUN_142e44250 body=47 status=ok
// SIG undefined FUN_142e44250(void)

longlong FUN_142e44250(void)

{
  if (DAT_146b39538 == 0) {
    FUN_1417866a0(&DAT_146b39538,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466fdc30);
  }
  return DAT_146b39538;
}



// FUNCTION 142e44280 FUN_142e44280 body=47 status=ok
// SIG undefined FUN_142e44280(void)

longlong FUN_142e44280(void)

{
  if (DAT_146b39520 == 0) {
    FUN_1417866a0(&DAT_146b39520,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466fdbe0);
  }
  return DAT_146b39520;
}



// FUNCTION 142e442b0 FUN_142e442b0 body=47 status=ok
// SIG undefined FUN_142e442b0(void)

longlong FUN_142e442b0(void)

{
  if (DAT_146b39640 == 0) {
    FUN_1417866a0(&DAT_146b39640,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466fdcd0);
  }
  return DAT_146b39640;
}


