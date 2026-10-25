// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1414411f0 FUN_1414411f0 body=191 status=ok
// SIG undefined FUN_1414411f0(void)

void FUN_1414411f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_140c13f60(local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414412b0 FUN_1414412b0 body=241 status=ok
// SIG undefined FUN_1414412b0(void)

void FUN_1414412b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_38;
  longlong local_30 [3];
  undefined1 local_18 [16];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_38 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_30[2] = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FString::FString(local_18,local_30);
  uVar1 = FUN_140c141b0(local_res10,local_30 + 2);
  *param_3 = uVar1;
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414413b0 FUN_1414413b0 body=128 status=ok
// SIG undefined FUN_1414413b0(void)

void FUN_1414413b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_140c44ae0(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141441430 FUN_141441430 body=122 status=ok
// SIG undefined FUN_141441430(void)

void FUN_141441430(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_140c44c80(param_1,local_18);
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



// FUNCTION 1414414b0 FUN_1414414b0 body=122 status=ok
// SIG undefined FUN_1414414b0(void)

void FUN_1414414b0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_140c46340(param_1,local_18);
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



// FUNCTION 141441550 FUN_141441550 body=128 status=ok
// SIG undefined FUN_141441550(void)

void FUN_141441550(undefined8 param_1,longlong param_2)

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
  FUN_140c4b670(param_1,local_res10);
  return;
}



// FUNCTION 1414415f0 FUN_1414415f0 body=330 status=ok
// SIG undefined FUN_1414415f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1414415f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_f8 [32];
  undefined8 local_d8 [2];
  undefined1 local_c8 [88];
  longlong local_70;
  longlong *local_38;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_d8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_d8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  FUN_1407bc550(local_c8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  puVar5 = local_c8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140c4b9e0(param_1,local_d8[0],puVar5);
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
  if (local_70 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141441740 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140c20790(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141441800 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140c20820(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1414418c0 FUN_1414418c0 body=330 status=ok
// SIG undefined FUN_1414418c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1414418c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_f8 [32];
  undefined8 local_d8 [2];
  undefined1 local_c8 [88];
  longlong local_70;
  longlong *local_38;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_d8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_d8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  FUN_1407bc550(local_c8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  puVar5 = local_c8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140c209e0(param_1,local_d8[0],puVar5);
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
  if (local_70 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141441a10 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140c20b30(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141441ad0 FUN_141441ad0 body=166 status=ok
// SIG undefined FUN_141441ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141441ad0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar1 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140c4dd50(param_1,puVar1);
  return;
}



// FUNCTION 141441b80 FUN_141441b80 body=253 status=ok
// SIG undefined FUN_141441b80(void)

void FUN_141441b80(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
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
  FUN_140c21670(param_1,local_18[0],local_res20,local_res10[0]);
  return;
}



// FUNCTION 141441ca0 FUN_141441ca0 body=128 status=ok
// SIG undefined FUN_141441ca0(void)

void FUN_141441ca0(undefined8 param_1,longlong param_2)

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
  FUN_140c4fa40(param_1,local_res10);
  return;
}



// FUNCTION 141441d20 FUN_141441d20 body=128 status=ok
// SIG undefined FUN_141441d20(void)

void FUN_141441d20(undefined8 param_1,longlong param_2)

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
  FUN_140c25c20(param_1,local_res10);
  return;
}



// FUNCTION 141441da0 FUN_141441da0 body=123 status=ok
// SIG undefined FUN_141441da0(void)

void FUN_141441da0(undefined8 param_1,longlong param_2)

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
  FUN_140c576d0(param_1,local_res10[0]);
  return;
}



// FUNCTION 141441e20 FUN_141441e20 body=123 status=ok
// SIG undefined FUN_141441e20(void)

void FUN_141441e20(undefined8 param_1,longlong param_2)

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
  FUN_140c585d0(param_1,local_res10[0]);
  return;
}



// FUNCTION 141441ec0 FUN_141441ec0 body=254 status=ok
// SIG undefined FUN_141441ec0(void)

void FUN_141441ec0(undefined8 param_1,longlong param_2)

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
  FUN_140c5d920(param_1,local_28[0],bVar1,local_res20);
  return;
}



// FUNCTION 141441fc0 FUN_141441fc0 body=53 status=ok
// SIG undefined FUN_141441fc0(void)

void FUN_141441fc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144aaeaf0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141442010 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UForceFeedbackAttenuation::StaticClass(void)

{
  if (DAT_146895408 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakOnlineStatsHelper",&DAT_146895408,FUN_141444db0,0xd8,
                  0x10000000,0,L"Engine",FUN_141443980,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146895408;
}



// FUNCTION 1414420b0 FUN_1414420b0 body=162 status=ok
// SIG undefined FUN_1414420b0(void)

longlong FUN_1414420b0(void)

{
  if (DAT_1468952f8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakNPCAnimInstance",&DAT_1468952f8,FUN_140447710,0xb10,
                  0x10000008,0,L"Engine",FUN_141443570,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142256d30,thunk_FUN_1414d6520,
                  &LAB_14084f730,0);
  }
  return DAT_1468952f8;
}



// FUNCTION 141442160 FUN_141442160 body=47 status=ok
// SIG undefined FUN_141442160(void)

longlong FUN_141442160(void)

{
  if (DAT_146895400 == 0) {
    FUN_141786440(&DAT_146895400,&PTR_StaticClass_144aa6bb0);
  }
  return DAT_146895400;
}



// FUNCTION 141442190 FUN_141442190 body=47 status=ok
// SIG undefined FUN_141442190(void)

longlong FUN_141442190(void)

{
  if (DAT_1468953f8 == 0) {
    FUN_141786a30(&DAT_1468953f8,&PTR_FUN_1463eed40);
  }
  return DAT_1468953f8;
}



// FUNCTION 1414421e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneLevelVisibilitySection::GetPrivateStaticClass(void)

{
  if (DAT_146895418 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakOptionalObjectiveRewardData",&DAT_146895418,FUN_140447710,
                  0xf8,0x10000000,0,L"Engine",FUN_141443a00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1413ea0d0,&LAB_140447700,0);
  }
  return DAT_146895418;
}



// FUNCTION 141442290 FUN_141442290 body=162 status=ok
// SIG undefined FUN_141442290(void)

longlong FUN_141442290(void)

{
  if (DAT_146895318 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakNpcGreetingComponent",&DAT_146895318,FUN_141444d20,0x650,
                  0x10000000,0,L"Engine",&LAB_1414437c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146895318;
}



// FUNCTION 141442350 FUN_141442350 body=53 status=ok
// SIG undefined FUN_141442350(void)

void FUN_141442350(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &PTR_FUN_144aaf610;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141442390 FUN_141442390 body=53 status=ok
// SIG undefined FUN_141442390(void)

void FUN_141442390(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144aaf728;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414423d0 FUN_1414423d0 body=47 status=ok
// SIG undefined FUN_1414423d0(void)

longlong FUN_1414423d0(void)

{
  if (DAT_146895310 == 0) {
    FUN_141786440(&DAT_146895310,&PTR_FUN_144aa7940);
  }
  return DAT_146895310;
}



// FUNCTION 141442400 FUN_141442400 body=47 status=ok
// SIG undefined FUN_141442400(void)

longlong FUN_141442400(void)

{
  if (DAT_146895300 == 0) {
    FUN_141786a30(&DAT_146895300,&PTR_FUN_1463ed590);
  }
  return DAT_146895300;
}



// FUNCTION 141442430 FUN_141442430 body=47 status=ok
// SIG undefined FUN_141442430(void)

longlong FUN_141442430(void)

{
  if (DAT_146895308 == 0) {
    FUN_141786a30(&DAT_146895308,&PTR_FUN_1463ed650);
  }
  return DAT_146895308;
}



// FUNCTION 141442460 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGPickMutatorsScreenUW::GetPrivateStaticClass(void)

{
  if (DAT_1468953a8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakOnlineNetworkOptionsMenu",&DAT_1468953a8,
                  StaticRegisterNativesUUGPickMutatorsScreenUW,0x308,0x10000000,0,L"Engine",
                  FUN_141443820,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGPasswordResetPage::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468953a8;
}



// FUNCTION 141442520 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UXSkinAnimationProfile::GetPrivateStaticClass(void)

{
  if (DAT_146895328 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakNPCMailData",&DAT_146895328,FUN_140447710,0x80,0x10000000,
                  0,L"Engine",&LAB_141443770,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146895328;
}



// FUNCTION 1414425d0 FUN_1414425d0 body=162 status=ok
// SIG undefined FUN_1414425d0(void)

longlong FUN_1414425d0(void)

{
  if (DAT_146895480 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakPassiveAbility",&DAT_146895480,FUN_141444de0,0x1b0,
                  0x10000000,0,L"Engine",&LAB_141443a30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14144bcb0,&LAB_140447700,0);
  }
  return DAT_146895480;
}



// FUNCTION 141442690 FUN_141442690 body=47 status=ok
// SIG undefined FUN_141442690(void)

longlong FUN_141442690(void)

{
  if (DAT_146895478 == 0) {
    FUN_141786440(&DAT_146895478,&PTR_FUN_144aa9490);
  }
  return DAT_146895478;
}



// FUNCTION 1414426c0 FUN_1414426c0 body=47 status=ok
// SIG undefined FUN_1414426c0(void)

longlong FUN_1414426c0(void)

{
  if (DAT_146895450 == 0) {
    FUN_141786a30(&DAT_146895450,&PTR_FUN_1463ef490);
  }
  return DAT_146895450;
}



// FUNCTION 1414426f0 FUN_1414426f0 body=47 status=ok
// SIG undefined FUN_1414426f0(void)

longlong FUN_1414426f0(void)

{
  if (DAT_146895458 == 0) {
    FUN_141786a30(&DAT_146895458,&PTR_FUN_1463ef520);
  }
  return DAT_146895458;
}



// FUNCTION 141442720 FUN_141442720 body=47 status=ok
// SIG undefined FUN_141442720(void)

longlong FUN_141442720(void)

{
  if (DAT_146895460 == 0) {
    FUN_141786a30(&DAT_146895460,&PTR_FUN_1463ef560);
  }
  return DAT_146895460;
}



// FUNCTION 141442750 FUN_141442750 body=47 status=ok
// SIG undefined FUN_141442750(void)

longlong FUN_141442750(void)

{
  if (DAT_146895468 == 0) {
    FUN_141786a30(&DAT_146895468,&PTR_FUN_1463ef5a0);
  }
  return DAT_146895468;
}



// FUNCTION 141442780 FUN_141442780 body=47 status=ok
// SIG undefined FUN_141442780(void)

longlong FUN_141442780(void)

{
  if (DAT_146895470 == 0) {
    FUN_141786a30(&DAT_146895470,&PTR_FUN_1463ef5e0);
  }
  return DAT_146895470;
}



// FUNCTION 1414427b0 FUN_1414427b0 body=162 status=ok
// SIG undefined FUN_1414427b0(void)

longlong FUN_1414427b0(void)

{
  if (DAT_1468953c0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakOnlineNetworkOptionsItemWidget",&DAT_1468953c0,
                  FUN_140447710,0x2e8,0x10000000,0,L"Engine",FUN_1414437d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14141c8d0,&LAB_140447700,0);
  }
  return DAT_1468953c0;
}



// FUNCTION 141442860 FUN_141442860 body=53 status=ok
// SIG undefined FUN_141442860(void)

void FUN_141442860(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_144aaf420;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414428a0 FUN_1414428a0 body=47 status=ok
// SIG undefined FUN_1414428a0(void)

longlong FUN_1414428a0(void)

{
  if (DAT_1468953a0 == 0) {
    FUN_141786440(&DAT_1468953a0,&PTR_GetPrivateStaticClass_144aa8d30);
  }
  return DAT_1468953a0;
}



// FUNCTION 1414428d0 FUN_1414428d0 body=47 status=ok
// SIG undefined FUN_1414428d0(void)

longlong FUN_1414428d0(void)

{
  if (DAT_146895388 == 0) {
    FUN_141786a30(&DAT_146895388,&PTR_FUN_1463ee6e0);
  }
  return DAT_146895388;
}



// FUNCTION 141442900 FUN_141442900 body=47 status=ok
// SIG undefined FUN_141442900(void)

longlong FUN_141442900(void)

{
  if (DAT_146895390 == 0) {
    FUN_141786a30(&DAT_146895390,&PTR_FUN_1463ee760);
  }
  return DAT_146895390;
}



// FUNCTION 141442930 FUN_141442930 body=47 status=ok
// SIG undefined FUN_141442930(void)

longlong FUN_141442930(void)

{
  if (DAT_146895398 == 0) {
    FUN_141786a30(&DAT_146895398,&PTR_FUN_1463ee7e0);
  }
  return DAT_146895398;
}



// FUNCTION 141442960 FUN_141442960 body=47 status=ok
// SIG undefined FUN_141442960(void)

longlong FUN_141442960(void)

{
  if (DAT_1468953b8 == 0) {
    FUN_141786440(&DAT_1468953b8,&PTR_FUN_144aa92f0);
  }
  return DAT_1468953b8;
}



// FUNCTION 141442990 FUN_141442990 body=47 status=ok
// SIG undefined FUN_141442990(void)

longlong FUN_141442990(void)

{
  if (DAT_1468953b0 == 0) {
    FUN_141786a30(&DAT_1468953b0,&PTR_FUN_1463ee950);
  }
  return DAT_1468953b0;
}



// FUNCTION 1414429c0 FUN_1414429c0 body=53 status=ok
// SIG undefined FUN_1414429c0(void)

void FUN_1414429c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144aafed8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141442a00 FUN_141442a00 body=162 status=ok
// SIG undefined FUN_141442a00(void)

longlong FUN_141442a00(void)

{
  if (DAT_146895230 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakNavComponent",&DAT_146895230,FUN_141444cc0,0xcb0,
                  0x10000000,0,L"Engine",&LAB_141443790,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  AAICharacter::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146895230;
}



// FUNCTION 141442ab0 FUN_141442ab0 body=53 status=ok
// SIG undefined FUN_141442ab0(void)

void FUN_141442ab0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_144ab09c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141442b10 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AInteractiveFoliageActor::GetPrivateStaticClass(void)

{
  if (DAT_1468953e0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakOnlinePlayerDetailsMenu",&DAT_1468953e0,
                  StaticRegisterNativesAInteractiveFoliageActor,0x398,0x10000000,0,L"Engine",
                  FUN_141443890,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGPasswordResetPage::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468953e0;
}



// FUNCTION 141442bd0 FUN_141442bd0 body=47 status=ok
// SIG undefined FUN_141442bd0(void)

longlong FUN_141442bd0(void)

{
  if (DAT_1468953d8 == 0) {
    FUN_141786440(&DAT_1468953d8,&PTR_GetPrivateStaticClass_144aa9af0);
  }
  return DAT_1468953d8;
}



// FUNCTION 141442c00 FUN_141442c00 body=47 status=ok
// SIG undefined FUN_141442c00(void)

longlong FUN_141442c00(void)

{
  if (DAT_1468953c8 == 0) {
    FUN_141786a30(&DAT_1468953c8,&PTR_FUN_1463eea00);
  }
  return DAT_1468953c8;
}



// FUNCTION 141442c30 FUN_141442c30 body=47 status=ok
// SIG undefined FUN_141442c30(void)

longlong FUN_141442c30(void)

{
  if (DAT_1468953d0 == 0) {
    FUN_141786a30(&DAT_1468953d0,&PTR_FUN_1463eea80);
  }
  return DAT_1468953d0;
}



// FUNCTION 141442c70 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UFGOnlineSessionClient::GetPrivateStaticClass(void)

{
  if (DAT_1468953f0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakOnlineSessionClient",&DAT_1468953f0,FUN_140447710,0x1d8,
                  0x10000000,0,L"Game",&LAB_141443970,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1404e6ca0,&LAB_140447700,0);
  }
  return DAT_1468953f0;
}



// FUNCTION 141442d20 FUN_141442d20 body=162 status=ok
// SIG undefined FUN_141442d20(void)

longlong FUN_141442d20(void)

{
  if (DAT_146895250 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakNavWorld",&DAT_146895250,FUN_140447710,0xb80,0x10000006,0,
                  L"Engine",&LAB_141443550,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_141444c80,&LAB_140447700,0);
  }
  return DAT_146895250;
}



// FUNCTION 141442dd0 FUN_141442dd0 body=47 status=ok
// SIG undefined FUN_141442dd0(void)

longlong FUN_141442dd0(void)

{
  if (DAT_146895228 == 0) {
    FUN_141786440(&DAT_146895228,&PTR_FUN_144aace20);
  }
  return DAT_146895228;
}



// FUNCTION 141442e00 FUN_141442e00 body=47 status=ok
// SIG undefined FUN_141442e00(void)

longlong FUN_141442e00(void)

{
  if (DAT_1468951d0 == 0) {
    FUN_141786a30(&DAT_1468951d0,&PTR_FUN_1463eb360);
  }
  return DAT_1468951d0;
}



// FUNCTION 141442e30 FUN_141442e30 body=47 status=ok
// SIG undefined FUN_141442e30(void)

longlong FUN_141442e30(void)

{
  if (DAT_1468951d8 == 0) {
    FUN_141786a30(&DAT_1468951d8,&PTR_FUN_1463eb680);
  }
  return DAT_1468951d8;
}



// FUNCTION 141442e60 FUN_141442e60 body=47 status=ok
// SIG undefined FUN_141442e60(void)

longlong FUN_141442e60(void)

{
  if (DAT_1468951e0 == 0) {
    FUN_141786a30(&DAT_1468951e0,&PTR_FUN_1463eb990);
  }
  return DAT_1468951e0;
}



// FUNCTION 141442e90 FUN_141442e90 body=47 status=ok
// SIG undefined FUN_141442e90(void)

longlong FUN_141442e90(void)

{
  if (DAT_1468951e8 == 0) {
    FUN_141786a30(&DAT_1468951e8,&PTR_FUN_1463eba50);
  }
  return DAT_1468951e8;
}



// FUNCTION 141442ec0 FUN_141442ec0 body=47 status=ok
// SIG undefined FUN_141442ec0(void)

longlong FUN_141442ec0(void)

{
  if (DAT_1468951f0 == 0) {
    FUN_141786a30(&DAT_1468951f0,&PTR_FUN_1463eba90);
  }
  return DAT_1468951f0;
}



// FUNCTION 141442ef0 FUN_141442ef0 body=47 status=ok
// SIG undefined FUN_141442ef0(void)

longlong FUN_141442ef0(void)

{
  if (DAT_1468951f8 == 0) {
    FUN_141786a30(&DAT_1468951f8,&PTR_FUN_1463ebb50);
  }
  return DAT_1468951f8;
}



// FUNCTION 141442f20 FUN_141442f20 body=47 status=ok
// SIG undefined FUN_141442f20(void)

longlong FUN_141442f20(void)

{
  if (DAT_146895200 == 0) {
    FUN_141786a30(&DAT_146895200,&PTR_FUN_1463ebbd0);
  }
  return DAT_146895200;
}



// FUNCTION 141442f50 FUN_141442f50 body=47 status=ok
// SIG undefined FUN_141442f50(void)

longlong FUN_141442f50(void)

{
  if (DAT_146895208 == 0) {
    FUN_141786a30(&DAT_146895208,&PTR_FUN_1463ebe60);
  }
  return DAT_146895208;
}



// FUNCTION 141442f80 FUN_141442f80 body=47 status=ok
// SIG undefined FUN_141442f80(void)

longlong FUN_141442f80(void)

{
  if (DAT_146895210 == 0) {
    FUN_141786a30(&DAT_146895210,&PTR_FUN_1463ebf20);
  }
  return DAT_146895210;
}



// FUNCTION 141442fb0 FUN_141442fb0 body=47 status=ok
// SIG undefined FUN_141442fb0(void)

longlong FUN_141442fb0(void)

{
  if (DAT_146895218 == 0) {
    FUN_141786a30(&DAT_146895218,&PTR_FUN_1463ebfb0);
  }
  return DAT_146895218;
}



// FUNCTION 141442fe0 FUN_141442fe0 body=47 status=ok
// SIG undefined FUN_141442fe0(void)

longlong FUN_141442fe0(void)

{
  if (DAT_146895220 == 0) {
    FUN_141786a30(&DAT_146895220,&PTR_FUN_1463ec040);
  }
  return DAT_146895220;
}



// FUNCTION 141443030 FUN_141443030 body=53 status=ok
// SIG undefined FUN_141443030(void)

void FUN_141443030(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x24;
    *puVar1 = &PTR_FUN_144aae5e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141443070 FUN_141443070 body=162 status=ok
// SIG undefined FUN_141443070(void)

longlong FUN_141443070(void)

{
  if (DAT_1468952e8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakNogDroneContainerComponent",&DAT_1468952e8,FUN_141444cf0,
                  0x1a00,0x10000000,0,L"Engine",&LAB_1414437b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142e5c1e0,&LAB_140447700,0);
  }
  return DAT_1468952e8;
}



// FUNCTION 141443120 FUN_141443120 body=53 status=ok
// SIG undefined FUN_141443120(void)

void FUN_141443120(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &PTR_FUN_144aae6f8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return;
  }
  return;
}



// FUNCTION 141443160 FUN_141443160 body=53 status=ok
// SIG undefined FUN_141443160(void)

void FUN_141443160(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_144aae810;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414431a0 FUN_1414431a0 body=53 status=ok
// SIG undefined FUN_1414431a0(void)

void FUN_1414431a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144aae928;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414431e0 FUN_1414431e0 body=47 status=ok
// SIG undefined FUN_1414431e0(void)

longlong FUN_1414431e0(void)

{
  if (DAT_1468952e0 == 0) {
    FUN_141786440(&DAT_1468952e0,&PTR_FUN_144aa24f0);
  }
  return DAT_1468952e0;
}



// FUNCTION 141443210 FUN_141443210 body=47 status=ok
// SIG undefined FUN_141443210(void)

longlong FUN_141443210(void)

{
  if (DAT_146895258 == 0) {
    FUN_141786a30(&DAT_146895258,&PTR_FUN_1463ec3d0);
  }
  return DAT_146895258;
}



// FUNCTION 141443240 FUN_141443240 body=47 status=ok
// SIG undefined FUN_141443240(void)

longlong FUN_141443240(void)

{
  if (DAT_146895260 == 0) {
    FUN_141786a30(&DAT_146895260,&PTR_FUN_1463ec490);
  }
  return DAT_146895260;
}



// FUNCTION 141443270 FUN_141443270 body=47 status=ok
// SIG undefined FUN_141443270(void)

longlong FUN_141443270(void)

{
  if (DAT_146895268 == 0) {
    FUN_141786a30(&DAT_146895268,&PTR_FUN_1463ec590);
  }
  return DAT_146895268;
}



// FUNCTION 1414432a0 FUN_1414432a0 body=47 status=ok
// SIG undefined FUN_1414432a0(void)

longlong FUN_1414432a0(void)

{
  if (DAT_146895270 == 0) {
    FUN_141786a30(&DAT_146895270,&PTR_FUN_1463ec660);
  }
  return DAT_146895270;
}



// FUNCTION 1414432d0 FUN_1414432d0 body=47 status=ok
// SIG undefined FUN_1414432d0(void)

longlong FUN_1414432d0(void)

{
  if (DAT_146895278 == 0) {
    FUN_141786a30(&DAT_146895278,&PTR_FUN_1463ec760);
  }
  return DAT_146895278;
}



// FUNCTION 141443300 FUN_141443300 body=47 status=ok
// SIG undefined FUN_141443300(void)

longlong FUN_141443300(void)

{
  if (DAT_146895280 == 0) {
    FUN_141786a30(&DAT_146895280,&PTR_FUN_1463ec7a0);
  }
  return DAT_146895280;
}



// FUNCTION 141443330 FUN_141443330 body=47 status=ok
// SIG undefined FUN_141443330(void)

longlong FUN_141443330(void)

{
  if (DAT_146895288 == 0) {
    FUN_141786a30(&DAT_146895288,&PTR_FUN_1463ec850);
  }
  return DAT_146895288;
}



// FUNCTION 141443360 FUN_141443360 body=47 status=ok
// SIG undefined FUN_141443360(void)

longlong FUN_141443360(void)

{
  if (DAT_146895290 == 0) {
    FUN_141786a30(&DAT_146895290,&PTR_FUN_1463ec900);
  }
  return DAT_146895290;
}



// FUNCTION 141443390 FUN_141443390 body=47 status=ok
// SIG undefined FUN_141443390(void)

longlong FUN_141443390(void)

{
  if (DAT_146895298 == 0) {
    FUN_141786a30(&DAT_146895298,&PTR_FUN_1463ec9c0);
  }
  return DAT_146895298;
}



// FUNCTION 1414433c0 FUN_1414433c0 body=47 status=ok
// SIG undefined FUN_1414433c0(void)

longlong FUN_1414433c0(void)

{
  if (DAT_1468952a0 == 0) {
    FUN_141786a30(&DAT_1468952a0,&PTR_FUN_1463eca80);
  }
  return DAT_1468952a0;
}



// FUNCTION 1414433f0 FUN_1414433f0 body=47 status=ok
// SIG undefined FUN_1414433f0(void)

longlong FUN_1414433f0(void)

{
  if (DAT_1468952a8 == 0) {
    FUN_141786a30(&DAT_1468952a8,&PTR_FUN_1463ecb10);
  }
  return DAT_1468952a8;
}



// FUNCTION 141443420 FUN_141443420 body=47 status=ok
// SIG undefined FUN_141443420(void)

longlong FUN_141443420(void)

{
  if (DAT_1468952b0 == 0) {
    FUN_141786a30(&DAT_1468952b0,&PTR_FUN_1463ecb90);
  }
  return DAT_1468952b0;
}



// FUNCTION 141443450 FUN_141443450 body=47 status=ok
// SIG undefined FUN_141443450(void)

longlong FUN_141443450(void)

{
  if (DAT_1468952b8 == 0) {
    FUN_141786a30(&DAT_1468952b8,&PTR_FUN_1463eccd0);
  }
  return DAT_1468952b8;
}



// FUNCTION 141443480 FUN_141443480 body=47 status=ok
// SIG undefined FUN_141443480(void)

longlong FUN_141443480(void)

{
  if (DAT_1468952c0 == 0) {
    FUN_141786a30(&DAT_1468952c0,&PTR_FUN_1463ecd10);
  }
  return DAT_1468952c0;
}



// FUNCTION 1414434b0 FUN_1414434b0 body=47 status=ok
// SIG undefined FUN_1414434b0(void)

longlong FUN_1414434b0(void)

{
  if (DAT_1468952c8 == 0) {
    FUN_141786a30(&DAT_1468952c8,&PTR_FUN_1463ecdf0);
  }
  return DAT_1468952c8;
}



// FUNCTION 1414434e0 FUN_1414434e0 body=47 status=ok
// SIG undefined FUN_1414434e0(void)

longlong FUN_1414434e0(void)

{
  if (DAT_1468952d0 == 0) {
    FUN_141786a30(&DAT_1468952d0,&PTR_FUN_1463ecf00);
  }
  return DAT_1468952d0;
}



// FUNCTION 141443510 FUN_141443510 body=47 status=ok
// SIG undefined FUN_141443510(void)

longlong FUN_141443510(void)

{
  if (DAT_1468952d8 == 0) {
    FUN_141786a30(&DAT_1468952d8,&PTR_FUN_1463ed010);
  }
  return DAT_1468952d8;
}



// FUNCTION 141443570 FUN_141443570 body=501 status=ok
// SIG undefined FUN_141443570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141443570(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142cb33a0(puVar1,param_1);
    *(undefined2 *)((longlong)puVar1 + 0x96a) = 0x101;
    *(undefined4 *)((longlong)puVar1 + 0x96c) = 0x3f800000;
    *puVar1 = &PTR_FUN_14497c608;
    *(undefined1 *)(puVar1 + 0x12e) = 0;
    *(undefined4 *)(puVar1 + 0x132) = 0x3f800000;
    puVar1[0x133] = _DAT_1468b5d90;
    *(undefined4 *)(puVar1 + 0x134) = DAT_1468b5d98;
    *(undefined2 *)((longlong)puVar1 + 0x9a4) = 0;
    puVar1[0x135] = 0;
    puVar1[0x136] = 0;
    puVar1[0x137] = 0;
    puVar1[0x138] = 0;
    puVar1[0x139] = 0;
    *(undefined2 *)(puVar1 + 0x13a) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x9d4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x9dc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x9e4) = 0x3e99999a;
    *(undefined4 *)(puVar1 + 0x13d) = 0x3dcccccd;
    *(undefined4 *)((longlong)puVar1 + 0x9ec) = 0x44480000;
    *(undefined4 *)(puVar1 + 0x13e) = 0x44c80000;
    *(undefined4 *)((longlong)puVar1 + 0x9f4) = 0x44fa0000;
    *(undefined4 *)((longlong)puVar1 + 0x9fc) = 0x3f800000;
    *(undefined1 *)((longlong)puVar1 + 0xa02) = 0;
    puVar1[0x141] = 0;
    *(undefined4 *)(puVar1 + 0x142) = 0xffffffff;
    *(undefined2 *)((longlong)puVar1 + 0xa24) = 0;
    *(undefined4 *)(puVar1 + 0x146) = 0x40000000;
    *(undefined4 *)((longlong)puVar1 + 0xa44) = 0x45160000;
    *(undefined4 *)(puVar1 + 0x149) = 0x3e99999a;
    *(undefined4 *)((longlong)puVar1 + 0xa4c) = 0x437a0000;
    *(undefined4 *)(puVar1 + 0x14a) = 0x3dcccccd;
    *(undefined4 *)((longlong)puVar1 + 0xa54) = 0x44bb8000;
    *(undefined4 *)(puVar1 + 0x14b) = 0x41700000;
    *(undefined4 *)(puVar1 + 0x14c) = 0x41a00000;
    FName::FName(puVar1 + 0x14d,"VehicleSlot",1);
    puVar1[0x14e] = 0;
    puVar1[0x14f] = 0;
    puVar1[0x150] = 0;
    puVar1[0x151] = 0;
    puVar1[0x152] = 0;
    puVar1[0x153] = 0;
    puVar1[0x154] = 0;
    puVar1[0x155] = 0;
    puVar1[0x156] = 0;
    puVar1[0x157] = 0;
    *(undefined1 *)(puVar1 + 0x159) = 0;
    *(undefined1 *)(puVar1 + 0x15a) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xae4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xad4) = 0x41a3771f;
    *puVar1 = &PTR_FUN_144aaf088;
    *(undefined4 *)(puVar1 + 0x15e) = 0x3f800000;
  }
  return;
}



// FUNCTION 1414437d0 FUN_1414437d0 body=69 status=ok
// SIG undefined FUN_1414437d0(void)

void FUN_1414437d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14141a9f0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1449b1a40;
    puVar1[0x20] = &PTR_LAB_1449b1ee0;
    puVar1[0x41] = &PTR_LAB_1449b1f08;
  }
  return;
}



// FUNCTION 141443820 FUN_141443820 body=106 status=ok
// SIG undefined FUN_141443820(void)

void FUN_141443820(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x2ed) = 1;
    *puVar1 = &PTR_FUN_144aaf840;
    puVar1[0x20] = &PTR_LAB_144aafce0;
    puVar1[0x41] = &PTR_LAB_144aafd08;
    puVar1[0x57] = &PTR_LAB_144aafd58;
    puVar1[0x5f] = 0;
    puVar1[0x60] = 0;
  }
  return;
}



// FUNCTION 141443890 FUN_141443890 body=211 status=ok
// SIG undefined FUN_141443890(void)

void FUN_141443890(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x2ed) = 1;
    *puVar1 = &PTR_FUN_144ab0010;
    puVar1[0x20] = &PTR_LAB_144ab04b0;
    puVar1[0x41] = &PTR_LAB_144ab04d8;
    puVar1[0x57] = &PTR_LAB_144ab0528;
    puVar1[0x60] = 0;
    puVar1[0x61] = 0;
    puVar1[0x62] = 0;
    puVar1[99] = 0;
    *(undefined2 *)(puVar1 + 100) = 2;
    FText::FText(puVar1 + 0x65);
    FText::FText(puVar1 + 0x68);
    FText::FText(puVar1 + 0x6b);
    FText::FText(puVar1 + 0x6e);
    *(undefined4 *)(puVar1 + 0x71) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x38c) = 0;
    puVar1[0x72] = 0;
  }
  return;
}



// FUNCTION 141443980 FUN_141443980 body=124 status=ok
// SIG undefined FUN_141443980(void)

void FUN_141443980(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144ab06b8;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xa4) = 0;
    puVar1[0x16] = 0;
    *(undefined4 *)(puVar1 + 0x17) = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
  }
  return;
}



// FUNCTION 141443a00 FUN_141443a00 body=41 status=ok
// SIG undefined FUN_141443a00(void)

void FUN_141443a00(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413eae40(puVar1,param_1);
    *puVar1 = &PTR_FUN_1449eaa40;
  }
  return;
}



// FUNCTION 141443a50 FUN_141443a50 body=104 status=ok
// SIG undefined FUN_141443a50(void)

longlong FUN_141443a50(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_1404b03b0();
  uVar4 = FUN_1404b03b0();
  uVar2 = DAT_14686a12c._1_1_;
  uVar1 = (undefined1)DAT_14686a12c;
  FText::FText(param_1,uVar4);
  FText::FText(param_1 + 0x18,uVar3);
  *(undefined1 *)(param_1 + 0x30) = uVar1;
  *(undefined1 *)(param_1 + 0x31) = uVar2;
  return param_1;
}



// FUNCTION 141443ac0 ~TArray<FLineData,TSizedDefaultAllocator<32>_> body=224 status=ok
// SIG undefined ~TArray<FLineData,TSizedDefaultAllocator<32>_>(void)

void TArray<FLineData,TSizedDefaultAllocator<32>_>::~TArray<FLineData,TSizedDefaultAllocator<32>_>
               (longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 8);
    do {
      plVar4 = (longlong *)plVar7[3];
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
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 7;
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



// FUNCTION 141443ba0 FUN_141443ba0 body=142 status=ok
// SIG undefined FUN_141443ba0(void)

void FUN_141443ba0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x20);
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
  plVar4 = *(longlong **)(param_1 + 8);
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



// FUNCTION 141443c30 FUN_141443c30 body=295 status=ok
// SIG undefined FUN_141443c30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141443c30(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_40 = (longlong *)param_2[1];
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_40 + 1) = (int)uStack_40[1] + 1;
    UNLOCK();
  }
  if (&local_48 != param_1) {
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    uVar4 = *param_1;
    plVar5 = (longlong *)param_1[1];
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = (undefined4)uStack_40;
    uStack_2c = uStack_40._4_4_;
    *(undefined4 *)param_1 = (undefined4)local_48;
    *(undefined4 *)((longlong)param_1 + 4) = local_48._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_40._4_4_;
    local_48 = uVar4;
    uStack_40 = plVar5;
  }
  plVar5 = uStack_40;
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_40 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*uStack_40)(uStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_40 + 8))(uStack_40,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 0x11) = *(undefined1 *)((longlong)param_2 + 0x11);
  FText::operator=(param_1 + 3,param_2 + 3);
  FText::operator=(param_1 + 6,param_2 + 6);
  FText::operator=(param_1 + 9,param_2 + 9);
  FText::operator=(param_1 + 0xc,param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined1 *)((longlong)param_1 + 0x7c) = *(undefined1 *)((longlong)param_2 + 0x7c);
  *(undefined1 *)((longlong)param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x7d);
  return param_1;
}



// FUNCTION 141443da0 FUN_141443da0 body=241 status=ok
// SIG undefined FUN_141443da0(void)

undefined8 * FUN_141443da0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[8];
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
  plVar4 = (longlong *)param_1[5];
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
  plVar4 = (longlong *)param_1[2];
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
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141443ea0 FUN_141443ea0 body=52 status=ok
// SIG undefined FUN_141443ea0(void)

undefined8 FUN_141443ea0(undefined8 param_1,ulonglong param_2)

{
  FUN_1413ae0d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb10);
  }
  return param_1;
}



// FUNCTION 141443ee0 FUN_141443ee0 body=95 status=ok
// SIG undefined FUN_141443ee0(void)

longlong FUN_141443ee0(longlong param_1,ulonglong param_2)

{
  TArray<FLineData,TSizedDefaultAllocator<32>_>::~TArray<FLineData,TSizedDefaultAllocator<32>_>
            (param_1 + 0x2f8);
  *(undefined ***)(param_1 + 0x2b8) = &PTR_FUN_1445e3d48;
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x308);
  }
  return param_1;
}



// FUNCTION 141443f40 FUN_141443f40 body=113 status=ok
// SIG undefined FUN_141443f40(void)

longlong FUN_141443f40(longlong param_1,ulonglong param_2)

{
  FUN_140fa0310(param_1 + 0x310);
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x2b8) = &PTR_FUN_1445e3d48;
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x398);
  }
  return param_1;
}



// FUNCTION 141443fc0 FUN_141443fc0 body=130 status=ok
// SIG undefined FUN_141443fc0(void)

longlong FUN_141443fc0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 141444060 FUN_141444060 body=66 status=ok
// SIG undefined FUN_141444060(void)

void FUN_141444060(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2 + 1,0,0x50);
  *param_2 = &PTR_FUN_144aaf410;
  FText::FText(param_2 + 1);
  FText::FText(param_2 + 4);
  FText::FText(param_2 + 7);
  return;
}



// FUNCTION 1414440b0 FUN_1414440b0 body=53 status=ok
// SIG undefined FUN_1414440b0(void)

void FUN_1414440b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  FText::FText(param_2 + 1);
  *(undefined1 *)(param_2 + 4) = 0;
  return;
}



// FUNCTION 1414440f0 FUN_1414440f0 body=100 status=ok
// SIG undefined FUN_1414440f0(void)

void FUN_1414440f0(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop((void *)((longlong)param_2 + 0x12),0,0x6e);
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined2 *)(param_2 + 2) = 2;
  FText::FText(param_2 + 3);
  FText::FText(param_2 + 6);
  FText::FText(param_2 + 9);
  FText::FText(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xf) = 0;
  *(undefined2 *)((longlong)param_2 + 0x7c) = 0;
  return;
}



// FUNCTION 1414442b0 FUN_1414442b0 body=128 status=ok
// SIG undefined FUN_1414442b0(void)

undefined8 FUN_1414442b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x20;
    do {
      FText::operator=(param_2 + -0x18,param_3 + -0x18 + param_2);
      FText::operator=(param_2,param_3 + param_2);
      FText::operator=(param_2 + 0x18,param_3 + 0x18 + param_2);
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30 + param_2);
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141444330 FUN_141444330 body=110 status=ok
// SIG undefined FUN_141444330(void)

undefined8 FUN_141444330(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 8;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8 + param_2);
      *(undefined1 *)(param_2 + -7) = *(undefined1 *)(param_3 + -7 + param_2);
      FText::operator=(param_2,param_3 + param_2);
      *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18 + param_2);
      *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_3 + 0x1c + param_2);
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20 + param_2);
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414443a0 FUN_1414443a0 body=343 status=ok
// SIG undefined FUN_1414443a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1414443a0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  uVar8 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (param_4 != 0) {
    puVar9 = (undefined1 *)(param_3 + 0x10);
    local_28 = uVar8;
    do {
      plVar5 = *(longlong **)(puVar9 + -8);
      uVar6 = *(undefined8 *)(puVar9 + -0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_48 = uVar6;
      plStack_40 = plVar5;
      if (&local_48 != param_2) {
        local_48 = *param_2;
        plStack_40 = (longlong *)param_2[1];
        *param_2 = uVar6;
        param_2[1] = plVar5;
        local_38 = uVar6;
        plStack_30 = plVar5;
      }
      plVar5 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_40 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_40 + 8))(plStack_40,1);
          }
        }
      }
      *(undefined1 *)(param_2 + 2) = *puVar9;
      *(undefined1 *)((longlong)param_2 + 0x11) = puVar9[1];
      FText::operator=(param_2 + 3,puVar9 + 8);
      FText::operator=(param_2 + 6,puVar9 + 0x20);
      FText::operator=(param_2 + 9,puVar9 + 0x38);
      FText::operator=(param_2 + 0xc,puVar9 + 0x50);
      *(undefined4 *)(param_2 + 0xf) = *(undefined4 *)(puVar9 + 0x68);
      *(undefined1 *)((longlong)param_2 + 0x7c) = puVar9[0x6c];
      puVar3 = puVar9 + 0x6d;
      uVar8 = 0;
      puVar9 = puVar9 + 0x80;
      *(undefined1 *)((longlong)param_2 + 0x7d) = *puVar3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x10;
    } while (param_4 != 0);
  }
  return CONCAT71((int7)(uVar8 >> 8),1);
}



// FUNCTION 141444500 FUN_141444500 body=121 status=ok
// SIG undefined FUN_141444500(void)

undefined8 FUN_141444500(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x30);
    do {
      FText::operator=(puVar1 + -0x30,puVar1 + param_3 + -0x30);
      FText::operator=(puVar1 + -0x18,puVar1 + param_3 + -0x18);
      *puVar1 = puVar1[param_3];
      puVar1[1] = puVar1[param_3 + 1];
      puVar1 = puVar1 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141444720 FUN_141444720 body=55 status=ok
// SIG undefined FUN_141444720(void)

void FUN_141444720(void)

{
  undefined8 uVar1;
  
  if (DAT_146894ce8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146894ce8 = GetStaticEnum(FUN_141445320,uVar1,L"EAdditionalTriggeredEffectTargets");
  }
  return;
}



// FUNCTION 141444760 FUN_141444760 body=55 status=ok
// SIG undefined FUN_141444760(void)

void FUN_141444760(void)

{
  undefined8 uVar1;
  
  if (DAT_146894cf0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146894cf0 = GetStaticEnum(FUN_141445350,uVar1,L"EDrivingOverridePriority");
  }
  return;
}



// FUNCTION 1414447a0 FUN_1414447a0 body=55 status=ok
// SIG undefined FUN_1414447a0(void)

void FUN_1414447a0(void)

{
  undefined8 uVar1;
  
  if (DAT_146894cd8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146894cd8 = GetStaticEnum(FUN_141445380,uVar1,L"EOakOnlineLobbyConnectivityState");
  }
  return;
}



// FUNCTION 1414447e0 FUN_1414447e0 body=55 status=ok
// SIG undefined FUN_1414447e0(void)

void FUN_1414447e0(void)

{
  undefined8 uVar1;
  
  if (DAT_146894cd0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146894cd0 = GetStaticEnum(FUN_1414453b0,uVar1,L"EOakOnlineLobbyPlayerPlateState");
  }
  return;
}



// FUNCTION 141444820 FUN_141444820 body=55 status=ok
// SIG undefined FUN_141444820(void)

void FUN_141444820(void)

{
  undefined8 uVar1;
  
  if (DAT_146894cc8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146894cc8 = GetStaticEnum(FUN_1414453e0,uVar1,L"EOakOnlineLobbyTalkingState");
  }
  return;
}



// FUNCTION 141444860 FUN_141444860 body=55 status=ok
// SIG undefined FUN_141444860(void)

void FUN_141444860(void)

{
  undefined8 uVar1;
  
  if (DAT_146894ce0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146894ce0 = GetStaticEnum(FUN_141445410,uVar1,L"EOakPassiveAbilityHUDIconActivationType");
  }
  return;
}



// FUNCTION 1414448a0 FUN_1414448a0 body=55 status=ok
// SIG undefined FUN_1414448a0(void)

void FUN_1414448a0(void)

{
  undefined8 uVar1;
  
  if (DAT_146894cf8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146894cf8 = GetStaticEnum(FUN_141445440,uVar1,L"ESpeedModifierOverridePriority");
  }
  return;
}



// FUNCTION 1414448e0 FUN_1414448e0 body=150 status=ok
// SIG undefined FUN_1414448e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1414448e0(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  local_44 = *param_3;
  local_40 = *param_4;
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(local_44,DAT_146895168);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_48);
  *param_2 = local_48;
  *param_3 = local_44;
  *param_4 = local_40;
  return;
}



// FUNCTION 141444980 FUN_141444980 body=6 status=ok
// SIG undefined FUN_141444980(void)

undefined8 FUN_141444980(void)

{
  return 0xb4dca3e7;
}



// FUNCTION 141444990 FUN_141444990 body=6 status=ok
// SIG undefined FUN_141444990(void)

undefined8 FUN_141444990(void)

{
  return 0xad3352fb;
}



// FUNCTION 1414449a0 FUN_1414449a0 body=6 status=ok
// SIG undefined FUN_1414449a0(void)

undefined8 FUN_1414449a0(void)

{
  return 0x64f5e046;
}



// FUNCTION 1414449b0 FUN_1414449b0 body=6 status=ok
// SIG undefined FUN_1414449b0(void)

undefined8 FUN_1414449b0(void)

{
  return 0xb005fa96;
}



// FUNCTION 1414449c0 FUN_1414449c0 body=6 status=ok
// SIG undefined FUN_1414449c0(void)

undefined8 FUN_1414449c0(void)

{
  return 0x8cb09d7f;
}



// FUNCTION 1414449d0 FUN_1414449d0 body=6 status=ok
// SIG undefined FUN_1414449d0(void)

undefined8 FUN_1414449d0(void)

{
  return 0x9535eb7c;
}



// FUNCTION 1414449e0 FUN_1414449e0 body=6 status=ok
// SIG undefined FUN_1414449e0(void)

undefined8 FUN_1414449e0(void)

{
  return 0xeb1487e5;
}



// FUNCTION 1414449f0 FUN_1414449f0 body=6 status=ok
// SIG undefined FUN_1414449f0(void)

undefined8 FUN_1414449f0(void)

{
  return 0xfd252e59;
}



// FUNCTION 141444a00 FUN_141444a00 body=6 status=ok
// SIG undefined FUN_141444a00(void)

undefined8 FUN_141444a00(void)

{
  return 0xd9843de0;
}



// FUNCTION 141444a10 FUN_141444a10 body=6 status=ok
// SIG undefined FUN_141444a10(void)

undefined8 FUN_141444a10(void)

{
  return 0x8823692e;
}



// FUNCTION 141444a20 FUN_141444a20 body=6 status=ok
// SIG undefined FUN_141444a20(void)

undefined8 FUN_141444a20(void)

{
  return 0xcbf6f567;
}



// FUNCTION 141444a30 FUN_141444a30 body=125 status=ok
// SIG undefined FUN_141444a30(void)

void FUN_141444a30(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  undefined1 local_18;
  undefined1 local_17;
  
  FUN_141443a50(local_48);
  FText::operator=(local_48,param_2);
  FText::operator=(local_30,param_2 + 0x18);
  local_18 = *(undefined1 *)(param_2 + 0x30);
  local_17 = *(undefined1 *)(param_2 + 0x31);
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146895148);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_48);
  FUN_141443ba0(local_48);
  return;
}



// FUNCTION 141444ab0 FUN_141444ab0 body=143 status=ok
// SIG undefined FUN_141444ab0(void)

void FUN_141444ab0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined1 local_40 [24];
  undefined1 local_28 [24];
  undefined1 local_10;
  undefined1 local_f;
  
  FUN_141443a50(local_40);
  local_48 = param_2;
  FText::operator=(local_40,param_3);
  FText::operator=(local_28,param_3 + 0x18);
  local_10 = *(undefined1 *)(param_3 + 0x30);
  lVar1 = *param_1;
  local_f = *(undefined1 *)(param_3 + 0x31);
  uVar2 = FUN_14178ac60(param_1,DAT_146895140);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_48);
  FUN_141443ba0(local_40);
  return;
}



// FUNCTION 141444b50 FUN_141444b50 body=57 status=ok
// SIG undefined FUN_141444b50(void)

void FUN_141444b50(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146895170);
                    /* WARNING: Could not recover jumptable at 0x000141444b86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141444b90 FUN_141444b90 body=57 status=ok
// SIG undefined FUN_141444b90(void)

void FUN_141444b90(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146895178);
                    /* WARNING: Could not recover jumptable at 0x000141444bc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141444bd0 FUN_141444bd0 body=174 status=ok
// SIG undefined FUN_141444bd0(void)

void FUN_141444bd0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  undefined1 local_28 [24];
  undefined4 local_10;
  undefined2 local_c;
  
  local_78 = 2;
  local_88 = 0;
  uStack_80 = 0;
  FText::FText(local_70);
  FText::FText(local_58);
  FText::FText(local_40);
  FText::FText(local_28);
  local_10 = 0;
  local_c = 0;
  FUN_141443c30(&local_88,param_2);
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146895150);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_88);
  FUN_140fa0310(&local_88);
  return;
}



// FUNCTION 141444c90 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void AAICharacter::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 141444ca0 thunk_FUN_142e5c1e0 body=5 status=ok
// SIG undefined thunk_FUN_142e5c1e0(void)

void thunk_FUN_142e5c1e0(void)

{
  FUN_142e5c1e0();
  return;
}



// FUNCTION 141444cb0 thunk_FUN_1414d6520 body=5 status=ok
// SIG undefined thunk_FUN_1414d6520(void)

void thunk_FUN_1414d6520(void)

{
  FUN_1414d6520();
  return;
}



// FUNCTION 141444cc0 FUN_141444cc0 body=34 status=ok
// SIG undefined FUN_141444cc0(void)

void FUN_141444cc0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141442a00();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddDrivingOverride_144aaea40,0xb);
  return;
}



// FUNCTION 141444cf0 FUN_141444cf0 body=34 status=ok
// SIG undefined FUN_141444cf0(void)

void FUN_141444cf0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141443070();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ApplyDamageToDrone_144aaec10,0x11);
  return;
}



// FUNCTION 141444d20 FUN_141444d20 body=34 status=ok
// SIG undefined FUN_141444d20(void)

void FUN_141444d20(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141442290();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnDialogStarted_144aaf3f0,2);
  return;
}



// FUNCTION 141444d50 StaticRegisterNativesUUGPickMutatorsScreenUW body=34 status=ok
// SIG undefined StaticRegisterNativesUUGPickMutatorsScreenUW(void)

void UUGPickMutatorsScreenUW::StaticRegisterNativesUUGPickMutatorsScreenUW(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnOptionClicked_144aafff0,2);
  return;
}



// FUNCTION 141444d80 StaticRegisterNativesAInteractiveFoliageActor body=34 status=ok
// SIG undefined StaticRegisterNativesAInteractiveFoliageActor(void)

void AInteractiveFoliageActor::StaticRegisterNativesAInteractiveFoliageActor(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnChoiceClicked_144ab06a8,1);
  return;
}



// FUNCTION 141444db0 FUN_141444db0 body=34 status=ok
// SIG undefined FUN_141444db0(void)

void FUN_141444db0(void)

{
  undefined8 uVar1;
  
  uVar1 = UForceFeedbackAttenuation::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnStatIncrement_144ab0930,1);
  return;
}



// FUNCTION 141444de0 FUN_141444de0 body=34 status=ok
// SIG undefined FUN_141444de0(void)

void FUN_141444de0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414425d0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_IsTriggeredEffectActive_144ab0ad8,3);
  return;
}



// FUNCTION 141444e10 FUN_141444e10 body=82 status=ok
// SIG undefined FUN_141444e10(void)

void FUN_141444e10(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468951a0 == 0) {
    uVar1 = FUN_141444980();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468951a0 = GetStaticStruct(FUN_141445470,uVar2,L"DrivingOverride",2,uVar1);
  }
  return;
}



// FUNCTION 141444e70 FUN_141444e70 body=82 status=ok
// SIG undefined FUN_141444e70(void)

void FUN_141444e70(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146895330 == 0) {
    uVar1 = FUN_141444990();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146895330 = GetStaticStruct(FUN_1414454a0,uVar2,L"OakNPCMailDataEntry",0x58,uVar1);
  }
  return;
}



// FUNCTION 141444ed0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146895238 == 0) {
    uVar1 = FUN_1414449a0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146895238 = GetStaticStruct(FUN_1414454d0,uVar2,L"OakNavReverseState",0x18,uVar1);
  }
  return;
}



// FUNCTION 141444f30 FUN_141444f30 body=82 status=ok
// SIG undefined FUN_141444f30(void)

void FUN_141444f30(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146895368 == 0) {
    uVar1 = FUN_1414449b0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146895368 = GetStaticStruct(FUN_141445500,uVar2,L"OakOnlineLobbyInfo",0x30,uVar1);
  }
  return;
}



// FUNCTION 141444f90 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneCameraCutSectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146895358 == 0) {
    uVar1 = FUN_1414449c0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146895358 = GetStaticStruct(FUN_141445530,uVar2,L"OakOnlineLobbyPlayerInfo",0x80,uVar1);
  }
  return;
}



// FUNCTION 141444ff0 FUN_141444ff0 body=82 status=ok
// SIG undefined FUN_141444ff0(void)

void FUN_141444ff0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146895430 == 0) {
    uVar1 = FUN_1414449d0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146895430 = GetStaticStruct(FUN_141445560,uVar2,L"OakPassiveAbilityHUDIconData",0x20,uVar1);
  }
  return;
}



// FUNCTION 141445050 FUN_141445050 body=82 status=ok
// SIG undefined FUN_141445050(void)

void FUN_141445050(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146895378 == 0) {
    uVar1 = FUN_1414449e0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146895378 = GetStaticStruct(FUN_141445590,uVar2,L"OnlineNetworkOptionData",0x38,uVar1);
  }
  return;
}



// FUNCTION 1414450b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468951c0 == 0) {
    uVar1 = FUN_1414449f0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468951c0 = GetStaticStruct(FUN_1414455c0,uVar2,L"RubberbandSpeedData",0x40,uVar1);
  }
  return;
}



// FUNCTION 141445110 FUN_141445110 body=82 status=ok
// SIG undefined FUN_141445110(void)

void FUN_141445110(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146895190 == 0) {
    uVar1 = FUN_141444a00();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146895190 = GetStaticStruct(FUN_1414455f0,uVar2,L"ScriptedVehicleMove",0x24,uVar1);
  }
  return;
}



// FUNCTION 141445170 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468951b0 == 0) {
    uVar1 = FUN_141444a10();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468951b0 = GetStaticStruct(FUN_141445620,uVar2,L"SpeedOverride",0x60,uVar1);
  }
  return;
}



// FUNCTION 1414451d0 FUN_1414451d0 body=82 status=ok
// SIG undefined FUN_1414451d0(void)

void FUN_1414451d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146895440 == 0) {
    uVar1 = FUN_141444a20();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146895440 = GetStaticStruct(FUN_141445650,uVar2,L"TriggeredPassiveAbilityEffect",0x48,uVar1)
    ;
  }
  return;
}



// FUNCTION 141445230 FUN_141445230 body=47 status=ok
// SIG undefined FUN_141445230(void)

longlong FUN_141445230(void)

{
  if (DAT_146895248 == 0) {
    FUN_141786440(&DAT_146895248,&PTR_FUN_144aaa1c0);
  }
  return DAT_146895248;
}



// FUNCTION 141445260 FUN_141445260 body=47 status=ok
// SIG undefined FUN_141445260(void)

longlong FUN_141445260(void)

{
  if (DAT_1468952f0 == 0) {
    FUN_141786440(&DAT_1468952f0,&PTR_FUN_144aa6b40);
  }
  return DAT_1468952f0;
}



// FUNCTION 141445290 FUN_141445290 body=47 status=ok
// SIG undefined FUN_141445290(void)

longlong FUN_141445290(void)

{
  if (DAT_146895320 == 0) {
    FUN_141786440(&DAT_146895320,&PTR_GetPrivateStaticClass_144aa7b70);
  }
  return DAT_146895320;
}



// FUNCTION 1414452c0 Z_Construct_UClass_UArchVisCharMovementComponent body=47 status=ok
// SIG undefined Z_Construct_UClass_UArchVisCharMovementComponent(void)

longlong Z_Construct_UClass_UArchVisCharMovementComponent(void)

{
  if (DAT_1468953e8 == 0) {
    FUN_141786440(&DAT_1468953e8,&PTR_GetPrivateStaticClass_144aaa260);
  }
  return DAT_1468953e8;
}



// FUNCTION 1414452f0 FUN_1414452f0 body=47 status=ok
// SIG undefined FUN_1414452f0(void)

longlong FUN_1414452f0(void)

{
  if (DAT_146895410 == 0) {
    FUN_141786440(&DAT_146895410,&PTR_GetPrivateStaticClass_144aa6e90);
  }
  return DAT_146895410;
}



// FUNCTION 141445320 FUN_141445320 body=47 status=ok
// SIG undefined FUN_141445320(void)

longlong FUN_141445320(void)

{
  if (DAT_146895428 == 0) {
    FUN_1417866a0(&DAT_146895428,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463ef970);
  }
  return DAT_146895428;
}



// FUNCTION 141445350 FUN_141445350 body=47 status=ok
// SIG undefined FUN_141445350(void)

longlong FUN_141445350(void)

{
  if (DAT_146895180 == 0) {
    FUN_1417866a0(&DAT_146895180,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463ef790);
  }
  return DAT_146895180;
}



// FUNCTION 141445380 FUN_141445380 body=47 status=ok
// SIG undefined FUN_141445380(void)

longlong FUN_141445380(void)

{
  if (DAT_146895350 == 0) {
    FUN_1417866a0(&DAT_146895350,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463ef8d0);
  }
  return DAT_146895350;
}



// FUNCTION 1414453b0 FUN_1414453b0 body=47 status=ok
// SIG undefined FUN_1414453b0(void)

longlong FUN_1414453b0(void)

{
  if (DAT_146895348 == 0) {
    FUN_1417866a0(&DAT_146895348,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463ef880);
  }
  return DAT_146895348;
}



// FUNCTION 1414453e0 FUN_1414453e0 body=47 status=ok
// SIG undefined FUN_1414453e0(void)

longlong FUN_1414453e0(void)

{
  if (DAT_146895340 == 0) {
    FUN_1417866a0(&DAT_146895340,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463ef830);
  }
  return DAT_146895340;
}



// FUNCTION 141445410 FUN_141445410 body=47 status=ok
// SIG undefined FUN_141445410(void)

longlong FUN_141445410(void)

{
  if (DAT_146895420 == 0) {
    FUN_1417866a0(&DAT_146895420,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463ef920);
  }
  return DAT_146895420;
}



// FUNCTION 141445440 FUN_141445440 body=47 status=ok
// SIG undefined FUN_141445440(void)

longlong FUN_141445440(void)

{
  if (DAT_146895188 == 0) {
    FUN_1417866a0(&DAT_146895188,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463ef7e0);
  }
  return DAT_146895188;
}



// FUNCTION 141445470 FUN_141445470 body=47 status=ok
// SIG undefined FUN_141445470(void)

longlong FUN_141445470(void)

{
  if (DAT_1468951a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468951a8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463eaf30);
  }
  return DAT_1468951a8;
}



// FUNCTION 1414454a0 FUN_1414454a0 body=47 status=ok
// SIG undefined FUN_1414454a0(void)

longlong FUN_1414454a0(void)

{
  if (DAT_146895338 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146895338,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463edb40);
  }
  return DAT_146895338;
}



// FUNCTION 1414454d0 FUN_1414454d0 body=47 status=ok
// SIG undefined FUN_1414454d0(void)

longlong FUN_1414454d0(void)

{
  if (DAT_146895240 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146895240,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463ec2f0);
  }
  return DAT_146895240;
}



// FUNCTION 141445500 FUN_141445500 body=47 status=ok
// SIG undefined FUN_141445500(void)

longlong FUN_141445500(void)

{
  if (DAT_146895370 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146895370,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463ee450);
  }
  return DAT_146895370;
}



// FUNCTION 141445530 FUN_141445530 body=47 status=ok
// SIG undefined FUN_141445530(void)

longlong FUN_141445530(void)

{
  if (DAT_146895360 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146895360,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463ee1d0);
  }
  return DAT_146895360;
}



// FUNCTION 141445560 FUN_141445560 body=47 status=ok
// SIG undefined FUN_141445560(void)

longlong FUN_141445560(void)

{
  if (DAT_146895438 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146895438,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463ef110);
  }
  return DAT_146895438;
}



// FUNCTION 141445590 FUN_141445590 body=47 status=ok
// SIG undefined FUN_141445590(void)

longlong FUN_141445590(void)

{
  if (DAT_146895380 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146895380,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463ee610);
  }
  return DAT_146895380;
}



// FUNCTION 1414455c0 FUN_1414455c0 body=47 status=ok
// SIG undefined FUN_1414455c0(void)

longlong FUN_1414455c0(void)

{
  if (DAT_1468951c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468951c8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463eb240);
  }
  return DAT_1468951c8;
}



// FUNCTION 1414455f0 FUN_1414455f0 body=47 status=ok
// SIG undefined FUN_1414455f0(void)

longlong FUN_1414455f0(void)

{
  if (DAT_146895198 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146895198,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463eaee0);
  }
  return DAT_146895198;
}



// FUNCTION 141445620 FUN_141445620 body=47 status=ok
// SIG undefined FUN_141445620(void)

longlong FUN_141445620(void)

{
  if (DAT_1468951b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468951b8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463eaf80);
  }
  return DAT_1468951b8;
}



// FUNCTION 141445650 FUN_141445650 body=47 status=ok
// SIG undefined FUN_141445650(void)

longlong FUN_141445650(void)

{
  if (DAT_146895448 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146895448,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463ef3a0);
  }
  return DAT_146895448;
}



// FUNCTION 141445680 FUN_141445680 body=195 status=ok
// SIG undefined FUN_141445680(void)

void FUN_141445680(undefined8 param_1,longlong param_2)

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
  FUN_1409f8220(param_1,local_res10[0],local_res20[0] != 0);
  return;
}



// FUNCTION 141445750 FUN_141445750 body=734 status=ok
// SIG undefined FUN_141445750(void)

void FUN_141445750(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 local_res10 [16];
  int local_res20 [2];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_3c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_3c);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
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
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  bVar2 = local_58 != 0;
  local_54 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_54);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  bVar3 = local_54 != 0;
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  bVar4 = local_50 != 0;
  local_40 = 0;
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
  local_4c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_4c);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1409f8370(param_1,local_res10[0],local_3c,bVar1,bVar2,bVar3,bVar4,local_40,local_44,local_48,
                local_4c != 0);
  return;
}



// FUNCTION 141445a30 FUN_141445a30 body=877 status=ok
// SIG undefined FUN_141445a30(void)

void FUN_141445a30(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 local_res10 [8];
  int local_res20 [2];
  int local_c8;
  int local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0 [2];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  uStack_9c = 0x461c4000;
  uStack_94 = 0x43fa0000;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  uStack_a0 = 0;
  uStack_98 = 0xbf800000;
  local_90 = 1;
  local_88 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_70 = 0xbf800000;
  local_6c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_b0[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b0);
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
  local_c8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  bVar2 = local_c8 != 0;
  local_c4 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c4);
  }
  bVar3 = local_c4 != 0;
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
  local_bc = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_bc);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_bc);
  }
  local_c0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_60 = CONCAT44(uStack_9c,uStack_a0);
  uStack_58 = CONCAT44(uStack_94,uStack_98);
  local_2c = local_6c;
  local_68 = local_a8;
  local_64 = local_a4;
  local_50 = local_90;
  local_48 = local_88;
  local_40 = local_80;
  local_3c = local_7c;
  local_30 = local_70;
  local_38 = local_78;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1409f8550(param_1,&local_68,local_res10[0],local_b0[0],bVar1,bVar2,bVar3,local_b4,local_b8,
                local_bc,local_c0 != 0);
  return;
}



// FUNCTION 141445da0 FUN_141445da0 body=194 status=ok
// SIG undefined FUN_141445da0(void)

void FUN_141445da0(undefined8 param_1,longlong param_2)

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
  FUN_1409f8d40(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 141445e70 FUN_141445e70 body=202 status=ok
// SIG undefined FUN_141445e70(void)

void FUN_141445e70(undefined8 param_1,longlong param_2)

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
  FUN_1409f8da0(param_1,local_res10[0],&local_18);
  return;
}



// FUNCTION 141445f40 FUN_141445f40 body=118 status=ok
// SIG undefined FUN_141445f40(void)

void FUN_141445f40(undefined8 param_1,longlong param_2)

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
  FUN_1409fd7e0(param_1,local_res10[0]);
  return;
}



// FUNCTION 141445fe0 FUN_141445fe0 body=118 status=ok
// SIG undefined FUN_141445fe0(void)

void FUN_141445fe0(undefined8 param_1,longlong param_2)

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
  FUN_1409fdcf0(param_1,local_res10[0]);
  return;
}



// FUNCTION 141446060 FUN_141446060 body=252 status=ok
// SIG undefined FUN_141446060(void)

void FUN_141446060(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140a00530(param_1,local_res10[0],local_18[0],local_res20);
  return;
}



// FUNCTION 141446160 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140a00f30(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141446220 FUN_141446220 body=252 status=ok
// SIG undefined FUN_141446220(void)

void FUN_141446220(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140a00f40(param_1,local_res10[0],local_18[0],local_res20);
  return;
}



// FUNCTION 141446340 FUN_141446340 body=143 status=ok
// SIG undefined FUN_141446340(void)

void FUN_141446340(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  uVar1 = FUN_140a04340(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414463d0 FUN_1414463d0 body=45 status=ok
// SIG undefined FUN_1414463d0(void)

void FUN_1414463d0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140a06550();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141446400 FUN_141446400 body=135 status=ok
// SIG undefined FUN_141446400(void)

void FUN_141446400(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined1 local_res18 [16];
  
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
  puVar1 = (undefined8 *)FUN_140a06580(param_1,local_res18,local_res10[0]);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 141446490 FUN_141446490 body=182 status=ok
// SIG undefined FUN_141446490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141446490(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68 [4];
  undefined1 local_58 [48];
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_140a065d0(param_1,local_58,local_68[0]);
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



// FUNCTION 141446550 execRemoveAt body=141 status=ok
// SIG undefined execRemoveAt(void)

void UMediaPlaylist::execRemoveAt(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_140a0b4a0(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414465e0 FUN_1414465e0 body=43 status=ok
// SIG undefined FUN_1414465e0(void)

void FUN_1414465e0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1409aebd0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141446610 FUN_141446610 body=130 status=ok
// SIG undefined FUN_141446610(void)

void FUN_141446610(undefined8 param_1,longlong param_2)

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
  FUN_140a0b8d0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414466a0 FUN_1414466a0 body=126 status=ok
// SIG undefined FUN_1414466a0(void)

void FUN_1414466a0(undefined8 param_1,longlong param_2)

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
  FUN_140a0ba00(param_1,local_res10[0]);
  return;
}



// FUNCTION 141446720 FUN_141446720 body=128 status=ok
// SIG undefined FUN_141446720(void)

void FUN_141446720(undefined8 param_1,longlong param_2)

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
  FUN_1411eb200(param_1,local_res10);
  return;
}



// FUNCTION 1414467e0 FUN_1414467e0 body=128 status=ok
// SIG undefined FUN_1414467e0(void)

void FUN_1414467e0(undefined8 param_1,longlong param_2)

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
  FUN_1411efe70(param_1,local_res10);
  return;
}



// FUNCTION 141446860 FUN_141446860 body=128 status=ok
// SIG undefined FUN_141446860(void)

void FUN_141446860(undefined8 param_1,longlong param_2)

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
  FUN_1411efee0(param_1,local_res10);
  return;
}



// FUNCTION 1414468e0 FUN_1414468e0 body=163 status=ok
// SIG undefined FUN_1414468e0(void)

void FUN_1414468e0(undefined8 param_1,longlong param_2)

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
  FUN_140a0f0e0(param_1,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141446990 FUN_141446990 body=253 status=ok
// SIG undefined FUN_141446990(void)

void FUN_141446990(long param_1,longlong param_2)

{
  undefined4 local_res10 [2];
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
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 141446a90 FUN_141446a90 body=357 status=ok
// SIG undefined FUN_141446a90(void)

void FUN_141446a90(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_38 [2];
  longlong local_30 [3];
  
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
  bVar1 = local_res10[0] != 0;
  local_30[0] = 0;
  local_30[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140a126a0(param_1,local_38[0],local_res20[0],bVar1,local_30);
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141446c00 FUN_141446c00 body=686 status=ok
// SIG undefined FUN_141446c00(void)

void FUN_141446c00(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  int local_res10 [4];
  int local_res20 [2];
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68 [2];
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_60;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  local_68[0] = 0;
  puVar1 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_6c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_6c);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar4 = local_res20[0] != 0;
  local_70 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_74);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_78 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140a166d0(param_1,puVar2,puVar1,local_68[0],local_6c,bVar3,bVar4,local_70,local_74,
                local_78 != 0);
  return;
}



// FUNCTION 141446eb0 FUN_141446eb0 body=212 status=ok
// SIG undefined FUN_141446eb0(void)

void FUN_141446eb0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  uint uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  uStack_44 = 0x40a00000;
  uStack_40 = 0x40000000;
  uStack_3c = 0x41200000;
  uStack_38 = 0x3e4ccccd;
  local_48 = local_48 & 0xffffff00;
  uStack_34 = uStack_34 & 0xffffff00;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_18 = uStack_38;
  uStack_14 = uStack_34;
  uStack_10 = uStack_30;
  uStack_c = uStack_2c;
  FUN_140a169c0(local_res10[0],&local_28);
  return;
}



// FUNCTION 141446fb0 FUN_141446fb0 body=43 status=ok
// SIG undefined FUN_141446fb0(void)

void FUN_141446fb0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140a1b340();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141446fe0 execLockAIResources body=194 status=ok
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
  FUN_140a1d890(param_1,bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 1414470b0 FUN_1414470b0 body=255 status=ok
// SIG undefined FUN_1414470b0(void)

void FUN_1414470b0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  int local_res20 [2];
  undefined4 local_28 [4];
  
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
  FUN_140a1d930(param_1,local_28[0],bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 1414471b0 FUN_1414471b0 body=255 status=ok
// SIG undefined FUN_1414471b0(void)

void FUN_1414471b0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  int local_res20 [2];
  undefined4 local_28 [4];
  
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
  FUN_140a1db10(param_1,local_28[0],bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 1414472e0 FUN_1414472e0 body=162 status=ok
// SIG undefined FUN_1414472e0(void)

longlong FUN_1414472e0(void)

{
  if (DAT_146895b38 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakPlayerAbilityEventHub_Gunner",&DAT_146895b38,FUN_140447710
                  ,0x68,0x10000000,0,L"Engine",InternalConstructor<UMicroTransactionBase>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414489e0,&LAB_140447700,0);
  }
  return DAT_146895b38;
}



// FUNCTION 1414473a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGJournalKey::GetPrivateStaticClass(void)

{
  if (DAT_146895b60 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakPlayerAbilityEventHub_Operative",&DAT_146895b60,
                  FUN_140447710,0xa0,0x10000000,0,L"Engine",FUN_14144ad40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414489e0,&LAB_140447700,0);
  }
  return DAT_146895b60;
}



// FUNCTION 141447460 FUN_141447460 body=162 status=ok
// SIG undefined FUN_141447460(void)

longlong FUN_141447460(void)

{
  if (DAT_146895938 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakPassiveAbility_Siren",&DAT_146895938,FUN_14144c200,0x1e8,
                  0x10000000,0,L"Engine",&LAB_14144abf0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414425d0,&LAB_140447700,0);
  }
  return DAT_146895938;
}



// FUNCTION 141447510 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass(void)

{
  if (DAT_146895b90 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakPlayerAbilityEventHub_Siren",&DAT_146895b90,FUN_140447710,
                  0x98,0x10000000,0,L"Engine",FUN_14144adc0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414489e0,&LAB_140447700,0);
  }
  return DAT_146895b90;
}



// FUNCTION 1414475c0 FUN_1414475c0 body=47 status=ok
// SIG undefined FUN_1414475c0(void)

longlong FUN_1414475c0(void)

{
  if (DAT_146895930 == 0) {
    FUN_141786440(&DAT_146895930,&PTR_FUN_144ab4d70);
  }
  return DAT_146895930;
}



// FUNCTION 1414475f0 FUN_1414475f0 body=47 status=ok
// SIG undefined FUN_1414475f0(void)

longlong FUN_1414475f0(void)

{
  if (DAT_146895918 == 0) {
    FUN_141786a30(&DAT_146895918,&PTR_FUN_1463efbb0);
  }
  return DAT_146895918;
}



// FUNCTION 141447620 FUN_141447620 body=47 status=ok
// SIG undefined FUN_141447620(void)

longlong FUN_141447620(void)

{
  if (DAT_146895920 == 0) {
    FUN_141786a30(&DAT_146895920,&PTR_FUN_1463efc70);
  }
  return DAT_146895920;
}



// FUNCTION 141447650 FUN_141447650 body=47 status=ok
// SIG undefined FUN_141447650(void)

longlong FUN_141447650(void)

{
  if (DAT_146895928 == 0) {
    FUN_141786a30(&DAT_146895928,&PTR_FUN_1463efcb0);
  }
  return DAT_146895928;
}



// FUNCTION 141447690 FUN_141447690 body=162 status=ok
// SIG undefined FUN_141447690(void)

longlong FUN_141447690(void)

{
  if (DAT_146895ba0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakPlayerAbilityEventHubStatics",&DAT_146895ba0,FUN_140447710
                  ,0x28,0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146895ba0;
}



// FUNCTION 141447740 FUN_141447740 body=162 status=ok
// SIG undefined FUN_141447740(void)

longlong FUN_141447740(void)

{
  if (DAT_146895bc0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakPlayerAbilityEventHubStatics_Gunner",&DAT_146895bc0,
                  FUN_14144c2f0,0x28,0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141447690,&LAB_140447700,0);
  }
  return DAT_146895bc0;
}



// FUNCTION 141447800 FUN_141447800 body=162 status=ok
// SIG undefined FUN_141447800(void)

longlong FUN_141447800(void)

{
  if (DAT_146895bf0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakPlayerAbilityEventHubStatics_Operative",&DAT_146895bf0,
                  FUN_14144c320,0x28,0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141447690,&LAB_140447700,0);
  }
  return DAT_146895bf0;
}



// FUNCTION 1414478b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UXSkinAnimationProfile::GetPrivateStaticClass(void)

{
  if (DAT_146895958 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakPassiveAbilityAttributeEffectMutatorData",&DAT_146895958,
                  FUN_140447710,0x80,0x10000000,0,L"Engine",&LAB_14144ab90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142dfaf30,&LAB_140447700,0);
  }
  return DAT_146895958;
}



// FUNCTION 141447960 FUN_141447960 body=162 status=ok
// SIG undefined FUN_141447960(void)

longlong FUN_141447960(void)

{
  if (DAT_146895c18 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakPlayerAbilityEventHubStatics_Beastmaster",&DAT_146895c18,
                  FUN_14144c2c0,0x28,0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141447690,&LAB_140447700,0);
  }
  return DAT_146895c18;
}



// FUNCTION 141447a10 FUN_141447a10 body=162 status=ok
// SIG undefined FUN_141447a10(void)

longlong FUN_141447a10(void)

{
  if (DAT_146895c48 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakPlayerAbilityEventHubStatics_Siren",&DAT_146895c48,
                  FUN_14144c350,0x28,0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141447690,&LAB_140447700,0);
  }
  return DAT_146895c48;
}



// FUNCTION 141447ac0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAESHelper::GetPrivateStaticClass(void)

{
  if (DAT_146895af0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakPlayerAbilityData",&DAT_146895af0,FUN_140447710,0x48,
                  0x10000000,0,L"Engine",InternalConstructor<UDatasmithFBXSceneImportData>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146895af0;
}



// FUNCTION 141447b70 FUN_141447b70 body=47 status=ok
// SIG undefined FUN_141447b70(void)

longlong FUN_141447b70(void)

{
  if (DAT_146895b98 == 0) {
    FUN_141786440(&DAT_146895b98,&PTR_FUN_144ab6500);
  }
  return DAT_146895b98;
}



// FUNCTION 141447ba0 FUN_141447ba0 body=47 status=ok
// SIG undefined FUN_141447ba0(void)

longlong FUN_141447ba0(void)

{
  if (DAT_146895bb8 == 0) {
    FUN_141786440(&DAT_146895bb8,&PTR_FUN_144ab6810);
  }
  return DAT_146895bb8;
}



// FUNCTION 141447bd0 FUN_141447bd0 body=47 status=ok
// SIG undefined FUN_141447bd0(void)

longlong FUN_141447bd0(void)

{
  if (DAT_146895ba8 == 0) {
    FUN_141786a30(&DAT_146895ba8,&PTR_FUN_1463f3350);
  }
  return DAT_146895ba8;
}



// FUNCTION 141447c00 FUN_141447c00 body=47 status=ok
// SIG undefined FUN_141447c00(void)

longlong FUN_141447c00(void)

{
  if (DAT_146895bb0 == 0) {
    FUN_141786a30(&DAT_146895bb0,&PTR_FUN_1463f3410);
  }
  return DAT_146895bb0;
}



// FUNCTION 141447c30 FUN_141447c30 body=47 status=ok
// SIG undefined FUN_141447c30(void)

longlong FUN_141447c30(void)

{
  if (DAT_146895be8 == 0) {
    FUN_141786440(&DAT_146895be8,&PTR_FUN_144ab6e20);
  }
  return DAT_146895be8;
}



// FUNCTION 141447c60 FUN_141447c60 body=47 status=ok
// SIG undefined FUN_141447c60(void)

longlong FUN_141447c60(void)

{
  if (DAT_146895bc8 == 0) {
    FUN_141786a30(&DAT_146895bc8,&PTR_FUN_1463f3500);
  }
  return DAT_146895bc8;
}



// FUNCTION 141447c90 FUN_141447c90 body=47 status=ok
// SIG undefined FUN_141447c90(void)

longlong FUN_141447c90(void)

{
  if (DAT_146895bd0 == 0) {
    FUN_141786a30(&DAT_146895bd0,&PTR_FUN_1463f3580);
  }
  return DAT_146895bd0;
}



// FUNCTION 141447cc0 FUN_141447cc0 body=47 status=ok
// SIG undefined FUN_141447cc0(void)

longlong FUN_141447cc0(void)

{
  if (DAT_146895bd8 == 0) {
    FUN_141786a30(&DAT_146895bd8,&PTR_FUN_1463f3640);
  }
  return DAT_146895bd8;
}



// FUNCTION 141447cf0 FUN_141447cf0 body=47 status=ok
// SIG undefined FUN_141447cf0(void)

longlong FUN_141447cf0(void)

{
  if (DAT_146895be0 == 0) {
    FUN_141786a30(&DAT_146895be0,&PTR_FUN_1463f36c0);
  }
  return DAT_146895be0;
}



// FUNCTION 141447d20 FUN_141447d20 body=47 status=ok
// SIG undefined FUN_141447d20(void)

longlong FUN_141447d20(void)

{
  if (DAT_146895c10 == 0) {
    FUN_141786440(&DAT_146895c10,&PTR_FUN_144ab71b0);
  }
  return DAT_146895c10;
}



// FUNCTION 141447d50 FUN_141447d50 body=47 status=ok
// SIG undefined FUN_141447d50(void)

longlong FUN_141447d50(void)

{
  if (DAT_146895bf8 == 0) {
    FUN_141786a30(&DAT_146895bf8,&PTR_FUN_1463f37b0);
  }
  return DAT_146895bf8;
}



// FUNCTION 141447d80 FUN_141447d80 body=47 status=ok
// SIG undefined FUN_141447d80(void)

longlong FUN_141447d80(void)

{
  if (DAT_146895c00 == 0) {
    FUN_141786a30(&DAT_146895c00,&PTR_FUN_1463f3870);
  }
  return DAT_146895c00;
}



// FUNCTION 141447db0 FUN_141447db0 body=47 status=ok
// SIG undefined FUN_141447db0(void)

longlong FUN_141447db0(void)

{
  if (DAT_146895c08 == 0) {
    FUN_141786a30(&DAT_146895c08,&PTR_FUN_1463f38f0);
  }
  return DAT_146895c08;
}



// FUNCTION 141447de0 FUN_141447de0 body=47 status=ok
// SIG undefined FUN_141447de0(void)

longlong FUN_141447de0(void)

{
  if (DAT_146895c40 == 0) {
    FUN_141786440(&DAT_146895c40,&PTR_FUN_144ab86a0);
  }
  return DAT_146895c40;
}



// FUNCTION 141447e10 FUN_141447e10 body=47 status=ok
// SIG undefined FUN_141447e10(void)

longlong FUN_141447e10(void)

{
  if (DAT_146895c20 == 0) {
    FUN_141786a30(&DAT_146895c20,&PTR_FUN_1463f3a20);
  }
  return DAT_146895c20;
}



// FUNCTION 141447e40 FUN_141447e40 body=47 status=ok
// SIG undefined FUN_141447e40(void)

longlong FUN_141447e40(void)

{
  if (DAT_146895c28 == 0) {
    FUN_141786a30(&DAT_146895c28,&PTR_FUN_1463f3aa0);
  }
  return DAT_146895c28;
}



// FUNCTION 141447e70 FUN_141447e70 body=47 status=ok
// SIG undefined FUN_141447e70(void)

longlong FUN_141447e70(void)

{
  if (DAT_146895c30 == 0) {
    FUN_141786a30(&DAT_146895c30,&PTR_FUN_1463f3b60);
  }
  return DAT_146895c30;
}



// FUNCTION 141447ea0 FUN_141447ea0 body=47 status=ok
// SIG undefined FUN_141447ea0(void)

longlong FUN_141447ea0(void)

{
  if (DAT_146895c38 == 0) {
    FUN_141786a30(&DAT_146895c38,&PTR_FUN_1463f3be0);
  }
  return DAT_146895c38;
}



// FUNCTION 141447ef0 FUN_141447ef0 body=53 status=ok
// SIG undefined FUN_141447ef0(void)

void FUN_141447ef0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144ac17f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141447f30 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UScrollBar::GetPrivateStaticClass(void)

{
  if (DAT_146895ac0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakPhaseWebSphere",&DAT_146895ac0,FUN_14144c1d0,0x610,
                  0x10000000,0,L"Engine",&LAB_14144ab80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_14144c1b0,&LAB_140447700,0);
  }
  return DAT_146895ac0;
}



// FUNCTION 141448000 FUN_141448000 body=162 status=ok
// SIG undefined FUN_141448000(void)

longlong FUN_141448000(void)

{
  if (DAT_146895a10 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakPawnAttachSlotComponent",&DAT_146895a10,FUN_14144c260,
                  0x6c8,0x10000002,0,L"Game",&LAB_14144ac10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142e6b880,&LAB_140447700,0);
  }
  return DAT_146895a10;
}



// FUNCTION 1414480b0 FUN_1414480b0 body=47 status=ok
// SIG undefined FUN_1414480b0(void)

longlong FUN_1414480b0(void)

{
  if (DAT_146895a08 == 0) {
    FUN_141786440(&DAT_146895a08,&PTR_FUN_144ab9070);
  }
  return DAT_146895a08;
}



// FUNCTION 1414480e0 FUN_1414480e0 body=47 status=ok
// SIG undefined FUN_1414480e0(void)

longlong FUN_1414480e0(void)

{
  if (DAT_1468959f8 == 0) {
    FUN_141786a30(&DAT_1468959f8,&PTR_FUN_1463f0ad0);
  }
  return DAT_1468959f8;
}



// FUNCTION 141448110 FUN_141448110 body=47 status=ok
// SIG undefined FUN_141448110(void)

longlong FUN_141448110(void)

{
  if (DAT_146895a00 == 0) {
    FUN_141786a30(&DAT_146895a00,&PTR_FUN_1463f0ba0);
  }
  return DAT_146895a00;
}


