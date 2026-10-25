// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142913ab0 StaticRegisterNativesUCanvas body=34 status=ok
// SIG undefined StaticRegisterNativesUCanvas(void)

void UCanvas::StaticRegisterNativesUCanvas(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_K2_Deproject_14522ca00,0xd);
  return;
}



// FUNCTION 142913ae0 StaticRegisterNativesUCanvasRenderTarget2D body=34 status=ok
// SIG undefined StaticRegisterNativesUCanvasRenderTarget2D(void)

void UCanvasRenderTarget2D::StaticRegisterNativesUCanvasRenderTarget2D(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CreateCanvasRenderTarget2D_14522cad0,3);
  return;
}



// FUNCTION 142913b10 FUN_142913b10 body=34 status=ok
// SIG undefined FUN_142913b10(void)

void FUN_142913b10(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142912e90();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetScaledCapsuleHalfHeight_14522cc20,0xe)
  ;
  return;
}



// FUNCTION 142913b40 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBasedMovementInfo::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1c610 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FBasedMovementInfo_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1c610 = GetStaticStruct(FUN_142914020,uVar2,L"BasedMovementInfo",0x30,uVar1);
  }
  return;
}



// FUNCTION 142913ba0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FCanvasIcon::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1c478 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FCanvasIcon_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1c478 = GetStaticStruct(FUN_142914050,uVar2,L"CanvasIcon",0x18,uVar1);
  }
  return;
}



// FUNCTION 142913c00 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FDummySpacerCameraTypes::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1c448 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FDummySpacerCameraTypes_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1c448 = GetStaticStruct(FUN_142914080,uVar2,L"DummySpacerCameraTypes",1,uVar1);
  }
  return;
}



// FUNCTION 142913c60 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieScene3DTransformTemplateData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1c468 == 0) {
    uVar1 = FUN_142913010();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1c468 = GetStaticStruct(FUN_1429140b0,uVar2,L"MinimalViewInfo",0x650,uVar1);
  }
  return;
}



// FUNCTION 142913cc0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSplineInstanceData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1c630 == 0) {
    uVar1 = FUN_142913020();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1c630 = GetStaticStruct(FUN_1429140e0,uVar2,L"RepRootMotionMontage",0x180,uVar1);
  }
  return;
}



// FUNCTION 142913d20 FUN_142913d20 body=82 status=ok
// SIG undefined FUN_142913d20(void)

void FUN_142913d20(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1c620 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FSimulatedRootMotionReplicatedMove_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1c620 =
         GetStaticStruct(FUN_142914110,uVar2,L"SimulatedRootMotionReplicatedMove",0x188,uVar1);
  }
  return;
}



// FUNCTION 142913d80 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FTextSizingParameters::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1c548 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FTextSizingParameters_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1c548 = GetStaticStruct(FUN_142914140,uVar2,L"TextSizingParameters",0x28,uVar1);
  }
  return;
}



// FUNCTION 142913de0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FWrappedStringElement::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1c538 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FWrappedStringElement_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1c538 = GetStaticStruct(FUN_142914170,uVar2,L"WrappedStringElement",0x18,uVar1);
  }
  return;
}



// FUNCTION 142913e40 FUN_142913e40 body=47 status=ok
// SIG undefined FUN_142913e40(void)

longlong FUN_142913e40(void)

{
  if (DAT_146b1c5e0 == 0) {
    FUN_141786440(&DAT_146b1c5e0,&PTR_GetPrivateStaticClass_145228680);
  }
  return DAT_146b1c5e0;
}



// FUNCTION 142913e70 FUN_142913e70 body=47 status=ok
// SIG undefined FUN_142913e70(void)

longlong FUN_142913e70(void)

{
  if (DAT_146b1c600 == 0) {
    FUN_141786a30(&DAT_146b1c600,&PTR_Z_Construct_UPackage__Script_Engine_1465662d0);
  }
  return DAT_146b1c600;
}



// FUNCTION 142913ea0 FUN_142913ea0 body=47 status=ok
// SIG undefined FUN_142913ea0(void)

longlong FUN_142913ea0(void)

{
  if (DAT_146b1c5f8 == 0) {
    FUN_141786a30(&DAT_146b1c5f8,&PTR_Z_Construct_UPackage__Script_Engine_1465661a0);
  }
  return DAT_146b1c5f8;
}



// FUNCTION 142913ed0 FUN_142913ed0 body=47 status=ok
// SIG undefined FUN_142913ed0(void)

longlong FUN_142913ed0(void)

{
  if (DAT_146b1c5f0 == 0) {
    FUN_141786a30(&DAT_146b1c5f0,&PTR_Z_Construct_UPackage__Script_Engine_146566160);
  }
  return DAT_146b1c5f0;
}



// FUNCTION 142913f00 FUN_142913f00 body=47 status=ok
// SIG undefined FUN_142913f00(void)

longlong FUN_142913f00(void)

{
  if (DAT_146b1c608 == 0) {
    FUN_141786a30(&DAT_146b1c608,&PTR_Z_Construct_UPackage__Script_Engine_1465663d0);
  }
  return DAT_146b1c608;
}



// FUNCTION 142913f30 FUN_142913f30 body=47 status=ok
// SIG undefined FUN_142913f30(void)

longlong FUN_142913f30(void)

{
  if (DAT_146b1c500 == 0) {
    FUN_141786a30(&DAT_146b1c500,&PTR_Z_Construct_UPackage__Script_Engine_146565070);
  }
  return DAT_146b1c500;
}



// FUNCTION 142913f60 FUN_142913f60 body=47 status=ok
// SIG undefined FUN_142913f60(void)

longlong FUN_142913f60(void)

{
  if (DAT_146b1c440 == 0) {
    FUN_1417866a0(&DAT_146b1c440,&PTR_Z_Construct_UPackage__Script_Engine_146563060);
  }
  return DAT_146b1c440;
}



// FUNCTION 142913f90 FUN_142913f90 body=47 status=ok
// SIG undefined FUN_142913f90(void)

longlong FUN_142913f90(void)

{
  if (DAT_146b1c458 == 0) {
    FUN_1417866a0(&DAT_146b1c458,&PTR_Z_Construct_UPackage__Script_Engine_14656a290);
  }
  return DAT_146b1c458;
}



// FUNCTION 142913fc0 FUN_142913fc0 body=47 status=ok
// SIG undefined FUN_142913fc0(void)

longlong FUN_142913fc0(void)

{
  if (DAT_146b1c460 == 0) {
    FUN_1417866a0(&DAT_146b1c460,&PTR_Z_Construct_UPackage__Script_Engine_14656a2e0);
  }
  return DAT_146b1c460;
}



// FUNCTION 142913ff0 FUN_142913ff0 body=47 status=ok
// SIG undefined FUN_142913ff0(void)

longlong FUN_142913ff0(void)

{
  if (DAT_146b1c5d8 == 0) {
    FUN_1417866a0(&DAT_146b1c5d8,&PTR_Z_Construct_UPackage__Script_Engine_14656a330);
  }
  return DAT_146b1c5d8;
}



// FUNCTION 142914020 FUN_142914020 body=47 status=ok
// SIG undefined FUN_142914020(void)

longlong FUN_142914020(void)

{
  if (DAT_146b1c618 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1c618,&PTR_Z_Construct_UPackage__Script_Engine_146566650);
  }
  return DAT_146b1c618;
}



// FUNCTION 142914050 FUN_142914050 body=47 status=ok
// SIG undefined FUN_142914050(void)

longlong FUN_142914050(void)

{
  if (DAT_146b1c480 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1c480,&PTR_Z_Construct_UPackage__Script_Engine_146563670);
  }
  return DAT_146b1c480;
}



// FUNCTION 142914080 FUN_142914080 body=47 status=ok
// SIG undefined FUN_142914080(void)

longlong FUN_142914080(void)

{
  if (DAT_146b1c450 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1c450,&PTR_Z_Construct_UPackage__Script_Engine_1465630b0);
  }
  return DAT_146b1c450;
}



// FUNCTION 1429140b0 FUN_1429140b0 body=47 status=ok
// SIG undefined FUN_1429140b0(void)

longlong FUN_1429140b0(void)

{
  if (DAT_146b1c470 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1c470,&PTR_Z_Construct_UPackage__Script_Engine_1465634d0);
  }
  return DAT_146b1c470;
}



// FUNCTION 1429140e0 FUN_1429140e0 body=47 status=ok
// SIG undefined FUN_1429140e0(void)

longlong FUN_1429140e0(void)

{
  if (DAT_146b1c638 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1c638,&PTR_Z_Construct_UPackage__Script_Engine_146566b10);
  }
  return DAT_146b1c638;
}



// FUNCTION 142914110 FUN_142914110 body=47 status=ok
// SIG undefined FUN_142914110(void)

longlong FUN_142914110(void)

{
  if (DAT_146b1c628 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1c628,&PTR_Z_Construct_UPackage__Script_Engine_146566710);
  }
  return DAT_146b1c628;
}



// FUNCTION 142914140 FUN_142914140 body=47 status=ok
// SIG undefined FUN_142914140(void)

longlong FUN_142914140(void)

{
  if (DAT_146b1c550 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1c550,&PTR_Z_Construct_UPackage__Script_Engine_146565720);
  }
  return DAT_146b1c550;
}



// FUNCTION 142914170 FUN_142914170 body=47 status=ok
// SIG undefined FUN_142914170(void)

longlong FUN_142914170(void)

{
  if (DAT_146b1c540 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1c540,&PTR_Z_Construct_UPackage__Script_Engine_146565570);
  }
  return DAT_146b1c540;
}



// FUNCTION 1429141a0 FUN_1429141a0 body=216 status=ok
// SIG undefined FUN_1429141a0(void)

void FUN_1429141a0(longlong *param_1,longlong param_2)

{
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
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_28 = local_48;
  local_18 = local_38;
  local_20 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_30;
  (**(code **)(*param_1 + 0x840))(param_1,&local_18,&local_28);
  return;
}



// FUNCTION 142914280 FUN_142914280 body=43 status=ok
// SIG undefined FUN_142914280(void)

void FUN_142914280(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = thunk_FUN_142912390();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1429142b0 FUN_1429142b0 body=47 status=ok
// SIG undefined FUN_1429142b0(void)

void FUN_1429142b0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x880))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1429142e0 FUN_1429142e0 body=123 status=ok
// SIG undefined FUN_1429142e0(void)

void FUN_1429142e0(undefined8 param_1,longlong param_2)

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
  FUN_142307c40(param_1,local_res10[0]);
  return;
}



// FUNCTION 142914360 execClientAdjustPosition body=613 status=ok
// SIG undefined execClientAdjustPosition(void)

void ACharacter::execClientAdjustPosition(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res10 [16];
  int local_res20 [2];
  int local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  local_84 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_84);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
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
  local_78 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_80 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
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
  local_88 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  bVar2 = local_88 != 0;
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_48 = local_70;
  local_38 = local_60;
  local_40 = local_68;
  local_30 = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142307c60(param_1,local_84,&local_38,&local_48,local_78,local_80,bVar1,bVar2,local_res10[0]);
  return;
}



// FUNCTION 1429145d0 execClientAdjustRootMotionPosition body=751 status=ok
// SIG undefined execClientAdjustRootMotionPosition(void)

void ACharacter::execClientAdjustRootMotionPosition(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res10 [16];
  int local_res20 [2];
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  local_7c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_7c);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_80 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
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
  local_84 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_84);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  local_70 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_78 = 0;
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
  bVar1 = local_res20[0] != 0;
  local_88 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  bVar2 = local_88 != 0;
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_48 = local_68;
  local_40 = local_60;
  local_30 = local_50;
  local_38 = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142307cf0(param_1,local_7c,local_80,&local_38,&local_48,local_84,local_70,local_78,bVar1,bVar2
                ,local_res10[0]);
  return;
}



// FUNCTION 1429148c0 FUN_1429148c0 body=1334 status=ok
// SIG undefined FUN_1429148c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1429148c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auStack_328 [32];
  undefined4 local_308;
  undefined8 *local_300;
  undefined8 *local_2f8;
  undefined4 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined1 local_2d8;
  undefined1 local_2d0;
  undefined1 local_2c8;
  undefined1 local_2b8 [4];
  int local_2b4;
  int local_2b0;
  int local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0 [2];
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined **local_248;
  undefined8 local_240 [16];
  undefined8 *local_1c0;
  int local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0 [8];
  undefined8 *local_170;
  int local_168;
  undefined4 local_164;
  undefined1 local_160;
  undefined1 local_15f;
  undefined8 local_15c;
  undefined4 local_154;
  undefined1 local_150;
  undefined1 local_14f;
  undefined **local_148;
  undefined8 local_140 [16];
  undefined8 *local_c0;
  ulonglong local_b8;
  undefined8 local_b0 [8];
  undefined8 *local_70;
  ulonglong local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined8 local_5c;
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  local_2a0[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_2a0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_2a0);
  }
  FRootMotionSourceGroup::FRootMotionSourceGroup(&local_148);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_148);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_148);
  }
  local_2b4 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_2b4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_2b4);
  }
  bVar6 = local_2b4 != 0;
  local_2a4 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_2a4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_2a4);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_278);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_278);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_288);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_288);
  }
  local_2a8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_2a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_2a8);
  }
  local_290 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_290);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_290);
  }
  local_298 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_298);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_298);
  }
  local_2b0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_2b0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_2b0);
  }
  bVar7 = local_2b0 != 0;
  local_2ac = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_2ac);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_2ac);
  }
  bVar8 = local_2ac != 0;
  local_2b8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_2b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_2b8);
  }
  local_268 = local_288;
  local_260 = local_280;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_250 = local_270;
  local_248 = &PTR__scalar_deleting_destructor__144080980;
  local_258 = local_278;
  local_1c0 = (undefined8 *)0x0;
  local_1b8 = (int)local_b8;
  if (local_1b8 == 0) {
    local_1b4 = 0;
  }
  else {
    TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
    ResizeForCopy(local_240,local_b8 & 0xffffffff,0);
    puVar2 = local_140;
    if (local_c0 != (undefined8 *)0x0) {
      puVar2 = local_c0;
    }
    puVar3 = local_240;
    uVar5 = local_b8;
    if (local_1c0 != (undefined8 *)0x0) {
      puVar3 = local_1c0;
    }
    do {
      *puVar3 = *puVar2;
      lVar1 = puVar2[1];
      puVar3[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar2 = puVar2 + 2;
      uVar4 = (int)uVar5 - 1;
      puVar3 = puVar3 + 2;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 != 0);
  }
  local_170 = (undefined8 *)0x0;
  local_168 = (int)local_68;
  if (local_168 == 0) {
    local_164 = 0;
  }
  else {
    TArray<TScriptDelegate<FWeakObjectPtr>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy
              (local_1b0,local_68 & 0xffffffff,0);
    puVar2 = local_b0;
    if (local_70 != (undefined8 *)0x0) {
      puVar2 = local_70;
    }
    puVar3 = local_1b0;
    uVar5 = local_68;
    if (local_170 != (undefined8 *)0x0) {
      puVar3 = local_170;
    }
    do {
      *puVar3 = *puVar2;
      lVar1 = puVar2[1];
      puVar3[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar2 = puVar2 + 2;
      uVar4 = (int)uVar5 - 1;
      puVar3 = puVar3 + 2;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 != 0);
  }
  local_160 = local_60;
  local_15f = local_5f;
  local_154 = local_54;
  local_150 = local_50;
  local_14f = local_4f;
  local_2c8 = local_2b8[0];
  local_2e0 = local_298;
  local_2e8 = local_290;
  local_2f8 = &local_268;
  local_15c = local_5c;
  local_2f0 = local_2a8;
  local_300 = &local_258;
  local_308 = local_2a4;
  local_2d8 = bVar7;
  local_2d0 = bVar8;
  FUN_142307da0(param_1,local_2a0[0],&local_248,bVar6);
  local_148 = &PTR__scalar_deleting_destructor__144080980;
  FUN_14074e760(local_b0);
  FUN_14074e810(local_140);
  return;
}



// FUNCTION 142914e60 execClientVeryShortAdjustPosition body=534 status=ok
// SIG undefined execClientVeryShortAdjustPosition(void)

void ACharacter::execClientVeryShortAdjustPosition(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res10 [16];
  int local_res20 [2];
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined4 local_30;
  
  local_64 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_64);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
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
  bVar1 = local_res20[0] != 0;
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  bVar2 = local_68 != 0;
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_38 = local_50;
  local_30 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142308020(param_1,local_64,&local_38,local_58,local_60,bVar1,bVar2,local_res10[0]);
  return;
}



// FUNCTION 142915080 execCreateCanvasRenderTarget2D body=300 status=ok
// SIG undefined execCreateCanvasRenderTarget2D(void)

void UCanvasRenderTarget2D::execCreateCanvasRenderTarget2D
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 local_res10 [2];
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
  uVar1 = FUN_142309d50(local_28[0],local_res20,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1429151b0 FUN_1429151b0 body=134 status=ok
// SIG undefined FUN_1429151b0(void)

void FUN_1429151b0(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  
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
  (**(code **)(*param_1 + 0x8d8))(param_1,local_res8[0] != 0);
  return;
}



// FUNCTION 142915240 FUN_142915240 body=245 status=ok
// SIG undefined FUN_142915240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142915240(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_1423111b0(local_48,local_50,local_58);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  uVar1 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar1;
  uVar1 = puVar2[5];
  param_3[4] = puVar2[4];
  param_3[5] = uVar1;
  return;
}



// FUNCTION 142915340 FUN_142915340 body=60 status=ok
// SIG undefined FUN_142915340(void)

void FUN_142915340(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142311360(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142915380 FUN_142915380 body=45 status=ok
// SIG undefined FUN_142915380(void)

void FUN_142915380(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142311380();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1429153b0 FUN_1429153b0 body=80 status=ok
// SIG undefined FUN_1429153b0(void)

void FUN_1429153b0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x858))(param_1,local_18);
  FQuat::Rotator(uVar1,&local_28);
  *param_3 = local_28;
  *(undefined4 *)(param_3 + 1) = local_20;
  return;
}



// FUNCTION 142915430 FUN_142915430 body=44 status=ok
// SIG undefined FUN_142915430(void)

void FUN_142915430(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142311580();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142915560 FUN_142915560 body=270 status=ok
// SIG undefined FUN_142915560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142915560(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float local_res8 [2];
  float local_res10 [2];
  
  local_res8[0] = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  pfVar2 = *(float **)(param_2 + 0x38);
  local_res10[0] = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  pfVar3 = local_res8;
  if (pfVar2 != (float *)0x0) {
    pfVar3 = pfVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  pfVar2 = local_res10;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar2 = *(float **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar4 = *(uint *)(param_1 + 0x230) & _DAT_146b1c320;
  uVar5 = *(uint *)(param_1 + 0x234) & uRam0000000146b1c324;
  uVar6 = *(uint *)(param_1 + 0x238) & uRam0000000146b1c328;
  uVar7 = *(uint *)(param_1 + 0x23c) & uRam0000000146b1c32c;
  auVar8._4_4_ = uVar5;
  auVar8._0_4_ = uVar4;
  auVar8._8_4_ = uVar6;
  auVar8._12_4_ = uVar7;
  auVar9._4_4_ = uVar6;
  auVar9._0_4_ = uVar5;
  auVar9._8_4_ = uVar4;
  auVar9._12_4_ = uVar7;
  auVar9 = minps(auVar8,auVar9);
  auVar1._4_4_ = uVar4;
  auVar1._0_4_ = uVar6;
  auVar1._8_4_ = uVar5;
  auVar1._12_4_ = uVar7;
  auVar9 = minps(auVar9,auVar1);
  *pfVar3 = auVar9._0_4_ * *(float *)(param_1 + 0x714);
  *pfVar2 = auVar9._0_4_ * *(float *)(param_1 + 0x710);
  return;
}



// FUNCTION 142915670 FUN_142915670 body=282 status=ok
// SIG undefined FUN_142915670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142915670(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float local_res8 [2];
  float local_res10 [2];
  
  local_res8[0] = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  pfVar2 = *(float **)(param_2 + 0x38);
  local_res10[0] = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  pfVar3 = local_res8;
  if (pfVar2 != (float *)0x0) {
    pfVar3 = pfVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  pfVar2 = local_res10;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar2 = *(float **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar4 = *(uint *)(param_1 + 0x230) & _DAT_146b1c320;
  uVar5 = *(uint *)(param_1 + 0x234) & uRam0000000146b1c324;
  uVar6 = *(uint *)(param_1 + 0x238) & uRam0000000146b1c328;
  uVar7 = *(uint *)(param_1 + 0x23c) & uRam0000000146b1c32c;
  auVar8._4_4_ = uVar5;
  auVar8._0_4_ = uVar4;
  auVar8._8_4_ = uVar6;
  auVar8._12_4_ = uVar7;
  auVar9._4_4_ = uVar6;
  auVar9._0_4_ = uVar5;
  auVar9._8_4_ = uVar4;
  auVar9._12_4_ = uVar7;
  auVar9 = minps(auVar8,auVar9);
  auVar1._4_4_ = uVar4;
  auVar1._0_4_ = uVar6;
  auVar1._8_4_ = uVar5;
  auVar1._12_4_ = uVar7;
  auVar9 = minps(auVar9,auVar1);
  *pfVar3 = auVar9._0_4_ * *(float *)(param_1 + 0x714);
  *pfVar2 = (*(float *)(param_1 + 0x710) - *(float *)(param_1 + 0x714)) * auVar9._0_4_;
  return;
}



// FUNCTION 1429157d0 FUN_1429157d0 body=216 status=ok
// SIG undefined FUN_1429157d0(void)

void FUN_1429157d0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
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
  puVar2 = local_res20;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142312610(param_1,puVar1,puVar2);
  return;
}



// FUNCTION 142915920 FUN_142915920 body=225 status=ok
// SIG undefined FUN_142915920(void)

void FUN_142915920(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_res8;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar1 = local_res10;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *puVar2 = *(undefined4 *)(param_1 + 0x714);
  *puVar1 = *(undefined4 *)(param_1 + 0x710);
  return;
}



// FUNCTION 142915a10 FUN_142915a10 body=237 status=ok
// SIG undefined FUN_142915a10(void)

void FUN_142915a10(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 local_res8 [2];
  float local_res10 [2];
  
  local_res8[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_res10[0] = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar3 = local_res8;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  pfVar2 = local_res10;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar2 = *(float **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *puVar3 = *(undefined4 *)(param_1 + 0x714);
  *pfVar2 = *(float *)(param_1 + 0x710) - *(float *)(param_1 + 0x714);
  return;
}



// FUNCTION 142915b00 FUN_142915b00 body=47 status=ok
// SIG undefined FUN_142915b00(void)

void FUN_142915b00(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x888))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142915b30 FUN_142915b30 body=43 status=ok
// SIG undefined FUN_142915b30(void)

void FUN_142915b30(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1423146c0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142915b60 FUN_142915b60 body=43 status=ok
// SIG undefined FUN_142915b60(void)

void FUN_142915b60(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1423146e0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142915b90 execK2_Deproject body=283 status=ok
// SIG undefined execK2_Deproject(void)

void UCanvas::execK2_Deproject(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 local_res10;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
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
  K2_Deproject(param_1,local_res10,puVar1,puVar2);
  return;
}



// FUNCTION 142915cb0 execK2_DrawBorder body=1080 status=ok
// SIG undefined execK2_DrawBorder(void)

void UCanvas::execK2_DrawBorder(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_88 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_90 = 0;
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
  local_a8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
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
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
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
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
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
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
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
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_28 = local_40;
  uStack_20 = uStack_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1428b2a90(param_1,local_88,local_90,local_98,local_a0,local_a8,local_res20,local_48,local_50,
                local_58,local_60,&local_28,local_68,local_70,local_res10[0],local_78,local_80);
  return;
}



// FUNCTION 1429160f0 FUN_1429160f0 body=325 status=ok
// SIG undefined FUN_1429160f0(void)

void FUN_1429160f0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_18 = local_30;
  uStack_14 = uStack_2c;
  uStack_10 = uStack_28;
  uStack_c = uStack_24;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1428b2c40(param_1,local_38,local_res20,local_res10[0],&local_18);
  return;
}



// FUNCTION 142916240 FUN_142916240 body=325 status=ok
// SIG undefined FUN_142916240(void)

void FUN_142916240(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_18 = local_30;
  uStack_14 = uStack_2c;
  uStack_10 = uStack_28;
  uStack_c = uStack_24;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1428b2d00(param_1,local_38,local_res20,local_res10[0],&local_18);
  return;
}



// FUNCTION 142916390 execK2_DrawMaterial body=532 status=ok
// SIG undefined execK2_DrawMaterial(void)

void UCanvas::execK2_DrawMaterial(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [2];
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1428b2de0(param_1,local_res20,local_18[0],local_20,local_28,local_30,local_res10[0],local_38);
  return;
}



// FUNCTION 1429165b0 execK2_DrawTriangle body=288 status=ok
// SIG undefined execK2_DrawTriangle(void)

void UCanvas::execK2_DrawTriangle(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined8 local_res10;
  void *local_28;
  ulonglong local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
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
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeForCopy
              (&local_18,local_20 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 0x60);
  }
  FUN_1428b2f80(param_1,local_res10,&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1429166d0 execK2_DrawPolygon body=391 status=ok
// SIG undefined execK2_DrawPolygon(void)

void UCanvas::execK2_DrawPolygon(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  uStack_14 = uStack_24;
  uStack_10 = uStack_20;
  uStack_c = uStack_1c;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1428b30b0(param_1,local_res20,local_30,local_38,local_res10[0],&local_18);
  return;
}



// FUNCTION 142916860 execK2_DrawText body=820 status=ok
// SIG undefined execK2_DrawText(void)

void UCanvas::execK2_DrawText(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int local_res10 [2];
  int local_res20 [2];
  int local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  longlong local_a8 [3];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_b0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_b0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
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
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_b4 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_b4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b4);
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
    FUN_14179aca0(param_2,local_a8 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8 + 2);
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
  local_b8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  bVar3 = local_b8 != 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_58 = local_88;
  uStack_50 = uStack_80;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_38 = local_68;
  uStack_30 = uStack_60;
  local_48 = local_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  uStack_3c = uStack_6c;
  K2_DrawText(param_1,local_b0,local_a8,local_90,&local_38,local_b4,&local_48,local_a8[2],bVar1,
              bVar2,bVar3,&local_58);
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142916ba0 execK2_DrawTexture body=630 status=ok
// SIG undefined execK2_DrawTexture(void)

void UCanvas::execK2_DrawTexture(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
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
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
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
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
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
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_28 = local_38;
  uStack_20 = uStack_30;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1428b3340(param_1,local_68,local_40,local_48,local_50,local_58,&local_28,local_res10[0],
                local_res20[0],local_60);
  return;
}



// FUNCTION 142916e20 execK2_DrawTriangle body=288 status=ok
// SIG undefined execK2_DrawTriangle(void)

void UCanvas::execK2_DrawTriangle(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined8 local_res10;
  void *local_28;
  ulonglong local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
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
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeForCopy
              (&local_18,local_20 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 0x60);
  }
  K2_DrawTriangle(param_1,local_res10,&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142916f40 FUN_142916f40 body=165 status=ok
// SIG undefined FUN_142916f40(void)

void FUN_142916f40(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  puVar1 = (undefined8 *)FUN_1428b3570(param_1,local_18,&local_28);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142916ff0 execK2_StrLen body=221 status=ok
// SIG undefined execK2_StrLen(void)

void UCanvas::execK2_StrLen(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong local_28 [2];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)K2_StrLen(param_1,local_res18,local_res10,local_28);
  *param_3 = *puVar1;
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1429170d0 execK2_TextSize body=286 status=ok
// SIG undefined execK2_TextSize(void)

void UCanvas::execK2_TextSize(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  longlong local_28 [2];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)K2_TextSize(param_1,local_res20,local_res10,local_28,local_res18);
  *param_3 = *puVar1;
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1429171f0 FUN_1429171f0 body=279 status=ok
// SIG undefined FUN_1429171f0(void)

void FUN_1429171f0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
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
  bVar1 = local_res8[0] != 0;
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
  (**(code **)(*param_1 + 0x8a0))(param_1,&local_28,bVar1,local_res10[0] != 0);
  return;
}



// FUNCTION 142917370 FUN_142917370 body=402 status=ok
// SIG undefined FUN_142917370(void)

void FUN_142917370(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 local_res8 [2];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = local_48;
  if (puVar3 != (undefined1 *)0x0) {
    puVar1 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_38;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res8[0] = 0;
  puVar3 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x8c8))(param_1,puVar1,puVar2,puVar3,local_res8[0]);
  return;
}



// FUNCTION 142917510 FUN_142917510 body=265 status=ok
// SIG undefined FUN_142917510(void)

void FUN_142917510(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res8 [2];
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
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
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
  uVar1 = (**(code **)(*param_1 + 0x890))(param_1,local_res18,local_res8[0],local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142917620 FUN_142917620 body=152 status=ok
// SIG undefined FUN_142917620(void)

void FUN_142917620(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x940))(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1429176c0 FUN_1429176c0 body=855 status=ok
// SIG undefined FUN_1429176c0(void)

void FUN_1429176c0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined1 local_78 [4];
  undefined2 local_74 [2];
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
  local_78[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
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
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_74[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_74);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_74);
  }
  local_38 = local_58;
  local_28 = local_48;
  local_30 = local_50;
  local_20 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = FUN_14231cc00(param_1,local_6c,&local_28,&local_38,local_78[0],local_res20[0],local_70,
                        local_60,local_68,local_res10[0],local_74[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerMove_Validate");
  }
  else {
    local_20 = local_50;
    local_30 = local_40;
    local_28 = local_58;
    local_38 = local_48;
    FUN_14231cb60(param_1,local_6c,&local_38,&local_28,local_78[0],local_res20[0],local_70,local_60,
                  local_68,local_res10[0],local_74[0]);
  }
  return;
}



// FUNCTION 142917a20 FUN_142917a20 body=1175 status=ok
// SIG undefined FUN_142917a20(void)

void FUN_142917a20(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined1 local_a8;
  undefined1 local_a7 [3];
  undefined2 local_a4 [2];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_94 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_94);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_a7[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a7);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a7);
  }
  local_98 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
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
  local_a8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_a0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_88 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_90 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_90);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_a4[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a4);
  }
  local_48 = local_80;
  local_40 = local_78;
  local_30 = local_68;
  local_20 = local_58;
  local_38 = local_70;
  local_28 = local_60;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = FUN_14231c8b0(param_1,local_94,&local_28,local_a7[0],local_98,local_9c,&local_38,&local_48
                        ,local_a8,local_res20[0],local_a0,local_88,local_90,local_res10[0],
                        local_a4[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerMoveDual_Validate");
  }
  else {
    local_20 = local_78;
    local_30 = local_68;
    local_40 = local_58;
    local_28 = local_80;
    local_38 = local_70;
    local_48 = local_60;
    FUN_14231c7c0(param_1,local_94,&local_48,local_a7[0],local_98,local_9c,&local_38,&local_28,
                  local_a8,local_res20[0],local_a0,local_88,local_90,local_res10[0],local_a4[0]);
  }
  return;
}



// FUNCTION 142917ec0 FUN_142917ec0 body=1175 status=ok
// SIG undefined FUN_142917ec0(void)

void FUN_142917ec0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined1 local_a8;
  undefined1 local_a7 [3];
  undefined2 local_a4 [2];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_94 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_94);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_a7[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a7);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a7);
  }
  local_98 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
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
  local_a8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_a0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_88 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_90 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_90);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_a4[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a4);
  }
  local_48 = local_80;
  local_40 = local_78;
  local_30 = local_68;
  local_20 = local_58;
  local_38 = local_70;
  local_28 = local_60;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = FUN_14231c4f0(param_1,local_94,&local_28,local_a7[0],local_98,local_9c,&local_38,&local_48
                        ,local_a8,local_res20[0],local_a0,local_88,local_90,local_res10[0],
                        local_a4[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerMoveDualHybridRootMotion_Validate");
  }
  else {
    local_20 = local_78;
    local_30 = local_68;
    local_40 = local_58;
    local_28 = local_80;
    local_38 = local_70;
    local_48 = local_60;
    FUN_14231c400(param_1,local_94,&local_48,local_a7[0],local_98,local_9c,&local_38,&local_28,
                  local_a8,local_res20[0],local_a0,local_88,local_90,local_res10[0],local_a4[0]);
  }
  return;
}



// FUNCTION 142918360 FUN_142918360 body=1029 status=ok
// SIG undefined FUN_142918360(void)

void FUN_142918360(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined1 local_98;
  undefined1 local_97 [3];
  undefined2 local_94 [2];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_84 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_84);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_97[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_97);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_97);
  }
  local_88 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
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
  local_98 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_90 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_90);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_94[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_94);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_94);
  }
  local_48 = local_80;
  local_40 = local_78;
  local_30 = local_68;
  local_20 = local_58;
  local_38 = local_70;
  local_28 = local_60;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = FUN_14231c6d0(param_1,local_84,&local_28,local_97[0],local_88,local_8c,&local_38,&local_48
                        ,local_98,local_res20[0],local_90,local_res10[0],local_94[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerMoveDualNoBase_Validate");
  }
  else {
    local_20 = local_78;
    local_30 = local_68;
    local_40 = local_58;
    local_28 = local_80;
    local_38 = local_70;
    local_48 = local_60;
    FUN_14231c5e0(param_1,local_84,&local_48,local_97[0],local_88,local_8c,&local_38,&local_28,
                  local_98,local_res20[0],local_90,local_res10[0],local_94[0]);
  }
  return;
}



// FUNCTION 142918770 FUN_142918770 body=709 status=ok
// SIG undefined FUN_142918770(void)

void FUN_142918770(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined1 local_68 [4];
  undefined2 local_64 [2];
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_5c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_5c);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
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
  local_68[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_64[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_64);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_64);
  }
  local_38 = local_58;
  local_28 = local_48;
  local_30 = local_50;
  local_20 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = FUN_14231ca40(param_1,local_5c,&local_28,&local_38,local_68[0],local_res20[0],local_60,
                        local_res10[0],local_64[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerMoveNoBase_Validate");
  }
  else {
    local_20 = local_50;
    local_30 = local_40;
    local_28 = local_58;
    local_38 = local_48;
    FUN_14231c9a0(param_1,local_5c,&local_38,&local_28,local_68[0],local_res20[0],local_60,
                  local_res10[0],local_64[0]);
  }
  return;
}



// FUNCTION 142918a40 execServerMoveOld body=339 status=ok
// SIG undefined execServerMoveOld(void)

void ACharacter::execServerMoveOld(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  cVar1 = FUN_14231cb20(param_1,local_res20[0],&local_18,local_res10[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerMoveOld_Validate");
    return;
  }
  local_18 = local_28;
  local_10 = local_20;
  FUN_14231cae0(param_1,local_res20[0],&local_18,local_res10[0]);
  return;
}



// FUNCTION 142918ba0 execSetActorScale3D body=133 status=ok
// SIG undefined execSetActorScale3D(void)

void AActor::execSetActorScale3D(undefined8 param_1,longlong param_2)

{
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
  FUN_14231cfc0(param_1,&local_18);
  return;
}



// FUNCTION 142918c30 FUN_142918c30 body=208 status=ok
// SIG undefined FUN_142918c30(void)

void FUN_142918c30(longlong param_1,longlong param_2)

{
  int local_res8 [2];
  undefined4 local_res10 [2];
  
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
  FUN_14234feb0(param_1,*(undefined4 *)(param_1 + 0x714),local_res10[0],local_res8[0] != 0);
  return;
}



// FUNCTION 142918d00 FUN_142918d00 body=208 status=ok
// SIG undefined FUN_142918d00(void)

void FUN_142918d00(longlong param_1,longlong param_2)

{
  int local_res8 [2];
  undefined4 local_res10 [2];
  
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
  FUN_14234feb0(param_1,local_res10[0],*(undefined4 *)(param_1 + 0x710),local_res8[0] != 0);
  return;
}



// FUNCTION 142918dd0 FUN_142918dd0 body=267 status=ok
// SIG undefined FUN_142918dd0(void)

void FUN_142918dd0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_18 [4];
  
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
  FUN_14234feb0(param_1,local_18[0],local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 142918ee0 execClientSpawnCameraLensEffect body=132 status=ok
// SIG undefined execClientSpawnCameraLensEffect(void)

void APlayerController::execClientSpawnCameraLensEffect(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x898))(param_1,local_res8);
  return;
}



// FUNCTION 142918f70 FUN_142918f70 body=134 status=ok
// SIG undefined FUN_142918f70(void)

void FUN_142918f70(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  
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
  (**(code **)(*param_1 + 0x8e0))(param_1,local_res8[0] != 0);
  return;
}



// FUNCTION 142919000 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMediaSoundComponent::GetPrivateStaticClass(void)

{
  if (DAT_146b1c938 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"CharacterMovementComponent",&DAT_146b1c938,FUN_142919ee0,0x890
                  ,0x10000004,0,L"Engine",&LAB_142919830,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1429d7b60,&LAB_140447700,0);
  }
  return DAT_146b1c938;
}



// FUNCTION 1429190c0 FUN_1429190c0 body=47 status=ok
// SIG undefined FUN_1429190c0(void)

longlong FUN_1429190c0(void)

{
  if (DAT_146b1c930 == 0) {
    FUN_141786440(&DAT_146b1c930,&PTR_GetPrivateStaticClass_14522e0d0);
  }
  return DAT_146b1c930;
}



// FUNCTION 1429190f0 FUN_1429190f0 body=47 status=ok
// SIG undefined FUN_1429190f0(void)

longlong FUN_1429190f0(void)

{
  if (DAT_146b1c810 == 0) {
    FUN_141786a30(&DAT_146b1c810,&PTR_FUN_14656a610);
  }
  return DAT_146b1c810;
}



// FUNCTION 142919120 FUN_142919120 body=47 status=ok
// SIG undefined FUN_142919120(void)

longlong FUN_142919120(void)

{
  if (DAT_146b1c818 == 0) {
    FUN_141786a30(&DAT_146b1c818,&PTR_FUN_14656a6e0);
  }
  return DAT_146b1c818;
}



// FUNCTION 142919150 FUN_142919150 body=47 status=ok
// SIG undefined FUN_142919150(void)

longlong FUN_142919150(void)

{
  if (DAT_146b1c820 == 0) {
    FUN_141786a30(&DAT_146b1c820,&PTR_FUN_14656a820);
  }
  return DAT_146b1c820;
}



// FUNCTION 142919180 FUN_142919180 body=47 status=ok
// SIG undefined FUN_142919180(void)

longlong FUN_142919180(void)

{
  if (DAT_146b1c828 == 0) {
    FUN_141786a30(&DAT_146b1c828,&PTR_FUN_14656a9e0);
  }
  return DAT_146b1c828;
}



// FUNCTION 1429191b0 FUN_1429191b0 body=47 status=ok
// SIG undefined FUN_1429191b0(void)

longlong FUN_1429191b0(void)

{
  if (DAT_146b1c830 == 0) {
    FUN_141786a30(&DAT_146b1c830,&PTR_FUN_14656aa20);
  }
  return DAT_146b1c830;
}



// FUNCTION 1429191e0 FUN_1429191e0 body=47 status=ok
// SIG undefined FUN_1429191e0(void)

longlong FUN_1429191e0(void)

{
  if (DAT_146b1c838 == 0) {
    FUN_141786a30(&DAT_146b1c838,&PTR_FUN_14656aa60);
  }
  return DAT_146b1c838;
}



// FUNCTION 142919210 FUN_142919210 body=47 status=ok
// SIG undefined FUN_142919210(void)

longlong FUN_142919210(void)

{
  if (DAT_146b1c840 == 0) {
    FUN_141786a30(&DAT_146b1c840,&PTR_FUN_14656aae0);
  }
  return DAT_146b1c840;
}



// FUNCTION 142919240 FUN_142919240 body=47 status=ok
// SIG undefined FUN_142919240(void)

longlong FUN_142919240(void)

{
  if (DAT_146b1c848 == 0) {
    FUN_141786a30(&DAT_146b1c848,&PTR_FUN_14656ab60);
  }
  return DAT_146b1c848;
}



// FUNCTION 142919270 FUN_142919270 body=47 status=ok
// SIG undefined FUN_142919270(void)

longlong FUN_142919270(void)

{
  if (DAT_146b1c850 == 0) {
    FUN_141786a30(&DAT_146b1c850,&PTR_FUN_14656abe0);
  }
  return DAT_146b1c850;
}



// FUNCTION 1429192a0 FUN_1429192a0 body=47 status=ok
// SIG undefined FUN_1429192a0(void)

longlong FUN_1429192a0(void)

{
  if (DAT_146b1c858 == 0) {
    FUN_141786a30(&DAT_146b1c858,&PTR_FUN_14656ac60);
  }
  return DAT_146b1c858;
}



// FUNCTION 1429192d0 FUN_1429192d0 body=47 status=ok
// SIG undefined FUN_1429192d0(void)

longlong FUN_1429192d0(void)

{
  if (DAT_146b1c860 == 0) {
    FUN_141786a30(&DAT_146b1c860,&PTR_FUN_14656ace0);
  }
  return DAT_146b1c860;
}



// FUNCTION 142919300 FUN_142919300 body=47 status=ok
// SIG undefined FUN_142919300(void)

longlong FUN_142919300(void)

{
  if (DAT_146b1c868 == 0) {
    FUN_141786a30(&DAT_146b1c868,&PTR_FUN_14656ad60);
  }
  return DAT_146b1c868;
}



// FUNCTION 142919330 FUN_142919330 body=47 status=ok
// SIG undefined FUN_142919330(void)

longlong FUN_142919330(void)

{
  if (DAT_146b1c870 == 0) {
    FUN_141786a30(&DAT_146b1c870,&PTR_FUN_14656ade0);
  }
  return DAT_146b1c870;
}



// FUNCTION 142919360 FUN_142919360 body=47 status=ok
// SIG undefined FUN_142919360(void)

longlong FUN_142919360(void)

{
  if (DAT_146b1c878 == 0) {
    FUN_141786a30(&DAT_146b1c878,&PTR_FUN_14656ae60);
  }
  return DAT_146b1c878;
}



// FUNCTION 142919390 FUN_142919390 body=47 status=ok
// SIG undefined FUN_142919390(void)

longlong FUN_142919390(void)

{
  if (DAT_146b1c880 == 0) {
    FUN_141786a30(&DAT_146b1c880,&PTR_FUN_14656aee0);
  }
  return DAT_146b1c880;
}



// FUNCTION 1429193c0 FUN_1429193c0 body=47 status=ok
// SIG undefined FUN_1429193c0(void)

longlong FUN_1429193c0(void)

{
  if (DAT_146b1c888 == 0) {
    FUN_141786a30(&DAT_146b1c888,&PTR_FUN_14656af60);
  }
  return DAT_146b1c888;
}



// FUNCTION 1429193f0 FUN_1429193f0 body=47 status=ok
// SIG undefined FUN_1429193f0(void)

longlong FUN_1429193f0(void)

{
  if (DAT_146b1c890 == 0) {
    FUN_141786a30(&DAT_146b1c890,&PTR_FUN_14656afe0);
  }
  return DAT_146b1c890;
}



// FUNCTION 142919420 FUN_142919420 body=47 status=ok
// SIG undefined FUN_142919420(void)

longlong FUN_142919420(void)

{
  if (DAT_146b1c898 == 0) {
    FUN_141786a30(&DAT_146b1c898,&PTR_FUN_14656b060);
  }
  return DAT_146b1c898;
}



// FUNCTION 142919450 FUN_142919450 body=47 status=ok
// SIG undefined FUN_142919450(void)

longlong FUN_142919450(void)

{
  if (DAT_146b1c8a0 == 0) {
    FUN_141786a30(&DAT_146b1c8a0,&PTR_FUN_14656b130);
  }
  return DAT_146b1c8a0;
}



// FUNCTION 142919480 FUN_142919480 body=47 status=ok
// SIG undefined FUN_142919480(void)

longlong FUN_142919480(void)

{
  if (DAT_146b1c8a8 == 0) {
    FUN_141786a30(&DAT_146b1c8a8,&PTR_FUN_14656b1c0);
  }
  return DAT_146b1c8a8;
}



// FUNCTION 1429194b0 FUN_1429194b0 body=47 status=ok
// SIG undefined FUN_1429194b0(void)

longlong FUN_1429194b0(void)

{
  if (DAT_146b1c8b0 == 0) {
    FUN_141786a30(&DAT_146b1c8b0,&PTR_FUN_14656b330);
  }
  return DAT_146b1c8b0;
}



// FUNCTION 1429194e0 FUN_1429194e0 body=47 status=ok
// SIG undefined FUN_1429194e0(void)

longlong FUN_1429194e0(void)

{
  if (DAT_146b1c8b8 == 0) {
    FUN_141786a30(&DAT_146b1c8b8,&PTR_FUN_14656b3f0);
  }
  return DAT_146b1c8b8;
}



// FUNCTION 142919510 FUN_142919510 body=47 status=ok
// SIG undefined FUN_142919510(void)

longlong FUN_142919510(void)

{
  if (DAT_146b1c8c0 == 0) {
    FUN_141786a30(&DAT_146b1c8c0,&PTR_FUN_14656b470);
  }
  return DAT_146b1c8c0;
}



// FUNCTION 142919540 FUN_142919540 body=47 status=ok
// SIG undefined FUN_142919540(void)

longlong FUN_142919540(void)

{
  if (DAT_146b1c8c8 == 0) {
    FUN_141786a30(&DAT_146b1c8c8,&PTR_FUN_14656b4f0);
  }
  return DAT_146b1c8c8;
}



// FUNCTION 142919570 FUN_142919570 body=47 status=ok
// SIG undefined FUN_142919570(void)

longlong FUN_142919570(void)

{
  if (DAT_146b1c8d0 == 0) {
    FUN_141786a30(&DAT_146b1c8d0,&PTR_FUN_14656b570);
  }
  return DAT_146b1c8d0;
}



// FUNCTION 1429195a0 FUN_1429195a0 body=47 status=ok
// SIG undefined FUN_1429195a0(void)

longlong FUN_1429195a0(void)

{
  if (DAT_146b1c8d8 == 0) {
    FUN_141786a30(&DAT_146b1c8d8,&PTR_FUN_14656b600);
  }
  return DAT_146b1c8d8;
}



// FUNCTION 1429195d0 FUN_1429195d0 body=47 status=ok
// SIG undefined FUN_1429195d0(void)

longlong FUN_1429195d0(void)

{
  if (DAT_146b1c8e0 == 0) {
    FUN_141786a30(&DAT_146b1c8e0,&PTR_FUN_14656b680);
  }
  return DAT_146b1c8e0;
}



// FUNCTION 142919600 FUN_142919600 body=47 status=ok
// SIG undefined FUN_142919600(void)

longlong FUN_142919600(void)

{
  if (DAT_146b1c8e8 == 0) {
    FUN_141786a30(&DAT_146b1c8e8,&PTR_FUN_14656b700);
  }
  return DAT_146b1c8e8;
}



// FUNCTION 142919630 FUN_142919630 body=47 status=ok
// SIG undefined FUN_142919630(void)

longlong FUN_142919630(void)

{
  if (DAT_146b1c8f0 == 0) {
    FUN_141786a30(&DAT_146b1c8f0,&PTR_FUN_14656b780);
  }
  return DAT_146b1c8f0;
}



// FUNCTION 142919660 FUN_142919660 body=47 status=ok
// SIG undefined FUN_142919660(void)

longlong FUN_142919660(void)

{
  if (DAT_146b1c8f8 == 0) {
    FUN_141786a30(&DAT_146b1c8f8,&PTR_FUN_14656b800);
  }
  return DAT_146b1c8f8;
}



// FUNCTION 142919690 FUN_142919690 body=47 status=ok
// SIG undefined FUN_142919690(void)

longlong FUN_142919690(void)

{
  if (DAT_146b1c900 == 0) {
    FUN_141786a30(&DAT_146b1c900,&PTR_FUN_14656b880);
  }
  return DAT_146b1c900;
}



// FUNCTION 1429196c0 FUN_1429196c0 body=47 status=ok
// SIG undefined FUN_1429196c0(void)

longlong FUN_1429196c0(void)

{
  if (DAT_146b1c908 == 0) {
    FUN_141786a30(&DAT_146b1c908,&PTR_FUN_14656b900);
  }
  return DAT_146b1c908;
}



// FUNCTION 1429196f0 FUN_1429196f0 body=47 status=ok
// SIG undefined FUN_1429196f0(void)

longlong FUN_1429196f0(void)

{
  if (DAT_146b1c910 == 0) {
    FUN_141786a30(&DAT_146b1c910,&PTR_FUN_14656b9c0);
  }
  return DAT_146b1c910;
}



// FUNCTION 142919720 FUN_142919720 body=47 status=ok
// SIG undefined FUN_142919720(void)

longlong FUN_142919720(void)

{
  if (DAT_146b1c918 == 0) {
    FUN_141786a30(&DAT_146b1c918,&PTR_FUN_14656ba50);
  }
  return DAT_146b1c918;
}



// FUNCTION 142919750 FUN_142919750 body=47 status=ok
// SIG undefined FUN_142919750(void)

longlong FUN_142919750(void)

{
  if (DAT_146b1c920 == 0) {
    FUN_141786a30(&DAT_146b1c920,&PTR_FUN_14656bad0);
  }
  return DAT_146b1c920;
}



// FUNCTION 142919780 FUN_142919780 body=47 status=ok
// SIG undefined FUN_142919780(void)

longlong FUN_142919780(void)

{
  if (DAT_146b1c928 == 0) {
    FUN_141786a30(&DAT_146b1c928,&PTR_FUN_14656bb50);
  }
  return DAT_146b1c928;
}



// FUNCTION 1429197b0 FUN_1429197b0 body=53 status=ok
// SIG undefined FUN_1429197b0(void)

void FUN_1429197b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_14522fd48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1429197f0 FUN_1429197f0 body=53 status=ok
// SIG undefined FUN_1429197f0(void)

void FUN_1429197f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &PTR_FUN_14522fe60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142919850 FUN_142919850 body=47 status=ok
// SIG undefined FUN_142919850(void)

void FUN_142919850(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x58);
  FTickFunction::FTickFunction(param_2);
  *param_2 = &PTR__scalar_deleting_destructor__14504a8a0;
  return;
}



// FUNCTION 142919880 FUN_142919880 body=92 status=ok
// SIG undefined FUN_142919880(void)

void FUN_142919880(undefined8 param_1,uint *param_2)

{
  *param_2 = *param_2 & 0xfffffff8;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[0x1d] = 0xffffffff;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0xffffffff;
  param_2[0x20] = 0;
  param_2[0x21] = 0xffffffff;
  param_2[0x22] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  _guard_xfg_dispatch_icall_nop(param_2 + 4,0,0x90);
  param_2[7] = 0x3f800000;
  return;
}



// FUNCTION 142919b60 Get_Z_Construct_UScriptStruct_FCharacterMovementComponentPostPhysicsTickFunction_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FCharacterMovementComponentPostPhysicsTickFunction_CRC(void)

undefined8
Get_Z_Construct_UScriptStruct_FCharacterMovementComponentPostPhysicsTickFunction_CRC(void)

{
  return 0xe0b18244;
}



// FUNCTION 142919b70 Get_Z_Construct_UScriptStruct_FFindFloorResult_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FFindFloorResult_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FFindFloorResult_CRC(void)

{
  return 0xe4620b76;
}



// FUNCTION 142919e70 Serialize body=112 status=ok
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
  FUN_14234e970(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142919ee0 FUN_142919ee0 body=34 status=ok
// SIG undefined FUN_142919ee0(void)

void FUN_142919ee0(void)

{
  undefined8 uVar1;
  
  uVar1 = UMediaSoundComponent::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddForce_14522ff80,0x24);
  return;
}



// FUNCTION 142919f10 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FCharacterMovementComponentPostPhysicsTickFunction::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1c7f0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FCharacterMovementComponentPostPhysicsTickFunction_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1c7f0 =
         GetStaticStruct(FUN_142919fd0,uVar2,L"CharacterMovementComponentPostPhysicsTickFunction",
                         0x58,uVar1);
  }
  return;
}



// FUNCTION 142919f70 FUN_142919f70 body=82 status=ok
// SIG undefined FUN_142919f70(void)

void FUN_142919f70(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1c800 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FFindFloorResult_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1c800 = GetStaticStruct(FUN_14291a000,uVar2,L"FindFloorResult",0xa0,uVar1);
  }
  return;
}



// FUNCTION 142919fd0 FUN_142919fd0 body=47 status=ok
// SIG undefined FUN_142919fd0(void)

longlong FUN_142919fd0(void)

{
  if (DAT_146b1c7f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1c7f8,&PTR_Z_Construct_UPackage__Script_Engine_14656a390);
  }
  return DAT_146b1c7f8;
}



// FUNCTION 14291a000 FUN_14291a000 body=47 status=ok
// SIG undefined FUN_14291a000(void)

longlong FUN_14291a000(void)

{
  if (DAT_146b1c808 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1c808,&PTR_Z_Construct_UPackage__Script_Engine_14656a580);
  }
  return DAT_146b1c808;
}



// FUNCTION 14291a030 FUN_14291a030 body=137 status=ok
// SIG undefined FUN_14291a030(void)

void FUN_14291a030(longlong *param_1,longlong param_2)

{
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
  (**(code **)(*param_1 + 0x7c8))(param_1,&local_18);
  return;
}



// FUNCTION 14291a0c0 FUN_14291a0c0 body=214 status=ok
// SIG undefined FUN_14291a0c0(void)

void FUN_14291a0c0(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
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
  (**(code **)(*param_1 + 0x7c0))(param_1,&local_18,local_res8[0] != 0);
  return;
}



// FUNCTION 14291a1a0 execCalcVelocity body=339 status=ok
// SIG undefined execCalcVelocity(void)

void UCharacterMovementComponent::execCalcVelocity(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_28 [4];
  
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
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  bVar1 = local_res8[0] != 0;
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
  (**(code **)(*param_1 + 0x688))(param_1,local_28[0],local_res20[0],bVar1,local_res10[0]);
  return;
}



// FUNCTION 14291a300 FUN_14291a300 body=481 status=ok
// SIG undefined FUN_14291a300(void)

void FUN_14291a300(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x8b8))(param_1,local_c0,local_c8,local_res20,local_res10[0],bVar2,puVar1)
  ;
  return;
}



// FUNCTION 14291a510 execGetPhotoModeFilmGrain body=45 status=ok
// SIG undefined execGetPhotoModeFilmGrain(void)

void UCG2GameUserSettings::execGetPhotoModeFilmGrain
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetPhotoModeFilmGrain();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14291a560 execGetVelocityAnimation body=60 status=ok
// SIG undefined execGetVelocityAnimation(void)

void AMAU_BehaviorPlayer::execGetVelocityAnimation
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)GetVelocityAnimation(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 14291a5a0 execGetControlRotation body=64 status=ok
// SIG undefined execGetControlRotation(void)

void AController::execGetControlRotation(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x630))(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 14291a5e0 FUN_14291a5e0 body=49 status=ok
// SIG undefined FUN_14291a5e0(void)

void FUN_14291a5e0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x6b8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14291a620 FUN_14291a620 body=49 status=ok
// SIG undefined FUN_14291a620(void)

void FUN_14291a620(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x6c0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14291a660 execGetMaxBrakingDeceleration body=49 status=ok
// SIG undefined execGetMaxBrakingDeceleration(void)

void UCharacterMovementComponent::execGetMaxBrakingDeceleration
               (longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x690))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14291a6a0 execGetMaxJumpHeight body=49 status=ok
// SIG undefined execGetMaxJumpHeight(void)

void UCharacterMovementComponent::execGetMaxJumpHeight
               (longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x698))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14291a6e0 execGetMaxJumpHeightWithJumpTime body=49 status=ok
// SIG undefined execGetMaxJumpHeightWithJumpTime(void)

void UCharacterMovementComponent::execGetMaxJumpHeightWithJumpTime
               (longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x6a0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14291a720 FUN_14291a720 body=44 status=ok
// SIG undefined FUN_14291a720(void)

void FUN_14291a720(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14233f0e0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14291a750 FUN_14291a750 body=45 status=ok
// SIG undefined FUN_14291a750(void)

void FUN_14291a750(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14233f7e0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14291a780 FUN_14291a780 body=45 status=ok
// SIG undefined FUN_14291a780(void)

void FUN_14291a780(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142340240();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14291a7b0 FUN_14291a7b0 body=199 status=ok
// SIG undefined FUN_14291a7b0(void)

void FUN_14291a7b0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
  local_8c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar2 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x7f0))(param_1,puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14291a880 FUN_14291a880 body=47 status=ok
// SIG undefined FUN_14291a880(void)

void FUN_14291a880(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x560))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14291a8b0 FUN_14291a8b0 body=501 status=ok
// SIG undefined FUN_14291a8b0(void)

void FUN_14291a8b0(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  uint local_b8 [4];
  undefined1 local_a8 [12];
  undefined4 local_9c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_d8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
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
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  local_b8[0] = local_b8[0] & 0xfffffff8;
  local_b8[1] = 0;
  local_b8[2] = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_44 = 0xffffffff;
  local_3c = 0xffffffff;
  local_34 = 0xffffffff;
  _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
  local_9c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  puVar1 = local_b8;
  if (*(uint **)(param_2 + 0x38) != (uint *)0x0) {
    puVar1 = *(uint **)(param_2 + 0x38);
  }
  local_c8 = local_d8;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_c0 = local_d0;
  (**(code **)(*param_1 + 0x888))
            (param_1,&local_c8,local_res20[0],local_res10[0],local_res8[0],puVar1);
  return;
}



// FUNCTION 14291aab0 FUN_14291aab0 body=312 status=ok
// SIG undefined FUN_14291aab0(void)

void FUN_14291aab0(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  uint local_a8 [4];
  undefined1 local_98 [12];
  undefined4 local_8c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_a8[0] = local_a8[0] & 0xfffffff8;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_34 = 0xffffffff;
  local_2c = 0xffffffff;
  local_24 = 0xffffffff;
  _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
  local_8c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  local_b8 = local_c8;
  puVar1 = local_a8;
  if (*(uint **)(param_2 + 0x38) != (uint *)0x0) {
    puVar1 = *(uint **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_b0 = local_c0;
  (**(code **)(*param_1 + 0x878))(param_1,&local_b8,puVar1);
  return;
}



// FUNCTION 14291abf0 execGetMaxJumpHeightWithJumpTime body=49 status=ok
// SIG undefined execGetMaxJumpHeightWithJumpTime(void)

void UCharacterMovementComponent::execGetMaxJumpHeightWithJumpTime
               (longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x6b0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14291ac30 execGetMouseADSSensitivity body=45 status=ok
// SIG undefined execGetMouseADSSensitivity(void)

void UIndianaGameUserSettings::execGetMouseADSSensitivity
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetMouseADSSensitivity();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14291ac60 execGetFadeInStartDelay body=45 status=ok
// SIG undefined execGetFadeInStartDelay(void)

void UDecalComponent::execGetFadeInStartDelay
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetFadeInStartDelay();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14291ac90 FUN_14291ac90 body=130 status=ok
// SIG undefined FUN_14291ac90(void)

void FUN_14291ac90(undefined8 param_1,longlong param_2)

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
  FUN_14234fa00(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 14291ad20 FUN_14291ad20 body=126 status=ok
// SIG undefined FUN_14291ad20(void)

void FUN_14291ad20(undefined8 param_1,longlong param_2)

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
  FUN_14234fa80(param_1,local_res10[0]);
  return;
}



// FUNCTION 14291ada0 execSetScrollbarThickness body=138 status=ok
// SIG undefined execSetScrollbarThickness(void)

void UScrollBox::execSetScrollbarThickness(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_res10 [8];
  
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
  FUN_14234fa90(param_1,puVar1);
  return;
}



// FUNCTION 14291ae30 FUN_14291ae30 body=126 status=ok
// SIG undefined FUN_14291ae30(void)

void FUN_14291ae30(undefined8 param_1,longlong param_2)

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
  FUN_142350550(param_1,local_res10[0]);
  return;
}



// FUNCTION 14291aeb0 execSetScrollbarThickness body=138 status=ok
// SIG undefined execSetScrollbarThickness(void)

void UScrollBox::execSetScrollbarThickness(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_res10 [8];
  
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
  FUN_142350560(param_1,puVar1);
  return;
}



// FUNCTION 14291af40 FUN_14291af40 body=126 status=ok
// SIG undefined FUN_14291af40(void)

void FUN_14291af40(undefined8 param_1,longlong param_2)

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
  FUN_142350570(param_1,local_res10[0]);
  return;
}



// FUNCTION 14291afc0 execSetScrollbarThickness body=138 status=ok
// SIG undefined execSetScrollbarThickness(void)

void UScrollBox::execSetScrollbarThickness(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_res10 [8];
  
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
  FUN_142350580(param_1,puVar1);
  return;
}



// FUNCTION 14291b050 FUN_14291b050 body=187 status=ok
// SIG undefined FUN_14291b050(void)

void FUN_14291b050(longlong *param_1,longlong param_2)

{
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x5a0))(param_1,local_res8[0],local_res10[0]);
  return;
}



// FUNCTION 14291b110 FUN_14291b110 body=134 status=ok
// SIG undefined FUN_14291b110(void)

void FUN_14291b110(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  
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
  (**(code **)(*param_1 + 0x748))(param_1,local_res8[0] != 0);
  return;
}



// FUNCTION 14291b1a0 FUN_14291b1a0 body=123 status=ok
// SIG undefined FUN_14291b1a0(void)

void FUN_14291b1a0(undefined8 param_1,longlong param_2)

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
  FUN_142351f80(param_1,local_res10[0]);
  return;
}



// FUNCTION 14291b220 FUN_14291b220 body=123 status=ok
// SIG undefined FUN_14291b220(void)

void FUN_14291b220(undefined8 param_1,longlong param_2)

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
  FUN_142351fc0(param_1,local_res10[0]);
  return;
}



// FUNCTION 14291b2a0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UCloudStorageBase::StaticClass(void)

{
  if (DAT_146b1cbb8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"CloudStorageBase",&DAT_146b1cbb8,FUN_140447710,0x50,0x10000008
                  ,0,L"Engine",&LAB_14291c5b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPlatformInterfaceBase::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b1cbb8;
}



// FUNCTION 14291b360 FUN_14291b360 body=53 status=ok
// SIG undefined FUN_14291b360(void)

void FUN_14291b360(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_145233a70;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14291b3a0 FUN_14291b3a0 body=53 status=ok
// SIG undefined FUN_14291b3a0(void)

void FUN_14291b3a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_145233b88;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14291b3e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCheatManager::GetPrivateStaticClass(void)

{
  if (DAT_146b1cb68 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"CheatManager",&DAT_146b1cb68,FUN_14291d270,0x78,0x10000000,0,
                  L"Engine",&LAB_14291c530,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,thunk_FUN_1429e18b0,0);
  }
  return DAT_146b1cb68;
}



// FUNCTION 14291b490 FUN_14291b490 body=53 status=ok
// SIG undefined FUN_14291b490(void)

void FUN_14291b490(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_145233ca0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14291b4e0 FUN_14291b4e0 body=47 status=ok
// SIG undefined FUN_14291b4e0(void)

longlong FUN_14291b4e0(void)

{
  if (DAT_146b1cb60 == 0) {
    FUN_141786440(&DAT_146b1cb60,&PTR_GetPrivateStaticClass_145232020);
  }
  return DAT_146b1cb60;
}



// FUNCTION 14291b510 FUN_14291b510 body=47 status=ok
// SIG undefined FUN_14291b510(void)

longlong FUN_14291b510(void)

{
  if (DAT_146b1c9c0 == 0) {
    FUN_141786a30(&DAT_146b1c9c0,&PTR_FUN_14656e4a0);
  }
  return DAT_146b1c9c0;
}



// FUNCTION 14291b540 FUN_14291b540 body=47 status=ok
// SIG undefined FUN_14291b540(void)

longlong FUN_14291b540(void)

{
  if (DAT_146b1c9c8 == 0) {
    FUN_141786a30(&DAT_146b1c9c8,&PTR_FUN_14656e5d0);
  }
  return DAT_146b1c9c8;
}



// FUNCTION 14291b570 FUN_14291b570 body=47 status=ok
// SIG undefined FUN_14291b570(void)

longlong FUN_14291b570(void)

{
  if (DAT_146b1c9d0 == 0) {
    FUN_141786a30(&DAT_146b1c9d0,&PTR_FUN_14656e610);
  }
  return DAT_146b1c9d0;
}



// FUNCTION 14291b5a0 FUN_14291b5a0 body=47 status=ok
// SIG undefined FUN_14291b5a0(void)

longlong FUN_14291b5a0(void)

{
  if (DAT_146b1c9d8 == 0) {
    FUN_141786a30(&DAT_146b1c9d8,&PTR_FUN_14656e6c0);
  }
  return DAT_146b1c9d8;
}



// FUNCTION 14291b5d0 FUN_14291b5d0 body=47 status=ok
// SIG undefined FUN_14291b5d0(void)

longlong FUN_14291b5d0(void)

{
  if (DAT_146b1c9e0 == 0) {
    FUN_141786a30(&DAT_146b1c9e0,&PTR_FUN_14656e700);
  }
  return DAT_146b1c9e0;
}



// FUNCTION 14291b600 FUN_14291b600 body=47 status=ok
// SIG undefined FUN_14291b600(void)

longlong FUN_14291b600(void)

{
  if (DAT_146b1c9e8 == 0) {
    FUN_141786a30(&DAT_146b1c9e8,&PTR_FUN_14656e740);
  }
  return DAT_146b1c9e8;
}



// FUNCTION 14291b630 FUN_14291b630 body=47 status=ok
// SIG undefined FUN_14291b630(void)

longlong FUN_14291b630(void)

{
  if (DAT_146b1c9f0 == 0) {
    FUN_141786a30(&DAT_146b1c9f0,&PTR_FUN_14656e780);
  }
  return DAT_146b1c9f0;
}



// FUNCTION 14291b660 FUN_14291b660 body=47 status=ok
// SIG undefined FUN_14291b660(void)

longlong FUN_14291b660(void)

{
  if (DAT_146b1c9f8 == 0) {
    FUN_141786a30(&DAT_146b1c9f8,&PTR_FUN_14656e800);
  }
  return DAT_146b1c9f8;
}



// FUNCTION 14291b690 FUN_14291b690 body=47 status=ok
// SIG undefined FUN_14291b690(void)

longlong FUN_14291b690(void)

{
  if (DAT_146b1ca00 == 0) {
    FUN_141786a30(&DAT_146b1ca00,&PTR_FUN_14656e840);
  }
  return DAT_146b1ca00;
}



// FUNCTION 14291b6c0 FUN_14291b6c0 body=47 status=ok
// SIG undefined FUN_14291b6c0(void)

longlong FUN_14291b6c0(void)

{
  if (DAT_146b1ca08 == 0) {
    FUN_141786a30(&DAT_146b1ca08,&PTR_FUN_14656e900);
  }
  return DAT_146b1ca08;
}



// FUNCTION 14291b6f0 FUN_14291b6f0 body=47 status=ok
// SIG undefined FUN_14291b6f0(void)

longlong FUN_14291b6f0(void)

{
  if (DAT_146b1ca10 == 0) {
    FUN_141786a30(&DAT_146b1ca10,&PTR_FUN_14656e940);
  }
  return DAT_146b1ca10;
}



// FUNCTION 14291b720 FUN_14291b720 body=47 status=ok
// SIG undefined FUN_14291b720(void)

longlong FUN_14291b720(void)

{
  if (DAT_146b1ca18 == 0) {
    FUN_141786a30(&DAT_146b1ca18,&PTR_FUN_14656e9f0);
  }
  return DAT_146b1ca18;
}



// FUNCTION 14291b750 FUN_14291b750 body=47 status=ok
// SIG undefined FUN_14291b750(void)

longlong FUN_14291b750(void)

{
  if (DAT_146b1ca20 == 0) {
    FUN_141786a30(&DAT_146b1ca20,&PTR_FUN_14656eab0);
  }
  return DAT_146b1ca20;
}



// FUNCTION 14291b780 FUN_14291b780 body=47 status=ok
// SIG undefined FUN_14291b780(void)

longlong FUN_14291b780(void)

{
  if (DAT_146b1ca28 == 0) {
    FUN_141786a30(&DAT_146b1ca28,&PTR_FUN_14656eaf0);
  }
  return DAT_146b1ca28;
}



// FUNCTION 14291b7b0 FUN_14291b7b0 body=47 status=ok
// SIG undefined FUN_14291b7b0(void)

longlong FUN_14291b7b0(void)

{
  if (DAT_146b1ca30 == 0) {
    FUN_141786a30(&DAT_146b1ca30,&PTR_FUN_14656ebb0);
  }
  return DAT_146b1ca30;
}



// FUNCTION 14291b7e0 FUN_14291b7e0 body=47 status=ok
// SIG undefined FUN_14291b7e0(void)

longlong FUN_14291b7e0(void)

{
  if (DAT_146b1ca38 == 0) {
    FUN_141786a30(&DAT_146b1ca38,&PTR_FUN_14656ebf0);
  }
  return DAT_146b1ca38;
}



// FUNCTION 14291b810 FUN_14291b810 body=47 status=ok
// SIG undefined FUN_14291b810(void)

longlong FUN_14291b810(void)

{
  if (DAT_146b1ca40 == 0) {
    FUN_141786a30(&DAT_146b1ca40,&PTR_FUN_14656ec30);
  }
  return DAT_146b1ca40;
}



// FUNCTION 14291b840 FUN_14291b840 body=47 status=ok
// SIG undefined FUN_14291b840(void)

longlong FUN_14291b840(void)

{
  if (DAT_146b1ca48 == 0) {
    FUN_141786a30(&DAT_146b1ca48,&PTR_FUN_14656ec70);
  }
  return DAT_146b1ca48;
}



// FUNCTION 14291b870 FUN_14291b870 body=47 status=ok
// SIG undefined FUN_14291b870(void)

longlong FUN_14291b870(void)

{
  if (DAT_146b1ca50 == 0) {
    FUN_141786a30(&DAT_146b1ca50,&PTR_FUN_14656ecb0);
  }
  return DAT_146b1ca50;
}



// FUNCTION 14291b8a0 FUN_14291b8a0 body=47 status=ok
// SIG undefined FUN_14291b8a0(void)

longlong FUN_14291b8a0(void)

{
  if (DAT_146b1ca58 == 0) {
    FUN_141786a30(&DAT_146b1ca58,&PTR_FUN_14656ecf0);
  }
  return DAT_146b1ca58;
}



// FUNCTION 14291b8d0 FUN_14291b8d0 body=47 status=ok
// SIG undefined FUN_14291b8d0(void)

longlong FUN_14291b8d0(void)

{
  if (DAT_146b1ca60 == 0) {
    FUN_141786a30(&DAT_146b1ca60,&PTR_FUN_14656ed30);
  }
  return DAT_146b1ca60;
}



// FUNCTION 14291b900 FUN_14291b900 body=47 status=ok
// SIG undefined FUN_14291b900(void)

longlong FUN_14291b900(void)

{
  if (DAT_146b1ca68 == 0) {
    FUN_141786a30(&DAT_146b1ca68,&PTR_FUN_14656ed70);
  }
  return DAT_146b1ca68;
}



// FUNCTION 14291b930 FUN_14291b930 body=47 status=ok
// SIG undefined FUN_14291b930(void)

longlong FUN_14291b930(void)

{
  if (DAT_146b1ca70 == 0) {
    FUN_141786a30(&DAT_146b1ca70,&PTR_FUN_14656edb0);
  }
  return DAT_146b1ca70;
}



// FUNCTION 14291b960 FUN_14291b960 body=47 status=ok
// SIG undefined FUN_14291b960(void)

longlong FUN_14291b960(void)

{
  if (DAT_146b1ca78 == 0) {
    FUN_141786a30(&DAT_146b1ca78,&PTR_FUN_14656edf0);
  }
  return DAT_146b1ca78;
}



// FUNCTION 14291b990 FUN_14291b990 body=47 status=ok
// SIG undefined FUN_14291b990(void)

longlong FUN_14291b990(void)

{
  if (DAT_146b1ca80 == 0) {
    FUN_141786a30(&DAT_146b1ca80,&PTR_FUN_14656ee30);
  }
  return DAT_146b1ca80;
}



// FUNCTION 14291b9c0 FUN_14291b9c0 body=47 status=ok
// SIG undefined FUN_14291b9c0(void)

longlong FUN_14291b9c0(void)

{
  if (DAT_146b1ca88 == 0) {
    FUN_141786a30(&DAT_146b1ca88,&PTR_FUN_14656ee70);
  }
  return DAT_146b1ca88;
}



// FUNCTION 14291b9f0 FUN_14291b9f0 body=47 status=ok
// SIG undefined FUN_14291b9f0(void)

longlong FUN_14291b9f0(void)

{
  if (DAT_146b1ca90 == 0) {
    FUN_141786a30(&DAT_146b1ca90,&PTR_FUN_14656eeb0);
  }
  return DAT_146b1ca90;
}



// FUNCTION 14291ba20 FUN_14291ba20 body=47 status=ok
// SIG undefined FUN_14291ba20(void)

longlong FUN_14291ba20(void)

{
  if (DAT_146b1ca98 == 0) {
    FUN_141786a30(&DAT_146b1ca98,&PTR_FUN_14656eef0);
  }
  return DAT_146b1ca98;
}



// FUNCTION 14291ba50 FUN_14291ba50 body=47 status=ok
// SIG undefined FUN_14291ba50(void)

longlong FUN_14291ba50(void)

{
  if (DAT_146b1caa0 == 0) {
    FUN_141786a30(&DAT_146b1caa0,&PTR_FUN_14656ef30);
  }
  return DAT_146b1caa0;
}



// FUNCTION 14291ba80 FUN_14291ba80 body=47 status=ok
// SIG undefined FUN_14291ba80(void)

longlong FUN_14291ba80(void)

{
  if (DAT_146b1caa8 == 0) {
    FUN_141786a30(&DAT_146b1caa8,&PTR_FUN_14656ef70);
  }
  return DAT_146b1caa8;
}



// FUNCTION 14291bab0 FUN_14291bab0 body=47 status=ok
// SIG undefined FUN_14291bab0(void)

longlong FUN_14291bab0(void)

{
  if (DAT_146b1cab0 == 0) {
    FUN_141786a30(&DAT_146b1cab0,&PTR_FUN_14656efb0);
  }
  return DAT_146b1cab0;
}



// FUNCTION 14291bae0 FUN_14291bae0 body=47 status=ok
// SIG undefined FUN_14291bae0(void)

longlong FUN_14291bae0(void)

{
  if (DAT_146b1cab8 == 0) {
    FUN_141786a30(&DAT_146b1cab8,&PTR_FUN_14656eff0);
  }
  return DAT_146b1cab8;
}



// FUNCTION 14291bb10 FUN_14291bb10 body=47 status=ok
// SIG undefined FUN_14291bb10(void)

longlong FUN_14291bb10(void)

{
  if (DAT_146b1cac0 == 0) {
    FUN_141786a30(&DAT_146b1cac0,&PTR_FUN_14656f030);
  }
  return DAT_146b1cac0;
}



// FUNCTION 14291bb40 FUN_14291bb40 body=47 status=ok
// SIG undefined FUN_14291bb40(void)

longlong FUN_14291bb40(void)

{
  if (DAT_146b1cac8 == 0) {
    FUN_141786a30(&DAT_146b1cac8,&PTR_FUN_14656f070);
  }
  return DAT_146b1cac8;
}



// FUNCTION 14291bb70 FUN_14291bb70 body=47 status=ok
// SIG undefined FUN_14291bb70(void)

longlong FUN_14291bb70(void)

{
  if (DAT_146b1cad0 == 0) {
    FUN_141786a30(&DAT_146b1cad0,&PTR_FUN_14656f0b0);
  }
  return DAT_146b1cad0;
}



// FUNCTION 14291bba0 FUN_14291bba0 body=47 status=ok
// SIG undefined FUN_14291bba0(void)

longlong FUN_14291bba0(void)

{
  if (DAT_146b1cad8 == 0) {
    FUN_141786a30(&DAT_146b1cad8,&PTR_FUN_14656f0f0);
  }
  return DAT_146b1cad8;
}



// FUNCTION 14291bbd0 FUN_14291bbd0 body=47 status=ok
// SIG undefined FUN_14291bbd0(void)

longlong FUN_14291bbd0(void)

{
  if (DAT_146b1cae0 == 0) {
    FUN_141786a30(&DAT_146b1cae0,&PTR_FUN_14656f130);
  }
  return DAT_146b1cae0;
}



// FUNCTION 14291bc00 FUN_14291bc00 body=47 status=ok
// SIG undefined FUN_14291bc00(void)

longlong FUN_14291bc00(void)

{
  if (DAT_146b1cae8 == 0) {
    FUN_141786a30(&DAT_146b1cae8,&PTR_FUN_14656f1e0);
  }
  return DAT_146b1cae8;
}



// FUNCTION 14291bc30 FUN_14291bc30 body=47 status=ok
// SIG undefined FUN_14291bc30(void)

longlong FUN_14291bc30(void)

{
  if (DAT_146b1caf0 == 0) {
    FUN_141786a30(&DAT_146b1caf0,&PTR_FUN_14656f220);
  }
  return DAT_146b1caf0;
}



// FUNCTION 14291bc60 FUN_14291bc60 body=47 status=ok
// SIG undefined FUN_14291bc60(void)

longlong FUN_14291bc60(void)

{
  if (DAT_146b1caf8 == 0) {
    FUN_141786a30(&DAT_146b1caf8,&PTR_FUN_14656f2d0);
  }
  return DAT_146b1caf8;
}



// FUNCTION 14291bc90 FUN_14291bc90 body=47 status=ok
// SIG undefined FUN_14291bc90(void)

longlong FUN_14291bc90(void)

{
  if (DAT_146b1cb00 == 0) {
    FUN_141786a30(&DAT_146b1cb00,&PTR_FUN_14656f310);
  }
  return DAT_146b1cb00;
}



// FUNCTION 14291bcc0 FUN_14291bcc0 body=47 status=ok
// SIG undefined FUN_14291bcc0(void)

longlong FUN_14291bcc0(void)

{
  if (DAT_146b1cb08 == 0) {
    FUN_141786a30(&DAT_146b1cb08,&PTR_FUN_14656f350);
  }
  return DAT_146b1cb08;
}



// FUNCTION 14291bcf0 FUN_14291bcf0 body=47 status=ok
// SIG undefined FUN_14291bcf0(void)

longlong FUN_14291bcf0(void)

{
  if (DAT_146b1cb10 == 0) {
    FUN_141786a30(&DAT_146b1cb10,&PTR_FUN_14656f390);
  }
  return DAT_146b1cb10;
}



// FUNCTION 14291bd20 FUN_14291bd20 body=47 status=ok
// SIG undefined FUN_14291bd20(void)

longlong FUN_14291bd20(void)

{
  if (DAT_146b1cb18 == 0) {
    FUN_141786a30(&DAT_146b1cb18,&PTR_FUN_14656f3d0);
  }
  return DAT_146b1cb18;
}



// FUNCTION 14291bd50 FUN_14291bd50 body=47 status=ok
// SIG undefined FUN_14291bd50(void)

longlong FUN_14291bd50(void)

{
  if (DAT_146b1cb20 == 0) {
    FUN_141786a30(&DAT_146b1cb20,&PTR_FUN_14656f410);
  }
  return DAT_146b1cb20;
}



// FUNCTION 14291bd80 FUN_14291bd80 body=47 status=ok
// SIG undefined FUN_14291bd80(void)

longlong FUN_14291bd80(void)

{
  if (DAT_146b1cb28 == 0) {
    FUN_141786a30(&DAT_146b1cb28,&PTR_FUN_14656f450);
  }
  return DAT_146b1cb28;
}



// FUNCTION 14291bdb0 FUN_14291bdb0 body=47 status=ok
// SIG undefined FUN_14291bdb0(void)

longlong FUN_14291bdb0(void)

{
  if (DAT_146b1cb30 == 0) {
    FUN_141786a30(&DAT_146b1cb30,&PTR_FUN_14656f490);
  }
  return DAT_146b1cb30;
}



// FUNCTION 14291bde0 FUN_14291bde0 body=47 status=ok
// SIG undefined FUN_14291bde0(void)

longlong FUN_14291bde0(void)

{
  if (DAT_146b1cb38 == 0) {
    FUN_141786a30(&DAT_146b1cb38,&PTR_FUN_14656f4d0);
  }
  return DAT_146b1cb38;
}



// FUNCTION 14291be10 FUN_14291be10 body=47 status=ok
// SIG undefined FUN_14291be10(void)

longlong FUN_14291be10(void)

{
  if (DAT_146b1cb40 == 0) {
    FUN_141786a30(&DAT_146b1cb40,&PTR_FUN_14656f590);
  }
  return DAT_146b1cb40;
}



// FUNCTION 14291be40 FUN_14291be40 body=47 status=ok
// SIG undefined FUN_14291be40(void)

longlong FUN_14291be40(void)

{
  if (DAT_146b1cb48 == 0) {
    FUN_141786a30(&DAT_146b1cb48,&PTR_FUN_14656f5d0);
  }
  return DAT_146b1cb48;
}



// FUNCTION 14291be70 FUN_14291be70 body=47 status=ok
// SIG undefined FUN_14291be70(void)

longlong FUN_14291be70(void)

{
  if (DAT_146b1cb50 == 0) {
    FUN_141786a30(&DAT_146b1cb50,&PTR_FUN_14656f610);
  }
  return DAT_146b1cb50;
}



// FUNCTION 14291bea0 FUN_14291bea0 body=47 status=ok
// SIG undefined FUN_14291bea0(void)

longlong FUN_14291bea0(void)

{
  if (DAT_146b1cb58 == 0) {
    FUN_141786a30(&DAT_146b1cb58,&PTR_FUN_14656f650);
  }
  return DAT_146b1cb58;
}



// FUNCTION 14291bee0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UComponentDelegateBinding::StaticClass(void)

{
  if (DAT_146b1cc38 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"ComponentDelegateBinding",&DAT_146b1cc38,FUN_140447710,0x38,
                  0x10000000,0,L"Engine",&LAB_14291c610,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDynamicBlueprintBinding::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b1cc38;
}



// FUNCTION 14291bfa0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGStartScreenUW::GetPrivateStaticClass(void)

{
  if (DAT_146b1cb90 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"ChildActorComponent",&DAT_146b1cb90,
                  StaticRegisterNativesUUGStartScreenUW,0x300,0x10000000,0,L"Engine",&LAB_14291c570,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1423612e0,&LAB_1405bc4a0,
                  &LAB_140447700,0);
  }
  return DAT_146b1cb90;
}



// FUNCTION 14291c060 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UCheckBoxStyleAsset::StaticClass(void)

{
  if (DAT_146b1cb78 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"CheckBoxStyleAsset",&DAT_146b1cb78,FUN_140447710,0x5a8,
                  0x10000000,0,L"Engine",&LAB_14291c550,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1cb78;
}



// FUNCTION 14291c110 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UConsole::GetPrivateStaticClass(void)

{
  if (DAT_146b1cc70 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"Console",&DAT_146b1cc70,FUN_140447710,0x130,0x1000000c,0,
                  L"Input",&LAB_14291c630,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,UGGameViewportClient::GetPrivateStaticClass,0);
  }
  return DAT_146b1cc70;
}



// FUNCTION 14291c1c0 FUN_14291c1c0 body=53 status=ok
// SIG undefined FUN_14291c1c0(void)

void FUN_14291c1c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_145233e60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14291c210 FUN_14291c210 body=53 status=ok
// SIG undefined FUN_14291c210(void)

void FUN_14291c210(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x4c;
    *puVar1 = &PTR_FUN_145233f98;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14291c250 FUN_14291c250 body=53 status=ok
// SIG undefined FUN_14291c250(void)

void FUN_14291c250(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x4c;
    *puVar1 = &PTR_FUN_1452340b0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14291c290 FUN_14291c290 body=53 status=ok
// SIG undefined FUN_14291c290(void)

void FUN_14291c290(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1452341c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14291c2d0 FUN_14291c2d0 body=53 status=ok
// SIG undefined FUN_14291c2d0(void)

void FUN_14291c2d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1b8;
    *puVar1 = &PTR_FUN_1452342e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14291c310 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x104;
    *puVar1 = &PTR_FUN_1452343f8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14291c350 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCollisionProfile::GetPrivateStaticClass(void)

{
  if (DAT_146b1cc08 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"CollisionProfile",&DAT_146b1cc08,FUN_140447710,0x158,
                  0x10000006,0,L"Engine",&LAB_14291c5d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDeveloperSettings::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b1cc08;
}



// FUNCTION 14291c400 FUN_14291c400 body=47 status=ok
// SIG undefined FUN_14291c400(void)

longlong FUN_14291c400(void)

{
  if (DAT_146b1cb88 == 0) {
    FUN_141786440(&DAT_146b1cb88,&PTR_GetPrivateStaticClass_145233150);
  }
  return DAT_146b1cb88;
}



// FUNCTION 14291c430 FUN_14291c430 body=47 status=ok
// SIG undefined FUN_14291c430(void)

longlong FUN_14291c430(void)

{
  if (DAT_146b1cb80 == 0) {
    FUN_141786a30(&DAT_146b1cb80,&PTR_FUN_14656f840);
  }
  return DAT_146b1cb80;
}



// FUNCTION 14291c470 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UIpConnection::GetPrivateStaticClass(void)

{
  if (DAT_146b1cba0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"ChildConnection",&DAT_146b1cba0,FUN_140447710,0x1978,
                  0x1000000c,0,L"Engine",&LAB_14291c590,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1425b2600,thunk_FUN_1429c30a0,
                  &LAB_140447700,0);
  }
  return DAT_146b1cba0;
}



// FUNCTION 14291c760 Copy body=267 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FAutoCompleteNode>::Copy
          (undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined8 *)(param_3 + 8);
    do {
      puVar1 = (undefined8 *)(param_2 + 2);
      *param_2 = *(undefined4 *)(puVar4 + -1);
      if (puVar1 != puVar4) {
        iVar2 = *(int *)(puVar4 + 1);
        pvVar3 = (void *)*puVar4;
        param_2[4] = iVar2;
        if ((iVar2 == 0) && (param_2[5] == 0)) {
          param_2[5] = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 2);
        }
      }
      puVar1 = (undefined8 *)(param_2 + 6);
      if (puVar1 != puVar4 + 2) {
        iVar2 = *(int *)(puVar4 + 3);
        pvVar3 = (void *)puVar4[2];
        param_2[8] = iVar2;
        if ((iVar2 == 0) && (param_2[9] == 0)) {
          param_2[9] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 3);
        }
      }
      puVar4 = puVar4 + 5;
      param_4 = param_4 + -1;
      param_2 = param_2 + 10;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14291c870 Copy body=150 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FCollisionResponseTemplate>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar5 = (undefined1 *)(param_2 + 9);
    do {
      *(undefined8 *)(puVar5 + -9) = *(undefined8 *)(puVar5 + param_3 + -9);
      puVar5[-1] = puVar5[param_3 + -1];
      *puVar5 = puVar5[param_3];
      *(undefined8 *)(puVar5 + 7) = *(undefined8 *)(puVar5 + param_3 + 7);
      TArray<FResponseChannel,FDefaultAllocator>::operator=(puVar5 + 0xf,puVar5 + param_3 + 0xf);
      FString::operator=(puVar5 + 0x1f,puVar5 + param_3 + 0x1f);
      puVar5[0x2f] = puVar5[param_3 + 0x2f];
      puVar1 = (undefined4 *)(puVar5 + param_3 + 0x30);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar5 + 0x30) = *puVar1;
      *(undefined4 *)(puVar5 + 0x34) = uVar2;
      *(undefined4 *)(puVar5 + 0x38) = uVar3;
      *(undefined4 *)(puVar5 + 0x3c) = uVar4;
      puVar1 = (undefined4 *)(puVar5 + param_3 + 0x40);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar5 + 0x40) = *puVar1;
      *(undefined4 *)(puVar5 + 0x44) = uVar2;
      *(undefined4 *)(puVar5 + 0x48) = uVar3;
      *(undefined4 *)(puVar5 + 0x4c) = uVar4;
      puVar5 = puVar5 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14291c910 FUN_14291c910 body=428 status=ok
// SIG undefined FUN_14291c910(void)

undefined8 FUN_14291c910(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  if (param_4 != 0) {
    puVar7 = (undefined8 *)(param_3 + 8);
    do {
      *param_2 = *(undefined4 *)(puVar7 + -1);
      *(undefined8 *)(param_2 + 2) = *puVar7;
      param_2[4] = *(undefined4 *)(puVar7 + 1);
      *(undefined8 *)(param_2 + 6) = puVar7[2];
      *(undefined8 *)(param_2 + 8) = puVar7[3];
      *(undefined8 *)(param_2 + 10) = puVar7[4];
      *(undefined8 *)(param_2 + 0xc) = puVar7[5];
      param_2[0xe] = *(undefined4 *)(puVar7 + 6);
      *(undefined8 *)(param_2 + 0xf) = *(undefined8 *)((longlong)puVar7 + 0x34);
      param_2[0x11] = *(undefined4 *)((longlong)puVar7 + 0x3c);
      *(undefined8 *)(param_2 + 0x12) = puVar7[8];
      param_2[0x14] = *(undefined4 *)(puVar7 + 9);
      *(undefined8 *)(param_2 + 0x15) = *(undefined8 *)((longlong)puVar7 + 0x4c);
      param_2[0x17] = *(undefined4 *)((longlong)puVar7 + 0x54);
      *(undefined8 *)(param_2 + 0x18) = puVar7[0xb];
      param_2[0x1a] = *(undefined4 *)(puVar7 + 0xc);
      *(undefined8 *)(param_2 + 0x1b) = *(undefined8 *)((longlong)puVar7 + 100);
      param_2[0x1d] = *(undefined4 *)((longlong)puVar7 + 0x6c);
      *(undefined8 *)(param_2 + 0x1e) = puVar7[0xe];
      param_2[0x20] = *(undefined4 *)(puVar7 + 0xf);
      param_2[0x21] = param_2[0x21] ^ (*(uint *)((longlong)puVar7 + 0x7c) ^ param_2[0x21]) & 1;
      param_2[0x22] = *(undefined4 *)(puVar7 + 0x10);
      FConstraintProfileProperties::operator=(param_2 + 0x23,(longlong)puVar7 + 0x84);
      uVar2 = *(undefined4 *)((longlong)puVar7 + 0x18c);
      uVar3 = *(undefined4 *)(puVar7 + 0x32);
      uVar4 = *(undefined4 *)((longlong)puVar7 + 0x194);
      param_2[100] = *(undefined4 *)(puVar7 + 0x31);
      param_2[0x65] = uVar2;
      param_2[0x66] = uVar3;
      param_2[0x67] = uVar4;
      param_2[0x68] = *(undefined4 *)(puVar7 + 0x33);
      plVar6 = (longlong *)(param_2 + 0x6a);
      if (puVar7 + 0x34 != plVar6) {
        if ((*(int *)(puVar7 + 0x35) == 0) ||
           (plVar1 = (longlong *)puVar7[0x34], plVar1 == (longlong *)0x0)) {
          if ((param_2[0x6c] != 0) && (plVar1 = (longlong *)*plVar6, plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x28))(plVar1,0);
            if (*plVar6 != 0) {
              lVar5 = FMemory::Realloc(*plVar6,0,0);
              *plVar6 = lVar5;
            }
            param_2[0x6c] = 0;
          }
        }
        else {
          (**(code **)(*plVar1 + 0x30))(plVar1,plVar6);
        }
      }
      puVar7 = puVar7 + 0x37;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x6e;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14291cd40 Copy body=82 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FCustomProfile>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - (longlong)param_2;
    do {
      *param_2 = *(undefined8 *)(param_3 + (longlong)param_2);
      TArray<FResponseChannel,FDefaultAllocator>::operator=
                (param_2 + 1,param_3 + 8 + (longlong)param_2);
      param_2 = param_2 + 3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14291cdb0 FUN_14291cdb0 body=126 status=ok
// SIG undefined FUN_14291cdb0(void)

void FUN_14291cdb0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (*(int *)(param_2 + 0x1b0) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_2 + 0x1a8);
  }
  if ((plVar2 != (longlong *)0x0) ||
     ((*(int *)(param_2 + 0x1b0) != 0 &&
      (plVar2 = *(longlong **)(param_2 + 0x1a8), plVar2 != (longlong *)0x0)))) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    if (*(longlong *)(param_2 + 0x1a8) != 0) {
      uVar1 = FMemory::Realloc(*(longlong *)(param_2 + 0x1a8),0,0);
      *(undefined8 *)(param_2 + 0x1a8) = uVar1;
    }
    *(undefined4 *)(param_2 + 0x1b0) = 0;
  }
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14291ce30 EAngularDriveMode_StaticEnum body=55 status=ok
// SIG undefined EAngularDriveMode_StaticEnum(void)

void EAngularDriveMode_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1c950 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1c950 = GetStaticEnum(FUN_14291d8a0,uVar1,L"EAngularDriveMode");
  }
  return;
}



// FUNCTION 14291ce70 ECloudStorageDelegate_StaticEnum body=55 status=ok
// SIG undefined ECloudStorageDelegate_StaticEnum(void)

void ECloudStorageDelegate_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1c940 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1c940 = GetStaticEnum(FUN_14291d8d0,uVar1,L"ECloudStorageDelegate");
  }
  return;
}



// FUNCTION 14291ceb0 FUN_14291ceb0 body=55 status=ok
// SIG undefined FUN_14291ceb0(void)

void FUN_14291ceb0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1c948 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1c948 = GetStaticEnum(FUN_14291d900,uVar1,L"EDefaultVertexColor");
  }
  return;
}



// FUNCTION 14291cef0 FUN_14291cef0 body=151 status=ok
// SIG undefined FUN_14291cef0(void)

longlong FUN_14291cef0(void)

{
  if (DAT_146b1cc18 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"Commandlet",&DAT_146b1cc18,FUN_140447710,0x80,0x10000009,0,
                  L"Engine",&LAB_14291c5f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1cc18;
}



// FUNCTION 14291cf90 Get_Z_Construct_UScriptStruct_FAngularDriveConstraint_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAngularDriveConstraint_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAngularDriveConstraint_CRC(void)

{
  return 0xaad243d4;
}



// FUNCTION 14291cfa0 Get_Z_Construct_UScriptStruct_FAutoCompleteNode_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAutoCompleteNode_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAutoCompleteNode_CRC(void)

{
  return 0xb6980b8;
}



// FUNCTION 14291cfb0 Get_Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_CRC(void)

{
  return 0x9740ec3c;
}



// FUNCTION 14291cfc0 Get_Z_Construct_UScriptStruct_FCollisionProfileName_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FCollisionProfileName_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FCollisionProfileName_CRC(void)

{
  return 0x7421a6d3;
}



// FUNCTION 14291cfd0 Get_Z_Construct_UScriptStruct_FCollisionResponseTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FCollisionResponseTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FCollisionResponseTemplate_CRC(void)

{
  return 0x9809918d;
}


