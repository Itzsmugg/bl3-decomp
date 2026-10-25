// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141357120 FUN_141357120 body=43 status=ok
// SIG undefined FUN_141357120(void)

void FUN_141357120(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140f69ae0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141357150 FUN_141357150 body=47 status=ok
// SIG undefined FUN_141357150(void)

void FUN_141357150(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x2c8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141357180 FUN_141357180 body=197 status=ok
// SIG undefined FUN_141357180(void)

void FUN_141357180(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined2 local_14;
  undefined1 local_12;
  
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_14 = 0;
  local_12 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar2 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140f700b0(param_1,puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141357250 FUN_141357250 body=148 status=ok
// SIG undefined FUN_141357250(void)

void FUN_141357250(undefined8 param_1,longlong param_2)

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
  FUN_140f325e0(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141357310 FUN_141357310 body=446 status=ok
// SIG undefined FUN_141357310(void)

void FUN_141357310(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 local_res10;
  undefined1 local_158 [8];
  undefined4 local_150;
  undefined1 local_14c;
  undefined1 local_148 [8];
  undefined8 local_140;
  longlong *plStack_138;
  undefined1 local_130;
  undefined1 local_128 [272];
  
  FUN_140ed0240(local_128);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_128);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  local_res10 = 0;
  puVar6 = local_128;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_158,&DAT_143f3eda8,1);
  local_14c = 0;
  local_150 = 0xffffffff;
  FName::FName(local_148,&DAT_143f3eda8,1);
  local_130 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_140 = 0;
  plStack_138 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_158);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_158);
  }
  puVar7 = local_158;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f32b00(param_1,puVar6,local_res10,puVar7);
  plVar5 = plStack_138;
  if (plStack_138 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_138 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_138)(plStack_138);
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
  FUN_140e9c360(local_128);
  return;
}



// FUNCTION 1413574d0 FUN_1413574d0 body=446 status=ok
// SIG undefined FUN_1413574d0(void)

void FUN_1413574d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 local_res10;
  undefined1 local_158 [8];
  undefined4 local_150;
  undefined1 local_14c;
  undefined1 local_148 [8];
  undefined8 local_140;
  longlong *plStack_138;
  undefined1 local_130;
  undefined1 local_128 [272];
  
  FUN_140ed0240(local_128);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_128);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  local_res10 = 0;
  puVar6 = local_128;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_158,&DAT_143f3eda8,1);
  local_14c = 0;
  local_150 = 0xffffffff;
  FName::FName(local_148,&DAT_143f3eda8,1);
  local_130 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_140 = 0;
  plStack_138 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_158);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_158);
  }
  puVar7 = local_158;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f33130(param_1,puVar6,local_res10,puVar7);
  plVar5 = plStack_138;
  if (plStack_138 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_138 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_138)(plStack_138);
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
  FUN_140e9c360(local_128);
  return;
}



// FUNCTION 141357690 FUN_141357690 body=253 status=ok
// SIG undefined FUN_141357690(void)

void FUN_141357690(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 local_res10;
  undefined1 local_118 [272];
  
  FUN_140ed0240(local_118);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_118);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_118);
  }
  local_res10 = 0;
  puVar1 = local_118;
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
  FUN_140f33310(param_1,puVar1,local_res10);
  FUN_140e9c360(local_118);
  return;
}



// FUNCTION 141357790 FUN_141357790 body=334 status=ok
// SIG undefined FUN_141357790(void)

void FUN_141357790(undefined8 param_1,longlong param_2)

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
  FUN_140f33a60(param_1,local_res10,puVar6);
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



// FUNCTION 1413578e0 FUN_1413578e0 body=457 status=ok
// SIG undefined FUN_1413578e0(void)

void FUN_1413578e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined ***pppuVar6;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined **local_58;
  undefined8 local_50;
  longlong *plStack_48;
  longlong local_40;
  undefined8 local_38;
  
  local_58 = &PTR_FUN_143f740c8;
  local_40 = 0;
  local_50 = 0;
  plStack_48 = (longlong *)0x0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_res20 = 0;
  pppuVar6 = &local_58;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar6 = *(undefined ****)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
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
  local_60 = local_70;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f721b0(param_1,pppuVar6,local_res20,&local_68,local_res10[0]);
  local_58 = &PTR_FUN_143f740c8;
  if (local_40 != 0) {
    FMemory::Free();
  }
  plVar5 = plStack_48;
  local_58 = &PTR_FUN_143f73d18;
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_48 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_48)(plStack_48);
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



// FUNCTION 141357ad0 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140f34900(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141357b90 FUN_141357b90 body=128 status=ok
// SIG undefined FUN_141357b90(void)

void FUN_141357b90(undefined8 param_1,longlong param_2)

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
  FUN_140f3b230(param_1,local_res10);
  return;
}



// FUNCTION 141357c10 FUN_141357c10 body=146 status=ok
// SIG undefined FUN_141357c10(void)

void FUN_141357c10(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 local_res10 [2];
  
  local_res10[0] = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
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
  FUN_140f3b370(param_1,puVar1);
  return;
}



// FUNCTION 141357cb0 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140f3b540(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141357d70 FUN_141357d70 body=146 status=ok
// SIG undefined FUN_141357d70(void)

void FUN_141357d70(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 local_res10 [2];
  
  local_res10[0] = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
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
  FUN_140f3b7d0(param_1,puVar1);
  return;
}



// FUNCTION 141357e10 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140f3b9a0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141357ed0 FUN_141357ed0 body=146 status=ok
// SIG undefined FUN_141357ed0(void)

void FUN_141357ed0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 local_res10 [2];
  
  local_res10[0] = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
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
  FUN_140f3bc30(param_1,puVar1);
  return;
}



// FUNCTION 141357f70 FUN_141357f70 body=333 status=ok
// SIG undefined FUN_141357f70(void)

void FUN_141357f70(undefined8 param_1,longlong param_2)

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
  FUN_140f3bdd0(param_1,puVar1,local_20,local_28[0],local_res20[0]);
  return;
}



// FUNCTION 1413580e0 FUN_1413580e0 body=334 status=ok
// SIG undefined FUN_1413580e0(void)

void FUN_1413580e0(undefined8 param_1,longlong param_2)

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
  FUN_140f3d320(param_1,local_res10,puVar6);
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



// FUNCTION 141358230 FUN_141358230 body=334 status=ok
// SIG undefined FUN_141358230(void)

void FUN_141358230(undefined8 param_1,longlong param_2)

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
  FUN_140f3d560(param_1,local_res10,puVar6);
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



// FUNCTION 141358380 FUN_141358380 body=334 status=ok
// SIG undefined FUN_141358380(void)

void FUN_141358380(undefined8 param_1,longlong param_2)

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
  FUN_140f3d830(param_1,local_res10,puVar6);
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



// FUNCTION 1413584d0 FUN_1413584d0 body=148 status=ok
// SIG undefined FUN_1413584d0(void)

void FUN_1413584d0(undefined8 param_1,longlong param_2)

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
  FUN_140f3da10(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141358570 FUN_141358570 body=204 status=ok
// SIG undefined FUN_141358570(void)

void FUN_141358570(undefined8 param_1,longlong param_2)

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
  FUN_140f79320(param_1,puVar5);
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



// FUNCTION 141358640 FUN_141358640 body=128 status=ok
// SIG undefined FUN_141358640(void)

void FUN_141358640(undefined8 param_1,longlong param_2)

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
  thunk_FUN_140f8b4e0(param_1,local_res10);
  return;
}



// FUNCTION 1413586e0 FUN_1413586e0 body=262 status=ok
// SIG undefined FUN_1413586e0(void)

void FUN_1413586e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined ***pppuVar6;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  pppuVar6 = &local_38;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar6 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  thunk_FUN_140f8beb0(param_1,pppuVar6);
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



// FUNCTION 1413587f0 FUN_1413587f0 body=334 status=ok
// SIG undefined FUN_1413587f0(void)

void FUN_1413587f0(undefined8 param_1,longlong param_2)

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
  FUN_140f3ee80(param_1,local_res10,puVar6);
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



// FUNCTION 141358960 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140f43320(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141358a20 FUN_141358a20 body=184 status=ok
// SIG undefined FUN_141358a20(void)

void FUN_141358a20(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined2 local_14;
  undefined1 local_12;
  
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_14 = 0;
  local_12 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar1 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f8ba00(param_1,puVar1);
  return;
}



// FUNCTION 141358ae0 FUN_141358ae0 body=128 status=ok
// SIG undefined FUN_141358ae0(void)

void FUN_141358ae0(undefined8 param_1,longlong param_2)

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
  FUN_140f8d9f0(param_1,local_res10);
  return;
}



// FUNCTION 141358b60 FUN_141358b60 body=123 status=ok
// SIG undefined FUN_141358b60(void)

void FUN_141358b60(undefined8 param_1,longlong param_2)

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
  FUN_140f8e280(param_1,local_res10[0]);
  return;
}



// FUNCTION 141358be0 execOnAnimationStarted body=132 status=ok
// SIG undefined execOnAnimationStarted(void)

void UUserWidget::execOnAnimationStarted(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2a8))(param_1,local_res8);
  return;
}



// FUNCTION 141358c70 FUN_141358c70 body=128 status=ok
// SIG undefined FUN_141358c70(void)

void FUN_141358c70(undefined8 param_1,longlong param_2)

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
  FUN_140f8ef30(param_1,local_res10);
  return;
}



// FUNCTION 141358cf0 execSetActorScale3D body=133 status=ok
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
  FUN_140f8efb0(param_1,&local_18);
  return;
}



// FUNCTION 141358d80 FUN_141358d80 body=123 status=ok
// SIG undefined FUN_141358d80(void)

void FUN_141358d80(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x1f0) = local_res8[0];
  return;
}



// FUNCTION 141358e00 FUN_141358e00 body=184 status=ok
// SIG undefined FUN_141358e00(void)

void FUN_141358e00(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined2 local_14;
  undefined1 local_12;
  
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_14 = 0;
  local_12 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar1 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f94740(param_1,puVar1);
  return;
}



// FUNCTION 141358ec0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ALandscape::GetPrivateStaticClass(void)

{
  if (DAT_146883ba0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxIronbearEjectWidget",&DAT_146883ba0,
                  StaticRegisterNativesALandscape,0x640,0x10000000,0,L"Engine",FUN_14135a8b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGSquadMemberWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146883ba0;
}



// FUNCTION 141358f70 FUN_141358f70 body=162 status=ok
// SIG undefined FUN_141358f70(void)

longlong FUN_141358f70(void)

{
  if (DAT_146883e78 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxItemInspectionMenu",&DAT_146883e78,FUN_1413604b0,0x1210,
                  0x10000001,0,L"Engine",&LAB_14135ae10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412d9d00,&LAB_140447700,0);
  }
  return DAT_146883e78;
}



// FUNCTION 141359020 FUN_141359020 body=47 status=ok
// SIG undefined FUN_141359020(void)

longlong FUN_141359020(void)

{
  if (DAT_146883b98 == 0) {
    FUN_141786440(&DAT_146883b98,&PTR_GetPrivateStaticClass_1448a8d60);
  }
  return DAT_146883b98;
}



// FUNCTION 141359050 FUN_141359050 body=47 status=ok
// SIG undefined FUN_141359050(void)

longlong FUN_141359050(void)

{
  if (DAT_146883b90 == 0) {
    FUN_141786a30(&DAT_146883b90,&PTR_FUN_14631de60);
  }
  return DAT_146883b90;
}



// FUNCTION 141359080 FUN_141359080 body=162 status=ok
// SIG undefined FUN_141359080(void)

longlong FUN_141359080(void)

{
  if (DAT_146883d80 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxLoadedItemCardBase",&DAT_146883d80,FUN_140447710,0x1b0,
                  0x10000009,0,L"Engine",&LAB_14135aeb0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141360350,&LAB_140447700,0);
  }
  return DAT_146883d80;
}



// FUNCTION 141359140 FUN_141359140 body=162 status=ok
// SIG undefined FUN_141359140(void)

longlong FUN_141359140(void)

{
  if (DAT_146883d98 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxLoadedItemCardAbbreviated",&DAT_146883d98,FUN_141360510,
                  0x390,0x10000008,0,L"Engine",FUN_14135ae70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141359080,&LAB_140447700,0);
  }
  return DAT_146883d98;
}



// FUNCTION 1413591f0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong ALandscapeStreamingProxy::StaticClass(void)

{
  if (DAT_146883bd0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxIronbearExitAnimationWidget",&DAT_146883bd0,FUN_1413603c0,
                  0x660,0x10000000,0,L"Engine",FUN_14135a8f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGSquadMemberWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146883bd0;
}



// FUNCTION 1413592a0 FUN_1413592a0 body=162 status=ok
// SIG undefined FUN_1413592a0(void)

longlong FUN_1413592a0(void)

{
  if (DAT_146883db0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxLoadedItemCard",&DAT_146883db0,FUN_1413604e0,0x6f0,
                  0x10000008,0,L"Engine",FUN_14135ae30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141359080,&LAB_140447700,0);
  }
  return DAT_146883db0;
}



// FUNCTION 141359350 FUN_141359350 body=47 status=ok
// SIG undefined FUN_141359350(void)

longlong FUN_141359350(void)

{
  if (DAT_146883bc8 == 0) {
    FUN_141786440(&DAT_146883bc8,&PTR_StaticClass_1448a9150);
  }
  return DAT_146883bc8;
}



// FUNCTION 141359380 FUN_141359380 body=47 status=ok
// SIG undefined FUN_141359380(void)

longlong FUN_141359380(void)

{
  if (DAT_146883ba8 == 0) {
    FUN_141786a30(&DAT_146883ba8,&PTR_FUN_14631df10);
  }
  return DAT_146883ba8;
}



// FUNCTION 1413593b0 FUN_1413593b0 body=47 status=ok
// SIG undefined FUN_1413593b0(void)

longlong FUN_1413593b0(void)

{
  if (DAT_146883bb0 == 0) {
    FUN_141786a30(&DAT_146883bb0,&PTR_FUN_14631df50);
  }
  return DAT_146883bb0;
}



// FUNCTION 1413593e0 FUN_1413593e0 body=47 status=ok
// SIG undefined FUN_1413593e0(void)

longlong FUN_1413593e0(void)

{
  if (DAT_146883bb8 == 0) {
    FUN_141786a30(&DAT_146883bb8,&PTR_FUN_14631df90);
  }
  return DAT_146883bb8;
}



// FUNCTION 141359410 FUN_141359410 body=47 status=ok
// SIG undefined FUN_141359410(void)

longlong FUN_141359410(void)

{
  if (DAT_146883bc0 == 0) {
    FUN_141786a30(&DAT_146883bc0,&PTR_FUN_14631e010);
  }
  return DAT_146883bc0;
}



// FUNCTION 141359440 FUN_141359440 body=162 status=ok
// SIG undefined FUN_141359440(void)

longlong FUN_141359440(void)

{
  if (DAT_146883cc0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxItemCard",&DAT_146883cc0,FUN_141360450,0xc30,0x10000000,0,
                  L"Engine",FUN_14135aae0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGSquadMemberWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146883cc0;
}



// FUNCTION 141359500 FUN_141359500 body=47 status=ok
// SIG undefined FUN_141359500(void)

longlong FUN_141359500(void)

{
  if (DAT_146883cb8 == 0) {
    FUN_141786440(&DAT_146883cb8,&PTR_FUN_1448a9540);
  }
  return DAT_146883cb8;
}



// FUNCTION 141359530 FUN_141359530 body=47 status=ok
// SIG undefined FUN_141359530(void)

longlong FUN_141359530(void)

{
  if (DAT_146883c90 == 0) {
    FUN_141786a30(&DAT_146883c90,&PTR_FUN_14631f140);
  }
  return DAT_146883c90;
}



// FUNCTION 141359560 FUN_141359560 body=47 status=ok
// SIG undefined FUN_141359560(void)

longlong FUN_141359560(void)

{
  if (DAT_146883c98 == 0) {
    FUN_141786a30(&DAT_146883c98,&PTR_FUN_14631f180);
  }
  return DAT_146883c98;
}



// FUNCTION 141359590 FUN_141359590 body=47 status=ok
// SIG undefined FUN_141359590(void)

longlong FUN_141359590(void)

{
  if (DAT_146883ca0 == 0) {
    FUN_141786a30(&DAT_146883ca0,&PTR_FUN_14631f210);
  }
  return DAT_146883ca0;
}



// FUNCTION 1413595c0 FUN_1413595c0 body=47 status=ok
// SIG undefined FUN_1413595c0(void)

longlong FUN_1413595c0(void)

{
  if (DAT_146883ca8 == 0) {
    FUN_141786a30(&DAT_146883ca8,&PTR_FUN_14631f2d0);
  }
  return DAT_146883ca8;
}



// FUNCTION 1413595f0 FUN_1413595f0 body=47 status=ok
// SIG undefined FUN_1413595f0(void)

longlong FUN_1413595f0(void)

{
  if (DAT_146883cb0 == 0) {
    FUN_141786a30(&DAT_146883cb0,&PTR_FUN_14631f390);
  }
  return DAT_146883cb0;
}



// FUNCTION 141359630 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEditableTextBoxWidgetStyle::StaticClass(void)

{
  if (DAT_146883d00 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxItemCardAbbreviated",&DAT_146883d00,FUN_141360480,0x820,
                  0x10000000,0,L"Engine",FUN_14135ac20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGSquadMemberWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146883d00;
}



// FUNCTION 1413596e0 FUN_1413596e0 body=47 status=ok
// SIG undefined FUN_1413596e0(void)

longlong FUN_1413596e0(void)

{
  if (DAT_146883cf8 == 0) {
    FUN_141786440(&DAT_146883cf8,&PTR_StaticClass_1448a9ab0);
  }
  return DAT_146883cf8;
}



// FUNCTION 141359710 FUN_141359710 body=47 status=ok
// SIG undefined FUN_141359710(void)

longlong FUN_141359710(void)

{
  if (DAT_146883cc8 == 0) {
    FUN_141786a30(&DAT_146883cc8,&PTR_FUN_14631f8f0);
  }
  return DAT_146883cc8;
}



// FUNCTION 141359740 FUN_141359740 body=47 status=ok
// SIG undefined FUN_141359740(void)

longlong FUN_141359740(void)

{
  if (DAT_146883cd0 == 0) {
    FUN_141786a30(&DAT_146883cd0,&PTR_FUN_14631f980);
  }
  return DAT_146883cd0;
}



// FUNCTION 141359770 FUN_141359770 body=47 status=ok
// SIG undefined FUN_141359770(void)

longlong FUN_141359770(void)

{
  if (DAT_146883cd8 == 0) {
    FUN_141786a30(&DAT_146883cd8,&PTR_FUN_14631fa40);
  }
  return DAT_146883cd8;
}



// FUNCTION 1413597a0 FUN_1413597a0 body=47 status=ok
// SIG undefined FUN_1413597a0(void)

longlong FUN_1413597a0(void)

{
  if (DAT_146883ce0 == 0) {
    FUN_141786a30(&DAT_146883ce0,&PTR_FUN_14631fa80);
  }
  return DAT_146883ce0;
}



// FUNCTION 1413597d0 FUN_1413597d0 body=47 status=ok
// SIG undefined FUN_1413597d0(void)

longlong FUN_1413597d0(void)

{
  if (DAT_146883ce8 == 0) {
    FUN_141786a30(&DAT_146883ce8,&PTR_FUN_14631fb40);
  }
  return DAT_146883ce8;
}



// FUNCTION 141359800 FUN_141359800 body=47 status=ok
// SIG undefined FUN_141359800(void)

longlong FUN_141359800(void)

{
  if (DAT_146883cf0 == 0) {
    FUN_141786a30(&DAT_146883cf0,&PTR_FUN_14631fc00);
  }
  return DAT_146883cf0;
}



// FUNCTION 141359830 FUN_141359830 body=47 status=ok
// SIG undefined FUN_141359830(void)

longlong FUN_141359830(void)

{
  if (DAT_146883d40 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146883d40,&PTR_Z_Construct_UPackage__Script_MechWarrior_146320950);
  }
  return DAT_146883d40;
}



// FUNCTION 141359870 FUN_141359870 body=162 status=ok
// SIG undefined FUN_141359870(void)

longlong FUN_141359870(void)

{
  if (DAT_146883d10 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxItemCardMainStat",&DAT_146883d10,FUN_140447710,0x1e0,
                  0x10000008,0,L"Engine",FUN_14135acf0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146883d10;
}



// FUNCTION 141359930 FUN_141359930 body=47 status=ok
// SIG undefined FUN_141359930(void)

longlong FUN_141359930(void)

{
  if (DAT_146883d78 == 0) {
    FUN_141786440(&DAT_146883d78,&PTR_FUN_1448add30);
  }
  return DAT_146883d78;
}



// FUNCTION 141359960 FUN_141359960 body=47 status=ok
// SIG undefined FUN_141359960(void)

longlong FUN_141359960(void)

{
  if (DAT_146883d90 == 0) {
    FUN_141786440(&DAT_146883d90,&PTR_FUN_1448ae120);
  }
  return DAT_146883d90;
}



// FUNCTION 141359990 FUN_141359990 body=47 status=ok
// SIG undefined FUN_141359990(void)

longlong FUN_141359990(void)

{
  if (DAT_146883d88 == 0) {
    FUN_141786a30(&DAT_146883d88,&PTR_FUN_146320ca0);
  }
  return DAT_146883d88;
}



// FUNCTION 1413599c0 FUN_1413599c0 body=47 status=ok
// SIG undefined FUN_1413599c0(void)

longlong FUN_1413599c0(void)

{
  if (DAT_146883da8 == 0) {
    FUN_141786440(&DAT_146883da8,&PTR_FUN_1448ae570);
  }
  return DAT_146883da8;
}



// FUNCTION 1413599f0 FUN_1413599f0 body=47 status=ok
// SIG undefined FUN_1413599f0(void)

longlong FUN_1413599f0(void)

{
  if (DAT_146883da0 == 0) {
    FUN_141786a30(&DAT_146883da0,&PTR_FUN_146320d90);
  }
  return DAT_146883da0;
}



// FUNCTION 141359a20 FUN_141359a20 body=53 status=ok
// SIG undefined FUN_141359a20(void)

void FUN_141359a20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x538;
    *puVar1 = &PTR_FUN_1448b55d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141359a60 FUN_141359a60 body=47 status=ok
// SIG undefined FUN_141359a60(void)

longlong FUN_141359a60(void)

{
  if (DAT_146883e70 == 0) {
    FUN_141786440(&DAT_146883e70,&PTR_FUN_1448aef00);
  }
  return DAT_146883e70;
}



// FUNCTION 141359a90 FUN_141359a90 body=47 status=ok
// SIG undefined FUN_141359a90(void)

longlong FUN_141359a90(void)

{
  if (DAT_146883e20 == 0) {
    FUN_141786a30(&DAT_146883e20,&PTR_FUN_1463216f0);
  }
  return DAT_146883e20;
}



// FUNCTION 141359ac0 FUN_141359ac0 body=47 status=ok
// SIG undefined FUN_141359ac0(void)

longlong FUN_141359ac0(void)

{
  if (DAT_146883e28 == 0) {
    FUN_141786a30(&DAT_146883e28,&PTR_FUN_146321770);
  }
  return DAT_146883e28;
}



// FUNCTION 141359af0 FUN_141359af0 body=47 status=ok
// SIG undefined FUN_141359af0(void)

longlong FUN_141359af0(void)

{
  if (DAT_146883e30 == 0) {
    FUN_141786a30(&DAT_146883e30,&PTR_FUN_1463217b0);
  }
  return DAT_146883e30;
}



// FUNCTION 141359b20 FUN_141359b20 body=47 status=ok
// SIG undefined FUN_141359b20(void)

longlong FUN_141359b20(void)

{
  if (DAT_146883e38 == 0) {
    FUN_141786a30(&DAT_146883e38,&PTR_FUN_146321870);
  }
  return DAT_146883e38;
}



// FUNCTION 141359b50 FUN_141359b50 body=47 status=ok
// SIG undefined FUN_141359b50(void)

longlong FUN_141359b50(void)

{
  if (DAT_146883e40 == 0) {
    FUN_141786a30(&DAT_146883e40,&PTR_FUN_1463218f0);
  }
  return DAT_146883e40;
}



// FUNCTION 141359b80 FUN_141359b80 body=47 status=ok
// SIG undefined FUN_141359b80(void)

longlong FUN_141359b80(void)

{
  if (DAT_146883e48 == 0) {
    FUN_141786a30(&DAT_146883e48,&PTR_FUN_146321970);
  }
  return DAT_146883e48;
}



// FUNCTION 141359bb0 FUN_141359bb0 body=47 status=ok
// SIG undefined FUN_141359bb0(void)

longlong FUN_141359bb0(void)

{
  if (DAT_146883e50 == 0) {
    FUN_141786a30(&DAT_146883e50,&PTR_FUN_146321a30);
  }
  return DAT_146883e50;
}



// FUNCTION 141359be0 FUN_141359be0 body=47 status=ok
// SIG undefined FUN_141359be0(void)

longlong FUN_141359be0(void)

{
  if (DAT_146883e58 == 0) {
    FUN_141786a30(&DAT_146883e58,&PTR_FUN_146321ab0);
  }
  return DAT_146883e58;
}



// FUNCTION 141359c10 FUN_141359c10 body=47 status=ok
// SIG undefined FUN_141359c10(void)

longlong FUN_141359c10(void)

{
  if (DAT_146883e60 == 0) {
    FUN_141786a30(&DAT_146883e60,&PTR_FUN_146321b30);
  }
  return DAT_146883e60;
}



// FUNCTION 141359c40 FUN_141359c40 body=47 status=ok
// SIG undefined FUN_141359c40(void)

longlong FUN_141359c40(void)

{
  if (DAT_146883e68 == 0) {
    FUN_141786a30(&DAT_146883e68,&PTR_FUN_146321bb0);
  }
  return DAT_146883e68;
}



// FUNCTION 141359c70 FUN_141359c70 body=162 status=ok
// SIG undefined FUN_141359c70(void)

longlong FUN_141359c70(void)

{
  if (DAT_146883c10 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxIronBearHUDWidgetContainer",&DAT_146883c10,FUN_140447710,
                  0x970,0x10000000,0,L"Engine",&LAB_14135a7b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGSquadMemberWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146883c10;
}



// FUNCTION 141359d20 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1d8;
    *puVar1 = &PTR_FUN_1448b56f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141359d60 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x120;
    *puVar1 = &PTR_FUN_1448b63b0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 141359da0 FUN_141359da0 body=53 status=ok
// SIG undefined FUN_141359da0(void)

void FUN_141359da0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_1448b64c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 141359de0 FUN_141359de0 body=53 status=ok
// SIG undefined FUN_141359de0(void)

void FUN_141359de0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_1448b5808;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141359e20 FUN_141359e20 body=162 status=ok
// SIG undefined FUN_141359e20(void)

longlong FUN_141359e20(void)

{
  if (DAT_146883c78 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxIronbearWeaponWidget",&DAT_146883c78,FUN_141360420,0x1d0,
                  0x10000008,0,L"Engine",&LAB_14135a9d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146883c78;
}



// FUNCTION 141359ee0 FUN_141359ee0 body=53 status=ok
// SIG undefined FUN_141359ee0(void)

void FUN_141359ee0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_1448b65e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141359f20 FUN_141359f20 body=162 status=ok
// SIG undefined FUN_141359f20(void)

longlong FUN_141359f20(void)

{
  if (DAT_146883bf0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxIronbearFist",&DAT_146883bf0,FUN_1413603f0,0x1f0,
                  0x10000008,0,L"Engine",FUN_14135a940,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141359e20,&LAB_140447700,0);
  }
  return DAT_146883bf0;
}



// FUNCTION 141359fe0 FUN_141359fe0 body=47 status=ok
// SIG undefined FUN_141359fe0(void)

longlong FUN_141359fe0(void)

{
  if (DAT_146883be8 == 0) {
    FUN_141786440(&DAT_146883be8,&PTR_FUN_1448adec0);
  }
  return DAT_146883be8;
}



// FUNCTION 14135a010 FUN_14135a010 body=47 status=ok
// SIG undefined FUN_14135a010(void)

longlong FUN_14135a010(void)

{
  if (DAT_146883c70 == 0) {
    FUN_141786440(&DAT_146883c70,&PTR_FUN_1448afbe0);
  }
  return DAT_146883c70;
}



// FUNCTION 14135a040 FUN_14135a040 body=47 status=ok
// SIG undefined FUN_14135a040(void)

longlong FUN_14135a040(void)

{
  if (DAT_146883bd8 == 0) {
    FUN_141786a30(&DAT_146883bd8,&PTR_FUN_14631e190);
  }
  return DAT_146883bd8;
}



// FUNCTION 14135a070 FUN_14135a070 body=47 status=ok
// SIG undefined FUN_14135a070(void)

longlong FUN_14135a070(void)

{
  if (DAT_146883be0 == 0) {
    FUN_141786a30(&DAT_146883be0,&PTR_FUN_14631e210);
  }
  return DAT_146883be0;
}



// FUNCTION 14135a0a0 FUN_14135a0a0 body=53 status=ok
// SIG undefined FUN_14135a0a0(void)

void FUN_14135a0a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1448b66f8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14135a100 FUN_14135a100 body=53 status=ok
// SIG undefined FUN_14135a100(void)

void FUN_14135a100(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1448b6810;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14135a150 FUN_14135a150 body=53 status=ok
// SIG undefined FUN_14135a150(void)

void FUN_14135a150(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &PTR_FUN_1448b2b20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14135a1b0 FUN_14135a1b0 body=162 status=ok
// SIG undefined FUN_14135a1b0(void)

longlong FUN_14135a1b0(void)

{
  if (DAT_146883c20 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxIronbearMinigun",&DAT_146883c20,FUN_140447710,0x1e0,
                  0x10000008,0,L"Engine",FUN_14135a990,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141359e20,&LAB_140447700,0);
  }
  return DAT_146883c20;
}



// FUNCTION 14135a270 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass(void)

{
  if (DAT_146883c48 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxIronBearRechargeWeaponWidget",&DAT_146883c48,FUN_141360360
                  ,0x210,0x10000008,0,L"Engine",FUN_14135a7d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141359e20,&LAB_140447700,0);
  }
  return DAT_146883c48;
}



// FUNCTION 14135a320 FUN_14135a320 body=47 status=ok
// SIG undefined FUN_14135a320(void)

longlong FUN_14135a320(void)

{
  if (DAT_146883c40 == 0) {
    FUN_141786440(&DAT_146883c40,&PTR_GetPrivateStaticClass_1448af740);
  }
  return DAT_146883c40;
}



// FUNCTION 14135a350 FUN_14135a350 body=47 status=ok
// SIG undefined FUN_14135a350(void)

longlong FUN_14135a350(void)

{
  if (DAT_146883c28 == 0) {
    FUN_141786a30(&DAT_146883c28,&PTR_FUN_14631e7a0);
  }
  return DAT_146883c28;
}



// FUNCTION 14135a380 FUN_14135a380 body=47 status=ok
// SIG undefined FUN_14135a380(void)

longlong FUN_14135a380(void)

{
  if (DAT_146883c30 == 0) {
    FUN_141786a30(&DAT_146883c30,&PTR_FUN_14631e830);
  }
  return DAT_146883c30;
}



// FUNCTION 14135a3b0 FUN_14135a3b0 body=47 status=ok
// SIG undefined FUN_14135a3b0(void)

longlong FUN_14135a3b0(void)

{
  if (DAT_146883c38 == 0) {
    FUN_141786a30(&DAT_146883c38,&PTR_FUN_14631e8c0);
  }
  return DAT_146883c38;
}



// FUNCTION 14135a400 FUN_14135a400 body=47 status=ok
// SIG undefined FUN_14135a400(void)

longlong FUN_14135a400(void)

{
  if (DAT_146883c50 == 0) {
    FUN_141786a30(&DAT_146883c50,&PTR_FUN_14631eb70);
  }
  return DAT_146883c50;
}



// FUNCTION 14135a430 FUN_14135a430 body=47 status=ok
// SIG undefined FUN_14135a430(void)

longlong FUN_14135a430(void)

{
  if (DAT_146883c58 == 0) {
    FUN_141786a30(&DAT_146883c58,&PTR_FUN_14631ebb0);
  }
  return DAT_146883c58;
}



// FUNCTION 14135a460 FUN_14135a460 body=47 status=ok
// SIG undefined FUN_14135a460(void)

longlong FUN_14135a460(void)

{
  if (DAT_146883c60 == 0) {
    FUN_141786a30(&DAT_146883c60,&PTR_FUN_14631ebf0);
  }
  return DAT_146883c60;
}



// FUNCTION 14135a490 FUN_14135a490 body=47 status=ok
// SIG undefined FUN_14135a490(void)

longlong FUN_14135a490(void)

{
  if (DAT_146883c68 == 0) {
    FUN_141786a30(&DAT_146883c68,&PTR_FUN_14631ec70);
  }
  return DAT_146883c68;
}



// FUNCTION 14135a4d0 FUN_14135a4d0 body=162 status=ok
// SIG undefined FUN_14135a4d0(void)

longlong FUN_14135a4d0(void)

{
  if (DAT_146883c88 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxIronbearWidgetGrenadeLauncher",&DAT_146883c88,
                  FUN_140447710,0x200,0x10000008,0,L"Engine",FUN_14135a9f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141359e20,&LAB_140447700,0);
  }
  return DAT_146883c88;
}



// FUNCTION 14135a580 FUN_14135a580 body=162 status=ok
// SIG undefined FUN_14135a580(void)

longlong FUN_14135a580(void)

{
  if (DAT_146883d60 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxItemCardArtifactLine",&DAT_146883d60,FUN_140447710,0x1c0,
                  0x10000008,0,L"Engine",FUN_14135ac80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146883d60;
}



// FUNCTION 14135a630 FUN_14135a630 body=162 status=ok
// SIG undefined FUN_14135a630(void)

longlong FUN_14135a630(void)

{
  if (DAT_146883d70 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxItemCardSkillEntry",&DAT_146883d70,FUN_140447710,0x1e0,
                  0x10000008,0,L"Engine",FUN_14135ad80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146883d70;
}



// FUNCTION 14135a6f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInputKeySelector::GetPrivateStaticClass(void)

{
  if (DAT_146883b88 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxIronbearDurationWidget",&DAT_146883b88,FUN_140447710,0x670
                  ,0x10000000,0,L"Engine",FUN_14135a860,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGSquadMemberWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146883b88;
}



// FUNCTION 14135a7d0 FUN_14135a7d0 body=131 status=ok
// SIG undefined FUN_14135a7d0(void)

void FUN_14135a7d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14135bd80(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448b2f10;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    *(undefined4 *)(puVar1 + 0x3c) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x1e4) = 0;
    *(undefined4 *)(puVar1 + 0x3d) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x1ec) = 0;
    *(undefined4 *)(puVar1 + 0x3e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 500) = 0;
    *(undefined1 *)(puVar1 + 0x40) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x204) = 0x3f4ccccd;
    *(undefined4 *)(puVar1 + 0x41) = 0x3f800000;
  }
  return;
}



// FUNCTION 14135a860 FUN_14135a860 body=78 status=ok
// SIG undefined FUN_14135a860(void)

void FUN_14135a860(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140f5a170(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0xc6) = 0x3e99999a;
    *puVar1 = &PTR__scalar_deleting_destructor__1448b13a0;
    *(undefined4 *)((longlong)puVar1 + 0x634) = 0x3c75c28f;
    *(undefined4 *)(puVar1 + 0xcc) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x664) = 0;
  }
  return;
}



// FUNCTION 14135a8b0 FUN_14135a8b0 body=52 status=ok
// SIG undefined FUN_14135a8b0(void)

void FUN_14135a8b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140f5a170(puVar1,param_1);
    puVar1[0xc6] = 0;
    *puVar1 = &PTR_FUN_1448b1968;
  }
  return;
}



// FUNCTION 14135a8f0 FUN_14135a8f0 body=74 status=ok
// SIG undefined FUN_14135a8f0(void)

void FUN_14135a8f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140f5a170(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448b1f40;
    puVar1[0xc6] = 0;
    puVar1[199] = 0;
    FText::FText(puVar1 + 200);
    return;
  }
  return;
}



// FUNCTION 14135a940 FUN_14135a940 body=71 status=ok
// SIG undefined FUN_14135a940(void)

void FUN_14135a940(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14135bd80(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448b2828;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
  }
  return;
}



// FUNCTION 14135a990 FUN_14135a990 body=57 status=ok
// SIG undefined FUN_14135a990(void)

void FUN_14135a990(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14135bd80(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448b2c38;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
  }
  return;
}



// FUNCTION 14135a9f0 FUN_14135a9f0 body=226 status=ok
// SIG undefined FUN_14135a9f0(void)

void FUN_14135a9f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14135bd80(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448b3260;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 0x3c,0);
    FGenericPlatformString::Convert<char,wchar_t>(puVar1[0x3c],0x12,"ammoRemainingText",0x12,0x3f);
    puVar1[0x3e] = 0;
    puVar1[0x3f] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 0x3e,0);
    FGenericPlatformString::Convert<char,wchar_t>(puVar1[0x3e],0xd,"overheatClip",0xd,0x3f);
  }
  return;
}



// FUNCTION 14135aae0 FUN_14135aae0 body=317 status=ok
// SIG undefined FUN_14135aae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14135aae0(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140f5a170(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0xc6) = 0x40000000;
    *puVar1 = &PTR_FUN_1448b46c0;
    puVar1[199] = 0;
    FUN_14135b090(puVar1 + 200);
    *(undefined4 *)(puVar1 + 0x16f) = 0x43a60000;
    *(undefined4 *)((longlong)puVar1 + 0xb7c) = 0x43a50000;
    *(undefined4 *)(puVar1 + 0x170) = 0x437c0000;
    *(undefined4 *)((longlong)puVar1 + 0xb84) = 0x437a0000;
    *(undefined4 *)(puVar1 + 0x171) = 0xc4480000;
    *(undefined4 *)((longlong)puVar1 + 0xb8c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x172) = 0x43af0000;
    *(undefined4 *)((longlong)puVar1 + 0xb94) = 0x44f00000;
    puVar1[0x173] = 0x44870000;
    *(undefined4 *)(puVar1 + 0x174) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xba4) = 0x44f00000;
    puVar1[0x175] = 0x44870000;
    *(undefined4 *)(puVar1 + 0x176) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xbb4) = 0x44f00000;
    *(undefined4 *)(puVar1 + 0x177) = 0x44870000;
    puVar1[0x178] = 0;
    uVar2 = uRam000000014688379c;
    puVar1[0x180] = 0;
    puVar1[0x181] = 0;
    *(undefined4 *)(puVar1 + 0x17e) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xbf4) = 0;
    *(undefined4 *)(puVar1 + 0x17f) = 0;
    *(uint *)((longlong)puVar1 + 0xbfc) = uVar2;
    uVar2 = uRam0000000146883794 & uRam00000001468837a4;
    uVar3 = uRam0000000146883798 & uRam00000001468837a8;
    uVar4 = uRam000000014688379c & uRam00000001468837ac;
    *(uint *)(puVar1 + 0x182) = _DAT_146883790 & _DAT_1468837a0;
    *(uint *)((longlong)puVar1 + 0xc14) = uVar2;
    *(uint *)(puVar1 + 0x183) = uVar3;
    *(uint *)((longlong)puVar1 + 0xc1c) = uVar4;
    *(undefined2 *)(puVar1 + 0x184) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc2c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc24) = 0x3f800000;
  }
  return;
}



// FUNCTION 14135ac20 FUN_14135ac20 body=81 status=ok
// SIG undefined FUN_14135ac20(void)

void FUN_14135ac20(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140f5a170(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448b4cf0;
    FUN_14135aed0(puVar1 + 0xc6);
    *(undefined1 *)(puVar1 + 0x101) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x80c) = 0x3f800000;
    puVar1[0x102] = 0;
  }
  return;
}



// FUNCTION 14135ac80 FUN_14135ac80 body=103 status=ok
// SIG undefined FUN_14135ac80(void)

void FUN_14135ac80(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448b3808;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    puVar1[0x32] = 0;
    puVar1[0x33] = 0;
    *(undefined4 *)(puVar1 + 0x2e) = 0;
    puVar1[0x35] = 0;
    *(undefined4 *)(puVar1 + 0x31) = 0;
    puVar1[0x36] = 0;
    *(undefined4 *)(puVar1 + 0x34) = 0;
  }
  return;
}



// FUNCTION 14135acf0 FUN_14135acf0 body=139 status=ok
// SIG undefined FUN_14135acf0(void)

void FUN_14135acf0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448b5330;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    puVar1[0x33] = 0;
    puVar1[0x35] = 0;
    puVar1[0x36] = 0;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    *(undefined4 *)(puVar1 + 0x34) = 0;
    puVar1[0x3a] = 0;
    *(undefined4 *)(puVar1 + 0x37) = 0;
    puVar1[0x3b] = 0;
  }
  return;
}



// FUNCTION 14135ad80 FUN_14135ad80 body=132 status=ok
// SIG undefined FUN_14135ad80(void)

void FUN_14135ad80(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448b3ab0;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    *(undefined4 *)(puVar1 + 0x32) = 0;
    puVar1[0x38] = 0;
    *(undefined4 *)(puVar1 + 0x35) = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
  }
  return;
}



// FUNCTION 14135ae30 FUN_14135ae30 body=58 status=ok
// SIG undefined FUN_14135ae30(void)

void FUN_14135ae30(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14135c1c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448b43d8;
    FUN_14135b090(puVar1 + 0x36);
    return;
  }
  return;
}



// FUNCTION 14135ae70 FUN_14135ae70 body=58 status=ok
// SIG undefined FUN_14135ae70(void)

void FUN_14135ae70(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14135c1c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448b4120;
    FUN_14135aed0(puVar1 + 0x36);
    return;
  }
  return;
}



// FUNCTION 14135aed0 FUN_14135aed0 body=438 status=ok
// SIG undefined FUN_14135aed0(void)

undefined8 * FUN_14135aed0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1448b3d58;
  param_1[1] = 0;
  param_1[2] = 0;
  FWeakObjectPtr::operator=(param_1 + 3,0);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x40000000;
  param_1[0x28] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x29));
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x2d));
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1d2) = 0;
  return param_1;
}



// FUNCTION 14135b090 FUN_14135b090 body=952 status=ok
// SIG undefined FUN_14135b090(void)

undefined8 * FUN_14135b090(undefined8 *param_1)

{
  FUN_14135aed0();
  *param_1 = &PTR__scalar_deleting_destructor__1448b3da8;
  param_1[0x3b] = 0;
  param_1[0x3c] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x3b,0);
  FGenericPlatformString::Memcpy(param_1[0x3b],L"#bbab61",0x10);
  *(undefined4 *)(param_1 + 0x3d) = 0x43a71000;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 500) = 0x41200000;
  *(undefined4 *)(param_1 + 0x3f) = 0x41d00000;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0x42200000;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined1 *)((longlong)param_1 + 0x21c) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x44,0);
  FGenericPlatformString::Memcpy(param_1[0x44],L"itemCardInner",0x1c);
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  param_1[0x8e] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x8f));
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  *(undefined1 *)((longlong)param_1 + 0x49c) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  param_1[0x9a] = 0;
  param_1[0x90] = 4;
  *(undefined4 *)((longlong)param_1 + 0x494) = 8;
  *(undefined4 *)(param_1 + 0x93) = 0xe;
  *(undefined8 *)((longlong)param_1 + 0x4c4) = 0x3f800000;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  *(undefined2 *)(param_1 + 0xa6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x532) = 0;
  return param_1;
}



// FUNCTION 14135b450 FUN_14135b450 body=497 status=ok
// SIG undefined FUN_14135b450(void)

undefined8 * FUN_14135b450(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__1448b5a18;
  param_1[1] = 0;
  FText::FText(param_1 + 2);
  FText::FText(param_1 + 5);
  FText::FText(param_1 + 8);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xdc)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1a,0);
  }
  if ((undefined2 *)param_1[0x1a] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x1a] = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  return param_1;
}



// FUNCTION 14135b650 FUN_14135b650 body=108 status=ok
// SIG undefined FUN_14135b650(void)

undefined8 * FUN_14135b650(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_1448b5988;
  FText::FText(param_1 + 2);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x11] = 0;
  return param_1;
}



// FUNCTION 14135b6c0 FUN_14135b6c0 body=648 status=ok
// SIG undefined FUN_14135b6c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_14135b6c0(undefined4 *param_1)

{
  *param_1 = 0x42c80000;
  param_1[1] = 0x42700000;
  param_1[2] = 0x42700000;
  param_1[3] = 0x425c0000;
  param_1[4] = 0x42200000;
  param_1[5] = 0x41a00000;
  param_1[6] = 0x42c80000;
  param_1[7] = 0x3d4ccccd;
  param_1[8] = 0x3d4ccccd;
  param_1[9] = 0x3f000000;
  param_1[10] = 0x40400000;
  param_1[0xb] = 0x3f19999a;
  *(undefined8 *)(param_1 + 0xc) = 0x3f600000;
  param_1[0xe] = 0xc3b40000;
  param_1[0xf] = 0;
  param_1[0x10] = 0x43870000;
  param_1[0x11] = 0x43070000;
  param_1[0x12] = 0x43070000;
  param_1[0x13] = 0x3ecccccd;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = _DAT_1468b5d90;
  param_1[0x18] = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x19) = _DAT_1468b5d90;
  param_1[0x1b] = DAT_1468b5d98;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)(param_1 + 0x1e) = _DAT_1468b5d90;
  param_1[0x20] = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x21) = _DAT_1468b5d90;
  param_1[0x23] = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x27) = DAT_1468b5da0;
  param_1[0x29] = DAT_1468b5da8;
  param_1[0x2b] = 0x3f800000;
  param_1[0x2c] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2d) = _DAT_1468b5d90;
  param_1[0x2f] = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x30) = _DAT_1468b5d90;
  param_1[0x32] = DAT_1468b5d98;
  param_1[0x34] = DAT_1464aa810;
  param_1[0x35] = DAT_1464aa814;
  param_1[0x36] = DAT_1464aa818;
  param_1[0x37] = DAT_1464aa81c;
  param_1[0x38] = DAT_1464aa810;
  param_1[0x39] = DAT_1464aa814;
  param_1[0x3a] = DAT_1464aa818;
  param_1[0x3b] = DAT_1464aa81c;
  param_1[0x3c] = DAT_1464aa810;
  param_1[0x3d] = DAT_1464aa814;
  param_1[0x3e] = DAT_1464aa818;
  param_1[0x3f] = DAT_1464aa81c;
  param_1[0x40] = DAT_1464aa810;
  param_1[0x41] = DAT_1464aa814;
  param_1[0x42] = DAT_1464aa818;
  param_1[0x43] = DAT_1464aa81c;
  *(undefined8 *)(param_1 + 0x44) = DAT_1468b5da0;
  param_1[0x46] = DAT_1468b5da8;
  return param_1;
}



// FUNCTION 14135b950 FUN_14135b950 body=247 status=ok
// SIG undefined FUN_14135b950(void)

undefined8 * FUN_14135b950(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1448b59d0;
  param_1[1] = 0;
  FText::FText(param_1 + 2);
  FText::FText(param_1 + 5);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 8,L"View more detail in the challenges menu.",L"GFxItemInspecitonMenuPages",
             L"ViewMoreChallengeInfo");
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  return param_1;
}



// FUNCTION 14135ba50 FUN_14135ba50 body=317 status=ok
// SIG undefined FUN_14135ba50(void)

undefined8 * FUN_14135ba50(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__1448b5a60;
  param_1[1] = 0;
  FUN_140e9a2b0(param_1 + 2);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x19) = 5;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 1;
  *(undefined4 *)(param_1 + 0x1a) = 4;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 10;
  FText::FText(param_1 + 0x1b);
  FText::FText(param_1 + 0x1e);
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  return param_1;
}



// FUNCTION 14135bb90 FUN_14135bb90 body=308 status=ok
// SIG undefined FUN_14135bb90(void)

undefined8 * FUN_14135bb90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1448b5aa8;
  param_1[1] = 0;
  FUN_140e9a2b0(param_1 + 2);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x19) = 5;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 1;
  *(undefined4 *)(param_1 + 0x1a) = 2;
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x1b,L"Default Skin",L"GFxItemInspectionMenuPages",L"DefaultSkinName");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x1e,L"Weapon Skin",L"GFxItemInspecitonMenuPages",L"WeaponSkin");
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  return param_1;
}



// FUNCTION 14135bcd0 FUN_14135bcd0 body=174 status=ok
// SIG undefined FUN_14135bcd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_14135bcd0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0xffffffff;
  param_1[5] = 0;
  param_1[4] = 0xffffffff;
  uVar1 = uRam000000014688379c;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = uVar1;
  uVar1 = uRam0000000146883794 & uRam00000001468837a4;
  uVar2 = uRam0000000146883798 & uRam00000001468837a8;
  uVar3 = uRam000000014688379c & uRam00000001468837ac;
  param_1[0x10] = _DAT_146883790 & _DAT_1468837a0;
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar2;
  param_1[0x13] = uVar3;
  param_1[0x15] = 0;
  param_1[0x14] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  return param_1;
}



// FUNCTION 14135bd80 FUN_14135bd80 body=125 status=ok
// SIG undefined FUN_14135bd80(void)

undefined8 * FUN_14135bd80(undefined8 *param_1)

{
  FUN_14106e9c0();
  *param_1 = &PTR_FUN_1448b2550;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined2 *)(param_1 + 0x39) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  return param_1;
}



// FUNCTION 14135be00 FUN_14135be00 body=954 status=ok
// SIG undefined FUN_14135be00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14135be00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  FUN_140e9aa30();
  *param_1 = &PTR_FUN_1448b5af0;
  param_1[0x9b] = &PTR_LAB_1448b6058;
  FText::FText(param_1 + 0xd1);
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 6;
  *(undefined4 *)((longlong)param_1 + 0x6cc) = 4;
  FUN_14135b650(param_1 + 0xda);
  FUN_14135b950(param_1 + 0xec);
  FUN_14135b450(param_1 + 0x110);
  FUN_14135ba50(param_1 + 0x153);
  FUN_14135bb90(param_1 + 0x189);
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x1b9,0);
  FGenericPlatformString::Memcpy(param_1[0x1b9],L"#838383",0x10);
  *(undefined4 *)(param_1 + 0x1bb) = 0x42200000;
  *(undefined4 *)((longlong)param_1 + 0xddc) = 0x42380000;
  *(undefined4 *)(param_1 + 0x1bc) = 0x42480000;
  uVar1 = CONCAT44(uRam00000001464aa704,_DAT_1464aa700);
  uVar2 = CONCAT44(uRam00000001464aa70c,uRam00000001464aa708);
  *(undefined4 *)((longlong)param_1 + 0xdf4) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0xde4) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xdec) = uVar2;
  param_1[0x1bf] = 0;
  uVar6 = uRam00000001464aa70c;
  uVar5 = uRam00000001464aa708;
  uVar4 = uRam00000001464aa704;
  uVar3 = _DAT_1464aa700;
  *(undefined4 *)(param_1 + 0x1c2) = 0x40400000;
  *(undefined4 *)(param_1 + 0x1c0) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xe04) = uVar4;
  *(undefined4 *)(param_1 + 0x1c1) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xe0c) = uVar6;
  param_1[0x1c3] = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c7] = 0;
  param_1[0x1c8] = 0;
  *(undefined4 *)(param_1 + 0x1c9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe4c) = 0;
  param_1[0x1cb] = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  param_1[0x1cd] = 0;
  param_1[0x1ce] = 0;
  param_1[0x1d3] = 0;
  param_1[0x1d4] = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe84) = 0;
  param_1[0x1d2] = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xea4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1d3,0);
  }
  if ((undefined2 *)param_1[0x1d3] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x1d3] = 0;
  }
  *(undefined4 *)(param_1 + 0x1d1) = 0;
  param_1[0x1d8] = 0;
  param_1[0x1d9] = 0;
  *(undefined4 *)(param_1 + 0x1d5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xeac) = 0;
  param_1[0x1d7] = 0;
  *(undefined4 *)(param_1 + 0x1d9) = 0;
  if ((*(int *)((longlong)param_1 + 0xecc) < 0) && (*(int *)((longlong)param_1 + 0xecc) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1d8,0);
  }
  if ((undefined2 *)param_1[0x1d8] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x1d8] = 0;
  }
  *(undefined4 *)(param_1 + 0x1d6) = 0;
  param_1[0x1da] = 0;
  param_1[0x1db] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1dd] = 0;
  *(undefined2 *)(param_1 + 0x1de) = 0;
  *(undefined1 *)((longlong)param_1 + 0xef2) = 0;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e4] = 0;
  *(undefined4 *)(param_1 + 0x1e5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xf2c) = 0;
  FUN_14135bcd0(param_1 + 0x1e6);
  uVar7 = uRam000000014688379c;
  param_1[0x206] = 0;
  param_1[0x207] = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1024) = 0;
  *(undefined4 *)(param_1 + 0x205) = 0;
  *(uint *)((longlong)param_1 + 0x102c) = uVar7;
  uVar7 = uRam0000000146883794 & uRam00000001468837a4;
  uVar8 = uRam0000000146883798 & uRam00000001468837a8;
  uVar9 = uRam000000014688379c & uRam00000001468837ac;
  *(uint *)(param_1 + 0x208) = _DAT_146883790 & _DAT_1468837a0;
  *(uint *)((longlong)param_1 + 0x1044) = uVar7;
  *(uint *)(param_1 + 0x209) = uVar8;
  *(uint *)((longlong)param_1 + 0x104c) = uVar9;
  *(undefined4 *)(param_1 + 0x20a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1054) = 0;
  param_1[0x20b] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1064) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x106c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20e) = 0;
  param_1[0x20f] = 0;
  param_1[0x210] = 0;
  *(undefined4 *)(param_1 + 0x211) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x108c) = 0;
  FUN_14135b6c0(param_1 + 0x212);
  *(undefined4 *)(param_1 + 0x236) = 0xffffffff;
  param_1[0x237] = 0;
  *(undefined1 *)(param_1 + 0x238) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11cc) = 0;
  param_1[0x23a] = 0;
  param_1[0x23b] = 0;
  *(undefined1 *)(param_1 + 0x23c) = 0;
  FWeakObjectPtr::operator=((longlong)param_1 + 0x11e4,0);
  *(undefined2 *)((longlong)param_1 + 0x11ec) = 1;
  param_1[0x23e] = 0;
  param_1[0x23f] = 0;
  param_1[0x240] = 0;
  return param_1;
}



// FUNCTION 14135c1c0 FUN_14135c1c0 body=117 status=ok
// SIG undefined FUN_14135c1c0(void)

undefined8 * FUN_14135c1c0(undefined8 *param_1)

{
  FUN_14106e9c0();
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *param_1 = &PTR_FUN_1448b3df8;
  FWeakObjectPtr::operator=(param_1 + 0x33,0);
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  return param_1;
}



// FUNCTION 14135c240 FUN_14135c240 body=158 status=ok
// SIG undefined FUN_14135c240(void)

void FUN_14135c240(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 8);
    do {
      iVar5 = *(int *)(puVar4 + 1);
      plVar2 = (longlong *)*puVar4;
      if (iVar5 != 0) {
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        plVar2 = (longlong *)*puVar4;
      }
      if (plVar2 != (longlong *)0x0) {
        FMemory::Free(plVar2);
      }
      puVar4 = puVar4 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 14135c2e0 ~TArray<FMapGenAttribute,TSizedDefaultAllocator<32>_> body=173 status=ok
// SIG undefined ~TArray<FMapGenAttribute,TSizedDefaultAllocator<32>_>(void)

void TArray<FMapGenAttribute,TSizedDefaultAllocator<32>_>::
     ~TArray<FMapGenAttribute,TSizedDefaultAllocator<32>_>(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 0x10);
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
      if (*plVar7 != 0) {
        FMemory::Free();
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



// FUNCTION 14135c390 FUN_14135c390 body=238 status=ok
// SIG undefined FUN_14135c390(void)

void FUN_14135c390(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 0x20);
    do {
      if (plVar7[2] != 0) {
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
      plVar4 = (longlong *)plVar7[-3];
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
      plVar7 = plVar7 + 8;
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



// FUNCTION 14135c480 FUN_14135c480 body=180 status=ok
// SIG undefined FUN_14135c480(void)

void FUN_14135c480(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0xa0);
    do {
      *(undefined4 *)(plVar2 + 1) = 0;
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(plVar2 + -8,0);
      if (plVar2[-4] != 0) {
        FMemory::Free();
      }
      if (plVar2[-8] != 0) {
        FMemory::Free();
      }
      if (plVar2[-0xb] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x16;
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



// FUNCTION 14135c540 FUN_14135c540 body=121 status=ok
// SIG undefined FUN_14135c540(void)

void FUN_14135c540(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar4 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar5 = (longlong *)(lVar4 + 0x10);
    do {
      plVar3 = (longlong *)*plVar5;
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
      plVar5 = plVar5 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar4 = *param_1;
  }
  if (lVar4 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14135c5c0 FUN_14135c5c0 body=628 status=ok
// SIG undefined FUN_14135c5c0(void)

void FUN_14135c5c0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_1448b3d58;
  if (param_1[0x38] != 0) {
    FMemory::Free();
  }
  if (param_1[0x34] != 0) {
    FMemory::Free();
  }
  if (param_1[0x31] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2f] != 0) {
    FMemory::Free();
  }
  FUN_14135c390(param_1 + 0x2b);
  if (param_1[0x23] != 0) {
    FMemory::Free();
  }
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  plVar3 = (longlong *)param_1[0x20];
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
  plVar3 = (longlong *)param_1[0x1e];
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
  plVar3 = (longlong *)param_1[0x1c];
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
  plVar3 = (longlong *)param_1[0x1a];
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
  plVar3 = (longlong *)param_1[0x18];
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
  plVar3 = (longlong *)param_1[0x16];
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
  plVar3 = (longlong *)param_1[0x13];
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
  plVar3 = (longlong *)param_1[0x11];
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
  plVar3 = (longlong *)param_1[0xe];
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
  plVar3 = (longlong *)param_1[0xc];
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
  plVar3 = (longlong *)param_1[9];
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
  plVar3 = (longlong *)param_1[7];
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
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14135c840 FUN_14135c840 body=1315 status=ok
// SIG undefined FUN_14135c840(void)

void FUN_14135c840(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x528);
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
  plVar3 = *(longlong **)(param_1 + 0x518);
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
  plVar3 = *(longlong **)(param_1 + 0x4e8);
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
  FUN_14135c540(param_1 + 0x468);
  plVar3 = *(longlong **)(param_1 + 0x460);
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
  plVar3 = *(longlong **)(param_1 + 0x448);
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
  plVar3 = *(longlong **)(param_1 + 0x438);
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
  plVar3 = *(longlong **)(param_1 + 0x428);
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
  plVar3 = *(longlong **)(param_1 + 0x418);
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
  plVar3 = *(longlong **)(param_1 + 0x408);
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
  plVar3 = *(longlong **)(param_1 + 0x3f0);
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
  plVar3 = *(longlong **)(param_1 + 0x3e0);
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
  plVar3 = *(longlong **)(param_1 + 0x3c8);
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
  plVar3 = *(longlong **)(param_1 + 0x390);
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
  plVar3 = *(longlong **)(param_1 + 0x380);
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
  plVar3 = *(longlong **)(param_1 + 0x368);
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
  plVar3 = *(longlong **)(param_1 + 0x350);
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
  plVar3 = *(longlong **)(param_1 + 0x340);
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
  plVar3 = *(longlong **)(param_1 + 0x310);
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
  plVar3 = *(longlong **)(param_1 + 0x300);
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
  plVar3 = *(longlong **)(param_1 + 0x2f0);
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
  plVar3 = *(longlong **)(param_1 + 0x2d8);
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
  plVar3 = *(longlong **)(param_1 + 0x2c0);
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
  plVar3 = *(longlong **)(param_1 + 0x2a8);
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
  plVar3 = *(longlong **)(param_1 + 0x298);
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
  plVar3 = *(longlong **)(param_1 + 0x288);
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
  plVar3 = *(longlong **)(param_1 + 0x278);
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
  plVar3 = *(longlong **)(param_1 + 600);
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
  plVar3 = *(longlong **)(param_1 + 0x248);
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
  plVar3 = *(longlong **)(param_1 + 0x238);
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
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  FUN_14135c5c0(param_1);
  return;
}



// FUNCTION 14135cd70 FUN_14135cd70 body=806 status=ok
// SIG undefined FUN_14135cd70(void)

void FUN_14135cd70(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1[0x40] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[0x3e];
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
  plVar4 = (longlong *)param_1[0x3b];
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
  plVar4 = (longlong *)param_1[0x38];
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
  plVar4 = (longlong *)param_1[0x36];
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
  plVar4 = (longlong *)param_1[0x34];
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
  plVar4 = (longlong *)param_1[0x31];
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
  plVar4 = (longlong *)param_1[0x2f];
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
  plVar4 = (longlong *)param_1[0x2c];
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
  plVar4 = (longlong *)param_1[0x2a];
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
  plVar4 = (longlong *)param_1[0x27];
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
  plVar4 = (longlong *)param_1[0x24];
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
  plVar4 = (longlong *)param_1[0x21];
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
  plVar4 = (longlong *)param_1[0x1f];
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
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xd);
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_1 + 0xb);
  plVar4 = (longlong *)param_1[9];
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
  plVar4 = (longlong *)param_1[6];
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
  plVar4 = (longlong *)param_1[3];
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
  *param_1 = &PTR_FUN_1448b5940;
  return;
}



// FUNCTION 14135d0a0 FUN_14135d0a0 body=285 status=ok
// SIG undefined FUN_14135d0a0(void)

void FUN_14135d0a0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[0x10];
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
  plVar4 = (longlong *)param_1[0xd];
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
  plVar4 = (longlong *)param_1[10];
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
  plVar4 = (longlong *)param_1[8];
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
  plVar4 = (longlong *)param_1[6];
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
  plVar4 = (longlong *)param_1[3];
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
  *param_1 = &PTR_FUN_1448b5940;
  return;
}



// FUNCTION 14135d1c0 FUN_14135d1c0 body=450 status=ok
// SIG undefined FUN_14135d1c0(void)

void FUN_14135d1c0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x22);
  if (param_1[0x20] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[0x1d];
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
  plVar4 = (longlong *)param_1[0x1a];
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
  plVar4 = (longlong *)param_1[0x14];
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
  plVar4 = (longlong *)param_1[0x10];
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
  plVar4 = (longlong *)param_1[0xd];
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
  plVar4 = (longlong *)param_1[9];
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
  plVar4 = (longlong *)param_1[6];
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
  plVar4 = (longlong *)param_1[3];
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
  *param_1 = &PTR_FUN_1448b5940;
  return;
}



// FUNCTION 14135d390 ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FTextFormatString,FTextFormat> body=115 status=ok
// SIG undefined ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FTextFormatString,FTextFormat>(void)

void UE4Tuple_Private::
     TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FTextFormatString,FTextFormat>::
     ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FTextFormatString,FTextFormat>
               (longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x28);
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
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 14135d410 FUN_14135d410 body=488 status=ok
// SIG undefined FUN_14135d410(void)

void FUN_14135d410(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[0x35];
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
  if (param_1[0x31] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[0x30];
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
  plVar4 = (longlong *)param_1[0x2e];
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
  plVar4 = (longlong *)param_1[0x2a];
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
  plVar4 = (longlong *)param_1[0x27];
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
  plVar4 = (longlong *)param_1[0x24];
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
  plVar4 = (longlong *)param_1[0x1f];
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
  plVar4 = (longlong *)param_1[0x1c];
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
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1448b5940;
  return;
}



// FUNCTION 14135d600 FUN_14135d600 body=391 status=ok
// SIG undefined FUN_14135d600(void)

void FUN_14135d600(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[0x2f];
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
  plVar4 = (longlong *)param_1[0x2c];
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
  plVar4 = (longlong *)param_1[0x29];
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
  plVar4 = (longlong *)param_1[0x27];
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
  plVar4 = (longlong *)param_1[0x1f];
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
  plVar4 = (longlong *)param_1[0x1c];
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
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1448b5940;
  return;
}



// FUNCTION 14135d790 FUN_14135d790 body=107 status=ok
// SIG undefined FUN_14135d790(void)

void FUN_14135d790(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x60,0);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14135d800 FUN_14135d800 body=424 status=ok
// SIG undefined FUN_14135d800(void)

longlong * FUN_14135d800(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar5 = (int)param_1[1];
  if (iVar5 != 0) {
    puVar6 = (undefined8 *)(*param_1 + 8);
    do {
      iVar7 = *(int *)(puVar6 + 1);
      plVar3 = (longlong *)*puVar6;
      if (iVar7 != 0) {
        do {
          if (*plVar3 != 0) {
            FMemory::Free();
          }
          plVar3 = plVar3 + 2;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        plVar3 = (longlong *)*puVar6;
      }
      if (plVar3 != (longlong *)0x0) {
        FMemory::Free(plVar3);
      }
      puVar6 = puVar6 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = (int)param_2[1];
  lVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar5;
  if ((iVar5 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1,iVar5);
    puVar6 = (undefined8 *)*param_1;
    if (iVar5 != 0) {
      puVar9 = (undefined8 *)(lVar2 + 8);
      do {
        *puVar6 = puVar9[-1];
        puVar6[1] = 0;
        iVar7 = *(int *)(puVar9 + 1);
        puVar8 = (undefined8 *)*puVar9;
        *(int *)(puVar6 + 2) = iVar7;
        if (iVar7 == 0) {
          *(undefined4 *)((longlong)puVar6 + 0x14) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar6 + 1,iVar7,0);
          puVar4 = (undefined8 *)puVar6[1];
          do {
            *puVar4 = 0;
            iVar1 = *(int *)(puVar8 + 1);
            _Src = (void *)*puVar8;
            *(int *)(puVar4 + 1) = iVar1;
            if (iVar1 == 0) {
              *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar4,iVar1,0);
              _guard_xfg_dispatch_icall_nop((void *)*puVar4,_Src,(longlong)iVar1 * 2);
            }
            puVar4 = puVar4 + 2;
            puVar8 = puVar8 + 2;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        puVar6 = puVar6 + 3;
        puVar9 = puVar9 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return param_1;
}



// FUNCTION 14135d9b0 FUN_14135d9b0 body=352 status=ok
// SIG undefined FUN_14135d9b0(void)

longlong * FUN_14135d9b0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if (param_1 != param_2) {
    iVar6 = (int)param_1[1];
    if (iVar6 != 0) {
      plVar7 = (longlong *)(*param_1 + 0x20);
      do {
        if (plVar7[2] != 0) {
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
        plVar4 = (longlong *)plVar7[-3];
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
        plVar7 = plVar7 + 8;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = (int)param_2[1];
    lVar5 = *param_2;
    *(int *)(param_1 + 1) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FPropChildSocketData,FDefaultAllocator>::ResizeForCopy(param_1,iVar6);
      lVar8 = *param_1;
      if (iVar6 != 0) {
        lVar5 = lVar5 + 0x30;
        do {
          FText::FText(lVar8,lVar5 + -0x30);
          FText::FText(lVar8 + 0x18,lVar5 + -0x18);
          FString::FString(lVar8 + 0x30,lVar5);
          lVar8 = lVar8 + 0x40;
          lVar5 = lVar5 + 0x40;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  return param_1;
}



// FUNCTION 14135db10 FUN_14135db10 body=1681 status=ok
// SIG undefined FUN_14135db10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14135db10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  longlong *plStack_160;
  undefined8 local_158;
  longlong *plStack_150;
  undefined8 local_148;
  longlong *plStack_140;
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_128;
  longlong *plStack_120;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  longlong *plStack_b8;
  undefined8 local_b0;
  longlong *plStack_a8;
  undefined8 local_a0;
  longlong *plStack_98;
  undefined8 local_90;
  longlong *plStack_88;
  undefined8 local_80;
  longlong *plStack_78;
  undefined8 local_70;
  longlong *plStack_68;
  undefined8 local_60;
  longlong *plStack_58;
  undefined8 local_50;
  longlong *plStack_48;
  undefined8 local_40;
  longlong *plStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  plVar1 = (longlong *)(param_1 + 8);
  if (plVar1 != (longlong *)(param_2 + 8)) {
    iVar8 = *(int *)(param_2 + 0x10);
    lVar3 = *(longlong *)(param_2 + 8);
    *(int *)(param_1 + 0x10) = iVar8;
    if ((iVar8 == 0) && (*(int *)(param_1 + 0x14) == 0)) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar1,iVar8);
      if (iVar8 != 0) {
        puVar6 = (undefined8 *)(lVar3 + 8);
        puVar7 = (undefined4 *)*plVar1;
        do {
          *puVar7 = *(undefined4 *)(puVar6 + -1);
          puVar7[1] = *(undefined4 *)((longlong)puVar6 + -4);
          *(undefined8 *)(puVar7 + 2) = *puVar6;
          iVar8 = iVar8 + -1;
          puVar6 = puVar6 + 2;
          puVar7 = puVar7 + 4;
        } while (iVar8 != 0);
      }
    }
  }
  puVar6 = (undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  plVar1 = *(longlong **)(param_2 + 0x38);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
    UNLOCK();
  }
  local_168 = uVar4;
  plStack_160 = plVar1;
  if (&local_168 != puVar6) {
    local_168 = *puVar6;
    plStack_160 = *(longlong **)(param_1 + 0x38);
    *puVar6 = uVar4;
    *(longlong **)(param_1 + 0x38) = plVar1;
    local_c0 = uVar4;
    plStack_b8 = plVar1;
  }
  if (plStack_160 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plStack_160 + 0xc);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plStack_160 + 8))(plStack_160,1);
    }
  }
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar6 = (undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
    UNLOCK();
  }
  local_158 = uVar4;
  plStack_150 = plVar1;
  if (&local_158 != puVar6) {
    local_158 = *puVar6;
    plStack_150 = *(longlong **)(param_1 + 0x48);
    *puVar6 = uVar4;
    *(longlong **)(param_1 + 0x48) = plVar1;
    local_b0 = uVar4;
    plStack_a8 = plVar1;
  }
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plStack_150 + 0xc);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plStack_150 + 8))(plStack_150,1);
    }
  }
  FUN_141337f90(param_1 + 0x50,param_2 + 0x50);
  plVar1 = *(longlong **)(param_2 + 0x70);
  puVar6 = (undefined8 *)(param_1 + 0x68);
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
    UNLOCK();
  }
  local_148 = uVar4;
  plStack_140 = plVar1;
  if (&local_148 != puVar6) {
    local_148 = *puVar6;
    plStack_140 = *(longlong **)(param_1 + 0x70);
    *puVar6 = uVar4;
    *(longlong **)(param_1 + 0x70) = plVar1;
    local_a0 = uVar4;
    plStack_98 = plVar1;
  }
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plStack_140 + 0xc);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plStack_140 + 8))(plStack_140,1);
    }
  }
  FUN_141337f90(param_1 + 0x78,param_2 + 0x78);
  plVar1 = *(longlong **)(param_2 + 0x98);
  puVar6 = (undefined8 *)(param_1 + 0x90);
  uVar4 = *(undefined8 *)(param_2 + 0x90);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
    UNLOCK();
  }
  local_138 = uVar4;
  plStack_130 = plVar1;
  if (&local_138 != puVar6) {
    local_138 = *puVar6;
    plStack_130 = *(longlong **)(param_1 + 0x98);
    *puVar6 = uVar4;
    *(longlong **)(param_1 + 0x98) = plVar1;
    local_90 = uVar4;
    plStack_88 = plVar1;
  }
  if (plStack_130 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plStack_130 + 0xc);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plStack_130 + 8))(plStack_130,1);
    }
  }
  FUN_141337f90(param_1 + 0xa0,param_2 + 0xa0);
  plVar1 = *(longlong **)(param_2 + 0xc0);
  puVar6 = (undefined8 *)(param_1 + 0xb8);
  uVar4 = *(undefined8 *)(param_2 + 0xb8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
    UNLOCK();
  }
  local_128 = uVar4;
  plStack_120 = plVar1;
  if (&local_128 != puVar6) {
    local_128 = *puVar6;
    plStack_120 = *(longlong **)(param_1 + 0xc0);
    *puVar6 = uVar4;
    *(longlong **)(param_1 + 0xc0) = plVar1;
    local_80 = uVar4;
    plStack_78 = plVar1;
  }
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plStack_120 + 0xc);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plStack_120 + 8))(plStack_120,1);
    }
  }
  plVar1 = *(longlong **)(param_2 + 0xd0);
  puVar6 = (undefined8 *)(param_1 + 200);
  uVar4 = *(undefined8 *)(param_2 + 200);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
    UNLOCK();
  }
  local_118 = uVar4;
  plStack_110 = plVar1;
  if (&local_118 != puVar6) {
    local_118 = *puVar6;
    plStack_110 = *(longlong **)(param_1 + 0xd0);
    *puVar6 = uVar4;
    *(longlong **)(param_1 + 0xd0) = plVar1;
    local_70 = uVar4;
    plStack_68 = plVar1;
  }
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plStack_110 + 0xc);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plStack_110 + 8))(plStack_110,1);
    }
  }
  plVar1 = *(longlong **)(param_2 + 0xe0);
  puVar6 = (undefined8 *)(param_1 + 0xd8);
  uVar4 = *(undefined8 *)(param_2 + 0xd8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
    UNLOCK();
  }
  local_108 = uVar4;
  plStack_100 = plVar1;
  if (&local_108 != puVar6) {
    local_108 = *puVar6;
    plStack_100 = *(longlong **)(param_1 + 0xe0);
    *puVar6 = uVar4;
    *(longlong **)(param_1 + 0xe0) = plVar1;
    local_60 = uVar4;
    plStack_58 = plVar1;
  }
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plStack_100 + 0xc);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plStack_100 + 8))(plStack_100,1);
    }
  }
  plVar1 = *(longlong **)(param_2 + 0xf0);
  puVar6 = (undefined8 *)(param_1 + 0xe8);
  uVar4 = *(undefined8 *)(param_2 + 0xe8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
    UNLOCK();
  }
  local_f8 = uVar4;
  plStack_f0 = plVar1;
  if (&local_f8 != puVar6) {
    local_f8 = *puVar6;
    plStack_f0 = *(longlong **)(param_1 + 0xf0);
    *puVar6 = uVar4;
    *(longlong **)(param_1 + 0xf0) = plVar1;
    local_50 = uVar4;
    plStack_48 = plVar1;
  }
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plStack_f0 + 0xc);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
    }
  }
  uVar4 = *(undefined8 *)(param_2 + 0xf8);
  puVar6 = (undefined8 *)(param_1 + 0xf8);
  plVar1 = *(longlong **)(param_2 + 0x100);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
    UNLOCK();
  }
  local_e8 = uVar4;
  plStack_e0 = plVar1;
  if (&local_e8 != puVar6) {
    local_e8 = *puVar6;
    plStack_e0 = *(longlong **)(param_1 + 0x100);
    *puVar6 = uVar4;
    *(longlong **)(param_1 + 0x100) = plVar1;
    local_40 = uVar4;
    plStack_38 = plVar1;
  }
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plStack_e0 + 0xc);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
    }
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_1 + 0x108,param_2 + 0x108);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_1 + 0x118,param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  FUN_14135d9b0(param_1 + 0x158,param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  FString::operator=(param_1 + 0x178,param_2 + 0x178);
  puVar6 = (undefined8 *)(param_1 + 0x188);
  if (puVar6 != (undefined8 *)(param_2 + 0x188)) {
    iVar8 = *(int *)(param_2 + 400);
    pvVar5 = *(void **)(param_2 + 0x188);
    *(int *)(param_1 + 400) = iVar8;
    if ((iVar8 == 0) && (*(int *)(param_1 + 0x194) == 0)) {
      *(undefined4 *)(param_1 + 0x194) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar6,iVar8);
      _guard_xfg_dispatch_icall_nop((void *)*puVar6,pvVar5,(longlong)iVar8 << 3);
    }
  }
  puVar6 = (undefined8 *)(param_1 + 0x1a0);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  if (puVar6 != (undefined8 *)(param_2 + 0x1a0)) {
    iVar8 = *(int *)(param_2 + 0x1a8);
    pvVar5 = *(void **)(param_2 + 0x1a0);
    *(int *)(param_1 + 0x1a8) = iVar8;
    if ((iVar8 == 0) && (*(int *)(param_1 + 0x1ac) == 0)) {
      *(undefined4 *)(param_1 + 0x1ac) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar6,iVar8);
      _guard_xfg_dispatch_icall_nop((void *)*puVar6,pvVar5,(longlong)iVar8 << 3);
    }
  }
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  local_d8 = *(undefined8 *)(param_2 + 0x1b8);
  FString::FString(local_d0,param_2 + 0x1c0);
  FSoftObjectPath::operator=(param_1 + 0x1b8,&local_d8);
  *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(param_2 + 0x1d0);
  *(undefined1 *)(param_1 + 0x1d1) = *(undefined1 *)(param_2 + 0x1d1);
  *(undefined1 *)(param_1 + 0x1d2) = *(undefined1 *)(param_2 + 0x1d2);
  return param_1;
}



// FUNCTION 14135e1b0 FUN_14135e1b0 body=3446 status=ok
// SIG undefined FUN_14135e1b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14135e1b0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  longlong *plStack_2e0;
  undefined8 local_2d8;
  longlong *plStack_2d0;
  undefined8 local_2c8;
  longlong *plStack_2c0;
  undefined8 local_2b8;
  longlong *plStack_2b0;
  undefined8 local_2a8;
  longlong *plStack_2a0;
  undefined8 local_298;
  longlong *plStack_290;
  undefined8 local_288;
  longlong *plStack_280;
  undefined8 local_278;
  longlong *plStack_270;
  undefined8 local_268;
  longlong *plStack_260;
  undefined8 local_258;
  longlong *plStack_250;
  undefined8 local_248;
  longlong *plStack_240;
  undefined8 local_238;
  longlong *plStack_230;
  undefined8 local_228;
  longlong *plStack_220;
  undefined8 local_218;
  longlong *plStack_210;
  undefined8 local_208;
  longlong *plStack_200;
  undefined8 local_1f8;
  longlong *plStack_1f0;
  undefined8 local_1e8;
  longlong *plStack_1e0;
  undefined8 local_1d8;
  longlong *plStack_1d0;
  undefined8 local_1c8;
  longlong *plStack_1c0;
  undefined8 local_1b8;
  longlong *plStack_1b0;
  undefined8 local_1a8;
  longlong *plStack_1a0;
  undefined8 local_198;
  longlong *plStack_190;
  undefined8 local_188;
  longlong *plStack_180;
  undefined8 local_178;
  longlong *plStack_170;
  undefined8 local_168;
  longlong *plStack_160;
  undefined8 local_158;
  longlong *plStack_150;
  undefined8 local_148;
  longlong *plStack_140;
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_128;
  longlong *plStack_120;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  FUN_14135db10();
  FString::operator=(param_1 + 0x1d8,param_2 + 0x1d8);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_2 + 500);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_2 + 0x208);
  *(undefined1 *)(param_1 + 0x210) = *(undefined1 *)(param_2 + 0x210);
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_2 + 0x214);
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_2 + 0x218);
  *(undefined1 *)(param_1 + 0x21c) = *(undefined1 *)(param_2 + 0x21c);
  FString::operator=(param_1 + 0x220,param_2 + 0x220);
  plVar3 = *(longlong **)(param_2 + 0x238);
  puVar7 = (undefined8 *)(param_1 + 0x230);
  uVar4 = *(undefined8 *)(param_2 + 0x230);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_2e8 = uVar4;
  plStack_2e0 = plVar3;
  if (&local_2e8 != puVar7) {
    local_2e8 = *puVar7;
    plStack_2e0 = *(longlong **)(param_1 + 0x238);
    *puVar7 = uVar4;
    *(longlong **)(param_1 + 0x238) = plVar3;
    local_198 = uVar4;
    plStack_190 = plVar3;
  }
  if (plStack_2e0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_2e0 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plStack_2e0 + 8))(plStack_2e0,1);
    }
  }
  plVar3 = *(longlong **)(param_2 + 0x248);
  puVar7 = (undefined8 *)(param_1 + 0x240);
  uVar4 = *(undefined8 *)(param_2 + 0x240);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_2d8 = uVar4;
  plStack_2d0 = plVar3;
  if (&local_2d8 != puVar7) {
    local_2d8 = *puVar7;
    plStack_2d0 = *(longlong **)(param_1 + 0x248);
    *puVar7 = uVar4;
    *(longlong **)(param_1 + 0x248) = plVar3;
    local_188 = uVar4;
    plStack_180 = plVar3;
  }
  if (plStack_2d0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_2d0 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plStack_2d0 + 8))(plStack_2d0,1);
    }
  }
  plVar3 = *(longlong **)(param_2 + 600);
  puVar7 = (undefined8 *)(param_1 + 0x250);
  uVar4 = *(undefined8 *)(param_2 + 0x250);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_2c8 = uVar4;
  plStack_2c0 = plVar3;
  if (&local_2c8 != puVar7) {
    local_2c8 = *puVar7;
    plStack_2c0 = *(longlong **)(param_1 + 600);
    *puVar7 = uVar4;
    *(longlong **)(param_1 + 600) = plVar3;
    local_178 = uVar4;
    plStack_170 = plVar3;
  }
  if (plStack_2c0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_2c0 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plStack_2c0 + 8))(plStack_2c0,1);
    }
  }
  plVar3 = *(longlong **)(param_2 + 0x268);
  puVar7 = (undefined8 *)(param_1 + 0x260);
  uVar4 = *(undefined8 *)(param_2 + 0x260);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_2b8 = uVar4;
  plStack_2b0 = plVar3;
  if (&local_2b8 != puVar7) {
    local_2b8 = *puVar7;
    plStack_2b0 = *(longlong **)(param_1 + 0x268);
    *puVar7 = uVar4;
    *(longlong **)(param_1 + 0x268) = plVar3;
    local_168 = uVar4;
    plStack_160 = plVar3;
  }
  if (plStack_2b0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_2b0 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plStack_2b0 + 8))(plStack_2b0,1);
    }
  }
  plVar3 = *(longlong **)(param_2 + 0x278);
  puVar7 = (undefined8 *)(param_1 + 0x270);
  uVar4 = *(undefined8 *)(param_2 + 0x270);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_2a8 = uVar4;
  plStack_2a0 = plVar3;
  if (&local_2a8 != puVar7) {
    local_2a8 = *puVar7;
    plStack_2a0 = *(longlong **)(param_1 + 0x278);
    *puVar7 = uVar4;
    *(longlong **)(param_1 + 0x278) = plVar3;
    local_158 = uVar4;
    plStack_150 = plVar3;
  }
  if (plStack_2a0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_2a0 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plStack_2a0 + 8))(plStack_2a0,1);
    }
  }
  plVar3 = *(longlong **)(param_2 + 0x288);
  puVar7 = (undefined8 *)(param_1 + 0x280);
  uVar4 = *(undefined8 *)(param_2 + 0x280);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_298 = uVar4;
  plStack_290 = plVar3;
  if (&local_298 != puVar7) {
    local_298 = *puVar7;
    plStack_290 = *(longlong **)(param_1 + 0x288);
    *puVar7 = uVar4;
    *(longlong **)(param_1 + 0x288) = plVar3;
    local_148 = uVar4;
    plStack_140 = plVar3;
  }
  if (plStack_290 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_290 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plStack_290 + 8))(plStack_290,1);
    }
  }
  plVar3 = *(longlong **)(param_2 + 0x298);
  puVar7 = (undefined8 *)(param_1 + 0x290);
  uVar4 = *(undefined8 *)(param_2 + 0x290);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_288 = uVar4;
  plStack_280 = plVar3;
  if (&local_288 != puVar7) {
    local_288 = *puVar7;
    plStack_280 = *(longlong **)(param_1 + 0x298);
    *puVar7 = uVar4;
    *(longlong **)(param_1 + 0x298) = plVar3;
    local_138 = uVar4;
    plStack_130 = plVar3;
  }
  if (plStack_280 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_280 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plStack_280 + 8))(plStack_280,1);
    }
  }
  plVar3 = *(longlong **)(param_2 + 0x2a8);
  puVar7 = (undefined8 *)(param_1 + 0x2a0);
  uVar4 = *(undefined8 *)(param_2 + 0x2a0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_278 = uVar4;
  plStack_270 = plVar3;
  if (&local_278 != puVar7) {
    local_278 = *puVar7;
    plStack_270 = *(longlong **)(param_1 + 0x2a8);
    *puVar7 = uVar4;
    *(longlong **)(param_1 + 0x2a8) = plVar3;
    local_128 = uVar4;
    plStack_120 = plVar3;
  }
  if (plStack_270 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_270 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plStack_270 + 8))(plStack_270,1);
    }
  }
  puVar7 = (undefined8 *)(param_1 + 0x2b8);
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_2 + 0x2b0);
  plVar3 = *(longlong **)(param_2 + 0x2c0);
  uVar4 = *(undefined8 *)(param_2 + 0x2b8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_268 = uVar4;
  plStack_260 = plVar3;
  if (&local_268 != puVar7) {
    local_268 = *puVar7;
    plStack_260 = *(longlong **)(param_1 + 0x2c0);
    *puVar7 = uVar4;
    *(longlong **)(param_1 + 0x2c0) = plVar3;
    local_118 = uVar4;
    plStack_110 = plVar3;
  }
  if (plStack_260 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_260 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plStack_260 + 8))(plStack_260,1);
    }
  }
  FUN_141337f90(param_1 + 0x2c8,param_2 + 0x2c8);
  FUN_141337f90(param_1 + 0x2e0,param_2 + 0x2e0);
  plVar3 = *(longlong **)(param_2 + 0x300);
  puVar7 = (undefined8 *)(param_1 + 0x2f8);
  uVar4 = *(undefined8 *)(param_2 + 0x2f8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_258 = uVar4;
  plStack_250 = plVar3;
  if (&local_258 != puVar7) {
    local_258 = *puVar7;
    plStack_250 = *(longlong **)(param_1 + 0x300);
    *puVar7 = uVar4;
    *(longlong **)(param_1 + 0x300) = plVar3;
    local_108 = uVar4;
    plStack_100 = plVar3;
  }
  if (plStack_250 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_250 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plStack_250 + 8))(plStack_250,1);
    }
  }
  plVar3 = *(longlong **)(param_2 + 0x310);
  puVar7 = (undefined8 *)(param_1 + 0x308);
  uVar4 = *(undefined8 *)(param_2 + 0x308);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_248 = uVar4;
  plStack_240 = plVar3;
  if (&local_248 != puVar7) {
    local_248 = *puVar7;
    plStack_240 = *(longlong **)(param_1 + 0x310);
    *puVar7 = uVar4;
    *(longlong **)(param_1 + 0x310) = plVar3;
    local_f8 = uVar4;
    plStack_f0 = plVar3;
  }
  if (plStack_240 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_240 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plStack_240 + 8))(plStack_240,1);
    }
  }
  FUN_141337f90(param_1 + 0x318,param_2 + 0x318);
  FUN_141337f90(param_1 + 0x330,param_2 + 0x330);
  plVar3 = *(longlong **)(param_2 + 0x350);
  puVar7 = (undefined8 *)(param_1 + 0x348);
  uVar4 = *(undefined8 *)(param_2 + 0x348);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_238 = uVar4;
  plStack_230 = plVar3;
  if (&local_238 != puVar7) {
    local_238 = *puVar7;
    plStack_230 = *(longlong **)(param_1 + 0x350);
    *puVar7 = uVar4;
    *(longlong **)(param_1 + 0x350) = plVar3;
    local_e8 = uVar4;
    plStack_e0 = plVar3;
  }
  if (plStack_230 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_230 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plStack_230 + 8))(plStack_230,1);
    }
  }
  FUN_141337f90(param_1 + 0x358,param_2 + 0x358);
  FUN_141337f90(param_1 + 0x370,param_2 + 0x370);
  plVar3 = *(longlong **)(param_2 + 0x390);
  puVar7 = (undefined8 *)(param_1 + 0x388);
  uVar4 = *(undefined8 *)(param_2 + 0x388);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_228 = uVar4;
  plStack_220 = plVar3;
  if (&local_228 != puVar7) {
    local_228 = *puVar7;
    plStack_220 = *(longlong **)(param_1 + 0x390);
    *puVar7 = uVar4;
    *(longlong **)(param_1 + 0x390) = plVar3;
    local_d8 = uVar4;
    plStack_d0 = plVar3;
  }
  if (plStack_220 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_220 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plStack_220 + 8))(plStack_220,1);
    }
  }
  puVar7 = (undefined8 *)(param_1 + 0x3c0);
  *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(param_2 + 0x398);
  *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(param_2 + 0x3a0);
  *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_2 + 0x3a8);
  *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_2 + 0x3b0);
  *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)(param_2 + 0x3b8);
  plVar3 = *(longlong **)(param_2 + 0x3c8);
  uVar4 = *(undefined8 *)(param_2 + 0x3c0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_218 = uVar4;
  plStack_210 = plVar3;
  if (&local_218 != puVar7) {
    local_218 = *puVar7;
    plStack_210 = *(longlong **)(param_1 + 0x3c8);
    *puVar7 = uVar4;
    *(longlong **)(param_1 + 0x3c8) = plVar3;
    local_c8 = uVar4;
    plStack_c0 = plVar3;
  }
  if (plStack_210 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_210 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plStack_210 + 8))(plStack_210,1);
    }
  }
  FUN_141337f90(param_1 + 0x3d0,param_2 + 0x3d0);
  plVar3 = *(longlong **)(param_2 + 0x3f0);
  puVar7 = (undefined8 *)(param_1 + 1000);
  uVar4 = *(undefined8 *)(param_2 + 1000);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_208 = uVar4;
  plStack_200 = plVar3;
  if (&local_208 != puVar7) {
    local_208 = *puVar7;
    plStack_200 = *(longlong **)(param_1 + 0x3f0);
    *puVar7 = uVar4;
    *(longlong **)(param_1 + 0x3f0) = plVar3;
    local_b8 = uVar4;
    plStack_b0 = plVar3;
  }
  if (plStack_200 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_200 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plStack_200 + 8))(plStack_200,1);
    }
  }
  FUN_141337f90(param_1 + 0x3f8,param_2 + 0x3f8);
  plVar3 = *(longlong **)(param_2 + 0x418);
  puVar7 = (undefined8 *)(param_1 + 0x410);
  uVar4 = *(undefined8 *)(param_2 + 0x410);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_1f8 = uVar4;
  plStack_1f0 = plVar3;
  if (&local_1f8 != puVar7) {
    local_1f8 = *puVar7;
    plStack_1f0 = *(longlong **)(param_1 + 0x418);
    *puVar7 = uVar4;
    *(longlong **)(param_1 + 0x418) = plVar3;
    local_a8 = uVar4;
    plStack_a0 = plVar3;
  }
  if (plStack_1f0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_1f0 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plStack_1f0 + 8))(plStack_1f0,1);
    }
  }
  plVar3 = *(longlong **)(param_2 + 0x428);
  puVar7 = (undefined8 *)(param_1 + 0x420);
  uVar4 = *(undefined8 *)(param_2 + 0x420);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_1e8 = uVar4;
  plStack_1e0 = plVar3;
  if (&local_1e8 != puVar7) {
    local_1e8 = *puVar7;
    plStack_1e0 = *(longlong **)(param_1 + 0x428);
    *puVar7 = uVar4;
    *(longlong **)(param_1 + 0x428) = plVar3;
    local_98 = uVar4;
    plStack_90 = plVar3;
  }
  if (plStack_1e0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_1e0 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plStack_1e0 + 8))(plStack_1e0,1);
    }
  }
  plVar3 = *(longlong **)(param_2 + 0x438);
  puVar7 = (undefined8 *)(param_1 + 0x430);
  uVar4 = *(undefined8 *)(param_2 + 0x430);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_1d8 = uVar4;
  plStack_1d0 = plVar3;
  if (&local_1d8 != puVar7) {
    local_1d8 = *puVar7;
    plStack_1d0 = *(longlong **)(param_1 + 0x438);
    *puVar7 = uVar4;
    *(longlong **)(param_1 + 0x438) = plVar3;
    local_88 = uVar4;
    plStack_80 = plVar3;
  }
  if (plStack_1d0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_1d0 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plStack_1d0 + 8))(plStack_1d0,1);
    }
  }
  plVar3 = *(longlong **)(param_2 + 0x448);
  puVar7 = (undefined8 *)(param_1 + 0x440);
  uVar4 = *(undefined8 *)(param_2 + 0x440);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_1c8 = uVar4;
  plStack_1c0 = plVar3;
  if (&local_1c8 != puVar7) {
    local_1c8 = *puVar7;
    plStack_1c0 = *(longlong **)(param_1 + 0x448);
    *puVar7 = uVar4;
    *(longlong **)(param_1 + 0x448) = plVar3;
    local_78 = uVar4;
    plStack_70 = plVar3;
  }
  if (plStack_1c0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_1c0 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plStack_1c0 + 8))(plStack_1c0,1);
    }
  }
  FUN_141337f90(param_1 + 0x450,param_2 + 0x450);
  plVar3 = (longlong *)(param_1 + 0x468);
  if (plVar3 != (longlong *)(param_2 + 0x468)) {
    iVar10 = *(int *)(param_1 + 0x470);
    if (iVar10 != 0) {
      plVar9 = (longlong *)(*plVar3 + 0x10);
      do {
        plVar5 = (longlong *)*plVar9;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (plVar5 != (longlong *)0x0)) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        plVar9 = plVar9 + 3;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar10 = *(int *)(param_2 + 0x470);
    lVar6 = *(longlong *)(param_2 + 0x468);
    *(int *)(param_1 + 0x470) = iVar10;
    if ((iVar10 == 0) && (*(int *)(param_1 + 0x474) == 0)) {
      *(undefined4 *)(param_1 + 0x474) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar3,iVar10);
      puVar8 = (undefined4 *)*plVar3;
      if (iVar10 != 0) {
        puVar7 = (undefined8 *)(lVar6 + 8);
        do {
          *puVar8 = *(undefined4 *)(puVar7 + -1);
          *(undefined8 *)(puVar8 + 2) = *puVar7;
          lVar6 = puVar7[1];
          *(longlong *)(puVar8 + 4) = lVar6;
          if (lVar6 != 0) {
            LOCK();
            *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + 1;
            UNLOCK();
          }
          puVar8 = puVar8 + 6;
          puVar7 = puVar7 + 3;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x478) = *(undefined8 *)(param_2 + 0x478);
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_2 + 0x480);
  *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_2 + 0x484);
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_2 + 0x488);
  *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_2 + 0x48c);
  *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_2 + 0x490);
  *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_2 + 0x494);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_2 + 0x498);
  *(undefined1 *)(param_1 + 0x49c) = *(undefined1 *)(param_2 + 0x49c);
  *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)(param_2 + 0x4a0);
  *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_2 + 0x4a8);
  *(undefined4 *)(param_1 + 0x4ac) = *(undefined4 *)(param_2 + 0x4ac);
  *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_2 + 0x4b0);
  *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(param_2 + 0x4b4);
  *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_2 + 0x4b8);
  *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_2 + 0x4bc);
  *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_2 + 0x4c0);
  *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_2 + 0x4c4);
  *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_2 + 0x4c8);
  *(undefined8 *)(param_1 + 0x4d0) = *(undefined8 *)(param_2 + 0x4d0);
  FUN_141337f90(param_1 + 0x4d8,param_2 + 0x4d8);
  puVar7 = (undefined8 *)(param_1 + 0x510);
  *(undefined8 *)(param_1 + 0x4f0) = *(undefined8 *)(param_2 + 0x4f0);
  *(undefined8 *)(param_1 + 0x4f8) = *(undefined8 *)(param_2 + 0x4f8);
  *(undefined8 *)(param_1 + 0x500) = *(undefined8 *)(param_2 + 0x500);
  *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)(param_2 + 0x508);
  plVar3 = *(longlong **)(param_2 + 0x518);
  uVar4 = *(undefined8 *)(param_2 + 0x510);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_1b8 = uVar4;
  plStack_1b0 = plVar3;
  if (&local_1b8 != puVar7) {
    local_1b8 = *puVar7;
    plStack_1b0 = *(longlong **)(param_1 + 0x518);
    *puVar7 = uVar4;
    *(longlong **)(param_1 + 0x518) = plVar3;
    local_68 = uVar4;
    plStack_60 = plVar3;
  }
  if (plStack_1b0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_1b0 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plStack_1b0 + 8))(plStack_1b0,1);
    }
  }
  uVar4 = *(undefined8 *)(param_2 + 0x520);
  puVar7 = (undefined8 *)(param_1 + 0x520);
  plVar3 = *(longlong **)(param_2 + 0x528);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_1a8 = uVar4;
  plStack_1a0 = plVar3;
  if (&local_1a8 != puVar7) {
    local_1a8 = *puVar7;
    plStack_1a0 = *(longlong **)(param_1 + 0x528);
    *puVar7 = uVar4;
    *(longlong **)(param_1 + 0x528) = plVar3;
    local_58 = uVar4;
    plStack_50 = plVar3;
  }
  if (plStack_1a0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_1a0 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plStack_1a0 + 8))(plStack_1a0,1);
    }
  }
  *(undefined1 *)(param_1 + 0x530) = *(undefined1 *)(param_2 + 0x530);
  *(undefined1 *)(param_1 + 0x531) = *(undefined1 *)(param_2 + 0x531);
  *(undefined1 *)(param_1 + 0x532) = *(undefined1 *)(param_2 + 0x532);
  return param_1;
}



// FUNCTION 14135ef40 FUN_14135ef40 body=52 status=ok
// SIG undefined FUN_14135ef40(void)

undefined8 FUN_14135ef40(undefined8 param_1,ulonglong param_2)

{
  FUN_14135c5c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d8);
  }
  return param_1;
}



// FUNCTION 14135ef80 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 ASpawnNodeBase::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14135c840();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x538);
  }
  return param_1;
}



// FUNCTION 14135efc0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessDiaphragmDOFGatherCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14135cd70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 14135f000 FUN_14135f000 body=52 status=ok
// SIG undefined FUN_14135f000(void)

undefined8 FUN_14135f000(undefined8 param_1,ulonglong param_2)

{
  FUN_14135d0a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14135f040 FUN_14135f040 body=52 status=ok
// SIG undefined FUN_14135f040(void)

undefined8 FUN_14135f040(undefined8 param_1,ulonglong param_2)

{
  FUN_14135d1c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 14135f080 FUN_14135f080 body=43 status=ok
// SIG undefined FUN_14135f080(void)

undefined8 * FUN_14135f080(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1448b5940;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14135f0b0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FWmfMediaTracks::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14135d410();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 14135f0f0 FUN_14135f0f0 body=52 status=ok
// SIG undefined FUN_14135f0f0(void)

undefined8 FUN_14135f0f0(undefined8 param_1,ulonglong param_2)

{
  FUN_14135d600();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 14135f130 FUN_14135f130 body=108 status=ok
// SIG undefined FUN_14135f130(void)

longlong FUN_14135f130(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
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
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 14135f1a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UInputKeySelector::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140f5a560();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x670);
  }
  return param_1;
}



// FUNCTION 14135f1e0 FUN_14135f1e0 body=135 status=ok
// SIG undefined FUN_14135f1e0(void)

longlong FUN_14135f1e0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x648);
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
  FUN_140f5a560(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x660);
  }
  return param_1;
}



// FUNCTION 14135f270 FUN_14135f270 body=108 status=ok
// SIG undefined FUN_14135f270(void)

longlong FUN_14135f270(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
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
    FMemory::operator_delete(param_1,0x1f0);
  }
  return param_1;
}



// FUNCTION 14135f2e0 FUN_14135f2e0 body=108 status=ok
// SIG undefined FUN_14135f2e0(void)

longlong FUN_14135f2e0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
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



// FUNCTION 14135f350 FUN_14135f350 body=142 status=ok
// SIG undefined FUN_14135f350(void)

longlong FUN_14135f350(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
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
    FMemory::operator_delete(param_1,0x200);
  }
  return param_1;
}



// FUNCTION 14135f3e0 FUN_14135f3e0 body=67 status=ok
// SIG undefined FUN_14135f3e0(void)

longlong FUN_14135f3e0(longlong param_1,ulonglong param_2)

{
  FUN_14135c840(param_1 + 0x640);
  FUN_140f5a560(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc30);
  }
  return param_1;
}



// FUNCTION 14135f430 FUN_14135f430 body=67 status=ok
// SIG undefined FUN_14135f430(void)

longlong FUN_14135f430(longlong param_1,ulonglong param_2)

{
  FUN_14135c5c0(param_1 + 0x630);
  FUN_140f5a560(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x820);
  }
  return param_1;
}



// FUNCTION 14135f480 FUN_14135f480 body=233 status=ok
// SIG undefined FUN_14135f480(void)

longlong FUN_14135f480(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  plVar3 = *(longlong **)(param_1 + 0x198);
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
  plVar3 = *(longlong **)(param_1 + 0x180);
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
    FMemory::operator_delete(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 14135f570 FUN_14135f570 body=330 status=ok
// SIG undefined FUN_14135f570(void)

longlong FUN_14135f570(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 0x1c8);
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
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  plVar3 = *(longlong **)(param_1 + 0x198);
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
  plVar3 = *(longlong **)(param_1 + 0x178);
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



// FUNCTION 14135f6c0 FUN_14135f6c0 body=250 status=ok
// SIG undefined FUN_14135f6c0(void)

longlong FUN_14135f6c0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 0x1b8);
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
  plVar3 = *(longlong **)(param_1 + 0x178);
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



// FUNCTION 14135f7c0 FUN_14135f7c0 body=401 status=ok
// SIG undefined FUN_14135f7c0(void)

longlong FUN_14135f7c0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x1078) != 0) {
    FMemory::Free();
  }
  FUN_14135c480(param_1 + 0xff0);
  FUN_14135d790(param_1 + 0xf40);
  if (*(longlong *)(param_1 + 0xee0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xed0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xec0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe98) != 0) {
    FMemory::Free();
  }
  FUN_14135c240(param_1 + 0xe68);
  *(undefined4 *)(param_1 + 0xe60) = 0;
  if (*(longlong *)(param_1 + 0xe58) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xe18);
  if (*(longlong *)(param_1 + 0xdc8) != 0) {
    FMemory::Free();
  }
  FUN_14135d600(param_1 + 0xc48);
  FUN_14135d410(param_1 + 0xa98);
  FUN_14135cd70(param_1 + 0x880);
  FUN_14135d1c0(param_1 + 0x760);
  FUN_14135d0a0(param_1 + 0x6d0);
  if (*(longlong *)(param_1 + 0x6b8) != 0) {
    FMemory::Free();
  }
  TArray<FMapGenAttribute,TSizedDefaultAllocator<32>_>::
  ~TArray<FMapGenAttribute,TSizedDefaultAllocator<32>_>(param_1 + 0x6a0);
  plVar4 = *(longlong **)(param_1 + 0x690);
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1210);
  }
  return param_1;
}



// FUNCTION 14135f960 FUN_14135f960 body=137 status=ok
// SIG undefined FUN_14135f960(void)

longlong FUN_14135f960(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_14135c840(param_1 + 0x1b0);
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
    FMemory::operator_delete(param_1,0x6f0);
  }
  return param_1;
}



// FUNCTION 14135f9f0 FUN_14135f9f0 body=137 status=ok
// SIG undefined FUN_14135f9f0(void)

longlong FUN_14135f9f0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_14135c5c0(param_1 + 0x1b0);
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
    FMemory::operator_delete(param_1,0x390);
  }
  return param_1;
}



// FUNCTION 14135fa80 FUN_14135fa80 body=125 status=ok
// SIG undefined FUN_14135fa80(void)

longlong FUN_14135fa80(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
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
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 14135fb00 FUN_14135fb00 body=125 status=ok
// SIG undefined FUN_14135fb00(void)

longlong FUN_14135fb00(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
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
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 14135fb80 FUN_14135fb80 body=38 status=ok
// SIG undefined FUN_14135fb80(void)

void FUN_14135fb80(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x1d8);
  FUN_14135aed0(param_2);
  return;
}



// FUNCTION 14135fbb0 Construct body=38 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FFirearmVisualData>::Construct(undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x538);
  FUN_14135b090(param_2);
  return;
}



// FUNCTION 14135fc30 FUN_14135fc30 body=38 status=ok
// SIG undefined FUN_14135fc30(void)

void FUN_14135fc30(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x120);
  FUN_14135b6c0(param_2);
  return;
}



// FUNCTION 14135fca0 FUN_14135fca0 body=58 status=ok
// SIG undefined FUN_14135fca0(void)

void FUN_14135fca0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1404b03b0();
  FText::FText(param_2,uVar1);
  uVar1 = FUN_1404b03b0();
  FText::FText(param_2 + 0x18,uVar1);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 14135fce0 FUN_14135fce0 body=36 status=ok
// SIG undefined FUN_14135fce0(void)

void FUN_14135fce0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x70);
  FUN_140f59f50(param_2);
  return;
}



// FUNCTION 14135fd10 FUN_14135fd10 body=71 status=ok
// SIG undefined FUN_14135fd10(void)

undefined1 FUN_14135fd10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_14135d800(param_2 + param_3,param_3);
      param_3 = param_3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14135fd60 FUN_14135fd60 body=74 status=ok
// SIG undefined FUN_14135fd60(void)

undefined1 FUN_14135fd60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_14135db10(param_2 + param_3,param_3);
      param_3 = param_3 + 0x1d8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14135fdb0 FUN_14135fdb0 body=74 status=ok
// SIG undefined FUN_14135fdb0(void)

undefined1 FUN_14135fdb0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_14135e1b0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x538;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14135fee0 Copy body=82 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FNiagaraInputConditionMetadata>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - (longlong)param_2;
    do {
      *param_2 = *(undefined8 *)(param_3 + (longlong)param_2);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                (param_2 + 1,param_3 + 8 + (longlong)param_2);
      param_2 = param_2 + 3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14135ff40 FUN_14135ff40 body=105 status=ok
// SIG undefined FUN_14135ff40(void)

undefined8 FUN_14135ff40(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x10;
    do {
      *(undefined1 *)(param_2 + -0x10) = *(undefined1 *)(param_3 + -0x10 + param_2);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8 + param_2);
      FString::operator=(param_2,param_3 + param_2);
      FText::operator=(param_2 + 0x10,param_3 + 0x10 + param_2);
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14135ffb0 FUN_14135ffb0 body=119 status=ok
// SIG undefined FUN_14135ffb0(void)

undefined1 FUN_14135ffb0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x30;
    do {
      FText::operator=(param_2 + -0x30,param_3 + -0x30 + param_2);
      FText::operator=(param_2 + -0x18,param_3 + -0x18 + param_2);
      FString::operator=(param_2,param_3 + param_2);
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141360030 FUN_141360030 body=160 status=ok
// SIG undefined FUN_141360030(void)

undefined8 FUN_141360030(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x18;
    do {
      *(undefined1 *)(param_2 + -0x18) = *(undefined1 *)(param_3 + -0x18 + param_2);
      FString::operator=(param_2 + -0x10,param_3 + -0x10 + param_2);
      FString::operator=(param_2,param_3 + param_2);
      FString::operator=(param_2 + 0x10,param_3 + 0x10 + param_2);
      FString::operator=(param_2 + 0x20,param_3 + 0x20 + param_2);
      FString::operator=(param_2 + 0x30,param_3 + 0x30 + param_2);
      FText::operator=(param_2 + 0x40,param_3 + 0x40 + param_2);
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141360110 FUN_141360110 body=55 status=ok
// SIG undefined FUN_141360110(void)

void FUN_141360110(void)

{
  undefined8 uVar1;
  
  if (DAT_146883748 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146883748 = GetStaticEnum(FUN_141360ab0,uVar1,L"EGFxItemInspectionPages");
  }
  return;
}



// FUNCTION 141360160 FUN_141360160 body=85 status=ok
// SIG undefined FUN_141360160(void)

undefined8 FUN_141360160(void)

{
  LowLevelFatalErrorHandler
            ("..\\..\\OakGame\\Source\\OakGame\\Public\\UI/GFxItemCardObject.h",0x1d0,
             L"Pure virtual not implemented (%s)",L"UGFxLoadedItemCardBase");
  FDebug::AssertFailed
            (&DAT_143f3f584,"..\\..\\OakGame\\Source\\OakGame\\Public\\UI/GFxItemCardObject.h",0x1d0
             ,L"Pure virtual not implemented (%s)",L"UGFxLoadedItemCardBase");
  return 0;
}



// FUNCTION 1413601c0 FUN_1413601c0 body=85 status=ok
// SIG undefined FUN_1413601c0(void)

undefined8 FUN_1413601c0(void)

{
  LowLevelFatalErrorHandler
            ("..\\..\\OakGame\\Source\\OakGame\\Public\\UI/GFxItemCardObject.h",0x1d1,
             L"Pure virtual not implemented (%s)",L"UGFxLoadedItemCardBase");
  FDebug::AssertFailed
            (&DAT_143f3f584,"..\\..\\OakGame\\Source\\OakGame\\Public\\UI/GFxItemCardObject.h",0x1d1
             ,L"Pure virtual not implemented (%s)",L"UGFxLoadedItemCardBase");
  return 0;
}



// FUNCTION 141360220 FUN_141360220 body=6 status=ok
// SIG undefined FUN_141360220(void)

undefined8 FUN_141360220(void)

{
  return 0x396ee19a;
}



// FUNCTION 141360230 FUN_141360230 body=6 status=ok
// SIG undefined FUN_141360230(void)

undefined8 FUN_141360230(void)

{
  return 0x5838733c;
}



// FUNCTION 141360240 FUN_141360240 body=6 status=ok
// SIG undefined FUN_141360240(void)

undefined8 FUN_141360240(void)

{
  return 0xb69d56fc;
}



// FUNCTION 141360250 FUN_141360250 body=6 status=ok
// SIG undefined FUN_141360250(void)

undefined8 FUN_141360250(void)

{
  return 0x7b5c234d;
}



// FUNCTION 141360260 FUN_141360260 body=6 status=ok
// SIG undefined FUN_141360260(void)

undefined8 FUN_141360260(void)

{
  return 0x76266bb6;
}



// FUNCTION 141360270 FUN_141360270 body=6 status=ok
// SIG undefined FUN_141360270(void)

undefined8 FUN_141360270(void)

{
  return 0x95ceb809;
}



// FUNCTION 141360280 FUN_141360280 body=6 status=ok
// SIG undefined FUN_141360280(void)

undefined8 FUN_141360280(void)

{
  return 0x516b94bb;
}



// FUNCTION 141360290 FUN_141360290 body=6 status=ok
// SIG undefined FUN_141360290(void)

undefined8 FUN_141360290(void)

{
  return 0xdfc38aa8;
}



// FUNCTION 1413602a0 FUN_1413602a0 body=6 status=ok
// SIG undefined FUN_1413602a0(void)

undefined8 FUN_1413602a0(void)

{
  return 0xb44ecbb7;
}



// FUNCTION 1413602b0 FUN_1413602b0 body=6 status=ok
// SIG undefined FUN_1413602b0(void)

undefined8 FUN_1413602b0(void)

{
  return 0xefd97b93;
}



// FUNCTION 141360360 FUN_141360360 body=34 status=ok
// SIG undefined FUN_141360360(void)

void FUN_141360360(void)

{
  undefined8 uVar1;
  
  uVar1 = UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AmmoChanged_1448b31e8,3);
  return;
}



// FUNCTION 141360390 StaticRegisterNativesALandscape body=34 status=ok
// SIG undefined StaticRegisterNativesALandscape(void)

void ALandscape::StaticRegisterNativesALandscape(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnInputTypeChanged_1448b1f30,1);
  return;
}



// FUNCTION 1413603c0 FUN_1413603c0 body=34 status=ok
// SIG undefined FUN_1413603c0(void)

void FUN_1413603c0(void)

{
  undefined8 uVar1;
  
  uVar1 = ALandscapeStreamingProxy::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnExitCanceled_1448b2510,4);
  return;
}



// FUNCTION 1413603f0 FUN_1413603f0 body=34 status=ok
// SIG undefined FUN_1413603f0(void)

void FUN_1413603f0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141359f20();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetFistReadyState_1448b2b00,2);
  return;
}



// FUNCTION 141360420 FUN_141360420 body=34 status=ok
// SIG undefined FUN_141360420(void)

void FUN_141360420(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141359e20();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_HardpointUsed_1448b3220,4);
  return;
}



// FUNCTION 141360450 FUN_141360450 body=34 status=ok
// SIG undefined FUN_141360450(void)

void FUN_141360450(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141359440();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_extFinishedHide_1448b4ca0,5);
  return;
}



// FUNCTION 141360480 FUN_141360480 body=34 status=ok
// SIG undefined FUN_141360480(void)

void FUN_141360480(void)

{
  undefined8 uVar1;
  
  uVar1 = UEditableTextBoxWidgetStyle::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_HideAfterDelay_1448b52d0,6);
  return;
}



// FUNCTION 1413604b0 FUN_1413604b0 body=34 status=ok
// SIG undefined FUN_1413604b0(void)

void FUN_1413604b0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141358f70();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnChallengeClassLoaded_1448b6930,10);
  return;
}



// FUNCTION 1413604e0 FUN_1413604e0 body=34 status=ok
// SIG undefined FUN_1413604e0(void)

void FUN_1413604e0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413592a0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnItemCardLoadComplete_1448b5930,1);
  return;
}



// FUNCTION 141360510 FUN_141360510 body=34 status=ok
// SIG undefined FUN_141360510(void)

void FUN_141360510(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141359140();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnItemCardLoadComplete_1448b5920,1);
  return;
}



// FUNCTION 141360540 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146883e00 == 0) {
    uVar1 = FUN_141360220();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146883e00 =
         GetStaticStruct(FUN_141360ae0,uVar2,L"GFXItemInspectionPartEnumTable",0x10,uVar1);
  }
  return;
}



// FUNCTION 1413605a0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMaterialCachedExpressionData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146883d38 == 0) {
    uVar1 = FUN_141360230();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146883d38 = GetStaticStruct(FUN_141359830,uVar2,L"GFxItemCardAbbreviatedObject",0x1d8,uVar1)
    ;
  }
  return;
}



// FUNCTION 141360600 FUN_141360600 body=82 status=ok
// SIG undefined FUN_141360600(void)

void FUN_141360600(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146883d28 == 0) {
    uVar1 = FUN_141360240();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146883d28 = GetStaticStruct(FUN_141360b10,uVar2,L"GFxItemCardObject",0x538,uVar1);
  }
  return;
}



// FUNCTION 141360660 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146883de0 == 0) {
    uVar1 = FUN_141360250();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146883de0 = GetStaticStruct(FUN_141360b40,uVar2,L"GFxItemInspectionCategoryInfo",0x40,uVar1)
    ;
  }
  return;
}



// FUNCTION 1413606c0 FUN_1413606c0 body=82 status=ok
// SIG undefined FUN_1413606c0(void)

void FUN_1413606c0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146883dd0 == 0) {
    uVar1 = FUN_141360260();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146883dd0 = GetStaticStruct(FUN_141360b70,uVar2,L"GFxItemInspectionLocator",0x120,uVar1);
  }
  return;
}



// FUNCTION 141360720 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146883e10 == 0) {
    uVar1 = FUN_141360270();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146883e10 =
         GetStaticStruct(FUN_141360ba0,uVar2,L"GFxItemInspectionMenuEnumIdMap",0x18,uVar1);
  }
  return;
}



// FUNCTION 141360780 FUN_141360780 body=82 status=ok
// SIG undefined FUN_141360780(void)

void FUN_141360780(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146883df0 == 0) {
    uVar1 = FUN_141360280();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146883df0 = GetStaticStruct(FUN_141360bd0,uVar2,L"GFxItemInspectionPageData",0x38,uVar1);
  }
  return;
}



// FUNCTION 1413607e0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146883d48 == 0) {
    uVar1 = FUN_141360290();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146883d48 = GetStaticStruct(FUN_141360c00,uVar2,L"ItemCardElementalDetails",0x40,uVar1);
  }
  return;
}



// FUNCTION 141360840 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvent::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146883dc0 == 0) {
    uVar1 = FUN_1413602a0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146883dc0 = GetStaticStruct(FUN_141360c30,uVar2,L"ItemInspectionSelectedPartData",8,uVar1);
  }
  return;
}



// FUNCTION 1413608a0 FUN_1413608a0 body=82 status=ok
// SIG undefined FUN_1413608a0(void)

void FUN_1413608a0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146883bf8 == 0) {
    uVar1 = FUN_1413602b0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146883bf8 = GetStaticStruct(FUN_141360c60,uVar2,L"UIHardpointData",0x70,uVar1);
  }
  return;
}



// FUNCTION 141360900 FUN_141360900 body=47 status=ok
// SIG undefined FUN_141360900(void)

longlong FUN_141360900(void)

{
  if (DAT_146883c08 == 0) {
    FUN_141786440(&DAT_146883c08,&PTR_FUN_1448ae840);
  }
  return DAT_146883c08;
}



// FUNCTION 141360930 FUN_141360930 body=47 status=ok
// SIG undefined FUN_141360930(void)

longlong FUN_141360930(void)

{
  if (DAT_146883b80 == 0) {
    FUN_141786440(&DAT_146883b80,&PTR_GetPrivateStaticClass_1448b0f30);
  }
  return DAT_146883b80;
}



// FUNCTION 141360960 FUN_141360960 body=47 status=ok
// SIG undefined FUN_141360960(void)

longlong FUN_141360960(void)

{
  if (DAT_146883c18 == 0) {
    FUN_141786440(&DAT_146883c18,&PTR_FUN_1448aebd0);
  }
  return DAT_146883c18;
}



// FUNCTION 141360990 FUN_141360990 body=47 status=ok
// SIG undefined FUN_141360990(void)

longlong FUN_141360990(void)

{
  if (DAT_146883c80 == 0) {
    FUN_141786440(&DAT_146883c80,&PTR_FUN_1448afe80);
  }
  return DAT_146883c80;
}



// FUNCTION 1413609c0 FUN_1413609c0 body=47 status=ok
// SIG undefined FUN_1413609c0(void)

longlong FUN_1413609c0(void)

{
  if (DAT_146883d58 == 0) {
    FUN_141786440(&DAT_146883d58,&PTR_FUN_1448ac690);
  }
  return DAT_146883d58;
}



// FUNCTION 1413609f0 FUN_1413609f0 body=47 status=ok
// SIG undefined FUN_1413609f0(void)

longlong FUN_1413609f0(void)

{
  if (DAT_146883d08 == 0) {
    FUN_141786440(&DAT_146883d08,&PTR_FUN_1448a9e90);
  }
  return DAT_146883d08;
}



// FUNCTION 141360a20 FUN_141360a20 body=47 status=ok
// SIG undefined FUN_141360a20(void)

longlong FUN_141360a20(void)

{
  if (DAT_146883d68 == 0) {
    FUN_141786440(&DAT_146883d68,&PTR_FUN_1448ad030);
  }
  return DAT_146883d68;
}



// FUNCTION 141360a50 FUN_141360a50 body=47 status=ok
// SIG undefined FUN_141360a50(void)

longlong FUN_141360a50(void)

{
  if (DAT_146883d20 == 0) {
    FUN_141786a30(&DAT_146883d20,&PTR_Z_Construct_UPackage__Script_MechWarrior_14631fe10);
  }
  return DAT_146883d20;
}



// FUNCTION 141360a80 FUN_141360a80 body=47 status=ok
// SIG undefined FUN_141360a80(void)

longlong FUN_141360a80(void)

{
  if (DAT_146883d18 == 0) {
    FUN_141786a30(&DAT_146883d18,&PTR_FUN_14631fd90);
  }
  return DAT_146883d18;
}



// FUNCTION 141360ab0 FUN_141360ab0 body=47 status=ok
// SIG undefined FUN_141360ab0(void)

longlong FUN_141360ab0(void)

{
  if (DAT_146883db8 == 0) {
    FUN_1417866a0(&DAT_146883db8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146322cc0);
  }
  return DAT_146883db8;
}



// FUNCTION 141360ae0 FUN_141360ae0 body=47 status=ok
// SIG undefined FUN_141360ae0(void)

longlong FUN_141360ae0(void)

{
  if (DAT_146883e08 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146883e08,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463215a0);
  }
  return DAT_146883e08;
}



// FUNCTION 141360b10 FUN_141360b10 body=47 status=ok
// SIG undefined FUN_141360b10(void)

longlong FUN_141360b10(void)

{
  if (DAT_146883d30 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146883d30,&PTR_Z_Construct_UPackage__Script_MechWarrior_146320390);
  }
  return DAT_146883d30;
}



// FUNCTION 141360b40 FUN_141360b40 body=47 status=ok
// SIG undefined FUN_141360b40(void)

longlong FUN_141360b40(void)

{
  if (DAT_146883de8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146883de8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146321370);
  }
  return DAT_146883de8;
}



// FUNCTION 141360b70 FUN_141360b70 body=47 status=ok
// SIG undefined FUN_141360b70(void)

longlong FUN_141360b70(void)

{
  if (DAT_146883dd8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146883dd8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463212a0);
  }
  return DAT_146883dd8;
}



// FUNCTION 141360ba0 FUN_141360ba0 body=47 status=ok
// SIG undefined FUN_141360ba0(void)

longlong FUN_141360ba0(void)

{
  if (DAT_146883e18 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146883e18,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463216a0);
  }
  return DAT_146883e18;
}



// FUNCTION 141360bd0 FUN_141360bd0 body=47 status=ok
// SIG undefined FUN_141360bd0(void)

longlong FUN_141360bd0(void)

{
  if (DAT_146883df8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146883df8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463214e0);
  }
  return DAT_146883df8;
}



// FUNCTION 141360c00 FUN_141360c00 body=47 status=ok
// SIG undefined FUN_141360c00(void)

longlong FUN_141360c00(void)

{
  if (DAT_146883d50 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146883d50,&PTR_Z_Construct_UPackage__Script_MechWarrior_146320a40);
  }
  return DAT_146883d50;
}



// FUNCTION 141360c30 FUN_141360c30 body=47 status=ok
// SIG undefined FUN_141360c30(void)

longlong FUN_141360c30(void)

{
  if (DAT_146883dc8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146883dc8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146320ea0);
  }
  return DAT_146883dc8;
}



// FUNCTION 141360c60 FUN_141360c60 body=47 status=ok
// SIG undefined FUN_141360c60(void)

longlong FUN_141360c60(void)

{
  if (DAT_146883c00 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146883c00,&PTR_Z_Construct_UPackage__Script_MechWarrior_14631e550);
  }
  return DAT_146883c00;
}



// FUNCTION 141360d70 execTestServerLevelVisibilityChange body=191 status=ok
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
  thunk_FUN_140f812c0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141360eb0 FUN_141360eb0 body=146 status=ok
// SIG undefined FUN_141360eb0(void)

void FUN_141360eb0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 local_res10 [2];
  
  local_res10[0] = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
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
  FUN_140f780c0(param_1,puVar1);
  return;
}



// FUNCTION 141360f50 FUN_141360f50 body=128 status=ok
// SIG undefined FUN_141360f50(void)

void FUN_141360f50(undefined8 param_1,longlong param_2)

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
  FUN_140f78140(param_1,local_res10);
  return;
}



// FUNCTION 141360fd0 FUN_141360fd0 body=128 status=ok
// SIG undefined FUN_141360fd0(void)

void FUN_141360fd0(undefined8 param_1,longlong param_2)

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
  FUN_140f782d0(param_1,local_res10);
  return;
}



// FUNCTION 141361070 FUN_141361070 body=334 status=ok
// SIG undefined FUN_141361070(void)

void FUN_141361070(undefined8 param_1,longlong param_2)

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
  FUN_140f78490(param_1,local_res10,puVar6);
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



// FUNCTION 1413611c0 FUN_1413611c0 body=157 status=ok
// SIG undefined FUN_1413611c0(void)

void FUN_1413611c0(long param_1,longlong param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_a;
  
  local_10 = 0xffffffff;
  local_18 = 0;
  local_c = 0;
  local_a = 0;
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
  return;
}



// FUNCTION 141361260 FUN_141361260 body=157 status=ok
// SIG undefined FUN_141361260(void)

void FUN_141361260(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_a;
  
  local_10 = 0xffffffff;
  local_18 = 0;
  local_c = 0;
  local_a = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f79080(param_1,puVar1);
  return;
}



// FUNCTION 141361300 FUN_141361300 body=130 status=ok
// SIG undefined FUN_141361300(void)

void FUN_141361300(undefined8 param_1,longlong param_2)

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
  FUN_140f794a0(param_1,local_res10[0] != 0);
  return;
}


