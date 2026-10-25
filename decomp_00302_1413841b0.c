// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1413841b0 FUN_1413841b0 body=334 status=ok
// SIG undefined FUN_1413841b0(void)

void FUN_1413841b0(undefined8 param_1,longlong param_2)

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
  FUN_1411eb8a0(param_1,local_res10,puVar6);
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



// FUNCTION 141384300 FUN_141384300 body=334 status=ok
// SIG undefined FUN_141384300(void)

void FUN_141384300(undefined8 param_1,longlong param_2)

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
  thunk_FUN_14110b8f0(param_1,local_res10,puVar6);
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



// FUNCTION 141384450 FUN_141384450 body=334 status=ok
// SIG undefined FUN_141384450(void)

void FUN_141384450(undefined8 param_1,longlong param_2)

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
  FUN_1411134e0(param_1,local_res10,puVar6);
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



// FUNCTION 1413845a0 FUN_1413845a0 body=334 status=ok
// SIG undefined FUN_1413845a0(void)

void FUN_1413845a0(undefined8 param_1,longlong param_2)

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
  FUN_141113b80(param_1,local_res10,puVar6);
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



// FUNCTION 1413846f0 FUN_1413846f0 body=334 status=ok
// SIG undefined FUN_1413846f0(void)

void FUN_1413846f0(undefined8 param_1,longlong param_2)

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
  FUN_141114a10(param_1,local_res10,puVar6);
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



// FUNCTION 141384840 FUN_141384840 body=334 status=ok
// SIG undefined FUN_141384840(void)

void FUN_141384840(undefined8 param_1,longlong param_2)

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
  FUN_141114f70(param_1,local_res10,puVar6);
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



// FUNCTION 141384990 FUN_141384990 body=118 status=ok
// SIG undefined FUN_141384990(void)

void FUN_141384990(undefined8 param_1,longlong param_2)

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
  FUN_140ffeb50(param_1,local_res10[0]);
  return;
}



// FUNCTION 141384a10 FUN_141384a10 body=204 status=ok
// SIG undefined FUN_141384a10(void)

void FUN_141384a10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar5 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  thunk_FUN_140ff3570(param_1,puVar5);
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



// FUNCTION 141384b00 FUN_141384b00 body=334 status=ok
// SIG undefined FUN_141384b00(void)

void FUN_141384b00(undefined8 param_1,longlong param_2)

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
  FUN_14111c770(param_1,local_res10,puVar6);
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



// FUNCTION 141384c50 FUN_141384c50 body=334 status=ok
// SIG undefined FUN_141384c50(void)

void FUN_141384c50(undefined8 param_1,longlong param_2)

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
  FUN_14111c8d0(param_1,local_res10,puVar6);
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



// FUNCTION 141384dc0 FUN_141384dc0 body=334 status=ok
// SIG undefined FUN_141384dc0(void)

void FUN_141384dc0(undefined8 param_1,longlong param_2)

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
  FUN_14111d490(param_1,local_res10,puVar6);
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



// FUNCTION 141384f10 FUN_141384f10 body=334 status=ok
// SIG undefined FUN_141384f10(void)

void FUN_141384f10(undefined8 param_1,longlong param_2)

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
  FUN_14111dab0(param_1,local_res10,puVar6);
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



// FUNCTION 141385060 FUN_141385060 body=334 status=ok
// SIG undefined FUN_141385060(void)

void FUN_141385060(undefined8 param_1,longlong param_2)

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
  FUN_141121ce0(param_1,local_res10,puVar6);
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



// FUNCTION 1413851b0 FUN_1413851b0 body=334 status=ok
// SIG undefined FUN_1413851b0(void)

void FUN_1413851b0(undefined8 param_1,longlong param_2)

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
  FUN_1411efc50(param_1,local_res10,puVar6);
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



// FUNCTION 141385300 FUN_141385300 body=334 status=ok
// SIG undefined FUN_141385300(void)

void FUN_141385300(undefined8 param_1,longlong param_2)

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
  FUN_1411efce0(param_1,local_res10,puVar6);
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



// FUNCTION 141385450 FUN_141385450 body=334 status=ok
// SIG undefined FUN_141385450(void)

void FUN_141385450(undefined8 param_1,longlong param_2)

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
  FUN_1411efd20(param_1,local_res10,puVar6);
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



// FUNCTION 1413855a0 FUN_1413855a0 body=334 status=ok
// SIG undefined FUN_1413855a0(void)

void FUN_1413855a0(undefined8 param_1,longlong param_2)

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
  FUN_141121dd0(param_1,local_res10,puVar6);
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



// FUNCTION 1413856f0 FUN_1413856f0 body=128 status=ok
// SIG undefined FUN_1413856f0(void)

void FUN_1413856f0(undefined8 param_1,longlong param_2)

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
  FUN_1411efd70(param_1,local_res10);
  return;
}



// FUNCTION 141385770 FUN_141385770 body=334 status=ok
// SIG undefined FUN_141385770(void)

void FUN_141385770(undefined8 param_1,longlong param_2)

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
  FUN_141121ef0(param_1,local_res10,puVar6);
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



// FUNCTION 1413858c0 FUN_1413858c0 body=126 status=ok
// SIG undefined FUN_1413858c0(void)

void FUN_1413858c0(undefined8 param_1,longlong param_2)

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
  FUN_141007010(param_1,local_res10[0]);
  return;
}



// FUNCTION 141385940 FUN_141385940 body=334 status=ok
// SIG undefined FUN_141385940(void)

void FUN_141385940(undefined8 param_1,longlong param_2)

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
  FUN_141122040(param_1,local_res10,puVar6);
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



// FUNCTION 141385a90 FUN_141385a90 body=387 status=ok
// SIG undefined FUN_141385a90(void)

void FUN_141385a90(undefined8 param_1,longlong param_2)

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
  FUN_1411225f0(param_1,local_res20,local_res10[0],puVar6);
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



// FUNCTION 141385c20 FUN_141385c20 body=387 status=ok
// SIG undefined FUN_141385c20(void)

void FUN_141385c20(undefined8 param_1,longlong param_2)

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
  FUN_1411ac7e0(param_1,local_res20,local_res10[0],puVar6);
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



// FUNCTION 141385db0 FUN_141385db0 body=334 status=ok
// SIG undefined FUN_141385db0(void)

void FUN_141385db0(undefined8 param_1,longlong param_2)

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
  FUN_141122760(param_1,local_res10,puVar6);
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



// FUNCTION 141385f00 FUN_141385f00 body=271 status=ok
// SIG undefined FUN_141385f00(void)

void FUN_141385f00(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
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
  FUN_141122770(param_1,puVar6);
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



// FUNCTION 141386010 FUN_141386010 body=334 status=ok
// SIG undefined FUN_141386010(void)

void FUN_141386010(undefined8 param_1,longlong param_2)

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
  FUN_141123460(param_1,local_res10,puVar6);
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



// FUNCTION 141386160 FUN_141386160 body=334 status=ok
// SIG undefined FUN_141386160(void)

void FUN_141386160(undefined8 param_1,longlong param_2)

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
  FUN_141123b90(param_1,local_res10,puVar6);
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



// FUNCTION 1413862b0 FUN_1413862b0 body=334 status=ok
// SIG undefined FUN_1413862b0(void)

void FUN_1413862b0(undefined8 param_1,longlong param_2)

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
  FUN_141123d50(param_1,local_res10,puVar6);
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



// FUNCTION 141386400 FUN_141386400 body=334 status=ok
// SIG undefined FUN_141386400(void)

void FUN_141386400(undefined8 param_1,longlong param_2)

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
  FUN_141127f40(param_1,local_res10,puVar6);
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



// FUNCTION 141386550 FUN_141386550 body=334 status=ok
// SIG undefined FUN_141386550(void)

void FUN_141386550(undefined8 param_1,longlong param_2)

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
  FUN_141127f70(param_1,local_res10,puVar6);
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



// FUNCTION 1413866a0 FUN_1413866a0 body=334 status=ok
// SIG undefined FUN_1413866a0(void)

void FUN_1413866a0(undefined8 param_1,longlong param_2)

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
  FUN_1411287b0(param_1,local_res10,puVar6);
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



// FUNCTION 1413867f0 FUN_1413867f0 body=334 status=ok
// SIG undefined FUN_1413867f0(void)

void FUN_1413867f0(undefined8 param_1,longlong param_2)

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
  FUN_141128ca0(param_1,local_res10,puVar6);
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



// FUNCTION 141386940 FUN_141386940 body=334 status=ok
// SIG undefined FUN_141386940(void)

void FUN_141386940(undefined8 param_1,longlong param_2)

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
  FUN_141129040(param_1,local_res10,puVar6);
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



// FUNCTION 141386ab0 FUN_141386ab0 body=334 status=ok
// SIG undefined FUN_141386ab0(void)

void FUN_141386ab0(undefined8 param_1,longlong param_2)

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
  FUN_141129380(param_1,local_res10,puVar6);
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



// FUNCTION 141386c00 FUN_141386c00 body=128 status=ok
// SIG undefined FUN_141386c00(void)

void FUN_141386c00(undefined8 param_1,longlong param_2)

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
  FUN_14100fe00(param_1,local_res10);
  return;
}



// FUNCTION 141386ca0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass(void)

{
  if (DAT_1468868a8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxMainOptionPanel",&DAT_1468868a8,FUN_140447710,0x210,
                  0x10000008,0,L"Engine",FUN_141388590,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_1468868a8;
}



// FUNCTION 141386d50 FUN_141386d50 body=162 status=ok
// SIG undefined FUN_141386d50(void)

longlong FUN_141386d50(void)

{
  if (DAT_1468868b8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxOptionPreviewPanel",&DAT_1468868b8,FUN_140447710,0x280,
                  0x10000008,0,L"Engine",FUN_141388690,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_1468868b8;
}



// FUNCTION 141386e20 FUN_141386e20 body=151 status=ok
// SIG undefined FUN_141386e20(void)

longlong FUN_141386e20(void)

{
  if (DAT_1468869f0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxPCTextChatBuffer",&DAT_1468869f0,FUN_140447710,0xf0,
                  0x10000000,0,L"Engine",FUN_141388860,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468869f0;
}



// FUNCTION 141386ee0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGSquadMemberWidget::GetPrivateStaticClass(void)

{
  if (DAT_1468868d0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxOutOfBoundsWarning",&DAT_1468868d0,FUN_14138a4f0,0x630,
                  0x10000000,0,L"Engine",FUN_141388810,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468868d0;
}



// FUNCTION 141386f90 FUN_141386f90 body=47 status=ok
// SIG undefined FUN_141386f90(void)

longlong FUN_141386f90(void)

{
  if (DAT_1468868c8 == 0) {
    FUN_141786440(&DAT_1468868c8,&PTR_GetPrivateStaticClass_144911760);
  }
  return DAT_1468868c8;
}



// FUNCTION 141386fc0 FUN_141386fc0 body=47 status=ok
// SIG undefined FUN_141386fc0(void)

longlong FUN_141386fc0(void)

{
  if (DAT_1468868c0 == 0) {
    FUN_141786a30(&DAT_1468868c0,&PTR_FUN_14633f540);
  }
  return DAT_1468868c0;
}



// FUNCTION 141387000 FUN_141387000 body=162 status=ok
// SIG undefined FUN_141387000(void)

longlong FUN_141387000(void)

{
  if (DAT_1468868f8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxOverheadNameplate",&DAT_1468868f8,FUN_14138a520,0x350,
                  0x10000008,0,L"Engine",&LAB_141388840,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141352c60,&LAB_140447700,0);
  }
  return DAT_1468868f8;
}



// FUNCTION 1413870b0 FUN_1413870b0 body=47 status=ok
// SIG undefined FUN_1413870b0(void)

longlong FUN_1413870b0(void)

{
  if (DAT_1468868f0 == 0) {
    FUN_141786440(&DAT_1468868f0,&PTR_FUN_144913390);
  }
  return DAT_1468868f0;
}



// FUNCTION 1413870e0 FUN_1413870e0 body=47 status=ok
// SIG undefined FUN_1413870e0(void)

longlong FUN_1413870e0(void)

{
  if (DAT_1468868e8 == 0) {
    FUN_141786a30(&DAT_1468868e8,&PTR_FUN_14633f5f0);
  }
  return DAT_1468868e8;
}



// FUNCTION 141387120 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGImpulseWindProjectile::GetPrivateStaticClass(void)

{
  if (DAT_146886a30 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxPCTextChatMenu",&DAT_146886a30,FUN_14138a550,0x6f0,
                  0x10000000,0,L"Engine",FUN_141388910,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412d9d00,&LAB_140447700,0);
  }
  return DAT_146886a30;
}



// FUNCTION 1413871e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInputKeySelector::GetPrivateStaticClass(void)

{
  if (DAT_146886918 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxPassiveSkillWidget",&DAT_146886918,FUN_140447710,0x670,
                  0x10000000,0,L"Engine",FUN_141388ad0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGSquadMemberWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146886918;
}



// FUNCTION 141387290 FUN_141387290 body=47 status=ok
// SIG undefined FUN_141387290(void)

longlong FUN_141387290(void)

{
  if (DAT_146886a28 == 0) {
    FUN_141786440(&DAT_146886a28,&PTR_GetPrivateStaticClass_144913bd0);
  }
  return DAT_146886a28;
}



// FUNCTION 1413872c0 FUN_1413872c0 body=47 status=ok
// SIG undefined FUN_1413872c0(void)

longlong FUN_1413872c0(void)

{
  if (DAT_1468869f8 == 0) {
    FUN_141786a30(&DAT_1468869f8,&PTR_FUN_146340f80);
  }
  return DAT_1468869f8;
}



// FUNCTION 1413872f0 FUN_1413872f0 body=47 status=ok
// SIG undefined FUN_1413872f0(void)

longlong FUN_1413872f0(void)

{
  if (DAT_146886a00 == 0) {
    FUN_141786a30(&DAT_146886a00,&PTR_FUN_146340fc0);
  }
  return DAT_146886a00;
}



// FUNCTION 141387320 FUN_141387320 body=47 status=ok
// SIG undefined FUN_141387320(void)

longlong FUN_141387320(void)

{
  if (DAT_146886a08 == 0) {
    FUN_141786a30(&DAT_146886a08,&PTR_FUN_146341040);
  }
  return DAT_146886a08;
}



// FUNCTION 141387350 FUN_141387350 body=47 status=ok
// SIG undefined FUN_141387350(void)

longlong FUN_141387350(void)

{
  if (DAT_146886a10 == 0) {
    FUN_141786a30(&DAT_146886a10,&PTR_FUN_146341100);
  }
  return DAT_146886a10;
}



// FUNCTION 141387380 FUN_141387380 body=47 status=ok
// SIG undefined FUN_141387380(void)

longlong FUN_141387380(void)

{
  if (DAT_146886a18 == 0) {
    FUN_141786a30(&DAT_146886a18,&PTR_FUN_1463411c0);
  }
  return DAT_146886a18;
}



// FUNCTION 1413873b0 FUN_1413873b0 body=47 status=ok
// SIG undefined FUN_1413873b0(void)

longlong FUN_1413873b0(void)

{
  if (DAT_146886a20 == 0) {
    FUN_141786a30(&DAT_146886a20,&PTR_FUN_146341240);
  }
  return DAT_146886a20;
}



// FUNCTION 1413873f0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UPawnAction_Sequence::StaticClass(void)

{
  if (DAT_146886a40 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxPCTextChatMenuData",&DAT_146886a40,FUN_140447710,0xc0,
                  0x10000000,0,L"Engine",FUN_1413250a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14131be10,&LAB_140447700,0);
  }
  return DAT_146886a40;
}



// FUNCTION 1413874b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USoUIInputKeySelector::GetPrivateStaticClass(void)

{
  if (DAT_146886a60 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxPCTextChatMenuNotification",&DAT_146886a60,FUN_14138a580,
                  0x6a0,0x10000000,0,L"Engine",&LAB_1413889d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412d9d00,&LAB_140447700,0);
  }
  return DAT_146886a60;
}



// FUNCTION 141387560 FUN_141387560 body=47 status=ok
// SIG undefined FUN_141387560(void)

longlong FUN_141387560(void)

{
  if (DAT_146886a58 == 0) {
    FUN_141786440(&DAT_146886a58,&PTR_GetPrivateStaticClass_144914440);
  }
  return DAT_146886a58;
}



// FUNCTION 141387590 FUN_141387590 body=47 status=ok
// SIG undefined FUN_141387590(void)

longlong FUN_141387590(void)

{
  if (DAT_146886a48 == 0) {
    FUN_141786a30(&DAT_146886a48,&PTR_FUN_146341710);
  }
  return DAT_146886a48;
}



// FUNCTION 1413875c0 FUN_1413875c0 body=47 status=ok
// SIG undefined FUN_1413875c0(void)

longlong FUN_1413875c0(void)

{
  if (DAT_146886a50 == 0) {
    FUN_141786a30(&DAT_146886a50,&PTR_FUN_146341750);
  }
  return DAT_146886a50;
}



// FUNCTION 1413875f0 FUN_1413875f0 body=162 status=ok
// SIG undefined FUN_1413875f0(void)

longlong FUN_1413875f0(void)

{
  if (DAT_146886928 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxPassiveSkillIcon",&DAT_146886928,FUN_140447710,0x1e0,
                  0x10000008,0,L"Engine",FUN_1413889f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146886928;
}



// FUNCTION 1413876b0 FUN_1413876b0 body=162 status=ok
// SIG undefined FUN_1413876b0(void)

longlong FUN_1413876b0(void)

{
  if (DAT_146886a88 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxPCTextChatWidget",&DAT_146886a88,FUN_14138a5b0,0x6e0,
                  0x10000000,0,L"Engine",&LAB_1413889e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGSquadMemberWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146886a88;
}



// FUNCTION 141387760 FUN_141387760 body=47 status=ok
// SIG undefined FUN_141387760(void)

longlong FUN_141387760(void)

{
  if (DAT_146886a80 == 0) {
    FUN_141786440(&DAT_146886a80,&PTR_FUN_144914e70);
  }
  return DAT_146886a80;
}



// FUNCTION 141387790 FUN_141387790 body=47 status=ok
// SIG undefined FUN_141387790(void)

longlong FUN_141387790(void)

{
  if (DAT_146886a68 == 0) {
    FUN_141786a30(&DAT_146886a68,&PTR_FUN_1463418f0);
  }
  return DAT_146886a68;
}



// FUNCTION 1413877c0 FUN_1413877c0 body=47 status=ok
// SIG undefined FUN_1413877c0(void)

longlong FUN_1413877c0(void)

{
  if (DAT_146886a70 == 0) {
    FUN_141786a30(&DAT_146886a70,&PTR_FUN_146341980);
  }
  return DAT_146886a70;
}



// FUNCTION 1413877f0 FUN_1413877f0 body=47 status=ok
// SIG undefined FUN_1413877f0(void)

longlong FUN_1413877f0(void)

{
  if (DAT_146886a78 == 0) {
    FUN_141786a30(&DAT_146886a78,&PTR_FUN_146341a00);
  }
  return DAT_146886a78;
}



// FUNCTION 141387850 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGPoisonSplashProjectile::GetPrivateStaticClass(void)

{
  if (DAT_146886ab8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxPetCommandWidget",&DAT_146886ab8,FUN_14138a610,0x6d0,
                  0x10000000,0,L"Engine",FUN_141388ce0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGSquadMemberWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146886ab8;
}



// FUNCTION 141387900 FUN_141387900 body=47 status=ok
// SIG undefined FUN_141387900(void)

longlong FUN_141387900(void)

{
  if (DAT_146886ab0 == 0) {
    FUN_141786440(&DAT_146886ab0,&PTR_GetPrivateStaticClass_144915510);
  }
  return DAT_146886ab0;
}



// FUNCTION 141387930 FUN_141387930 body=47 status=ok
// SIG undefined FUN_141387930(void)

longlong FUN_141387930(void)

{
  if (DAT_146886a98 == 0) {
    FUN_141786a30(&DAT_146886a98,&PTR_FUN_146341d70);
  }
  return DAT_146886a98;
}



// FUNCTION 141387960 FUN_141387960 body=47 status=ok
// SIG undefined FUN_141387960(void)

longlong FUN_141387960(void)

{
  if (DAT_146886aa0 == 0) {
    FUN_141786a30(&DAT_146886aa0,&PTR_FUN_146341db0);
  }
  return DAT_146886aa0;
}



// FUNCTION 141387990 FUN_141387990 body=47 status=ok
// SIG undefined FUN_141387990(void)

longlong FUN_141387990(void)

{
  if (DAT_146886aa8 == 0) {
    FUN_141786a30(&DAT_146886aa8,&PTR_FUN_146341e30);
  }
  return DAT_146886aa8;
}



// FUNCTION 1413879c0 FUN_1413879c0 body=47 status=ok
// SIG undefined FUN_1413879c0(void)

longlong FUN_1413879c0(void)

{
  if (DAT_146886828 == 0) {
    FUN_141786440(&DAT_146886828,&PTR_GetPrivateStaticClass_144915790);
  }
  return DAT_146886828;
}



// FUNCTION 1413879f0 FUN_1413879f0 body=47 status=ok
// SIG undefined FUN_1413879f0(void)

longlong FUN_1413879f0(void)

{
  if (DAT_146886820 == 0) {
    FUN_141786a30(&DAT_146886820,&PTR_FUN_14633e100);
  }
  return DAT_146886820;
}



// FUNCTION 141387a40 FUN_141387a40 body=162 status=ok
// SIG undefined FUN_141387a40(void)

longlong FUN_141387a40(void)

{
  if (DAT_146886ac8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxPhotoModeMenuSpinner",&DAT_146886ac8,FUN_140447710,0x3b0,
                  0x10000008,0,L"Engine",FUN_141388ef0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141321fe0,&LAB_140447700,0);
  }
  return DAT_146886ac8;
}



// FUNCTION 141387af0 FUN_141387af0 body=162 status=ok
// SIG undefined FUN_141387af0(void)

longlong FUN_141387af0(void)

{
  if (DAT_146886ad8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxPhotoModeMenuSlider",&DAT_146886ad8,FUN_140447710,0x3f0,
                  0x1000000c,0,L"GbxUI",FUN_141388dc0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  AOnlineBeaconClient::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146886ad8;
}



// FUNCTION 141387ba0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AUGWeapon_Hook::GetPrivateStaticClass(void)

{
  if (DAT_146886b00 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxPhotoModeMenu",&DAT_146886b00,FUN_14138a640,0x790,
                  0x10000000,0,L"Engine",&LAB_141388db0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412d9d00,&LAB_140447700,0);
  }
  return DAT_146886b00;
}



// FUNCTION 141387c50 FUN_141387c50 body=162 status=ok
// SIG undefined FUN_141387c50(void)

longlong FUN_141387c50(void)

{
  if (DAT_146886840 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxOptionsControlsPanel",&DAT_146886840,FUN_140447710,0x1e0,
                  0x10000008,0,L"Engine",FUN_141388780,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146886840;
}



// FUNCTION 141387d00 FUN_141387d00 body=162 status=ok
// SIG undefined FUN_141387d00(void)

longlong FUN_141387d00(void)

{
  if (DAT_1468869d8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxPauseMenu",&DAT_1468869d8,FUN_14138a5e0,0x10c0,0x10000000,
                  0,L"Engine",FUN_141388b50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  AGMeshParameterCue::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468869d8;
}



// FUNCTION 141387db0 FUN_141387db0 body=47 status=ok
// SIG undefined FUN_141387db0(void)

longlong FUN_141387db0(void)

{
  if (DAT_146886af8 == 0) {
    FUN_141786440(&DAT_146886af8,&PTR_GetPrivateStaticClass_1449190a0);
  }
  return DAT_146886af8;
}



// FUNCTION 141387de0 FUN_141387de0 body=47 status=ok
// SIG undefined FUN_141387de0(void)

longlong FUN_141387de0(void)

{
  if (DAT_146886ae0 == 0) {
    FUN_141786a30(&DAT_146886ae0,&PTR_FUN_1463422d0);
  }
  return DAT_146886ae0;
}



// FUNCTION 141387e10 FUN_141387e10 body=47 status=ok
// SIG undefined FUN_141387e10(void)

longlong FUN_141387e10(void)

{
  if (DAT_146886ae8 == 0) {
    FUN_141786a30(&DAT_146886ae8,&PTR_FUN_146342350);
  }
  return DAT_146886ae8;
}



// FUNCTION 141387e40 FUN_141387e40 body=47 status=ok
// SIG undefined FUN_141387e40(void)

longlong FUN_141387e40(void)

{
  if (DAT_146886af0 == 0) {
    FUN_141786a30(&DAT_146886af0,&PTR_FUN_1463423d0);
  }
  return DAT_146886af0;
}



// FUNCTION 141387e90 FUN_141387e90 body=47 status=ok
// SIG undefined FUN_141387e90(void)

longlong FUN_141387e90(void)

{
  if (DAT_1468869d0 == 0) {
    FUN_141786440(&DAT_1468869d0,&PTR_FUN_14490f8f0);
  }
  return DAT_1468869d0;
}



// FUNCTION 141387ec0 FUN_141387ec0 body=47 status=ok
// SIG undefined FUN_141387ec0(void)

longlong FUN_141387ec0(void)

{
  if (DAT_146886940 == 0) {
    FUN_141786a30(&DAT_146886940,&PTR_FUN_14633ff20);
  }
  return DAT_146886940;
}



// FUNCTION 141387ef0 FUN_141387ef0 body=47 status=ok
// SIG undefined FUN_141387ef0(void)

longlong FUN_141387ef0(void)

{
  if (DAT_146886948 == 0) {
    FUN_141786a30(&DAT_146886948,&PTR_FUN_146340020);
  }
  return DAT_146886948;
}



// FUNCTION 141387f20 FUN_141387f20 body=47 status=ok
// SIG undefined FUN_141387f20(void)

longlong FUN_141387f20(void)

{
  if (DAT_146886950 == 0) {
    FUN_141786a30(&DAT_146886950,&PTR_FUN_1463400e0);
  }
  return DAT_146886950;
}



// FUNCTION 141387f50 FUN_141387f50 body=47 status=ok
// SIG undefined FUN_141387f50(void)

longlong FUN_141387f50(void)

{
  if (DAT_146886958 == 0) {
    FUN_141786a30(&DAT_146886958,&PTR_FUN_1463401a0);
  }
  return DAT_146886958;
}



// FUNCTION 141387f80 FUN_141387f80 body=47 status=ok
// SIG undefined FUN_141387f80(void)

longlong FUN_141387f80(void)

{
  if (DAT_146886960 == 0) {
    FUN_141786a30(&DAT_146886960,&PTR_FUN_1463402a0);
  }
  return DAT_146886960;
}



// FUNCTION 141387fb0 FUN_141387fb0 body=47 status=ok
// SIG undefined FUN_141387fb0(void)

longlong FUN_141387fb0(void)

{
  if (DAT_146886968 == 0) {
    FUN_141786a30(&DAT_146886968,&PTR_FUN_146340360);
  }
  return DAT_146886968;
}



// FUNCTION 141387fe0 FUN_141387fe0 body=47 status=ok
// SIG undefined FUN_141387fe0(void)

longlong FUN_141387fe0(void)

{
  if (DAT_146886970 == 0) {
    FUN_141786a30(&DAT_146886970,&PTR_FUN_146340420);
  }
  return DAT_146886970;
}



// FUNCTION 141388010 FUN_141388010 body=47 status=ok
// SIG undefined FUN_141388010(void)

longlong FUN_141388010(void)

{
  if (DAT_146886978 == 0) {
    FUN_141786a30(&DAT_146886978,&PTR_FUN_1463404e0);
  }
  return DAT_146886978;
}



// FUNCTION 141388040 FUN_141388040 body=47 status=ok
// SIG undefined FUN_141388040(void)

longlong FUN_141388040(void)

{
  if (DAT_146886980 == 0) {
    FUN_141786a30(&DAT_146886980,&PTR_FUN_1463405a0);
  }
  return DAT_146886980;
}



// FUNCTION 141388070 FUN_141388070 body=47 status=ok
// SIG undefined FUN_141388070(void)

longlong FUN_141388070(void)

{
  if (DAT_146886988 == 0) {
    FUN_141786a30(&DAT_146886988,&PTR_FUN_146340620);
  }
  return DAT_146886988;
}



// FUNCTION 1413880a0 FUN_1413880a0 body=47 status=ok
// SIG undefined FUN_1413880a0(void)

longlong FUN_1413880a0(void)

{
  if (DAT_146886990 == 0) {
    FUN_141786a30(&DAT_146886990,&PTR_FUN_1463406e0);
  }
  return DAT_146886990;
}



// FUNCTION 1413880d0 FUN_1413880d0 body=47 status=ok
// SIG undefined FUN_1413880d0(void)

longlong FUN_1413880d0(void)

{
  if (DAT_146886998 == 0) {
    FUN_141786a30(&DAT_146886998,&PTR_FUN_1463407a0);
  }
  return DAT_146886998;
}



// FUNCTION 141388100 FUN_141388100 body=47 status=ok
// SIG undefined FUN_141388100(void)

longlong FUN_141388100(void)

{
  if (DAT_1468869a0 == 0) {
    FUN_141786a30(&DAT_1468869a0,&PTR_FUN_1463408a0);
  }
  return DAT_1468869a0;
}



// FUNCTION 141388130 FUN_141388130 body=47 status=ok
// SIG undefined FUN_141388130(void)

longlong FUN_141388130(void)

{
  if (DAT_1468869a8 == 0) {
    FUN_141786a30(&DAT_1468869a8,&PTR_FUN_146340960);
  }
  return DAT_1468869a8;
}



// FUNCTION 141388160 FUN_141388160 body=47 status=ok
// SIG undefined FUN_141388160(void)

longlong FUN_141388160(void)

{
  if (DAT_1468869b0 == 0) {
    FUN_141786a30(&DAT_1468869b0,&PTR_FUN_1463409e0);
  }
  return DAT_1468869b0;
}



// FUNCTION 141388190 FUN_141388190 body=47 status=ok
// SIG undefined FUN_141388190(void)

longlong FUN_141388190(void)

{
  if (DAT_1468869b8 == 0) {
    FUN_141786a30(&DAT_1468869b8,&PTR_FUN_146340aa0);
  }
  return DAT_1468869b8;
}



// FUNCTION 1413881c0 FUN_1413881c0 body=47 status=ok
// SIG undefined FUN_1413881c0(void)

longlong FUN_1413881c0(void)

{
  if (DAT_1468869c0 == 0) {
    FUN_141786a30(&DAT_1468869c0,&PTR_FUN_146340b60);
  }
  return DAT_1468869c0;
}



// FUNCTION 1413881f0 FUN_1413881f0 body=47 status=ok
// SIG undefined FUN_1413881f0(void)

longlong FUN_1413881f0(void)

{
  if (DAT_1468869c8 == 0) {
    FUN_141786a30(&DAT_1468869c8,&PTR_FUN_146340c20);
  }
  return DAT_1468869c8;
}



// FUNCTION 141388220 FUN_141388220 body=53 status=ok
// SIG undefined FUN_141388220(void)

void FUN_141388220(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_144921998;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141388270 FUN_141388270 body=162 status=ok
// SIG undefined FUN_141388270(void)

longlong FUN_141388270(void)

{
  if (DAT_146886850 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxControlsKeybindingItem",&DAT_146886850,FUN_140447710,0x1a0
                  ,0x10000008,0,L"Engine",FUN_141388550,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146886850;
}



// FUNCTION 141388320 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AUGWeapon_Hook::GetPrivateStaticClass(void)

{
  if (DAT_146886898 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxOptionsMenu",&DAT_146886898,FUN_14138a4c0,0x790,0x10000000
                  ,0,L"Engine",&LAB_1413887f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412d9d00,&LAB_140447700,0);
  }
  return DAT_146886898;
}



// FUNCTION 1413883f0 FUN_1413883f0 body=47 status=ok
// SIG undefined FUN_1413883f0(void)

longlong FUN_1413883f0(void)

{
  if (DAT_146886890 == 0) {
    FUN_141786440(&DAT_146886890,&PTR_GetPrivateStaticClass_144910100);
  }
  return DAT_146886890;
}



// FUNCTION 141388420 FUN_141388420 body=47 status=ok
// SIG undefined FUN_141388420(void)

longlong FUN_141388420(void)

{
  if (DAT_146886868 == 0) {
    FUN_141786a30(&DAT_146886868,&PTR_FUN_14633e690);
  }
  return DAT_146886868;
}



// FUNCTION 141388450 FUN_141388450 body=47 status=ok
// SIG undefined FUN_141388450(void)

longlong FUN_141388450(void)

{
  if (DAT_146886870 == 0) {
    FUN_141786a30(&DAT_146886870,&PTR_FUN_14633e790);
  }
  return DAT_146886870;
}



// FUNCTION 141388480 FUN_141388480 body=47 status=ok
// SIG undefined FUN_141388480(void)

longlong FUN_141388480(void)

{
  if (DAT_146886878 == 0) {
    FUN_141786a30(&DAT_146886878,&PTR_FUN_14633e890);
  }
  return DAT_146886878;
}



// FUNCTION 1413884b0 FUN_1413884b0 body=47 status=ok
// SIG undefined FUN_1413884b0(void)

longlong FUN_1413884b0(void)

{
  if (DAT_146886880 == 0) {
    FUN_141786a30(&DAT_146886880,&PTR_FUN_14633e950);
  }
  return DAT_146886880;
}



// FUNCTION 1413884e0 FUN_1413884e0 body=47 status=ok
// SIG undefined FUN_1413884e0(void)

longlong FUN_1413884e0(void)

{
  if (DAT_146886888 == 0) {
    FUN_141786a30(&DAT_146886888,&PTR_FUN_14633ea10);
  }
  return DAT_146886888;
}



// FUNCTION 141388510 FUN_141388510 body=53 status=ok
// SIG undefined FUN_141388510(void)

void FUN_141388510(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_14491fea0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141388550 FUN_141388550 body=57 status=ok
// SIG undefined FUN_141388550(void)

void FUN_141388550(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_14491fbf8;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
  }
  return;
}



// FUNCTION 141388590 FUN_141388590 body=113 status=ok
// SIG undefined FUN_141388590(void)

void FUN_141388590(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_14491f3f0;
    puVar1[0x2f] = 0;
    puVar1[0x31] = 0;
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
  }
  return;
}



// FUNCTION 141388610 FUN_141388610 body=128 status=ok
// SIG undefined FUN_141388610(void)

void FUN_141388610(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined1 *)(puVar1 + 5) = 0;
    *puVar1 = &PTR_FUN_14482ca48;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
  }
  return;
}



// FUNCTION 141388690 FUN_141388690 body=225 status=ok
// SIG undefined FUN_141388690(void)

void FUN_141388690(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_14491f698;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x32] = 0;
    puVar1[0x33] = 0;
    *(undefined4 *)(puVar1 + 0x34) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x1a4) = 0;
    puVar1[0x36] = 0;
    *(undefined4 *)(puVar1 + 0x37) = 0;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    *(undefined4 *)(puVar1 + 0x3e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 500) = 0;
    puVar1[0x40] = 0;
    *(undefined4 *)(puVar1 + 0x41) = 0;
    puVar1[0x42] = 0;
    puVar1[0x43] = 0;
    puVar1[0x46] = 0;
    puVar1[0x47] = 0;
    *(undefined4 *)(puVar1 + 0x48) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x244) = 0;
    puVar1[0x4a] = 0;
    *(undefined4 *)(puVar1 + 0x4b) = 0;
    puVar1[0x4e] = 0;
  }
  return;
}



// FUNCTION 141388780 FUN_141388780 body=107 status=ok
// SIG undefined FUN_141388780(void)

void FUN_141388780(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_14491f950;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    puVar1[0x33] = 0;
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    *(undefined4 *)(puVar1 + 0x38) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    puVar1[0x3a] = 0;
    *(undefined4 *)(puVar1 + 0x3b) = 0;
  }
  return;
}



// FUNCTION 141388810 FUN_141388810 body=41 status=ok
// SIG undefined FUN_141388810(void)

void FUN_141388810(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140f5a170(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144920010;
  }
  return;
}



// FUNCTION 141388860 FUN_141388860 body=176 status=ok
// SIG undefined FUN_141388860(void)

void FUN_141388860(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144921bd0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    *(undefined1 *)(puVar1 + 0x11) = 0;
    puVar1[0x12] = 0;
    *(undefined4 *)(puVar1 + 0x13) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x9c) = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xd4) = 0;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
  }
  return;
}



// FUNCTION 141388910 FUN_141388910 body=177 status=ok
// SIG undefined FUN_141388910(void)

void FUN_141388910(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140e9aa30(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0xd0) = 7;
    *puVar1 = &PTR_FUN_144921e48;
    *(undefined4 *)((longlong)puVar1 + 0x684) = 0x41400000;
    puVar1[0x9b] = &PTR_LAB_1449223b0;
    puVar1[0xd1] = 0;
    puVar1[0xd2] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 0xd1,0);
    FGenericPlatformString::Memcpy(puVar1[0xd1],L"#00CCFF",0x10);
    puVar1[0xdb] = 0;
    *(undefined2 *)(puVar1 + 0xdc) = 0;
    *(undefined1 *)(puVar1 + 0xd3) = 1;
  }
  return;
}



// FUNCTION 1413889f0 FUN_1413889f0 body=213 status=ok
// SIG undefined FUN_1413889f0(void)

void FUN_1413889f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    puVar1[0x2e] = 0xffffffffffffffff;
    *puVar1 = &PTR_FUN_144920f58;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
    *(undefined4 *)(puVar1 + 0x32) = 0;
    puVar1[0x35] = 0;
    *(undefined4 *)(puVar1 + 0x36) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x1b4) = 0;
    *(undefined4 *)(puVar1 + 0x37) = 0xffffffff;
    *(undefined8 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined1 *)(puVar1 + 0x39) = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0x1d;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 0x3a,0);
    FGenericPlatformString::Memcpy(puVar1[0x3a],L"PassiveSkillTexture%i_nopack",0x3a);
    return;
  }
  return;
}



// FUNCTION 141388ad0 FUN_141388ad0 body=124 status=ok
// SIG undefined FUN_141388ad0(void)

void FUN_141388ad0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140f5a170(puVar1,param_1);
    *puVar1 = &PTR_FUN_144920990;
    puVar1[0xc6] = 0;
    puVar1[199] = 0;
    puVar1[200] = 0;
    puVar1[0xc9] = 0;
    InitializeSRWLock((PSRWLOCK)(puVar1 + 0xca));
    puVar1[0xcb] = 0;
    puVar1[0xcc] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x66c) = 0;
    *(undefined4 *)(puVar1 + 0xcd) = 0xffffffff;
  }
  return;
}



// FUNCTION 141388b50 FUN_141388b50 body=397 status=ok
// SIG undefined FUN_141388b50(void)

void FUN_141388b50(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14136bc70(puVar1,param_1);
    *puVar1 = &PTR_FUN_144921258;
    puVar1[0x9b] = &PTR_LAB_1449217c8;
    puVar1[0x13a] = &PTR_LAB_144921948;
    FUN_142741540(puVar1 + 0x13c);
    *(undefined4 *)(puVar1 + 0x1fc) = 0x3f800000;
    puVar1[0x200] = 0;
    puVar1[0x201] = 0;
    *(undefined4 *)(puVar1 + 0x1fd) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xfec) = 0;
    puVar1[0x1ff] = 0;
    *(undefined4 *)(puVar1 + 0x201) = 0;
    if (0x7fffffff < *(uint *)((longlong)puVar1 + 0x100c)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 0x200,0);
    }
    if ((undefined2 *)puVar1[0x200] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[0x200] = 0;
    }
    *(undefined8 *)((longlong)puVar1 + 0xfec) = 0;
    *(undefined4 *)(puVar1 + 0x1fd) = 0xffffffff;
    puVar1[0x1ff] = 0;
    *(undefined4 *)(puVar1 + 0x201) = 0;
    if ((*(int *)((longlong)puVar1 + 0x100c) < 0) && (*(int *)((longlong)puVar1 + 0x100c) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 0x200,0);
    }
    if ((undefined2 *)puVar1[0x200] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[0x200] = 0;
    }
    *(undefined4 *)(puVar1 + 0x1fe) = 0;
    puVar1[0x202] = 0;
    puVar1[0x203] = 0;
    puVar1[0x204] = 0;
    puVar1[0x205] = 0;
    FTickFunction::FTickFunction(puVar1 + 0x206);
    *(undefined1 *)(puVar1 + 0x210) = 0;
    puVar1[0x206] = &PTR_FUN_144921240;
    puVar1[0x212] = 0;
    puVar1[0x213] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x10a4) = 0;
    *(undefined4 *)(puVar1 + 0x214) = 0xffffffff;
    *(undefined2 *)(puVar1 + 0x215) = 0x10d;
    puVar1[0x216] = 0;
  }
  return;
}



// FUNCTION 141388ce0 FUN_141388ce0 body=205 status=ok
// SIG undefined FUN_141388ce0(void)

void FUN_141388ce0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140f5a170(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144922bb8;
    puVar1[0xc6] = 0;
    puVar1[199] = 0;
    puVar1[200] = 0;
    puVar1[0xc9] = 0;
    puVar1[0xca] = 0;
    puVar1[0xcb] = 0;
    puVar1[0xcc] = 0;
    puVar1[0xcd] = 0;
    puVar1[0xd2] = 0x3dcccccd;
    *(undefined1 *)(puVar1 + 0xd3) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x69c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0xd4) = 3;
    *(undefined4 *)((longlong)puVar1 + 0x6a4) = 3;
    FName::FName(puVar1 + 0xd5,"Skill_Used_Fail",1);
    InitializeSRWLock((PSRWLOCK)(puVar1 + 0xd7));
    *(undefined2 *)(puVar1 + 0xd8) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x6c4) = 0xbf800000;
  }
  return;
}



// FUNCTION 141388dc0 FUN_141388dc0 body=301 status=ok
// SIG undefined FUN_141388dc0(void)

void FUN_141388dc0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8;
  undefined2 local_res9;
  undefined1 local_resb;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413205b0(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x5b) = 0xffffffff;
    puVar1[0x59] = 0;
    puVar1[0x5a] = 0;
    *(undefined1 *)((longlong)puVar1 + 0x2f4) = 0;
    puVar1[0x5f] = 0;
    *(undefined4 *)(puVar1 + 0x60) = 0;
    puVar1[0x61] = 0;
    *puVar1 = &PTR_FUN_144923240;
    puVar1[0x2e] = &PTR_LAB_144923578;
    *(undefined4 *)(puVar1 + 99) = 5;
    *(undefined4 *)((longlong)puVar1 + 0x31c) = 4;
    *(undefined4 *)(puVar1 + 100) = 0x14;
    FWeakObjectPtr::operator=(puVar1 + 0x65,0);
    puVar1[0x66] = 0;
    puVar1[0x67] = 0;
    puVar1[0x68] = 0;
    puVar1[0x69] = 0;
    puVar1[0x6e] = 0;
    puVar1[0x6f] = 0;
    *(undefined4 *)(puVar1 + 0x70) = 0;
    *(undefined1 *)((longlong)puVar1 + 900) = 0;
    local_res9 = 0xfdd4;
    local_res8 = 2;
    local_resb = 0xff;
    FLinearColor::FLinearColor(puVar1 + 0x71,&local_res8);
    *puVar1 = &PTR_FUN_144923950;
    puVar1[0x2e] = &PTR_LAB_144923c88;
    FUN_141388ff0(puVar1 + 0x73);
  }
  return;
}



// FUNCTION 141388ef0 FUN_141388ef0 body=245 status=ok
// SIG undefined FUN_141388ef0(void)

void FUN_141388ef0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8;
  undefined2 local_res9;
  undefined1 local_resb;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413205b0(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x5b) = 0xffffffff;
    puVar1[0x59] = 0;
    puVar1[0x5a] = 0;
    *(undefined1 *)((longlong)puVar1 + 0x2f4) = 0;
    puVar1[0x5f] = 0;
    *(undefined4 *)(puVar1 + 0x60) = 0;
    puVar1[0x61] = 0;
    *puVar1 = &PTR_FUN_14482c6c0;
    puVar1[0x2e] = &PTR_LAB_14482c9f8;
    puVar1[99] = 0;
    puVar1[100] = 0;
    puVar1[0x65] = 0;
    *(undefined4 *)(puVar1 + 0x66) = 0;
    *(undefined4 *)(puVar1 + 0x67) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x33c) = 0;
    local_res9 = 0xfdd4;
    local_res8 = 2;
    local_resb = 0xff;
    FLinearColor::FLinearColor(puVar1 + 0x68,&local_res8);
    *(undefined4 *)(puVar1 + 0x6a) = 0;
    *puVar1 = &PTR_FUN_1449235c8;
    *(undefined1 *)((longlong)puVar1 + 0x354) = 0;
    puVar1[0x2e] = &PTR_LAB_144923900;
    FUN_141388ff0(puVar1 + 0x6b);
  }
  return;
}



// FUNCTION 141388ff0 FUN_141388ff0 body=99 status=ok
// SIG undefined FUN_141388ff0(void)

longlong FUN_141388ff0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1404b03b0();
  FText::FText(param_1,uVar1);
  *(undefined2 *)(param_1 + 0x18) = 0x100;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x34) = 5;
  *(undefined4 *)(param_1 + 0x38) = 4;
  *(undefined4 *)(param_1 + 0x3c) = 0x28;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return param_1;
}



// FUNCTION 141389060 FUN_141389060 body=694 status=ok
// SIG undefined FUN_141389060(void)

undefined8 * FUN_141389060(undefined8 *param_1)

{
  FUN_140e9aa30();
  *param_1 = &PTR_FUN_14491ecb8;
  param_1[0x9b] = &PTR_LAB_14491f220;
  param_1[0xd0] = &PTR_LAB_14491f3a0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6ac) = 0;
  param_1[0xd7] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x6cc)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xd8,0);
  }
  if ((undefined2 *)param_1[0xd8] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xd8] = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x6ac) = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0xffffffff;
  param_1[0xd7] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  if ((*(int *)((longlong)param_1 + 0x6cc) < 0) && (*(int *)((longlong)param_1 + 0x6cc) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xd8,0);
  }
  if ((undefined2 *)param_1[0xd8] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xd8] = 0;
  }
  *(undefined4 *)(param_1 + 0xd6) = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xda) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6d4) = 0;
  param_1[0xdc] = 0;
  *(undefined4 *)(param_1 + 0xde) = 0;
  if ((*(int *)((longlong)param_1 + 0x6f4) < 0) && (*(int *)((longlong)param_1 + 0x6f4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xdd,0);
  }
  if ((undefined2 *)param_1[0xdd] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xdd] = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x6d4) = 0;
  *(undefined4 *)(param_1 + 0xda) = 0xffffffff;
  param_1[0xdc] = 0;
  *(undefined4 *)(param_1 + 0xde) = 0;
  if ((*(int *)((longlong)param_1 + 0x6f4) < 0) && (*(int *)((longlong)param_1 + 0x6f4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xdd,0);
  }
  if ((undefined2 *)param_1[0xdd] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xdd] = 0;
  }
  *(undefined4 *)(param_1 + 0xdb) = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6fc) = 0;
  param_1[0xe1] = 0;
  *(undefined4 *)(param_1 + 0xe3) = 0;
  if ((*(int *)((longlong)param_1 + 0x71c) < 0) && (*(int *)((longlong)param_1 + 0x71c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xe2,0);
  }
  if ((undefined2 *)param_1[0xe2] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xe2] = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x6fc) = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0xffffffff;
  param_1[0xe1] = 0;
  *(undefined4 *)(param_1 + 0xe3) = 0;
  if ((*(int *)((longlong)param_1 + 0x71c) < 0) && (*(int *)((longlong)param_1 + 0x71c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xe2,0);
  }
  if ((undefined2 *)param_1[0xe2] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xe2] = 0;
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  FText::FText(param_1 + 0xe4);
  *(undefined4 *)(param_1 + 0xe7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x73c) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x744) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  *(undefined4 *)(param_1 + 0xee) = 0;
  *(undefined1 *)((longlong)param_1 + 0x774) = 0;
  return param_1;
}



// FUNCTION 141389320 FUN_141389320 body=533 status=ok
// SIG undefined FUN_141389320(void)

undefined8 * FUN_141389320(undefined8 *param_1)

{
  FUN_14106e9c0();
  *param_1 = &PTR_FUN_1448a8128;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 1;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x39) = DAT_1468b5d88._4_4_;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1f6) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x42) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x43));
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x45));
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *param_1 = &PTR_FUN_1449205e8;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x5b));
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined1 *)((longlong)param_1 + 0x2f1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  param_1[99] = 0;
  *(undefined2 *)(param_1 + 100) = 0;
  *(undefined1 *)((longlong)param_1 + 0x322) = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0x3f7eb852;
  *(undefined2 *)(param_1 + 0x68) = 0;
  return param_1;
}



// FUNCTION 141389540 FUN_141389540 body=238 status=ok
// SIG undefined FUN_141389540(void)

void FUN_141389540(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 0x18);
    do {
      if (plVar7[1] != 0) {
        FMemory::Free();
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
      plVar4 = (longlong *)plVar7[-2];
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



// FUNCTION 141389630 ~<lambda_8a742092c3320b936852ba6bb8129b9b> body=156 status=ok
// SIG undefined ~<lambda_8a742092c3320b936852ba6bb8129b9b>(void)

void <lambda_8a742092c3320b936852ba6bb8129b9b>::~<lambda_8a742092c3320b936852ba6bb8129b9b>
               (longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
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



// FUNCTION 141389730 FUN_141389730 body=52 status=ok
// SIG undefined FUN_141389730(void)

undefined8 FUN_141389730(undefined8 param_1,ulonglong param_2)

{
  FTickFunction::~FTickFunction();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141389770 FUN_141389770 body=307 status=ok
// SIG undefined FUN_141389770(void)

longlong FUN_141389770(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 600) = 0;
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x210);
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x1c0,0);
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x170,0);
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
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
    FMemory::operator_delete(param_1,0x280);
  }
  return param_1;
}



// FUNCTION 1413898b0 FUN_1413898b0 body=157 status=ok
// SIG undefined FUN_1413898b0(void)

longlong FUN_1413898b0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 400);
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
    FMemory::operator_delete(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 141389950 FUN_141389950 body=212 status=ok
// SIG undefined FUN_141389950(void)

longlong FUN_141389950(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x728);
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
  if (*(longlong *)(param_1 + 0x710) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6c0) != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x688);
  *(undefined ***)(param_1 + 0x680) = &PTR_FUN_14483a858;
  FUN_140e9c5f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x790);
  }
  return param_1;
}



// FUNCTION 141389a30 FUN_141389a30 body=222 status=ok
// SIG undefined FUN_141389a30(void)

longlong FUN_141389a30(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x328);
  plVar3 = *(longlong **)(param_1 + 0x290);
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
  plVar3 = *(longlong **)(param_1 + 0x268);
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
  if (*(longlong *)(param_1 + 0x170) != 0) {
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
    FMemory::operator_delete(param_1,0x350);
  }
  return param_1;
}



// FUNCTION 141389b10 FUN_141389b10 body=173 status=ok
// SIG undefined FUN_141389b10(void)

longlong FUN_141389b10(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedRef<FString,1>,unsigned_short>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xa0,0);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  <lambda_8a742092c3320b936852ba6bb8129b9b>::~<lambda_8a742092c3320b936852ba6bb8129b9b>
            (param_1 + 0x58);
  FUN_141389540(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 141389bc0 FUN_141389bc0 body=73 status=ok
// SIG undefined FUN_141389bc0(void)

longlong FUN_141389bc0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x688) != 0) {
    FMemory::Free();
  }
  FUN_140e9c5f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6f0);
  }
  return param_1;
}



// FUNCTION 141389c10 FUN_141389c10 body=186 status=ok
// SIG undefined FUN_141389c10(void)

longlong FUN_141389c10(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x6b0);
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
  if (*(longlong *)(param_1 + 0x688) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x660) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x630) != 0) {
    FMemory::Free();
  }
  FUN_140f5a560(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6e0);
  }
  return param_1;
}



// FUNCTION 141389cd0 FUN_141389cd0 body=210 status=ok
// SIG undefined FUN_141389cd0(void)

longlong FUN_141389cd0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 0x1a0);
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
  plVar3 = *(longlong **)(param_1 + 0x188);
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
    FMemory::operator_delete(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 141389db0 FUN_141389db0 body=107 status=ok
// SIG undefined FUN_141389db0(void)

longlong FUN_141389db0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x658) != 0) {
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
    FMemory::operator_delete(param_1,0x670);
  }
  return param_1;
}



// FUNCTION 141389e20 FUN_141389e20 body=212 status=ok
// SIG undefined FUN_141389e20(void)

longlong FUN_141389e20(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FTickFunction::~FTickFunction(param_1 + 0x1030);
  plVar4 = *(longlong **)(param_1 + 0x1018);
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
  if (*(longlong *)(param_1 + 0x1000) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xfc8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xfb8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x9d0) = &PTR_FUN_14483a858;
  FUN_141381b30(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10c0);
  }
  return param_1;
}



// FUNCTION 141389f00 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FAnimInstanceProxyFactory::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140f5a560();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6d0);
  }
  return param_1;
}



// FUNCTION 141389f40 FUN_141389f40 body=176 status=ok
// SIG undefined FUN_141389f40(void)

longlong FUN_141389f40(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_1 + 0x3d8);
  plVar4 = *(longlong **)(param_1 + 0x3a0);
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
  if (*(longlong *)(param_1 + 0x370) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f8);
  FUN_141320cb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3f0);
  }
  return param_1;
}



// FUNCTION 141389ff0 FUN_141389ff0 body=171 status=ok
// SIG undefined FUN_141389ff0(void)

longlong FUN_141389ff0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_1 + 0x398);
  plVar4 = *(longlong **)(param_1 + 0x360);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x328);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f8);
  FUN_141320cb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3b0);
  }
  return param_1;
}



// FUNCTION 14138a0a0 FUN_14138a0a0 body=85 status=ok
// SIG undefined FUN_14138a0a0(void)

longlong FUN_14138a0a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x370) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f8);
  FUN_141320cb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3a0);
  }
  return param_1;
}



// FUNCTION 14138a100 FUN_14138a100 body=51 status=ok
// SIG undefined FUN_14138a100(void)

void FUN_14138a100(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x60);
  FTickFunction::FTickFunction(param_2);
  *(undefined1 *)(param_2 + 10) = 0;
  *param_2 = &PTR_FUN_144921240;
  return;
}



// FUNCTION 14138a140 FUN_14138a140 body=55 status=ok
// SIG undefined FUN_14138a140(void)

void FUN_14138a140(void)

{
  undefined8 uVar1;
  
  if (DAT_1468863c8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468863c8 = GetStaticEnum(FUN_14138a9a0,uVar1,L"EOverheadNameplateDisplayState");
  }
  return;
}



// FUNCTION 14138a180 FUN_14138a180 body=55 status=ok
// SIG undefined FUN_14138a180(void)

void FUN_14138a180(void)

{
  undefined8 uVar1;
  
  if (DAT_1468863d0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468863d0 = GetStaticEnum(FUN_14138a9d0,uVar1,L"EOverheadNameplateHealthState");
  }
  return;
}



// FUNCTION 14138a1c0 FUN_14138a1c0 body=55 status=ok
// SIG undefined FUN_14138a1c0(void)

void FUN_14138a1c0(void)

{
  undefined8 uVar1;
  
  if (DAT_1468863d8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468863d8 = GetStaticEnum(FUN_14138aa00,uVar1,L"EPetCommandWidgetState");
  }
  return;
}



// FUNCTION 14138a200 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UParticleLODLevel::GetPrivateStaticClass(void)

{
  if (DAT_146886830 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxOptionBase",&DAT_146886830,FUN_14138a490,0xb8,0x10000000,0
                  ,L"Engine",FUN_141388610,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146886830;
}



// FUNCTION 14138a2a0 FUN_14138a2a0 body=6 status=ok
// SIG undefined FUN_14138a2a0(void)

undefined8 FUN_14138a2a0(void)

{
  return 0x9a4a6182;
}



// FUNCTION 14138a2b0 FUN_14138a2b0 body=6 status=ok
// SIG undefined FUN_14138a2b0(void)

undefined8 FUN_14138a2b0(void)

{
  return 0xe825ccdb;
}



// FUNCTION 14138a2c0 FUN_14138a2c0 body=6 status=ok
// SIG undefined FUN_14138a2c0(void)

undefined8 FUN_14138a2c0(void)

{
  return 0x7efa46ba;
}



// FUNCTION 14138a330 FUN_14138a330 body=178 status=ok
// SIG undefined FUN_14138a330(void)

undefined4 FUN_14138a330(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_18;
  undefined8 local_10;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xc0);
  local_10 = 0;
  local_18 = lVar3;
  if (lVar3 != 0) {
    uVar4 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
  }
  FUN_142ed36d0(param_1 + -0x680,&local_18,0);
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0xc0) = local_res8;
  *(undefined4 *)(param_1 + 0xc4) = local_resc;
  cVar2 = FUN_142ebd930(param_1 + -0x680);
  if ((cVar2 != '\0') && (*(longlong *)(param_1 + -0xd0) != 0)) {
    FUN_142f11000(*(longlong *)(param_1 + -0xd0),1);
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + -0xf8);
  *(undefined4 *)(param_1 + -0xf8) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 14138a3f0 FUN_14138a3f0 body=126 status=ok
// SIG undefined FUN_14138a3f0(void)

undefined4 FUN_14138a3f0(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar3 = FUN_142eb65a0(param_1 + -0x680);
  FWeakObjectPtr::operator=(param_1 + 0xc0,uVar3);
  local_18 = 0;
  uStack_10 = 0;
  FUN_142ed36d0(param_1 + -0x680,&local_18,0);
  cVar2 = FUN_142ebd930(param_1 + -0x680);
  if ((cVar2 != '\0') && (*(longlong *)(param_1 + -0xd0) != 0)) {
    FUN_142f11000(*(longlong *)(param_1 + -0xd0),0);
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + -0xf8);
  *(undefined4 *)(param_1 + -0xf8) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 14138a480 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void AOnlineBeaconClient::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 14138a490 FUN_14138a490 body=34 status=ok
// SIG undefined FUN_14138a490(void)

void FUN_14138a490(void)

{
  undefined8 uVar1;
  
  uVar1 = UParticleLODLevel::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnUnimplementedOptionClicked_14491f940,1)
  ;
  return;
}



// FUNCTION 14138a4c0 FUN_14138a4c0 body=34 status=ok
// SIG undefined FUN_14138a4c0(void)

void FUN_14138a4c0(void)

{
  undefined8 uVar1;
  
  uVar1 = AUGWeapon_Hook::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_OnContentPanelSelectionChanged_14491ffc0,5);
  return;
}



// FUNCTION 14138a4f0 FUN_14138a4f0 body=34 status=ok
// SIG undefined FUN_14138a4f0(void)

void FUN_14138a4f0(void)

{
  undefined8 uVar1;
  
  uVar1 = UGSquadMemberWidget::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_OnBoundaryWarningStateChanged_1449205d8,1);
  return;
}



// FUNCTION 14138a520 FUN_14138a520 body=34 status=ok
// SIG undefined FUN_14138a520(void)

void FUN_14138a520(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141387000();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnPlayerLocationChanged_144920980,1);
  return;
}



// FUNCTION 14138a550 FUN_14138a550 body=34 status=ok
// SIG undefined FUN_14138a550(void)

void FUN_14138a550(void)

{
  undefined8 uVar1;
  
  uVar1 = AGImpulseWindProjectile::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnCloseButtonClicked_144922540,6);
  return;
}



// FUNCTION 14138a580 FUN_14138a580 body=34 status=ok
// SIG undefined FUN_14138a580(void)

void FUN_14138a580(void)

{
  undefined8 uVar1;
  
  uVar1 = USoUIInputKeySelector::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnChatButtonClicked_1449225a0,2);
  return;
}



// FUNCTION 14138a5b0 FUN_14138a5b0 body=34 status=ok
// SIG undefined FUN_14138a5b0(void)

void FUN_14138a5b0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413876b0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnMenuActivated_144922b88,3);
  return;
}



// FUNCTION 14138a5e0 FUN_14138a5e0 body=34 status=ok
// SIG undefined FUN_14138a5e0(void)

void FUN_14138a5e0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141387d00();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnAchievementsClicked_144921ab0,0x12);
  return;
}



// FUNCTION 14138a610 FUN_14138a610 body=34 status=ok
// SIG undefined FUN_14138a610(void)

void FUN_14138a610(void)

{
  undefined8 uVar1;
  
  uVar1 = AGPoisonSplashProjectile::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnInputDeviceChanged_144923210,3);
  return;
}



// FUNCTION 14138a640 FUN_14138a640 body=34 status=ok
// SIG undefined FUN_14138a640(void)

void FUN_14138a640(void)

{
  undefined8 uVar1;
  
  uVar1 = AUGWeapon_Hook::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnOptionSetButtonClicked_144923cd8,3);
  return;
}



// FUNCTION 14138a670 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146886900 == 0) {
    uVar1 = FUN_14138a2a0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146886900 = GetStaticStruct(FUN_14138aa30,uVar2,L"GFxPassiveSkillWidgetSlotData",0x10,uVar1)
    ;
  }
  return;
}



// FUNCTION 14138a6d0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146886930 == 0) {
    uVar1 = FUN_14138a2b0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146886930 = GetStaticStruct(FUN_14138aa60,uVar2,L"PauseMenuTickFunction",0x60,uVar1);
  }
  return;
}



// FUNCTION 14138a730 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146886858 == 0) {
    uVar1 = FUN_14138a2c0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146886858 = GetStaticStruct(FUN_14138aa90,uVar2,L"SubtitleBarItems",0x40,uVar1);
  }
  return;
}



// FUNCTION 14138a790 FUN_14138a790 body=47 status=ok
// SIG undefined FUN_14138a790(void)

longlong FUN_14138a790(void)

{
  if (DAT_146886848 == 0) {
    FUN_141786440(&DAT_146886848,&PTR_FUN_14491c5a0);
  }
  return DAT_146886848;
}



// FUNCTION 14138a7c0 FUN_14138a7c0 body=47 status=ok
// SIG undefined FUN_14138a7c0(void)

longlong FUN_14138a7c0(void)

{
  if (DAT_1468868a0 == 0) {
    FUN_141786440(&DAT_1468868a0,&PTR_GetPrivateStaticClass_144911200);
  }
  return DAT_1468868a0;
}



// FUNCTION 14138a7f0 FUN_14138a7f0 body=47 status=ok
// SIG undefined FUN_14138a7f0(void)

longlong FUN_14138a7f0(void)

{
  if (DAT_1468868b0 == 0) {
    FUN_141786440(&DAT_1468868b0,&PTR_FUN_1449114b0);
  }
  return DAT_1468868b0;
}



// FUNCTION 14138a820 FUN_14138a820 body=47 status=ok
// SIG undefined FUN_14138a820(void)

longlong FUN_14138a820(void)

{
  if (DAT_146886838 == 0) {
    FUN_141786440(&DAT_146886838,&PTR_FUN_14491b620);
  }
  return DAT_146886838;
}



// FUNCTION 14138a850 FUN_14138a850 body=47 status=ok
// SIG undefined FUN_14138a850(void)

longlong FUN_14138a850(void)

{
  if (DAT_1468869e8 == 0) {
    FUN_141786440(&DAT_1468869e8,&PTR_FUN_144913260);
  }
  return DAT_1468869e8;
}



// FUNCTION 14138a880 FUN_14138a880 body=47 status=ok
// SIG undefined FUN_14138a880(void)

longlong FUN_14138a880(void)

{
  if (DAT_146886a38 == 0) {
    FUN_141786440(&DAT_146886a38,&PTR_StaticClass_1449141a0);
  }
  return DAT_146886a38;
}



// FUNCTION 14138a8b0 FUN_14138a8b0 body=47 status=ok
// SIG undefined FUN_14138a8b0(void)

longlong FUN_14138a8b0(void)

{
  if (DAT_146886920 == 0) {
    FUN_141786440(&DAT_146886920,&PTR_FUN_144914b40);
  }
  return DAT_146886920;
}



// FUNCTION 14138a8e0 FUN_14138a8e0 body=47 status=ok
// SIG undefined FUN_14138a8e0(void)

longlong FUN_14138a8e0(void)

{
  if (DAT_146886910 == 0) {
    FUN_141786440(&DAT_146886910,&PTR_GetPrivateStaticClass_144914730);
  }
  return DAT_146886910;
}



// FUNCTION 14138a910 FUN_14138a910 body=47 status=ok
// SIG undefined FUN_14138a910(void)

longlong FUN_14138a910(void)

{
  if (DAT_146886ad0 == 0) {
    FUN_141786440(&DAT_146886ad0,&PTR_FUN_144917c60);
  }
  return DAT_146886ad0;
}



// FUNCTION 14138a940 FUN_14138a940 body=47 status=ok
// SIG undefined FUN_14138a940(void)

longlong FUN_14138a940(void)

{
  if (DAT_146886ac0 == 0) {
    FUN_141786440(&DAT_146886ac0,&PTR_FUN_1449171a0);
  }
  return DAT_146886ac0;
}



// FUNCTION 14138a970 FUN_14138a970 body=47 status=ok
// SIG undefined FUN_14138a970(void)

longlong FUN_14138a970(void)

{
  if (DAT_1468869e0 == 0) {
    FUN_141786a30(&DAT_1468869e0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146340e50);
  }
  return DAT_1468869e0;
}



// FUNCTION 14138a9a0 FUN_14138a9a0 body=47 status=ok
// SIG undefined FUN_14138a9a0(void)

longlong FUN_14138a9a0(void)

{
  if (DAT_1468868d8 == 0) {
    FUN_1417866a0(&DAT_1468868d8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146342c10);
  }
  return DAT_1468868d8;
}



// FUNCTION 14138a9d0 FUN_14138a9d0 body=47 status=ok
// SIG undefined FUN_14138a9d0(void)

longlong FUN_14138a9d0(void)

{
  if (DAT_1468868e0 == 0) {
    FUN_1417866a0(&DAT_1468868e0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146342c60);
  }
  return DAT_1468868e0;
}



// FUNCTION 14138aa00 FUN_14138aa00 body=47 status=ok
// SIG undefined FUN_14138aa00(void)

longlong FUN_14138aa00(void)

{
  if (DAT_146886a90 == 0) {
    FUN_1417866a0(&DAT_146886a90,&PTR_Z_Construct_UPackage__Script_MechWarrior_146342cb0);
  }
  return DAT_146886a90;
}



// FUNCTION 14138aa30 FUN_14138aa30 body=47 status=ok
// SIG undefined FUN_14138aa30(void)

longlong FUN_14138aa30(void)

{
  if (DAT_146886908 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146886908,&PTR_Z_Construct_UPackage__Script_MechWarrior_14633fae0);
  }
  return DAT_146886908;
}



// FUNCTION 14138aa60 FUN_14138aa60 body=47 status=ok
// SIG undefined FUN_14138aa60(void)

longlong FUN_14138aa60(void)

{
  if (DAT_146886938 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146886938,&PTR_Z_Construct_UPackage__Script_MechWarrior_14633fe50);
  }
  return DAT_146886938;
}



// FUNCTION 14138aa90 FUN_14138aa90 body=47 status=ok
// SIG undefined FUN_14138aa90(void)

longlong FUN_14138aa90(void)

{
  if (DAT_146886860 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146886860,&PTR_Z_Construct_UPackage__Script_MechWarrior_14633e600);
  }
  return DAT_146886860;
}



// FUNCTION 14138aac0 FUN_14138aac0 body=388 status=ok
// SIG undefined FUN_14138aac0(void)

void FUN_14138aac0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140f5a170(puVar1,param_1);
    *puVar1 = &PTR_FUN_1449225c0;
    puVar1[0xc6] = 0;
    puVar1[199] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 0xc6,0);
    FGenericPlatformString::Memcpy(puVar1[0xc6],L"#00CCFF",0x10);
    *(undefined4 *)(puVar1 + 200) = 5;
    *(undefined4 *)((longlong)puVar1 + 0x644) = 0x41200000;
    puVar1[0xcc] = 0;
    puVar1[0xcd] = 0;
    *(undefined4 *)(puVar1 + 0xc9) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x64c) = 0;
    puVar1[0xcb] = 0;
    *(undefined4 *)(puVar1 + 0xcd) = 0;
    if (0x7fffffff < *(uint *)((longlong)puVar1 + 0x66c)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 0xcc,0);
    }
    if ((undefined2 *)puVar1[0xcc] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[0xcc] = 0;
    }
    *(undefined4 *)(puVar1 + 0xca) = 0;
    puVar1[0xd1] = 0;
    puVar1[0xd2] = 0;
    *(undefined4 *)(puVar1 + 0xce) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x674) = 0;
    puVar1[0xd0] = 0;
    *(undefined4 *)(puVar1 + 0xd2) = 0;
    if ((*(int *)((longlong)puVar1 + 0x694) < 0) && (*(int *)((longlong)puVar1 + 0x694) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 0xd1,0);
    }
    if ((undefined2 *)puVar1[0xd1] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[0xd1] = 0;
    }
    *(undefined4 *)(puVar1 + 0xcf) = 0;
    *(undefined4 *)(puVar1 + 0xd3) = 0x41800000;
    puVar1[0xd4] = 0;
    puVar1[0xd5] = 0;
    puVar1[0xd6] = 0;
    *(undefined2 *)(puVar1 + 0xd7) = 0x100;
    puVar1[0xda] = 0;
    *(undefined1 *)(puVar1 + 0xdb) = 0;
  }
  return;
}



// FUNCTION 14138ac50 FUN_14138ac50 body=334 status=ok
// SIG undefined FUN_14138ac50(void)

void FUN_14138ac50(undefined8 param_1,longlong param_2)

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
  FUN_1411a2980(param_1,local_res10,puVar6);
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



// FUNCTION 14138ada0 FUN_14138ada0 body=130 status=ok
// SIG undefined FUN_14138ada0(void)

void FUN_14138ada0(undefined8 param_1,longlong param_2)

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
  FUN_140ffcad0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 14138ae30 FUN_14138ae30 body=334 status=ok
// SIG undefined FUN_14138ae30(void)

void FUN_14138ae30(undefined8 param_1,longlong param_2)

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
  FUN_140ffcb70(param_1,local_res10,puVar6);
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



// FUNCTION 14138af80 FUN_14138af80 body=334 status=ok
// SIG undefined FUN_14138af80(void)

void FUN_14138af80(undefined8 param_1,longlong param_2)

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
  FUN_140ffcc00(param_1,local_res10,puVar6);
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



// FUNCTION 14138b0d0 FUN_14138b0d0 body=387 status=ok
// SIG undefined FUN_14138b0d0(void)

void FUN_14138b0d0(undefined8 param_1,longlong param_2)

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
  FUN_1411a38e0(param_1,local_res20,local_res10[0],puVar6);
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



// FUNCTION 14138b260 FUN_14138b260 body=334 status=ok
// SIG undefined FUN_14138b260(void)

void FUN_14138b260(undefined8 param_1,longlong param_2)

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
  FUN_1411a3bb0(param_1,local_res10,puVar6);
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



// FUNCTION 14138b3b0 FUN_14138b3b0 body=128 status=ok
// SIG undefined FUN_14138b3b0(void)

void FUN_14138b3b0(undefined8 param_1,longlong param_2)

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
  FUN_1411a3da0(param_1,local_res10);
  return;
}



// FUNCTION 14138b450 FUN_14138b450 body=387 status=ok
// SIG undefined FUN_14138b450(void)

void FUN_14138b450(undefined8 param_1,longlong param_2)

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
  FUN_1411a9a80(param_1,local_res20,local_res10[0],puVar6);
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



// FUNCTION 14138b5e0 FUN_14138b5e0 body=334 status=ok
// SIG undefined FUN_14138b5e0(void)

void FUN_14138b5e0(undefined8 param_1,longlong param_2)

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
  FUN_1411a9c00(param_1,local_res10,puVar6);
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



// FUNCTION 14138b730 FUN_14138b730 body=334 status=ok
// SIG undefined FUN_14138b730(void)

void FUN_14138b730(undefined8 param_1,longlong param_2)

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
  FUN_1411aa330(param_1,local_res10,puVar6);
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



// FUNCTION 14138b880 FUN_14138b880 body=128 status=ok
// SIG undefined FUN_14138b880(void)

void FUN_14138b880(undefined8 param_1,longlong param_2)

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
  FUN_141004120(param_1,local_res10);
  return;
}



// FUNCTION 14138b920 FUN_14138b920 body=334 status=ok
// SIG undefined FUN_14138b920(void)

void FUN_14138b920(undefined8 param_1,longlong param_2)

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
  FUN_1411ac130(param_1,local_res10,puVar6);
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



// FUNCTION 14138ba70 FUN_14138ba70 body=387 status=ok
// SIG undefined FUN_14138ba70(void)

void FUN_14138ba70(undefined8 param_1,longlong param_2)

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
  FUN_1411ac280(param_1,local_res20,local_res10[0],puVar6);
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



// FUNCTION 14138bc00 FUN_14138bc00 body=126 status=ok
// SIG undefined FUN_14138bc00(void)

void FUN_14138bc00(undefined8 param_1,longlong param_2)

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
  FUN_1411ac2b0(param_1,local_res10[0]);
  return;
}



// FUNCTION 14138bc80 FUN_14138bc80 body=334 status=ok
// SIG undefined FUN_14138bc80(void)

void FUN_14138bc80(undefined8 param_1,longlong param_2)

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
  FUN_141006f60(param_1,local_res10,puVar6);
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



// FUNCTION 14138bdd0 FUN_14138bdd0 body=334 status=ok
// SIG undefined FUN_14138bdd0(void)

void FUN_14138bdd0(undefined8 param_1,longlong param_2)

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
  FUN_1411ac480(param_1,local_res10,puVar6);
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



// FUNCTION 14138bf40 execHandleTargetDestroyed body=128 status=ok
// SIG undefined execHandleTargetDestroyed(void)

void AConGaTrongCharacter::execHandleTargetDestroyed(undefined8 param_1,longlong param_2)

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
  HandleTargetDestroyed(param_1,local_res10);
  return;
}



// FUNCTION 14138bfc0 FUN_14138bfc0 body=334 status=ok
// SIG undefined FUN_14138bfc0(void)

void FUN_14138bfc0(undefined8 param_1,longlong param_2)

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
  FUN_1411ac490(param_1,local_res10,puVar6);
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



// FUNCTION 14138c110 execSetActorScale3D body=133 status=ok
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
  FUN_141007a60(param_1,&local_18);
  return;
}



// FUNCTION 14138c1c0 FUN_14138c1c0 body=387 status=ok
// SIG undefined FUN_14138c1c0(void)

void FUN_14138c1c0(undefined8 param_1,longlong param_2)

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
  FUN_1411ac800(param_1,local_res20,local_res10[0],puVar6);
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



// FUNCTION 14138c350 FUN_14138c350 body=334 status=ok
// SIG undefined FUN_14138c350(void)

void FUN_14138c350(undefined8 param_1,longlong param_2)

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
  FUN_1411ac9c0(param_1,local_res10,puVar6);
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



// FUNCTION 14138c4a0 FUN_14138c4a0 body=271 status=ok
// SIG undefined FUN_14138c4a0(void)

void FUN_14138c4a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
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
  FUN_1411ad500(param_1,puVar6);
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



// FUNCTION 14138c5b0 FUN_14138c5b0 body=214 status=ok
// SIG undefined FUN_14138c5b0(void)

void FUN_14138c5b0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
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
  FUN_1411ad620(param_1,local_18,local_res10[0] != 0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14138c690 FUN_14138c690 body=387 status=ok
// SIG undefined FUN_14138c690(void)

void FUN_14138c690(undefined8 param_1,longlong param_2)

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
  FUN_1411ae930(param_1,local_res20,local_res10[0],puVar6);
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



// FUNCTION 14138c820 FUN_14138c820 body=334 status=ok
// SIG undefined FUN_14138c820(void)

void FUN_14138c820(undefined8 param_1,longlong param_2)

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
  FUN_1411ae9c0(param_1,local_res10,puVar6);
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



// FUNCTION 14138c970 FUN_14138c970 body=334 status=ok
// SIG undefined FUN_14138c970(void)

void FUN_14138c970(undefined8 param_1,longlong param_2)

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
  FUN_1411aec50(param_1,local_res10,puVar6);
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



// FUNCTION 14138cac0 FUN_14138cac0 body=123 status=ok
// SIG undefined FUN_14138cac0(void)

void FUN_14138cac0(undefined8 param_1,longlong param_2)

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
  FUN_141008840(param_1,local_res10[0]);
  return;
}



// FUNCTION 14138cb40 FUN_14138cb40 body=128 status=ok
// SIG undefined FUN_14138cb40(void)

void FUN_14138cb40(undefined8 param_1,longlong param_2)

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
  FUN_141008da0(param_1,local_res10);
  return;
}



// FUNCTION 14138cbc0 FUN_14138cbc0 body=128 status=ok
// SIG undefined FUN_14138cbc0(void)

void FUN_14138cbc0(undefined8 param_1,longlong param_2)

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
  FUN_141009020(param_1,local_res10);
  return;
}



// FUNCTION 14138cc40 execSetBind body=211 status=ok
// SIG undefined execSetBind(void)

void UPlayerInput::execSetBind(undefined8 param_1,longlong param_2)

{
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
  FUN_14100e200(param_1,local_res10,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14138cd20 FUN_14138cd20 body=334 status=ok
// SIG undefined FUN_14138cd20(void)

void FUN_14138cd20(undefined8 param_1,longlong param_2)

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
  FUN_1411b0d30(param_1,local_res10,puVar6);
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



// FUNCTION 14138ce70 execSetBind body=211 status=ok
// SIG undefined execSetBind(void)

void UPlayerInput::execSetBind(undefined8 param_1,longlong param_2)

{
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
  FUN_14100e5a0(param_1,local_res10,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14138cf50 FUN_14138cf50 body=130 status=ok
// SIG undefined FUN_14138cf50(void)

void FUN_14138cf50(undefined8 param_1,longlong param_2)

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
  FUN_14100e5b0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 14138cfe0 FUN_14138cfe0 body=128 status=ok
// SIG undefined FUN_14138cfe0(void)

void FUN_14138cfe0(undefined8 param_1,longlong param_2)

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
  FUN_14100e5d0(param_1,local_res10);
  return;
}



// FUNCTION 14138d060 FUN_14138d060 body=128 status=ok
// SIG undefined FUN_14138d060(void)

void FUN_14138d060(undefined8 param_1,longlong param_2)

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
  FUN_14100e5e0(param_1,local_res10);
  return;
}



// FUNCTION 14138d0e0 FUN_14138d0e0 body=334 status=ok
// SIG undefined FUN_14138d0e0(void)

void FUN_14138d0e0(undefined8 param_1,longlong param_2)

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
  FUN_1411bc780(param_1,local_res10,puVar6);
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



// FUNCTION 14138d230 FUN_14138d230 body=162 status=ok
// SIG undefined FUN_14138d230(void)

longlong FUN_14138d230(void)

{
  if (DAT_146887000 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxPlayerStorageMenu",&DAT_146887000,FUN_14138f9d0,0xaa0,
                  0x10000000,0,L"Engine",&LAB_14138e570,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoUIInputKeySelector::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146887000;
}



// FUNCTION 14138d2e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGNewsMenuItem::GetPrivateStaticClass(void)

{
  if (DAT_1468870a8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxPlaythroughSelectionMenu",&DAT_1468870a8,FUN_14138fa30,
                  0x7e0,0x10000000,0,L"Game",&LAB_14138e700,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412d9d00,&LAB_140447700,0);
  }
  return DAT_1468870a8;
}



// FUNCTION 14138d390 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass(void)

{
  if (DAT_146887010 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxPlayerStorageListCapacityObject",&DAT_146887010,
                  FUN_140447710,400,0x10000008,0,L"Engine",FUN_14138e530,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146887010;
}



// FUNCTION 14138d440 FUN_14138d440 body=162 status=ok
// SIG undefined FUN_14138d440(void)

longlong FUN_14138d440(void)

{
  if (DAT_146887020 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxPlayerStorageNavObject",&DAT_146887020,FUN_140447710,0x1a0
                  ,0x10000008,0,L"Engine",FUN_14138e5f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146887020;
}



// FUNCTION 14138d4f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMobBaseAnim::GetPrivateStaticClass(void)

{
  if (DAT_1468870b8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxPlaythroughModeCell",&DAT_1468870b8,FUN_140447710,0x360,
                  0x10000008,0,L"Game",FUN_14138e650,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  URemnantGameInstance::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468870b8;
}



// FUNCTION 14138d5a0 FUN_14138d5a0 body=47 status=ok
// SIG undefined FUN_14138d5a0(void)

longlong FUN_14138d5a0(void)

{
  if (DAT_1468870a0 == 0) {
    FUN_141786440(&DAT_1468870a0,&PTR_GetPrivateStaticClass_144924760);
  }
  return DAT_1468870a0;
}



// FUNCTION 14138d5d0 FUN_14138d5d0 body=47 status=ok
// SIG undefined FUN_14138d5d0(void)

longlong FUN_14138d5d0(void)

{
  if (DAT_146887078 == 0) {
    FUN_141786a30(&DAT_146887078,&PTR_FUN_146344d00);
  }
  return DAT_146887078;
}



// FUNCTION 14138d600 FUN_14138d600 body=47 status=ok
// SIG undefined FUN_14138d600(void)

longlong FUN_14138d600(void)

{
  if (DAT_146887080 == 0) {
    FUN_141786a30(&DAT_146887080,&PTR_FUN_146344d40);
  }
  return DAT_146887080;
}



// FUNCTION 14138d630 FUN_14138d630 body=47 status=ok
// SIG undefined FUN_14138d630(void)

longlong FUN_14138d630(void)

{
  if (DAT_146887088 == 0) {
    FUN_141786a30(&DAT_146887088,&PTR_FUN_146344e00);
  }
  return DAT_146887088;
}



// FUNCTION 14138d660 FUN_14138d660 body=47 status=ok
// SIG undefined FUN_14138d660(void)

longlong FUN_14138d660(void)

{
  if (DAT_146887090 == 0) {
    FUN_141786a30(&DAT_146887090,&PTR_FUN_146344ec0);
  }
  return DAT_146887090;
}



// FUNCTION 14138d690 FUN_14138d690 body=47 status=ok
// SIG undefined FUN_14138d690(void)

longlong FUN_14138d690(void)

{
  if (DAT_146887098 == 0) {
    FUN_141786a30(&DAT_146887098,&PTR_FUN_146344fc0);
  }
  return DAT_146887098;
}



// FUNCTION 14138d6c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGMainMenuAnimInstance::GetPrivateStaticClass(void)

{
  if (DAT_146887040 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxPlayerStorageNavButton",&DAT_146887040,
                  StaticRegisterNativesUGMainMenuAnimInstance,0x2e0,0x10000008,0,L"Engine",
                  FUN_14138e590,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142f18d50,&LAB_140447700,0);
  }
  return DAT_146887040;
}



// FUNCTION 14138d770 FUN_14138d770 body=162 status=ok
// SIG undefined FUN_14138d770(void)

longlong FUN_14138d770(void)

{
  if (DAT_146887050 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxPlayerStorageHeader",&DAT_146887050,FUN_140447710,0x1a0,
                  0x10000008,0,L"Engine",FUN_14138e4d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146887050;
}



// FUNCTION 14138d820 FUN_14138d820 body=53 status=ok
// SIG undefined FUN_14138d820(void)

void FUN_14138d820(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_14492c618;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14138d860 FUN_14138d860 body=162 status=ok
// SIG undefined FUN_14138d860(void)

longlong FUN_14138d860(void)

{
  if (DAT_146887060 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxPlayerStorageBackpackItem",&DAT_146887060,FUN_140447710,
                  0x6d0,0x10000008,0,L"Engine",FUN_14138e490,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141338f20,&LAB_140447700,0);
  }
  return DAT_146887060;
}



// FUNCTION 14138d910 FUN_14138d910 body=47 status=ok
// SIG undefined FUN_14138d910(void)

longlong FUN_14138d910(void)

{
  if (DAT_146886ff8 == 0) {
    FUN_141786440(&DAT_146886ff8,&PTR_FUN_1449255a0);
  }
  return DAT_146886ff8;
}



// FUNCTION 14138d940 FUN_14138d940 body=47 status=ok
// SIG undefined FUN_14138d940(void)

longlong FUN_14138d940(void)

{
  if (DAT_146886f78 == 0) {
    FUN_141786a30(&DAT_146886f78,&PTR_FUN_146342e80);
  }
  return DAT_146886f78;
}



// FUNCTION 14138d970 FUN_14138d970 body=47 status=ok
// SIG undefined FUN_14138d970(void)

longlong FUN_14138d970(void)

{
  if (DAT_146886f80 == 0) {
    FUN_141786a30(&DAT_146886f80,&PTR_FUN_146342f40);
  }
  return DAT_146886f80;
}



// FUNCTION 14138d9a0 FUN_14138d9a0 body=47 status=ok
// SIG undefined FUN_14138d9a0(void)

longlong FUN_14138d9a0(void)

{
  if (DAT_146886f88 == 0) {
    FUN_141786a30(&DAT_146886f88,&PTR_FUN_146342fc0);
  }
  return DAT_146886f88;
}



// FUNCTION 14138d9d0 FUN_14138d9d0 body=47 status=ok
// SIG undefined FUN_14138d9d0(void)

longlong FUN_14138d9d0(void)

{
  if (DAT_146886f90 == 0) {
    FUN_141786a30(&DAT_146886f90,&PTR_FUN_146343040);
  }
  return DAT_146886f90;
}



// FUNCTION 14138da00 FUN_14138da00 body=47 status=ok
// SIG undefined FUN_14138da00(void)

longlong FUN_14138da00(void)

{
  if (DAT_146886f98 == 0) {
    FUN_141786a30(&DAT_146886f98,&PTR_FUN_1463430c0);
  }
  return DAT_146886f98;
}



// FUNCTION 14138da30 FUN_14138da30 body=47 status=ok
// SIG undefined FUN_14138da30(void)

longlong FUN_14138da30(void)

{
  if (DAT_146886fa0 == 0) {
    FUN_141786a30(&DAT_146886fa0,&PTR_FUN_1463431c0);
  }
  return DAT_146886fa0;
}



// FUNCTION 14138da60 FUN_14138da60 body=47 status=ok
// SIG undefined FUN_14138da60(void)

longlong FUN_14138da60(void)

{
  if (DAT_146886fa8 == 0) {
    FUN_141786a30(&DAT_146886fa8,&PTR_FUN_146343280);
  }
  return DAT_146886fa8;
}



// FUNCTION 14138da90 FUN_14138da90 body=47 status=ok
// SIG undefined FUN_14138da90(void)

longlong FUN_14138da90(void)

{
  if (DAT_146886fb0 == 0) {
    FUN_141786a30(&DAT_146886fb0,&PTR_FUN_146343300);
  }
  return DAT_146886fb0;
}



// FUNCTION 14138dac0 FUN_14138dac0 body=47 status=ok
// SIG undefined FUN_14138dac0(void)

longlong FUN_14138dac0(void)

{
  if (DAT_146886fb8 == 0) {
    FUN_141786a30(&DAT_146886fb8,&PTR_FUN_146343380);
  }
  return DAT_146886fb8;
}



// FUNCTION 14138daf0 FUN_14138daf0 body=47 status=ok
// SIG undefined FUN_14138daf0(void)

longlong FUN_14138daf0(void)

{
  if (DAT_146886fc0 == 0) {
    FUN_141786a30(&DAT_146886fc0,&PTR_FUN_146343400);
  }
  return DAT_146886fc0;
}



// FUNCTION 14138db20 FUN_14138db20 body=47 status=ok
// SIG undefined FUN_14138db20(void)

longlong FUN_14138db20(void)

{
  if (DAT_146886fc8 == 0) {
    FUN_141786a30(&DAT_146886fc8,&PTR_FUN_146343480);
  }
  return DAT_146886fc8;
}



// FUNCTION 14138db50 FUN_14138db50 body=47 status=ok
// SIG undefined FUN_14138db50(void)

longlong FUN_14138db50(void)

{
  if (DAT_146886fd0 == 0) {
    FUN_141786a30(&DAT_146886fd0,&PTR_FUN_146343500);
  }
  return DAT_146886fd0;
}



// FUNCTION 14138db80 FUN_14138db80 body=47 status=ok
// SIG undefined FUN_14138db80(void)

longlong FUN_14138db80(void)

{
  if (DAT_146886fd8 == 0) {
    FUN_141786a30(&DAT_146886fd8,&PTR_FUN_146343580);
  }
  return DAT_146886fd8;
}


