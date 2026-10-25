// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1412de350 FUN_1412de350 body=6 status=ok
// SIG undefined FUN_1412de350(void)

undefined8 FUN_1412de350(void)

{
  return 0x6bfeb7d6;
}



// FUNCTION 1412de360 FUN_1412de360 body=6 status=ok
// SIG undefined FUN_1412de360(void)

undefined8 FUN_1412de360(void)

{
  return 0x4c512558;
}



// FUNCTION 1412de370 FUN_1412de370 body=6 status=ok
// SIG undefined FUN_1412de370(void)

undefined8 FUN_1412de370(void)

{
  return 0x88240ce;
}



// FUNCTION 1412de380 FUN_1412de380 body=6 status=ok
// SIG undefined FUN_1412de380(void)

undefined8 FUN_1412de380(void)

{
  return 0x7f3f8303;
}



// FUNCTION 1412de390 FUN_1412de390 body=6 status=ok
// SIG undefined FUN_1412de390(void)

undefined8 FUN_1412de390(void)

{
  return 0x613ff48a;
}



// FUNCTION 1412de3a0 FUN_1412de3a0 body=6 status=ok
// SIG undefined FUN_1412de3a0(void)

undefined8 FUN_1412de3a0(void)

{
  return 0x58016ccc;
}



// FUNCTION 1412de3b0 FUN_1412de3b0 body=6 status=ok
// SIG undefined FUN_1412de3b0(void)

undefined8 FUN_1412de3b0(void)

{
  return 0x27149dd8;
}



// FUNCTION 1412de3c0 FUN_1412de3c0 body=6 status=ok
// SIG undefined FUN_1412de3c0(void)

undefined8 FUN_1412de3c0(void)

{
  return 0xbeb77413;
}



// FUNCTION 1412de3d0 FUN_1412de3d0 body=6 status=ok
// SIG undefined FUN_1412de3d0(void)

undefined8 FUN_1412de3d0(void)

{
  return 0xd9457f53;
}



// FUNCTION 1412de3e0 FUN_1412de3e0 body=6 status=ok
// SIG undefined FUN_1412de3e0(void)

undefined8 FUN_1412de3e0(void)

{
  return 0x4bed2a79;
}



// FUNCTION 1412de3f0 FUN_1412de3f0 body=6 status=ok
// SIG undefined FUN_1412de3f0(void)

undefined8 FUN_1412de3f0(void)

{
  return 0xf2ba8336;
}



// FUNCTION 1412de450 FUN_1412de450 body=130 status=ok
// SIG undefined FUN_1412de450(void)

void FUN_1412de450(longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x88,0);
    iVar3 = (int)(uVar1 / 0x88);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x88,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1412de4e0 FUN_1412de4e0 body=65 status=ok
// SIG undefined FUN_1412de4e0(void)

void FUN_1412de4e0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  local_resc = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146879168);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1412de530 FUN_1412de530 body=60 status=ok
// SIG undefined FUN_1412de530(void)

void FUN_1412de530(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10 [6];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146879170);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 1412de570 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void AUGAICharacter::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1412de580 FUN_1412de580 body=34 status=ok
// SIG undefined FUN_1412de580(void)

void FUN_1412de580(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412dc490();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_EquipSawAnimDone_144785270,6);
  return;
}



// FUNCTION 1412de5b0 FUN_1412de5b0 body=34 status=ok
// SIG undefined FUN_1412de5b0(void)

void FUN_1412de5b0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412dcb50();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_LookAtTarget_1447852d0,4);
  return;
}



// FUNCTION 1412de5e0 FUN_1412de5e0 body=34 status=ok
// SIG undefined FUN_1412de5e0(void)

void FUN_1412de5e0(void)

{
  undefined8 uVar1;
  
  uVar1 = UFocusButtonWidget::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnAnticipationDone_144785540,0xf);
  return;
}



// FUNCTION 1412de610 FUN_1412de610 body=34 status=ok
// SIG undefined FUN_1412de610(void)

void FUN_1412de610(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412dbf90();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_InitCustomEscort_144785dc8,2);
  return;
}



// FUNCTION 1412de640 FUN_1412de640 body=34 status=ok
// SIG undefined FUN_1412de640(void)

void FUN_1412de640(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412dc250();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_GetDialogConditionSettingsDescri_1447863d0,2);
  return;
}



// FUNCTION 1412de670 FUN_1412de670 body=34 status=ok
// SIG undefined FUN_1412de670(void)

void FUN_1412de670(void)

{
  undefined8 uVar1;
  
  uVar1 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetReviveSettingsDescription_144786738,1)
  ;
  return;
}



// FUNCTION 1412de6a0 FUN_1412de6a0 body=82 status=ok
// SIG undefined FUN_1412de6a0(void)

void FUN_1412de6a0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146879698 == 0) {
    uVar1 = FUN_1412de360();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879698 = GetStaticStruct(FUN_1412dee80,uVar2,L"AIAspectSettings_Dialog",0x140,uVar1);
  }
  return;
}



// FUNCTION 1412de700 FUN_1412de700 body=82 status=ok
// SIG undefined FUN_1412de700(void)

void FUN_1412de700(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468796a8 == 0) {
    uVar1 = FUN_1412de350();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468796a8 =
         GetStaticStruct(FUN_1412deeb0,uVar2,L"AIAspectSettings_DialogCondition",0x88,uVar1);
  }
  return;
}



// FUNCTION 1412de760 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468796d8 == 0) {
    uVar1 = FUN_1412de370();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468796d8 = GetStaticStruct(FUN_1412deee0,uVar2,L"AIAspectSettings_MovePath",0x40,uVar1);
  }
  return;
}



// FUNCTION 1412de7c0 FUN_1412de7c0 body=82 status=ok
// SIG undefined FUN_1412de7c0(void)

void FUN_1412de7c0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146879718 == 0) {
    uVar1 = FUN_1412de380();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879718 = GetStaticStruct(FUN_1412def10,uVar2,L"AIAspectSettings_Revive",0x90,uVar1);
  }
  return;
}



// FUNCTION 1412de820 FUN_1412de820 body=82 status=ok
// SIG undefined FUN_1412de820(void)

void FUN_1412de820(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146879748 == 0) {
    uVar1 = FUN_1412de390();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879748 =
         GetStaticStruct(FUN_1412def40,uVar2,L"AIAspectSettings_VehicleArchetype",2,uVar1);
  }
  return;
}



// FUNCTION 1412de880 FUN_1412de880 body=82 status=ok
// SIG undefined FUN_1412de880(void)

void FUN_1412de880(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146879768 == 0) {
    uVar1 = FUN_1412de3a0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879768 = GetStaticStruct(FUN_1412def70,uVar2,L"AIAspectSettings_VehicleAttitude",2,uVar1)
    ;
  }
  return;
}



// FUNCTION 1412de8e0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468794c8 == 0) {
    uVar1 = FUN_1412de3b0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468794c8 = GetStaticStruct(FUN_1412defa0,uVar2,L"AgonizerAttackDataTableRow",0x10,uVar1);
  }
  return;
}



// FUNCTION 1412de940 FUN_1412de940 body=82 status=ok
// SIG undefined FUN_1412de940(void)

void FUN_1412de940(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146879570 == 0) {
    uVar1 = FUN_1412de3e0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879570 = GetStaticStruct(FUN_1412defd0,uVar2,L"FloorSector",0x68,uVar1);
  }
  return;
}



// FUNCTION 1412de9a0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvent::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146879560 == 0) {
    uVar1 = FUN_1412de3c0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879560 = GetStaticStruct(FUN_1412df000,uVar2,L"FloorSectorDistance",8,uVar1);
  }
  return;
}



// FUNCTION 1412dea00 FUN_1412dea00 body=82 status=ok
// SIG undefined FUN_1412dea00(void)

void FUN_1412dea00(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146879580 == 0) {
    uVar1 = FUN_1412de3d0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879580 = GetStaticStruct(FUN_1412df030,uVar2,L"FloorSectorRing",0x68,uVar1);
  }
  return;
}



// FUNCTION 1412dea60 FUN_1412dea60 body=82 status=ok
// SIG undefined FUN_1412dea60(void)

void FUN_1412dea60(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468796e8 == 0) {
    uVar1 = FUN_1412de3f0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468796e8 = GetStaticStruct(FUN_1412df060,uVar2,L"PathSegmentSetting",0x34,uVar1);
  }
  return;
}



// FUNCTION 1412deac0 FUN_1412deac0 body=47 status=ok
// SIG undefined FUN_1412deac0(void)

longlong FUN_1412deac0(void)

{
  if (DAT_146879518 == 0) {
    FUN_141786440(&DAT_146879518,&PTR_GetPrivateStaticClass_14477fe80);
  }
  return DAT_146879518;
}



// FUNCTION 1412deaf0 FUN_1412deaf0 body=47 status=ok
// SIG undefined FUN_1412deaf0(void)

longlong FUN_1412deaf0(void)

{
  if (DAT_146879618 == 0) {
    FUN_141786440(&DAT_146879618,&PTR_FUN_14477a670);
  }
  return DAT_146879618;
}



// FUNCTION 1412deb20 FUN_1412deb20 body=47 status=ok
// SIG undefined FUN_1412deb20(void)

longlong FUN_1412deb20(void)

{
  if (DAT_146879628 == 0) {
    FUN_141786440(&DAT_146879628,&PTR_FUN_14477a7f0);
  }
  return DAT_146879628;
}



// FUNCTION 1412deb50 FUN_1412deb50 body=47 status=ok
// SIG undefined FUN_1412deb50(void)

longlong FUN_1412deb50(void)

{
  if (DAT_146879638 == 0) {
    FUN_141786440(&DAT_146879638,&PTR_FUN_144780ae0);
  }
  return DAT_146879638;
}



// FUNCTION 1412deb80 FUN_1412deb80 body=47 status=ok
// SIG undefined FUN_1412deb80(void)

longlong FUN_1412deb80(void)

{
  if (DAT_146879648 == 0) {
    FUN_141786440(&DAT_146879648,&PTR_FUN_14477bc90);
  }
  return DAT_146879648;
}



// FUNCTION 1412debb0 FUN_1412debb0 body=47 status=ok
// SIG undefined FUN_1412debb0(void)

longlong FUN_1412debb0(void)

{
  if (DAT_146879658 == 0) {
    FUN_141786440(&DAT_146879658,&PTR_FUN_144776600);
  }
  return DAT_146879658;
}



// FUNCTION 1412debe0 FUN_1412debe0 body=47 status=ok
// SIG undefined FUN_1412debe0(void)

longlong FUN_1412debe0(void)

{
  if (DAT_146879688 == 0) {
    FUN_141786440(&DAT_146879688,&PTR_FUN_14477acb0);
  }
  return DAT_146879688;
}



// FUNCTION 1412dec10 FUN_1412dec10 body=47 status=ok
// SIG undefined FUN_1412dec10(void)

longlong FUN_1412dec10(void)

{
  if (DAT_1468796f8 == 0) {
    FUN_141786440(&DAT_1468796f8,&PTR_FUN_14477dfe0);
  }
  return DAT_1468796f8;
}



// FUNCTION 1412dec40 FUN_1412dec40 body=47 status=ok
// SIG undefined FUN_1412dec40(void)

longlong FUN_1412dec40(void)

{
  if (DAT_146879708 == 0) {
    FUN_141786440(&DAT_146879708,&PTR_FUN_14477e4b0);
  }
  return DAT_146879708;
}



// FUNCTION 1412dec70 FUN_1412dec70 body=47 status=ok
// SIG undefined FUN_1412dec70(void)

longlong FUN_1412dec70(void)

{
  if (DAT_146879758 == 0) {
    FUN_141786440(&DAT_146879758,&PTR_FUN_144781f40);
  }
  return DAT_146879758;
}



// FUNCTION 1412deca0 FUN_1412deca0 body=47 status=ok
// SIG undefined FUN_1412deca0(void)

longlong FUN_1412deca0(void)

{
  if (DAT_146879778 == 0) {
    FUN_141786440(&DAT_146879778,&PTR_FUN_144783430);
  }
  return DAT_146879778;
}



// FUNCTION 1412decd0 FUN_1412decd0 body=47 status=ok
// SIG undefined FUN_1412decd0(void)

longlong FUN_1412decd0(void)

{
  if (DAT_1468794a0 == 0) {
    FUN_141786a30(&DAT_1468794a0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462a7e10);
  }
  return DAT_1468794a0;
}



// FUNCTION 1412ded00 FUN_1412ded00 body=47 status=ok
// SIG undefined FUN_1412ded00(void)

longlong FUN_1412ded00(void)

{
  if (DAT_1468794a8 == 0) {
    FUN_141786a30(&DAT_1468794a8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462a7e50);
  }
  return DAT_1468794a8;
}



// FUNCTION 1412ded30 FUN_1412ded30 body=47 status=ok
// SIG undefined FUN_1412ded30(void)

longlong FUN_1412ded30(void)

{
  if (DAT_146879498 == 0) {
    FUN_141786a30(&DAT_146879498,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462a7dd0);
  }
  return DAT_146879498;
}



// FUNCTION 1412ded60 FUN_1412ded60 body=47 status=ok
// SIG undefined FUN_1412ded60(void)

longlong FUN_1412ded60(void)

{
  if (DAT_146879558 == 0) {
    FUN_141786a30(&DAT_146879558,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462a8ae0);
  }
  return DAT_146879558;
}



// FUNCTION 1412ded90 FUN_1412ded90 body=47 status=ok
// SIG undefined FUN_1412ded90(void)

longlong FUN_1412ded90(void)

{
  if (DAT_146879490 == 0) {
    FUN_141786a30(&DAT_146879490,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462a7d90);
  }
  return DAT_146879490;
}



// FUNCTION 1412dedc0 FUN_1412dedc0 body=47 status=ok
// SIG undefined FUN_1412dedc0(void)

longlong FUN_1412dedc0(void)

{
  if (DAT_1468794b0 == 0) {
    FUN_141786a30(&DAT_1468794b0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462a7e90);
  }
  return DAT_1468794b0;
}



// FUNCTION 1412dedf0 FUN_1412dedf0 body=47 status=ok
// SIG undefined FUN_1412dedf0(void)

longlong FUN_1412dedf0(void)

{
  if (DAT_1468794c0 == 0) {
    FUN_1417866a0(&DAT_1468794c0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462aba70);
  }
  return DAT_1468794c0;
}



// FUNCTION 1412dee20 FUN_1412dee20 body=47 status=ok
// SIG undefined FUN_1412dee20(void)

longlong FUN_1412dee20(void)

{
  if (DAT_1468794b8 == 0) {
    FUN_1417866a0(&DAT_1468794b8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462aba20);
  }
  return DAT_1468794b8;
}



// FUNCTION 1412dee50 FUN_1412dee50 body=47 status=ok
// SIG undefined FUN_1412dee50(void)

longlong FUN_1412dee50(void)

{
  if (DAT_146879740 == 0) {
    FUN_1417866a0(&DAT_146879740,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462abac0);
  }
  return DAT_146879740;
}



// FUNCTION 1412dee80 FUN_1412dee80 body=47 status=ok
// SIG undefined FUN_1412dee80(void)

longlong FUN_1412dee80(void)

{
  if (DAT_1468796a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468796a0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462aaef0);
  }
  return DAT_1468796a0;
}



// FUNCTION 1412deeb0 FUN_1412deeb0 body=47 status=ok
// SIG undefined FUN_1412deeb0(void)

longlong FUN_1412deeb0(void)

{
  if (DAT_1468796b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468796b0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462aafc0);
  }
  return DAT_1468796b0;
}



// FUNCTION 1412deee0 FUN_1412deee0 body=47 status=ok
// SIG undefined FUN_1412deee0(void)

longlong FUN_1412deee0(void)

{
  if (DAT_1468796e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468796e0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462ab330);
  }
  return DAT_1468796e0;
}



// FUNCTION 1412def10 FUN_1412def10 body=47 status=ok
// SIG undefined FUN_1412def10(void)

longlong FUN_1412def10(void)

{
  if (DAT_146879720 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146879720,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462ab5d0);
  }
  return DAT_146879720;
}



// FUNCTION 1412def40 FUN_1412def40 body=47 status=ok
// SIG undefined FUN_1412def40(void)

longlong FUN_1412def40(void)

{
  if (DAT_146879750 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146879750,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462ab810);
  }
  return DAT_146879750;
}



// FUNCTION 1412def70 FUN_1412def70 body=47 status=ok
// SIG undefined FUN_1412def70(void)

longlong FUN_1412def70(void)

{
  if (DAT_146879770 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146879770,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462ab960);
  }
  return DAT_146879770;
}



// FUNCTION 1412defa0 FUN_1412defa0 body=47 status=ok
// SIG undefined FUN_1412defa0(void)

longlong FUN_1412defa0(void)

{
  if (DAT_1468794d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468794d0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462a7f40);
  }
  return DAT_1468794d0;
}



// FUNCTION 1412defd0 FUN_1412defd0 body=47 status=ok
// SIG undefined FUN_1412defd0(void)

longlong FUN_1412defd0(void)

{
  if (DAT_146879578 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146879578,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462a8b70);
  }
  return DAT_146879578;
}



// FUNCTION 1412df000 FUN_1412df000 body=47 status=ok
// SIG undefined FUN_1412df000(void)

longlong FUN_1412df000(void)

{
  if (DAT_146879568 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146879568,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462a8b20);
  }
  return DAT_146879568;
}



// FUNCTION 1412df030 FUN_1412df030 body=47 status=ok
// SIG undefined FUN_1412df030(void)

longlong FUN_1412df030(void)

{
  if (DAT_146879588 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146879588,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462a8bc0);
  }
  return DAT_146879588;
}



// FUNCTION 1412df060 FUN_1412df060 body=47 status=ok
// SIG undefined FUN_1412df060(void)

longlong FUN_1412df060(void)

{
  if (DAT_1468796f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468796f0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462ab470);
  }
  return DAT_1468796f0;
}



// FUNCTION 1412df0b0 FUN_1412df0b0 body=495 status=ok
// SIG undefined FUN_1412df0b0(void)

void FUN_1412df0b0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  longlong local_res10;
  undefined8 local_res18 [2];
  undefined2 *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8 [2];
  longlong local_c8 [2];
  undefined1 local_b8 [144];
  
  FUN_1409c2590(local_b8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  local_res10 = 0;
  puVar5 = local_b8;
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
  uVar2 = FUN_1409d5060(puVar5,local_c8);
  puVar3 = (undefined8 *)FString::Replace(uVar2,local_d8,&DAT_1440a3e48,&DAT_1440a3e40,1);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar3;
  }
  if (lVar1 == 0) {
    local_f8 = (undefined2 *)0x0;
    local_f0 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    FGenericPlatformString::Memcpy(local_f8,&DAT_143f3edc8,10);
  }
  else {
    local_res18[0] = *(undefined8 *)(lVar1 + 0x18);
    FName::ToString(local_res18,&local_f8);
  }
  puVar4 = &DAT_143f3eda8;
  if ((int)local_f0 != 0) {
    puVar4 = local_f8;
  }
  FString::PrintfImpl(&local_e8,L"%s:\n\t%s",puVar4,puVar6);
  if (local_f8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_d8[0] != 0) {
    FMemory::Free();
  }
  if (local_c8[0] != 0) {
    FMemory::Free();
  }
  if (param_3 == &local_e8) {
    if (local_e8 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_e8;
    *(undefined4 *)(param_3 + 1) = local_e0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_dc;
  }
  return;
}



// FUNCTION 1412df2a0 FUN_1412df2a0 body=568 status=ok
// SIG undefined FUN_1412df2a0(void)

void FUN_1412df2a0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong *plVar5;
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
  longlong local_168 [3];
  longlong local_150;
  longlong local_140;
  
  FUN_1409c2540(local_168);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_168);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_168);
  }
  local_res10 = 0;
  plVar5 = local_168;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
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
  uVar2 = FUN_1409d4e30(plVar5,local_178);
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
  if (local_140 != 0) {
    FMemory::Free();
  }
  if (local_150 != 0) {
    FMemory::Free();
  }
  if (local_168[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412df4e0 FUN_1412df4e0 body=495 status=ok
// SIG undefined FUN_1412df4e0(void)

void FUN_1412df4e0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  longlong local_res10;
  undefined8 local_res18 [2];
  undefined2 *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8 [2];
  longlong local_c8 [2];
  undefined1 local_b8 [144];
  
  FUN_1409c25d0(local_b8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  local_res10 = 0;
  puVar5 = local_b8;
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
  uVar2 = FKey::ToString(puVar5,local_c8);
  puVar3 = (undefined8 *)FString::Replace(uVar2,local_d8,&DAT_1440a3e48,&DAT_1440a3e40,1);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar3;
  }
  if (lVar1 == 0) {
    local_f8 = (undefined2 *)0x0;
    local_f0 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    FGenericPlatformString::Memcpy(local_f8,&DAT_143f3edc8,10);
  }
  else {
    local_res18[0] = *(undefined8 *)(lVar1 + 0x18);
    FName::ToString(local_res18,&local_f8);
  }
  puVar4 = &DAT_143f3eda8;
  if ((int)local_f0 != 0) {
    puVar4 = local_f8;
  }
  FString::PrintfImpl(&local_e8,L"%s:\n\t%s",puVar4,puVar6);
  if (local_f8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_d8[0] != 0) {
    FMemory::Free();
  }
  if (local_c8[0] != 0) {
    FMemory::Free();
  }
  if (param_3 == &local_e8) {
    if (local_e8 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = local_e8;
    *(undefined4 *)(param_3 + 1) = local_e0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_dc;
  }
  return;
}



// FUNCTION 1412df6d0 FUN_1412df6d0 body=324 status=ok
// SIG undefined FUN_1412df6d0(void)

void FUN_1412df6d0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  local_28 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_20);
  }
  local_res10 = 0;
  puVar1 = local_20;
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
  FUN_1409d8d00(local_28,local_res20,puVar1,local_res10);
  return;
}



// FUNCTION 1412df820 FUN_1412df820 body=261 status=ok
// SIG undefined FUN_1412df820(void)

void FUN_1412df820(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined1 local_18 [16];
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  local_res10 = 0;
  puVar1 = local_18;
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
  FUN_1409d8df0(local_res20,puVar1,local_res10);
  return;
}



// FUNCTION 1412df930 FUN_1412df930 body=197 status=ok
// SIG undefined FUN_1412df930(void)

void FUN_1412df930(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
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
  FUN_1409dbad0(param_1,local_res10[0],local_res20);
  return;
}



// FUNCTION 1412dfa20 FUN_1412dfa20 body=327 status=ok
// SIG undefined FUN_1412dfa20(void)

void FUN_1412dfa20(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_e8 [24];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_78 [8];
  longlong local_70;
  undefined8 local_68;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [32];
  
  local_70 = 0;
  local_68 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_140590080(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_d0 = 0xffffffff;
  local_cc = 0;
  puVar1 = local_78;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  puVar2 = local_e8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1409dd030(param_1,puVar1,puVar2);
  FUN_140591060(local_28);
  if (local_70 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412dfb90 FUN_1412dfb90 body=286 status=ok
// SIG undefined FUN_1412dfb90(void)

void FUN_1412dfb90(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  int local_res10 [2];
  undefined1 local_78 [8];
  longlong local_70;
  undefined8 local_68;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [32];
  
  local_70 = 0;
  local_68 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_140590080(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_res10[0] = 0;
  puVar1 = local_78;
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
  FUN_1409df3a0(param_1,puVar1,local_res10[0] != 0);
  FUN_140591060(local_28);
  if (local_70 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412dfcb0 FUN_1412dfcb0 body=197 status=ok
// SIG undefined FUN_1412dfcb0(void)

void FUN_1412dfcb0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_78 [8];
  longlong local_70;
  undefined8 local_68;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [32];
  
  local_70 = 0;
  local_68 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_140590080(local_28);
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
  FUN_1409dfd50(param_1,puVar1);
  FUN_140591060(local_28);
  if (local_70 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412dfdc0 FUN_1412dfdc0 body=128 status=ok
// SIG undefined FUN_1412dfdc0(void)

void FUN_1412dfdc0(undefined8 param_1,longlong param_2)

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
  ABP_AbducentBlock_C__pf4235152235::bpf__StartSelectBuild__pf(param_1,local_res10);
  return;
}



// FUNCTION 1412dfe40 FUN_1412dfe40 body=130 status=ok
// SIG undefined FUN_1412dfe40(void)

void FUN_1412dfe40(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x6f0))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1412dfed0 FUN_1412dfed0 body=182 status=ok
// SIG undefined FUN_1412dfed0(void)

void FUN_1412dfed0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_78 [24];
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_60 = 0xffffffff;
  local_5c = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
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
  FUN_1409e90c0(param_1,puVar1);
  return;
}



// FUNCTION 1412dff90 FUN_1412dff90 body=123 status=ok
// SIG undefined FUN_1412dff90(void)

void FUN_1412dff90(undefined8 param_1,longlong param_2)

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
  FUN_1409e97c0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1412e0010 FUN_1412e0010 body=202 status=ok
// SIG undefined FUN_1412e0010(void)

void FUN_1412e0010(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
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
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  FUN_1409e99d0(param_1,local_res10[0],&local_18);
  return;
}



// FUNCTION 1412e00e0 FUN_1412e00e0 body=123 status=ok
// SIG undefined FUN_1412e00e0(void)

void FUN_1412e00e0(undefined8 param_1,longlong param_2)

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
  FUN_1409e9c30(param_1,local_res10[0]);
  return;
}



// FUNCTION 1412e0160 FUN_1412e0160 body=123 status=ok
// SIG undefined FUN_1412e0160(void)

void FUN_1412e0160(undefined8 param_1,longlong param_2)

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
  FUN_1409ea030(param_1,local_res10[0]);
  return;
}



// FUNCTION 1412e0220 FUN_1412e0220 body=327 status=ok
// SIG undefined FUN_1412e0220(void)

void FUN_1412e0220(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_e8 [24];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_78 [8];
  longlong local_70;
  undefined8 local_68;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [32];
  
  local_70 = 0;
  local_68 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_140590080(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_d0 = 0xffffffff;
  local_cc = 0;
  puVar1 = local_78;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  puVar2 = local_e8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1409ea770(param_1,puVar1,puVar2);
  FUN_140591060(local_28);
  if (local_70 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412e0370 FUN_1412e0370 body=182 status=ok
// SIG undefined FUN_1412e0370(void)

void FUN_1412e0370(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_78 [24];
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_60 = 0xffffffff;
  local_5c = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
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
  FUN_1409ea9c0(param_1,puVar1);
  return;
}



// FUNCTION 1412e0490 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FEditableTextStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x218;
    *puVar1 = &PTR_FUN_14478c760;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412e04e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameplayTagAssetInterface::GetPrivateStaticClass(void)

{
  if (DAT_146879af8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"AIHeldActorInterface",&DAT_146879af8,
                  StaticRegisterNativesUGameplayTagAssetInterface,0x28,0x10004001,0,L"Engine",
                  FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146879af8;
}



// FUNCTION 1412e05a0 FUN_1412e05a0 body=162 status=ok
// SIG undefined FUN_1412e05a0(void)

longlong FUN_1412e05a0(void)

{
  if (DAT_146879b70 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"AIHeldActorComponent",&DAT_146879b70,FUN_1412e35d0,0x3b0,
                  0x10000004,0,L"Game",&LAB_1412e17f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1423612e0,&LAB_1412e3590,
                  &LAB_140447700,0);
  }
  return DAT_146879b70;
}



// FUNCTION 1412e0650 FUN_1412e0650 body=47 status=ok
// SIG undefined FUN_1412e0650(void)

longlong FUN_1412e0650(void)

{
  if (DAT_146879af0 == 0) {
    FUN_141786440(&DAT_146879af0,&PTR_GetPrivateStaticClass_144787b80);
  }
  return DAT_146879af0;
}



// FUNCTION 1412e0680 FUN_1412e0680 body=47 status=ok
// SIG undefined FUN_1412e0680(void)

longlong FUN_1412e0680(void)

{
  if (DAT_146879ad0 == 0) {
    FUN_141786a30(&DAT_146879ad0,&PTR_FUN_1462ae870);
  }
  return DAT_146879ad0;
}



// FUNCTION 1412e06b0 FUN_1412e06b0 body=47 status=ok
// SIG undefined FUN_1412e06b0(void)

longlong FUN_1412e06b0(void)

{
  if (DAT_146879ad8 == 0) {
    FUN_141786a30(&DAT_146879ad8,&PTR_FUN_1462ae8b0);
  }
  return DAT_146879ad8;
}



// FUNCTION 1412e06e0 FUN_1412e06e0 body=47 status=ok
// SIG undefined FUN_1412e06e0(void)

longlong FUN_1412e06e0(void)

{
  if (DAT_146879ae0 == 0) {
    FUN_141786a30(&DAT_146879ae0,&PTR_FUN_1462ae8f0);
  }
  return DAT_146879ae0;
}



// FUNCTION 1412e0710 FUN_1412e0710 body=47 status=ok
// SIG undefined FUN_1412e0710(void)

longlong FUN_1412e0710(void)

{
  if (DAT_146879ae8 == 0) {
    FUN_141786a30(&DAT_146879ae8,&PTR_FUN_1462ae930);
  }
  return DAT_146879ae8;
}



// FUNCTION 1412e0740 FUN_1412e0740 body=47 status=ok
// SIG undefined FUN_1412e0740(void)

longlong FUN_1412e0740(void)

{
  if (DAT_146879b68 == 0) {
    FUN_141786440(&DAT_146879b68,&PTR_FUN_144788500);
  }
  return DAT_146879b68;
}



// FUNCTION 1412e0770 FUN_1412e0770 body=47 status=ok
// SIG undefined FUN_1412e0770(void)

longlong FUN_1412e0770(void)

{
  if (DAT_146879b00 == 0) {
    FUN_141786a30(&DAT_146879b00,&PTR_FUN_1462aea80);
  }
  return DAT_146879b00;
}



// FUNCTION 1412e07a0 FUN_1412e07a0 body=47 status=ok
// SIG undefined FUN_1412e07a0(void)

longlong FUN_1412e07a0(void)

{
  if (DAT_146879b08 == 0) {
    FUN_141786a30(&DAT_146879b08,&PTR_FUN_1462aeb50);
  }
  return DAT_146879b08;
}



// FUNCTION 1412e07d0 FUN_1412e07d0 body=47 status=ok
// SIG undefined FUN_1412e07d0(void)

longlong FUN_1412e07d0(void)

{
  if (DAT_146879b10 == 0) {
    FUN_141786a30(&DAT_146879b10,&PTR_FUN_1462aebd0);
  }
  return DAT_146879b10;
}



// FUNCTION 1412e0800 FUN_1412e0800 body=47 status=ok
// SIG undefined FUN_1412e0800(void)

longlong FUN_1412e0800(void)

{
  if (DAT_146879b18 == 0) {
    FUN_141786a30(&DAT_146879b18,&PTR_FUN_1462aec90);
  }
  return DAT_146879b18;
}



// FUNCTION 1412e0830 FUN_1412e0830 body=47 status=ok
// SIG undefined FUN_1412e0830(void)

longlong FUN_1412e0830(void)

{
  if (DAT_146879b20 == 0) {
    FUN_141786a30(&DAT_146879b20,&PTR_FUN_1462aed10);
  }
  return DAT_146879b20;
}



// FUNCTION 1412e0860 FUN_1412e0860 body=47 status=ok
// SIG undefined FUN_1412e0860(void)

longlong FUN_1412e0860(void)

{
  if (DAT_146879b28 == 0) {
    FUN_141786a30(&DAT_146879b28,&PTR_FUN_1462aed90);
  }
  return DAT_146879b28;
}



// FUNCTION 1412e0890 FUN_1412e0890 body=47 status=ok
// SIG undefined FUN_1412e0890(void)

longlong FUN_1412e0890(void)

{
  if (DAT_146879b30 == 0) {
    FUN_141786a30(&DAT_146879b30,&PTR_FUN_1462aee50);
  }
  return DAT_146879b30;
}



// FUNCTION 1412e08c0 FUN_1412e08c0 body=47 status=ok
// SIG undefined FUN_1412e08c0(void)

longlong FUN_1412e08c0(void)

{
  if (DAT_146879b38 == 0) {
    FUN_141786a30(&DAT_146879b38,&PTR_FUN_1462aee90);
  }
  return DAT_146879b38;
}



// FUNCTION 1412e08f0 FUN_1412e08f0 body=47 status=ok
// SIG undefined FUN_1412e08f0(void)

longlong FUN_1412e08f0(void)

{
  if (DAT_146879b40 == 0) {
    FUN_141786a30(&DAT_146879b40,&PTR_FUN_1462aef20);
  }
  return DAT_146879b40;
}



// FUNCTION 1412e0920 FUN_1412e0920 body=47 status=ok
// SIG undefined FUN_1412e0920(void)

longlong FUN_1412e0920(void)

{
  if (DAT_146879b48 == 0) {
    FUN_141786a30(&DAT_146879b48,&PTR_FUN_1462aef60);
  }
  return DAT_146879b48;
}



// FUNCTION 1412e0950 FUN_1412e0950 body=47 status=ok
// SIG undefined FUN_1412e0950(void)

longlong FUN_1412e0950(void)

{
  if (DAT_146879b50 == 0) {
    FUN_141786a30(&DAT_146879b50,&PTR_FUN_1462af1e0);
  }
  return DAT_146879b50;
}



// FUNCTION 1412e0980 FUN_1412e0980 body=47 status=ok
// SIG undefined FUN_1412e0980(void)

longlong FUN_1412e0980(void)

{
  if (DAT_146879b58 == 0) {
    FUN_141786a30(&DAT_146879b58,&PTR_FUN_1462af370);
  }
  return DAT_146879b58;
}



// FUNCTION 1412e09b0 FUN_1412e09b0 body=47 status=ok
// SIG undefined FUN_1412e09b0(void)

longlong FUN_1412e09b0(void)

{
  if (DAT_146879b60 == 0) {
    FUN_141786a30(&DAT_146879b60,&PTR_FUN_1462af5b0);
  }
  return DAT_146879b60;
}



// FUNCTION 1412e0a00 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGShrineUsable::GetPrivateStaticClass(void)

{
  if (DAT_146879bb0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"AIO_CameraData",&DAT_146879bb0,FUN_140447710,0x690,0x10000000
                  ,0,L"Engine",&LAB_1412e1810,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146879bb0;
}



// FUNCTION 1412e0ab0 FUN_1412e0ab0 body=162 status=ok
// SIG undefined FUN_1412e0ab0(void)

longlong FUN_1412e0ab0(void)

{
  if (DAT_146879960 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"AIAspect_VehicleDriving",&DAT_146879960,FUN_140447710,0x180,
                  0x10000000,0,L"Engine",&LAB_1412e16b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_146879960;
}



// FUNCTION 1412e0b60 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ALevelScriptActor::GetPrivateStaticClass(void)

{
  if (DAT_146879aa0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"AIBalanceStateComponent",&DAT_146879aa0,FUN_1412e35a0,0x338,
                  0x10000000,0,L"Engine",&LAB_1412e1760,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412e3580,&LAB_140447700,0);
  }
  return DAT_146879aa0;
}



// FUNCTION 1412e0c10 FUN_1412e0c10 body=53 status=ok
// SIG undefined FUN_1412e0c10(void)

void FUN_1412e0c10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &PTR_FUN_14478bd18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412e0c60 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AUGFloorBladeColumnTrap::GetPrivateStaticClass(void)

{
  if (DAT_146879990 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"AIAspect_VehicleEscortSpeed",&DAT_146879990,FUN_140447710,
                  0x448,0x10000000,0,L"Engine",&LAB_1412e16c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UUserWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_146879990;
}



// FUNCTION 1412e0d10 FUN_1412e0d10 body=53 status=ok
// SIG undefined FUN_1412e0d10(void)

void FUN_1412e0d10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_14478d050;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412e0d50 FUN_1412e0d50 body=53 status=ok
// SIG undefined FUN_1412e0d50(void)

void FUN_1412e0d50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x98;
    *puVar1 = &PTR_FUN_14478d168;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412e0d90 FUN_1412e0d90 body=53 status=ok
// SIG undefined FUN_1412e0d90(void)

void FUN_1412e0d90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1a0;
    *puVar1 = &PTR_FUN_14478be30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412e0dd0 Z_Construct_UClass_USkeletalMeshComponent body=47 status=ok
// SIG undefined Z_Construct_UClass_USkeletalMeshComponent(void)

longlong Z_Construct_UClass_USkeletalMeshComponent(void)

{
  if (DAT_146879a98 == 0) {
    FUN_141786440(&DAT_146879a98,&PTR_GetPrivateStaticClass_14478a890);
  }
  return DAT_146879a98;
}



// FUNCTION 1412e0e00 FUN_1412e0e00 body=47 status=ok
// SIG undefined FUN_1412e0e00(void)

longlong FUN_1412e0e00(void)

{
  if (DAT_146879a58 == 0) {
    FUN_141786a30(&DAT_146879a58,&PTR_Z_Construct_UClass_USkeletalMeshComponent_1462ad600);
  }
  return DAT_146879a58;
}



// FUNCTION 1412e0e30 FUN_1412e0e30 body=47 status=ok
// SIG undefined FUN_1412e0e30(void)

longlong FUN_1412e0e30(void)

{
  if (DAT_146879a60 == 0) {
    FUN_141786a30(&DAT_146879a60,&PTR_Z_Construct_UClass_USkeletalMeshComponent_1462ad680);
  }
  return DAT_146879a60;
}



// FUNCTION 1412e0e60 FUN_1412e0e60 body=47 status=ok
// SIG undefined FUN_1412e0e60(void)

longlong FUN_1412e0e60(void)

{
  if (DAT_146879a68 == 0) {
    FUN_141786a30(&DAT_146879a68,&PTR_Z_Construct_UClass_USkeletalMeshComponent_1462ad6c0);
  }
  return DAT_146879a68;
}



// FUNCTION 1412e0e90 FUN_1412e0e90 body=47 status=ok
// SIG undefined FUN_1412e0e90(void)

longlong FUN_1412e0e90(void)

{
  if (DAT_146879a70 == 0) {
    FUN_141786a30(&DAT_146879a70,&PTR_Z_Construct_UClass_USkeletalMeshComponent_1462ad700);
  }
  return DAT_146879a70;
}



// FUNCTION 1412e0ec0 FUN_1412e0ec0 body=47 status=ok
// SIG undefined FUN_1412e0ec0(void)

longlong FUN_1412e0ec0(void)

{
  if (DAT_146879a78 == 0) {
    FUN_141786a30(&DAT_146879a78,&PTR_Z_Construct_UClass_USkeletalMeshComponent_1462ad740);
  }
  return DAT_146879a78;
}



// FUNCTION 1412e0ef0 FUN_1412e0ef0 body=47 status=ok
// SIG undefined FUN_1412e0ef0(void)

longlong FUN_1412e0ef0(void)

{
  if (DAT_146879a80 == 0) {
    FUN_141786a30(&DAT_146879a80,&PTR_Z_Construct_UClass_USkeletalMeshComponent_1462ad890);
  }
  return DAT_146879a80;
}



// FUNCTION 1412e0f20 FUN_1412e0f20 body=47 status=ok
// SIG undefined FUN_1412e0f20(void)

longlong FUN_1412e0f20(void)

{
  if (DAT_146879a88 == 0) {
    FUN_141786a30(&DAT_146879a88,&PTR_Z_Construct_UClass_USkeletalMeshComponent_1462ad8d0);
  }
  return DAT_146879a88;
}



// FUNCTION 1412e0f50 FUN_1412e0f50 body=47 status=ok
// SIG undefined FUN_1412e0f50(void)

longlong FUN_1412e0f50(void)

{
  if (DAT_146879a90 == 0) {
    FUN_141786a30(&DAT_146879a90,&PTR_Z_Construct_UClass_USkeletalMeshComponent_1462ad960);
  }
  return DAT_146879a90;
}



// FUNCTION 1412e0f80 FUN_1412e0f80 body=53 status=ok
// SIG undefined FUN_1412e0f80(void)

void FUN_1412e0f80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_14478d280;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1412e0fc0 FUN_1412e0fc0 body=53 status=ok
// SIG undefined FUN_1412e0fc0(void)

void FUN_1412e0fc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &PTR_FUN_14478bf48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1412e1000 FUN_1412e1000 body=162 status=ok
// SIG undefined FUN_1412e1000(void)

longlong FUN_1412e1000(void)

{
  if (DAT_146879940 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"AIAspect_VehicleDriverLeaves",&DAT_146879940,FUN_140447710,
                  0x108,0x10000000,0,L"Engine",FUN_1412e1650,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_146879940;
}



// FUNCTION 1412e10b0 FUN_1412e10b0 body=53 status=ok
// SIG undefined FUN_1412e10b0(void)

void FUN_1412e10b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_14478c8d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412e1100 FUN_1412e1100 body=53 status=ok
// SIG undefined FUN_1412e1100(void)

void FUN_1412e1100(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_14478bc00;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return;
  }
  return;
}



// FUNCTION 1412e1140 FUN_1412e1140 body=53 status=ok
// SIG undefined FUN_1412e1140(void)

void FUN_1412e1140(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &PTR_FUN_14478c9e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412e11a0 FUN_1412e11a0 body=53 status=ok
// SIG undefined FUN_1412e11a0(void)

void FUN_1412e11a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_14478cb00;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412e11e0 FUN_1412e11e0 body=162 status=ok
// SIG undefined FUN_1412e11e0(void)

longlong FUN_1412e11e0(void)

{
  if (DAT_1468799b0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"AIAspect_VehicleHorn",&DAT_1468799b0,FUN_140447710,0x118,
                  0x10000000,0,L"Engine",&LAB_1412e16d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_1468799b0;
}



// FUNCTION 1412e1290 FUN_1412e1290 body=53 status=ok
// SIG undefined FUN_1412e1290(void)

void FUN_1412e1290(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_14478c060;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412e12e0 FUN_1412e12e0 body=162 status=ok
// SIG undefined FUN_1412e12e0(void)

longlong FUN_1412e12e0(void)

{
  if (DAT_1468799c0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"AIAspect_VehicleHover",&DAT_1468799c0,FUN_140447710,0x108,
                  0x10000000,0,L"Engine",&LAB_1412e16e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_1468799c0;
}



// FUNCTION 1412e13b0 FUN_1412e13b0 body=162 status=ok
// SIG undefined FUN_1412e13b0(void)

longlong FUN_1412e13b0(void)

{
  if (DAT_1468799e0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"AIAspect_VehicleParts",&DAT_1468799e0,FUN_140447710,0x118,
                  0x10000000,0,L"Engine",FUN_1412e16f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_1468799e0;
}



// FUNCTION 1412e1460 FUN_1412e1460 body=53 status=ok
// SIG undefined FUN_1412e1460(void)

void FUN_1412e1460(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_14478c530;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412e14a0 FUN_1412e14a0 body=162 status=ok
// SIG undefined FUN_1412e14a0(void)

longlong FUN_1412e14a0(void)

{
  if (DAT_146879ac0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"AIDialogEventData",&DAT_146879ac0,FUN_140447710,0x120,
                  0x10000000,0,L"Engine",FUN_1412e1780,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146879ac0;
}



// FUNCTION 1412e1560 FUN_1412e1560 body=162 status=ok
// SIG undefined FUN_1412e1560(void)

longlong FUN_1412e1560(void)

{
  if (DAT_146879a10 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"AIAspect_VehicleSpeed",&DAT_146879a10,FUN_140447710,0x7b8,
                  0x10000000,0,L"Engine",&LAB_1412e1750,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,USafeZone::GetPrivateStaticClass,0);
  }
  return DAT_146879a10;
}



// FUNCTION 1412e1610 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FTableRowStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x6b8;
    *puVar1 = &PTR_FUN_14478c648;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1412e1650 FUN_1412e1650 body=84 status=ok
// SIG undefined FUN_1412e1650(void)

void FUN_1412e1650(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR_FUN_14478b860;
    puVar1[5] = &PTR_LAB_144786ae8;
    FUN_1409c2620(puVar1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 1412e16f0 FUN_1412e16f0 body=84 status=ok
// SIG undefined FUN_1412e16f0(void)

void FUN_1412e16f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1406d50d0(puVar1);
    *(undefined2 *)(puVar1 + 0x1f) = 0x101;
    *(undefined2 *)((longlong)puVar1 + 0xfb) = 0x101;
    *puVar1 = &PTR__scalar_deleting_destructor__14478c178;
    puVar1[5] = &PTR_LAB_14478c518;
    ATTLGameSession::GetLdnLastError(puVar1 + 0x20);
    return;
  }
  return;
}



// FUNCTION 1412e1780 FUN_1412e1780 body=101 status=ok
// SIG undefined FUN_1412e1780(void)

void FUN_1412e1780(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_14478cca0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xa4) = 0;
    puVar1[0x16] = 0;
    *(undefined4 *)(puVar1 + 0x17) = 0;
    puVar1[0x1b] = 0;
  }
  return;
}



// FUNCTION 1412e1830 FUN_1412e1830 body=115 status=ok
// SIG undefined FUN_1412e1830(void)

longlong FUN_1412e1830(longlong param_1)

{
  FText::FText(param_1 + 0x10);
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
  *(undefined1 *)(param_1 + 0x78) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  return param_1;
}



// FUNCTION 1412e18b0 FUN_1412e18b0 body=120 status=ok
// SIG undefined FUN_1412e18b0(void)

undefined8 * FUN_1412e18b0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  FUN_142de2d20(param_1 + 2,0,0);
  FUN_142de2d20(param_1 + 0x12,0x461c4000,0);
  FUN_142de2d20(param_1 + 0x22,0xbf800000,0);
  FUN_142de2d20(param_1 + 0x32,0x43fa0000,0);
  *(undefined1 *)(param_1 + 0x42) = 1;
  return param_1;
}



// FUNCTION 1412e1930 ~TSparseArray<TSetElement<TTuple<FGuid,FOpParameters>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FGuid,FOpParameters>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FGuid,FOpParameters>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FGuid,FOpParameters>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412e19a0 FUN_1412e19a0 body=163 status=ok
// SIG undefined FUN_1412e19a0(void)

void FUN_1412e19a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_1409f5750(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  FUN_1409f57b0(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
  ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
  ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(param_1 + 0x28);
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



// FUNCTION 1412e1a50 FUN_1412e1a50 body=623 status=ok
// SIG undefined FUN_1412e1a50(void)

undefined1 * FUN_1412e1a50(undefined1 *param_1,undefined1 *param_2)

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
  param_1[0x81] = param_2[0x81];
  param_1[0x82] = param_2[0x82];
  param_1[0x83] = param_2[0x83];
  *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x84);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = uVar1;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  uVar1 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  param_1[0x100] = param_2[0x100];
  param_1[0x101] = param_2[0x101];
  param_1[0x102] = param_2[0x102];
  param_1[0x103] = param_2[0x103];
  *(undefined8 *)(param_1 + 0x104) = *(undefined8 *)(param_2 + 0x104);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  uVar1 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  uVar1 = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x160) = uVar1;
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_2 + 0x174);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x184);
  param_1[0x188] = param_2[0x188];
  uVar1 = *(undefined8 *)(param_2 + 0x194);
  *(undefined8 *)(param_1 + 0x18c) = *(undefined8 *)(param_2 + 0x18c);
  *(undefined8 *)(param_1 + 0x194) = uVar1;
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_2 + 0x19c);
  return param_1;
}



// FUNCTION 1412e1cc0 FUN_1412e1cc0 body=1965 status=ok
// SIG undefined FUN_1412e1cc0(void)

undefined1 * FUN_1412e1cc0(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = uVar4;
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
  uVar4 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar4;
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  uVar4 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = uVar4;
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
  uVar4 = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x148) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x158) = uVar4;
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  uVar4 = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x170) = uVar4;
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x184);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  param_1[400] = param_2[400];
  param_1[0x191] = param_2[0x191];
  param_1[0x192] = param_2[0x192];
  param_1[0x193] = param_2[0x193];
  *(undefined8 *)(param_1 + 0x194) = *(undefined8 *)(param_2 + 0x194);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  uVar4 = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b8) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c8) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d8) = uVar4;
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e0);
  uVar4 = *(undefined8 *)(param_2 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_2 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1f0) = uVar4;
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  param_1[0x210] = param_2[0x210];
  param_1[0x211] = param_2[0x211];
  param_1[0x212] = param_2[0x212];
  param_1[0x213] = param_2[0x213];
  *(undefined8 *)(param_1 + 0x214) = *(undefined8 *)(param_2 + 0x214);
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_2 + 0x228);
  uVar4 = *(undefined8 *)(param_2 + 0x238);
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x230);
  *(undefined8 *)(param_1 + 0x238) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x248);
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x240);
  *(undefined8 *)(param_1 + 0x248) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 600);
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_2 + 0x250);
  *(undefined8 *)(param_1 + 600) = uVar4;
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_2 + 0x260);
  uVar4 = *(undefined8 *)(param_2 + 0x270);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  *(undefined8 *)(param_1 + 0x270) = uVar4;
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x278);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x280);
  *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_2 + 0x284);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
  param_1[0x290] = param_2[0x290];
  param_1[0x291] = param_2[0x291];
  param_1[0x292] = param_2[0x292];
  param_1[0x293] = param_2[0x293];
  *(undefined8 *)(param_1 + 0x294) = *(undefined8 *)(param_2 + 0x294);
  *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_2 + 0x2a0);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_2 + 0x2a8);
  uVar4 = *(undefined8 *)(param_2 + 0x2b8);
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_2 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2b8) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_2 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2c8) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x2d8);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_2 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2d8) = uVar4;
  *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_2 + 0x2e0);
  uVar4 = *(undefined8 *)(param_2 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_2 + 0x2e8);
  *(undefined8 *)(param_1 + 0x2f0) = uVar4;
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x2f8);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x300);
  *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_2 + 0x304);
  *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_2 + 0x308);
  param_1[0x310] = param_2[0x310];
  param_1[0x311] = param_2[0x311];
  param_1[0x312] = param_2[0x312];
  param_1[0x313] = param_2[0x313];
  *(undefined8 *)(param_1 + 0x314) = *(undefined8 *)(param_2 + 0x314);
  *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_2 + 800);
  *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_2 + 0x328);
  uVar4 = *(undefined8 *)(param_2 + 0x338);
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_2 + 0x330);
  *(undefined8 *)(param_1 + 0x338) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x348);
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_2 + 0x340);
  *(undefined8 *)(param_1 + 0x348) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x358);
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_2 + 0x350);
  *(undefined8 *)(param_1 + 0x358) = uVar4;
  *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_2 + 0x360);
  uVar4 = *(undefined8 *)(param_2 + 0x370);
  *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_2 + 0x368);
  *(undefined8 *)(param_1 + 0x370) = uVar4;
  *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_2 + 0x378);
  *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(param_2 + 0x380);
  *(undefined4 *)(param_1 + 900) = *(undefined4 *)(param_2 + 900);
  *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_2 + 0x388);
  param_1[0x390] = param_2[0x390];
  param_1[0x391] = param_2[0x391];
  param_1[0x392] = param_2[0x392];
  param_1[0x393] = param_2[0x393];
  *(undefined8 *)(param_1 + 0x394) = *(undefined8 *)(param_2 + 0x394);
  *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(param_2 + 0x3a0);
  *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_2 + 0x3a8);
  uVar4 = *(undefined8 *)(param_2 + 0x3b8);
  *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_2 + 0x3b0);
  *(undefined8 *)(param_1 + 0x3b8) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x3c8);
  *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(param_2 + 0x3c0);
  *(undefined8 *)(param_1 + 0x3c8) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x3d8);
  *(undefined8 *)(param_1 + 0x3d0) = *(undefined8 *)(param_2 + 0x3d0);
  *(undefined8 *)(param_1 + 0x3d8) = uVar4;
  *(undefined8 *)(param_1 + 0x3e0) = *(undefined8 *)(param_2 + 0x3e0);
  uVar1 = *(undefined4 *)(param_2 + 0x3ec);
  uVar2 = *(undefined4 *)(param_2 + 0x3f0);
  uVar3 = *(undefined4 *)(param_2 + 0x3f4);
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_2 + 1000);
  *(undefined4 *)(param_1 + 0x3ec) = uVar1;
  *(undefined4 *)(param_1 + 0x3f0) = uVar2;
  *(undefined4 *)(param_1 + 0x3f4) = uVar3;
  *(undefined8 *)(param_1 + 0x3f8) = *(undefined8 *)(param_2 + 0x3f8);
  *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_2 + 0x400);
  *(undefined4 *)(param_1 + 0x404) = *(undefined4 *)(param_2 + 0x404);
  *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(param_2 + 0x408);
  FUN_1412e2860(param_1 + 0x410,param_2 + 0x410);
  param_1[0x628] = param_2[0x628];
  param_1[0x630] = param_2[0x630];
  param_1[0x631] = param_2[0x631];
  param_1[0x632] = param_2[0x632];
  param_1[0x633] = param_2[0x633];
  *(undefined8 *)(param_1 + 0x634) = *(undefined8 *)(param_2 + 0x634);
  *(undefined8 *)(param_1 + 0x640) = *(undefined8 *)(param_2 + 0x640);
  *(undefined8 *)(param_1 + 0x648) = *(undefined8 *)(param_2 + 0x648);
  uVar4 = *(undefined8 *)(param_2 + 0x658);
  *(undefined8 *)(param_1 + 0x650) = *(undefined8 *)(param_2 + 0x650);
  *(undefined8 *)(param_1 + 0x658) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x668);
  *(undefined8 *)(param_1 + 0x660) = *(undefined8 *)(param_2 + 0x660);
  *(undefined8 *)(param_1 + 0x668) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x678);
  *(undefined8 *)(param_1 + 0x670) = *(undefined8 *)(param_2 + 0x670);
  *(undefined8 *)(param_1 + 0x678) = uVar4;
  *(undefined8 *)(param_1 + 0x680) = *(undefined8 *)(param_2 + 0x680);
  uVar4 = *(undefined8 *)(param_2 + 0x690);
  *(undefined8 *)(param_1 + 0x688) = *(undefined8 *)(param_2 + 0x688);
  *(undefined8 *)(param_1 + 0x690) = uVar4;
  *(undefined8 *)(param_1 + 0x698) = *(undefined8 *)(param_2 + 0x698);
  *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(param_2 + 0x6a0);
  *(undefined4 *)(param_1 + 0x6a4) = *(undefined4 *)(param_2 + 0x6a4);
  *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(param_2 + 0x6a8);
  param_1[0x6b0] = param_2[0x6b0];
  return param_1;
}



// FUNCTION 1412e2470 FUN_1412e2470 body=797 status=ok
// SIG undefined FUN_1412e2470(void)

byte * FUN_1412e2470(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  byte bVar15;
  
  *param_1 = *param_1 ^ (*param_2 ^ *param_1) & 1;
  bVar15 = (*param_1 ^ *param_2) & 2 ^ *param_1;
  *param_1 = bVar15;
  bVar15 = (bVar15 ^ *param_2) & 4 ^ bVar15;
  *param_1 = bVar15;
  bVar15 = (bVar15 ^ *param_2) & 8 ^ bVar15;
  *param_1 = bVar15;
  *param_1 = (bVar15 ^ *param_2) & 0x10 ^ bVar15;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FText::operator=(param_1 + 0x10,param_2 + 0x10);
  FUN_1412e2790(param_1 + 0x28,param_2 + 0x28);
  FUN_1412e2790(param_1 + 0x48,param_2 + 0x48);
  pbVar1 = param_1 + 0x68;
  if (pbVar1 != param_2 + 0x68) {
    lVar9 = *(longlong *)pbVar1;
    for (iVar12 = *(int *)(param_1 + 0x70); iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*(longlong *)(lVar9 + 0x10) != 0) {
        FMemory::Free();
      }
      TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
      ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(lVar9);
      lVar9 = lVar9 + 0x20;
    }
    iVar12 = *(int *)(param_2 + 0x70);
    lVar9 = *(longlong *)(param_2 + 0x68);
    *(int *)(param_1 + 0x70) = iVar12;
    if ((iVar12 == 0) && (*(int *)(param_1 + 0x74) == 0)) {
      param_1[0x74] = 0;
      param_1[0x75] = 0;
      param_1[0x76] = 0;
      param_1[0x77] = 0;
    }
    else {
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(pbVar1,iVar12);
      puVar11 = *(undefined8 **)pbVar1;
      if (iVar12 != 0) {
        puVar13 = (undefined4 *)(lVar9 + 8);
        do {
          *puVar11 = 0;
          FUN_1409f0400(puVar11,*(undefined8 *)(puVar13 + -2),*puVar13,0,0);
          puVar11[2] = 0;
          iVar3 = puVar13[4];
          pvVar4 = *(void **)(puVar13 + 2);
          *(int *)(puVar11 + 3) = iVar3;
          if (iVar3 == 0) {
            *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (puVar11 + 2,iVar3,0);
            _guard_xfg_dispatch_icall_nop((void *)puVar11[2],pvVar4,(longlong)iVar3 << 3);
          }
          puVar11 = puVar11 + 4;
          puVar13 = puVar13 + 8;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
    }
  }
  pbVar1 = param_1 + 0x80;
  param_1[0x78] = param_2[0x78];
  if (pbVar1 != param_2 + 0x80) {
    iVar12 = *(int *)(param_2 + 0x88);
    pvVar4 = *(void **)(param_2 + 0x80);
    *(int *)(param_1 + 0x88) = iVar12;
    if ((iVar12 == 0) && (*(int *)(param_1 + 0x8c) == 0)) {
      param_1[0x8c] = 0;
      param_1[0x8d] = 0;
      param_1[0x8e] = 0;
      param_1[0x8f] = 0;
    }
    else {
      TArray<FPropChildSocketData,FDefaultAllocator>::ResizeForCopy(pbVar1,iVar12);
      _guard_xfg_dispatch_icall_nop(*(void **)pbVar1,pvVar4,(longlong)iVar12 << 6);
    }
  }
  uVar5 = *(undefined4 *)(param_2 + 0x94);
  uVar6 = *(undefined4 *)(param_2 + 0x98);
  uVar7 = *(undefined4 *)(param_2 + 0x9c);
  pbVar1 = param_1 + 0xa0;
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = uVar5;
  *(undefined4 *)(param_1 + 0x98) = uVar6;
  *(undefined4 *)(param_1 + 0x9c) = uVar7;
  if (pbVar1 != param_2 + 0xa0) {
    iVar12 = *(int *)(param_1 + 0xa8);
    if (iVar12 != 0) {
      plVar10 = (longlong *)(*(longlong *)pbVar1 + 0x10);
      do {
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 0xf;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    iVar12 = *(int *)(param_2 + 0xa8);
    lVar9 = *(longlong *)(param_2 + 0xa0);
    *(int *)(param_1 + 0xa8) = iVar12;
    if ((iVar12 == 0) && (*(int *)(param_1 + 0xac) == 0)) {
      param_1[0xac] = 0;
      param_1[0xad] = 0;
      param_1[0xae] = 0;
      param_1[0xaf] = 0;
    }
    else {
      FUN_1409b8040(pbVar1,iVar12);
      puVar11 = *(undefined8 **)pbVar1;
      if (iVar12 != 0) {
        puVar14 = (undefined8 *)(lVar9 + 8);
        do {
          *puVar11 = puVar14[-1];
          puVar11[1] = *puVar14;
          puVar11[2] = 0;
          iVar3 = *(int *)(puVar14 + 2);
          pvVar4 = (void *)puVar14[1];
          *(int *)(puVar11 + 3) = iVar3;
          if (iVar3 == 0) {
            *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
          }
          else {
            TArray<int,FDefaultAllocator>::ResizeForCopy(puVar11 + 2,iVar3,0);
            _guard_xfg_dispatch_icall_nop((void *)puVar11[2],pvVar4,(longlong)iVar3 << 2);
          }
          *(byte *)(puVar11 + 4) =
               *(byte *)(puVar11 + 4) ^ (*(byte *)(puVar11 + 4) ^ *(byte *)(puVar14 + 3)) & 1;
          *(byte *)(puVar11 + 4) =
               *(byte *)(puVar11 + 4) ^ (*(byte *)(puVar11 + 4) ^ *(byte *)(puVar14 + 3)) & 2;
          uVar8 = puVar14[5];
          puVar11[5] = puVar14[4];
          puVar11[6] = uVar8;
          uVar8 = puVar14[7];
          puVar11[7] = puVar14[6];
          puVar11[8] = uVar8;
          uVar8 = puVar14[9];
          puVar11[9] = puVar14[8];
          puVar11[10] = uVar8;
          puVar11[0xb] = puVar14[10];
          uVar5 = *(undefined4 *)((longlong)puVar14 + 0x5c);
          uVar6 = *(undefined4 *)(puVar14 + 0xc);
          uVar7 = *(undefined4 *)((longlong)puVar14 + 100);
          *(undefined4 *)(puVar11 + 0xc) = *(undefined4 *)(puVar14 + 0xb);
          *(undefined4 *)((longlong)puVar11 + 100) = uVar5;
          *(undefined4 *)(puVar11 + 0xd) = uVar6;
          *(undefined4 *)((longlong)puVar11 + 0x6c) = uVar7;
          puVar2 = puVar14 + 0xd;
          puVar14 = puVar14 + 0xf;
          puVar11[0xe] = *puVar2;
          puVar11 = puVar11 + 0xf;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
    }
  }
  return param_1;
}



// FUNCTION 1412e2790 FUN_1412e2790 body=203 status=ok
// SIG undefined FUN_1412e2790(void)

longlong * FUN_1412e2790(longlong *param_1,longlong *param_2)

{
  void *_Src;
  longlong *plVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = (int)param_1[1];
    if (iVar2 != 0) {
      plVar1 = (longlong *)(*param_1 + 0x78);
      do {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        plVar1 = plVar1 + 0x11;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_1409f0400(param_1,*param_2,(int)param_2[1],*(undefined4 *)((longlong)param_1 + 0xc),0);
  }
  plVar1 = param_1 + 2;
  if (plVar1 != param_2 + 2) {
    iVar2 = (int)param_2[3];
    _Src = (void *)param_2[2];
    *(int *)(param_1 + 3) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x1c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*plVar1,_Src,(longlong)iVar2 << 3);
    }
  }
  return param_1;
}



// FUNCTION 1412e2860 FUN_1412e2860 body=817 status=ok
// SIG undefined FUN_1412e2860(void)

undefined8 * FUN_1412e2860(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



// FUNCTION 1412e2ba0 `scalar_deleting_destructor' body=67 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDialogueSoundWaveProxy::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x100);
  FUN_1406d8c70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 1412e2bf0 FUN_1412e2bf0 body=102 status=ok
// SIG undefined FUN_1412e2bf0(void)

longlong FUN_1412e2bf0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FGuid,FOpParameters>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FGuid,FOpParameters>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x70);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 1412e2cf0 FUN_1412e2cf0 body=38 status=ok
// SIG undefined FUN_1412e2cf0(void)

void FUN_1412e2cf0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0xb0);
  FUN_1412e1830(param_2);
  return;
}



// FUNCTION 1412e2e40 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FMaterialCachedParameters>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1412e1a50(param_2 + param_3,param_3);
      param_3 = param_3 + 0x1a0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412e2e90 Copy body=167 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FPhoWidgetPath>::Copy
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar2 = *(int *)(param_3 + 1);
      _Src = (void *)*param_3;
      *(int *)(param_2 + 1) = iVar2;
      if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar2);
        ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar2 << 3);
      }
    }
    puVar1 = param_3 + 2;
    param_3 = param_3 + 3;
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)puVar1;
    param_2 = param_2 + 3;
  }
  return 1;
}



// FUNCTION 1412e2f40 FUN_1412e2f40 body=481 status=ok
// SIG undefined FUN_1412e2f40(void)

undefined8 FUN_1412e2f40(undefined8 param_1,longlong *param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined1 local_50 [24];
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar4 = (int)param_2[1];
      if (iVar4 != 0) {
        plVar2 = (longlong *)(*param_2 + 0x18);
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 5;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar4 = (int)param_3[1];
      lVar1 = *param_3;
      *(int *)(param_2 + 1) = iVar4;
      if ((iVar4 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(param_2,iVar4);
        puVar3 = (undefined4 *)*param_2;
        if (iVar4 != 0) {
          puVar5 = (undefined8 *)(puVar3 + 8);
          puVar6 = (undefined4 *)(lVar1 + 4);
          do {
            puVar5[-1] = 0;
            *puVar5 = 0;
            *puVar3 = 0xffffffff;
            *(undefined4 *)((longlong)puVar5 + -0x1c) = 0;
            puVar5[-2] = 0;
            *(undefined4 *)puVar5 = 0;
            if (0x7fffffff < *(uint *)((longlong)puVar5 + 4)) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar5 + -1,0);
            }
            if ((undefined2 *)puVar5[-1] != (undefined2 *)0x0) {
              *(undefined2 *)puVar5[-1] = 0;
            }
            *(undefined4 *)(puVar5 + -3) = 0;
            *puVar3 = puVar6[-1];
            *(undefined4 *)((longlong)puVar5 + -0x1c) = *puVar6;
            *(undefined4 *)(puVar5 + -3) = puVar6[1];
            FString::FString(local_50,puVar6 + 5);
            FSoftObjectPath::operator=(puVar5 + -2);
            puVar3 = puVar3 + 10;
            puVar5 = puVar5 + 5;
            puVar6 = puVar6 + 10;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
    }
    plVar2 = param_3 + 2;
    param_3 = param_3 + 3;
    *(char *)(param_2 + 2) = (char)*plVar2;
    param_2 = param_2 + 3;
  }
  return 1;
}



// FUNCTION 1412e3130 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FTableRowStyle>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1412e1cc0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x6b8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412e3290 FUN_1412e3290 body=74 status=ok
// SIG undefined FUN_1412e3290(void)

undefined1 FUN_1412e3290(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1412e2470(param_2 + param_3,param_3);
      param_3 = param_3 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412e32e0 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FShooterMenuStyle>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1412e2860(param_2 + param_3,param_3);
      param_3 = param_3 + 0x218;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412e3350 FUN_1412e3350 body=55 status=ok
// SIG undefined FUN_1412e3350(void)

void FUN_1412e3350(void)

{
  undefined8 uVar1;
  
  if (DAT_146879790 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879790 = GetStaticEnum(FUN_1412e3db0,uVar1,L"EAnointedDeathState");
  }
  return;
}



// FUNCTION 1412e3390 FUN_1412e3390 body=55 status=ok
// SIG undefined FUN_1412e3390(void)

void FUN_1412e3390(void)

{
  undefined8 uVar1;
  
  if (DAT_146879788 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879788 = GetStaticEnum(FUN_1412e3de0,uVar1,L"EHeldActorPreset");
  }
  return;
}



// FUNCTION 1412e33d0 FUN_1412e33d0 body=6 status=ok
// SIG undefined FUN_1412e33d0(void)

undefined8 FUN_1412e33d0(void)

{
  return 0x4696c1bf;
}



// FUNCTION 1412e33e0 FUN_1412e33e0 body=6 status=ok
// SIG undefined FUN_1412e33e0(void)

undefined8 FUN_1412e33e0(void)

{
  return 0xddec1ae4;
}



// FUNCTION 1412e33f0 FUN_1412e33f0 body=6 status=ok
// SIG undefined FUN_1412e33f0(void)

undefined8 FUN_1412e33f0(void)

{
  return 0x59d21890;
}



// FUNCTION 1412e3400 FUN_1412e3400 body=6 status=ok
// SIG undefined FUN_1412e3400(void)

undefined8 FUN_1412e3400(void)

{
  return 0xb68aeae;
}



// FUNCTION 1412e3410 FUN_1412e3410 body=6 status=ok
// SIG undefined FUN_1412e3410(void)

undefined8 FUN_1412e3410(void)

{
  return 0xb2b9c9a2;
}



// FUNCTION 1412e3420 FUN_1412e3420 body=6 status=ok
// SIG undefined FUN_1412e3420(void)

undefined8 FUN_1412e3420(void)

{
  return 0x7735675f;
}



// FUNCTION 1412e3430 FUN_1412e3430 body=6 status=ok
// SIG undefined FUN_1412e3430(void)

undefined8 FUN_1412e3430(void)

{
  return 0x43bd24a0;
}



// FUNCTION 1412e3440 FUN_1412e3440 body=6 status=ok
// SIG undefined FUN_1412e3440(void)

undefined8 FUN_1412e3440(void)

{
  return 0x166ba814;
}



// FUNCTION 1412e3450 FUN_1412e3450 body=6 status=ok
// SIG undefined FUN_1412e3450(void)

undefined8 FUN_1412e3450(void)

{
  return 0x7082fe;
}



// FUNCTION 1412e3460 FUN_1412e3460 body=6 status=ok
// SIG undefined FUN_1412e3460(void)

undefined8 FUN_1412e3460(void)

{
  return 0xbfa87368;
}



// FUNCTION 1412e3470 FUN_1412e3470 body=6 status=ok
// SIG undefined FUN_1412e3470(void)

undefined8 FUN_1412e3470(void)

{
  return 0x7e8dcb09;
}



// FUNCTION 1412e3480 FUN_1412e3480 body=6 status=ok
// SIG undefined FUN_1412e3480(void)

undefined8 FUN_1412e3480(void)

{
  return 0x4892f1e1;
}



// FUNCTION 1412e3490 FUN_1412e3490 body=6 status=ok
// SIG undefined FUN_1412e3490(void)

undefined8 FUN_1412e3490(void)

{
  return 0xed82ea06;
}



// FUNCTION 1412e34a0 FUN_1412e34a0 body=6 status=ok
// SIG undefined FUN_1412e34a0(void)

undefined8 FUN_1412e34a0(void)

{
  return 0x23629063;
}



// FUNCTION 1412e34b0 FUN_1412e34b0 body=6 status=ok
// SIG undefined FUN_1412e34b0(void)

undefined8 FUN_1412e34b0(void)

{
  return 0xa3c321b4;
}



// FUNCTION 1412e3540 FUN_1412e3540 body=61 status=ok
// SIG undefined FUN_1412e3540(void)

void FUN_1412e3540(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146879918);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1412e35a0 FUN_1412e35a0 body=34 status=ok
// SIG undefined FUN_1412e35a0(void)

void FUN_1412e35a0(void)

{
  undefined8 uVar1;
  
  uVar1 = ALevelScriptActor::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_ApplyNameForCurrentPlayThrough_14478cc20,8);
  return;
}



// FUNCTION 1412e35d0 FUN_1412e35d0 body=34 status=ok
// SIG undefined FUN_1412e35d0(void)

void FUN_1412e35d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412e05a0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_DetonateHeldActor_14478cf90,0xc);
  return;
}



// FUNCTION 1412e3600 StaticRegisterNativesUGameplayTagAssetInterface body=34 status=ok
// SIG undefined StaticRegisterNativesUGameplayTagAssetInterface(void)

void UGameplayTagAssetInterface::StaticRegisterNativesUGameplayTagAssetInterface(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AIHeldActor_GetElementalType_14478cf50,4)
  ;
  return;
}



// FUNCTION 1412e3630 FUN_1412e3630 body=82 status=ok
// SIG undefined FUN_1412e3630(void)

void FUN_1412e3630(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146879928 == 0) {
    uVar1 = FUN_1412e33d0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879928 =
         GetStaticStruct(FUN_1412e3e10,uVar2,L"AIAspectSettings_VehicleDriverLeaves",1,uVar1);
  }
  return;
}



// FUNCTION 1412e3690 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneCameraCutSectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146879948 == 0) {
    uVar1 = FUN_1412e33e0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879948 =
         GetStaticStruct(FUN_1412e3e40,uVar2,L"AIAspectSettings_VehicleDriving",0x80,uVar1);
  }
  return;
}



// FUNCTION 1412e36f0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMWNonPlayerAgent::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146879968 == 0) {
    uVar1 = FUN_1412e33f0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879968 =
         GetStaticStruct(FUN_1412e3e70,uVar2,L"AIAspectSettings_VehicleEscortSpeed",0x1a0,uVar1);
  }
  return;
}



// FUNCTION 1412e3750 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146879998 == 0) {
    uVar1 = FUN_1412e3400();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879998 = GetStaticStruct(FUN_1412e3ea0,uVar2,L"AIAspectSettings_VehicleHorn",0x18,uVar1);
  }
  return;
}



// FUNCTION 1412e37b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468799c8 == 0) {
    uVar1 = FUN_1412e3410();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468799c8 = GetStaticStruct(FUN_1412e3ed0,uVar2,L"AIAspectSettings_VehicleParts",0x18,uVar1)
    ;
  }
  return;
}



// FUNCTION 1412e3810 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FDungeonMasterTransition::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468799e8 == 0) {
    uVar1 = FUN_1412e3420();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468799e8 =
         GetStaticStruct(FUN_1412e3f00,uVar2,L"AIAspectSettings_VehicleSpeed",0x6b8,uVar1);
  }
  return;
}



// FUNCTION 1412e3870 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146879a48 == 0) {
    uVar1 = FUN_1412e3430();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879a48 = GetStaticStruct(FUN_1412e3f30,uVar2,L"AILootDropOverride",0x18,uVar1);
  }
  return;
}



// FUNCTION 1412e38d0 FUN_1412e38d0 body=82 status=ok
// SIG undefined FUN_1412e38d0(void)

void FUN_1412e38d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146879b78 == 0) {
    uVar1 = FUN_1412e3440();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879b78 = GetStaticStruct(FUN_1412e3f60,uVar2,L"AIOCameraEntryTransition",0x30,uVar1);
  }
  return;
}



// FUNCTION 1412e3930 FUN_1412e3930 body=82 status=ok
// SIG undefined FUN_1412e3930(void)

void FUN_1412e3930(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146879b88 == 0) {
    uVar1 = FUN_1412e3450();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879b88 = GetStaticStruct(FUN_1412e3f90,uVar2,L"AIOCameraStateInfo",0x98,uVar1);
  }
  return;
}



// FUNCTION 1412e3990 FUN_1412e3990 body=82 status=ok
// SIG undefined FUN_1412e3990(void)

void FUN_1412e3990(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146879b98 == 0) {
    uVar1 = FUN_1412e3460();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879b98 =
         GetStaticStruct(FUN_1412e3fc0,uVar2,L"AIOCameraStatePostProcessOverrides",0x20,uVar1);
  }
  return;
}



// FUNCTION 1412e39f0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146879a38 == 0) {
    uVar1 = FUN_1412e3470();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879a38 = GetStaticStruct(FUN_1412e3ff0,uVar2,L"AIPlayThroughData",0xb0,uVar1);
  }
  return;
}



// FUNCTION 1412e3a50 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146879a28 == 0) {
    uVar1 = FUN_1412e3480();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879a28 = GetStaticStruct(FUN_1412e4020,uVar2,L"AnointedEnemyData",0x10,uVar1);
  }
  return;
}



// FUNCTION 1412e3ab0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146879aa8 == 0) {
    uVar1 = FUN_1412e3490();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879aa8 = GetStaticStruct(FUN_1412e4050,uVar2,L"DodgeVOInfo",0x10,uVar1);
  }
  return;
}



// FUNCTION 1412e3b10 FUN_1412e3b10 body=82 status=ok
// SIG undefined FUN_1412e3b10(void)

void FUN_1412e3b10(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146879978 == 0) {
    uVar1 = FUN_1412e34a0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146879978 = GetStaticStruct(FUN_1412e4080,uVar2,L"EscortPathValidation",0x14,uVar1);
  }
  return;
}



// FUNCTION 1412e3b70 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBuildableObjectData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468799f8 == 0) {
    uVar1 = FUN_1412e34b0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468799f8 = GetStaticStruct(FUN_1412e40b0,uVar2,L"RubberbandSpeed",0x218,uVar1);
  }
  return;
}



// FUNCTION 1412e3bd0 FUN_1412e3bd0 body=47 status=ok
// SIG undefined FUN_1412e3bd0(void)

longlong FUN_1412e3bd0(void)

{
  if (DAT_146879938 == 0) {
    FUN_141786440(&DAT_146879938,&PTR_FUN_144789d70);
  }
  return DAT_146879938;
}



// FUNCTION 1412e3c00 FUN_1412e3c00 body=47 status=ok
// SIG undefined FUN_1412e3c00(void)

longlong FUN_1412e3c00(void)

{
  if (DAT_146879958 == 0) {
    FUN_141786440(&DAT_146879958,&PTR_FUN_144788a30);
  }
  return DAT_146879958;
}



// FUNCTION 1412e3c30 FUN_1412e3c30 body=47 status=ok
// SIG undefined FUN_1412e3c30(void)

longlong FUN_1412e3c30(void)

{
  if (DAT_146879988 == 0) {
    FUN_141786440(&DAT_146879988,&PTR_GetPrivateStaticClass_1447896e0);
  }
  return DAT_146879988;
}



// FUNCTION 1412e3c60 FUN_1412e3c60 body=47 status=ok
// SIG undefined FUN_1412e3c60(void)

longlong FUN_1412e3c60(void)

{
  if (DAT_1468799a8 == 0) {
    FUN_141786440(&DAT_1468799a8,&PTR_FUN_14478a5a0);
  }
  return DAT_1468799a8;
}



// FUNCTION 1412e3c90 FUN_1412e3c90 body=47 status=ok
// SIG undefined FUN_1412e3c90(void)

longlong FUN_1412e3c90(void)

{
  if (DAT_1468799b8 == 0) {
    FUN_141786440(&DAT_1468799b8,&PTR_FUN_14478aa10);
  }
  return DAT_1468799b8;
}



// FUNCTION 1412e3cc0 FUN_1412e3cc0 body=47 status=ok
// SIG undefined FUN_1412e3cc0(void)

longlong FUN_1412e3cc0(void)

{
  if (DAT_1468799d8 == 0) {
    FUN_141786440(&DAT_1468799d8,&PTR_FUN_14478b100);
  }
  return DAT_1468799d8;
}



// FUNCTION 1412e3cf0 FUN_1412e3cf0 body=47 status=ok
// SIG undefined FUN_1412e3cf0(void)

longlong FUN_1412e3cf0(void)

{
  if (DAT_146879a08 == 0) {
    FUN_141786440(&DAT_146879a08,&PTR_FUN_144787230);
  }
  return DAT_146879a08;
}



// FUNCTION 1412e3d20 FUN_1412e3d20 body=47 status=ok
// SIG undefined FUN_1412e3d20(void)

longlong FUN_1412e3d20(void)

{
  if (DAT_146879ab8 == 0) {
    FUN_141786440(&DAT_146879ab8,&PTR_FUN_144787650);
  }
  return DAT_146879ab8;
}



// FUNCTION 1412e3d50 FUN_1412e3d50 body=47 status=ok
// SIG undefined FUN_1412e3d50(void)

longlong FUN_1412e3d50(void)

{
  if (DAT_146879ba8 == 0) {
    FUN_141786440(&DAT_146879ba8,&PTR_GetPrivateStaticClass_144789930);
  }
  return DAT_146879ba8;
}



// FUNCTION 1412e3d80 FUN_1412e3d80 body=47 status=ok
// SIG undefined FUN_1412e3d80(void)

longlong FUN_1412e3d80(void)

{
  if (DAT_146879a18 == 0) {
    FUN_141786a30(&DAT_146879a18,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462ace10);
  }
  return DAT_146879a18;
}



// FUNCTION 1412e3db0 FUN_1412e3db0 body=47 status=ok
// SIG undefined FUN_1412e3db0(void)

longlong FUN_1412e3db0(void)

{
  if (DAT_146879a20 == 0) {
    FUN_1417866a0(&DAT_146879a20,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b0730);
  }
  return DAT_146879a20;
}



// FUNCTION 1412e3de0 FUN_1412e3de0 body=47 status=ok
// SIG undefined FUN_1412e3de0(void)

longlong FUN_1412e3de0(void)

{
  if (DAT_146879ac8 == 0) {
    FUN_1417866a0(&DAT_146879ac8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b0780);
  }
  return DAT_146879ac8;
}



// FUNCTION 1412e3e10 FUN_1412e3e10 body=47 status=ok
// SIG undefined FUN_1412e3e10(void)

longlong FUN_1412e3e10(void)

{
  if (DAT_146879930 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146879930,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462abba0);
  }
  return DAT_146879930;
}



// FUNCTION 1412e3e40 FUN_1412e3e40 body=47 status=ok
// SIG undefined FUN_1412e3e40(void)

longlong FUN_1412e3e40(void)

{
  if (DAT_146879950 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146879950,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462abd30);
  }
  return DAT_146879950;
}



// FUNCTION 1412e3e70 FUN_1412e3e70 body=47 status=ok
// SIG undefined FUN_1412e3e70(void)

longlong FUN_1412e3e70(void)

{
  if (DAT_146879970 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146879970,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462abfb0);
  }
  return DAT_146879970;
}



// FUNCTION 1412e3ea0 FUN_1412e3ea0 body=47 status=ok
// SIG undefined FUN_1412e3ea0(void)

longlong FUN_1412e3ea0(void)

{
  if (DAT_1468799a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468799a0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462ac480);
  }
  return DAT_1468799a0;
}



// FUNCTION 1412e3ed0 FUN_1412e3ed0 body=47 status=ok
// SIG undefined FUN_1412e3ed0(void)

longlong FUN_1412e3ed0(void)

{
  if (DAT_1468799d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468799d0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462ac670);
  }
  return DAT_1468799d0;
}



// FUNCTION 1412e3f00 FUN_1412e3f00 body=47 status=ok
// SIG undefined FUN_1412e3f00(void)

longlong FUN_1412e3f00(void)

{
  if (DAT_1468799f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468799f0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462acaf0);
  }
  return DAT_1468799f0;
}



// FUNCTION 1412e3f30 FUN_1412e3f30 body=47 status=ok
// SIG undefined FUN_1412e3f30(void)

longlong FUN_1412e3f30(void)

{
  if (DAT_146879a50 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146879a50,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462ad5b0);
  }
  return DAT_146879a50;
}



// FUNCTION 1412e3f60 FUN_1412e3f60 body=47 status=ok
// SIG undefined FUN_1412e3f60(void)

longlong FUN_1412e3f60(void)

{
  if (DAT_146879b80 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146879b80,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462afbd0);
  }
  return DAT_146879b80;
}



// FUNCTION 1412e3f90 FUN_1412e3f90 body=47 status=ok
// SIG undefined FUN_1412e3f90(void)

longlong FUN_1412e3f90(void)

{
  if (DAT_146879b90 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146879b90,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462aff20);
  }
  return DAT_146879b90;
}



// FUNCTION 1412e3fc0 FUN_1412e3fc0 body=47 status=ok
// SIG undefined FUN_1412e3fc0(void)

longlong FUN_1412e3fc0(void)

{
  if (DAT_146879ba0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146879ba0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462b0320);
  }
  return DAT_146879ba0;
}



// FUNCTION 1412e3ff0 FUN_1412e3ff0 body=47 status=ok
// SIG undefined FUN_1412e3ff0(void)

longlong FUN_1412e3ff0(void)

{
  if (DAT_146879a40 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146879a40,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462ad3f0);
  }
  return DAT_146879a40;
}



// FUNCTION 1412e4020 FUN_1412e4020 body=47 status=ok
// SIG undefined FUN_1412e4020(void)

longlong FUN_1412e4020(void)

{
  if (DAT_146879a30 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146879a30,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462acf20);
  }
  return DAT_146879a30;
}



// FUNCTION 1412e4050 FUN_1412e4050 body=47 status=ok
// SIG undefined FUN_1412e4050(void)

longlong FUN_1412e4050(void)

{
  if (DAT_146879ab0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146879ab0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462ae160);
  }
  return DAT_146879ab0;
}



// FUNCTION 1412e4080 FUN_1412e4080 body=47 status=ok
// SIG undefined FUN_1412e4080(void)

longlong FUN_1412e4080(void)

{
  if (DAT_146879980 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146879980,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462ac130);
  }
  return DAT_146879980;
}



// FUNCTION 1412e40b0 FUN_1412e40b0 body=47 status=ok
// SIG undefined FUN_1412e40b0(void)

longlong FUN_1412e40b0(void)

{
  if (DAT_146879a00 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146879a00,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462accd0);
  }
  return DAT_146879a00;
}



// FUNCTION 1412e40e0 execCanReceiveImpact body=43 status=ok
// SIG undefined execCanReceiveImpact(void)

void IImpactReceiver::execCanReceiveImpact(undefined8 *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)*param_1)();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1412e4190 FUN_1412e4190 body=272 status=ok
// SIG undefined FUN_1412e4190(void)

void FUN_1412e4190(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res20 [2];
  undefined8 local_28 [2];
  
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
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140a01270(param_1,bVar1,bVar2,local_28[0]);
  return;
}



// FUNCTION 1412e42a0 FUN_1412e42a0 body=191 status=ok
// SIG undefined FUN_1412e42a0(void)

void FUN_1412e42a0(undefined8 param_1,longlong param_2)

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
  FUN_140a018c0(param_1,bVar1,local_res20);
  return;
}



// FUNCTION 1412e4360 FUN_1412e4360 body=128 status=ok
// SIG undefined FUN_1412e4360(void)

void FUN_1412e4360(undefined8 param_1,longlong param_2)

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
  FUN_140a02760(param_1,local_res10);
  return;
}



// FUNCTION 1412e4420 FUN_1412e4420 body=44 status=ok
// SIG undefined FUN_1412e4420(void)

void FUN_1412e4420(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140a075d0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1412e4450 FUN_1412e4450 body=43 status=ok
// SIG undefined FUN_1412e4450(void)

void FUN_1412e4450(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140a075e0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1412e44a0 FUN_1412e44a0 body=128 status=ok
// SIG undefined FUN_1412e44a0(void)

void FUN_1412e44a0(undefined8 param_1,longlong param_2)

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
  FUN_140a0e320(param_1,local_res10);
  return;
}



// FUNCTION 1412e4520 FUN_1412e4520 body=118 status=ok
// SIG undefined FUN_1412e4520(void)

void FUN_1412e4520(undefined8 param_1,longlong param_2)

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
  FUN_140a10220(param_1,local_res10[0]);
  return;
}



// FUNCTION 1412e45c0 execScrollWidgetIntoView body=255 status=ok
// SIG undefined execScrollWidgetIntoView(void)

void UScrollBox::execScrollWidgetIntoView(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined1 local_res10 [16];
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
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar1 = local_res20[0] != 0;
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
  FUN_140a14ab0(param_1,local_28[0],bVar1,local_res10[0]);
  return;
}



// FUNCTION 1412e46c0 FUN_1412e46c0 body=128 status=ok
// SIG undefined FUN_1412e46c0(void)

void FUN_1412e46c0(undefined8 param_1,longlong param_2)

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
  FUN_140a15eb0(param_1,local_res10);
  return;
}



// FUNCTION 1412e4780 FUN_1412e4780 body=130 status=ok
// SIG undefined FUN_1412e4780(void)

void FUN_1412e4780(undefined8 param_1,longlong param_2)

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
  FUN_140a1b100(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1412e4810 FUN_1412e4810 body=673 status=ok
// SIG undefined FUN_1412e4810(void)

void FUN_1412e4810(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [2];
  int local_res20 [2];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70 [2];
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
  
  local_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_70[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  local_74 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_74);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
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
  local_78 = 0;
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
  bVar1 = local_res10[0] != 0;
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_30 = local_50;
  local_20 = local_40;
  local_38 = local_58;
  local_28 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140a1bac0(param_1,local_60,local_70[0],local_74,local_68,&local_28,&local_38,local_78,bVar1,
                local_res20[0] != 0);
  return;
}



// FUNCTION 1412e4ac0 FUN_1412e4ac0 body=440 status=ok
// SIG undefined FUN_1412e4ac0(void)

void FUN_1412e4ac0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  int local_res20 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_28;
  undefined4 local_20;
  
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
  local_28 = local_40;
  local_20 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140a1bc60(param_1,&local_28,local_44,local_48,bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 1412e4c80 FUN_1412e4c80 body=619 status=ok
// SIG undefined FUN_1412e4c80(void)

void FUN_1412e4c80(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [2];
  int local_res20 [2];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_70[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  local_74 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_74);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_78 = 0;
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
  bVar1 = local_res10[0] != 0;
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_30 = local_58;
  local_20 = local_48;
  local_38 = local_60;
  local_28 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140a1bdb0(param_1,local_70[0],local_74,local_68,&local_28,&local_38,local_78,bVar1,
                local_res20[0] != 0);
  return;
}



// FUNCTION 1412e4f00 FUN_1412e4f00 body=53 status=ok
// SIG undefined FUN_1412e4f00(void)

void FUN_1412e4f00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_144793cd8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1412e4f40 FUN_1412e4f40 body=53 status=ok
// SIG undefined FUN_1412e4f40(void)

void FUN_1412e4f40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &PTR_FUN_144793df0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1412e4f80 FUN_1412e4f80 body=53 status=ok
// SIG undefined FUN_1412e4f80(void)

void FUN_1412e4f80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1840;
    *puVar1 = &PTR_FUN_144793bc0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1412e4fc0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AAFGameState::GetPrivateStaticClass(void)

{
  if (DAT_146879e30 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"AllPlayersRequiredVolume",&DAT_146879e30,FUN_140447710,0x4d8,
                  0x10000000,0,L"Engine",&LAB_1412e5970,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  ASoPlayerSpline::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146879e30;
}



// FUNCTION 1412e5080 FUN_1412e5080 body=162 status=ok
// SIG undefined FUN_1412e5080(void)

longlong FUN_1412e5080(void)

{
  if (DAT_146879e40 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"AlwaysLoadedData",&DAT_146879e40,FUN_140447710,0x40,
                  0x10000000,0,L"Engine",FUN_1412e59b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPrimaryDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146879e40;
}



// FUNCTION 1412e5140 FUN_1412e5140 body=162 status=ok
// SIG undefined FUN_1412e5140(void)

longlong FUN_1412e5140(void)

{
  if (DAT_146879e50 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"AmmoAspectData",&DAT_146879e50,FUN_140447710,0x40,0x10000000,
                  0,L"Engine",FUN_1412e59f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f6e0,&LAB_140447700,0);
  }
  return DAT_146879e50;
}



// FUNCTION 1412e51f0 FUN_1412e51f0 body=53 status=ok
// SIG undefined FUN_1412e51f0(void)

void FUN_1412e51f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1b50;
    *puVar1 = &PTR_FUN_144793390;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1412e5240 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FOrderOverAttackInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x480;
    *puVar1 = &PTR_FUN_144793f60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1412e5280 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FTViewTarget_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x5a0;
    *puVar1 = &PTR_FUN_1447940d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1412e52c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameplayTagAssetInterface::GetPrivateStaticClass(void)

{
  if (DAT_146879d78 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"AIProjectileInterface",&DAT_146879d78,
                  StaticRegisterNativesUGameplayTagAssetInterface,0x28,0x10004001,0,L"Engine",
                  FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146879d78;
}



// FUNCTION 1412e5370 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEditableTextBoxWidgetStyle::StaticClass(void)

{
  if (DAT_146879e18 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"AIStolenProjectileComponent",&DAT_146879e18,FUN_1412e8750,
                  0x820,0x10000000,0,L"Engine",&LAB_1412e5990,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412e8700,&LAB_140447700,0);
  }
  return DAT_146879e18;
}



// FUNCTION 1412e5420 FUN_1412e5420 body=53 status=ok
// SIG undefined FUN_1412e5420(void)

void FUN_1412e5420(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1ad0;
    *puVar1 = &PTR_FUN_1447936f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1412e5460 FUN_1412e5460 body=47 status=ok
// SIG undefined FUN_1412e5460(void)

longlong FUN_1412e5460(void)

{
  if (DAT_146879d70 == 0) {
    FUN_141786440(&DAT_146879d70,&PTR_GetPrivateStaticClass_144790bd0);
  }
  return DAT_146879d70;
}



// FUNCTION 1412e5490 FUN_1412e5490 body=47 status=ok
// SIG undefined FUN_1412e5490(void)

longlong FUN_1412e5490(void)

{
  if (DAT_146879d50 == 0) {
    FUN_141786a30(&DAT_146879d50,&PTR_FUN_1462b0930);
  }
  return DAT_146879d50;
}



// FUNCTION 1412e54c0 FUN_1412e54c0 body=47 status=ok
// SIG undefined FUN_1412e54c0(void)

longlong FUN_1412e54c0(void)

{
  if (DAT_146879d58 == 0) {
    FUN_141786a30(&DAT_146879d58,&PTR_FUN_1462b09c0);
  }
  return DAT_146879d58;
}



// FUNCTION 1412e54f0 FUN_1412e54f0 body=47 status=ok
// SIG undefined FUN_1412e54f0(void)

longlong FUN_1412e54f0(void)

{
  if (DAT_146879d60 == 0) {
    FUN_141786a30(&DAT_146879d60,&PTR_FUN_1462b0a00);
  }
  return DAT_146879d60;
}



// FUNCTION 1412e5520 FUN_1412e5520 body=47 status=ok
// SIG undefined FUN_1412e5520(void)

longlong FUN_1412e5520(void)

{
  if (DAT_146879d68 == 0) {
    FUN_141786a30(&DAT_146879d68,&PTR_FUN_1462b0a40);
  }
  return DAT_146879d68;
}


