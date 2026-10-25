// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142f71f90 FUN_142f71f90 body=57 status=ok
// SIG undefined FUN_142f71f90(void)

void FUN_142f71f90(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b42cb8);
                    /* WARNING: Could not recover jumptable at 0x000142f71fc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 142f71fd0 FUN_142f71fd0 body=57 status=ok
// SIG undefined FUN_142f71fd0(void)

void FUN_142f71fd0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b42cc0);
                    /* WARNING: Could not recover jumptable at 0x000142f72006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 142f72010 FUN_142f72010 body=57 status=ok
// SIG undefined FUN_142f72010(void)

void FUN_142f72010(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b42cc8);
                    /* WARNING: Could not recover jumptable at 0x000142f72046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 142f72050 FUN_142f72050 body=57 status=ok
// SIG undefined FUN_142f72050(void)

void FUN_142f72050(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b42cd0);
                    /* WARNING: Could not recover jumptable at 0x000142f72086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 142f72090 FUN_142f72090 body=57 status=ok
// SIG undefined FUN_142f72090(void)

void FUN_142f72090(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b42cd8);
                    /* WARNING: Could not recover jumptable at 0x000142f720c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 142f720d0 FUN_142f720d0 body=57 status=ok
// SIG undefined FUN_142f720d0(void)

void FUN_142f720d0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b42ce0);
                    /* WARNING: Could not recover jumptable at 0x000142f72106. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 142f72150 thunk_FUN_142f791f0 body=5 status=ok
// SIG undefined thunk_FUN_142f791f0(void)

void thunk_FUN_142f791f0(void)

{
  FUN_142f791f0();
  return;
}



// FUNCTION 142f72160 StaticRegisterNativesUKismetArrayLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUKismetArrayLibrary(void)

void UKismetArrayLibrary::StaticRegisterNativesUKismetArrayLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142f71d80();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ActivateMission_1459f2390,0x13);
  return;
}



// FUNCTION 142f72190 FUN_142f72190 body=34 status=ok
// SIG undefined FUN_142f72190(void)

void FUN_142f72190(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142f6fb00();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AdvanceMission_1459f3190,10);
  return;
}



// FUNCTION 142f721c0 FUN_142f721c0 body=34 status=ok
// SIG undefined FUN_142f721c0(void)

void FUN_142f721c0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142f71e20();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ActivateAvailableMission_1459f3270,6);
  return;
}



// FUNCTION 142f721f0 StaticRegisterNativesUWidget body=34 status=ok
// SIG undefined StaticRegisterNativesUWidget(void)

void UWidget::StaticRegisterNativesUWidget(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142f6fa40();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ActivateMission_1459f4c50,0x28);
  return;
}



// FUNCTION 142f72220 FUN_142f72220 body=113 status=ok
// SIG undefined FUN_142f72220(void)

void FUN_142f72220(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b43258 == 0) {
    if (DAT_146b43058 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b43058,&PTR_s__Script_GbxMission_1459f2338);
    }
    lVar1 = DAT_146b43058;
    uVar2 = FUN_142f71ed0();
    DAT_146b43258 = GetStaticStruct(FUN_142f726e0,lVar1,L"MissionEnableConditionEvent",0x20,uVar2);
  }
  return;
}



// FUNCTION 142f722a0 FUN_142f722a0 body=113 status=ok
// SIG undefined FUN_142f722a0(void)

void FUN_142f722a0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b432f8 == 0) {
    if (DAT_146b43058 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b43058,&PTR_s__Script_GbxMission_1459f2338);
    }
    lVar1 = DAT_146b43058;
    uVar2 = FUN_142f71ee0();
    DAT_146b432f8 = GetStaticStruct(FUN_142f72710,lVar1,L"MissionEventReference",0x10,uVar2);
  }
  return;
}



// FUNCTION 142f72320 FUN_142f72320 body=47 status=ok
// SIG undefined FUN_142f72320(void)

longlong FUN_142f72320(void)

{
  if (DAT_146b43060 == 0) {
    FUN_141786440(&DAT_146b43060,&PTR_thunk_FUN_142f71cd0_1459edee0);
  }
  return DAT_146b43060;
}



// FUNCTION 142f72350 FUN_142f72350 body=47 status=ok
// SIG undefined FUN_142f72350(void)

longlong FUN_142f72350(void)

{
  if (DAT_146b43160 == 0) {
    FUN_141786440(&DAT_146b43160,&PTR_FUN_1459f0ce0);
  }
  return DAT_146b43160;
}



// FUNCTION 142f72380 FUN_142f72380 body=47 status=ok
// SIG undefined FUN_142f72380(void)

longlong FUN_142f72380(void)

{
  if (DAT_146b43170 == 0) {
    FUN_141786440(&DAT_146b43170,&PTR_FUN_1459ed3e0);
  }
  return DAT_146b43170;
}



// FUNCTION 142f723b0 FUN_142f723b0 body=47 status=ok
// SIG undefined FUN_142f723b0(void)

longlong FUN_142f723b0(void)

{
  if (DAT_146b43278 == 0) {
    FUN_141786440(&DAT_146b43278,&PTR_GetPrivateStaticClass_1459ec3b0);
  }
  return DAT_146b43278;
}



// FUNCTION 142f723e0 FUN_142f723e0 body=47 status=ok
// SIG undefined FUN_142f723e0(void)

longlong FUN_142f723e0(void)

{
  if (DAT_146b43288 == 0) {
    FUN_141786440(&DAT_146b43288,&PTR_FUN_1459ec660);
  }
  return DAT_146b43288;
}



// FUNCTION 142f72410 FUN_142f72410 body=47 status=ok
// SIG undefined FUN_142f72410(void)

longlong FUN_142f72410(void)

{
  if (DAT_146b43298 == 0) {
    FUN_141786440(&DAT_146b43298,&PTR_GetPrivateStaticClass_1459ec710);
  }
  return DAT_146b43298;
}



// FUNCTION 142f72440 FUN_142f72440 body=47 status=ok
// SIG undefined FUN_142f72440(void)

longlong FUN_142f72440(void)

{
  if (DAT_146b432a8 == 0) {
    FUN_141786440(&DAT_146b432a8,&PTR_FUN_1459ec880);
  }
  return DAT_146b432a8;
}



// FUNCTION 142f72470 FUN_142f72470 body=47 status=ok
// SIG undefined FUN_142f72470(void)

longlong FUN_142f72470(void)

{
  if (DAT_146b432b8 == 0) {
    FUN_141786440(&DAT_146b432b8,&PTR_GetPrivateStaticClass_1459ecbc0);
  }
  return DAT_146b432b8;
}



// FUNCTION 142f724a0 FUN_142f724a0 body=47 status=ok
// SIG undefined FUN_142f724a0(void)

longlong FUN_142f724a0(void)

{
  if (DAT_146b432d0 == 0) {
    FUN_141786440(&DAT_146b432d0,&PTR_FUN_1459ecff0);
  }
  return DAT_146b432d0;
}



// FUNCTION 142f724d0 FUN_142f724d0 body=47 status=ok
// SIG undefined FUN_142f724d0(void)

longlong FUN_142f724d0(void)

{
  if (DAT_146b432e8 == 0) {
    FUN_141786440(&DAT_146b432e8,&PTR_GetPrivateStaticClass_1459ed460);
  }
  return DAT_146b432e8;
}



// FUNCTION 142f72500 FUN_142f72500 body=47 status=ok
// SIG undefined FUN_142f72500(void)

longlong FUN_142f72500(void)

{
  if (DAT_146b431f0 == 0) {
    FUN_141786a30(&DAT_146b431f0,&PTR_Z_Construct_UPackage__Script_Engine_146763ed0);
  }
  return DAT_146b431f0;
}



// FUNCTION 142f72530 FUN_142f72530 body=47 status=ok
// SIG undefined FUN_142f72530(void)

longlong FUN_142f72530(void)

{
  if (DAT_146b431f8 == 0) {
    FUN_141786a30(&DAT_146b431f8,&PTR_Z_Construct_UPackage__Script_Engine_146763f10);
  }
  return DAT_146b431f8;
}



// FUNCTION 142f72560 FUN_142f72560 body=47 status=ok
// SIG undefined FUN_142f72560(void)

longlong FUN_142f72560(void)

{
  if (DAT_146b431e8 == 0) {
    FUN_141786a30(&DAT_146b431e8,&PTR_Z_Construct_UPackage__Script_Engine_146763e90);
  }
  return DAT_146b431e8;
}



// FUNCTION 142f72590 FUN_142f72590 body=47 status=ok
// SIG undefined FUN_142f72590(void)

longlong FUN_142f72590(void)

{
  if (DAT_146b43250 == 0) {
    FUN_141786a30(&DAT_146b43250,&PTR_Z_Construct_UPackage__Script_Engine_146764470);
  }
  return DAT_146b43250;
}



// FUNCTION 142f725c0 FUN_142f725c0 body=47 status=ok
// SIG undefined FUN_142f725c0(void)

longlong FUN_142f725c0(void)

{
  if (DAT_146b43200 == 0) {
    FUN_1417866a0(&DAT_146b43200,&PTR_Z_Construct_UPackage__Script_Engine_1467670b0);
  }
  return DAT_146b43200;
}



// FUNCTION 142f725f0 FUN_142f725f0 body=47 status=ok
// SIG undefined FUN_142f725f0(void)

longlong FUN_142f725f0(void)

{
  if (DAT_146b43208 == 0) {
    FUN_1417866a0(&DAT_146b43208,&PTR_Z_Construct_UPackage__Script_Engine_146767100);
  }
  return DAT_146b43208;
}



// FUNCTION 142f72620 FUN_142f72620 body=47 status=ok
// SIG undefined FUN_142f72620(void)

longlong FUN_142f72620(void)

{
  if (DAT_146b43180 == 0) {
    FUN_1417866a0(&DAT_146b43180,&PTR_Z_Construct_UPackage__Script_Engine_146767060);
  }
  return DAT_146b43180;
}



// FUNCTION 142f72650 FUN_142f72650 body=47 status=ok
// SIG undefined FUN_142f72650(void)

longlong FUN_142f72650(void)

{
  if (DAT_146b432e0 == 0) {
    FUN_1417866a0(&DAT_146b432e0,&PTR_Z_Construct_UPackage__Script_Engine_1467671a0);
  }
  return DAT_146b432e0;
}



// FUNCTION 142f72680 FUN_142f72680 body=47 status=ok
// SIG undefined FUN_142f72680(void)

longlong FUN_142f72680(void)

{
  if (DAT_146b43158 == 0) {
    FUN_1417866a0(&DAT_146b43158,&PTR_Z_Construct_UPackage__Script_Engine_146767010);
  }
  return DAT_146b43158;
}



// FUNCTION 142f726b0 FUN_142f726b0 body=47 status=ok
// SIG undefined FUN_142f726b0(void)

longlong FUN_142f726b0(void)

{
  if (DAT_146b432c8 == 0) {
    FUN_1417866a0(&DAT_146b432c8,&PTR_Z_Construct_UPackage__Script_Engine_146767150);
  }
  return DAT_146b432c8;
}



// FUNCTION 142f726e0 FUN_142f726e0 body=47 status=ok
// SIG undefined FUN_142f726e0(void)

longlong FUN_142f726e0(void)

{
  if (DAT_146b43260 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b43260,&PTR_Z_Construct_UPackage__Script_Engine_146764590);
  }
  return DAT_146b43260;
}



// FUNCTION 142f72710 FUN_142f72710 body=47 status=ok
// SIG undefined FUN_142f72710(void)

longlong FUN_142f72710(void)

{
  if (DAT_146b43300 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b43300,&PTR_Z_Construct_UPackage__Script_Engine_146764bb0);
  }
  return DAT_146b43300;
}



// FUNCTION 142f727a0 FUN_142f727a0 body=194 status=ok
// SIG undefined FUN_142f727a0(void)

void FUN_142f727a0(undefined8 param_1,longlong param_2)

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
  FUN_142f50d20(param_1,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 142f72870 FUN_142f72870 body=175 status=ok
// SIG undefined FUN_142f72870(void)

void FUN_142f72870(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
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
  FUN_142f50fb0(local_res20,local_res10[0]);
  return;
}



// FUNCTION 142f72920 FUN_142f72920 body=292 status=ok
// SIG undefined FUN_142f72920(void)

void FUN_142f72920(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_90 = 0;
  local_88 = 0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_58,&local_a8);
  local_30 = local_80;
  local_18 = local_68;
  local_14 = local_64;
  local_28 = (undefined4)local_78;
  uStack_24 = local_78._4_4_;
  uStack_20 = (undefined4)uStack_70;
  uStack_1c = uStack_70._4_4_;
  FUN_142f51020(local_res10,local_58);
  if (local_90 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f72a50 FUN_142f72a50 body=128 status=ok
// SIG undefined FUN_142f72a50(void)

void FUN_142f72a50(undefined8 param_1,longlong param_2)

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
  FUN_142f51a60(param_1,local_res10);
  return;
}



// FUNCTION 142f72ad0 FUN_142f72ad0 body=126 status=ok
// SIG undefined FUN_142f72ad0(void)

void FUN_142f72ad0(undefined8 param_1,longlong param_2)

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
  FUN_142f522f0(param_1,local_res10[0]);
  return;
}



// FUNCTION 142f72b50 FUN_142f72b50 body=292 status=ok
// SIG undefined FUN_142f72b50(void)

void FUN_142f72b50(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_90 = 0;
  local_88 = 0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_58,&local_a8);
  local_30 = local_80;
  local_18 = local_68;
  local_14 = local_64;
  local_28 = (undefined4)local_78;
  uStack_24 = local_78._4_4_;
  uStack_20 = (undefined4)uStack_70;
  uStack_1c = uStack_70._4_4_;
  FUN_142f52620(local_res10,local_58);
  if (local_90 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f72c80 FUN_142f72c80 body=128 status=ok
// SIG undefined FUN_142f72c80(void)

void FUN_142f72c80(undefined8 param_1,longlong param_2)

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
  FUN_142f53050(param_1,local_res10);
  return;
}



// FUNCTION 142f72d00 FUN_142f72d00 body=269 status=ok
// SIG undefined FUN_142f72d00(void)

void FUN_142f72d00(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
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
  local_60 = 0;
  local_68 = &DAT_1441d2800;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_38 = &DAT_1441d2800;
  local_30 = local_60;
  local_18 = local_48;
  local_14 = local_44;
  local_10 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_28 = (undefined4)local_58;
  uStack_24 = local_58._4_4_;
  uStack_20 = (undefined4)uStack_50;
  uStack_1c = uStack_50._4_4_;
  FUN_142f531f0(local_res10,&local_38);
  return;
}



// FUNCTION 142f72e10 FUN_142f72e10 body=218 status=ok
// SIG undefined FUN_142f72e10(void)

void FUN_142f72e10(long param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 142f72f10 FUN_142f72f10 body=128 status=ok
// SIG undefined FUN_142f72f10(void)

void FUN_142f72f10(undefined8 param_1,longlong param_2)

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
  FUN_142f54dd0(param_1,local_res10);
  return;
}



// FUNCTION 142f72fb0 FUN_142f72fb0 body=175 status=ok
// SIG undefined FUN_142f72fb0(void)

void FUN_142f72fb0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
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
  FUN_142f55cc0(local_res20,local_res10[0]);
  return;
}



// FUNCTION 142f73060 FUN_142f73060 body=191 status=ok
// SIG undefined FUN_142f73060(void)

void FUN_142f73060(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
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
  uVar1 = FUN_142f55da0(local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f73120 FUN_142f73120 body=352 status=ok
// SIG undefined FUN_142f73120(void)

void FUN_142f73120(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  int local_res10 [4];
  undefined8 local_res20;
  undefined8 uVar3;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  uVar3 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    lVar1 = *(longlong *)(param_2 + 0x80);
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(lVar1 + 0x28);
    FUN_14179aca0(param_2,&local_b8,lVar1,param_4,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    lVar1 = *(longlong *)(param_2 + 0x80);
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(lVar1 + 0x28);
    FUN_14179aca0(param_2,local_res10,lVar1,param_4,uVar3);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_68,&local_b8);
  local_40 = local_90;
  local_28 = local_78;
  local_24 = local_74;
  local_38 = (undefined4)local_88;
  uStack_34 = local_88._4_4_;
  uStack_30 = (undefined4)uStack_80;
  uStack_2c = uStack_80._4_4_;
  FUN_140dea6d0(local_res20,local_68,bVar2);
  if (local_a0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f732a0 FUN_142f732a0 body=351 status=ok
// SIG undefined FUN_142f732a0(void)

void FUN_142f732a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_78 = 0xffffffff;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_74 = 0;
  local_98 = &DAT_1441d2800;
  local_70 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_c8 = &DAT_1441d2800;
  local_a0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_68 = &DAT_1441d2800;
  local_38 = &DAT_1441d2800;
  local_60 = local_c0;
  local_48 = local_a8;
  local_44 = local_a4;
  local_40 = local_a0;
  local_30 = local_90;
  local_18 = local_78;
  local_58 = local_b8;
  uStack_50 = uStack_b0;
  local_14 = local_74;
  local_10 = local_70;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_28 = (undefined4)local_88;
  uStack_24 = local_88._4_4_;
  uStack_20 = (undefined4)uStack_80;
  uStack_1c = uStack_80._4_4_;
  uVar1 = FUN_142f56c50(&local_38,&local_68);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f73400 FUN_142f73400 body=431 status=ok
// SIG undefined FUN_142f73400(void)

void FUN_142f73400(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [40];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_e8 = 0xffffffff;
  local_d0 = 0;
  local_c8 = 0;
  local_e4 = 0;
  local_d8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  local_120 = 0;
  local_118 = 0;
  local_138 = 0xffffffff;
  local_134 = 0;
  local_128 = 0;
  local_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_138);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_138);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_98,&local_138);
  local_70 = local_110;
  local_58 = local_f8;
  local_54 = local_f4;
  local_68 = (undefined4)local_108;
  uStack_64 = local_108._4_4_;
  uStack_60 = (undefined4)uStack_100;
  uStack_5c = uStack_100._4_4_;
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_50,&local_e8);
  local_28 = local_c0;
  local_10 = local_a8;
  local_c = local_a4;
  local_20 = (undefined4)local_b8;
  uStack_1c = local_b8._4_4_;
  uStack_18 = (undefined4)uStack_b0;
  uStack_14 = uStack_b0._4_4_;
  uVar1 = FUN_142f56cb0(local_50,local_98);
  *param_3 = uVar1;
  if (local_120 != 0) {
    FMemory::Free();
  }
  if (local_d0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f735d0 FUN_142f735d0 body=283 status=ok
// SIG undefined FUN_142f735d0(void)

void FUN_142f735d0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 local_20;
  
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
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_res20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = &local_28;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  puVar2 = &local_res20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
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
  FUN_142f58550(puVar1,*puVar2,local_res10[0]);
  return;
}



// FUNCTION 142f736f0 FUN_142f736f0 body=325 status=ok
// SIG undefined FUN_142f736f0(void)

void FUN_142f736f0(undefined8 param_1,longlong param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0xffffffff;
  local_24 = 0;
  local_48 = &DAT_1441d2800;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  ppuVar1 = *(undefined ***)(param_2 + 0x38);
  local_res20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  ppuVar2 = &local_48;
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar2 = ppuVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  puVar3 = &local_res20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
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
  thunk_FUN_142f585d0(ppuVar2,*puVar3,local_res10[0]);
  return;
}



// FUNCTION 142f73840 FUN_142f73840 body=356 status=ok
// SIG undefined FUN_142f73840(void)

void FUN_142f73840(undefined8 param_1,longlong param_2)

{
  undefined ***pppuVar1;
  undefined8 *puVar2;
  undefined ***pppuVar3;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_58 = 0xffffffff;
  local_40 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_78 = &PTR_FUN_144278ac0;
  local_38 = 0;
  local_30 = 0;
  local_50 = 0xffffffff;
  local_4c = 0;
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  pppuVar1 = *(undefined ****)(param_2 + 0x38);
  local_res20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  pppuVar3 = &local_78;
  if (pppuVar1 != (undefined ***)0x0) {
    pppuVar3 = pppuVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  puVar2 = &local_res20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
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
  thunk_FUN_142f585d0(pppuVar3,*puVar2,local_res10[0]);
  local_78 = &PTR_FUN_144278ac0;
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f739b0 FUN_142f739b0 body=344 status=ok
// SIG undefined FUN_142f739b0(void)

void FUN_142f739b0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  local_68 = 0xffffffff;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_64 = 0;
  local_res10 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0xffffffff;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_res20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar3 = &local_68;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10 = 0;
  puVar2 = &local_res20;
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142f58690(puVar3,*puVar2,local_res10);
  if (local_50 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f73b10 FUN_142f73b10 body=193 status=ok
// SIG undefined FUN_142f73b10(void)

void FUN_142f73b10(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_142f593d0(local_18,local_res10);
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



// FUNCTION 142f73be0 execMakeLiteralGameplayTag body=136 status=ok
// SIG undefined execMakeLiteralGameplayTag(void)

void UBlueprintGameplayTagLibrary::execMakeLiteralGameplayTag
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  
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
  puVar1 = (undefined8 *)FUN_142f597d0(local_res18,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142f73c70 FUN_142f73c70 body=163 status=ok
// SIG undefined FUN_142f73c70(void)

void FUN_142f73c70(undefined8 param_1,longlong param_2)

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
  FUN_142f59d20(param_1,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f73d20 execMakeLiteralGameplayTag body=136 status=ok
// SIG undefined execMakeLiteralGameplayTag(void)

void UBlueprintGameplayTagLibrary::execMakeLiteralGameplayTag
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  
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
  puVar1 = (undefined8 *)FUN_142f5a230(local_res18,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142f73db0 execGetDataTableRowNames body=210 status=ok
// SIG undefined execGetDataTableRowNames(void)

void UDataTableFunctionLibrary::execGetDataTableRowNames(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
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
  FUN_142f5a650(local_res10[0],plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f73e90 FUN_142f73e90 body=158 status=ok
// SIG undefined FUN_142f73e90(void)

void FUN_142f73e90(long param_1,longlong param_2)

{
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  FUN_142ea9b10(&local_18);
  return;
}



// FUNCTION 142f73f30 FUN_142f73f30 body=222 status=ok
// SIG undefined FUN_142f73f30(void)

void FUN_142f73f30(long param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  FUN_142ea9b10(&local_18);
  return;
}



// FUNCTION 142f74010 FUN_142f74010 body=191 status=ok
// SIG undefined FUN_142f74010(void)

void FUN_142f74010(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
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
  uVar1 = FUN_142f5ad10(local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f740d0 FUN_142f740d0 body=220 status=ok
// SIG undefined FUN_142f740d0(void)

void FUN_142f740d0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  local_58 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_54 = 0;
  local_78 = &DAT_1441d2800;
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_48 = &DAT_1441d2800;
  local_40 = local_70;
  local_28 = local_58;
  local_24 = local_54;
  local_20 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_38 = (undefined4)local_68;
  uStack_34 = local_68._4_4_;
  uStack_30 = (undefined4)uStack_60;
  uStack_2c = uStack_60._4_4_;
  puVar1 = (undefined8 *)FUN_142f5b230(local_res10,&local_48);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142f741b0 FUN_142f741b0 body=270 status=ok
// SIG undefined FUN_142f741b0(void)

void FUN_142f741b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [40];
  
  local_98 = 0xffffffff;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_94 = 0;
  local_b8 = &PTR_FUN_144278ac0;
  local_78 = 0;
  local_70 = 0;
  local_90 = 0xffffffff;
  local_8c = 0;
  local_res10 = 0;
  local_80 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_68 = &PTR_FUN_144278ac0;
  local_58 = (undefined4)local_a8;
  uStack_54 = local_a8._4_4_;
  uStack_50 = (undefined4)uStack_a0;
  uStack_4c = uStack_a0._4_4_;
  local_60 = local_b0;
  local_48 = local_98;
  local_44 = local_94;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_40,&local_90);
  puVar1 = (undefined8 *)FUN_142f5b250(&local_res10,&local_68);
  *param_3 = *puVar1;
  local_b8 = &PTR_FUN_144278ac0;
  if (local_78 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f742c0 execGetPlayerControllerID body=127 status=ok
// SIG undefined execGetPlayerControllerID(void)

void UGameplayStatics::execGetPlayerControllerID
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  uVar1 = FUN_142f5baa0(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f74340 FUN_142f74340 body=418 status=ok
// SIG undefined FUN_142f74340(void)

void FUN_142f74340(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  local_88 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_78 = 0;
  local_80 = &DAT_1441d2800;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0xffffffff;
  local_5c = 0;
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
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
  local_50 = &DAT_1441d2800;
  puVar2 = local_res20;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  local_40 = (undefined4)local_70;
  uStack_3c = local_70._4_4_;
  uStack_38 = (undefined4)uStack_68;
  uStack_34 = uStack_68._4_4_;
  local_48 = local_78;
  local_30 = local_60;
  local_2c = local_5c;
  local_28 = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142f5bd10(local_88,&local_50,puVar1,puVar2);
  return;
}



// FUNCTION 142f744f0 FUN_142f744f0 body=292 status=ok
// SIG undefined FUN_142f744f0(void)

void FUN_142f744f0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_a0 = 0;
  local_98 = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_res18 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_68,&local_b8);
  local_40 = local_90;
  local_28 = local_78;
  local_24 = local_74;
  local_38 = (undefined4)local_88;
  uStack_34 = local_88._4_4_;
  uStack_30 = (undefined4)uStack_80;
  uStack_2c = uStack_80._4_4_;
  uVar1 = FUN_142f5c290(local_res10,local_68);
  *param_3 = uVar1;
  if (local_a0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f74620 FUN_142f74620 body=331 status=ok
// SIG undefined FUN_142f74620(void)

void FUN_142f74620(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  local_70 = 0;
  local_78 = &DAT_1441d2800;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_48 = &DAT_1441d2800;
  local_40 = local_70;
  local_28 = local_58;
  local_24 = local_54;
  local_20 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_38 = (undefined4)local_68;
  uStack_34 = local_68._4_4_;
  uStack_30 = (undefined4)uStack_60;
  uStack_2c = uStack_60._4_4_;
  uVar1 = FUN_142f5c300(local_res18,&local_48,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f74770 FUN_142f74770 body=43 status=ok
// SIG undefined FUN_142f74770(void)

void FUN_142f74770(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142f5c880();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f747a0 execIsVectorValueSet body=158 status=ok
// SIG undefined execIsVectorValueSet(void)

void UBlackboardComponent::execIsVectorValueSet
               (ErrorCode param_1,longlong param_2,undefined1 *param_3,__uint64 param_4)

{
  AKRESULT AVar1;
  ErrorLevel EVar2;
  ulong unaff_EDI;
  ulong uVar3;
  undefined1 unaff_retaddr;
  undefined8 local_res10;
  longlong lVar4;
  
  local_res10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    lVar4 = *(longlong *)(param_2 + 0x80);
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(lVar4 + 0x28);
    FUN_14179aca0(param_2,&local_res10);
    uVar3 = (ulong)lVar4;
  }
  else {
    uVar3 = (ulong)&local_res10;
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18));
  }
  EVar2 = (ErrorLevel)&local_res10;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    EVar2 = (ErrorLevel)*(longlong *)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AVar1 = AK::Monitor::PostCode(param_1,EVar2,uVar3,param_4,unaff_EDI,(bool)unaff_retaddr);
  *param_3 = (char)AVar1;
  return;
}



// FUNCTION 142f74840 FUN_142f74840 body=190 status=ok
// SIG undefined FUN_142f74840(void)

void FUN_142f74840(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
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
  uVar1 = FUN_142f5ca00(local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f74900 FUN_142f74900 body=159 status=ok
// SIG undefined FUN_142f74900(void)

void FUN_142f74900(long param_1,longlong param_2,undefined8 *param_3)

{
  wchar_t *pwVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  pwVar1 = AK::MemoryMgr::GetPoolName(param_1);
  *param_3 = pwVar1;
  return;
}



// FUNCTION 142f749a0 execGetDataTableRowNames body=210 status=ok
// SIG undefined execGetDataTableRowNames(void)

void UDataTableFunctionLibrary::execGetDataTableRowNames(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
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
  FUN_142f5d110(local_res10[0],plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f74a80 FUN_142f74a80 body=347 status=ok
// SIG undefined FUN_142f74a80(void)

void FUN_142f74a80(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong local_88 [2];
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_68;
  longlong local_60 [2];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  local_78 = 0xffffffff;
  local_68 = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  local_74 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_38 = 0;
  local_30 = 0;
  plVar1 = local_88;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0;
  local_50 = local_78;
  local_4c = (undefined4)local_74;
  local_48 = local_74._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_28 = local_68;
  FString::FString(local_20,local_60);
  FSoftObjectPath::operator=(&local_40,&local_28);
  FUN_142f5d260(&local_50,plVar1);
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  if (local_60[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f74be0 FUN_142f74be0 body=249 status=ok
// SIG undefined FUN_142f74be0(void)

void FUN_142f74be0(long param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_18;
  undefined8 local_10;
  
  local_res10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  FUN_142ea9b10(&local_18);
  return;
}



// FUNCTION 142f74ce0 execGetDataTableRowNames body=210 status=ok
// SIG undefined execGetDataTableRowNames(void)

void UDataTableFunctionLibrary::execGetDataTableRowNames(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
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
  FUN_142f5d680(local_res10[0],plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f74dc0 execGetDataTableRowNames body=210 status=ok
// SIG undefined execGetDataTableRowNames(void)

void UDataTableFunctionLibrary::execGetDataTableRowNames(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
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
  FUN_142f5d750(local_res10[0],plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f74ea0 FUN_142f74ea0 body=347 status=ok
// SIG undefined FUN_142f74ea0(void)

void FUN_142f74ea0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong local_88 [2];
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_68;
  longlong local_60 [2];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  local_78 = 0xffffffff;
  local_68 = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  local_74 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_38 = 0;
  local_30 = 0;
  plVar1 = local_88;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0;
  local_50 = local_78;
  local_4c = (undefined4)local_74;
  local_48 = local_74._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_28 = local_68;
  FString::FString(local_20,local_60);
  FSoftObjectPath::operator=(&local_40,&local_28);
  FUN_142f5d8a0(&local_50,plVar1);
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  if (local_60[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f75000 FUN_142f75000 body=163 status=ok
// SIG undefined FUN_142f75000(void)

void FUN_142f75000(undefined8 param_1,longlong param_2)

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
  FUN_142f5dd80(param_1,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f750b0 FUN_142f750b0 body=163 status=ok
// SIG undefined FUN_142f750b0(void)

void FUN_142f750b0(undefined8 param_1,longlong param_2)

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
  FUN_142f5dfc0(param_1,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f75160 FUN_142f75160 body=163 status=ok
// SIG undefined FUN_142f75160(void)

void FUN_142f75160(undefined8 param_1,longlong param_2)

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
  FUN_142f5e1f0(param_1,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f75210 execGetPlayerControllerID body=127 status=ok
// SIG undefined execGetPlayerControllerID(void)

void UGameplayStatics::execGetPlayerControllerID
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  uVar1 = FUN_142f5e3c0(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f75290 FUN_142f75290 body=384 status=ok
// SIG undefined FUN_142f75290(void)

void FUN_142f75290(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_68;
  longlong local_60 [2];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  local_78 = 0xffffffff;
  local_68 = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  local_74 = 0;
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
  local_38 = 0;
  local_30 = 0;
  plVar1 = &local_88;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0;
  local_50 = local_78;
  local_4c = (undefined4)local_74;
  local_48 = local_74._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_28 = local_68;
  FString::FString(local_20,local_60);
  FSoftObjectPath::operator=(&local_40,&local_28);
  FUN_142f5e7d0(&local_50,plVar1);
  if ((int)local_80 != 0) {
    plVar1 = (longlong *)(local_88 + 0x18);
    iVar2 = (int)local_80;
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (local_60[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f75410 FUN_142f75410 body=143 status=ok
// SIG undefined FUN_142f75410(void)

void FUN_142f75410(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_res10 [8];
  
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar1 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142f62a50(param_1,puVar1);
  return;
}



// FUNCTION 142f754a0 FUN_142f754a0 body=143 status=ok
// SIG undefined FUN_142f754a0(void)

void FUN_142f754a0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_res10 [8];
  
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar1 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142f62bc0(param_1,puVar1);
  return;
}



// FUNCTION 142f75530 FUN_142f75530 body=352 status=ok
// SIG undefined FUN_142f75530(void)

void FUN_142f75530(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  int local_res10 [4];
  undefined8 local_res20;
  undefined8 uVar3;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  uVar3 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    lVar1 = *(longlong *)(param_2 + 0x80);
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(lVar1 + 0x28);
    FUN_14179aca0(param_2,&local_b8,lVar1,param_4,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    lVar1 = *(longlong *)(param_2 + 0x80);
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(lVar1 + 0x28);
    FUN_14179aca0(param_2,local_res10,lVar1,param_4,uVar3);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_68,&local_b8);
  local_40 = local_90;
  local_28 = local_78;
  local_24 = local_74;
  local_38 = (undefined4)local_88;
  uStack_34 = local_88._4_4_;
  uStack_30 = (undefined4)uStack_80;
  uStack_2c = uStack_80._4_4_;
  FUN_142f64590(local_res20,local_68,bVar2);
  if (local_a0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f75690 FUN_142f75690 body=194 status=ok
// SIG undefined FUN_142f75690(void)

void FUN_142f75690(undefined8 param_1,longlong param_2)

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
  FUN_142f64780(param_1,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 142f75760 FUN_142f75760 body=143 status=ok
// SIG undefined FUN_142f75760(void)

void FUN_142f75760(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_142f64ca0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f757f0 FUN_142f757f0 body=143 status=ok
// SIG undefined FUN_142f757f0(void)

void FUN_142f757f0(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_142f65860(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f75880 FUN_142f75880 body=265 status=ok
// SIG undefined FUN_142f75880(void)

void FUN_142f75880(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_50;
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_60 = 0xffffffff;
  local_50 = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_5c = 0;
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_20 = 0;
  local_18 = 0;
  local_res10 = 0;
  local_28 = 0;
  local_38 = local_60;
  local_34 = (undefined4)local_5c;
  local_30 = local_5c._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_78 = local_50;
  FString::FString(local_70,local_48);
  FSoftObjectPath::operator=(&local_28,&local_78);
  puVar1 = (undefined8 *)FUN_142f6b2f0(&local_res10,&local_38);
  *param_3 = *puVar1;
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f75990 FUN_142f75990 body=143 status=ok
// SIG undefined FUN_142f75990(void)

void FUN_142f75990(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  puVar1 = &local_res10;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142f6b890(param_1,puVar1);
  return;
}



// FUNCTION 142f75a20 FUN_142f75a20 body=254 status=ok
// SIG undefined FUN_142f75a20(void)

void FUN_142f75a20(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_28 = 0;
  uStack_20 = 0;
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
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_10 = (undefined4)uStack_20;
  uStack_c = uStack_20._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142f6b950(local_res20,&local_18,local_res10[0]);
  return;
}



// FUNCTION 142f75b20 FUN_142f75b20 body=254 status=ok
// SIG undefined FUN_142f75b20(void)

void FUN_142f75b20(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = 0;
  uStack_20 = 0;
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
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_10 = (undefined4)uStack_20;
  uStack_c = uStack_20._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142f6bad0(&local_18,local_res20,local_res10[0]);
  return;
}



// FUNCTION 142f75c60 FUN_142f75c60 body=257 status=ok
// SIG undefined FUN_142f75c60(void)

void FUN_142f75c60(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
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
  FUN_142f6cee0(param_1,local_18[0],local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 142f75d70 FUN_142f75d70 body=175 status=ok
// SIG undefined FUN_142f75d70(void)

void FUN_142f75d70(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
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
  FUN_142f6d9a0(local_res20,local_res10[0]);
  return;
}



// FUNCTION 142f75e20 FUN_142f75e20 body=112 status=ok
// SIG undefined FUN_142f75e20(void)

void FUN_142f75e20(undefined8 param_1,longlong param_2)

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
  FUN_142f6daf0(local_res10[0]);
  return;
}



// FUNCTION 142f75e90 FUN_142f75e90 body=112 status=ok
// SIG undefined FUN_142f75e90(void)

void FUN_142f75e90(undefined8 param_1,longlong param_2)

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
  FUN_142f6dba0(local_res10[0]);
  return;
}



// FUNCTION 142f75f00 FUN_142f75f00 body=128 status=ok
// SIG undefined FUN_142f75f00(void)

void FUN_142f75f00(undefined8 param_1,longlong param_2)

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
  FUN_142f6de50(param_1,local_res10);
  return;
}



// FUNCTION 142f75f80 FUN_142f75f80 body=269 status=ok
// SIG undefined FUN_142f75f80(void)

void FUN_142f75f80(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
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
  local_60 = 0;
  local_68 = &DAT_1441d2800;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_38 = &DAT_1441d2800;
  local_30 = local_60;
  local_18 = local_48;
  local_14 = local_44;
  local_10 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_28 = (undefined4)local_58;
  uStack_24 = local_58._4_4_;
  uStack_20 = (undefined4)uStack_50;
  uStack_1c = uStack_50._4_4_;
  FUN_142f6e670(local_res10,&local_38);
  return;
}



// FUNCTION 142f76090 FUN_142f76090 body=255 status=ok
// SIG undefined FUN_142f76090(void)

void FUN_142f76090(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
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
  FUN_142f6f170(param_1,local_18[0],local_res20,local_res10[0]);
  return;
}



// FUNCTION 142f76190 FUN_142f76190 body=162 status=ok
// SIG undefined FUN_142f76190(void)

longlong FUN_142f76190(void)

{
  if (DAT_146b43878 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionLocationData",&DAT_146b43878,FUN_142f79670,0x68,
                  0x10000000,0,L"Engine",FUN_142f77490,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142f47470,&LAB_140447700,0);
  }
  return DAT_146b43878;
}



// FUNCTION 142f76240 FUN_142f76240 body=53 status=ok
// SIG undefined FUN_142f76240(void)

void FUN_142f76240(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1459fb4c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f76280 FUN_142f76280 body=47 status=ok
// SIG undefined FUN_142f76280(void)

longlong FUN_142f76280(void)

{
  if (DAT_146b438c8 == 0) {
    FUN_141786440(&DAT_146b438c8,&PTR_GetPrivateStaticClass_1459f5220);
  }
  return DAT_146b438c8;
}



// FUNCTION 142f762b0 FUN_142f762b0 body=47 status=ok
// SIG undefined FUN_142f762b0(void)

longlong FUN_142f762b0(void)

{
  if (DAT_146b438c0 == 0) {
    FUN_141786a30(&DAT_146b438c0,&PTR_FUN_146769160);
  }
  return DAT_146b438c0;
}



// FUNCTION 142f762e0 FUN_142f762e0 body=53 status=ok
// SIG undefined FUN_142f762e0(void)

void FUN_142f762e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &PTR_FUN_1459fc170;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f76330 FUN_142f76330 body=47 status=ok
// SIG undefined FUN_142f76330(void)

longlong FUN_142f76330(void)

{
  if (DAT_146b43870 == 0) {
    FUN_141786440(&DAT_146b43870,&PTR_FUN_1459f5b40);
  }
  return DAT_146b43870;
}



// FUNCTION 142f76360 FUN_142f76360 body=47 status=ok
// SIG undefined FUN_142f76360(void)

longlong FUN_142f76360(void)

{
  if (DAT_146b43860 == 0) {
    FUN_141786a30(&DAT_146b43860,&PTR_FUN_146767eb0);
  }
  return DAT_146b43860;
}



// FUNCTION 142f76390 FUN_142f76390 body=47 status=ok
// SIG undefined FUN_142f76390(void)

longlong FUN_142f76390(void)

{
  if (DAT_146b43868 == 0) {
    FUN_141786a30(&DAT_146b43868,&PTR_FUN_146767f60);
  }
  return DAT_146b43868;
}



// FUNCTION 142f763c0 FUN_142f763c0 body=53 status=ok
// SIG undefined FUN_142f763c0(void)

void FUN_142f763c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_1459fc288;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f76400 FUN_142f76400 body=151 status=ok
// SIG undefined FUN_142f76400(void)

longlong FUN_142f76400(void)

{
  if (DAT_146b438e0 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionObjectiveSet",&DAT_146b438e0,FUN_140447710,0x170,
                  0x10000000,0,L"Engine",FUN_142f775b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b438e0;
}



// FUNCTION 142f764a0 FUN_142f764a0 body=53 status=ok
// SIG undefined FUN_142f764a0(void)

void FUN_142f764a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1459faee8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f76500 FUN_142f76500 body=162 status=ok
// SIG undefined FUN_142f76500(void)

longlong FUN_142f76500(void)

{
  if (DAT_146b439e8 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionTrackerBase",&DAT_146b439e8,FUN_140447710,0x4a0,
                  0x10000008,0,L"Engine",&LAB_142f77450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146b439e8;
}



// FUNCTION 142f765b0 FUN_142f765b0 body=53 status=ok
// SIG undefined FUN_142f765b0(void)

void FUN_142f765b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_1459fc3a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f765f0 FUN_142f765f0 body=53 status=ok
// SIG undefined FUN_142f765f0(void)

void FUN_142f765f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_1459fb868;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f76630 FUN_142f76630 body=53 status=ok
// SIG undefined FUN_142f76630(void)

void FUN_142f76630(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1459fc4b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f76670 FUN_142f76670 body=53 status=ok
// SIG undefined FUN_142f76670(void)

void FUN_142f76670(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1459fc5d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f766b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUserObjectListEntry::GetPrivateStaticClass(void)

{
  if (DAT_146b43908 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionObjectiveSetReferenceInterface",&DAT_146b43908,
                  StaticRegisterNativesUUserObjectListEntry,0x28,0x10004001,0,L"Engine",
                  FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b43908;
}



// FUNCTION 142f76760 FUN_142f76760 body=53 status=ok
// SIG undefined FUN_142f76760(void)

void FUN_142f76760(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1459fc6e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f767a0 FUN_142f767a0 body=47 status=ok
// SIG undefined FUN_142f767a0(void)

longlong FUN_142f767a0(void)

{
  if (DAT_146b43900 == 0) {
    FUN_141786440(&DAT_146b43900,&PTR_GetPrivateStaticClass_1459f67a0);
  }
  return DAT_146b43900;
}



// FUNCTION 142f767d0 FUN_142f767d0 body=47 status=ok
// SIG undefined FUN_142f767d0(void)

longlong FUN_142f767d0(void)

{
  if (DAT_146b438f8 == 0) {
    FUN_141786a30(&DAT_146b438f8,&PTR_FUN_1467697a0);
  }
  return DAT_146b438f8;
}



// FUNCTION 142f76810 FUN_142f76810 body=53 status=ok
// SIG undefined FUN_142f76810(void)

void FUN_142f76810(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &PTR_FUN_1459fc800;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f76850 FUN_142f76850 body=53 status=ok
// SIG undefined FUN_142f76850(void)

void FUN_142f76850(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &PTR_FUN_1459fc918;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f768a0 FUN_142f768a0 body=162 status=ok
// SIG undefined FUN_142f768a0(void)

longlong FUN_142f768a0(void)

{
  if (DAT_146b43958 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionObserverInterface",&DAT_146b43958,FUN_140447710,
                  0x28,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b43958;
}



// FUNCTION 142f76950 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBlindWidget::GetPrivateStaticClass(void)

{
  if (DAT_146b43948 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionObserverComponent",&DAT_146b43948,
                  StaticRegisterNativesUBlindWidget,0x208,0x10000000,0,L"Engine",FUN_142f776d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b43948;
}



// FUNCTION 142f76a00 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBlendableInterface::GetPrivateStaticClass(void)

{
  if (DAT_146b43838 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionIconInterface",&DAT_146b43838,FUN_140447710,0x28,
                  0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b43838;
}



// FUNCTION 142f76ab0 FUN_142f76ab0 body=47 status=ok
// SIG undefined FUN_142f76ab0(void)

longlong FUN_142f76ab0(void)

{
  if (DAT_146b43940 == 0) {
    FUN_141786440(&DAT_146b43940,&PTR_GetPrivateStaticClass_1459f7960);
  }
  return DAT_146b43940;
}



// FUNCTION 142f76ae0 FUN_142f76ae0 body=47 status=ok
// SIG undefined FUN_142f76ae0(void)

longlong FUN_142f76ae0(void)

{
  if (DAT_146b43930 == 0) {
    FUN_141786a30(&DAT_146b43930,&PTR_FUN_146769ce0);
  }
  return DAT_146b43930;
}



// FUNCTION 142f76b10 FUN_142f76b10 body=47 status=ok
// SIG undefined FUN_142f76b10(void)

longlong FUN_142f76b10(void)

{
  if (DAT_146b43938 == 0) {
    FUN_141786a30(&DAT_146b43938,&PTR_FUN_146769da0);
  }
  return DAT_146b43938;
}



// FUNCTION 142f76b50 FUN_142f76b50 body=47 status=ok
// SIG undefined FUN_142f76b50(void)

longlong FUN_142f76b50(void)

{
  if (DAT_146b43950 == 0) {
    FUN_141786440(&DAT_146b43950,&PTR_FUN_1459f7bc0);
  }
  return DAT_146b43950;
}



// FUNCTION 142f76b90 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUserObjectListEntry::GetPrivateStaticClass(void)

{
  if (DAT_146b43970 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionObserverPlayerInterface",&DAT_146b43970,
                  StaticRegisterNativesUUserObjectListEntry,0x28,0x10004001,0,L"Engine",
                  &LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142f768a0,&LAB_140447700,0);
  }
  return DAT_146b43970;
}



// FUNCTION 142f76c40 FUN_142f76c40 body=47 status=ok
// SIG undefined FUN_142f76c40(void)

longlong FUN_142f76c40(void)

{
  if (DAT_146b43968 == 0) {
    FUN_141786440(&DAT_146b43968,&PTR_GetPrivateStaticClass_1459f7d60);
  }
  return DAT_146b43968;
}



// FUNCTION 142f76c70 FUN_142f76c70 body=47 status=ok
// SIG undefined FUN_142f76c70(void)

longlong FUN_142f76c70(void)

{
  if (DAT_146b43960 == 0) {
    FUN_141786a30(&DAT_146b43960,&PTR_FUN_14676a0a0);
  }
  return DAT_146b43960;
}



// FUNCTION 142f76cb0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UNativeUserListEntry::GetPrivateStaticClass(void)

{
  if (DAT_146b439a0 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionReferenceInterface",&DAT_146b439a0,
                  StaticRegisterNativesUNativeUserListEntry,0x28,0x10004001,0,L"Engine",
                  &LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b439a0;
}



// FUNCTION 142f76d60 FUN_142f76d60 body=151 status=ok
// SIG undefined FUN_142f76d60(void)

longlong FUN_142f76d60(void)

{
  if (DAT_146b43980 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionPhase",&DAT_146b43980,FUN_140447710,0x40,0x10000000
                  ,0,L"Engine",&LAB_142f77790,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b43980;
}



// FUNCTION 142f76e00 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUserObjectListEntry::GetPrivateStaticClass(void)

{
  if (DAT_146b438d0 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionObjectiveReferenceInterface",&DAT_146b438d0,
                  StaticRegisterNativesUUserObjectListEntry,0x28,0x10004001,0,L"Engine",
                  FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b438d0;
}



// FUNCTION 142f76ec0 FUN_142f76ec0 body=47 status=ok
// SIG undefined FUN_142f76ec0(void)

longlong FUN_142f76ec0(void)

{
  if (DAT_146b43998 == 0) {
    FUN_141786440(&DAT_146b43998,&PTR_GetPrivateStaticClass_1459f8150);
  }
  return DAT_146b43998;
}



// FUNCTION 142f76ef0 FUN_142f76ef0 body=47 status=ok
// SIG undefined FUN_142f76ef0(void)

longlong FUN_142f76ef0(void)

{
  if (DAT_146b43988 == 0) {
    FUN_141786a30(&DAT_146b43988,&PTR_FUN_14676a1a0);
  }
  return DAT_146b43988;
}



// FUNCTION 142f76f20 FUN_142f76f20 body=47 status=ok
// SIG undefined FUN_142f76f20(void)

longlong FUN_142f76f20(void)

{
  if (DAT_146b43990 == 0) {
    FUN_141786a30(&DAT_146b43990,&PTR_FUN_14676a260);
  }
  return DAT_146b43990;
}



// FUNCTION 142f76f60 FUN_142f76f60 body=47 status=ok
// SIG undefined FUN_142f76f60(void)

longlong FUN_142f76f60(void)

{
  if (DAT_146b43820 == 0) {
    FUN_141786440(&DAT_146b43820,&PTR_StaticClass_1459f8d40);
  }
  return DAT_146b43820;
}



// FUNCTION 142f76f90 FUN_142f76f90 body=47 status=ok
// SIG undefined FUN_142f76f90(void)

longlong FUN_142f76f90(void)

{
  if (DAT_146b437e8 == 0) {
    FUN_141786a30(&DAT_146b437e8,&PTR_FUN_146767490);
  }
  return DAT_146b437e8;
}



// FUNCTION 142f76fc0 FUN_142f76fc0 body=47 status=ok
// SIG undefined FUN_142f76fc0(void)

longlong FUN_142f76fc0(void)

{
  if (DAT_146b437f0 == 0) {
    FUN_141786a30(&DAT_146b437f0,&PTR_FUN_146767540);
  }
  return DAT_146b437f0;
}



// FUNCTION 142f76ff0 FUN_142f76ff0 body=47 status=ok
// SIG undefined FUN_142f76ff0(void)

longlong FUN_142f76ff0(void)

{
  if (DAT_146b437f8 == 0) {
    FUN_141786a30(&DAT_146b437f8,&PTR_FUN_1467675f0);
  }
  return DAT_146b437f8;
}



// FUNCTION 142f77020 FUN_142f77020 body=47 status=ok
// SIG undefined FUN_142f77020(void)

longlong FUN_142f77020(void)

{
  if (DAT_146b43800 == 0) {
    FUN_141786a30(&DAT_146b43800,&PTR_FUN_1467676a0);
  }
  return DAT_146b43800;
}



// FUNCTION 142f77050 FUN_142f77050 body=47 status=ok
// SIG undefined FUN_142f77050(void)

longlong FUN_142f77050(void)

{
  if (DAT_146b43808 == 0) {
    FUN_141786a30(&DAT_146b43808,&PTR_FUN_146767760);
  }
  return DAT_146b43808;
}



// FUNCTION 142f77080 FUN_142f77080 body=47 status=ok
// SIG undefined FUN_142f77080(void)

longlong FUN_142f77080(void)

{
  if (DAT_146b43810 == 0) {
    FUN_141786a30(&DAT_146b43810,&PTR_FUN_146767850);
  }
  return DAT_146b43810;
}



// FUNCTION 142f770b0 FUN_142f770b0 body=47 status=ok
// SIG undefined FUN_142f770b0(void)

longlong FUN_142f770b0(void)

{
  if (DAT_146b43818 == 0) {
    FUN_141786a30(&DAT_146b43818,&PTR_FUN_1467678d0);
  }
  return DAT_146b43818;
}



// FUNCTION 142f77100 FUN_142f77100 body=47 status=ok
// SIG undefined FUN_142f77100(void)

longlong FUN_142f77100(void)

{
  if (DAT_146b439d0 == 0) {
    FUN_141786440(&DAT_146b439d0,&PTR_thunk_FUN_142f79140_1459f89f0);
  }
  return DAT_146b439d0;
}



// FUNCTION 142f77130 FUN_142f77130 body=47 status=ok
// SIG undefined FUN_142f77130(void)

longlong FUN_142f77130(void)

{
  if (DAT_146b439e0 == 0) {
    FUN_141786440(&DAT_146b439e0,&PTR_FUN_1459f90c0);
  }
  return DAT_146b439e0;
}



// FUNCTION 142f77160 FUN_142f77160 body=47 status=ok
// SIG undefined FUN_142f77160(void)

longlong FUN_142f77160(void)

{
  if (DAT_146b439b8 == 0) {
    FUN_141786a30(&DAT_146b439b8,&PTR_FUN_14676a2a0);
  }
  return DAT_146b439b8;
}



// FUNCTION 142f77190 FUN_142f77190 body=47 status=ok
// SIG undefined FUN_142f77190(void)

longlong FUN_142f77190(void)

{
  if (DAT_146b439c0 == 0) {
    FUN_141786a30(&DAT_146b439c0,&PTR_FUN_14676a2e0);
  }
  return DAT_146b439c0;
}



// FUNCTION 142f771c0 FUN_142f771c0 body=47 status=ok
// SIG undefined FUN_142f771c0(void)

longlong FUN_142f771c0(void)

{
  if (DAT_146b439c8 == 0) {
    FUN_141786a30(&DAT_146b439c8,&PTR_FUN_14676a3a0);
  }
  return DAT_146b439c8;
}



// FUNCTION 142f771f0 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UForceFeedbackAttenuation::StaticClass(void)

{
  if (DAT_146b43888 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionObjective",&DAT_146b43888,FUN_140447710,0xd8,
                  0x10000000,0,L"Engine",FUN_142f77520,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b43888;
}



// FUNCTION 142f772d0 FUN_142f772d0 body=162 status=ok
// SIG undefined FUN_142f772d0(void)

longlong FUN_142f772d0(void)

{
  if (DAT_146b43848 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionIconObserverInterface",&DAT_146b43848,FUN_140447710
                  ,0x28,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b43848;
}



// FUNCTION 142f77380 FUN_142f77380 body=47 status=ok
// SIG undefined FUN_142f77380(void)

longlong FUN_142f77380(void)

{
  if (DAT_146b438b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b438b8,&PTR_Z_Construct_UPackage__Script_Engine_1467690a0);
  }
  return DAT_146b438b8;
}



// FUNCTION 142f773b0 FUN_142f773b0 body=53 status=ok
// SIG undefined FUN_142f773b0(void)

void FUN_142f773b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1459fb298;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f77400 FUN_142f77400 body=53 status=ok
// SIG undefined FUN_142f77400(void)

void FUN_142f77400(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_1459fb3b0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f77490 FUN_142f77490 body=135 status=ok
// SIG undefined FUN_142f77490(void)

void FUN_142f77490(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459fac60;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    if (0x7fffffff < *(uint *)((longlong)puVar1 + 0x54)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 9,0);
    }
    if ((undefined2 *)puVar1[9] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[9] = 0;
    }
    *(undefined4 *)(puVar1 + 7) = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
  }
  return;
}



// FUNCTION 142f77520 FUN_142f77520 body=129 status=ok
// SIG undefined FUN_142f77520(void)

void FUN_142f77520(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459fb020;
    uVar2 = FUN_1404b03b0();
    FText::FText(puVar1 + 7,uVar2);
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x84) = 0;
    puVar1[0x12] = 0;
    *(undefined4 *)(puVar1 + 0x13) = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
  }
  return;
}



// FUNCTION 142f775b0 FUN_142f775b0 body=283 status=ok
// SIG undefined FUN_142f775b0(void)

void FUN_142f775b0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459fb5f0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    if (0x7fffffff < *(uint *)((longlong)puVar1 + 0x5c)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 10,0);
    }
    if ((undefined2 *)puVar1[10] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[10] = 0;
    }
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x7a) = 1;
    uVar2 = FUN_1404b03b0();
    FText::FText(puVar1 + 0x10,uVar2);
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xcc) = 0;
    puVar1[0x1b] = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    uVar2 = FUN_1404b03b0();
    FText::FText(puVar1 + 0x1d,uVar2);
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x134) = 0;
    *(undefined4 *)(puVar1 + 0x26) = 0xffffffff;
    puVar1[0x28] = 0;
    *(undefined4 *)(puVar1 + 0x29) = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
  }
  return;
}



// FUNCTION 142f776d0 FUN_142f776d0 body=184 status=ok
// SIG undefined FUN_142f776d0(void)

void FUN_142f776d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142326e40(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459fb990;
    puVar1[5] = &PTR_LAB_1459fbd88;
    puVar1[0x2f] = &PTR_LAB_1459fbdb8;
    puVar1[0x30] = &PTR_FUN_1459fbe18;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    puVar1[0x35] = 0;
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x3e] = 0;
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
  }
  return;
}



// FUNCTION 142f777b0 FUN_142f777b0 body=108 status=ok
// SIG undefined FUN_142f777b0(void)

longlong FUN_142f777b0(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x50) = 1;
  FWeakObjectPtr::operator=(param_1 + 0x58,0);
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_1405f0e70(param_1 + 0x58,0,0);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return param_1;
}



// FUNCTION 142f77820 FUN_142f77820 body=95 status=ok
// SIG undefined FUN_142f77820(void)

void FUN_142f77820(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142f77880 FUN_142f77880 body=109 status=ok
// SIG undefined FUN_142f77880(void)

void FUN_142f77880(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
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
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142f778f0 FUN_142f778f0 body=207 status=ok
// SIG undefined FUN_142f778f0(void)

longlong * FUN_142f778f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 != param_2) {
    puVar4 = (undefined8 *)*param_1;
    for (iVar3 = (int)param_1[1]; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = &PTR_FUN_1441d26b8;
      puVar4 = puVar4 + 6;
    }
    iVar3 = (int)param_2[1];
    lVar1 = *param_2;
    *(int *)(param_1 + 1) = iVar3;
    if ((iVar3 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1,iVar3);
      if (iVar3 != 0) {
        puVar4 = (undefined8 *)*param_1;
        puVar5 = (undefined8 *)(lVar1 + 8);
        do {
          *puVar4 = &PTR_FUN_1441d26b8;
          puVar4[1] = *puVar5;
          uVar2 = puVar5[2];
          puVar4[2] = puVar5[1];
          puVar4[3] = uVar2;
          *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar5 + 3);
          *(undefined4 *)((longlong)puVar4 + 0x24) = *(undefined4 *)((longlong)puVar5 + 0x1c);
          *puVar4 = &DAT_1441d2800;
          puVar4[5] = puVar5[4];
          iVar3 = iVar3 + -1;
          puVar4 = puVar4 + 6;
          puVar5 = puVar5 + 6;
        } while (iVar3 != 0);
      }
    }
  }
  return param_1;
}



// FUNCTION 142f779c0 FUN_142f779c0 body=408 status=ok
// SIG undefined FUN_142f779c0(void)

longlong * FUN_142f779c0(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined1 local_58 [32];
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar8 = (int)param_1[1];
  if (iVar8 != 0) {
    plVar6 = (longlong *)(*param_1 + 0x18);
    do {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 9;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar8 = (int)param_2[1];
  lVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar8;
  if ((iVar8 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy(param_1,iVar8);
    puVar10 = (undefined4 *)*param_1;
    if (iVar8 != 0) {
      puVar9 = (undefined8 *)(puVar10 + 8);
      puVar7 = (undefined4 *)(lVar2 + 4);
      do {
        puVar9[-1] = 0;
        *puVar9 = 0;
        *puVar10 = 0xffffffff;
        *(undefined4 *)((longlong)puVar9 + -0x1c) = 0;
        puVar9[-2] = 0;
        *(undefined4 *)puVar9 = 0;
        if (0x7fffffff < *(uint *)((longlong)puVar9 + 4)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar9 + -1,0);
        }
        if ((undefined2 *)puVar9[-1] != (undefined2 *)0x0) {
          *(undefined2 *)puVar9[-1] = 0;
        }
        *(undefined4 *)(puVar9 + -3) = 0;
        *puVar10 = puVar7[-1];
        *(undefined4 *)((longlong)puVar9 + -0x1c) = *puVar7;
        *(undefined4 *)(puVar9 + -3) = puVar7[1];
        FSoftObjectPath::FSoftObjectPath(local_58,puVar7 + 3);
        FSoftObjectPath::operator=(puVar9 + -2);
        puVar10 = puVar10 + 0x12;
        puVar9[1] = *(undefined8 *)(puVar7 + 9);
        uVar3 = puVar7[0xc];
        uVar4 = puVar7[0xd];
        uVar5 = puVar7[0xe];
        *(undefined4 *)(puVar9 + 2) = puVar7[0xb];
        *(undefined4 *)((longlong)puVar9 + 0x14) = uVar3;
        *(undefined4 *)(puVar9 + 3) = uVar4;
        *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar5;
        *(undefined4 *)(puVar9 + 4) = puVar7[0xf];
        puVar1 = puVar7 + 0x10;
        puVar7 = puVar7 + 0x12;
        *(undefined4 *)((longlong)puVar9 + 0x24) = *puVar1;
        puVar9 = puVar9 + 9;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return param_1;
}



// FUNCTION 142f77b80 FUN_142f77b80 body=79 status=ok
// SIG undefined FUN_142f77b80(void)

longlong FUN_142f77b80(longlong param_1,ulonglong param_2)

{
  FUN_142f77820(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142f77bd0 FUN_142f77bd0 body=64 status=ok
// SIG undefined FUN_142f77bd0(void)

longlong FUN_142f77bd0(longlong param_1,ulonglong param_2)

{
  FUN_140bff340(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 142f77c10 FUN_142f77c10 body=125 status=ok
// SIG undefined FUN_142f77c10(void)

longlong FUN_142f77c10(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FMemory::Free();
  }
  FUN_140bff340(param_1 + 0xe8);
  FUN_140bff340(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 142f77c90 FUN_142f77c90 body=193 status=ok
// SIG undefined FUN_142f77c90(void)

longlong FUN_142f77c90(longlong param_1,ulonglong param_2)

{
  FUN_1414bf8c0(param_1 + 0x1f8);
  FUN_142f77880(param_1 + 0x1e8);
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x180) = &PTR_FUN_144a92d00;
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1441b3948;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x208);
  }
  return param_1;
}



// FUNCTION 142f77d60 FUN_142f77d60 body=95 status=ok
// SIG undefined FUN_142f77d60(void)

void FUN_142f77d60(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop((void *)((longlong)param_2 + 0x14),0,0x5c);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FWeakObjectPtr::operator=(param_2 + 4,0);
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined1 *)(param_2 + 0xc) = 0;
  param_2[0xd] = 0;
  return;
}



// FUNCTION 142f77dc0 Construct body=36 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FLoadableModAsset>::Construct(undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x58);
  FUN_140aecb80(param_2);
  return;
}



// FUNCTION 142f77e60 FUN_142f77e60 body=36 status=ok
// SIG undefined FUN_142f77e60(void)

void FUN_142f77e60(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x50);
  FUN_140aecb80(param_2);
  return;
}



// FUNCTION 142f77ee0 Construct body=38 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FInspectInfo>::Construct(undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x80);
  FUN_142f777b0(param_2);
  return;
}



// FUNCTION 142f77f80 FUN_142f77f80 body=208 status=ok
// SIG undefined FUN_142f77f80(void)

undefined8 FUN_142f77f80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar3 = (undefined8 *)(param_2 + 8);
    do {
      puVar3[-1] = *(undefined8 *)((longlong)puVar3 + param_3 + -8);
      *puVar3 = *(undefined8 *)(param_3 + (longlong)puVar3);
      puVar1 = (undefined8 *)(param_3 + 8 + (longlong)puVar3);
      uVar2 = puVar1[1];
      puVar3[1] = *puVar1;
      puVar3[2] = uVar2;
      *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_3 + 0x18 + (longlong)puVar3);
      *(undefined4 *)((longlong)puVar3 + 0x1c) = *(undefined4 *)(param_3 + 0x1c + (longlong)puVar3);
      puVar3[4] = *(undefined8 *)(param_3 + 0x20 + (longlong)puVar3);
      *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(param_3 + 0x28 + (longlong)puVar3);
      *(undefined4 *)((longlong)puVar3 + 0x2c) = *(undefined4 *)(param_3 + 0x2c + (longlong)puVar3);
      puVar3[6] = *(undefined8 *)(param_3 + 0x30 + (longlong)puVar3);
      puVar3[7] = *(undefined8 *)(param_3 + 0x38 + (longlong)puVar3);
      TArray<FName,FDefaultAllocator>::operator=(puVar3 + 8,param_3 + 0x40 + (longlong)puVar3);
      *(undefined4 *)(puVar3 + 10) = *(undefined4 *)(param_3 + 0x50 + (longlong)puVar3);
      *(undefined4 *)((longlong)puVar3 + 0x54) = *(undefined4 *)((longlong)puVar3 + param_3 + 0x54);
      *(undefined1 *)(puVar3 + 0xb) = *(undefined1 *)((longlong)puVar3 + param_3 + 0x58);
      puVar3[0xc] = *(undefined8 *)((longlong)puVar3 + param_3 + 0x60);
      puVar3 = puVar3 + 0xe;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f78050 FUN_142f78050 body=132 status=ok
// SIG undefined FUN_142f78050(void)

undefined8 FUN_142f78050(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 local_28 [32];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar2 = (undefined4 *)(param_2 + 8);
    do {
      puVar2[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar2);
      puVar2[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar2);
      *puVar2 = *(undefined4 *)(param_3 + (longlong)puVar2);
      uVar1 = FSoftObjectPath::FSoftObjectPath(local_28,param_3 + 8 + (longlong)puVar2);
      FSoftObjectPath::operator=(puVar2 + 2,uVar1);
      *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(param_3 + 0x20 + (longlong)puVar2);
      puVar2 = puVar2 + 0xc;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f780e0 FUN_142f780e0 body=148 status=ok
// SIG undefined FUN_142f780e0(void)

undefined8 FUN_142f780e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined1 local_28 [32];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar6 = (undefined4 *)(param_2 + 0x2c);
    do {
      *(undefined8 *)(puVar6 + -9) = *(undefined8 *)(param_3 + -0x24 + (longlong)puVar6);
      puVar1 = (undefined4 *)(param_3 + -0x1c + (longlong)puVar6);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      puVar6[-7] = *puVar1;
      puVar6[-6] = uVar2;
      puVar6[-5] = uVar3;
      puVar6[-4] = uVar4;
      puVar6[-3] = *(undefined4 *)(param_3 + -0xc + (longlong)puVar6);
      puVar6[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar6);
      puVar6[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar6);
      *puVar6 = *(undefined4 *)(param_3 + (longlong)puVar6);
      puVar6[1] = *(undefined4 *)(param_3 + 4 + (longlong)puVar6);
      uVar5 = FSoftObjectPath::FSoftObjectPath(local_28,param_3 + 0xc + (longlong)puVar6);
      FSoftObjectPath::operator=(puVar6 + 3,uVar5);
      *(undefined1 *)(puVar6 + 9) = *(undefined1 *)(param_3 + 0x24 + (longlong)puVar6);
      puVar6 = puVar6 + 0x16;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f78210 FUN_142f78210 body=140 status=ok
// SIG undefined FUN_142f78210(void)

undefined8 FUN_142f78210(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined1 local_28 [32];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar6 = (undefined4 *)(param_2 + 0x2c);
    do {
      *(undefined8 *)(puVar6 + -9) = *(undefined8 *)(param_3 + -0x24 + (longlong)puVar6);
      puVar1 = (undefined4 *)(param_3 + -0x1c + (longlong)puVar6);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      puVar6[-7] = *puVar1;
      puVar6[-6] = uVar2;
      puVar6[-5] = uVar3;
      puVar6[-4] = uVar4;
      puVar6[-3] = *(undefined4 *)(param_3 + -0xc + (longlong)puVar6);
      puVar6[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar6);
      puVar6[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar6);
      *puVar6 = *(undefined4 *)(param_3 + (longlong)puVar6);
      puVar6[1] = *(undefined4 *)(param_3 + 4 + (longlong)puVar6);
      uVar5 = FSoftObjectPath::FSoftObjectPath(local_28,param_3 + 0xc + (longlong)puVar6);
      FSoftObjectPath::operator=(puVar6 + 3,uVar5);
      puVar6 = puVar6 + 0x14;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f782a0 FUN_142f782a0 body=155 status=ok
// SIG undefined FUN_142f782a0(void)

undefined8 FUN_142f782a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined1 local_28 [32];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar6 = (undefined4 *)(param_2 + 4);
    do {
      puVar6[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar6);
      *puVar6 = *(undefined4 *)(param_3 + (longlong)puVar6);
      puVar6[1] = *(undefined4 *)(param_3 + 4 + (longlong)puVar6);
      uVar5 = FSoftObjectPath::FSoftObjectPath(local_28,param_3 + 0xc + (longlong)puVar6);
      FSoftObjectPath::operator=(puVar6 + 3,uVar5);
      *(undefined8 *)(puVar6 + 9) = *(undefined8 *)(param_3 + 0x24 + (longlong)puVar6);
      puVar1 = (undefined4 *)(param_3 + 0x2c + (longlong)puVar6);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      puVar6[0xb] = *puVar1;
      puVar6[0xc] = uVar2;
      puVar6[0xd] = uVar3;
      puVar6[0xe] = uVar4;
      puVar6[0xf] = *(undefined4 *)(param_3 + 0x3c + (longlong)puVar6);
      puVar6[0x10] = *(undefined4 *)(param_3 + 0x40 + (longlong)puVar6);
      puVar6 = puVar6 + 0x12;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f78340 FUN_142f78340 body=116 status=ok
// SIG undefined FUN_142f78340(void)

undefined8 FUN_142f78340(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x10);
    do {
      puVar1[-2] = *(undefined8 *)(param_3 + -0x10 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + -1) = *(undefined1 *)(param_3 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      TMulticastScriptDelegate<FWeakObjectPtr>::operator=(puVar1 + 1,param_3 + 8 + (longlong)puVar1)
      ;
      TMulticastScriptDelegate<FWeakObjectPtr>::operator=
                (puVar1 + 3,param_3 + 0x18 + (longlong)puVar1);
      puVar1 = puVar1 + 7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f783c0 FUN_142f783c0 body=391 status=ok
// SIG undefined FUN_142f783c0(void)

undefined8 FUN_142f783c0(undefined8 param_1,longlong *param_2,longlong *param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar6 = (int)param_2[1];
      if (iVar6 != 0) {
        plVar4 = (longlong *)(*param_2 + 0x10);
        do {
          if (*plVar4 != 0) {
            FMemory::Free();
          }
          plVar4 = plVar4 + 6;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar6 = (int)param_3[1];
      lVar3 = *param_3;
      *(int *)(param_2 + 1) = iVar6;
      if ((iVar6 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_2,iVar6);
        puVar5 = (undefined8 *)*param_2;
        if (iVar6 != 0) {
          puVar7 = (undefined1 *)(lVar3 + 8);
          do {
            *puVar5 = *(undefined8 *)(puVar7 + -8);
            *(undefined1 *)(puVar5 + 1) = *puVar7;
            puVar5[2] = 0;
            iVar2 = *(int *)(puVar7 + 0x10);
            _Src = *(void **)(puVar7 + 8);
            *(int *)(puVar5 + 3) = iVar2;
            if (iVar2 == 0) {
              *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
            }
            else {
              TArray<int,FDefaultAllocator>::ResizeForCopy(puVar5 + 2,iVar2,0);
              _guard_xfg_dispatch_icall_nop((void *)puVar5[2],_Src,(longlong)iVar2 << 2);
            }
            puVar5[4] = *(undefined8 *)(puVar7 + 0x18);
            *(undefined1 *)(puVar5 + 5) = puVar7[0x20];
            *(undefined1 *)((longlong)puVar5 + 0x29) = puVar7[0x21];
            puVar1 = puVar7 + 0x22;
            puVar7 = puVar7 + 0x30;
            *(undefined1 *)((longlong)puVar5 + 0x2a) = *puVar1;
            puVar5 = puVar5 + 6;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
    }
    plVar4 = param_3 + 2;
    param_3 = param_3 + 3;
    param_2[2] = *plVar4;
    param_2 = param_2 + 3;
  }
  return 1;
}



// FUNCTION 142f78550 FUN_142f78550 body=377 status=ok
// SIG undefined FUN_142f78550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142f78550(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40;
  longlong *plStack_38;
  longlong local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (param_4 != 0) {
    plVar6 = (longlong *)(param_3 + 0x78);
    do {
      *param_2 = plVar6[-0xf];
      param_2[1] = plVar6[-0xe];
      local_48 = (undefined1)plVar6[-0xd];
      *(undefined1 *)(param_2 + 2) = local_48;
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2 + 3,plVar6 + -0xc);
      param_2[5] = plVar6[-10];
      TArray<FName,FDefaultAllocator>::operator=(param_2 + 6,plVar6 + -9);
      TArray<FName,FDefaultAllocator>::operator=(param_2 + 8,plVar6 + -7);
      *(char *)(param_2 + 10) = (char)plVar6[-5];
      uVar5 = FWeakObjectPtr::Get(plVar6 + -4);
      FUN_1405f0e70(param_2 + 0xb,uVar5,plVar6[-3]);
      *(char *)(param_2 + 0xd) = (char)plVar6[-2];
      *(undefined1 *)((longlong)param_2 + 0x69) = *(undefined1 *)((longlong)plVar6 + -0xf);
      *(undefined1 *)((longlong)param_2 + 0x6a) = *(undefined1 *)((longlong)plVar6 + -0xe);
      plVar7 = param_2 + 0xe;
      plVar3 = (longlong *)*plVar6;
      lVar4 = plVar6[-1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_40 = lVar4;
      plStack_38 = plVar3;
      if (&local_40 != plVar7) {
        local_40 = *plVar7;
        plStack_38 = (longlong *)param_2[0xf];
        *plVar7 = lVar4;
        param_2[0xf] = (longlong)plVar3;
        local_30 = lVar4;
        plStack_28 = plVar3;
      }
      plVar3 = plStack_38;
      if (plStack_38 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_38 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_38)(plStack_38);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plStack_38 + 8))(plStack_38,1);
          }
        }
      }
      plVar6 = plVar6 + 0x10;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x10;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f786d0 FUN_142f786d0 body=137 status=ok
// SIG undefined FUN_142f786d0(void)

undefined8 FUN_142f786d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10 + param_2);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8 + param_2);
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2,param_3 + param_2);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10 + param_2);
      *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18 + param_2);
      *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)(param_3 + 0x19 + param_2);
      *(undefined1 *)(param_2 + 0x1a) = *(undefined1 *)(param_3 + 0x1a + param_2);
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f78760 FUN_142f78760 body=333 status=ok
// SIG undefined FUN_142f78760(void)

undefined8 FUN_142f78760(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  void *_Src;
  longlong *plVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined4 *)(param_3 + 8);
    do {
      if (param_2 != (longlong *)(puVar3 + -2)) {
        iVar2 = (int)param_2[1];
        if (iVar2 != 0) {
          plVar1 = (longlong *)(*param_2 + 0x50);
          do {
            if (plVar1[2] != 0) {
              FMemory::Free();
            }
            if (*plVar1 != 0) {
              FMemory::Free();
            }
            if (plVar1[-2] != 0) {
              FMemory::Free();
            }
            if (plVar1[-4] != 0) {
              FMemory::Free();
            }
            if (plVar1[-6] != 0) {
              FMemory::Free();
            }
            plVar1 = plVar1 + 0xf;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        FUN_14146ca00(param_2,*(longlong *)(puVar3 + -2),*puVar3,
                      *(undefined4 *)((longlong)param_2 + 0xc),0);
      }
      plVar1 = param_2 + 3;
      param_2[2] = *(longlong *)(puVar3 + 2);
      if (plVar1 != (longlong *)(puVar3 + 4)) {
        iVar2 = puVar3[6];
        _Src = *(void **)(puVar3 + 4);
        *(int *)(param_2 + 4) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x24) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x24) = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*plVar1,_Src,(longlong)iVar2 * 0x18);
        }
      }
      puVar3 = puVar3 + 10;
      param_4 = param_4 + -1;
      param_2 = param_2 + 5;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f788b0 FUN_142f788b0 body=375 status=ok
// SIG undefined FUN_142f788b0(void)

undefined8 FUN_142f788b0(undefined8 param_1,int *param_2,longlong param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  uint uVar3;
  int *_Dst;
  int *_Src_00;
  int *piVar4;
  
  if (param_4 != 0) {
    piVar4 = (int *)(param_3 + 0x28);
    do {
      *param_2 = piVar4[-10];
      piVar1 = param_2 + 4;
      *(char *)(param_2 + 1) = (char)piVar4[-9];
      param_2[2] = piVar4[-8];
      if (piVar1 != piVar4 + -6) {
        iVar2 = *piVar4;
        param_2[10] = 0;
        uVar3 = iVar2 + 0x1f + (iVar2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
        if (param_2[0xb] != uVar3) {
          param_2[0xb] = uVar3;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(piVar1,0);
        }
        iVar2 = *piVar4;
        param_2[10] = iVar2;
        if (iVar2 != 0) {
          _Src_00 = *(int **)(piVar4 + -2);
          if (*(int **)(piVar4 + -2) == (int *)0x0) {
            _Src_00 = piVar4 + -6;
          }
          _Dst = *(int **)(param_2 + 8);
          if (*(int **)(param_2 + 8) == (int *)0x0) {
            _Dst = piVar1;
          }
          _guard_xfg_dispatch_icall_nop
                    (_Dst,_Src_00,
                     (longlong)
                     ((int)(param_2[0xb] + 0x1f + (param_2[0xb] + 0x1f >> 0x1f & 0x1fU)) >> 5) << 2)
          ;
        }
      }
      piVar1 = param_2 + 0xc;
      if (piVar1 != piVar4 + 2) {
        iVar2 = piVar4[4];
        _Src = *(void **)(piVar4 + 2);
        param_2[0xe] = iVar2;
        if ((iVar2 == 0) && (param_2[0xf] == 0)) {
          param_2[0xf] = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(piVar1,iVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,_Src,(longlong)iVar2);
        }
      }
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2 + 0x10,piVar4 + 6);
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2 + 0x14,piVar4 + 10);
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2 + 0x18,piVar4 + 0xe);
      piVar1 = piVar4 + 0x12;
      piVar4 = piVar4 + 0x1e;
      *(char *)(param_2 + 0x1c) = (char)*piVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x1e;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f78a30 FUN_142f78a30 body=65 status=ok
// SIG undefined FUN_142f78a30(void)

void FUN_142f78a30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_144278ac0;
  if (param_2[8] != 0) {
    FMemory::Free();
    *param_2 = &PTR_FUN_1441d26b8;
    return;
  }
  *param_2 = &PTR_FUN_1441d26b8;
  return;
}



// FUNCTION 142f78aa0 FUN_142f78aa0 body=36 status=ok
// SIG undefined FUN_142f78aa0(void)

void FUN_142f78aa0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  FUN_14146cd50(param_2);
  return;
}



// FUNCTION 142f78ad0 Destruct body=90 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FMHMTutorialReminderByCounter>::Destruct
               (undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142f78b30 FUN_142f78b30 body=55 status=ok
// SIG undefined FUN_142f78b30(void)

void FUN_142f78b30(void)

{
  undefined8 uVar1;
  
  if (DAT_146b43458 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43458 = GetStaticEnum(FUN_142f7a0c0,uVar1,L"EIconRadiusDrawStyle");
  }
  return;
}



// FUNCTION 142f78b70 FUN_142f78b70 body=55 status=ok
// SIG undefined FUN_142f78b70(void)

void FUN_142f78b70(void)

{
  undefined8 uVar1;
  
  if (DAT_146b43488 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43488 = GetStaticEnum(FUN_142f7a0f0,uVar1,L"EMissionEvent");
  }
  return;
}



// FUNCTION 142f78bb0 FUN_142f78bb0 body=55 status=ok
// SIG undefined FUN_142f78bb0(void)

void FUN_142f78bb0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b43460 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43460 = GetStaticEnum(FUN_142f7a120,uVar1,L"EMissionIconState");
  }
  return;
}



// FUNCTION 142f78bf0 FUN_142f78bf0 body=55 status=ok
// SIG undefined FUN_142f78bf0(void)

void FUN_142f78bf0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b43468 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43468 = GetStaticEnum(FUN_142f7a150,uVar1,L"EMissionObjectiveDependencyStatus");
  }
  return;
}



// FUNCTION 142f78c30 FUN_142f78c30 body=55 status=ok
// SIG undefined FUN_142f78c30(void)

void FUN_142f78c30(void)

{
  undefined8 uVar1;
  
  if (DAT_146b43470 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43470 = GetStaticEnum(FUN_142f7a180,uVar1,L"EMissionObjectiveEvent");
  }
  return;
}



// FUNCTION 142f78c70 FUN_142f78c70 body=55 status=ok
// SIG undefined FUN_142f78c70(void)

void FUN_142f78c70(void)

{
  undefined8 uVar1;
  
  if (DAT_146b43478 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43478 = GetStaticEnum(FUN_142f7a1b0,uVar1,L"EMissionObjectiveSetEvent");
  }
  return;
}



// FUNCTION 142f78cb0 FUN_142f78cb0 body=55 status=ok
// SIG undefined FUN_142f78cb0(void)

void FUN_142f78cb0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b43490 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43490 = GetStaticEnum(FUN_142f7a1e0,uVar1,L"EMissionObjectiveSetStatus");
  }
  return;
}



// FUNCTION 142f78cf0 FUN_142f78cf0 body=55 status=ok
// SIG undefined FUN_142f78cf0(void)

void FUN_142f78cf0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b43498 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43498 = GetStaticEnum(FUN_142f7a210,uVar1,L"EMissionObjectiveStatus");
  }
  return;
}



// FUNCTION 142f78d30 EMissionStatus_StaticEnum body=55 status=ok
// SIG undefined EMissionStatus_StaticEnum(void)

void EMissionStatus_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b434a0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b434a0 = GetStaticEnum(FUN_142f7a240,uVar1,L"EMissionStatus");
  }
  return;
}



// FUNCTION 142f78d70 FUN_142f78d70 body=55 status=ok
// SIG undefined FUN_142f78d70(void)

void FUN_142f78d70(void)

{
  undefined8 uVar1;
  
  if (DAT_146b43480 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43480 = GetStaticEnum(FUN_142f7a270,uVar1,L"EMissionTimerEvent");
  }
  return;
}



// FUNCTION 142f78db0 FUN_142f78db0 body=98 status=ok
// SIG undefined FUN_142f78db0(void)

ulonglong FUN_142f78db0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  byte local_res10 [24];
  
  local_res10[0] = 0;
  lVar1 = UObject::FindFunction(param_1,DAT_146b43760);
  if (lVar1 == 0) {
    uVar2 = UNativeUserListEntry::GetPrivateStaticClass();
    puVar3 = (undefined8 *)FUN_14178e060(param_1,uVar2);
    if (puVar3 != (undefined8 *)0x0) {
      uVar4 = (**(code **)*puVar3)(puVar3);
      return uVar4;
    }
  }
  else {
    (**(code **)(*param_1 + 0x208))(param_1,lVar1,local_res10);
  }
  return (ulonglong)local_res10[0];
}



// FUNCTION 142f78e20 FUN_142f78e20 body=316 status=ok
// SIG undefined FUN_142f78e20(void)

void FUN_142f78e20(longlong *param_1,void **param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  void *local_28;
  undefined8 local_20;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  lVar3 = UObject::FindFunction(param_1,DAT_146b43768);
  if (lVar3 == 0) {
    uVar4 = UNativeUserListEntry::GetPrivateStaticClass();
    plVar5 = (longlong *)FUN_14178e060(param_1,uVar4);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5,param_2);
    }
  }
  else {
    if (&local_28 != param_2) {
      iVar1 = *(int *)(param_2 + 1);
      pvVar2 = *param_2;
      local_20 = CONCAT44(local_20._4_4_,iVar1);
      if ((iVar1 != 0) || (local_20._4_4_ != 0)) {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_28,iVar1);
        _guard_xfg_dispatch_icall_nop(local_28,pvVar2,(longlong)iVar1 << 3);
      }
    }
    (**(code **)(*param_1 + 0x208))(param_1,lVar3,&local_28);
    pvVar2 = local_28;
    if (param_2 != &local_28) {
      lVar3 = (longlong)(int)local_20;
      *(int *)(param_2 + 1) = (int)local_20;
      if (((int)local_20 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (param_2,local_20 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*param_2,pvVar2,lVar3 << 3);
      }
    }
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f78f60 FUN_142f78f60 body=203 status=ok
// SIG undefined FUN_142f78f60(void)

void FUN_142f78f60(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_18 = (undefined8 *)0x0;
  local_10 = 0;
  lVar2 = UObject::FindFunction(param_1,DAT_146b43740);
  if (lVar2 == 0) {
    uVar3 = UUserObjectListEntry::GetPrivateStaticClass();
    puVar4 = (undefined8 *)FUN_14178e060(param_1,uVar3);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,param_2);
    }
  }
  else {
    FUN_142f778f0(&local_18,param_2);
    (**(code **)(*param_1 + 0x208))(param_1,lVar2,&local_18);
    FUN_142f778f0(param_2,&local_18);
  }
  puVar4 = local_18;
  for (iVar1 = (int)local_10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = &PTR_FUN_1441d26b8;
    puVar4 = puVar4 + 6;
  }
  if (local_18 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f79030 FUN_142f79030 body=161 status=ok
// SIG undefined FUN_142f79030(void)

void FUN_142f79030(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  lVar1 = UObject::FindFunction(param_1,DAT_146b43748);
  if (lVar1 == 0) {
    uVar2 = UUserObjectListEntry::GetPrivateStaticClass();
    puVar3 = (undefined8 *)FUN_14178e060(param_1,uVar2);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,param_2);
    }
  }
  else {
    FUN_142f779c0(&local_18,param_2);
    (**(code **)(*param_1 + 0x208))(param_1,lVar1,&local_18);
    FUN_142f779c0(param_2,&local_18);
  }
  TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>::
  ~TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>(&local_18);
  return;
}



// FUNCTION 142f790e0 FUN_142f790e0 body=48 status=ok
// SIG undefined FUN_142f790e0(void)

void FUN_142f790e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_142f57ea0(param_3,param_2,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 142f79110 FUN_142f79110 body=48 status=ok
// SIG undefined FUN_142f79110(void)

void FUN_142f79110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_142f58120(param_3,param_2,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 142f79140 FUN_142f79140 body=162 status=ok
// SIG undefined FUN_142f79140(void)

longlong FUN_142f79140(void)

{
  if (DAT_146b439d8 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionTracker",&DAT_146b439d8,FUN_142f79610,0x6a8,
                  0x10000008,0,L"Engine",&LAB_142f77440,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_142f76500
                  ,&LAB_140447700,0);
  }
  return DAT_146b439d8;
}



// FUNCTION 142f791f0 FUN_142f791f0 body=151 status=ok
// SIG undefined FUN_142f791f0(void)

longlong FUN_142f791f0(void)

{
  if (DAT_146b437c8 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionGraph",&DAT_146b437c8,FUN_140447710,0x68,0x10000000
                  ,0,L"Engine",&LAB_142f77460,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b437c8;
}



// FUNCTION 142f79290 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong AArchVisCharacter::StaticClass(void)

{
  if (DAT_146b43828 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionIconComponent",&DAT_146b43828,FUN_142f79640,0x7b0,
                  0x10000000,0,L"Engine",&LAB_142f77480,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_146b43828;
}



// FUNCTION 142f79340 FUN_142f79340 body=162 status=ok
// SIG undefined FUN_142f79340(void)

longlong FUN_142f79340(void)

{
  if (DAT_146b439b0 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionRewardData",&DAT_146b439b0,FUN_140447710,0x30,
                  0x10000001,0,L"Engine",FUN_1405fc740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b439b0;
}



// FUNCTION 142f793f0 FUN_142f793f0 body=6 status=ok
// SIG undefined FUN_142f793f0(void)

undefined8 FUN_142f793f0(void)

{
  return 0x21674c54;
}



// FUNCTION 142f79400 FUN_142f79400 body=6 status=ok
// SIG undefined FUN_142f79400(void)

undefined8 FUN_142f79400(void)

{
  return 0x2b8e5712;
}



// FUNCTION 142f79410 FUN_142f79410 body=6 status=ok
// SIG undefined FUN_142f79410(void)

undefined8 FUN_142f79410(void)

{
  return 0x47e8331d;
}



// FUNCTION 142f79420 FUN_142f79420 body=6 status=ok
// SIG undefined FUN_142f79420(void)

undefined8 FUN_142f79420(void)

{
  return 0xed7715a2;
}



// FUNCTION 142f79430 FUN_142f79430 body=6 status=ok
// SIG undefined FUN_142f79430(void)

undefined8 FUN_142f79430(void)

{
  return 0x9490d858;
}



// FUNCTION 142f79440 FUN_142f79440 body=6 status=ok
// SIG undefined FUN_142f79440(void)

undefined8 FUN_142f79440(void)

{
  return 0xbe33850b;
}



// FUNCTION 142f79450 FUN_142f79450 body=6 status=ok
// SIG undefined FUN_142f79450(void)

undefined8 FUN_142f79450(void)

{
  return 0x919dae5c;
}



// FUNCTION 142f79460 FUN_142f79460 body=6 status=ok
// SIG undefined FUN_142f79460(void)

undefined8 FUN_142f79460(void)

{
  return 0xf2534f62;
}



// FUNCTION 142f79470 FUN_142f79470 body=6 status=ok
// SIG undefined FUN_142f79470(void)

undefined8 FUN_142f79470(void)

{
  return 0x50fae3f7;
}



// FUNCTION 142f79480 FUN_142f79480 body=6 status=ok
// SIG undefined FUN_142f79480(void)

undefined8 FUN_142f79480(void)

{
  return 0xf7c7f29;
}



// FUNCTION 142f79490 FUN_142f79490 body=6 status=ok
// SIG undefined FUN_142f79490(void)

undefined8 FUN_142f79490(void)

{
  return 0x16f2b0e3;
}



// FUNCTION 142f794a0 FUN_142f794a0 body=6 status=ok
// SIG undefined FUN_142f794a0(void)

undefined8 FUN_142f794a0(void)

{
  return 0xb9645148;
}



// FUNCTION 142f794b0 FUN_142f794b0 body=6 status=ok
// SIG undefined FUN_142f794b0(void)

undefined8 FUN_142f794b0(void)

{
  return 0xc14a50e7;
}



// FUNCTION 142f794c0 FUN_142f794c0 body=6 status=ok
// SIG undefined FUN_142f794c0(void)

undefined8 FUN_142f794c0(void)

{
  return 0x41e54658;
}



// FUNCTION 142f794d0 FUN_142f794d0 body=6 status=ok
// SIG undefined FUN_142f794d0(void)

undefined8 FUN_142f794d0(void)

{
  return 0x57756822;
}



// FUNCTION 142f794e0 FUN_142f794e0 body=6 status=ok
// SIG undefined FUN_142f794e0(void)

undefined8 FUN_142f794e0(void)

{
  return 0x7802806f;
}



// FUNCTION 142f794f0 FUN_142f794f0 body=6 status=ok
// SIG undefined FUN_142f794f0(void)

undefined8 FUN_142f794f0(void)

{
  return 0x5d471a6d;
}



// FUNCTION 142f79500 FUN_142f79500 body=6 status=ok
// SIG undefined FUN_142f79500(void)

undefined8 FUN_142f79500(void)

{
  return 0xddd2207;
}



// FUNCTION 142f79610 FUN_142f79610 body=34 status=ok
// SIG undefined FUN_142f79610(void)

void FUN_142f79610(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142f79140();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnRep_ActiveIcons_1459fbe88,3);
  return;
}



// FUNCTION 142f79640 FUN_142f79640 body=34 status=ok
// SIG undefined FUN_142f79640(void)

void FUN_142f79640(void)

{
  undefined8 uVar1;
  
  uVar1 = AArchVisCharacter::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_EnabledConditionRequiresNativeCl_1459fabf0,7);
  return;
}



// FUNCTION 142f79670 FUN_142f79670 body=34 status=ok
// SIG undefined FUN_142f79670(void)

void FUN_142f79670(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142f76190();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_EnabledConditionRequiresNativeCl_1459fb000,2);
  return;
}



// FUNCTION 142f796a0 StaticRegisterNativesUUserObjectListEntry body=34 status=ok
// SIG undefined StaticRegisterNativesUUserObjectListEntry(void)

void UUserObjectListEntry::StaticRegisterNativesUUserObjectListEntry(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_GetMissionObjectiveReferences_1459fb5e0,1);
  return;
}



// FUNCTION 142f796d0 StaticRegisterNativesUUserObjectListEntry body=34 status=ok
// SIG undefined StaticRegisterNativesUUserObjectListEntry(void)

void UUserObjectListEntry::StaticRegisterNativesUUserObjectListEntry(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_GetMissionObjectiveSetReferences_1459fb980,1);
  return;
}



// FUNCTION 142f79700 StaticRegisterNativesUBlindWidget body=34 status=ok
// SIG undefined StaticRegisterNativesUBlindWidget(void)

void UBlindWidget::StaticRegisterNativesUBlindWidget(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetUpdateEventObject_1459fbe38,2);
  return;
}



// FUNCTION 142f79730 StaticRegisterNativesUUserObjectListEntry body=34 status=ok
// SIG undefined StaticRegisterNativesUUserObjectListEntry(void)

void UUserObjectListEntry::StaticRegisterNativesUUserObjectListEntry(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClientReceiveMissionData_1459fbe58,1);
  return;
}



// FUNCTION 142f79760 StaticRegisterNativesUNativeUserListEntry body=34 status=ok
// SIG undefined StaticRegisterNativesUNativeUserListEntry(void)

void UNativeUserListEntry::StaticRegisterNativesUNativeUserListEntry(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_CheckForMissionReferenceErrors_1459fbe68,2);
  return;
}



// FUNCTION 142f79790 FUN_142f79790 body=82 status=ok
// SIG undefined FUN_142f79790(void)

void FUN_142f79790(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b43a58 == 0) {
    uVar1 = FUN_142f793f0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43a58 = GetStaticStruct(FUN_142f7a2a0,uVar2,L"ActiveMissionIconData",0x70,uVar1);
  }
  return;
}



// FUNCTION 142f797f0 FUN_142f797f0 body=82 status=ok
// SIG undefined FUN_142f797f0(void)

void FUN_142f797f0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b43a88 == 0) {
    uVar1 = FUN_142f79400();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43a88 = GetStaticStruct(FUN_142f7a2d0,uVar2,L"DefendMissionData",0x18,uVar1);
  }
  return;
}



// FUNCTION 142f79850 FUN_142f79850 body=82 status=ok
// SIG undefined FUN_142f79850(void)

void FUN_142f79850(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b43a78 == 0) {
    uVar1 = FUN_142f79410();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43a78 = GetStaticStruct(FUN_142f7a300,uVar2,L"DefendMissionTargetData",0x10,uVar1);
  }
  return;
}



// FUNCTION 142f798b0 FUN_142f798b0 body=82 status=ok
// SIG undefined FUN_142f798b0(void)

void FUN_142f798b0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b43850 == 0) {
    uVar1 = FUN_142f79420();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43850 = GetStaticStruct(FUN_142f7a330,uVar2,L"MissionLocation",0x30,uVar1);
  }
  return;
}



// FUNCTION 142f79910 FUN_142f79910 body=82 status=ok
// SIG undefined FUN_142f79910(void)

void FUN_142f79910(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b43a38 == 0) {
    uVar1 = FUN_142f79430();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43a38 = GetStaticStruct(FUN_142f7a360,uVar2,L"MissionObjectiveChain",0x10,uVar1);
  }
  return;
}



// FUNCTION 142f79970 FUN_142f79970 body=82 status=ok
// SIG undefined FUN_142f79970(void)

void FUN_142f79970(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b43a48 == 0) {
    uVar1 = FUN_142f79440();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43a48 = GetStaticStruct(FUN_142f7a390,uVar2,L"MissionObjectiveData",0x10,uVar1);
  }
  return;
}



// FUNCTION 142f799d0 FUN_142f799d0 body=82 status=ok
// SIG undefined FUN_142f799d0(void)

void FUN_142f799d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b43a98 == 0) {
    uVar1 = FUN_142f79450();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43a98 = GetStaticStruct(FUN_142f7a3c0,uVar2,L"MissionObjectiveDependency",0x58,uVar1);
  }
  return;
}



// FUNCTION 142f79a30 FUN_142f79a30 body=82 status=ok
// SIG undefined FUN_142f79a30(void)

void FUN_142f79a30(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b43890 == 0) {
    uVar1 = FUN_142f79480();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43890 = GetStaticStruct(FUN_142f7a3f0,uVar2,L"MissionObjectiveReference",0x30,uVar1);
  }
  return;
}



// FUNCTION 142f79a90 FUN_142f79a90 body=82 status=ok
// SIG undefined FUN_142f79a90(void)

void FUN_142f79a90(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b438b0 == 0) {
    uVar1 = FUN_142f79460();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b438b0 = GetStaticStruct(FUN_142f77380,uVar2,L"MissionObjectiveReferenceBase",0x28,uVar1)
    ;
  }
  return;
}



// FUNCTION 142f79af0 FUN_142f79af0 body=82 status=ok
// SIG undefined FUN_142f79af0(void)

void FUN_142f79af0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b438a0 == 0) {
    uVar1 = FUN_142f79470();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b438a0 = GetStaticStruct(FUN_142f7a420,uVar2,L"MissionObjectiveReferenceWeak",0x50,uVar1)
    ;
  }
  return;
}



// FUNCTION 142f79b50 FUN_142f79b50 body=82 status=ok
// SIG undefined FUN_142f79b50(void)

void FUN_142f79b50(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b438e8 == 0) {
    uVar1 = FUN_142f79490();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b438e8 = GetStaticStruct(FUN_142f7a450,uVar2,L"MissionObjectiveSetReference",0x48,uVar1);
  }
  return;
}



// FUNCTION 142f79bb0 FUN_142f79bb0 body=82 status=ok
// SIG undefined FUN_142f79bb0(void)

void FUN_142f79bb0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b43a68 == 0) {
    uVar1 = FUN_142f794a0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43a68 = GetStaticStruct(FUN_142f7a480,uVar2,L"MissionObserverEvent",0x38,uVar1);
  }
  return;
}



// FUNCTION 142f79c10 FUN_142f79c10 body=82 status=ok
// SIG undefined FUN_142f79c10(void)

void FUN_142f79c10(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b43aa8 == 0) {
    uVar1 = FUN_142f794b0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43aa8 = GetStaticStruct(FUN_142f7a4b0,uVar2,L"MissionPlaythroughData",0x18,uVar1);
  }
  return;
}



// FUNCTION 142f79c70 FUN_142f79c70 body=82 status=ok
// SIG undefined FUN_142f79c70(void)

void FUN_142f79c70(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b43af8 == 0) {
    uVar1 = FUN_142f794c0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43af8 = GetStaticStruct(FUN_142f7a4e0,uVar2,L"MissionProgress",0x80,uVar1);
  }
  return;
}



// FUNCTION 142f79cd0 FUN_142f79cd0 body=82 status=ok
// SIG undefined FUN_142f79cd0(void)

void FUN_142f79cd0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b43ab8 == 0) {
    uVar1 = FUN_142f794d0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43ab8 = GetStaticStruct(FUN_142f7a510,uVar2,L"MissionStatusPlayerData",0x30,uVar1);
  }
  return;
}



// FUNCTION 142f79d30 FUN_142f79d30 body=82 status=ok
// SIG undefined FUN_142f79d30(void)

void FUN_142f79d30(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b43ac8 == 0) {
    uVar1 = FUN_142f794e0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43ac8 = GetStaticStruct(FUN_142f7a540,uVar2,L"ReplicatedMissionData",0x28,uVar1);
  }
  return;
}



// FUNCTION 142f79d90 FUN_142f79d90 body=82 status=ok
// SIG undefined FUN_142f79d90(void)

void FUN_142f79d90(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b43ae8 == 0) {
    uVar1 = FUN_142f794f0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b43ae8 = GetStaticStruct(FUN_142f7a570,uVar2,L"ReplicatedMissionProgress",0x78,uVar1);
  }
  return;
}


