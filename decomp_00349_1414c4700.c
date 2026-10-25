// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1414c4700 FUN_1414c4700 body=47 status=ok
// SIG undefined FUN_1414c4700(void)

longlong FUN_1414c4700(void)

{
  if (DAT_14689f648 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689f648,&PTR_Z_Construct_UPackage__Script_MechWarrior_146461740);
  }
  return DAT_14689f648;
}



// FUNCTION 1414c4730 FUN_1414c4730 body=47 status=ok
// SIG undefined FUN_1414c4730(void)

longlong FUN_1414c4730(void)

{
  if (DAT_14689f618 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689f618,&PTR_Z_Construct_UPackage__Script_MechWarrior_146461580);
  }
  return DAT_14689f618;
}



// FUNCTION 1414c4760 FUN_1414c4760 body=47 status=ok
// SIG undefined FUN_1414c4760(void)

longlong FUN_1414c4760(void)

{
  if (DAT_14689f628 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689f628,&PTR_Z_Construct_UPackage__Script_MechWarrior_146461690);
  }
  return DAT_14689f628;
}



// FUNCTION 1414c4790 FUN_1414c4790 body=47 status=ok
// SIG undefined FUN_1414c4790(void)

longlong FUN_1414c4790(void)

{
  if (DAT_14689f728 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689f728,&PTR_Z_Construct_UPackage__Script_MechWarrior_146462940);
  }
  return DAT_14689f728;
}



// FUNCTION 1414c47c0 FUN_1414c47c0 body=126 status=ok
// SIG undefined FUN_1414c47c0(void)

void FUN_1414c47c0(undefined8 param_1,longlong param_2)

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
  FUN_140e6f8d0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414c4890 FUN_1414c4890 body=126 status=ok
// SIG undefined FUN_1414c4890(void)

void FUN_1414c4890(undefined8 param_1,longlong param_2)

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
  FUN_140e72b40(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414c4910 FUN_1414c4910 body=130 status=ok
// SIG undefined FUN_1414c4910(void)

void FUN_1414c4910(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x828))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1414c49a0 execEnableHDRDisplayOutput body=190 status=ok
// SIG undefined execEnableHDRDisplayOutput(void)

void UGameUserSettings::execEnableHDRDisplayOutput(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  undefined4 local_res20 [2];
  
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
  FUN_140e72e80(param_1,bVar1,local_res20[0]);
  return;
}



// FUNCTION 1414c4a60 FUN_1414c4a60 body=196 status=ok
// SIG undefined FUN_1414c4a60(void)

void FUN_1414c4a60(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int local_res8 [2];
  undefined4 local_res10 [2];
  
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
  (**(code **)(*param_1 + 0x820))(param_1,bVar1,local_res10[0]);
  return;
}



// FUNCTION 1414c4b50 FUN_1414c4b50 body=126 status=ok
// SIG undefined FUN_1414c4b50(void)

void FUN_1414c4b50(undefined8 param_1,longlong param_2)

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
  FUN_140e73900(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414c4bd0 FUN_1414c4bd0 body=43 status=ok
// SIG undefined FUN_1414c4bd0(void)

void FUN_1414c4bd0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = ASeatBase::CanPlayerEnterSeat_Implementation();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414c4c00 FUN_1414c4c00 body=43 status=ok
// SIG undefined FUN_1414c4c00(void)

void FUN_1414c4c00(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140e770e0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414c4c70 execGetParameter body=46 status=ok
// SIG undefined execGetParameter(void)

void IGizmoFloatParameterSource::execGetParameter
               (longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x10))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414c4cc0 FUN_1414c4cc0 body=44 status=ok
// SIG undefined FUN_1414c4cc0(void)

void FUN_1414c4cc0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x10))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414c4cf0 FUN_1414c4cf0 body=128 status=ok
// SIG undefined FUN_1414c4cf0(void)

void FUN_1414c4cf0(undefined8 param_1,longlong param_2)

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
  FUN_140e86430(param_1,local_res10);
  return;
}



// FUNCTION 1414c4d70 FUN_1414c4d70 body=128 status=ok
// SIG undefined FUN_1414c4d70(void)

void FUN_1414c4d70(undefined8 param_1,longlong param_2)

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
  FUN_140e879c0(param_1,local_res10);
  return;
}



// FUNCTION 1414c4df0 FUN_1414c4df0 body=128 status=ok
// SIG undefined FUN_1414c4df0(void)

void FUN_1414c4df0(undefined8 param_1,longlong param_2)

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
  thunk_FUN_140e8d170(param_1,local_res10);
  return;
}



// FUNCTION 1414c4e70 FUN_1414c4e70 body=130 status=ok
// SIG undefined FUN_1414c4e70(void)

void FUN_1414c4e70(undefined8 param_1,longlong param_2)

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
  FUN_140e883d0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414c4f00 execMulticastChangeSkinAndColor body=188 status=ok
// SIG undefined execMulticastChangeSkinAndColor(void)

void ABattleHomePlayer::execMulticastChangeSkinAndColor(undefined8 param_1,longlong param_2)

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
  MulticastChangeSkinAndColor_Implementation(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 1414c4fc0 FUN_1414c4fc0 body=128 status=ok
// SIG undefined FUN_1414c4fc0(void)

void FUN_1414c4fc0(undefined8 param_1,longlong param_2)

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
  FUN_140e88e80(param_1,local_res10);
  return;
}



// FUNCTION 1414c5040 FUN_1414c5040 body=128 status=ok
// SIG undefined FUN_1414c5040(void)

void FUN_1414c5040(undefined8 param_1,longlong param_2)

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
  FUN_140e88eb0(param_1,local_res10);
  return;
}



// FUNCTION 1414c5100 FUN_1414c5100 body=129 status=ok
// SIG undefined FUN_1414c5100(void)

void FUN_1414c5100(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 8))(param_1,local_res8);
  return;
}



// FUNCTION 1414c5190 execSetupContextVariables body=128 status=ok
// SIG undefined execSetupContextVariables(void)

void IDialogProviderInterface::execSetupContextVariables(undefined8 *param_1,longlong param_2)

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
  (**(code **)*param_1)(param_1,local_res8);
  return;
}



// FUNCTION 1414c5210 FUN_1414c5210 body=130 status=ok
// SIG undefined FUN_1414c5210(void)

void FUN_1414c5210(undefined8 param_1,longlong param_2)

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
  FUN_140e91230(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414c52a0 FUN_1414c52a0 body=642 status=ok
// SIG undefined FUN_1414c52a0(void)

void FUN_1414c52a0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_30 = 0;
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_58[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
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
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_10 = local_20;
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140a3a520(local_30,local_38,&local_18,local_58[0],local_res20[0],local_res10[0],local_40,
                local_48,local_50);
  return;
}



// FUNCTION 1414c5530 FUN_1414c5530 body=205 status=ok
// SIG undefined FUN_1414c5530(void)

void FUN_1414c5530(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18;
  undefined8 local_10;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = 0;
  if (local_28 != 0) {
    local_10 = uStack_20;
  }
  local_18 = local_28;
  FUN_140e93b10(local_res10[0],&local_18);
  return;
}



// FUNCTION 1414c5600 FUN_1414c5600 body=205 status=ok
// SIG undefined FUN_1414c5600(void)

void FUN_1414c5600(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18;
  undefined8 local_10;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = 0;
  if (local_28 != 0) {
    local_10 = uStack_20;
  }
  local_18 = local_28;
  FUN_140e93b80(local_res10[0],&local_18);
  return;
}



// FUNCTION 1414c56f0 FUN_1414c56f0 body=128 status=ok
// SIG undefined FUN_1414c56f0(void)

void FUN_1414c56f0(undefined8 param_1,longlong param_2)

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
  FUN_140e95030(param_1,local_res10);
  return;
}



// FUNCTION 1414c5770 FUN_1414c5770 body=162 status=ok
// SIG undefined FUN_1414c5770(void)

longlong FUN_1414c5770(void)

{
  if (DAT_14689fcb8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SpawnFactory_OakAI",&DAT_14689fcb8,FUN_140447710,0x2a8,
                  0x10000000,0,L"Engine",&LAB_1414c70b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimMontage::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14689fcb8;
}



// FUNCTION 1414c5820 FUN_1414c5820 body=53 status=ok
// SIG undefined FUN_1414c5820(void)

void FUN_1414c5820(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_144bcd238;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1414c5860 FUN_1414c5860 body=53 status=ok
// SIG undefined FUN_1414c5860(void)

void FUN_1414c5860(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144bccb30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414c58a0 FUN_1414c58a0 body=53 status=ok
// SIG undefined FUN_1414c58a0(void)

void FUN_1414c58a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144bcd350;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414c58e0 FUN_1414c58e0 body=162 status=ok
// SIG undefined FUN_1414c58e0(void)

longlong FUN_1414c58e0(void)

{
  if (DAT_14689fe08 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SpawnPerformance_Skeletal",&DAT_14689fe08,FUN_140447710,0x460
                  ,0x10000000,0,L"Engine",&LAB_1414c7020,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1414c8ac0,&LAB_140447700,0);
  }
  return DAT_14689fe08;
}



// FUNCTION 1414c59b0 FUN_1414c59b0 body=162 status=ok
// SIG undefined FUN_1414c59b0(void)

longlong FUN_1414c59b0(void)

{
  if (DAT_14689fe18 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SpawnPerformance_SkeletalWithReference",&DAT_14689fe18,
                  FUN_140447710,0x460,0x10000000,0,L"Engine",&LAB_1414c7040,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1414c58e0
                  ,&LAB_140447700,0);
  }
  return DAT_14689fe18;
}



// FUNCTION 1414c5a60 FUN_1414c5a60 body=162 status=ok
// SIG undefined FUN_1414c5a60(void)

longlong FUN_1414c5a60(void)

{
  if (DAT_14689fcc8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SpawnFactory_OakInteractiveObject",&DAT_14689fcc8,
                  FUN_140447710,0x208,0x10000000,0,L"Engine",&LAB_1414c70d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimMontage::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14689fcc8;
}



// FUNCTION 1414c5b10 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGPingUsable::GetPrivateStaticClass(void)

{
  if (DAT_14689fe28 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SpawnPerformance_10SMC",&DAT_14689fe28,FUN_140447710,0x4a8,
                  0x10000000,0,L"Engine",&LAB_1414c6fe0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1414c8ac0,&LAB_140447700,0);
  }
  return DAT_14689fe28;
}



// FUNCTION 1414c5bc0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGPingUsable::GetPrivateStaticClass(void)

{
  if (DAT_14689fe38 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SpawnPerformance_10SMCWithReferences",&DAT_14689fe38,
                  FUN_140447710,0x4a8,0x10000000,0,L"Engine",&LAB_1414c7000,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14689fe38;
}



// FUNCTION 1414c5c70 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGPingUsable::GetPrivateStaticClass(void)

{
  if (DAT_14689fe48 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SpawnPerformance_10Components",&DAT_14689fe48,FUN_140447710,
                  0x4a8,0x10000000,0,L"Engine",&LAB_1414c6fa0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1414c8ac0,&LAB_140447700,0);
  }
  return DAT_14689fe48;
}



// FUNCTION 1414c5d40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGPingUsable::GetPrivateStaticClass(void)

{
  if (DAT_14689fe58 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SpawnPerformance_10ComponentsWithReferences",&DAT_14689fe58,
                  FUN_140447710,0x4a8,0x10000000,0,L"Engine",&LAB_1414c6fc0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14689fe58;
}



// FUNCTION 1414c5df0 FUN_1414c5df0 body=162 status=ok
// SIG undefined FUN_1414c5df0(void)

longlong FUN_1414c5df0(void)

{
  if (DAT_14689fcd8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SpawnFactory_OakItemPickup",&DAT_14689fcd8,FUN_140447710,
                  0x210,0x10000000,0,L"Engine",&LAB_1414c70f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimMontage::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14689fcd8;
}



// FUNCTION 1414c5ea0 FUN_1414c5ea0 body=47 status=ok
// SIG undefined FUN_1414c5ea0(void)

longlong FUN_1414c5ea0(void)

{
  if (DAT_14689fe00 == 0) {
    FUN_141786440(&DAT_14689fe00,&PTR_FUN_144bc8420);
  }
  return DAT_14689fe00;
}



// FUNCTION 1414c5ed0 FUN_1414c5ed0 body=47 status=ok
// SIG undefined FUN_1414c5ed0(void)

longlong FUN_1414c5ed0(void)

{
  if (DAT_14689fe20 == 0) {
    FUN_141786440(&DAT_14689fe20,&PTR_GetPrivateStaticClass_144bc8840);
  }
  return DAT_14689fe20;
}



// FUNCTION 1414c5f00 FUN_1414c5f00 body=47 status=ok
// SIG undefined FUN_1414c5f00(void)

longlong FUN_1414c5f00(void)

{
  if (DAT_14689fe40 == 0) {
    FUN_141786440(&DAT_14689fe40,&PTR_GetPrivateStaticClass_144bc90b0);
  }
  return DAT_14689fe40;
}



// FUNCTION 1414c5f60 FUN_1414c5f60 body=162 status=ok
// SIG undefined FUN_1414c5f60(void)

longlong FUN_1414c5f60(void)

{
  if (DAT_14689fce8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SpawnFactory_OakProjectile",&DAT_14689fce8,FUN_140447710,
                  0x208,0x10000000,0,L"Engine",FUN_1414c7100,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimMontage::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14689fce8;
}



// FUNCTION 1414c6010 FUN_1414c6010 body=162 status=ok
// SIG undefined FUN_1414c6010(void)

longlong FUN_1414c6010(void)

{
  if (DAT_14689fd78 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SpawnFactory_OakVehicleRandomSeats",&DAT_14689fd78,
                  FUN_140447710,0x228,0x10000000,0,L"Engine",&LAB_1414c7210,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UTextBlock::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14689fd78;
}



// FUNCTION 1414c60e0 FUN_1414c60e0 body=162 status=ok
// SIG undefined FUN_1414c60e0(void)

longlong FUN_1414c60e0(void)

{
  if (DAT_14689fcf8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SpawnFactory_OakTurret",&DAT_14689fcf8,FUN_140447710,0x210,
                  0x10000000,0,L"Engine",&LAB_1414c71b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimMontage::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14689fcf8;
}



// FUNCTION 1414c61c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTextBlock::GetPrivateStaticClass(void)

{
  if (DAT_14689fd08 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SpawnFactory_OakVehicle",&DAT_14689fd08,FUN_140447710,0x218,
                  0x10000000,0,L"Engine",&LAB_1414c71d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimMontage::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14689fd08;
}



// FUNCTION 1414c6280 FUN_1414c6280 body=53 status=ok
// SIG undefined FUN_1414c6280(void)

void FUN_1414c6280(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144bcd468;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414c62d0 FUN_1414c62d0 body=47 status=ok
// SIG undefined FUN_1414c62d0(void)

longlong FUN_1414c62d0(void)

{
  if (DAT_14689fd00 == 0) {
    FUN_141786440(&DAT_14689fd00,&PTR_GetPrivateStaticClass_144bc9cb0);
  }
  return DAT_14689fd00;
}



// FUNCTION 1414c6310 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAnimMontage::GetPrivateStaticClass(void)

{
  if (DAT_14689fc90 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SpawnFactory_Oak",&DAT_14689fc90,FUN_140447710,0x1e0,
                  0x10000000,0,L"Engine",&LAB_1414c7090,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14689fc90;
}



// FUNCTION 1414c63c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMaterialInstanceDynamic::GetPrivateStaticClass(void)

{
  if (DAT_14689fc80 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SpawnFactory_Lootable",&DAT_14689fc80,FUN_140447710,0x220,
                  0x10000000,0,L"Engine",&LAB_1414c7080,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimMontage::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14689fc80;
}



// FUNCTION 1414c6470 Z_Construct_UClass_UGGameInstance body=47 status=ok
// SIG undefined Z_Construct_UClass_UGGameInstance(void)

longlong Z_Construct_UClass_UGGameInstance(void)

{
  if (DAT_14689fc88 == 0) {
    FUN_141786440(&DAT_14689fc88,&PTR_GetPrivateStaticClass_144bca0e0);
  }
  return DAT_14689fc88;
}



// FUNCTION 1414c64b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UProgressBar::GetPrivateStaticClass(void)

{
  if (DAT_14689fe90 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SplatDamageData",&DAT_14689fe90,FUN_140447710,0x310,
                  0x10000000,0,L"Engine",FUN_1414c7380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1413b6dc0,&LAB_140447700,0);
  }
  return DAT_14689fe90;
}



// FUNCTION 1414c6570 FUN_1414c6570 body=151 status=ok
// SIG undefined FUN_1414c6570(void)

longlong FUN_1414c6570(void)

{
  if (DAT_14689fdf8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SpawnLootManager",&DAT_14689fdf8,FUN_1414c8b10,0x80,
                  0x10000008,0,L"Game",FUN_1414c7230,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_14689fdf8;
}



// FUNCTION 1414c6620 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneLevelVisibilitySection::GetPrivateStaticClass(void)

{
  if (DAT_14689fea0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SplatData",&DAT_14689fea0,FUN_140447710,0xf8,0x10000000,0,
                  L"Engine",&LAB_1414c73b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14689fea0;
}



// FUNCTION 1414c66e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTextBlock::GetPrivateStaticClass(void)

{
  if (DAT_14689ff30 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SplineFollowerComponent",&DAT_14689ff30,
                  StaticRegisterNativesUTextBlock,0x218,0x10000000,0,L"Engine",&LAB_1414c73d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_14689ff30;
}



// FUNCTION 1414c6790 FUN_1414c6790 body=47 status=ok
// SIG undefined FUN_1414c6790(void)

longlong FUN_1414c6790(void)

{
  if (DAT_14689fdc0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689fdc0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146465be0);
  }
  return DAT_14689fdc0;
}



// FUNCTION 1414c67c0 FUN_1414c67c0 body=47 status=ok
// SIG undefined FUN_1414c67c0(void)

longlong FUN_1414c67c0(void)

{
  if (DAT_14689fde0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689fde0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146466310);
  }
  return DAT_14689fde0;
}



// FUNCTION 1414c67f0 FUN_1414c67f0 body=47 status=ok
// SIG undefined FUN_1414c67f0(void)

longlong FUN_1414c67f0(void)

{
  if (DAT_14689fdf0 == 0) {
    FUN_141786440(&DAT_14689fdf0,&PTR_FUN_144bcc0f0);
  }
  return DAT_14689fdf0;
}



// FUNCTION 1414c6820 FUN_1414c6820 body=47 status=ok
// SIG undefined FUN_1414c6820(void)

longlong FUN_1414c6820(void)

{
  if (DAT_14689fde8 == 0) {
    FUN_141786a30(&DAT_14689fde8,&PTR_FUN_146466390);
  }
  return DAT_14689fde8;
}



// FUNCTION 1414c6850 FUN_1414c6850 body=47 status=ok
// SIG undefined FUN_1414c6850(void)

longlong FUN_1414c6850(void)

{
  if (DAT_14689ff28 == 0) {
    FUN_141786440(&DAT_14689ff28,&PTR_GetPrivateStaticClass_144bcbd50);
  }
  return DAT_14689ff28;
}



// FUNCTION 1414c6880 FUN_1414c6880 body=47 status=ok
// SIG undefined FUN_1414c6880(void)

longlong FUN_1414c6880(void)

{
  if (DAT_14689fec8 == 0) {
    FUN_141786a30(&DAT_14689fec8,&PTR_FUN_146467b10);
  }
  return DAT_14689fec8;
}



// FUNCTION 1414c68b0 FUN_1414c68b0 body=47 status=ok
// SIG undefined FUN_1414c68b0(void)

longlong FUN_1414c68b0(void)

{
  if (DAT_14689fed0 == 0) {
    FUN_141786a30(&DAT_14689fed0,&PTR_FUN_146467ba0);
  }
  return DAT_14689fed0;
}



// FUNCTION 1414c68e0 FUN_1414c68e0 body=53 status=ok
// SIG undefined FUN_1414c68e0(void)

void FUN_1414c68e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144bcd890;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414c6920 FUN_1414c6920 body=47 status=ok
// SIG undefined FUN_1414c6920(void)

longlong FUN_1414c6920(void)

{
  if (DAT_14689fed8 == 0) {
    FUN_141786a30(&DAT_14689fed8,&PTR_FUN_146467c60);
  }
  return DAT_14689fed8;
}



// FUNCTION 1414c6950 FUN_1414c6950 body=47 status=ok
// SIG undefined FUN_1414c6950(void)

longlong FUN_1414c6950(void)

{
  if (DAT_14689fee0 == 0) {
    FUN_141786a30(&DAT_14689fee0,&PTR_FUN_146467ce0);
  }
  return DAT_14689fee0;
}



// FUNCTION 1414c6980 FUN_1414c6980 body=47 status=ok
// SIG undefined FUN_1414c6980(void)

longlong FUN_1414c6980(void)

{
  if (DAT_14689fee8 == 0) {
    FUN_141786a30(&DAT_14689fee8,&PTR_FUN_146467d70);
  }
  return DAT_14689fee8;
}



// FUNCTION 1414c69b0 FUN_1414c69b0 body=47 status=ok
// SIG undefined FUN_1414c69b0(void)

longlong FUN_1414c69b0(void)

{
  if (DAT_14689fef0 == 0) {
    FUN_141786a30(&DAT_14689fef0,&PTR_FUN_146467db0);
  }
  return DAT_14689fef0;
}



// FUNCTION 1414c69e0 FUN_1414c69e0 body=47 status=ok
// SIG undefined FUN_1414c69e0(void)

longlong FUN_1414c69e0(void)

{
  if (DAT_14689fef8 == 0) {
    FUN_141786a30(&DAT_14689fef8,&PTR_FUN_146467e40);
  }
  return DAT_14689fef8;
}



// FUNCTION 1414c6a10 FUN_1414c6a10 body=47 status=ok
// SIG undefined FUN_1414c6a10(void)

longlong FUN_1414c6a10(void)

{
  if (DAT_14689ff00 == 0) {
    FUN_141786a30(&DAT_14689ff00,&PTR_FUN_146467ec0);
  }
  return DAT_14689ff00;
}



// FUNCTION 1414c6a40 FUN_1414c6a40 body=47 status=ok
// SIG undefined FUN_1414c6a40(void)

longlong FUN_1414c6a40(void)

{
  if (DAT_14689ff08 == 0) {
    FUN_141786a30(&DAT_14689ff08,&PTR_FUN_146467f00);
  }
  return DAT_14689ff08;
}



// FUNCTION 1414c6a70 FUN_1414c6a70 body=47 status=ok
// SIG undefined FUN_1414c6a70(void)

longlong FUN_1414c6a70(void)

{
  if (DAT_14689ff10 == 0) {
    FUN_141786a30(&DAT_14689ff10,&PTR_FUN_146467f90);
  }
  return DAT_14689ff10;
}



// FUNCTION 1414c6aa0 FUN_1414c6aa0 body=47 status=ok
// SIG undefined FUN_1414c6aa0(void)

longlong FUN_1414c6aa0(void)

{
  if (DAT_14689ff18 == 0) {
    FUN_141786a30(&DAT_14689ff18,&PTR_FUN_146468020);
  }
  return DAT_14689ff18;
}



// FUNCTION 1414c6ad0 FUN_1414c6ad0 body=47 status=ok
// SIG undefined FUN_1414c6ad0(void)

longlong FUN_1414c6ad0(void)

{
  if (DAT_14689ff20 == 0) {
    FUN_141786a30(&DAT_14689ff20,&PTR_FUN_1464680a0);
  }
  return DAT_14689ff20;
}



// FUNCTION 1414c6b00 FUN_1414c6b00 body=53 status=ok
// SIG undefined FUN_1414c6b00(void)

void FUN_1414c6b00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x110;
    *puVar1 = &PTR_FUN_144bcd9a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1414c6b40 FUN_1414c6b40 body=53 status=ok
// SIG undefined FUN_1414c6b40(void)

void FUN_1414c6b40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144bce7e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414c6b80 FUN_1414c6b80 body=53 status=ok
// SIG undefined FUN_1414c6b80(void)

void FUN_1414c6b80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144bcdac0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414c6bc0 FUN_1414c6bc0 body=53 status=ok
// SIG undefined FUN_1414c6bc0(void)

void FUN_1414c6bc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &PTR_FUN_144bcdbd8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414c6c00 FUN_1414c6c00 body=53 status=ok
// SIG undefined FUN_1414c6c00(void)

void FUN_1414c6c00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &PTR_FUN_144bcdcf0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414c6c40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ARemnantWeaponMod::GetPrivateStaticClass(void)

{
  if (DAT_14689fe68 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SpinnerSliderTestMovie",&DAT_14689fe68,FUN_140447710,0x6c0,
                  0x10000000,0,L"Engine",FUN_1414c72e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1413a3fb0,&LAB_140447700,0);
  }
  return DAT_14689fe68;
}



// FUNCTION 1414c6d00 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGJournalKey::GetPrivateStaticClass(void)

{
  if (DAT_14689fd48 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VehiclePartSetData",&DAT_14689fd48,FUN_140447710,0xa0,
                  0x10000000,0,L"Engine",FUN_1414c73e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14302b270,&LAB_140447700,0);
  }
  return DAT_14689fd48;
}



// FUNCTION 1414c6db0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGShockOrb::GetPrivateStaticClass(void)

{
  if (DAT_14689fe80 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"Splat",&DAT_14689fe80,StaticRegisterNativesAGShockOrb,0x4b0,
                  0x10000000,0,L"Engine",&LAB_1414c7060,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14689fe80;
}



// FUNCTION 1414c6e80 FUN_1414c6e80 body=47 status=ok
// SIG undefined FUN_1414c6e80(void)

longlong FUN_1414c6e80(void)

{
  if (DAT_14689fe78 == 0) {
    FUN_141786440(&DAT_14689fe78,&PTR_GetPrivateStaticClass_144bcc5b0);
  }
  return DAT_14689fe78;
}



// FUNCTION 1414c6eb0 FUN_1414c6eb0 body=47 status=ok
// SIG undefined FUN_1414c6eb0(void)

longlong FUN_1414c6eb0(void)

{
  if (DAT_14689fe70 == 0) {
    FUN_141786a30(&DAT_14689fe70,&PTR_FUN_146466dc0);
  }
  return DAT_14689fe70;
}



// FUNCTION 1414c6ee0 FUN_1414c6ee0 body=162 status=ok
// SIG undefined FUN_1414c6ee0(void)

longlong FUN_1414c6ee0(void)

{
  if (DAT_14689fd58 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SpawnFactory_OakVehicleBuilder",&DAT_14689fd58,FUN_140447710,
                  0x2a0,0x10000000,0,L"Engine",&LAB_1414c71f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UTextBlock::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14689fd58;
}



// FUNCTION 1414c7100 FUN_1414c7100 body=175 status=ok
// SIG undefined FUN_1414c7100(void)

void FUN_1414c7100(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140e9b610(puVar1,param_1);
    *puVar1 = &PTR_FUN_144bccc48;
    puVar1[0x13] = &PTR_LAB_144bccf98;
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
    *(undefined4 *)(puVar1 + 0x3c) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x1e4) = 0;
    puVar1[0x3e] = 0;
    *(undefined4 *)(puVar1 + 0x40) = 0;
    if (0x7fffffff < *(uint *)((longlong)puVar1 + 0x204)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 0x3f,0);
    }
    if ((undefined2 *)puVar1[0x3f] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[0x3f] = 0;
    }
    *(undefined4 *)(puVar1 + 0x3d) = 0;
  }
  return;
}



// FUNCTION 1414c7230 FUN_1414c7230 body=173 status=ok
// SIG undefined FUN_1414c7230(void)

void FUN_1414c7230(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_141781840(puVar3,param_1);
    puVar1 = puVar3 + 5;
    *puVar1 = &PTR__purecall_143f740d8;
    plVar4 = (longlong *)FUN_1404cfca0();
    iVar2 = (int)plVar4[1];
    *(int *)(plVar4 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar4 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar2);
    }
    *(undefined8 **)(*plVar4 + (longlong)iVar2 * 8) = puVar1;
    *puVar3 = &PTR_FUN_144bcd580;
    *puVar1 = &PTR_FUN_144bcd7f8;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
  }
  return;
}



// FUNCTION 1414c72e0 FUN_1414c72e0 body=157 status=ok
// SIG undefined FUN_1414c72e0(void)

void FUN_1414c72e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140e9aa30(puVar1,param_1);
    *puVar1 = &PTR_FUN_144646880;
    puVar1[0x9b] = &PTR_LAB_144646df0;
    FWeakObjectPtr::operator=(puVar1 + 0xd0,0);
    *(undefined4 *)(puVar1 + 0xd1) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0xd3) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x69c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x68c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0xd2) = 0x10000;
    *(undefined2 *)((longlong)puVar1 + 0x694) = 0;
    puVar1[0xd4] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144bcde18;
    puVar1[0x9b] = &PTR_LAB_144bce3c0;
  }
  return;
}



// FUNCTION 1414c7380 FUN_1414c7380 body=41 status=ok
// SIG undefined FUN_1414c7380(void)

void FUN_1414c7380(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140a7b4b0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144bce550;
  }
  return;
}



// FUNCTION 1414c73e0 FUN_1414c73e0 body=41 status=ok
// SIG undefined FUN_1414c73e0(void)

void FUN_1414c73e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142fdf690(puVar1,param_1);
    *puVar1 = &PTR_FUN_144bccfb0;
  }
  return;
}



// FUNCTION 1414c7410 FUN_1414c7410 body=326 status=ok
// SIG undefined FUN_1414c7410(void)

void FUN_1414c7410(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar5 = (longlong *)(lVar1 + 200);
    do {
      iVar4 = (int)plVar5[1];
      lVar1 = *plVar5;
      if (iVar4 != 0) {
        plVar2 = (longlong *)(lVar1 + 0xb8);
        do {
          if (plVar2[3] != 0) {
            FMemory::Free();
          }
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          if (plVar2[-2] != 0) {
            FMemory::Free();
          }
          if (plVar2[-4] != 0) {
            FMemory::Free();
          }
          if (plVar2[-6] != 0) {
            FMemory::Free();
          }
          if (plVar2[-0xe] != 0) {
            FMemory::Free();
          }
          if (plVar2[-0x10] != 0) {
            FMemory::Free();
          }
          TArray<FNamedInterfaceDef,FDefaultAllocator>::
          ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar2 + -0x13);
          plVar2 = plVar2 + 0x1c;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        lVar1 = *plVar5;
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar5 + -4);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar5 + -10);
      if (plVar5[-0xe] != 0) {
        FMemory::Free();
      }
      FUN_1409f5880(plVar5 + -0x18);
      plVar5 = plVar5 + 0x22;
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



// FUNCTION 1414c7560 ~TArray<FRightClickMenuItemData,TSizedDefaultAllocator<32>_> body=99 status=ok
// SIG undefined ~TArray<FRightClickMenuItemData,TSizedDefaultAllocator<32>_>(void)

void TArray<FRightClickMenuItemData,TSizedDefaultAllocator<32>_>::
     ~TArray<FRightClickMenuItemData,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1 + 0x20);
      FUN_1409f5880(lVar1);
      lVar1 = lVar1 + 0x40;
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



// FUNCTION 1414c75d0 FUN_1414c75d0 body=136 status=ok
// SIG undefined FUN_1414c75d0(void)

void FUN_1414c75d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x20);
  return;
}



// FUNCTION 1414c7660 FUN_1414c7660 body=245 status=ok
// SIG undefined FUN_1414c7660(void)

void FUN_1414c7660(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 200);
  iVar3 = *(int *)(param_1 + 0xd0);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0xb8);
    do {
      if (plVar2[3] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-2] != 0) {
        FMemory::Free();
      }
      if (plVar2[-4] != 0) {
        FMemory::Free();
      }
      if (plVar2[-6] != 0) {
        FMemory::Free();
      }
      if (plVar2[-0xe] != 0) {
        FMemory::Free();
      }
      if (plVar2[-0x10] != 0) {
        FMemory::Free();
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (plVar2 + -0x13);
      plVar2 = plVar2 + 0x1c;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 200);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xa8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_1409f5880(param_1 + 8);
  return;
}



// FUNCTION 1414c7760 FUN_1414c7760 body=457 status=ok
// SIG undefined FUN_1414c7760(void)

longlong * FUN_1414c7760(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  longlong *plVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar3 = (longlong *)(*param_1 + 0xb8);
    do {
      if (plVar3[3] != 0) {
        FMemory::Free();
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      if (plVar3[-2] != 0) {
        FMemory::Free();
      }
      if (plVar3[-4] != 0) {
        FMemory::Free();
      }
      if (plVar3[-6] != 0) {
        FMemory::Free();
      }
      if (plVar3[-0xe] != 0) {
        FMemory::Free();
      }
      if (plVar3[-0x10] != 0) {
        FMemory::Free();
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (plVar3 + -0x13);
      plVar3 = plVar3 + 0x1c;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = (int)param_2[1];
  lVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar6;
  if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FAsyncPathFindingQuery,FDefaultAllocator>::ResizeForCopy(param_1,iVar6);
    lVar5 = *param_1;
    if (iVar6 != 0) {
      puVar7 = (undefined1 *)(lVar2 + 0x60);
      puVar4 = (undefined4 *)(lVar5 + 0xdc);
      do {
        FUN_1409f3dd0(lVar5,puVar7 + -0x60);
        *(undefined1 *)(puVar4 + -0x1f) = *puVar7;
        FUN_140a4f390(puVar4 + -0x1d,puVar7 + 8);
        *(undefined8 *)(puVar4 + -3) = 0;
        iVar1 = *(int *)(puVar7 + 0x78);
        _Src = *(void **)(puVar7 + 0x70);
        puVar4[-1] = iVar1;
        if (iVar1 == 0) {
          *puVar4 = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar4 + -3,iVar1,0)
          ;
          _guard_xfg_dispatch_icall_nop(*(void **)(puVar4 + -3),_Src,(longlong)iVar1 << 3);
        }
        lVar5 = lVar5 + 0xe0;
        puVar4 = puVar4 + 0x38;
        puVar7 = puVar7 + 0xe0;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return param_1;
}



// FUNCTION 1414c7930 FUN_1414c7930 body=613 status=ok
// SIG undefined FUN_1414c7930(void)

undefined8 * FUN_1414c7930(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  int iVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  plVar1 = param_1 + 4;
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  if (plVar1 != param_2 + 4) {
    iVar4 = *(int *)(param_1 + 5);
    if (iVar4 != 0) {
      plVar5 = (longlong *)(*plVar1 + 8);
      do {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 3;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_140a9c490(plVar1,param_2[4],*(undefined4 *)(param_2 + 5),
                  *(undefined4 *)((longlong)param_1 + 0x2c),0);
  }
  puVar2 = param_1 + 7;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  if (puVar2 != param_2 + 7) {
    iVar4 = *(int *)(param_2 + 8);
    pvVar3 = (void *)param_2[7];
    *(int *)(param_1 + 8) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0x44) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar2,iVar4);
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,pvVar3,(longlong)iVar4 << 3);
    }
  }
  TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(param_1 + 9,param_2 + 9);
  puVar2 = param_1 + 0x11;
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x59);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  if (puVar2 != param_2 + 0x11) {
    iVar4 = *(int *)(param_2 + 0x12);
    pvVar3 = (void *)param_2[0x11];
    *(int *)(param_1 + 0x12) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0x94) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x94) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar2,iVar4);
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,pvVar3,(longlong)iVar4 << 3);
    }
  }
  TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(param_1 + 0x13,param_2 + 0x13);
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(param_1 + 0x15,param_2 + 0x15)
  ;
  puVar2 = param_1 + 0x17;
  if (puVar2 != param_2 + 0x17) {
    iVar4 = *(int *)(param_2 + 0x18);
    pvVar3 = (void *)param_2[0x17];
    *(int *)(param_1 + 0x18) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0xc4) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar2,iVar4);
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,pvVar3,(longlong)iVar4 << 3);
    }
  }
  puVar2 = param_1 + 0x1a;
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  *(undefined1 *)((longlong)param_1 + 0xc9) = *(undefined1 *)((longlong)param_2 + 0xc9);
  if (puVar2 != param_2 + 0x1a) {
    iVar4 = *(int *)(param_2 + 0x1b);
    pvVar3 = (void *)param_2[0x1a];
    *(int *)(param_1 + 0x1b) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0xdc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar2,iVar4);
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,pvVar3,(longlong)iVar4 << 3);
    }
  }
  return param_1;
}



// FUNCTION 1414c7ba0 FUN_1414c7ba0 body=178 status=ok
// SIG undefined FUN_1414c7ba0(void)

undefined8 * FUN_1414c7ba0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  FUN_1409f6900(param_1 + 1,param_2 + 1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x19);
  *(undefined1 *)((longlong)param_1 + 0x1a) = *(undefined1 *)((longlong)param_2 + 0x1a);
  plVar1 = param_1 + 5;
  param_1[4] = param_2[4];
  if (param_2 + 5 != plVar1) {
    if ((*(int *)(param_2 + 6) != 0) && (plVar2 = (longlong *)param_2[5], plVar2 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
      return param_1;
    }
    if ((*(int *)(param_1 + 6) != 0) && (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*plVar1 != 0) {
        lVar3 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar3;
      }
      *(undefined4 *)(param_1 + 6) = 0;
    }
  }
  return param_1;
}



// FUNCTION 1414c7c80 FUN_1414c7c80 body=128 status=ok
// SIG undefined FUN_1414c7c80(void)

longlong FUN_1414c7c80(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x1c8);
  FUN_1407e68c0(param_1 + 0xf8);
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_1440e9a70;
  FUN_1407be1b0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x208);
  }
  return param_1;
}



// FUNCTION 1414c7d00 FUN_1414c7d00 body=111 status=ok
// SIG undefined FUN_1414c7d00(void)

longlong FUN_1414c7d00(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  TArray<FRightClickMenuItemData,TSizedDefaultAllocator<32>_>::
  ~TArray<FRightClickMenuItemData,TSizedDefaultAllocator<32>_>(param_1 + 0x48);
  FUN_1414c7410(param_1 + 0x38);
  FUN_1404bf750(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1414c7d70 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
ADebugCameraController::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140e9c5f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6c0);
  }
  return param_1;
}



// FUNCTION 1414c7db0 FUN_1414c7db0 body=91 status=ok
// SIG undefined FUN_1414c7db0(void)

longlong FUN_1414c7db0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x58);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x48);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1414c7e10 FUN_1414c7e10 body=125 status=ok
// SIG undefined FUN_1414c7e10(void)

void FUN_1414c7e10(undefined8 param_1,void *param_2)

{
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  _guard_xfg_dispatch_icall_nop(param_2,0,0x60);
  *(undefined1 *)((longlong)param_2 + 0x58) = 1;
  *(undefined1 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0;
  _guard_xfg_dispatch_icall_nop((void *)((longlong)param_2 + 0x68),0,0x68);
  *(undefined8 *)((longlong)param_2 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd8) = 0;
  return;
}



// FUNCTION 1414c7f70 FUN_1414c7f70 body=74 status=ok
// SIG undefined FUN_1414c7f70(void)

undefined1 FUN_1414c7f70(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1414c7930(param_2 + param_3,param_3);
      param_3 = param_3 + 0xe0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414c7fc0 FUN_1414c7fc0 body=410 status=ok
// SIG undefined FUN_1414c7fc0(void)

undefined8 FUN_1414c7fc0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined4 *)(param_3 + 0x9c);
    do {
      *param_2 = *(undefined8 *)(puVar3 + -0x27);
      FUN_1409f6900(param_2 + 1,puVar3 + -0x25);
      puVar1 = param_2 + 0xb;
      param_2[3] = *(undefined8 *)(puVar3 + -0x21);
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)(puVar3 + -0x1f);
      param_2[5] = *(undefined8 *)(puVar3 + -0x1d);
      *(undefined1 *)(param_2 + 6) = *(undefined1 *)(puVar3 + -0x1b);
      *(undefined1 *)((longlong)param_2 + 0x31) = *(undefined1 *)((longlong)puVar3 + -0x6b);
      *(undefined4 *)((longlong)param_2 + 0x34) = puVar3[-0x1a];
      *(undefined4 *)(param_2 + 7) = puVar3[-0x19];
      *(undefined4 *)((longlong)param_2 + 0x3c) = puVar3[-0x18];
      param_2[8] = *(undefined8 *)(puVar3 + -0x17);
      param_2[9] = *(undefined8 *)(puVar3 + -0x15);
      *(undefined1 *)(param_2 + 10) = *(undefined1 *)(puVar3 + -0x13);
      if (puVar1 != (undefined8 *)(puVar3 + -0x11)) {
        iVar2 = puVar3[-0xf];
        _Src = *(void **)(puVar3 + -0x11);
        *(int *)(param_2 + 0xc) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 100) == 0)) {
          *(undefined4 *)((longlong)param_2 + 100) = 0;
        }
        else {
          TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x48);
        }
      }
      *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(puVar3 + -0xd);
      param_2[0xe] = *(undefined8 *)(puVar3 + -0xb);
      FUN_1405bae40(param_2 + 0xf,puVar3 + -9);
      param_2[0x11] = *(undefined8 *)(puVar3 + -5);
      *(undefined1 *)(param_2 + 0x12) = *(undefined1 *)(puVar3 + -3);
      *(undefined4 *)(param_2 + 0x13) = puVar3[-1];
      *(undefined4 *)((longlong)param_2 + 0x9c) = *puVar3;
      param_2[0x14] = *(undefined8 *)(puVar3 + 1);
      FUN_1405bae40(param_2 + 0x15,puVar3 + 3);
      puVar3 = puVar3 + 0x2e;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x17;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414c8160 FUN_1414c8160 body=151 status=ok
// SIG undefined FUN_1414c8160(void)

undefined8 FUN_1414c8160(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar7 = (undefined4 *)(param_2 + 0x100);
    do {
      FUN_140b4ebb0(puVar7 + -0x40,param_3 + -0x100 + (longlong)puVar7);
      puVar7[-0x12] = *(undefined4 *)(param_3 + -0x48 + (longlong)puVar7);
      *(undefined1 *)(puVar7 + -0x11) = *(undefined1 *)(param_3 + -0x44 + (longlong)puVar7);
      puVar7[-0x10] = *(undefined4 *)(param_3 + -0x40 + (longlong)puVar7);
      FUN_1414c7760(puVar7 + -0xe,param_3 + -0x38 + (longlong)puVar7);
      puVar1 = (undefined8 *)(param_3 + -0x20 + (longlong)puVar7);
      uVar6 = puVar1[1];
      *(undefined8 *)(puVar7 + -8) = *puVar1;
      *(undefined8 *)(puVar7 + -6) = uVar6;
      puVar2 = (undefined4 *)(param_3 + -0x10 + (longlong)puVar7);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar7[-4] = *puVar2;
      puVar7[-3] = uVar3;
      puVar7[-2] = uVar4;
      puVar7[-1] = uVar5;
      puVar2 = (undefined4 *)(param_3 + (longlong)puVar7);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *puVar7 = *puVar2;
      puVar7[1] = uVar3;
      puVar7[2] = uVar4;
      puVar7[3] = uVar5;
      puVar7 = puVar7 + 0x44;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414c8200 FUN_1414c8200 body=345 status=ok
// SIG undefined FUN_1414c8200(void)

undefined8 FUN_1414c8200(undefined8 param_1,undefined1 *param_2,longlong param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  
  if (param_4 != 0) {
    piVar4 = (int *)(param_3 + 0x20);
    do {
      *param_2 = (char)piVar4[-8];
      piVar1 = (int *)(param_2 + 8);
      if (piVar1 != piVar4 + -6) {
        iVar2 = piVar4[-4];
        pvVar3 = *(void **)(piVar4 + -6);
        *(int *)(param_2 + 0x10) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x14) == 0)) {
          *(undefined4 *)(param_2 + 0x14) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(piVar1,iVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2 << 4);
        }
      }
      piVar1 = (int *)(param_2 + 0x18);
      if (piVar1 != piVar4 + -2) {
        iVar2 = *piVar4;
        pvVar3 = *(void **)(piVar4 + -2);
        *(int *)(param_2 + 0x20) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x24) == 0)) {
          *(undefined4 *)(param_2 + 0x24) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(piVar1,iVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2 << 4);
        }
      }
      piVar1 = (int *)(param_2 + 0x28);
      if (piVar1 != piVar4 + 2) {
        iVar2 = piVar4[4];
        pvVar3 = *(void **)(piVar4 + 2);
        *(int *)(param_2 + 0x30) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x34) == 0)) {
          *(undefined4 *)(param_2 + 0x34) = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(piVar1,iVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2 * 0x18);
        }
      }
      piVar4 = piVar4 + 0xe;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x38;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414c8360 FUN_1414c8360 body=330 status=ok
// SIG undefined FUN_1414c8360(void)

undefined8 FUN_1414c8360(undefined8 param_1,longlong *param_2,longlong *param_3,int param_4)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar4 = (int)param_2[1];
      if (iVar4 != 0) {
        plVar2 = (longlong *)(*param_2 + 0x88);
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 0x25;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar4 = (int)param_3[1];
      lVar3 = *param_3;
      *(int *)(param_2 + 1) = iVar4;
      if ((iVar4 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FOptionRowData,FDefaultAllocator>::ResizeForCopy(param_2,iVar4);
        puVar5 = (undefined8 *)*param_2;
        if (iVar4 != 0) {
          lVar3 = lVar3 + 0x88;
          do {
            *puVar5 = *(undefined8 *)(lVar3 + -0x88);
            FUN_142de2b80(puVar5 + 1,lVar3 + -0x80);
            FString::FString(puVar5 + 0x11,lVar3);
            *(undefined1 *)(puVar5 + 0x13) = *(undefined1 *)(lVar3 + 0x10);
            FUN_142de2b80(puVar5 + 0x14,lVar3 + 0x18);
            puVar1 = (undefined4 *)(lVar3 + 0x98);
            lVar3 = lVar3 + 0x128;
            *(undefined4 *)(puVar5 + 0x24) = *puVar1;
            puVar5 = puVar5 + 0x25;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
    }
    plVar2 = param_3 + 2;
    param_3 = param_3 + 3;
    *(int *)(param_2 + 2) = (int)*plVar2;
    param_2 = param_2 + 3;
  }
  return 1;
}



// FUNCTION 1414c84b0 FUN_1414c84b0 body=229 status=ok
// SIG undefined FUN_1414c84b0(void)

undefined8 FUN_1414c84b0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    do {
      *param_2 = *(undefined8 *)(param_3 + -8);
      FUN_1409f6900(param_2 + 1,param_3);
      *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_3 + 0x10);
      *(undefined1 *)((longlong)param_2 + 0x19) = *(undefined1 *)(param_3 + 0x11);
      *(undefined1 *)((longlong)param_2 + 0x1a) = *(undefined1 *)(param_3 + 0x12);
      param_2[4] = *(undefined8 *)(param_3 + 0x18);
      plVar3 = param_2 + 5;
      if ((longlong *)(param_3 + 0x20) != plVar3) {
        if ((*(int *)(param_3 + 0x28) == 0) ||
           (plVar1 = *(longlong **)(param_3 + 0x20), plVar1 == (longlong *)0x0)) {
          if ((*(int *)(param_2 + 6) != 0) &&
             (plVar1 = (longlong *)*plVar3, plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x28))(plVar1,0);
            if (*plVar3 != 0) {
              lVar2 = FMemory::Realloc(*plVar3,0,0);
              *plVar3 = lVar2;
            }
            *(undefined4 *)(param_2 + 6) = 0;
          }
        }
        else {
          (**(code **)(*plVar1 + 0x30))(plVar1,plVar3);
        }
      }
      param_3 = param_3 + 0x38;
      param_4 = param_4 + -1;
      param_2 = param_2 + 7;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414c85a0 FUN_1414c85a0 body=79 status=ok
// SIG undefined FUN_1414c85a0(void)

undefined8 FUN_1414c85a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      FUN_1414c7ba0(param_2,param_3 + param_2);
      *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)(param_3 + 0x38 + param_2);
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414c85f0 Copy body=78 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FCompositeFallbackFont>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      FString::operator=(param_2,param_3 + param_2);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10 + param_2);
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414c8640 FUN_1414c8640 body=227 status=ok
// SIG undefined FUN_1414c8640(void)

undefined8 FUN_1414c8640(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined1 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined1 *)(param_3 + 8);
    do {
      *param_2 = *(undefined8 *)(puVar3 + -8);
      puVar1 = param_2 + 3;
      *(undefined1 *)(param_2 + 1) = *puVar3;
      *(undefined1 *)((longlong)param_2 + 9) = puVar3[1];
      *(undefined1 *)((longlong)param_2 + 10) = puVar3[2];
      *(undefined8 *)((longlong)param_2 + 0xc) = *(undefined8 *)(puVar3 + 4);
      *(undefined1 *)((longlong)param_2 + 0x14) = puVar3[0xc];
      if (puVar1 != (undefined8 *)(puVar3 + 0x10)) {
        iVar2 = *(int *)(puVar3 + 0x18);
        _Src = *(void **)(puVar3 + 0x10);
        *(int *)(param_2 + 4) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x24) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x24) = 0;
        }
        else {
          TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 6);
        }
      }
      puVar3 = puVar3 + 0x28;
      param_4 = param_4 + -1;
      param_2 = param_2 + 5;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414c8740 FUN_1414c8740 body=58 status=ok
// SIG undefined FUN_1414c8740(void)

void FUN_1414c8740(undefined8 param_1,longlong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0xa8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0x78);
  if (*(longlong *)(param_2 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_1409f5880(param_2 + 8);
  return;
}



// FUNCTION 1414c8790 Destruct body=62 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FFullyLoadedPackagesInfo>::Destruct
               (undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
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



// FUNCTION 1414c87e0 FUN_1414c87e0 body=32 status=ok
// SIG undefined FUN_1414c87e0(void)

void FUN_1414c87e0(undefined8 param_1,longlong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 0x28);
  FUN_1409f5880(param_2 + 8);
  return;
}



// FUNCTION 1414c8800 FUN_1414c8800 body=55 status=ok
// SIG undefined FUN_1414c8800(void)

void FUN_1414c8800(void)

{
  undefined8 uVar1;
  
  if (DAT_14689f858 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689f858 = GetStaticEnum(FUN_1414c92f0,uVar1,L"EItemDropOnDeathType");
  }
  return;
}



// FUNCTION 1414c8840 FUN_1414c8840 body=55 status=ok
// SIG undefined FUN_1414c8840(void)

void FUN_1414c8840(void)

{
  undefined8 uVar1;
  
  if (DAT_14689f860 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689f860 = GetStaticEnum(FUN_1414c9320,uVar1,L"ELootInstancingPolicy");
  }
  return;
}



// FUNCTION 1414c8880 FUN_1414c8880 body=55 status=ok
// SIG undefined FUN_1414c8880(void)

void FUN_1414c8880(void)

{
  undefined8 uVar1;
  
  if (DAT_14689f868 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689f868 = GetStaticEnum(FUN_1414c9350,uVar1,L"ESpawnDroppedPickupLootRequestType");
  }
  return;
}



// FUNCTION 1414c88c0 FUN_1414c88c0 body=6 status=ok
// SIG undefined FUN_1414c88c0(void)

undefined8 FUN_1414c88c0(void)

{
  return 0x64d97137;
}



// FUNCTION 1414c88d0 FUN_1414c88d0 body=6 status=ok
// SIG undefined FUN_1414c88d0(void)

undefined8 FUN_1414c88d0(void)

{
  return 0x1646e33c;
}



// FUNCTION 1414c88e0 FUN_1414c88e0 body=6 status=ok
// SIG undefined FUN_1414c88e0(void)

undefined8 FUN_1414c88e0(void)

{
  return 0x1f12094;
}



// FUNCTION 1414c88f0 FUN_1414c88f0 body=6 status=ok
// SIG undefined FUN_1414c88f0(void)

undefined8 FUN_1414c88f0(void)

{
  return 0x768ee00d;
}



// FUNCTION 1414c8900 FUN_1414c8900 body=6 status=ok
// SIG undefined FUN_1414c8900(void)

undefined8 FUN_1414c8900(void)

{
  return 0x948ade3e;
}



// FUNCTION 1414c8910 FUN_1414c8910 body=6 status=ok
// SIG undefined FUN_1414c8910(void)

undefined8 FUN_1414c8910(void)

{
  return 0x95e96bda;
}



// FUNCTION 1414c8920 FUN_1414c8920 body=6 status=ok
// SIG undefined FUN_1414c8920(void)

undefined8 FUN_1414c8920(void)

{
  return 0x4b1f5d9f;
}



// FUNCTION 1414c8930 FUN_1414c8930 body=6 status=ok
// SIG undefined FUN_1414c8930(void)

undefined8 FUN_1414c8930(void)

{
  return 0xdf21aad5;
}



// FUNCTION 1414c8940 FUN_1414c8940 body=6 status=ok
// SIG undefined FUN_1414c8940(void)

undefined8 FUN_1414c8940(void)

{
  return 0xadba34e8;
}



// FUNCTION 1414c8950 FUN_1414c8950 body=6 status=ok
// SIG undefined FUN_1414c8950(void)

undefined8 FUN_1414c8950(void)

{
  return 0x2bcc610f;
}



// FUNCTION 1414c8960 FUN_1414c8960 body=6 status=ok
// SIG undefined FUN_1414c8960(void)

undefined8 FUN_1414c8960(void)

{
  return 0xd0de2bd1;
}



// FUNCTION 1414c8a30 ResizeForCopy body=130 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FOptionRowData,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x128,0);
    iVar3 = (int)(uVar1 / 0x128);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x128,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1414c8ad0 thunk_FUN_14302b270 body=5 status=ok
// SIG undefined thunk_FUN_14302b270(void)

void thunk_FUN_14302b270(void)

{
  FUN_14302b270();
  return;
}



// FUNCTION 1414c8ae0 StaticRegisterNativesAGShockOrb body=34 status=ok
// SIG undefined StaticRegisterNativesAGShockOrb(void)

void AGShockOrb::StaticRegisterNativesAGShockOrb(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_InitializeSplat_144bce540,1);
  return;
}



// FUNCTION 1414c8b10 FUN_1414c8b10 body=34 status=ok
// SIG undefined FUN_1414c8b10(void)

void FUN_1414c8b10(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414c6570();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnNumPlayersChanged_144bcde08,1);
  return;
}



// FUNCTION 1414c8b40 StaticRegisterNativesUTextBlock body=34 status=ok
// SIG undefined StaticRegisterNativesUTextBlock(void)

void UTextBlock::StaticRegisterNativesUTextBlock(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetCurrentDistanceOnSpline_144bce900,0xc)
  ;
  return;
}



// FUNCTION 1414c8b70 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689fd20 == 0) {
    uVar1 = FUN_1414c88c0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689fd20 = GetStaticStruct(FUN_1414c9380,uVar2,L"SeatOccupant",0x10,uVar1);
  }
  return;
}



// FUNCTION 1414c8bd0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FTreasureDefinition::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689fdc8 == 0) {
    uVar1 = FUN_1414c88d0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689fdc8 =
         GetStaticStruct(FUN_1414c93b0,uVar2,L"SelectedInventorySpawningState",0xe0,uVar1);
  }
  return;
}



// FUNCTION 1414c8c30 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneParticleSectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689fdd8 == 0) {
    uVar1 = FUN_1414c88f0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689fdd8 = GetStaticStruct(FUN_1414c67c0,uVar2,L"SpawnDroppedPickupLootRequest",0xb8,uVar1)
    ;
  }
  return;
}



// FUNCTION 1414c8c90 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FObjectiveDebriefingElement::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689fda8 == 0) {
    uVar1 = FUN_1414c88e0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689fda8 =
         GetStaticStruct(FUN_1414c93e0,uVar2,L"SpawnDroppedPickupLootRequestEntry",0x110,uVar1);
  }
  return;
}



// FUNCTION 1414c8cf0 FUN_1414c8cf0 body=82 status=ok
// SIG undefined FUN_1414c8cf0(void)

void FUN_1414c8cf0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689fca0 == 0) {
    uVar1 = FUN_1414c8900();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689fca0 = GetStaticStruct(FUN_1414c9410,uVar2,L"SpawnFactorKeyedAction",0x38,uVar1);
  }
  return;
}



// FUNCTION 1414c8d50 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689fd60 == 0) {
    uVar1 = FUN_1414c8910();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689fd60 = GetStaticStruct(FUN_1414c9440,uVar2,L"SpawnFactoryDataArray",0x18,uVar1);
  }
  return;
}



// FUNCTION 1414c8db0 FUN_1414c8db0 body=82 status=ok
// SIG undefined FUN_1414c8db0(void)

void FUN_1414c8db0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689fdb8 == 0) {
    uVar1 = FUN_1414c8930();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689fdb8 = GetStaticStruct(FUN_1414c6790,uVar2,L"SpawnInventoryLootRequest",0x38,uVar1);
  }
  return;
}



// FUNCTION 1414c8e10 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689fd98 == 0) {
    uVar1 = FUN_1414c8920();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689fd98 =
         GetStaticStruct(FUN_1414c9470,uVar2,L"SpawnInventoryLootRequestEntry",0x40,uVar1);
  }
  return;
}



// FUNCTION 1414c8e70 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689feb8 == 0) {
    uVar1 = FUN_1414c8940();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689feb8 =
         GetStaticStruct(FUN_1414c94a0,uVar2,L"SplineFollowerDistanceCheckpoint",0x18,uVar1);
  }
  return;
}



// FUNCTION 1414c8ed0 FUN_1414c8ed0 body=82 status=ok
// SIG undefined FUN_1414c8ed0(void)

void FUN_1414c8ed0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689fd30 == 0) {
    uVar1 = FUN_1414c8950();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689fd30 = GetStaticStruct(FUN_1414c94d0,uVar2,L"VehiclePartListData",0x28,uVar1);
  }
  return;
}



// FUNCTION 1414c8f30 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvent::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689fd10 == 0) {
    uVar1 = FUN_1414c8960();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689fd10 = GetStaticStruct(FUN_1414c9500,uVar2,L"WeightedPassengersNum",8,uVar1);
  }
  return;
}



// FUNCTION 1414c8f90 FUN_1414c8f90 body=47 status=ok
// SIG undefined FUN_1414c8f90(void)

longlong FUN_1414c8f90(void)

{
  if (DAT_14689fe50 == 0) {
    FUN_141786440(&DAT_14689fe50,&PTR_GetPrivateStaticClass_144bc97a0);
  }
  return DAT_14689fe50;
}



// FUNCTION 1414c8fc0 FUN_1414c8fc0 body=47 status=ok
// SIG undefined FUN_1414c8fc0(void)

longlong FUN_1414c8fc0(void)

{
  if (DAT_14689fe30 == 0) {
    FUN_141786440(&DAT_14689fe30,&PTR_GetPrivateStaticClass_144bc8be0);
  }
  return DAT_14689fe30;
}



// FUNCTION 1414c8ff0 FUN_1414c8ff0 body=47 status=ok
// SIG undefined FUN_1414c8ff0(void)

longlong FUN_1414c8ff0(void)

{
  if (DAT_14689fe10 == 0) {
    FUN_141786440(&DAT_14689fe10,&PTR_FUN_144bc85d0);
  }
  return DAT_14689fe10;
}



// FUNCTION 1414c9020 FUN_1414c9020 body=47 status=ok
// SIG undefined FUN_1414c9020(void)

longlong FUN_1414c9020(void)

{
  if (DAT_14689fc78 == 0) {
    FUN_141786440(&DAT_14689fc78,&PTR_GetPrivateStaticClass_144bc9f80);
  }
  return DAT_14689fc78;
}



// FUNCTION 1414c9050 FUN_1414c9050 body=47 status=ok
// SIG undefined FUN_1414c9050(void)

longlong FUN_1414c9050(void)

{
  if (DAT_14689fcb0 == 0) {
    FUN_141786440(&DAT_14689fcb0,&PTR_FUN_144bc7b20);
  }
  return DAT_14689fcb0;
}



// FUNCTION 1414c9080 FUN_1414c9080 body=47 status=ok
// SIG undefined FUN_1414c9080(void)

longlong FUN_1414c9080(void)

{
  if (DAT_14689fcc0 == 0) {
    FUN_141786440(&DAT_14689fcc0,&PTR_FUN_144bc8120);
  }
  return DAT_14689fcc0;
}



// FUNCTION 1414c90b0 FUN_1414c90b0 body=47 status=ok
// SIG undefined FUN_1414c90b0(void)

longlong FUN_1414c90b0(void)

{
  if (DAT_14689fcd0 == 0) {
    FUN_141786440(&DAT_14689fcd0,&PTR_FUN_144bc84a0);
  }
  return DAT_14689fcd0;
}



// FUNCTION 1414c90e0 FUN_1414c90e0 body=47 status=ok
// SIG undefined FUN_1414c90e0(void)

longlong FUN_1414c90e0(void)

{
  if (DAT_14689fce0 == 0) {
    FUN_141786440(&DAT_14689fce0,&PTR_FUN_144bc89a0);
  }
  return DAT_14689fce0;
}



// FUNCTION 1414c9110 FUN_1414c9110 body=47 status=ok
// SIG undefined FUN_1414c9110(void)

longlong FUN_1414c9110(void)

{
  if (DAT_14689fcf0 == 0) {
    FUN_141786440(&DAT_14689fcf0,&PTR_FUN_144bc93d0);
  }
  return DAT_14689fcf0;
}



// FUNCTION 1414c9140 FUN_1414c9140 body=47 status=ok
// SIG undefined FUN_1414c9140(void)

longlong FUN_1414c9140(void)

{
  if (DAT_14689fd50 == 0) {
    FUN_141786440(&DAT_14689fd50,&PTR_FUN_144bc7f20);
  }
  return DAT_14689fd50;
}



// FUNCTION 1414c9170 FUN_1414c9170 body=47 status=ok
// SIG undefined FUN_1414c9170(void)

longlong FUN_1414c9170(void)

{
  if (DAT_14689fd70 == 0) {
    FUN_141786440(&DAT_14689fd70,&PTR_FUN_144bc9a90);
  }
  return DAT_14689fd70;
}



// FUNCTION 1414c91a0 FUN_1414c91a0 body=47 status=ok
// SIG undefined FUN_1414c91a0(void)

longlong FUN_1414c91a0(void)

{
  if (DAT_14689fe60 == 0) {
    FUN_141786440(&DAT_14689fe60,&PTR_GetPrivateStaticClass_144bcbec0);
  }
  return DAT_14689fe60;
}



// FUNCTION 1414c91d0 FUN_1414c91d0 body=47 status=ok
// SIG undefined FUN_1414c91d0(void)

longlong FUN_1414c91d0(void)

{
  if (DAT_14689fe88 == 0) {
    FUN_141786440(&DAT_14689fe88,&PTR_GetPrivateStaticClass_144bca190);
  }
  return DAT_14689fe88;
}



// FUNCTION 1414c9200 FUN_1414c9200 body=47 status=ok
// SIG undefined FUN_1414c9200(void)

longlong FUN_1414c9200(void)

{
  if (DAT_14689fe98 == 0) {
    FUN_141786440(&DAT_14689fe98,&PTR_GetPrivateStaticClass_144bca460);
  }
  return DAT_14689fe98;
}



// FUNCTION 1414c9230 FUN_1414c9230 body=47 status=ok
// SIG undefined FUN_1414c9230(void)

longlong FUN_1414c9230(void)

{
  if (DAT_14689fd40 == 0) {
    FUN_141786440(&DAT_14689fd40,&PTR_GetPrivateStaticClass_144bc7d20);
  }
  return DAT_14689fd40;
}



// FUNCTION 1414c9260 FUN_1414c9260 body=47 status=ok
// SIG undefined FUN_1414c9260(void)

longlong FUN_1414c9260(void)

{
  if (DAT_14689fd80 == 0) {
    FUN_141786a30(&DAT_14689fd80,&PTR_Z_Construct_UPackage__Script_MechWarrior_146465910);
  }
  return DAT_14689fd80;
}



// FUNCTION 1414c9290 FUN_1414c9290 body=47 status=ok
// SIG undefined FUN_1414c9290(void)

longlong FUN_1414c9290(void)

{
  if (DAT_14689feb0 == 0) {
    FUN_141786a30(&DAT_14689feb0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464679e0);
  }
  return DAT_14689feb0;
}



// FUNCTION 1414c92c0 FUN_1414c92c0 body=47 status=ok
// SIG undefined FUN_1414c92c0(void)

longlong FUN_1414c92c0(void)

{
  if (DAT_14689fea8 == 0) {
    FUN_141786a30(&DAT_14689fea8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146467920);
  }
  return DAT_14689fea8;
}



// FUNCTION 1414c92f0 FUN_1414c92f0 body=47 status=ok
// SIG undefined FUN_1414c92f0(void)

longlong FUN_1414c92f0(void)

{
  if (DAT_14689fc98 == 0) {
    FUN_1417866a0(&DAT_14689fc98,&PTR_Z_Construct_UPackage__Script_MechWarrior_146468650);
  }
  return DAT_14689fc98;
}



// FUNCTION 1414c9320 FUN_1414c9320 body=47 status=ok
// SIG undefined FUN_1414c9320(void)

longlong FUN_1414c9320(void)

{
  if (DAT_14689fd88 == 0) {
    FUN_1417866a0(&DAT_14689fd88,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464686a0);
  }
  return DAT_14689fd88;
}



// FUNCTION 1414c9350 FUN_1414c9350 body=47 status=ok
// SIG undefined FUN_1414c9350(void)

longlong FUN_1414c9350(void)

{
  if (DAT_14689fd90 == 0) {
    FUN_1417866a0(&DAT_14689fd90,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464686f0);
  }
  return DAT_14689fd90;
}



// FUNCTION 1414c9380 FUN_1414c9380 body=47 status=ok
// SIG undefined FUN_1414c9380(void)

longlong FUN_1414c9380(void)

{
  if (DAT_14689fd28 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689fd28,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464651c0);
  }
  return DAT_14689fd28;
}



// FUNCTION 1414c93b0 FUN_1414c93b0 body=47 status=ok
// SIG undefined FUN_1414c93b0(void)

longlong FUN_1414c93b0(void)

{
  if (DAT_14689fdd0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689fdd0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146465cb0);
  }
  return DAT_14689fdd0;
}



// FUNCTION 1414c93e0 FUN_1414c93e0 body=47 status=ok
// SIG undefined FUN_1414c93e0(void)

longlong FUN_1414c93e0(void)

{
  if (DAT_14689fdb0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689fdb0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146465a10);
  }
  return DAT_14689fdb0;
}



// FUNCTION 1414c9410 FUN_1414c9410 body=47 status=ok
// SIG undefined FUN_1414c9410(void)

longlong FUN_1414c9410(void)

{
  if (DAT_14689fca8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689fca8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464646f0);
  }
  return DAT_14689fca8;
}



// FUNCTION 1414c9440 FUN_1414c9440 body=47 status=ok
// SIG undefined FUN_1414c9440(void)

longlong FUN_1414c9440(void)

{
  if (DAT_14689fd68 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689fd68,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464657e0);
  }
  return DAT_14689fd68;
}



// FUNCTION 1414c9470 FUN_1414c9470 body=47 status=ok
// SIG undefined FUN_1414c9470(void)

longlong FUN_1414c9470(void)

{
  if (DAT_14689fda0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689fda0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146465950);
  }
  return DAT_14689fda0;
}



// FUNCTION 1414c94a0 FUN_1414c94a0 body=47 status=ok
// SIG undefined FUN_1414c94a0(void)

longlong FUN_1414c94a0(void)

{
  if (DAT_14689fec0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689fec0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146467a90);
  }
  return DAT_14689fec0;
}



// FUNCTION 1414c94d0 FUN_1414c94d0 body=47 status=ok
// SIG undefined FUN_1414c94d0(void)

longlong FUN_1414c94d0(void)

{
  if (DAT_14689fd38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689fd38,&PTR_Z_Construct_UPackage__Script_MechWarrior_146465210);
  }
  return DAT_14689fd38;
}



// FUNCTION 1414c9500 FUN_1414c9500 body=47 status=ok
// SIG undefined FUN_1414c9500(void)

longlong FUN_1414c9500(void)

{
  if (DAT_14689fd18 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689fd18,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464650f0);
  }
  return DAT_14689fd18;
}



// FUNCTION 1414c9530 execGetMinCrosshairsScale body=45 status=ok
// SIG undefined execGetMinCrosshairsScale(void)

void USBZGameUserSettings::execGetMinCrosshairsScale
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetMinCrosshairsScale();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414c9580 execGetVectorValue body=155 status=ok
// SIG undefined execGetVectorValue(void)

void UCurveVector::execGetVectorValue(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
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
  puVar1 = (undefined8 *)FUN_140eadad0(param_1,local_18,local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1414c9620 execGetLoadingScreenViewModel body=44 status=ok
// SIG undefined execGetLoadingScreenViewModel(void)

void UPSGameInstance::execGetLoadingScreenViewModel
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = UMaterial::GetRenderProxy();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414c9670 FUN_1414c9670 body=43 status=ok
// SIG undefined FUN_1414c9670(void)

void FUN_1414c9670(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FAnimNode_PowerIK::IsValidToEvaluate();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414c96a0 FUN_1414c96a0 body=126 status=ok
// SIG undefined FUN_1414c96a0(void)

void FUN_1414c96a0(undefined8 param_1,longlong param_2)

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
  FUN_140b65190(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414c9740 FUN_1414c9740 body=130 status=ok
// SIG undefined FUN_1414c9740(void)

void FUN_1414c9740(undefined8 param_1,longlong param_2)

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
  FUN_140ebf640(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414c97d0 FUN_1414c97d0 body=128 status=ok
// SIG undefined FUN_1414c97d0(void)

void FUN_1414c97d0(undefined8 param_1,longlong param_2)

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
  FUN_140ec0410(param_1,local_res10);
  return;
}



// FUNCTION 1414c9870 FUN_1414c9870 body=43 status=ok
// SIG undefined FUN_1414c9870(void)

void FUN_1414c9870(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140ec2ee0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414c98a0 FUN_1414c98a0 body=43 status=ok
// SIG undefined FUN_1414c98a0(void)

void FUN_1414c98a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140ec32b0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414c98d0 FUN_1414c98d0 body=123 status=ok
// SIG undefined FUN_1414c98d0(void)

void FUN_1414c98d0(undefined8 param_1,longlong param_2)

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
  FUN_140ec37c0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414c9960 FUN_1414c9960 body=47 status=ok
// SIG undefined FUN_1414c9960(void)

longlong FUN_1414c9960(void)

{
  if (DAT_1468a0198 == 0) {
    FUN_141786440(&DAT_1468a0198,&PTR_GetPrivateStaticClass_144bcf020);
  }
  return DAT_1468a0198;
}



// FUNCTION 1414c9990 FUN_1414c9990 body=47 status=ok
// SIG undefined FUN_1414c9990(void)

longlong FUN_1414c9990(void)

{
  if (DAT_1468a0190 == 0) {
    FUN_141786a30(&DAT_1468a0190,&PTR_FUN_146469c90);
  }
  return DAT_1468a0190;
}



// FUNCTION 1414c99d0 FUN_1414c99d0 body=162 status=ok
// SIG undefined FUN_1414c99d0(void)

longlong FUN_1414c99d0(void)

{
  if (DAT_1468a0188 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"StandInAuxiliaryActorAnimInstance",&DAT_1468a0188,
                  FUN_140447710,0x440,0x10000008,0,L"Engine",FUN_1414caf50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142256d30,thunk_FUN_1428eccf0,
                  &LAB_14084f730,0);
  }
  return DAT_1468a0188;
}



// FUNCTION 1414c9a80 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGBattleRoyaleGameState::GetPrivateStaticClass(void)

{
  if (DAT_1468a01e0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"StandInGlobals",&DAT_1468a01e0,FUN_140447710,0x588,0x10000000
                  ,0,L"Engine",&LAB_1414cb040,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_1468a01e0;
}



// FUNCTION 1414c9b40 FUN_1414c9b40 body=162 status=ok
// SIG undefined FUN_1414c9b40(void)

longlong FUN_1414c9b40(void)

{
  if (DAT_1468a0278 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"StandInConfigLibrary",&DAT_1468a0278,FUN_140447710,0x28,
                  0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_1468a0278;
}



// FUNCTION 1414c9bf0 FUN_1414c9bf0 body=53 status=ok
// SIG undefined FUN_1414c9bf0(void)

void FUN_1414c9bf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_144bd3a00;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414c9c30 FUN_1414c9c30 body=53 status=ok
// SIG undefined FUN_1414c9c30(void)

void FUN_1414c9c30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x418;
    *puVar1 = &PTR_FUN_144bd3d88;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414c9c70 FUN_1414c9c70 body=53 status=ok
// SIG undefined FUN_1414c9c70(void)

void FUN_1414c9c70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144bd3b18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414c9cb0 FUN_1414c9cb0 body=53 status=ok
// SIG undefined FUN_1414c9cb0(void)

void FUN_1414c9cb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &PTR_FUN_144bd3c30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414c9cf0 FUN_1414c9cf0 body=53 status=ok
// SIG undefined FUN_1414c9cf0(void)

void FUN_1414c9cf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_144bd3ea0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414c9d30 FUN_1414c9d30 body=53 status=ok
// SIG undefined FUN_1414c9d30(void)

void FUN_1414c9d30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144bd3fb8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414c9d80 FUN_1414c9d80 body=53 status=ok
// SIG undefined FUN_1414c9d80(void)

void FUN_1414c9d80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144bd40d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414c9dc0 FUN_1414c9dc0 body=53 status=ok
// SIG undefined FUN_1414c9dc0(void)

void FUN_1414c9dc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &PTR_FUN_144bd41e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414c9e00 FUN_1414c9e00 body=53 status=ok
// SIG undefined FUN_1414c9e00(void)

void FUN_1414c9e00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_144bd4300;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414c9e40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGCharacterAnimInstance::GetPrivateStaticClass(void)

{
  if (DAT_1468a0150 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"StandInAuxiliaryActor_IronBear",&DAT_1468a0150,FUN_140447710,
                  0x6a0,0x10000008,0,L"Engine",&LAB_1414caea0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1414ca080
                  ,&LAB_140447700,0);
  }
  return DAT_1468a0150;
}



// FUNCTION 1414c9ef0 FUN_1414c9ef0 body=53 status=ok
// SIG undefined FUN_1414c9ef0(void)

void FUN_1414c9ef0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_144bd4418;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414c9f40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameplayTagAssetInterface::GetPrivateStaticClass(void)

{
  if (DAT_1468a02d0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"StatusEffectEventProviderInterface",&DAT_1468a02d0,
                  FUN_140447710,0x28,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468a02d0;
}



// FUNCTION 1414ca000 FUN_1414ca000 body=53 status=ok
// SIG undefined FUN_1414ca000(void)

void FUN_1414ca000(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144bd2ae0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414ca040 FUN_1414ca040 body=53 status=ok
// SIG undefined FUN_1414ca040(void)

void FUN_1414ca040(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144bd2bf8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414ca080 FUN_1414ca080 body=162 status=ok
// SIG undefined FUN_1414ca080(void)

longlong FUN_1414ca080(void)

{
  if (DAT_1468a0120 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"StandInAuxiliaryActor",&DAT_1468a0120,FUN_1414cdcb0,0x580,
                  0x10000008,0,L"Engine",&LAB_1414cae80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_1468a0120;
}



// FUNCTION 1414ca140 FUN_1414ca140 body=162 status=ok
// SIG undefined FUN_1414ca140(void)

longlong FUN_1414ca140(void)

{
  if (DAT_1468a0160 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"StandInAuxiliaryActor_Pet",&DAT_1468a0160,FUN_140447710,0x580
                  ,0x10000008,0,L"Engine",&LAB_1414caec0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1414ca080
                  ,&LAB_140447700,0);
  }
  return DAT_1468a0160;
}



// FUNCTION 1414ca1f0 FUN_1414ca1f0 body=47 status=ok
// SIG undefined FUN_1414ca1f0(void)

longlong FUN_1414ca1f0(void)

{
  if (DAT_1468a0118 == 0) {
    FUN_141786440(&DAT_1468a0118,&PTR_FUN_144bd1550);
  }
  return DAT_1468a0118;
}



// FUNCTION 1414ca220 FUN_1414ca220 body=47 status=ok
// SIG undefined FUN_1414ca220(void)

longlong FUN_1414ca220(void)

{
  if (DAT_1468a00f8 == 0) {
    FUN_141786a30(&DAT_1468a00f8,&PTR_FUN_146468e90);
  }
  return DAT_1468a00f8;
}



// FUNCTION 1414ca250 FUN_1414ca250 body=47 status=ok
// SIG undefined FUN_1414ca250(void)

longlong FUN_1414ca250(void)

{
  if (DAT_1468a0100 == 0) {
    FUN_141786a30(&DAT_1468a0100,&PTR_FUN_146468f10);
  }
  return DAT_1468a0100;
}



// FUNCTION 1414ca280 FUN_1414ca280 body=47 status=ok
// SIG undefined FUN_1414ca280(void)

longlong FUN_1414ca280(void)

{
  if (DAT_1468a0108 == 0) {
    FUN_141786a30(&DAT_1468a0108,&PTR_FUN_146468f90);
  }
  return DAT_1468a0108;
}



// FUNCTION 1414ca2b0 FUN_1414ca2b0 body=47 status=ok
// SIG undefined FUN_1414ca2b0(void)

longlong FUN_1414ca2b0(void)

{
  if (DAT_1468a0110 == 0) {
    FUN_141786a30(&DAT_1468a0110,&PTR_FUN_1464690c0);
  }
  return DAT_1468a0110;
}



// FUNCTION 1414ca2f0 FUN_1414ca2f0 body=162 status=ok
// SIG undefined FUN_1414ca2f0(void)

longlong FUN_1414ca2f0(void)

{
  if (DAT_1468a0178 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"StandInAuxiliaryActor_Siren",&DAT_1468a0178,FUN_1414cdce0,
                  0x580,0x10000008,0,L"Engine",FUN_1414caee0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1414ca080
                  ,&LAB_140447700,0);
  }
  return DAT_1468a0178;
}



// FUNCTION 1414ca3a0 FUN_1414ca3a0 body=47 status=ok
// SIG undefined FUN_1414ca3a0(void)

longlong FUN_1414ca3a0(void)

{
  if (DAT_1468a0170 == 0) {
    FUN_141786440(&DAT_1468a0170,&PTR_FUN_144bd1770);
  }
  return DAT_1468a0170;
}



// FUNCTION 1414ca3d0 FUN_1414ca3d0 body=47 status=ok
// SIG undefined FUN_1414ca3d0(void)

longlong FUN_1414ca3d0(void)

{
  if (DAT_1468a0168 == 0) {
    FUN_141786a30(&DAT_1468a0168,&PTR_FUN_146469b70);
  }
  return DAT_1468a0168;
}



// FUNCTION 1414ca420 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x390;
    *puVar1 = &PTR_FUN_144bd45a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1414ca460 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMaterialInstanceDynamic::GetPrivateStaticClass(void)

{
  if (DAT_1468a00e0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SplineMovementComponent",&DAT_1468a00e0,FUN_1414cdd10,0x220,
                  0x10000000,0,L"Engine",&LAB_1414caf10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UEnvQueryTest::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a00e0;
}



// FUNCTION 1414ca510 FUN_1414ca510 body=53 status=ok
// SIG undefined FUN_1414ca510(void)

void FUN_1414ca510(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144bd46b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414ca550 FUN_1414ca550 body=47 status=ok
// SIG undefined FUN_1414ca550(void)

longlong FUN_1414ca550(void)

{
  if (DAT_1468a00d8 == 0) {
    FUN_141786440(&DAT_1468a00d8,&PTR_GetPrivateStaticClass_144bd2250);
  }
  return DAT_1468a00d8;
}



// FUNCTION 1414ca580 FUN_1414ca580 body=47 status=ok
// SIG undefined FUN_1414ca580(void)

longlong FUN_1414ca580(void)

{
  if (DAT_1468a00b0 == 0) {
    FUN_141786a30(&DAT_1468a00b0,&PTR_FUN_146468780);
  }
  return DAT_1468a00b0;
}



// FUNCTION 1414ca5b0 FUN_1414ca5b0 body=47 status=ok
// SIG undefined FUN_1414ca5b0(void)

longlong FUN_1414ca5b0(void)

{
  if (DAT_1468a00b8 == 0) {
    FUN_141786a30(&DAT_1468a00b8,&PTR_FUN_1464687c0);
  }
  return DAT_1468a00b8;
}



// FUNCTION 1414ca5e0 FUN_1414ca5e0 body=47 status=ok
// SIG undefined FUN_1414ca5e0(void)

longlong FUN_1414ca5e0(void)

{
  if (DAT_1468a00c0 == 0) {
    FUN_141786a30(&DAT_1468a00c0,&PTR_FUN_146468800);
  }
  return DAT_1468a00c0;
}



// FUNCTION 1414ca610 FUN_1414ca610 body=47 status=ok
// SIG undefined FUN_1414ca610(void)

longlong FUN_1414ca610(void)

{
  if (DAT_1468a00c8 == 0) {
    FUN_141786a30(&DAT_1468a00c8,&PTR_FUN_1464688b0);
  }
  return DAT_1468a00c8;
}



// FUNCTION 1414ca640 FUN_1414ca640 body=47 status=ok
// SIG undefined FUN_1414ca640(void)

longlong FUN_1414ca640(void)

{
  if (DAT_1468a00d0 == 0) {
    FUN_141786a30(&DAT_1468a00d0,&PTR_FUN_146468930);
  }
  return DAT_1468a00d0;
}



// FUNCTION 1414ca670 FUN_1414ca670 body=53 status=ok
// SIG undefined FUN_1414ca670(void)

void FUN_1414ca670(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_144bd47d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414ca6b0 FUN_1414ca6b0 body=53 status=ok
// SIG undefined FUN_1414ca6b0(void)

void FUN_1414ca6b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_144bd48e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414ca700 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGStreamInteractConnectionUW::GetPrivateStaticClass(void)

{
  if (DAT_1468a00f0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"SplineMovementComponentDoubleLinked",&DAT_1468a00f0,
                  FUN_140447710,0x248,0x10000000,0,L"Engine",&LAB_1414caf30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMaterialInstanceDynamic::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a00f0;
}



// FUNCTION 1414ca7b0 FUN_1414ca7b0 body=861 status=ok
// SIG undefined FUN_1414ca7b0(void)

int * FUN_1414ca7b0(longlong *param_1,int *param_2,undefined4 *param_3,longlong param_4)

{
  ulonglong *_Src;
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  bool local_res8;
  
  iVar18 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar16 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x18);
    *(int *)(param_1 + 6) = iVar16;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar16 * 0x18) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar12;
  local_res8 = false;
  lVar8 = (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar17 = (uint *)((longlong)plVar10 + lVar8);
  *puVar17 = *puVar17 | 1 << ((byte)iVar12 & 0x1f);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  lVar9 = (longlong)iVar12;
  _Src = (ulonglong *)(*param_1 + lVar9 * 0x18);
  *(undefined4 *)_Src = *param_3;
  *(undefined4 *)((longlong)_Src + 4) = uVar3;
  *(undefined4 *)(_Src + 1) = uVar4;
  *(undefined4 *)((longlong)_Src + 0xc) = uVar5;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  iVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar16 != 1) {
    iVar7 = iVar18;
    if (iVar16 != 0) {
      iVar14 = (int)(*_Src >> 4);
      uVar13 = 0x9e3779b9U - iVar14 ^ iVar14 << 8;
      uVar11 = -(uVar13 + iVar14) ^ uVar13 >> 0xd;
      uVar15 = (iVar14 - uVar13) - uVar11 ^ uVar11 >> 0xc;
      uVar13 = (uVar13 - uVar15) - uVar11 ^ uVar15 << 0x10;
      uVar11 = (uVar11 - uVar13) - uVar15 ^ uVar13 >> 5;
      uVar15 = (uVar15 - uVar13) - uVar11 ^ uVar11 >> 3;
      uVar13 = (uVar13 - uVar15) - uVar11 ^ uVar15 << 10;
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar14 = *(int *)((longlong)plVar10 +
                       (((longlong)(int)((uVar11 - uVar13) - uVar15) ^ (ulonglong)(uVar13 >> 0xf)) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar14 != -1) {
        do {
          iVar7 = iVar14;
          if (*(ulonglong *)(*param_1 + (longlong)iVar14 * 0x18) == *_Src) break;
          iVar14 = *(int *)(*param_1 + 0x10 + (longlong)iVar14 * 0x18);
          iVar7 = iVar18;
        } while (iVar14 != -1);
      }
    }
    local_res8 = iVar7 != -1;
    if (local_res8) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar7 * 0x18),_Src,0x10);
      bVar2 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar12;
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar1 + lVar9 * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar18 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar9 * 0x18) = iVar18;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar10 = (longlong *)param_1[4];
      *param_2 = iVar7;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar17 = (uint *)((longlong)plVar10 + lVar8);
      *puVar17 = *puVar17 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1414caade;
    }
  }
  cVar6 = TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar16,0);
  if (cVar6 == '\0') {
    iVar18 = (int)(*_Src >> 4);
    uVar13 = 0x9e3779b9U - iVar18 ^ iVar18 << 8;
    uVar15 = -(uVar13 + iVar18) ^ uVar13 >> 0xd;
    uVar11 = (iVar18 - uVar13) - uVar15 ^ uVar15 >> 0xc;
    uVar13 = (uVar13 - uVar11) - uVar15 ^ uVar11 << 0x10;
    uVar15 = (uVar15 - uVar13) - uVar11 ^ uVar13 >> 5;
    uVar11 = (uVar11 - uVar13) - uVar15 ^ uVar15 >> 3;
    uVar13 = (uVar13 - uVar11) - uVar15 ^ uVar11 << 10;
    uVar11 = ((uVar15 - uVar13) - uVar11 ^ uVar13 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar11;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1414caade:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1414cab10 FUN_1414cab10 body=868 status=ok
// SIG undefined FUN_1414cab10(void)

int * FUN_1414cab10(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  
  iVar9 = -1;
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
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x28);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x28) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)iVar12 * 0x28);
  FUN_1414cb060(_Src,param_3);
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  bVar13 = false;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar12 != 1) {
    iVar8 = iVar9;
    if (iVar12 != 0) {
      iVar5 = (int)(*_Src >> 4);
      uVar10 = 0x9e3779b9U - iVar5 ^ iVar5 << 8;
      uVar7 = -(uVar10 + iVar5) ^ uVar10 >> 0xd;
      uVar11 = (iVar5 - uVar10) - uVar7 ^ uVar7 >> 0xc;
      uVar10 = (uVar10 - uVar11) - uVar7 ^ uVar11 << 0x10;
      uVar7 = (uVar7 - uVar10) - uVar11 ^ uVar10 >> 5;
      uVar11 = (uVar11 - uVar10) - uVar7 ^ uVar7 >> 3;
      uVar10 = (uVar10 - uVar11) - uVar7 ^ uVar11 << 10;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar6 +
                      (((longlong)(int)((uVar7 - uVar10) - uVar11) ^ (ulonglong)(uVar10 >> 0xf)) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        do {
          iVar8 = iVar5;
          if (*(ulonglong *)(*param_1 + (longlong)iVar5 * 0x28) == *_Src) break;
          iVar5 = *(int *)(*param_1 + 0x20 + (longlong)iVar5 * 0x28);
          iVar8 = iVar9;
        } while (iVar5 != -1);
      }
    }
    bVar13 = iVar8 != -1;
    if (bVar13) {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 8 + (longlong)iVar8 * 0x28) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar2 + (longlong)iVar8 * 0x28),_Src,0x20);
      iVar12 = *param_2;
      bVar3 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar12;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + (longlong)iVar12 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar9 = (int)param_1[6];
      }
      *(int *)(lVar2 + 4 + (longlong)iVar12 * 0x28) = iVar9;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1414cae50;
    }
  }
  cVar4 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar12,0);
  if (cVar4 == '\0') {
    iVar9 = (int)(*_Src >> 4);
    uVar10 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar11 = -(uVar10 + iVar9) ^ uVar10 >> 0xd;
    uVar7 = (iVar9 - uVar10) - uVar11 ^ uVar11 >> 0xc;
    uVar10 = (uVar10 - uVar7) - uVar11 ^ uVar7 << 0x10;
    uVar11 = (uVar11 - uVar10) - uVar7 ^ uVar10 >> 5;
    uVar7 = (uVar7 - uVar10) - uVar11 ^ uVar11 >> 3;
    uVar10 = (uVar10 - uVar7) - uVar11 ^ uVar7 << 10;
    uVar7 = ((uVar11 - uVar10) - uVar7 ^ uVar10 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x24) = uVar7;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_1414cae50:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 1414caee0 FUN_1414caee0 body=41 status=ok
// SIG undefined FUN_1414caee0(void)

void FUN_1414caee0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140e695c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144bd2d10;
  }
  return;
}



// FUNCTION 1414caf50 FUN_1414caf50 body=41 status=ok
// SIG undefined FUN_1414caf50(void)

void FUN_1414caf50(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1422552b0(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144bd3430;
  }
  return;
}



// FUNCTION 1414caf80 FUN_1414caf80 body=190 status=ok
// SIG undefined FUN_1414caf80(void)

void FUN_1414caf80(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142326e40(puVar1,param_1);
    *puVar1 = &PTR_FUN_144593bb8;
    puVar1[5] = &PTR_LAB_144594020;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 2;
    puVar1[0x32] = 0;
    puVar1[0x33] = 0;
    puVar1[0x34] = 2;
    puVar1[0x35] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1b4) = 0x3ecccccd;
    puVar1[0x38] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x40] = 0;
    puVar1[0x42] = 0;
    puVar1[0x45] = 0;
    puVar1[0x46] = 0;
    *(undefined4 *)(puVar1 + 0x49) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x24c) = 0;
  }
  return;
}



// FUNCTION 1414cb060 FUN_1414cb060 body=141 status=ok
// SIG undefined FUN_1414cb060(void)

undefined8 * FUN_1414cb060(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1 + 1,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[1],_Src,(longlong)iVar1 * 0x30);
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return param_1;
}



// FUNCTION 1414cb0f0 FUN_1414cb0f0 body=110 status=ok
// SIG undefined FUN_1414cb0f0(void)

undefined4 * FUN_1414cb0f0(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  if (0x7fffffff < (uint)param_1[9]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 6) = 0;
  }
  param_1[2] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 1414cb160 FUN_1414cb160 body=806 status=ok
// SIG undefined FUN_1414cb160(void)

undefined8 * FUN_1414cb160(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_144bd3d48;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = DAT_1464aa788;
  *(undefined4 *)((longlong)param_1 + 0xec) = DAT_1464aa790;
  *(undefined1 *)(param_1 + 0x21) = 1;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xbe4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x3f800000;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = DAT_1464aa788;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = DAT_1464aa790;
  *(undefined4 *)(param_1 + 0x3a) = 0x3f800000;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = DAT_1464aa788;
  *(undefined4 *)((longlong)param_1 + 0x234) = DAT_1464aa790;
  *(undefined4 *)(param_1 + 0x47) = 0x3f800000;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = DAT_1464aa788;
  *(undefined4 *)((longlong)param_1 + 0x29c) = DAT_1464aa790;
  *(undefined1 *)(param_1 + 0x57) = 1;
  *(undefined4 *)((longlong)param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xbe4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 0x66) = 1;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0;
  *(undefined4 *)(param_1 + 0x67) = 0xbe4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  *(undefined1 *)(param_1 + 0x75) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 0;
  *(undefined4 *)(param_1 + 0x76) = 0xbe4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3ec) = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0;
  return param_1;
}



// FUNCTION 1414cb490 FUN_1414cb490 body=1789 status=ok
// SIG undefined FUN_1414cb490(void)

undefined8 * FUN_1414cb490(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_144bd3780;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x5c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 10,0);
  }
  if ((undefined2 *)param_1[10] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[10] = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(int *)((longlong)param_1 + 0x84) < 0) && (*(int *)((longlong)param_1 + 0x84) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xf,0);
  }
  if ((undefined2 *)param_1[0xf] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xf] = 0;
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((*(int *)((longlong)param_1 + 0xac) < 0) && (*(int *)((longlong)param_1 + 0xac) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x14,0);
  }
  if ((undefined2 *)param_1[0x14] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x14] = 0;
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if ((*(int *)((longlong)param_1 + 0xd4) < 0) && (*(int *)((longlong)param_1 + 0xd4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x19,0);
  }
  if ((undefined2 *)param_1[0x19] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x19] = 0;
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((*(int *)((longlong)param_1 + 0xfc) < 0) && (*(int *)((longlong)param_1 + 0xfc) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1e,0);
  }
  if ((undefined2 *)param_1[0x1e] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x1e] = 0;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if ((*(int *)((longlong)param_1 + 0x124) < 0) && (*(int *)((longlong)param_1 + 0x124) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x23,0);
  }
  if ((undefined2 *)param_1[0x23] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x23] = 0;
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  if ((*(int *)((longlong)param_1 + 0x14c) < 0) && (*(int *)((longlong)param_1 + 0x14c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
  }
  if ((undefined2 *)param_1[0x28] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x28] = 0;
  }
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if ((*(int *)((longlong)param_1 + 0x174) < 0) && (*(int *)((longlong)param_1 + 0x174) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x2d,0);
  }
  if ((undefined2 *)param_1[0x2d] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x2d] = 0;
  }
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  if ((*(int *)((longlong)param_1 + 0x19c) < 0) && (*(int *)((longlong)param_1 + 0x19c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x32,0);
  }
  if ((undefined2 *)param_1[0x32] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x32] = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((*(int *)((longlong)param_1 + 0x1c4) < 0) && (*(int *)((longlong)param_1 + 0x1c4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x37,0);
  }
  if ((undefined2 *)param_1[0x37] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x37] = 0;
  }
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if ((*(int *)((longlong)param_1 + 0x1ec) < 0) && (*(int *)((longlong)param_1 + 0x1ec) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x3c,0);
  }
  if ((undefined2 *)param_1[0x3c] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x3c] = 0;
  }
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  if ((*(int *)((longlong)param_1 + 0x214) < 0) && (*(int *)((longlong)param_1 + 0x214) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x41,0);
  }
  if ((undefined2 *)param_1[0x41] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x41] = 0;
  }
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  if ((*(int *)((longlong)param_1 + 0x23c) < 0) && (*(int *)((longlong)param_1 + 0x23c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x46,0);
  }
  if ((undefined2 *)param_1[0x46] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x46] = 0;
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if ((*(int *)((longlong)param_1 + 0x264) < 0) && (*(int *)((longlong)param_1 + 0x264) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x4b,0);
  }
  if ((undefined2 *)param_1[0x4b] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x4b] = 0;
  }
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x41a00000;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 700) = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0x41a00000;
  param_1[0x60] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x41a00000;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x6f,0,0);
  *(undefined4 *)(param_1 + 0x73) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0x41a00000;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x7d,0,0);
  *(undefined4 *)(param_1 + 0x81) = 0xffffffff;
  puVar2 = param_1 + 0x89;
  *(undefined4 *)((longlong)param_1 + 0x40c) = 0;
  lVar1 = (longlong)param_1 + 0x474;
  param_1[0x83] = 0;
  lVar3 = 4;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0x42b40000;
  *(undefined4 *)(param_1 + 0x86) = 2;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0x40200000;
  *(undefined4 *)(param_1 + 0x87) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0x40400000;
  *(undefined4 *)(param_1 + 0x88) = 0x3e99999a;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 10;
    *(undefined8 *)(lVar1 + -0x24) = 0;
    *(undefined8 *)(lVar1 + -0x1c) = 0;
    *(undefined8 *)(lVar1 + -0x14) = 0;
    *(undefined8 *)(lVar1 + -0xc) = 0;
    *(undefined8 *)(lVar1 + -4) = 0;
    *(undefined8 *)(lVar1 + 4) = 0;
    *(undefined8 *)(lVar1 + 0xc) = 0;
    *(undefined8 *)(lVar1 + 0x14) = 0;
    *(undefined8 *)(lVar1 + 0x1c) = 0;
    lVar1 = lVar1 + 0x50;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return param_1;
}



// FUNCTION 1414cbba0 ~FOnlineUserPresenceStatus body=97 status=ok
// SIG undefined ~FOnlineUserPresenceStatus(void)

void FOnlineUserPresenceStatus::~FOnlineUserPresenceStatus(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FSoftObjectPath,USingleObjectPool_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 3,0);
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414cbc10 FUN_1414cbc10 body=479 status=ok
// SIG undefined FUN_1414cbc10(void)

void FUN_1414cbc10(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (param_1[0x7f] != 0) {
    FMemory::Free();
  }
  FUN_140c71a80(param_1 + 0x77,0);
  if (param_1[0x7b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x77] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x71) = 0;
  if (param_1[0x70] != 0) {
    FMemory::Free();
  }
  FUN_140c71a80(param_1 + 0x68,0);
  if (param_1[0x6c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x68] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x62) = 0;
  if (param_1[0x61] != 0) {
    FMemory::Free();
  }
  FUN_140c71a80(param_1 + 0x59,0);
  if (param_1[0x5d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x59] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (param_1[0x43] != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x3b);
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (param_1[0x36] != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FMemory::Free();
  }
  FUN_140c71a80(param_1 + 0x23,0);
  if (param_1[0x27] != 0) {
    FMemory::Free();
  }
  if (param_1[0x23] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x12);
  FOnlineUserPresenceStatus::~FOnlineUserPresenceStatus(param_1 + 4);
  *param_1 = &PTR_FUN_1440780a8;
  return;
}



// FUNCTION 1414cbdf0 FUN_1414cbdf0 body=479 status=ok
// SIG undefined FUN_1414cbdf0(void)

void FUN_1414cbdf0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = 4;
  plVar1 = (longlong *)(param_1 + 0x588);
  do {
    lVar2 = lVar2 + -1;
    _vector_destructor_iterator_(plVar1 + -8,0x10,4,&LAB_1414cbb90);
    if (plVar1[-10] != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + -10;
  } while (lVar2 != 0);
  *(undefined4 *)(param_1 + 0x420) = 0;
  if (*(longlong *)(param_1 + 0x418) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x3d8);
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  if (*(longlong *)(param_1 + 0x3a8) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x368);
  *(undefined4 *)(param_1 + 0x340) = 0;
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x2f8);
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x288);
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1414cbfd0 operator= body=506 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

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
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
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
    cVar2 = ConditionalRehash(param_1,iVar9,1);
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1414cc12b;
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
LAB_1414cc12b:
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
        FUN_1414ca7b0(param_1,local_res8,*param_2 + (longlong)iStack_4c * 0x18,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 1414cc1d0 operator= body=469 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FString,FVector>,TDefaultMapHashableKeyFuncs<FString,FVector,0>,FDefaultSetAllocator>::
operator=(longlong *param_1,longlong *param_2)

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
    TSparseArray<TSetElement<TTuple<FSoftObjectPath,USingleObjectPool_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1414cc30d;
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
LAB_1414cc30d:
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
        FUN_1414cab10(param_1,local_res8,*param_2 + (longlong)iStack_3c * 0x28,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 1414cc3b0 operator= body=115 status=ok
// SIG undefined operator=(void)

undefined8 * FCS_CharacterDeathDefinitions::operator=(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
      ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
    }
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 1414cc430 FUN_1414cc430 body=887 status=ok
// SIG undefined FUN_1414cc430(void)

longlong FUN_1414cc430(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  FCS_CharacterDeathDefinitions::operator=(param_1 + 0x20,param_2 + 0x20);
  TSet<TTuple<FString,FVector>,TDefaultMapHashableKeyFuncs<FString,FVector,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0x38,param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0x90,param_2 + 0x90);
  *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x10c) = *(undefined8 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
  FUN_140c64f20(param_1 + 0x118,param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0x170,param_2 + 0x170);
  *(undefined1 *)(param_1 + 0x1c0) = *(undefined1 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c4) = *(undefined8 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
  TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0x1d8,param_2 + 0x1d8);
  *(undefined1 *)(param_1 + 0x228) = *(undefined1 *)(param_2 + 0x228);
  *(undefined8 *)(param_1 + 0x22c) = *(undefined8 *)(param_2 + 0x22c);
  *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_2 + 0x234);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x238);
  TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0x240,param_2 + 0x240);
  *(undefined1 *)(param_1 + 0x290) = *(undefined1 *)(param_2 + 0x290);
  *(undefined8 *)(param_1 + 0x294) = *(undefined8 *)(param_2 + 0x294);
  *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(param_2 + 0x29c);
  *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_2 + 0x2a0);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_2 + 0x2a8);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_2 + 0x2b0);
  *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(param_2 + 0x2b4);
  *(undefined1 *)(param_1 + 0x2b8) = *(undefined1 *)(param_2 + 0x2b8);
  *(undefined8 *)(param_1 + 700) = *(undefined8 *)(param_2 + 700);
  *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_2 + 0x2c4);
  FUN_140c64f20(param_1 + 0x2c8,param_2 + 0x2c8);
  *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_2 + 0x318);
  *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_2 + 800);
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_2 + 0x328);
  *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(param_2 + 0x32c);
  *(undefined1 *)(param_1 + 0x330) = *(undefined1 *)(param_2 + 0x330);
  *(undefined8 *)(param_1 + 0x334) = *(undefined8 *)(param_2 + 0x334);
  *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_2 + 0x33c);
  FUN_140c64f20(param_1 + 0x340,param_2 + 0x340);
  *(undefined8 *)(param_1 + 0x390) = *(undefined8 *)(param_2 + 0x390);
  *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(param_2 + 0x398);
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_2 + 0x3a0);
  *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_2 + 0x3a4);
  *(undefined1 *)(param_1 + 0x3a8) = *(undefined1 *)(param_2 + 0x3a8);
  *(undefined8 *)(param_1 + 0x3ac) = *(undefined8 *)(param_2 + 0x3ac);
  *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(param_2 + 0x3b4);
  FUN_140c64f20(param_1 + 0x3b8,param_2 + 0x3b8);
  *(undefined1 *)(param_1 + 0x408) = *(undefined1 *)(param_2 + 0x408);
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_2 + 0x40c);
  *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_2 + 0x410);
  return param_1;
}



// FUNCTION 1414cc7b0 FUN_1414cc7b0 body=73 status=ok
// SIG undefined FUN_1414cc7b0(void)

longlong FUN_1414cc7b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4f8) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x580);
  }
  return param_1;
}



// FUNCTION 1414cc800 FUN_1414cc800 body=52 status=ok
// SIG undefined FUN_1414cc800(void)

undefined8 FUN_1414cc800(undefined8 param_1,ulonglong param_2)

{
  FUN_1414cbc10();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x418);
  }
  return param_1;
}



// FUNCTION 1414cc840 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FGeomCacheTrackProxy::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14083eff0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x440);
  }
  return param_1;
}



// FUNCTION 1414cc880 FUN_1414cc880 body=52 status=ok
// SIG undefined FUN_1414cc880(void)

undefined8 FUN_1414cc880(undefined8 param_1,ulonglong param_2)

{
  FUN_1414cbdf0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x588);
  }
  return param_1;
}



// FUNCTION 1414cc8c0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
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
      TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1414cc9c0 FUN_1414cc9c0 body=67 status=ok
// SIG undefined FUN_1414cc9c0(void)

void FUN_1414cc9c0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x70);
  *(undefined4 *)((longlong)param_2 + 0x18) = 0x41a00000;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined4 *)((longlong)param_2 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined4 *)((longlong)param_2 + 0x68) = 0;
  return;
}



// FUNCTION 1414ccb30 FUN_1414ccb30 body=67 status=ok
// SIG undefined FUN_1414ccb30(void)

void FUN_1414ccb30(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x68);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined4 *)((longlong)param_2 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined4 *)((longlong)param_2 + 0x60) = 0;
  return;
}



// FUNCTION 1414ccb80 FUN_1414ccb80 body=81 status=ok
// SIG undefined FUN_1414ccb80(void)

void FUN_1414ccb80(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x78);
  *(undefined1 *)((longlong)param_2 + 0x18) = 1;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x20) = 0xbe4ccccd;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined4 *)((longlong)param_2 + 0x58) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined4 *)((longlong)param_2 + 0x70) = 0;
  return;
}



// FUNCTION 1414ccbe0 FUN_1414ccbe0 body=88 status=ok
// SIG undefined FUN_1414ccbe0(void)

void FUN_1414ccbe0(undefined8 param_1,undefined4 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x68);
  *param_2 = 0x3f800000;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_2[0xe] = 0xffffffff;
  param_2[0xf] = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  param_2[0x14] = 0;
  *(undefined8 *)(param_2 + 0x17) = DAT_1464aa788;
  param_2[0x19] = DAT_1464aa790;
  return;
}


