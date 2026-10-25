// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142944010 FUN_142944010 body=152 status=ok
// SIG undefined FUN_142944010(void)

void FUN_142944010(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x998))(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1429440b0 FUN_1429440b0 body=127 status=ok
// SIG undefined FUN_1429440b0(void)

void FUN_1429440b0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x9a0))(param_1,local_res8[0]);
  return;
}



// FUNCTION 142944130 FUN_142944130 body=175 status=ok
// SIG undefined FUN_142944130(void)

void FUN_142944130(undefined8 param_1,longlong param_2)

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
  FUN_14245e6c0(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1429441e0 execSetGamePaused body=191 status=ok
// SIG undefined execSetGamePaused(void)

void UGameplayStatics::execSetGamePaused(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int local_res10 [2];
  undefined8 local_res18;
  
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
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
  uVar1 = FUN_14245e740(local_res18,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1429442a0 execSetGlobalListenerFocusParameters body=625 status=ok
// SIG undefined execSetGlobalListenerFocusParameters(void)

void UGameplayStatics::execSetGlobalListenerFocusParameters(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_10);
  }
  local_14 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_14);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_1c);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_24);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
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
  FUN_14245e7e0(local_10,local_14,local_18,local_1c,local_20,local_24,local_28,local_res20[0],
                local_res10[0]);
  return;
}



// FUNCTION 142944520 execSetGlobalPitchModulation body=238 status=ok
// SIG undefined execSetGlobalPitchModulation(void)

void UGameplayStatics::execSetGlobalPitchModulation(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
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
  FUN_14245e920(local_18[0],local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 142944610 FUN_142944610 body=180 status=ok
// SIG undefined FUN_142944610(void)

void FUN_142944610(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
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
  FUN_14245e9c0(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1429446d0 execSetPlayerControllerID body=173 status=ok
// SIG undefined execSetPlayerControllerID(void)

void UGameplayStatics::execSetPlayerControllerID(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
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
  SetPlayerControllerID(local_res20,local_res10[0]);
  return;
}



// FUNCTION 142944780 execSetSoundMixClassOverride body=496 status=ok
// SIG undefined execSetSoundMixClassOverride(void)

void UGameplayStatics::execSetSoundMixClassOverride(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
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
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_24);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
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
  FUN_14245ec20(local_10,local_18,local_20,local_24,local_28,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 142944970 FUN_142944970 body=114 status=ok
// SIG undefined FUN_142944970(void)

void FUN_142944970(undefined8 param_1,longlong param_2)

{
  int local_res10 [6];
  
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
  FUN_14245ecf0(local_res10[0] != 0);
  return;
}



// FUNCTION 1429449f0 execSetWorldOriginLocation body=190 status=ok
// SIG undefined execSetWorldOriginLocation(void)

void UGameplayStatics::execSetWorldOriginLocation(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
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
  SetWorldOriginLocation(local_res10[0],&local_18);
  return;
}



// FUNCTION 142944ab0 FUN_142944ab0 body=150 status=ok
// SIG undefined FUN_142944ab0(void)

void FUN_142944ab0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = (**(code **)(*param_1 + 0x738))(param_1,local_res8);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142944b50 FUN_142944b50 body=669 status=ok
// SIG undefined FUN_142944b50(void)

void FUN_142944b50(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_98 [2];
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_98[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
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
  local_48 = local_80;
  local_38 = local_70;
  local_40 = local_78;
  local_28 = local_60;
  local_30 = local_68;
  local_20 = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14245ef00(local_88,local_90,&local_28,&local_38,&local_48,local_98[0],local_res20[0],
                        local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142944df0 FUN_142944df0 body=796 status=ok
// SIG undefined FUN_142944df0(void)

void FUN_142944df0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
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
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
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
  local_40 = local_70;
  local_48 = local_78;
  local_30 = local_60;
  local_38 = local_68;
  local_20 = local_50;
  local_28 = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14245f030(local_80,&local_28,local_88,local_90,&local_38,&local_48,local_res10[0],
                        local_94,local_98,local_res20[0],local_res18[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142945110 FUN_142945110 body=283 status=ok
// SIG undefined FUN_142945110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142945110(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_38 = _DAT_146b1e630 & _DAT_146b1e640;
  uStack_34 = uRam0000000146b1e634 & uRam0000000146b1e644;
  uStack_30 = uRam0000000146b1e638 & uRam0000000146b1e648;
  uStack_2c = uRam0000000146b1e63c & uRam0000000146b1e64c;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = uRam0000000146b1e63c;
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar2 = &local_58;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x6f8))(param_1,local_68[0],puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142945230 FUN_142945230 body=197 status=ok
// SIG undefined FUN_142945230(void)

void FUN_142945230(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = (**(code **)(*param_1 + 0x700))(param_1,local_res10,local_res8);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142945300 execSpawnDialogue2D body=526 status=ok
// SIG undefined execSpawnDialogue2D(void)

void UGameplayStatics::execSpawnDialogue2D(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [8];
  longlong local_38;
  
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
  FDialogueContext::FDialogueContext(local_40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  local_58[0] = 0;
  puVar2 = local_40;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
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
  uVar1 = FUN_14245f460(local_48,local_50,puVar2,local_58[0],local_res20[0],local_res18[0],
                        local_res10[0] != 0);
  *param_3 = uVar1;
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142945510 execSpawnDialogueAtLocation body=751 status=ok
// SIG undefined execSpawnDialogueAtLocation(void)

void UGameplayStatics::execSpawnDialogueAtLocation
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [8];
  longlong local_40;
  
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
  FDialogueContext::FDialogueContext(local_48);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
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
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_a8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
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
  local_68 = local_88;
  local_60 = local_80;
  local_50 = local_70;
  local_58 = local_78;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14245f5e0(local_90,local_98,puVar2,&local_58,&local_68,local_a8[0],local_res20[0],
                        local_res18[0],local_a0,local_res10[0] != 0);
  *param_3 = uVar1;
  if (local_40 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142945800 execSpawnDialogueAttached body=958 status=ok
// SIG undefined execSpawnDialogueAttached(void)

void UGameplayStatics::execSpawnDialogueAttached
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [8];
  longlong local_40;
  
  local_90 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_90);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  FDialogueContext::FDialogueContext(local_48);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_98 = 0;
  puVar2 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_a8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
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
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  bVar3 = local_res18[0] != 0;
  local_b0[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b0);
  }
  local_b4 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_b4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b4);
  }
  local_b8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_a0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_60 = local_80;
  local_68 = local_88;
  local_50 = local_70;
  local_58 = local_78;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = SpawnDialogueAttached
                    (local_90,puVar2,local_98,local_a8,&local_58,&local_68,local_res10[0],bVar3,
                     local_b0[0],local_b4,local_b8,local_a0,local_res20[0] != 0);
  *param_3 = uVar1;
  if (local_40 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142945bc0 FUN_142945bc0 body=596 status=ok
// SIG undefined FUN_142945bc0(void)

void FUN_142945bc0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 local_res10 [8];
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  bVar2 = local_res18[0] != 0;
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
  local_58 = local_88;
  local_50 = local_80;
  local_40 = local_70;
  local_30 = local_60;
  local_48 = local_78;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_38 = local_68;
  uVar1 = FUN_14245fa90(local_90,local_98,&local_38,&local_48,&local_58,bVar2,local_res10[0],
                        local_res20);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142945e20 FUN_142945e20 body=803 status=ok
// SIG undefined FUN_142945e20(void)

void FUN_142945e20(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  int local_b8 [2];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
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
  local_b0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_b0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
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
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar2 = local_res20[0] != 0;
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_b8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  bVar3 = local_b8[0] != 0;
  local_a8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_50 = local_88;
  local_40 = local_78;
  local_30 = local_68;
  local_58 = local_90;
  local_48 = local_80;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_38 = local_70;
  uVar1 = FUN_14245fd00(local_98,local_a0,local_b0,&local_38,&local_48,&local_58,local_res10[0],
                        bVar2,local_res18[0],bVar3,local_a8);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142946150 execSpawnForceFeedbackAtLocation body=651 status=ok
// SIG undefined execSpawnForceFeedbackAtLocation(void)

void UGameplayStatics::execSpawnForceFeedbackAtLocation
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_88 [2];
  undefined8 local_80;
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
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_88[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_80 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_48 = local_68;
  local_40 = local_60;
  local_30 = local_50;
  local_38 = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = SpawnForceFeedbackAtLocation
                    (local_70,local_78,&local_38,&local_48,bVar2,local_88[0],local_res20[0],local_80
                     ,local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1429463e0 execSpawnForceFeedbackAttached body=858 status=ok
// SIG undefined execSpawnForceFeedbackAttached(void)

void UGameplayStatics::execSpawnForceFeedbackAttached
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_98;
  undefined4 local_94;
  undefined4 local_90 [2];
  undefined8 local_88;
  undefined8 local_80;
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
  local_88 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
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
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  bVar2 = local_res18[0] != 0;
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar3 = local_res20[0] != 0;
  local_90[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_90);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_90);
  }
  local_94 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_94);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  local_80 = 0;
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
  local_40 = local_60;
  local_48 = local_68;
  local_30 = local_50;
  local_38 = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1424602c0(local_70,local_78,local_88,&local_38,&local_48,local_res10[0],bVar2,bVar3,
                        local_90[0],local_94,local_80,local_98 != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142946740 FUN_142946740 body=191 status=ok
// SIG undefined FUN_142946740(void)

void FUN_142946740(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_142460430(local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142946800 FUN_142946800 body=554 status=ok
// SIG undefined FUN_142946800(void)

void FUN_142946800(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
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
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
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
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142460810(local_30,local_38,local_44,local_48,local_res20[0],local_40,bVar2,
                        local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142946a30 execSpawnSoundAtLocation body=720 status=ok
// SIG undefined execSpawnSoundAtLocation(void)

void UGameplayStatics::execSpawnSoundAtLocation
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
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
  local_88[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
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
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_38 = local_60;
  local_30 = local_58;
  local_20 = local_48;
  local_28 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1424609b0(local_68,local_70,&local_28,&local_38,local_88[0],local_res20[0],
                        local_res18[0],local_78,local_80,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142946d00 execSpawnSoundAttached body=907 status=ok
// SIG undefined execSpawnSoundAttached(void)

void UGameplayStatics::execSpawnSoundAttached
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
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
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  bVar2 = local_res18[0] != 0;
  local_a0[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a0);
  }
  local_a4 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  local_a8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
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
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_40 = local_68;
  local_30 = local_58;
  local_48 = local_70;
  local_38 = local_60;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142460bb0(local_78,local_80,local_98,&local_38,&local_48,local_res10[0],bVar2,
                        local_a0[0],local_a4,local_a8,local_88,local_90,local_res20[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1429470b0 execSuggestProjectileVelocity_CustomArc body=469 status=ok
// SIG undefined execSuggestProjectileVelocity_CustomArc(void)

void UGameplayStatics::execSuggestProjectileVelocity_CustomArc
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
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
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
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
  local_48 = local_78;
  local_38 = local_68;
  local_40 = local_70;
  local_30 = local_60;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = SuggestProjectileVelocity_CustomArc
                    (local_res20,puVar2,&local_38,&local_48,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142947290 execUnloadStreamLevel body=334 status=ok
// SIG undefined execUnloadStreamLevel(void)

void UGameplayStatics::execUnloadStreamLevel(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_40 = 0xffffffffffffffff;
  uStack_38 = 0;
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_28 = (undefined4)local_40;
  uStack_24 = local_40._4_4_;
  uStack_20 = (undefined4)uStack_38;
  uStack_1c = uStack_38._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_18 = local_30;
  UnloadStreamLevel(local_48,local_res20,&local_28,local_res10[0] != 0);
  return;
}



// FUNCTION 142947400 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGeometryCollectionActor::GetPrivateStaticClass(void)

{
  if (DAT_146b1ece8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"GameStateBase",&DAT_146b1ece8,FUN_142948e60,0x520,0x10000000,0
                  ,L"Game",&LAB_142948780,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407b7f50,&LAB_140447700,0);
  }
  return DAT_146b1ece8;
}



// FUNCTION 1429474b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ARemnantQuest::GetPrivateStaticClass(void)

{
  if (DAT_146b1ec90 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"GameState",&DAT_146b1ec90,FUN_142948e30,0x540,0x10000000,0,
                  L"Game",&LAB_142948760,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  AGeometryCollectionActor::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b1ec90;
}



// FUNCTION 142947560 FUN_142947560 body=47 status=ok
// SIG undefined FUN_142947560(void)

longlong FUN_142947560(void)

{
  if (DAT_146b1ec88 == 0) {
    FUN_141786440(&DAT_146b1ec88,&PTR_GetPrivateStaticClass_145267220);
  }
  return DAT_146b1ec88;
}



// FUNCTION 142947590 FUN_142947590 body=47 status=ok
// SIG undefined FUN_142947590(void)

longlong FUN_142947590(void)

{
  if (DAT_146b1ece0 == 0) {
    FUN_141786440(&DAT_146b1ece0,&PTR_GetPrivateStaticClass_1452676f0);
  }
  return DAT_146b1ece0;
}



// FUNCTION 1429475c0 FUN_1429475c0 body=47 status=ok
// SIG undefined FUN_1429475c0(void)

longlong FUN_1429475c0(void)

{
  if (DAT_146b1ec78 == 0) {
    FUN_141786a30(&DAT_146b1ec78,&PTR_FUN_146599610);
  }
  return DAT_146b1ec78;
}



// FUNCTION 1429475f0 FUN_1429475f0 body=47 status=ok
// SIG undefined FUN_1429475f0(void)

longlong FUN_1429475f0(void)

{
  if (DAT_146b1ec80 == 0) {
    FUN_141786a30(&DAT_146b1ec80,&PTR_FUN_146599650);
  }
  return DAT_146b1ec80;
}



// FUNCTION 142947630 FUN_142947630 body=47 status=ok
// SIG undefined FUN_142947630(void)

longlong FUN_142947630(void)

{
  if (DAT_146b1ec98 == 0) {
    FUN_141786a30(&DAT_146b1ec98,&PTR_FUN_1465997a0);
  }
  return DAT_146b1ec98;
}



// FUNCTION 142947660 FUN_142947660 body=47 status=ok
// SIG undefined FUN_142947660(void)

longlong FUN_142947660(void)

{
  if (DAT_146b1eca0 == 0) {
    FUN_141786a30(&DAT_146b1eca0,&PTR_FUN_146599890);
  }
  return DAT_146b1eca0;
}



// FUNCTION 142947690 FUN_142947690 body=47 status=ok
// SIG undefined FUN_142947690(void)

longlong FUN_142947690(void)

{
  if (DAT_146b1eca8 == 0) {
    FUN_141786a30(&DAT_146b1eca8,&PTR_FUN_1465998d0);
  }
  return DAT_146b1eca8;
}



// FUNCTION 1429476c0 FUN_1429476c0 body=47 status=ok
// SIG undefined FUN_1429476c0(void)

longlong FUN_1429476c0(void)

{
  if (DAT_146b1ecb0 == 0) {
    FUN_141786a30(&DAT_146b1ecb0,&PTR_FUN_146599990);
  }
  return DAT_146b1ecb0;
}



// FUNCTION 1429476f0 FUN_1429476f0 body=47 status=ok
// SIG undefined FUN_1429476f0(void)

longlong FUN_1429476f0(void)

{
  if (DAT_146b1ecb8 == 0) {
    FUN_141786a30(&DAT_146b1ecb8,&PTR_FUN_146599a50);
  }
  return DAT_146b1ecb8;
}



// FUNCTION 142947720 FUN_142947720 body=47 status=ok
// SIG undefined FUN_142947720(void)

longlong FUN_142947720(void)

{
  if (DAT_146b1ecc0 == 0) {
    FUN_141786a30(&DAT_146b1ecc0,&PTR_FUN_146599a90);
  }
  return DAT_146b1ecc0;
}



// FUNCTION 142947750 FUN_142947750 body=47 status=ok
// SIG undefined FUN_142947750(void)

longlong FUN_142947750(void)

{
  if (DAT_146b1ecc8 == 0) {
    FUN_141786a30(&DAT_146b1ecc8,&PTR_FUN_146599ad0);
  }
  return DAT_146b1ecc8;
}



// FUNCTION 142947780 FUN_142947780 body=47 status=ok
// SIG undefined FUN_142947780(void)

longlong FUN_142947780(void)

{
  if (DAT_146b1ecd0 == 0) {
    FUN_141786a30(&DAT_146b1ecd0,&PTR_FUN_146599b10);
  }
  return DAT_146b1ecd0;
}



// FUNCTION 1429477b0 FUN_1429477b0 body=47 status=ok
// SIG undefined FUN_1429477b0(void)

longlong FUN_1429477b0(void)

{
  if (DAT_146b1ecd8 == 0) {
    FUN_141786a30(&DAT_146b1ecd8,&PTR_FUN_146599b50);
  }
  return DAT_146b1ecd8;
}



// FUNCTION 1429477f0 FUN_1429477f0 body=47 status=ok
// SIG undefined FUN_1429477f0(void)

longlong FUN_1429477f0(void)

{
  if (DAT_146b1ef70 == 0) {
    FUN_141786440(&DAT_146b1ef70,&PTR_thunk_FUN_142948d60_1452664b0);
  }
  return DAT_146b1ef70;
}



// FUNCTION 142947820 FUN_142947820 body=47 status=ok
// SIG undefined FUN_142947820(void)

longlong FUN_142947820(void)

{
  if (DAT_146b1ed00 == 0) {
    FUN_141786a30(&DAT_146b1ed00,&PTR_FUN_146599e30);
  }
  return DAT_146b1ed00;
}



// FUNCTION 142947850 FUN_142947850 body=47 status=ok
// SIG undefined FUN_142947850(void)

longlong FUN_142947850(void)

{
  if (DAT_146b1ed08 == 0) {
    FUN_141786a30(&DAT_146b1ed08,&PTR_FUN_146599e70);
  }
  return DAT_146b1ed08;
}



// FUNCTION 142947880 FUN_142947880 body=47 status=ok
// SIG undefined FUN_142947880(void)

longlong FUN_142947880(void)

{
  if (DAT_146b1ed10 == 0) {
    FUN_141786a30(&DAT_146b1ed10,&PTR_FUN_146599f30);
  }
  return DAT_146b1ed10;
}



// FUNCTION 1429478b0 FUN_1429478b0 body=47 status=ok
// SIG undefined FUN_1429478b0(void)

longlong FUN_1429478b0(void)

{
  if (DAT_146b1ed18 == 0) {
    FUN_141786a30(&DAT_146b1ed18,&PTR_FUN_146599ff0);
  }
  return DAT_146b1ed18;
}



// FUNCTION 1429478e0 FUN_1429478e0 body=47 status=ok
// SIG undefined FUN_1429478e0(void)

longlong FUN_1429478e0(void)

{
  if (DAT_146b1ed20 == 0) {
    FUN_141786a30(&DAT_146b1ed20,&PTR_FUN_14659a030);
  }
  return DAT_146b1ed20;
}



// FUNCTION 142947910 FUN_142947910 body=47 status=ok
// SIG undefined FUN_142947910(void)

longlong FUN_142947910(void)

{
  if (DAT_146b1ed28 == 0) {
    FUN_141786a30(&DAT_146b1ed28,&PTR_FUN_14659a0f0);
  }
  return DAT_146b1ed28;
}



// FUNCTION 142947940 FUN_142947940 body=47 status=ok
// SIG undefined FUN_142947940(void)

longlong FUN_142947940(void)

{
  if (DAT_146b1ed30 == 0) {
    FUN_141786a30(&DAT_146b1ed30,&PTR_FUN_14659a130);
  }
  return DAT_146b1ed30;
}



// FUNCTION 142947970 FUN_142947970 body=47 status=ok
// SIG undefined FUN_142947970(void)

longlong FUN_142947970(void)

{
  if (DAT_146b1ed38 == 0) {
    FUN_141786a30(&DAT_146b1ed38,&PTR_FUN_14659a170);
  }
  return DAT_146b1ed38;
}



// FUNCTION 1429479a0 FUN_1429479a0 body=47 status=ok
// SIG undefined FUN_1429479a0(void)

longlong FUN_1429479a0(void)

{
  if (DAT_146b1ed40 == 0) {
    FUN_141786a30(&DAT_146b1ed40,&PTR_FUN_14659a1b0);
  }
  return DAT_146b1ed40;
}



// FUNCTION 1429479d0 FUN_1429479d0 body=47 status=ok
// SIG undefined FUN_1429479d0(void)

longlong FUN_1429479d0(void)

{
  if (DAT_146b1ed48 == 0) {
    FUN_141786a30(&DAT_146b1ed48,&PTR_FUN_14659a260);
  }
  return DAT_146b1ed48;
}



// FUNCTION 142947a00 FUN_142947a00 body=47 status=ok
// SIG undefined FUN_142947a00(void)

longlong FUN_142947a00(void)

{
  if (DAT_146b1ed50 == 0) {
    FUN_141786a30(&DAT_146b1ed50,&PTR_FUN_14659a2a0);
  }
  return DAT_146b1ed50;
}



// FUNCTION 142947a30 FUN_142947a30 body=47 status=ok
// SIG undefined FUN_142947a30(void)

longlong FUN_142947a30(void)

{
  if (DAT_146b1ed58 == 0) {
    FUN_141786a30(&DAT_146b1ed58,&PTR_FUN_14659a350);
  }
  return DAT_146b1ed58;
}



// FUNCTION 142947a60 FUN_142947a60 body=47 status=ok
// SIG undefined FUN_142947a60(void)

longlong FUN_142947a60(void)

{
  if (DAT_146b1ed60 == 0) {
    FUN_141786a30(&DAT_146b1ed60,&PTR_FUN_14659a390);
  }
  return DAT_146b1ed60;
}



// FUNCTION 142947a90 FUN_142947a90 body=47 status=ok
// SIG undefined FUN_142947a90(void)

longlong FUN_142947a90(void)

{
  if (DAT_146b1ed68 == 0) {
    FUN_141786a30(&DAT_146b1ed68,&PTR_FUN_14659a410);
  }
  return DAT_146b1ed68;
}



// FUNCTION 142947ac0 FUN_142947ac0 body=47 status=ok
// SIG undefined FUN_142947ac0(void)

longlong FUN_142947ac0(void)

{
  if (DAT_146b1ed70 == 0) {
    FUN_141786a30(&DAT_146b1ed70,&PTR_FUN_14659a4c0);
  }
  return DAT_146b1ed70;
}



// FUNCTION 142947af0 FUN_142947af0 body=47 status=ok
// SIG undefined FUN_142947af0(void)

longlong FUN_142947af0(void)

{
  if (DAT_146b1ed78 == 0) {
    FUN_141786a30(&DAT_146b1ed78,&PTR_FUN_14659a540);
  }
  return DAT_146b1ed78;
}



// FUNCTION 142947b20 FUN_142947b20 body=47 status=ok
// SIG undefined FUN_142947b20(void)

longlong FUN_142947b20(void)

{
  if (DAT_146b1ed80 == 0) {
    FUN_141786a30(&DAT_146b1ed80,&PTR_FUN_14659a5c0);
  }
  return DAT_146b1ed80;
}



// FUNCTION 142947b50 FUN_142947b50 body=47 status=ok
// SIG undefined FUN_142947b50(void)

longlong FUN_142947b50(void)

{
  if (DAT_146b1ed88 == 0) {
    FUN_141786a30(&DAT_146b1ed88,&PTR_FUN_14659a640);
  }
  return DAT_146b1ed88;
}



// FUNCTION 142947b80 FUN_142947b80 body=47 status=ok
// SIG undefined FUN_142947b80(void)

longlong FUN_142947b80(void)

{
  if (DAT_146b1ed90 == 0) {
    FUN_141786a30(&DAT_146b1ed90,&PTR_FUN_14659a680);
  }
  return DAT_146b1ed90;
}



// FUNCTION 142947bb0 FUN_142947bb0 body=47 status=ok
// SIG undefined FUN_142947bb0(void)

longlong FUN_142947bb0(void)

{
  if (DAT_146b1ed98 == 0) {
    FUN_141786a30(&DAT_146b1ed98,&PTR_FUN_14659a730);
  }
  return DAT_146b1ed98;
}



// FUNCTION 142947be0 FUN_142947be0 body=47 status=ok
// SIG undefined FUN_142947be0(void)

longlong FUN_142947be0(void)

{
  if (DAT_146b1eda0 == 0) {
    FUN_141786a30(&DAT_146b1eda0,&PTR_FUN_14659a7b0);
  }
  return DAT_146b1eda0;
}



// FUNCTION 142947c10 FUN_142947c10 body=47 status=ok
// SIG undefined FUN_142947c10(void)

longlong FUN_142947c10(void)

{
  if (DAT_146b1eda8 == 0) {
    FUN_141786a30(&DAT_146b1eda8,&PTR_FUN_14659a830);
  }
  return DAT_146b1eda8;
}



// FUNCTION 142947c40 FUN_142947c40 body=47 status=ok
// SIG undefined FUN_142947c40(void)

longlong FUN_142947c40(void)

{
  if (DAT_146b1edb0 == 0) {
    FUN_141786a30(&DAT_146b1edb0,&PTR_FUN_14659a8e0);
  }
  return DAT_146b1edb0;
}



// FUNCTION 142947c70 FUN_142947c70 body=47 status=ok
// SIG undefined FUN_142947c70(void)

longlong FUN_142947c70(void)

{
  if (DAT_146b1edb8 == 0) {
    FUN_141786a30(&DAT_146b1edb8,&PTR_FUN_14659a960);
  }
  return DAT_146b1edb8;
}



// FUNCTION 142947ca0 FUN_142947ca0 body=47 status=ok
// SIG undefined FUN_142947ca0(void)

longlong FUN_142947ca0(void)

{
  if (DAT_146b1edc0 == 0) {
    FUN_141786a30(&DAT_146b1edc0,&PTR_FUN_14659a9e0);
  }
  return DAT_146b1edc0;
}



// FUNCTION 142947cd0 FUN_142947cd0 body=47 status=ok
// SIG undefined FUN_142947cd0(void)

longlong FUN_142947cd0(void)

{
  if (DAT_146b1edc8 == 0) {
    FUN_141786a30(&DAT_146b1edc8,&PTR_FUN_14659aa90);
  }
  return DAT_146b1edc8;
}



// FUNCTION 142947d00 FUN_142947d00 body=47 status=ok
// SIG undefined FUN_142947d00(void)

longlong FUN_142947d00(void)

{
  if (DAT_146b1edd0 == 0) {
    FUN_141786a30(&DAT_146b1edd0,&PTR_FUN_14659aad0);
  }
  return DAT_146b1edd0;
}



// FUNCTION 142947d30 FUN_142947d30 body=47 status=ok
// SIG undefined FUN_142947d30(void)

longlong FUN_142947d30(void)

{
  if (DAT_146b1edd8 == 0) {
    FUN_141786a30(&DAT_146b1edd8,&PTR_FUN_14659ab80);
  }
  return DAT_146b1edd8;
}



// FUNCTION 142947d60 FUN_142947d60 body=47 status=ok
// SIG undefined FUN_142947d60(void)

longlong FUN_142947d60(void)

{
  if (DAT_146b1ede0 == 0) {
    FUN_141786a30(&DAT_146b1ede0,&PTR_FUN_14659ac00);
  }
  return DAT_146b1ede0;
}



// FUNCTION 142947d90 FUN_142947d90 body=47 status=ok
// SIG undefined FUN_142947d90(void)

longlong FUN_142947d90(void)

{
  if (DAT_146b1ede8 == 0) {
    FUN_141786a30(&DAT_146b1ede8,&PTR_FUN_14659ac40);
  }
  return DAT_146b1ede8;
}



// FUNCTION 142947dc0 FUN_142947dc0 body=47 status=ok
// SIG undefined FUN_142947dc0(void)

longlong FUN_142947dc0(void)

{
  if (DAT_146b1edf0 == 0) {
    FUN_141786a30(&DAT_146b1edf0,&PTR_FUN_14659acf0);
  }
  return DAT_146b1edf0;
}



// FUNCTION 142947df0 FUN_142947df0 body=47 status=ok
// SIG undefined FUN_142947df0(void)

longlong FUN_142947df0(void)

{
  if (DAT_146b1edf8 == 0) {
    FUN_141786a30(&DAT_146b1edf8,&PTR_FUN_14659ad30);
  }
  return DAT_146b1edf8;
}



// FUNCTION 142947e20 FUN_142947e20 body=47 status=ok
// SIG undefined FUN_142947e20(void)

longlong FUN_142947e20(void)

{
  if (DAT_146b1ee00 == 0) {
    FUN_141786a30(&DAT_146b1ee00,&PTR_FUN_14659ade0);
  }
  return DAT_146b1ee00;
}



// FUNCTION 142947e50 FUN_142947e50 body=47 status=ok
// SIG undefined FUN_142947e50(void)

longlong FUN_142947e50(void)

{
  if (DAT_146b1ee08 == 0) {
    FUN_141786a30(&DAT_146b1ee08,&PTR_FUN_14659ae20);
  }
  return DAT_146b1ee08;
}



// FUNCTION 142947e80 FUN_142947e80 body=47 status=ok
// SIG undefined FUN_142947e80(void)

longlong FUN_142947e80(void)

{
  if (DAT_146b1ee10 == 0) {
    FUN_141786a30(&DAT_146b1ee10,&PTR_FUN_14659af40);
  }
  return DAT_146b1ee10;
}



// FUNCTION 142947eb0 FUN_142947eb0 body=47 status=ok
// SIG undefined FUN_142947eb0(void)

longlong FUN_142947eb0(void)

{
  if (DAT_146b1ee18 == 0) {
    FUN_141786a30(&DAT_146b1ee18,&PTR_FUN_14659b060);
  }
  return DAT_146b1ee18;
}



// FUNCTION 142947ee0 FUN_142947ee0 body=47 status=ok
// SIG undefined FUN_142947ee0(void)

longlong FUN_142947ee0(void)

{
  if (DAT_146b1ee20 == 0) {
    FUN_141786a30(&DAT_146b1ee20,&PTR_FUN_14659b0e0);
  }
  return DAT_146b1ee20;
}



// FUNCTION 142947f10 FUN_142947f10 body=47 status=ok
// SIG undefined FUN_142947f10(void)

longlong FUN_142947f10(void)

{
  if (DAT_146b1ee28 == 0) {
    FUN_141786a30(&DAT_146b1ee28,&PTR_FUN_14659b190);
  }
  return DAT_146b1ee28;
}



// FUNCTION 142947f40 FUN_142947f40 body=47 status=ok
// SIG undefined FUN_142947f40(void)

longlong FUN_142947f40(void)

{
  if (DAT_146b1ee30 == 0) {
    FUN_141786a30(&DAT_146b1ee30,&PTR_FUN_14659b1d0);
  }
  return DAT_146b1ee30;
}



// FUNCTION 142947f70 FUN_142947f70 body=47 status=ok
// SIG undefined FUN_142947f70(void)

longlong FUN_142947f70(void)

{
  if (DAT_146b1ee38 == 0) {
    FUN_141786a30(&DAT_146b1ee38,&PTR_FUN_14659b280);
  }
  return DAT_146b1ee38;
}



// FUNCTION 142947fa0 FUN_142947fa0 body=47 status=ok
// SIG undefined FUN_142947fa0(void)

longlong FUN_142947fa0(void)

{
  if (DAT_146b1ee40 == 0) {
    FUN_141786a30(&DAT_146b1ee40,&PTR_FUN_14659b2c0);
  }
  return DAT_146b1ee40;
}



// FUNCTION 142947fd0 FUN_142947fd0 body=47 status=ok
// SIG undefined FUN_142947fd0(void)

longlong FUN_142947fd0(void)

{
  if (DAT_146b1ee48 == 0) {
    FUN_141786a30(&DAT_146b1ee48,&PTR_FUN_14659b380);
  }
  return DAT_146b1ee48;
}



// FUNCTION 142948000 FUN_142948000 body=47 status=ok
// SIG undefined FUN_142948000(void)

longlong FUN_142948000(void)

{
  if (DAT_146b1ee50 == 0) {
    FUN_141786a30(&DAT_146b1ee50,&PTR_FUN_14659b440);
  }
  return DAT_146b1ee50;
}



// FUNCTION 142948030 FUN_142948030 body=47 status=ok
// SIG undefined FUN_142948030(void)

longlong FUN_142948030(void)

{
  if (DAT_146b1ee58 == 0) {
    FUN_141786a30(&DAT_146b1ee58,&PTR_FUN_14659b500);
  }
  return DAT_146b1ee58;
}



// FUNCTION 142948060 FUN_142948060 body=47 status=ok
// SIG undefined FUN_142948060(void)

longlong FUN_142948060(void)

{
  if (DAT_146b1ee60 == 0) {
    FUN_141786a30(&DAT_146b1ee60,&PTR_FUN_14659b5c0);
  }
  return DAT_146b1ee60;
}



// FUNCTION 142948090 FUN_142948090 body=47 status=ok
// SIG undefined FUN_142948090(void)

longlong FUN_142948090(void)

{
  if (DAT_146b1ee68 == 0) {
    FUN_141786a30(&DAT_146b1ee68,&PTR_FUN_14659b680);
  }
  return DAT_146b1ee68;
}



// FUNCTION 1429480c0 FUN_1429480c0 body=47 status=ok
// SIG undefined FUN_1429480c0(void)

longlong FUN_1429480c0(void)

{
  if (DAT_146b1ee70 == 0) {
    FUN_141786a30(&DAT_146b1ee70,&PTR_FUN_14659b740);
  }
  return DAT_146b1ee70;
}



// FUNCTION 1429480f0 FUN_1429480f0 body=47 status=ok
// SIG undefined FUN_1429480f0(void)

longlong FUN_1429480f0(void)

{
  if (DAT_146b1ee78 == 0) {
    FUN_141786a30(&DAT_146b1ee78,&PTR_FUN_14659b800);
  }
  return DAT_146b1ee78;
}



// FUNCTION 142948120 FUN_142948120 body=47 status=ok
// SIG undefined FUN_142948120(void)

longlong FUN_142948120(void)

{
  if (DAT_146b1ee80 == 0) {
    FUN_141786a30(&DAT_146b1ee80,&PTR_FUN_14659b8c0);
  }
  return DAT_146b1ee80;
}



// FUNCTION 142948150 FUN_142948150 body=47 status=ok
// SIG undefined FUN_142948150(void)

longlong FUN_142948150(void)

{
  if (DAT_146b1ee88 == 0) {
    FUN_141786a30(&DAT_146b1ee88,&PTR_FUN_14659b980);
  }
  return DAT_146b1ee88;
}



// FUNCTION 142948180 FUN_142948180 body=47 status=ok
// SIG undefined FUN_142948180(void)

longlong FUN_142948180(void)

{
  if (DAT_146b1ee90 == 0) {
    FUN_141786a30(&DAT_146b1ee90,&PTR_FUN_14659b9c0);
  }
  return DAT_146b1ee90;
}



// FUNCTION 1429481b0 FUN_1429481b0 body=47 status=ok
// SIG undefined FUN_1429481b0(void)

longlong FUN_1429481b0(void)

{
  if (DAT_146b1ee98 == 0) {
    FUN_141786a30(&DAT_146b1ee98,&PTR_FUN_14659ba00);
  }
  return DAT_146b1ee98;
}



// FUNCTION 1429481e0 FUN_1429481e0 body=47 status=ok
// SIG undefined FUN_1429481e0(void)

longlong FUN_1429481e0(void)

{
  if (DAT_146b1eea0 == 0) {
    FUN_141786a30(&DAT_146b1eea0,&PTR_FUN_14659ba40);
  }
  return DAT_146b1eea0;
}



// FUNCTION 142948210 FUN_142948210 body=47 status=ok
// SIG undefined FUN_142948210(void)

longlong FUN_142948210(void)

{
  if (DAT_146b1eea8 == 0) {
    FUN_141786a30(&DAT_146b1eea8,&PTR_FUN_14659ba80);
  }
  return DAT_146b1eea8;
}



// FUNCTION 142948240 FUN_142948240 body=47 status=ok
// SIG undefined FUN_142948240(void)

longlong FUN_142948240(void)

{
  if (DAT_146b1eeb0 == 0) {
    FUN_141786a30(&DAT_146b1eeb0,&PTR_FUN_14659bac0);
  }
  return DAT_146b1eeb0;
}



// FUNCTION 142948270 FUN_142948270 body=47 status=ok
// SIG undefined FUN_142948270(void)

longlong FUN_142948270(void)

{
  if (DAT_146b1eeb8 == 0) {
    FUN_141786a30(&DAT_146b1eeb8,&PTR_FUN_14659bb00);
  }
  return DAT_146b1eeb8;
}



// FUNCTION 1429482a0 FUN_1429482a0 body=47 status=ok
// SIG undefined FUN_1429482a0(void)

longlong FUN_1429482a0(void)

{
  if (DAT_146b1eec0 == 0) {
    FUN_141786a30(&DAT_146b1eec0,&PTR_FUN_14659bb40);
  }
  return DAT_146b1eec0;
}



// FUNCTION 1429482d0 FUN_1429482d0 body=47 status=ok
// SIG undefined FUN_1429482d0(void)

longlong FUN_1429482d0(void)

{
  if (DAT_146b1eec8 == 0) {
    FUN_141786a30(&DAT_146b1eec8,&PTR_FUN_14659bc00);
  }
  return DAT_146b1eec8;
}



// FUNCTION 142948300 FUN_142948300 body=47 status=ok
// SIG undefined FUN_142948300(void)

longlong FUN_142948300(void)

{
  if (DAT_146b1eed0 == 0) {
    FUN_141786a30(&DAT_146b1eed0,&PTR_FUN_14659bc40);
  }
  return DAT_146b1eed0;
}



// FUNCTION 142948330 FUN_142948330 body=47 status=ok
// SIG undefined FUN_142948330(void)

longlong FUN_142948330(void)

{
  if (DAT_146b1eed8 == 0) {
    FUN_141786a30(&DAT_146b1eed8,&PTR_FUN_14659bc80);
  }
  return DAT_146b1eed8;
}



// FUNCTION 142948360 FUN_142948360 body=47 status=ok
// SIG undefined FUN_142948360(void)

longlong FUN_142948360(void)

{
  if (DAT_146b1eee0 == 0) {
    FUN_141786a30(&DAT_146b1eee0,&PTR_FUN_14659bd00);
  }
  return DAT_146b1eee0;
}



// FUNCTION 142948390 FUN_142948390 body=47 status=ok
// SIG undefined FUN_142948390(void)

longlong FUN_142948390(void)

{
  if (DAT_146b1eee8 == 0) {
    FUN_141786a30(&DAT_146b1eee8,&PTR_FUN_14659bd40);
  }
  return DAT_146b1eee8;
}



// FUNCTION 1429483c0 FUN_1429483c0 body=47 status=ok
// SIG undefined FUN_1429483c0(void)

longlong FUN_1429483c0(void)

{
  if (DAT_146b1eef0 == 0) {
    FUN_141786a30(&DAT_146b1eef0,&PTR_FUN_14659bd80);
  }
  return DAT_146b1eef0;
}



// FUNCTION 1429483f0 FUN_1429483f0 body=47 status=ok
// SIG undefined FUN_1429483f0(void)

longlong FUN_1429483f0(void)

{
  if (DAT_146b1eef8 == 0) {
    FUN_141786a30(&DAT_146b1eef8,&PTR_FUN_14659bdc0);
  }
  return DAT_146b1eef8;
}



// FUNCTION 142948420 FUN_142948420 body=47 status=ok
// SIG undefined FUN_142948420(void)

longlong FUN_142948420(void)

{
  if (DAT_146b1ef00 == 0) {
    FUN_141786a30(&DAT_146b1ef00,&PTR_FUN_14659be70);
  }
  return DAT_146b1ef00;
}



// FUNCTION 142948450 FUN_142948450 body=47 status=ok
// SIG undefined FUN_142948450(void)

longlong FUN_142948450(void)

{
  if (DAT_146b1ef08 == 0) {
    FUN_141786a30(&DAT_146b1ef08,&PTR_FUN_14659beb0);
  }
  return DAT_146b1ef08;
}



// FUNCTION 142948480 FUN_142948480 body=47 status=ok
// SIG undefined FUN_142948480(void)

longlong FUN_142948480(void)

{
  if (DAT_146b1ef10 == 0) {
    FUN_141786a30(&DAT_146b1ef10,&PTR_FUN_14659bf60);
  }
  return DAT_146b1ef10;
}



// FUNCTION 1429484b0 FUN_1429484b0 body=47 status=ok
// SIG undefined FUN_1429484b0(void)

longlong FUN_1429484b0(void)

{
  if (DAT_146b1ef18 == 0) {
    FUN_141786a30(&DAT_146b1ef18,&PTR_FUN_14659bfa0);
  }
  return DAT_146b1ef18;
}



// FUNCTION 1429484e0 FUN_1429484e0 body=47 status=ok
// SIG undefined FUN_1429484e0(void)

longlong FUN_1429484e0(void)

{
  if (DAT_146b1ef20 == 0) {
    FUN_141786a30(&DAT_146b1ef20,&PTR_FUN_14659c050);
  }
  return DAT_146b1ef20;
}



// FUNCTION 142948510 FUN_142948510 body=47 status=ok
// SIG undefined FUN_142948510(void)

longlong FUN_142948510(void)

{
  if (DAT_146b1ef28 == 0) {
    FUN_141786a30(&DAT_146b1ef28,&PTR_FUN_14659c0d0);
  }
  return DAT_146b1ef28;
}



// FUNCTION 142948540 FUN_142948540 body=47 status=ok
// SIG undefined FUN_142948540(void)

longlong FUN_142948540(void)

{
  if (DAT_146b1ef30 == 0) {
    FUN_141786a30(&DAT_146b1ef30,&PTR_FUN_14659c110);
  }
  return DAT_146b1ef30;
}



// FUNCTION 142948570 FUN_142948570 body=47 status=ok
// SIG undefined FUN_142948570(void)

longlong FUN_142948570(void)

{
  if (DAT_146b1ef38 == 0) {
    FUN_141786a30(&DAT_146b1ef38,&PTR_FUN_14659c1c0);
  }
  return DAT_146b1ef38;
}



// FUNCTION 1429485a0 FUN_1429485a0 body=47 status=ok
// SIG undefined FUN_1429485a0(void)

longlong FUN_1429485a0(void)

{
  if (DAT_146b1ef40 == 0) {
    FUN_141786a30(&DAT_146b1ef40,&PTR_FUN_14659c200);
  }
  return DAT_146b1ef40;
}



// FUNCTION 1429485d0 FUN_1429485d0 body=47 status=ok
// SIG undefined FUN_1429485d0(void)

longlong FUN_1429485d0(void)

{
  if (DAT_146b1ef48 == 0) {
    FUN_141786a30(&DAT_146b1ef48,&PTR_FUN_14659c240);
  }
  return DAT_146b1ef48;
}



// FUNCTION 142948600 FUN_142948600 body=47 status=ok
// SIG undefined FUN_142948600(void)

longlong FUN_142948600(void)

{
  if (DAT_146b1ef50 == 0) {
    FUN_141786a30(&DAT_146b1ef50,&PTR_FUN_14659c2f0);
  }
  return DAT_146b1ef50;
}



// FUNCTION 142948630 FUN_142948630 body=47 status=ok
// SIG undefined FUN_142948630(void)

longlong FUN_142948630(void)

{
  if (DAT_146b1ef58 == 0) {
    FUN_141786a30(&DAT_146b1ef58,&PTR_FUN_14659c3b0);
  }
  return DAT_146b1ef58;
}



// FUNCTION 142948660 FUN_142948660 body=47 status=ok
// SIG undefined FUN_142948660(void)

longlong FUN_142948660(void)

{
  if (DAT_146b1ef60 == 0) {
    FUN_141786a30(&DAT_146b1ef60,&PTR_FUN_14659c470);
  }
  return DAT_146b1ef60;
}



// FUNCTION 142948690 FUN_142948690 body=47 status=ok
// SIG undefined FUN_142948690(void)

longlong FUN_142948690(void)

{
  if (DAT_146b1ef68 == 0) {
    FUN_141786a30(&DAT_146b1ef68,&PTR_FUN_14659c4b0);
  }
  return DAT_146b1ef68;
}



// FUNCTION 1429486c0 FUN_1429486c0 body=53 status=ok
// SIG undefined FUN_1429486c0(void)

void FUN_1429486c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &PTR_FUN_145268da0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142948700 FUN_142948700 body=53 status=ok
// SIG undefined FUN_142948700(void)

void FUN_142948700(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_145268eb8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142948830 FUN_142948830 body=120 status=ok
// SIG undefined FUN_142948830(void)

void FUN_142948830(undefined8 param_1,undefined8 *param_2)

{
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  param_2[5] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined4 *)((longlong)param_2 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x13) = 0;
  *(undefined4 *)((longlong)param_2 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x15) = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  _guard_xfg_dispatch_icall_nop(param_2 + 6,0,0x90);
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0x3f800000;
  return;
}



// FUNCTION 1429488b0 Copy body=357 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FPredictProjectilePathParams>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  
  if (param_4 != 0) {
    piVar4 = (int *)(param_3 + 0x40);
    do {
      *param_2 = *(undefined8 *)(piVar4 + -0x10);
      piVar1 = (int *)(param_2 + 5);
      *(int *)(param_2 + 1) = piVar4[-0xe];
      *(undefined8 *)((longlong)param_2 + 0xc) = *(undefined8 *)(piVar4 + -0xd);
      *(int *)((longlong)param_2 + 0x14) = piVar4[-0xb];
      *(char *)(param_2 + 3) = (char)piVar4[-10];
      *(int *)((longlong)param_2 + 0x1c) = piVar4[-9];
      *(int *)(param_2 + 4) = piVar4[-8];
      *(char *)((longlong)param_2 + 0x24) = (char)piVar4[-7];
      *(undefined1 *)((longlong)param_2 + 0x25) = *(undefined1 *)((longlong)piVar4 + -0x1b);
      if (piVar1 != piVar4 + -6) {
        iVar2 = piVar4[-4];
        pvVar3 = *(void **)(piVar4 + -6);
        *(int *)(param_2 + 6) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x34) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x34) = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(piVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2);
        }
      }
      piVar1 = (int *)(param_2 + 7);
      if (piVar1 != piVar4 + -2) {
        iVar2 = *piVar4;
        pvVar3 = *(void **)(piVar4 + -2);
        *(int *)(param_2 + 8) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x44) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x44) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2 << 3);
        }
      }
      *(int *)(param_2 + 9) = piVar4[2];
      *(int *)((longlong)param_2 + 0x4c) = piVar4[3];
      *(char *)(param_2 + 10) = (char)piVar4[4];
      *(int *)((longlong)param_2 + 0x54) = piVar4[5];
      piVar1 = piVar4 + 6;
      piVar4 = piVar4 + 0x18;
      *(char *)(param_2 + 0xb) = (char)*piVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xc;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142948a20 FUN_142948a20 body=472 status=ok
// SIG undefined FUN_142948a20(void)

undefined8 FUN_142948a20(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined4 *)(param_3 + 0xa0);
    do {
      if (param_2 != (undefined8 *)(puVar4 + -0x28)) {
        iVar2 = puVar4[-0x26];
        _Src = *(void **)(puVar4 + -0x28);
        *(int *)(param_2 + 1) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<FVRMoveActionContainer,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar2 * 0x1c);
        }
      }
      uVar3 = *(undefined8 *)(puVar4 + -0x22);
      param_2[2] = *(undefined8 *)(puVar4 + -0x24);
      param_2[3] = uVar3;
      param_2[4] = *(undefined8 *)(puVar4 + -0x20);
      *(undefined4 *)(param_2 + 5) = puVar4[-0x1e];
      *(byte *)(param_2 + 6) =
           *(byte *)(param_2 + 6) ^ (*(byte *)(puVar4 + -0x1c) ^ *(byte *)(param_2 + 6)) & 1;
      *(byte *)(param_2 + 6) =
           *(byte *)(param_2 + 6) ^ (*(byte *)(puVar4 + -0x1c) ^ *(byte *)(param_2 + 6)) & 2;
      *(undefined4 *)((longlong)param_2 + 0x34) = puVar4[-0x1b];
      *(uint *)(param_2 + 7) = *(uint *)(param_2 + 7) ^ (puVar4[-0x1a] ^ *(uint *)(param_2 + 7)) & 1
      ;
      *(undefined4 *)((longlong)param_2 + 0x3c) = puVar4[-0x19];
      *(undefined4 *)(param_2 + 8) = puVar4[-0x18];
      *(undefined8 *)((longlong)param_2 + 0x44) = *(undefined8 *)(puVar4 + -0x17);
      *(undefined4 *)((longlong)param_2 + 0x4c) = puVar4[-0x15];
      param_2[10] = *(undefined8 *)(puVar4 + -0x14);
      *(undefined4 *)(param_2 + 0xb) = puVar4[-0x12];
      *(undefined8 *)((longlong)param_2 + 0x5c) = *(undefined8 *)(puVar4 + -0x11);
      *(undefined4 *)((longlong)param_2 + 100) = puVar4[-0xf];
      param_2[0xd] = *(undefined8 *)(puVar4 + -0xe);
      *(undefined4 *)(param_2 + 0xe) = puVar4[-0xc];
      *(undefined8 *)((longlong)param_2 + 0x74) = *(undefined8 *)(puVar4 + -0xb);
      *(undefined4 *)((longlong)param_2 + 0x7c) = puVar4[-9];
      param_2[0x10] = *(undefined8 *)(puVar4 + -8);
      *(undefined4 *)(param_2 + 0x11) = puVar4[-6];
      *(undefined4 *)((longlong)param_2 + 0x8c) = puVar4[-5];
      *(undefined4 *)(param_2 + 0x12) = puVar4[-4];
      *(undefined4 *)((longlong)param_2 + 0x94) = puVar4[-3];
      *(undefined4 *)(param_2 + 0x13) = puVar4[-2];
      *(undefined4 *)((longlong)param_2 + 0x9c) = puVar4[-1];
      *(undefined4 *)(param_2 + 0x14) = *puVar4;
      *(undefined4 *)((longlong)param_2 + 0xa4) = puVar4[1];
      *(undefined4 *)(param_2 + 0x15) = puVar4[2];
      param_2[0x16] = *(undefined8 *)(puVar4 + 4);
      puVar1 = (undefined8 *)(puVar4 + 6);
      puVar4 = puVar4 + 0x30;
      param_2[0x17] = *puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x18;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142948c00 Destruct body=48 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FPredictProjectilePathParams>::Destruct
               (undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142948c30 ESuggestProjVelocityTraceOption_StaticEnum body=55 status=ok
// SIG undefined ESuggestProjVelocityTraceOption_StaticEnum(void)

void ESuggestProjVelocityTraceOption_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1ebf0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1ebf0 = GetStaticEnum(FUN_142949040,uVar1,L"ESuggestProjVelocityTraceOption");
  }
  return;
}



// FUNCTION 142948c70 EWindowMode_StaticEnum body=55 status=ok
// SIG undefined EWindowMode_StaticEnum(void)

void EWindowMode_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1ebe8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1ebe8 = GetStaticEnum(FUN_142949070,uVar1,L"EWindowMode");
  }
  return;
}



// FUNCTION 142948cb0 FUN_142948cb0 body=162 status=ok
// SIG undefined FUN_142948cb0(void)

longlong FUN_142948cb0(void)

{
  if (DAT_146b1ec70 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"GameSession",&DAT_146b1ec70,FUN_140447710,0x470,0x10000004,0,
                  L"Game",&LAB_142948740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407b7f50,&LAB_140447700,0);
  }
  return DAT_146b1ec70;
}



// FUNCTION 142948d60 FUN_142948d60 body=151 status=ok
// SIG undefined FUN_142948d60(void)

longlong FUN_142948d60(void)

{
  if (DAT_146b1ef78 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"GameUserSettings",&DAT_146b1ef78,FUN_142948e90,0x178,
                  0x10000004,0,L"GameUserSettings",&LAB_1429487a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1ef78;
}



// FUNCTION 142948e00 Get_Z_Construct_UScriptStruct_FPredictProjectilePathParams_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPredictProjectilePathParams_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPredictProjectilePathParams_CRC(void)

{
  return 0x19ed984c;
}



// FUNCTION 142948e10 Get_Z_Construct_UScriptStruct_FPredictProjectilePathPointData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPredictProjectilePathPointData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPredictProjectilePathPointData_CRC(void)

{
  return 0xfa303078;
}



// FUNCTION 142948e20 Get_Z_Construct_UScriptStruct_FPredictProjectilePathResult_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPredictProjectilePathResult_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPredictProjectilePathResult_CRC(void)

{
  return 0x2efef306;
}



// FUNCTION 142948e30 FUN_142948e30 body=34 status=ok
// SIG undefined FUN_142948e30(void)

void FUN_142948e30(void)

{
  undefined8 uVar1;
  
  uVar1 = ARemnantQuest::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnRep_ElapsedTime_145268fd0,2);
  return;
}



// FUNCTION 142948e60 FUN_142948e60 body=34 status=ok
// SIG undefined FUN_142948e60(void)

void FUN_142948e60(void)

{
  undefined8 uVar1;
  
  uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetPlayerRespawnDelay_145268ff0,9);
  return;
}



// FUNCTION 142948e90 FUN_142948e90 body=34 status=ok
// SIG undefined FUN_142948e90(void)

void FUN_142948e90(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142948d60();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_ApplyHardwareBenchmarkResults_1452690b0,0x4e);
  return;
}



// FUNCTION 142948ec0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPredictProjectilePathParams::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1ec58 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FPredictProjectilePathParams_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1ec58 = GetStaticStruct(FUN_1429490a0,uVar2,L"PredictProjectilePathParams",0x60,uVar1);
  }
  return;
}



// FUNCTION 142948f20 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPredictProjectilePathPointData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1ec48 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FPredictProjectilePathPointData_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1ec48 =
         GetStaticStruct(FUN_1429490d0,uVar2,L"PredictProjectilePathPointData",0x1c,uVar1);
  }
  return;
}



// FUNCTION 142948f80 FUN_142948f80 body=82 status=ok
// SIG undefined FUN_142948f80(void)

void FUN_142948f80(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1ec38 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FPredictProjectilePathResult_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1ec38 = GetStaticStruct(FUN_142949100,uVar2,L"PredictProjectilePathResult",0xc0,uVar1);
  }
  return;
}



// FUNCTION 142948fe0 FUN_142948fe0 body=47 status=ok
// SIG undefined FUN_142948fe0(void)

longlong FUN_142948fe0(void)

{
  if (DAT_146b1ec68 == 0) {
    FUN_141786440(&DAT_146b1ec68,&PTR_thunk_FUN_142948cb0_1452652a0);
  }
  return DAT_146b1ec68;
}



// FUNCTION 142949010 FUN_142949010 body=47 status=ok
// SIG undefined FUN_142949010(void)

longlong FUN_142949010(void)

{
  if (DAT_146b1ecf0 == 0) {
    FUN_141786a30(&DAT_146b1ecf0,&PTR_Z_Construct_UPackage__Script_Engine_146599df0);
  }
  return DAT_146b1ecf0;
}



// FUNCTION 142949040 FUN_142949040 body=47 status=ok
// SIG undefined FUN_142949040(void)

longlong FUN_142949040(void)

{
  if (DAT_146b1ec30 == 0) {
    FUN_1417866a0(&DAT_146b1ec30,&PTR_Z_Construct_UPackage__Script_Engine_146598d90);
  }
  return DAT_146b1ec30;
}



// FUNCTION 142949070 FUN_142949070 body=47 status=ok
// SIG undefined FUN_142949070(void)

longlong FUN_142949070(void)

{
  if (DAT_146b1ecf8 == 0) {
    FUN_1417866a0(&DAT_146b1ecf8,&PTR_Z_Construct_UPackage__Script_Engine_14659cd70);
  }
  return DAT_146b1ecf8;
}



// FUNCTION 1429490a0 FUN_1429490a0 body=47 status=ok
// SIG undefined FUN_1429490a0(void)

longlong FUN_1429490a0(void)

{
  if (DAT_146b1ec60 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1ec60,&PTR_Z_Construct_UPackage__Script_Engine_146599470);
  }
  return DAT_146b1ec60;
}



// FUNCTION 1429490d0 FUN_1429490d0 body=47 status=ok
// SIG undefined FUN_1429490d0(void)

longlong FUN_1429490d0(void)

{
  if (DAT_146b1ec50 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1ec50,&PTR_Z_Construct_UPackage__Script_Engine_146599010);
  }
  return DAT_146b1ec50;
}



// FUNCTION 142949100 FUN_142949100 body=47 status=ok
// SIG undefined FUN_142949100(void)

longlong FUN_142949100(void)

{
  if (DAT_146b1ec40 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1ec40,&PTR_Z_Construct_UPackage__Script_Engine_146598f10);
  }
  return DAT_146b1ec40;
}



// FUNCTION 142949130 FUN_142949130 body=130 status=ok
// SIG undefined FUN_142949130(void)

void FUN_142949130(undefined8 param_1,longlong param_2)

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
  FUN_142471ee0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1429491e0 execEnableHDRDisplayOutput body=190 status=ok
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
  FUN_14247c070(param_1,bVar1,local_res20[0]);
  return;
}



// FUNCTION 1429492a0 execGetNumVariantSets body=43 status=ok
// SIG undefined execGetNumVariantSets(void)

void ULevelVariantSets::execGetNumVariantSets
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetNumVariantSets();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1429492f0 FUN_1429492f0 body=43 status=ok
// SIG undefined FUN_1429492f0(void)

void FUN_1429492f0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14247f8b0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142949320 execUnloadPrimaryAssetList body=147 status=ok
// SIG undefined execUnloadPrimaryAssetList(void)

void UKismetSystemLibrary::execUnloadPrimaryAssetList(undefined8 param_1,longlong param_2)

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
  FUN_14247f8d0(plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1429493c0 FUN_1429493c0 body=50 status=ok
// SIG undefined FUN_1429493c0(void)

void FUN_1429493c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_14247fba0(local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142949400 FUN_142949400 body=122 status=ok
// SIG undefined FUN_142949400(void)

void FUN_142949400(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_14247fbb0(local_18);
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



// FUNCTION 142949480 execGetDefaultResolution body=54 status=ok
// SIG undefined execGetDefaultResolution(void)

void UGameUserSettings::execGetDefaultResolution
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined4 *)GetDefaultResolution(local_res10);
  *param_3 = *puVar1;
  param_3[1] = puVar1[1];
  return;
}



// FUNCTION 1429494c0 execGetDefaultResolutionScale body=49 status=ok
// SIG undefined execGetDefaultResolutionScale(void)

void UGameUserSettings::execGetDefaultResolutionScale
               (longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x2d8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142949500 execGetDefaultWindowMode body=41 status=ok
// SIG undefined execGetDefaultWindowMode(void)

void UGameUserSettings::execGetDefaultWindowMode
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  AKRESULT AVar1;
  longlong lVar2;
  
  lVar2 = (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *(longlong *)(param_2 + 0x20) = lVar2;
  AVar1 = AK::MemoryMgr::SetMonitoring((long)lVar2,SUB81(param_2,0));
  *param_3 = (char)AVar1;
  return;
}



// FUNCTION 142949530 execGetDefaultWindowPosition body=54 status=ok
// SIG undefined execGetDefaultWindowPosition(void)

void UGameUserSettings::execGetDefaultWindowPosition
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined4 *)FUN_14247fd00(local_res10);
  *param_3 = *puVar1;
  param_3[1] = puVar1[1];
  return;
}



// FUNCTION 142949570 FUN_142949570 body=56 status=ok
// SIG undefined FUN_142949570(void)

void FUN_142949570(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined4 *)FUN_14247fd10(param_1,local_res10);
  *param_3 = *puVar1;
  param_3[1] = puVar1[1];
  return;
}



// FUNCTION 1429495b0 execGetFoliageQuality body=43 status=ok
// SIG undefined execGetFoliageQuality(void)

void UGameUserSettings::execGetFoliageQuality
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetFoliageQuality();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1429495e0 execGetPlaybackPosition body=45 status=ok
// SIG undefined execGetPlaybackPosition(void)

void UTimelineComponent::execGetPlaybackPosition
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140964690();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142949610 execGetFullscreenMode body=43 status=ok
// SIG undefined execGetFullscreenMode(void)

void UGameUserSettings::execGetFullscreenMode
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetFullscreenMode();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142949640 execGetGameUserSettings body=42 status=ok
// SIG undefined execGetGameUserSettings(void)

void UGameUserSettings::execGetGameUserSettings
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetGameUserSettings();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142949670 FUN_142949670 body=197 status=ok
// SIG undefined FUN_142949670(void)

void FUN_142949670(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_res10;
  undefined1 local_28 [8];
  longlong *local_20;
  
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
  uVar5 = FUN_1424801b0(local_28,local_res10);
  FText::operator=(param_3,uVar5);
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



// FUNCTION 142949740 execGetLastConfirmedFullscreenMode body=43 status=ok
// SIG undefined execGetLastConfirmedFullscreenMode(void)

void UGameUserSettings::execGetLastConfirmedFullscreenMode
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetLastConfirmedFullscreenMode();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142949770 FUN_142949770 body=56 status=ok
// SIG undefined FUN_142949770(void)

void FUN_142949770(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined4 *)FUN_142480340(param_1,local_res10);
  *param_3 = *puVar1;
  param_3[1] = puVar1[1];
  return;
}



// FUNCTION 1429497b0 execConv_IntToString body=191 status=ok
// SIG undefined execConv_IntToString(void)

void UKismetStringLibrary::execConv_IntToString
               (undefined8 param_1,longlong param_2,longlong *param_3)

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
  plVar1 = (longlong *)FUN_142480c60(local_18,local_res10[0]);
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



// FUNCTION 142949870 FUN_142949870 body=47 status=ok
// SIG undefined FUN_142949870(void)

void FUN_142949870(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x290))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1429498a0 FUN_1429498a0 body=150 status=ok
// SIG undefined FUN_1429498a0(void)

void FUN_1429498a0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = (**(code **)(*param_1 + 0x710))(param_1,local_res8);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142949940 execGetMassScale body=150 status=ok
// SIG undefined execGetMassScale(void)

void UPrimitiveComponent::execGetMassScale(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = (**(code **)(*param_1 + 0x708))(param_1,local_res8);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1429499e0 FUN_1429499e0 body=43 status=ok
// SIG undefined FUN_1429499e0(void)

void FUN_1429499e0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14046e5c0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142949a10 execGetPreferredFullscreenMode body=43 status=ok
// SIG undefined execGetPreferredFullscreenMode(void)

void UGameUserSettings::execGetPreferredFullscreenMode
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetPreferredFullscreenMode();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142949a40 execGetChosenCharacter body=52 status=ok
// SIG undefined execGetChosenCharacter(void)

void UUGUserProfile::execGetChosenCharacter(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)GetChosenCharacter(param_1,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142949a80 execGetTargetUnitName body=122 status=ok
// SIG undefined execGetTargetUnitName(void)

void UMWAITargetSelectionComponent::execGetTargetUnitName
               (undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)GetTargetUnitName(param_1,local_18);
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



// FUNCTION 142949b00 execGetBackLegName body=122 status=ok
// SIG undefined execGetBackLegName(void)

void UMistFootprintComponent::execGetBackLegName
               (undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)GetBackLegName(param_1,local_18);
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



// FUNCTION 142949b80 execGetNumEntries body=43 status=ok
// SIG undefined execGetNumEntries(void)

void UDynamicEntryBoxBase::execGetNumEntries
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FAnimNode_AimOffsetLookAt::GetLODThreshold();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142949bb0 execGetRecommendedResolutionScale body=49 status=ok
// SIG undefined execGetRecommendedResolutionScale(void)

void UGameUserSettings::execGetRecommendedResolutionScale
               (longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x2e0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142949bf0 execGetResolutionScaleInformation body=406 status=ok
// SIG undefined execGetResolutionScaleInformation(void)

void UGameUserSettings::execGetResolutionScaleInformation(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_38;
  undefined4 local_34 [3];
  
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_res20[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar4 = local_res10;
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_res20;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_34[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar3 = &local_38;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_34);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_34);
  }
  puVar1 = local_34;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  GetResolutionScaleInformation(param_1,puVar4,puVar2,puVar3,puVar1);
  return;
}



// FUNCTION 142949d90 execGetResolutionScaleInformationEx body=405 status=ok
// SIG undefined execGetResolutionScaleInformationEx(void)

void UGameUserSettings::execGetResolutionScaleInformationEx(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_38;
  undefined4 local_34 [3];
  
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_res20[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar4 = local_res10;
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_res20;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_34[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar3 = &local_38;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_34);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_34);
  }
  puVar1 = local_34;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  GetResolutionScaleInformationEx(param_1,puVar4,puVar2,puVar3,puVar1);
  return;
}



// FUNCTION 142949f30 FUN_142949f30 body=56 status=ok
// SIG undefined FUN_142949f30(void)

void FUN_142949f30(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined4 *)FUN_142481920(param_1,local_res10);
  *param_3 = *puVar1;
  param_3[1] = puVar1[1];
  return;
}



// FUNCTION 142949f70 execGetMaxAcceleration body=49 status=ok
// SIG undefined execGetMaxAcceleration(void)

void UCharacterMovementComponent::execGetMaxAcceleration
               (longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x6f0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142949fb0 execGetShadowQuality body=43 status=ok
// SIG undefined execGetShadowQuality(void)

void UGameUserSettings::execGetShadowQuality
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = UPartyBeaconState::GetMaxPlayersPerTeam();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142949fe0 FUN_142949fe0 body=43 status=ok
// SIG undefined FUN_142949fe0(void)

void FUN_142949fe0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1422092a0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14294a010 execGetViewDistanceQuality body=43 status=ok
// SIG undefined execGetViewDistanceQuality(void)

void UGameUserSettings::execGetViewDistanceQuality
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = UPartyBeaconState::GetMaxReservations();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14294a040 FUN_14294a040 body=43 status=ok
// SIG undefined FUN_14294a040(void)

void FUN_14294a040(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140953d20();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14294a070 execIsLookInputIgnored body=47 status=ok
// SIG undefined execIsLookInputIgnored(void)

void AController::execIsLookInputIgnored(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x6f8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14294a0a0 FUN_14294a0a0 body=43 status=ok
// SIG undefined FUN_14294a0a0(void)

void FUN_14294a0a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142486690();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14294a0d0 execIsDynamicResolutionEnabled body=43 status=ok
// SIG undefined execIsDynamicResolutionEnabled(void)

void UGameUserSettings::execIsDynamicResolutionEnabled
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = IsDynamicResolutionEnabled();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14294a100 FUN_14294a100 body=43 status=ok
// SIG undefined FUN_14294a100(void)

void FUN_14294a100(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1424867c0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14294a130 FUN_14294a130 body=43 status=ok
// SIG undefined FUN_14294a130(void)

void FUN_14294a130(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142486990();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14294a160 FUN_14294a160 body=43 status=ok
// SIG undefined FUN_14294a160(void)

void FUN_14294a160(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142486a60();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14294a190 FUN_14294a190 body=43 status=ok
// SIG undefined FUN_14294a190(void)

void FUN_14294a190(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142486ac0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14294a1c0 FUN_14294a1c0 body=43 status=ok
// SIG undefined FUN_14294a1c0(void)

void FUN_14294a1c0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140472310();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14294a290 FUN_14294a290 body=241 status=ok
// SIG undefined FUN_14294a290(void)

void FUN_14294a290(longlong *param_1,longlong param_2)

{
  undefined4 local_res8 [2];
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
  (**(code **)(*param_1 + 0x2e8))(param_1,local_res20[0],local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 14294a3b0 FUN_14294a3b0 body=126 status=ok
// SIG undefined FUN_14294a3b0(void)

void FUN_14294a3b0(undefined8 param_1,longlong param_2)

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
  FUN_141540e50(param_1,local_res10[0]);
  return;
}



// FUNCTION 14294a430 execSetAudioQualityLevel body=126 status=ok
// SIG undefined execSetAudioQualityLevel(void)

void UGameUserSettings::execSetAudioQualityLevel(undefined8 param_1,longlong param_2)

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
  SetAudioQualityLevel(param_1,local_res10[0]);
  return;
}



// FUNCTION 14294a4d0 execSetDynamicResolutionEnabled body=130 status=ok
// SIG undefined execSetDynamicResolutionEnabled(void)

void UGameUserSettings::execSetDynamicResolutionEnabled(undefined8 param_1,longlong param_2)

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
  SetDynamicResolutionEnabled(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 14294a560 execSetFoliageQuality body=126 status=ok
// SIG undefined execSetFoliageQuality(void)

void UGameUserSettings::execSetFoliageQuality(undefined8 param_1,longlong param_2)

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
  SetFoliageQuality(param_1,local_res10[0]);
  return;
}



// FUNCTION 14294a5e0 FUN_14294a5e0 body=123 status=ok
// SIG undefined FUN_14294a5e0(void)

void FUN_14294a5e0(undefined8 param_1,longlong param_2)

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
  UGameUserSettings::SetFrameRateLimit(param_1,local_res10[0]);
  return;
}



// FUNCTION 14294a660 execSetFullscreenMode body=118 status=ok
// SIG undefined execSetFullscreenMode(void)

void UGameUserSettings::execSetFullscreenMode(undefined8 param_1,longlong param_2)

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
  SetFullscreenMode(param_1,local_res10[0]);
  return;
}



// FUNCTION 14294a6e0 execDebugCreatePlayer body=130 status=ok
// SIG undefined execDebugCreatePlayer(void)

void UGameInstance::execDebugCreatePlayer(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x288))(param_1,local_res8[0]);
  return;
}



// FUNCTION 14294a770 execSetPostProcessingQuality body=126 status=ok
// SIG undefined execSetPostProcessingQuality(void)

void UGameUserSettings::execSetPostProcessingQuality(undefined8 param_1,longlong param_2)

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
  SetPostProcessingQuality(param_1,local_res10[0]);
  return;
}



// FUNCTION 14294a7f0 FUN_14294a7f0 body=128 status=ok
// SIG undefined FUN_14294a7f0(void)

void FUN_14294a7f0(undefined8 param_1,longlong param_2)

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
  UTimelineComponent::SetDirectionPropertyName(param_1,local_res10);
  return;
}



// FUNCTION 14294a870 execHandleOnLoadoutChangedChanged body=223 status=ok
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
  FUN_14248eaf0(param_1,&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14294a950 FUN_14294a950 body=126 status=ok
// SIG undefined FUN_14294a950(void)

void FUN_14294a950(undefined8 param_1,longlong param_2)

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
  FUN_14248ef20(param_1,local_res10[0]);
  return;
}



// FUNCTION 14294a9d0 FUN_14294a9d0 body=123 status=ok
// SIG undefined FUN_14294a9d0(void)

void FUN_14294a9d0(undefined8 param_1,longlong param_2)

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
  FUN_14248efd0(param_1,local_res10[0]);
  return;
}



// FUNCTION 14294aa50 FUN_14294aa50 body=126 status=ok
// SIG undefined FUN_14294aa50(void)

void FUN_14294aa50(undefined8 param_1,longlong param_2)

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
  FUN_14248f000(param_1,local_res10[0]);
  return;
}



// FUNCTION 14294aad0 FUN_14294aad0 body=123 status=ok
// SIG undefined FUN_14294aad0(void)

void FUN_14294aad0(undefined8 param_1,longlong param_2)

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
  FUN_14248f010(param_1,local_res10[0]);
  return;
}



// FUNCTION 14294ab50 execSetScreenResolution body=113 status=ok
// SIG undefined execSetScreenResolution(void)

void UGameUserSettings::execSetScreenResolution(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  SetScreenResolution(param_1,local_res10[0]);
  return;
}



// FUNCTION 14294abd0 execSetShadowQuality body=126 status=ok
// SIG undefined execSetShadowQuality(void)

void UGameUserSettings::execSetShadowQuality(undefined8 param_1,longlong param_2)

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
  SetShadowQuality(param_1,local_res10[0]);
  return;
}



// FUNCTION 14294ac50 execSetTextureQuality body=126 status=ok
// SIG undefined execSetTextureQuality(void)

void UGameUserSettings::execSetTextureQuality(undefined8 param_1,longlong param_2)

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
  FArchive::SetLicenseeUE4Ver(param_1,local_res10[0]);
  return;
}



// FUNCTION 14294acd0 FUN_14294acd0 body=130 status=ok
// SIG undefined FUN_14294acd0(void)

void FUN_14294acd0(undefined8 param_1,longlong param_2)

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
  FUN_14248f680(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 14294ad60 FUN_14294ad60 body=126 status=ok
// SIG undefined FUN_14294ad60(void)

void FUN_14294ad60(undefined8 param_1,longlong param_2)

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
  FUN_141540de0(param_1,local_res10[0]);
  return;
}



// FUNCTION 14294ade0 execSetVisualEffectQuality body=126 status=ok
// SIG undefined execSetVisualEffectQuality(void)

void UGameUserSettings::execSetVisualEffectQuality(undefined8 param_1,longlong param_2)

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
  SetVisualEffectQuality(param_1,local_res10[0]);
  return;
}



// FUNCTION 14294ae60 FUN_14294ae60 body=47 status=ok
// SIG undefined FUN_14294ae60(void)

void FUN_14294ae60(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x2f8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14294ae90 FUN_14294ae90 body=47 status=ok
// SIG undefined FUN_14294ae90(void)

longlong FUN_14294ae90(void)

{
  if (DAT_146b1f068 == 0) {
    FUN_141786440(&DAT_146b1f068,&PTR_GetPrivateStaticClass_1452696a0);
  }
  return DAT_146b1f068;
}



// FUNCTION 14294aec0 FUN_14294aec0 body=47 status=ok
// SIG undefined FUN_14294aec0(void)

longlong FUN_14294aec0(void)

{
  if (DAT_146b1f050 == 0) {
    FUN_141786a30(&DAT_146b1f050,&PTR_FUN_14659ce30);
  }
  return DAT_146b1f050;
}



// FUNCTION 14294aef0 FUN_14294aef0 body=47 status=ok
// SIG undefined FUN_14294aef0(void)

longlong FUN_14294aef0(void)

{
  if (DAT_146b1f058 == 0) {
    FUN_141786a30(&DAT_146b1f058,&PTR_FUN_14659ce70);
  }
  return DAT_146b1f058;
}



// FUNCTION 14294af20 FUN_14294af20 body=47 status=ok
// SIG undefined FUN_14294af20(void)

longlong FUN_14294af20(void)

{
  if (DAT_146b1f060 == 0) {
    FUN_141786a30(&DAT_146b1f060,&PTR_FUN_14659ceb0);
  }
  return DAT_146b1f060;
}



// FUNCTION 14294af60 FUN_14294af60 body=162 status=ok
// SIG undefined FUN_14294af60(void)

longlong FUN_14294af60(void)

{
  if (DAT_146b1f120 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"GbxAnimBlueprintLibrary",&DAT_146b1f120,FUN_14294dd20,0x28,
                  0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146b1f120;
}



// FUNCTION 14294b010 FUN_14294b010 body=47 status=ok
// SIG undefined FUN_14294b010(void)

longlong FUN_14294b010(void)

{
  if (DAT_146b1f118 == 0) {
    FUN_141786440(&DAT_146b1f118,&PTR_FUN_145269d80);
  }
  return DAT_146b1f118;
}



// FUNCTION 14294b040 FUN_14294b040 body=47 status=ok
// SIG undefined FUN_14294b040(void)

longlong FUN_14294b040(void)

{
  if (DAT_146b1f108 == 0) {
    FUN_141786a30(&DAT_146b1f108,&PTR_FUN_14659d6e0);
  }
  return DAT_146b1f108;
}



// FUNCTION 14294b070 FUN_14294b070 body=47 status=ok
// SIG undefined FUN_14294b070(void)

longlong FUN_14294b070(void)

{
  if (DAT_146b1f110 == 0) {
    FUN_141786a30(&DAT_146b1f110,&PTR_FUN_14659d7a0);
  }
  return DAT_146b1f110;
}



// FUNCTION 14294b0a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong APlayerState::GetPrivateStaticClass(void)

{
  if (DAT_146b1f2d8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"GbxSkyActor",&DAT_146b1f2d8,FUN_140447710,0x478,0x10000000,0,
                  L"Engine",&LAB_14294c6b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146b1f2d8;
}



// FUNCTION 14294b180 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ACharacter::GetPrivateStaticClass(void)

{
  if (DAT_146b1f2e8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"GbxSkyComponent",&DAT_146b1f2e8,FUN_140447710,0x760,0x10000000
                  ,0,L"Engine",&LAB_14294c8d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_146b1f2e8;
}



// FUNCTION 14294b230 FUN_14294b230 body=162 status=ok
// SIG undefined FUN_14294b230(void)

longlong FUN_14294b230(void)

{
  if (DAT_146b1f220 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"GbxConvexComponent",&DAT_146b1f220,FUN_140447710,0x720,
                  0x10000000,0,L"Engine",&LAB_14294c7d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142a047d0,&LAB_140447700,0);
  }
  return DAT_146b1f220;
}



// FUNCTION 14294b300 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong USnapMapConnectionInfo::StaticClass(void)

{
  if (DAT_146b1f2f8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"GbxSkyDefinition",&DAT_146b1f2f8,FUN_140447710,0x150,
                  0x10000000,0,L"Engine",&LAB_14294c8f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1f2f8;
}



// FUNCTION 14294b3a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUserDefinedStruct::GetPrivateStaticClass(void)

{
  if (DAT_146b1f230 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"GbxExternalTexture",&DAT_146b1f230,FUN_140447710,0xe0,
                  0x10000000,0,L"Engine",&LAB_14294c7f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14294dce0,&LAB_140447700,0);
  }
  return DAT_146b1f230;
}



// FUNCTION 14294b460 FUN_14294b460 body=47 status=ok
// SIG undefined FUN_14294b460(void)

longlong FUN_14294b460(void)

{
  if (DAT_146b1f138 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1f138,&PTR_Z_Construct_UPackage__Script_Engine_14659d890);
  }
  return DAT_146b1f138;
}



// FUNCTION 14294b490 FUN_14294b490 body=151 status=ok
// SIG undefined FUN_14294b490(void)

longlong FUN_14294b490(void)

{
  if (DAT_146b1f248 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"GbxLagCompensationManager",&DAT_146b1f248,FUN_14294dd50,0x88,
                  0x10000006,0,L"Engine",&LAB_14294c810,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1424975a0,&LAB_140447700,
                  &LAB_140447700,0);
  }
  return DAT_146b1f248;
}



// FUNCTION 14294b530 FUN_14294b530 body=53 status=ok
// SIG undefined FUN_14294b530(void)

void FUN_14294b530(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &PTR_FUN_14526e7e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14294b580 FUN_14294b580 body=53 status=ok
// SIG undefined FUN_14294b580(void)

void FUN_14294b580(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_14526e8f8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14294b5c0 FUN_14294b5c0 body=53 status=ok
// SIG undefined FUN_14294b5c0(void)

void FUN_14294b5c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_14526ea10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14294b600 FUN_14294b600 body=151 status=ok
// SIG undefined FUN_14294b600(void)

longlong FUN_14294b600(void)

{
  if (DAT_146b1f178 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"GbxBaseMediaManager",&DAT_146b1f178,FUN_140447710,0x28,
                  0x10000000,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1f178;
}



// FUNCTION 14294b6a0 FUN_14294b6a0 body=47 status=ok
// SIG undefined FUN_14294b6a0(void)

longlong FUN_14294b6a0(void)

{
  if (DAT_146b1f240 == 0) {
    FUN_141786440(&DAT_146b1f240,&PTR_FUN_14526b040);
  }
  return DAT_146b1f240;
}



// FUNCTION 14294b6d0 FUN_14294b6d0 body=47 status=ok
// SIG undefined FUN_14294b6d0(void)

longlong FUN_14294b6d0(void)

{
  if (DAT_146b1f238 == 0) {
    FUN_141786a30(&DAT_146b1f238,&PTR_FUN_14659e800);
  }
  return DAT_146b1f238;
}



// FUNCTION 14294b710 FUN_14294b710 body=162 status=ok
// SIG undefined FUN_14294b710(void)

longlong FUN_14294b710(void)

{
  if (DAT_146b1f188 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"GbxBlueprintActionInterface",&DAT_146b1f188,FUN_140447710,0x28
                  ,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b1f188;
}



// FUNCTION 14294b7e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTextureRenderTargetCube::GetPrivateStaticClass(void)

{
  if (DAT_146b1f0c8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"GbxAnimSet",&DAT_146b1f0c8,FUN_140447710,0xd8,0x10000000,0,
                  L"Engine",&LAB_14294c730,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b1f0c8;
}



// FUNCTION 14294b890 FUN_14294b890 body=53 status=ok
// SIG undefined FUN_14294b890(void)

void FUN_14294b890(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_14526ec30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14294b8d0 FUN_14294b8d0 body=162 status=ok
// SIG undefined FUN_14294b8d0(void)

longlong FUN_14294b8d0(void)

{
  if (DAT_146b1f080 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"GbxActionAnimInstance",&DAT_146b1f080,FUN_140447710,0x440,
                  0x10000008,0,L"Engine",FUN_14294c6f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142256d30,thunk_FUN_1428eccf0,
                  &LAB_14084f730,0);
  }
  return DAT_146b1f080;
}



// FUNCTION 14294b980 FUN_14294b980 body=53 status=ok
// SIG undefined FUN_14294b980(void)

void FUN_14294b980(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_14526ed48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14294b9d0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UShaderPlatformQualitySettings::GetPrivateStaticClass(void)

{
  if (DAT_146b1f0a0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"GbxAnimManagerSettings",&DAT_146b1f0a0,FUN_140447710,0x50,
                  0x10000006,0,L"Engine",&LAB_14294c720,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1f0a0;
}



// FUNCTION 14294ba70 FUN_14294ba70 body=53 status=ok
// SIG undefined FUN_14294ba70(void)

void FUN_14294ba70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_14526ee60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14294bab0 FUN_14294bab0 body=53 status=ok
// SIG undefined FUN_14294bab0(void)

void FUN_14294bab0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_14526e228;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14294baf0 FUN_14294baf0 body=53 status=ok
// SIG undefined FUN_14294baf0(void)

void FUN_14294baf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_14526ef78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14294bb50 FUN_14294bb50 body=151 status=ok
// SIG undefined FUN_14294bb50(void)

longlong FUN_14294bb50(void)

{
  if (DAT_146b1f200 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"GbxColorRemapLUT",&DAT_146b1f200,FUN_140447710,0x640,
                  0x10000000,0,L"Engine",&LAB_14294c790,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1f200;
}



// FUNCTION 14294bbf0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMobileInstalledContent::GetPrivateStaticClass(void)

{
  if (DAT_146b1f358 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"GbxSpawnActorAsyncManager",&DAT_146b1f358,
                  StaticRegisterNativesUMobileInstalledContent,0x48,0x10000000,0,L"Engine",
                  &LAB_14294c910,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142497660,&LAB_140447700,
                  &LAB_140447700,0);
  }
  return DAT_146b1f358;
}



// FUNCTION 14294bc90 FUN_14294bc90 body=53 status=ok
// SIG undefined FUN_14294bc90(void)

void FUN_14294bc90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_14526e3a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}


