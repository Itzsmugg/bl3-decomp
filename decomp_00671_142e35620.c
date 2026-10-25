// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142e35620 FUN_142e35620 body=52 status=ok
// SIG undefined FUN_142e35620(void)

undefined8 FUN_142e35620(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 142e35660 FUN_142e35660 body=84 status=ok
// SIG undefined FUN_142e35660(void)

void FUN_142e35660(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  
  local_28 = *param_2;
  local_20 = *(undefined4 *)(param_2 + 1);
  lVar1 = *param_1;
  local_1c = param_3;
  local_18 = param_4;
  uVar2 = FUN_14178ac60(local_28,DAT_146b389c0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  return;
}



// FUNCTION 142e356f0 FUN_142e356f0 body=55 status=ok
// SIG undefined FUN_142e356f0(void)

void FUN_142e356f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 1;
  FAlphaBlend::FAlphaBlend(param_2 + 2,0);
  param_2[9] = 0;
  param_2[10] = 0;
  return;
}



// FUNCTION 142e35730 FUN_142e35730 body=147 status=ok
// SIG undefined FUN_142e35730(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e35730(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_48 [64];
  
  puVar2 = (undefined8 *)FAlphaBlend::FAlphaBlend(local_48,0x3e4ccccd);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  *(undefined1 *)(param_2 + 3) = 2;
  uVar1 = puVar2[1];
  param_2[4] = *puVar2;
  param_2[5] = uVar1;
  uVar1 = puVar2[3];
  param_2[6] = puVar2[2];
  param_2[7] = uVar1;
  uVar1 = puVar2[5];
  param_2[8] = puVar2[4];
  param_2[9] = uVar1;
  param_2[10] = puVar2[6];
  param_2[0xb] = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 0xc) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_2 + 100) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_2 + 0x6c) = DAT_1468b5d98;
  return;
}



// FUNCTION 142e35820 FUN_142e35820 body=247 status=ok
// SIG undefined FUN_142e35820(void)

undefined8 FUN_142e35820(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  
  if (param_4 != 0) {
    puVar7 = (undefined1 *)(param_3 + 8);
    do {
      *param_2 = *(undefined8 *)(puVar7 + -8);
      puVar1 = param_2 + 9;
      *(undefined1 *)(param_2 + 1) = *puVar7;
      *(undefined1 *)((longlong)param_2 + 9) = puVar7[1];
      uVar6 = *(undefined8 *)(puVar7 + 0x10);
      param_2[2] = *(undefined8 *)(puVar7 + 8);
      param_2[3] = uVar6;
      uVar6 = *(undefined8 *)(puVar7 + 0x20);
      param_2[4] = *(undefined8 *)(puVar7 + 0x18);
      param_2[5] = uVar6;
      uVar3 = *(undefined4 *)(puVar7 + 0x2c);
      uVar4 = *(undefined4 *)(puVar7 + 0x30);
      uVar5 = *(undefined4 *)(puVar7 + 0x34);
      *(undefined4 *)(param_2 + 6) = *(undefined4 *)(puVar7 + 0x28);
      *(undefined4 *)((longlong)param_2 + 0x34) = uVar3;
      *(undefined4 *)(param_2 + 7) = uVar4;
      *(undefined4 *)((longlong)param_2 + 0x3c) = uVar5;
      param_2[8] = *(undefined8 *)(puVar7 + 0x38);
      if (puVar1 != (undefined8 *)(puVar7 + 0x40)) {
        iVar2 = *(int *)(puVar7 + 0x48);
        _Src = *(void **)(puVar7 + 0x40);
        *(int *)(param_2 + 10) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x54) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x54) = 0;
        }
        else {
          TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x30);
        }
      }
      puVar7 = puVar7 + 0x58;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xb;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e35920 Copy body=251 status=ok
// SIG undefined Copy(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
UScriptStruct::TCppStructOps<FCapturedPixels>::Copy
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    plVar4 = (longlong *)param_3[1];
    uVar5 = *param_3;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_38 = uVar5;
    plStack_30 = plVar4;
    if (&local_38 != param_2) {
      local_38 = *param_2;
      plStack_30 = (longlong *)param_2[1];
      *param_2 = uVar5;
      param_2[1] = plVar4;
      local_28 = uVar5;
      plStack_20 = plVar4;
    }
    plVar4 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 142e35a20 FUN_142e35a20 body=153 status=ok
// SIG undefined FUN_142e35a20(void)

undefined8 FUN_142e35a20(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    param_3 = param_3 + 0x20;
    do {
      *(undefined8 *)(param_2 + -0x20 + param_3) = *(undefined8 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x14);
      uVar3 = *(undefined4 *)(param_3 + -0x10);
      uVar4 = *(undefined4 *)(param_3 + -0xc);
      puVar1 = (undefined4 *)(param_2 + -0x18 + param_3);
      *puVar1 = *(undefined4 *)(param_3 + -0x18);
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      local_28 = *(undefined8 *)(param_3 + -8);
      FString::FString(local_20,param_3);
      FSoftObjectPath::operator=(param_2 + -8 + param_3,&local_28);
      param_3 = param_3 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e35ac0 FUN_142e35ac0 body=55 status=ok
// SIG undefined FUN_142e35ac0(void)

void FUN_142e35ac0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b38868 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38868 = GetStaticEnum(FUN_142e36500,uVar1,L"EBoneModifyTransition_TransformType");
  }
  return;
}



// FUNCTION 142e35b00 FUN_142e35b00 body=55 status=ok
// SIG undefined FUN_142e35b00(void)

void FUN_142e35b00(void)

{
  undefined8 uVar1;
  
  if (DAT_146b38860 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38860 = GetStaticEnum(FUN_142e36530,uVar1,L"EGbxBoneModifyProfile_PoseMode");
  }
  return;
}



// FUNCTION 142e35b40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AHeoCon::GetPrivateStaticClass(void)

{
  if (DAT_146b38d28 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCharacter",&DAT_146b38d28,
                  UPlayFabMultiplayerModelDecoder::
                  StaticRegisterNativesUPlayFabMultiplayerModelDecoder,0xd80,0x10000000,0,L"Game",
                  &LAB_142e35080,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_14082aa80,&LAB_140447700,0);
  }
  return DAT_146b38d28;
}



// FUNCTION 142e35bf0 FUN_142e35bf0 body=6 status=ok
// SIG undefined FUN_142e35bf0(void)

undefined8 FUN_142e35bf0(void)

{
  return 0x36e864e4;
}



// FUNCTION 142e35c00 FUN_142e35c00 body=6 status=ok
// SIG undefined FUN_142e35c00(void)

undefined8 FUN_142e35c00(void)

{
  return 0x7a909841;
}



// FUNCTION 142e35c10 FUN_142e35c10 body=6 status=ok
// SIG undefined FUN_142e35c10(void)

undefined8 FUN_142e35c10(void)

{
  return 0xee5f4285;
}



// FUNCTION 142e35c20 FUN_142e35c20 body=6 status=ok
// SIG undefined FUN_142e35c20(void)

undefined8 FUN_142e35c20(void)

{
  return 0x8975b2a8;
}



// FUNCTION 142e35c30 FUN_142e35c30 body=6 status=ok
// SIG undefined FUN_142e35c30(void)

undefined8 FUN_142e35c30(void)

{
  return 0x20a3429f;
}



// FUNCTION 142e35c40 FUN_142e35c40 body=6 status=ok
// SIG undefined FUN_142e35c40(void)

undefined8 FUN_142e35c40(void)

{
  return 0x1371bb73;
}



// FUNCTION 142e35c50 FUN_142e35c50 body=6 status=ok
// SIG undefined FUN_142e35c50(void)

undefined8 FUN_142e35c50(void)

{
  return 0xc91462c0;
}



// FUNCTION 142e35c60 FUN_142e35c60 body=6 status=ok
// SIG undefined FUN_142e35c60(void)

undefined8 FUN_142e35c60(void)

{
  return 0x6e3a585f;
}



// FUNCTION 142e35c70 FUN_142e35c70 body=6 status=ok
// SIG undefined FUN_142e35c70(void)

undefined8 FUN_142e35c70(void)

{
  return 0xbe39b326;
}



// FUNCTION 142e35c80 FUN_142e35c80 body=6 status=ok
// SIG undefined FUN_142e35c80(void)

undefined8 FUN_142e35c80(void)

{
  return 0x10801189;
}



// FUNCTION 142e35c90 FUN_142e35c90 body=35 status=ok
// SIG undefined FUN_142e35c90(void)

undefined8
FUN_142e35c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_142cc5db0(param_2,param_3,param_4);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 142e35cf0 FUN_142e35cf0 body=57 status=ok
// SIG undefined FUN_142e35cf0(void)

void FUN_142e35cf0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b389c8);
                    /* WARNING: Could not recover jumptable at 0x000142e35d26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 142e35d30 FUN_142e35d30 body=330 status=ok
// SIG undefined FUN_142e35d30(void)

void FUN_142e35d30(longlong *param_1,byte *param_2,undefined4 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  byte local_a8 [4];
  undefined4 local_a4;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  undefined8 local_10;
  
  local_9c = *(undefined4 *)(param_2 + 0xc);
  local_98 = *(undefined4 *)(param_2 + 0x10);
  lVar1 = *param_1;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_2c = 0;
  local_a8[0] = *param_2 & 3;
  local_94 = *(undefined8 *)(param_2 + 0x14);
  local_a4 = *(undefined4 *)(param_2 + 4);
  local_88 = *(undefined8 *)(param_2 + 0x20);
  local_a0 = *(uint *)(param_2 + 8) & 1;
  local_8c = *(undefined4 *)(param_2 + 0x1c);
  local_7c = *(undefined8 *)(param_2 + 0x2c);
  local_80 = *(undefined4 *)(param_2 + 0x28);
  local_74 = *(undefined4 *)(param_2 + 0x34);
  local_68 = *(undefined4 *)(param_2 + 0x40);
  local_5c = *(undefined4 *)(param_2 + 0x4c);
  local_50 = *(undefined4 *)(param_2 + 0x58);
  local_48 = *(undefined4 *)(param_2 + 0x60);
  local_44 = *(undefined4 *)(param_2 + 100);
  local_40 = *(undefined4 *)(param_2 + 0x68);
  local_3c = *(undefined4 *)(param_2 + 0x6c);
  local_38 = *(undefined4 *)(param_2 + 0x70);
  local_34 = *(undefined4 *)(param_2 + 0x74);
  local_70 = *(undefined8 *)(param_2 + 0x38);
  local_30 = *(undefined4 *)(param_2 + 0x78);
  local_28 = *(undefined8 *)(param_2 + 0x80);
  local_64 = *(undefined8 *)(param_2 + 0x44);
  local_20 = *(undefined8 *)(param_2 + 0x88);
  local_58 = *(undefined8 *)(param_2 + 0x50);
  local_4c = *(undefined4 *)(param_2 + 0x5c);
  local_10 = param_5;
  local_18 = param_3;
  local_14 = param_4;
  uVar2 = FUN_14178ac60(local_4c,DAT_146b389d0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_a8);
  return;
}



// FUNCTION 142e35e80 FUN_142e35e80 body=61 status=ok
// SIG undefined FUN_142e35e80(void)

void FUN_142e35e80(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146b389d8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 142e35f10 FUN_142e35f10 body=61 status=ok
// SIG undefined FUN_142e35f10(void)

void FUN_142e35f10(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146b389e8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 142e35f60 StaticRegisterNativesUPlayFabMultiplayerModelDecoder body=34 status=ok
// SIG undefined StaticRegisterNativesUPlayFabMultiplayerModelDecoder(void)

void UPlayFabMultiplayerModelDecoder::StaticRegisterNativesUPlayFabMultiplayerModelDecoder(void)

{
  undefined8 uVar1;
  
  uVar1 = AHeoCon::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AttachCharacterToActor_145917a50,0x23);
  return;
}



// FUNCTION 142e35f90 FUN_142e35f90 body=34 status=ok
// SIG undefined FUN_142e35f90(void)

void FUN_142e35f90(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142e34d30();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_IsAttributeSetClassUnrelatedToEx_145916610,1);
  return;
}



// FUNCTION 142e35fc0 FUN_142e35fc0 body=34 status=ok
// SIG undefined FUN_142e35fc0(void)

void FUN_142e35fc0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142e346b0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClearValue_1459172e0,0x1a);
  return;
}



// FUNCTION 142e35ff0 FUN_142e35ff0 body=82 status=ok
// SIG undefined FUN_142e35ff0(void)

void FUN_142e35ff0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38be0 == 0) {
    uVar1 = FUN_142e35bf0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38be0 = GetStaticStruct(FUN_142e36560,uVar2,L"AnimGraphBoneSet",0x10,uVar1);
  }
  return;
}



// FUNCTION 142e36050 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_MeshSpaceRefPose::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38b98 == 0) {
    uVar1 = FUN_142e35c00();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38b98 = GetStaticStruct(FUN_142e36590,uVar2,L"BoneModifyInfo",0x30,uVar1);
  }
  return;
}



// FUNCTION 142e360b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPoseDriverTransform::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38b68 == 0) {
    uVar1 = FUN_142e35c10();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38b68 = GetStaticStruct(FUN_142e365c0,uVar2,L"BoneModifyProfileData",0x18,uVar1);
  }
  return;
}



// FUNCTION 142e36110 FUN_142e36110 body=82 status=ok
// SIG undefined FUN_142e36110(void)

void FUN_142e36110(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38b88 == 0) {
    uVar1 = FUN_142e35c20();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38b88 = GetStaticStruct(FUN_142e365f0,uVar2,L"BoneModifyState",0x58,uVar1);
  }
  return;
}



// FUNCTION 142e36170 FUN_142e36170 body=82 status=ok
// SIG undefined FUN_142e36170(void)

void FUN_142e36170(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38b78 == 0) {
    uVar1 = FUN_142e35c30();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38b78 = GetStaticStruct(FUN_142e36620,uVar2,L"BoneModifyState_RepData",0xc,uVar1);
  }
  return;
}



// FUNCTION 142e361d0 FUN_142e361d0 body=82 status=ok
// SIG undefined FUN_142e361d0(void)

void FUN_142e361d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38ba8 == 0) {
    uVar1 = FUN_142e35c40();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38ba8 = GetStaticStruct(FUN_142e36650,uVar2,L"BoneModifyTransition",0x70,uVar1);
  }
  return;
}



// FUNCTION 142e36230 FUN_142e36230 body=82 status=ok
// SIG undefined FUN_142e36230(void)

void FUN_142e36230(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b389f0 == 0) {
    uVar1 = FUN_142e35c50();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b389f0 = GetStaticStruct(FUN_142e36680,uVar2,L"GbxAttributeModifierHandle",0x10,uVar1);
  }
  return;
}



// FUNCTION 142e36290 FUN_142e36290 body=82 status=ok
// SIG undefined FUN_142e36290(void)

void FUN_142e36290(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38a68 == 0) {
    uVar1 = FUN_142e35c60();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38a68 = GetStaticStruct(FUN_142e366b0,uVar2,L"GbxBlackboardKeySelector",0x10,uVar1);
  }
  return;
}



// FUNCTION 142e362f0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_MeshSpaceRefPose::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38a28 == 0) {
    uVar1 = FUN_142e35c70();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38a28 = GetStaticStruct(FUN_142e366e0,uVar2,L"PropertyToAttributeMapping",0x30,uVar1);
  }
  return;
}



// FUNCTION 142e36350 FUN_142e36350 body=82 status=ok
// SIG undefined FUN_142e36350(void)

void FUN_142e36350(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b38bf0 == 0) {
    uVar1 = FUN_142e35c80();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38bf0 = GetStaticStruct(FUN_142e36710,uVar2,L"ReplicatedPawnAttachState",0x10,uVar1);
  }
  return;
}



// FUNCTION 142e363b0 FUN_142e363b0 body=47 status=ok
// SIG undefined FUN_142e363b0(void)

longlong FUN_142e363b0(void)

{
  if (DAT_146b38a18 == 0) {
    FUN_141786440(&DAT_146b38a18,&PTR_GetPrivateStaticClass_145914ab0);
  }
  return DAT_146b38a18;
}



// FUNCTION 142e363e0 FUN_142e363e0 body=47 status=ok
// SIG undefined FUN_142e363e0(void)

longlong FUN_142e363e0(void)

{
  if (DAT_146b38a38 == 0) {
    FUN_141786440(&DAT_146b38a38,&PTR_FUN_1459122a0);
  }
  return DAT_146b38a38;
}



// FUNCTION 142e36410 FUN_142e36410 body=47 status=ok
// SIG undefined FUN_142e36410(void)

longlong FUN_142e36410(void)

{
  if (DAT_146b38a48 == 0) {
    FUN_141786440(&DAT_146b38a48,&PTR_FUN_145912a00);
  }
  return DAT_146b38a48;
}



// FUNCTION 142e36440 FUN_142e36440 body=47 status=ok
// SIG undefined FUN_142e36440(void)

longlong FUN_142e36440(void)

{
  if (DAT_146b38a58 == 0) {
    FUN_141786440(&DAT_146b38a58,&PTR_GetPrivateStaticClass_145912e20);
  }
  return DAT_146b38a58;
}



// FUNCTION 142e36470 FUN_142e36470 body=47 status=ok
// SIG undefined FUN_142e36470(void)

longlong FUN_142e36470(void)

{
  if (DAT_146b38bb8 == 0) {
    FUN_141786440(&DAT_146b38bb8,&PTR_FUN_145912810);
  }
  return DAT_146b38bb8;
}



// FUNCTION 142e364a0 FUN_142e364a0 body=47 status=ok
// SIG undefined FUN_142e364a0(void)

longlong FUN_142e364a0(void)

{
  if (DAT_146b38bc8 == 0) {
    FUN_141786440(&DAT_146b38bc8,&PTR_FUN_145913e90);
  }
  return DAT_146b38bc8;
}



// FUNCTION 142e364d0 FUN_142e364d0 body=47 status=ok
// SIG undefined FUN_142e364d0(void)

longlong FUN_142e364d0(void)

{
  if (DAT_146b38bd8 == 0) {
    FUN_141786a30(&DAT_146b38bd8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466efcf0);
  }
  return DAT_146b38bd8;
}



// FUNCTION 142e36500 FUN_142e36500 body=47 status=ok
// SIG undefined FUN_142e36500(void)

longlong FUN_142e36500(void)

{
  if (DAT_146b38b60 == 0) {
    FUN_1417866a0(&DAT_146b38b60,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f2720);
  }
  return DAT_146b38b60;
}



// FUNCTION 142e36530 FUN_142e36530 body=47 status=ok
// SIG undefined FUN_142e36530(void)

longlong FUN_142e36530(void)

{
  if (DAT_146b38b58 == 0) {
    FUN_1417866a0(&DAT_146b38b58,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f26d0);
  }
  return DAT_146b38b58;
}



// FUNCTION 142e36560 FUN_142e36560 body=47 status=ok
// SIG undefined FUN_142e36560(void)

longlong FUN_142e36560(void)

{
  if (DAT_146b38be8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38be8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466efdb0);
  }
  return DAT_146b38be8;
}



// FUNCTION 142e36590 FUN_142e36590 body=47 status=ok
// SIG undefined FUN_142e36590(void)

longlong FUN_142e36590(void)

{
  if (DAT_146b38ba0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38ba0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466ef6a0);
  }
  return DAT_146b38ba0;
}



// FUNCTION 142e365c0 FUN_142e365c0 body=47 status=ok
// SIG undefined FUN_142e365c0(void)

longlong FUN_142e365c0(void)

{
  if (DAT_146b38b70 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38b70,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466ef230);
  }
  return DAT_146b38b70;
}



// FUNCTION 142e365f0 FUN_142e365f0 body=47 status=ok
// SIG undefined FUN_142e365f0(void)

longlong FUN_142e365f0(void)

{
  if (DAT_146b38b90 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38b90,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466ef550);
  }
  return DAT_146b38b90;
}



// FUNCTION 142e36620 FUN_142e36620 body=47 status=ok
// SIG undefined FUN_142e36620(void)

longlong FUN_142e36620(void)

{
  if (DAT_146b38b80 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38b80,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466ef340);
  }
  return DAT_146b38b80;
}



// FUNCTION 142e36650 FUN_142e36650 body=47 status=ok
// SIG undefined FUN_142e36650(void)

longlong FUN_142e36650(void)

{
  if (DAT_146b38bb0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38bb0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466ef870);
  }
  return DAT_146b38bb0;
}



// FUNCTION 142e36680 FUN_142e36680 body=47 status=ok
// SIG undefined FUN_142e36680(void)

longlong FUN_142e36680(void)

{
  if (DAT_146b389f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b389f8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466ed180);
  }
  return DAT_146b389f8;
}



// FUNCTION 142e366b0 FUN_142e366b0 body=47 status=ok
// SIG undefined FUN_142e366b0(void)

longlong FUN_142e366b0(void)

{
  if (DAT_146b38a70 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38a70,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466ed670);
  }
  return DAT_146b38a70;
}



// FUNCTION 142e366e0 FUN_142e366e0 body=47 status=ok
// SIG undefined FUN_142e366e0(void)

longlong FUN_142e366e0(void)

{
  if (DAT_146b38a30 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38a30,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466ed490);
  }
  return DAT_146b38a30;
}



// FUNCTION 142e36710 FUN_142e36710 body=47 status=ok
// SIG undefined FUN_142e36710(void)

longlong FUN_142e36710(void)

{
  if (DAT_146b38bf8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38bf8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466efef0);
  }
  return DAT_146b38bf8;
}



// FUNCTION 142e36740 execK2_AttachToComponent body=434 status=ok
// SIG undefined execK2_AttachToComponent(void)

void AActor::execK2_AttachToComponent(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined1 local_38 [4];
  int local_34;
  undefined8 local_30;
  undefined8 local_28 [2];
  
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
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
  local_34 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_34);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142cb6f00(param_1,local_28[0],local_30,local_38[0],local_res20[0],local_res10[0],local_34 != 0
               );
  return;
}



// FUNCTION 142e36900 execK2_AttachToComponent body=434 status=ok
// SIG undefined execK2_AttachToComponent(void)

void AActor::execK2_AttachToComponent(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined1 local_38 [4];
  int local_34;
  undefined8 local_30;
  undefined8 local_28 [2];
  
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
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
  local_34 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_34);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142cb6f40(param_1,local_28[0],local_30,local_38[0],local_res20[0],local_res10[0],local_34 != 0
               );
  return;
}



// FUNCTION 142e36ae0 FUN_142e36ae0 body=210 status=ok
// SIG undefined FUN_142e36ae0(void)

void FUN_142e36ae0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined8 local_18;
  undefined2 local_10;
  
  local_10 = 0xff00;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res10 = 0;
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142cbcc90(puVar1,local_res10);
  return;
}



// FUNCTION 142e36bc0 FUN_142e36bc0 body=271 status=ok
// SIG undefined FUN_142e36bc0(void)

void FUN_142e36bc0(longlong *param_1,longlong param_2)

{
  undefined1 local_res8 [8];
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
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  (**(code **)(*param_1 + 0x960))(param_1,&local_18,local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 142e36cd0 FUN_142e36cd0 body=118 status=ok
// SIG undefined FUN_142e36cd0(void)

void FUN_142e36cd0(undefined8 param_1,longlong param_2)

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
  FUN_142cbe4e0(param_1,local_res10[0]);
  return;
}



// FUNCTION 142e36d50 FUN_142e36d50 body=44 status=ok
// SIG undefined FUN_142e36d50(void)

void FUN_142e36d50(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142cbf560();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e36d80 FUN_142e36d80 body=60 status=ok
// SIG undefined FUN_142e36d80(void)

void FUN_142e36d80(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142cc0aa0(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142e36dc0 FUN_142e36dc0 body=60 status=ok
// SIG undefined FUN_142e36dc0(void)

void FUN_142e36dc0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142cc0b00(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142e36e00 FUN_142e36e00 body=163 status=ok
// SIG undefined FUN_142e36e00(void)

void FUN_142e36e00(undefined8 param_1,longlong param_2)

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
  FUN_142cc0e60(param_1,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142e36eb0 execGetFXSystemAsset body=48 status=ok
// SIG undefined execGetFXSystemAsset(void)

void UFXSystemComponent::execGetFXSystemAsset
               (longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0xa50))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e36ee0 FUN_142e36ee0 body=48 status=ok
// SIG undefined FUN_142e36ee0(void)

void FUN_142e36ee0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0xa48))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e36f10 FUN_142e36f10 body=44 status=ok
// SIG undefined FUN_142e36f10(void)

void FUN_142e36f10(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142cc1670();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e36f40 execGetFXSystemAsset body=48 status=ok
// SIG undefined execGetFXSystemAsset(void)

void UFXSystemComponent::execGetFXSystemAsset
               (longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0xa58))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e36f70 FUN_142e36f70 body=325 status=ok
// SIG undefined FUN_142e36f70(void)

void FUN_142e36f70(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_res10 [2];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
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
  puVar3 = local_38;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_28;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar4 = local_res10;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar5 = FUN_142cc2690(param_1,puVar3,puVar2,puVar4);
  *param_3 = uVar5;
  return;
}



// FUNCTION 142e370c0 FUN_142e370c0 body=179 status=ok
// SIG undefined FUN_142e370c0(void)

void FUN_142e370c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 local_res10 [2];
  undefined1 local_18 [16];
  
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar2 = local_res10;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142cc26e0(param_1,local_18,puVar2);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142e37180 FUN_142e37180 body=44 status=ok
// SIG undefined FUN_142e37180(void)

void FUN_142e37180(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142ceef80();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e371b0 FUN_142e371b0 body=44 status=ok
// SIG undefined FUN_142e371b0(void)

void FUN_142e371b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142ceefa0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e37220 FUN_142e37220 body=412 status=ok
// SIG undefined FUN_142e37220(void)

void FUN_142e37220(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong local_res10;
  undefined8 local_res18 [2];
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  
  local_50 = 0xff00;
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_res10 = 0;
  puVar2 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
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
  if (*(char *)(puVar2 + 1) == '\0') {
    if (local_res10 == 0) {
      FName::ToString(puVar2,&local_68);
    }
    else {
      puVar2 = (undefined8 *)FName::ToString(puVar2,local_38);
      if (*(int *)(puVar2 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*puVar2;
      }
      local_res18[0] = *(undefined8 *)(lVar1 + 0x18);
      FName::ToString(local_res18,&local_48);
      puVar3 = &DAT_143f3eda8;
      if (local_40 != 0) {
        puVar3 = local_48;
      }
      FString::PrintfImpl(&local_68,L"%s: %s",puVar3,puVar4);
      if (local_48 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
  }
  else {
    local_68 = 0;
    local_60 = 0;
  }
  if (param_3 == &local_68) {
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_68;
    *(undefined4 *)(param_3 + 1) = (undefined4)local_60;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_60._4_4_;
  }
  return;
}



// FUNCTION 142e37440 FUN_142e37440 body=227 status=ok
// SIG undefined FUN_142e37440(void)

void FUN_142e37440(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined2 local_20;
  
  local_20 = 0xff00;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res10 = 0;
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res18[0] = 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142cc3a70(puVar1,local_res10,local_res18);
  *param_3 = local_res18[0];
  return;
}



// FUNCTION 142e37530 FUN_142e37530 body=227 status=ok
// SIG undefined FUN_142e37530(void)

void FUN_142e37530(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined2 local_20;
  
  local_20 = 0xff00;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res18[0] = 0;
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142cc3c10(puVar1,local_res18[0],local_res10);
  *param_3 = local_res10[0];
  return;
}



// FUNCTION 142e37620 FUN_142e37620 body=227 status=ok
// SIG undefined FUN_142e37620(void)

void FUN_142e37620(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined2 local_20;
  
  local_20 = 0xff00;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res10 = 0;
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res18[0] = 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142cc3e50(puVar1,local_res10,local_res18);
  *param_3 = local_res18[0];
  return;
}



// FUNCTION 142e37710 FUN_142e37710 body=227 status=ok
// SIG undefined FUN_142e37710(void)

void FUN_142e37710(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined2 local_20;
  
  local_20 = 0xff00;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res18[0] = 0;
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142cc4030(puVar1,local_res18[0],local_res10);
  *param_3 = local_res10[0];
  return;
}



// FUNCTION 142e37800 FUN_142e37800 body=232 status=ok
// SIG undefined FUN_142e37800(void)

void FUN_142e37800(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined2 local_20;
  
  local_20 = 0xff00;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res18[0] = 0;
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142cc40f0(puVar1,local_res18[0],local_res10);
  *param_3 = local_res10[0];
  return;
}



// FUNCTION 142e378f0 FUN_142e378f0 body=224 status=ok
// SIG undefined FUN_142e378f0(void)

void FUN_142e378f0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined2 local_20;
  
  local_20 = 0xff00;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res18[0] = 0;
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142cc4370(puVar1,local_res18[0],local_res10);
  *param_3 = local_res10[0];
  return;
}



// FUNCTION 142e379d0 FUN_142e379d0 body=227 status=ok
// SIG undefined FUN_142e379d0(void)

void FUN_142e379d0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined2 local_20;
  
  local_20 = 0xff00;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res10 = 0;
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res18[0] = 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142cc4970(puVar1,local_res10,local_res18);
  *param_3 = local_res18[0];
  return;
}



// FUNCTION 142e37ac0 FUN_142e37ac0 body=227 status=ok
// SIG undefined FUN_142e37ac0(void)

void FUN_142e37ac0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined2 local_20;
  
  local_20 = 0xff00;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res10 = 0;
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res18[0] = 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142cc4b40(puVar1,local_res10,local_res18);
  *param_3 = local_res18[0];
  return;
}



// FUNCTION 142e37bb0 FUN_142e37bb0 body=270 status=ok
// SIG undefined FUN_142e37bb0(void)

void FUN_142e37bb0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined2 local_10;
  
  local_10 = 0xff00;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res10 = 0;
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_28 = DAT_1466ed6b8;
  local_20 = DAT_1466ed6c0;
  FUN_142cc4c60(puVar1,local_res10,&local_28);
  *param_3 = local_28;
  *(undefined4 *)(param_3 + 1) = local_20;
  return;
}



// FUNCTION 142e37cc0 FUN_142e37cc0 body=302 status=ok
// SIG undefined FUN_142e37cc0(void)

void FUN_142e37cc0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined2 local_10;
  
  local_10 = 0xff00;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res10 = 0;
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_28 = 0;
  local_20 = 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142cc4d50(puVar1,local_res10,&local_28);
  if (param_3 == &local_28) {
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
  }
  return;
}



// FUNCTION 142e37df0 FUN_142e37df0 body=281 status=ok
// SIG undefined FUN_142e37df0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e37df0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_3f8 [32];
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined2 local_3c8;
  undefined1 local_3b8 [912];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  local_3c8 = 0xff00;
  local_3d0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_3d0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d0);
  }
  local_3d8 = 0;
  puVar2 = &local_3d0;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_3d8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d8);
  }
  uVar1 = local_3d8;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142dc1ad0(local_3b8);
  FUN_142cc5430(puVar2,uVar1,local_3b8);
  FUN_142e351c0(param_3,local_3b8);
  return;
}



// FUNCTION 142e37f10 FUN_142e37f10 body=270 status=ok
// SIG undefined FUN_142e37f10(void)

void FUN_142e37f10(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined2 local_10;
  
  local_10 = 0xff00;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res10 = 0;
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_28 = DAT_1466ed6e0;
  local_20 = DAT_1466ed6e8;
  FUN_142cc54f0(puVar1,local_res10,&local_28);
  *param_3 = local_28;
  *(undefined4 *)(param_3 + 1) = local_20;
  return;
}



// FUNCTION 142e38020 FUN_142e38020 body=143 status=ok
// SIG undefined FUN_142e38020(void)

void FUN_142e38020(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_142ca50f0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e380b0 FUN_142e380b0 body=47 status=ok
// SIG undefined FUN_142e380b0(void)

void FUN_142e380b0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0xa60))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e38100 FUN_142e38100 body=408 status=ok
// SIG undefined FUN_142e38100(void)

void FUN_142e38100(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined8 local_res20;
  undefined1 local_a8 [12];
  undefined4 local_9c;
  
  _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
  local_9c = 0x3f800000;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
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
  bVar1 = local_res8[0] != 0;
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
  (**(code **)(*param_1 + 0x970))(param_1,local_a8,local_res10[0],bVar1,local_res20);
  return;
}



// FUNCTION 142e382a0 FUN_142e382a0 body=132 status=ok
// SIG undefined FUN_142e382a0(void)

void FUN_142e382a0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x968))(param_1,local_res8);
  return;
}



// FUNCTION 142e38350 execClientGotoState body=132 status=ok
// SIG undefined execClientGotoState(void)

void APlayerController::execClientGotoState(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x958))(param_1,local_res8);
  return;
}



// FUNCTION 142e383e0 FUN_142e383e0 body=267 status=ok
// SIG undefined FUN_142e383e0(void)

void FUN_142e383e0(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
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
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  FUN_142ccea80(param_1,&local_18,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 142e384f0 FUN_142e384f0 body=204 status=ok
// SIG undefined FUN_142e384f0(void)

void FUN_142e384f0(undefined8 param_1,longlong param_2)

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
  FUN_142ccf400(param_1,puVar5);
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



// FUNCTION 142e385c0 FUN_142e385c0 body=148 status=ok
// SIG undefined FUN_142e385c0(void)

void FUN_142e385c0(undefined8 param_1,longlong param_2)

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
  FUN_142ccf420(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142e38660 FUN_142e38660 body=128 status=ok
// SIG undefined FUN_142e38660(void)

void FUN_142e38660(undefined8 param_1,longlong param_2)

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
  FUN_142ccf490(param_1,local_res10);
  return;
}



// FUNCTION 142e386e0 FUN_142e386e0 body=128 status=ok
// SIG undefined FUN_142e386e0(void)

void FUN_142e386e0(undefined8 param_1,longlong param_2)

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
  FUN_142cd0090(param_1,local_res10);
  return;
}



// FUNCTION 142e38760 FUN_142e38760 body=128 status=ok
// SIG undefined FUN_142e38760(void)

void FUN_142e38760(undefined8 param_1,longlong param_2)

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
  FUN_142cd0390(param_1,local_res10);
  return;
}



// FUNCTION 142e387e0 FUN_142e387e0 body=276 status=ok
// SIG undefined FUN_142e387e0(void)

void FUN_142e387e0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int local_res10 [2];
  undefined8 local_res20;
  undefined8 local_18;
  undefined2 local_10;
  
  local_10 = 0xff00;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res20 = 0;
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  FUN_142cd0450(puVar1,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 142e38900 FUN_142e38900 body=273 status=ok
// SIG undefined FUN_142e38900(void)

void FUN_142e38900(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_18;
  undefined2 local_10;
  
  local_10 = 0xff00;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res20 = 0;
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
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
  FUN_142cd0520(puVar1,local_res20,local_res10);
  return;
}



// FUNCTION 142e38a20 FUN_142e38a20 body=274 status=ok
// SIG undefined FUN_142e38a20(void)

void FUN_142e38a20(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined8 local_res20;
  undefined8 local_18;
  undefined2 local_10;
  
  local_10 = 0xff00;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res20 = 0;
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  FUN_142cd05e0(puVar1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 142e38b40 FUN_142e38b40 body=341 status=ok
// SIG undefined FUN_142e38b40(void)

void FUN_142e38b40(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int local_res10 [4];
  undefined4 local_res20 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_28;
  
  local_28 = 0xff00;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  puVar1 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
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
  bVar2 = local_res10[0] != 0;
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
  FUN_142cd06b0(puVar1,local_38,bVar2,local_res20[0]);
  return;
}



// FUNCTION 142e38ca0 FUN_142e38ca0 body=278 status=ok
// SIG undefined FUN_142e38ca0(void)

void FUN_142e38ca0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_18;
  undefined2 local_10;
  
  local_10 = 0xff00;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res20 = 0;
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  FUN_142cd0820(puVar1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 142e38dc0 FUN_142e38dc0 body=272 status=ok
// SIG undefined FUN_142e38dc0(void)

void FUN_142e38dc0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_18;
  undefined2 local_10;
  
  local_10 = 0xff00;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res20 = 0;
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  FUN_142cd08e0(puVar1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 142e38ed0 FUN_142e38ed0 body=273 status=ok
// SIG undefined FUN_142e38ed0(void)

void FUN_142e38ed0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_18;
  undefined2 local_10;
  
  local_10 = 0xff00;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res20 = 0;
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
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
  FUN_142cd09a0(puVar1,local_res20,local_res10);
  return;
}



// FUNCTION 142e38ff0 FUN_142e38ff0 body=273 status=ok
// SIG undefined FUN_142e38ff0(void)

void FUN_142e38ff0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_18;
  undefined2 local_10;
  
  local_10 = 0xff00;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res20 = 0;
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
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
  FUN_142cd0a60(puVar1,local_res20,local_res10);
  return;
}



// FUNCTION 142e39110 FUN_142e39110 body=288 status=ok
// SIG undefined FUN_142e39110(void)

void FUN_142e39110(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined2 local_10;
  
  local_10 = 0xff00;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res10 = 0;
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
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
  FUN_142cd0b20(puVar1,local_res10,&local_28);
  return;
}



// FUNCTION 142e39230 FUN_142e39230 body=378 status=ok
// SIG undefined FUN_142e39230(void)

void FUN_142e39230(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_res10;
  void *local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined2 local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  undefined1 local_28 [16];
  
  local_40 = 0xff00;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_res10 = 0;
  puVar4 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  _Src = local_58;
  local_38 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar3 = (longlong)(int)local_50;
  local_30 = (int)local_50;
  if ((int)local_50 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_50 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar3 * 2);
  }
  uVar1 = local_res10;
  uVar2 = FString::FString(local_28,&local_38);
  FUN_142cd0c00(puVar4,uVar1,uVar2);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142e393b0 FUN_142e393b0 body=335 status=ok
// SIG undefined FUN_142e393b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e393b0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_3e8 [32];
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined2 local_3b8;
  undefined1 local_3a8 [912];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  local_3b8 = 0xff00;
  local_3c0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_3c0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c0);
  }
  local_3c8 = 0;
  puVar1 = &local_3c0;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_3c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c8);
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
  FUN_142cd0d10(puVar1,local_3c8,puVar2);
  return;
}



// FUNCTION 142e39500 FUN_142e39500 body=288 status=ok
// SIG undefined FUN_142e39500(void)

void FUN_142e39500(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined2 local_10;
  
  local_10 = 0xff00;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res10 = 0;
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
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
  FUN_142cd0df0(puVar1,local_res10,&local_28);
  return;
}



// FUNCTION 142e39620 FUN_142e39620 body=53 status=ok
// SIG undefined FUN_142e39620(void)

void FUN_142e39620(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_14591f928;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e39670 FUN_142e39670 body=47 status=ok
// SIG undefined FUN_142e39670(void)

longlong FUN_142e39670(void)

{
  if (DAT_146b38fe8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b38fe8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f55c0);
  }
  return DAT_146b38fe8;
}



// FUNCTION 142e396a0 FUN_142e396a0 body=53 status=ok
// SIG undefined FUN_142e396a0(void)

void FUN_142e396a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x6e8;
    *puVar1 = &PTR_FUN_14591e680;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e396e0 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FButtonStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x278;
    *puVar1 = &PTR_FUN_14591e798;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e39720 FUN_142e39720 body=53 status=ok
// SIG undefined FUN_142e39720(void)

void FUN_142e39720(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_14591e8b0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e39760 FUN_142e39760 body=53 status=ok
// SIG undefined FUN_142e39760(void)

void FUN_142e39760(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_14591e9c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e397a0 FUN_142e397a0 body=53 status=ok
// SIG undefined FUN_142e397a0(void)

void FUN_142e397a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_14591eae0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e397e0 FUN_142e397e0 body=53 status=ok
// SIG undefined FUN_142e397e0(void)

void FUN_142e397e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_14591ebf8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142e39820 FUN_142e39820 body=53 status=ok
// SIG undefined FUN_142e39820(void)

void FUN_142e39820(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x208;
    *puVar1 = &PTR_FUN_14591ed10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142e39860 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FCS_LandingTrace_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xbc;
    *puVar1 = &PTR_FUN_14591ee28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142e398a0 FUN_142e398a0 body=53 status=ok
// SIG undefined FUN_142e398a0(void)

void FUN_142e398a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &PTR_FUN_14591ef40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142e398e0 FUN_142e398e0 body=53 status=ok
// SIG undefined FUN_142e398e0(void)

void FUN_142e398e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x3c;
    *puVar1 = &PTR_FUN_14591f058;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142e39920 FUN_142e39920 body=162 status=ok
// SIG undefined FUN_142e39920(void)

longlong FUN_142e39920(void)

{
  if (DAT_146b39238 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCharacterMovementComponent",&DAT_146b39238,
                  FUN_142e3d320,0x2680,0x10000004,0,L"Engine",&LAB_142e3ab80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMediaSoundComponent::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b39238;
}



// FUNCTION 142e399e0 FUN_142e399e0 body=53 status=ok
// SIG undefined FUN_142e399e0(void)

void FUN_142e399e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x160;
    *puVar1 = &PTR_FUN_14591e3d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e39a20 FUN_142e39a20 body=47 status=ok
// SIG undefined FUN_142e39a20(void)

longlong FUN_142e39a20(void)

{
  if (DAT_146b39000 == 0) {
    FUN_141786a30(&DAT_146b39000,&PTR_FUN_1466f5660);
  }
  return DAT_146b39000;
}



// FUNCTION 142e39a50 FUN_142e39a50 body=47 status=ok
// SIG undefined FUN_142e39a50(void)

longlong FUN_142e39a50(void)

{
  if (DAT_146b39230 == 0) {
    FUN_141786440(&DAT_146b39230,&PTR_FUN_14591b320);
  }
  return DAT_146b39230;
}



// FUNCTION 142e39a80 FUN_142e39a80 body=47 status=ok
// SIG undefined FUN_142e39a80(void)

longlong FUN_142e39a80(void)

{
  if (DAT_146b39050 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b39050,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466f5930);
  }
  return DAT_146b39050;
}



// FUNCTION 142e39ab0 FUN_142e39ab0 body=47 status=ok
// SIG undefined FUN_142e39ab0(void)

longlong FUN_142e39ab0(void)

{
  if (DAT_146b39098 == 0) {
    FUN_141786a30(&DAT_146b39098,&PTR_FUN_1466f5dd0);
  }
  return DAT_146b39098;
}



// FUNCTION 142e39ae0 FUN_142e39ae0 body=47 status=ok
// SIG undefined FUN_142e39ae0(void)

longlong FUN_142e39ae0(void)

{
  if (DAT_146b390a0 == 0) {
    FUN_141786a30(&DAT_146b390a0,&PTR_FUN_1466f5e60);
  }
  return DAT_146b390a0;
}



// FUNCTION 142e39b10 FUN_142e39b10 body=47 status=ok
// SIG undefined FUN_142e39b10(void)

longlong FUN_142e39b10(void)

{
  if (DAT_146b390a8 == 0) {
    FUN_141786a30(&DAT_146b390a8,&PTR_FUN_1466f60f0);
  }
  return DAT_146b390a8;
}



// FUNCTION 142e39b40 FUN_142e39b40 body=47 status=ok
// SIG undefined FUN_142e39b40(void)

longlong FUN_142e39b40(void)

{
  if (DAT_146b390b0 == 0) {
    FUN_141786a30(&DAT_146b390b0,&PTR_FUN_1466f63e0);
  }
  return DAT_146b390b0;
}



// FUNCTION 142e39b70 FUN_142e39b70 body=47 status=ok
// SIG undefined FUN_142e39b70(void)

longlong FUN_142e39b70(void)

{
  if (DAT_146b390b8 == 0) {
    FUN_141786a30(&DAT_146b390b8,&PTR_FUN_1466f6800);
  }
  return DAT_146b390b8;
}



// FUNCTION 142e39ba0 FUN_142e39ba0 body=47 status=ok
// SIG undefined FUN_142e39ba0(void)

longlong FUN_142e39ba0(void)

{
  if (DAT_146b390c0 == 0) {
    FUN_141786a30(&DAT_146b390c0,&PTR_FUN_1466f6940);
  }
  return DAT_146b390c0;
}



// FUNCTION 142e39bd0 FUN_142e39bd0 body=47 status=ok
// SIG undefined FUN_142e39bd0(void)

longlong FUN_142e39bd0(void)

{
  if (DAT_146b390c8 == 0) {
    FUN_141786a30(&DAT_146b390c8,&PTR_FUN_1466f6a10);
  }
  return DAT_146b390c8;
}



// FUNCTION 142e39c00 FUN_142e39c00 body=47 status=ok
// SIG undefined FUN_142e39c00(void)

longlong FUN_142e39c00(void)

{
  if (DAT_146b390d0 == 0) {
    FUN_141786a30(&DAT_146b390d0,&PTR_FUN_1466f6b10);
  }
  return DAT_146b390d0;
}



// FUNCTION 142e39c30 FUN_142e39c30 body=47 status=ok
// SIG undefined FUN_142e39c30(void)

longlong FUN_142e39c30(void)

{
  if (DAT_146b390d8 == 0) {
    FUN_141786a30(&DAT_146b390d8,&PTR_FUN_1466f6c10);
  }
  return DAT_146b390d8;
}



// FUNCTION 142e39c60 FUN_142e39c60 body=47 status=ok
// SIG undefined FUN_142e39c60(void)

longlong FUN_142e39c60(void)

{
  if (DAT_146b390e0 == 0) {
    FUN_141786a30(&DAT_146b390e0,&PTR_FUN_1466f6d10);
  }
  return DAT_146b390e0;
}



// FUNCTION 142e39c90 FUN_142e39c90 body=47 status=ok
// SIG undefined FUN_142e39c90(void)

longlong FUN_142e39c90(void)

{
  if (DAT_146b390e8 == 0) {
    FUN_141786a30(&DAT_146b390e8,&PTR_FUN_1466f6e10);
  }
  return DAT_146b390e8;
}



// FUNCTION 142e39cc0 FUN_142e39cc0 body=47 status=ok
// SIG undefined FUN_142e39cc0(void)

longlong FUN_142e39cc0(void)

{
  if (DAT_146b390f0 == 0) {
    FUN_141786a30(&DAT_146b390f0,&PTR_FUN_1466f6f10);
  }
  return DAT_146b390f0;
}



// FUNCTION 142e39cf0 FUN_142e39cf0 body=47 status=ok
// SIG undefined FUN_142e39cf0(void)

longlong FUN_142e39cf0(void)

{
  if (DAT_146b390f8 == 0) {
    FUN_141786a30(&DAT_146b390f8,&PTR_FUN_1466f6f90);
  }
  return DAT_146b390f8;
}



// FUNCTION 142e39d20 FUN_142e39d20 body=47 status=ok
// SIG undefined FUN_142e39d20(void)

longlong FUN_142e39d20(void)

{
  if (DAT_146b39100 == 0) {
    FUN_141786a30(&DAT_146b39100,&PTR_FUN_1466f7010);
  }
  return DAT_146b39100;
}



// FUNCTION 142e39d50 FUN_142e39d50 body=47 status=ok
// SIG undefined FUN_142e39d50(void)

longlong FUN_142e39d50(void)

{
  if (DAT_146b39108 == 0) {
    FUN_141786a30(&DAT_146b39108,&PTR_FUN_1466f7160);
  }
  return DAT_146b39108;
}



// FUNCTION 142e39d80 FUN_142e39d80 body=47 status=ok
// SIG undefined FUN_142e39d80(void)

longlong FUN_142e39d80(void)

{
  if (DAT_146b39110 == 0) {
    FUN_141786a30(&DAT_146b39110,&PTR_FUN_1466f71f0);
  }
  return DAT_146b39110;
}



// FUNCTION 142e39db0 FUN_142e39db0 body=47 status=ok
// SIG undefined FUN_142e39db0(void)

longlong FUN_142e39db0(void)

{
  if (DAT_146b39118 == 0) {
    FUN_141786a30(&DAT_146b39118,&PTR_FUN_1466f7280);
  }
  return DAT_146b39118;
}



// FUNCTION 142e39de0 FUN_142e39de0 body=47 status=ok
// SIG undefined FUN_142e39de0(void)

longlong FUN_142e39de0(void)

{
  if (DAT_146b39120 == 0) {
    FUN_141786a30(&DAT_146b39120,&PTR_FUN_1466f7310);
  }
  return DAT_146b39120;
}



// FUNCTION 142e39e10 FUN_142e39e10 body=47 status=ok
// SIG undefined FUN_142e39e10(void)

longlong FUN_142e39e10(void)

{
  if (DAT_146b39128 == 0) {
    FUN_141786a30(&DAT_146b39128,&PTR_FUN_1466f73a0);
  }
  return DAT_146b39128;
}



// FUNCTION 142e39e40 FUN_142e39e40 body=47 status=ok
// SIG undefined FUN_142e39e40(void)

longlong FUN_142e39e40(void)

{
  if (DAT_146b39130 == 0) {
    FUN_141786a30(&DAT_146b39130,&PTR_FUN_1466f7430);
  }
  return DAT_146b39130;
}



// FUNCTION 142e39e70 FUN_142e39e70 body=47 status=ok
// SIG undefined FUN_142e39e70(void)

longlong FUN_142e39e70(void)

{
  if (DAT_146b39138 == 0) {
    FUN_141786a30(&DAT_146b39138,&PTR_FUN_1466f74c0);
  }
  return DAT_146b39138;
}



// FUNCTION 142e39ea0 FUN_142e39ea0 body=47 status=ok
// SIG undefined FUN_142e39ea0(void)

longlong FUN_142e39ea0(void)

{
  if (DAT_146b39140 == 0) {
    FUN_141786a30(&DAT_146b39140,&PTR_FUN_1466f7550);
  }
  return DAT_146b39140;
}



// FUNCTION 142e39ed0 FUN_142e39ed0 body=47 status=ok
// SIG undefined FUN_142e39ed0(void)

longlong FUN_142e39ed0(void)

{
  if (DAT_146b39148 == 0) {
    FUN_141786a30(&DAT_146b39148,&PTR_FUN_1466f75e0);
  }
  return DAT_146b39148;
}



// FUNCTION 142e39f00 FUN_142e39f00 body=47 status=ok
// SIG undefined FUN_142e39f00(void)

longlong FUN_142e39f00(void)

{
  if (DAT_146b39150 == 0) {
    FUN_141786a30(&DAT_146b39150,&PTR_FUN_1466f76c0);
  }
  return DAT_146b39150;
}



// FUNCTION 142e39f30 FUN_142e39f30 body=47 status=ok
// SIG undefined FUN_142e39f30(void)

longlong FUN_142e39f30(void)

{
  if (DAT_146b39158 == 0) {
    FUN_141786a30(&DAT_146b39158,&PTR_FUN_1466f7750);
  }
  return DAT_146b39158;
}



// FUNCTION 142e39f60 FUN_142e39f60 body=47 status=ok
// SIG undefined FUN_142e39f60(void)

longlong FUN_142e39f60(void)

{
  if (DAT_146b39160 == 0) {
    FUN_141786a30(&DAT_146b39160,&PTR_FUN_1466f7810);
  }
  return DAT_146b39160;
}



// FUNCTION 142e39f90 FUN_142e39f90 body=47 status=ok
// SIG undefined FUN_142e39f90(void)

longlong FUN_142e39f90(void)

{
  if (DAT_146b39168 == 0) {
    FUN_141786a30(&DAT_146b39168,&PTR_FUN_1466f78d0);
  }
  return DAT_146b39168;
}



// FUNCTION 142e39fc0 FUN_142e39fc0 body=47 status=ok
// SIG undefined FUN_142e39fc0(void)

longlong FUN_142e39fc0(void)

{
  if (DAT_146b39170 == 0) {
    FUN_141786a30(&DAT_146b39170,&PTR_FUN_1466f7990);
  }
  return DAT_146b39170;
}



// FUNCTION 142e39ff0 FUN_142e39ff0 body=47 status=ok
// SIG undefined FUN_142e39ff0(void)

longlong FUN_142e39ff0(void)

{
  if (DAT_146b39178 == 0) {
    FUN_141786a30(&DAT_146b39178,&PTR_FUN_1466f7a50);
  }
  return DAT_146b39178;
}



// FUNCTION 142e3a020 FUN_142e3a020 body=47 status=ok
// SIG undefined FUN_142e3a020(void)

longlong FUN_142e3a020(void)

{
  if (DAT_146b39180 == 0) {
    FUN_141786a30(&DAT_146b39180,&PTR_FUN_1466f7b10);
  }
  return DAT_146b39180;
}



// FUNCTION 142e3a050 FUN_142e3a050 body=47 status=ok
// SIG undefined FUN_142e3a050(void)

longlong FUN_142e3a050(void)

{
  if (DAT_146b39188 == 0) {
    FUN_141786a30(&DAT_146b39188,&PTR_FUN_1466f7b90);
  }
  return DAT_146b39188;
}



// FUNCTION 142e3a080 FUN_142e3a080 body=47 status=ok
// SIG undefined FUN_142e3a080(void)

longlong FUN_142e3a080(void)

{
  if (DAT_146b39190 == 0) {
    FUN_141786a30(&DAT_146b39190,&PTR_FUN_1466f7c50);
  }
  return DAT_146b39190;
}



// FUNCTION 142e3a0b0 FUN_142e3a0b0 body=47 status=ok
// SIG undefined FUN_142e3a0b0(void)

longlong FUN_142e3a0b0(void)

{
  if (DAT_146b39198 == 0) {
    FUN_141786a30(&DAT_146b39198,&PTR_FUN_1466f7e10);
  }
  return DAT_146b39198;
}



// FUNCTION 142e3a0e0 FUN_142e3a0e0 body=47 status=ok
// SIG undefined FUN_142e3a0e0(void)

longlong FUN_142e3a0e0(void)

{
  if (DAT_146b391a0 == 0) {
    FUN_141786a30(&DAT_146b391a0,&PTR_FUN_1466f7f50);
  }
  return DAT_146b391a0;
}



// FUNCTION 142e3a110 FUN_142e3a110 body=47 status=ok
// SIG undefined FUN_142e3a110(void)

longlong FUN_142e3a110(void)

{
  if (DAT_146b391a8 == 0) {
    FUN_141786a30(&DAT_146b391a8,&PTR_FUN_1466f7f90);
  }
  return DAT_146b391a8;
}



// FUNCTION 142e3a140 FUN_142e3a140 body=47 status=ok
// SIG undefined FUN_142e3a140(void)

longlong FUN_142e3a140(void)

{
  if (DAT_146b391b0 == 0) {
    FUN_141786a30(&DAT_146b391b0,&PTR_FUN_1466f7fd0);
  }
  return DAT_146b391b0;
}



// FUNCTION 142e3a170 FUN_142e3a170 body=47 status=ok
// SIG undefined FUN_142e3a170(void)

longlong FUN_142e3a170(void)

{
  if (DAT_146b391b8 == 0) {
    FUN_141786a30(&DAT_146b391b8,&PTR_FUN_1466f8010);
  }
  return DAT_146b391b8;
}



// FUNCTION 142e3a1a0 FUN_142e3a1a0 body=47 status=ok
// SIG undefined FUN_142e3a1a0(void)

longlong FUN_142e3a1a0(void)

{
  if (DAT_146b391c0 == 0) {
    FUN_141786a30(&DAT_146b391c0,&PTR_FUN_1466f8090);
  }
  return DAT_146b391c0;
}



// FUNCTION 142e3a1d0 FUN_142e3a1d0 body=47 status=ok
// SIG undefined FUN_142e3a1d0(void)

longlong FUN_142e3a1d0(void)

{
  if (DAT_146b391c8 == 0) {
    FUN_141786a30(&DAT_146b391c8,&PTR_FUN_1466f8150);
  }
  return DAT_146b391c8;
}



// FUNCTION 142e3a200 FUN_142e3a200 body=47 status=ok
// SIG undefined FUN_142e3a200(void)

longlong FUN_142e3a200(void)

{
  if (DAT_146b391d0 == 0) {
    FUN_141786a30(&DAT_146b391d0,&PTR_FUN_1466f81d0);
  }
  return DAT_146b391d0;
}



// FUNCTION 142e3a230 FUN_142e3a230 body=47 status=ok
// SIG undefined FUN_142e3a230(void)

longlong FUN_142e3a230(void)

{
  if (DAT_146b391d8 == 0) {
    FUN_141786a30(&DAT_146b391d8,&PTR_FUN_1466f8210);
  }
  return DAT_146b391d8;
}



// FUNCTION 142e3a260 FUN_142e3a260 body=47 status=ok
// SIG undefined FUN_142e3a260(void)

longlong FUN_142e3a260(void)

{
  if (DAT_146b391e0 == 0) {
    FUN_141786a30(&DAT_146b391e0,&PTR_FUN_1466f82a0);
  }
  return DAT_146b391e0;
}



// FUNCTION 142e3a290 FUN_142e3a290 body=47 status=ok
// SIG undefined FUN_142e3a290(void)

longlong FUN_142e3a290(void)

{
  if (DAT_146b391e8 == 0) {
    FUN_141786a30(&DAT_146b391e8,&PTR_FUN_1466f83a0);
  }
  return DAT_146b391e8;
}



// FUNCTION 142e3a2c0 FUN_142e3a2c0 body=47 status=ok
// SIG undefined FUN_142e3a2c0(void)

longlong FUN_142e3a2c0(void)

{
  if (DAT_146b391f0 == 0) {
    FUN_141786a30(&DAT_146b391f0,&PTR_FUN_1466f8470);
  }
  return DAT_146b391f0;
}



// FUNCTION 142e3a2f0 FUN_142e3a2f0 body=47 status=ok
// SIG undefined FUN_142e3a2f0(void)

longlong FUN_142e3a2f0(void)

{
  if (DAT_146b391f8 == 0) {
    FUN_141786a30(&DAT_146b391f8,&PTR_FUN_1466f84f0);
  }
  return DAT_146b391f8;
}



// FUNCTION 142e3a320 FUN_142e3a320 body=47 status=ok
// SIG undefined FUN_142e3a320(void)

longlong FUN_142e3a320(void)

{
  if (DAT_146b39200 == 0) {
    FUN_141786a30(&DAT_146b39200,&PTR_FUN_1466f8740);
  }
  return DAT_146b39200;
}



// FUNCTION 142e3a350 FUN_142e3a350 body=47 status=ok
// SIG undefined FUN_142e3a350(void)

longlong FUN_142e3a350(void)

{
  if (DAT_146b39208 == 0) {
    FUN_141786a30(&DAT_146b39208,&PTR_FUN_1466f87c0);
  }
  return DAT_146b39208;
}



// FUNCTION 142e3a380 FUN_142e3a380 body=47 status=ok
// SIG undefined FUN_142e3a380(void)

longlong FUN_142e3a380(void)

{
  if (DAT_146b39210 == 0) {
    FUN_141786a30(&DAT_146b39210,&PTR_FUN_1466f8840);
  }
  return DAT_146b39210;
}



// FUNCTION 142e3a3b0 FUN_142e3a3b0 body=47 status=ok
// SIG undefined FUN_142e3a3b0(void)

longlong FUN_142e3a3b0(void)

{
  if (DAT_146b39218 == 0) {
    FUN_141786a30(&DAT_146b39218,&PTR_FUN_1466f8970);
  }
  return DAT_146b39218;
}



// FUNCTION 142e3a3e0 FUN_142e3a3e0 body=47 status=ok
// SIG undefined FUN_142e3a3e0(void)

longlong FUN_142e3a3e0(void)

{
  if (DAT_146b39220 == 0) {
    FUN_141786a30(&DAT_146b39220,&PTR_FUN_1466f8a50);
  }
  return DAT_146b39220;
}



// FUNCTION 142e3a410 FUN_142e3a410 body=47 status=ok
// SIG undefined FUN_142e3a410(void)

longlong FUN_142e3a410(void)

{
  if (DAT_146b39228 == 0) {
    FUN_141786a30(&DAT_146b39228,&PTR_FUN_1466f8a90);
  }
  return DAT_146b39228;
}



// FUNCTION 142e3a440 FUN_142e3a440 body=53 status=ok
// SIG undefined FUN_142e3a440(void)

void FUN_142e3a440(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &PTR_FUN_14591f3b0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e3a480 FUN_142e3a480 body=47 status=ok
// SIG undefined FUN_142e3a480(void)

longlong FUN_142e3a480(void)

{
  if (DAT_146b38f08 == 0) {
    FUN_141786440(&DAT_146b38f08,&PTR_LAB_14591d8e0);
  }
  return DAT_146b38f08;
}



// FUNCTION 142e3a4b0 FUN_142e3a4b0 body=47 status=ok
// SIG undefined FUN_142e3a4b0(void)

longlong FUN_142e3a4b0(void)

{
  if (DAT_146b38ef8 == 0) {
    FUN_141786a30(&DAT_146b38ef8,&PTR_FUN_1466f2860);
  }
  return DAT_146b38ef8;
}



// FUNCTION 142e3a4e0 FUN_142e3a4e0 body=47 status=ok
// SIG undefined FUN_142e3a4e0(void)

longlong FUN_142e3a4e0(void)

{
  if (DAT_146b38f00 == 0) {
    FUN_141786a30(&DAT_146b38f00,&PTR_FUN_1466f2910);
  }
  return DAT_146b38f00;
}



// FUNCTION 142e3a510 FUN_142e3a510 body=53 status=ok
// SIG undefined FUN_142e3a510(void)

void FUN_142e3a510(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &PTR_FUN_14591f4c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e3a550 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x6d0;
    *puVar1 = &PTR_FUN_14591e2a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 142e3a590 FUN_142e3a590 body=53 status=ok
// SIG undefined FUN_142e3a590(void)

void FUN_142e3a590(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &PTR_FUN_14591f5e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e3a5d0 FUN_142e3a5d0 body=53 status=ok
// SIG undefined FUN_142e3a5d0(void)

void FUN_142e3a5d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x140;
    *puVar1 = &PTR_FUN_14591f6f8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e3a610 FUN_142e3a610 body=53 status=ok
// SIG undefined FUN_142e3a610(void)

void FUN_142e3a610(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x138;
    *puVar1 = &PTR_FUN_14591f810;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e3a650 FUN_142e3a650 body=625 status=ok
// SIG undefined FUN_142e3a650(void)

int * FUN_142e3a650(longlong *param_1,int *param_2,uint *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar11 = *(int *)((longlong)iVar12 * 0x20 + 4 + *param_1);
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar11;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)((longlong)iVar11 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar12;
  lVar7 = (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar14 = (uint *)((longlong)plVar8 + lVar7);
  *puVar14 = *puVar14 | 1 << ((byte)iVar12 & 0x1f);
  uVar6 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  lVar9 = (longlong)iVar12 * 0x20;
  puVar14 = (uint *)(*param_1 + lVar9);
  *puVar14 = *param_3;
  puVar14[1] = uVar6;
  puVar14[2] = uVar3;
  puVar14[3] = uVar4;
  bVar16 = false;
  *(undefined8 *)(puVar14 + 4) = *(undefined8 *)(param_3 + 4);
  puVar14[6] = 0xffffffff;
  iVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar13 != 1) {
    iVar11 = iVar15;
    if (iVar13 != 0) {
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar8 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar14) * 4);
      if (iVar10 != -1) {
        do {
          iVar11 = iVar10;
          if (*(uint *)((longlong)iVar10 * 0x20 + *param_1) == *puVar14) break;
          iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *param_1);
          iVar11 = iVar15;
        } while (iVar10 != -1);
      }
    }
    bVar16 = iVar11 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar11 * 0x20 + *param_1),puVar14,0x18);
      bVar2 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar12;
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar9 + lVar1) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar9 + 4 + lVar1) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar8 + lVar7);
      *puVar14 = *puVar14 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_142e3a897;
    }
  }
  cVar5 = TSet<TTuple<FPolygonID,FOctreeElementId>,TDefaultMapHashableKeyFuncs<FPolygonID,FOctreeElementId,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar13,0);
  if (cVar5 == '\0') {
    uVar6 = (int)param_1[9] - 1U & *puVar14;
    puVar14[7] = uVar6;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    puVar14[6] = *(uint *)((longlong)plVar8 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_142e3a897:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 142e3a8d0 FUN_142e3a8d0 body=649 status=ok
// SIG undefined FUN_142e3a8d0(void)

int * FUN_142e3a8d0(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  void *_Dst;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  bool local_res8;
  
  uVar8 = 0xffffffff;
  iVar7 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar6 = *(int *)((longlong)iVar10 * 0xa0 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar6 * 0xa0 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar11 = (uint *)((longlong)plVar5 +
                    (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar11 = *puVar11 | 1 << ((byte)iVar10 & 0x1f);
  puVar11 = (uint *)((longlong)iVar10 * 0xa0 + *param_1);
  FUN_142e3aba0(puVar11,param_3);
  puVar11[0x26] = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (iVar10 != 1) {
    iVar6 = iVar7;
    if (iVar10 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar11) * 4);
      if (iVar3 != -1) {
        do {
          iVar6 = iVar3;
          if (*(uint *)((longlong)iVar3 * 0xa0 + *param_1) == *puVar11) break;
          iVar3 = *(int *)((longlong)iVar3 * 0xa0 + 0x98 + *param_1);
          iVar6 = iVar7;
        } while (iVar3 != -1);
      }
    }
    local_res8 = iVar6 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar6 * 0xa0 + *param_1);
      FRichCurve::~FRichCurve((longlong)_Dst + 0x28);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar11,0x98);
      iVar7 = *param_2;
      bVar1 = (byte)iVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0xa0 + *param_1) = iVar7;
      }
      puVar4 = (undefined4 *)((longlong)iVar7 * 0xa0 + *param_1);
      *puVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar8 = (undefined4)param_1[6];
      }
      puVar4[1] = uVar8;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar7;
      plVar5 = (longlong *)param_1[4];
      *param_2 = iVar6;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar11 = (uint *)((longlong)plVar5 +
                        (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar11 = *puVar11 & ~(1 << bVar1 | 1U >> 0x20 - bVar1);
      goto LAB_142e3ab35;
    }
  }
  cVar2 = TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar2 == '\0') {
    uVar9 = (int)param_1[9] - 1U & *puVar11;
    puVar11[0x27] = uVar9;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar11[0x26] =
         *(uint *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_142e3ab35:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142e3aba0 FUN_142e3aba0 body=226 status=ok
// SIG undefined FUN_142e3aba0(void)

undefined4 * FUN_142e3aba0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  uVar2 = param_2[3];
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  uVar4 = param_2[9];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  param_1[9] = uVar4;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  *(undefined ***)(param_1 + 10) = &PTR_FUN_14413ebc8;
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)((longlong)param_2 + 0x81);
  param_1[0x21] = param_2[0x21];
  *(undefined8 *)(param_1 + 0x22) = 0;
  iVar1 = param_2[0x24];
  _Src = *(void **)(param_2 + 0x22);
  param_1[0x24] = iVar1;
  if (iVar1 == 0) {
    param_1[0x25] = 0;
  }
  else {
    TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(param_1 + 0x22,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x22),_Src,(longlong)iVar1 * 0x1c);
  }
  return param_1;
}



// FUNCTION 142e3ac90 FUN_142e3ac90 body=174 status=ok
// SIG undefined FUN_142e3ac90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142e3ac90(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0xffff;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[4] = &PTR_FUN_14413ebc8;
  *(undefined2 *)(param_1 + 0xf) = 0x404;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x7f7fffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xb4) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0xbc) = DAT_1468b5d98;
  FRichCurve::Reset();
  return param_1;
}



// FUNCTION 142e3ad40 FUN_142e3ad40 body=118 status=ok
// SIG undefined FUN_142e3ad40(void)

void FUN_142e3ad40(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xe);
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  FUN_142e3cb00(param_1,0);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142e3adc0 FUN_142e3adc0 body=502 status=ok
// SIG undefined FUN_142e3adc0(void)

longlong * FUN_142e3adc0(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = TSet<TTuple<FPolygonID,FOctreeElementId>,TDefaultMapHashableKeyFuncs<FPolygonID,FOctreeElementId,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
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
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_142e3af1b;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_142e3af1b:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        FUN_142e3a650(param_1,local_res8,(longlong)iStack_4c * 0x20 + *param_2,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 142e3afc0 operator= body=469 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

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
    FUN_142e3cb00(param_1,iVar9);
    cVar3 = ConditionalRehash(param_1,iVar9);
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_142e3b0fd;
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
LAB_142e3b0fd:
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
        FUN_142e3a8d0(param_1,local_res8,(longlong)iStack_3c * 0xa0 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 142e3b1a0 FUN_142e3b1a0 body=256 status=ok
// SIG undefined FUN_142e3b1a0(void)

undefined4 * FUN_142e3b1a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  FRichCurve::operator=(param_1 + 6,param_2 + 6);
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  FRichCurve::operator=(param_1 + 0x24,param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x42) = *(undefined8 *)(param_2 + 0x42);
  param_1[0x44] = param_2[0x44];
  *(undefined8 *)(param_1 + 0x45) = *(undefined8 *)(param_2 + 0x45);
  param_1[0x47] = param_2[0x47];
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  param_1[0x4a] = param_2[0x4a];
  *(undefined8 *)(param_1 + 0x4b) = *(undefined8 *)(param_2 + 0x4b);
  param_1[0x4d] = param_2[0x4d];
  return param_1;
}



// FUNCTION 142e3b2a0 FUN_142e3b2a0 body=972 status=ok
// SIG undefined FUN_142e3b2a0(void)

undefined8 * FUN_142e3b2a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined8 *)((longlong)param_1 + 0x5c) = *(undefined8 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  uVar1 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar1;
  uVar1 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar1;
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined8 *)((longlong)param_1 + 0x9c) = *(undefined8 *)((longlong)param_2 + 0x9c);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
  param_1[0x15] = param_2[0x15];
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined8 *)((longlong)param_1 + 0xb4) = *(undefined8 *)((longlong)param_2 + 0xb4);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)((longlong)param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  *(undefined8 *)((longlong)param_1 + 0xcc) = *(undefined8 *)((longlong)param_2 + 0xcc);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_2 + 0xd4);
  param_1[0x1b] = param_2[0x1b];
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined8 *)((longlong)param_1 + 0xe4) = *(undefined8 *)((longlong)param_2 + 0xe4);
  *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)((longlong)param_2 + 0xec);
  param_1[0x1e] = param_2[0x1e];
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  *(undefined4 *)((longlong)param_1 + 0xfc) = *(undefined4 *)((longlong)param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  if ((undefined4 *)((longlong)param_2 + 0x104) != (undefined4 *)((longlong)param_1 + 0x104)) {
    if (*(char *)(param_1 + 0x21) != '\0') {
      *(undefined1 *)(param_1 + 0x21) = 0;
    }
    if (*(char *)(param_2 + 0x21) != '\0') {
      *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)((longlong)param_2 + 0x104);
      *(undefined1 *)(param_1 + 0x21) = 1;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x10c) = *(undefined4 *)((longlong)param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
  *(undefined8 *)((longlong)param_1 + 0x114) = *(undefined8 *)((longlong)param_2 + 0x114);
  *(undefined4 *)((longlong)param_1 + 0x11c) = *(undefined4 *)((longlong)param_2 + 0x11c);
  param_1[0x24] = param_2[0x24];
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  param_1[0x26] = param_2[0x26];
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x27);
  *(undefined4 *)((longlong)param_1 + 0x13c) = *(undefined4 *)((longlong)param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x144) = *(undefined8 *)((longlong)param_2 + 0x144);
  *(undefined4 *)((longlong)param_1 + 0x14c) = *(undefined4 *)((longlong)param_2 + 0x14c);
  param_1[0x2a] = param_2[0x2a];
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
  *(uint *)((longlong)param_1 + 0x15c) =
       *(uint *)((longlong)param_1 + 0x15c) ^
       (*(uint *)((longlong)param_1 + 0x15c) ^ *(uint *)((longlong)param_2 + 0x15c)) & 1;
  uVar2 = (*(uint *)((longlong)param_1 + 0x15c) ^ *(uint *)((longlong)param_2 + 0x15c)) & 2 ^
          *(uint *)((longlong)param_1 + 0x15c);
  *(uint *)((longlong)param_1 + 0x15c) = uVar2;
  uVar2 = (uVar2 ^ *(uint *)((longlong)param_2 + 0x15c)) & 4 ^ uVar2;
  *(uint *)((longlong)param_1 + 0x15c) = uVar2;
  uVar2 = (uVar2 ^ *(uint *)((longlong)param_2 + 0x15c)) & 8 ^ uVar2;
  *(uint *)((longlong)param_1 + 0x15c) = uVar2;
  uVar2 = (uVar2 ^ *(uint *)((longlong)param_2 + 0x15c)) & 0x10 ^ uVar2;
  *(uint *)((longlong)param_1 + 0x15c) = uVar2;
  uVar2 = (uVar2 ^ *(uint *)((longlong)param_2 + 0x15c)) & 0x20 ^ uVar2;
  *(uint *)((longlong)param_1 + 0x15c) = uVar2;
  uVar2 = (uVar2 ^ *(uint *)((longlong)param_2 + 0x15c)) & 0x40 ^ uVar2;
  *(uint *)((longlong)param_1 + 0x15c) = uVar2;
  uVar2 = (uVar2 ^ *(uint *)((longlong)param_2 + 0x15c)) & 0x80 ^ uVar2;
  *(uint *)((longlong)param_1 + 0x15c) = uVar2;
  uVar2 = (uVar2 ^ *(uint *)((longlong)param_2 + 0x15c)) & 0x100 ^ uVar2;
  *(uint *)((longlong)param_1 + 0x15c) = uVar2;
  uVar2 = (uVar2 ^ *(uint *)((longlong)param_2 + 0x15c)) & 0x200 ^ uVar2;
  *(uint *)((longlong)param_1 + 0x15c) = uVar2;
  uVar2 = (uVar2 ^ *(uint *)((longlong)param_2 + 0x15c)) & 0x400 ^ uVar2;
  *(uint *)((longlong)param_1 + 0x15c) = uVar2;
  *(uint *)((longlong)param_1 + 0x15c) =
       (uVar2 ^ *(uint *)((longlong)param_2 + 0x15c)) & 0x800 ^ uVar2;
  return param_1;
}



// FUNCTION 142e3b670 FUN_142e3b670 body=112 status=ok
// SIG undefined FUN_142e3b670(void)

undefined8 * FUN_142e3b670(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0xb);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0xb) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar3;
  param_1[0xc] = param_2[0xc];
  FUN_142cb3ac0(param_1 + 0xd,param_2 + 0xd);
  *(undefined1 *)(param_1 + 0x4e) = *(undefined1 *)(param_2 + 0x4e);
  return param_1;
}



// FUNCTION 142e3b6e0 FUN_142e3b6e0 body=176 status=ok
// SIG undefined FUN_142e3b6e0(void)

void FUN_142e3b6e0(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9,undefined1 param_10)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  
  local_38 = *(undefined4 *)(param_4 + 1);
  local_50 = *param_3;
  uStack_48 = param_3[1];
  lVar1 = *param_1;
  local_34 = *param_5;
  local_2c = *(undefined4 *)(param_5 + 1);
  local_40 = *param_4;
  local_28 = param_6;
  local_20 = param_7;
  local_18 = param_8;
  local_17 = param_9;
  local_16 = param_10;
  local_58[0] = param_2;
  uVar2 = FUN_14178ac60((int)local_34,DAT_146b38ea8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_58);
  return;
}



// FUNCTION 142e3b790 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
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
      FUN_142cfd950(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142e3b850 FUN_142e3b850 body=39 status=ok
// SIG undefined FUN_142e3b850(void)

void FUN_142e3b850(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x140);
  FUN_142cdd1c0((longlong)param_2 + 8);
  return;
}



// FUNCTION 142e3b880 FUN_142e3b880 body=56 status=ok
// SIG undefined FUN_142e3b880(void)

void FUN_142e3b880(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_1424b51c0(param_2 + 0xd);
  uVar1 = *param_2;
  _guard_xfg_dispatch_icall_nop(param_2 + 1,0,0x158);
  *param_2 = uVar1;
  return;
}



// FUNCTION 142e3b8c0 FUN_142e3b8c0 body=56 status=ok
// SIG undefined FUN_142e3b8c0(void)

void FUN_142e3b8c0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x70);
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined4 *)((longlong)param_2 + 0x48) = 0;
  return;
}



// FUNCTION 142e3b980 FUN_142e3b980 body=44 status=ok
// SIG undefined FUN_142e3b980(void)

void FUN_142e3b980(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  FUN_142cb2450(param_2 + 4);
  FUN_142cb2450(param_2 + 0x40);
  FUN_142cb2450(param_2 + 0x7c);
  return;
}



// FUNCTION 142e3b9b0 FUN_142e3b9b0 body=52 status=ok
// SIG undefined FUN_142e3b9b0(void)

void FUN_142e3b9b0(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  FUN_142cb2450(param_2 + 4);
  FUN_142cb2450(param_2 + 0x40);
  FUN_142cb2450(param_2 + 0x7c);
  param_2[0xb8] = 0;
  return;
}



// FUNCTION 142e3ba10 FUN_142e3ba10 body=62 status=ok
// SIG undefined FUN_142e3ba10(void)

void FUN_142e3ba10(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop((void *)((longlong)param_2 + 0x68),0,0x210);
  _guard_xfg_dispatch_icall_nop(param_2,0,0x68);
  FUN_142cb2330((longlong)param_2 + 0x68);
  *(undefined1 *)((longlong)param_2 + 0x270) = 0;
  return;
}



// FUNCTION 142e3ba80 FUN_142e3ba80 body=109 status=ok
// SIG undefined FUN_142e3ba80(void)

void FUN_142e3ba80(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0xc0);
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined4 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined4 *)((longlong)param_2 + 0xa0) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_2 + 0xb8) = 0;
  return;
}



// FUNCTION 142e3baf0 FUN_142e3baf0 body=196 status=ok
// SIG undefined FUN_142e3baf0(void)

void FUN_142e3baf0(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined2 param_12)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  
  local_4c = *(undefined4 *)(param_3 + 1);
  local_54 = *param_3;
  lVar1 = *param_1;
  local_40 = *(undefined4 *)(param_4 + 1);
  local_3c = param_5;
  local_3b = param_6;
  local_38 = param_7;
  local_48 = *param_4;
  local_30 = param_8;
  local_28 = param_9;
  local_20 = param_10;
  local_1c = param_11;
  local_18 = param_12;
  local_58 = param_2;
  uVar2 = FUN_14178ac60(local_48,DAT_146b38eb0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_58);
  return;
}



// FUNCTION 142e3bbc0 FUN_142e3bbc0 body=274 status=ok
// SIG undefined FUN_142e3bbc0(void)

void FUN_142e3bbc0(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined1 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
                  undefined2 param_17)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined4 local_14;
  undefined2 local_10;
  
  local_5c = *(undefined4 *)(param_3 + 1);
  local_64 = *param_3;
  lVar1 = *param_1;
  local_54 = param_5;
  local_50 = param_6;
  local_4c = param_7;
  local_48 = *param_8;
  local_40 = *(undefined4 *)(param_8 + 1);
  local_3c = *param_9;
  local_34 = *(undefined4 *)(param_9 + 1);
  local_30 = param_10;
  local_2f = param_11;
  local_2c = param_12;
  local_28 = param_13;
  local_20 = param_14;
  local_18 = param_15;
  local_14 = param_16;
  local_10 = param_17;
  local_68 = param_2;
  local_58 = param_4;
  uVar2 = FUN_14178ac60(local_3c,DAT_146b38eb8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_68);
  return;
}



// FUNCTION 142e3bce0 FUN_142e3bce0 body=94 status=ok
// SIG undefined FUN_142e3bce0(void)

void FUN_142e3bce0(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  
  local_1c = *(undefined4 *)(param_3 + 1);
  local_24 = *param_3;
  lVar1 = *param_1;
  local_14 = param_5;
  local_28 = param_2;
  local_18 = param_4;
  uVar2 = FUN_14178ac60(local_24,DAT_146b38ec0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  return;
}



// FUNCTION 142e3bd40 FUN_142e3bd40 body=262 status=ok
// SIG undefined FUN_142e3bd40(void)

undefined8 FUN_142e3bd40(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x100);
    do {
      *(undefined4 *)(puVar1 + -0x20) = *(undefined4 *)(param_3 + -0x100 + (longlong)puVar1);
      *(undefined4 *)((longlong)puVar1 + -0xfc) =
           *(undefined4 *)(param_3 + -0xfc + (longlong)puVar1);
      *(undefined4 *)(puVar1 + -0x1f) = *(undefined4 *)(param_3 + -0xf8 + (longlong)puVar1);
      puVar1[-0x1e] = *(undefined8 *)(param_3 + -0xf0 + (longlong)puVar1);
      FRichCurve::operator=(puVar1 + -0x1d,param_3 + -0xe8 + (longlong)puVar1);
      puVar1[-0xf] = *(undefined8 *)(param_3 + -0x78 + (longlong)puVar1);
      FRichCurve::operator=(puVar1 + -0xe,param_3 + -0x70 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_3 + 0x10 + (longlong)puVar1);
      *(undefined8 *)((longlong)puVar1 + 0x14) = *(undefined8 *)(param_3 + 0x14 + (longlong)puVar1);
      *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c + (longlong)puVar1);
      puVar1[4] = *(undefined8 *)(param_3 + 0x20 + (longlong)puVar1);
      *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_3 + 0x28 + (longlong)puVar1);
      *(undefined8 *)((longlong)puVar1 + 0x2c) = *(undefined8 *)(param_3 + 0x2c + (longlong)puVar1);
      *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)(param_3 + 0x34 + (longlong)puVar1);
      puVar1 = puVar1 + 0x27;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e3be50 FUN_142e3be50 body=90 status=ok
// SIG undefined FUN_142e3be50(void)

undefined8 FUN_142e3be50(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 8;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8 + param_2);
      *(undefined4 *)(param_2 + -4) = *(undefined4 *)(param_3 + -4 + param_2);
      FUN_142e3b1a0(param_2,param_3 + param_2);
      param_2 = param_2 + 0x140;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e3beb0 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FGPUSpriteResourceData>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_142e3b2a0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x160;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e3bf00 FUN_142e3bf00 body=136 status=ok
// SIG undefined FUN_142e3bf00(void)

undefined8 FUN_142e3bf00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x5c);
    do {
      TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
      ::operator=(puVar1 + -0x17,param_3 + -0x5c + (longlong)puVar1);
      *(undefined8 *)(puVar1 + -3) = *(undefined8 *)(param_3 + -0xc + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined4 *)(param_3 + 4 + (longlong)puVar1);
      puVar1[2] = *(undefined4 *)(param_3 + 8 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_3 + 0xc + (longlong)puVar1);
      puVar1 = puVar1 + 0x1c;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e3bf90 FUN_142e3bf90 body=112 status=ok
// SIG undefined FUN_142e3bf90(void)

undefined8 FUN_142e3bf90(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x6c0);
    do {
      FUN_14084cff0(puVar1 + -0xd8,param_3 + -0x6c0 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + -1) = *(undefined1 *)(param_3 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      puVar1 = puVar1 + 0xda;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e3c000 FUN_142e3c000 body=256 status=ok
// SIG undefined FUN_142e3c000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142e3c000(undefined8 param_1,undefined1 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  uVar7 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if (param_4 != 0) {
    puVar8 = (undefined8 *)(param_3 + 4);
    local_18 = uVar7;
    do {
      *param_2 = *(undefined1 *)((longlong)puVar8 + -4);
      puVar1 = (undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 4) = *puVar8;
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(puVar8 + 1);
      plVar5 = *(longlong **)((longlong)puVar8 + 0x14);
      uVar6 = *(undefined8 *)((longlong)puVar8 + 0xc);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
      }
      local_38 = uVar6;
      plStack_30 = plVar5;
      if (&local_38 != puVar1) {
        local_38 = *puVar1;
        plStack_30 = *(longlong **)(param_2 + 0x18);
        *puVar1 = uVar6;
        *(longlong **)(param_2 + 0x18) = plVar5;
        local_28 = uVar6;
        plStack_20 = plVar5;
      }
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plStack_30 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
      puVar3 = (undefined1 *)((longlong)puVar8 + 0x1c);
      uVar7 = 0;
      puVar8 = puVar8 + 5;
      param_2[0x20] = *puVar3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x28;
    } while (param_4 != 0);
  }
  return CONCAT71((int7)(uVar7 >> 8),1);
}



// FUNCTION 142e3c100 FUN_142e3c100 body=375 status=ok
// SIG undefined FUN_142e3c100(void)

undefined8 FUN_142e3c100(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x58);
    do {
      *(undefined1 *)(puVar1 + -0xb) = *(undefined1 *)((longlong)puVar1 + param_3 + -0x58);
      *(undefined8 *)((longlong)puVar1 + -0x54) =
           *(undefined8 *)((longlong)puVar1 + param_3 + -0x54);
      *(undefined4 *)((longlong)puVar1 + -0x4c) =
           *(undefined4 *)((longlong)puVar1 + param_3 + -0x4c);
      puVar1[-9] = *(undefined8 *)((longlong)puVar1 + param_3 + -0x48);
      *(undefined4 *)(puVar1 + -8) = *(undefined4 *)((longlong)puVar1 + param_3 + -0x40);
      *(undefined8 *)((longlong)puVar1 + -0x3c) =
           *(undefined8 *)((longlong)puVar1 + param_3 + -0x3c);
      *(undefined4 *)((longlong)puVar1 + -0x34) =
           *(undefined4 *)((longlong)puVar1 + param_3 + -0x34);
      puVar1[-6] = *(undefined8 *)((longlong)puVar1 + param_3 + -0x30);
      *(undefined4 *)(puVar1 + -5) = *(undefined4 *)((longlong)puVar1 + param_3 + -0x28);
      *(undefined8 *)((longlong)puVar1 + -0x24) =
           *(undefined8 *)((longlong)puVar1 + param_3 + -0x24);
      *(undefined4 *)((longlong)puVar1 + -0x1c) =
           *(undefined4 *)((longlong)puVar1 + param_3 + -0x1c);
      puVar1[-3] = *(undefined8 *)((longlong)puVar1 + param_3 + -0x18);
      *(undefined4 *)(puVar1 + -2) = *(undefined4 *)((longlong)puVar1 + param_3 + -0x10);
      *(undefined8 *)((longlong)puVar1 + -0xc) = *(undefined8 *)((longlong)puVar1 + param_3 + -0xc);
      *(undefined4 *)((longlong)puVar1 + -4) = *(undefined4 *)((longlong)puVar1 + param_3 + -4);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 8 + (longlong)puVar1);
      *(undefined8 *)((longlong)puVar1 + 0xc) = *(undefined8 *)((longlong)puVar1 + param_3 + 0xc);
      *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)((longlong)puVar1 + param_3 + 0x14);
      puVar1[3] = *(undefined8 *)((longlong)puVar1 + param_3 + 0x18);
      *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((longlong)puVar1 + param_3 + 0x20);
      *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)((longlong)puVar1 + param_3 + 0x24);
      *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_3 + 0x28 + (longlong)puVar1);
      *(byte *)((longlong)puVar1 + 0x2c) =
           *(byte *)((longlong)puVar1 + 0x2c) ^
           (*(byte *)((longlong)puVar1 + param_3 + 0x2c) ^ *(byte *)((longlong)puVar1 + 0x2c)) & 1;
      *(byte *)(puVar1 + 6) =
           *(byte *)(puVar1 + 6) ^
           (*(byte *)((longlong)puVar1 + param_3 + 0x30) ^ *(byte *)(puVar1 + 6)) & 1;
      FUN_142cb3c20((longlong)puVar1 + 0x34,param_3 + 0x34 + (longlong)puVar1);
      *(undefined1 *)((longlong)puVar1 + 0xec) = *(undefined1 *)((longlong)puVar1 + param_3 + 0xec);
      FUN_142cb3c20(puVar1 + 0x1e,param_3 + 0xf0 + (longlong)puVar1);
      puVar1[0x35] = *(undefined8 *)((longlong)puVar1 + param_3 + 0x1a8);
      puVar1 = puVar1 + 0x41;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e3c470 FUN_142e3c470 body=88 status=ok
// SIG undefined FUN_142e3c470(void)

undefined8 FUN_142e3c470(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      FUN_142cb3c20(param_2,param_3 + param_2);
      *(undefined1 *)(param_2 + 0xb8) = *(undefined1 *)(param_3 + 0xb8 + param_2);
      param_2 = param_2 + 0xbc;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e3c560 FUN_142e3c560 body=313 status=ok
// SIG undefined FUN_142e3c560(void)

undefined8 FUN_142e3c560(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte *pbVar6;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    pbVar6 = (byte *)(param_2 + 0x18);
    do {
      *(undefined8 *)(pbVar6 + -0x18) = *(undefined8 *)(pbVar6 + param_3 + -0x18);
      *(undefined8 *)(pbVar6 + -0x10) = *(undefined8 *)(pbVar6 + param_3 + -0x10);
      *(undefined8 *)(pbVar6 + -8) = *(undefined8 *)(pbVar6 + param_3 + -8);
      *pbVar6 = *pbVar6 ^ (pbVar6[param_3] ^ *pbVar6) & 1;
      bVar5 = (pbVar6[param_3] ^ *pbVar6) & 2 ^ *pbVar6;
      *pbVar6 = bVar5;
      bVar5 = (pbVar6[param_3] ^ bVar5) & 4 ^ bVar5;
      *pbVar6 = bVar5;
      *pbVar6 = (pbVar6[param_3] ^ bVar5) & 8 ^ bVar5;
      pbVar1 = pbVar6 + param_3 + 8;
      uVar2 = *(undefined4 *)(pbVar1 + 4);
      uVar3 = *(undefined4 *)(pbVar1 + 8);
      uVar4 = *(undefined4 *)(pbVar1 + 0xc);
      *(undefined4 *)(pbVar6 + 8) = *(undefined4 *)pbVar1;
      *(undefined4 *)(pbVar6 + 0xc) = uVar2;
      *(undefined4 *)(pbVar6 + 0x10) = uVar3;
      *(undefined4 *)(pbVar6 + 0x14) = uVar4;
      pbVar1 = pbVar6 + param_3 + 0x18;
      uVar2 = *(undefined4 *)(pbVar1 + 4);
      uVar3 = *(undefined4 *)(pbVar1 + 8);
      uVar4 = *(undefined4 *)(pbVar1 + 0xc);
      *(undefined4 *)(pbVar6 + 0x18) = *(undefined4 *)pbVar1;
      *(undefined4 *)(pbVar6 + 0x1c) = uVar2;
      *(undefined4 *)(pbVar6 + 0x20) = uVar3;
      *(undefined4 *)(pbVar6 + 0x24) = uVar4;
      pbVar6[0x28] = pbVar6[param_3 + 0x28];
      FUN_142cb3ac0(pbVar6 + 0x2c,pbVar6 + param_3 + 0x2c);
      FUN_142cb3ac0(pbVar6 + 0x234,pbVar6 + param_3 + 0x234);
      *(undefined8 *)(pbVar6 + 0x43c) = *(undefined8 *)(pbVar6 + param_3 + 0x43c);
      *(undefined4 *)(pbVar6 + 0x444) = *(undefined4 *)(pbVar6 + param_3 + 0x444);
      *(undefined4 *)(pbVar6 + 0x448) = *(undefined4 *)(pbVar6 + param_3 + 0x448);
      *(undefined4 *)(pbVar6 + 0x44c) = *(undefined4 *)(pbVar6 + param_3 + 0x44c);
      pbVar6[0x450] = pbVar6[param_3 + 0x450];
      FUN_142e3b670(pbVar6 + 0x458,pbVar6 + param_3 + 0x458);
      pbVar6 = pbVar6 + 0x6e8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e3c6a0 FUN_142e3c6a0 body=217 status=ok
// SIG undefined FUN_142e3c6a0(void)

undefined8 FUN_142e3c6a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar6 = (undefined1 *)(param_2 + 0x270);
    do {
      uVar5 = *(undefined8 *)((longlong)(puVar6 + param_3 + -0x270) + 8);
      *(undefined8 *)(puVar6 + -0x270) = *(undefined8 *)(puVar6 + param_3 + -0x270);
      *(undefined8 *)(puVar6 + -0x268) = uVar5;
      uVar5 = *(undefined8 *)((longlong)(puVar6 + param_3 + -0x260) + 8);
      *(undefined8 *)(puVar6 + -0x260) = *(undefined8 *)(puVar6 + param_3 + -0x260);
      *(undefined8 *)(puVar6 + -600) = uVar5;
      uVar5 = *(undefined8 *)((longlong)(puVar6 + param_3 + -0x250) + 8);
      *(undefined8 *)(puVar6 + -0x250) = *(undefined8 *)(puVar6 + param_3 + -0x250);
      *(undefined8 *)(puVar6 + -0x248) = uVar5;
      uVar5 = *(undefined8 *)((longlong)(puVar6 + param_3 + -0x240) + 8);
      *(undefined8 *)(puVar6 + -0x240) = *(undefined8 *)(puVar6 + param_3 + -0x240);
      *(undefined8 *)(puVar6 + -0x238) = uVar5;
      uVar5 = *(undefined8 *)((longlong)(puVar6 + param_3 + -0x230) + 8);
      *(undefined8 *)(puVar6 + -0x230) = *(undefined8 *)(puVar6 + param_3 + -0x230);
      *(undefined8 *)(puVar6 + -0x228) = uVar5;
      puVar1 = (undefined4 *)(puVar6 + param_3 + -0x220);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar6 + -0x220) = *puVar1;
      *(undefined4 *)(puVar6 + -0x21c) = uVar2;
      *(undefined4 *)(puVar6 + -0x218) = uVar3;
      *(undefined4 *)(puVar6 + -0x214) = uVar4;
      *(undefined8 *)(puVar6 + -0x210) = *(undefined8 *)(puVar6 + param_3 + -0x210);
      FUN_142cb3ac0(puVar6 + -0x208,puVar6 + param_3 + -0x208);
      *puVar6 = puVar6[param_3];
      puVar6 = puVar6 + 0x278;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e3c780 FUN_142e3c780 body=194 status=ok
// SIG undefined FUN_142e3c780(void)

undefined8 FUN_142e3c780(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar5 = (undefined8 *)(param_2 + 0x90);
    do {
      puVar1 = (undefined4 *)(param_3 + -0x90 + (longlong)puVar5);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar5 + -0x12) = *puVar1;
      *(undefined4 *)((longlong)puVar5 + -0x8c) = uVar2;
      *(undefined4 *)(puVar5 + -0x11) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -0x84) = uVar4;
      puVar1 = (undefined4 *)(param_3 + -0x80 + (longlong)puVar5);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar5 + -0x10) = *puVar1;
      *(undefined4 *)((longlong)puVar5 + -0x7c) = uVar2;
      *(undefined4 *)(puVar5 + -0xf) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -0x74) = uVar4;
      FRichCurve::operator=(puVar5 + -0xe,param_3 + -0x70 + (longlong)puVar5);
      *puVar5 = *(undefined8 *)(param_3 + (longlong)puVar5);
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_3 + 8 + (longlong)puVar5);
      *(undefined4 *)((longlong)puVar5 + 0xc) = *(undefined4 *)(param_3 + 0xc + (longlong)puVar5);
      *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(param_3 + 0x10 + (longlong)puVar5);
      *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_3 + 0x14 + (longlong)puVar5);
      *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_3 + 0x18 + (longlong)puVar5);
      *(undefined4 *)((longlong)puVar5 + 0x1c) = *(undefined4 *)(param_3 + 0x1c + (longlong)puVar5);
      *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(param_3 + 0x20 + (longlong)puVar5);
      *(undefined8 *)((longlong)puVar5 + 0x24) = *(undefined8 *)(param_3 + 0x24 + (longlong)puVar5);
      *(undefined4 *)((longlong)puVar5 + 0x2c) = *(undefined4 *)(param_3 + 0x2c + (longlong)puVar5);
      puVar5 = puVar5 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e3c850 FUN_142e3c850 body=155 status=ok
// SIG undefined FUN_142e3c850(void)

undefined8 FUN_142e3c850(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x5c);
    do {
      TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
      ::operator=(puVar1 + -0x17,param_3 + -0x5c + (longlong)puVar1);
      *(undefined8 *)(puVar1 + -3) = *(undefined8 *)(param_3 + -0xc + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined4 *)(param_3 + 4 + (longlong)puVar1);
      puVar1[2] = *(undefined4 *)(param_3 + 8 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_3 + 0xc + (longlong)puVar1);
      FUN_142e3adc0(puVar1 + 5,param_3 + 0x14 + (longlong)puVar1);
      puVar1 = puVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e3c8f0 FUN_142e3c8f0 body=35 status=ok
// SIG undefined FUN_142e3c8f0(void)

void FUN_142e3c8f0(undefined8 param_1,longlong param_2)

{
  FRichCurve::~FRichCurve(param_2 + 0x90);
  FRichCurve::~FRichCurve(param_2 + 0x18);
  return;
}



// FUNCTION 142e3c920 FUN_142e3c920 body=35 status=ok
// SIG undefined FUN_142e3c920(void)

void FUN_142e3c920(undefined8 param_1,longlong param_2)

{
  FRichCurve::~FRichCurve(param_2 + 0x98);
  FRichCurve::~FRichCurve(param_2 + 0x20);
  return;
}



// FUNCTION 142e3c970 FUN_142e3c970 body=78 status=ok
// SIG undefined FUN_142e3c970(void)

void FUN_142e3c970(undefined8 param_1,longlong *param_2)

{
  *(undefined4 *)(param_2 + 9) = 0;
  if (param_2[8] != 0) {
    FMemory::Free();
  }
  FUN_142e3cb00(param_2,0);
  if (param_2[4] != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142e3ca00 FUN_142e3ca00 body=55 status=ok
// SIG undefined FUN_142e3ca00(void)

void FUN_142e3ca00(void)

{
  undefined8 uVar1;
  
  if (DAT_146b38d48 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38d48 = GetStaticEnum(FUN_142e3dbf0,uVar1,L"EGbxCharacterBlendPoints");
  }
  return;
}



// FUNCTION 142e3ca40 FUN_142e3ca40 body=55 status=ok
// SIG undefined FUN_142e3ca40(void)

void FUN_142e3ca40(void)

{
  undefined8 uVar1;
  
  if (DAT_146b38d40 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38d40 = GetStaticEnum(FUN_142e3dc20,uVar1,L"EGbxMovementMode");
  }
  return;
}



// FUNCTION 142e3ca80 FUN_142e3ca80 body=55 status=ok
// SIG undefined FUN_142e3ca80(void)

void FUN_142e3ca80(void)

{
  undefined8 uVar1;
  
  if (DAT_146b38d30 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38d30 = GetStaticEnum(FUN_142e3dc50,uVar1,L"EMantleUpCheckState");
  }
  return;
}



// FUNCTION 142e3cac0 FUN_142e3cac0 body=55 status=ok
// SIG undefined FUN_142e3cac0(void)

void FUN_142e3cac0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b38d38 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b38d38 = GetStaticEnum(FUN_142e3dc80,uVar1,L"EScriptedLadderType");
  }
  return;
}



// FUNCTION 142e3cb00 FUN_142e3cb00 body=404 status=ok
// SIG undefined FUN_142e3cb00(void)

void FUN_142e3cb00(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
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
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_142e3cbd1;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
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
LAB_142e3cbd1:
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
      FRichCurve::~FRichCurve((longlong)iStack_1c * 0xa0 + 0x28 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 142e3cca0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UMonkeyAnim::StaticClass(void)

{
  if (DAT_146b38f10 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"GbxCharacterAnimInstance",&DAT_146b38f10,
                  FUN_142e3d2f0,0x950,0x10000008,0,L"Engine",&LAB_142e3ab60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142256d30,&LAB_1412f1130,
                  &LAB_14084f730,0);
  }
  return DAT_146b38f10;
}



// FUNCTION 142e3cd50 FUN_142e3cd50 body=6 status=ok
// SIG undefined FUN_142e3cd50(void)

undefined8 FUN_142e3cd50(void)

{
  return 0x28033388;
}



// FUNCTION 142e3cd60 FUN_142e3cd60 body=6 status=ok
// SIG undefined FUN_142e3cd60(void)

undefined8 FUN_142e3cd60(void)

{
  return 0x544f84c1;
}



// FUNCTION 142e3cd70 FUN_142e3cd70 body=6 status=ok
// SIG undefined FUN_142e3cd70(void)

undefined8 FUN_142e3cd70(void)

{
  return 0x37584f1f;
}



// FUNCTION 142e3cd80 FUN_142e3cd80 body=6 status=ok
// SIG undefined FUN_142e3cd80(void)

undefined8 FUN_142e3cd80(void)

{
  return 0xd89d92a6;
}



// FUNCTION 142e3cd90 FUN_142e3cd90 body=6 status=ok
// SIG undefined FUN_142e3cd90(void)

undefined8 FUN_142e3cd90(void)

{
  return 0xd1180b97;
}



// FUNCTION 142e3cda0 FUN_142e3cda0 body=6 status=ok
// SIG undefined FUN_142e3cda0(void)

undefined8 FUN_142e3cda0(void)

{
  return 0x434d1a17;
}



// FUNCTION 142e3cdb0 FUN_142e3cdb0 body=6 status=ok
// SIG undefined FUN_142e3cdb0(void)

undefined8 FUN_142e3cdb0(void)

{
  return 0xb0c8f920;
}



// FUNCTION 142e3cdc0 FUN_142e3cdc0 body=6 status=ok
// SIG undefined FUN_142e3cdc0(void)

undefined8 FUN_142e3cdc0(void)

{
  return 0x99a821c3;
}



// FUNCTION 142e3cdd0 FUN_142e3cdd0 body=6 status=ok
// SIG undefined FUN_142e3cdd0(void)

undefined8 FUN_142e3cdd0(void)

{
  return 0x13a4c13f;
}



// FUNCTION 142e3cde0 FUN_142e3cde0 body=6 status=ok
// SIG undefined FUN_142e3cde0(void)

undefined8 FUN_142e3cde0(void)

{
  return 0x35dfa72b;
}



// FUNCTION 142e3cdf0 FUN_142e3cdf0 body=6 status=ok
// SIG undefined FUN_142e3cdf0(void)

undefined8 FUN_142e3cdf0(void)

{
  return 0xf7681cf6;
}



// FUNCTION 142e3ce00 FUN_142e3ce00 body=6 status=ok
// SIG undefined FUN_142e3ce00(void)

undefined8 FUN_142e3ce00(void)

{
  return 0xa9962e01;
}



// FUNCTION 142e3ce10 FUN_142e3ce10 body=6 status=ok
// SIG undefined FUN_142e3ce10(void)

undefined8 FUN_142e3ce10(void)

{
  return 0xdf81ad26;
}



// FUNCTION 142e3ce20 FUN_142e3ce20 body=6 status=ok
// SIG undefined FUN_142e3ce20(void)

undefined8 FUN_142e3ce20(void)

{
  return 0x5e2270a5;
}



// FUNCTION 142e3ce30 FUN_142e3ce30 body=6 status=ok
// SIG undefined FUN_142e3ce30(void)

undefined8 FUN_142e3ce30(void)

{
  return 0x64fe2ce;
}



// FUNCTION 142e3ce40 FUN_142e3ce40 body=6 status=ok
// SIG undefined FUN_142e3ce40(void)

undefined8 FUN_142e3ce40(void)

{
  return 0x9a125f4f;
}



// FUNCTION 142e3ce50 FUN_142e3ce50 body=6 status=ok
// SIG undefined FUN_142e3ce50(void)

undefined8 FUN_142e3ce50(void)

{
  return 0x64e1ca6b;
}



// FUNCTION 142e3ce60 FUN_142e3ce60 body=6 status=ok
// SIG undefined FUN_142e3ce60(void)

undefined8 FUN_142e3ce60(void)

{
  return 0xe3bb628e;
}



// FUNCTION 142e3ce70 FUN_142e3ce70 body=6 status=ok
// SIG undefined FUN_142e3ce70(void)

undefined8 FUN_142e3ce70(void)

{
  return 0xe8fb0ab4;
}



// FUNCTION 142e3ce80 FUN_142e3ce80 body=6 status=ok
// SIG undefined FUN_142e3ce80(void)

undefined8 FUN_142e3ce80(void)

{
  return 0x82701857;
}


