// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1414919e0 FUN_1414919e0 body=144 status=ok
// SIG undefined FUN_1414919e0(void)

void FUN_1414919e0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_14122a750(param_1,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141491a70 FUN_141491a70 body=43 status=ok
// SIG undefined FUN_141491a70(void)

void FUN_141491a70(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14122a7d0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141491aa0 FUN_141491aa0 body=51 status=ok
// SIG undefined FUN_141491aa0(void)

void FUN_141491aa0(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x5a0) + 0x10))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141491ae0 FUN_141491ae0 body=194 status=ok
// SIG undefined FUN_141491ae0(void)

void FUN_141491ae0(undefined8 param_1,longlong param_2)

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
  FUN_14122a9f0(param_1,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 141491bb0 FUN_141491bb0 body=123 status=ok
// SIG undefined FUN_141491bb0(void)

void FUN_141491bb0(undefined8 param_1,longlong param_2)

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
  FUN_14122df80(param_1,local_res10[0]);
  return;
}



// FUNCTION 141491c30 FUN_141491c30 body=43 status=ok
// SIG undefined FUN_141491c30(void)

void FUN_141491c30(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14122e820();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141491c60 FUN_141491c60 body=43 status=ok
// SIG undefined FUN_141491c60(void)

void FUN_141491c60(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14122e840();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141491c90 FUN_141491c90 body=143 status=ok
// SIG undefined FUN_141491c90(void)

void FUN_141491c90(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_14122e870(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141491d20 FUN_141491d20 body=43 status=ok
// SIG undefined FUN_141491d20(void)

void FUN_141491d20(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14122e8d0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141491db0 FUN_141491db0 body=43 status=ok
// SIG undefined FUN_141491db0(void)

void FUN_141491db0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14122e8f0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141491de0 FUN_141491de0 body=43 status=ok
// SIG undefined FUN_141491de0(void)

void FUN_141491de0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14122ebf0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141491e10 FUN_141491e10 body=43 status=ok
// SIG undefined FUN_141491e10(void)

void FUN_141491e10(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14122ec10();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141491e60 FUN_141491e60 body=262 status=ok
// SIG undefined FUN_141491e60(void)

void FUN_141491e60(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_60;
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_70 = 0xffffffff;
  local_60 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_6c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_30 = 0;
  local_28 = 0;
  local_38 = 0;
  local_48 = local_70;
  local_44 = (undefined4)local_6c;
  local_40 = local_6c._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_88 = local_60;
  FString::FString(local_80,local_58);
  FSoftObjectPath::operator=(&local_38,&local_88);
  uVar1 = FUN_14122ec70(param_1,&local_48);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141491f70 FUN_141491f70 body=43 status=ok
// SIG undefined FUN_141491f70(void)

void FUN_141491f70(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14122ed50();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141491fc0 FUN_141491fc0 body=144 status=ok
// SIG undefined FUN_141491fc0(void)

void FUN_141491fc0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_14122ed60(param_1,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141492050 FUN_141492050 body=192 status=ok
// SIG undefined FUN_141492050(void)

void FUN_141492050(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int local_res10 [2];
  undefined8 local_res18 [2];
  
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
  uVar1 = FUN_14122f0b0(param_1,local_res18[0],local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141492140 FUN_141492140 body=143 status=ok
// SIG undefined FUN_141492140(void)

void FUN_141492140(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_14122f0d0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414921d0 FUN_1414921d0 body=43 status=ok
// SIG undefined FUN_1414921d0(void)

void FUN_1414921d0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14122f110();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141492200 FUN_141492200 body=143 status=ok
// SIG undefined FUN_141492200(void)

void FUN_141492200(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_14122f1b0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141492290 FUN_141492290 body=43 status=ok
// SIG undefined FUN_141492290(void)

void FUN_141492290(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14122f1e0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414922c0 FUN_1414922c0 body=43 status=ok
// SIG undefined FUN_1414922c0(void)

void FUN_1414922c0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14122f2b0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414922f0 FUN_1414922f0 body=130 status=ok
// SIG undefined FUN_1414922f0(void)

void FUN_1414922f0(undefined8 param_1,longlong param_2)

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
  FUN_14122f350(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 141492380 FUN_141492380 body=128 status=ok
// SIG undefined FUN_141492380(void)

void FUN_141492380(undefined8 param_1,longlong param_2)

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
  FUN_14122f440(param_1,local_res10);
  return;
}



// FUNCTION 141492440 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_141231ee0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141492500 FUN_141492500 body=332 status=ok
// SIG undefined FUN_141492500(void)

void FUN_141492500(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_18;
  undefined4 local_14 [3];
  
  local_14[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_14);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_14);
  }
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
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
  FUN_1412131a0(param_1,local_14[0],local_18,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 141492650 FUN_141492650 body=188 status=ok
// SIG undefined FUN_141492650(void)

void FUN_141492650(undefined8 param_1,longlong param_2)

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
  FUN_141234240(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 141492710 FUN_141492710 body=324 status=ok
// SIG undefined FUN_141492710(void)

void FUN_141492710(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 local_res10 [16];
  undefined8 local_res20;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_58 = 0;
  local_50 = 0xffffffff;
  uStack_48 = 0xffffffff;
  local_40 = 1;
  local_38 = 0;
  uStack_30 = 0;
  local_3c = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_res10[0] = 0;
  puVar1 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  FUN_141234340(param_1,local_res20,puVar1,local_res10[0]);
  return;
}



// FUNCTION 141492940 FUN_141492940 body=328 status=ok
// SIG undefined FUN_141492940(void)

void FUN_141492940(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  int local_res20 [2];
  undefined4 local_28 [2];
  undefined8 local_20;
  
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
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
  FUN_141236610(param_1,local_20,local_28[0],bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 141492a90 FUN_141492a90 body=118 status=ok
// SIG undefined FUN_141492a90(void)

void FUN_141492a90(undefined8 param_1,longlong param_2)

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
  FUN_1412367a0(param_1,local_res10[0]);
  return;
}



// FUNCTION 141492b10 FUN_141492b10 body=128 status=ok
// SIG undefined FUN_141492b10(void)

void FUN_141492b10(undefined8 param_1,longlong param_2)

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
  FUN_14123c560(param_1,local_res10);
  return;
}



// FUNCTION 141492b90 FUN_141492b90 body=128 status=ok
// SIG undefined FUN_141492b90(void)

void FUN_141492b90(undefined8 param_1,longlong param_2)

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
  FUN_14123cae0(param_1,local_res10);
  return;
}



// FUNCTION 141492c30 FUN_141492c30 body=182 status=ok
// SIG undefined FUN_141492c30(void)

void FUN_141492c30(longlong *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  bVar2 = local_res8[0] != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x880))(param_1,bVar2);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerStartEBrake_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x888))(param_1,bVar2);
  }
  return;
}



// FUNCTION 141492cf0 FUN_141492cf0 body=182 status=ok
// SIG undefined FUN_141492cf0(void)

void FUN_141492cf0(longlong *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  bVar2 = local_res8[0] != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x870))(param_1,bVar2);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerStopEBrake_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x878))(param_1,bVar2);
  }
  return;
}



// FUNCTION 141492db0 FUN_141492db0 body=128 status=ok
// SIG undefined FUN_141492db0(void)

void FUN_141492db0(undefined8 param_1,longlong param_2)

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
  FUN_14123da90(param_1,local_res10);
  return;
}



// FUNCTION 141492e30 FUN_141492e30 body=190 status=ok
// SIG undefined FUN_141492e30(void)

void FUN_141492e30(undefined8 param_1,longlong param_2)

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
  FUN_14123def0(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 141492ef0 FUN_141492ef0 body=130 status=ok
// SIG undefined FUN_141492ef0(void)

void FUN_141492ef0(undefined8 param_1,longlong param_2)

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
  FUN_14123e120(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 141492f80 FUN_141492f80 body=118 status=ok
// SIG undefined FUN_141492f80(void)

void FUN_141492f80(undefined8 param_1,longlong param_2)

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
  FUN_14123ece0(param_1,local_res10[0]);
  return;
}



// FUNCTION 141493000 FUN_141493000 body=130 status=ok
// SIG undefined FUN_141493000(void)

void FUN_141493000(undefined8 param_1,longlong param_2)

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
  FUN_14123f0f0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 141493090 FUN_141493090 body=130 status=ok
// SIG undefined FUN_141493090(void)

void FUN_141493090(undefined8 param_1,longlong param_2)

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
  FUN_14123f170(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 141493120 FUN_141493120 body=130 status=ok
// SIG undefined FUN_141493120(void)

void FUN_141493120(undefined8 param_1,longlong param_2)

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
  FUN_14123f280(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414931b0 execSetActorScale3D body=133 status=ok
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
  FUN_14123f290(param_1,&local_18);
  return;
}



// FUNCTION 141493240 FUN_141493240 body=130 status=ok
// SIG undefined FUN_141493240(void)

void FUN_141493240(undefined8 param_1,longlong param_2)

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
  FUN_14123f320(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414932d0 FUN_1414932d0 body=130 status=ok
// SIG undefined FUN_1414932d0(void)

void FUN_1414932d0(undefined8 param_1,longlong param_2)

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
  FUN_14123f460(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 141493360 FUN_141493360 body=195 status=ok
// SIG undefined FUN_141493360(void)

void FUN_141493360(undefined8 param_1,longlong param_2)

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
  FUN_14123f7d0(param_1,local_res10[0],local_res20[0] != 0);
  return;
}



// FUNCTION 141493430 FUN_141493430 body=123 status=ok
// SIG undefined FUN_141493430(void)

void FUN_141493430(undefined8 param_1,longlong param_2)

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
  FUN_1412401f0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414934b0 FUN_1414934b0 body=123 status=ok
// SIG undefined FUN_1414934b0(void)

void FUN_1414934b0(undefined8 param_1,longlong param_2)

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
  FUN_141240250(param_1,local_res10[0]);
  return;
}



// FUNCTION 141493530 execLockAIResources body=194 status=ok
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
  FUN_1412402d0(param_1,bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 141493600 FUN_141493600 body=128 status=ok
// SIG undefined FUN_141493600(void)

void FUN_141493600(undefined8 param_1,longlong param_2)

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
  FUN_1412403c0(param_1,local_res10);
  return;
}



// FUNCTION 141493680 FUN_141493680 body=336 status=ok
// SIG undefined FUN_141493680(void)

void FUN_141493680(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10 = 0;
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
  puVar3 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_141241100(local_res18[0],local_res10,puVar2,puVar3);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414937d0 FUN_1414937d0 body=78 status=ok
// SIG undefined FUN_1414937d0(void)

void FUN_1414937d0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x8d0))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"StartBoost_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141493817. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8d8))(param_1);
  return;
}



// FUNCTION 141493820 FUN_141493820 body=130 status=ok
// SIG undefined FUN_141493820(void)

void FUN_141493820(undefined8 param_1,longlong param_2)

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
  FUN_1412417d0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414938b0 FUN_1414938b0 body=78 status=ok
// SIG undefined FUN_1414938b0(void)

void FUN_1414938b0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x8b0))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"StartHorn_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001414938f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8b8))(param_1);
  return;
}



// FUNCTION 141493900 execSetEventReceivers body=224 status=ok
// SIG undefined execSetEventReceivers(void)

void ALevelSequenceActor::execSetEventReceivers(undefined8 param_1,longlong param_2)

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
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
              (&local_18,local_20 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 << 3);
  }
  FUN_141241900(param_1,&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141493a00 FUN_141493a00 body=118 status=ok
// SIG undefined FUN_141493a00(void)

void FUN_141493a00(undefined8 param_1,longlong param_2)

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
  FUN_141241a90(param_1,local_res10[0]);
  return;
}



// FUNCTION 141493a80 FUN_141493a80 body=43 status=ok
// SIG undefined FUN_141493a80(void)

void FUN_141493a80(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_141241b60();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141493ad0 execOnOwnerEndPlay body=192 status=ok
// SIG undefined execOnOwnerEndPlay(void)

void UAIPerceptionComponent::execOnOwnerEndPlay(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
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
  FUN_141241c80(param_1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 141493bb0 FUN_141493bb0 body=182 status=ok
// SIG undefined FUN_141493bb0(void)

void FUN_141493bb0(longlong *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  bVar2 = local_res8[0] != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x8c0))(param_1,bVar2);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"StopBoost_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x8c8))(param_1,bVar2);
  }
  return;
}



// FUNCTION 141493c70 FUN_141493c70 body=130 status=ok
// SIG undefined FUN_141493c70(void)

void FUN_141493c70(undefined8 param_1,longlong param_2)

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
  FUN_141241dd0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 141493d20 FUN_141493d20 body=118 status=ok
// SIG undefined FUN_141493d20(void)

void FUN_141493d20(undefined8 param_1,longlong param_2)

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
  FUN_141241e90(param_1,local_res10[0]);
  return;
}



// FUNCTION 141493da0 FUN_141493da0 body=194 status=ok
// SIG undefined FUN_141493da0(void)

void FUN_141493da0(undefined8 param_1,longlong param_2)

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
  FUN_141241eb0(param_1,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 141493e70 FUN_141493e70 body=78 status=ok
// SIG undefined FUN_141493e70(void)

void FUN_141493e70(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x8a0))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"StopHorn_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141493eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8a8))(param_1);
  return;
}



// FUNCTION 141493f00 FUN_141493f00 body=128 status=ok
// SIG undefined FUN_141493f00(void)

void FUN_141493f00(undefined8 param_1,longlong param_2)

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
  FUN_1412422f0(param_1,local_res10);
  return;
}



// FUNCTION 141493f80 FUN_141493f80 body=118 status=ok
// SIG undefined FUN_141493f80(void)

void FUN_141493f80(undefined8 param_1,longlong param_2)

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
  FUN_141242330(param_1,local_res10[0]);
  return;
}



// FUNCTION 141494040 execOnOwnerEndPlay body=192 status=ok
// SIG undefined execOnOwnerEndPlay(void)

void UAIPerceptionComponent::execOnOwnerEndPlay(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
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
  FUN_141242540(param_1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 141494100 FUN_141494100 body=130 status=ok
// SIG undefined FUN_141494100(void)

void FUN_141494100(undefined8 param_1,longlong param_2)

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
  FUN_1412425b0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 141494190 FUN_141494190 body=216 status=ok
// SIG undefined FUN_141494190(void)

void FUN_141494190(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x868))(param_1,&local_18,&local_28);
  return;
}



// FUNCTION 141494290 FUN_141494290 body=128 status=ok
// SIG undefined FUN_141494290(void)

void FUN_141494290(undefined8 param_1,longlong param_2)

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
  FUN_14124ef70(param_1,local_res10);
  return;
}



// FUNCTION 141494330 FUN_141494330 body=162 status=ok
// SIG undefined FUN_141494330(void)

longlong FUN_141494330(void)

{
  if (DAT_14689b348 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehicleWeaponFireProjectileComponent",&DAT_14689b348,
                  FUN_141497250,0x9b8,0x10000000,0,L"Engine",&LAB_141496400,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1430bf300,&LAB_140447700,0);
  }
  return DAT_14689b348;
}



// FUNCTION 1414943e0 FUN_1414943e0 body=162 status=ok
// SIG undefined FUN_1414943e0(void)

longlong FUN_1414943e0(void)

{
  if (DAT_14689b078 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehicleAspectData",&DAT_14689b078,FUN_140447710,0x38,
                  0x10000000,0,L"Engine",&LAB_141495f30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f6e0,&LAB_140447700,0);
  }
  return DAT_14689b078;
}



// FUNCTION 141494490 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAESHelper::GetPrivateStaticClass(void)

{
  if (DAT_14689b028 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehicleAdditionalWwiseConfigurationEventsAspectData",
                  &DAT_14689b028,FUN_140447710,0x48,0x10000000,0,L"Engine",&LAB_141495ef0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414943e0,&LAB_140447700,0);
  }
  return DAT_14689b028;
}



// FUNCTION 141494540 FUN_141494540 body=47 status=ok
// SIG undefined FUN_141494540(void)

longlong FUN_141494540(void)

{
  if (DAT_14689b340 == 0) {
    FUN_141786440(&DAT_14689b340,&PTR_FUN_144b4e900);
  }
  return DAT_14689b340;
}



// FUNCTION 141494570 FUN_141494570 body=47 status=ok
// SIG undefined FUN_141494570(void)

longlong FUN_141494570(void)

{
  if (DAT_14689b2f0 == 0) {
    FUN_141786a30(&DAT_14689b2f0,&PTR_FUN_146436890);
  }
  return DAT_14689b2f0;
}



// FUNCTION 1414945a0 FUN_1414945a0 body=47 status=ok
// SIG undefined FUN_1414945a0(void)

longlong FUN_1414945a0(void)

{
  if (DAT_14689b2f8 == 0) {
    FUN_141786a30(&DAT_14689b2f8,&PTR_FUN_146436910);
  }
  return DAT_14689b2f8;
}



// FUNCTION 1414945d0 FUN_1414945d0 body=47 status=ok
// SIG undefined FUN_1414945d0(void)

longlong FUN_1414945d0(void)

{
  if (DAT_14689b300 == 0) {
    FUN_141786a30(&DAT_14689b300,&PTR_FUN_1464369d0);
  }
  return DAT_14689b300;
}



// FUNCTION 141494600 FUN_141494600 body=47 status=ok
// SIG undefined FUN_141494600(void)

longlong FUN_141494600(void)

{
  if (DAT_14689b308 == 0) {
    FUN_141786a30(&DAT_14689b308,&PTR_FUN_146436a10);
  }
  return DAT_14689b308;
}



// FUNCTION 141494630 FUN_141494630 body=47 status=ok
// SIG undefined FUN_141494630(void)

longlong FUN_141494630(void)

{
  if (DAT_14689b310 == 0) {
    FUN_141786a30(&DAT_14689b310,&PTR_FUN_146436aa0);
  }
  return DAT_14689b310;
}



// FUNCTION 141494660 FUN_141494660 body=47 status=ok
// SIG undefined FUN_141494660(void)

longlong FUN_141494660(void)

{
  if (DAT_14689b318 == 0) {
    FUN_141786a30(&DAT_14689b318,&PTR_FUN_146436b50);
  }
  return DAT_14689b318;
}



// FUNCTION 141494690 FUN_141494690 body=47 status=ok
// SIG undefined FUN_141494690(void)

longlong FUN_141494690(void)

{
  if (DAT_14689b320 == 0) {
    FUN_141786a30(&DAT_14689b320,&PTR_FUN_146436c00);
  }
  return DAT_14689b320;
}



// FUNCTION 1414946c0 FUN_1414946c0 body=47 status=ok
// SIG undefined FUN_1414946c0(void)

longlong FUN_1414946c0(void)

{
  if (DAT_14689b328 == 0) {
    FUN_141786a30(&DAT_14689b328,&PTR_FUN_146436c80);
  }
  return DAT_14689b328;
}



// FUNCTION 1414946f0 FUN_1414946f0 body=47 status=ok
// SIG undefined FUN_1414946f0(void)

longlong FUN_1414946f0(void)

{
  if (DAT_14689b330 == 0) {
    FUN_141786a30(&DAT_14689b330,&PTR_FUN_146436cc0);
  }
  return DAT_14689b330;
}



// FUNCTION 141494720 FUN_141494720 body=47 status=ok
// SIG undefined FUN_141494720(void)

longlong FUN_141494720(void)

{
  if (DAT_14689b338 == 0) {
    FUN_141786a30(&DAT_14689b338,&PTR_FUN_146436d40);
  }
  return DAT_14689b338;
}



// FUNCTION 141494750 FUN_141494750 body=53 status=ok
// SIG undefined FUN_141494750(void)

void FUN_141494750(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144b55698;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141494790 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AUGSpawnProxyManager::GetPrivateStaticClass(void)

{
  if (DAT_14689b0e0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehicleBoostData",&DAT_14689b0e0,FUN_140447710,0x3d0,
                  0x10000000,0,L"Engine",FUN_141495fb0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1414970a0,&LAB_140447700,0);
  }
  return DAT_14689b0e0;
}



// FUNCTION 141494840 FUN_141494840 body=162 status=ok
// SIG undefined FUN_141494840(void)

longlong FUN_141494840(void)

{
  if (DAT_14689b288 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehicleSpawner",&DAT_14689b288,FUN_140447710,0x658,
                  0x10000004,0,L"Editor",&LAB_141495e60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  thunk_FUN_14147d9d0,&LAB_140447700,0);
  }
  return DAT_14689b288;
}



// FUNCTION 1414948f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMaterialInstanceDynamic::GetPrivateStaticClass(void)

{
  if (DAT_14689b0f8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehicleBoostComponent",&DAT_14689b0f8,FUN_1414971c0,0x220,
                  0x10000000,0,L"GbxVehicle",FUN_141495f70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UTextBlock::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14689b0f8;
}



// FUNCTION 1414949a0 FUN_1414949a0 body=47 status=ok
// SIG undefined FUN_1414949a0(void)

longlong FUN_1414949a0(void)

{
  if (DAT_14689b070 == 0) {
    FUN_141786440(&DAT_14689b070,&PTR_FUN_144b4d700);
  }
  return DAT_14689b070;
}



// FUNCTION 1414949e0 FUN_1414949e0 body=47 status=ok
// SIG undefined FUN_1414949e0(void)

longlong FUN_1414949e0(void)

{
  if (DAT_14689b0f0 == 0) {
    FUN_141786440(&DAT_14689b0f0,&PTR_GetPrivateStaticClass_144b4e680);
  }
  return DAT_14689b0f0;
}



// FUNCTION 141494a10 FUN_141494a10 body=47 status=ok
// SIG undefined FUN_141494a10(void)

longlong FUN_141494a10(void)

{
  if (DAT_14689b0e8 == 0) {
    FUN_141786a30(&DAT_14689b0e8,&PTR_FUN_146433b50);
  }
  return DAT_14689b0e8;
}



// FUNCTION 141494a60 FUN_141494a60 body=53 status=ok
// SIG undefined FUN_141494a60(void)

void FUN_141494a60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144b52650;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141494ab0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ASoundManager::GetPrivateStaticClass(void)

{
  if (DAT_14689b2b0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehicleSpawnPoint",&DAT_14689b2b0,FUN_141497100,0x570,
                  0x10000000,0,L"Engine",&LAB_141495e40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  ALoreItem::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14689b2b0;
}



// FUNCTION 141494b70 FUN_141494b70 body=47 status=ok
// SIG undefined FUN_141494b70(void)

longlong FUN_141494b70(void)

{
  if (DAT_14689b2a8 == 0) {
    FUN_141786440(&DAT_14689b2a8,&PTR_GetPrivateStaticClass_144b4f3e0);
  }
  return DAT_14689b2a8;
}



// FUNCTION 141494ba0 FUN_141494ba0 body=47 status=ok
// SIG undefined FUN_141494ba0(void)

longlong FUN_141494ba0(void)

{
  if (DAT_14689b298 == 0) {
    FUN_141786a30(&DAT_14689b298,&PTR_FUN_146435c50);
  }
  return DAT_14689b298;
}



// FUNCTION 141494bd0 FUN_141494bd0 body=47 status=ok
// SIG undefined FUN_141494bd0(void)

longlong FUN_141494bd0(void)

{
  if (DAT_14689b2a0 == 0) {
    FUN_141786a30(&DAT_14689b2a0,&PTR_FUN_146435d10);
  }
  return DAT_14689b2a0;
}



// FUNCTION 141494c00 FUN_141494c00 body=53 status=ok
// SIG undefined FUN_141494c00(void)

void FUN_141494c00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_144b53610;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141494c40 FUN_141494c40 body=53 status=ok
// SIG undefined FUN_141494c40(void)

void FUN_141494c40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144b54768;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141494c80 FUN_141494c80 body=53 status=ok
// SIG undefined FUN_141494c80(void)

void FUN_141494c80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &PTR_FUN_144b54880;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141494cd0 FUN_141494cd0 body=162 status=ok
// SIG undefined FUN_141494cd0(void)

longlong FUN_141494cd0(void)

{
  if (DAT_14689b1e0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehiclePartData",&DAT_14689b1e0,FUN_140447710,0x268,
                  0x10000001,0,L"Engine",FUN_141496350,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1430e5bb0,&LAB_140447700,0);
  }
  return DAT_14689b1e0;
}



// FUNCTION 141494d80 FUN_141494d80 body=162 status=ok
// SIG undefined FUN_141494d80(void)

longlong FUN_141494d80(void)

{
  if (DAT_14689b1f0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakProjectileVehicleData",&DAT_14689b1f0,FUN_140447710,0x90,
                  0x10000000,0,L"Engine",FUN_141495ea0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14689b1f0;
}



// FUNCTION 141494e30 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieScene3DTransformSection::GetPrivateStaticClass(void)

{
  if (DAT_14689b218 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehicleProjectile",&DAT_14689b218,FUN_1414970d0,0x730,
                  0x10000000,0,L"Engine",&LAB_141495e30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1413ae830,&LAB_140447700,0);
  }
  return DAT_14689b218;
}



// FUNCTION 141494ef0 FUN_141494ef0 body=47 status=ok
// SIG undefined FUN_141494ef0(void)

longlong FUN_141494ef0(void)

{
  if (DAT_14689b210 == 0) {
    FUN_141786440(&DAT_14689b210,&PTR_GetPrivateStaticClass_144b4fc60);
  }
  return DAT_14689b210;
}



// FUNCTION 141494f20 FUN_141494f20 body=47 status=ok
// SIG undefined FUN_141494f20(void)

longlong FUN_141494f20(void)

{
  if (DAT_14689b1f8 == 0) {
    FUN_141786a30(&DAT_14689b1f8,&PTR_FUN_146434c90);
  }
  return DAT_14689b1f8;
}



// FUNCTION 141494f50 FUN_141494f50 body=47 status=ok
// SIG undefined FUN_141494f50(void)

longlong FUN_141494f50(void)

{
  if (DAT_14689b200 == 0) {
    FUN_141786a30(&DAT_14689b200,&PTR_FUN_146434e10);
  }
  return DAT_14689b200;
}



// FUNCTION 141494f80 FUN_141494f80 body=47 status=ok
// SIG undefined FUN_141494f80(void)

longlong FUN_141494f80(void)

{
  if (DAT_14689b208 == 0) {
    FUN_141786a30(&DAT_14689b208,&PTR_FUN_146434fd0);
  }
  return DAT_14689b208;
}



// FUNCTION 141494fc0 FUN_141494fc0 body=162 status=ok
// SIG undefined FUN_141494fc0(void)

longlong FUN_141494fc0(void)

{
  if (DAT_14689b128 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehicleContextResolver",&DAT_14689b128,FUN_140447710,0x58,
                  0x10000000,0,L"Engine",FUN_1414960a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1413c1cb0,&LAB_140447700,0);
  }
  return DAT_14689b128;
}



// FUNCTION 141495080 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGMeshParameterCue::GetPrivateStaticClass(void)

{
  if (DAT_14689b138 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehicleDamageComponent",&DAT_14689b138,FUN_140447710,0x9d0
                  ,0x10000000,0,L"Engine",&LAB_1414960d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  AGFreezeCharacterCue::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14689b138;
}



// FUNCTION 141495140 FUN_141495140 body=162 status=ok
// SIG undefined FUN_141495140(void)

longlong FUN_141495140(void)

{
  if (DAT_14689b230 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehiclePropertyValueResolver",&DAT_14689b230,FUN_140447710
                  ,0x30,0x10000000,0,L"Engine",FUN_141496390,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDungeonEventListener::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14689b230;
}



// FUNCTION 141495210 FUN_141495210 body=162 status=ok
// SIG undefined FUN_141495210(void)

longlong FUN_141495210(void)

{
  if (DAT_14689b148 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehicleEffectAspectData",&DAT_14689b148,FUN_140447710,0x60
                  ,0x10000000,0,L"Engine",&LAB_1414960f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414943e0,&LAB_140447700,0);
  }
  return DAT_14689b148;
}



// FUNCTION 1414952c0 FUN_1414952c0 body=53 status=ok
// SIG undefined FUN_1414952c0(void)

void FUN_1414952c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144b55520;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141495300 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UNavModifierComponent::GetPrivateStaticClass(void)

{
  if (DAT_14689b268 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehicleSettings",&DAT_14689b268,FUN_141497220,0x150,
                  0x10000006,0,L"Game",&LAB_1414963c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDeveloperSettings::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14689b268;
}



// FUNCTION 1414953b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAESHelper::GetPrivateStaticClass(void)

{
  if (DAT_14689b158 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehicleEffectAspectDataCollection",&DAT_14689b158,
                  FUN_140447710,0x48,0x10000000,0,L"Engine",
                  InternalConstructor<UDatasmithFBXSceneImportData>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414943e0,&LAB_140447700,0);
  }
  return DAT_14689b158;
}



// FUNCTION 141495460 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UComboBoxWidgetStyle::StaticClass(void)

{
  if (DAT_14689b0d0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehicleBalanceStateComponent",&DAT_14689b0d0,FUN_141497190
                  ,0x408,0x10000000,0,L"Engine",&LAB_141495f50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1430e5b00,&LAB_140447700,0);
  }
  return DAT_14689b0d0;
}



// FUNCTION 141495510 FUN_141495510 body=47 status=ok
// SIG undefined FUN_141495510(void)

longlong FUN_141495510(void)

{
  if (DAT_14689b260 == 0) {
    FUN_141786440(&DAT_14689b260,&PTR_GetPrivateStaticClass_144b50930);
  }
  return DAT_14689b260;
}



// FUNCTION 141495540 FUN_141495540 body=47 status=ok
// SIG undefined FUN_141495540(void)

longlong FUN_141495540(void)

{
  if (DAT_14689b248 == 0) {
    FUN_141786a30(&DAT_14689b248,&PTR_FUN_146435420);
  }
  return DAT_14689b248;
}



// FUNCTION 141495570 FUN_141495570 body=47 status=ok
// SIG undefined FUN_141495570(void)

longlong FUN_141495570(void)

{
  if (DAT_14689b250 == 0) {
    FUN_141786a30(&DAT_14689b250,&PTR_FUN_146435510);
  }
  return DAT_14689b250;
}



// FUNCTION 1414955a0 FUN_1414955a0 body=47 status=ok
// SIG undefined FUN_1414955a0(void)

longlong FUN_1414955a0(void)

{
  if (DAT_14689b258 == 0) {
    FUN_141786a30(&DAT_14689b258,&PTR_FUN_1464355c0);
  }
  return DAT_14689b258;
}



// FUNCTION 141495600 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UPawnAction_Sequence::StaticClass(void)

{
  if (DAT_14689b278 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehicleShieldAspectData",&DAT_14689b278,FUN_140447710,0xc0
                  ,0x10000000,0,L"Engine",&LAB_1414963e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414943e0,&LAB_140447700,0);
  }
  return DAT_14689b278;
}



// FUNCTION 1414956b0 FUN_1414956b0 body=47 status=ok
// SIG undefined FUN_1414956b0(void)

longlong FUN_1414956b0(void)

{
  if (DAT_14689b0c8 == 0) {
    FUN_141786440(&DAT_14689b0c8,&PTR_StaticClass_144b51900);
  }
  return DAT_14689b0c8;
}



// FUNCTION 1414956e0 FUN_1414956e0 body=47 status=ok
// SIG undefined FUN_1414956e0(void)

longlong FUN_1414956e0(void)

{
  if (DAT_14689b080 == 0) {
    FUN_141786a30(&DAT_14689b080,&PTR_FUN_1464331e0);
  }
  return DAT_14689b080;
}



// FUNCTION 141495710 FUN_141495710 body=47 status=ok
// SIG undefined FUN_141495710(void)

longlong FUN_141495710(void)

{
  if (DAT_14689b088 == 0) {
    FUN_141786a30(&DAT_14689b088,&PTR_FUN_146433220);
  }
  return DAT_14689b088;
}



// FUNCTION 141495740 FUN_141495740 body=47 status=ok
// SIG undefined FUN_141495740(void)

longlong FUN_141495740(void)

{
  if (DAT_14689b090 == 0) {
    FUN_141786a30(&DAT_14689b090,&PTR_FUN_1464332e0);
  }
  return DAT_14689b090;
}



// FUNCTION 141495770 FUN_141495770 body=47 status=ok
// SIG undefined FUN_141495770(void)

longlong FUN_141495770(void)

{
  if (DAT_14689b098 == 0) {
    FUN_141786a30(&DAT_14689b098,&PTR_FUN_1464333a0);
  }
  return DAT_14689b098;
}



// FUNCTION 1414957a0 FUN_1414957a0 body=47 status=ok
// SIG undefined FUN_1414957a0(void)

longlong FUN_1414957a0(void)

{
  if (DAT_14689b0a0 == 0) {
    FUN_141786a30(&DAT_14689b0a0,&PTR_FUN_146433460);
  }
  return DAT_14689b0a0;
}



// FUNCTION 1414957d0 FUN_1414957d0 body=47 status=ok
// SIG undefined FUN_1414957d0(void)

longlong FUN_1414957d0(void)

{
  if (DAT_14689b0a8 == 0) {
    FUN_141786a30(&DAT_14689b0a8,&PTR_FUN_146433520);
  }
  return DAT_14689b0a8;
}



// FUNCTION 141495800 FUN_141495800 body=47 status=ok
// SIG undefined FUN_141495800(void)

longlong FUN_141495800(void)

{
  if (DAT_14689b0b0 == 0) {
    FUN_141786a30(&DAT_14689b0b0,&PTR_FUN_1464335e0);
  }
  return DAT_14689b0b0;
}



// FUNCTION 141495830 FUN_141495830 body=47 status=ok
// SIG undefined FUN_141495830(void)

longlong FUN_141495830(void)

{
  if (DAT_14689b0b8 == 0) {
    FUN_141786a30(&DAT_14689b0b8,&PTR_FUN_146433660);
  }
  return DAT_14689b0b8;
}



// FUNCTION 141495860 FUN_141495860 body=47 status=ok
// SIG undefined FUN_141495860(void)

longlong FUN_141495860(void)

{
  if (DAT_14689b0c0 == 0) {
    FUN_141786a30(&DAT_14689b0c0,&PTR_FUN_1464336e0);
  }
  return DAT_14689b0c0;
}



// FUNCTION 141495890 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ALobbyBeaconHost::GetPrivateStaticClass(void)

{
  if (DAT_14689b170 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehicleInputComponent",&DAT_14689b170,FUN_1414971f0,0x3b8,
                  0x10000008,0,L"Game",FUN_141496150,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UUGGameViewportClient::StaticClass,&LAB_140447700,0);
  }
  return DAT_14689b170;
}



// FUNCTION 141495950 FUN_141495950 body=47 status=ok
// SIG undefined FUN_141495950(void)

longlong FUN_141495950(void)

{
  if (DAT_14689b168 == 0) {
    FUN_141786440(&DAT_14689b168,&PTR_GetPrivateStaticClass_144b51110);
  }
  return DAT_14689b168;
}



// FUNCTION 141495980 FUN_141495980 body=47 status=ok
// SIG undefined FUN_141495980(void)

longlong FUN_141495980(void)

{
  if (DAT_14689b160 == 0) {
    FUN_141786a30(&DAT_14689b160,&PTR_FUN_146433f80);
  }
  return DAT_14689b160;
}



// FUNCTION 1414959b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USoUIDialoguePanel::GetPrivateStaticClass(void)

{
  if (DAT_14689b2c8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehicleSpeedTriggerBox",&DAT_14689b2c8,
                  StaticRegisterNativesUSoUIDialoguePanel,0x498,0x10000000,0,L"Engine",
                  &LAB_141495e80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  UUGRichTextBlock::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14689b2c8;
}



// FUNCTION 141495a60 FUN_141495a60 body=47 status=ok
// SIG undefined FUN_141495a60(void)

longlong FUN_141495a60(void)

{
  if (DAT_14689b2c0 == 0) {
    FUN_141786440(&DAT_14689b2c0,&PTR_GetPrivateStaticClass_144b514a0);
  }
  return DAT_14689b2c0;
}



// FUNCTION 141495a90 FUN_141495a90 body=47 status=ok
// SIG undefined FUN_141495a90(void)

longlong FUN_141495a90(void)

{
  if (DAT_14689b2b8 == 0) {
    FUN_141786a30(&DAT_14689b2b8,&PTR_FUN_146436270);
  }
  return DAT_14689b2b8;
}



// FUNCTION 141495ad0 FUN_141495ad0 body=151 status=ok
// SIG undefined FUN_141495ad0(void)

longlong FUN_141495ad0(void)

{
  if (DAT_14689b180 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehicleManager",&DAT_14689b180,FUN_140447710,0x40,
                  0x10000008,0,L"Game",&LAB_1414961f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_14689b180;
}



// FUNCTION 141495ba0 FUN_141495ba0 body=162 status=ok
// SIG undefined FUN_141495ba0(void)

longlong FUN_141495ba0(void)

{
  if (DAT_14689b1a0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehicleMaterialAspectData",&DAT_14689b1a0,FUN_140447710,
                  0x110,0x10000000,0,L"Engine",FUN_141496200,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141497080,&LAB_140447700,0);
  }
  return DAT_14689b1a0;
}



// FUNCTION 141495c50 FUN_141495c50 body=53 status=ok
// SIG undefined FUN_141495c50(void)

void FUN_141495c50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144b543d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141495ca0 FUN_141495ca0 body=162 status=ok
// SIG undefined FUN_141495ca0(void)

longlong FUN_141495ca0(void)

{
  if (DAT_14689b1b0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehicleMovementComponentContextResolver",&DAT_14689b1b0,
                  FUN_140447710,0x50,0x10000000,0,L"Engine",FUN_141496320,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1413c1cb0,&LAB_140447700,0);
  }
  return DAT_14689b1b0;
}



// FUNCTION 141495d60 FUN_141495d60 body=47 status=ok
// SIG undefined FUN_141495d60(void)

longlong FUN_141495d60(void)

{
  if (DAT_14689b060 == 0) {
    FUN_141786440(&DAT_14689b060,&PTR_thunk_FUN_141496ed0_144b52280);
  }
  return DAT_14689b060;
}



// FUNCTION 141495d90 FUN_141495d90 body=47 status=ok
// SIG undefined FUN_141495d90(void)

longlong FUN_141495d90(void)

{
  if (DAT_14689b050 == 0) {
    FUN_141786a30(&DAT_14689b050,&PTR_FUN_146432f10);
  }
  return DAT_14689b050;
}



// FUNCTION 141495dc0 FUN_141495dc0 body=47 status=ok
// SIG undefined FUN_141495dc0(void)

longlong FUN_141495dc0(void)

{
  if (DAT_14689b058 == 0) {
    FUN_141786a30(&DAT_14689b058,&PTR_FUN_146432fd0);
  }
  return DAT_14689b058;
}



// FUNCTION 141495df0 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FControlRigLayerInstanceProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x780;
    *puVar1 = &PTR_FUN_144b52768;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 141495ea0 FUN_141495ea0 body=77 status=ok
// SIG undefined FUN_141495ea0(void)

void FUN_141495ea0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = FUN_14178c940();
    UFontFaceInterface::UFontFaceInterface(puVar1,uVar2);
    *puVar1 = &PTR__scalar_deleting_destructor__144b54ef8;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *(undefined2 *)((longlong)puVar1 + 0x84) = 0;
    *(undefined4 *)(puVar1 + 0x11) = 0;
  }
  return;
}



// FUNCTION 141495f70 FUN_141495f70 body=62 status=ok
// SIG undefined FUN_141495f70(void)

void FUN_141495f70(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1430c8610(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x43) = 0xbf800000;
    *puVar1 = &PTR_FUN_144b53128;
    puVar1[5] = &PTR_LAB_144b53540;
  }
  return;
}



// FUNCTION 141495fb0 FUN_141495fb0 body=225 status=ok
// SIG undefined FUN_141495fb0(void)

void FUN_141495fb0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *(undefined1 *)(puVar1 + 6) = 0;
    *puVar1 = &PTR_FUN_144b52c28;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0xbf800000;
    FUN_1430c8100(puVar1 + 7);
    FUN_1430c8100(puVar1 + 0x31);
    puVar1[0x60] = 0x43340000;
    puVar1[0x5b] = 0;
    *(undefined1 *)(puVar1 + 0x5c) = 0;
    puVar1[0x5d] = 0;
    puVar1[0x5e] = 0;
    *(undefined2 *)(puVar1 + 0x5f) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2fc) = 0;
    *(undefined1 *)(puVar1 + 0x61) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x30c) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x314) = 0;
    FRuntimeFloatCurve::FRuntimeFloatCurve(puVar1 + 99);
    *(undefined4 *)(puVar1 + 0x72) = 0x40a00000;
    *puVar1 = &PTR_FUN_144b52ea8;
    puVar1[0x76] = 0;
    *(undefined4 *)(puVar1 + 0x77) = 0xbf800000;
    puVar1[0x78] = 0;
    puVar1[0x79] = 0;
  }
  return;
}



// FUNCTION 1414960a0 FUN_1414960a0 body=47 status=ok
// SIG undefined FUN_1414960a0(void)

void FUN_1414960a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UHoudiniLandscapePtr::UHoudiniLandscapePtr(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144b53728;
    puVar1[10] = 0;
  }
  return;
}



// FUNCTION 141496110 InternalConstructor<UDatasmithFBXSceneImportData> body=51 status=ok
// SIG undefined InternalConstructor<UDatasmithFBXSceneImportData>(void)

void InternalConstructor<UDatasmithFBXSceneImportData>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UAssetImportData::UAssetImportData(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144b539a8;
    puVar1[7] = 0;
    puVar1[8] = 0;
  }
  return;
}



// FUNCTION 141496150 FUN_141496150 body=152 status=ok
// SIG undefined FUN_141496150(void)

void FUN_141496150(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140676230(puVar1,param_1);
    *(undefined2 *)(puVar1 + 99) = 1;
    *puVar1 = &PTR_FUN_144b53c80;
    *(undefined1 *)((longlong)puVar1 + 0x31a) = 0;
    puVar1[5] = &PTR_LAB_144b54090;
    puVar1[0x40] = &PTR_LAB_144b540c0;
    FRuntimeFloatCurve::FRuntimeFloatCurve(puVar1 + 100);
    *(undefined1 *)(puVar1 + 0x73) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x39c) = 0x41a00000;
    *(undefined4 *)(puVar1 + 0x74) = 0x3f666666;
    *(undefined4 *)((longlong)puVar1 + 0x3a4) = 0x42a00000;
    *(undefined1 *)(puVar1 + 0x75) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x3ac) = 0x42e60000;
  }
  return;
}



// FUNCTION 141496200 FUN_141496200 body=280 status=ok
// SIG undefined FUN_141496200(void)

void FUN_141496200(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    *puVar1 = &PTR_FUN_144b540f8;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xec) = 0;
    puVar1[0x1f] = 0;
    *(undefined4 *)(puVar1 + 0x21) = 0;
    if (0x7fffffff < *(uint *)((longlong)puVar1 + 0x10c)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 0x20,0);
    }
    if ((undefined2 *)puVar1[0x20] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[0x20] = 0;
    }
    *(undefined4 *)(puVar1 + 0x1e) = 0;
  }
  return;
}



// FUNCTION 141496320 FUN_141496320 body=41 status=ok
// SIG undefined FUN_141496320(void)

void FUN_141496320(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UHoudiniLandscapePtr::UHoudiniLandscapePtr(puVar1,param_1);
    *puVar1 = &PTR_FUN_144b544e8;
  }
  return;
}



// FUNCTION 141496350 FUN_141496350 body=64 status=ok
// SIG undefined FUN_141496350(void)

void FUN_141496350(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142fdf540(puVar1,param_1);
    puVar1[0x4a] = 0;
    *puVar1 = &PTR_FUN_144b54c48;
    puVar1[0x20] = &PTR_LAB_144b54ee0;
  }
  return;
}



// FUNCTION 141496390 FUN_141496390 body=41 status=ok
// SIG undefined FUN_141496390(void)

void FUN_141496390(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142c8d050(puVar1,param_1);
    *puVar1 = &PTR_FUN_144b551a8;
  }
  return;
}



// FUNCTION 141496410 FUN_141496410 body=110 status=ok
// SIG undefined FUN_141496410(void)

void FUN_141496410(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  FUN_1414713a0(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 141496480 FUN_141496480 body=671 status=ok
// SIG undefined FUN_141496480(void)

longlong FUN_141496480(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  FUN_14084cff0();
  puVar1 = (undefined8 *)(param_1 + 0x6c8);
  *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(param_2 + 0x6b8);
  *(undefined8 *)(param_1 + 0x6c0) = *(undefined8 *)(param_2 + 0x6c0);
  if (puVar1 != (undefined8 *)(param_2 + 0x6c8)) {
    iVar2 = *(int *)(param_2 + 0x6d0);
    _Src = *(void **)(param_2 + 0x6c8);
    *(int *)(param_1 + 0x6d0) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x6d4) == 0)) {
      *(undefined4 *)(param_1 + 0x6d4) = 0;
    }
    else {
      TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 5);
    }
  }
  *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(param_2 + 0x6d8);
  *(undefined1 *)(param_1 + 0x6dc) = *(undefined1 *)(param_2 + 0x6dc);
  *(undefined1 *)(param_1 + 0x6dd) = *(undefined1 *)(param_2 + 0x6dd);
  *(undefined1 *)(param_1 + 0x6de) = *(undefined1 *)(param_2 + 0x6de);
  *(undefined1 *)(param_1 + 0x6df) = *(undefined1 *)(param_2 + 0x6df);
  *(undefined1 *)(param_1 + 0x6e0) = *(undefined1 *)(param_2 + 0x6e0);
  *(undefined1 *)(param_1 + 0x6e1) = *(undefined1 *)(param_2 + 0x6e1);
  *(undefined1 *)(param_1 + 0x6e2) = *(undefined1 *)(param_2 + 0x6e2);
  *(undefined1 *)(param_1 + 0x6e3) = *(undefined1 *)(param_2 + 0x6e3);
  *(undefined1 *)(param_1 + 0x6e4) = *(undefined1 *)(param_2 + 0x6e4);
  *(undefined4 *)(param_1 + 0x6e8) = *(undefined4 *)(param_2 + 0x6e8);
  *(undefined4 *)(param_1 + 0x6ec) = *(undefined4 *)(param_2 + 0x6ec);
  *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(param_2 + 0x6f0);
  *(undefined4 *)(param_1 + 0x6f4) = *(undefined4 *)(param_2 + 0x6f4);
  *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(param_2 + 0x6f8);
  *(undefined4 *)(param_1 + 0x6fc) = *(undefined4 *)(param_2 + 0x6fc);
  *(undefined4 *)(param_1 + 0x700) = *(undefined4 *)(param_2 + 0x700);
  *(undefined4 *)(param_1 + 0x704) = *(undefined4 *)(param_2 + 0x704);
  *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(param_2 + 0x708);
  *(undefined4 *)(param_1 + 0x70c) = *(undefined4 *)(param_2 + 0x70c);
  *(undefined4 *)(param_1 + 0x710) = *(undefined4 *)(param_2 + 0x710);
  *(undefined8 *)(param_1 + 0x714) = *(undefined8 *)(param_2 + 0x714);
  *(undefined4 *)(param_1 + 0x71c) = *(undefined4 *)(param_2 + 0x71c);
  *(undefined8 *)(param_1 + 0x720) = *(undefined8 *)(param_2 + 0x720);
  *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(param_2 + 0x728);
  *(undefined8 *)(param_1 + 0x72c) = *(undefined8 *)(param_2 + 0x72c);
  *(undefined4 *)(param_1 + 0x734) = *(undefined4 *)(param_2 + 0x734);
  *(undefined8 *)(param_1 + 0x738) = *(undefined8 *)(param_2 + 0x738);
  *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)(param_2 + 0x740);
  *(undefined8 *)(param_1 + 0x744) = *(undefined8 *)(param_2 + 0x744);
  *(undefined4 *)(param_1 + 0x74c) = *(undefined4 *)(param_2 + 0x74c);
  *(undefined8 *)(param_1 + 0x750) = *(undefined8 *)(param_2 + 0x750);
  *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_2 + 0x758);
  *(undefined8 *)(param_1 + 0x75c) = *(undefined8 *)(param_2 + 0x75c);
  *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(param_2 + 0x764);
  *(undefined4 *)(param_1 + 0x768) = *(undefined4 *)(param_2 + 0x768);
  *(undefined4 *)(param_1 + 0x76c) = *(undefined4 *)(param_2 + 0x76c);
  *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(param_2 + 0x770);
  *(undefined4 *)(param_1 + 0x774) = *(undefined4 *)(param_2 + 0x774);
  return param_1;
}



// FUNCTION 141496760 FUN_141496760 body=52 status=ok
// SIG undefined FUN_141496760(void)

undefined8 FUN_141496760(undefined8 param_1,ulonglong param_2)

{
  FUN_141496410();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1414967a0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USoundMix::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1414967f0 FUN_1414967f0 body=119 status=ok
// SIG undefined FUN_1414967f0(void)

longlong FUN_1414967f0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x198);
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 141496870 FUN_141496870 body=112 status=ok
// SIG undefined FUN_141496870(void)

longlong FUN_141496870(longlong param_1,ulonglong param_2)

{
  FRichCurve::~FRichCurve(param_1 + 0x318);
  FRichCurve::~FRichCurve(param_1 + 0x210);
  FRichCurve::~FRichCurve(param_1 + 400);
  FRichCurve::~FRichCurve(param_1 + 0xc0);
  FRichCurve::~FRichCurve(param_1 + 0x40);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3d0);
  }
  return param_1;
}



// FUNCTION 1414968e0 FUN_1414968e0 body=67 status=ok
// SIG undefined FUN_1414968e0(void)

longlong FUN_1414968e0(longlong param_1,ulonglong param_2)

{
  FRichCurve::~FRichCurve(param_1 + 800);
  FUN_1413e6ac0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3b8);
  }
  return param_1;
}



// FUNCTION 141496930 FUN_141496930 body=124 status=ok
// SIG undefined FUN_141496930(void)

longlong FUN_141496930(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  FUN_141496410(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 1414969b0 FUN_1414969b0 body=52 status=ok
// SIG undefined FUN_1414969b0(void)

undefined8 FUN_1414969b0(undefined8 param_1,ulonglong param_2)

{
  FUN_14128b250();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x268);
  }
  return param_1;
}



// FUNCTION 1414969f0 FUN_1414969f0 body=112 status=ok
// SIG undefined FUN_1414969f0(void)

longlong FUN_1414969f0(longlong param_1,ulonglong param_2)

{
  FRichCurve::~FRichCurve(param_1 + 0x318);
  FRichCurve::~FRichCurve(param_1 + 0x210);
  FRichCurve::~FRichCurve(param_1 + 400);
  FRichCurve::~FRichCurve(param_1 + 0xc0);
  FRichCurve::~FRichCurve(param_1 + 0x40);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x398);
  }
  return param_1;
}



// FUNCTION 141496a60 FUN_141496a60 body=52 status=ok
// SIG undefined FUN_141496a60(void)

undefined8 FUN_141496a60(undefined8 param_1,ulonglong param_2)

{
  FUN_14128b250();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x260);
  }
  return param_1;
}



// FUNCTION 141496b60 FUN_141496b60 body=74 status=ok
// SIG undefined FUN_141496b60(void)

undefined1 FUN_141496b60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_141496480(param_2 + param_3,param_3);
      param_3 = param_3 + 0x780;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141496bb0 FUN_141496bb0 body=392 status=ok
// SIG undefined FUN_141496bb0(void)

undefined8 FUN_141496bb0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x28);
    do {
      *(undefined8 *)(puVar1 + -10) = *(undefined8 *)((longlong)puVar1 + param_3 + -0x28);
      *(undefined8 *)(puVar1 + -8) = *(undefined8 *)((longlong)puVar1 + param_3 + -0x20);
      *(undefined8 *)(puVar1 + -6) = *(undefined8 *)((longlong)puVar1 + param_3 + -0x18);
      *(undefined8 *)(puVar1 + -4) = *(undefined8 *)((longlong)puVar1 + param_3 + -0x10);
      puVar1[-2] = *(undefined4 *)((longlong)puVar1 + param_3 + -8);
      puVar1[-1] = *(undefined4 *)((longlong)puVar1 + param_3 + -4);
      *puVar1 = *(undefined4 *)((longlong)puVar1 + param_3);
      puVar1[1] = *(undefined4 *)((longlong)puVar1 + param_3 + 4);
      puVar1[2] = *(undefined4 *)((longlong)puVar1 + param_3 + 8);
      local_28 = *(undefined8 *)((longlong)puVar1 + param_3 + 0x10);
      FString::FString(local_20,param_3 + 0x18 + (longlong)puVar1);
      FSoftObjectPath::operator=(puVar1 + 4,&local_28);
      puVar1[10] = *(undefined4 *)((longlong)puVar1 + param_3 + 0x28);
      puVar1[0xb] = *(undefined4 *)((longlong)puVar1 + param_3 + 0x2c);
      *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)((longlong)puVar1 + param_3 + 0x30);
      puVar1[0xe] = *(undefined4 *)((longlong)puVar1 + param_3 + 0x38);
      *(undefined8 *)(puVar1 + 0xf) = *(undefined8 *)((longlong)puVar1 + param_3 + 0x3c);
      puVar1[0x11] = *(undefined4 *)((longlong)puVar1 + param_3 + 0x44);
      *(undefined8 *)(puVar1 + 0x12) = *(undefined8 *)((longlong)puVar1 + param_3 + 0x48);
      puVar1[0x14] = *(undefined4 *)((longlong)puVar1 + param_3 + 0x50);
      *(undefined8 *)(puVar1 + 0x15) = *(undefined8 *)((longlong)puVar1 + param_3 + 0x54);
      puVar1[0x17] = *(undefined4 *)((longlong)puVar1 + param_3 + 0x5c);
      puVar1[0x18] = *(undefined4 *)((longlong)puVar1 + param_3 + 0x60);
      puVar1[0x19] = *(undefined4 *)((longlong)puVar1 + param_3 + 100);
      *(undefined1 *)(puVar1 + 0x1a) = *(undefined1 *)((longlong)puVar1 + param_3 + 0x68);
      *(undefined1 *)((longlong)puVar1 + 0x69) = *(undefined1 *)((longlong)puVar1 + param_3 + 0x69);
      puVar1[0x1b] = *(undefined4 *)((longlong)puVar1 + param_3 + 0x6c);
      puVar1[0x1c] = *(undefined4 *)(param_3 + 0x70 + (longlong)puVar1);
      puVar1[0x1d] = *(undefined4 *)(param_3 + 0x74 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 0x1e) = *(undefined8 *)(param_3 + 0x78 + (longlong)puVar1);
      puVar1[0x20] = *(undefined4 *)(param_3 + 0x80 + (longlong)puVar1);
      puVar1[0x21] = *(undefined4 *)(param_3 + 0x84 + (longlong)puVar1);
      puVar1[0x22] = *(undefined4 *)(param_3 + 0x88 + (longlong)puVar1);
      puVar1[0x23] = *(undefined4 *)(param_3 + 0x8c + (longlong)puVar1);
      puVar1 = puVar1 + 0x2e;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141496d40 Copy body=119 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FAnimationEntry>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x20;
    do {
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                (param_2 + -0x20,param_3 + -0x20 + param_2);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                (param_2 + -0x10,param_3 + -0x10 + param_2);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_2,param_3 + param_2);
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141496dc0 Copy body=79 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FInAppPurchaseProductRequest>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      FString::operator=(param_2,param_3 + param_2);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10 + param_2);
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141496e10 FUN_141496e10 body=55 status=ok
// SIG undefined FUN_141496e10(void)

void FUN_141496e10(void)

{
  undefined8 uVar1;
  
  if (DAT_14689aeb0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689aeb0 = GetStaticEnum(FUN_1414978b0,uVar1,L"EVehicleHealthState");
  }
  return;
}



// FUNCTION 141496e50 FUN_141496e50 body=55 status=ok
// SIG undefined FUN_141496e50(void)

void FUN_141496e50(void)

{
  undefined8 uVar1;
  
  if (DAT_14689aea8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689aea8 = GetStaticEnum(FUN_1414978e0,uVar1,L"EVehicleInputMode");
  }
  return;
}



// FUNCTION 141496e90 FUN_141496e90 body=55 status=ok
// SIG undefined FUN_141496e90(void)

void FUN_141496e90(void)

{
  undefined8 uVar1;
  
  if (DAT_14689aeb8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689aeb8 = GetStaticEnum(FUN_141497910,uVar1,L"EVehiclePropertyValueType");
  }
  return;
}



// FUNCTION 141496ed0 FUN_141496ed0 body=162 status=ok
// SIG undefined FUN_141496ed0(void)

longlong FUN_141496ed0(void)

{
  if (DAT_14689b068 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakVehicleAnimInstance",&DAT_14689b068,FUN_141497160,0x12f0,
                  0x10000008,0,L"Engine",&LAB_141495f10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142256d30,FUN_14096d210,&LAB_14084f730
                  ,0);
  }
  return DAT_14689b068;
}



// FUNCTION 141496f80 FUN_141496f80 body=6 status=ok
// SIG undefined FUN_141496f80(void)

undefined8 FUN_141496f80(void)

{
  return 0x3e80ab51;
}



// FUNCTION 141496f90 FUN_141496f90 body=6 status=ok
// SIG undefined FUN_141496f90(void)

undefined8 FUN_141496f90(void)

{
  return 0x55ec2ec4;
}



// FUNCTION 141496fa0 FUN_141496fa0 body=6 status=ok
// SIG undefined FUN_141496fa0(void)

undefined8 FUN_141496fa0(void)

{
  return 0x83c9b7b2;
}



// FUNCTION 141496fb0 FUN_141496fb0 body=6 status=ok
// SIG undefined FUN_141496fb0(void)

undefined8 FUN_141496fb0(void)

{
  return 0x94f59fdc;
}



// FUNCTION 141496fc0 FUN_141496fc0 body=6 status=ok
// SIG undefined FUN_141496fc0(void)

undefined8 FUN_141496fc0(void)

{
  return 0x2ee485b4;
}



// FUNCTION 141496fd0 FUN_141496fd0 body=6 status=ok
// SIG undefined FUN_141496fd0(void)

undefined8 FUN_141496fd0(void)

{
  return 0x9213ee18;
}



// FUNCTION 141496fe0 FUN_141496fe0 body=6 status=ok
// SIG undefined FUN_141496fe0(void)

undefined8 FUN_141496fe0(void)

{
  return 0x545056e0;
}



// FUNCTION 141496ff0 FUN_141496ff0 body=6 status=ok
// SIG undefined FUN_141496ff0(void)

undefined8 FUN_141496ff0(void)

{
  return 0x849f9405;
}



// FUNCTION 141497090 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UTextBlock::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1414970b0 thunk_FUN_1430e5b00 body=5 status=ok
// SIG undefined thunk_FUN_1430e5b00(void)

void thunk_FUN_1430e5b00(void)

{
  FUN_1430e5b00();
  return;
}



// FUNCTION 1414970c0 thunk_FUN_1430e5bb0 body=5 status=ok
// SIG undefined thunk_FUN_1430e5bb0(void)

void thunk_FUN_1430e5bb0(void)

{
  FUN_1430e5bb0();
  return;
}



// FUNCTION 1414970d0 FUN_1414970d0 body=34 status=ok
// SIG undefined FUN_1414970d0(void)

void FUN_1414970d0(void)

{
  undefined8 uVar1;
  
  uVar1 = UMovieScene3DTransformSection::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnHit_144b55178,3);
  return;
}



// FUNCTION 141497100 FUN_141497100 body=34 status=ok
// SIG undefined FUN_141497100(void)

void FUN_141497100(void)

{
  undefined8 uVar1;
  
  uVar1 = ASoundManager::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_PostSpawnIntro_144b55668,2);
  return;
}



// FUNCTION 141497130 StaticRegisterNativesUSoUIDialoguePanel body=34 status=ok
// SIG undefined StaticRegisterNativesUSoUIDialoguePanel(void)

void USoUIDialoguePanel::StaticRegisterNativesUSoUIDialoguePanel(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_VehicleTouched_144b55688,1);
  return;
}



// FUNCTION 141497160 FUN_141497160 body=34 status=ok
// SIG undefined FUN_141497160(void)

void FUN_141497160(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141496ed0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OwnerPostBeginPlay_144b52880,2);
  return;
}



// FUNCTION 141497190 FUN_141497190 body=34 status=ok
// SIG undefined FUN_141497190(void)

void FUN_141497190(void)

{
  undefined8 uVar1;
  
  uVar1 = UComboBoxWidgetStyle::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnBoostFinished_144b52b80,9);
  return;
}



// FUNCTION 1414971c0 FUN_1414971c0 body=34 status=ok
// SIG undefined FUN_1414971c0(void)

void FUN_1414971c0(void)

{
  undefined8 uVar1;
  
  uVar1 = UMaterialInstanceDynamic::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnDamageCompOverlap_144b53570,1);
  return;
}



// FUNCTION 1414971f0 FUN_1414971f0 body=34 status=ok
// SIG undefined FUN_1414971f0(void)

void FUN_1414971f0(void)

{
  undefined8 uVar1;
  
  uVar1 = ALobbyBeaconHost::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnVehicleAirborne_144b540e8,1);
  return;
}



// FUNCTION 141497220 FUN_141497220 body=34 status=ok
// SIG undefined FUN_141497220(void)

void FUN_141497220(void)

{
  undefined8 uVar1;
  
  uVar1 = UNavModifierComponent::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CleanVehiclePartName_144b55638,3);
  return;
}



// FUNCTION 141497250 FUN_141497250 body=34 status=ok
// SIG undefined FUN_141497250(void)

void FUN_141497250(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141494330();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_CycleCurrentFiredProjectileIndex_144b557b0,10);
  return;
}



// FUNCTION 141497280 FUN_141497280 body=82 status=ok
// SIG undefined FUN_141497280(void)

void FUN_141497280(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689b2e0 == 0) {
    uVar1 = FUN_141496f80();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689b2e0 = GetStaticStruct(FUN_141497940,uVar2,L"DummyProjectileInfo",0x30,uVar1);
  }
  return;
}



// FUNCTION 1414972e0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvent::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689b110 == 0) {
    uVar1 = FUN_141496f90();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689b110 = GetStaticStruct(FUN_141497970,uVar2,L"HornSequenceEntry",8,uVar1);
  }
  return;
}



// FUNCTION 141497340 FUN_141497340 body=82 status=ok
// SIG undefined FUN_141497340(void)

void FUN_141497340(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689b030 == 0) {
    uVar1 = FUN_141496fa0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689b030 = GetStaticStruct(FUN_1414979a0,uVar2,L"OakVehicleAdditiveData",0x28,uVar1);
  }
  return;
}



// FUNCTION 1414973a0 FUN_1414973a0 body=82 status=ok
// SIG undefined FUN_1414973a0(void)

void FUN_1414973a0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689b040 == 0) {
    uVar1 = FUN_141496fb0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689b040 = GetStaticStruct(FUN_1414979d0,uVar2,L"OakVehicleAnimInstanceProxy",0x780,uVar1);
  }
  return;
}



// FUNCTION 141497400 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneParticleSectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689b1c8 == 0) {
    uVar1 = FUN_141496fc0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689b1c8 = GetStaticStruct(FUN_141497a00,uVar2,L"OakVehicleNavCorrecter",0xb8,uVar1);
  }
  return;
}



// FUNCTION 141497460 FUN_141497460 body=82 status=ok
// SIG undefined FUN_141497460(void)

void FUN_141497460(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689b188 == 0) {
    uVar1 = FUN_141496fd0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689b188 = GetStaticStruct(FUN_141497a30,uVar2,L"SkinParameterData",0x30,uVar1);
  }
  return;
}



// FUNCTION 1414974c0 FUN_1414974c0 body=82 status=ok
// SIG undefined FUN_1414974c0(void)

void FUN_1414974c0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689b1b8 == 0) {
    uVar1 = FUN_141496fe0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689b1b8 = GetStaticStruct(FUN_141497a60,uVar2,L"StuckTeleport",0x20,uVar1);
  }
  return;
}



// FUNCTION 141497520 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14689b238 == 0) {
    uVar1 = FUN_141496ff0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14689b238 = GetStaticStruct(FUN_141497a90,uVar2,L"VehicleUnlockedSaveGameData",0x18,uVar1);
  }
  return;
}



// FUNCTION 141497580 FUN_141497580 body=47 status=ok
// SIG undefined FUN_141497580(void)

longlong FUN_141497580(void)

{
  if (DAT_14689b280 == 0) {
    FUN_141786440(&DAT_14689b280,&PTR_FUN_144b4ddb0);
  }
  return DAT_14689b280;
}



// FUNCTION 1414975b0 FUN_1414975b0 body=47 status=ok
// SIG undefined FUN_1414975b0(void)

longlong FUN_1414975b0(void)

{
  if (DAT_14689b1e8 == 0) {
    FUN_141786440(&DAT_14689b1e8,&PTR_FUN_144b4f7f0);
  }
  return DAT_14689b1e8;
}



// FUNCTION 1414975e0 FUN_1414975e0 body=47 status=ok
// SIG undefined FUN_1414975e0(void)

longlong FUN_1414975e0(void)

{
  if (DAT_14689b020 == 0) {
    FUN_141786440(&DAT_14689b020,&PTR_GetPrivateStaticClass_144b4de60);
  }
  return DAT_14689b020;
}



// FUNCTION 141497610 FUN_141497610 body=47 status=ok
// SIG undefined FUN_141497610(void)

longlong FUN_141497610(void)

{
  if (DAT_14689b0d8 == 0) {
    FUN_141786440(&DAT_14689b0d8,&PTR_GetPrivateStaticClass_144b4e040);
  }
  return DAT_14689b0d8;
}



// FUNCTION 141497640 FUN_141497640 body=47 status=ok
// SIG undefined FUN_141497640(void)

longlong FUN_141497640(void)

{
  if (DAT_14689b120 == 0) {
    FUN_141786440(&DAT_14689b120,&PTR_FUN_144b4fa90);
  }
  return DAT_14689b120;
}



// FUNCTION 141497670 FUN_141497670 body=47 status=ok
// SIG undefined FUN_141497670(void)

longlong FUN_141497670(void)

{
  if (DAT_14689b130 == 0) {
    FUN_141786440(&DAT_14689b130,&PTR_GetPrivateStaticClass_144b501d0);
  }
  return DAT_14689b130;
}



// FUNCTION 1414976a0 FUN_1414976a0 body=47 status=ok
// SIG undefined FUN_1414976a0(void)

longlong FUN_1414976a0(void)

{
  if (DAT_14689b140 == 0) {
    FUN_141786440(&DAT_14689b140,&PTR_FUN_144b50570);
  }
  return DAT_14689b140;
}



// FUNCTION 1414976d0 FUN_1414976d0 body=47 status=ok
// SIG undefined FUN_1414976d0(void)

longlong FUN_1414976d0(void)

{
  if (DAT_14689b150 == 0) {
    FUN_141786440(&DAT_14689b150,&PTR_GetPrivateStaticClass_144b507c0);
  }
  return DAT_14689b150;
}



// FUNCTION 141497700 FUN_141497700 body=47 status=ok
// SIG undefined FUN_141497700(void)

longlong FUN_141497700(void)

{
  if (DAT_14689b178 == 0) {
    FUN_141786440(&DAT_14689b178,&PTR_FUN_144b51b80);
  }
  return DAT_14689b178;
}



// FUNCTION 141497730 FUN_141497730 body=47 status=ok
// SIG undefined FUN_141497730(void)

longlong FUN_141497730(void)

{
  if (DAT_14689b198 == 0) {
    FUN_141786440(&DAT_14689b198,&PTR_FUN_144b51e00);
  }
  return DAT_14689b198;
}



// FUNCTION 141497760 FUN_141497760 body=47 status=ok
// SIG undefined FUN_141497760(void)

longlong FUN_141497760(void)

{
  if (DAT_14689b1a8 == 0) {
    FUN_141786440(&DAT_14689b1a8,&PTR_FUN_144b51fa0);
  }
  return DAT_14689b1a8;
}



// FUNCTION 141497790 FUN_141497790 body=47 status=ok
// SIG undefined FUN_141497790(void)

longlong FUN_141497790(void)

{
  if (DAT_14689b1d8 == 0) {
    FUN_141786440(&DAT_14689b1d8,&PTR_FUN_144b4f6d0);
  }
  return DAT_14689b1d8;
}



// FUNCTION 1414977c0 FUN_1414977c0 body=47 status=ok
// SIG undefined FUN_1414977c0(void)

longlong FUN_1414977c0(void)

{
  if (DAT_14689b228 == 0) {
    FUN_141786440(&DAT_14689b228,&PTR_FUN_144b50100);
  }
  return DAT_14689b228;
}



// FUNCTION 1414977f0 FUN_1414977f0 body=47 status=ok
// SIG undefined FUN_1414977f0(void)

longlong FUN_1414977f0(void)

{
  if (DAT_14689b270 == 0) {
    FUN_141786440(&DAT_14689b270,&PTR_StaticClass_144b50e40);
  }
  return DAT_14689b270;
}



// FUNCTION 141497820 FUN_141497820 body=47 status=ok
// SIG undefined FUN_141497820(void)

longlong FUN_141497820(void)

{
  if (DAT_14689b2d8 == 0) {
    FUN_141786a30(&DAT_14689b2d8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464365f0);
  }
  return DAT_14689b2d8;
}



// FUNCTION 141497850 FUN_141497850 body=47 status=ok
// SIG undefined FUN_141497850(void)

longlong FUN_141497850(void)

{
  if (DAT_14689b2d0 == 0) {
    FUN_141786a30(&DAT_14689b2d0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146436540);
  }
  return DAT_14689b2d0;
}



// FUNCTION 141497880 FUN_141497880 body=47 status=ok
// SIG undefined FUN_141497880(void)

longlong FUN_141497880(void)

{
  if (DAT_14689b290 == 0) {
    FUN_141786a30(&DAT_14689b290,&PTR_Z_Construct_UPackage__Script_MechWarrior_146435bd0);
  }
  return DAT_14689b290;
}



// FUNCTION 1414978b0 FUN_1414978b0 body=47 status=ok
// SIG undefined FUN_1414978b0(void)

longlong FUN_1414978b0(void)

{
  if (DAT_14689b108 == 0) {
    FUN_1417866a0(&DAT_14689b108,&PTR_Z_Construct_UPackage__Script_MechWarrior_146437000);
  }
  return DAT_14689b108;
}



// FUNCTION 1414978e0 FUN_1414978e0 body=47 status=ok
// SIG undefined FUN_1414978e0(void)

longlong FUN_1414978e0(void)

{
  if (DAT_14689b100 == 0) {
    FUN_1417866a0(&DAT_14689b100,&PTR_Z_Construct_UPackage__Script_MechWarrior_146436fb0);
  }
  return DAT_14689b100;
}



// FUNCTION 141497910 FUN_141497910 body=47 status=ok
// SIG undefined FUN_141497910(void)

longlong FUN_141497910(void)

{
  if (DAT_14689b220 == 0) {
    FUN_1417866a0(&DAT_14689b220,&PTR_Z_Construct_UPackage__Script_MechWarrior_146437050);
  }
  return DAT_14689b220;
}



// FUNCTION 141497940 FUN_141497940 body=47 status=ok
// SIG undefined FUN_141497940(void)

longlong FUN_141497940(void)

{
  if (DAT_14689b2e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689b2e8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464367d0);
  }
  return DAT_14689b2e8;
}



// FUNCTION 141497970 FUN_141497970 body=47 status=ok
// SIG undefined FUN_141497970(void)

longlong FUN_141497970(void)

{
  if (DAT_14689b118 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689b118,&PTR_Z_Construct_UPackage__Script_MechWarrior_146433c30);
  }
  return DAT_14689b118;
}



// FUNCTION 1414979a0 FUN_1414979a0 body=47 status=ok
// SIG undefined FUN_1414979a0(void)

longlong FUN_1414979a0(void)

{
  if (DAT_14689b038 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689b038,&PTR_Z_Construct_UPackage__Script_MechWarrior_146432dd0);
  }
  return DAT_14689b038;
}



// FUNCTION 1414979d0 FUN_1414979d0 body=47 status=ok
// SIG undefined FUN_1414979d0(void)

longlong FUN_1414979d0(void)

{
  if (DAT_14689b048 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689b048,&PTR_Z_Construct_UPackage__Script_MechWarrior_146432ec0);
  }
  return DAT_14689b048;
}



// FUNCTION 141497a00 FUN_141497a00 body=47 status=ok
// SIG undefined FUN_141497a00(void)

longlong FUN_141497a00(void)

{
  if (DAT_14689b1d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689b1d0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464349e0);
  }
  return DAT_14689b1d0;
}



// FUNCTION 141497a30 FUN_141497a30 body=47 status=ok
// SIG undefined FUN_141497a30(void)

longlong FUN_141497a30(void)

{
  if (DAT_14689b190 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689b190,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464345b0);
  }
  return DAT_14689b190;
}



// FUNCTION 141497a60 FUN_141497a60 body=47 status=ok
// SIG undefined FUN_141497a60(void)

longlong FUN_141497a60(void)

{
  if (DAT_14689b1c0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689b1c0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146434850);
  }
  return DAT_14689b1c0;
}



// FUNCTION 141497a90 FUN_141497a90 body=47 status=ok
// SIG undefined FUN_141497a90(void)

longlong FUN_141497a90(void)

{
  if (DAT_14689b240 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14689b240,&PTR_Z_Construct_UPackage__Script_MechWarrior_146435360);
  }
  return DAT_14689b240;
}



// FUNCTION 141497ac0 FUN_141497ac0 body=213 status=ok
// SIG undefined FUN_141497ac0(void)

void FUN_141497ac0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_28 [4];
  
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
  plVar1 = (longlong *)FUN_141269220(local_28 + 2,local_28);
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
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141497ba0 FUN_141497ba0 body=141 status=ok
// SIG undefined FUN_141497ba0(void)

void FUN_141497ba0(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  uVar1 = FUN_141269a90(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141497c30 execGetNamesOfLoadedLevels body=248 status=ok
// SIG undefined execGetNamesOfLoadedLevels(void)

void UVictoryBPFunctionLibrary::execGetNamesOfLoadedLevels(undefined8 param_1,longlong param_2)

{
  longlong **pplVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 local_res10 [3];
  longlong *local_18;
  undefined8 local_10;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_18 = (longlong *)0x0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  pplVar1 = &local_18;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14126b460(local_res10[0],pplVar1);
  plVar2 = local_18;
  for (iVar3 = (int)local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 141497d30 execStopAnimations body=185 status=ok
// SIG undefined execStopAnimations(void)

void UChromaSDKPluginBPLibrary::execStopAnimations(undefined8 param_1,longlong param_2)

{
  longlong **pplVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  pplVar1 = &local_18;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14126b6b0(pplVar1);
  plVar2 = local_18;
  for (iVar3 = (int)local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 141497e10 FUN_141497e10 body=142 status=ok
// SIG undefined FUN_141497e10(void)

void FUN_141497e10(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_14126e520(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141497ec0 FUN_141497ec0 body=130 status=ok
// SIG undefined FUN_141497ec0(void)

void FUN_141497ec0(undefined8 param_1,longlong param_2)

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
  FUN_141274de0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 141497f70 FUN_141497f70 body=493 status=ok
// SIG undefined FUN_141497f70(void)

void FUN_141497f70(undefined8 param_1,longlong param_2)

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
  FUN_141275bc0(param_1,local_b8[0],local_c0,local_c8,local_res20[0],bVar2,puVar1);
  return;
}



// FUNCTION 141498160 FUN_141498160 body=320 status=ok
// SIG undefined FUN_141498160(void)

void FUN_141498160(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
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
  puVar1 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  FUN_141275fe0(param_1,puVar1,local_res10[0]);
  if (local_78 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414982a0 FUN_1414982a0 body=320 status=ok
// SIG undefined FUN_1414982a0(void)

void FUN_1414982a0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
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
  puVar1 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  FUN_141276080(param_1,puVar1,local_res10[0]);
  if (local_78 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414983e0 FUN_1414983e0 body=320 status=ok
// SIG undefined FUN_1414983e0(void)

void FUN_1414983e0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
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
  puVar1 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  FUN_141276150(param_1,puVar1,local_res10[0]);
  if (local_78 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141498520 FUN_141498520 body=320 status=ok
// SIG undefined FUN_141498520(void)

void FUN_141498520(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
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
  puVar1 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  FUN_141276220(param_1,puVar1,local_res10[0]);
  if (local_78 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141498660 FUN_141498660 body=435 status=ok
// SIG undefined FUN_141498660(void)

void FUN_141498660(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [12];
  undefined4 local_9c;
  
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
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
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
  local_b8 = local_c8;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_b0 = local_c0;
  (**(code **)(*param_1 + 0x728))(param_1,local_res20,local_res10,local_res8,&local_b8,puVar1);
  return;
}



// FUNCTION 141498820 FUN_141498820 body=229 status=ok
// SIG undefined FUN_141498820(void)

void FUN_141498820(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 local_res10 [2];
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  local_28[0] = 0xff;
  local_20 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res10[0] = 0;
  puVar1 = local_28;
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
  FUN_141277d00(param_1,puVar1,local_res10[0]);
  return;
}



// FUNCTION 141498910 FUN_141498910 body=159 status=ok
// SIG undefined FUN_141498910(void)

void FUN_141498910(undefined8 param_1,longlong param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = CONCAT31(local_48._1_3_,0xff);
  uStack_40 = 0;
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_18 = CONCAT44(uStack_34,local_38);
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = (undefined4)uStack_40;
  uStack_1c = uStack_40._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_141277d70(param_1,&local_28);
  return;
}



// FUNCTION 1414989b0 FUN_1414989b0 body=159 status=ok
// SIG undefined FUN_1414989b0(void)

void FUN_1414989b0(undefined8 param_1,longlong param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = CONCAT31(local_48._1_3_,0xff);
  uStack_40 = 0;
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_18 = CONCAT44(uStack_34,local_38);
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = (undefined4)uStack_40;
  uStack_1c = uStack_40._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_141277df0(param_1,&local_28);
  return;
}



// FUNCTION 141498a90 FUN_141498a90 body=194 status=ok
// SIG undefined FUN_141498a90(void)

void FUN_141498a90(undefined8 param_1,longlong param_2)

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
  FUN_141279d20(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 141498b60 FUN_141498b60 body=194 status=ok
// SIG undefined FUN_141498b60(void)

void FUN_141498b60(undefined8 param_1,longlong param_2)

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
  FUN_141279ea0(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 141498c30 execOnControllerConnectionChanged body=192 status=ok
// SIG undefined execOnControllerConnectionChanged(void)

void UConsoleCompatGameInstance::execOnControllerConnectionChanged
               (undefined8 param_1,longlong param_2)

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
  FUN_1412367c0(param_1,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 141498cf0 FUN_141498cf0 body=128 status=ok
// SIG undefined FUN_141498cf0(void)

void FUN_141498cf0(undefined8 param_1,longlong param_2)

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
  FUN_140ebd240(param_1,local_res10);
  return;
}



// FUNCTION 141498d70 FUN_141498d70 body=435 status=ok
// SIG undefined FUN_141498d70(void)

void FUN_141498d70(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [12];
  undefined4 local_9c;
  
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
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
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
  local_b8 = local_c8;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_b0 = local_c0;
  (**(code **)(*param_1 + 0x720))(param_1,local_res20,local_res10,local_res8,&local_b8,puVar1);
  return;
}



// FUNCTION 141498f30 FUN_141498f30 body=481 status=ok
// SIG undefined FUN_141498f30(void)

void FUN_141498f30(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x718))(param_1,local_c0,local_c8,local_res20,local_res10[0],bVar2,puVar1)
  ;
  return;
}



// FUNCTION 141499120 FUN_141499120 body=126 status=ok
// SIG undefined FUN_141499120(void)

void FUN_141499120(undefined8 param_1,longlong param_2)

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
  FUN_14127de80(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414991c0 FUN_1414991c0 body=126 status=ok
// SIG undefined FUN_1414991c0(void)

void FUN_1414991c0(undefined8 param_1,longlong param_2)

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
  FUN_14127fce0(param_1,local_res10[0]);
  return;
}



// FUNCTION 141499240 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140ec62b0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141499300 FUN_141499300 body=254 status=ok
// SIG undefined FUN_141499300(void)

void FUN_141499300(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
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
  FUN_140ec9340(param_1,local_28[0],bVar1,local_res20);
  return;
}


