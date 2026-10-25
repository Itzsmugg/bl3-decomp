// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141394bd0 FUN_141394bd0 body=47 status=ok
// SIG undefined FUN_141394bd0(void)

longlong FUN_141394bd0(void)

{
  if (DAT_146887798 == 0) {
    FUN_141786440(&DAT_146887798,&PTR_GetPrivateStaticClass_144933ca0);
  }
  return DAT_146887798;
}



// FUNCTION 141394c00 FUN_141394c00 body=47 status=ok
// SIG undefined FUN_141394c00(void)

longlong FUN_141394c00(void)

{
  if (DAT_1468877a8 == 0) {
    FUN_141786440(&DAT_1468877a8,&PTR_FUN_144934490);
  }
  return DAT_1468877a8;
}



// FUNCTION 141394c30 FUN_141394c30 body=47 status=ok
// SIG undefined FUN_141394c30(void)

longlong FUN_141394c30(void)

{
  if (DAT_146887810 == 0) {
    FUN_141786440(&DAT_146887810,&PTR_GetPrivateStaticClass_144933990);
  }
  return DAT_146887810;
}



// FUNCTION 141394c60 FUN_141394c60 body=47 status=ok
// SIG undefined FUN_141394c60(void)

longlong FUN_141394c60(void)

{
  if (DAT_146887670 == 0) {
    FUN_141786440(&DAT_146887670,&PTR_GetPrivateStaticClass_144935230);
  }
  return DAT_146887670;
}



// FUNCTION 141394c90 FUN_141394c90 body=47 status=ok
// SIG undefined FUN_141394c90(void)

longlong FUN_141394c90(void)

{
  if (DAT_1468877b8 == 0) {
    FUN_141786440(&DAT_1468877b8,&PTR_FUN_144932970);
  }
  return DAT_1468877b8;
}



// FUNCTION 141394cc0 FUN_141394cc0 body=47 status=ok
// SIG undefined FUN_141394cc0(void)

longlong FUN_141394cc0(void)

{
  if (DAT_1468876e8 == 0) {
    FUN_1417866a0(&DAT_1468876e8,&PTR_Z_Construct_UPackage__Script_MechWarrior_14634bd80);
  }
  return DAT_1468876e8;
}



// FUNCTION 141394cf0 FUN_141394cf0 body=387 status=ok
// SIG undefined FUN_141394cf0(void)

void FUN_141394cf0(undefined8 param_1,longlong param_2)

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
  FUN_14103b0f0(param_1,local_res20,local_res10[0],puVar6);
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



// FUNCTION 141394e80 FUN_141394e80 body=334 status=ok
// SIG undefined FUN_141394e80(void)

void FUN_141394e80(undefined8 param_1,longlong param_2)

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
  thunk_FUN_142eb3990(param_1,local_res10,puVar6);
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



// FUNCTION 141394fd0 FUN_141394fd0 body=334 status=ok
// SIG undefined FUN_141394fd0(void)

void FUN_141394fd0(undefined8 param_1,longlong param_2)

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
  FUN_14103b350(param_1,local_res10,puVar6);
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



// FUNCTION 141395120 FUN_141395120 body=334 status=ok
// SIG undefined FUN_141395120(void)

void FUN_141395120(undefined8 param_1,longlong param_2)

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
  FUN_141042d30(param_1,local_res10,puVar6);
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



// FUNCTION 141395270 FUN_141395270 body=334 status=ok
// SIG undefined FUN_141395270(void)

void FUN_141395270(undefined8 param_1,longlong param_2)

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
  thunk_FUN_141030820(param_1,local_res10,puVar6);
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



// FUNCTION 1413953c0 FUN_1413953c0 body=387 status=ok
// SIG undefined FUN_1413953c0(void)

void FUN_1413953c0(undefined8 param_1,longlong param_2)

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
  FUN_1411a3c10(param_1,local_res20,local_res10[0],puVar6);
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



// FUNCTION 141395550 FUN_141395550 body=333 status=ok
// SIG undefined FUN_141395550(void)

void FUN_141395550(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_28 [2];
  undefined8 local_20;
  
  local_res10[0] = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_20 = 0;
  puVar1 = local_res10;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
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
  FUN_141113510(param_1,puVar1,local_20,local_28[0],local_res20[0]);
  return;
}



// FUNCTION 1413956a0 FUN_1413956a0 body=443 status=ok
// SIG undefined FUN_1413956a0(void)

void FUN_1413956a0(undefined8 param_1,longlong param_2)

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
  FUN_141043000(param_1,local_res20,puVar5,&local_68,local_res10[0]);
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



// FUNCTION 141395860 FUN_141395860 body=387 status=ok
// SIG undefined FUN_141395860(void)

void FUN_141395860(undefined8 param_1,longlong param_2)

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
  thunk_FUN_142eb3990(param_1,local_res20,local_res10[0],puVar6);
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



// FUNCTION 141395a50 FUN_141395a50 body=128 status=ok
// SIG undefined FUN_141395a50(void)

void FUN_141395a50(undefined8 param_1,longlong param_2)

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
  FUN_14111c100(param_1,local_res10);
  return;
}



// FUNCTION 141395ad0 FUN_141395ad0 body=333 status=ok
// SIG undefined FUN_141395ad0(void)

void FUN_141395ad0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_28 [2];
  undefined8 local_20;
  
  local_res10[0] = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_20 = 0;
  puVar1 = local_res10;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
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
  FUN_14104cb60(param_1,puVar1,local_20,local_28[0],local_res20[0]);
  return;
}



// FUNCTION 141395c80 FUN_141395c80 body=126 status=ok
// SIG undefined FUN_141395c80(void)

void FUN_141395c80(undefined8 param_1,longlong param_2)

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
  FUN_14104e980(param_1,local_res10[0]);
  return;
}



// FUNCTION 141395d00 FUN_141395d00 body=204 status=ok
// SIG undefined FUN_141395d00(void)

void FUN_141395d00(undefined8 param_1,longlong param_2)

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
  FUN_14104f5b0(param_1,puVar5);
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



// FUNCTION 141395dd0 FUN_141395dd0 body=334 status=ok
// SIG undefined FUN_141395dd0(void)

void FUN_141395dd0(undefined8 param_1,longlong param_2)

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
  thunk_FUN_1411b5480(param_1,local_res10,puVar6);
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



// FUNCTION 141395f20 FUN_141395f20 body=130 status=ok
// SIG undefined FUN_141395f20(void)

void FUN_141395f20(undefined8 param_1,longlong param_2)

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
  FUN_14104f970(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 141395fb0 FUN_141395fb0 body=334 status=ok
// SIG undefined FUN_141395fb0(void)

void FUN_141395fb0(undefined8 param_1,longlong param_2)

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
  FUN_1411ae070(param_1,local_res10,puVar6);
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



// FUNCTION 141396100 FUN_141396100 body=194 status=ok
// SIG undefined FUN_141396100(void)

void FUN_141396100(undefined8 param_1,longlong param_2)

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
  FUN_1411235a0(param_1,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 1413961d0 execSlotEmote body=189 status=ok
// SIG undefined execSlotEmote(void)

void UEmotesComponent::execSlotEmote(undefined8 param_1,longlong param_2)

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
  FUN_141123ad0(param_1,local_res10[0],local_res20);
  return;
}



// FUNCTION 141396290 FUN_141396290 body=334 status=ok
// SIG undefined FUN_141396290(void)

void FUN_141396290(undefined8 param_1,longlong param_2)

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
  FUN_1411aee40(param_1,local_res10,puVar6);
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



// FUNCTION 1413963e0 FUN_1413963e0 body=128 status=ok
// SIG undefined FUN_1413963e0(void)

void FUN_1413963e0(undefined8 param_1,longlong param_2)

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
  FUN_140f2ce70(param_1,local_res10);
  return;
}



// FUNCTION 141396460 FUN_141396460 body=229 status=ok
// SIG undefined FUN_141396460(void)

void FUN_141396460(undefined8 param_1,longlong param_2)

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
  thunk_FUN_1410587c0(param_1,puVar1,local_res10[0]);
  return;
}



// FUNCTION 141396570 FUN_141396570 body=275 status=ok
// SIG undefined FUN_141396570(void)

void FUN_141396570(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  
  local_38[0] = 0xff;
  local_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res20[0] = 0;
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
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
  thunk_FUN_1410587c0(param_1,puVar1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 1413966b0 FUN_1413966b0 body=155 status=ok
// SIG undefined FUN_1413966b0(void)

void FUN_1413966b0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_28;
  undefined8 local_20;
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
  FUN_14104fc90(param_1,puVar1);
  return;
}



// FUNCTION 141396770 FUN_141396770 body=320 status=ok
// SIG undefined FUN_141396770(void)

void FUN_141396770(undefined8 param_1,longlong param_2)

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
  FUN_14104fd70(param_1,puVar1,local_res10[0]);
  if (local_78 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1413968b0 FUN_1413968b0 body=320 status=ok
// SIG undefined FUN_1413968b0(void)

void FUN_1413968b0(undefined8 param_1,longlong param_2)

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
  FUN_14104fde0(param_1,puVar1,local_res10[0]);
  if (local_78 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141396a10 FUN_141396a10 body=320 status=ok
// SIG undefined FUN_141396a10(void)

void FUN_141396a10(undefined8 param_1,longlong param_2)

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
  FUN_14104fec0(param_1,puVar1,local_res10[0]);
  if (local_78 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141396b50 FUN_141396b50 body=468 status=ok
// SIG undefined FUN_141396b50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141396b50(long param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 local_80;
  byte local_78;
  undefined1 local_70 [56];
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_78 = local_78 & 0xfd | 1;
  local_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_80 = 0;
  FUN_142c8c260(local_70,0x3f800000);
  local_38 = 0xff;
  local_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c0 = 0;
  local_bc = _DAT_1468b5d90;
  local_b0 = _DAT_1468b5d90;
  local_b4 = DAT_1468b5d98;
  local_a8 = DAT_1468b5d98;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_d8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  if (local_88 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141396d30 FUN_141396d30 body=270 status=ok
// SIG undefined FUN_141396d30(void)

void FUN_141396d30(undefined8 param_1,longlong param_2)

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
  FUN_141043000(param_1,local_res10,puVar5);
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



// FUNCTION 141396e40 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_141052c00(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141396f40 FUN_141396f40 body=334 status=ok
// SIG undefined FUN_141396f40(void)

void FUN_141396f40(undefined8 param_1,longlong param_2)

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
  FUN_1410675d0(param_1,local_res10,puVar6);
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



// FUNCTION 141397090 FUN_141397090 body=334 status=ok
// SIG undefined FUN_141397090(void)

void FUN_141397090(undefined8 param_1,longlong param_2)

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
  FUN_141067780(param_1,local_res10,puVar6);
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



// FUNCTION 1413971e0 FUN_1413971e0 body=334 status=ok
// SIG undefined FUN_1413971e0(void)

void FUN_1413971e0(undefined8 param_1,longlong param_2)

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
  FUN_141067d30(param_1,local_res10,puVar6);
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



// FUNCTION 141397380 FUN_141397380 body=162 status=ok
// SIG undefined FUN_141397380(void)

longlong FUN_141397380(void)

{
  if (DAT_146887d88 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxSHiFTMenuCreateAccountPage",&DAT_146887d88,FUN_14139c610,
                  0x230,0x10000008,0,L"Engine",FUN_141399140,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14139c440,&LAB_140447700,0);
  }
  return DAT_146887d88;
}



// FUNCTION 141397430 FUN_141397430 body=162 status=ok
// SIG undefined FUN_141397430(void)

longlong FUN_141397430(void)

{
  if (DAT_146887f88 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxSkillScreenLoadoutChoiceItem",&DAT_146887f88,FUN_14139c820
                  ,0x390,0x10000008,0,L"Engine",FUN_141399810,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  URemnantGameInstance::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146887f88;
}



// FUNCTION 1413974e0 FUN_1413974e0 body=47 status=ok
// SIG undefined FUN_1413974e0(void)

longlong FUN_1413974e0(void)

{
  if (DAT_146887d80 == 0) {
    FUN_141786440(&DAT_146887d80,&PTR_FUN_14493c150);
  }
  return DAT_146887d80;
}



// FUNCTION 141397510 FUN_141397510 body=47 status=ok
// SIG undefined FUN_141397510(void)

longlong FUN_141397510(void)

{
  if (DAT_146887e10 == 0) {
    FUN_141786440(&DAT_146887e10,&PTR_thunk_FUN_14139c440_14493f260);
  }
  return DAT_146887e10;
}



// FUNCTION 141397540 FUN_141397540 body=47 status=ok
// SIG undefined FUN_141397540(void)

longlong FUN_141397540(void)

{
  if (DAT_146887d68 == 0) {
    FUN_141786a30(&DAT_146887d68,&PTR_FUN_14634bf00);
  }
  return DAT_146887d68;
}



// FUNCTION 141397570 FUN_141397570 body=47 status=ok
// SIG undefined FUN_141397570(void)

longlong FUN_141397570(void)

{
  if (DAT_146887d70 == 0) {
    FUN_141786a30(&DAT_146887d70,&PTR_FUN_14634bfc0);
  }
  return DAT_146887d70;
}



// FUNCTION 1413975a0 FUN_1413975a0 body=47 status=ok
// SIG undefined FUN_1413975a0(void)

longlong FUN_1413975a0(void)

{
  if (DAT_146887d78 == 0) {
    FUN_141786a30(&DAT_146887d78,&PTR_FUN_14634c080);
  }
  return DAT_146887d78;
}



// FUNCTION 1413975d0 Z_Construct_UClass_UDeleteToolComponent body=47 status=ok
// SIG undefined Z_Construct_UClass_UDeleteToolComponent(void)

longlong Z_Construct_UClass_UDeleteToolComponent(void)

{
  if (DAT_146887f80 == 0) {
    FUN_141786440(&DAT_146887f80,&PTR_FUN_14493c040);
  }
  return DAT_146887f80;
}



// FUNCTION 141397600 FUN_141397600 body=47 status=ok
// SIG undefined FUN_141397600(void)

longlong FUN_141397600(void)

{
  if (DAT_146887f78 == 0) {
    FUN_141786a30(&DAT_146887f78,&PTR_Z_Construct_UClass_UDeleteToolComponent_14634ef00);
  }
  return DAT_146887f78;
}



// FUNCTION 141397650 FUN_141397650 body=47 status=ok
// SIG undefined FUN_141397650(void)

longlong FUN_141397650(void)

{
  if (DAT_146887da8 == 0) {
    FUN_141786440(&DAT_146887da8,&PTR_GetPrivateStaticClass_14493c850);
  }
  return DAT_146887da8;
}



// FUNCTION 141397680 FUN_141397680 body=47 status=ok
// SIG undefined FUN_141397680(void)

longlong FUN_141397680(void)

{
  if (DAT_146887d98 == 0) {
    FUN_141786a30(&DAT_146887d98,&PTR_FUN_14634c230);
  }
  return DAT_146887d98;
}



// FUNCTION 1413976b0 FUN_1413976b0 body=47 status=ok
// SIG undefined FUN_1413976b0(void)

longlong FUN_1413976b0(void)

{
  if (DAT_146887da0 == 0) {
    FUN_141786a30(&DAT_146887da0,&PTR_FUN_14634c330);
  }
  return DAT_146887da0;
}



// FUNCTION 1413976e0 FUN_1413976e0 body=162 status=ok
// SIG undefined FUN_1413976e0(void)

longlong FUN_1413976e0(void)

{
  if (DAT_146887fb8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxSkillScreenLoadoutSlot",&DAT_146887fb8,FUN_14139c850,0x430
                  ,0x10000008,0,L"Engine",FUN_1413998e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142f18d50,&LAB_140447700,0);
  }
  return DAT_146887fb8;
}



// FUNCTION 141397790 FUN_141397790 body=47 status=ok
// SIG undefined FUN_141397790(void)

longlong FUN_141397790(void)

{
  if (DAT_146887fb0 == 0) {
    FUN_141786440(&DAT_146887fb0,&PTR_FUN_14493cf10);
  }
  return DAT_146887fb0;
}



// FUNCTION 1413977c0 FUN_1413977c0 body=47 status=ok
// SIG undefined FUN_1413977c0(void)

longlong FUN_1413977c0(void)

{
  if (DAT_146887f98 == 0) {
    FUN_141786a30(&DAT_146887f98,&PTR_FUN_14634f2a0);
  }
  return DAT_146887f98;
}



// FUNCTION 1413977f0 FUN_1413977f0 body=47 status=ok
// SIG undefined FUN_1413977f0(void)

longlong FUN_1413977f0(void)

{
  if (DAT_146887fa0 == 0) {
    FUN_141786a30(&DAT_146887fa0,&PTR_FUN_14634f320);
  }
  return DAT_146887fa0;
}



// FUNCTION 141397820 FUN_141397820 body=47 status=ok
// SIG undefined FUN_141397820(void)

longlong FUN_141397820(void)

{
  if (DAT_146887fa8 == 0) {
    FUN_141786a30(&DAT_146887fa8,&PTR_FUN_14634f3e0);
  }
  return DAT_146887fa8;
}



// FUNCTION 141397870 FUN_141397870 body=162 status=ok
// SIG undefined FUN_141397870(void)

longlong FUN_141397870(void)

{
  if (DAT_146887dd0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxSHiFTMenuNotSignedInPage",&DAT_146887dd0,FUN_14139c670,
                  0x220,0x10000008,0,L"Engine",FUN_141399340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14139c440,&LAB_140447700,0);
  }
  return DAT_146887dd0;
}



// FUNCTION 141397920 FUN_141397920 body=47 status=ok
// SIG undefined FUN_141397920(void)

longlong FUN_141397920(void)

{
  if (DAT_146887dc8 == 0) {
    FUN_141786440(&DAT_146887dc8,&PTR_FUN_14493d370);
  }
  return DAT_146887dc8;
}



// FUNCTION 141397950 FUN_141397950 body=47 status=ok
// SIG undefined FUN_141397950(void)

longlong FUN_141397950(void)

{
  if (DAT_146887db8 == 0) {
    FUN_141786a30(&DAT_146887db8,&PTR_FUN_14634cbc0);
  }
  return DAT_146887db8;
}



// FUNCTION 141397980 FUN_141397980 body=47 status=ok
// SIG undefined FUN_141397980(void)

longlong FUN_141397980(void)

{
  if (DAT_146887dc0 == 0) {
    FUN_141786a30(&DAT_146887dc0,&PTR_FUN_14634cc80);
  }
  return DAT_146887dc0;
}



// FUNCTION 1413979b0 FUN_1413979b0 body=162 status=ok
// SIG undefined FUN_1413979b0(void)

longlong FUN_1413979b0(void)

{
  if (DAT_146887fc8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxSkillScreenMenuData",&DAT_146887fc8,FUN_140447710,0x118,
                  0x10000000,0,L"Engine",FUN_1413999d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1413a4060,&LAB_140447700,0);
  }
  return DAT_146887fc8;
}



// FUNCTION 141397a70 FUN_141397a70 body=162 status=ok
// SIG undefined FUN_141397a70(void)

longlong FUN_141397a70(void)

{
  if (DAT_146887fd8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxSkillScreenRow",&DAT_146887fd8,FUN_140447710,0x370,
                  0x10000008,0,L"Engine",FUN_141399a60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  URemnantGameInstance::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146887fd8;
}



// FUNCTION 141397b30 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass(void)

{
  if (DAT_146887de8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxSHiFTMenuOfflinePage",&DAT_146887de8,FUN_14139c6a0,0x210,
                  0x10000008,0,L"Engine",FUN_141399390,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14139c440,&LAB_140447700,0);
  }
  return DAT_146887de8;
}



// FUNCTION 141397be0 FUN_141397be0 body=47 status=ok
// SIG undefined FUN_141397be0(void)

longlong FUN_141397be0(void)

{
  if (DAT_146887de0 == 0) {
    FUN_141786440(&DAT_146887de0,&PTR_GetPrivateStaticClass_14493d750);
  }
  return DAT_146887de0;
}



// FUNCTION 141397c10 FUN_141397c10 body=47 status=ok
// SIG undefined FUN_141397c10(void)

longlong FUN_141397c10(void)

{
  if (DAT_146887dd8 == 0) {
    FUN_141786a30(&DAT_146887dd8,&PTR_FUN_14634ceb0);
  }
  return DAT_146887dd8;
}



// FUNCTION 141397c50 FUN_141397c50 body=162 status=ok
// SIG undefined FUN_141397c50(void)

longlong FUN_141397c50(void)

{
  if (DAT_146888048 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxSkillScreenDragObject",&DAT_146888048,FUN_140447710,0x1a0,
                  0x10000008,0,L"Engine",FUN_1413997a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146888048;
}



// FUNCTION 141397d10 FUN_141397d10 body=47 status=ok
// SIG undefined FUN_141397d10(void)

longlong FUN_141397d10(void)

{
  if (DAT_146887e00 == 0) {
    FUN_141786a30(&DAT_146887e00,&PTR_FUN_14634d0d0);
  }
  return DAT_146887e00;
}



// FUNCTION 141397d40 FUN_141397d40 body=47 status=ok
// SIG undefined FUN_141397d40(void)

longlong FUN_141397d40(void)

{
  if (DAT_146887e08 == 0) {
    FUN_141786a30(&DAT_146887e08,&PTR_FUN_14634d190);
  }
  return DAT_146887e08;
}



// FUNCTION 141397d70 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UXGameInstance::GetPrivateStaticClass(void)

{
  if (DAT_146887fe8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxSkillScreenRowList",&DAT_146887fe8,FUN_140447710,0x330,
                  0x10000008,0,L"Engine",FUN_141399b00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146887fe8;
}



// FUNCTION 141397e40 FUN_141397e40 body=47 status=ok
// SIG undefined FUN_141397e40(void)

longlong FUN_141397e40(void)

{
  if (DAT_146888050 == 0) {
    FUN_141786a30(&DAT_146888050,&PTR_FUN_14634fdc0);
  }
  return DAT_146888050;
}



// FUNCTION 141397e70 FUN_141397e70 body=47 status=ok
// SIG undefined FUN_141397e70(void)

longlong FUN_141397e70(void)

{
  if (DAT_146888058 == 0) {
    FUN_141786a30(&DAT_146888058,&PTR_FUN_14634fe00);
  }
  return DAT_146888058;
}



// FUNCTION 141397ea0 FUN_141397ea0 body=47 status=ok
// SIG undefined FUN_141397ea0(void)

longlong FUN_141397ea0(void)

{
  if (DAT_146888060 == 0) {
    FUN_141786a30(&DAT_146888060,&PTR_FUN_14634fe40);
  }
  return DAT_146888060;
}



// FUNCTION 141397ed0 FUN_141397ed0 body=47 status=ok
// SIG undefined FUN_141397ed0(void)

longlong FUN_141397ed0(void)

{
  if (DAT_146888068 == 0) {
    FUN_141786a30(&DAT_146888068,&PTR_FUN_14634fe80);
  }
  return DAT_146888068;
}



// FUNCTION 141397f00 FUN_141397f00 body=47 status=ok
// SIG undefined FUN_141397f00(void)

longlong FUN_141397f00(void)

{
  if (DAT_146888070 == 0) {
    FUN_141786a30(&DAT_146888070,&PTR_FUN_14634ff50);
  }
  return DAT_146888070;
}



// FUNCTION 141397f30 FUN_141397f30 body=47 status=ok
// SIG undefined FUN_141397f30(void)

longlong FUN_141397f30(void)

{
  if (DAT_146888078 == 0) {
    FUN_141786a30(&DAT_146888078,&PTR_FUN_14634ffd0);
  }
  return DAT_146888078;
}



// FUNCTION 141397f60 FUN_141397f60 body=47 status=ok
// SIG undefined FUN_141397f60(void)

longlong FUN_141397f60(void)

{
  if (DAT_146888080 == 0) {
    FUN_141786a30(&DAT_146888080,&PTR_FUN_146350050);
  }
  return DAT_146888080;
}



// FUNCTION 141397f90 FUN_141397f90 body=47 status=ok
// SIG undefined FUN_141397f90(void)

longlong FUN_141397f90(void)

{
  if (DAT_146888088 == 0) {
    FUN_141786a30(&DAT_146888088,&PTR_FUN_1463500d0);
  }
  return DAT_146888088;
}



// FUNCTION 141397fc0 FUN_141397fc0 body=47 status=ok
// SIG undefined FUN_141397fc0(void)

longlong FUN_141397fc0(void)

{
  if (DAT_146888090 == 0) {
    FUN_141786a30(&DAT_146888090,&PTR_FUN_146350150);
  }
  return DAT_146888090;
}



// FUNCTION 141397ff0 FUN_141397ff0 body=47 status=ok
// SIG undefined FUN_141397ff0(void)

longlong FUN_141397ff0(void)

{
  if (DAT_146888098 == 0) {
    FUN_141786a30(&DAT_146888098,&PTR_FUN_146350210);
  }
  return DAT_146888098;
}



// FUNCTION 141398020 FUN_141398020 body=47 status=ok
// SIG undefined FUN_141398020(void)

longlong FUN_141398020(void)

{
  if (DAT_1468880a0 == 0) {
    FUN_141786a30(&DAT_1468880a0,&PTR_FUN_146350290);
  }
  return DAT_1468880a0;
}



// FUNCTION 141398050 FUN_141398050 body=47 status=ok
// SIG undefined FUN_141398050(void)

longlong FUN_141398050(void)

{
  if (DAT_1468880a8 == 0) {
    FUN_141786a30(&DAT_1468880a8,&PTR_FUN_146350310);
  }
  return DAT_1468880a8;
}



// FUNCTION 141398080 FUN_141398080 body=47 status=ok
// SIG undefined FUN_141398080(void)

longlong FUN_141398080(void)

{
  if (DAT_1468880b0 == 0) {
    FUN_141786a30(&DAT_1468880b0,&PTR_FUN_146350390);
  }
  return DAT_1468880b0;
}



// FUNCTION 1413980b0 FUN_1413980b0 body=47 status=ok
// SIG undefined FUN_1413980b0(void)

longlong FUN_1413980b0(void)

{
  if (DAT_1468880b8 == 0) {
    FUN_141786a30(&DAT_1468880b8,&PTR_FUN_146350450);
  }
  return DAT_1468880b8;
}



// FUNCTION 1413980e0 FUN_1413980e0 body=47 status=ok
// SIG undefined FUN_1413980e0(void)

longlong FUN_1413980e0(void)

{
  if (DAT_1468880c0 == 0) {
    FUN_141786a30(&DAT_1468880c0,&PTR_FUN_146350510);
  }
  return DAT_1468880c0;
}



// FUNCTION 141398110 FUN_141398110 body=47 status=ok
// SIG undefined FUN_141398110(void)

longlong FUN_141398110(void)

{
  if (DAT_1468880c8 == 0) {
    FUN_141786a30(&DAT_1468880c8,&PTR_FUN_146350590);
  }
  return DAT_1468880c8;
}



// FUNCTION 141398140 FUN_141398140 body=47 status=ok
// SIG undefined FUN_141398140(void)

longlong FUN_141398140(void)

{
  if (DAT_1468880d0 == 0) {
    FUN_141786a30(&DAT_1468880d0,&PTR_FUN_146350650);
  }
  return DAT_1468880d0;
}



// FUNCTION 141398170 FUN_141398170 body=47 status=ok
// SIG undefined FUN_141398170(void)

longlong FUN_141398170(void)

{
  if (DAT_1468880d8 == 0) {
    FUN_141786a30(&DAT_1468880d8,&PTR_FUN_146350690);
  }
  return DAT_1468880d8;
}



// FUNCTION 1413981a0 FUN_1413981a0 body=47 status=ok
// SIG undefined FUN_1413981a0(void)

longlong FUN_1413981a0(void)

{
  if (DAT_1468880e0 == 0) {
    FUN_141786a30(&DAT_1468880e0,&PTR_FUN_146350710);
  }
  return DAT_1468880e0;
}



// FUNCTION 1413981d0 FUN_1413981d0 body=47 status=ok
// SIG undefined FUN_1413981d0(void)

longlong FUN_1413981d0(void)

{
  if (DAT_1468880e8 == 0) {
    FUN_141786a30(&DAT_1468880e8,&PTR_FUN_1463507d0);
  }
  return DAT_1468880e8;
}



// FUNCTION 141398200 FUN_141398200 body=47 status=ok
// SIG undefined FUN_141398200(void)

longlong FUN_141398200(void)

{
  if (DAT_1468880f0 == 0) {
    FUN_141786a30(&DAT_1468880f0,&PTR_FUN_146350890);
  }
  return DAT_1468880f0;
}



// FUNCTION 141398230 FUN_141398230 body=47 status=ok
// SIG undefined FUN_141398230(void)

longlong FUN_141398230(void)

{
  if (DAT_1468880f8 == 0) {
    FUN_141786a30(&DAT_1468880f8,&PTR_FUN_146350950);
  }
  return DAT_1468880f8;
}



// FUNCTION 141398260 FUN_141398260 body=47 status=ok
// SIG undefined FUN_141398260(void)

longlong FUN_141398260(void)

{
  if (DAT_146888100 == 0) {
    FUN_141786a30(&DAT_146888100,&PTR_FUN_146350a10);
  }
  return DAT_146888100;
}



// FUNCTION 141398290 FUN_141398290 body=47 status=ok
// SIG undefined FUN_141398290(void)

longlong FUN_141398290(void)

{
  if (DAT_146888108 == 0) {
    FUN_141786a30(&DAT_146888108,&PTR_FUN_146350a90);
  }
  return DAT_146888108;
}



// FUNCTION 1413982c0 FUN_1413982c0 body=47 status=ok
// SIG undefined FUN_1413982c0(void)

longlong FUN_1413982c0(void)

{
  if (DAT_146888110 == 0) {
    FUN_141786a30(&DAT_146888110,&PTR_FUN_146350ad0);
  }
  return DAT_146888110;
}



// FUNCTION 1413982f0 FUN_1413982f0 body=47 status=ok
// SIG undefined FUN_1413982f0(void)

longlong FUN_1413982f0(void)

{
  if (DAT_146888118 == 0) {
    FUN_141786a30(&DAT_146888118,&PTR_FUN_146350b10);
  }
  return DAT_146888118;
}



// FUNCTION 141398330 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass(void)

{
  if (DAT_146887e38 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxSHiFTMenuResetPasswordPage",&DAT_146887e38,FUN_14139c700,
                  0x210,0x10000008,0,L"Engine",FUN_141399400,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14139c440,&LAB_140447700,0);
  }
  return DAT_146887e38;
}



// FUNCTION 1413983e0 FUN_1413983e0 body=47 status=ok
// SIG undefined FUN_1413983e0(void)

longlong FUN_1413983e0(void)

{
  if (DAT_146887e30 == 0) {
    FUN_141786440(&DAT_146887e30,&PTR_GetPrivateStaticClass_14493fd30);
  }
  return DAT_146887e30;
}



// FUNCTION 141398410 FUN_141398410 body=47 status=ok
// SIG undefined FUN_141398410(void)

longlong FUN_141398410(void)

{
  if (DAT_146887e20 == 0) {
    FUN_141786a30(&DAT_146887e20,&PTR_FUN_14634d280);
  }
  return DAT_146887e20;
}



// FUNCTION 141398440 FUN_141398440 body=47 status=ok
// SIG undefined FUN_141398440(void)

longlong FUN_141398440(void)

{
  if (DAT_146887e28 == 0) {
    FUN_141786a30(&DAT_146887e28,&PTR_FUN_14634d340);
  }
  return DAT_146887e28;
}



// FUNCTION 141398470 FUN_141398470 body=53 status=ok
// SIG undefined FUN_141398470(void)

void FUN_141398470(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_14494e610;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413984c0 FUN_1413984c0 body=53 status=ok
// SIG undefined FUN_1413984c0(void)

void FUN_1413984c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x160;
    *puVar1 = &PTR_FUN_14494e728;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141398500 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong URemnantGameInstance::GetPrivateStaticClass(void)

{
  if (DAT_146887e48 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxSHiftMenuRewardHistoryPageItem",&DAT_146887e48,
                  FUN_140447710,0x310,0x10000008,0,L"Engine",FUN_1413750a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146887e48;
}



// FUNCTION 1413985b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UXAnimInstanceBase::GetPrivateStaticClass(void)

{
  if (DAT_146887e60 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxSHiFTMenuRewardHistoryPage",&DAT_146887e60,
                  StaticRegisterNativesUXAnimInstanceBase,0x270,0x10000008,0,L"Engine",FUN_141399450
                  ,TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                   ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14139c440,&LAB_140447700,0);
  }
  return DAT_146887e60;
}



// FUNCTION 141398660 FUN_141398660 body=53 status=ok
// SIG undefined FUN_141398660(void)

void FUN_141398660(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_14494e840;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413986a0 FUN_1413986a0 body=47 status=ok
// SIG undefined FUN_1413986a0(void)

longlong FUN_1413986a0(void)

{
  if (DAT_146887e58 == 0) {
    FUN_141786440(&DAT_146887e58,&PTR_GetPrivateStaticClass_1449422f0);
  }
  return DAT_146887e58;
}



// FUNCTION 1413986d0 FUN_1413986d0 body=47 status=ok
// SIG undefined FUN_1413986d0(void)

longlong FUN_1413986d0(void)

{
  if (DAT_146887e50 == 0) {
    FUN_141786a30(&DAT_146887e50,&PTR_FUN_14634d510);
  }
  return DAT_146887e50;
}



// FUNCTION 141398730 FUN_141398730 body=162 status=ok
// SIG undefined FUN_141398730(void)

longlong FUN_141398730(void)

{
  if (DAT_146887e88 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxSHiFTMenuSignInAccountPage",&DAT_146887e88,FUN_14139c760,
                  0x250,0x10000008,0,L"Engine",FUN_141399590,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14139c440,&LAB_140447700,0);
  }
  return DAT_146887e88;
}



// FUNCTION 1413987e0 FUN_1413987e0 body=47 status=ok
// SIG undefined FUN_1413987e0(void)

longlong FUN_1413987e0(void)

{
  if (DAT_146887e80 == 0) {
    FUN_141786440(&DAT_146887e80,&PTR_FUN_144944060);
  }
  return DAT_146887e80;
}



// FUNCTION 141398810 FUN_141398810 body=47 status=ok
// SIG undefined FUN_141398810(void)

longlong FUN_141398810(void)

{
  if (DAT_146887e68 == 0) {
    FUN_141786a30(&DAT_146887e68,&PTR_FUN_14634d8b0);
  }
  return DAT_146887e68;
}



// FUNCTION 141398840 FUN_141398840 body=47 status=ok
// SIG undefined FUN_141398840(void)

longlong FUN_141398840(void)

{
  if (DAT_146887e70 == 0) {
    FUN_141786a30(&DAT_146887e70,&PTR_FUN_14634d970);
  }
  return DAT_146887e70;
}



// FUNCTION 141398870 FUN_141398870 body=47 status=ok
// SIG undefined FUN_141398870(void)

longlong FUN_141398870(void)

{
  if (DAT_146887e78 == 0) {
    FUN_141786a30(&DAT_146887e78,&PTR_FUN_14634da30);
  }
  return DAT_146887e78;
}



// FUNCTION 1413988b0 FUN_1413988b0 body=162 status=ok
// SIG undefined FUN_1413988b0(void)

longlong FUN_1413988b0(void)

{
  if (DAT_146887ea0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxSirenSkillScreenTree",&DAT_146887ea0,FUN_140447710,0xfb0,
                  0x10000000,0,L"Engine",FUN_141399610,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14139c4f0,&LAB_140447700,0);
  }
  return DAT_146887ea0;
}



// FUNCTION 141398960 FUN_141398960 body=47 status=ok
// SIG undefined FUN_141398960(void)

longlong FUN_141398960(void)

{
  if (DAT_146888120 == 0) {
    FUN_141786440(&DAT_146888120,&PTR_thunk_FUN_14139c4f0_144944870);
  }
  return DAT_146888120;
}



// FUNCTION 1413989b0 FUN_1413989b0 body=162 status=ok
// SIG undefined FUN_1413989b0(void)

longlong FUN_1413989b0(void)

{
  if (DAT_146887f70 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxSkillScreenItem",&DAT_146887f70,FUN_14139c7f0,0x5d0,
                  0x10000008,0,L"Engine",&LAB_1413997f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142f18d50,&LAB_140447700,0);
  }
  return DAT_146887f70;
}



// FUNCTION 141398a60 FUN_141398a60 body=162 status=ok
// SIG undefined FUN_141398a60(void)

longlong FUN_141398a60(void)

{
  if (DAT_146887eb0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxSkillBar",&DAT_146887eb0,FUN_140447710,0x1d0,0x10000008,0,
                  L"Engine",FUN_1413996d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146887eb0;
}



// FUNCTION 141398b10 FUN_141398b10 body=162 status=ok
// SIG undefined FUN_141398b10(void)

longlong FUN_141398b10(void)

{
  if (DAT_146887ed8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxSkillDurationBars",&DAT_146887ed8,FUN_14139c790,0x650,
                  0x10000000,0,L"Engine",FUN_141399750,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGSquadMemberWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146887ed8;
}



// FUNCTION 141398bc0 FUN_141398bc0 body=47 status=ok
// SIG undefined FUN_141398bc0(void)

longlong FUN_141398bc0(void)

{
  if (DAT_146887ed0 == 0) {
    FUN_141786440(&DAT_146887ed0,&PTR_FUN_144947de0);
  }
  return DAT_146887ed0;
}



// FUNCTION 141398bf0 FUN_141398bf0 body=47 status=ok
// SIG undefined FUN_141398bf0(void)

longlong FUN_141398bf0(void)

{
  if (DAT_146887eb8 == 0) {
    FUN_141786a30(&DAT_146887eb8,&PTR_FUN_14634e110);
  }
  return DAT_146887eb8;
}



// FUNCTION 141398c20 FUN_141398c20 body=47 status=ok
// SIG undefined FUN_141398c20(void)

longlong FUN_141398c20(void)

{
  if (DAT_146887ec0 == 0) {
    FUN_141786a30(&DAT_146887ec0,&PTR_FUN_14634e1e0);
  }
  return DAT_146887ec0;
}



// FUNCTION 141398c50 FUN_141398c50 body=47 status=ok
// SIG undefined FUN_141398c50(void)

longlong FUN_141398c50(void)

{
  if (DAT_146887ec8 == 0) {
    FUN_141786a30(&DAT_146887ec8,&PTR_FUN_14634e260);
  }
  return DAT_146887ec8;
}



// FUNCTION 141398ca0 FUN_141398ca0 body=162 status=ok
// SIG undefined FUN_141398ca0(void)

longlong FUN_141398ca0(void)

{
  if (DAT_146887f30 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxSkillScreenBranch",&DAT_146887f30,FUN_14139c7c0,0x490,
                  0x10000008,0,L"Engine",&LAB_141399780,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142f18d50,&LAB_140447700,0);
  }
  return DAT_146887f30;
}



// FUNCTION 141398d50 FUN_141398d50 body=47 status=ok
// SIG undefined FUN_141398d50(void)

longlong FUN_141398d50(void)

{
  if (DAT_146887f28 == 0) {
    FUN_141786440(&DAT_146887f28,&PTR_FUN_1449483c0);
  }
  return DAT_146887f28;
}



// FUNCTION 141398d80 FUN_141398d80 body=47 status=ok
// SIG undefined FUN_141398d80(void)

longlong FUN_141398d80(void)

{
  if (DAT_146887ee0 == 0) {
    FUN_141786a30(&DAT_146887ee0,&PTR_FUN_14634e3c0);
  }
  return DAT_146887ee0;
}



// FUNCTION 141398db0 FUN_141398db0 body=47 status=ok
// SIG undefined FUN_141398db0(void)

longlong FUN_141398db0(void)

{
  if (DAT_146887ee8 == 0) {
    FUN_141786a30(&DAT_146887ee8,&PTR_FUN_14634e440);
  }
  return DAT_146887ee8;
}



// FUNCTION 141398de0 FUN_141398de0 body=47 status=ok
// SIG undefined FUN_141398de0(void)

longlong FUN_141398de0(void)

{
  if (DAT_146887ef0 == 0) {
    FUN_141786a30(&DAT_146887ef0,&PTR_FUN_14634e4c0);
  }
  return DAT_146887ef0;
}



// FUNCTION 141398e10 FUN_141398e10 body=47 status=ok
// SIG undefined FUN_141398e10(void)

longlong FUN_141398e10(void)

{
  if (DAT_146887ef8 == 0) {
    FUN_141786a30(&DAT_146887ef8,&PTR_FUN_14634e580);
  }
  return DAT_146887ef8;
}



// FUNCTION 141398e40 FUN_141398e40 body=47 status=ok
// SIG undefined FUN_141398e40(void)

longlong FUN_141398e40(void)

{
  if (DAT_146887f00 == 0) {
    FUN_141786a30(&DAT_146887f00,&PTR_FUN_14634e5c0);
  }
  return DAT_146887f00;
}



// FUNCTION 141398e70 FUN_141398e70 body=47 status=ok
// SIG undefined FUN_141398e70(void)

longlong FUN_141398e70(void)

{
  if (DAT_146887f08 == 0) {
    FUN_141786a30(&DAT_146887f08,&PTR_FUN_14634e640);
  }
  return DAT_146887f08;
}



// FUNCTION 141398ea0 FUN_141398ea0 body=47 status=ok
// SIG undefined FUN_141398ea0(void)

longlong FUN_141398ea0(void)

{
  if (DAT_146887f10 == 0) {
    FUN_141786a30(&DAT_146887f10,&PTR_FUN_14634e700);
  }
  return DAT_146887f10;
}



// FUNCTION 141398ed0 FUN_141398ed0 body=47 status=ok
// SIG undefined FUN_141398ed0(void)

longlong FUN_141398ed0(void)

{
  if (DAT_146887f18 == 0) {
    FUN_141786a30(&DAT_146887f18,&PTR_FUN_14634e7c0);
  }
  return DAT_146887f18;
}



// FUNCTION 141398f00 FUN_141398f00 body=47 status=ok
// SIG undefined FUN_141398f00(void)

longlong FUN_141398f00(void)

{
  if (DAT_146887f20 == 0) {
    FUN_141786a30(&DAT_146887f20,&PTR_FUN_14634e880);
  }
  return DAT_146887f20;
}



// FUNCTION 141398f30 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ACineCameraActor::GetPrivateStaticClass(void)

{
  if (DAT_146887db0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxSHiFTMenuNoCrossplay",&DAT_146887db0,FUN_14139c640,0x930,
                  0x10000000,0,L"Engine",&LAB_141399330,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  AGShrineUsable::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146887db0;
}



// FUNCTION 141398ff0 FUN_141398ff0 body=162 status=ok
// SIG undefined FUN_141398ff0(void)

longlong FUN_141398ff0(void)

{
  if (DAT_146887df8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxSHiFTMenuEditableTextField",&DAT_146887df8,FUN_140447710,
                  0x430,0x10000008,0,L"Engine",FUN_1413991b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14139c5f0,&LAB_140447700,0);
  }
  return DAT_146887df8;
}



// FUNCTION 1413990a0 FUN_1413990a0 body=47 status=ok
// SIG undefined FUN_1413990a0(void)

longlong FUN_1413990a0(void)

{
  if (DAT_146887f68 == 0) {
    FUN_141786440(&DAT_146887f68,&PTR_FUN_14493bb70);
  }
  return DAT_146887f68;
}



// FUNCTION 1413990d0 FUN_1413990d0 body=47 status=ok
// SIG undefined FUN_1413990d0(void)

longlong FUN_1413990d0(void)

{
  if (DAT_146887f60 == 0) {
    FUN_141786a30(&DAT_146887f60,&PTR_FUN_14634eca0);
  }
  return DAT_146887f60;
}



// FUNCTION 141399100 FUN_141399100 body=53 status=ok
// SIG undefined FUN_141399100(void)

void FUN_141399100(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 200;
    *puVar1 = &PTR_FUN_14494cf60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141399140 FUN_141399140 body=99 status=ok
// SIG undefined FUN_141399140(void)

void FUN_141399140(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141399ea0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144949db8;
    puVar1[0x2e] = &PTR_LAB_14494a0c8;
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0;
    puVar1[0x42] = 0;
    puVar1[0x43] = 0;
    puVar1[0x44] = 0;
  }
  return;
}



// FUNCTION 1413991b0 FUN_1413991b0 body=379 status=ok
// SIG undefined FUN_1413991b0(void)

void FUN_1413991b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413205b0(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x5b) = 0xffffffff;
    puVar1[0x59] = 0;
    puVar1[0x5a] = 0;
    *(undefined1 *)((longlong)puVar1 + 0x2f4) = 0;
    puVar1[0x5f] = 0;
    *(undefined4 *)(puVar1 + 0x60) = 0;
    *(undefined1 *)(puVar1 + 0x62) = 0;
    puVar1[99] = 0;
    puVar1[100] = 0;
    *(undefined2 *)(puVar1 + 0x65) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x32a) = 1;
    *(undefined4 *)((longlong)puVar1 + 0x32c) = 0;
    *(undefined1 *)(puVar1 + 0x66) = 1;
    puVar1[0x67] = 0;
    puVar1[0x68] = 0;
    puVar1[0x69] = 0;
    puVar1[0x6a] = 0;
    puVar1[0x6b] = 0;
    puVar1[0x6c] = 0;
    puVar1[0x6d] = 0;
    *(undefined4 *)(puVar1 + 0x6e) = 0;
    puVar1[0x6f] = 0;
    *(undefined4 *)(puVar1 + 0x70) = 0;
    puVar1[0x71] = 0;
    *(undefined4 *)(puVar1 + 0x72) = 0;
    puVar1[0x73] = 0;
    *(undefined4 *)(puVar1 + 0x74) = 0;
    puVar1[0x75] = 0;
    *(undefined4 *)(puVar1 + 0x76) = 0;
    puVar1[0x77] = 0;
    *(undefined4 *)(puVar1 + 0x78) = 0;
    puVar1[0x79] = 0;
    *(undefined4 *)(puVar1 + 0x7a) = 0;
    puVar1[0x7b] = 0;
    *(undefined4 *)(puVar1 + 0x7c) = 0;
    puVar1[0x7d] = 0;
    puVar1[0x7e] = 0;
    puVar1[0x7f] = 0;
    *(undefined2 *)(puVar1 + 0x80) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x402) = 0;
    puVar1[0x81] = 0;
    puVar1[0x82] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__1449499e8;
    puVar1[0x2e] = &PTR_LAB_144949d30;
    puVar1[0x61] = &PTR_LAB_144949d80;
    puVar1[0x83] = 0;
    puVar1[0x84] = 0;
    *(undefined4 *)(puVar1 + 0x85) = 0;
  }
  return;
}



// FUNCTION 141399340 FUN_141399340 body=71 status=ok
// SIG undefined FUN_141399340(void)

void FUN_141399340(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141399ea0(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__14494a1f0;
    puVar1[0x2e] = &PTR_LAB_14494a500;
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
  }
  return;
}



// FUNCTION 141399390 FUN_141399390 body=78 status=ok
// SIG undefined FUN_141399390(void)

void FUN_141399390(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141399ea0(puVar1,param_1);
    *puVar1 = &PTR_FUN_14494a570;
    puVar1[0x2e] = &PTR_LAB_14494a880;
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0;
  }
  return;
}



// FUNCTION 141399400 FUN_141399400 body=78 status=ok
// SIG undefined FUN_141399400(void)

void FUN_141399400(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141399ea0(puVar1,param_1);
    *puVar1 = &PTR_FUN_14494a900;
    puVar1[0x2e] = &PTR_LAB_14494ac10;
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0;
  }
  return;
}



// FUNCTION 141399450 FUN_141399450 body=308 status=ok
// SIG undefined FUN_141399450(void)

void FUN_141399450(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141399ea0(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__14494ac80;
    puVar1[0x2e] = &PTR_LAB_14494af90;
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0;
    puVar1[0x42] = 0;
    puVar1[0x43] = 0;
    puVar1[0x44] = 0;
    puVar1[0x45] = 0;
    puVar1[0x46] = 0;
    puVar1[0x47] = 0;
    puVar1[0x48] = 0;
    puVar1[0x49] = 0;
    puVar1[0x4a] = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 0x49,0);
    FGenericPlatformString::Convert<char,wchar_t>(puVar1[0x49],0x14,"RewardHiistoryEntry",0x14,0x3f)
    ;
    puVar1[0x4b] = 0;
    puVar1[0x4c] = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 0x4b,0);
    FGenericPlatformString::Convert<char,wchar_t>
              (puVar1[0x4b],0x19,"RewardHiistoryEntrySplit",0x19,0x3f);
    uVar2 = URemnantGameInstance::GetPrivateStaticClass();
    puVar1[0x4d] = uVar2;
  }
  return;
}



// FUNCTION 141399590 FUN_141399590 body=120 status=ok
// SIG undefined FUN_141399590(void)

void FUN_141399590(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141399ea0(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__14494b028;
    puVar1[0x2e] = &PTR_LAB_14494b338;
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0;
    puVar1[0x42] = 0;
    puVar1[0x43] = 0;
    puVar1[0x44] = 0;
    puVar1[0x45] = 0;
    puVar1[0x46] = 0;
    puVar1[0x47] = 0;
  }
  return;
}



// FUNCTION 141399610 FUN_141399610 body=182 status=ok
// SIG undefined FUN_141399610(void)

void FUN_141399610(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1410229d0(puVar1,param_1);
    *puVar1 = &PTR_FUN_14494b9d0;
    puVar1[0x1e2] = 0;
    puVar1[0x9b] = &PTR_LAB_14494bf98;
    puVar1[0xd5] = &PTR_LAB_14494c118;
    puVar1[0x1e3] = 0;
    puVar1[0x1e4] = 0;
    puVar1[0x1e5] = 0;
    puVar1[0x1e6] = 0;
    FText::FText(puVar1 + 0x1e7);
    FText::FText(puVar1 + 0x1ea);
    FText::FText(puVar1 + 0x1ed);
    FText::FText(puVar1 + 0x1f0);
    puVar1[499] = 0;
    puVar1[500] = 0;
  }
  return;
}



// FUNCTION 1413996d0 FUN_1413996d0 body=113 status=ok
// SIG undefined FUN_1413996d0(void)

void FUN_1413996d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_14494c190;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    puVar1[0x32] = 0;
    puVar1[0x33] = 0;
    *(undefined1 *)(puVar1 + 0x36) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1b4) = 0;
    *(undefined4 *)(puVar1 + 0x37) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined4 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined4 *)(puVar1 + 0x39) = 0;
  }
  return;
}



// FUNCTION 141399750 FUN_141399750 body=41 status=ok
// SIG undefined FUN_141399750(void)

void FUN_141399750(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140f5a170(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__14494c438;
  }
  return;
}



// FUNCTION 1413997a0 FUN_1413997a0 body=78 status=ok
// SIG undefined FUN_1413997a0(void)

void FUN_1413997a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_14494b728;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
  }
  return;
}



// FUNCTION 141399810 FUN_141399810 body=200 status=ok
// SIG undefined FUN_141399810(void)

void FUN_141399810(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413205b0(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x5b) = 0xffffffff;
    puVar1[0x59] = 0;
    puVar1[0x5a] = 0;
    *(undefined1 *)((longlong)puVar1 + 0x2f4) = 0;
    puVar1[0x5f] = 0;
    *(undefined4 *)(puVar1 + 0x60) = 0;
    *puVar1 = &PTR_FUN_14494d088;
    puVar1[0x2e] = &PTR_LAB_14494d3b8;
    puVar1[0x61] = 0;
    puVar1[0x62] = 0;
    puVar1[99] = 0;
    puVar1[100] = 0;
    puVar1[0x65] = 0;
    puVar1[0x66] = 0;
    FText::FText(puVar1 + 0x67);
    FText::FText(puVar1 + 0x6a);
    FText::FText(puVar1 + 0x6d);
    puVar1[0x71] = 0;
  }
  return;
}



// FUNCTION 1413998e0 FUN_1413998e0 body=239 status=ok
// SIG undefined FUN_1413998e0(void)

void FUN_1413998e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413205b0(puVar1,param_1);
    *puVar1 = &PTR_FUN_14494d418;
    puVar1[0x2e] = &PTR_LAB_14494d738;
    puVar1[0x59] = 0;
    puVar1[0x5a] = 0;
    puVar1[0x5b] = 0;
    puVar1[0x5c] = 0;
    puVar1[0x5d] = 0;
    *(undefined1 *)(puVar1 + 0x5e) = 0;
    puVar1[0x5f] = 0;
    *(undefined4 *)(puVar1 + 0x60) = 0xffffffff;
    *(undefined1 *)((longlong)puVar1 + 0x304) = 0;
    *(undefined1 *)(puVar1 + 0x61) = 0xff;
    puVar1[0x62] = 0;
    *(undefined4 *)(puVar1 + 99) = 0;
    puVar1[100] = 0;
    puVar1[0x65] = 0;
    FUN_1410228f0(puVar1 + 0x66);
    puVar1[0x7f] = 0;
    puVar1[0x80] = 0;
    puVar1[0x81] = 0;
    puVar1[0x82] = 0;
    puVar1[0x83] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x84,0);
    *(undefined1 *)(puVar1 + 0x85) = 0;
  }
  return;
}



// FUNCTION 1413999d0 FUN_1413999d0 body=132 status=ok
// SIG undefined FUN_1413999d0(void)

void FUN_1413999d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141325970(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1448a6660;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    FText::FText(puVar1 + 0x1a);
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    *(undefined2 *)(puVar1 + 0x20) = 1;
    puVar1[0x21] = 0;
    *(undefined4 *)(puVar1 + 0x22) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__14494d7e8;
  }
  return;
}



// FUNCTION 141399a60 FUN_141399a60 body=154 status=ok
// SIG undefined FUN_141399a60(void)

void FUN_141399a60(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413205b0(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x5b) = 0xffffffff;
    puVar1[0x59] = 0;
    puVar1[0x5a] = 0;
    *(undefined1 *)((longlong)puVar1 + 0x2f4) = 0;
    puVar1[0x5f] = 0;
    *(undefined4 *)(puVar1 + 0x60) = 0;
    *puVar1 = &PTR_FUN_14494da90;
    puVar1[0x66] = 0;
    puVar1[0x2e] = &PTR_LAB_14494ddc0;
    *(undefined4 *)(puVar1 + 0x67) = 0xffffffff;
    puVar1[0x69] = 0;
    puVar1[0x6a] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x6d,0);
    return;
  }
  return;
}



// FUNCTION 141399b00 FUN_141399b00 body=86 status=ok
// SIG undefined FUN_141399b00(void)

void FUN_141399b00(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141363e50(puVar1,param_1);
    *(undefined4 *)(puVar1 + 100) = 0xffffffff;
    *puVar1 = &PTR__scalar_deleting_destructor__14494e1a8;
    puVar1[0x2e] = &PTR_LAB_14494e158;
    *(undefined4 *)((longlong)puVar1 + 0x324) = 0;
    puVar1[0x65] = 0xffffffffffffffff;
  }
  return;
}



// FUNCTION 141399b80 FUN_141399b80 body=264 status=ok
// SIG undefined FUN_141399b80(void)

undefined8 * FUN_141399b80(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FText::FText(param_1 + 0x28);
  *(undefined2 *)(param_1 + 0x2b) = 0;
  return param_1;
}



// FUNCTION 141399c90 FUN_141399c90 body=522 status=ok
// SIG undefined FUN_141399c90(void)

undefined8 * FUN_141399c90(undefined8 *param_1)

{
  FUN_1410b3d60();
  *(undefined1 *)(param_1 + 0xd1) = 0;
  param_1[0xd2] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1449492d0;
  param_1[0xd3] = 0;
  param_1[0x9b] = &PTR_LAB_144949868;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  FWeakObjectPtr::operator=(param_1 + 0xdb,0);
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  FText::FText(param_1 + 0xdf);
  FText::FText(param_1 + 0xe2);
  FText::FText(param_1 + 0xe5);
  FText::FText(param_1 + 0xe8);
  FText::FText(param_1 + 0xeb);
  FText::FText(param_1 + 0xee);
  FText::FText(param_1 + 0xf1);
  FText::FText(param_1 + 0xf4);
  FText::FText(param_1 + 0xf7);
  FText::FText(param_1 + 0xfa);
  FText::FText(param_1 + 0xfd);
  FText::FText(param_1 + 0x100);
  FText::FText(param_1 + 0x103);
  FText::FText(param_1 + 0x106);
  FText::FText(param_1 + 0x109);
  FText::FText(param_1 + 0x10c);
  FText::FText(param_1 + 0x10f);
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  *(undefined4 *)(param_1 + 0x116) = 0xffffffff;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  *(undefined1 *)(param_1 + 0x119) = 0;
  param_1[0x11d] = 0;
  *(undefined4 *)(param_1 + 0x11b) = 0x3e0c49ba;
  *(undefined4 *)((longlong)param_1 + 0x8dc) = 0x3f2d9168;
  *(undefined4 *)(param_1 + 0x11c) = 0x3f70e560;
  *(undefined4 *)((longlong)param_1 + 0x8e4) = 0x3f800000;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  return param_1;
}



// FUNCTION 141399ea0 FUN_141399ea0 body=218 status=ok
// SIG undefined FUN_141399ea0(void)

undefined8 * FUN_141399ea0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  FUN_14106e9c0();
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_14493b378;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x2e] = &PTR_LAB_14493b688;
  FWeakObjectPtr::operator=((longlong)param_1 + 0x184,0);
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"OnEditableTextClicked",1);
  param_1[0x3c] = *puVar1;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"OnEditableTextFocused",1);
  param_1[0x3d] = *puVar1;
  *(undefined2 *)(param_1 + 0x3e) = 1;
  return param_1;
}



// FUNCTION 141399f80 FUN_141399f80 body=479 status=ok
// SIG undefined FUN_141399f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141399f80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_1413205b0();
  *(undefined4 *)(param_1 + 0x59) = 3;
  *param_1 = &PTR_FUN_14494ca30;
  param_1[0x2e] = &PTR_LAB_14494cd50;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 2;
  *(undefined4 *)(param_1 + 0x5a) = 4;
  *(undefined1 *)((longlong)param_1 + 0x2d4) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x7c] = 0;
  uVar1 = _DAT_1464aa6e8;
  param_1[0x7d] = _DAT_1464aa6e0;
  param_1[0x7e] = uVar1;
  uVar2 = _DAT_1464aa6e8;
  uVar1 = _DAT_1464aa6e0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  *(undefined1 *)((longlong)param_1 + 0x414) = 0;
  *(undefined1 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined1 *)((longlong)param_1 + 0x424) = 0;
  param_1[0x7f] = uVar1;
  param_1[0x80] = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x83) = 0xffffffff;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return param_1;
}



// FUNCTION 14139a160 FUN_14139a160 body=570 status=ok
// SIG undefined FUN_14139a160(void)

undefined8 * FUN_14139a160(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_1413205b0();
  *param_1 = &PTR__scalar_deleting_destructor__14494b3b8;
  param_1[0x2e] = &PTR_LAB_14494b6d8;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x8e,0);
  uVar3 = DAT_1464aa6cc;
  uVar2 = DAT_1464aa6c8;
  uVar1 = DAT_1464aa6c4;
  *(undefined4 *)(param_1 + 0x8f) = DAT_1464aa6c0;
  *(undefined4 *)((longlong)param_1 + 0x47c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x484) = uVar3;
  *(undefined4 *)(param_1 + 0x91) = 0x3f6c0831;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0x3f63d70a;
  *(undefined4 *)(param_1 + 0x92) = 0x3d810625;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x93) = 0x3ee6e979;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0x3ee6e979;
  *(undefined4 *)(param_1 + 0x94) = 0x3ee6e979;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x95) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x4ac) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4d4) = 0;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  FUN_1410228f0(param_1 + 0xa0);
  return param_1;
}



// FUNCTION 14139a3a0 FUN_14139a3a0 body=1163 status=ok
// SIG undefined FUN_14139a3a0(void)

void FUN_14139a3a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x918) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x908) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8e8) != 0) {
    FMemory::Free();
  }
  FUN_1413940c0(param_1 + 0x8a0);
  plVar4 = *(longlong **)(param_1 + 0x880);
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
  plVar4 = *(longlong **)(param_1 + 0x868);
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
  plVar4 = *(longlong **)(param_1 + 0x850);
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
  plVar4 = *(longlong **)(param_1 + 0x838);
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
  plVar4 = *(longlong **)(param_1 + 0x820);
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
  plVar4 = *(longlong **)(param_1 + 0x808);
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
  plVar4 = *(longlong **)(param_1 + 0x7f0);
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
  plVar4 = *(longlong **)(param_1 + 0x7d8);
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
  plVar4 = *(longlong **)(param_1 + 0x7c0);
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
  plVar4 = *(longlong **)(param_1 + 0x7a8);
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
  plVar4 = *(longlong **)(param_1 + 0x790);
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
  plVar4 = *(longlong **)(param_1 + 0x778);
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
  plVar4 = *(longlong **)(param_1 + 0x760);
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
  plVar4 = *(longlong **)(param_1 + 0x748);
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
  plVar4 = *(longlong **)(param_1 + 0x730);
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
  plVar4 = *(longlong **)(param_1 + 0x718);
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
  plVar4 = *(longlong **)(param_1 + 0x700);
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
  plVar4 = *(longlong **)(param_1 + 0x6e8);
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
  FUN_140e9c5f0(param_1);
  return;
}



// FUNCTION 14139a830 FUN_14139a830 body=734 status=ok
// SIG undefined FUN_14139a830(void)

void FUN_14139a830(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x478);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x468);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x458);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x448);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x438);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x428);
  if (*(longlong *)(param_1 + 0x3d8) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x3d0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x3b8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x3a8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x398);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x388);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x378);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x368);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x358);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x348);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x338);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x328);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x308);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  FUN_141320cb0(param_1);
  return;
}



// FUNCTION 14139ab10 FUN_14139ab10 body=959 status=ok
// SIG undefined FUN_14139ab10(void)

void FUN_14139ab10(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_141023720(param_1 + 0x500);
  if (*(char *)(param_1 + 0x4f8) != '\0') {
    *(undefined1 *)(param_1 + 0x4f8) = 0;
  }
  if (*(char *)(param_1 + 0x4d4) != '\0') {
    *(undefined1 *)(param_1 + 0x4d4) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 0x450);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x438);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x420);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x410);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x3f8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x3e0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x3d0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x3c0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x3b0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x3a0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x390);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x380);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x370);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x360);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x350);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x340);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x330);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x318);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2e8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2c8);
  FUN_141320cb0(param_1);
  return;
}



// FUNCTION 14139aed0 FUN_14139aed0 body=294 status=ok
// SIG undefined FUN_14139aed0(void)

void FUN_14139aed0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x410);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x398);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x388);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x378);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x368);
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
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x308) = &PTR_FUN_143f48658;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f8);
  FUN_141320cb0(param_1);
  return;
}



// FUNCTION 14139b000 FUN_14139b000 body=953 status=ok
// SIG undefined FUN_14139b000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14139b000(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  *param_1 = *param_2;
  puVar1 = param_1 + 1;
  uStack_c0 = (longlong *)param_2[2];
  local_c8 = param_2[1];
  if (uStack_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_c0 + 1) = (int)uStack_c0[1] + 1;
    UNLOCK();
  }
  if (&local_c8 != puVar1) {
    local_c8._4_4_ = (undefined4)((ulonglong)local_c8 >> 0x20);
    uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
    uVar6 = *puVar1;
    plVar5 = (longlong *)param_1[2];
    local_78 = (undefined4)local_c8;
    uStack_74 = local_c8._4_4_;
    uStack_70 = (undefined4)uStack_c0;
    uStack_6c = uStack_c0._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_c8;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_c8._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_c0;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_c0._4_4_;
    local_c8 = uVar6;
    uStack_c0 = plVar5;
  }
  plVar5 = uStack_c0;
  if (uStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_c0 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_c0)(uStack_c0);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_c0 + 8))(uStack_c0,1);
      }
    }
  }
  plVar5 = (longlong *)param_2[4];
  puVar1 = param_1 + 3;
  uVar6 = param_2[3];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_b8 = uVar6;
  plStack_b0 = plVar5;
  if (&local_b8 != puVar1) {
    local_b8 = *puVar1;
    plStack_b0 = (longlong *)param_1[4];
    *puVar1 = uVar6;
    param_1[4] = plVar5;
    local_68 = uVar6;
    plStack_60 = plVar5;
  }
  plVar5 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_b0 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
      }
    }
  }
  plVar5 = (longlong *)param_2[6];
  puVar1 = param_1 + 5;
  uVar6 = param_2[5];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_a8 = uVar6;
  plStack_a0 = plVar5;
  if (&local_a8 != puVar1) {
    local_a8 = *puVar1;
    plStack_a0 = (longlong *)param_1[6];
    *puVar1 = uVar6;
    param_1[6] = plVar5;
    local_58 = uVar6;
    plStack_50 = plVar5;
  }
  plVar5 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_a0 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
      }
    }
  }
  plVar5 = (longlong *)param_2[8];
  puVar1 = param_1 + 7;
  uVar6 = param_2[7];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_98 = uVar6;
  plStack_90 = plVar5;
  if (&local_98 != puVar1) {
    local_98 = *puVar1;
    plStack_90 = (longlong *)param_1[8];
    *puVar1 = uVar6;
    param_1[8] = plVar5;
    local_48 = uVar6;
    plStack_40 = plVar5;
  }
  plVar5 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_90 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  plVar5 = (longlong *)param_2[10];
  puVar1 = param_1 + 9;
  uVar6 = param_2[9];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_88 = uVar6;
  plStack_80 = plVar5;
  if (&local_88 != puVar1) {
    local_88 = *puVar1;
    plStack_80 = (longlong *)param_1[10];
    *puVar1 = uVar6;
    param_1[10] = plVar5;
    local_38 = uVar6;
    plStack_30 = plVar5;
  }
  plVar5 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_80 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
  }
  FUN_141337f90(param_1 + 0xb,param_2 + 0xb);
  FUN_141337f90(param_1 + 0xe,param_2 + 0xe);
  FUN_141337f90(param_1 + 0x11,param_2 + 0x11);
  FUN_141337f90(param_1 + 0x14,param_2 + 0x14);
  FUN_141337f90(param_1 + 0x17,param_2 + 0x17);
  FUN_141337f90(param_1 + 0x1a,param_2 + 0x1a);
  FUN_141337f90(param_1 + 0x1d,param_2 + 0x1d);
  FUN_141337f90(param_1 + 0x20,param_2 + 0x20);
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  FText::operator=(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_2 + 0x2b);
  *(undefined1 *)((longlong)param_1 + 0x159) = *(undefined1 *)((longlong)param_2 + 0x159);
  return param_1;
}



// FUNCTION 14139b4a0 FUN_14139b4a0 body=52 status=ok
// SIG undefined FUN_14139b4a0(void)

undefined8 FUN_14139b4a0(undefined8 param_1,ulonglong param_2)

{
  FUN_141394140();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 14139b4e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UNavigationSystemV1::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14139aed0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x430);
  }
  return param_1;
}



// FUNCTION 14139b520 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FXAudio2Device::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14139a3a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x930);
  }
  return param_1;
}



// FUNCTION 14139b560 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessDiaphragmDOFBuildBokehLUTCS::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_141394140();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 14139b5a0 FUN_14139b5a0 body=52 status=ok
// SIG undefined FUN_14139b5a0(void)

undefined8 FUN_14139b5a0(undefined8 param_1,ulonglong param_2)

{
  FUN_141394140();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 14139b5e0 `scalar_deleting_destructor' body=107 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAncSquadEffectIconWidget::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  FUN_141394140(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x270);
  }
  return param_1;
}



// FUNCTION 14139b650 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FShaderCompilerEnvironment::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141394140();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x250);
  }
  return param_1;
}



// FUNCTION 14139b690 FUN_14139b690 body=323 status=ok
// SIG undefined FUN_14139b690(void)

longlong FUN_14139b690(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xf98) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0xf88);
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
  plVar4 = *(longlong **)(param_1 + 0xf70);
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
  plVar4 = *(longlong **)(param_1 + 0xf58);
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
  plVar4 = *(longlong **)(param_1 + 0xf40);
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
  FUN_1410238b0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xfb0);
  }
  return param_1;
}



// FUNCTION 14139b7e0 FUN_14139b7e0 body=142 status=ok
// SIG undefined FUN_14139b7e0(void)

longlong FUN_14139b7e0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
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
    FMemory::operator_delete(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 14139b870 FUN_14139b870 body=52 status=ok
// SIG undefined FUN_14139b870(void)

undefined8 FUN_14139b870(undefined8 param_1,ulonglong param_2)

{
  FUN_14139a830();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x490);
  }
  return param_1;
}



// FUNCTION 14139b8b0 FUN_14139b8b0 body=239 status=ok
// SIG undefined FUN_14139b8b0(void)

longlong FUN_14139b8b0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x188);
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
  plVar4 = *(longlong **)(param_1 + 0x178);
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
  FUN_140ce1dc0(param_1 + 0xa0);
  plVar4 = *(longlong **)(param_1 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 14139b9a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UWeapon::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14139ab10();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5d0);
  }
  return param_1;
}



// FUNCTION 14139b9e0 FUN_14139b9e0 body=260 status=ok
// SIG undefined FUN_14139b9e0(void)

longlong FUN_14139b9e0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x370);
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
  plVar4 = *(longlong **)(param_1 + 0x358);
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
  plVar4 = *(longlong **)(param_1 + 0x340);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f8);
  FUN_141320cb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x390);
  }
  return param_1;
}



// FUNCTION 14139baf0 FUN_14139baf0 body=156 status=ok
// SIG undefined FUN_14139baf0(void)

longlong FUN_14139baf0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_141023720(param_1 + 0x330);
  plVar3 = *(longlong **)(param_1 + 0x328);
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
  plVar3 = *(longlong **)(param_1 + 0x2d0);
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
  FUN_141320cb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x430);
  }
  return param_1;
}



// FUNCTION 14139bb90 FUN_14139bb90 body=85 status=ok
// SIG undefined FUN_14139bb90(void)

longlong FUN_14139bb90(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f8);
  FUN_141320cb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x370);
  }
  return param_1;
}



// FUNCTION 14139bbf0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 ADungeonDebug::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1413643c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 14139bc30 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FUGSlateStyleSet::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14139aed0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x420);
  }
  return param_1;
}



// FUNCTION 14139bca0 FUN_14139bca0 body=38 status=ok
// SIG undefined FUN_14139bca0(void)

void FUN_14139bca0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x160);
  FUN_141399b80(param_2);
  return;
}



// FUNCTION 14139bcd0 FUN_14139bcd0 body=63 status=ok
// SIG undefined FUN_14139bcd0(void)

void FUN_14139bcd0(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2 + 1,0,0x50);
  *param_2 = 0;
  FText::FText(param_2 + 1);
  FText::FText(param_2 + 4);
  FText::FText(param_2 + 7);
  return;
}



// FUNCTION 14139bd10 FUN_14139bd10 body=38 status=ok
// SIG undefined FUN_14139bd10(void)

void FUN_14139bd10(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,200);
  FUN_1410228f0(param_2);
  return;
}



// FUNCTION 14139bd40 FUN_14139bd40 body=233 status=ok
// SIG undefined FUN_14139bd40(void)

undefined8 FUN_14139bd40(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined8 *)(param_3 + 8);
    do {
      *param_2 = puVar4[-1];
      plVar1 = param_2 + 6;
      param_2[1] = *puVar4;
      param_2[2] = puVar4[1];
      param_2[3] = puVar4[2];
      param_2[4] = puVar4[3];
      *(undefined1 *)(param_2 + 5) = *(undefined1 *)(puVar4 + 4);
      *(undefined1 *)((longlong)param_2 + 0x29) = *(undefined1 *)((longlong)puVar4 + 0x21);
      if (puVar4 + 5 != plVar1) {
        if ((*(int *)(puVar4 + 6) == 0) ||
           (plVar2 = (longlong *)puVar4[5], plVar2 == (longlong *)0x0)) {
          if ((*(int *)(param_2 + 7) != 0) &&
             (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x28))(plVar2,0);
            if (*plVar1 != 0) {
              lVar3 = FMemory::Realloc(*plVar1,0,0);
              *plVar1 = lVar3;
            }
            *(undefined4 *)(param_2 + 7) = 0;
          }
        }
        else {
          (**(code **)(*plVar2 + 0x30))();
        }
      }
      puVar4 = puVar4 + 8;
      param_4 = param_4 + -1;
      param_2 = param_2 + 8;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14139be30 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FGPUSpriteResourceData>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_14139b000(param_2 + param_3,param_3);
      param_3 = param_3 + 0x160;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14139be80 FUN_14139be80 body=136 status=ok
// SIG undefined FUN_14139be80(void)

undefined8 FUN_14139be80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20 + param_2);
      FText::operator=(param_2 + -0x18,param_3 + -0x18 + param_2);
      FText::operator=(param_2,param_3 + param_2);
      FText::operator=(param_2 + 0x18,param_3 + 0x18 + param_2);
      *(undefined1 *)(param_2 + 0x30) = *(undefined1 *)(param_3 + 0x30 + param_2);
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14139bf10 FUN_14139bf10 body=425 status=ok
// SIG undefined FUN_14139bf10(void)

undefined8 FUN_14139bf10(undefined8 param_1,char *param_2,longlong param_3,int param_4)

{
  char *pcVar1;
  
  if (param_4 != 0) {
    pcVar1 = (char *)(param_3 + 0x94);
    do {
      *param_2 = pcVar1[-0x94];
      FText::operator=(param_2 + 8,pcVar1 + -0x8c);
      FText::operator=(param_2 + 0x20,pcVar1 + -0x74);
      FText::operator=(param_2 + 0x38,pcVar1 + -0x5c);
      FText::operator=(param_2 + 0x50,pcVar1 + -0x44);
      FText::operator=(param_2 + 0x68,pcVar1 + -0x2c);
      *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(pcVar1 + -0x14);
      if (pcVar1 + -0x10 != param_2 + 0x84) {
        if (param_2[0x88] != '\0') {
          param_2[0x88] = '\0';
        }
        if (pcVar1[-0xc] != '\0') {
          *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(pcVar1 + -0x10);
          param_2[0x88] = '\x01';
        }
      }
      *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(pcVar1 + -8);
      if (pcVar1 + -4 != param_2 + 0x90) {
        if (param_2[0x94] != '\0') {
          param_2[0x94] = '\0';
        }
        if (*pcVar1 != '\0') {
          *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(pcVar1 + -4);
          param_2[0x94] = '\x01';
        }
      }
      *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)(pcVar1 + 4);
      if (pcVar1 + 8 != param_2 + 0x9c) {
        if (param_2[0xa0] != '\0') {
          param_2[0xa0] = '\0';
        }
        if (pcVar1[0xc] != '\0') {
          *(undefined4 *)(param_2 + 0x9c) = *(undefined4 *)(pcVar1 + 8);
          param_2[0xa0] = '\x01';
        }
      }
      *(undefined4 *)(param_2 + 0xa4) = *(undefined4 *)(pcVar1 + 0x10);
      if (pcVar1 + 0x14 != param_2 + 0xa8) {
        if (param_2[0xac] != '\0') {
          param_2[0xac] = '\0';
        }
        if (pcVar1[0x18] != '\0') {
          *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(pcVar1 + 0x14);
          param_2[0xac] = '\x01';
        }
      }
      param_2[0xb0] = pcVar1[0x1c];
      param_2[0xb1] = pcVar1[0x1d];
      param_2[0xb2] = pcVar1[0x1e];
      param_2[0xb3] = pcVar1[0x1f];
      FString::operator=(param_2 + 0xb8,pcVar1 + 0x24);
      pcVar1 = pcVar1 + 200;
      param_4 = param_4 + -1;
      param_2 = param_2 + 200;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14139c0e0 FUN_14139c0e0 body=197 status=ok
// SIG undefined FUN_14139c0e0(void)

void FUN_14139c0e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_2 + 0x40);
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
  plVar4 = *(longlong **)(param_2 + 0x28);
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



// FUNCTION 14139c1c0 FUN_14139c1c0 body=55 status=ok
// SIG undefined FUN_14139c1c0(void)

void FUN_14139c1c0(void)

{
  undefined8 uVar1;
  
  if (DAT_146887918 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146887918 = GetStaticEnum(FUN_14139cbb0,uVar1,L"EGFxSkillScreenLoadoutChoiceEquipState");
  }
  return;
}



// FUNCTION 14139c200 FUN_14139c200 body=55 status=ok
// SIG undefined FUN_14139c200(void)

void FUN_14139c200(void)

{
  undefined8 uVar1;
  
  if (DAT_146887920 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146887920 = GetStaticEnum(FUN_14139cbe0,uVar1,L"EGFxSkillScreenState");
  }
  return;
}



// FUNCTION 14139c240 FUN_14139c240 body=55 status=ok
// SIG undefined FUN_14139c240(void)

void FUN_14139c240(void)

{
  undefined8 uVar1;
  
  if (DAT_146887930 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146887930 = GetStaticEnum(FUN_14139cc10,uVar1,L"ESirenSkillScreenSlotType");
  }
  return;
}



// FUNCTION 14139c280 FUN_14139c280 body=55 status=ok
// SIG undefined FUN_14139c280(void)

void FUN_14139c280(void)

{
  undefined8 uVar1;
  
  if (DAT_146887938 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146887938 = GetStaticEnum(FUN_14139cc40,uVar1,L"ESkillItemActionState");
  }
  return;
}



// FUNCTION 14139c2c0 FUN_14139c2c0 body=55 status=ok
// SIG undefined FUN_14139c2c0(void)

void FUN_14139c2c0(void)

{
  undefined8 uVar1;
  
  if (DAT_146887940 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146887940 = GetStaticEnum(FUN_14139cc70,uVar1,L"ESkillItemUnlockAnimState");
  }
  return;
}



// FUNCTION 14139c300 FUN_14139c300 body=55 status=ok
// SIG undefined FUN_14139c300(void)

void FUN_14139c300(void)

{
  undefined8 uVar1;
  
  if (DAT_146887948 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146887948 = GetStaticEnum(FUN_14139cca0,uVar1,L"ESkillScreenItemPurchaseState");
  }
  return;
}



// FUNCTION 14139c340 FUN_14139c340 body=55 status=ok
// SIG undefined FUN_14139c340(void)

void FUN_14139c340(void)

{
  undefined8 uVar1;
  
  if (DAT_146887910 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146887910 = GetStaticEnum(FUN_14139ccd0,uVar1,L"ESkillScreenLoadoutSlotClearability");
  }
  return;
}



// FUNCTION 14139c380 FUN_14139c380 body=55 status=ok
// SIG undefined FUN_14139c380(void)

void FUN_14139c380(void)

{
  undefined8 uVar1;
  
  if (DAT_146887908 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146887908 = GetStaticEnum(FUN_14139cd00,uVar1,L"ESkillScreenReceiveHighlightState");
  }
  return;
}



// FUNCTION 14139c3c0 FUN_14139c3c0 body=55 status=ok
// SIG undefined FUN_14139c3c0(void)

void FUN_14139c3c0(void)

{
  undefined8 uVar1;
  
  if (DAT_146887928 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146887928 = GetStaticEnum(FUN_14139cd30,uVar1,L"ESkillScreenSlotType");
  }
  return;
}



// FUNCTION 14139c400 FUN_14139c400 body=55 status=ok
// SIG undefined FUN_14139c400(void)

void FUN_14139c400(void)

{
  undefined8 uVar1;
  
  if (DAT_146887900 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146887900 = GetStaticEnum(FUN_14139cd60,uVar1,L"GFxSHiFT");
  }
  return;
}



// FUNCTION 14139c440 FUN_14139c440 body=162 status=ok
// SIG undefined FUN_14139c440(void)

longlong FUN_14139c440(void)

{
  if (DAT_146887e18 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxSHiFTMenuPage",&DAT_146887e18,FUN_14139c6d0,0x200,
                  0x10000008,0,L"Engine",&LAB_1413993e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146887e18;
}



// FUNCTION 14139c4f0 FUN_14139c4f0 body=162 status=ok
// SIG undefined FUN_14139c4f0(void)

longlong FUN_14139c4f0(void)

{
  if (DAT_146888128 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxSkillScreenTree",&DAT_146888128,FUN_14139c880,0xf10,
                  0x10000000,0,L"Engine",&LAB_141399b60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1413a3fb0,&LAB_140447700,0);
  }
  return DAT_146888128;
}



// FUNCTION 14139c5a0 FUN_14139c5a0 body=6 status=ok
// SIG undefined FUN_14139c5a0(void)

undefined8 FUN_14139c5a0(void)

{
  return 0xc89ce16c;
}



// FUNCTION 14139c5b0 FUN_14139c5b0 body=6 status=ok
// SIG undefined FUN_14139c5b0(void)

undefined8 FUN_14139c5b0(void)

{
  return 0xa17aab39;
}



// FUNCTION 14139c5c0 FUN_14139c5c0 body=6 status=ok
// SIG undefined FUN_14139c5c0(void)

undefined8 FUN_14139c5c0(void)

{
  return 0x69da3512;
}



// FUNCTION 14139c5d0 FUN_14139c5d0 body=6 status=ok
// SIG undefined FUN_14139c5d0(void)

undefined8 FUN_14139c5d0(void)

{
  return 0x43916d0b;
}



// FUNCTION 14139c600 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UXGameInstance::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 14139c610 FUN_14139c610 body=34 status=ok
// SIG undefined FUN_14139c610(void)

void FUN_14139c610(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141397380();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnAgeConfirmedClicked_14494a118,3);
  return;
}



// FUNCTION 14139c640 FUN_14139c640 body=34 status=ok
// SIG undefined FUN_14139c640(void)

void FUN_14139c640(void)

{
  undefined8 uVar1;
  
  uVar1 = ACineCameraActor::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_extFinishedHide_14494a1d0,2);
  return;
}



// FUNCTION 14139c670 FUN_14139c670 body=34 status=ok
// SIG undefined FUN_14139c670(void)

void FUN_14139c670(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141397870();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnClickCreateAccount_14494a550,2);
  return;
}



// FUNCTION 14139c6a0 FUN_14139c6a0 body=34 status=ok
// SIG undefined FUN_14139c6a0(void)

void FUN_14139c6a0(void)

{
  undefined8 uVar1;
  
  uVar1 = UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnClickRetry_14494a8d0,1);
  return;
}



// FUNCTION 14139c6d0 FUN_14139c6d0 body=34 status=ok
// SIG undefined FUN_14139c6d0(void)

void FUN_14139c6d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14139c440();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnEditableTextClicked_14494a8e0,2);
  return;
}



// FUNCTION 14139c700 FUN_14139c700 body=34 status=ok
// SIG undefined FUN_14139c700(void)

void FUN_14139c700(void)

{
  undefined8 uVar1;
  
  uVar1 = UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnClickSubmit_14494ac60,2);
  return;
}



// FUNCTION 14139c730 StaticRegisterNativesUXAnimInstanceBase body=34 status=ok
// SIG undefined StaticRegisterNativesUXAnimInstanceBase(void)

void UXAnimInstanceBase::StaticRegisterNativesUXAnimInstanceBase(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnClickCodeRedemption_14494b018,1);
  return;
}



// FUNCTION 14139c760 FUN_14139c760 body=34 status=ok
// SIG undefined FUN_14139c760(void)

void FUN_14139c760(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141398730();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnClickCancel_14494b388,3);
  return;
}



// FUNCTION 14139c790 FUN_14139c790 body=34 status=ok
// SIG undefined FUN_14139c790(void)

void FUN_14139c790(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141398b10();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnAbilitySlotChanged_14494ca00,3);
  return;
}



// FUNCTION 14139c7c0 FUN_14139c7c0 body=34 status=ok
// SIG undefined FUN_14139c7c0(void)

void FUN_14139c7c0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141398ca0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnAbilityPointsChanged_14494cda0,9);
  return;
}



// FUNCTION 14139c7f0 FUN_14139c7f0 body=34 status=ok
// SIG undefined FUN_14139c7f0(void)

void FUN_14139c7f0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413989b0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetButtonState_14494d078,1);
  return;
}



// FUNCTION 14139c820 FUN_14139c820 body=34 status=ok
// SIG undefined FUN_14139c820(void)

void FUN_14139c820(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141397430();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetButtonState_14494d408,1);
  return;
}



// FUNCTION 14139c850 FUN_14139c850 body=34 status=ok
// SIG undefined FUN_14139c850(void)

void FUN_14139c850(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413976e0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnActionSkillActivated_14494d7b8,3);
  return;
}



// FUNCTION 14139c880 FUN_14139c880 body=34 status=ok
// SIG undefined FUN_14139c880(void)

void FUN_14139c880(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14139c4f0();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_ExtOnScreenUnlockAnimationComple_14494e960,0x1a);
  return;
}



// FUNCTION 14139c8b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146888010 == 0) {
    uVar1 = FUN_14139c5a0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146888010 = GetStaticStruct(FUN_14139cd90,uVar2,L"GFxSkillScreenBranchContainer",0x40,uVar1)
    ;
  }
  return;
}



// FUNCTION 14139c910 FUN_14139c910 body=82 status=ok
// SIG undefined FUN_14139c910(void)

void FUN_14139c910(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146888020 == 0) {
    uVar1 = FUN_14139c5b0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146888020 =
         GetStaticStruct(FUN_14139cdc0,uVar2,L"GFxSkillScreenInfoCardContainer",0x160,uVar1);
  }
  return;
}



// FUNCTION 14139c970 FUN_14139c970 body=82 status=ok
// SIG undefined FUN_14139c970(void)

void FUN_14139c970(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146888030 == 0) {
    uVar1 = FUN_14139c5c0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146888030 =
         GetStaticStruct(FUN_14139cdf0,uVar2,L"GFxSkillScreenLoadoutChoiceInfo",0x58,uVar1);
  }
  return;
}



// FUNCTION 14139c9d0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneSkeletalAnimationParams::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146887f50 == 0) {
    uVar1 = FUN_14139c5d0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146887f50 = GetStaticStruct(FUN_14139ce20,uVar2,L"GFxSkillScreenSkillInfo",200,uVar1);
  }
  return;
}



// FUNCTION 14139ca30 FUN_14139ca30 body=47 status=ok
// SIG undefined FUN_14139ca30(void)

longlong FUN_14139ca30(void)

{
  if (DAT_146887df0 == 0) {
    FUN_141786440(&DAT_146887df0,&PTR_FUN_14493e250);
  }
  return DAT_146887df0;
}



// FUNCTION 14139ca60 FUN_14139ca60 body=47 status=ok
// SIG undefined FUN_14139ca60(void)

longlong FUN_14139ca60(void)

{
  if (DAT_146887e40 == 0) {
    FUN_141786440(&DAT_146887e40,&PTR_GetPrivateStaticClass_144941c80);
  }
  return DAT_146887e40;
}



// FUNCTION 14139ca90 FUN_14139ca90 body=47 status=ok
// SIG undefined FUN_14139ca90(void)

longlong FUN_14139ca90(void)

{
  if (DAT_146887e98 == 0) {
    FUN_141786440(&DAT_146887e98,&PTR_FUN_144944f60);
  }
  return DAT_146887e98;
}



// FUNCTION 14139cac0 FUN_14139cac0 body=47 status=ok
// SIG undefined FUN_14139cac0(void)

longlong FUN_14139cac0(void)

{
  if (DAT_146887ea8 == 0) {
    FUN_141786440(&DAT_146887ea8,&PTR_FUN_144947aa0);
  }
  return DAT_146887ea8;
}



// FUNCTION 14139caf0 FUN_14139caf0 body=47 status=ok
// SIG undefined FUN_14139caf0(void)

longlong FUN_14139caf0(void)

{
  if (DAT_146888040 == 0) {
    FUN_141786440(&DAT_146888040,&PTR_FUN_144941cf0);
  }
  return DAT_146888040;
}



// FUNCTION 14139cb20 FUN_14139cb20 body=47 status=ok
// SIG undefined FUN_14139cb20(void)

longlong FUN_14139cb20(void)

{
  if (DAT_146887fc0 == 0) {
    FUN_141786440(&DAT_146887fc0,&PTR_FUN_14493d2a0);
  }
  return DAT_146887fc0;
}



// FUNCTION 14139cb50 FUN_14139cb50 body=47 status=ok
// SIG undefined FUN_14139cb50(void)

longlong FUN_14139cb50(void)

{
  if (DAT_146887fd0 == 0) {
    FUN_141786440(&DAT_146887fd0,&PTR_FUN_14493d660);
  }
  return DAT_146887fd0;
}



// FUNCTION 14139cb80 FUN_14139cb80 body=47 status=ok
// SIG undefined FUN_14139cb80(void)

longlong FUN_14139cb80(void)

{
  if (DAT_146887fe0 == 0) {
    FUN_141786440(&DAT_146887fe0,&PTR_GetPrivateStaticClass_14493f020);
  }
  return DAT_146887fe0;
}



// FUNCTION 14139cbb0 FUN_14139cbb0 body=47 status=ok
// SIG undefined FUN_14139cbb0(void)

longlong FUN_14139cbb0(void)

{
  if (DAT_146887ff8 == 0) {
    FUN_1417866a0(&DAT_146887ff8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146352230);
  }
  return DAT_146887ff8;
}



// FUNCTION 14139cbe0 FUN_14139cbe0 body=47 status=ok
// SIG undefined FUN_14139cbe0(void)

longlong FUN_14139cbe0(void)

{
  if (DAT_146888000 == 0) {
    FUN_1417866a0(&DAT_146888000,&PTR_Z_Construct_UPackage__Script_MechWarrior_146352280);
  }
  return DAT_146888000;
}



// FUNCTION 14139cc10 FUN_14139cc10 body=47 status=ok
// SIG undefined FUN_14139cc10(void)

longlong FUN_14139cc10(void)

{
  if (DAT_146887e90 == 0) {
    FUN_1417866a0(&DAT_146887e90,&PTR_Z_Construct_UPackage__Script_MechWarrior_146352050);
  }
  return DAT_146887e90;
}



// FUNCTION 14139cc40 FUN_14139cc40 body=47 status=ok
// SIG undefined FUN_14139cc40(void)

longlong FUN_14139cc40(void)

{
  if (DAT_146887f38 == 0) {
    FUN_1417866a0(&DAT_146887f38,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463520a0);
  }
  return DAT_146887f38;
}



// FUNCTION 14139cc70 FUN_14139cc70 body=47 status=ok
// SIG undefined FUN_14139cc70(void)

longlong FUN_14139cc70(void)

{
  if (DAT_146887f40 == 0) {
    FUN_1417866a0(&DAT_146887f40,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463520f0);
  }
  return DAT_146887f40;
}



// FUNCTION 14139cca0 FUN_14139cca0 body=47 status=ok
// SIG undefined FUN_14139cca0(void)

longlong FUN_14139cca0(void)

{
  if (DAT_146887f48 == 0) {
    FUN_1417866a0(&DAT_146887f48,&PTR_Z_Construct_UPackage__Script_MechWarrior_146352140);
  }
  return DAT_146887f48;
}



// FUNCTION 14139ccd0 FUN_14139ccd0 body=47 status=ok
// SIG undefined FUN_14139ccd0(void)

longlong FUN_14139ccd0(void)

{
  if (DAT_146887ff0 == 0) {
    FUN_1417866a0(&DAT_146887ff0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463521e0);
  }
  return DAT_146887ff0;
}



// FUNCTION 14139cd00 FUN_14139cd00 body=47 status=ok
// SIG undefined FUN_14139cd00(void)

longlong FUN_14139cd00(void)

{
  if (DAT_146887f90 == 0) {
    FUN_1417866a0(&DAT_146887f90,&PTR_Z_Construct_UPackage__Script_MechWarrior_146352190);
  }
  return DAT_146887f90;
}



// FUNCTION 14139cd30 FUN_14139cd30 body=47 status=ok
// SIG undefined FUN_14139cd30(void)

longlong FUN_14139cd30(void)

{
  if (DAT_146888008 == 0) {
    FUN_1417866a0(&DAT_146888008,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463522d0);
  }
  return DAT_146888008;
}



// FUNCTION 14139cd60 FUN_14139cd60 body=47 status=ok
// SIG undefined FUN_14139cd60(void)

longlong FUN_14139cd60(void)

{
  if (DAT_146887d90 == 0) {
    FUN_1417866a0(&DAT_146887d90,&PTR_Z_Construct_UPackage__Script_MechWarrior_146352000);
  }
  return DAT_146887d90;
}



// FUNCTION 14139cd90 FUN_14139cd90 body=47 status=ok
// SIG undefined FUN_14139cd90(void)

longlong FUN_14139cd90(void)

{
  if (DAT_146888018 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146888018,&PTR_Z_Construct_UPackage__Script_MechWarrior_14634f940);
  }
  return DAT_146888018;
}



// FUNCTION 14139cdc0 FUN_14139cdc0 body=47 status=ok
// SIG undefined FUN_14139cdc0(void)

longlong FUN_14139cdc0(void)

{
  if (DAT_146888028 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146888028,&PTR_Z_Construct_UPackage__Script_MechWarrior_14634fb40);
  }
  return DAT_146888028;
}



// FUNCTION 14139cdf0 FUN_14139cdf0 body=47 status=ok
// SIG undefined FUN_14139cdf0(void)

longlong FUN_14139cdf0(void)

{
  if (DAT_146888038 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146888038,&PTR_Z_Construct_UPackage__Script_MechWarrior_14634fd00);
  }
  return DAT_146888038;
}



// FUNCTION 14139ce20 FUN_14139ce20 body=47 status=ok
// SIG undefined FUN_14139ce20(void)

longlong FUN_14139ce20(void)

{
  if (DAT_146887f58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146887f58,&PTR_Z_Construct_UPackage__Script_MechWarrior_14634eb60);
  }
  return DAT_146887f58;
}



// FUNCTION 14139ce90 FUN_14139ce90 body=257 status=ok
// SIG undefined FUN_14139ce90(void)

void FUN_14139ce90(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  longlong local_28 [2];
  
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
  plVar1 = (longlong *)FUN_1410384f0(param_1,local_28,local_res18[0],local_res10[0]);
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
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14139cfa0 FUN_14139cfa0 body=257 status=ok
// SIG undefined FUN_14139cfa0(void)

void FUN_14139cfa0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  longlong local_28 [2];
  
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
  plVar1 = (longlong *)FUN_141038b10(param_1,local_28,local_res18[0],local_res10[0]);
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
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14139d0b0 FUN_14139d0b0 body=387 status=ok
// SIG undefined FUN_14139d0b0(void)

void FUN_14139d0b0(undefined8 param_1,longlong param_2)

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
  FUN_14103b200(param_1,local_res20,local_res10[0],puVar6);
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



// FUNCTION 14139d240 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_141040280(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 14139d300 FUN_14139d300 body=128 status=ok
// SIG undefined FUN_14139d300(void)

void FUN_14139d300(undefined8 param_1,longlong param_2)

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
  FUN_1410402a0(param_1,local_res10);
  return;
}



// FUNCTION 14139d380 FUN_14139d380 body=126 status=ok
// SIG undefined FUN_14139d380(void)

void FUN_14139d380(undefined8 param_1,longlong param_2)

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
  FUN_1410404c0(param_1,local_res10[0]);
  return;
}



// FUNCTION 14139d400 FUN_14139d400 body=126 status=ok
// SIG undefined FUN_14139d400(void)

void FUN_14139d400(undefined8 param_1,longlong param_2)

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
  FUN_141040530(param_1,local_res10[0]);
  return;
}


