// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143026f70 FUN_143026f70 body=223 status=ok
// SIG undefined FUN_143026f70(void)

void FUN_143026f70(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  
  local_res10[0] = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18[0] = 0;
  puVar2 = local_res10;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142ff6c80(param_1,puVar2,local_res18[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 143027050 FUN_143027050 body=190 status=ok
// SIG undefined FUN_143027050(void)

void FUN_143027050(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 local_res10 [2];
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
  uVar1 = FUN_142ff6d60(param_1,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 143027110 FUN_143027110 body=143 status=ok
// SIG undefined FUN_143027110(void)

void FUN_143027110(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  uVar1 = FUN_142ff7c90(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430271a0 execGetPerceivedActors body=226 status=ok
// SIG undefined execGetPerceivedActors(void)

void UAIPerceptionComponent::execGetPerceivedActors(undefined8 param_1,longlong param_2)

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
  FUN_142ff7ce0(param_1,local_res10,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 143027290 execGetActivationShapeComponent body=44 status=ok
// SIG undefined execGetActivationShapeComponent(void)

void ATrap::execGetActivationShapeComponent(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetActivationShapeComponent();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430272c0 FUN_1430272c0 body=197 status=ok
// SIG undefined FUN_1430272c0(void)

void FUN_1430272c0(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  uVar5 = FUN_142ff9f00(local_28,local_res10);
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



// FUNCTION 143027390 FUN_143027390 body=197 status=ok
// SIG undefined FUN_143027390(void)

void FUN_143027390(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  uVar5 = FUN_1411e3dd0(local_28,local_res10);
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



// FUNCTION 143027460 FUN_143027460 body=43 status=ok
// SIG undefined FUN_143027460(void)

void FUN_143027460(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142ffa030();
  *param_3 = uVar1;
  return;
}



// FUNCTION 143027490 execGetPerceivedActors body=226 status=ok
// SIG undefined execGetPerceivedActors(void)

void UAIPerceptionComponent::execGetPerceivedActors(undefined8 param_1,longlong param_2)

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
  FUN_142ffa060(param_1,local_res10,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 143027580 execGetSelectedOption body=43 status=ok
// SIG undefined execGetSelectedOption(void)

void ASwitchActor::execGetSelectedOption(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetSelectedOption();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430275b0 FUN_1430275b0 body=225 status=ok
// SIG undefined FUN_1430275b0(void)

void FUN_1430275b0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_48 [64];
  
  FUN_142fde510(local_48);
  *(undefined8 *)(param_2 + 0x38) = 0;
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
  uVar5 = FUN_142ffa1a0(local_68,puVar6);
  FText::operator=(param_3,uVar5);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return;
}



// FUNCTION 1430276a0 FUN_1430276a0 body=225 status=ok
// SIG undefined FUN_1430276a0(void)

void FUN_1430276a0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_48 [64];
  
  FUN_142fde510(local_48);
  *(undefined8 *)(param_2 + 0x38) = 0;
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
  uVar5 = FUN_142ffa310(local_68,puVar6);
  FText::operator=(param_3,uVar5);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return;
}



// FUNCTION 143027790 FUN_143027790 body=52 status=ok
// SIG undefined FUN_143027790(void)

void FUN_143027790(undefined4 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_142ffa350(param_1,local_18);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  return;
}



// FUNCTION 1430277d0 FUN_1430277d0 body=52 status=ok
// SIG undefined FUN_1430277d0(void)

void FUN_1430277d0(undefined4 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_142ffa3c0(param_1,local_18);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  return;
}



// FUNCTION 143027810 FUN_143027810 body=43 status=ok
// SIG undefined FUN_143027810(void)

void FUN_143027810(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142ffa430();
  *param_3 = uVar1;
  return;
}



// FUNCTION 143027840 FUN_143027840 body=44 status=ok
// SIG undefined FUN_143027840(void)

void FUN_143027840(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142ffa460();
  *param_3 = uVar1;
  return;
}



// FUNCTION 143027870 FUN_143027870 body=44 status=ok
// SIG undefined FUN_143027870(void)

void FUN_143027870(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142ffa490();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430278a0 FUN_1430278a0 body=251 status=ok
// SIG undefined FUN_1430278a0(void)

void FUN_1430278a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 local_res10 [2];
  undefined1 local_58 [64];
  
  local_res10[0] = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar2 = local_res10;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  FUN_142fde510(local_58);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar3 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142ffa4f0(param_1,puVar2,puVar3);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430279a0 FUN_1430279a0 body=43 status=ok
// SIG undefined FUN_1430279a0(void)

void FUN_1430279a0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142b47070();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430279d0 FUN_1430279d0 body=44 status=ok
// SIG undefined FUN_1430279d0(void)

void FUN_1430279d0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142ffcb50();
  *param_3 = uVar1;
  return;
}



// FUNCTION 143027a00 execGetAimAngles body=279 status=ok
// SIG undefined execGetAimAngles(void)

void UAnimInstanceGunfire::execGetAimAngles(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
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
  FUN_142ffe430(param_1,local_28[0],puVar1,puVar2);
  return;
}



// FUNCTION 143027b20 FUN_143027b20 body=162 status=ok
// SIG undefined FUN_143027b20(void)

void FUN_143027b20(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
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
  puVar2 = local_res10;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142fffe20(param_1,puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 143027bd0 execStopAllInstancesOfCameraAnim body=198 status=ok
// SIG undefined execStopAllInstancesOfCameraAnim(void)

void APlayerCameraManager::execStopAllInstancesOfCameraAnim(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x780))(param_1,local_res10,local_res8[0] != 0);
  return;
}



// FUNCTION 143027ca0 FUN_143027ca0 body=143 status=ok
// SIG undefined FUN_143027ca0(void)

void FUN_143027ca0(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_143000f00(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 143027d30 FUN_143027d30 body=43 status=ok
// SIG undefined FUN_143027d30(void)

void FUN_143027d30(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_143003580();
  *param_3 = uVar1;
  return;
}



// FUNCTION 143027d60 FUN_143027d60 body=43 status=ok
// SIG undefined FUN_143027d60(void)

void FUN_143027d60(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1430035e0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 143027d90 FUN_143027d90 body=358 status=ok
// SIG undefined FUN_143027d90(void)

void FUN_143027d90(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
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
  local_28 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = local_30;
  (**(code **)(*param_1 + 0x7a8))(param_1,local_res20,bVar1,&local_28,local_res10[0]);
  return;
}



// FUNCTION 143027f40 FUN_143027f40 body=158 status=ok
// SIG undefined FUN_143027f40(void)

void FUN_143027f40(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined2 local_18;
  
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_28 = 0;
  uStack_20 = 0;
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
  (**(code **)(*param_1 + 0x7a0))(param_1,puVar1);
  return;
}



// FUNCTION 143028000 FUN_143028000 body=253 status=ok
// SIG undefined FUN_143028000(void)

void FUN_143028000(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res8[0] = 0xffffffff;
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
  cVar1 = (**(code **)(*param_1 + 0x428))(param_1,local_res8,local_res10);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerAddCustomizationPartToInventoryActor_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x430))(param_1,local_res8,local_res10);
  return;
}



// FUNCTION 143028100 FUN_143028100 body=252 status=ok
// SIG undefined FUN_143028100(void)

void FUN_143028100(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res10[0] = 0xffffffff;
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
  cVar1 = (**(code **)(*param_1 + 0x458))(param_1,local_res10,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerConsumeItem_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x460))(param_1,local_res10,local_res8[0]);
  return;
}



// FUNCTION 143028200 FUN_143028200 body=297 status=ok
// SIG undefined FUN_143028200(void)

void FUN_143028200(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  local_res8[0] = 0xffffffff;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
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
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x468))(param_1,local_res8,local_18,local_28);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerDropItem_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x470))(param_1,local_res8,local_18,local_28);
  return;
}



// FUNCTION 143028330 FUN_143028330 body=253 status=ok
// SIG undefined FUN_143028330(void)

void FUN_143028330(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res8[0] = 0xffffffff;
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
  cVar1 = (**(code **)(*param_1 + 0x418))(param_1,local_res8,local_res10);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerRemoveCustomizationPartFromInventoryActor_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x420))(param_1,local_res8,local_res10);
  return;
}



// FUNCTION 143028430 FUN_143028430 body=169 status=ok
// SIG undefined FUN_143028430(void)

void FUN_143028430(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0xffffffff;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x448))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerRemoveItem_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x450))(param_1,local_res8);
  return;
}



// FUNCTION 1430284e0 FUN_1430284e0 body=311 status=ok
// SIG undefined FUN_1430284e0(void)

void FUN_1430284e0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0xffffffff;
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
  cVar1 = (**(code **)(*param_1 + 0x408))(param_1,local_res20,local_res10[0],local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetItemUIFlags_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x410))(param_1,local_res20,local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 143028620 FUN_143028620 body=298 status=ok
// SIG undefined FUN_143028620(void)

void FUN_143028620(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [16];
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
  cVar1 = (**(code **)(*param_1 + 0x3f8))(param_1,local_res20,local_res10[0],local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetItemsUIFlags_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x400))(param_1,local_res20,local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 143028750 FUN_143028750 body=297 status=ok
// SIG undefined FUN_143028750(void)

void FUN_143028750(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [4];
  undefined8 local_res20;
  
  local_res10[0] = 0xffffffff;
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
  cVar1 = (**(code **)(*param_1 + 0x438))(param_1,local_res10,local_res20,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerTransferItem_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x440))(param_1,local_res10,local_res20,local_res8[0]);
  return;
}



// FUNCTION 143028880 FUN_143028880 body=191 status=ok
// SIG undefined FUN_143028880(void)

void FUN_143028880(undefined8 param_1,longlong param_2)

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
  FUN_143015480(param_1,bVar1,local_res20);
  return;
}



// FUNCTION 143028940 FUN_143028940 body=143 status=ok
// SIG undefined FUN_143028940(void)

void FUN_143028940(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  uVar1 = FUN_143017ba0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430289f0 FUN_1430289f0 body=53 status=ok
// SIG undefined FUN_1430289f0(void)

void FUN_1430289f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_145a4fbc8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 143028a40 FUN_143028a40 body=47 status=ok
// SIG undefined FUN_143028a40(void)

longlong FUN_143028a40(void)

{
  if (DAT_146b46ba8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b46ba8,&PTR_Z_Construct_UPackage__Script_Engine_146786b10);
  }
  return DAT_146b46ba8;
}



// FUNCTION 143028a70 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInputSettings::GetPrivateStaticClass(void)

{
  if (DAT_146b46d38 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"InventorySerialNumberDatabase",&DAT_146b46d38,
                  FUN_140447710,0xe0,0x10000006,0,L"Game",FUN_143029c00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b46d38;
}



// FUNCTION 143028b10 FUN_143028b10 body=47 status=ok
// SIG undefined FUN_143028b10(void)

longlong FUN_143028b10(void)

{
  if (DAT_146b46db0 == 0) {
    FUN_141786440(&DAT_146b46db0,&PTR_FUN_145a4a7f0);
  }
  return DAT_146b46db0;
}



// FUNCTION 143028b40 FUN_143028b40 body=53 status=ok
// SIG undefined FUN_143028b40(void)

void FUN_143028b40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &PTR_FUN_145a4f138;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 143028b80 FUN_143028b80 body=53 status=ok
// SIG undefined FUN_143028b80(void)

void FUN_143028b80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_145a4dd80;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 143028bc0 FUN_143028bc0 body=151 status=ok
// SIG undefined FUN_143028bc0(void)

longlong FUN_143028bc0(void)

{
  if (DAT_146b46bc8 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"InventoryMaterialAspectTextureAssetStreamer",
                  &DAT_146b46bc8,FUN_140447710,0x48,0x10000000,0,L"Engine",
                  InternalConstructor<UDatasmithFBXSceneImportData>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b46bc8;
}



// FUNCTION 143028c80 FUN_143028c80 body=162 status=ok
// SIG undefined FUN_143028c80(void)

longlong FUN_143028c80(void)

{
  if (DAT_146b46d88 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"ItemPoolListData",&DAT_146b46d88,FUN_140447710,0x60,
                  0x10000000,0,L"Engine",FUN_143029cf0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_143029740,&LAB_140447700,0);
  }
  return DAT_146b46d88;
}



// FUNCTION 143028d50 FUN_143028d50 body=53 status=ok
// SIG undefined FUN_143028d50(void)

void FUN_143028d50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_145a4f4d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 143028da0 FUN_143028da0 body=53 status=ok
// SIG undefined FUN_143028da0(void)

void FUN_143028da0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &PTR_FUN_145a4f5f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 143028df0 FUN_143028df0 body=47 status=ok
// SIG undefined FUN_143028df0(void)

longlong FUN_143028df0(void)

{
  if (DAT_146b46c20 == 0) {
    FUN_141786440(&DAT_146b46c20,&PTR_thunk_FUN_14302b1c0_145a4aab0);
  }
  return DAT_146b46c20;
}



// FUNCTION 143028e20 FUN_143028e20 body=47 status=ok
// SIG undefined FUN_143028e20(void)

longlong FUN_143028e20(void)

{
  if (DAT_146b46c18 == 0) {
    FUN_141786a30(&DAT_146b46c18,&PTR_FUN_1467872f0);
  }
  return DAT_146b46c18;
}



// FUNCTION 143028e70 FUN_143028e70 body=162 status=ok
// SIG undefined FUN_143028e70(void)

longlong FUN_143028e70(void)

{
  if (DAT_146b46c48 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"InventoryParticleAspectData",&DAT_146b46c48,
                  FUN_140447710,0x78,0x10000000,0,L"Engine",FUN_143029ba0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f6e0,&LAB_140447700,0);
  }
  return DAT_146b46c48;
}



// FUNCTION 143028f30 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UImageSetSettings::GetPrivateStaticClass(void)

{
  if (DAT_146b46bd8 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"InventoryModuleSettings",&DAT_146b46bd8,FUN_140447710,
                  0x58,0x10000006,0,L"Game",FUN_143029ad0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b46bd8;
}



// FUNCTION 143028ff0 FUN_143028ff0 body=162 status=ok
// SIG undefined FUN_143028ff0(void)

longlong FUN_143028ff0(void)

{
  if (DAT_146b46be8 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"InventoryNamePartData",&DAT_146b46be8,FUN_140447710,0x60
                  ,0x10000000,0,L"Engine",&LAB_143029b10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b46be8;
}



// FUNCTION 1430290a0 FUN_1430290a0 body=53 status=ok
// SIG undefined FUN_1430290a0(void)

void FUN_1430290a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &PTR_FUN_145a4dc68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 143029100 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUserObjectListEntry::GetPrivateStaticClass(void)

{
  if (DAT_146b46c10 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"InventoryOwnerInterface",&DAT_146b46c10,
                  StaticRegisterNativesUUserObjectListEntry,0x28,0x10004001,0,L"Engine",
                  &LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b46c10;
}



// FUNCTION 1430291b0 FUN_1430291b0 body=47 status=ok
// SIG undefined FUN_1430291b0(void)

longlong FUN_1430291b0(void)

{
  if (DAT_146b46c08 == 0) {
    FUN_141786440(&DAT_146b46c08,&PTR_GetPrivateStaticClass_145a4ba50);
  }
  return DAT_146b46c08;
}



// FUNCTION 1430291e0 FUN_1430291e0 body=47 status=ok
// SIG undefined FUN_1430291e0(void)

longlong FUN_1430291e0(void)

{
  if (DAT_146b46c00 == 0) {
    FUN_141786a30(&DAT_146b46c00,&PTR_FUN_146787240);
  }
  return DAT_146b46c00;
}



// FUNCTION 143029220 FUN_143029220 body=47 status=ok
// SIG undefined FUN_143029220(void)

longlong FUN_143029220(void)

{
  if (DAT_146b46dd8 == 0) {
    FUN_141786440(&DAT_146b46dd8,&PTR_GetPrivateStaticClass_145a4c070);
  }
  return DAT_146b46dd8;
}



// FUNCTION 143029250 FUN_143029250 body=47 status=ok
// SIG undefined FUN_143029250(void)

longlong FUN_143029250(void)

{
  if (DAT_146b46dd0 == 0) {
    FUN_141786a30(&DAT_146b46dd0,&PTR_FUN_1467899c0);
  }
  return DAT_146b46dd0;
}



// FUNCTION 143029280 FUN_143029280 body=53 status=ok
// SIG undefined FUN_143029280(void)

void FUN_143029280(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_145a4eda0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430292c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAsyncTaskDownloadImage::GetPrivateStaticClass(void)

{
  if (DAT_146b46de0 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"ItemPoolPartSelectionOverrideData",&DAT_146b46de0,
                  StaticRegisterNativesUAsyncTaskDownloadImage,0x50,0x10000000,0,L"Engine",
                  &LAB_143029d80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b46de0;
}



// FUNCTION 143029390 FUN_143029390 body=47 status=ok
// SIG undefined FUN_143029390(void)

longlong FUN_143029390(void)

{
  if (DAT_146b46cd8 == 0) {
    FUN_141786440(&DAT_146b46cd8,&PTR_GetPrivateStaticClass_145a4ca50);
  }
  return DAT_146b46cd8;
}



// FUNCTION 1430293c0 FUN_1430293c0 body=47 status=ok
// SIG undefined FUN_1430293c0(void)

longlong FUN_1430293c0(void)

{
  if (DAT_146b46c78 == 0) {
    FUN_141786a30(&DAT_146b46c78,&PTR_FUN_146787df0);
  }
  return DAT_146b46c78;
}



// FUNCTION 1430293f0 FUN_1430293f0 body=47 status=ok
// SIG undefined FUN_1430293f0(void)

longlong FUN_1430293f0(void)

{
  if (DAT_146b46c80 == 0) {
    FUN_141786a30(&DAT_146b46c80,&PTR_FUN_146787e70);
  }
  return DAT_146b46c80;
}



// FUNCTION 143029420 FUN_143029420 body=47 status=ok
// SIG undefined FUN_143029420(void)

longlong FUN_143029420(void)

{
  if (DAT_146b46c88 == 0) {
    FUN_141786a30(&DAT_146b46c88,&PTR_FUN_146787ef0);
  }
  return DAT_146b46c88;
}



// FUNCTION 143029450 FUN_143029450 body=47 status=ok
// SIG undefined FUN_143029450(void)

longlong FUN_143029450(void)

{
  if (DAT_146b46c90 == 0) {
    FUN_141786a30(&DAT_146b46c90,&PTR_FUN_146787f70);
  }
  return DAT_146b46c90;
}



// FUNCTION 143029480 FUN_143029480 body=47 status=ok
// SIG undefined FUN_143029480(void)

longlong FUN_143029480(void)

{
  if (DAT_146b46c98 == 0) {
    FUN_141786a30(&DAT_146b46c98,&PTR_FUN_146787ff0);
  }
  return DAT_146b46c98;
}



// FUNCTION 1430294b0 FUN_1430294b0 body=47 status=ok
// SIG undefined FUN_1430294b0(void)

longlong FUN_1430294b0(void)

{
  if (DAT_146b46ca0 == 0) {
    FUN_141786a30(&DAT_146b46ca0,&PTR_FUN_146788070);
  }
  return DAT_146b46ca0;
}



// FUNCTION 1430294e0 FUN_1430294e0 body=47 status=ok
// SIG undefined FUN_1430294e0(void)

longlong FUN_1430294e0(void)

{
  if (DAT_146b46ca8 == 0) {
    FUN_141786a30(&DAT_146b46ca8,&PTR_FUN_146788130);
  }
  return DAT_146b46ca8;
}



// FUNCTION 143029510 FUN_143029510 body=47 status=ok
// SIG undefined FUN_143029510(void)

longlong FUN_143029510(void)

{
  if (DAT_146b46cb0 == 0) {
    FUN_141786a30(&DAT_146b46cb0,&PTR_FUN_1467881b0);
  }
  return DAT_146b46cb0;
}



// FUNCTION 143029540 FUN_143029540 body=47 status=ok
// SIG undefined FUN_143029540(void)

longlong FUN_143029540(void)

{
  if (DAT_146b46cb8 == 0) {
    FUN_141786a30(&DAT_146b46cb8,&PTR_FUN_146788230);
  }
  return DAT_146b46cb8;
}



// FUNCTION 143029570 FUN_143029570 body=47 status=ok
// SIG undefined FUN_143029570(void)

longlong FUN_143029570(void)

{
  if (DAT_146b46cc0 == 0) {
    FUN_141786a30(&DAT_146b46cc0,&PTR_FUN_146788300);
  }
  return DAT_146b46cc0;
}



// FUNCTION 1430295a0 FUN_1430295a0 body=47 status=ok
// SIG undefined FUN_1430295a0(void)

longlong FUN_1430295a0(void)

{
  if (DAT_146b46cc8 == 0) {
    FUN_141786a30(&DAT_146b46cc8,&PTR_FUN_146788380);
  }
  return DAT_146b46cc8;
}



// FUNCTION 1430295d0 FUN_1430295d0 body=47 status=ok
// SIG undefined FUN_1430295d0(void)

longlong FUN_1430295d0(void)

{
  if (DAT_146b46cd0 == 0) {
    FUN_141786a30(&DAT_146b46cd0,&PTR_FUN_146788400);
  }
  return DAT_146b46cd0;
}



// FUNCTION 143029600 FUN_143029600 body=162 status=ok
// SIG undefined FUN_143029600(void)

longlong FUN_143029600(void)

{
  if (DAT_146b46e20 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"LootableBalanceData",&DAT_146b46e20,FUN_140447710,0x58,
                  0x10000000,0,L"Engine",FUN_143029da0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b46e20;
}



// FUNCTION 1430296c0 FUN_1430296c0 body=53 status=ok
// SIG undefined FUN_1430296c0(void)

void FUN_1430296c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_145a4e790;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 143029700 FUN_143029700 body=53 status=ok
// SIG undefined FUN_143029700(void)

void FUN_143029700(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &PTR_FUN_145a4e8a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 143029740 FUN_143029740 body=162 status=ok
// SIG undefined FUN_143029740(void)

longlong FUN_143029740(void)

{
  if (DAT_146b46db8 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"ItemPoolListInterface",&DAT_146b46db8,FUN_140447710,0x40
                  ,0x10000001,0,L"Engine",FUN_143029d40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b46db8;
}



// FUNCTION 1430297f0 FUN_1430297f0 body=162 status=ok
// SIG undefined FUN_1430297f0(void)

longlong FUN_1430297f0(void)

{
  if (DAT_146b46d68 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"ItemPoolExpansionData",&DAT_146b46d68,FUN_140447710,0x48
                  ,0x10000000,0,L"Engine",InternalConstructor<UDatasmithFBXSceneImportData>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b46d68;
}



// FUNCTION 1430298a0 FUN_1430298a0 body=53 status=ok
// SIG undefined FUN_1430298a0(void)

void FUN_1430298a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_145a4f998;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430298e0 FUN_1430298e0 body=53 status=ok
// SIG undefined FUN_1430298e0(void)

void FUN_1430298e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_145a4ea10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 143029920 FUN_143029920 body=162 status=ok
// SIG undefined FUN_143029920(void)

longlong FUN_143029920(void)

{
  if (DAT_146b46d28 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"InventorySerialNumberAssetInterface",&DAT_146b46d28,
                  FUN_140447710,0x28,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b46d28;
}



// FUNCTION 1430299d0 FUN_1430299d0 body=53 status=ok
// SIG undefined FUN_1430299d0(void)

void FUN_1430299d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_145a4fab0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 143029a10 FUN_143029a10 body=120 status=ok
// SIG undefined FUN_143029a10(void)

void FUN_143029a10(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_144b528a0;
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
  }
  return;
}



// FUNCTION 143029a90 InternalConstructor<UDatasmithFBXSceneImportData> body=51 status=ok
// SIG undefined InternalConstructor<UDatasmithFBXSceneImportData>(void)

void InternalConstructor<UDatasmithFBXSceneImportData>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__145a4de98;
    puVar1[7] = 0;
    puVar1[8] = 0;
  }
  return;
}



// FUNCTION 143029ad0 FUN_143029ad0 body=55 status=ok
// SIG undefined FUN_143029ad0(void)

void FUN_143029ad0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_145a4e110;
    puVar1[5] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
  }
  return;
}



// FUNCTION 143029b30 FUN_143029b30 body=41 status=ok
// SIG undefined FUN_143029b30(void)

void FUN_143029b30(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_144a72fd8;
  }
  return;
}



// FUNCTION 143029ba0 FUN_143029ba0 body=59 status=ok
// SIG undefined FUN_143029ba0(void)

void FUN_143029ba0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__145a4e3a8;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
  }
  return;
}



// FUNCTION 143029c00 FUN_143029c00 body=147 status=ok
// SIG undefined FUN_143029c00(void)

void FUN_143029c00(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_145a4eb28;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *(undefined4 *)(puVar1 + 0xe) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
    puVar1[0x10] = 0;
    *(undefined4 *)(puVar1 + 0x11) = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 0;
    puVar1[0x1a] = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
  }
  return;
}



// FUNCTION 143029cb0 InternalConstructor<UDatasmithFBXSceneImportData> body=51 status=ok
// SIG undefined InternalConstructor<UDatasmithFBXSceneImportData>(void)

void InternalConstructor<UDatasmithFBXSceneImportData>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__145a4eeb8;
    puVar1[7] = 0;
    puVar1[8] = 0;
  }
  return;
}



// FUNCTION 143029cf0 FUN_143029cf0 body=67 status=ok
// SIG undefined FUN_143029cf0(void)

void FUN_143029cf0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    puVar1[6] = 0;
    puVar1[7] = 0;
    *puVar1 = &PTR_FUN_145a4f250;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
  }
  return;
}



// FUNCTION 143029d40 FUN_143029d40 body=51 status=ok
// SIG undefined FUN_143029d40(void)

void FUN_143029d40(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__145a3b238;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return;
}



// FUNCTION 143029da0 FUN_143029da0 body=63 status=ok
// SIG undefined FUN_143029da0(void)

void FUN_143029da0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_145a4f718;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
  }
  return;
}



// FUNCTION 143029de0 FUN_143029de0 body=397 status=ok
// SIG undefined FUN_143029de0(void)

void FUN_143029de0(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_143029ea1;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_143029ea1:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      if (*(longlong *)((longlong)iStack_1c * 0x38 + *param_1 + 0x18) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 143029f70 `scalar_deleting_destructor' body=132 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ULiveLinkAnimationRoleToTransform::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x40);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14302a000 FUN_14302a000 body=70 status=ok
// SIG undefined FUN_14302a000(void)

longlong FUN_14302a000(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14302a050 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UVoiceChannel::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x68);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14302a090 FUN_14302a090 body=191 status=ok
// SIG undefined FUN_14302a090(void)

longlong FUN_14302a090(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FRetargetSourceCachedData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x90,0);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  FUN_143029de0(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 14302a150 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USkeletalMeshLODSettings::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_141439310(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14302a190 FUN_14302a190 body=93 status=ok
// SIG undefined FUN_14302a190(void)

longlong FUN_14302a190(longlong param_1,ulonglong param_2)

{
  TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
  ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14302a1f0 FUN_14302a1f0 body=137 status=ok
// SIG undefined FUN_14302a1f0(void)

longlong FUN_14302a1f0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x38);
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x48;
    do {
      TArray<FMovieSceneSegment,FDefaultAllocator>::~TArray<FMovieSceneSegment,FDefaultAllocator>
                (lVar1);
      lVar1 = lVar1 + 0x58;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14302a2a0 FUN_14302a2a0 body=91 status=ok
// SIG undefined FUN_14302a2a0(void)

void FUN_14302a2a0(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0x3f800000;
  FUN_142c8c260(param_2 + 0x40,0x3f800000);
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined4 *)(param_2 + 8) = 0x3f800000;
  return;
}



// FUNCTION 14302a3e0 FUN_14302a3e0 body=51 status=ok
// SIG undefined FUN_14302a3e0(void)

void FUN_14302a3e0(undefined8 param_1,void *param_2)

{
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  _guard_xfg_dispatch_icall_nop(param_2,0,0x60);
  *(undefined1 *)((longlong)param_2 + 0x58) = 1;
  return;
}



// FUNCTION 14302a420 FUN_14302a420 body=191 status=ok
// SIG undefined FUN_14302a420(void)

undefined8 FUN_14302a420(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar7 = (undefined4 *)(param_2 + 0x10);
    do {
      *(undefined8 *)(puVar7 + -4) = *(undefined8 *)(param_3 + -0x10 + (longlong)puVar7);
      puVar7[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar7);
      puVar7[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar7);
      *puVar7 = *(undefined4 *)(param_3 + (longlong)puVar7);
      local_28 = *(undefined8 *)(param_3 + 8 + (longlong)puVar7);
      FString::FString(local_20,param_3 + 0x10 + (longlong)puVar7);
      FSoftObjectPath::operator=(puVar7 + 2,&local_28);
      *(undefined8 *)(puVar7 + 8) = *(undefined8 *)(param_3 + 0x20 + (longlong)puVar7);
      puVar1 = (undefined8 *)(param_3 + 0x28 + (longlong)puVar7);
      uVar6 = puVar1[1];
      *(undefined8 *)(puVar7 + 10) = *puVar1;
      *(undefined8 *)(puVar7 + 0xc) = uVar6;
      puVar1 = (undefined8 *)(param_3 + 0x38 + (longlong)puVar7);
      uVar6 = puVar1[1];
      *(undefined8 *)(puVar7 + 0xe) = *puVar1;
      *(undefined8 *)(puVar7 + 0x10) = uVar6;
      puVar2 = (undefined4 *)(param_3 + 0x48 + (longlong)puVar7);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar7[0x12] = *puVar2;
      puVar7[0x13] = uVar3;
      puVar7[0x14] = uVar4;
      puVar7[0x15] = uVar5;
      *(undefined8 *)(puVar7 + 0x16) = *(undefined8 *)(param_3 + 0x58 + (longlong)puVar7);
      puVar7 = puVar7 + 0x1c;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14302a4e0 FUN_14302a4e0 body=354 status=ok
// SIG undefined FUN_14302a4e0(void)

undefined8 FUN_14302a4e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  
  if (param_4 != 0) {
    piVar4 = (int *)(param_3 + 0x68);
    do {
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(param_2,piVar4 + -0x1a);
      piVar1 = (int *)(param_2 + 0x30);
      *(int *)(param_2 + 0x10) = piVar4[-0x16];
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(piVar4 + -0x14);
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(piVar4 + -0x12);
      *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(piVar4 + -0x10);
      if (piVar1 != piVar4 + -0xe) {
        iVar2 = piVar4[-0xc];
        pvVar3 = *(void **)(piVar4 + -0xe);
        *(int *)(param_2 + 0x38) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x3c) == 0)) {
          *(undefined4 *)(param_2 + 0x3c) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar1,iVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2 << 3);
        }
      }
      TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(param_2 + 0x40,piVar4 + -10);
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                (param_2 + 0x50,piVar4 + -6);
      piVar1 = (int *)(param_2 + 0x60);
      if (piVar1 != piVar4 + -2) {
        iVar2 = *piVar4;
        pvVar3 = *(void **)(piVar4 + -2);
        *(int *)(param_2 + 0x68) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x6c) == 0)) {
          *(undefined4 *)(param_2 + 0x6c) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar1,iVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2 << 3);
        }
      }
      *(char *)(param_2 + 0x70) = (char)piVar4[2];
      *(undefined1 *)(param_2 + 0x71) = *(undefined1 *)((longlong)piVar4 + 9);
      piVar1 = piVar4 + 4;
      piVar4 = piVar4 + 0x20;
      *(char *)(param_2 + 0x78) = (char)*piVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x80;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14302a650 Copy body=89 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FDlcVehicleCustomization>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x18);
    do {
      *(undefined1 *)(puVar1 + -6) = *(undefined1 *)(param_3 + -0x18 + (longlong)puVar1);
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                (puVar1 + -4,param_3 + -0x10 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      puVar1 = puVar1 + 8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14302a6b0 FUN_14302a6b0 body=521 status=ok
// SIG undefined FUN_14302a6b0(void)

undefined8 FUN_14302a6b0(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  
  if (param_4 != 0) {
    plVar12 = (longlong *)(param_3 + 0x10);
    do {
      if (param_2 != plVar12 + -2) {
        iVar10 = (int)param_2[1];
        if (iVar10 != 0) {
          plVar8 = (longlong *)(*param_2 + 0x78);
          do {
            if (*plVar8 != 0) {
              FMemory::Free();
            }
            plVar8 = plVar8 + 0x11;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        iVar10 = (int)plVar12[-1];
        lVar2 = plVar12[-2];
        *(int *)(param_2 + 1) = iVar10;
        if ((iVar10 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          FUN_1406f4a40(param_2,iVar10);
          puVar13 = (undefined8 *)*param_2;
          if (iVar10 != 0) {
            puVar11 = (undefined8 *)(lVar2 + 8);
            puVar9 = (undefined4 *)((longlong)puVar13 + 0x84);
            do {
              *puVar13 = puVar11[-1];
              uVar7 = puVar11[1];
              *(undefined8 *)(puVar9 + -0x1f) = *puVar11;
              *(undefined8 *)(puVar9 + -0x1d) = uVar7;
              uVar7 = puVar11[3];
              *(undefined8 *)(puVar9 + -0x1b) = puVar11[2];
              *(undefined8 *)(puVar9 + -0x19) = uVar7;
              uVar7 = puVar11[5];
              *(undefined8 *)(puVar9 + -0x17) = puVar11[4];
              *(undefined8 *)(puVar9 + -0x15) = uVar7;
              *(undefined8 *)(puVar9 + -0x13) = puVar11[6];
              uVar7 = puVar11[8];
              *(undefined8 *)(puVar9 + -0x11) = puVar11[7];
              *(undefined8 *)(puVar9 + -0xf) = uVar7;
              uVar7 = puVar11[10];
              *(undefined8 *)(puVar9 + -0xd) = puVar11[9];
              *(undefined8 *)(puVar9 + -0xb) = uVar7;
              uVar4 = *(undefined4 *)((longlong)puVar11 + 0x5c);
              uVar5 = *(undefined4 *)(puVar11 + 0xc);
              uVar6 = *(undefined4 *)((longlong)puVar11 + 100);
              puVar9[-9] = *(undefined4 *)(puVar11 + 0xb);
              puVar9[-8] = uVar4;
              puVar9[-7] = uVar5;
              puVar9[-6] = uVar6;
              *(undefined8 *)(puVar9 + -5) = puVar11[0xd];
              *(undefined8 *)(puVar9 + -3) = 0;
              iVar1 = *(int *)(puVar11 + 0xf);
              pvVar3 = (void *)puVar11[0xe];
              puVar9[-1] = iVar1;
              if (iVar1 == 0) {
                *puVar9 = 0;
              }
              else {
                TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                          (puVar9 + -3,iVar1,0);
                _guard_xfg_dispatch_icall_nop(*(void **)(puVar9 + -3),pvVar3,(longlong)iVar1 << 3);
              }
              puVar13 = puVar13 + 0x11;
              puVar9 = puVar9 + 0x22;
              puVar11 = puVar11 + 0x11;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
      }
      plVar8 = param_2 + 2;
      if (plVar8 != plVar12) {
        iVar10 = (int)plVar12[1];
        pvVar3 = (void *)*plVar12;
        *(int *)(param_2 + 3) = iVar10;
        if ((iVar10 == 0) && (*(int *)((longlong)param_2 + 0x1c) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar8,iVar10);
          _guard_xfg_dispatch_icall_nop((void *)*plVar8,pvVar3,(longlong)iVar10 << 3);
        }
      }
      plVar12 = plVar12 + 4;
      param_4 = param_4 + -1;
      param_2 = param_2 + 4;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14302a8c0 FUN_14302a8c0 body=269 status=ok
// SIG undefined FUN_14302a8c0(void)

undefined8 FUN_14302a8c0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if (param_4 != 0) {
    puVar7 = (undefined8 *)(param_3 + 8);
    do {
      *param_2 = puVar7[-1];
      puVar1 = param_2 + 0xf;
      uVar6 = puVar7[1];
      param_2[1] = *puVar7;
      param_2[2] = uVar6;
      uVar6 = puVar7[3];
      param_2[3] = puVar7[2];
      param_2[4] = uVar6;
      uVar6 = puVar7[5];
      param_2[5] = puVar7[4];
      param_2[6] = uVar6;
      param_2[7] = puVar7[6];
      uVar6 = puVar7[8];
      param_2[8] = puVar7[7];
      param_2[9] = uVar6;
      uVar6 = puVar7[10];
      param_2[10] = puVar7[9];
      param_2[0xb] = uVar6;
      uVar3 = *(undefined4 *)((longlong)puVar7 + 0x5c);
      uVar4 = *(undefined4 *)(puVar7 + 0xc);
      uVar5 = *(undefined4 *)((longlong)puVar7 + 100);
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(puVar7 + 0xb);
      *(undefined4 *)((longlong)param_2 + 100) = uVar3;
      *(undefined4 *)(param_2 + 0xd) = uVar4;
      *(undefined4 *)((longlong)param_2 + 0x6c) = uVar5;
      param_2[0xe] = puVar7[0xd];
      if (puVar1 != puVar7 + 0xe) {
        iVar2 = *(int *)(puVar7 + 0xf);
        _Src = (void *)puVar7[0xe];
        *(int *)(param_2 + 0x10) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x84) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x84) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
        }
      }
      puVar7 = puVar7 + 0x11;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x11;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14302a9d0 FUN_14302a9d0 body=241 status=ok
// SIG undefined FUN_14302a9d0(void)

undefined8 FUN_14302a9d0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if (param_4 != 0) {
    puVar7 = (undefined8 *)(param_3 + 8);
    do {
      *param_2 = puVar7[-1];
      puVar1 = param_2 + 9;
      param_2[1] = *puVar7;
      uVar6 = puVar7[2];
      param_2[2] = puVar7[1];
      param_2[3] = uVar6;
      uVar6 = puVar7[4];
      param_2[4] = puVar7[3];
      param_2[5] = uVar6;
      uVar3 = *(undefined4 *)((longlong)puVar7 + 0x2c);
      uVar4 = *(undefined4 *)(puVar7 + 6);
      uVar5 = *(undefined4 *)((longlong)puVar7 + 0x34);
      *(undefined4 *)(param_2 + 6) = *(undefined4 *)(puVar7 + 5);
      *(undefined4 *)((longlong)param_2 + 0x34) = uVar3;
      *(undefined4 *)(param_2 + 7) = uVar4;
      *(undefined4 *)((longlong)param_2 + 0x3c) = uVar5;
      param_2[8] = puVar7[7];
      if (puVar1 != puVar7 + 8) {
        iVar2 = *(int *)(puVar7 + 9);
        _Src = (void *)puVar7[8];
        *(int *)(param_2 + 10) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x54) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x54) = 0;
        }
        else {
          TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x48);
        }
      }
      puVar7 = puVar7 + 0xb;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xb;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14302aad0 FUN_14302aad0 body=471 status=ok
// SIG undefined FUN_14302aad0(void)

undefined8 FUN_14302aad0(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  
  if (param_4 != 0) {
    plVar13 = (longlong *)(param_3 + 0x48);
    do {
      *param_2 = plVar13[-9];
      plVar1 = param_2 + 9;
      param_2[1] = plVar13[-8];
      lVar3 = plVar13[-6];
      param_2[2] = plVar13[-7];
      param_2[3] = lVar3;
      lVar3 = plVar13[-4];
      param_2[4] = plVar13[-5];
      param_2[5] = lVar3;
      uVar4 = *(undefined4 *)((longlong)plVar13 + -0x14);
      lVar3 = plVar13[-2];
      uVar5 = *(undefined4 *)((longlong)plVar13 + -0xc);
      *(int *)(param_2 + 6) = (int)plVar13[-3];
      *(undefined4 *)((longlong)param_2 + 0x34) = uVar4;
      *(int *)(param_2 + 7) = (int)lVar3;
      *(undefined4 *)((longlong)param_2 + 0x3c) = uVar5;
      param_2[8] = plVar13[-1];
      if (plVar1 != plVar13) {
        iVar10 = (int)param_2[10];
        if (iVar10 != 0) {
          plVar8 = (longlong *)(*plVar1 + 0x48);
          do {
            if (*plVar8 != 0) {
              FMemory::Free();
            }
            plVar8 = plVar8 + 0xb;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        iVar10 = (int)plVar13[1];
        lVar3 = *plVar13;
        *(int *)(param_2 + 10) = iVar10;
        if ((iVar10 == 0) && (*(int *)((longlong)param_2 + 0x54) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x54) = 0;
        }
        else {
          TArray<FCloudFileHeader,FDefaultAllocator>::ResizeForCopy(plVar1);
          puVar12 = (undefined8 *)*plVar1;
          if (iVar10 != 0) {
            puVar11 = (undefined8 *)(lVar3 + 8);
            puVar9 = (undefined4 *)((longlong)puVar12 + 0x54);
            do {
              *puVar12 = puVar11[-1];
              *(undefined8 *)(puVar9 + -0x13) = *puVar11;
              uVar7 = puVar11[2];
              *(undefined8 *)(puVar9 + -0x11) = puVar11[1];
              *(undefined8 *)(puVar9 + -0xf) = uVar7;
              uVar7 = puVar11[4];
              *(undefined8 *)(puVar9 + -0xd) = puVar11[3];
              *(undefined8 *)(puVar9 + -0xb) = uVar7;
              uVar4 = *(undefined4 *)((longlong)puVar11 + 0x2c);
              uVar5 = *(undefined4 *)(puVar11 + 6);
              uVar6 = *(undefined4 *)((longlong)puVar11 + 0x34);
              puVar9[-9] = *(undefined4 *)(puVar11 + 5);
              puVar9[-8] = uVar4;
              puVar9[-7] = uVar5;
              puVar9[-6] = uVar6;
              *(undefined8 *)(puVar9 + -5) = puVar11[7];
              *(undefined8 *)(puVar9 + -3) = 0;
              iVar2 = *(int *)(puVar11 + 9);
              _Src = (void *)puVar11[8];
              puVar9[-1] = iVar2;
              if (iVar2 == 0) {
                *puVar9 = 0;
              }
              else {
                TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy
                          (puVar9 + -3,iVar2,0);
                _guard_xfg_dispatch_icall_nop(*(void **)(puVar9 + -3),_Src,(longlong)iVar2 * 0x48);
              }
              puVar12 = puVar12 + 0xb;
              puVar9 = puVar9 + 0x16;
              puVar11 = puVar11 + 0xb;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
      }
      plVar13 = plVar13 + 0xb;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xb;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14302acb0 FUN_14302acb0 body=430 status=ok
// SIG undefined FUN_14302acb0(void)

undefined8 FUN_14302acb0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong *plVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  int local_res20;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x38;
    local_res20 = param_4;
    do {
      *param_2 = *(undefined8 *)(param_3 + -0x38);
      plVar1 = param_2 + 4;
      param_2[1] = *(undefined8 *)(param_3 + -0x30);
      param_2[2] = *(undefined8 *)(param_3 + -0x28);
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_3 + -0x20);
      if (plVar1 != (longlong *)(param_3 + -0x18)) {
        iVar6 = *(int *)(param_2 + 5);
        if (iVar6 != 0) {
          plVar4 = (longlong *)(*plVar1 + 8);
          do {
            if (*plVar4 != 0) {
              FMemory::Free();
            }
            plVar4 = plVar4 + 3;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        iVar6 = *(int *)(param_3 + -0x10);
        lVar3 = *(longlong *)(param_3 + -0x18);
        *(int *)(param_2 + 5) = iVar6;
        if ((iVar6 == 0) && (*(int *)((longlong)param_2 + 0x2c) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar6);
          puVar5 = (undefined1 *)*plVar1;
          if (iVar6 != 0) {
            puVar7 = (undefined8 *)(lVar3 + 8);
            do {
              *puVar5 = *(undefined1 *)(puVar7 + -1);
              *(undefined8 *)(puVar5 + 8) = 0;
              iVar2 = *(int *)(puVar7 + 1);
              _Src = (void *)*puVar7;
              *(int *)(puVar5 + 0x10) = iVar2;
              if (iVar2 == 0) {
                *(undefined4 *)(puVar5 + 0x14) = 0;
              }
              else {
                TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                          (puVar5 + 8,iVar2,0);
                _guard_xfg_dispatch_icall_nop(*(void **)(puVar5 + 8),_Src,(longlong)iVar2 << 3);
              }
              puVar5 = puVar5 + 0x18;
              puVar7 = puVar7 + 3;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
      }
      *(undefined1 *)(param_2 + 6) = *(undefined1 *)(param_3 + -8);
      TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(param_2 + 7,param_3);
      TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(param_2 + 9,param_3 + 0x10);
      *(undefined1 *)(param_2 + 0xb) = *(undefined1 *)(param_3 + 0x20);
      puVar5 = (undefined1 *)(param_3 + 0x21);
      param_3 = param_3 + 0x60;
      local_res20 = local_res20 + -1;
      *(undefined1 *)((longlong)param_2 + 0x59) = *puVar5;
      param_2 = param_2 + 0xc;
    } while (local_res20 != 0);
  }
  return 1;
}



// FUNCTION 14302ae60 FUN_14302ae60 body=89 status=ok
// SIG undefined FUN_14302ae60(void)

void FUN_14302ae60(undefined8 param_1,longlong *param_2)

{
  if (param_2[0xc] != 0) {
    FMemory::Free();
  }
  if (param_2[10] != 0) {
    FMemory::Free();
  }
  if (param_2[8] != 0) {
    FMemory::Free();
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14302aec0 FUN_14302aec0 body=36 status=ok
// SIG undefined FUN_14302aec0(void)

void FUN_14302aec0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FMemory::Free();
  }
  TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
  ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(param_2);
  return;
}



// FUNCTION 14302af10 FUN_14302af10 body=51 status=ok
// SIG undefined FUN_14302af10(void)

void FUN_14302af10(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_2 + 0x20);
  return;
}



// FUNCTION 14302af50 FUN_14302af50 body=55 status=ok
// SIG undefined FUN_14302af50(void)

void FUN_14302af50(void)

{
  undefined8 uVar1;
  
  if (DAT_146b469e8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b469e8 = GetStaticEnum(FUN_14302c3b0,uVar1,L"EDropLifeSpanType");
  }
  return;
}



// FUNCTION 14302af90 FUN_14302af90 body=55 status=ok
// SIG undefined FUN_14302af90(void)

void FUN_14302af90(void)

{
  undefined8 uVar1;
  
  if (DAT_146b469f0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b469f0 = GetStaticEnum(FUN_14302c3e0,uVar1,L"EInventorySerialNumberState");
  }
  return;
}



// FUNCTION 14302afd0 FUN_14302afd0 body=140 status=ok
// SIG undefined FUN_14302afd0(void)

void FUN_14302afd0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = UObject::FindFunction(param_1,DAT_146b46b00);
  if (lVar1 != 0) {
    local_18 = param_2;
    local_10 = param_3;
    (**(code **)(*param_1 + 0x208))(param_1,lVar1,&local_18);
    return;
  }
  uVar2 = UUserObjectListEntry::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_14178e060(param_1,uVar2);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,param_2,param_3);
  }
  return;
}



// FUNCTION 14302b060 FUN_14302b060 body=162 status=ok
// SIG undefined FUN_14302b060(void)

longlong FUN_14302b060(void)

{
  if (DAT_146b46bb8 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"InventoryMaterialAspectData",&DAT_146b46bb8,
                  FUN_140447710,0xb8,0x10000000,0,L"Engine",FUN_143029a10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f6e0,&LAB_140447700,0);
  }
  return DAT_146b46bb8;
}



// FUNCTION 14302b110 FUN_14302b110 body=162 status=ok
// SIG undefined FUN_14302b110(void)

longlong FUN_14302b110(void)

{
  if (DAT_146b46bf8 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"InventoryNamingStrategyData",&DAT_146b46bf8,
                  FUN_140447710,0x30,0x10000001,0,L"Engine",FUN_143029b30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b46bf8;
}



// FUNCTION 14302b1c0 FUN_14302b1c0 body=162 status=ok
// SIG undefined FUN_14302b1c0(void)

longlong FUN_14302b1c0(void)

{
  if (DAT_146b46c28 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"InventoryPartData",&DAT_146b46c28,FUN_14302b8d0,0x250,
                  0x10000001,0,L"Engine",&LAB_143029b60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b46c28;
}



// FUNCTION 14302b270 FUN_14302b270 body=162 status=ok
// SIG undefined FUN_14302b270(void)

longlong FUN_14302b270(void)

{
  if (DAT_146b46c68 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"InventoryPartSetData",&DAT_146b46c68,FUN_140447710,0xa0,
                  0x10000001,0,L"Engine",&LAB_143029b80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAsyncActionLoadPrimaryAssetBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b46c68;
}



// FUNCTION 14302b320 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPlayFabProfilesAPI::GetPrivateStaticClass(void)

{
  if (DAT_146b46ce0 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"InventoryRarityData",&DAT_146b46ce0,
                  StaticRegisterNativesUPlayFabProfilesAPI,0x148,0x10000000,0,L"Engine",
                  &LAB_143029be0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b46ce0;
}



// FUNCTION 14302b3d0 FUN_14302b3d0 body=162 status=ok
// SIG undefined FUN_14302b3d0(void)

longlong FUN_14302b3d0(void)

{
  if (DAT_146b46d78 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"ItemPoolData",&DAT_146b46d78,FUN_140447710,200,
                  0x10000000,0,L"Engine",&LAB_143029ca0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_143029740,&LAB_140447700,0);
  }
  return DAT_146b46d78;
}



// FUNCTION 14302b480 FUN_14302b480 body=59 status=ok
// SIG undefined FUN_14302b480(void)

void FUN_14302b480(longlong *param_1,undefined8 param_2)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined8 local_18;
  
  (**(code **)(*param_1 + 0xf8))();
  local_20 = 0;
  local_18 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_38 = param_2;
  FUN_14302b4c0(&local_38);
  return;
}



// FUNCTION 14302b4c0 FUN_14302b4c0 body=370 status=ok
// SIG undefined FUN_14302b4c0(void)

uint FUN_14302b4c0(ulonglong *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar3 = (int)(*param_1 >> 4);
  iVar9 = (int)(param_1[2] >> 4);
  iVar1 = (int)(param_1[1] >> 4);
  uVar6 = 0x9e3779b9U - iVar3 ^ iVar3 << 8;
  uVar2 = -(uVar6 + iVar3) ^ uVar6 >> 0xd;
  uVar4 = (iVar3 - uVar6) - uVar2 ^ uVar2 >> 0xc;
  uVar7 = (uVar6 - uVar4) - uVar2 ^ uVar4 << 0x10;
  uVar6 = (uVar2 - uVar7) - uVar4 ^ uVar7 >> 5;
  uVar5 = (uVar4 - uVar7) - uVar6 ^ uVar6 >> 3;
  uVar7 = (uVar7 - uVar5) - uVar6 ^ uVar5 << 10;
  uVar4 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
  uVar2 = -(uVar4 + iVar9) ^ uVar4 >> 0xd;
  uVar10 = (iVar9 - uVar4) - uVar2 ^ uVar2 >> 0xc;
  uVar4 = (uVar4 - uVar10) - uVar2 ^ uVar10 << 0x10;
  uVar8 = (uVar2 - uVar4) - uVar10 ^ uVar4 >> 5;
  uVar11 = (uVar10 - uVar4) - uVar8 ^ uVar8 >> 3;
  uVar10 = (uVar4 - uVar11) - uVar8 ^ uVar11 << 10;
  uVar12 = 0x9e3779b9U - iVar1 ^ iVar1 << 8;
  uVar4 = -(uVar12 + iVar1) ^ uVar12 >> 0xd;
  uVar2 = (iVar1 - uVar12) - uVar4 ^ uVar4 >> 0xc;
  uVar12 = (uVar12 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar12) - uVar2 ^ uVar12 >> 5;
  uVar2 = (uVar2 - uVar12) - uVar4 ^ uVar4 >> 3;
  uVar12 = (uVar12 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar12) - uVar2 ^ (uVar12 ^ uVar10 ^ uVar7) >> 0xf ^ (uVar8 - uVar10) - uVar11 ^
         (uVar6 - uVar7) - uVar5;
}



// FUNCTION 14302b640 FUN_14302b640 body=6 status=ok
// SIG undefined FUN_14302b640(void)

undefined8 FUN_14302b640(void)

{
  return 0x2372b387;
}



// FUNCTION 14302b650 FUN_14302b650 body=6 status=ok
// SIG undefined FUN_14302b650(void)

undefined8 FUN_14302b650(void)

{
  return 0xc16ca551;
}



// FUNCTION 14302b660 FUN_14302b660 body=6 status=ok
// SIG undefined FUN_14302b660(void)

undefined8 FUN_14302b660(void)

{
  return 0xf003167;
}



// FUNCTION 14302b670 FUN_14302b670 body=6 status=ok
// SIG undefined FUN_14302b670(void)

undefined8 FUN_14302b670(void)

{
  return 0x218a9c33;
}



// FUNCTION 14302b680 FUN_14302b680 body=6 status=ok
// SIG undefined FUN_14302b680(void)

undefined8 FUN_14302b680(void)

{
  return 0x99053bac;
}



// FUNCTION 14302b690 FUN_14302b690 body=6 status=ok
// SIG undefined FUN_14302b690(void)

undefined8 FUN_14302b690(void)

{
  return 0xa386e857;
}



// FUNCTION 14302b6a0 FUN_14302b6a0 body=6 status=ok
// SIG undefined FUN_14302b6a0(void)

undefined8 FUN_14302b6a0(void)

{
  return 0xf2362ce3;
}



// FUNCTION 14302b6b0 FUN_14302b6b0 body=6 status=ok
// SIG undefined FUN_14302b6b0(void)

undefined8 FUN_14302b6b0(void)

{
  return 0xa244a05f;
}



// FUNCTION 14302b6c0 FUN_14302b6c0 body=6 status=ok
// SIG undefined FUN_14302b6c0(void)

undefined8 FUN_14302b6c0(void)

{
  return 0xef65c582;
}



// FUNCTION 14302b6d0 FUN_14302b6d0 body=6 status=ok
// SIG undefined FUN_14302b6d0(void)

undefined8 FUN_14302b6d0(void)

{
  return 0xa00ba1c;
}



// FUNCTION 14302b6e0 FUN_14302b6e0 body=6 status=ok
// SIG undefined FUN_14302b6e0(void)

undefined8 FUN_14302b6e0(void)

{
  return 0x3630a24b;
}



// FUNCTION 14302b6f0 FUN_14302b6f0 body=6 status=ok
// SIG undefined FUN_14302b6f0(void)

undefined8 FUN_14302b6f0(void)

{
  return 0xa7e7061c;
}



// FUNCTION 14302b700 FUN_14302b700 body=6 status=ok
// SIG undefined FUN_14302b700(void)

undefined8 FUN_14302b700(void)

{
  return 0x9d4594b0;
}



// FUNCTION 14302b710 FUN_14302b710 body=6 status=ok
// SIG undefined FUN_14302b710(void)

undefined8 FUN_14302b710(void)

{
  return 0x7b140ffe;
}



// FUNCTION 14302b720 FUN_14302b720 body=6 status=ok
// SIG undefined FUN_14302b720(void)

undefined8 FUN_14302b720(void)

{
  return 0x5be86928;
}



// FUNCTION 14302b730 FUN_14302b730 body=6 status=ok
// SIG undefined FUN_14302b730(void)

undefined8 FUN_14302b730(void)

{
  return 0x4a74bd08;
}



// FUNCTION 14302b740 FUN_14302b740 body=6 status=ok
// SIG undefined FUN_14302b740(void)

undefined8 FUN_14302b740(void)

{
  return 0xdb546f3e;
}



// FUNCTION 14302b750 FUN_14302b750 body=6 status=ok
// SIG undefined FUN_14302b750(void)

undefined8 FUN_14302b750(void)

{
  return 0x668df4f2;
}



// FUNCTION 14302b760 FUN_14302b760 body=6 status=ok
// SIG undefined FUN_14302b760(void)

undefined8 FUN_14302b760(void)

{
  return 0xc3b92a70;
}



// FUNCTION 14302b770 FUN_14302b770 body=6 status=ok
// SIG undefined FUN_14302b770(void)

undefined8 FUN_14302b770(void)

{
  return 0xa7909d21;
}



// FUNCTION 14302b780 FUN_14302b780 body=6 status=ok
// SIG undefined FUN_14302b780(void)

undefined8 FUN_14302b780(void)

{
  return 0x52c6c4e1;
}



// FUNCTION 14302b790 FUN_14302b790 body=68 status=ok
// SIG undefined FUN_14302b790(void)

undefined8
FUN_14302b790(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined1 *param_5)

{
  int iVar1;
  
  if (*(int *)(param_2 + 1) == *(int *)(param_3 + 1)) {
    iVar1 = _guard_xfg_dispatch_icall_nop
                      ((void *)*param_2,(void *)*param_3,(longlong)*(int *)(param_2 + 1));
    *param_5 = iVar1 == 0;
    return 1;
  }
  *param_5 = 0;
  return 1;
}



// FUNCTION 14302b800 FUN_14302b800 body=137 status=ok
// SIG undefined FUN_14302b800(void)

undefined8
FUN_14302b800(undefined4 *param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    *param_4 = 1;
    return 1;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1,4);
  }
  *param_4 = 1;
  return 1;
}



// FUNCTION 14302b8a0 StaticRegisterNativesUUserObjectListEntry body=34 status=ok
// SIG undefined StaticRegisterNativesUUserObjectListEntry(void)

void UUserObjectListEntry::StaticRegisterNativesUUserObjectListEntry(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AttachedItemPickedUp_145a4e388,1);
  return;
}



// FUNCTION 14302b8d0 FUN_14302b8d0 body=34 status=ok
// SIG undefined FUN_14302b8d0(void)

void FUN_14302b8d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14302b1c0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetMonetaryValueModifier_145a4e398,1);
  return;
}



// FUNCTION 14302b900 StaticRegisterNativesUPlayFabProfilesAPI body=34 status=ok
// SIG undefined StaticRegisterNativesUPlayFabProfilesAPI(void)

void UPlayFabProfilesAPI::StaticRegisterNativesUPlayFabProfilesAPI(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetDisplayRarityOutline_145a4e6d0,0xc);
  return;
}



// FUNCTION 14302b930 StaticRegisterNativesUAsyncTaskDownloadImage body=34 status=ok
// SIG undefined StaticRegisterNativesUAsyncTaskDownloadImage(void)

void UAsyncTaskDownloadImage::StaticRegisterNativesUAsyncTaskDownloadImage(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_EnumerateInventoryParts_145a4f708,1);
  return;
}



// FUNCTION 14302b960 FUN_14302b960 body=82 status=ok
// SIG undefined FUN_14302b960(void)

void FUN_14302b960(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b46d50 == 0) {
    uVar1 = FUN_14302b640();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46d50 = GetStaticStruct(FUN_14302c410,uVar2,L"BalancedInventoryInfo",0x70,uVar1);
  }
  return;
}



// FUNCTION 14302b9c0 FUN_14302b9c0 body=82 status=ok
// SIG undefined FUN_14302b9c0(void)

void FUN_14302b9c0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b46c30 == 0) {
    uVar1 = FUN_14302b650();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46c30 =
         GetStaticStruct(FUN_14302c440,uVar2,L"ConditionalInventoryParticleEmitter",0x18,uVar1);
  }
  return;
}



// FUNCTION 14302ba20 FUN_14302ba20 body=82 status=ok
// SIG undefined FUN_14302ba20(void)

void FUN_14302ba20(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b46c50 == 0) {
    uVar1 = FUN_14302b660();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46c50 = GetStaticStruct(FUN_14302c470,uVar2,L"InventoryGenericPartListData",0x28,uVar1);
  }
  return;
}



// FUNCTION 14302ba80 FUN_14302ba80 body=82 status=ok
// SIG undefined FUN_14302ba80(void)

void FUN_14302ba80(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b46b30 == 0) {
    uVar1 = FUN_14302b670();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46b30 = GetStaticStruct(FUN_14302c4a0,uVar2,L"InventoryListEntryHandle",4,uVar1);
  }
  return;
}



// FUNCTION 14302bae0 FUN_14302bae0 body=82 status=ok
// SIG undefined FUN_14302bae0(void)

void FUN_14302bae0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b46ce8 == 0) {
    uVar1 = FUN_14302b680();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46ce8 = GetStaticStruct(FUN_14302c4d0,uVar2,L"InventoryReplicationData",0x10,uVar1);
  }
  return;
}



// FUNCTION 14302bb40 FUN_14302bb40 body=82 status=ok
// SIG undefined FUN_14302bb40(void)

void FUN_14302bb40(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b46cf8 == 0) {
    uVar1 = FUN_14302b690();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46cf8 = GetStaticStruct(FUN_14302c500,uVar2,L"InventorySaveGameData",0x80,uVar1);
  }
  return;
}



// FUNCTION 14302bba0 FUN_14302bba0 body=82 status=ok
// SIG undefined FUN_14302bba0(void)

void FUN_14302bba0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b46d10 == 0) {
    uVar1 = FUN_14302b6a0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46d10 = GetStaticStruct(FUN_14302c530,uVar2,L"InventorySerialNumber",0x20,uVar1);
  }
  return;
}



// FUNCTION 14302bc00 FUN_14302bc00 body=82 status=ok
// SIG undefined FUN_14302bc00(void)

void FUN_14302bc00(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b46d90 == 0) {
    uVar1 = FUN_14302b6b0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46d90 = GetStaticStruct(FUN_14302c560,uVar2,L"ItemPoolCollection",0x20,uVar1);
  }
  return;
}



// FUNCTION 14302bc60 FUN_14302bc60 body=82 status=ok
// SIG undefined FUN_14302bc60(void)

void FUN_14302bc60(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b46da0 == 0) {
    uVar1 = FUN_14302b6c0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46da0 = GetStaticStruct(FUN_14302c590,uVar2,L"ItemPoolInfo",0x88,uVar1);
  }
  return;
}



// FUNCTION 14302bcc0 FUN_14302bcc0 body=82 status=ok
// SIG undefined FUN_14302bcc0(void)

void FUN_14302bcc0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b46dc0 == 0) {
    uVar1 = FUN_14302b6d0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46dc0 =
         GetStaticStruct(FUN_14302c5c0,uVar2,L"ItemPoolPartSelectionPartTypeOverrideData",0x18,uVar1
                        );
  }
  return;
}



// FUNCTION 14302bd20 FUN_14302bd20 body=82 status=ok
// SIG undefined FUN_14302bd20(void)

void FUN_14302bd20(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b46df8 == 0) {
    uVar1 = FUN_14302b6e0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46df8 = GetStaticStruct(FUN_14302c5f0,uVar2,L"LootAttachmentInfo",0x58,uVar1);
  }
  return;
}



// FUNCTION 14302bd80 FUN_14302bd80 body=82 status=ok
// SIG undefined FUN_14302bd80(void)

void FUN_14302bd80(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b46de8 == 0) {
    uVar1 = FUN_14302b6f0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46de8 = GetStaticStruct(FUN_14302c620,uVar2,L"LootConfigurationInfo",0x58,uVar1);
  }
  return;
}



// FUNCTION 14302bde0 FUN_14302bde0 body=82 status=ok
// SIG undefined FUN_14302bde0(void)

void FUN_14302bde0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b46b50 == 0) {
    uVar1 = FUN_14302b700();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46b50 = GetStaticStruct(FUN_14302c650,uVar2,L"MaterialFontParameterData",0x18,uVar1);
  }
  return;
}



// FUNCTION 14302be40 FUN_14302be40 body=82 status=ok
// SIG undefined FUN_14302be40(void)

void FUN_14302be40(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b46ba0 == 0) {
    uVar1 = FUN_14302b710();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46ba0 = GetStaticStruct(FUN_143028a40,uVar2,L"MaterialParameterData",8,uVar1);
  }
  return;
}



// FUNCTION 14302bea0 FUN_14302bea0 body=82 status=ok
// SIG undefined FUN_14302bea0(void)

void FUN_14302bea0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b46b80 == 0) {
    uVar1 = FUN_14302b720();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46b80 = GetStaticStruct(FUN_14302c680,uVar2,L"MaterialScalarParameterData",0x10,uVar1);
  }
  return;
}



// FUNCTION 14302bf00 FUN_14302bf00 body=82 status=ok
// SIG undefined FUN_14302bf00(void)

void FUN_14302bf00(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b46b60 == 0) {
    uVar1 = FUN_14302b730();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46b60 =
         GetStaticStruct(FUN_14302c6b0,uVar2,L"MaterialTextureAssetParameterData",0x30,uVar1);
  }
  return;
}



// FUNCTION 14302bf60 FUN_14302bf60 body=82 status=ok
// SIG undefined FUN_14302bf60(void)

void FUN_14302bf60(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b46b70 == 0) {
    uVar1 = FUN_14302b740();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46b70 = GetStaticStruct(FUN_14302c6e0,uVar2,L"MaterialTextureParameterData",0x10,uVar1);
  }
  return;
}



// FUNCTION 14302bfc0 FUN_14302bfc0 body=82 status=ok
// SIG undefined FUN_14302bfc0(void)

void FUN_14302bfc0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b46b90 == 0) {
    uVar1 = FUN_14302b750();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46b90 = GetStaticStruct(FUN_14302c710,uVar2,L"MaterialVectorParameterData",0x18,uVar1);
  }
  return;
}



// FUNCTION 14302c020 FUN_14302c020 body=82 status=ok
// SIG undefined FUN_14302c020(void)

void FUN_14302c020(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b46e08 == 0) {
    uVar1 = FUN_14302b760();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46e08 = GetStaticStruct(FUN_14302c740,uVar2,L"PoolSocketAttachmentInfo",0x48,uVar1);
  }
  return;
}



// FUNCTION 14302c080 FUN_14302c080 body=82 status=ok
// SIG undefined FUN_14302c080(void)

void FUN_14302c080(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b46b40 == 0) {
    uVar1 = FUN_14302b770();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46b40 = GetStaticStruct(FUN_14302c770,uVar2,L"RarityMaterialData",0x10,uVar1);
  }
  return;
}



// FUNCTION 14302c0e0 FUN_14302c0e0 body=82 status=ok
// SIG undefined FUN_14302c0e0(void)

void FUN_14302c0e0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b46d40 == 0) {
    uVar1 = FUN_14302b780();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46d40 = GetStaticStruct(FUN_14302c7a0,uVar2,L"SelectedInventoryInfo",0x60,uVar1);
  }
  return;
}



// FUNCTION 14302c140 FUN_14302c140 body=47 status=ok
// SIG undefined FUN_14302c140(void)

longlong FUN_14302c140(void)

{
  if (DAT_146b46bb0 == 0) {
    FUN_141786440(&DAT_146b46bb0,&PTR_LAB_145a4a3b0);
  }
  return DAT_146b46bb0;
}



// FUNCTION 14302c170 FUN_14302c170 body=47 status=ok
// SIG undefined FUN_14302c170(void)

longlong FUN_14302c170(void)

{
  if (DAT_146b46bc0 == 0) {
    FUN_141786440(&DAT_146b46bc0,&PTR_FUN_145a49e40);
  }
  return DAT_146b46bc0;
}



// FUNCTION 14302c1a0 FUN_14302c1a0 body=47 status=ok
// SIG undefined FUN_14302c1a0(void)

longlong FUN_14302c1a0(void)

{
  if (DAT_146b46bd0 == 0) {
    FUN_141786440(&DAT_146b46bd0,&PTR_GetPrivateStaticClass_145a4b2e0);
  }
  return DAT_146b46bd0;
}



// FUNCTION 14302c1d0 FUN_14302c1d0 body=47 status=ok
// SIG undefined FUN_14302c1d0(void)

longlong FUN_14302c1d0(void)

{
  if (DAT_146b46be0 == 0) {
    FUN_141786440(&DAT_146b46be0,&PTR_FUN_145a4b6a0);
  }
  return DAT_146b46be0;
}



// FUNCTION 14302c200 FUN_14302c200 body=47 status=ok
// SIG undefined FUN_14302c200(void)

longlong FUN_14302c200(void)

{
  if (DAT_146b46bf0 == 0) {
    FUN_141786440(&DAT_146b46bf0,&PTR_thunk_FUN_14302b110_145a4b870);
  }
  return DAT_146b46bf0;
}



// FUNCTION 14302c230 FUN_14302c230 body=47 status=ok
// SIG undefined FUN_14302c230(void)

longlong FUN_14302c230(void)

{
  if (DAT_146b46c60 == 0) {
    FUN_141786440(&DAT_146b46c60,&PTR_thunk_FUN_14302b270_145a4c2d0);
  }
  return DAT_146b46c60;
}



// FUNCTION 14302c260 FUN_14302c260 body=47 status=ok
// SIG undefined FUN_14302c260(void)

longlong FUN_14302c260(void)

{
  if (DAT_146b46c40 == 0) {
    FUN_141786440(&DAT_146b46c40,&PTR_FUN_145a4b190);
  }
  return DAT_146b46c40;
}



// FUNCTION 14302c290 FUN_14302c290 body=47 status=ok
// SIG undefined FUN_14302c290(void)

longlong FUN_14302c290(void)

{
  if (DAT_146b46d20 == 0) {
    FUN_141786440(&DAT_146b46d20,&PTR_FUN_145a4d4a0);
  }
  return DAT_146b46d20;
}



// FUNCTION 14302c2c0 FUN_14302c2c0 body=47 status=ok
// SIG undefined FUN_14302c2c0(void)

longlong FUN_14302c2c0(void)

{
  if (DAT_146b46d30 == 0) {
    FUN_141786440(&DAT_146b46d30,&PTR_GetPrivateStaticClass_145a4aeb0);
  }
  return DAT_146b46d30;
}



// FUNCTION 14302c2f0 FUN_14302c2f0 body=47 status=ok
// SIG undefined FUN_14302c2f0(void)

longlong FUN_14302c2f0(void)

{
  if (DAT_146b46d70 == 0) {
    FUN_141786440(&DAT_146b46d70,&PTR_thunk_FUN_14302b3d0_145a49b40);
  }
  return DAT_146b46d70;
}



// FUNCTION 14302c320 FUN_14302c320 body=47 status=ok
// SIG undefined FUN_14302c320(void)

longlong FUN_14302c320(void)

{
  if (DAT_146b46d60 == 0) {
    FUN_141786440(&DAT_146b46d60,&PTR_FUN_145a498f0);
  }
  return DAT_146b46d60;
}



// FUNCTION 14302c350 FUN_14302c350 body=47 status=ok
// SIG undefined FUN_14302c350(void)

longlong FUN_14302c350(void)

{
  if (DAT_146b46d80 == 0) {
    FUN_141786440(&DAT_146b46d80,&PTR_FUN_145a4a030);
  }
  return DAT_146b46d80;
}



// FUNCTION 14302c380 FUN_14302c380 body=47 status=ok
// SIG undefined FUN_14302c380(void)

longlong FUN_14302c380(void)

{
  if (DAT_146b46e18 == 0) {
    FUN_141786440(&DAT_146b46e18,&PTR_FUN_145a49340);
  }
  return DAT_146b46e18;
}



// FUNCTION 14302c3b0 FUN_14302c3b0 body=47 status=ok
// SIG undefined FUN_14302c3b0(void)

longlong FUN_14302c3b0(void)

{
  if (DAT_146b46c70 == 0) {
    FUN_1417866a0(&DAT_146b46c70,&PTR_Z_Construct_UPackage__Script_Engine_14678a0c0);
  }
  return DAT_146b46c70;
}



// FUNCTION 14302c3e0 FUN_14302c3e0 body=47 status=ok
// SIG undefined FUN_14302c3e0(void)

longlong FUN_14302c3e0(void)

{
  if (DAT_146b46d08 == 0) {
    FUN_1417866a0(&DAT_146b46d08,&PTR_Z_Construct_UPackage__Script_Engine_14678a110);
  }
  return DAT_146b46d08;
}



// FUNCTION 14302c410 FUN_14302c410 body=47 status=ok
// SIG undefined FUN_14302c410(void)

longlong FUN_14302c410(void)

{
  if (DAT_146b46d58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b46d58,&PTR_Z_Construct_UPackage__Script_Engine_146788ff0);
  }
  return DAT_146b46d58;
}



// FUNCTION 14302c440 FUN_14302c440 body=47 status=ok
// SIG undefined FUN_14302c440(void)

longlong FUN_14302c440(void)

{
  if (DAT_146b46c38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b46c38,&PTR_Z_Construct_UPackage__Script_Engine_146787ac0);
  }
  return DAT_146b46c38;
}



// FUNCTION 14302c470 FUN_14302c470 body=47 status=ok
// SIG undefined FUN_14302c470(void)

longlong FUN_14302c470(void)

{
  if (DAT_146b46c58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b46c58,&PTR_Z_Construct_UPackage__Script_Engine_146787ce0);
  }
  return DAT_146b46c58;
}



// FUNCTION 14302c4a0 FUN_14302c4a0 body=47 status=ok
// SIG undefined FUN_14302c4a0(void)

longlong FUN_14302c4a0(void)

{
  if (DAT_146b46b38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b46b38,&PTR_Z_Construct_UPackage__Script_Engine_146786610);
  }
  return DAT_146b46b38;
}



// FUNCTION 14302c4d0 FUN_14302c4d0 body=47 status=ok
// SIG undefined FUN_14302c4d0(void)

longlong FUN_14302c4d0(void)

{
  if (DAT_146b46cf0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b46cf0,&PTR_Z_Construct_UPackage__Script_Engine_146788860);
  }
  return DAT_146b46cf0;
}



// FUNCTION 14302c500 FUN_14302c500 body=47 status=ok
// SIG undefined FUN_14302c500(void)

longlong FUN_14302c500(void)

{
  if (DAT_146b46d00 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b46d00,&PTR_Z_Construct_UPackage__Script_Engine_146788970);
  }
  return DAT_146b46d00;
}



// FUNCTION 14302c530 FUN_14302c530 body=47 status=ok
// SIG undefined FUN_14302c530(void)

longlong FUN_14302c530(void)

{
  if (DAT_146b46d18 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b46d18,&PTR_Z_Construct_UPackage__Script_Engine_146788af0);
  }
  return DAT_146b46d18;
}



// FUNCTION 14302c560 FUN_14302c560 body=47 status=ok
// SIG undefined FUN_14302c560(void)

longlong FUN_14302c560(void)

{
  if (DAT_146b46d98 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b46d98,&PTR_Z_Construct_UPackage__Script_Engine_1467895a0);
  }
  return DAT_146b46d98;
}



// FUNCTION 14302c590 FUN_14302c590 body=47 status=ok
// SIG undefined FUN_14302c590(void)

longlong FUN_14302c590(void)

{
  if (DAT_146b46da8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b46da8,&PTR_Z_Construct_UPackage__Script_Engine_146789720);
  }
  return DAT_146b46da8;
}



// FUNCTION 14302c5c0 FUN_14302c5c0 body=47 status=ok
// SIG undefined FUN_14302c5c0(void)

longlong FUN_14302c5c0(void)

{
  if (DAT_146b46dc8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b46dc8,&PTR_Z_Construct_UPackage__Script_Engine_1467898c0);
  }
  return DAT_146b46dc8;
}



// FUNCTION 14302c5f0 FUN_14302c5f0 body=47 status=ok
// SIG undefined FUN_14302c5f0(void)

longlong FUN_14302c5f0(void)

{
  if (DAT_146b46e00 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b46e00,&PTR_Z_Construct_UPackage__Script_Engine_146789df0);
  }
  return DAT_146b46e00;
}



// FUNCTION 14302c620 FUN_14302c620 body=47 status=ok
// SIG undefined FUN_14302c620(void)

longlong FUN_14302c620(void)

{
  if (DAT_146b46df0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b46df0,&PTR_Z_Construct_UPackage__Script_Engine_146789c70);
  }
  return DAT_146b46df0;
}



// FUNCTION 14302c650 FUN_14302c650 body=47 status=ok
// SIG undefined FUN_14302c650(void)

longlong FUN_14302c650(void)

{
  if (DAT_146b46b58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b46b58,&PTR_Z_Construct_UPackage__Script_Engine_1467867d0);
  }
  return DAT_146b46b58;
}



// FUNCTION 14302c680 FUN_14302c680 body=47 status=ok
// SIG undefined FUN_14302c680(void)

longlong FUN_14302c680(void)

{
  if (DAT_146b46b88 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b46b88,&PTR_Z_Construct_UPackage__Script_Engine_1467869d0);
  }
  return DAT_146b46b88;
}



// FUNCTION 14302c6b0 FUN_14302c6b0 body=47 status=ok
// SIG undefined FUN_14302c6b0(void)

longlong FUN_14302c6b0(void)

{
  if (DAT_146b46b68 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b46b68,&PTR_Z_Construct_UPackage__Script_Engine_146786890);
  }
  return DAT_146b46b68;
}



// FUNCTION 14302c6e0 FUN_14302c6e0 body=47 status=ok
// SIG undefined FUN_14302c6e0(void)

longlong FUN_14302c6e0(void)

{
  if (DAT_146b46b78 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b46b78,&PTR_Z_Construct_UPackage__Script_Engine_146786950);
  }
  return DAT_146b46b78;
}



// FUNCTION 14302c710 FUN_14302c710 body=47 status=ok
// SIG undefined FUN_14302c710(void)

longlong FUN_14302c710(void)

{
  if (DAT_146b46b98 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b46b98,&PTR_Z_Construct_UPackage__Script_Engine_146786a90);
  }
  return DAT_146b46b98;
}



// FUNCTION 14302c740 FUN_14302c740 body=47 status=ok
// SIG undefined FUN_14302c740(void)

longlong FUN_14302c740(void)

{
  if (DAT_146b46e10 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b46e10,&PTR_Z_Construct_UPackage__Script_Engine_146789f00);
  }
  return DAT_146b46e10;
}



// FUNCTION 14302c770 FUN_14302c770 body=47 status=ok
// SIG undefined FUN_14302c770(void)

longlong FUN_14302c770(void)

{
  if (DAT_146b46b48 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b46b48,&PTR_Z_Construct_UPackage__Script_Engine_146786710);
  }
  return DAT_146b46b48;
}



// FUNCTION 14302c7a0 FUN_14302c7a0 body=47 status=ok
// SIG undefined FUN_14302c7a0(void)

longlong FUN_14302c7a0(void)

{
  if (DAT_146b46d48 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b46d48,&PTR_Z_Construct_UPackage__Script_Engine_146788ea0);
  }
  return DAT_146b46d48;
}



// FUNCTION 14302c7d0 execUseItem body=191 status=ok
// SIG undefined execUseItem(void)

void IUseItemInterface::execUseItem(undefined8 *param_1,longlong param_2)

{
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
  (**(code **)*param_1)(param_1,local_res10,local_res8);
  return;
}



// FUNCTION 14302c9c0 FUN_14302c9c0 body=45 status=ok
// SIG undefined FUN_14302c9c0(void)

void FUN_14302c9c0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142ffe020();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14302ca50 FUN_14302ca50 body=158 status=ok
// SIG undefined FUN_14302ca50(void)

void FUN_14302ca50(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
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
  if ((local_res10[0] == 0) || (lVar1 = *(longlong *)(param_1 + 0x98), lVar1 == 0)) {
    lVar1 = *(longlong *)(param_1 + 0x90);
  }
  *param_3 = lVar1;
  return;
}



// FUNCTION 14302cb40 FUN_14302cb40 body=47 status=ok
// SIG undefined FUN_14302cb40(void)

longlong FUN_14302cb40(void)

{
  if (DAT_146b46f40 == 0) {
    FUN_141786440(&DAT_146b46f40,&PTR_thunk_FUN_14302d370_145a503e0);
  }
  return DAT_146b46f40;
}



// FUNCTION 14302cb70 FUN_14302cb70 body=47 status=ok
// SIG undefined FUN_14302cb70(void)

longlong FUN_14302cb70(void)

{
  if (DAT_146b46f10 == 0) {
    FUN_141786a30(&DAT_146b46f10,&PTR_FUN_14678a2a0);
  }
  return DAT_146b46f10;
}



// FUNCTION 14302cba0 FUN_14302cba0 body=47 status=ok
// SIG undefined FUN_14302cba0(void)

longlong FUN_14302cba0(void)

{
  if (DAT_146b46f18 == 0) {
    FUN_141786a30(&DAT_146b46f18,&PTR_FUN_14678a390);
  }
  return DAT_146b46f18;
}



// FUNCTION 14302cbd0 FUN_14302cbd0 body=47 status=ok
// SIG undefined FUN_14302cbd0(void)

longlong FUN_14302cbd0(void)

{
  if (DAT_146b46f20 == 0) {
    FUN_141786a30(&DAT_146b46f20,&PTR_FUN_14678a410);
  }
  return DAT_146b46f20;
}



// FUNCTION 14302cc00 FUN_14302cc00 body=47 status=ok
// SIG undefined FUN_14302cc00(void)

longlong FUN_14302cc00(void)

{
  if (DAT_146b46f28 == 0) {
    FUN_141786a30(&DAT_146b46f28,&PTR_FUN_14678a510);
  }
  return DAT_146b46f28;
}



// FUNCTION 14302cc30 FUN_14302cc30 body=47 status=ok
// SIG undefined FUN_14302cc30(void)

longlong FUN_14302cc30(void)

{
  if (DAT_146b46f30 == 0) {
    FUN_141786a30(&DAT_146b46f30,&PTR_FUN_14678a550);
  }
  return DAT_146b46f30;
}



// FUNCTION 14302cc60 FUN_14302cc60 body=47 status=ok
// SIG undefined FUN_14302cc60(void)

longlong FUN_14302cc60(void)

{
  if (DAT_146b46f38 == 0) {
    FUN_141786a30(&DAT_146b46f38,&PTR_FUN_14678a590);
  }
  return DAT_146b46f38;
}



// FUNCTION 14302cca0 FUN_14302cca0 body=162 status=ok
// SIG undefined FUN_14302cca0(void)

longlong FUN_14302cca0(void)

{
  if (DAT_146b46fb8 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"PickupFlyToAbleInterface",&DAT_146b46fb8,FUN_140447710,
                  0x28,0x10004001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b46fb8;
}



// FUNCTION 14302cd50 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGRichTextBlock::GetPrivateStaticClass(void)

{
  if (DAT_146b46fa0 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"PickupableMeshActor",&DAT_146b46fa0,FUN_140447710,0x488,
                  0x10000000,0,L"Engine",&LAB_14302d180,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146b46fa0;
}



// FUNCTION 14302ce20 FUN_14302ce20 body=162 status=ok
// SIG undefined FUN_14302ce20(void)

longlong FUN_14302ce20(void)

{
  if (DAT_146b46fc8 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"PickupFlyToData",&DAT_146b46fc8,FUN_140447710,0x90,
                  0x10000000,0,L"Engine",&LAB_14302d2a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b46fc8;
}



// FUNCTION 14302cee0 FUN_14302cee0 body=162 status=ok
// SIG undefined FUN_14302cee0(void)

longlong FUN_14302cee0(void)

{
  if (DAT_146b46fd8 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"PickupFlyToTargetInterface",&DAT_146b46fd8,FUN_140447710
                  ,0x28,0x10004001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b46fd8;
}



// FUNCTION 14302cf90 FUN_14302cf90 body=162 status=ok
// SIG undefined FUN_14302cf90(void)

longlong FUN_14302cf90(void)

{
  if (DAT_146b46f60 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"LootFunctionLibrary",&DAT_146b46f60,FUN_14302d4e0,0x28,
                  0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146b46f60;
}



// FUNCTION 14302d050 FUN_14302d050 body=47 status=ok
// SIG undefined FUN_14302d050(void)

longlong FUN_14302d050(void)

{
  if (DAT_146b46f58 == 0) {
    FUN_141786440(&DAT_146b46f58,&PTR_FUN_145a51180);
  }
  return DAT_146b46f58;
}



// FUNCTION 14302d080 FUN_14302d080 body=47 status=ok
// SIG undefined FUN_14302d080(void)

longlong FUN_14302d080(void)

{
  if (DAT_146b46f50 == 0) {
    FUN_141786a30(&DAT_146b46f50,&PTR_FUN_14678ac90);
  }
  return DAT_146b46f50;
}



// FUNCTION 14302d0c0 FUN_14302d0c0 body=162 status=ok
// SIG undefined FUN_14302d0c0(void)

longlong FUN_14302d0c0(void)

{
  if (DAT_146b46f70 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"LootListData",&DAT_146b46f70,FUN_140447710,0x40,
                  0x10000000,0,L"Engine",FUN_14302d1a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b46f70;
}



// FUNCTION 14302d1a0 FUN_14302d1a0 body=51 status=ok
// SIG undefined FUN_14302d1a0(void)

void FUN_14302d1a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_145a51500;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return;
}



// FUNCTION 14302d1e0 FUN_14302d1e0 body=152 status=ok
// SIG undefined FUN_14302d1e0(void)

void FUN_14302d1e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142326e40(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1442a9ca8;
    puVar1[5] = &PTR_LAB_1442aa0c0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
    *(undefined4 *)(puVar1 + 0x36) = 0x3f800000;
    puVar1[0x37] = 0;
    puVar1[0x38] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x3e] = 0;
    puVar1[0x3f] = 0;
  }
  return;
}



// FUNCTION 14302d2b0 FUN_14302d2b0 body=64 status=ok
// SIG undefined FUN_14302d2b0(void)

longlong FUN_14302d2b0(longlong param_1,ulonglong param_2)

{
  FUN_140b173e0(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14302d2f0 FUN_14302d2f0 body=55 status=ok
// SIG undefined FUN_14302d2f0(void)

void FUN_14302d2f0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b46e28 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46e28 = GetStaticEnum(FUN_14302d720,uVar1,L"EPickupFlyToAlignmentType");
  }
  return;
}



// FUNCTION 14302d330 FUN_14302d330 body=55 status=ok
// SIG undefined FUN_14302d330(void)

void FUN_14302d330(void)

{
  undefined8 uVar1;
  
  if (DAT_146b46e30 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46e30 = GetStaticEnum(FUN_14302d750,uVar1,L"EPlayerDroppability");
  }
  return;
}



// FUNCTION 14302d370 FUN_14302d370 body=162 status=ok
// SIG undefined FUN_14302d370(void)

longlong FUN_14302d370(void)

{
  if (DAT_146b46f48 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"LootableComponent",&DAT_146b46f48,FUN_14302d510,0x218,
                  0x10000000,0,L"Engine",FUN_14302d1e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b46f48;
}



// FUNCTION 14302d420 FUN_14302d420 body=162 status=ok
// SIG undefined FUN_14302d420(void)

longlong FUN_14302d420(void)

{
  if (DAT_146b46f90 == 0) {
    FUN_14171ccd0(L"/Script/GbxInventory",L"ManufacturerData",&DAT_146b46f90,FUN_140447710,0x110,
                  0x10000000,0,L"Engine",&LAB_14302d280,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b46f90;
}



// FUNCTION 14302d4d0 FUN_14302d4d0 body=6 status=ok
// SIG undefined FUN_14302d4d0(void)

undefined8 FUN_14302d4d0(void)

{
  return 0xc0dc74c4;
}



// FUNCTION 14302d4e0 FUN_14302d4e0 body=34 status=ok
// SIG undefined FUN_14302d4e0(void)

void FUN_14302d4e0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14302cf90();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SpawnItemsRaw_145a514f0,1);
  return;
}



// FUNCTION 14302d510 FUN_14302d510 body=34 status=ok
// SIG undefined FUN_14302d510(void)

void FUN_14302d510(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14302d370();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ActivateAttachedLoot_145a51490,6);
  return;
}



// FUNCTION 14302d540 FUN_14302d540 body=82 status=ok
// SIG undefined FUN_14302d540(void)

void FUN_14302d540(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b46f78 == 0) {
    uVar1 = FUN_14302d4d0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b46f78 = GetStaticStruct(FUN_14302d780,uVar2,L"ManufacturerGradeData",0x10,uVar1);
  }
  return;
}



// FUNCTION 14302d5a0 FUN_14302d5a0 body=47 status=ok
// SIG undefined FUN_14302d5a0(void)

longlong FUN_14302d5a0(void)

{
  if (DAT_146b46f98 == 0) {
    FUN_141786440(&DAT_146b46f98,&PTR_GetPrivateStaticClass_145a50790);
  }
  return DAT_146b46f98;
}



// FUNCTION 14302d5d0 FUN_14302d5d0 body=47 status=ok
// SIG undefined FUN_14302d5d0(void)

longlong FUN_14302d5d0(void)

{
  if (DAT_146b46f68 == 0) {
    FUN_141786440(&DAT_146b46f68,&PTR_FUN_145a512d0);
  }
  return DAT_146b46f68;
}



// FUNCTION 14302d600 FUN_14302d600 body=47 status=ok
// SIG undefined FUN_14302d600(void)

longlong FUN_14302d600(void)

{
  if (DAT_146b46f88 == 0) {
    FUN_141786440(&DAT_146b46f88,&PTR_LAB_145a4fe10);
  }
  return DAT_146b46f88;
}



// FUNCTION 14302d630 FUN_14302d630 body=47 status=ok
// SIG undefined FUN_14302d630(void)

longlong FUN_14302d630(void)

{
  if (DAT_146b46fb0 == 0) {
    FUN_141786440(&DAT_146b46fb0,&PTR_FUN_145a509f0);
  }
  return DAT_146b46fb0;
}



// FUNCTION 14302d660 FUN_14302d660 body=47 status=ok
// SIG undefined FUN_14302d660(void)

longlong FUN_14302d660(void)

{
  if (DAT_146b46fc0 == 0) {
    FUN_141786440(&DAT_146b46fc0,&PTR_FUN_145a50bc0);
  }
  return DAT_146b46fc0;
}



// FUNCTION 14302d690 FUN_14302d690 body=47 status=ok
// SIG undefined FUN_14302d690(void)

longlong FUN_14302d690(void)

{
  if (DAT_146b46fd0 == 0) {
    FUN_141786440(&DAT_146b46fd0,&PTR_FUN_145a50e10);
  }
  return DAT_146b46fd0;
}



// FUNCTION 14302d6c0 FUN_14302d6c0 body=47 status=ok
// SIG undefined FUN_14302d6c0(void)

longlong FUN_14302d6c0(void)

{
  if (DAT_146b46f08 == 0) {
    FUN_141786a30(&DAT_146b46f08,&PTR_Z_Construct_UPackage__Script_Engine_14678a260);
  }
  return DAT_146b46f08;
}



// FUNCTION 14302d6f0 FUN_14302d6f0 body=47 status=ok
// SIG undefined FUN_14302d6f0(void)

longlong FUN_14302d6f0(void)

{
  if (DAT_146b46f00 == 0) {
    FUN_141786a30(&DAT_146b46f00,&PTR_Z_Construct_UPackage__Script_Engine_14678a1e0);
  }
  return DAT_146b46f00;
}



// FUNCTION 14302d720 FUN_14302d720 body=47 status=ok
// SIG undefined FUN_14302d720(void)

longlong FUN_14302d720(void)

{
  if (DAT_146b46fa8 == 0) {
    FUN_1417866a0(&DAT_146b46fa8,&PTR_Z_Construct_UPackage__Script_Engine_14678b550);
  }
  return DAT_146b46fa8;
}



// FUNCTION 14302d750 FUN_14302d750 body=47 status=ok
// SIG undefined FUN_14302d750(void)

longlong FUN_14302d750(void)

{
  if (DAT_146b46fe0 == 0) {
    FUN_1417866a0(&DAT_146b46fe0,&PTR_Z_Construct_UPackage__Script_Engine_14678b5a0);
  }
  return DAT_146b46fe0;
}



// FUNCTION 14302d780 FUN_14302d780 body=47 status=ok
// SIG undefined FUN_14302d780(void)

longlong FUN_14302d780(void)

{
  if (DAT_146b46f80 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b46f80,&PTR_Z_Construct_UPackage__Script_Engine_14678add0);
  }
  return DAT_146b46f80;
}



// FUNCTION 14302d7b0 FUN_14302d7b0 body=189 status=ok
// SIG undefined FUN_14302d7b0(void)

void FUN_14302d7b0(longlong param_1,longlong param_2,void **param_3)

{
  void *_Src;
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  longlong lVar4;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  pvVar2 = (void *)0x0;
  local_18 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = *(int *)(param_1 + 0x1f8);
  lVar4 = (longlong)local_10;
  _Src = *(void **)(param_1 + 0x1f0);
  if (local_10 == 0) {
    uVar3 = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_18,local_10,0);
    pvVar2 = local_18;
    _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar4 << 3);
    uVar3 = local_c;
  }
  iVar1 = local_10;
  if (param_3 == &local_18) {
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
  }
  else {
    if (*param_3 != (void *)0x0) {
      FMemory::Free();
    }
    *param_3 = pvVar2;
    *(int *)(param_3 + 1) = iVar1;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar3;
  }
  return;
}



// FUNCTION 14302d870 FUN_14302d870 body=128 status=ok
// SIG undefined FUN_14302d870(void)

void FUN_14302d870(undefined8 param_1,longlong param_2)

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
  FUN_143002cf0(param_1,local_res10);
  return;
}


