// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1412ed060 FUN_1412ed060 body=43 status=ok
// SIG undefined FUN_1412ed060(void)

void FUN_1412ed060(undefined8 param_1,longlong param_2)

{
  FRichCurve::~FRichCurve(param_2 + 0x60);
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1412ed090 FUN_1412ed090 body=89 status=ok
// SIG undefined FUN_1412ed090(void)

void FUN_1412ed090(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<FDialogStruct,TSizedDefaultAllocator<32>_>::
  ~TArray<FDialogStruct,TSizedDefaultAllocator<32>_>(param_2 + 0x18);
  plVar4 = *(longlong **)(param_2 + 8);
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



// FUNCTION 1412ed0f0 FUN_1412ed0f0 body=94 status=ok
// SIG undefined FUN_1412ed0f0(void)

void FUN_1412ed0f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_2 + 0x10);
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



// FUNCTION 1412ed150 FUN_1412ed150 body=55 status=ok
// SIG undefined FUN_1412ed150(void)

void FUN_1412ed150(void)

{
  undefined8 uVar1;
  
  if (DAT_146879f70 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879f70 = GetStaticEnum(FUN_1412edde0,uVar1,L"EAutosellRarityEnum");
  }
  return;
}



// FUNCTION 1412ed190 FUN_1412ed190 body=55 status=ok
// SIG undefined FUN_1412ed190(void)

void FUN_1412ed190(void)

{
  undefined8 uVar1;
  
  if (DAT_146879f68 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879f68 = GetStaticEnum(FUN_1412ede10,uVar1,L"EBehindTheScenesItemType");
  }
  return;
}



// FUNCTION 1412ed1d0 FUN_1412ed1d0 body=55 status=ok
// SIG undefined FUN_1412ed1d0(void)

void FUN_1412ed1d0(void)

{
  undefined8 uVar1;
  
  if (DAT_146879f40 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879f40 = GetStaticEnum(FUN_1412ede40,uVar1,L"EDualWeaponBones");
  }
  return;
}



// FUNCTION 1412ed210 FUN_1412ed210 body=55 status=ok
// SIG undefined FUN_1412ed210(void)

void FUN_1412ed210(void)

{
  undefined8 uVar1;
  
  if (DAT_146879f58 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879f58 = GetStaticEnum(FUN_1412ede70,uVar1,L"EPetReleaseReason");
  }
  return;
}



// FUNCTION 1412ed250 FUN_1412ed250 body=55 status=ok
// SIG undefined FUN_1412ed250(void)

void FUN_1412ed250(void)

{
  undefined8 uVar1;
  
  if (DAT_146879f50 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879f50 = GetStaticEnum(FUN_1412edea0,uVar1,L"EPetRespawnCooldownRefundType");
  }
  return;
}



// FUNCTION 1412ed290 FUN_1412ed290 body=55 status=ok
// SIG undefined FUN_1412ed290(void)

void FUN_1412ed290(void)

{
  undefined8 uVar1;
  
  if (DAT_146879f60 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879f60 = GetStaticEnum(FUN_1412eded0,uVar1,L"ETrailerBones");
  }
  return;
}



// FUNCTION 1412ed2d0 FUN_1412ed2d0 body=55 status=ok
// SIG undefined FUN_1412ed2d0(void)

void FUN_1412ed2d0(void)

{
  undefined8 uVar1;
  
  if (DAT_146879f48 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879f48 = GetStaticEnum(FUN_1412edf00,uVar1,L"EWeaponBones");
  }
  return;
}



// FUNCTION 1412ed310 FUN_1412ed310 body=75 status=ok
// SIG undefined FUN_1412ed310(void)

undefined4 FUN_1412ed310(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res8 [4];
  undefined4 local_resc;
  
  lVar1 = *param_1;
  local_resc = 0;
  local_res8[0] = param_2;
  uVar2 = FUN_14178ac60(0,DAT_14687a100);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res8);
  return local_resc;
}



// FUNCTION 1412ed360 FUN_1412ed360 body=6 status=ok
// SIG undefined FUN_1412ed360(void)

undefined8 FUN_1412ed360(void)

{
  return 0xd1de31fb;
}



// FUNCTION 1412ed370 FUN_1412ed370 body=6 status=ok
// SIG undefined FUN_1412ed370(void)

undefined8 FUN_1412ed370(void)

{
  return 0xca204750;
}



// FUNCTION 1412ed380 FUN_1412ed380 body=6 status=ok
// SIG undefined FUN_1412ed380(void)

undefined8 FUN_1412ed380(void)

{
  return 0x3e38a51;
}



// FUNCTION 1412ed390 FUN_1412ed390 body=6 status=ok
// SIG undefined FUN_1412ed390(void)

undefined8 FUN_1412ed390(void)

{
  return 0xf77e21ca;
}



// FUNCTION 1412ed3a0 FUN_1412ed3a0 body=6 status=ok
// SIG undefined FUN_1412ed3a0(void)

undefined8 FUN_1412ed3a0(void)

{
  return 0xd263810c;
}



// FUNCTION 1412ed3b0 FUN_1412ed3b0 body=6 status=ok
// SIG undefined FUN_1412ed3b0(void)

undefined8 FUN_1412ed3b0(void)

{
  return 0x17c92c80;
}



// FUNCTION 1412ed3c0 FUN_1412ed3c0 body=6 status=ok
// SIG undefined FUN_1412ed3c0(void)

undefined8 FUN_1412ed3c0(void)

{
  return 0x6b2ad2a1;
}



// FUNCTION 1412ed3d0 FUN_1412ed3d0 body=6 status=ok
// SIG undefined FUN_1412ed3d0(void)

undefined8 FUN_1412ed3d0(void)

{
  return 0x9c4acdac;
}



// FUNCTION 1412ed440 FUN_1412ed440 body=65 status=ok
// SIG undefined FUN_1412ed440(void)

void FUN_1412ed440(longlong *param_1,undefined1 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res10;
  undefined1 local_res11;
  
  lVar1 = *param_1;
  local_res10 = param_2;
  local_res11 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_14687a108);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res10);
  return;
}



// FUNCTION 1412ed490 FUN_1412ed490 body=17 status=ok
// SIG undefined FUN_1412ed490(void)

void FUN_1412ed490(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x15;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0xe74) = uVar1;
  return;
}



// FUNCTION 1412ed4b0 FUN_1412ed4b0 body=17 status=ok
// SIG undefined FUN_1412ed4b0(void)

void FUN_1412ed4b0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 10;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x6e4) = uVar1;
  return;
}



// FUNCTION 1412ed4d0 FUN_1412ed4d0 body=17 status=ok
// SIG undefined FUN_1412ed4d0(void)

void FUN_1412ed4d0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 8;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x584) = uVar1;
  return;
}



// FUNCTION 1412ed4f0 FUN_1412ed4f0 body=57 status=ok
// SIG undefined FUN_1412ed4f0(void)

void FUN_1412ed4f0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14687a110);
                    /* WARNING: Could not recover jumptable at 0x0001412ed526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1412ed530 FUN_1412ed530 body=61 status=ok
// SIG undefined FUN_1412ed530(void)

void FUN_1412ed530(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14687a118);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1412ed570 FUN_1412ed570 body=94 status=ok
// SIG undefined FUN_1412ed570(void)

undefined8 FUN_1412ed570(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_20 = *param_3;
  local_18 = *(undefined4 *)(param_3 + 1);
  lVar1 = *param_1;
  local_10 = 0;
  local_28 = param_2;
  uVar2 = FUN_14178ac60(local_20,DAT_14687a120);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  return local_10;
}



// FUNCTION 1412ed5d0 thunk_FUN_141412a50 body=5 status=ok
// SIG undefined thunk_FUN_141412a50(void)

void thunk_FUN_141412a50(void)

{
  FUN_141412a50();
  return;
}



// FUNCTION 1412ed5e0 thunk_FUN_142dfad30 body=5 status=ok
// SIG undefined thunk_FUN_142dfad30(void)

void thunk_FUN_142dfad30(void)

{
  FUN_142dfad30();
  return;
}



// FUNCTION 1412ed5f0 thunk_FUN_142dfaf30 body=5 status=ok
// SIG undefined thunk_FUN_142dfaf30(void)

void thunk_FUN_142dfaf30(void)

{
  FUN_142dfaf30();
  return;
}



// FUNCTION 1412ed600 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UGSquadMemberWidget::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1412ed610 thunk_FUN_1414add30 body=5 status=ok
// SIG undefined thunk_FUN_1414add30(void)

void thunk_FUN_1414add30(void)

{
  FUN_1414add30();
  return;
}



// FUNCTION 1412ed620 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UUGLoadoutBarUW::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1412ed630 StaticRegisterNativesAGTutorialStepRevive body=34 status=ok
// SIG undefined StaticRegisterNativesAGTutorialStepRevive(void)

void AGTutorialStepRevive::StaticRegisterNativesAGTutorialStepRevive(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ResetAreaIfEmpty_14479ce20,2);
  return;
}



// FUNCTION 1412ed660 FUN_1412ed660 body=34 status=ok
// SIG undefined FUN_1412ed660(void)

void FUN_1412ed660(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412eb7b0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetBeamTarget_14479d710,1);
  return;
}



// FUNCTION 1412ed690 FUN_1412ed690 body=34 status=ok
// SIG undefined FUN_1412ed690(void)

void FUN_1412ed690(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412e9fd0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AsyncLoadBTSMediaTexture2D_14479e818,3);
  return;
}



// FUNCTION 1412ed6c0 FUN_1412ed6c0 body=34 status=ok
// SIG undefined FUN_1412ed6c0(void)

void FUN_1412ed6c0(void)

{
  undefined8 uVar1;
  
  uVar1 = UInputKeySelector::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CompleteLoadingTexture_14479d408,2);
  return;
}



// FUNCTION 1412ed6f0 FUN_1412ed6f0 body=34 status=ok
// SIG undefined FUN_1412ed6f0(void)

void FUN_1412ed6f0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412e9ee0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_BreakPetAugment_14479d920,0xf);
  return;
}



// FUNCTION 1412ed720 StaticRegisterNativesUGFocusableWebWidget body=34 status=ok
// SIG undefined StaticRegisterNativesUGFocusableWebWidget(void)

void UGFocusableWebWidget::StaticRegisterNativesUGFocusableWebWidget(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetMeleeMeshVisible_14479dc40,2);
  return;
}



// FUNCTION 1412ed750 FUN_1412ed750 body=34 status=ok
// SIG undefined FUN_1412ed750(void)

void FUN_1412ed750(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412ea9c0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddCard_14479e960,0xc);
  return;
}



// FUNCTION 1412ed780 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_DragonFeetSolver::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687a400 == 0) {
    uVar1 = FUN_1412ed360();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687a400 = GetStaticStruct(FUN_1412edf30,uVar2,L"AnimNode_TrailerHandler",0x8a0,uVar1);
  }
  return;
}



// FUNCTION 1412ed7e0 FUN_1412ed7e0 body=82 status=ok
// SIG undefined FUN_1412ed7e0(void)

void FUN_1412ed7e0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687a420 == 0) {
    uVar1 = FUN_1412ed370();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687a420 =
         GetStaticStruct(FUN_1412edf60,uVar2,L"AnimNode_WeaponVehicleHandler",0x15c0,uVar1);
  }
  return;
}



// FUNCTION 1412ed840 FUN_1412ed840 body=82 status=ok
// SIG undefined FUN_1412ed840(void)

void FUN_1412ed840(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687a540 == 0) {
    uVar1 = FUN_1412ed380();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687a540 = GetStaticStruct(FUN_1412edf90,uVar2,L"BeastmasterPetStencilData",0x14,uVar1);
  }
  return;
}



// FUNCTION 1412ed8a0 FUN_1412ed8a0 body=82 status=ok
// SIG undefined FUN_1412ed8a0(void)

void FUN_1412ed8a0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687a608 == 0) {
    uVar1 = FUN_1412ed390();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687a608 =
         GetStaticStruct(FUN_1412edfc0,uVar2,L"BeastmasterStandInActionSkillData",0xd8,uVar1);
  }
  return;
}



// FUNCTION 1412ed900 FUN_1412ed900 body=82 status=ok
// SIG undefined FUN_1412ed900(void)

void FUN_1412ed900(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687a618 == 0) {
    uVar1 = FUN_1412ed3a0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687a618 = GetStaticStruct(FUN_1412edff0,uVar2,L"BeastmasterStandInPetData",0x58,uVar1);
  }
  return;
}



// FUNCTION 1412ed960 FUN_1412ed960 body=82 status=ok
// SIG undefined FUN_1412ed960(void)

void FUN_1412ed960(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687a650 == 0) {
    uVar1 = FUN_1412ed3b0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687a650 = GetStaticStruct(FUN_1412ee020,uVar2,L"BehindTheScenesCategory",0x28,uVar1);
  }
  return;
}



// FUNCTION 1412ed9c0 FUN_1412ed9c0 body=82 status=ok
// SIG undefined FUN_1412ed9c0(void)

void FUN_1412ed9c0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687a660 == 0) {
    uVar1 = FUN_1412ed3c0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687a660 = GetStaticStruct(FUN_1412ee050,uVar2,L"BehindTheScenesItem",0x50,uVar1);
  }
  return;
}



// FUNCTION 1412eda20 FUN_1412eda20 body=82 status=ok
// SIG undefined FUN_1412eda20(void)

void FUN_1412eda20(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687a6f8 == 0) {
    uVar1 = FUN_1412ed3d0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687a6f8 = GetStaticStruct(FUN_1412ee080,uVar2,L"BlackJackCardDefinition",0x20,uVar1);
  }
  return;
}



// FUNCTION 1412eda80 FUN_1412eda80 body=57 status=ok
// SIG undefined FUN_1412eda80(void)

void FUN_1412eda80(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14687a130);
                    /* WARNING: Could not recover jumptable at 0x0001412edab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1412edac0 FUN_1412edac0 body=74 status=ok
// SIG undefined FUN_1412edac0(void)

bool FUN_1412edac0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  char local_10;
  
  lVar1 = *param_1;
  local_10 = '\0';
  local_18 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14687a138);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return local_10 != '\0';
}



// FUNCTION 1412edb10 FUN_1412edb10 body=47 status=ok
// SIG undefined FUN_1412edb10(void)

longlong FUN_1412edb10(void)

{
  if (DAT_14687a4a0 == 0) {
    FUN_141786440(&DAT_14687a4a0,&PTR_FUN_144797d70);
  }
  return DAT_14687a4a0;
}



// FUNCTION 1412edb40 FUN_1412edb40 body=47 status=ok
// SIG undefined FUN_1412edb40(void)

longlong FUN_1412edb40(void)

{
  if (DAT_14687a490 == 0) {
    FUN_141786440(&DAT_14687a490,&PTR_FUN_144797870);
  }
  return DAT_14687a490;
}



// FUNCTION 1412edb70 FUN_1412edb70 body=47 status=ok
// SIG undefined FUN_1412edb70(void)

longlong FUN_1412edb70(void)

{
  if (DAT_14687a430 == 0) {
    FUN_141786440(&DAT_14687a430,&PTR_GetPrivateStaticClass_144795850);
  }
  return DAT_14687a430;
}



// FUNCTION 1412edba0 FUN_1412edba0 body=47 status=ok
// SIG undefined FUN_1412edba0(void)

longlong FUN_1412edba0(void)

{
  if (DAT_14687a440 == 0) {
    FUN_141786440(&DAT_14687a440,&PTR_GetPrivateStaticClass_144796080);
  }
  return DAT_14687a440;
}



// FUNCTION 1412edbd0 FUN_1412edbd0 body=47 status=ok
// SIG undefined FUN_1412edbd0(void)

longlong FUN_1412edbd0(void)

{
  if (DAT_14687a450 == 0) {
    FUN_141786440(&DAT_14687a450,&PTR_FUN_144796640);
  }
  return DAT_14687a450;
}



// FUNCTION 1412edc00 FUN_1412edc00 body=47 status=ok
// SIG undefined FUN_1412edc00(void)

longlong FUN_1412edc00(void)

{
  if (DAT_14687a460 == 0) {
    FUN_141786440(&DAT_14687a460,&PTR_FUN_144796ae0);
  }
  return DAT_14687a460;
}



// FUNCTION 1412edc30 FUN_1412edc30 body=47 status=ok
// SIG undefined FUN_1412edc30(void)

longlong FUN_1412edc30(void)

{
  if (DAT_14687a470 == 0) {
    FUN_141786440(&DAT_14687a470,&PTR_FUN_144796d20);
  }
  return DAT_14687a470;
}



// FUNCTION 1412edc60 FUN_1412edc60 body=47 status=ok
// SIG undefined FUN_1412edc60(void)

longlong FUN_1412edc60(void)

{
  if (DAT_14687a480 == 0) {
    FUN_141786440(&DAT_14687a480,&PTR_FUN_144796f80);
  }
  return DAT_14687a480;
}



// FUNCTION 1412edc90 FUN_1412edc90 body=47 status=ok
// SIG undefined FUN_1412edc90(void)

longlong FUN_1412edc90(void)

{
  if (DAT_14687a4f8 == 0) {
    FUN_141786440(&DAT_14687a4f8,&PTR_FUN_14479b310);
  }
  return DAT_14687a4f8;
}



// FUNCTION 1412edcc0 FUN_1412edcc0 body=47 status=ok
// SIG undefined FUN_1412edcc0(void)

longlong FUN_1412edcc0(void)

{
  if (DAT_14687a670 == 0) {
    FUN_141786440(&DAT_14687a670,&PTR_FUN_14479ae90);
  }
  return DAT_14687a670;
}



// FUNCTION 1412edcf0 FUN_1412edcf0 body=47 status=ok
// SIG undefined FUN_1412edcf0(void)

longlong FUN_1412edcf0(void)

{
  if (DAT_14687a680 == 0) {
    FUN_141786440(&DAT_14687a680,&PTR_FUN_14479afe0);
  }
  return DAT_14687a680;
}



// FUNCTION 1412edd20 FUN_1412edd20 body=47 status=ok
// SIG undefined FUN_1412edd20(void)

longlong FUN_1412edd20(void)

{
  if (DAT_14687a4b0 == 0) {
    FUN_141786a30(&DAT_14687a4b0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b5bb0);
  }
  return DAT_14687a4b0;
}



// FUNCTION 1412edd50 FUN_1412edd50 body=47 status=ok
// SIG undefined FUN_1412edd50(void)

longlong FUN_1412edd50(void)

{
  if (DAT_14687a528 == 0) {
    FUN_141786a30(&DAT_14687a528,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b6190);
  }
  return DAT_14687a528;
}



// FUNCTION 1412edd80 FUN_1412edd80 body=47 status=ok
// SIG undefined FUN_1412edd80(void)

longlong FUN_1412edd80(void)

{
  if (DAT_14687a6f0 == 0) {
    FUN_141786a30(&DAT_14687a6f0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b8390);
  }
  return DAT_14687a6f0;
}



// FUNCTION 1412eddb0 FUN_1412eddb0 body=47 status=ok
// SIG undefined FUN_1412eddb0(void)

longlong FUN_1412eddb0(void)

{
  if (DAT_14687a690 == 0) {
    FUN_141786a30(&DAT_14687a690,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b7fa0);
  }
  return DAT_14687a690;
}



// FUNCTION 1412edde0 FUN_1412edde0 body=47 status=ok
// SIG undefined FUN_1412edde0(void)

longlong FUN_1412edde0(void)

{
  if (DAT_14687a508 == 0) {
    FUN_1417866a0(&DAT_14687a508,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b8d10);
  }
  return DAT_14687a508;
}



// FUNCTION 1412ede10 FUN_1412ede10 body=47 status=ok
// SIG undefined FUN_1412ede10(void)

longlong FUN_1412ede10(void)

{
  if (DAT_14687a648 == 0) {
    FUN_1417866a0(&DAT_14687a648,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b8e00);
  }
  return DAT_14687a648;
}



// FUNCTION 1412ede40 FUN_1412ede40 body=47 status=ok
// SIG undefined FUN_1412ede40(void)

longlong FUN_1412ede40(void)

{
  if (DAT_14687a410 == 0) {
    FUN_1417866a0(&DAT_14687a410,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b8c70);
  }
  return DAT_14687a410;
}



// FUNCTION 1412ede70 FUN_1412ede70 body=47 status=ok
// SIG undefined FUN_1412ede70(void)

longlong FUN_1412ede70(void)

{
  if (DAT_14687a538 == 0) {
    FUN_1417866a0(&DAT_14687a538,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b8db0);
  }
  return DAT_14687a538;
}



// FUNCTION 1412edea0 FUN_1412edea0 body=47 status=ok
// SIG undefined FUN_1412edea0(void)

longlong FUN_1412edea0(void)

{
  if (DAT_14687a530 == 0) {
    FUN_1417866a0(&DAT_14687a530,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b8d60);
  }
  return DAT_14687a530;
}



// FUNCTION 1412eded0 FUN_1412eded0 body=47 status=ok
// SIG undefined FUN_1412eded0(void)

longlong FUN_1412eded0(void)

{
  if (DAT_14687a3f8 == 0) {
    FUN_1417866a0(&DAT_14687a3f8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b8c20);
  }
  return DAT_14687a3f8;
}



// FUNCTION 1412edf00 FUN_1412edf00 body=47 status=ok
// SIG undefined FUN_1412edf00(void)

longlong FUN_1412edf00(void)

{
  if (DAT_14687a418 == 0) {
    FUN_1417866a0(&DAT_14687a418,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b8cc0);
  }
  return DAT_14687a418;
}



// FUNCTION 1412edf30 FUN_1412edf30 body=47 status=ok
// SIG undefined FUN_1412edf30(void)

longlong FUN_1412edf30(void)

{
  if (DAT_14687a408 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687a408,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b5560);
  }
  return DAT_14687a408;
}



// FUNCTION 1412edf60 FUN_1412edf60 body=47 status=ok
// SIG undefined FUN_1412edf60(void)

longlong FUN_1412edf60(void)

{
  if (DAT_14687a428 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687a428,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b5830);
  }
  return DAT_14687a428;
}



// FUNCTION 1412edf90 FUN_1412edf90 body=47 status=ok
// SIG undefined FUN_1412edf90(void)

longlong FUN_1412edf90(void)

{
  if (DAT_14687a548 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687a548,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b6250);
  }
  return DAT_14687a548;
}



// FUNCTION 1412edfc0 FUN_1412edfc0 body=47 status=ok
// SIG undefined FUN_1412edfc0(void)

longlong FUN_1412edfc0(void)

{
  if (DAT_14687a610 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687a610,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b74a0);
  }
  return DAT_14687a610;
}



// FUNCTION 1412edff0 FUN_1412edff0 body=47 status=ok
// SIG undefined FUN_1412edff0(void)

longlong FUN_1412edff0(void)

{
  if (DAT_14687a620 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687a620,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b7690);
  }
  return DAT_14687a620;
}



// FUNCTION 1412ee020 FUN_1412ee020 body=47 status=ok
// SIG undefined FUN_1412ee020(void)

longlong FUN_1412ee020(void)

{
  if (DAT_14687a658 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687a658,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b7cc0);
  }
  return DAT_14687a658;
}



// FUNCTION 1412ee050 FUN_1412ee050 body=47 status=ok
// SIG undefined FUN_1412ee050(void)

longlong FUN_1412ee050(void)

{
  if (DAT_14687a668 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687a668,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b7e50);
  }
  return DAT_14687a668;
}



// FUNCTION 1412ee080 FUN_1412ee080 body=47 status=ok
// SIG undefined FUN_1412ee080(void)

longlong FUN_1412ee080(void)

{
  if (DAT_14687a700 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687a700,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b84b0);
  }
  return DAT_14687a700;
}



// FUNCTION 1412ee0d0 FUN_1412ee0d0 body=366 status=ok
// SIG undefined FUN_1412ee0d0(void)

void FUN_1412ee0d0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_78;
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  local_88 = 0xffffffff;
  local_78 = 0;
  local_70[0] = 0;
  local_70[1] = 0;
  local_84 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  FWeakObjectPtr::operator=(local_98,0);
  local_90 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_38 = 0;
  local_30 = 0;
  puVar1 = local_98;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_60 = *puVar1;
  local_5c = puVar1[1];
  local_58 = *(undefined8 *)(puVar1 + 2);
  local_40 = 0;
  local_50 = local_88;
  local_4c = (undefined4)local_84;
  local_48 = local_84._4_4_;
  local_28 = local_78;
  FString::FString(local_20,local_70);
  FSoftObjectPath::operator=(&local_40,&local_28);
  FUN_1410c4100(param_1,&local_50,&local_60);
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412ee240 FUN_1412ee240 body=376 status=ok
// SIG undefined FUN_1412ee240(void)

void FUN_1412ee240(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined8 local_38;
  longlong local_30 [3];
  
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_res20[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = local_res10;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_30[0] = 0;
  local_30[1] = 0;
  puVar2 = local_res20;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  plVar3 = local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140e19a50(local_38,puVar1,puVar2,plVar3);
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412ee3c0 FUN_1412ee3c0 body=43 status=ok
// SIG undefined FUN_1412ee3c0(void)

void FUN_1412ee3c0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140acec30();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1412ee3f0 FUN_1412ee3f0 body=43 status=ok
// SIG undefined FUN_1412ee3f0(void)

void FUN_1412ee3f0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140acec40();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1412ee460 FUN_1412ee460 body=148 status=ok
// SIG undefined FUN_1412ee460(void)

void FUN_1412ee460(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  uVar1 = FUN_140e1f970(param_1,&local_18);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1412ee500 execGetOptionAtIndex body=208 status=ok
// SIG undefined execGetOptionAtIndex(void)

void UComboBoxString::execGetOptionAtIndex(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 local_res10 [2];
  longlong local_18 [2];
  
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
  plVar1 = (longlong *)FUN_140ad43d0(param_1,local_18,local_res10[0]);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412ee5d0 FUN_1412ee5d0 body=141 status=ok
// SIG undefined FUN_1412ee5d0(void)

void FUN_1412ee5d0(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  uVar1 = FUN_140ad4430(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1412ee660 FUN_1412ee660 body=141 status=ok
// SIG undefined FUN_1412ee660(void)

void FUN_1412ee660(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  uVar1 = FUN_140ad4460(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1412ee6f0 FUN_1412ee6f0 body=43 status=ok
// SIG undefined FUN_1412ee6f0(void)

void FUN_1412ee6f0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FStaticMeshSceneProxy::GetForceShadowLOD();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1412ee720 FUN_1412ee720 body=122 status=ok
// SIG undefined FUN_1412ee720(void)

void FUN_1412ee720(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_1410cbb20(param_1,local_18);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412ee7a0 execGetResponseCode body=43 status=ok
// SIG undefined execGetResponseCode(void)

void UVaRestRequestJSON::execGetResponseCode
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetResponseCode();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1412ee7d0 FUN_1412ee7d0 body=45 status=ok
// SIG undefined FUN_1412ee7d0(void)

void FUN_1412ee7d0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140e24740();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1412ee820 FUN_1412ee820 body=128 status=ok
// SIG undefined FUN_1412ee820(void)

void FUN_1412ee820(undefined8 param_1,longlong param_2)

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
  FUN_140e2b0b0(param_1,local_res10);
  return;
}



// FUNCTION 1412ee8a0 FUN_1412ee8a0 body=128 status=ok
// SIG undefined FUN_1412ee8a0(void)

void FUN_1412ee8a0(undefined8 param_1,longlong param_2)

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
  FUN_140e2d150(param_1,local_res10);
  return;
}



// FUNCTION 1412ee920 FUN_1412ee920 body=128 status=ok
// SIG undefined FUN_1412ee920(void)

void FUN_1412ee920(undefined8 param_1,longlong param_2)

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
  FUN_140e2d190(param_1,local_res10);
  return;
}



// FUNCTION 1412ee9e0 FUN_1412ee9e0 body=188 status=ok
// SIG undefined FUN_1412ee9e0(void)

void FUN_1412ee9e0(undefined8 param_1,longlong param_2)

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
  FUN_140e2d2f0(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 1412eeb80 FUN_1412eeb80 body=78 status=ok
// SIG undefined FUN_1412eeb80(void)

void FUN_1412eeb80(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x428))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerOrderPetAttack_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001412eebc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x430))(param_1);
  return;
}



// FUNCTION 1412eebd0 FUN_1412eebd0 body=181 status=ok
// SIG undefined FUN_1412eebd0(void)

void FUN_1412eebd0(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x438))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetActivePetAugment_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x440))(param_1,local_res8);
  return;
}



// FUNCTION 1412eec90 FUN_1412eec90 body=196 status=ok
// SIG undefined FUN_1412eec90(void)

void FUN_1412eec90(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
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
  FUN_1409e4620(param_1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 1412eed60 FUN_1412eed60 body=130 status=ok
// SIG undefined FUN_1412eed60(void)

void FUN_1412eed60(undefined8 param_1,longlong param_2)

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
  FUN_140ebf6f0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1412eedf0 FUN_1412eedf0 body=130 status=ok
// SIG undefined FUN_1412eedf0(void)

void FUN_1412eedf0(undefined8 param_1,longlong param_2)

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
  FUN_140e36c90(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1412eee80 FUN_1412eee80 body=43 status=ok
// SIG undefined FUN_1412eee80(void)

void FUN_1412eee80(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140ae3e80();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1412eeeb0 FUN_1412eeeb0 body=167 status=ok
// SIG undefined FUN_1412eeeb0(void)

void FUN_1412eeeb0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_28;
  longlong local_20;
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
  FUN_140ec2f00(param_1,puVar1);
  if (local_20 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412eef80 FUN_1412eef80 body=162 status=ok
// SIG undefined FUN_1412eef80(void)

longlong FUN_1412eef80(void)

{
  if (DAT_14687ad18 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_MainMenu",&DAT_14687ad18,FUN_140447710,0xd30,
                  0x10000000,0,L"Engine",FUN_1412f0720,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPlayStateEffect::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687ad18;
}



// FUNCTION 1412ef040 FUN_1412ef040 body=162 status=ok
// SIG undefined FUN_1412ef040(void)

longlong FUN_1412ef040(void)

{
  if (DAT_14687acf8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_Ladder",&DAT_14687acf8,FUN_140447710,0x1e8,
                  0x10000000,0,L"Engine",&LAB_1412f06e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142fd56d0,&LAB_140447700,0);
  }
  return DAT_14687acf8;
}



// FUNCTION 1412ef0f0 FUN_1412ef0f0 body=162 status=ok
// SIG undefined FUN_1412ef0f0(void)

longlong FUN_1412ef0f0(void)

{
  if (DAT_14687acc0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_ExitLadder",&DAT_14687acc0,FUN_140447710,0x1f0
                  ,0x10000000,0,L"Engine",&LAB_1412f06a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142fd56d0,&LAB_140447700,0);
  }
  return DAT_14687acc0;
}



// FUNCTION 1412ef1c0 FUN_1412ef1c0 body=162 status=ok
// SIG undefined FUN_1412ef1c0(void)

longlong FUN_1412ef1c0(void)

{
  if (DAT_14687ad28 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_MeleeFOV",&DAT_14687ad28,FUN_140447710,0x78,
                  0x10000000,0,L"Engine",&LAB_1412f0850,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412f10f0,&LAB_140447700,0);
  }
  return DAT_14687ad28;
}



// FUNCTION 1412ef280 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UPawnAction_Sequence::StaticClass(void)

{
  if (DAT_14687ad38 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_MeleeLock",&DAT_14687ad38,FUN_140447710,0xc0,
                  0x10000000,0,L"Engine",&LAB_1412f0870,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142fd5780,&LAB_140447700,0);
  }
  return DAT_14687ad38;
}



// FUNCTION 1412ef340 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAESHelper::GetPrivateStaticClass(void)

{
  if (DAT_14687ad48 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_PitchFOV",&DAT_14687ad48,FUN_140447710,0x48,
                  0x10000000,0,L"Engine",&LAB_1412f0890,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPlayStateEffect::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687ad48;
}



// FUNCTION 1412ef400 FUN_1412ef400 body=162 status=ok
// SIG undefined FUN_1412ef400(void)

longlong FUN_1412ef400(void)

{
  if (DAT_14687ad58 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_RaidSpectator",&DAT_14687ad58,FUN_140447710,
                  0x68,0x10000000,0,L"Engine",&LAB_1412f08b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPlayStateEffect::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687ad58;
}



// FUNCTION 1412ef4c0 FUN_1412ef4c0 body=162 status=ok
// SIG undefined FUN_1412ef4c0(void)

longlong FUN_1412ef4c0(void)

{
  if (DAT_14687ad68 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_ScriptedDOF",&DAT_14687ad68,FUN_140447710,
                  0xc70,0x10000000,0,L"Engine",&LAB_1412f08d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPlayStateEffect::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687ad68;
}



// FUNCTION 1412ef570 FUN_1412ef570 body=53 status=ok
// SIG undefined FUN_1412ef570(void)

void FUN_1412ef570(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x98;
    *puVar1 = &PTR_FUN_1447ae050;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412ef5c0 FUN_1412ef5c0 body=162 status=ok
// SIG undefined FUN_1412ef5c0(void)

longlong FUN_1412ef5c0(void)

{
  if (DAT_14687ad78 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_SnapLookToTarget",&DAT_14687ad78,FUN_140447710
                  ,0x38,0x10000000,0,L"Engine",&LAB_1412f08f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPlayStateEffect::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687ad78;
}



// FUNCTION 1412ef670 FUN_1412ef670 body=53 status=ok
// SIG undefined FUN_1412ef670(void)

void FUN_1412ef670(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &PTR_FUN_1447ae168;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1412ef6c0 FUN_1412ef6c0 body=162 status=ok
// SIG undefined FUN_1412ef6c0(void)

longlong FUN_1412ef6c0(void)

{
  if (DAT_14687ad88 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_SprintFOV",&DAT_14687ad88,FUN_140447710,0x40,
                  0x10000000,0,L"Engine",&LAB_1412f0910,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPlayStateEffect::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687ad88;
}



// FUNCTION 1412ef770 FUN_1412ef770 body=53 status=ok
// SIG undefined FUN_1412ef770(void)

void FUN_1412ef770(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2c;
    *puVar1 = &PTR_FUN_1447ae280;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1412ef7c0 FUN_1412ef7c0 body=162 status=ok
// SIG undefined FUN_1412ef7c0(void)

longlong FUN_1412ef7c0(void)

{
  if (DAT_14687ad98 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_Sway",&DAT_14687ad98,FUN_140447710,0x78,
                  0x10000000,0,L"Engine",&LAB_1412f0930,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPlayStateEffect::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687ad98;
}



// FUNCTION 1412ef890 FUN_1412ef890 body=162 status=ok
// SIG undefined FUN_1412ef890(void)

longlong FUN_1412ef890(void)

{
  if (DAT_14687ac40 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"BTService_FireWeapon",&DAT_14687ac40,FUN_140447710,0x70,
                  0x10000000,0,L"Game",&LAB_1412f0600,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UBTService::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687ac40;
}



// FUNCTION 1412ef950 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UARTrackedObject::GetPrivateStaticClass(void)

{
  if (DAT_14687ac68 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"BTService_TriggerDialog",&DAT_14687ac68,
                  StaticRegisterNativesUARTrackedObject,0xd0,0x10000000,0,L"Game",&LAB_1412f0610,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UBTService::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687ac68;
}



// FUNCTION 1412efa00 FUN_1412efa00 body=47 status=ok
// SIG undefined FUN_1412efa00(void)

longlong FUN_1412efa00(void)

{
  if (DAT_14687ac60 == 0) {
    FUN_141786440(&DAT_14687ac60,&PTR_GetPrivateStaticClass_1447a7480);
  }
  return DAT_14687ac60;
}



// FUNCTION 1412efa30 FUN_1412efa30 body=47 status=ok
// SIG undefined FUN_1412efa30(void)

longlong FUN_1412efa30(void)

{
  if (DAT_14687ac58 == 0) {
    FUN_141786a30(&DAT_14687ac58,&PTR_FUN_1462b9f70);
  }
  return DAT_14687ac58;
}



// FUNCTION 1412efa60 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ADragonHeart::GetPrivateStaticClass(void)

{
  if (DAT_14687ac20 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"BoundaryTurret",&DAT_14687ac20,FUN_1412f1140,0x608,0x10000000
                  ,0,L"Engine",&LAB_1412f05c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1412d9cf0,&LAB_140447700,0);
  }
  return DAT_14687ac20;
}



// FUNCTION 1412efb10 FUN_1412efb10 body=53 status=ok
// SIG undefined FUN_1412efb10(void)

void FUN_1412efb10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &PTR_FUN_1447adb30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412efb60 FUN_1412efb60 body=47 status=ok
// SIG undefined FUN_1412efb60(void)

longlong FUN_1412efb60(void)

{
  if (DAT_14687ac18 == 0) {
    FUN_141786440(&DAT_14687ac18,&PTR_GetPrivateStaticClass_1447aa790);
  }
  return DAT_14687ac18;
}



// FUNCTION 1412efb90 FUN_1412efb90 body=47 status=ok
// SIG undefined FUN_1412efb90(void)

longlong FUN_1412efb90(void)

{
  if (DAT_14687abe0 == 0) {
    FUN_141786a30(&DAT_14687abe0,&PTR_FUN_1462b8ec0);
  }
  return DAT_14687abe0;
}



// FUNCTION 1412efbc0 FUN_1412efbc0 body=47 status=ok
// SIG undefined FUN_1412efbc0(void)

longlong FUN_1412efbc0(void)

{
  if (DAT_14687abe8 == 0) {
    FUN_141786a30(&DAT_14687abe8,&PTR_FUN_1462b9080);
  }
  return DAT_14687abe8;
}



// FUNCTION 1412efbf0 FUN_1412efbf0 body=47 status=ok
// SIG undefined FUN_1412efbf0(void)

longlong FUN_1412efbf0(void)

{
  if (DAT_14687abf0 == 0) {
    FUN_141786a30(&DAT_14687abf0,&PTR_FUN_1462b91c0);
  }
  return DAT_14687abf0;
}



// FUNCTION 1412efc20 FUN_1412efc20 body=47 status=ok
// SIG undefined FUN_1412efc20(void)

longlong FUN_1412efc20(void)

{
  if (DAT_14687abf8 == 0) {
    FUN_141786a30(&DAT_14687abf8,&PTR_FUN_1462b9240);
  }
  return DAT_14687abf8;
}



// FUNCTION 1412efc50 FUN_1412efc50 body=47 status=ok
// SIG undefined FUN_1412efc50(void)

longlong FUN_1412efc50(void)

{
  if (DAT_14687ac00 == 0) {
    FUN_141786a30(&DAT_14687ac00,&PTR_FUN_1462b92c0);
  }
  return DAT_14687ac00;
}



// FUNCTION 1412efc80 FUN_1412efc80 body=47 status=ok
// SIG undefined FUN_1412efc80(void)

longlong FUN_1412efc80(void)

{
  if (DAT_14687ac08 == 0) {
    FUN_141786a30(&DAT_14687ac08,&PTR_FUN_1462b9480);
  }
  return DAT_14687ac08;
}



// FUNCTION 1412efcb0 FUN_1412efcb0 body=47 status=ok
// SIG undefined FUN_1412efcb0(void)

longlong FUN_1412efcb0(void)

{
  if (DAT_14687ac10 == 0) {
    FUN_141786a30(&DAT_14687ac10,&PTR_FUN_1462b95c0);
  }
  return DAT_14687ac10;
}



// FUNCTION 1412efce0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UFocusWidget::GetPrivateStaticClass(void)

{
  if (DAT_14687ada8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_VehicleBoost",&DAT_14687ada8,FUN_140447710,
                  0x2b0,0x10000000,0,L"Engine",&LAB_1412f0950,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPlayStateEffect::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687ada8;
}



// FUNCTION 1412efd90 FUN_1412efd90 body=162 status=ok
// SIG undefined FUN_1412efd90(void)

longlong FUN_1412efd90(void)

{
  if (DAT_14687acd8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_FocusDOF",&DAT_14687acd8,FUN_1412f11a0,0x12b0,
                  0x10000000,0,L"Engine",&LAB_1412f06c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPlayStateEffect::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687acd8;
}



// FUNCTION 1412efe40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTextBlock::GetPrivateStaticClass(void)

{
  if (DAT_14687aca0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_AIO",&DAT_14687aca0,FUN_140447710,0x218,
                  0x10000000,0,L"Engine",&LAB_1412f0640,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPlayStateEffect::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687aca0;
}



// FUNCTION 1412efef0 FUN_1412efef0 body=47 status=ok
// SIG undefined FUN_1412efef0(void)

longlong FUN_1412efef0(void)

{
  if (DAT_14687acd0 == 0) {
    FUN_141786440(&DAT_14687acd0,&PTR_FUN_1447aae00);
  }
  return DAT_14687acd0;
}



// FUNCTION 1412eff20 FUN_1412eff20 body=47 status=ok
// SIG undefined FUN_1412eff20(void)

longlong FUN_1412eff20(void)

{
  if (DAT_14687acc8 == 0) {
    FUN_141786a30(&DAT_14687acc8,&PTR_FUN_1462ba8d0);
  }
  return DAT_14687acc8;
}



// FUNCTION 1412eff60 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGPingUsable::GetPrivateStaticClass(void)

{
  if (DAT_14687ac80 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"BulletNotificationVolume",&DAT_14687ac80,FUN_140447710,0x4a8,
                  0x10000000,0,L"Engine",&LAB_1412f05e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407fbfa0,&LAB_140447700,0);
  }
  return DAT_14687ac80;
}



// FUNCTION 1412f0020 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UEditableTextBox::GetPrivateStaticClass(void)

{
  if (DAT_14687ae10 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_VehicleLook",&DAT_14687ae10,FUN_140447710,
                  0xa30,0x10000000,0,L"Engine",&LAB_1412f09b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPlayStateEffect::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687ae10;
}



// FUNCTION 1412f00f0 FUN_1412f00f0 body=162 status=ok
// SIG undefined FUN_1412f00f0(void)

longlong FUN_1412f00f0(void)

{
  if (DAT_14687ac30 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"BoundaryTurretAnimInstance",&DAT_14687ac30,FUN_140447710,
                  0x560,0x10000008,0,L"Engine",&LAB_1412f0620,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142256d30,&LAB_1412f1130,
                  &LAB_14084f730,0);
  }
  return DAT_14687ac30;
}



// FUNCTION 1412f01a0 FUN_1412f01a0 body=162 status=ok
// SIG undefined FUN_1412f01a0(void)

longlong FUN_1412f01a0(void)

{
  if (DAT_14687ac90 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_AdjustForFocusObject",&DAT_14687ac90,
                  FUN_140447710,0x68,0x10000000,0,L"Engine",&LAB_1412f0660,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPlayStateEffect::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687ac90;
}



// FUNCTION 1412f0250 FUN_1412f0250 body=53 status=ok
// SIG undefined FUN_1412f0250(void)

void FUN_1412f0250(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_1447adc68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412f02b0 FUN_1412f02b0 body=162 status=ok
// SIG undefined FUN_1412f02b0(void)

longlong FUN_1412f02b0(void)

{
  if (DAT_14687adb8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_VehicleCollision",&DAT_14687adb8,FUN_140447710
                  ,0x50,0x10000000,0,L"Engine",&LAB_1412f0970,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPlayStateEffect::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687adb8;
}



// FUNCTION 1412f0380 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAESHelper::GetPrivateStaticClass(void)

{
  if (DAT_14687acb0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_AutoFollowVehicleRotation",&DAT_14687acb0,
                  FUN_140447710,0x48,0x10000000,0,L"Engine",&LAB_1412f0680,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPlayStateEffect::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687acb0;
}



// FUNCTION 1412f0430 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UThrobber::GetPrivateStaticClass(void)

{
  if (DAT_14687ad08 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_LimitPitchBySlope",&DAT_14687ad08,
                  FUN_140447710,0x1a8,0x10000000,0,L"Engine",&LAB_1412f0700,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142fd56d0,&LAB_140447700,0);
  }
  return DAT_14687ad08;
}



// FUNCTION 1412f0500 FUN_1412f0500 body=162 status=ok
// SIG undefined FUN_1412f0500(void)

longlong FUN_1412f0500(void)

{
  if (DAT_14687adc8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_VehicleFOV",&DAT_14687adc8,FUN_140447710,0x38,
                  0x10000000,0,L"Engine",&LAB_1412f0990,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142fd5620,&LAB_140447700,0);
  }
  return DAT_14687adc8;
}



// FUNCTION 1412f0720 FUN_1412f0720 body=296 status=ok
// SIG undefined FUN_1412f0720(void)

void FUN_1412f0720(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142fc8020(puVar1,param_1);
    *puVar1 = &PTR_FUN_1447add80;
    *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
    *(undefined8 *)((longlong)puVar1 + 100) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x74) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x7c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x84) = 0;
    *(undefined1 *)(puVar1 + 0x11) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x8c) = 0;
    *(undefined4 *)(puVar1 + 0x12) = 0x40000000;
    *(undefined8 *)((longlong)puVar1 + 0x94) = 2;
    *(undefined8 *)((longlong)puVar1 + 0x9c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xa4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xac) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xb4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xbc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined1 *)(puVar1 + 0x19) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xcc) = 0x40000000;
    puVar1[0x1a] = 2;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined1 *)(puVar1 + 0x1d) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xec) = 0;
    *(undefined4 *)(puVar1 + 0x1e) = 0x40000000;
    *(undefined8 *)((longlong)puVar1 + 0xf4) = 2;
    *(undefined8 *)((longlong)puVar1 + 0xfc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x104) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x10c) = 0;
    *(undefined1 *)(puVar1 + 0x22) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x114) = 0x40000000;
    *(undefined4 *)(puVar1 + 0x23) = 2;
    FUN_142741540(puVar1 + 0x24);
    FUN_142741540(puVar1 + 0xe4);
    return;
  }
  return;
}



// FUNCTION 1412f09d0 FUN_1412f09d0 body=124 status=ok
// SIG undefined FUN_1412f09d0(void)

longlong FUN_1412f09d0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xd08) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xcf8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x708) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd30);
  }
  return param_1;
}



// FUNCTION 1412f0a50 FUN_1412f0a50 body=213 status=ok
// SIG undefined FUN_1412f0a50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412f0a50(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_678 [32];
  undefined8 local_658;
  undefined4 local_650;
  undefined4 local_64c;
  undefined1 local_648 [1496];
  longlong local_70;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_678;
  FUN_142741540(local_648);
  local_658 = param_2;
  local_650 = param_3;
  local_64c = param_4;
  FUN_140a296b0(local_648,param_5);
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14687a8d0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_658);
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412f0b30 FUN_1412f0b30 body=78 status=ok
// SIG undefined FUN_1412f0b30(void)

void FUN_1412f0b30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x3f000000;
  param_2[2] = 0x3f666666;
  *(undefined1 *)(param_2 + 3) = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_2 + 4);
  param_2[0x22] = 0x3e4ccccd;
  param_2[0x23] = 0x3dcccccd;
  param_2[0x24] = 0x3f800000;
  return;
}



// FUNCTION 1412f0bf0 FUN_1412f0bf0 body=39 status=ok
// SIG undefined FUN_1412f0bf0(void)

void FUN_1412f0bf0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x88);
  FUN_142de2eb0((longlong)param_2 + 8);
  return;
}



// FUNCTION 1412f0c70 FUN_1412f0c70 body=296 status=ok
// SIG undefined FUN_1412f0c70(void)

undefined8 FUN_1412f0c70(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *_Src;
  undefined4 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined4 *)(param_3 + 4);
    do {
      *param_2 = puVar4[-1];
      puVar1 = (undefined8 *)(param_2 + 0x1c);
      param_2[1] = *puVar4;
      param_2[2] = puVar4[1];
      *(undefined1 *)(param_2 + 3) = *(undefined1 *)(puVar4 + 2);
      *(undefined1 *)(param_2 + 0x1a) = *(undefined1 *)(puVar4 + 0x19);
      *(undefined1 *)((longlong)param_2 + 0x69) = *(undefined1 *)((longlong)puVar4 + 0x65);
      param_2[0x1b] = puVar4[0x1a];
      if (puVar1 != (undefined8 *)(puVar4 + 0x1b)) {
        iVar3 = puVar4[0x1d];
        _Src = *(void **)(puVar4 + 0x1b);
        param_2[0x1e] = iVar3;
        if ((iVar3 == 0) && (param_2[0x1f] == 0)) {
          param_2[0x1f] = 0;
        }
        else {
          TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(puVar1,iVar3);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar3 * 0x1c);
        }
      }
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(puVar4 + 0x1f);
      param_2[0x22] = puVar4[0x21];
      param_2[0x23] = puVar4[0x22];
      puVar2 = puVar4 + 0x23;
      puVar4 = puVar4 + 0x26;
      param_2[0x24] = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x26;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412f0ef0 FUN_1412f0ef0 body=55 status=ok
// SIG undefined FUN_1412f0ef0(void)

void FUN_1412f0ef0(void)

{
  undefined8 uVar1;
  
  if (DAT_14687a778 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687a778 = GetStaticEnum(FUN_1412f1800,uVar1,L"EIntroType");
  }
  return;
}



// FUNCTION 1412f0f30 FUN_1412f0f30 body=6 status=ok
// SIG undefined FUN_1412f0f30(void)

undefined8 FUN_1412f0f30(void)

{
  return 0x461432f5;
}



// FUNCTION 1412f0f40 FUN_1412f0f40 body=6 status=ok
// SIG undefined FUN_1412f0f40(void)

undefined8 FUN_1412f0f40(void)

{
  return 0x52140b6e;
}



// FUNCTION 1412f0f50 FUN_1412f0f50 body=6 status=ok
// SIG undefined FUN_1412f0f50(void)

undefined8 FUN_1412f0f50(void)

{
  return 0xd74d6e60;
}



// FUNCTION 1412f0f60 FUN_1412f0f60 body=6 status=ok
// SIG undefined FUN_1412f0f60(void)

undefined8 FUN_1412f0f60(void)

{
  return 0x9958fd40;
}



// FUNCTION 1412f0f70 FUN_1412f0f70 body=6 status=ok
// SIG undefined FUN_1412f0f70(void)

undefined8 FUN_1412f0f70(void)

{
  return 0x657a3319;
}



// FUNCTION 1412f0f80 FUN_1412f0f80 body=73 status=ok
// SIG undefined FUN_1412f0f80(void)

void FUN_1412f0f80(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(local_18,DAT_14687a858);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 1412f1080 FUN_1412f1080 body=73 status=ok
// SIG undefined FUN_1412f1080(void)

void FUN_1412f1080(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(local_18,DAT_14687a880);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 1412f10d0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UBTService::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1412f10e0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UPlayStateEffect::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1412f1100 thunk_FUN_142fd5620 body=5 status=ok
// SIG undefined thunk_FUN_142fd5620(void)

void thunk_FUN_142fd5620(void)

{
  FUN_142fd5620();
  return;
}



// FUNCTION 1412f1110 thunk_FUN_142fd56d0 body=5 status=ok
// SIG undefined thunk_FUN_142fd56d0(void)

void thunk_FUN_142fd56d0(void)

{
  FUN_142fd56d0();
  return;
}



// FUNCTION 1412f1120 thunk_FUN_142fd5780 body=5 status=ok
// SIG undefined thunk_FUN_142fd5780(void)

void thunk_FUN_142fd5780(void)

{
  FUN_142fd5780();
  return;
}



// FUNCTION 1412f1140 FUN_1412f1140 body=34 status=ok
// SIG undefined FUN_1412f1140(void)

void FUN_1412f1140(void)

{
  undefined8 uVar1;
  
  uVar1 = ADragonHeart::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetTrackedTarget_1447adad0,6);
  return;
}



// FUNCTION 1412f1170 StaticRegisterNativesUARTrackedObject body=34 status=ok
// SIG undefined StaticRegisterNativesUARTrackedObject(void)

void UARTrackedObject::StaticRegisterNativesUARTrackedObject(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_RefreshParams_1447adc48,1);
  return;
}



// FUNCTION 1412f11a0 FUN_1412f11a0 body=34 status=ok
// SIG undefined FUN_1412f11a0(void)

void FUN_1412f11a0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412efd90();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ApplyPostProcess_1447adc58,1);
  return;
}



// FUNCTION 1412f11d0 FUN_1412f11d0 body=82 status=ok
// SIG undefined FUN_1412f11d0(void)

void FUN_1412f11d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687add8 == 0) {
    uVar1 = FUN_1412f0f30();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687add8 = GetStaticStruct(FUN_1412f1830,uVar2,L"CameraIntroBlend",0x98,uVar1);
  }
  return;
}



// FUNCTION 1412f1230 FUN_1412f1230 body=82 status=ok
// SIG undefined FUN_1412f1230(void)

void FUN_1412f1230(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687adf8 == 0) {
    uVar1 = FUN_1412f0f40();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687adf8 = GetStaticStruct(FUN_1412f1860,uVar2,L"CameraKeyOffset",0x2c,uVar1);
  }
  return;
}



// FUNCTION 1412f1290 FUN_1412f1290 body=82 status=ok
// SIG undefined FUN_1412f1290(void)

void FUN_1412f1290(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687ade8 == 0) {
    uVar1 = FUN_1412f0f50();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687ade8 = GetStaticStruct(FUN_1412f1890,uVar2,L"CameraPitchOffset",0x14,uVar1);
  }
  return;
}



// FUNCTION 1412f12f0 FUN_1412f12f0 body=82 status=ok
// SIG undefined FUN_1412f12f0(void)

void FUN_1412f12f0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687ac48 == 0) {
    uVar1 = FUN_1412f0f60();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687ac48 = GetStaticStruct(FUN_1412f18c0,uVar2,L"DialogParameterValuePair",0x88,uVar1);
  }
  return;
}



// FUNCTION 1412f1350 FUN_1412f1350 body=82 status=ok
// SIG undefined FUN_1412f1350(void)

void FUN_1412f1350(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687ace0 == 0) {
    uVar1 = FUN_1412f0f70();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687ace0 = GetStaticStruct(FUN_1412f18f0,uVar2,L"LadderBehaviorGoalParams",0x68,uVar1);
  }
  return;
}



// FUNCTION 1412f13b0 FUN_1412f13b0 body=47 status=ok
// SIG undefined FUN_1412f13b0(void)

longlong FUN_1412f13b0(void)

{
  if (DAT_14687ac78 == 0) {
    FUN_141786440(&DAT_14687ac78,&PTR_GetPrivateStaticClass_1447ab5e0);
  }
  return DAT_14687ac78;
}



// FUNCTION 1412f13e0 FUN_1412f13e0 body=47 status=ok
// SIG undefined FUN_1412f13e0(void)

longlong FUN_1412f13e0(void)

{
  if (DAT_14687ac38 == 0) {
    FUN_141786440(&DAT_14687ac38,&PTR_FUN_1447a6340);
  }
  return DAT_14687ac38;
}



// FUNCTION 1412f1410 FUN_1412f1410 body=47 status=ok
// SIG undefined FUN_1412f1410(void)

longlong FUN_1412f1410(void)

{
  if (DAT_14687ac28 == 0) {
    FUN_141786440(&DAT_14687ac28,&PTR_FUN_1447acd00);
  }
  return DAT_14687ac28;
}



// FUNCTION 1412f1440 FUN_1412f1440 body=47 status=ok
// SIG undefined FUN_1412f1440(void)

longlong FUN_1412f1440(void)

{
  if (DAT_14687ac98 == 0) {
    FUN_141786440(&DAT_14687ac98,&PTR_GetPrivateStaticClass_1447aab80);
  }
  return DAT_14687ac98;
}



// FUNCTION 1412f1470 FUN_1412f1470 body=47 status=ok
// SIG undefined FUN_1412f1470(void)

longlong FUN_1412f1470(void)

{
  if (DAT_14687ac88 == 0) {
    FUN_141786440(&DAT_14687ac88,&PTR_FUN_1447acf70);
  }
  return DAT_14687ac88;
}



// FUNCTION 1412f14a0 FUN_1412f14a0 body=47 status=ok
// SIG undefined FUN_1412f14a0(void)

longlong FUN_1412f14a0(void)

{
  if (DAT_14687aca8 == 0) {
    FUN_141786440(&DAT_14687aca8,&PTR_GetPrivateStaticClass_1447ad630);
  }
  return DAT_14687aca8;
}



// FUNCTION 1412f14d0 FUN_1412f14d0 body=47 status=ok
// SIG undefined FUN_1412f14d0(void)

longlong FUN_1412f14d0(void)

{
  if (DAT_14687acb8 == 0) {
    FUN_141786440(&DAT_14687acb8,&PTR_FUN_1447a05e0);
  }
  return DAT_14687acb8;
}



// FUNCTION 1412f1500 FUN_1412f1500 body=47 status=ok
// SIG undefined FUN_1412f1500(void)

longlong FUN_1412f1500(void)

{
  if (DAT_14687acf0 == 0) {
    FUN_141786440(&DAT_14687acf0,&PTR_FUN_1447ad050);
  }
  return DAT_14687acf0;
}



// FUNCTION 1412f1530 FUN_1412f1530 body=47 status=ok
// SIG undefined FUN_1412f1530(void)

longlong FUN_1412f1530(void)

{
  if (DAT_14687ad00 == 0) {
    FUN_141786440(&DAT_14687ad00,&PTR_GetPrivateStaticClass_1447ad540);
  }
  return DAT_14687ad00;
}



// FUNCTION 1412f1560 FUN_1412f1560 body=47 status=ok
// SIG undefined FUN_1412f1560(void)

longlong FUN_1412f1560(void)

{
  if (DAT_14687ad10 == 0) {
    FUN_141786440(&DAT_14687ad10,&PTR_FUN_14479fc10);
  }
  return DAT_14687ad10;
}



// FUNCTION 1412f1590 FUN_1412f1590 body=47 status=ok
// SIG undefined FUN_1412f1590(void)

longlong FUN_1412f1590(void)

{
  if (DAT_14687ad20 == 0) {
    FUN_141786440(&DAT_14687ad20,&PTR_FUN_1447a07a0);
  }
  return DAT_14687ad20;
}



// FUNCTION 1412f15c0 FUN_1412f15c0 body=47 status=ok
// SIG undefined FUN_1412f15c0(void)

longlong FUN_1412f15c0(void)

{
  if (DAT_14687ad30 == 0) {
    FUN_141786440(&DAT_14687ad30,&PTR_StaticClass_1447a0aa0);
  }
  return DAT_14687ad30;
}



// FUNCTION 1412f15f0 FUN_1412f15f0 body=47 status=ok
// SIG undefined FUN_1412f15f0(void)

longlong FUN_1412f15f0(void)

{
  if (DAT_14687ad40 == 0) {
    FUN_141786440(&DAT_14687ad40,&PTR_GetPrivateStaticClass_1447a2090);
  }
  return DAT_14687ad40;
}



// FUNCTION 1412f1620 FUN_1412f1620 body=47 status=ok
// SIG undefined FUN_1412f1620(void)

longlong FUN_1412f1620(void)

{
  if (DAT_14687ad50 == 0) {
    FUN_141786440(&DAT_14687ad50,&PTR_FUN_1447a2250);
  }
  return DAT_14687ad50;
}



// FUNCTION 1412f1650 FUN_1412f1650 body=47 status=ok
// SIG undefined FUN_1412f1650(void)

longlong FUN_1412f1650(void)

{
  if (DAT_14687ad60 == 0) {
    FUN_141786440(&DAT_14687ad60,&PTR_FUN_1447a2610);
  }
  return DAT_14687ad60;
}



// FUNCTION 1412f1680 FUN_1412f1680 body=47 status=ok
// SIG undefined FUN_1412f1680(void)

longlong FUN_1412f1680(void)

{
  if (DAT_14687ad70 == 0) {
    FUN_141786440(&DAT_14687ad70,&PTR_FUN_1447a3b60);
  }
  return DAT_14687ad70;
}



// FUNCTION 1412f16b0 FUN_1412f16b0 body=47 status=ok
// SIG undefined FUN_1412f16b0(void)

longlong FUN_1412f16b0(void)

{
  if (DAT_14687ad80 == 0) {
    FUN_141786440(&DAT_14687ad80,&PTR_FUN_1447a4130);
  }
  return DAT_14687ad80;
}



// FUNCTION 1412f16e0 FUN_1412f16e0 body=47 status=ok
// SIG undefined FUN_1412f16e0(void)

longlong FUN_1412f16e0(void)

{
  if (DAT_14687ad90 == 0) {
    FUN_141786440(&DAT_14687ad90,&PTR_FUN_1447a61a0);
  }
  return DAT_14687ad90;
}



// FUNCTION 1412f1710 FUN_1412f1710 body=47 status=ok
// SIG undefined FUN_1412f1710(void)

longlong FUN_1412f1710(void)

{
  if (DAT_14687ada0 == 0) {
    FUN_141786440(&DAT_14687ada0,&PTR_GetPrivateStaticClass_1447ac790);
  }
  return DAT_14687ada0;
}



// FUNCTION 1412f1740 FUN_1412f1740 body=47 status=ok
// SIG undefined FUN_1412f1740(void)

longlong FUN_1412f1740(void)

{
  if (DAT_14687adb0 == 0) {
    FUN_141786440(&DAT_14687adb0,&PTR_FUN_1447ad3a0);
  }
  return DAT_14687adb0;
}



// FUNCTION 1412f1770 FUN_1412f1770 body=47 status=ok
// SIG undefined FUN_1412f1770(void)

longlong FUN_1412f1770(void)

{
  if (DAT_14687adc0 == 0) {
    FUN_141786440(&DAT_14687adc0,&PTR_FUN_14479eb10);
  }
  return DAT_14687adc0;
}



// FUNCTION 1412f17a0 FUN_1412f17a0 body=47 status=ok
// SIG undefined FUN_1412f17a0(void)

longlong FUN_1412f17a0(void)

{
  if (DAT_14687ae08 == 0) {
    FUN_141786440(&DAT_14687ae08,&PTR_GetPrivateStaticClass_1447a44d0);
  }
  return DAT_14687ae08;
}



// FUNCTION 1412f17d0 FUN_1412f17d0 body=47 status=ok
// SIG undefined FUN_1412f17d0(void)

longlong FUN_1412f17d0(void)

{
  if (DAT_14687ac70 == 0) {
    FUN_141786a30(&DAT_14687ac70,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462ba220);
  }
  return DAT_14687ac70;
}



// FUNCTION 1412f1800 FUN_1412f1800 body=47 status=ok
// SIG undefined FUN_1412f1800(void)

longlong FUN_1412f1800(void)

{
  if (DAT_14687add0 == 0) {
    FUN_1417866a0(&DAT_14687add0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462bd660);
  }
  return DAT_14687add0;
}



// FUNCTION 1412f1830 FUN_1412f1830 body=47 status=ok
// SIG undefined FUN_1412f1830(void)

longlong FUN_1412f1830(void)

{
  if (DAT_14687ade0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687ade0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462bc3b0);
  }
  return DAT_14687ade0;
}



// FUNCTION 1412f1860 FUN_1412f1860 body=47 status=ok
// SIG undefined FUN_1412f1860(void)

longlong FUN_1412f1860(void)

{
  if (DAT_14687ae00 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687ae00,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462bc6c0);
  }
  return DAT_14687ae00;
}



// FUNCTION 1412f1890 FUN_1412f1890 body=47 status=ok
// SIG undefined FUN_1412f1890(void)

longlong FUN_1412f1890(void)

{
  if (DAT_14687adf0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687adf0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462bc530);
  }
  return DAT_14687adf0;
}



// FUNCTION 1412f18c0 FUN_1412f18c0 body=47 status=ok
// SIG undefined FUN_1412f18c0(void)

longlong FUN_1412f18c0(void)

{
  if (DAT_14687ac50 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687ac50,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b9f20);
  }
  return DAT_14687ac50;
}



// FUNCTION 1412f18f0 FUN_1412f18f0 body=47 status=ok
// SIG undefined FUN_1412f18f0(void)

longlong FUN_1412f18f0(void)

{
  if (DAT_14687ace8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687ace8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462bb080);
  }
  return DAT_14687ace8;
}



// FUNCTION 1412f1920 FUN_1412f1920 body=424 status=ok
// SIG undefined FUN_1412f1920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412f1920(longlong *param_1,longlong param_2)

{
  undefined1 auStack_658 [32];
  undefined1 *local_638;
  undefined4 local_628;
  undefined4 local_624;
  undefined8 local_620;
  undefined1 local_618 [1496];
  longlong local_40;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_658;
  local_620 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_620);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_620);
  }
  local_624 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_624);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_624);
  }
  local_628 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_628);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_628);
  }
  FUN_142741540(local_618);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_618);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_618);
  }
  local_638 = local_618;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_638 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x290))(param_1,local_620,local_624,local_628);
  if (local_30 != 0) {
    FMemory::Free();
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412f1ad0 execGetRenderTarget body=44 status=ok
// SIG undefined execGetRenderTarget(void)

void UWidgetComponent::execGetRenderTarget(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetRenderTarget();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1412f1b00 FUN_1412f1b00 body=493 status=ok
// SIG undefined FUN_1412f1b00(void)

void FUN_1412f1b00(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined1 local_a8 [12];
  undefined4 local_9c;
  
  local_b8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
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
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
  local_9c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar1 = local_a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140adaf90(param_1,local_b8[0],local_c0,local_c8,local_res20[0],bVar2,puVar1);
  return;
}



// FUNCTION 1412f1cf0 execOnProjectileOverlapEnd body=319 status=ok
// SIG undefined execOnProjectileOverlapEnd(void)

void AUGProjectile::execOnProjectileOverlapEnd(long param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
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
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 1412f1e30 FUN_1412f1e30 body=117 status=ok
// SIG undefined FUN_1412f1e30(void)

void FUN_1412f1e30(longlong *param_1,longlong param_2)

{
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x770))(param_1,local_18);
  return;
}



// FUNCTION 1412f1ed0 FUN_1412f1ed0 body=493 status=ok
// SIG undefined FUN_1412f1ed0(void)

void FUN_1412f1ed0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined1 local_a8 [12];
  undefined4 local_9c;
  
  local_b8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
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
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
  local_9c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar1 = local_a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140ae9060(param_1,local_b8[0],local_c0,local_c8,local_res20[0],bVar2,puVar1);
  return;
}



// FUNCTION 1412f20c0 execOnProjectileOverlapEnd body=319 status=ok
// SIG undefined execOnProjectileOverlapEnd(void)

void AUGProjectile::execOnProjectileOverlapEnd(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
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
  FUN_140ae9260(param_1,local_10,local_18,local_res20,local_res10[0]);
  return;
}



// FUNCTION 1412f2200 FUN_1412f2200 body=162 status=ok
// SIG undefined FUN_1412f2200(void)

longlong FUN_1412f2200(void)

{
  if (DAT_14687b190 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GbxCondition_CanSecondaryUseDeployVehicle",&DAT_14687b190,
                  FUN_140447710,0x88,0x10000000,0,L"Engine",FUN_1412f3800,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_14687b190;
}



// FUNCTION 1412f22b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGButton::GetPrivateStaticClass(void)

{
  if (DAT_14687b1d0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CatchARide",&DAT_14687b1d0,FUN_1412f3f90,0x738,0x10000000,0,
                  L"Engine",&LAB_1412f3680,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  ALandscapeStreamingProxy::StaticClass,&LAB_140447700,0);
  }
  return DAT_14687b1d0;
}



// FUNCTION 1412f2360 FUN_1412f2360 body=47 status=ok
// SIG undefined FUN_1412f2360(void)

longlong FUN_1412f2360(void)

{
  if (DAT_14687b1c8 == 0) {
    FUN_141786440(&DAT_14687b1c8,&PTR_GetPrivateStaticClass_1447aec70);
  }
  return DAT_14687b1c8;
}



// FUNCTION 1412f2390 FUN_1412f2390 body=47 status=ok
// SIG undefined FUN_1412f2390(void)

longlong FUN_1412f2390(void)

{
  if (DAT_14687b198 == 0) {
    FUN_141786a30(&DAT_14687b198,&PTR_FUN_1462c08a0);
  }
  return DAT_14687b198;
}



// FUNCTION 1412f23c0 FUN_1412f23c0 body=47 status=ok
// SIG undefined FUN_1412f23c0(void)

longlong FUN_1412f23c0(void)

{
  if (DAT_14687b1a0 == 0) {
    FUN_141786a30(&DAT_14687b1a0,&PTR_FUN_1462c0960);
  }
  return DAT_14687b1a0;
}



// FUNCTION 1412f23f0 FUN_1412f23f0 body=47 status=ok
// SIG undefined FUN_1412f23f0(void)

longlong FUN_1412f23f0(void)

{
  if (DAT_14687b1a8 == 0) {
    FUN_141786a30(&DAT_14687b1a8,&PTR_FUN_1462c09e0);
  }
  return DAT_14687b1a8;
}



// FUNCTION 1412f2420 FUN_1412f2420 body=47 status=ok
// SIG undefined FUN_1412f2420(void)

longlong FUN_1412f2420(void)

{
  if (DAT_14687b1b0 == 0) {
    FUN_141786a30(&DAT_14687b1b0,&PTR_FUN_1462c0ae0);
  }
  return DAT_14687b1b0;
}



// FUNCTION 1412f2450 FUN_1412f2450 body=47 status=ok
// SIG undefined FUN_1412f2450(void)

longlong FUN_1412f2450(void)

{
  if (DAT_14687b1b8 == 0) {
    FUN_141786a30(&DAT_14687b1b8,&PTR_FUN_1462c0b20);
  }
  return DAT_14687b1b8;
}



// FUNCTION 1412f2480 FUN_1412f2480 body=47 status=ok
// SIG undefined FUN_1412f2480(void)

longlong FUN_1412f2480(void)

{
  if (DAT_14687b1c0 == 0) {
    FUN_141786a30(&DAT_14687b1c0,&PTR_FUN_1462c0bb0);
  }
  return DAT_14687b1c0;
}



// FUNCTION 1412f24d0 FUN_1412f24d0 body=162 status=ok
// SIG undefined FUN_1412f24d0(void)

longlong FUN_1412f24d0(void)

{
  if (DAT_14687b178 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CarnivoraTread",&DAT_14687b178,FUN_1412f3f60,0x578,0x10000000
                  ,0,L"Engine",&LAB_1412f3660,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14687b178;
}



// FUNCTION 1412f2580 FUN_1412f2580 body=162 status=ok
// SIG undefined FUN_1412f2580(void)

longlong FUN_1412f2580(void)

{
  if (DAT_14687b218 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CatchARidePlatform",&DAT_14687b218,FUN_1412f3fc0,0x4b8,
                  0x10000000,0,L"Engine",&LAB_1412f36a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14687b218;
}



// FUNCTION 1412f2630 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USoUIInputKeySelector::GetPrivateStaticClass(void)

{
  if (DAT_14687b0e8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"Carnivora",&DAT_14687b0e8,
                  StaticRegisterNativesUSoUIInputKeySelector,0x6a0,0x10000000,0,L"Game",
                  &LAB_1412f3600,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_14096dfa0,&LAB_140447700,0);
  }
  return DAT_14687b0e8;
}



// FUNCTION 1412f26e0 FUN_1412f26e0 body=47 status=ok
// SIG undefined FUN_1412f26e0(void)

longlong FUN_1412f26e0(void)

{
  if (DAT_14687b210 == 0) {
    FUN_141786440(&DAT_14687b210,&PTR_FUN_1447af660);
  }
  return DAT_14687b210;
}



// FUNCTION 1412f2710 FUN_1412f2710 body=47 status=ok
// SIG undefined FUN_1412f2710(void)

longlong FUN_1412f2710(void)

{
  if (DAT_14687b1d8 == 0) {
    FUN_141786a30(&DAT_14687b1d8,&PTR_FUN_1462c10b0);
  }
  return DAT_14687b1d8;
}



// FUNCTION 1412f2740 FUN_1412f2740 body=47 status=ok
// SIG undefined FUN_1412f2740(void)

longlong FUN_1412f2740(void)

{
  if (DAT_14687b1e0 == 0) {
    FUN_141786a30(&DAT_14687b1e0,&PTR_FUN_1462c10f0);
  }
  return DAT_14687b1e0;
}



// FUNCTION 1412f2770 FUN_1412f2770 body=47 status=ok
// SIG undefined FUN_1412f2770(void)

longlong FUN_1412f2770(void)

{
  if (DAT_14687b1e8 == 0) {
    FUN_141786a30(&DAT_14687b1e8,&PTR_FUN_1462c1200);
  }
  return DAT_14687b1e8;
}



// FUNCTION 1412f27a0 FUN_1412f27a0 body=47 status=ok
// SIG undefined FUN_1412f27a0(void)

longlong FUN_1412f27a0(void)

{
  if (DAT_14687b1f0 == 0) {
    FUN_141786a30(&DAT_14687b1f0,&PTR_FUN_1462c1320);
  }
  return DAT_14687b1f0;
}



// FUNCTION 1412f27d0 FUN_1412f27d0 body=47 status=ok
// SIG undefined FUN_1412f27d0(void)

longlong FUN_1412f27d0(void)

{
  if (DAT_14687b1f8 == 0) {
    FUN_141786a30(&DAT_14687b1f8,&PTR_FUN_1462c14e0);
  }
  return DAT_14687b1f8;
}



// FUNCTION 1412f2800 FUN_1412f2800 body=47 status=ok
// SIG undefined FUN_1412f2800(void)

longlong FUN_1412f2800(void)

{
  if (DAT_14687b200 == 0) {
    FUN_141786a30(&DAT_14687b200,&PTR_FUN_1462c1620);
  }
  return DAT_14687b200;
}



// FUNCTION 1412f2830 FUN_1412f2830 body=47 status=ok
// SIG undefined FUN_1412f2830(void)

longlong FUN_1412f2830(void)

{
  if (DAT_14687b208 == 0) {
    FUN_141786a30(&DAT_14687b208,&PTR_FUN_1462c1660);
  }
  return DAT_14687b208;
}



// FUNCTION 1412f2860 FUN_1412f2860 body=47 status=ok
// SIG undefined FUN_1412f2860(void)

longlong FUN_1412f2860(void)

{
  if (DAT_14687b170 == 0) {
    FUN_141786440(&DAT_14687b170,&PTR_FUN_1447af330);
  }
  return DAT_14687b170;
}



// FUNCTION 1412f2890 FUN_1412f2890 body=47 status=ok
// SIG undefined FUN_1412f2890(void)

longlong FUN_1412f2890(void)

{
  if (DAT_14687b168 == 0) {
    FUN_141786a30(&DAT_14687b168,&PTR_FUN_1462c02f0);
  }
  return DAT_14687b168;
}



// FUNCTION 1412f28e0 FUN_1412f28e0 body=47 status=ok
// SIG undefined FUN_1412f28e0(void)

longlong FUN_1412f28e0(void)

{
  if (DAT_14687b0e0 == 0) {
    FUN_141786440(&DAT_14687b0e0,&PTR_GetPrivateStaticClass_1447b0e00);
  }
  return DAT_14687b0e0;
}



// FUNCTION 1412f2910 FUN_1412f2910 body=47 status=ok
// SIG undefined FUN_1412f2910(void)

longlong FUN_1412f2910(void)

{
  if (DAT_14687b098 == 0) {
    FUN_141786a30(&DAT_14687b098,&PTR_FUN_1462be580);
  }
  return DAT_14687b098;
}



// FUNCTION 1412f2940 FUN_1412f2940 body=47 status=ok
// SIG undefined FUN_1412f2940(void)

longlong FUN_1412f2940(void)

{
  if (DAT_14687b0a0 == 0) {
    FUN_141786a30(&DAT_14687b0a0,&PTR_FUN_1462be700);
  }
  return DAT_14687b0a0;
}



// FUNCTION 1412f2970 FUN_1412f2970 body=47 status=ok
// SIG undefined FUN_1412f2970(void)

longlong FUN_1412f2970(void)

{
  if (DAT_14687b0a8 == 0) {
    FUN_141786a30(&DAT_14687b0a8,&PTR_FUN_1462be740);
  }
  return DAT_14687b0a8;
}



// FUNCTION 1412f29a0 FUN_1412f29a0 body=47 status=ok
// SIG undefined FUN_1412f29a0(void)

longlong FUN_1412f29a0(void)

{
  if (DAT_14687b0b0 == 0) {
    FUN_141786a30(&DAT_14687b0b0,&PTR_FUN_1462be7d0);
  }
  return DAT_14687b0b0;
}



// FUNCTION 1412f29d0 FUN_1412f29d0 body=47 status=ok
// SIG undefined FUN_1412f29d0(void)

longlong FUN_1412f29d0(void)

{
  if (DAT_14687b0b8 == 0) {
    FUN_141786a30(&DAT_14687b0b8,&PTR_FUN_1462be860);
  }
  return DAT_14687b0b8;
}



// FUNCTION 1412f2a00 FUN_1412f2a00 body=47 status=ok
// SIG undefined FUN_1412f2a00(void)

longlong FUN_1412f2a00(void)

{
  if (DAT_14687b0c0 == 0) {
    FUN_141786a30(&DAT_14687b0c0,&PTR_FUN_1462be8f0);
  }
  return DAT_14687b0c0;
}



// FUNCTION 1412f2a30 FUN_1412f2a30 body=47 status=ok
// SIG undefined FUN_1412f2a30(void)

longlong FUN_1412f2a30(void)

{
  if (DAT_14687b0c8 == 0) {
    FUN_141786a30(&DAT_14687b0c8,&PTR_FUN_1462be980);
  }
  return DAT_14687b0c8;
}



// FUNCTION 1412f2a60 FUN_1412f2a60 body=47 status=ok
// SIG undefined FUN_1412f2a60(void)

longlong FUN_1412f2a60(void)

{
  if (DAT_14687b0d0 == 0) {
    FUN_141786a30(&DAT_14687b0d0,&PTR_FUN_1462bea50);
  }
  return DAT_14687b0d0;
}



// FUNCTION 1412f2a90 FUN_1412f2a90 body=47 status=ok
// SIG undefined FUN_1412f2a90(void)

longlong FUN_1412f2a90(void)

{
  if (DAT_14687b0d8 == 0) {
    FUN_141786a30(&DAT_14687b0d8,&PTR_FUN_1462bead0);
  }
  return DAT_14687b0d8;
}



// FUNCTION 1412f2ac0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAnimMontage::GetPrivateStaticClass(void)

{
  if (DAT_14687afd0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_VehicleTransitionOut",&DAT_14687afd0,
                  FUN_140447710,0x1e0,0x10000000,0,L"Engine",&LAB_1412f36e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPlayStateEffect::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687afd0;
}



// FUNCTION 1412f2b70 FUN_1412f2b70 body=53 status=ok
// SIG undefined FUN_1412f2b70(void)

void FUN_1412f2b70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_1447b5510;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412f2bb0 FUN_1412f2bb0 body=53 status=ok
// SIG undefined FUN_1412f2bb0(void)

void FUN_1412f2bb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_1447b5628;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412f2bf0 FUN_1412f2bf0 body=53 status=ok
// SIG undefined FUN_1412f2bf0(void)

void FUN_1412f2bf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_1447b5740;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1412f2c40 FUN_1412f2c40 body=162 status=ok
// SIG undefined FUN_1412f2c40(void)

longlong FUN_1412f2c40(void)

{
  if (DAT_14687afe0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_ViewWeaponFOV",&DAT_14687afe0,FUN_140447710,
                  0x38,0x10000000,0,L"Engine",&LAB_1412f3700,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPlayStateEffect::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687afe0;
}



// FUNCTION 1412f2cf0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGJournalKey::GetPrivateStaticClass(void)

{
  if (DAT_14687b000 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_WeaponLook",&DAT_14687b000,FUN_140447710,0xa0,
                  0x10000000,0,L"Engine",&LAB_1412f3740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142fd5780,&LAB_140447700,0);
  }
  return DAT_14687b000;
}



// FUNCTION 1412f2dc0 FUN_1412f2dc0 body=162 status=ok
// SIG undefined FUN_1412f2dc0(void)

longlong FUN_1412f2dc0(void)

{
  if (DAT_14687b010 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_WeaponRecoil",&DAT_14687b010,FUN_140447710,
                  0x30,0x10000000,0,L"Engine",&LAB_1412f3760,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPlayStateEffect::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687b010;
}



// FUNCTION 1412f2e80 FUN_1412f2e80 body=162 status=ok
// SIG undefined FUN_1412f2e80(void)

longlong FUN_1412f2e80(void)

{
  if (DAT_14687b020 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_WeaponSway",&DAT_14687b020,FUN_140447710,0x30,
                  0x10000000,0,L"Engine",&LAB_1412f3780,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPlayStateEffect::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687b020;
}



// FUNCTION 1412f2f40 FUN_1412f2f40 body=162 status=ok
// SIG undefined FUN_1412f2f40(void)

longlong FUN_1412f2f40(void)

{
  if (DAT_14687b030 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_WeaponZoomFOV",&DAT_14687b030,FUN_140447710,
                  0x30,0x10000000,0,L"Engine",&LAB_1412f37a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPlayStateEffect::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687b030;
}



// FUNCTION 1412f2ff0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UXSkinAnimationProfile::GetPrivateStaticClass(void)

{
  if (DAT_14687aff0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CameraBehavior_ViewWeaponOffset",&DAT_14687aff0,FUN_140447710
                  ,0x80,0x10000000,0,L"Engine",&LAB_1412f3720,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142fd5830,&LAB_140447700,0);
  }
  return DAT_14687aff0;
}



// FUNCTION 1412f30d0 FUN_1412f30d0 body=162 status=ok
// SIG undefined FUN_1412f30d0(void)

longlong FUN_1412f30d0(void)

{
  if (DAT_14687b108 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"CarnivoraAnimInstance",&DAT_14687b108,FUN_140447710,0xb30,
                  0x10000008,0,L"Engine",&LAB_1412f37c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142256d30,thunk_FUN_1428eccf0,
                  &LAB_14084f730,0);
  }
  return DAT_14687b108;
}


