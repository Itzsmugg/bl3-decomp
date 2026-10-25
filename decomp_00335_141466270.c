// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141466270 FUN_141466270 body=128 status=ok
// SIG undefined FUN_141466270(void)

void FUN_141466270(undefined8 param_1,longlong param_2)

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
  FUN_140d03d80(param_1,local_res10);
  return;
}



// FUNCTION 1414662f0 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140d03de0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1414663d0 FUN_1414663d0 body=128 status=ok
// SIG undefined FUN_1414663d0(void)

void FUN_1414663d0(undefined8 param_1,longlong param_2)

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
  FUN_140d03fd0(param_1,local_res10);
  return;
}



// FUNCTION 141466490 FUN_141466490 body=443 status=ok
// SIG undefined FUN_141466490(void)

void FUN_141466490(undefined8 param_1,longlong param_2)

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
  FUN_140d04600(param_1,local_res20,puVar5,&local_68,local_res10[0]);
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



// FUNCTION 141466650 FUN_141466650 body=274 status=ok
// SIG undefined FUN_141466650(void)

void FUN_141466650(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
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
  FUN_140d047a0(param_1,local_res20,&local_18,local_res10[0]);
  return;
}



// FUNCTION 141466770 FUN_141466770 body=270 status=ok
// SIG undefined FUN_141466770(void)

void FUN_141466770(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined8 local_res10;
  undefined1 local_48 [16];
  longlong *local_38;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FUN_142de2fd0(local_48);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar5 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140d047d0(param_1,local_res10,puVar5);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  return;
}



// FUNCTION 141466880 FUN_141466880 body=126 status=ok
// SIG undefined FUN_141466880(void)

void FUN_141466880(undefined8 param_1,longlong param_2)

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
  FUN_140d04be0(param_1,local_res10[0]);
  return;
}



// FUNCTION 141466900 FUN_141466900 body=188 status=ok
// SIG undefined FUN_141466900(void)

void FUN_141466900(undefined8 param_1,longlong param_2)

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
  FUN_140d04be0(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 141466a80 FUN_141466a80 body=128 status=ok
// SIG undefined FUN_141466a80(void)

void FUN_141466a80(undefined8 param_1,longlong param_2)

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
  FUN_140d076d0(param_1,local_res10);
  return;
}



// FUNCTION 141466b00 FUN_141466b00 body=128 status=ok
// SIG undefined FUN_141466b00(void)

void FUN_141466b00(undefined8 param_1,longlong param_2)

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
  FUN_140d07700(param_1,local_res10);
  return;
}



// FUNCTION 141466b80 FUN_141466b80 body=198 status=ok
// SIG undefined FUN_141466b80(void)

void FUN_141466b80(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
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
  (**(code **)(*param_1 + 0x370))(param_1,local_res10,local_res8[0] != 0);
  return;
}



// FUNCTION 141466c50 FUN_141466c50 body=198 status=ok
// SIG undefined FUN_141466c50(void)

void FUN_141466c50(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
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
  (**(code **)(*param_1 + 0x368))(param_1,local_res10,local_res8[0] != 0);
  return;
}



// FUNCTION 141466d20 FUN_141466d20 body=128 status=ok
// SIG undefined FUN_141466d20(void)

void FUN_141466d20(undefined8 param_1,longlong param_2)

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
  FUN_140d07890(param_1,local_res10);
  return;
}



// FUNCTION 141466e60 FUN_141466e60 body=191 status=ok
// SIG undefined FUN_141466e60(void)

void FUN_141466e60(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
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
  FUN_140d07ee0(param_1,local_res10,local_res20);
  return;
}



// FUNCTION 141466f20 FUN_141466f20 body=296 status=ok
// SIG undefined FUN_141466f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141466f20(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_c48 [32];
  undefined4 local_c28 [4];
  undefined1 local_c18 [1536];
  undefined1 local_618 [1496];
  longlong local_40;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c48;
  local_c28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_c28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_c28);
  }
  FUN_142741540(local_618);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_618);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_618);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140a25aa0(local_c18,local_618);
  FUN_140d080d0(param_1,local_c28[0],uVar1);
  if (local_30 != 0) {
    FMemory::Free();
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141467070 FUN_141467070 body=126 status=ok
// SIG undefined FUN_141467070(void)

void FUN_141467070(undefined8 param_1,longlong param_2)

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
  FUN_140d08950(param_1,local_res10[0]);
  return;
}



// FUNCTION 141467150 FUN_141467150 body=123 status=ok
// SIG undefined FUN_141467150(void)

void FUN_141467150(undefined8 param_1,longlong param_2)

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
  FUN_140d0c0e0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414671d0 FUN_1414671d0 body=123 status=ok
// SIG undefined FUN_1414671d0(void)

void FUN_1414671d0(undefined8 param_1,longlong param_2)

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
  FUN_140d0c100(param_1,local_res10[0]);
  return;
}



// FUNCTION 141467250 FUN_141467250 body=123 status=ok
// SIG undefined FUN_141467250(void)

void FUN_141467250(undefined8 param_1,longlong param_2)

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
  FUN_140d0c190(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414672d0 FUN_1414672d0 body=123 status=ok
// SIG undefined FUN_1414672d0(void)

void FUN_1414672d0(undefined8 param_1,longlong param_2)

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
  FUN_140d0c1b0(param_1,local_res10[0]);
  return;
}



// FUNCTION 141467350 FUN_141467350 body=123 status=ok
// SIG undefined FUN_141467350(void)

void FUN_141467350(undefined8 param_1,longlong param_2)

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
  FUN_140d0c240(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414673d0 FUN_1414673d0 body=123 status=ok
// SIG undefined FUN_1414673d0(void)

void FUN_1414673d0(undefined8 param_1,longlong param_2)

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
  FUN_140d0c290(param_1,local_res10[0]);
  return;
}



// FUNCTION 141467450 FUN_141467450 body=123 status=ok
// SIG undefined FUN_141467450(void)

void FUN_141467450(undefined8 param_1,longlong param_2)

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
  FUN_140d0c2b0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414674d0 FUN_1414674d0 body=347 status=ok
// SIG undefined FUN_1414674d0(void)

void FUN_1414674d0(longlong *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  int local_res8 [2];
  undefined8 local_res10;
  longlong local_38 [4];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
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
  cVar1 = (**(code **)(*param_1 + 0x10a0))(param_1,local_res10,local_38,bVar2);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ReRollInventoryForNewPart_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x10a8))(param_1,local_res10,local_38,bVar2);
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141467630 FUN_141467630 body=356 status=ok
// SIG undefined FUN_141467630(void)

void FUN_141467630(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  undefined8 local_48;
  undefined8 local_40;
  longlong lStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong lStack_18;
  undefined8 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_28 = 0;
  local_10 = 0;
  local_20 = 0;
  lStack_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_48 = 0;
  local_30 = 0;
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_40 = 0;
  lStack_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140d0c6e0(param_1,local_res10,puVar1,puVar2);
  if (lStack_38 != 0) {
    FMemory::Free();
  }
  if (lStack_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414677c0 FUN_1414677c0 body=191 status=ok
// SIG undefined FUN_1414677c0(void)

void FUN_1414677c0(undefined8 param_1,longlong param_2)

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
  FUN_140d0d7d0(param_1,bVar1,local_res20);
  return;
}



// FUNCTION 141467880 FUN_141467880 body=123 status=ok
// SIG undefined FUN_141467880(void)

void FUN_141467880(undefined8 param_1,longlong param_2)

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
  FUN_140d0d8b0(param_1,local_res10[0]);
  return;
}



// FUNCTION 141467900 FUN_141467900 body=130 status=ok
// SIG undefined FUN_141467900(void)

void FUN_141467900(undefined8 param_1,longlong param_2)

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
  FUN_140d0d970(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 141467990 FUN_141467990 body=130 status=ok
// SIG undefined FUN_141467990(void)

void FUN_141467990(undefined8 param_1,longlong param_2)

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
  FUN_140d0da30(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 141467a20 FUN_141467a20 body=181 status=ok
// SIG undefined FUN_141467a20(void)

void FUN_141467a20(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x1430))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerAcceptPendingTradeOffer_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1438))(param_1,local_res8);
  return;
}



// FUNCTION 141467ae0 FUN_141467ae0 body=292 status=ok
// SIG undefined FUN_141467ae0(void)

void FUN_141467ae0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
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
  cVar1 = (**(code **)(*param_1 + 0x1248))(param_1,local_res20,local_res10[0],local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerAcceptVehicleSeatSwapRequest_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1250))(param_1,local_res20,local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 141467c10 FUN_141467c10 body=246 status=ok
// SIG undefined FUN_141467c10(void)

void FUN_141467c10(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
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
  cVar1 = (**(code **)(*param_1 + 0x1350))(param_1,local_res8[0],local_res10);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerAddCurrency_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1358))(param_1,local_res8[0],local_res10);
  return;
}



// FUNCTION 141467d10 FUN_141467d10 body=257 status=ok
// SIG undefined FUN_141467d10(void)

void FUN_141467d10(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
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
  cVar1 = (**(code **)(*param_1 + 0x1748))(param_1,local_18,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerAddGearToInventory_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x1750))(param_1,local_18,local_res8[0]);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141467e20 FUN_141467e20 body=256 status=ok
// SIG undefined FUN_141467e20(void)

void FUN_141467e20(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 local_c8 [32];
  undefined1 local_a8 [24];
  longlong local_90;
  longlong local_80;
  undefined2 local_70;
  undefined1 local_68 [96];
  
  _guard_xfg_dispatch_icall_nop(local_c8,0,0x60);
  local_70 = 1;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = *param_1;
  uVar3 = FUN_1409f3dd0(local_68,local_c8);
  cVar2 = (**(code **)(lVar1 + 0x1738))(param_1,uVar3);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerAddGearToInventoryFromSelectedInfo_Validate");
  }
  else {
    lVar1 = *param_1;
    uVar3 = FUN_1409f3dd0(local_68,local_c8);
    (**(code **)(lVar1 + 0x1740))(param_1,uVar3);
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (local_a8);
  return;
}



// FUNCTION 141467f20 FUN_141467f20 body=252 status=ok
// SIG undefined FUN_141467f20(void)

void FUN_141467f20(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
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
  cVar1 = (**(code **)(*param_1 + 0x1110))(param_1,local_res10[0],local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerApplyCitizenScienceBooster_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1118))(param_1,local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 141468020 FUN_141468020 body=252 status=ok
// SIG undefined FUN_141468020(void)

void FUN_141468020(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
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
  cVar1 = (**(code **)(*param_1 + 0x10f0))(param_1,local_res10[0],local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerApplyPrimaryStreamerBooster_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x10f8))(param_1,local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 141468120 FUN_141468120 body=252 status=ok
// SIG undefined FUN_141468120(void)

void FUN_141468120(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
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
  cVar1 = (**(code **)(*param_1 + 0x10e0))(param_1,local_res10[0],local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerApplySecondaryStreamerBooster_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x10e8))(param_1,local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 141468220 FUN_141468220 body=182 status=ok
// SIG undefined FUN_141468220(void)

void FUN_141468220(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x1308))(param_1,bVar2);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerClearCurrentAIO_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x1310))(param_1,bVar2);
  }
  return;
}



// FUNCTION 1414682e0 FUN_1414682e0 body=440 status=ok
// SIG undefined FUN_1414682e0(void)

void FUN_1414682e0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 local_res8;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined **local_48;
  undefined8 local_40;
  longlong *plStack_38;
  longlong local_30;
  undefined8 local_28;
  
  local_48 = &PTR_FUN_143f740c8;
  local_30 = 0;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_28 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
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
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_68 = local_78;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_60 = local_70;
  cVar6 = (**(code **)(*param_1 + 0x1298))(param_1,&local_48,local_res8,&local_68);
  if (cVar6 == '\0') {
    RPC_ValidateFailed(L"ServerCreatePlayerAlert_Validate");
  }
  else {
    local_50 = local_70;
    local_58 = local_78;
    (**(code **)(*param_1 + 0x12a0))(param_1,&local_48,local_res8,&local_58);
  }
  local_48 = &PTR_FUN_143f740c8;
  if (local_30 != 0) {
    FMemory::Free();
  }
  plVar5 = plStack_38;
  local_48 = &PTR_FUN_143f73d18;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_38)(plStack_38);
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



// FUNCTION 1414684a0 FUN_1414684a0 body=187 status=ok
// SIG undefined FUN_1414684a0(void)

void FUN_1414684a0(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x16b0))(param_1,local_18);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerCreatedPresenceSession_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x16b8))(param_1,local_18);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141468560 FUN_141468560 body=78 status=ok
// SIG undefined FUN_141468560(void)

void FUN_141468560(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x1590))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerDumpPlayerDebugInfo_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001414685a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1598))(param_1);
  return;
}



// FUNCTION 1414685b0 FUN_1414685b0 body=376 status=ok
// SIG undefined FUN_1414685b0(void)

void FUN_1414685b0(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong local_c8 [2];
  undefined4 local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined **local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined **local_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_a8 = 0;
  lStack_a0 = 0;
  local_b0 = &PTR_FUN_143f740c8;
  local_98 = 0;
  local_90 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FString::FString(local_88,local_c8);
  local_78 = local_b8;
  local_68 = local_a8;
  local_60 = lStack_a0;
  if (lStack_a0 != 0) {
    LOCK();
    *(int *)(lStack_a0 + 8) = *(int *)(lStack_a0 + 8) + 1;
    UNLOCK();
  }
  local_70 = &PTR_FUN_143f740c8;
  local_58 = 0;
  local_50 = 0;
  cVar1 = (**(code **)(*param_1 + 0x1720))(param_1,local_88);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerGearSoldByFriendDataSelected_Validate");
  }
  else {
    FString::FString(local_48,local_c8);
    local_38 = local_b8;
    local_28 = local_a8;
    local_20 = lStack_a0;
    if (lStack_a0 != 0) {
      LOCK();
      *(int *)(lStack_a0 + 8) = *(int *)(lStack_a0 + 8) + 1;
      UNLOCK();
    }
    local_30 = &PTR_FUN_143f740c8;
    local_18 = 0;
    local_10 = 0;
    (**(code **)(*param_1 + 0x1728))(param_1,local_48);
  }
  FUN_1404bf980(&local_b0);
  if (local_c8[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141468730 FUN_141468730 body=78 status=ok
// SIG undefined FUN_141468730(void)

void FUN_141468730(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x1318))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerHintPlayerForNextDialog_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141468777. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1320))(param_1);
  return;
}



// FUNCTION 141468780 FUN_141468780 body=248 status=ok
// SIG undefined FUN_141468780(void)

void FUN_141468780(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
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
  cVar1 = (**(code **)(*param_1 + 0x1120))(param_1,local_res10,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerIncrementGameStat_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1128))(param_1,local_res10,local_res8[0]);
  return;
}



// FUNCTION 141468880 FUN_141468880 body=181 status=ok
// SIG undefined FUN_141468880(void)

void FUN_141468880(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x1408))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerIncrementPhotoModeStylizeStat_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1410))(param_1,local_res8);
  return;
}



// FUNCTION 141468940 FUN_141468940 body=181 status=ok
// SIG undefined FUN_141468940(void)

void FUN_141468940(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x13f8))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerIncrementSendMailStat_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1400))(param_1,local_res8);
  return;
}



// FUNCTION 141468a00 FUN_141468a00 body=292 status=ok
// SIG undefined FUN_141468a00(void)

void FUN_141468a00(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
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
  cVar1 = (**(code **)(*param_1 + 0x1568))(param_1,local_res20,local_res10[0],local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerInitializeLostLootMachine_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1570))(param_1,local_res20,local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 141468b30 FUN_141468b30 body=166 status=ok
// SIG undefined FUN_141468b30(void)

void FUN_141468b30(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  
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
  cVar1 = (**(code **)(*param_1 + 0x1768))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerInterruptTravelToStation_Validate");
    return;
  }
  (**(code **)(*param_1 + 6000))(param_1,local_res8[0]);
  return;
}



// FUNCTION 141468be0 FUN_141468be0 body=187 status=ok
// SIG undefined FUN_141468be0(void)

void FUN_141468be0(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x16a0))(param_1,local_18);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerJoinedPresenceSession_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x16a8))(param_1,local_18);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141468ca0 FUN_141468ca0 body=78 status=ok
// SIG undefined FUN_141468ca0(void)

void FUN_141468ca0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x1538))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerLostLootChanged_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141468ce7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1540))(param_1);
  return;
}



// FUNCTION 141468cf0 execServerWorldResetComplete body=78 status=ok
// SIG undefined execServerWorldResetComplete(void)

void ARemnantPlayerController::execServerWorldResetComplete(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x1270))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerNotifyLoadingMoviesHidden_ForSonyRTMP_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141468d37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1278))(param_1);
  return;
}



// FUNCTION 141468d40 FUN_141468d40 body=78 status=ok
// SIG undefined FUN_141468d40(void)

void FUN_141468d40(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x1280))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerNotifyLoadingMoviesShown_ForSonyRTMP_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141468d87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1288))(param_1);
  return;
}



// FUNCTION 141468d90 FUN_141468d90 body=245 status=ok
// SIG undefined FUN_141468d90(void)

void FUN_141468d90(longlong *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  int local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
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
  cVar1 = (**(code **)(*param_1 + 0x11b8))(param_1,local_res10,bVar2);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerNotifyTrackedEchoLogPlaybackState_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x11c0))(param_1,local_res10,bVar2);
  return;
}



// FUNCTION 141468e90 FUN_141468e90 body=249 status=ok
// SIG undefined FUN_141468e90(void)

void FUN_141468e90(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x15e8))(param_1,local_res10,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerOnPlanetSelected_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x15f0))(param_1,local_res10,local_res8);
  return;
}



// FUNCTION 141468f90 execCheat_ServerShutdown body=78 status=ok
// SIG undefined execCheat_ServerShutdown(void)

void AGPlayerController::execCheat_ServerShutdown(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x12d0))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerOnUIMenuActivated_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141468fd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x12d8))(param_1);
  return;
}



// FUNCTION 141468fe0 FUN_141468fe0 body=294 status=ok
// SIG undefined FUN_141468fe0(void)

void FUN_141468fe0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_res8;
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
  cVar1 = (**(code **)(*param_1 + 0x1658))(param_1,local_res20,local_res10[0],local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerPlaceChosenObject_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1660))(param_1,local_res20,local_res10[0],local_res8);
  return;
}



// FUNCTION 141469110 FUN_141469110 body=78 status=ok
// SIG undefined FUN_141469110(void)

void FUN_141469110(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x1338))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerPlayIdleDialog_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141469157. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1340))(param_1);
  return;
}



// FUNCTION 141469160 FUN_141469160 body=181 status=ok
// SIG undefined FUN_141469160(void)

void FUN_141469160(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x1328))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerPlayIdleDialogInMenu_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1330))(param_1,local_res8);
  return;
}



// FUNCTION 141469220 FUN_141469220 body=181 status=ok
// SIG undefined FUN_141469220(void)

void FUN_141469220(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x1498))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerPlayItemCallout_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x14a0))(param_1,local_res8);
  return;
}



// FUNCTION 1414692e0 FUN_1414692e0 body=78 status=ok
// SIG undefined FUN_1414692e0(void)

void FUN_1414692e0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x1700))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerPlayerOpenedCharacterSelect_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141469327. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1708))(param_1);
  return;
}



// FUNCTION 141469330 FUN_141469330 body=286 status=ok
// SIG undefined FUN_141469330(void)

void FUN_141469330(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined **local_38;
  undefined8 local_30;
  longlong *plStack_28;
  longlong local_20;
  undefined8 local_18;
  
  local_38 = &PTR_FUN_143f740c8;
  local_20 = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar6 = (**(code **)(*param_1 + 0x16e8))(param_1,&local_38);
  if (cVar6 == '\0') {
    RPC_ValidateFailed(L"ServerPlayerSelectedCharacter_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x16f0))(param_1,&local_38);
  }
  local_38 = &PTR_FUN_143f740c8;
  if (local_20 != 0) {
    FMemory::Free();
  }
  plVar5 = plStack_28;
  local_38 = &PTR_FUN_143f73d18;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_28)(plStack_28);
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



// FUNCTION 141469450 FUN_141469450 body=338 status=ok
// SIG undefined FUN_141469450(void)

void FUN_141469450(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  undefined1 local_c8 [32];
  undefined1 local_a8 [24];
  longlong local_90;
  longlong local_80;
  undefined2 local_70;
  undefined1 local_68 [96];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  _guard_xfg_dispatch_icall_nop(local_c8,0,0x60);
  local_70 = 1;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = *param_1;
  uVar3 = FUN_1409f3dd0(local_68,local_c8);
  cVar2 = (**(code **)(lVar1 + 0x1148))(param_1,local_res8[0],uVar3);
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerProcessVaultCardChestReward_Validate");
  }
  else {
    lVar1 = *param_1;
    uVar3 = FUN_1409f3dd0(local_68,local_c8);
    (**(code **)(lVar1 + 0x1150))(param_1,local_res8[0],uVar3);
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (local_a8);
  return;
}



// FUNCTION 1414695b0 FUN_1414695b0 body=309 status=ok
// SIG undefined FUN_1414695b0(void)

void FUN_1414695b0(longlong *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  int local_res20 [2];
  
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
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar2 = local_res20[0] != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x1160))(param_1,local_res10[0],local_res8[0],bVar2);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerRedeemVaultCardGearReward_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1168))(param_1,local_res10[0],local_res8[0],bVar2);
  return;
}



// FUNCTION 1414696f0 FUN_1414696f0 body=178 status=ok
// SIG undefined FUN_1414696f0(void)

void FUN_1414696f0(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x1100))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerRemoveCitizenScienceBooster_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1108))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1414697b0 FUN_1414697b0 body=178 status=ok
// SIG undefined FUN_1414697b0(void)

void FUN_1414697b0(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x10d0))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerRemovePrimaryStreamerBooster_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x10d8))(param_1,local_res8[0]);
  return;
}



// FUNCTION 141469870 FUN_141469870 body=178 status=ok
// SIG undefined FUN_141469870(void)

void FUN_141469870(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x10c0))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerRemoveSecondaryStreamerBooster_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x10c8))(param_1,local_res8[0]);
  return;
}



// FUNCTION 141469930 FUN_141469930 body=181 status=ok
// SIG undefined FUN_141469930(void)

void FUN_141469930(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x1378))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerRequestActivateCustomPOI_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1380))(param_1,local_res8);
  return;
}



// FUNCTION 1414699f0 FUN_1414699f0 body=245 status=ok
// SIG undefined FUN_1414699f0(void)

void FUN_1414699f0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
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
  cVar1 = (**(code **)(*param_1 + 0x1368))(param_1,local_res10[0],local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerRequestMayhemReload_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1370))(param_1,local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 141469af0 FUN_141469af0 body=181 status=ok
// SIG undefined FUN_141469af0(void)

void FUN_141469af0(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x14c8))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerRequestSwitchSeats_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x14d0))(param_1,local_res8);
  return;
}



// FUNCTION 141469bb0 FUN_141469bb0 body=182 status=ok
// SIG undefined FUN_141469bb0(void)

void FUN_141469bb0(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x14d8))(param_1,bVar2);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerRotateRaidSpectatorTarget_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x14e0))(param_1,bVar2);
  }
  return;
}



// FUNCTION 141469c70 FUN_141469c70 body=181 status=ok
// SIG undefined FUN_141469c70(void)

void FUN_141469c70(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x1450))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSendTradeOfferToPlayer_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1458))(param_1,local_res8);
  return;
}



// FUNCTION 141469d30 FUN_141469d30 body=178 status=ok
// SIG undefined FUN_141469d30(void)

void FUN_141469d30(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x1170))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetActiveVaultCardID_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1178))(param_1,local_res8[0]);
  return;
}



// FUNCTION 141469df0 FUN_141469df0 body=166 status=ok
// SIG undefined FUN_141469df0(void)

void FUN_141469df0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  
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
  cVar1 = (**(code **)(*param_1 + 0x1478))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetAutosellRaritySetting_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1480))(param_1,local_res8[0]);
  return;
}



// FUNCTION 141469ea0 FUN_141469ea0 body=182 status=ok
// SIG undefined FUN_141469ea0(void)

void FUN_141469ea0(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x15b0))(param_1,bVar2);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetBulletMagnetismSettings_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x15b8))(param_1,bVar2);
  }
  return;
}



// FUNCTION 141469f60 FUN_141469f60 body=249 status=ok
// SIG undefined FUN_141469f60(void)

void FUN_141469f60(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x1640))(param_1,local_res10,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetCrewQuartersRoomMood_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1648))(param_1,local_res10,local_res8);
  return;
}



// FUNCTION 14146a060 FUN_14146a060 body=166 status=ok
// SIG undefined FUN_14146a060(void)

void FUN_14146a060(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  
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
  cVar1 = (**(code **)(*param_1 + 0x1488))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetDifficultySetting_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1490))(param_1,local_res8[0]);
  return;
}



// FUNCTION 14146a110 FUN_14146a110 body=182 status=ok
// SIG undefined FUN_14146a110(void)

void FUN_14146a110(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x14b8))(param_1,bVar2);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetDuelingEnabled_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x14c0))(param_1,bVar2);
  }
  return;
}



// FUNCTION 14146a1d0 FUN_14146a1d0 body=182 status=ok
// SIG undefined FUN_14146a1d0(void)

void FUN_14146a1d0(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x15a0))(param_1,bVar2);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetFullyAimingAtTarget_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x15a8))(param_1,bVar2);
  }
  return;
}



// FUNCTION 14146a290 FUN_14146a290 body=166 status=ok
// SIG undefined FUN_14146a290(void)

void FUN_14146a290(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  
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
  cVar1 = (**(code **)(*param_1 + 0x1198))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetLateJoinState_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x11a0))(param_1,local_res8[0]);
  return;
}



// FUNCTION 14146a340 FUN_14146a340 body=178 status=ok
// SIG undefined FUN_14146a340(void)

void FUN_14146a340(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x1688))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetMaxSpawnCost_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1690))(param_1,local_res8[0]);
  return;
}



// FUNCTION 14146a400 FUN_14146a400 body=78 status=ok
// SIG undefined FUN_14146a400(void)

void FUN_14146a400(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x11a8))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetReadyForGameStatChannel_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014146a447. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x11b0))(param_1);
  return;
}



// FUNCTION 14146a450 FUN_14146a450 body=78 status=ok
// SIG undefined FUN_14146a450(void)

void FUN_14146a450(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x15d8))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetReadyForSaveGameChannel_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014146a497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x15e0))(param_1);
  return;
}



// FUNCTION 14146a4a0 FUN_14146a4a0 body=182 status=ok
// SIG undefined FUN_14146a4a0(void)

void FUN_14146a4a0(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x13a8))(param_1,bVar2);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetRemoteCameraInfo_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x13b0))(param_1,bVar2);
  }
  return;
}



// FUNCTION 14146a560 FUN_14146a560 body=161 status=ok
// SIG undefined FUN_14146a560(void)

void FUN_14146a560(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_res8;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x13b8))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetRemoteCrosshairPosition_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x13c0))(param_1,local_res8);
  return;
}



// FUNCTION 14146a610 FUN_14146a610 body=172 status=ok
// SIG undefined FUN_14146a610(void)

void FUN_14146a610(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x13c8))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetRemoteDefaultFOV_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x13d0))(param_1,local_res8[0]);
  return;
}



// FUNCTION 14146a6c0 FUN_14146a6c0 body=245 status=ok
// SIG undefined FUN_14146a6c0(void)

void FUN_14146a6c0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
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
  cVar1 = (**(code **)(*param_1 + 0x13d8))(param_1,local_res10[0],local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetRemoteViewportInfo_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x13e0))(param_1,local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 14146a7c0 FUN_14146a7c0 body=166 status=ok
// SIG undefined FUN_14146a7c0(void)

void FUN_14146a7c0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  
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
  cVar1 = (**(code **)(*param_1 + 0x14a8))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetTradeRequestReceptionType_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x14b0))(param_1,local_res8[0]);
  return;
}



// FUNCTION 14146a870 FUN_14146a870 body=182 status=ok
// SIG undefined FUN_14146a870(void)

void FUN_14146a870(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x1580))(param_1,bVar2);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetWaitingForSaveGameInitialization_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x1588))(param_1,bVar2);
  }
  return;
}



// FUNCTION 14146a930 FUN_14146a930 body=351 status=ok
// SIG undefined FUN_14146a930(void)

void FUN_14146a930(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong local_78 [4];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  local_78[0] = 0;
  local_78[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_58 = 0;
  uStack_50 = CONCAT31(uStack_50._1_3_,1);
  local_78[2] = 0;
  local_78[3] = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_40 = CONCAT31(local_40._1_3_,1);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 2);
  }
  local_38 = local_78[2];
  uStack_30 = local_78[3];
  local_18 = CONCAT44(uStack_44,uStack_48);
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_40;
  local_28 = (undefined4)local_58;
  uStack_24 = local_58._4_4_;
  uStack_20 = uStack_50;
  uStack_1c = uStack_4c;
  cVar1 = (**(code **)(*param_1 + 0x1550))(param_1,local_78,&local_38);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSpawnLostLoot_Validate");
  }
  else {
    local_10 = local_40;
    local_38 = local_78[2];
    uStack_30 = local_78[3];
    local_18 = CONCAT44(uStack_44,uStack_48);
    local_28 = (undefined4)local_58;
    uStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = uStack_4c;
    (**(code **)(*param_1 + 0x1558))(param_1,local_78,&local_38);
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14146aa90 FUN_14146aa90 body=181 status=ok
// SIG undefined FUN_14146aa90(void)

void FUN_14146aa90(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x1520))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSwitchPlayerClass_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1528))(param_1,local_res8);
  return;
}



// FUNCTION 14146ab50 FUN_14146ab50 body=248 status=ok
// SIG undefined FUN_14146ab50(void)

void FUN_14146ab50(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
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
  cVar1 = (**(code **)(*param_1 + 0x1188))(param_1,local_res10,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerUpdatePremiumCurrency_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1190))(param_1,local_res10,local_res8[0]);
  return;
}



// FUNCTION 14146ac50 execOnControllerConnectionChanged body=192 status=ok
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
  FUN_140d12d00(param_1,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 14146ad10 FUN_14146ad10 body=191 status=ok
// SIG undefined FUN_14146ad10(void)

void FUN_14146ad10(undefined8 param_1,longlong param_2)

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
  FUN_140d12e50(param_1,bVar1,local_res20);
  return;
}



// FUNCTION 14146add0 FUN_14146add0 body=130 status=ok
// SIG undefined FUN_14146add0(void)

void FUN_14146add0(undefined8 param_1,longlong param_2)

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
  FUN_140d12eb0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 14146ae60 FUN_14146ae60 body=128 status=ok
// SIG undefined FUN_14146ae60(void)

void FUN_14146ae60(undefined8 param_1,longlong param_2)

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
  FUN_140d13010(param_1,local_res10);
  return;
}



// FUNCTION 14146aee0 FUN_14146aee0 body=128 status=ok
// SIG undefined FUN_14146aee0(void)

void FUN_14146aee0(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x1910) = local_res8[0] != 0;
  return;
}



// FUNCTION 14146af60 FUN_14146af60 body=191 status=ok
// SIG undefined FUN_14146af60(void)

void FUN_14146af60(undefined8 param_1,longlong param_2)

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
  FUN_140d134c0(param_1,bVar1,local_res20);
  return;
}



// FUNCTION 14146b020 FUN_14146b020 body=191 status=ok
// SIG undefined FUN_14146b020(void)

void FUN_14146b020(undefined8 param_1,longlong param_2)

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
  FUN_140d13500(param_1,bVar1,local_res20);
  return;
}



// FUNCTION 14146b0e0 FUN_14146b0e0 body=178 status=ok
// SIG undefined FUN_14146b0e0(void)

void FUN_14146b0e0(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x11c8))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"SetMoxxiEventTier_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x11d0))(param_1,local_res8[0]);
  return;
}



// FUNCTION 14146b1a0 FUN_14146b1a0 body=191 status=ok
// SIG undefined FUN_14146b1a0(void)

void FUN_14146b1a0(undefined8 param_1,longlong param_2)

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
  FUN_140d13830(param_1,bVar1,local_res20);
  return;
}



// FUNCTION 14146b260 FUN_14146b260 body=130 status=ok
// SIG undefined FUN_14146b260(void)

void FUN_14146b260(undefined8 param_1,longlong param_2)

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
  FUN_140d13f50(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 14146b2f0 FUN_14146b2f0 body=181 status=ok
// SIG undefined FUN_14146b2f0(void)

void FUN_14146b2f0(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x10b0))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"SetReRollSourceInventory_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x10b8))(param_1,local_res8);
  return;
}



// FUNCTION 14146b3d0 FUN_14146b3d0 body=43 status=ok
// SIG undefined FUN_14146b3d0(void)

void FUN_14146b3d0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140d14f90();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14146b400 FUN_14146b400 body=373 status=ok
// SIG undefined FUN_14146b400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14146b400(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
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
  local_28 = _DAT_1468964e0 & _DAT_1468964f0;
  uStack_24 = uRam00000001468964e4 & uRam00000001468964f4;
  uStack_20 = uRam00000001468964e8 & uRam00000001468964f8;
  uStack_1c = uRam00000001468964ec & uRam00000001468964fc;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam00000001468964ec;
  local_38 = 0;
  uStack_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x11d8))(param_1,local_50,local_58,&local_48);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"SpawnCustomReplicatedActor_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x11e0))(param_1,local_50,local_58,&local_48);
  }
  return;
}



// FUNCTION 14146b580 FUN_14146b580 body=181 status=ok
// SIG undefined FUN_14146b580(void)

void FUN_14146b580(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x1210))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"SpawnMissionVehicle_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x1218))(param_1,local_res8);
  return;
}



// FUNCTION 14146b640 FUN_14146b640 body=573 status=ok
// SIG undefined FUN_14146b640(void)

void FUN_14146b640(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [3];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_30[0] = 0;
  local_30[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
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
  cVar1 = (**(code **)(*param_1 + 0x11f8))
                    (param_1,local_res8[0],local_38,local_30,local_40,local_48[0],local_res20[0],
                     local_res10[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"SpawnVehicle_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x1200))
              (param_1,local_res8[0],local_38,local_30,local_40,local_48[0],local_res20[0],
               local_res10[0]);
  }
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14146b880 FUN_14146b880 body=586 status=ok
// SIG undefined FUN_14146b880(void)

void FUN_14146b880(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined8 local_350;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined1 local_300 [40];
  undefined1 local_2d8 [40];
  undefined1 local_2b0 [40];
  undefined1 local_288 [40];
  undefined1 local_260 [40];
  undefined1 local_238 [40];
  undefined1 local_210 [40];
  undefined1 local_1e8 [40];
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined1 local_1a8 [16];
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined8 local_188;
  undefined1 local_180 [16];
  undefined1 local_170 [40];
  undefined1 local_148 [40];
  undefined1 local_120 [40];
  undefined1 local_f8 [40];
  undefined1 local_d0 [40];
  undefined1 local_a8 [40];
  undefined1 local_80 [40];
  undefined1 local_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  FUN_140ac6910(local_1a8);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_1a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_1a8);
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
  FString::FString(local_338,local_1a8);
  local_310 = 0;
  local_318 = 0;
  local_328 = local_198;
  local_324 = local_194;
  local_320 = local_190;
  local_350 = local_188;
  local_308 = 0;
  FString::FString(local_348,local_180);
  FSoftObjectPath::operator=(&local_318,&local_350);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_300,local_170);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_2d8,local_148);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_2b0,local_120);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_288,local_f8);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_260,local_d0);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_238,local_a8);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_210,local_80);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_1e8,local_58);
  local_1c0 = local_30;
  local_1bc = local_2c;
  local_1b8 = local_28;
  FUN_140d16280(param_1,local_res10[0],local_338,local_res20);
  FUN_140ac7ce0(local_1a8);
  return;
}



// FUNCTION 14146bad0 FUN_14146bad0 body=44 status=ok
// SIG undefined FUN_14146bad0(void)

void FUN_14146bad0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140d16430();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14146bb00 execOnGearSubValueChanged body=252 status=ok
// SIG undefined execOnGearSubValueChanged(void)

void UUGHUDGearBarUW::execOnGearSubValueChanged(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
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
  FUN_140d168a0(param_1,local_18[0],local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 14146bc00 FUN_14146bc00 body=152 status=ok
// SIG undefined FUN_14146bc00(void)

void FUN_14146bc00(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x1788))(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14146bcc0 FUN_14146bcc0 body=575 status=ok
// SIG undefined FUN_14146bcc0(void)

void FUN_14146bcc0(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_res8;
  undefined4 local_98 [2];
  undefined8 local_90;
  longlong lStack_88;
  ulonglong local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  longlong lStack_68;
  ulonglong local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38 [2];
  undefined8 local_30;
  longlong local_28;
  int local_20;
  undefined4 local_1c;
  
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  local_78[0] = 0;
  local_60 = 0;
  local_70 = 0;
  lStack_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_98[0] = 0;
  local_80 = 0;
  local_90 = 0;
  lStack_88 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  lVar4 = lStack_88;
  iVar3 = (int)local_80;
  local_48 = 0;
  local_40 = (int)local_80;
  local_58[0] = local_98[0];
  local_50 = local_90;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if ((int)local_80 == 0) {
    local_3c = 0;
  }
  else {
    TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(&local_48,local_80 & 0xffffffff,0);
    lVar2 = local_48 + 0x20;
    lVar4 = lVar4 + 0x20;
    do {
      FString::FString(lVar2 + -0x20,lVar4 + -0x20);
      FString::FString(lVar2 + -0x10,lVar4 + -0x10);
      FText::FText(lVar2,lVar4);
      puVar1 = (undefined4 *)(lVar4 + 0x18);
      lVar4 = lVar4 + 0x40;
      *(undefined4 *)(lVar2 + 0x18) = *puVar1;
      lVar2 = lVar2 + 0x40;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  lVar4 = lStack_68;
  iVar3 = (int)local_60;
  local_38[0] = local_78[0];
  local_30 = local_70;
  local_28 = 0;
  local_20 = (int)local_60;
  if ((int)local_60 == 0) {
    local_1c = 0;
  }
  else {
    TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(&local_28,local_60 & 0xffffffff,0);
    lVar2 = local_28 + 0x20;
    lVar4 = lVar4 + 0x20;
    do {
      FString::FString(lVar2 + -0x20,lVar4 + -0x20);
      FString::FString(lVar2 + -0x10,lVar4 + -0x10);
      FText::FText(lVar2,lVar4);
      puVar1 = (undefined4 *)(lVar4 + 0x18);
      lVar4 = lVar4 + 0x40;
      *(undefined4 *)(lVar2 + 0x18) = *puVar1;
      lVar2 = lVar2 + 0x40;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(*param_1 + 0x14e8))(param_1,local_res8,local_38,local_58);
  FUN_140ce1790(&lStack_88);
  FUN_140ce1790(&lStack_68);
  return;
}



// FUNCTION 14146bf40 execCheat_ServerWipeQuests body=78 status=ok
// SIG undefined execCheat_ServerWipeQuests(void)

void AGPlayerController::execCheat_ServerWipeQuests(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x1220))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"UnlockAllVehiclesAndParts_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014146bf87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1228))(param_1);
  return;
}



// FUNCTION 14146bf90 FUN_14146bf90 body=128 status=ok
// SIG undefined FUN_14146bf90(void)

void FUN_14146bf90(undefined8 param_1,longlong param_2)

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
  FUN_140d19500(param_1,local_res10);
  return;
}



// FUNCTION 14146c060 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UParticleModuleTypeDataBeam2::GetPrivateStaticClass(void)

{
  if (DAT_146897e30 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakPlayerTeleportData",&DAT_146897e30,FUN_140447710,0x168,
                  0x10000000,0,L"Engine",FUN_14146cc70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146897e30;
}



// FUNCTION 14146c130 FUN_14146c130 body=162 status=ok
// SIG undefined FUN_14146c130(void)

longlong FUN_14146c130(void)

{
  if (DAT_146897d88 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakPlayerMissionComponent",&DAT_146897d88,FUN_14146db90,0x208
                  ,0x10000000,0,L"Engine",&LAB_14146cc50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14146db50,&LAB_140447700,0);
  }
  return DAT_146897d88;
}



// FUNCTION 14146c1e0 FUN_14146c1e0 body=47 status=ok
// SIG undefined FUN_14146c1e0(void)

longlong FUN_14146c1e0(void)

{
  if (DAT_146897d80 == 0) {
    FUN_141786440(&DAT_146897d80,&PTR_FUN_144af32d0);
  }
  return DAT_146897d80;
}



// FUNCTION 14146c210 FUN_14146c210 body=47 status=ok
// SIG undefined FUN_14146c210(void)

longlong FUN_14146c210(void)

{
  if (DAT_146897d10 == 0) {
    FUN_141786a30(&DAT_146897d10,&PTR_FUN_1464092e0);
  }
  return DAT_146897d10;
}



// FUNCTION 14146c240 FUN_14146c240 body=47 status=ok
// SIG undefined FUN_14146c240(void)

longlong FUN_14146c240(void)

{
  if (DAT_146897d18 == 0) {
    FUN_141786a30(&DAT_146897d18,&PTR_FUN_146409370);
  }
  return DAT_146897d18;
}



// FUNCTION 14146c270 FUN_14146c270 body=47 status=ok
// SIG undefined FUN_14146c270(void)

longlong FUN_14146c270(void)

{
  if (DAT_146897d20 == 0) {
    FUN_141786a30(&DAT_146897d20,&PTR_FUN_1464093f0);
  }
  return DAT_146897d20;
}



// FUNCTION 14146c2a0 FUN_14146c2a0 body=47 status=ok
// SIG undefined FUN_14146c2a0(void)

longlong FUN_14146c2a0(void)

{
  if (DAT_146897d28 == 0) {
    FUN_141786a30(&DAT_146897d28,&PTR_FUN_1464094b0);
  }
  return DAT_146897d28;
}



// FUNCTION 14146c2d0 FUN_14146c2d0 body=47 status=ok
// SIG undefined FUN_14146c2d0(void)

longlong FUN_14146c2d0(void)

{
  if (DAT_146897d30 == 0) {
    FUN_141786a30(&DAT_146897d30,&PTR_FUN_1464095b0);
  }
  return DAT_146897d30;
}



// FUNCTION 14146c300 FUN_14146c300 body=47 status=ok
// SIG undefined FUN_14146c300(void)

longlong FUN_14146c300(void)

{
  if (DAT_146897d38 == 0) {
    FUN_141786a30(&DAT_146897d38,&PTR_FUN_146409710);
  }
  return DAT_146897d38;
}



// FUNCTION 14146c330 FUN_14146c330 body=47 status=ok
// SIG undefined FUN_14146c330(void)

longlong FUN_14146c330(void)

{
  if (DAT_146897d40 == 0) {
    FUN_141786a30(&DAT_146897d40,&PTR_FUN_146409750);
  }
  return DAT_146897d40;
}



// FUNCTION 14146c360 FUN_14146c360 body=47 status=ok
// SIG undefined FUN_14146c360(void)

longlong FUN_14146c360(void)

{
  if (DAT_146897d48 == 0) {
    FUN_141786a30(&DAT_146897d48,&PTR_FUN_146409810);
  }
  return DAT_146897d48;
}



// FUNCTION 14146c390 FUN_14146c390 body=47 status=ok
// SIG undefined FUN_14146c390(void)

longlong FUN_14146c390(void)

{
  if (DAT_146897d50 == 0) {
    FUN_141786a30(&DAT_146897d50,&PTR_FUN_1464098d0);
  }
  return DAT_146897d50;
}



// FUNCTION 14146c3c0 FUN_14146c3c0 body=47 status=ok
// SIG undefined FUN_14146c3c0(void)

longlong FUN_14146c3c0(void)

{
  if (DAT_146897d58 == 0) {
    FUN_141786a30(&DAT_146897d58,&PTR_FUN_146409960);
  }
  return DAT_146897d58;
}



// FUNCTION 14146c3f0 FUN_14146c3f0 body=47 status=ok
// SIG undefined FUN_14146c3f0(void)

longlong FUN_14146c3f0(void)

{
  if (DAT_146897d60 == 0) {
    FUN_141786a30(&DAT_146897d60,&PTR_FUN_1464099f0);
  }
  return DAT_146897d60;
}



// FUNCTION 14146c420 FUN_14146c420 body=47 status=ok
// SIG undefined FUN_14146c420(void)

longlong FUN_14146c420(void)

{
  if (DAT_146897d68 == 0) {
    FUN_141786a30(&DAT_146897d68,&PTR_FUN_146409ac0);
  }
  return DAT_146897d68;
}



// FUNCTION 14146c450 FUN_14146c450 body=47 status=ok
// SIG undefined FUN_14146c450(void)

longlong FUN_14146c450(void)

{
  if (DAT_146897d70 == 0) {
    FUN_141786a30(&DAT_146897d70,&PTR_FUN_146409be0);
  }
  return DAT_146897d70;
}



// FUNCTION 14146c480 FUN_14146c480 body=47 status=ok
// SIG undefined FUN_14146c480(void)

longlong FUN_14146c480(void)

{
  if (DAT_146897d78 == 0) {
    FUN_141786a30(&DAT_146897d78,&PTR_FUN_146409c20);
  }
  return DAT_146897d78;
}



// FUNCTION 14146c4b0 FUN_14146c4b0 body=53 status=ok
// SIG undefined FUN_14146c4b0(void)

void FUN_14146c4b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144afba30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14146c4f0 FUN_14146c4f0 body=53 status=ok
// SIG undefined FUN_14146c4f0(void)

void FUN_14146c4f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144afc258;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14146c530 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ANavVolume::GetPrivateStaticClass(void)

{
  if (DAT_146897e88 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakProfile",&DAT_146897e88,FUN_140447710,0x550,0x10000006,0,
                  L"Game",&LAB_14146cd40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14146db40,&LAB_140447700,0);
  }
  return DAT_146897e88;
}



// FUNCTION 14146c5e0 FUN_14146c5e0 body=162 status=ok
// SIG undefined FUN_14146c5e0(void)

longlong FUN_14146c5e0(void)

{
  if (DAT_146897ce8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakPlayerInput",&DAT_146897ce8,FUN_140447710,0x428,0x1000000c
                  ,0,L"Input",&LAB_14146cc40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140681420,thunk_FUN_1429e18b0,0);
  }
  return DAT_146897ce8;
}



// FUNCTION 14146c6a0 FUN_14146c6a0 body=53 status=ok
// SIG undefined FUN_14146c6a0(void)

void FUN_14146c6a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144afbc30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14146c700 FUN_14146c700 body=47 status=ok
// SIG undefined FUN_14146c700(void)

longlong FUN_14146c700(void)

{
  if (DAT_146897e18 == 0) {
    FUN_141786440(&DAT_146897e18,&PTR_GetPrivateStaticClass_144af0c40);
  }
  return DAT_146897e18;
}



// FUNCTION 14146c730 FUN_14146c730 body=47 status=ok
// SIG undefined FUN_14146c730(void)

longlong FUN_14146c730(void)

{
  if (DAT_146897da0 == 0) {
    FUN_141786a30(&DAT_146897da0,&PTR_FUN_146409fe0);
  }
  return DAT_146897da0;
}



// FUNCTION 14146c760 FUN_14146c760 body=47 status=ok
// SIG undefined FUN_14146c760(void)

longlong FUN_14146c760(void)

{
  if (DAT_146897da8 == 0) {
    FUN_141786a30(&DAT_146897da8,&PTR_FUN_14640a060);
  }
  return DAT_146897da8;
}



// FUNCTION 14146c790 FUN_14146c790 body=47 status=ok
// SIG undefined FUN_14146c790(void)

longlong FUN_14146c790(void)

{
  if (DAT_146897db0 == 0) {
    FUN_141786a30(&DAT_146897db0,&PTR_FUN_14640a0e0);
  }
  return DAT_146897db0;
}



// FUNCTION 14146c7c0 FUN_14146c7c0 body=47 status=ok
// SIG undefined FUN_14146c7c0(void)

longlong FUN_14146c7c0(void)

{
  if (DAT_146897db8 == 0) {
    FUN_141786a30(&DAT_146897db8,&PTR_FUN_14640a120);
  }
  return DAT_146897db8;
}



// FUNCTION 14146c7f0 FUN_14146c7f0 body=47 status=ok
// SIG undefined FUN_14146c7f0(void)

longlong FUN_14146c7f0(void)

{
  if (DAT_146897dc0 == 0) {
    FUN_141786a30(&DAT_146897dc0,&PTR_FUN_14640a160);
  }
  return DAT_146897dc0;
}



// FUNCTION 14146c820 FUN_14146c820 body=47 status=ok
// SIG undefined FUN_14146c820(void)

longlong FUN_14146c820(void)

{
  if (DAT_146897dc8 == 0) {
    FUN_141786a30(&DAT_146897dc8,&PTR_FUN_14640a1a0);
  }
  return DAT_146897dc8;
}



// FUNCTION 14146c850 FUN_14146c850 body=47 status=ok
// SIG undefined FUN_14146c850(void)

longlong FUN_14146c850(void)

{
  if (DAT_146897dd0 == 0) {
    FUN_141786a30(&DAT_146897dd0,&PTR_FUN_14640a1e0);
  }
  return DAT_146897dd0;
}



// FUNCTION 14146c880 FUN_14146c880 body=47 status=ok
// SIG undefined FUN_14146c880(void)

longlong FUN_14146c880(void)

{
  if (DAT_146897dd8 == 0) {
    FUN_141786a30(&DAT_146897dd8,&PTR_FUN_14640a220);
  }
  return DAT_146897dd8;
}



// FUNCTION 14146c8b0 FUN_14146c8b0 body=47 status=ok
// SIG undefined FUN_14146c8b0(void)

longlong FUN_14146c8b0(void)

{
  if (DAT_146897de0 == 0) {
    FUN_141786a30(&DAT_146897de0,&PTR_FUN_14640a260);
  }
  return DAT_146897de0;
}



// FUNCTION 14146c8e0 FUN_14146c8e0 body=47 status=ok
// SIG undefined FUN_14146c8e0(void)

longlong FUN_14146c8e0(void)

{
  if (DAT_146897de8 == 0) {
    FUN_141786a30(&DAT_146897de8,&PTR_FUN_14640a2a0);
  }
  return DAT_146897de8;
}



// FUNCTION 14146c910 FUN_14146c910 body=47 status=ok
// SIG undefined FUN_14146c910(void)

longlong FUN_14146c910(void)

{
  if (DAT_146897df0 == 0) {
    FUN_141786a30(&DAT_146897df0,&PTR_FUN_14640a2e0);
  }
  return DAT_146897df0;
}



// FUNCTION 14146c940 FUN_14146c940 body=47 status=ok
// SIG undefined FUN_14146c940(void)

longlong FUN_14146c940(void)

{
  if (DAT_146897df8 == 0) {
    FUN_141786a30(&DAT_146897df8,&PTR_FUN_14640a3a0);
  }
  return DAT_146897df8;
}



// FUNCTION 14146c970 FUN_14146c970 body=47 status=ok
// SIG undefined FUN_14146c970(void)

longlong FUN_14146c970(void)

{
  if (DAT_146897e00 == 0) {
    FUN_141786a30(&DAT_146897e00,&PTR_FUN_14640a430);
  }
  return DAT_146897e00;
}



// FUNCTION 14146c9a0 FUN_14146c9a0 body=47 status=ok
// SIG undefined FUN_14146c9a0(void)

longlong FUN_14146c9a0(void)

{
  if (DAT_146897e08 == 0) {
    FUN_141786a30(&DAT_146897e08,&PTR_FUN_14640a4b0);
  }
  return DAT_146897e08;
}



// FUNCTION 14146c9d0 FUN_14146c9d0 body=47 status=ok
// SIG undefined FUN_14146c9d0(void)

longlong FUN_14146c9d0(void)

{
  if (DAT_146897e10 == 0) {
    FUN_141786a30(&DAT_146897e10,&PTR_FUN_14640a530);
  }
  return DAT_146897e10;
}



// FUNCTION 14146ca00 FUN_14146ca00 body=533 status=ok
// SIG undefined FUN_14146ca00(void)

void FUN_14146ca00(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int *_Dst;
  int *_Src;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  FUN_1405d95e0(param_1,param_3 + param_5,param_4);
  piVar7 = (int *)*param_1;
  if (param_3 != 0) {
    piVar6 = (int *)(param_2 + 0x28);
    piVar5 = piVar7 + 10;
    do {
      *piVar7 = piVar6[-10];
      piVar1 = piVar5 + -6;
      *(char *)(piVar5 + -9) = (char)piVar6[-9];
      piVar5[-8] = piVar6[-8];
      piVar5[-2] = 0;
      piVar5[-1] = 0;
      piVar5[0] = 0;
      piVar5[1] = 0;
      if (piVar1 != piVar6 + -6) {
        uVar4 = *piVar6 + 0x1f + (*piVar6 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
        if (uVar4 != 0) {
          piVar5[1] = uVar4;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(piVar1,0);
        }
        iVar2 = *piVar6;
        *piVar5 = iVar2;
        if (iVar2 != 0) {
          _Src = *(int **)(piVar6 + -2);
          if (*(int **)(piVar6 + -2) == (int *)0x0) {
            _Src = piVar6 + -6;
          }
          _Dst = *(int **)(piVar5 + -2);
          if (*(int **)(piVar5 + -2) == (int *)0x0) {
            _Dst = piVar1;
          }
          _guard_xfg_dispatch_icall_nop
                    (_Dst,_Src,
                     (longlong)((int)(piVar5[1] + 0x1f + (piVar5[1] + 0x1f >> 0x1f & 0x1fU)) >> 5)
                     << 2);
        }
      }
      piVar5[2] = 0;
      piVar5[3] = 0;
      iVar2 = piVar6[4];
      pvVar3 = *(void **)(piVar6 + 2);
      piVar5[4] = iVar2;
      if (iVar2 == 0) {
        piVar5[5] = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(piVar5 + 2,iVar2,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(piVar5 + 2),pvVar3,(longlong)iVar2);
      }
      piVar5[6] = 0;
      piVar5[7] = 0;
      iVar2 = piVar6[8];
      pvVar3 = *(void **)(piVar6 + 6);
      piVar5[8] = iVar2;
      if (iVar2 == 0) {
        piVar5[9] = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(piVar5 + 6,iVar2,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(piVar5 + 6),pvVar3,(longlong)iVar2 << 2);
      }
      piVar5[10] = 0;
      piVar5[0xb] = 0;
      iVar2 = piVar6[0xc];
      pvVar3 = *(void **)(piVar6 + 10);
      piVar5[0xc] = iVar2;
      if (iVar2 == 0) {
        piVar5[0xd] = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(piVar5 + 10,iVar2,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(piVar5 + 10),pvVar3,(longlong)iVar2 << 2);
      }
      piVar5[0xe] = 0;
      piVar5[0xf] = 0;
      iVar2 = piVar6[0x10];
      pvVar3 = *(void **)(piVar6 + 0xe);
      piVar5[0x10] = iVar2;
      if (iVar2 == 0) {
        piVar5[0x11] = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(piVar5 + 0xe,iVar2,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(piVar5 + 0xe),pvVar3,(longlong)iVar2 << 2);
      }
      piVar7 = piVar7 + 0x1e;
      *(char *)(piVar5 + 0x12) = (char)piVar6[0x12];
      piVar6 = piVar6 + 0x1e;
      piVar5 = piVar5 + 0x1e;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14146cc70 FUN_14146cc70 body=111 status=ok
// SIG undefined FUN_14146cc70(void)

void FUN_14146cc70(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    *puVar1 = &PTR_FUN_144afbfc0;
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0x3f800000;
    FRuntimeFloatCurve::FRuntimeFloatCurve(puVar1 + 0xe);
    FRuntimeFloatCurve::FRuntimeFloatCurve(puVar1 + 0x1d);
    puVar1[0x2c] = 0;
  }
  return;
}



// FUNCTION 14146cce0 FUN_14146cce0 body=92 status=ok
// SIG undefined FUN_14146cce0(void)

void FUN_14146cce0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *puVar1 = &PTR_FUN_1445e8170;
    *(undefined1 *)(puVar1 + 0x10) = 1;
    *(undefined4 *)((longlong)puVar1 + 0x84) = 0x3f000000;
  }
  return;
}



// FUNCTION 14146cd50 FUN_14146cd50 body=151 status=ok
// SIG undefined FUN_14146cd50(void)

void FUN_14146cd50(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x50);
    do {
      if (plVar2[2] != 0) {
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
      plVar2 = plVar2 + 0xf;
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



// FUNCTION 14146cdf0 FUN_14146cdf0 body=76 status=ok
// SIG undefined FUN_14146cdf0(void)

longlong FUN_14146cdf0(longlong param_1,ulonglong param_2)

{
  FRichCurve::~FRichCurve(param_1 + 0xe8);
  FRichCurve::~FRichCurve(param_1 + 0x70);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 14146ce40 FUN_14146ce40 body=185 status=ok
// SIG undefined FUN_14146ce40(void)

void FUN_14146ce40(longlong *param_1,void **param_2)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  void *local_28;
  ulonglong local_20;
  void *local_18;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = (void *)0x0;
  if (&local_28 != param_2) {
    _Src = *param_2;
    uVar1 = *(uint *)(param_2 + 1);
    local_20 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_28,uVar1,0);
      _guard_xfg_dispatch_icall_nop(local_28,_Src,(longlong)(int)uVar1 << 3);
    }
  }
  local_18 = param_2[2];
  lVar2 = *param_1;
  uVar3 = FUN_14178ac60(param_1,DAT_146897b78);
  (**(code **)(lVar2 + 0x208))(param_1,uVar3,&local_28);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14146cf00 FUN_14146cf00 body=301 status=ok
// SIG undefined FUN_14146cf00(void)

void FUN_14146cf00(longlong *param_1,undefined8 param_2,void **param_3,void **param_4,
                  undefined1 param_5)

{
  uint uVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_38;
  void *local_30;
  ulonglong local_28;
  void *local_20;
  int local_18;
  int local_14;
  undefined1 local_10;
  
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
  local_14 = 0;
  local_38 = param_2;
  if (&local_30 != param_3) {
    uVar1 = *(uint *)(param_3 + 1);
    pvVar2 = *param_3;
    local_28 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_30,uVar1,0);
      _guard_xfg_dispatch_icall_nop(local_30,pvVar2,(longlong)(int)uVar1 * 2);
    }
  }
  if (&local_20 != param_4) {
    local_18 = *(int *)(param_4 + 1);
    lVar4 = (longlong)local_18;
    pvVar2 = *param_4;
    if ((local_18 == 0) && (local_14 == 0)) {
      local_14 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_20,local_18,local_14);
      _guard_xfg_dispatch_icall_nop(local_20,pvVar2,lVar4 * 2);
    }
  }
  lVar4 = *param_1;
  local_10 = param_5;
  uVar3 = FUN_14178ac60(param_1,DAT_146897c50);
  (**(code **)(lVar4 + 0x208))(param_1,uVar3,&local_38);
  if (local_20 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14146d030 FUN_14146d030 body=61 status=ok
// SIG undefined FUN_14146d030(void)

void FUN_14146d030(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146897b80);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 14146d070 FUN_14146d070 body=267 status=ok
// SIG undefined FUN_14146d070(void)

void FUN_14146d070(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  void *pvStack_20;
  undefined8 local_18;
  
  local_38 = 0;
  local_30 = 0;
  local_18 = 0;
  local_28 = 0;
  pvStack_20 = (void *)0x0;
  iVar4 = 0;
  if (&local_38 != param_2) {
    FUN_14146ca00(&local_38,*param_2,*(undefined4 *)(param_2 + 1),0,0);
    iVar4 = local_18._4_4_;
  }
  local_28 = param_2[2];
  if (&pvStack_20 != (void **)(param_2 + 3)) {
    iVar1 = *(int *)(param_2 + 4);
    _Src = (void *)param_2[3];
    local_18 = CONCAT44(local_18._4_4_,iVar1);
    if ((iVar1 == 0) && (iVar4 == 0)) {
      local_18 = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&pvStack_20,iVar1);
      _guard_xfg_dispatch_icall_nop(pvStack_20,_Src,(longlong)iVar1 * 0x18);
    }
  }
  lVar2 = *(longlong *)(param_1 + -0x1a0);
  uVar3 = FUN_14178ac60(param_1 + -0x1a0,DAT_146897b88);
  (**(code **)(lVar2 + 0x208))(param_1 + -0x1a0,uVar3,&local_38);
  if (pvStack_20 != (void *)0x0) {
    FMemory::Free();
  }
  FUN_14146cd50(&local_38);
  return;
}



// FUNCTION 14146d180 FUN_14146d180 body=66 status=ok
// SIG undefined FUN_14146d180(void)

void FUN_14146d180(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146897b90);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 14146d1f0 Copy body=168 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMapAreaParticleCollection>::Copy
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
    param_2[2] = *puVar1;
    param_2 = param_2 + 3;
  }
  return 1;
}



// FUNCTION 14146d2a0 Copy body=79 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FInAppPurchaseProductRequest>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      TArray<FVector,FDefaultAllocator>::operator=(param_2,param_3 + param_2);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10 + param_2);
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14146d2f0 FUN_14146d2f0 body=202 status=ok
// SIG undefined FUN_14146d2f0(void)

undefined8 FUN_14146d2f0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  void *_Src;
  undefined1 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined1 *)(param_3 + 0x10);
    do {
      if (param_2 != (undefined8 *)(puVar3 + -0x10)) {
        iVar2 = *(int *)(puVar3 + -8);
        _Src = *(void **)(puVar3 + -0x10);
        *(int *)(param_2 + 1) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar2 << 3);
        }
      }
      *(undefined1 *)(param_2 + 2) = *puVar3;
      *(undefined1 *)((longlong)param_2 + 0x11) = puVar3[1];
      puVar1 = puVar3 + 2;
      puVar3 = puVar3 + 0x18;
      *(undefined1 *)((longlong)param_2 + 0x12) = *puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 3;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14146d3c0 FUN_14146d3c0 body=55 status=ok
// SIG undefined FUN_14146d3c0(void)

void FUN_14146d3c0(void)

{
  undefined8 uVar1;
  
  if (DAT_146897820 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146897820 = GetStaticEnum(FUN_14146dec0,uVar1,L"EPresentableStatusEffectValueStrategy");
  }
  return;
}



// FUNCTION 14146d400 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInputKeySelector::GetPrivateStaticClass(void)

{
  if (DAT_146897e20 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakPlayerState",&DAT_146897e20,FUN_14146db60,0x680,0x10000000
                  ,0,L"Engine",&LAB_14146cc20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  AFGRailroadVehicle::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146897e20;
}



// FUNCTION 14146d4b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGJournalKey::GetPrivateStaticClass(void)

{
  if (DAT_146897e48 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakPresentableStatusEffectData",&DAT_146897e48,FUN_140447710,
                  0xa0,0x10000000,0,L"Engine",FUN_14146cce0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UBTTask_RunBehaviorDynamic::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146897e48;
}



// FUNCTION 14146d560 FUN_14146d560 body=6 status=ok
// SIG undefined FUN_14146d560(void)

undefined8 FUN_14146d560(void)

{
  return 0x3094f9cd;
}



// FUNCTION 14146d570 FUN_14146d570 body=6 status=ok
// SIG undefined FUN_14146d570(void)

undefined8 FUN_14146d570(void)

{
  return 0x3dbe5dd9;
}



// FUNCTION 14146d580 FUN_14146d580 body=6 status=ok
// SIG undefined FUN_14146d580(void)

undefined8 FUN_14146d580(void)

{
  return 0x2aad142;
}



// FUNCTION 14146d590 FUN_14146d590 body=6 status=ok
// SIG undefined FUN_14146d590(void)

undefined8 FUN_14146d590(void)

{
  return 0x9dbcfd87;
}



// FUNCTION 14146d5a0 FUN_14146d5a0 body=6 status=ok
// SIG undefined FUN_14146d5a0(void)

undefined8 FUN_14146d5a0(void)

{
  return 0x1b03a7e3;
}



// FUNCTION 14146d740 Serialize body=112 status=ok
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
  FUN_140d4c110(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 14146d7b0 FUN_14146d7b0 body=61 status=ok
// SIG undefined FUN_14146d7b0(void)

void FUN_14146d7b0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146897b98);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 14146d7f0 FUN_14146d7f0 body=61 status=ok
// SIG undefined FUN_14146d7f0(void)

void FUN_14146d7f0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146897ba0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 14146d830 FUN_14146d830 body=66 status=ok
// SIG undefined FUN_14146d830(void)

void FUN_14146d830(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146897ba8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 14146d880 FUN_14146d880 body=70 status=ok
// SIG undefined FUN_14146d880(void)

void FUN_14146d880(longlong *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  lVar1 = *param_1;
  local_28[0] = param_2;
  local_20 = param_3;
  local_18 = param_4;
  uVar2 = FUN_14178ac60(param_1,DAT_146897bb0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_28);
  return;
}



// FUNCTION 14146d8d0 FUN_14146d8d0 body=57 status=ok
// SIG undefined FUN_14146d8d0(void)

void FUN_14146d8d0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146897c58);
                    /* WARNING: Could not recover jumptable at 0x00014146d906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 14146d910 FUN_14146d910 body=60 status=ok
// SIG undefined FUN_14146d910(void)

void FUN_14146d910(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res10 [24];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146897c60);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 14146d950 FUN_14146d950 body=57 status=ok
// SIG undefined FUN_14146d950(void)

void FUN_14146d950(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146897bb8);
                    /* WARNING: Could not recover jumptable at 0x00014146d986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 14146d990 FUN_14146d990 body=60 status=ok
// SIG undefined FUN_14146d990(void)

void FUN_14146d990(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res10 [24];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146897c68);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 14146d9d0 FUN_14146d9d0 body=61 status=ok
// SIG undefined FUN_14146d9d0(void)

void FUN_14146d9d0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146897c70);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 14146da10 FUN_14146da10 body=295 status=ok
// SIG undefined FUN_14146da10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014146daa1) */
/* WARNING: Removing unreachable block (ram,0x00014146daba) */
/* WARNING: Removing unreachable block (ram,0x00014146dad1) */
/* WARNING: Removing unreachable block (ram,0x00014146dade) */

void FUN_14146da10(longlong *param_1,undefined ***param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined **local_58;
  undefined **local_50;
  undefined **ppuStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_58 = &PTR_FUN_143f740c8;
  local_40 = 0;
  local_38 = 0;
  local_50 = (undefined **)0x0;
  ppuStack_48 = (undefined **)0x0;
  if (param_2 != &local_58) {
    local_50 = param_2[1];
    ppuStack_48 = param_2[2];
    if (ppuStack_48 != (undefined **)0x0) {
      LOCK();
      *(int *)(ppuStack_48 + 1) = *(int *)(ppuStack_48 + 1) + 1;
      UNLOCK();
    }
    local_68._0_4_ = SUB84(local_50,0);
    local_30 = (undefined4)local_68;
    local_68._4_4_ = (undefined4)((ulonglong)local_50 >> 0x20);
    uStack_2c = local_68._4_4_;
    uStack_60._0_4_ = SUB84(ppuStack_48,0);
    uStack_28 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)ppuStack_48 >> 0x20);
    uStack_24 = uStack_60._4_4_;
    local_68 = 0;
    uStack_60 = 0;
  }
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(&local_40,param_2 + 3);
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146897c78);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_58);
  FUN_1404bf980(&local_58);
  return;
}



// FUNCTION 14146db60 FUN_14146db60 body=34 status=ok
// SIG undefined FUN_14146db60(void)

void FUN_14146db60(void)

{
  undefined8 uVar1;
  
  uVar1 = UInputKeySelector::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_ClientMatchmakingConfirmPendingR_144afbed0,0xf);
  return;
}



// FUNCTION 14146db90 FUN_14146db90 body=34 status=ok
// SIG undefined FUN_14146db90(void)

void FUN_14146db90(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14146c130();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_ClientInitiateMissionDelivery_144afbb50,0xe);
  return;
}



// FUNCTION 14146dbc0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146897d00 == 0) {
    uVar1 = FUN_14146d560();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146897d00 = GetStaticStruct(FUN_14146def0,uVar2,L"MissionDeliveryData",0x18,uVar1);
  }
  return;
}



// FUNCTION 14146dc20 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146897e50 == 0) {
    uVar1 = FUN_14146d570();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146897e50 = GetStaticStruct(FUN_14146df20,uVar2,L"OakFriendEncounterData",0x10,uVar1);
  }
  return;
}



// FUNCTION 14146dc80 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146897d90 == 0) {
    uVar1 = FUN_14146d580();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146897d90 = GetStaticStruct(FUN_14146df50,uVar2,L"OakPlayerPath",0x18,uVar1);
  }
  return;
}



// FUNCTION 14146dce0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146897e70 == 0) {
    uVar1 = FUN_14146d590();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146897e70 =
         GetStaticStruct(FUN_14146df80,uVar2,L"OakProfileLastInventoryFilterInfo",0x10,uVar1);
  }
  return;
}



// FUNCTION 14146dd40 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146897e60 == 0) {
    uVar1 = FUN_14146d5a0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146897e60 = GetStaticStruct(FUN_14146dfb0,uVar2,L"OakProfileMenuTutorialInfo",0x18,uVar1);
  }
  return;
}



// FUNCTION 14146dda0 FUN_14146dda0 body=47 status=ok
// SIG undefined FUN_14146dda0(void)

longlong FUN_14146dda0(void)

{
  if (DAT_146897ce0 == 0) {
    FUN_141786440(&DAT_146897ce0,&PTR_FUN_144af8500);
  }
  return DAT_146897ce0;
}



// FUNCTION 14146ddd0 FUN_14146ddd0 body=47 status=ok
// SIG undefined FUN_14146ddd0(void)

longlong FUN_14146ddd0(void)

{
  if (DAT_146897e28 == 0) {
    FUN_141786440(&DAT_146897e28,&PTR_GetPrivateStaticClass_144af1940);
  }
  return DAT_146897e28;
}



// FUNCTION 14146de00 FUN_14146de00 body=47 status=ok
// SIG undefined FUN_14146de00(void)

longlong FUN_14146de00(void)

{
  if (DAT_146897e40 == 0) {
    FUN_141786440(&DAT_146897e40,&PTR_GetPrivateStaticClass_144af1c60);
  }
  return DAT_146897e40;
}



// FUNCTION 14146de30 FUN_14146de30 body=47 status=ok
// SIG undefined FUN_14146de30(void)

longlong FUN_14146de30(void)

{
  if (DAT_146897e80 == 0) {
    FUN_141786440(&DAT_146897e80,&PTR_GetPrivateStaticClass_144af3c30);
  }
  return DAT_146897e80;
}



// FUNCTION 14146de60 FUN_14146de60 body=47 status=ok
// SIG undefined FUN_14146de60(void)

longlong FUN_14146de60(void)

{
  if (DAT_146897cf8 == 0) {
    FUN_141786a30(&DAT_146897cf8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146409140);
  }
  return DAT_146897cf8;
}



// FUNCTION 14146de90 FUN_14146de90 body=47 status=ok
// SIG undefined FUN_14146de90(void)

longlong FUN_14146de90(void)

{
  if (DAT_146897cf0 == 0) {
    FUN_141786a30(&DAT_146897cf0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146409030);
  }
  return DAT_146897cf0;
}



// FUNCTION 14146dec0 FUN_14146dec0 body=47 status=ok
// SIG undefined FUN_14146dec0(void)

longlong FUN_14146dec0(void)

{
  if (DAT_146897e38 == 0) {
    FUN_1417866a0(&DAT_146897e38,&PTR_Z_Construct_UPackage__Script_MechWarrior_14640e2a0);
  }
  return DAT_146897e38;
}



// FUNCTION 14146def0 FUN_14146def0 body=47 status=ok
// SIG undefined FUN_14146def0(void)

longlong FUN_14146def0(void)

{
  if (DAT_146897d08 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146897d08,&PTR_Z_Construct_UPackage__Script_MechWarrior_146409250);
  }
  return DAT_146897d08;
}



// FUNCTION 14146df20 FUN_14146df20 body=47 status=ok
// SIG undefined FUN_14146df20(void)

longlong FUN_14146df20(void)

{
  if (DAT_146897e58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146897e58,&PTR_Z_Construct_UPackage__Script_MechWarrior_14640b1f0);
  }
  return DAT_146897e58;
}



// FUNCTION 14146df50 FUN_14146df50 body=47 status=ok
// SIG undefined FUN_14146df50(void)

longlong FUN_14146df50(void)

{
  if (DAT_146897d98 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146897d98,&PTR_Z_Construct_UPackage__Script_MechWarrior_146409e10);
  }
  return DAT_146897d98;
}



// FUNCTION 14146df80 FUN_14146df80 body=47 status=ok
// SIG undefined FUN_14146df80(void)

longlong FUN_14146df80(void)

{
  if (DAT_146897e78 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146897e78,&PTR_Z_Construct_UPackage__Script_MechWarrior_14640b460);
  }
  return DAT_146897e78;
}



// FUNCTION 14146dfb0 FUN_14146dfb0 body=47 status=ok
// SIG undefined FUN_14146dfb0(void)

longlong FUN_14146dfb0(void)

{
  if (DAT_146897e68 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146897e68,&PTR_Z_Construct_UPackage__Script_MechWarrior_14640b3a0);
  }
  return DAT_146897e68;
}



// FUNCTION 14146dfe0 FUN_14146dfe0 body=156 status=ok
// SIG undefined FUN_14146dfe0(void)

void FUN_14146dfe0(longlong *param_1,longlong param_2)

{
  longlong local_28 [4];
  
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x4d0))(param_1,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14146e080 FUN_14146e080 body=368 status=ok
// SIG undefined FUN_14146e080(void)

void FUN_14146e080(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  undefined8 local_res10;
  longlong local_28 [4];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_28[2] = 0;
  local_28[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
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
  (**(code **)(*param_1 + 0x7d8))(param_1,local_res10,local_28 + 2,local_28,local_res8[0] != 0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14146e1f0 FUN_14146e1f0 body=132 status=ok
// SIG undefined FUN_14146e1f0(void)

void FUN_14146e1f0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x4b0))(param_1,local_res8);
  return;
}



// FUNCTION 14146e280 FUN_14146e280 body=173 status=ok
// SIG undefined FUN_14146e280(void)

void FUN_14146e280(longlong param_1,longlong param_2)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong lStack_20;
  undefined8 local_18;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  lStack_20 = 0;
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*(longlong *)(param_1 + 0x1a0) + 0x60))((longlong *)(param_1 + 0x1a0),&local_38);
  if (lStack_20 != 0) {
    FMemory::Free();
  }
  FUN_14146cd50(&local_38);
  return;
}



// FUNCTION 14146e330 FUN_14146e330 body=194 status=ok
// SIG undefined FUN_14146e330(void)

void FUN_14146e330(longlong *param_1,longlong param_2)

{
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
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
  (**(code **)(*param_1 + 0x4c8))(param_1,local_res10,local_res8[0]);
  return;
}



// FUNCTION 14146e400 FUN_14146e400 body=71 status=ok
// SIG undefined FUN_14146e400(void)

void FUN_14146e400(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)
           (**(code **)(*(longlong *)(param_1 + 0x528) + 0x90))
                     ((longlong *)(param_1 + 0x528),local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 14146e450 execGetSplineUpDir body=60 status=ok
// SIG undefined execGetSplineUpDir(void)

void USplineMeshComponent::execGetSplineUpDir
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)GetSplineUpDir(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 14146e490 FUN_14146e490 body=387 status=ok
// SIG undefined FUN_14146e490(void)

void FUN_14146e490(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_38 [8];
  undefined8 local_30;
  longlong *plStack_28;
  undefined1 local_20;
  
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
  FName::FName(local_48,&DAT_143f3eda8,1);
  local_3c = 0;
  local_40 = 0xffffffff;
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar6 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140c4d2a0(param_1,local_res20,local_res10[0],puVar6);
  plVar5 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_28)(plStack_28);
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



// FUNCTION 14146e620 FUN_14146e620 body=339 status=ok
// SIG undefined FUN_14146e620(void)

void FUN_14146e620(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res20 [2];
  undefined4 local_28 [2];
  undefined8 local_20;
  
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
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140c4d910(param_1,bVar1,bVar2,local_28[0],local_20);
  return;
}



// FUNCTION 14146e7a0 execTestServerLevelVisibilityChange body=191 status=ok
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
  thunk_FUN_140c53500(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 14146e940 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140c4efc0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 14146ea00 FUN_14146ea00 body=181 status=ok
// SIG undefined FUN_14146ea00(void)

void FUN_14146ea00(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x4a0))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerApplyMissionRewards_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x4a8))(param_1,local_res8);
  return;
}



// FUNCTION 14146eac0 execServerToggleActiveItem body=181 status=ok
// SIG undefined execServerToggleActiveItem(void)

void UInventoryComponent::execServerToggleActiveItem(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x4d8))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerGrantMissionWeapon_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x4e0))(param_1,local_res8);
  return;
}



// FUNCTION 14146eb80 FUN_14146eb80 body=249 status=ok
// SIG undefined FUN_14146eb80(void)

void FUN_14146eb80(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x4e8))(param_1,local_res10,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerGrantStarterGear_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x4f0))(param_1,local_res10,local_res8);
  return;
}



// FUNCTION 14146ec80 FUN_14146ec80 body=313 status=ok
// SIG undefined FUN_14146ec80(void)

void FUN_14146ec80(longlong *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  bVar2 = local_res8[0] != 0;
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
  cVar1 = (**(code **)(*param_1 + 0x490))(param_1,bVar2,local_res20,local_res10);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerNotifyMissionDeliveryChoice_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x498))(param_1,bVar2,local_res20,local_res10);
  return;
}



// FUNCTION 14146edc0 FUN_14146edc0 body=78 status=ok
// SIG undefined FUN_14146edc0(void)

void FUN_14146edc0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x7b8))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerPlayerDisplayDataChanged_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014146ee07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x7c0))(param_1);
  return;
}



// FUNCTION 14146ee10 FUN_14146ee10 body=166 status=ok
// SIG undefined FUN_14146ee10(void)

void FUN_14146ee10(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  
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
  cVar1 = (**(code **)(*param_1 + 0x7c8))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerReportClientMatchmakingError_Validate");
    return;
  }
  (**(code **)(*param_1 + 2000))(param_1,local_res8[0]);
  return;
}



// FUNCTION 14146eec0 FUN_14146eec0 body=78 status=ok
// SIG undefined FUN_14146eec0(void)

void FUN_14146eec0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x4b8))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerRequestMissionData_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014146ef07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4c0))(param_1);
  return;
}



// FUNCTION 14146ef10 FUN_14146ef10 body=182 status=ok
// SIG undefined FUN_14146ef10(void)

void FUN_14146ef10(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x7e0))(param_1,bVar2);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetIsHeadsetPresent_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x7e8))(param_1,bVar2);
  }
  return;
}



// FUNCTION 14146efd0 FUN_14146efd0 body=181 status=ok
// SIG undefined FUN_14146efd0(void)

void FUN_14146efd0(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x7f0))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetPlayerClass_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x7f8))(param_1,local_res8);
  return;
}



// FUNCTION 14146f090 FUN_14146f090 body=286 status=ok
// SIG undefined FUN_14146f090(void)

void FUN_14146f090(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined **local_38;
  undefined8 local_30;
  longlong *plStack_28;
  longlong local_20;
  undefined8 local_18;
  
  local_38 = &PTR_FUN_143f740c8;
  local_20 = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar6 = (**(code **)(*param_1 + 0x800))(param_1,&local_38);
  if (cVar6 == '\0') {
    RPC_ValidateFailed(L"ServerSetShiftUniqueId_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x808))(param_1,&local_38);
  }
  local_38 = &PTR_FUN_143f740c8;
  if (local_20 != 0) {
    FMemory::Free();
  }
  plVar5 = plStack_28;
  local_38 = &PTR_FUN_143f73d18;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_28)(plStack_28);
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



// FUNCTION 14146f1b0 FUN_14146f1b0 body=162 status=ok
// SIG undefined FUN_14146f1b0(void)

longlong FUN_14146f1b0(void)

{
  if (DAT_146898508 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakReplicationGraph",&DAT_146898508,FUN_140447710,0x2b8,
                  0x1000000c,0,L"Engine",&LAB_141470b70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14310ed90,&LAB_140447700,0);
  }
  return DAT_146898508;
}



// FUNCTION 14146f260 FUN_14146f260 body=53 status=ok
// SIG undefined FUN_14146f260(void)

void FUN_14146f260(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144b0c850;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14146f2a0 FUN_14146f2a0 body=53 status=ok
// SIG undefined FUN_14146f2a0(void)

void FUN_14146f2a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144b0c968;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14146f2e0 FUN_14146f2e0 body=162 status=ok
// SIG undefined FUN_14146f2e0(void)

longlong FUN_14146f2e0(void)

{
  if (DAT_146898488 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakRadiateDamageMovementComponent",&DAT_146898488,
                  FUN_140447710,0x1d0,0x10000000,0,L"Engine",&LAB_141470b30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UEnvQueryTest::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146898488;
}



// FUNCTION 14146f3a0 FUN_14146f3a0 body=53 status=ok
// SIG undefined FUN_14146f3a0(void)

void FUN_14146f3a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_144b0ca80;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14146f3e0 FUN_14146f3e0 body=53 status=ok
// SIG undefined FUN_14146f3e0(void)

void FUN_14146f3e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144b0cb98;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14146f420 FUN_14146f420 body=53 status=ok
// SIG undefined FUN_14146f420(void)

void FUN_14146f420(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144b0ccb0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14146f460 FUN_14146f460 body=53 status=ok
// SIG undefined FUN_14146f460(void)

void FUN_14146f460(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144b0cdc8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14146f4a0 FUN_14146f4a0 body=53 status=ok
// SIG undefined FUN_14146f4a0(void)

void FUN_14146f4a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_144b0cee0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14146f4e0 FUN_14146f4e0 body=53 status=ok
// SIG undefined FUN_14146f4e0(void)

void FUN_14146f4e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144b0cff8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14146f520 FUN_14146f520 body=53 status=ok
// SIG undefined FUN_14146f520(void)

void FUN_14146f520(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &PTR_FUN_144b0d110;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14146f560 FUN_14146f560 body=162 status=ok
// SIG undefined FUN_14146f560(void)

longlong FUN_14146f560(void)

{
  if (DAT_146898498 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakRadiusDamageReplicationManager",&DAT_146898498,
                  FUN_140447710,0x470,0x10000008,0,L"Game",FUN_141470a50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1414744e0,&LAB_140447700,0);
  }
  return DAT_146898498;
}



// FUNCTION 14146f610 FUN_14146f610 body=53 status=ok
// SIG undefined FUN_14146f610(void)

void FUN_14146f610(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144b0d228;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14146f650 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UPlatformGameInstance::StaticClass(void)

{
  if (DAT_146898518 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakReplicationGraphNode_AlwaysRelevant_ForConnection",
                  &DAT_146898518,FUN_140447710,0x170,0x10000008,0,L"Engine",FUN_141470b90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14310ee40,&LAB_140447700,0);
  }
  return DAT_146898518;
}



// FUNCTION 14146f710 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ULevelStreamingPersistent::GetPrivateStaticClass(void)

{
  if (DAT_146898528 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakReplicationGraphNode_AlwaysRelevant",&DAT_146898528,
                  FUN_140447710,0x150,0x10000008,0,L"Engine",&LAB_141470b80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14310ee40,&LAB_140447700,0);
  }
  return DAT_146898528;
}



// FUNCTION 14146f7c0 FUN_14146f7c0 body=53 status=ok
// SIG undefined FUN_14146f7c0(void)

void FUN_14146f7c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_144b0d340;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14146f800 FUN_14146f800 body=151 status=ok
// SIG undefined FUN_14146f800(void)

longlong FUN_14146f800(void)

{
  if (DAT_146898418 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakPublicAPIUpdater",&DAT_146898418,FUN_141474630,0x50,
                  0x10000000,0,L"Engine",FUN_141470ae0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146898418;
}



// FUNCTION 14146f8a0 FUN_14146f8a0 body=162 status=ok
// SIG undefined FUN_14146f8a0(void)

longlong FUN_14146f8a0(void)

{
  if (DAT_146898538 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakNetReplicationGraphConnection",&DAT_146898538,
                  FUN_140447710,0x1d8,0x10000008,0,L"Engine",&LAB_141470a80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14310ece0,&LAB_140447700,0);
  }
  return DAT_146898538;
}



// FUNCTION 14146f950 FUN_14146f950 body=47 status=ok
// SIG undefined FUN_14146f950(void)

longlong FUN_14146f950(void)

{
  if (DAT_146898368 == 0) {
    FUN_141786440(&DAT_146898368,&PTR_LAB_144b01f60);
  }
  return DAT_146898368;
}



// FUNCTION 14146f980 FUN_14146f980 body=47 status=ok
// SIG undefined FUN_14146f980(void)

longlong FUN_14146f980(void)

{
  if (DAT_146898350 == 0) {
    FUN_141786a30(&DAT_146898350,&PTR_FUN_14640e350);
  }
  return DAT_146898350;
}



// FUNCTION 14146f9b0 FUN_14146f9b0 body=47 status=ok
// SIG undefined FUN_14146f9b0(void)

longlong FUN_14146f9b0(void)

{
  if (DAT_146898358 == 0) {
    FUN_141786a30(&DAT_146898358,&PTR_FUN_14640e3d0);
  }
  return DAT_146898358;
}



// FUNCTION 14146f9e0 FUN_14146f9e0 body=47 status=ok
// SIG undefined FUN_14146f9e0(void)

longlong FUN_14146f9e0(void)

{
  if (DAT_146898360 == 0) {
    FUN_141786a30(&DAT_146898360,&PTR_FUN_14640e460);
  }
  return DAT_146898360;
}



// FUNCTION 14146fa10 FUN_14146fa10 body=53 status=ok
// SIG undefined FUN_14146fa10(void)

void FUN_14146fa10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_144b0d458;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14146fa60 FUN_14146fa60 body=53 status=ok
// SIG undefined FUN_14146fa60(void)

void FUN_14146fa60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &PTR_FUN_144b0d570;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14146fad0 FUN_14146fad0 body=47 status=ok
// SIG undefined FUN_14146fad0(void)

longlong FUN_14146fad0(void)

{
  if (DAT_146898410 == 0) {
    FUN_141786440(&DAT_146898410,&PTR_FUN_144b02bc0);
  }
  return DAT_146898410;
}



// FUNCTION 14146fb00 FUN_14146fb00 body=47 status=ok
// SIG undefined FUN_14146fb00(void)

longlong FUN_14146fb00(void)

{
  if (DAT_1468983f8 == 0) {
    FUN_141786a30(&DAT_1468983f8,&PTR_FUN_14640f060);
  }
  return DAT_1468983f8;
}



// FUNCTION 14146fb30 FUN_14146fb30 body=47 status=ok
// SIG undefined FUN_14146fb30(void)

longlong FUN_14146fb30(void)

{
  if (DAT_146898400 == 0) {
    FUN_141786a30(&DAT_146898400,&PTR_FUN_14640f130);
  }
  return DAT_146898400;
}


