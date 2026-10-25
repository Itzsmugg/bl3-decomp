// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141326ac0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void URemnantGameInstance::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 141326ae0 StaticClass body=5 status=ok
// SIG undefined StaticClass(void)

void UPawnAction_Sequence::StaticClass(void)

{
  StaticClass();
  return;
}



// FUNCTION 141326af0 thunk_FUN_142a232e0 body=5 status=ok
// SIG undefined thunk_FUN_142a232e0(void)

void thunk_FUN_142a232e0(void)

{
  FUN_142a232e0();
  return;
}



// FUNCTION 141326b00 FUN_141326b00 body=34 status=ok
// SIG undefined FUN_141326b00(void)

void FUN_141326b00(void)

{
  undefined8 uVar1;
  
  uVar1 = UUGHitTextureButton::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnCurrentUsableChanged_144839540,0xc);
  return;
}



// FUNCTION 141326b30 FUN_141326b30 body=34 status=ok
// SIG undefined FUN_141326b30(void)

void FUN_141326b30(void)

{
  undefined8 uVar1;
  
  uVar1 = AUGCompanionAIController::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnBackpackItemClicked_144839c90,5);
  return;
}



// FUNCTION 141326b60 FUN_141326b60 body=34 status=ok
// SIG undefined FUN_141326b60(void)

void FUN_141326b60(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141323fb0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnContentPanelItemClicked_14483b1e0,0xc);
  return;
}



// FUNCTION 141326b90 StaticRegisterNativesULowEntryLatentActionObject body=34 status=ok
// SIG undefined StaticRegisterNativesULowEntryLatentActionObject(void)

void ULowEntryLatentActionObject::StaticRegisterNativesULowEntryLatentActionObject(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnBackpackGridItemClicked_14483b4d0,4);
  return;
}



// FUNCTION 141326bc0 FUN_141326bc0 body=34 status=ok
// SIG undefined FUN_141326bc0(void)

void FUN_141326bc0(void)

{
  undefined8 uVar1;
  
  uVar1 = UXGameInstance::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_UpdateThumbnail_14483ca20,1);
  return;
}



// FUNCTION 141326bf0 FUN_141326bf0 body=34 status=ok
// SIG undefined FUN_141326bf0(void)

void FUN_141326bf0(void)

{
  undefined8 uVar1;
  
  uVar1 = AGPoisonSplashProjectile::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnMediaItemClicked_14483ca10,1);
  return;
}



// FUNCTION 141326c20 FUN_141326c20 body=34 status=ok
// SIG undefined FUN_141326c20(void)

void FUN_141326c20(void)

{
  undefined8 uVar1;
  
  uVar1 = UGNavigationHeaderItem::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnMovieStarted_14483ccd0,1);
  return;
}



// FUNCTION 141326c50 FUN_141326c50 body=34 status=ok
// SIG undefined FUN_141326c50(void)

void FUN_141326c50(void)

{
  undefined8 uVar1;
  
  uVar1 = UUGButton::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_DisableBossBar_14483ce60,0xd);
  return;
}



// FUNCTION 141326c80 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687fcf0 == 0) {
    uVar1 = FUN_141326810();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687fcf0 = GetStaticStruct(FUN_141326fb0,uVar2,L"BossbarEventData",0x10,uVar1);
  }
  return;
}



// FUNCTION 141326ce0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneAudioSectionTemplateData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687fc08 == 0) {
    uVar1 = FUN_141326830();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687fc08 = GetStaticStruct(FUN_141326fe0,uVar2,L"GFxBackpackWidget",0x198,uVar1);
  }
  return;
}



// FUNCTION 141326d40 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_LinkedInputPose::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687fc18 == 0) {
    uVar1 = FUN_141326820();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687fc18 = GetStaticStruct(FUN_141327010,uVar2,L"GFxBackpackWidgetConfig",0x118,uVar1);
  }
  return;
}



// FUNCTION 141326da0 FUN_141326da0 body=47 status=ok
// SIG undefined FUN_141326da0(void)

longlong FUN_141326da0(void)

{
  if (DAT_14687fb68 == 0) {
    FUN_141786440(&DAT_14687fb68,&PTR_StaticClass_14482fcc0);
  }
  return DAT_14687fb68;
}



// FUNCTION 141326dd0 FUN_141326dd0 body=47 status=ok
// SIG undefined FUN_141326dd0(void)

longlong FUN_141326dd0(void)

{
  if (DAT_14687fb78 == 0) {
    FUN_141786440(&DAT_14687fb78,&PTR_StaticClass_144830bc0);
  }
  return DAT_14687fb78;
}



// FUNCTION 141326e00 FUN_141326e00 body=47 status=ok
// SIG undefined FUN_141326e00(void)

longlong FUN_141326e00(void)

{
  if (DAT_14687fc58 == 0) {
    FUN_141786440(&DAT_14687fc58,&PTR_FUN_144835b10);
  }
  return DAT_14687fc58;
}



// FUNCTION 141326e30 FUN_141326e30 body=47 status=ok
// SIG undefined FUN_141326e30(void)

longlong FUN_141326e30(void)

{
  if (DAT_14687fc68 == 0) {
    FUN_141786440(&DAT_14687fc68,&PTR_FUN_144837f10);
  }
  return DAT_14687fc68;
}



// FUNCTION 141326e60 FUN_141326e60 body=47 status=ok
// SIG undefined FUN_141326e60(void)

longlong FUN_141326e60(void)

{
  if (DAT_14687fc98 == 0) {
    FUN_141786440(&DAT_14687fc98,&PTR_FUN_144838560);
  }
  return DAT_14687fc98;
}



// FUNCTION 141326e90 FUN_141326e90 body=47 status=ok
// SIG undefined FUN_141326e90(void)

longlong FUN_141326e90(void)

{
  if (DAT_14687fcc0 == 0) {
    FUN_141786440(&DAT_14687fcc0,&PTR_FUN_144838920);
  }
  return DAT_14687fcc0;
}



// FUNCTION 141326ec0 FUN_141326ec0 body=47 status=ok
// SIG undefined FUN_141326ec0(void)

longlong FUN_141326ec0(void)

{
  if (DAT_14687fc00 == 0) {
    FUN_141786a30(&DAT_14687fc00,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462f4270);
  }
  return DAT_14687fc00;
}



// FUNCTION 141326ef0 FUN_141326ef0 body=47 status=ok
// SIG undefined FUN_141326ef0(void)

longlong FUN_141326ef0(void)

{
  if (DAT_14687fbf8 == 0) {
    FUN_141786a30(&DAT_14687fbf8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462f41b0);
  }
  return DAT_14687fbf8;
}



// FUNCTION 141326f20 FUN_141326f20 body=47 status=ok
// SIG undefined FUN_141326f20(void)

longlong FUN_141326f20(void)

{
  if (DAT_14687fa98 == 0) {
    FUN_1417866a0(&DAT_14687fa98,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462f6640);
  }
  return DAT_14687fa98;
}



// FUNCTION 141326f50 FUN_141326f50 body=47 status=ok
// SIG undefined FUN_141326f50(void)

longlong FUN_141326f50(void)

{
  if (DAT_14687fce8 == 0) {
    FUN_1417866a0(&DAT_14687fce8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462f66e0);
  }
  return DAT_14687fce8;
}



// FUNCTION 141326f80 FUN_141326f80 body=47 status=ok
// SIG undefined FUN_141326f80(void)

longlong FUN_141326f80(void)

{
  if (DAT_14687fc78 == 0) {
    FUN_1417866a0(&DAT_14687fc78,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462f6690);
  }
  return DAT_14687fc78;
}



// FUNCTION 141326fb0 FUN_141326fb0 body=47 status=ok
// SIG undefined FUN_141326fb0(void)

longlong FUN_141326fb0(void)

{
  if (DAT_14687fcf8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687fcf8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462f5a40);
  }
  return DAT_14687fcf8;
}



// FUNCTION 141326fe0 FUN_141326fe0 body=47 status=ok
// SIG undefined FUN_141326fe0(void)

longlong FUN_141326fe0(void)

{
  if (DAT_14687fc10 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687fc10,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462f4740);
  }
  return DAT_14687fc10;
}



// FUNCTION 141327010 FUN_141327010 body=47 status=ok
// SIG undefined FUN_141327010(void)

longlong FUN_141327010(void)

{
  if (DAT_14687fc20 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687fc20,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462f4b20);
  }
  return DAT_14687fc20;
}



// FUNCTION 1413270a0 FUN_1413270a0 body=143 status=ok
// SIG undefined FUN_1413270a0(void)

void FUN_1413270a0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_18 [16];
  
  local_18[0] = 5;
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
  FUN_140ee8340(param_1,puVar1);
  return;
}



// FUNCTION 141327150 FUN_141327150 body=334 status=ok
// SIG undefined FUN_141327150(void)

void FUN_141327150(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140eee040(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 1413272a0 FUN_1413272a0 body=334 status=ok
// SIG undefined FUN_1413272a0(void)

void FUN_1413272a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140eee080(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 1413273f0 FUN_1413273f0 body=128 status=ok
// SIG undefined FUN_1413273f0(void)

void FUN_1413273f0(undefined8 param_1,longlong param_2)

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
  FUN_140eee1e0(param_1,local_res10);
  return;
}



// FUNCTION 141327470 FUN_141327470 body=446 status=ok
// SIG undefined FUN_141327470(void)

void FUN_141327470(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 local_res10;
  undefined1 local_158 [8];
  undefined4 local_150;
  undefined1 local_14c;
  undefined1 local_148 [8];
  undefined8 local_140;
  longlong *plStack_138;
  undefined1 local_130;
  undefined1 local_128 [272];
  
  FUN_140ed0240(local_128);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_128);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  local_res10 = 0;
  puVar6 = local_128;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_158,&DAT_143f3eda8,1);
  local_14c = 0;
  local_150 = 0xffffffff;
  FName::FName(local_148,&DAT_143f3eda8,1);
  local_130 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_140 = 0;
  plStack_138 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_158);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_158);
  }
  puVar7 = local_158;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140eb3f40(param_1,puVar6,local_res10,puVar7);
  plVar5 = plStack_138;
  if (plStack_138 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_138 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_138)(plStack_138);
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
  FUN_140e9c360(local_128);
  return;
}



// FUNCTION 141327630 FUN_141327630 body=128 status=ok
// SIG undefined FUN_141327630(void)

void FUN_141327630(undefined8 param_1,longlong param_2)

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
  FUN_140eee2a0(param_1,local_res10);
  return;
}



// FUNCTION 1413276b0 FUN_1413276b0 body=334 status=ok
// SIG undefined FUN_1413276b0(void)

void FUN_1413276b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_141158730(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 141327800 FUN_141327800 body=128 status=ok
// SIG undefined FUN_141327800(void)

void FUN_141327800(undefined8 param_1,longlong param_2)

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
  FUN_141158770(param_1,local_res10);
  return;
}



// FUNCTION 141327880 FUN_141327880 body=128 status=ok
// SIG undefined FUN_141327880(void)

void FUN_141327880(undefined8 param_1,longlong param_2)

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
  FUN_141159100(param_1,local_res10);
  return;
}



// FUNCTION 141327900 FUN_141327900 body=443 status=ok
// SIG undefined FUN_141327900(void)

void FUN_141327900(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  longlong *local_48;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  FUN_142de2fd0(local_58);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar5 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_68 = local_78;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_60 = local_70;
  FUN_140eeff70(param_1,local_res20,puVar5,&local_68,local_res10[0]);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  return;
}



// FUNCTION 141327ac0 FUN_141327ac0 body=128 status=ok
// SIG undefined FUN_141327ac0(void)

void FUN_141327ac0(undefined8 param_1,longlong param_2)

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
  FUN_14115a0d0(param_1,local_res10);
  return;
}



// FUNCTION 141327b40 FUN_141327b40 body=320 status=ok
// SIG undefined FUN_141327b40(void)

void FUN_141327b40(long param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 local_70;
  byte local_68;
  undefined1 local_60 [56];
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_68 = local_68 & 0xfd | 1;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_142c8c260(local_60,0x3f800000);
  local_28 = 0xff;
  local_20 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  if (local_78 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141327c80 FUN_141327c80 body=155 status=ok
// SIG undefined FUN_141327c80(void)

void FUN_141327c80(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140ef2cc0(param_1,puVar1);
  return;
}



// FUNCTION 141327d60 FUN_141327d60 body=128 status=ok
// SIG undefined FUN_141327d60(void)

void FUN_141327d60(undefined8 param_1,longlong param_2)

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
  FUN_141161bf0(param_1,local_res10);
  return;
}



// FUNCTION 141327de0 FUN_141327de0 body=334 status=ok
// SIG undefined FUN_141327de0(void)

void FUN_141327de0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1410dbc30(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 141327f50 FUN_141327f50 body=128 status=ok
// SIG undefined FUN_141327f50(void)

void FUN_141327f50(undefined8 param_1,longlong param_2)

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
  FUN_141163b10(param_1,local_res10);
  return;
}



// FUNCTION 141327fd0 FUN_141327fd0 body=128 status=ok
// SIG undefined FUN_141327fd0(void)

void FUN_141327fd0(undefined8 param_1,longlong param_2)

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
  FUN_141163b80(param_1,local_res10);
  return;
}



// FUNCTION 141328050 FUN_141328050 body=195 status=ok
// SIG undefined FUN_141328050(void)

void FUN_141328050(longlong *param_1,longlong param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
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
  (**(code **)(*param_1 + 0x538))(param_1,local_res10,local_res8);
  return;
}



// FUNCTION 141328120 FUN_141328120 body=128 status=ok
// SIG undefined FUN_141328120(void)

void FUN_141328120(undefined8 param_1,longlong param_2)

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
  FUN_141164050(param_1,local_res10);
  return;
}



// FUNCTION 1413281a0 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140eb8b60(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141328280 FUN_141328280 body=253 status=ok
// SIG undefined FUN_141328280(void)

void FUN_141328280(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 local_res10;
  undefined1 local_118 [272];
  
  FUN_140ed0240(local_118);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_118);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_118);
  }
  local_res10 = 0;
  puVar1 = local_118;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
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
  FUN_140eb96a0(param_1,puVar1,local_res10);
  FUN_140e9c360(local_118);
  return;
}



// FUNCTION 141328380 FUN_141328380 body=128 status=ok
// SIG undefined FUN_141328380(void)

void FUN_141328380(undefined8 param_1,longlong param_2)

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
  FUN_141164be0(param_1,local_res10);
  return;
}



// FUNCTION 141328400 FUN_141328400 body=128 status=ok
// SIG undefined FUN_141328400(void)

void FUN_141328400(undefined8 param_1,longlong param_2)

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
  FUN_141164c50(param_1,local_res10);
  return;
}



// FUNCTION 1413284c0 FUN_1413284c0 body=130 status=ok
// SIG undefined FUN_1413284c0(void)

void FUN_1413284c0(undefined8 param_1,longlong param_2)

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
  FUN_140f01d70(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 141328550 FUN_141328550 body=128 status=ok
// SIG undefined FUN_141328550(void)

void FUN_141328550(undefined8 param_1,longlong param_2)

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
  FUN_14116b710(param_1,local_res10);
  return;
}



// FUNCTION 1413285d0 FUN_1413285d0 body=128 status=ok
// SIG undefined FUN_1413285d0(void)

void FUN_1413285d0(undefined8 param_1,longlong param_2)

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
  FUN_14116b780(param_1,local_res10);
  return;
}



// FUNCTION 141328650 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140f01dc0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141328750 execPreSpawnDroppedItem body=175 status=ok
// SIG undefined execPreSpawnDroppedItem(void)

void UItemUtil::execPreSpawnDroppedItem(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
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
  FUN_140f03240(local_res20,local_res10[0]);
  return;
}



// FUNCTION 141328800 execHandleOnLoadoutChangedChanged body=223 status=ok
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
  FUN_140f08a80(param_1,&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1413288e0 FUN_1413288e0 body=128 status=ok
// SIG undefined FUN_1413288e0(void)

void FUN_1413288e0(undefined8 param_1,longlong param_2)

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
  FUN_140f0a4c0(param_1,local_res10);
  return;
}



// FUNCTION 141328980 FUN_141328980 body=275 status=ok
// SIG undefined FUN_141328980(void)

void FUN_141328980(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  
  local_38[0] = 0xff;
  local_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res20[0] = 0;
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
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
  thunk_FUN_140f0f4b0(param_1,puVar1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 141328aa0 FUN_141328aa0 body=188 status=ok
// SIG undefined FUN_141328aa0(void)

void FUN_141328aa0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
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
  FUN_140f0f020(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 141328bc0 FUN_141328bc0 body=256 status=ok
// SIG undefined FUN_141328bc0(void)

void FUN_141328bc0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
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
  FUN_1410f6190(param_1,local_18[0],local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 141328ce0 FUN_141328ce0 body=162 status=ok
// SIG undefined FUN_141328ce0(void)

longlong FUN_141328ce0(void)

{
  if (DAT_146880208 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxBuddyWidget",&DAT_146880208,FUN_14132c070,0x370,0x10000008
                  ,0,L"Engine",&LAB_141329fa0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146880208;
}



// FUNCTION 141328d90 FUN_141328d90 body=47 status=ok
// SIG undefined FUN_141328d90(void)

longlong FUN_141328d90(void)

{
  if (DAT_146880200 == 0) {
    FUN_141786440(&DAT_146880200,&PTR_FUN_14483d9c0);
  }
  return DAT_146880200;
}



// FUNCTION 141328dc0 FUN_141328dc0 body=47 status=ok
// SIG undefined FUN_141328dc0(void)

longlong FUN_141328dc0(void)

{
  if (DAT_1468801e8 == 0) {
    FUN_141786a30(&DAT_1468801e8,&PTR_FUN_1462f6850);
  }
  return DAT_1468801e8;
}



// FUNCTION 141328df0 FUN_141328df0 body=47 status=ok
// SIG undefined FUN_141328df0(void)

longlong FUN_141328df0(void)

{
  if (DAT_1468801f0 == 0) {
    FUN_141786a30(&DAT_1468801f0,&PTR_FUN_1462f6900);
  }
  return DAT_1468801f0;
}



// FUNCTION 141328e20 FUN_141328e20 body=47 status=ok
// SIG undefined FUN_141328e20(void)

longlong FUN_141328e20(void)

{
  if (DAT_1468801f8 == 0) {
    FUN_141786a30(&DAT_1468801f8,&PTR_FUN_1462f6940);
  }
  return DAT_1468801f8;
}



// FUNCTION 141328e70 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGImpulseWindProjectile::GetPrivateStaticClass(void)

{
  if (DAT_146880268 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxBuddyWidgetContainer",&DAT_146880268,FUN_14132c0a0,0x6f0,
                  0x10000000,0,L"Engine",FUN_141329fc0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGSquadMemberWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146880268;
}



// FUNCTION 141328f30 FUN_141328f30 body=47 status=ok
// SIG undefined FUN_141328f30(void)

longlong FUN_141328f30(void)

{
  if (DAT_146880260 == 0) {
    FUN_141786440(&DAT_146880260,&PTR_GetPrivateStaticClass_14483e150);
  }
  return DAT_146880260;
}



// FUNCTION 141328f60 FUN_141328f60 body=47 status=ok
// SIG undefined FUN_141328f60(void)

longlong FUN_141328f60(void)

{
  if (DAT_146880228 == 0) {
    FUN_141786a30(&DAT_146880228,&PTR_FUN_1462f6e00);
  }
  return DAT_146880228;
}



// FUNCTION 141328f90 FUN_141328f90 body=47 status=ok
// SIG undefined FUN_141328f90(void)

longlong FUN_141328f90(void)

{
  if (DAT_146880230 == 0) {
    FUN_141786a30(&DAT_146880230,&PTR_FUN_1462f6e40);
  }
  return DAT_146880230;
}



// FUNCTION 141328fc0 FUN_141328fc0 body=47 status=ok
// SIG undefined FUN_141328fc0(void)

longlong FUN_141328fc0(void)

{
  if (DAT_146880238 == 0) {
    FUN_141786a30(&DAT_146880238,&PTR_FUN_1462f6ec0);
  }
  return DAT_146880238;
}



// FUNCTION 141328ff0 FUN_141328ff0 body=47 status=ok
// SIG undefined FUN_141328ff0(void)

longlong FUN_141328ff0(void)

{
  if (DAT_146880240 == 0) {
    FUN_141786a30(&DAT_146880240,&PTR_FUN_1462f6f40);
  }
  return DAT_146880240;
}



// FUNCTION 141329020 FUN_141329020 body=47 status=ok
// SIG undefined FUN_141329020(void)

longlong FUN_141329020(void)

{
  if (DAT_146880248 == 0) {
    FUN_141786a30(&DAT_146880248,&PTR_FUN_1462f6fc0);
  }
  return DAT_146880248;
}



// FUNCTION 141329050 FUN_141329050 body=47 status=ok
// SIG undefined FUN_141329050(void)

longlong FUN_141329050(void)

{
  if (DAT_146880250 == 0) {
    FUN_141786a30(&DAT_146880250,&PTR_FUN_1462f7000);
  }
  return DAT_146880250;
}



// FUNCTION 141329080 FUN_141329080 body=47 status=ok
// SIG undefined FUN_141329080(void)

longlong FUN_141329080(void)

{
  if (DAT_146880258 == 0) {
    FUN_141786a30(&DAT_146880258,&PTR_FUN_1462f7040);
  }
  return DAT_146880258;
}



// FUNCTION 1413290b0 FUN_1413290b0 body=53 status=ok
// SIG undefined FUN_1413290b0(void)

void FUN_1413290b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144842f90;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413290f0 FUN_1413290f0 body=151 status=ok
// SIG undefined FUN_1413290f0(void)

longlong FUN_1413290f0(void)

{
  if (DAT_1468803a0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxCARMenuCustomizePage",&DAT_1468803a0,FUN_14132c100,0x70,
                  0x10000000,0,L"Engine",FUN_14132a210,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468803a0;
}



// FUNCTION 1413291a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass(void)

{
  if (DAT_146880358 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxCarMenuMouseDragArea",&DAT_146880358,FUN_140447710,400,
                  0x10000008,0,L"Engine",FUN_14132a4f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146880358;
}



// FUNCTION 141329250 FUN_141329250 body=47 status=ok
// SIG undefined FUN_141329250(void)

longlong FUN_141329250(void)

{
  if (DAT_146880340 == 0) {
    FUN_141786440(&DAT_146880340,&PTR_FUN_14483faf0);
  }
  return DAT_146880340;
}



// FUNCTION 141329280 FUN_141329280 body=47 status=ok
// SIG undefined FUN_141329280(void)

longlong FUN_141329280(void)

{
  if (DAT_1468802d8 == 0) {
    FUN_141786a30(&DAT_1468802d8,&PTR_FUN_1462f7ba0);
  }
  return DAT_1468802d8;
}



// FUNCTION 1413292b0 FUN_1413292b0 body=47 status=ok
// SIG undefined FUN_1413292b0(void)

longlong FUN_1413292b0(void)

{
  if (DAT_1468802e0 == 0) {
    FUN_141786a30(&DAT_1468802e0,&PTR_FUN_1462f7c60);
  }
  return DAT_1468802e0;
}



// FUNCTION 1413292e0 FUN_1413292e0 body=47 status=ok
// SIG undefined FUN_1413292e0(void)

longlong FUN_1413292e0(void)

{
  if (DAT_1468802e8 == 0) {
    FUN_141786a30(&DAT_1468802e8,&PTR_FUN_1462f7ca0);
  }
  return DAT_1468802e8;
}



// FUNCTION 141329310 FUN_141329310 body=47 status=ok
// SIG undefined FUN_141329310(void)

longlong FUN_141329310(void)

{
  if (DAT_1468802f0 == 0) {
    FUN_141786a30(&DAT_1468802f0,&PTR_FUN_1462f7df0);
  }
  return DAT_1468802f0;
}



// FUNCTION 141329340 FUN_141329340 body=47 status=ok
// SIG undefined FUN_141329340(void)

longlong FUN_141329340(void)

{
  if (DAT_1468802f8 == 0) {
    FUN_141786a30(&DAT_1468802f8,&PTR_FUN_1462f7eb0);
  }
  return DAT_1468802f8;
}



// FUNCTION 141329370 FUN_141329370 body=47 status=ok
// SIG undefined FUN_141329370(void)

longlong FUN_141329370(void)

{
  if (DAT_146880300 == 0) {
    FUN_141786a30(&DAT_146880300,&PTR_FUN_1462f7f70);
  }
  return DAT_146880300;
}



// FUNCTION 1413293a0 FUN_1413293a0 body=47 status=ok
// SIG undefined FUN_1413293a0(void)

longlong FUN_1413293a0(void)

{
  if (DAT_146880308 == 0) {
    FUN_141786a30(&DAT_146880308,&PTR_FUN_1462f7fb0);
  }
  return DAT_146880308;
}



// FUNCTION 1413293d0 FUN_1413293d0 body=47 status=ok
// SIG undefined FUN_1413293d0(void)

longlong FUN_1413293d0(void)

{
  if (DAT_146880310 == 0) {
    FUN_141786a30(&DAT_146880310,&PTR_FUN_1462f8100);
  }
  return DAT_146880310;
}



// FUNCTION 141329400 FUN_141329400 body=47 status=ok
// SIG undefined FUN_141329400(void)

longlong FUN_141329400(void)

{
  if (DAT_146880318 == 0) {
    FUN_141786a30(&DAT_146880318,&PTR_FUN_1462f81c0);
  }
  return DAT_146880318;
}



// FUNCTION 141329430 FUN_141329430 body=47 status=ok
// SIG undefined FUN_141329430(void)

longlong FUN_141329430(void)

{
  if (DAT_146880320 == 0) {
    FUN_141786a30(&DAT_146880320,&PTR_FUN_1462f8200);
  }
  return DAT_146880320;
}



// FUNCTION 141329460 FUN_141329460 body=47 status=ok
// SIG undefined FUN_141329460(void)

longlong FUN_141329460(void)

{
  if (DAT_146880328 == 0) {
    FUN_141786a30(&DAT_146880328,&PTR_FUN_1462f8240);
  }
  return DAT_146880328;
}



// FUNCTION 141329490 FUN_141329490 body=47 status=ok
// SIG undefined FUN_141329490(void)

longlong FUN_141329490(void)

{
  if (DAT_146880330 == 0) {
    FUN_141786a30(&DAT_146880330,&PTR_FUN_1462f8280);
  }
  return DAT_146880330;
}



// FUNCTION 1413294c0 FUN_1413294c0 body=47 status=ok
// SIG undefined FUN_1413294c0(void)

longlong FUN_1413294c0(void)

{
  if (DAT_146880338 == 0) {
    FUN_141786a30(&DAT_146880338,&PTR_FUN_1462f8300);
  }
  return DAT_146880338;
}



// FUNCTION 1413294f0 FUN_1413294f0 body=53 status=ok
// SIG undefined FUN_1413294f0(void)

void FUN_1413294f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_144843bb8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141329530 FUN_141329530 body=53 status=ok
// SIG undefined FUN_141329530(void)

void FUN_141329530(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x198;
    *puVar1 = &PTR_FUN_144843cd0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141329570 FUN_141329570 body=53 status=ok
// SIG undefined FUN_141329570(void)

void FUN_141329570(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144843de8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413295b0 FUN_1413295b0 body=53 status=ok
// SIG undefined FUN_1413295b0(void)

void FUN_1413295b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe8;
    *puVar1 = &PTR_FUN_144843f00;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141329610 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AUGWeapon_Hook::GetPrivateStaticClass(void)

{
  if (DAT_146880468 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxChallengeProgressWidget",&DAT_146880468,
                  StaticRegisterNativesAUGWeapon_Hook,0x790,0x10000000,0,L"Engine",FUN_14132a530,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGSquadMemberWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146880468;
}



// FUNCTION 1413296d0 FUN_1413296d0 body=47 status=ok
// SIG undefined FUN_1413296d0(void)

longlong FUN_1413296d0(void)

{
  if (DAT_146880460 == 0) {
    FUN_141786440(&DAT_146880460,&PTR_GetPrivateStaticClass_144841300);
  }
  return DAT_146880460;
}



// FUNCTION 141329700 FUN_141329700 body=47 status=ok
// SIG undefined FUN_141329700(void)

longlong FUN_141329700(void)

{
  if (DAT_146880418 == 0) {
    FUN_141786a30(&DAT_146880418,&PTR_FUN_1462fae90);
  }
  return DAT_146880418;
}



// FUNCTION 141329730 FUN_141329730 body=47 status=ok
// SIG undefined FUN_141329730(void)

longlong FUN_141329730(void)

{
  if (DAT_146880420 == 0) {
    FUN_141786a30(&DAT_146880420,&PTR_FUN_1462faed0);
  }
  return DAT_146880420;
}



// FUNCTION 141329760 FUN_141329760 body=47 status=ok
// SIG undefined FUN_141329760(void)

longlong FUN_141329760(void)

{
  if (DAT_146880428 == 0) {
    FUN_141786a30(&DAT_146880428,&PTR_FUN_1462faf50);
  }
  return DAT_146880428;
}



// FUNCTION 141329790 FUN_141329790 body=47 status=ok
// SIG undefined FUN_141329790(void)

longlong FUN_141329790(void)

{
  if (DAT_146880430 == 0) {
    FUN_141786a30(&DAT_146880430,&PTR_FUN_1462fafd0);
  }
  return DAT_146880430;
}



// FUNCTION 1413297c0 FUN_1413297c0 body=47 status=ok
// SIG undefined FUN_1413297c0(void)

longlong FUN_1413297c0(void)

{
  if (DAT_146880438 == 0) {
    FUN_141786a30(&DAT_146880438,&PTR_FUN_1462fb0a0);
  }
  return DAT_146880438;
}



// FUNCTION 1413297f0 FUN_1413297f0 body=47 status=ok
// SIG undefined FUN_1413297f0(void)

longlong FUN_1413297f0(void)

{
  if (DAT_146880440 == 0) {
    FUN_141786a30(&DAT_146880440,&PTR_FUN_1462fb170);
  }
  return DAT_146880440;
}



// FUNCTION 141329820 FUN_141329820 body=47 status=ok
// SIG undefined FUN_141329820(void)

longlong FUN_141329820(void)

{
  if (DAT_146880448 == 0) {
    FUN_141786a30(&DAT_146880448,&PTR_FUN_1462fb240);
  }
  return DAT_146880448;
}



// FUNCTION 141329850 FUN_141329850 body=47 status=ok
// SIG undefined FUN_141329850(void)

longlong FUN_141329850(void)

{
  if (DAT_146880450 == 0) {
    FUN_141786a30(&DAT_146880450,&PTR_FUN_1462fb3e0);
  }
  return DAT_146880450;
}



// FUNCTION 141329880 FUN_141329880 body=47 status=ok
// SIG undefined FUN_141329880(void)

longlong FUN_141329880(void)

{
  if (DAT_146880458 == 0) {
    FUN_141786a30(&DAT_146880458,&PTR_FUN_1462fb420);
  }
  return DAT_146880458;
}



// FUNCTION 1413298c0 FUN_1413298c0 body=53 status=ok
// SIG undefined FUN_1413298c0(void)

void FUN_1413298c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &PTR_FUN_1448457c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141329900 FUN_141329900 body=162 status=ok
// SIG undefined FUN_141329900(void)

longlong FUN_141329900(void)

{
  if (DAT_146880368 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxCARMenuColorChooserWidget",&DAT_146880368,FUN_140447710,
                  0x280,0x10000008,0,L"Engine",FUN_14132a150,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UXAnimInstanceBase::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146880368;
}



// FUNCTION 1413299c0 FUN_1413299c0 body=47 status=ok
// SIG undefined FUN_1413299c0(void)

longlong FUN_1413299c0(void)

{
  if (DAT_146880398 == 0) {
    FUN_141786440(&DAT_146880398,&PTR_FUN_144841b30);
  }
  return DAT_146880398;
}



// FUNCTION 1413299f0 FUN_1413299f0 body=47 status=ok
// SIG undefined FUN_1413299f0(void)

longlong FUN_1413299f0(void)

{
  if (DAT_146880380 == 0) {
    FUN_141786a30(&DAT_146880380,&PTR_FUN_1462f99a0);
  }
  return DAT_146880380;
}



// FUNCTION 141329a20 FUN_141329a20 body=47 status=ok
// SIG undefined FUN_141329a20(void)

longlong FUN_141329a20(void)

{
  if (DAT_146880388 == 0) {
    FUN_141786a30(&DAT_146880388,&PTR_FUN_1462f9a20);
  }
  return DAT_146880388;
}



// FUNCTION 141329a50 FUN_141329a50 body=47 status=ok
// SIG undefined FUN_141329a50(void)

longlong FUN_141329a50(void)

{
  if (DAT_146880390 == 0) {
    FUN_141786a30(&DAT_146880390,&PTR_FUN_1462f9aa0);
  }
  return DAT_146880390;
}



// FUNCTION 141329a90 FUN_141329a90 body=53 status=ok
// SIG undefined FUN_141329a90(void)

void FUN_141329a90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1448446e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141329ae0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ALobbyBeaconPlayerState::GetPrivateStaticClass(void)

{
  if (DAT_1468803c8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxCARMenuPartButton",&DAT_1468803c8,
                  StaticRegisterNativesALobbyBeaconPlayerState,0x3e0,0x10000008,0,L"Engine",
                  FUN_14132a2d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  URemnantGameInstance::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468803c8;
}



// FUNCTION 141329b90 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass(void)

{
  if (DAT_1468802c0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxCARMenuCustomizePanels",&DAT_1468802c0,FUN_140447710,400,
                  0x10000008,0,L"Engine",FUN_14132a270,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_1468802c0;
}



// FUNCTION 141329c40 FUN_141329c40 body=47 status=ok
// SIG undefined FUN_141329c40(void)

longlong FUN_141329c40(void)

{
  if (DAT_1468803c0 == 0) {
    FUN_141786440(&DAT_1468803c0,&PTR_GetPrivateStaticClass_144841f90);
  }
  return DAT_1468803c0;
}



// FUNCTION 141329c70 FUN_141329c70 body=47 status=ok
// SIG undefined FUN_141329c70(void)

longlong FUN_141329c70(void)

{
  if (DAT_1468803b0 == 0) {
    FUN_141786a30(&DAT_1468803b0,&PTR_FUN_1462f9dd0);
  }
  return DAT_1468803b0;
}



// FUNCTION 141329ca0 FUN_141329ca0 body=47 status=ok
// SIG undefined FUN_141329ca0(void)

longlong FUN_141329ca0(void)

{
  if (DAT_1468803b8 == 0) {
    FUN_141786a30(&DAT_1468803b8,&PTR_FUN_1462f9e90);
  }
  return DAT_1468803b8;
}



// FUNCTION 141329cd0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneLevelVisibilitySection::GetPrivateStaticClass(void)

{
  if (DAT_1468802d0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxCARMenuData",&DAT_1468802d0,FUN_140447710,0xf8,0x10000000,
                  0,L"Engine",&LAB_14132a2b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPawnAction_Sequence::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468802d0;
}



// FUNCTION 141329d80 FUN_141329d80 body=162 status=ok
// SIG undefined FUN_141329d80(void)

longlong FUN_141329d80(void)

{
  if (DAT_146880348 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxCARMenu",&DAT_146880348,FUN_14132c0d0,0x12d0,0x10000000,0,
                  L"Engine",&LAB_14132a130,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoUIInputKeySelector::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146880348;
}



// FUNCTION 141329e40 FUN_141329e40 body=162 status=ok
// SIG undefined FUN_141329e40(void)

longlong FUN_141329e40(void)

{
  if (DAT_1468803e8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxCARMenuStatLine",&DAT_1468803e8,FUN_140447710,0x1a0,
                  0x10000008,0,L"Engine",FUN_14132a4b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_1468803e8;
}



// FUNCTION 141329ef0 FUN_141329ef0 body=162 status=ok
// SIG undefined FUN_141329ef0(void)

longlong FUN_141329ef0(void)

{
  if (DAT_1468803f8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxCARMenuStatCard",&DAT_1468803f8,FUN_140447710,0x1b0,
                  0x10000008,0,L"Engine",FUN_14132a460,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_1468803f8;
}



// FUNCTION 141329fc0 FUN_141329fc0 body=356 status=ok
// SIG undefined FUN_141329fc0(void)

void FUN_141329fc0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140f5a170(puVar1,param_1);
    *puVar1 = &PTR_FUN_144842940;
    puVar1[0xc6] = 0;
    puVar1[199] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 0xc6,0);
    FGenericPlatformString::Memcpy(puVar1[0xc6],L"playerPet",0x14);
    puVar1[200] = 0;
    puVar1[0xc9] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 200,0);
    FGenericPlatformString::Memcpy(puVar1[200],L"player2",0x10);
    puVar1[0xca] = 0;
    puVar1[0xcb] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 0xca,0);
    FGenericPlatformString::Memcpy(puVar1[0xca],L"player3",0x10);
    puVar1[0xcc] = 0;
    puVar1[0xcd] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 0xcc,0);
    FGenericPlatformString::Memcpy(puVar1[0xcc],L"player4",0x10);
    puVar1[0xd1] = 0;
    puVar1[0xd5] = 0;
    puVar1[0xd6] = 0;
    puVar1[0xd7] = 0;
    *(undefined1 *)(puVar1 + 0xd8) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x6c4) = 0;
    *(undefined2 *)(puVar1 + 0xd9) = 0;
    puVar1[0xda] = 0;
    puVar1[0xdb] = 0;
    *(undefined1 *)(puVar1 + 0xdc) = 0;
  }
  return;
}



// FUNCTION 14132a150 FUN_14132a150 body=183 status=ok
// SIG undefined FUN_14132a150(void)

void FUN_14132a150(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x2f) = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x32] = 2;
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 2;
    *(undefined1 *)(puVar1 + 0x44) = 0;
    puVar1[0x45] = 0;
    puVar1[0x46] = 0;
    puVar1[0x47] = 0;
    puVar1[0x48] = 0;
    puVar1[0x49] = 0;
    puVar1[0x4a] = 0;
    puVar1[0x4b] = 0;
    puVar1[0x4c] = 0;
    *puVar1 = &PTR_FUN_1448443e8;
    puVar1[0x2e] = &PTR_LAB_144844690;
  }
  return;
}



// FUNCTION 14132a210 FUN_14132a210 body=96 status=ok
// SIG undefined FUN_14132a210(void)

void FUN_14132a210(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144843120;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    *(undefined4 *)(puVar1 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *(undefined1 *)(puVar1 + 0xd) = 0;
  }
  return;
}



// FUNCTION 14132a270 FUN_14132a270 body=64 status=ok
// SIG undefined FUN_14132a270(void)

void FUN_14132a270(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144843398;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
  }
  return;
}



// FUNCTION 14132a2d0 FUN_14132a2d0 body=388 status=ok
// SIG undefined FUN_14132a2d0(void)

void FUN_14132a2d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413205b0(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x5b) = 0xffffffff;
    puVar1[0x59] = 0;
    puVar1[0x5a] = 0;
    *(undefined1 *)((longlong)puVar1 + 0x2f4) = 0;
    puVar1[0x5f] = 0;
    *(undefined4 *)(puVar1 + 0x60) = 0;
    *puVar1 = &PTR_FUN_144844828;
    puVar1[0x2e] = &PTR_LAB_144844b58;
    *(undefined4 *)(puVar1 + 0x61) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x30c) = 0;
    puVar1[0x62] = 0;
    puVar1[99] = 0;
    *(undefined1 *)(puVar1 + 100) = 0;
    puVar1[0x65] = 0;
    puVar1[0x66] = 0;
    puVar1[0x67] = 0;
    puVar1[0x6b] = 0;
    puVar1[0x6c] = 0;
    *(undefined4 *)(puVar1 + 0x68) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x344) = 0;
    puVar1[0x6a] = 0;
    *(undefined4 *)(puVar1 + 0x6c) = 0;
    if (0x7fffffff < *(uint *)((longlong)puVar1 + 0x364)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 0x6b,0);
    }
    if ((undefined2 *)puVar1[0x6b] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[0x6b] = 0;
    }
    *(undefined8 *)((longlong)puVar1 + 0x344) = 0;
    *(undefined4 *)(puVar1 + 0x68) = 0xffffffff;
    puVar1[0x6a] = 0;
    *(undefined4 *)(puVar1 + 0x6c) = 0;
    if ((*(int *)((longlong)puVar1 + 0x364) < 0) && (*(int *)((longlong)puVar1 + 0x364) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 0x6b,0);
    }
    if ((undefined2 *)puVar1[0x6b] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[0x6b] = 0;
    }
    *(undefined4 *)(puVar1 + 0x69) = 0;
    puVar1[0x6d] = 0;
    puVar1[0x6e] = 0;
    puVar1[0x6f] = 0;
    puVar1[0x70] = 0;
    puVar1[0x71] = 0;
  }
  return;
}



// FUNCTION 14132a460 FUN_14132a460 body=66 status=ok
// SIG undefined FUN_14132a460(void)

void FUN_14132a460(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144844ea0;
    *(undefined2 *)(puVar1 + 0x2e) = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
  }
  return;
}



// FUNCTION 14132a4b0 FUN_14132a4b0 body=62 status=ok
// SIG undefined FUN_14132a4b0(void)

void FUN_14132a4b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x2e) = 0x41200000;
    *puVar1 = &PTR_FUN_144844bf8;
    puVar1[0x32] = 0;
  }
  return;
}



// FUNCTION 14132a4f0 FUN_14132a4f0 body=64 status=ok
// SIG undefined FUN_14132a4f0(void)

void FUN_14132a4f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448438e0;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
  }
  return;
}



// FUNCTION 14132a530 FUN_14132a530 body=253 status=ok
// SIG undefined FUN_14132a530(void)

void FUN_14132a530(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140f5a170(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0xc6) = 0x40a00000;
    *puVar1 = &PTR_FUN_144845148;
    *(undefined4 *)((longlong)puVar1 + 0x634) = 0x3f800000;
    *(undefined4 *)(puVar1 + 199) = 0x40a00000;
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (puVar1 + 200,L"COMPLETE!",L"GFxChallengeProgressWidget",L"ChallengeCompletedText");
    *(undefined4 *)(puVar1 + 0xcb) = 0;
    FUN_140d647e0(puVar1 + 0xcc);
    *(undefined4 *)(puVar1 + 0xe3) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x71c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x724) = 0;
    *(undefined4 *)(puVar1 + 0xe4) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x72c) = 0;
    *(undefined4 *)(puVar1 + 0xe5) = 0xffffffff;
    puVar1[0xe6] = 0;
    puVar1[0xe7] = 0;
    puVar1[0xe8] = 0;
    puVar1[0xe9] = 0;
    puVar1[0xea] = 0;
    puVar1[0xeb] = 0;
    puVar1[0xec] = 0;
    puVar1[0xee] = 0;
    puVar1[0xef] = 0;
    *(undefined1 *)(puVar1 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 14132a630 FUN_14132a630 body=213 status=ok
// SIG undefined FUN_14132a630(void)

undefined8 * FUN_14132a630(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140e9a2b0(param_1 + 2);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x19) = 5;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 1;
  FUN_140e9a2b0(param_1 + 0x1a);
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x31) = 5;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 1;
  param_1[0x32] = 0;
  return param_1;
}



// FUNCTION 14132a710 FUN_14132a710 body=169 status=ok
// SIG undefined FUN_14132a710(void)

longlong FUN_14132a710(longlong param_1)

{
  FText::FText();
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return param_1;
}



// FUNCTION 14132a7c0 FUN_14132a7c0 body=506 status=ok
// SIG undefined FUN_14132a7c0(void)

undefined8 * FUN_14132a7c0(undefined8 *param_1)

{
  FUN_14106e9c0();
  *param_1 = &PTR_FUN_1448425c8;
  param_1[0x2e] = 0;
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
  *(undefined1 *)((longlong)param_1 + 0x1e1) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x214) = 0;
  *(undefined1 *)((longlong)param_1 + 0x216) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0xbf800000;
  FWeakObjectPtr::operator=((longlong)param_1 + 0x21c,0);
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  return param_1;
}



// FUNCTION 14132a9c0 FUN_14132a9c0 body=319 status=ok
// SIG undefined FUN_14132a9c0(void)

undefined8 * FUN_14132a9c0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *(undefined4 *)(param_1 + 6) = 0x1010100;
  *(undefined2 *)((longlong)param_1 + 0x34) = 1;
  *param_1 = &PTR_FUN_1448180b0;
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x6c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xc,0);
  }
  if ((undefined2 *)param_1[0xc] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xc] = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((*(int *)((longlong)param_1 + 0x6c) < 0) && (*(int *)((longlong)param_1 + 0x6c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xc,0);
  }
  if ((undefined2 *)param_1[0xc] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xc] = 0;
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x40a00000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = &PTR_FUN_144843640;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  return param_1;
}



// FUNCTION 14132ab00 FUN_14132ab00 body=377 status=ok
// SIG undefined FUN_14132ab00(void)

void FUN_14132ab00(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x70);
    do {
      if (plVar7[2] != 0) {
        FMemory::Free();
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)plVar7[-3];
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
      plVar4 = (longlong *)plVar7[-6];
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
      plVar4 = (longlong *)plVar7[-10];
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
      plVar4 = (longlong *)plVar7[-0xd];
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
      plVar7 = plVar7 + 0x17;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14132ac80 FUN_14132ac80 body=191 status=ok
// SIG undefined FUN_14132ac80(void)

void FUN_14132ac80(longlong *param_1)

{
  if (param_1[0x2d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  if (param_1[0x20] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14132ad40 FUN_14132ad40 body=780 status=ok
// SIG undefined FUN_14132ad40(void)

void FUN_14132ad40(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x368);
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
  plVar4 = *(longlong **)(param_1 + 0x350);
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
  plVar4 = *(longlong **)(param_1 + 0x338);
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
  plVar4 = *(longlong **)(param_1 + 800);
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
  plVar4 = *(longlong **)(param_1 + 0x308);
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
  plVar4 = *(longlong **)(param_1 + 0x2f0);
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
  plVar4 = *(longlong **)(param_1 + 0x2d8);
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
  plVar4 = *(longlong **)(param_1 + 0x2c0);
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
  plVar4 = *(longlong **)(param_1 + 0x2a8);
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
  plVar4 = *(longlong **)(param_1 + 0x290);
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
  plVar4 = *(longlong **)(param_1 + 0x278);
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
  plVar4 = *(longlong **)(param_1 + 0x260);
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
  plVar4 = *(longlong **)(param_1 + 0x248);
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
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x1f0);
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
  plVar4 = *(longlong **)(param_1 + 0x1b8);
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
  plVar4 = *(longlong **)(param_1 + 0x1a8);
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
  FUN_140ce1dc0(param_1 + 0xa0);
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  FUN_141782120(param_1);
  return;
}



// FUNCTION 14132b050 FUN_14132b050 body=180 status=ok
// SIG undefined FUN_14132b050(void)

void FUN_14132b050(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x198);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x180);
  *(undefined ***)(param_1 + 0x170) = &PTR_FUN_14468d298;
  FUN_140ce1dc0(param_1 + 0xa0);
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  FUN_141782120(param_1);
  return;
}



// FUNCTION 14132b110 FUN_14132b110 body=364 status=ok
// SIG undefined FUN_14132b110(void)

undefined1 * FUN_14132b110(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[0x10] = param_2[0x10];
  FString::operator=(param_1 + 0x18,param_2 + 0x18);
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  FString::operator=(param_1 + 0x30,param_2 + 0x30);
  FString::operator=(param_1 + 0x40,param_2 + 0x40);
  FString::operator=(param_1 + 0x50,param_2 + 0x50);
  param_1[0x60] = param_2[0x60];
  param_1[0x61] = param_2[0x61];
  param_1[0x62] = param_2[0x62];
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 100);
  param_1[0x6c] = param_2[0x6c];
  param_1[0x6d] = param_2[0x6d];
  param_1[0x6e] = param_2[0x6e];
  param_1[0x6f] = param_2[0x6f];
  param_1[0x70] = param_2[0x70];
  param_1[0x71] = param_2[0x71];
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  param_1[0x88] = param_2[0x88];
  param_1[0x89] = param_2[0x89];
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  FString::operator=(param_1 + 0x98,param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  return param_1;
}



// FUNCTION 14132b2a0 FUN_14132b2a0 body=52 status=ok
// SIG undefined FUN_14132b2a0(void)

undefined8 FUN_14132b2a0(undefined8 param_1,ulonglong param_2)

{
  FUN_14132ad40();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x370);
  }
  return param_1;
}



// FUNCTION 14132b2e0 FUN_14132b2e0 body=141 status=ok
// SIG undefined FUN_14132b2e0(void)

longlong FUN_14132b2e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x660) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x650) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x640) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x630) != 0) {
    FMemory::Free();
  }
  FUN_140f5a560(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6f0);
  }
  return param_1;
}



// FUNCTION 14132b370 FUN_14132b370 body=52 status=ok
// SIG undefined FUN_14132b370(void)

undefined8 FUN_14132b370(undefined8 param_1,ulonglong param_2)

{
  FUN_14132b050();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x280);
  }
  return param_1;
}



// FUNCTION 14132b3b0 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FOpenGLBufferedGPUTiming::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14132b410 FUN_14132b410 body=108 status=ok
// SIG undefined FUN_14132b410(void)

longlong FUN_14132b410(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_140ce1dc0(param_1 + 0xa0);
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 14132b480 FUN_14132b480 body=130 status=ok
// SIG undefined FUN_14132b480(void)

longlong FUN_14132b480(longlong param_1,ulonglong param_2)

{
  FBindingList::~FBindingList(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 14132b510 FUN_14132b510 body=102 status=ok
// SIG undefined FUN_14132b510(void)

longlong FUN_14132b510(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f8);
  FUN_141320cb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3e0);
  }
  return param_1;
}



// FUNCTION 14132b580 FUN_14132b580 body=125 status=ok
// SIG undefined FUN_14132b580(void)

longlong FUN_14132b580(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  FUN_140ce1dc0(param_1 + 0xa0);
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 14132b600 FUN_14132b600 body=108 status=ok
// SIG undefined FUN_14132b600(void)

longlong FUN_14132b600(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_140ce1dc0(param_1 + 0xa0);
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 14132b670 FUN_14132b670 body=159 status=ok
// SIG undefined FUN_14132b670(void)

longlong FUN_14132b670(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_14132ab00(param_1 + 0x770);
  FUN_140d65f50(param_1 + 0x660);
  plVar4 = *(longlong **)(param_1 + 0x648);
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
  FUN_140f5a560(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x790);
  }
  return param_1;
}



// FUNCTION 14132b710 FUN_14132b710 body=52 status=ok
// SIG undefined FUN_14132b710(void)

undefined8 FUN_14132b710(undefined8 param_1,ulonglong param_2)

{
  FUN_14132b050();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x270);
  }
  return param_1;
}



// FUNCTION 14132b780 Construct body=38 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FRigUnit_PowerIK>::Construct(undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x198);
  FUN_14132a630(param_2);
  return;
}



// FUNCTION 14132b7b0 Construct body=38 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FOnlineProxyStoreOffer>::Construct
               (undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0xe8);
  FUN_14132a710(param_2);
  return;
}



// FUNCTION 14132b7e0 Construct body=36 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FSubtitleInfo>::Construct(undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x60);
  FUN_1410b31f0(param_2);
  return;
}



// FUNCTION 14132b810 FUN_14132b810 body=38 status=ok
// SIG undefined FUN_14132b810(void)

void FUN_14132b810(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0xb8);
  FUN_140d647e0(param_2);
  return;
}



// FUNCTION 14132b840 FUN_14132b840 body=137 status=ok
// SIG undefined FUN_14132b840(void)

undefined8 FUN_14132b840(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0xd0;
    do {
      FString::operator=(param_2 + -0xd0,param_3 + -0xd0 + param_2);
      FUN_14132b110(param_2 + -0xc0,param_3 + -0xc0 + param_2);
      FUN_14132b110(param_2,param_3 + param_2);
      *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(param_3 + 0xc0 + param_2);
      param_2 = param_2 + 0x198;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14132b8d0 FUN_14132b8d0 body=290 status=ok
// SIG undefined FUN_14132b8d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14132b8d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    do {
      local_48 = *(undefined8 *)(param_3 + -8);
      FString::FString(local_40,param_3);
      FSoftObjectPath::operator=(param_2,&local_48);
      plVar4 = *(longlong **)(param_3 + 0x18);
      puVar7 = (undefined8 *)(param_2 + 0x18);
      uVar5 = *(undefined8 *)(param_3 + 0x10);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_58 = uVar5;
      plStack_50 = plVar4;
      if (&local_58 != puVar7) {
        local_58 = *puVar7;
        plStack_50 = *(longlong **)(param_2 + 0x20);
        *puVar7 = uVar5;
        *(longlong **)(param_2 + 0x20) = plVar4;
        local_30 = uVar5;
        plStack_28 = plVar4;
      }
      plVar4 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_50 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_50 + 8))(plStack_50,1);
          }
        }
      }
      param_3 = param_3 + 0x28;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x28;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14132ba00 FUN_14132ba00 body=305 status=ok
// SIG undefined FUN_14132ba00(void)

undefined8 FUN_14132ba00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x70;
    do {
      FText::operator=(param_2 + -0x70,param_3 + -0x70 + param_2);
      *(undefined2 *)(param_2 + -0x58) = *(undefined2 *)(param_3 + -0x58 + param_2);
      FString::operator=(param_2 + -0x50,param_3 + -0x50 + param_2);
      FString::operator=(param_2 + -0x40,param_3 + -0x40 + param_2);
      FString::operator=(param_2 + -0x30,param_3 + -0x30 + param_2);
      FString::operator=(param_2 + -0x20,param_3 + -0x20 + param_2);
      FString::operator=(param_2 + -0x10,param_3 + -0x10 + param_2);
      FString::operator=(param_2,param_3 + param_2);
      FString::operator=(param_2 + 0x10,param_3 + 0x10 + param_2);
      FString::operator=(param_2 + 0x20,param_3 + 0x20 + param_2);
      FString::operator=(param_2 + 0x30,param_3 + 0x30 + param_2);
      FString::operator=(param_2 + 0x40,param_3 + 0x40 + param_2);
      FString::operator=(param_2 + 0x50,param_3 + 0x50 + param_2);
      *(undefined1 *)(param_2 + 0x60) = *(undefined1 *)(param_3 + 0x60 + param_2);
      *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_3 + 0x68 + param_2);
      *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x70 + param_3);
      param_2 = param_2 + 0xe8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14132bb40 FUN_14132bb40 body=308 status=ok
// SIG undefined FUN_14132bb40(void)

undefined8 FUN_14132bb40(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  int *piVar3;
  undefined8 local_48;
  undefined1 local_40 [24];
  
  if (param_4 != 0) {
    piVar3 = (int *)(param_3 + 0x10);
    do {
      *param_2 = *(undefined8 *)(piVar3 + -4);
      piVar1 = (int *)(param_2 + 1);
      if (piVar1 != piVar3 + -2) {
        iVar2 = *piVar3;
        _Src = *(void **)(piVar3 + -2);
        *(int *)(param_2 + 2) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x14) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar1,iVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,_Src,(longlong)iVar2 << 3);
        }
      }
      param_2[3] = *(undefined8 *)(piVar3 + 2);
      param_2[4] = *(undefined8 *)(piVar3 + 4);
      *(int *)(param_2 + 5) = piVar3[6];
      *(int *)((longlong)param_2 + 0x2c) = piVar3[7];
      *(int *)(param_2 + 6) = piVar3[8];
      local_48 = *(undefined8 *)(piVar3 + 10);
      FString::FString(local_40,piVar3 + 0xc);
      FSoftObjectPath::operator=(param_2 + 7,&local_48);
      *(char *)(param_2 + 10) = (char)piVar3[0x10];
      *(undefined1 *)((longlong)param_2 + 0x51) = *(undefined1 *)((longlong)piVar3 + 0x41);
      *(int *)((longlong)param_2 + 0x54) = piVar3[0x11];
      *(int *)(param_2 + 0xb) = piVar3[0x12];
      piVar1 = piVar3 + 0x13;
      piVar3 = piVar3 + 0x18;
      *(int *)((longlong)param_2 + 0x5c) = *piVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xc;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14132bc80 FUN_14132bc80 body=289 status=ok
// SIG undefined FUN_14132bc80(void)

undefined8 FUN_14132bc80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x30);
    do {
      FText::operator=(puVar1 + -0x30,puVar1 + param_3 + -0x30);
      FText::operator=(puVar1 + -0x18,puVar1 + param_3 + -0x18);
      *puVar1 = puVar1[param_3];
      FText::operator=(puVar1 + 8,puVar1 + param_3 + 8);
      FText::operator=(puVar1 + 0x20,puVar1 + param_3 + 0x20);
      puVar1[0x38] = puVar1[param_3 + 0x38];
      FString::operator=(puVar1 + 0x40,puVar1 + param_3 + 0x40);
      FString::operator=(puVar1 + 0x50,puVar1 + param_3 + 0x50);
      puVar1[0x60] = puVar1[param_3 + 0x60];
      puVar1[0x61] = puVar1[param_3 + 0x61];
      puVar1[0x62] = puVar1[param_3 + 0x62];
      *(undefined4 *)(puVar1 + 100) = *(undefined4 *)(puVar1 + param_3 + 100);
      *(undefined4 *)(puVar1 + 0x68) = *(undefined4 *)(puVar1 + param_3 + 0x68);
      *(undefined4 *)(puVar1 + 0x6c) = *(undefined4 *)(puVar1 + param_3 + 0x6c);
      puVar1[0x70] = puVar1[param_3 + 0x70];
      puVar1[0x71] = puVar1[param_3 + 0x71];
      *(undefined8 *)(puVar1 + 0x78) = *(undefined8 *)(puVar1 + param_3 + 0x78);
      puVar1[0x80] = puVar1[param_3 + 0x80];
      *(undefined4 *)(puVar1 + 0x84) = *(undefined4 *)(puVar1 + param_3 + 0x84);
      puVar1 = puVar1 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14132bde0 FUN_14132bde0 body=55 status=ok
// SIG undefined FUN_14132bde0(void)

void FUN_14132bde0(void)

{
  undefined8 uVar1;
  
  if (DAT_14687fd88 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687fd88 = GetStaticEnum(FUN_14132c5b0,uVar1,L"EBuddyWidgetContainerAnimState");
  }
  return;
}



// FUNCTION 14132be20 FUN_14132be20 body=55 status=ok
// SIG undefined FUN_14132be20(void)

void FUN_14132be20(void)

{
  undefined8 uVar1;
  
  if (DAT_14687fd78 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687fd78 = GetStaticEnum(FUN_14132c5e0,uVar1,L"EBuddyWidgetFanfareState");
  }
  return;
}



// FUNCTION 14132be60 FUN_14132be60 body=55 status=ok
// SIG undefined FUN_14132be60(void)

void FUN_14132be60(void)

{
  undefined8 uVar1;
  
  if (DAT_14687fd80 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687fd80 = GetStaticEnum(FUN_14132c610,uVar1,L"EBuddyWidgetState");
  }
  return;
}



// FUNCTION 14132bea0 FUN_14132bea0 body=55 status=ok
// SIG undefined FUN_14132bea0(void)

void FUN_14132bea0(void)

{
  undefined8 uVar1;
  
  if (DAT_14687fd90 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687fd90 = GetStaticEnum(FUN_14132c640,uVar1,L"EGFxCARMenuPage");
  }
  return;
}



// FUNCTION 14132bee0 FUN_14132bee0 body=55 status=ok
// SIG undefined FUN_14132bee0(void)

void FUN_14132bee0(void)

{
  undefined8 uVar1;
  
  if (DAT_14687fda0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687fda0 = GetStaticEnum(FUN_14132c670,uVar1,L"EGFxCARMenuPartCellType");
  }
  return;
}



// FUNCTION 14132bf20 FUN_14132bf20 body=55 status=ok
// SIG undefined FUN_14132bf20(void)

void FUN_14132bf20(void)

{
  undefined8 uVar1;
  
  if (DAT_14687fd98 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687fd98 = GetStaticEnum(FUN_14132c6a0,uVar1,L"EGFxChallegeProgressWidgetState");
  }
  return;
}



// FUNCTION 14132bf60 FUN_14132bf60 body=6 status=ok
// SIG undefined FUN_14132bf60(void)

undefined8 FUN_14132bf60(void)

{
  return 0xe246e0db;
}



// FUNCTION 14132bf70 FUN_14132bf70 body=6 status=ok
// SIG undefined FUN_14132bf70(void)

undefined8 FUN_14132bf70(void)

{
  return 0x13cc59bd;
}



// FUNCTION 14132bf80 FUN_14132bf80 body=6 status=ok
// SIG undefined FUN_14132bf80(void)

undefined8 FUN_14132bf80(void)

{
  return 0xdb623589;
}



// FUNCTION 14132bf90 FUN_14132bf90 body=6 status=ok
// SIG undefined FUN_14132bf90(void)

undefined8 FUN_14132bf90(void)

{
  return 0x93bc7ab5;
}



// FUNCTION 14132bfa0 FUN_14132bfa0 body=6 status=ok
// SIG undefined FUN_14132bfa0(void)

undefined8 FUN_14132bfa0(void)

{
  return 0x9381687b;
}



// FUNCTION 14132bfb0 FUN_14132bfb0 body=6 status=ok
// SIG undefined FUN_14132bfb0(void)

undefined8 FUN_14132bfb0(void)

{
  return 0x137f4aec;
}



// FUNCTION 14132bfc0 FUN_14132bfc0 body=6 status=ok
// SIG undefined FUN_14132bfc0(void)

undefined8 FUN_14132bfc0(void)

{
  return 0xa89dfd8a;
}



// FUNCTION 14132bfd0 FUN_14132bfd0 body=6 status=ok
// SIG undefined FUN_14132bfd0(void)

undefined8 FUN_14132bfd0(void)

{
  return 0x4d14fe90;
}



// FUNCTION 14132c060 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UXAnimInstanceBase::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 14132c070 FUN_14132c070 body=34 status=ok
// SIG undefined FUN_14132c070(void)

void FUN_14132c070(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141328ce0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnDownStateExitReasonChanged_144842910,3)
  ;
  return;
}



// FUNCTION 14132c0a0 FUN_14132c0a0 body=34 status=ok
// SIG undefined FUN_14132c0a0(void)

void FUN_14132c0a0(void)

{
  undefined8 uVar1;
  
  uVar1 = AGImpulseWindProjectile::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_extFanfareAnimationFinished_1448430b0,7);
  return;
}



// FUNCTION 14132c0d0 FUN_14132c0d0 body=34 status=ok
// SIG undefined FUN_14132c0d0(void)

void FUN_14132c0d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141329d80();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_extBodyUnlockAnimFinished_144844020,0xd);
  return;
}



// FUNCTION 14132c100 FUN_14132c100 body=34 status=ok
// SIG undefined FUN_14132c100(void)

void FUN_14132c100(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413290f0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnCellClicked_1448447f8,3);
  return;
}



// FUNCTION 14132c130 StaticRegisterNativesALobbyBeaconPlayerState body=34 status=ok
// SIG undefined StaticRegisterNativesALobbyBeaconPlayerState(void)

void ALobbyBeaconPlayerState::StaticRegisterNativesALobbyBeaconPlayerState(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnThisClicked_144844bd8,2);
  return;
}



// FUNCTION 14132c160 StaticRegisterNativesAUGWeapon_Hook body=34 status=ok
// SIG undefined StaticRegisterNativesAUGWeapon_Hook(void)

void AUGWeapon_Hook::StaticRegisterNativesAUGWeapon_Hook(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_extOnRollOnComplete_1448458e0,9);
  return;
}



// FUNCTION 14132c190 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146880218 == 0) {
    uVar1 = FUN_14132bf60();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146880218 = GetStaticStruct(FUN_14132c6d0,uVar2,L"GFxBuddyWidgetAnimQueueItem",0x10,uVar1);
  }
  return;
}



// FUNCTION 14132c1f0 FUN_14132c1f0 body=82 status=ok
// SIG undefined FUN_14132c1f0(void)

void FUN_14132c1f0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146880370 == 0) {
    uVar1 = FUN_14132bf70();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146880370 = GetStaticStruct(FUN_14132c700,uVar2,L"GFxCARMenuCustomizePageConfig",0x20,uVar1)
    ;
  }
  return;
}



// FUNCTION 14132c250 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneAudioSectionTemplateData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146880288 == 0) {
    uVar1 = FUN_14132bf80();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146880288 = GetStaticStruct(FUN_14132c730,uVar2,L"GFxCARMenuListData",0x198,uVar1);
  }
  return;
}



// FUNCTION 14132c2b0 FUN_14132c2b0 body=82 status=ok
// SIG undefined FUN_14132c2b0(void)

void FUN_14132c2b0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146880298 == 0) {
    uVar1 = FUN_14132bf90();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146880298 = GetStaticStruct(FUN_14132c760,uVar2,L"GFxCARMenuLoadAssetInfo",0x28,uVar1);
  }
  return;
}



// FUNCTION 14132c310 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FStarSystemBlackboard::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468802a8 == 0) {
    uVar1 = FUN_14132bfa0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468802a8 = GetStaticStruct(FUN_14132c790,uVar2,L"GFxCARMenuPartInfo",0xe8,uVar1);
  }
  return;
}



// FUNCTION 14132c370 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146880278 == 0) {
    uVar1 = FUN_14132bfb0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146880278 = GetStaticStruct(FUN_14132c7c0,uVar2,L"GFxCARPreviewData",0x60,uVar1);
  }
  return;
}



// FUNCTION 14132c3d0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneParticleSectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146880408 == 0) {
    uVar1 = FUN_14132bfc0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146880408 = GetStaticStruct(FUN_14132c7f0,uVar2,L"GFxChallengeProgressItem",0xb8,uVar1);
  }
  return;
}



// FUNCTION 14132c430 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468803d0 == 0) {
    uVar1 = FUN_14132bfd0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468803d0 = GetStaticStruct(FUN_14132c820,uVar2,L"OakCARMenuStatCardStatInfo",0x10,uVar1);
  }
  return;
}



// FUNCTION 14132c490 FUN_14132c490 body=47 status=ok
// SIG undefined FUN_14132c490(void)

longlong FUN_14132c490(void)

{
  if (DAT_146880360 == 0) {
    FUN_141786440(&DAT_146880360,&PTR_FUN_1448414f0);
  }
  return DAT_146880360;
}



// FUNCTION 14132c4c0 FUN_14132c4c0 body=47 status=ok
// SIG undefined FUN_14132c4c0(void)

longlong FUN_14132c4c0(void)

{
  if (DAT_1468802b8 == 0) {
    FUN_141786440(&DAT_1468802b8,&PTR_GetPrivateStaticClass_14483e900);
  }
  return DAT_1468802b8;
}



// FUNCTION 14132c4f0 FUN_14132c4f0 body=47 status=ok
// SIG undefined FUN_14132c4f0(void)

longlong FUN_14132c4f0(void)

{
  if (DAT_1468802c8 == 0) {
    FUN_141786440(&DAT_1468802c8,&PTR_GetPrivateStaticClass_14483eac0);
  }
  return DAT_1468802c8;
}



// FUNCTION 14132c520 FUN_14132c520 body=47 status=ok
// SIG undefined FUN_14132c520(void)

longlong FUN_14132c520(void)

{
  if (DAT_1468803f0 == 0) {
    FUN_141786440(&DAT_1468803f0,&PTR_FUN_14483d700);
  }
  return DAT_1468803f0;
}



// FUNCTION 14132c550 FUN_14132c550 body=47 status=ok
// SIG undefined FUN_14132c550(void)

longlong FUN_14132c550(void)

{
  if (DAT_1468803e0 == 0) {
    FUN_141786440(&DAT_1468803e0,&PTR_FUN_14483d200);
  }
  return DAT_1468803e0;
}



// FUNCTION 14132c580 FUN_14132c580 body=47 status=ok
// SIG undefined FUN_14132c580(void)

longlong FUN_14132c580(void)

{
  if (DAT_146880350 == 0) {
    FUN_141786440(&DAT_146880350,&PTR_GetPrivateStaticClass_144840520);
  }
  return DAT_146880350;
}



// FUNCTION 14132c5b0 FUN_14132c5b0 body=47 status=ok
// SIG undefined FUN_14132c5b0(void)

longlong FUN_14132c5b0(void)

{
  if (DAT_146880210 == 0) {
    FUN_1417866a0(&DAT_146880210,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462fba80);
  }
  return DAT_146880210;
}



// FUNCTION 14132c5e0 FUN_14132c5e0 body=47 status=ok
// SIG undefined FUN_14132c5e0(void)

longlong FUN_14132c5e0(void)

{
  if (DAT_1468801d8 == 0) {
    FUN_1417866a0(&DAT_1468801d8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462fb9e0);
  }
  return DAT_1468801d8;
}



// FUNCTION 14132c610 FUN_14132c610 body=47 status=ok
// SIG undefined FUN_14132c610(void)

longlong FUN_14132c610(void)

{
  if (DAT_1468801e0 == 0) {
    FUN_1417866a0(&DAT_1468801e0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462fba30);
  }
  return DAT_1468801e0;
}



// FUNCTION 14132c640 FUN_14132c640 body=47 status=ok
// SIG undefined FUN_14132c640(void)

longlong FUN_14132c640(void)

{
  if (DAT_146880270 == 0) {
    FUN_1417866a0(&DAT_146880270,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462fbad0);
  }
  return DAT_146880270;
}



// FUNCTION 14132c670 FUN_14132c670 body=47 status=ok
// SIG undefined FUN_14132c670(void)

longlong FUN_14132c670(void)

{
  if (DAT_1468803a8 == 0) {
    FUN_1417866a0(&DAT_1468803a8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462fbb20);
  }
  return DAT_1468803a8;
}



// FUNCTION 14132c6a0 FUN_14132c6a0 body=47 status=ok
// SIG undefined FUN_14132c6a0(void)

longlong FUN_14132c6a0(void)

{
  if (DAT_146880400 == 0) {
    FUN_1417866a0(&DAT_146880400,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462fbb70);
  }
  return DAT_146880400;
}



// FUNCTION 14132c6d0 FUN_14132c6d0 body=47 status=ok
// SIG undefined FUN_14132c6d0(void)

longlong FUN_14132c6d0(void)

{
  if (DAT_146880220 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146880220,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462f6d80);
  }
  return DAT_146880220;
}



// FUNCTION 14132c700 FUN_14132c700 body=47 status=ok
// SIG undefined FUN_14132c700(void)

longlong FUN_14132c700(void)

{
  if (DAT_146880378 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146880378,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462f9910);
  }
  return DAT_146880378;
}



// FUNCTION 14132c730 FUN_14132c730 body=47 status=ok
// SIG undefined FUN_14132c730(void)

longlong FUN_14132c730(void)

{
  if (DAT_146880290 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146880290,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462f7580);
  }
  return DAT_146880290;
}



// FUNCTION 14132c760 FUN_14132c760 body=47 status=ok
// SIG undefined FUN_14132c760(void)

longlong FUN_14132c760(void)

{
  if (DAT_1468802a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468802a0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462f7610);
  }
  return DAT_1468802a0;
}



// FUNCTION 14132c790 FUN_14132c790 body=47 status=ok
// SIG undefined FUN_14132c790(void)

longlong FUN_14132c790(void)

{
  if (DAT_1468802b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468802b0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462f78e0);
  }
  return DAT_1468802b0;
}



// FUNCTION 14132c7c0 FUN_14132c7c0 body=47 status=ok
// SIG undefined FUN_14132c7c0(void)

longlong FUN_14132c7c0(void)

{
  if (DAT_146880280 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146880280,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462f7430);
  }
  return DAT_146880280;
}



// FUNCTION 14132c7f0 FUN_14132c7f0 body=47 status=ok
// SIG undefined FUN_14132c7f0(void)

longlong FUN_14132c7f0(void)

{
  if (DAT_146880410 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146880410,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462fae40);
  }
  return DAT_146880410;
}



// FUNCTION 14132c820 FUN_14132c820 body=47 status=ok
// SIG undefined FUN_14132c820(void)

longlong FUN_14132c820(void)

{
  if (DAT_1468803d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468803d8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462fa570);
  }
  return DAT_1468803d8;
}



// FUNCTION 14132c850 FUN_14132c850 body=164 status=ok
// SIG undefined FUN_14132c850(void)

void FUN_14132c850(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_1410cd340(param_1,local_18);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14132c900 execOnTargetUnavailable body=128 status=ok
// SIG undefined execOnTargetUnavailable(void)

void ARemnantSpectatorPawn::execOnTargetUnavailable(undefined8 param_1,longlong param_2)

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
  OnTargetUnavailable(param_1,local_res10);
  return;
}



// FUNCTION 14132c9a0 FUN_14132c9a0 body=157 status=ok
// SIG undefined FUN_14132c9a0(void)

void FUN_14132c9a0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_a;
  
  local_10 = 0xffffffff;
  local_18 = 0;
  local_c = 0;
  local_a = 0;
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
  FUN_1410d3d40(param_1,puVar1);
  return;
}



// FUNCTION 14132ca40 FUN_14132ca40 body=157 status=ok
// SIG undefined FUN_14132ca40(void)

void FUN_14132ca40(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_a;
  
  local_10 = 0xffffffff;
  local_18 = 0;
  local_c = 0;
  local_a = 0;
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
  FUN_1410d3de0(param_1,puVar1);
  return;
}



// FUNCTION 14132cae0 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140eee7b0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 14132cba0 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140eee8d0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 14132cc60 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140eeeb80(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 14132cd20 FUN_14132cd20 body=398 status=ok
// SIG undefined FUN_14132cd20(void)

void FUN_14132cd20(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  int local_res20 [2];
  undefined4 local_38 [2];
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
  FUN_140eeed50(param_1,local_28[0],local_30,local_38[0],bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 14132ceb0 FUN_14132ceb0 body=317 status=ok
// SIG undefined FUN_14132ceb0(void)

void FUN_14132ceb0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  int local_res20 [2];
  undefined4 local_28;
  undefined4 local_24 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_24);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_24);
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
  local_28 = 0;
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1410d41b0(param_1,local_24[0],bVar1,local_28,local_res20[0] != 0);
  return;
}



// FUNCTION 14132cff0 FUN_14132cff0 body=118 status=ok
// SIG undefined FUN_14132cff0(void)

void FUN_14132cff0(undefined8 param_1,longlong param_2)

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
  FUN_140ef1be0(param_1,local_res10[0]);
  return;
}



// FUNCTION 14132d090 FUN_14132d090 body=334 status=ok
// SIG undefined FUN_14132d090(void)

void FUN_14132d090(long param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 14132d1e0 FUN_14132d1e0 body=188 status=ok
// SIG undefined FUN_14132d1e0(void)

void FUN_14132d1e0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
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
  FUN_140efbef0(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 14132d2a0 FUN_14132d2a0 body=334 status=ok
// SIG undefined FUN_14132d2a0(void)

void FUN_14132d2a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1410dea20(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 14132d3f0 FUN_14132d3f0 body=128 status=ok
// SIG undefined FUN_14132d3f0(void)

void FUN_14132d3f0(undefined8 param_1,longlong param_2)

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
  FUN_140efce20(param_1,local_res10);
  return;
}



// FUNCTION 14132d490 FUN_14132d490 body=128 status=ok
// SIG undefined FUN_14132d490(void)

void FUN_14132d490(undefined8 param_1,longlong param_2)

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
  thunk_FUN_140f05790(param_1,local_res10);
  return;
}



// FUNCTION 14132d570 FUN_14132d570 body=317 status=ok
// SIG undefined FUN_14132d570(void)

void FUN_14132d570(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  int local_res20 [2];
  undefined4 local_28;
  undefined4 local_24 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_24);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_24);
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
  local_28 = 0;
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1410df600(param_1,local_24[0],bVar1,local_28,local_res20[0] != 0);
  return;
}



// FUNCTION 14132d6b0 FUN_14132d6b0 body=334 status=ok
// SIG undefined FUN_14132d6b0(void)

void FUN_14132d6b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1410e3550(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 14132d800 FUN_14132d800 body=334 status=ok
// SIG undefined FUN_14132d800(void)

void FUN_14132d800(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1410e3650(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 14132d9b0 FUN_14132d9b0 body=157 status=ok
// SIG undefined FUN_14132d9b0(void)

void FUN_14132d9b0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_a;
  
  local_10 = 0xffffffff;
  local_18 = 0;
  local_c = 0;
  local_a = 0;
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
  FUN_1410e3e00(param_1,puVar1);
  return;
}



// FUNCTION 14132da50 FUN_14132da50 body=128 status=ok
// SIG undefined FUN_14132da50(void)

void FUN_14132da50(undefined8 param_1,longlong param_2)

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
  FUN_1410e4070(param_1,local_res10);
  return;
}



// FUNCTION 14132daf0 FUN_14132daf0 body=148 status=ok
// SIG undefined FUN_14132daf0(void)

void FUN_14132daf0(undefined8 param_1,longlong param_2)

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
  FUN_140f12010(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14132dbb0 FUN_14132dbb0 body=148 status=ok
// SIG undefined FUN_14132dbb0(void)

void FUN_14132dbb0(undefined8 param_1,longlong param_2)

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
  FUN_140f12620(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14132dc50 FUN_14132dc50 body=148 status=ok
// SIG undefined FUN_14132dc50(void)

void FUN_14132dc50(undefined8 param_1,longlong param_2)

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
  thunk_FUN_140f036b0(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14132dd10 FUN_14132dd10 body=53 status=ok
// SIG undefined FUN_14132dd10(void)

void FUN_14132dd10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_1448559b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14132dd50 FUN_14132dd50 body=47 status=ok
// SIG undefined FUN_14132dd50(void)

longlong FUN_14132dd50(void)

{
  if (DAT_146880aa8 == 0) {
    FUN_141786440(&DAT_146880aa8,&PTR_FUN_144846230);
  }
  return DAT_146880aa8;
}



// FUNCTION 14132dd80 FUN_14132dd80 body=47 status=ok
// SIG undefined FUN_14132dd80(void)

longlong FUN_14132dd80(void)

{
  if (DAT_146880a78 == 0) {
    FUN_141786a30(&DAT_146880a78,&PTR_FUN_1462feac0);
  }
  return DAT_146880a78;
}



// FUNCTION 14132ddb0 FUN_14132ddb0 body=47 status=ok
// SIG undefined FUN_14132ddb0(void)

longlong FUN_14132ddb0(void)

{
  if (DAT_146880a80 == 0) {
    FUN_141786a30(&DAT_146880a80,&PTR_FUN_1462feb40);
  }
  return DAT_146880a80;
}



// FUNCTION 14132dde0 FUN_14132dde0 body=47 status=ok
// SIG undefined FUN_14132dde0(void)

longlong FUN_14132dde0(void)

{
  if (DAT_146880a88 == 0) {
    FUN_141786a30(&DAT_146880a88,&PTR_FUN_1462febc0);
  }
  return DAT_146880a88;
}



// FUNCTION 14132de10 FUN_14132de10 body=47 status=ok
// SIG undefined FUN_14132de10(void)

longlong FUN_14132de10(void)

{
  if (DAT_146880a90 == 0) {
    FUN_141786a30(&DAT_146880a90,&PTR_FUN_1462fec40);
  }
  return DAT_146880a90;
}



// FUNCTION 14132de40 FUN_14132de40 body=47 status=ok
// SIG undefined FUN_14132de40(void)

longlong FUN_14132de40(void)

{
  if (DAT_146880a98 == 0) {
    FUN_141786a30(&DAT_146880a98,&PTR_FUN_1462fecc0);
  }
  return DAT_146880a98;
}



// FUNCTION 14132de70 FUN_14132de70 body=47 status=ok
// SIG undefined FUN_14132de70(void)

longlong FUN_14132de70(void)

{
  if (DAT_146880aa0 == 0) {
    FUN_141786a30(&DAT_146880aa0,&PTR_FUN_1462fed40);
  }
  return DAT_146880aa0;
}



// FUNCTION 14132dea0 FUN_14132dea0 body=53 status=ok
// SIG undefined FUN_14132dea0(void)

void FUN_14132dea0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1448542a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14132df00 FUN_14132df00 body=53 status=ok
// SIG undefined FUN_14132df00(void)

void FUN_14132df00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144855ad0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14132df40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UFGPoleDescriptor::GetPrivateStaticClass(void)

{
  if (DAT_146880b20 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxControlsBasicOptions",&DAT_146880b20,FUN_141331440,0x198,
                  0x10000000,0,L"Engine",FUN_14132f810,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UParticleLODLevel::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146880b20;
}



// FUNCTION 14132e000 FUN_14132e000 body=53 status=ok
// SIG undefined FUN_14132e000(void)

void FUN_14132e000(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144855be8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14132e040 FUN_14132e040 body=47 status=ok
// SIG undefined FUN_14132e040(void)

longlong FUN_14132e040(void)

{
  if (DAT_146880920 == 0) {
    FUN_141786440(&DAT_146880920,&PTR_StaticClass_144847800);
  }
  return DAT_146880920;
}



// FUNCTION 14132e070 FUN_14132e070 body=47 status=ok
// SIG undefined FUN_14132e070(void)

longlong FUN_14132e070(void)

{
  if (DAT_146880900 == 0) {
    FUN_141786a30(&DAT_146880900,&PTR_FUN_1462fbf60);
  }
  return DAT_146880900;
}



// FUNCTION 14132e0a0 FUN_14132e0a0 body=47 status=ok
// SIG undefined FUN_14132e0a0(void)

longlong FUN_14132e0a0(void)

{
  if (DAT_146880908 == 0) {
    FUN_141786a30(&DAT_146880908,&PTR_FUN_1462fc020);
  }
  return DAT_146880908;
}



// FUNCTION 14132e0d0 FUN_14132e0d0 body=47 status=ok
// SIG undefined FUN_14132e0d0(void)

longlong FUN_14132e0d0(void)

{
  if (DAT_146880910 == 0) {
    FUN_141786a30(&DAT_146880910,&PTR_FUN_1462fc060);
  }
  return DAT_146880910;
}



// FUNCTION 14132e100 FUN_14132e100 body=47 status=ok
// SIG undefined FUN_14132e100(void)

longlong FUN_14132e100(void)

{
  if (DAT_146880918 == 0) {
    FUN_141786a30(&DAT_146880918,&PTR_FUN_1462fc120);
  }
  return DAT_146880918;
}


