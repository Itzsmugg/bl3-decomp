// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142f2ec70 FUN_142f2ec70 body=44 status=ok
// SIG undefined FUN_142f2ec70(void)

void FUN_142f2ec70(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x20))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f2eca0 FUN_142f2eca0 body=44 status=ok
// SIG undefined FUN_142f2eca0(void)

void FUN_142f2eca0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x10))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f2ecd0 execGetListItemObject body=45 status=ok
// SIG undefined execGetListItemObject(void)

void IUserObjectListEntry::execGetListItemObject
               (longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x48))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f2ed00 FUN_142f2ed00 body=43 status=ok
// SIG undefined FUN_142f2ed00(void)

void FUN_142f2ed00(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142eedf40();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f2ed30 FUN_142f2ed30 body=86 status=ok
// SIG undefined FUN_142f2ed30(void)

void FUN_142f2ed30(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if ((0 < *(int *)(param_1 + 0x48)) &&
     (plVar1 = *(longlong **)
                (*(longlong *)(param_1 + 0x40) + -8 + (longlong)*(int *)(param_1 + 0x48) * 8),
     plVar1 != (longlong *)0x0)) {
    uVar2 = (**(code **)(*plVar1 + 0x278))();
    *param_3 = uVar2;
    return;
  }
  *param_3 = 0;
  return;
}



// FUNCTION 142f2ed90 FUN_142f2ed90 body=277 status=ok
// SIG undefined FUN_142f2ed90(void)

void FUN_142f2ed90(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x488))(param_1,puVar6);
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



// FUNCTION 142f2eeb0 FUN_142f2eeb0 body=358 status=ok
// SIG undefined FUN_142f2eeb0(void)

void FUN_142f2eeb0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res10 [8];
  undefined4 local_res20 [2];
  undefined8 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_38 = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
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
  local_20 = local_38;
  local_18 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
    UNLOCK();
  }
  FUN_142ef0e30(param_1,&local_20,local_res10[0],local_res20[0]);
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



// FUNCTION 142f2f040 FUN_142f2f040 body=233 status=ok
// SIG undefined FUN_142f2f040(void)

void FUN_142f2f040(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res10[0] = 0;
  puVar1 = &local_18;
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
  FUN_142ef2e00(param_1,puVar1,local_res10[0]);
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_18);
  return;
}



// FUNCTION 142f2f130 execUnregisterAttacker body=129 status=ok
// SIG undefined execUnregisterAttacker(void)

void IFGAggroTargetInterface::execUnregisterAttacker(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x28))(param_1,local_res8);
  return;
}



// FUNCTION 142f2f1c0 FUN_142f2f1c0 body=43 status=ok
// SIG undefined FUN_142f2f1c0(void)

void FUN_142f2f1c0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142ef5580();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f2f1f0 FUN_142f2f1f0 body=47 status=ok
// SIG undefined FUN_142f2f1f0(void)

void FUN_142f2f1f0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x90))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f2f220 FUN_142f2f220 body=47 status=ok
// SIG undefined FUN_142f2f220(void)

void FUN_142f2f220(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x80))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f2f250 FUN_142f2f250 body=44 status=ok
// SIG undefined FUN_142f2f250(void)

void FUN_142f2f250(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x60))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f2f280 FUN_142f2f280 body=44 status=ok
// SIG undefined FUN_142f2f280(void)

void FUN_142f2f280(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x68))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f2f2b0 FUN_142f2f2b0 body=44 status=ok
// SIG undefined FUN_142f2f2b0(void)

void FUN_142f2f2b0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x70))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f2f2e0 FUN_142f2f2e0 body=44 status=ok
// SIG undefined FUN_142f2f2e0(void)

void FUN_142f2f2e0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x58))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f2f330 FUN_142f2f330 body=129 status=ok
// SIG undefined FUN_142f2f330(void)

void FUN_142f2f330(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x78))(param_1,local_res8);
  return;
}



// FUNCTION 142f2f3c0 FUN_142f2f3c0 body=123 status=ok
// SIG undefined FUN_142f2f3c0(void)

void FUN_142f2f3c0(undefined8 param_1,longlong param_2)

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
  FUN_142efdf10(param_1,local_res10[0]);
  return;
}



// FUNCTION 142f2f440 execOnComboChanged body=287 status=ok
// SIG undefined execOnComboChanged(void)

void UUGMenuItemContainer::execOnComboChanged(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 local_res10 [8];
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
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
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
  FUN_142efec90(param_1,&local_18,local_res10[0]);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f2f580 FUN_142f2f580 body=128 status=ok
// SIG undefined FUN_142f2f580(void)

void FUN_142f2f580(undefined8 param_1,longlong param_2)

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
  FUN_142f005e0(param_1,local_res10);
  return;
}



// FUNCTION 142f2f600 FUN_142f2f600 body=191 status=ok
// SIG undefined FUN_142f2f600(void)

void FUN_142f2f600(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142f00910(param_1,local_res18[0],local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f2f6c0 FUN_142f2f6c0 body=144 status=ok
// SIG undefined FUN_142f2f6c0(void)

void FUN_142f2f6c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_142f02280(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f2f770 execRegisterIncomingAttacker body=129 status=ok
// SIG undefined execRegisterIncomingAttacker(void)

void IFGAggroTargetInterface::execRegisterIncomingAttacker(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x30))(param_1,local_res8);
  return;
}



// FUNCTION 142f2f840 FUN_142f2f840 body=130 status=ok
// SIG undefined FUN_142f2f840(void)

void FUN_142f2f840(undefined8 param_1,longlong param_2)

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
  FUN_142f0bae0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 142f2f8d0 FUN_142f2f8d0 body=130 status=ok
// SIG undefined FUN_142f2f8d0(void)

void FUN_142f2f8d0(undefined8 param_1,longlong param_2)

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
  FUN_142f0bb00(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 142f2f960 FUN_142f2f960 body=130 status=ok
// SIG undefined FUN_142f2f960(void)

void FUN_142f2f960(undefined8 param_1,longlong param_2)

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
  FUN_142f0bc10(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 142f2f9f0 FUN_142f2f9f0 body=170 status=ok
// SIG undefined FUN_142f2f9f0(void)

void FUN_142f2f9f0(longlong *param_1,longlong param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  local_14 = local_24;
  local_10 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0xb0))(param_1,&local_18);
  return;
}



// FUNCTION 142f2faa0 FUN_142f2faa0 body=258 status=ok
// SIG undefined FUN_142f2faa0(void)

void FUN_142f2faa0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int local_res8 [2];
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
  (**(code **)(*param_1 + 0x18))(param_1,local_res20[0],bVar1,local_res10[0] != 0);
  return;
}



// FUNCTION 142f2fbb0 FUN_142f2fbb0 body=260 status=ok
// SIG undefined FUN_142f2fbb0(void)

void FUN_142f2fbb0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int local_res8 [2];
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
  (**(code **)(*param_1 + 0x50))(param_1,local_res20,bVar1,local_res10[0] != 0);
  return;
}



// FUNCTION 142f2fcc0 FUN_142f2fcc0 body=126 status=ok
// SIG undefined FUN_142f2fcc0(void)

void FUN_142f2fcc0(undefined8 param_1,longlong param_2)

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
  FUN_142f0f680(param_1,local_res10[0]);
  return;
}



// FUNCTION 142f2fd40 FUN_142f2fd40 body=170 status=ok
// SIG undefined FUN_142f2fd40(void)

void FUN_142f2fd40(longlong *param_1,longlong param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  local_14 = local_24;
  local_10 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0xa8))(param_1,&local_18);
  return;
}



// FUNCTION 142f2fdf0 FUN_142f2fdf0 body=144 status=ok
// SIG undefined FUN_142f2fdf0(void)

void FUN_142f2fdf0(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_142f12780(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f2fe80 FUN_142f2fe80 body=123 status=ok
// SIG undefined FUN_142f2fe80(void)

void FUN_142f2fe80(undefined8 param_1,longlong param_2)

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
  FUN_142f13950(param_1,local_res10[0]);
  return;
}



// FUNCTION 142f2ff00 FUN_142f2ff00 body=134 status=ok
// SIG undefined FUN_142f2ff00(void)

void FUN_142f2ff00(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x88))(param_1,local_res8[0] != 0);
  return;
}



// FUNCTION 142f2ffb0 FUN_142f2ffb0 body=47 status=ok
// SIG undefined FUN_142f2ffb0(void)

longlong FUN_142f2ffb0(void)

{
  if (DAT_146b41278 == 0) {
    FUN_141786440(&DAT_146b41278,&PTR_thunk_FUN_142f322b0_1459bf4c0);
  }
  return DAT_146b41278;
}



// FUNCTION 142f2ffe0 FUN_142f2ffe0 body=47 status=ok
// SIG undefined FUN_142f2ffe0(void)

longlong FUN_142f2ffe0(void)

{
  if (DAT_146b41200 == 0) {
    FUN_141786a30(&DAT_146b41200,&PTR_FUN_146757290);
  }
  return DAT_146b41200;
}



// FUNCTION 142f30010 FUN_142f30010 body=47 status=ok
// SIG undefined FUN_142f30010(void)

longlong FUN_142f30010(void)

{
  if (DAT_146b41208 == 0) {
    FUN_141786a30(&DAT_146b41208,&PTR_FUN_146757410);
  }
  return DAT_146b41208;
}



// FUNCTION 142f30040 FUN_142f30040 body=47 status=ok
// SIG undefined FUN_142f30040(void)

longlong FUN_142f30040(void)

{
  if (DAT_146b41210 == 0) {
    FUN_141786a30(&DAT_146b41210,&PTR_FUN_146757610);
  }
  return DAT_146b41210;
}



// FUNCTION 142f30070 FUN_142f30070 body=47 status=ok
// SIG undefined FUN_142f30070(void)

longlong FUN_142f30070(void)

{
  if (DAT_146b41218 == 0) {
    FUN_141786a30(&DAT_146b41218,&PTR_FUN_1467577f0);
  }
  return DAT_146b41218;
}



// FUNCTION 142f300a0 FUN_142f300a0 body=47 status=ok
// SIG undefined FUN_142f300a0(void)

longlong FUN_142f300a0(void)

{
  if (DAT_146b41220 == 0) {
    FUN_141786a30(&DAT_146b41220,&PTR_FUN_146757a50);
  }
  return DAT_146b41220;
}



// FUNCTION 142f300d0 FUN_142f300d0 body=47 status=ok
// SIG undefined FUN_142f300d0(void)

longlong FUN_142f300d0(void)

{
  if (DAT_146b41228 == 0) {
    FUN_141786a30(&DAT_146b41228,&PTR_FUN_146757b50);
  }
  return DAT_146b41228;
}



// FUNCTION 142f30100 FUN_142f30100 body=47 status=ok
// SIG undefined FUN_142f30100(void)

longlong FUN_142f30100(void)

{
  if (DAT_146b41230 == 0) {
    FUN_141786a30(&DAT_146b41230,&PTR_FUN_146757cd0);
  }
  return DAT_146b41230;
}



// FUNCTION 142f30130 FUN_142f30130 body=47 status=ok
// SIG undefined FUN_142f30130(void)

longlong FUN_142f30130(void)

{
  if (DAT_146b41238 == 0) {
    FUN_141786a30(&DAT_146b41238,&PTR_FUN_146757e20);
  }
  return DAT_146b41238;
}



// FUNCTION 142f30160 FUN_142f30160 body=47 status=ok
// SIG undefined FUN_142f30160(void)

longlong FUN_142f30160(void)

{
  if (DAT_146b41240 == 0) {
    FUN_141786a30(&DAT_146b41240,&PTR_FUN_146757ff0);
  }
  return DAT_146b41240;
}



// FUNCTION 142f30190 FUN_142f30190 body=47 status=ok
// SIG undefined FUN_142f30190(void)

longlong FUN_142f30190(void)

{
  if (DAT_146b41248 == 0) {
    FUN_141786a30(&DAT_146b41248,&PTR_FUN_146758210);
  }
  return DAT_146b41248;
}



// FUNCTION 142f301c0 FUN_142f301c0 body=47 status=ok
// SIG undefined FUN_142f301c0(void)

longlong FUN_142f301c0(void)

{
  if (DAT_146b41250 == 0) {
    FUN_141786a30(&DAT_146b41250,&PTR_FUN_1467584b0);
  }
  return DAT_146b41250;
}



// FUNCTION 142f301f0 FUN_142f301f0 body=47 status=ok
// SIG undefined FUN_142f301f0(void)

longlong FUN_142f301f0(void)

{
  if (DAT_146b41258 == 0) {
    FUN_141786a30(&DAT_146b41258,&PTR_FUN_1467585f0);
  }
  return DAT_146b41258;
}



// FUNCTION 142f30220 FUN_142f30220 body=47 status=ok
// SIG undefined FUN_142f30220(void)

longlong FUN_142f30220(void)

{
  if (DAT_146b41260 == 0) {
    FUN_141786a30(&DAT_146b41260,&PTR_FUN_1467587b0);
  }
  return DAT_146b41260;
}



// FUNCTION 142f30250 FUN_142f30250 body=47 status=ok
// SIG undefined FUN_142f30250(void)

longlong FUN_142f30250(void)

{
  if (DAT_146b41268 == 0) {
    FUN_141786a30(&DAT_146b41268,&PTR_FUN_146758900);
  }
  return DAT_146b41268;
}



// FUNCTION 142f30280 FUN_142f30280 body=47 status=ok
// SIG undefined FUN_142f30280(void)

longlong FUN_142f30280(void)

{
  if (DAT_146b41270 == 0) {
    FUN_141786a30(&DAT_146b41270,&PTR_FUN_146758a70);
  }
  return DAT_146b41270;
}



// FUNCTION 142f302b0 Z_Construct_UPackage__Script_HighMoon body=47 status=ok
// SIG undefined Z_Construct_UPackage__Script_HighMoon(void)

longlong Z_Construct_UPackage__Script_HighMoon(void)

{
  if (DAT_146b411a0 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146b411a0,&PTR_s__Script_GbxUI_1459c3c20);
  }
  return DAT_146b411a0;
}



// FUNCTION 142f302e0 FUN_142f302e0 body=47 status=ok
// SIG undefined FUN_142f302e0(void)

longlong FUN_142f302e0(void)

{
  if (DAT_146b40fe8 == 0) {
    FUN_141786440(&DAT_146b40fe8,&PTR_LAB_1459be0c0);
  }
  return DAT_146b40fe8;
}



// FUNCTION 142f30310 FUN_142f30310 body=47 status=ok
// SIG undefined FUN_142f30310(void)

longlong FUN_142f30310(void)

{
  if (DAT_146b40fc8 == 0) {
    FUN_141786a30(&DAT_146b40fc8,&PTR_FUN_1467540c0);
  }
  return DAT_146b40fc8;
}



// FUNCTION 142f30340 FUN_142f30340 body=47 status=ok
// SIG undefined FUN_142f30340(void)

longlong FUN_142f30340(void)

{
  if (DAT_146b40fd0 == 0) {
    FUN_141786a30(&DAT_146b40fd0,&PTR_FUN_146754100);
  }
  return DAT_146b40fd0;
}



// FUNCTION 142f30370 FUN_142f30370 body=47 status=ok
// SIG undefined FUN_142f30370(void)

longlong FUN_142f30370(void)

{
  if (DAT_146b40fd8 == 0) {
    FUN_141786a30(&DAT_146b40fd8,&PTR_FUN_146754140);
  }
  return DAT_146b40fd8;
}



// FUNCTION 142f303a0 FUN_142f303a0 body=47 status=ok
// SIG undefined FUN_142f303a0(void)

longlong FUN_142f303a0(void)

{
  if (DAT_146b40fe0 == 0) {
    FUN_141786a30(&DAT_146b40fe0,&PTR_FUN_1467541c0);
  }
  return DAT_146b40fe0;
}



// FUNCTION 142f303d0 FUN_142f303d0 body=53 status=ok
// SIG undefined FUN_142f303d0(void)

void FUN_142f303d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1459c1c60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f30420 FUN_142f30420 body=53 status=ok
// SIG undefined FUN_142f30420(void)

void FUN_142f30420(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1459c3d60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f30470 FUN_142f30470 body=53 status=ok
// SIG undefined FUN_142f30470(void)

void FUN_142f30470(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1459c2830;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f304c0 FUN_142f304c0 body=53 status=ok
// SIG undefined FUN_142f304c0(void)

void FUN_142f304c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1459c2948;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142f30520 FUN_142f30520 body=162 status=ok
// SIG undefined FUN_142f30520(void)

longlong FUN_142f30520(void)

{
  if (DAT_146b41130 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxRichTextBlock",&DAT_146b41130,FUN_140447710,0x380,0x10000000
                  ,0,L"Engine",FUN_142f31380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  ATroiCaoGateActor::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b41130;
}



// FUNCTION 142f305e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ACineCameraActor::GetPrivateStaticClass(void)

{
  if (DAT_146b41150 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxScrollBoxList",&DAT_146b41150,FUN_140447710,0x8f0,0x10000000
                  ,0,L"Engine",FUN_142f313c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UScrollBox::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b41150;
}



// FUNCTION 142f30690 FUN_142f30690 body=162 status=ok
// SIG undefined FUN_142f30690(void)

longlong FUN_142f30690(void)

{
  if (DAT_146b41028 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxMeshWidget",&DAT_146b41028,FUN_140447710,0x128,0x10000000,0,
                  L"Engine",&LAB_142f311b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b41028;
}



// FUNCTION 142f30760 FUN_142f30760 body=162 status=ok
// SIG undefined FUN_142f30760(void)

longlong FUN_142f30760(void)

{
  if (DAT_146b411d0 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"UIAccessors",&DAT_146b411d0,FUN_140447710,0x28,0x10004001,0,
                  L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b411d0;
}



// FUNCTION 142f30810 FUN_142f30810 body=162 status=ok
// SIG undefined FUN_142f30810(void)

longlong FUN_142f30810(void)

{
  if (DAT_146b41120 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxRetainerBox",&DAT_146b41120,FUN_140447710,0x158,0x10000000,0
                  ,L"Engine",FUN_142f31340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  URetainerBox::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b41120;
}



// FUNCTION 142f308c0 FUN_142f308c0 body=162 status=ok
// SIG undefined FUN_142f308c0(void)

longlong FUN_142f308c0(void)

{
  if (DAT_146b41038 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxNoClipCanvasPanel",&DAT_146b41038,FUN_140447710,0x138,
                  0x10000000,0,L"Engine",FUN_142f311c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UCanvasPanel::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b41038;
}



// FUNCTION 142f30990 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameInstanceGameParameters::GetPrivateStaticClass(void)

{
  if (DAT_146b41178 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxSpinner",&DAT_146b41178,FUN_142f32570,800,0x10000008,0,
                  L"Engine",FUN_142f314b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142f18d50,&LAB_140447700,0);
  }
  return DAT_146b41178;
}



// FUNCTION 142f30a40 FUN_142f30a40 body=47 status=ok
// SIG undefined FUN_142f30a40(void)

longlong FUN_142f30a40(void)

{
  if (DAT_146b41158 == 0) {
    FUN_141786a30(&DAT_146b41158,&PTR_FUN_1467561d0);
  }
  return DAT_146b41158;
}



// FUNCTION 142f30a70 FUN_142f30a70 body=47 status=ok
// SIG undefined FUN_142f30a70(void)

longlong FUN_142f30a70(void)

{
  if (DAT_146b41170 == 0) {
    FUN_141786440(&DAT_146b41170,&PTR_GetPrivateStaticClass_1459c0c70);
  }
  return DAT_146b41170;
}



// FUNCTION 142f30aa0 FUN_142f30aa0 body=47 status=ok
// SIG undefined FUN_142f30aa0(void)

longlong FUN_142f30aa0(void)

{
  if (DAT_146b41160 == 0) {
    FUN_141786a30(&DAT_146b41160,&PTR_FUN_146756290);
  }
  return DAT_146b41160;
}



// FUNCTION 142f30ad0 FUN_142f30ad0 body=47 status=ok
// SIG undefined FUN_142f30ad0(void)

longlong FUN_142f30ad0(void)

{
  if (DAT_146b41168 == 0) {
    FUN_141786a30(&DAT_146b41168,&PTR_FUN_146756350);
  }
  return DAT_146b41168;
}



// FUNCTION 142f30b00 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AUGSoundManager::GetPrivateStaticClass(void)

{
  if (DAT_146b410d0 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxProgressBar",&DAT_146b410d0,
                  StaticRegisterNativesAUGSoundManager,0x3a8,0x10000000,0,L"Engine",FUN_142f31220,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141301c80,&LAB_140447700,0);
  }
  return DAT_146b410d0;
}



// FUNCTION 142f30bc0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAnimSharingStateInstance::GetPrivateStaticClass(void)

{
  if (DAT_146b41198 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxTextField",&DAT_146b41198,
                  StaticRegisterNativesUAnimSharingStateInstance,0x290,0x10000008,0,L"Engine",
                  FUN_142f31540,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146b41198;
}



// FUNCTION 142f30c70 FUN_142f30c70 body=47 status=ok
// SIG undefined FUN_142f30c70(void)

longlong FUN_142f30c70(void)

{
  if (DAT_146b41040 == 0) {
    FUN_141786a30(&DAT_146b41040,&PTR_FUN_146754420);
  }
  return DAT_146b41040;
}



// FUNCTION 142f30ca0 FUN_142f30ca0 body=47 status=ok
// SIG undefined FUN_142f30ca0(void)

longlong FUN_142f30ca0(void)

{
  if (DAT_146b410c8 == 0) {
    FUN_141786440(&DAT_146b410c8,&PTR_GetPrivateStaticClass_1459bd260);
  }
  return DAT_146b410c8;
}



// FUNCTION 142f30cd0 FUN_142f30cd0 body=47 status=ok
// SIG undefined FUN_142f30cd0(void)

longlong FUN_142f30cd0(void)

{
  if (DAT_146b41048 == 0) {
    FUN_141786a30(&DAT_146b41048,&PTR_FUN_146754460);
  }
  return DAT_146b41048;
}



// FUNCTION 142f30d00 FUN_142f30d00 body=47 status=ok
// SIG undefined FUN_142f30d00(void)

longlong FUN_142f30d00(void)

{
  if (DAT_146b41050 == 0) {
    FUN_141786a30(&DAT_146b41050,&PTR_FUN_146754670);
  }
  return DAT_146b41050;
}



// FUNCTION 142f30d30 FUN_142f30d30 body=47 status=ok
// SIG undefined FUN_142f30d30(void)

longlong FUN_142f30d30(void)

{
  if (DAT_146b41058 == 0) {
    FUN_141786a30(&DAT_146b41058,&PTR_FUN_1467546f0);
  }
  return DAT_146b41058;
}



// FUNCTION 142f30d60 FUN_142f30d60 body=47 status=ok
// SIG undefined FUN_142f30d60(void)

longlong FUN_142f30d60(void)

{
  if (DAT_146b41060 == 0) {
    FUN_141786a30(&DAT_146b41060,&PTR_FUN_146754770);
  }
  return DAT_146b41060;
}



// FUNCTION 142f30d90 FUN_142f30d90 body=47 status=ok
// SIG undefined FUN_142f30d90(void)

longlong FUN_142f30d90(void)

{
  if (DAT_146b41068 == 0) {
    FUN_141786a30(&DAT_146b41068,&PTR_FUN_1467547f0);
  }
  return DAT_146b41068;
}



// FUNCTION 142f30dc0 FUN_142f30dc0 body=47 status=ok
// SIG undefined FUN_142f30dc0(void)

longlong FUN_142f30dc0(void)

{
  if (DAT_146b41070 == 0) {
    FUN_141786a30(&DAT_146b41070,&PTR_FUN_146754930);
  }
  return DAT_146b41070;
}



// FUNCTION 142f30df0 FUN_142f30df0 body=47 status=ok
// SIG undefined FUN_142f30df0(void)

longlong FUN_142f30df0(void)

{
  if (DAT_146b41078 == 0) {
    FUN_141786a30(&DAT_146b41078,&PTR_FUN_146754a20);
  }
  return DAT_146b41078;
}



// FUNCTION 142f30e20 FUN_142f30e20 body=47 status=ok
// SIG undefined FUN_142f30e20(void)

longlong FUN_142f30e20(void)

{
  if (DAT_146b41080 == 0) {
    FUN_141786a30(&DAT_146b41080,&PTR_FUN_146754aa0);
  }
  return DAT_146b41080;
}



// FUNCTION 142f30e50 FUN_142f30e50 body=47 status=ok
// SIG undefined FUN_142f30e50(void)

longlong FUN_142f30e50(void)

{
  if (DAT_146b41088 == 0) {
    FUN_141786a30(&DAT_146b41088,&PTR_FUN_146754b60);
  }
  return DAT_146b41088;
}



// FUNCTION 142f30e80 FUN_142f30e80 body=47 status=ok
// SIG undefined FUN_142f30e80(void)

longlong FUN_142f30e80(void)

{
  if (DAT_146b41090 == 0) {
    FUN_141786a30(&DAT_146b41090,&PTR_FUN_146754bf0);
  }
  return DAT_146b41090;
}



// FUNCTION 142f30eb0 FUN_142f30eb0 body=47 status=ok
// SIG undefined FUN_142f30eb0(void)

longlong FUN_142f30eb0(void)

{
  if (DAT_146b41098 == 0) {
    FUN_141786a30(&DAT_146b41098,&PTR_FUN_146754dc0);
  }
  return DAT_146b41098;
}



// FUNCTION 142f30ee0 FUN_142f30ee0 body=47 status=ok
// SIG undefined FUN_142f30ee0(void)

longlong FUN_142f30ee0(void)

{
  if (DAT_146b410a0 == 0) {
    FUN_141786a30(&DAT_146b410a0,&PTR_FUN_146754e40);
  }
  return DAT_146b410a0;
}



// FUNCTION 142f30f10 FUN_142f30f10 body=47 status=ok
// SIG undefined FUN_142f30f10(void)

longlong FUN_142f30f10(void)

{
  if (DAT_146b410a8 == 0) {
    FUN_141786a30(&DAT_146b410a8,&PTR_FUN_146754ec0);
  }
  return DAT_146b410a8;
}



// FUNCTION 142f30f40 FUN_142f30f40 body=47 status=ok
// SIG undefined FUN_142f30f40(void)

longlong FUN_142f30f40(void)

{
  if (DAT_146b410b0 == 0) {
    FUN_141786a30(&DAT_146b410b0,&PTR_FUN_146754f40);
  }
  return DAT_146b410b0;
}



// FUNCTION 142f30f70 FUN_142f30f70 body=47 status=ok
// SIG undefined FUN_142f30f70(void)

longlong FUN_142f30f70(void)

{
  if (DAT_146b410b8 == 0) {
    FUN_141786a30(&DAT_146b410b8,&PTR_FUN_146754fc0);
  }
  return DAT_146b410b8;
}



// FUNCTION 142f30fa0 FUN_142f30fa0 body=47 status=ok
// SIG undefined FUN_142f30fa0(void)

longlong FUN_142f30fa0(void)

{
  if (DAT_146b410c0 == 0) {
    FUN_141786a30(&DAT_146b410c0,&PTR_FUN_146755040);
  }
  return DAT_146b410c0;
}



// FUNCTION 142f30fd0 FUN_142f30fd0 body=47 status=ok
// SIG undefined FUN_142f30fd0(void)

longlong FUN_142f30fd0(void)

{
  if (DAT_146b41190 == 0) {
    FUN_141786440(&DAT_146b41190,&PTR_GetPrivateStaticClass_1459c1700);
  }
  return DAT_146b41190;
}



// FUNCTION 142f31000 FUN_142f31000 body=47 status=ok
// SIG undefined FUN_142f31000(void)

longlong FUN_142f31000(void)

{
  if (DAT_146b41188 == 0) {
    FUN_141786a30(&DAT_146b41188,&PTR_FUN_1467564b0);
  }
  return DAT_146b41188;
}



// FUNCTION 142f31040 FUN_142f31040 body=53 status=ok
// SIG undefined FUN_142f31040(void)

void FUN_142f31040(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1459c3c48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f31080 FUN_142f31080 body=99 status=ok
// SIG undefined FUN_142f31080(void)

void FUN_142f31080(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x2ed) = 1;
    *puVar1 = &PTR_FUN_14599bba8;
    puVar1[0x20] = &PTR_LAB_14599c058;
    puVar1[0x41] = &PTR_LAB_14599c080;
    puVar1[0x57] = &PTR_LAB_14599c0d0;
    puVar1[0x5f] = 0;
  }
  return;
}



// FUNCTION 142f310f0 FUN_142f310f0 body=72 status=ok
// SIG undefined FUN_142f310f0(void)

void FUN_142f310f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *(undefined4 *)(puVar1 + 6) = 0x1010100;
    *(undefined2 *)((longlong)puVar1 + 0x34) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x36) = 1;
    puVar1[9] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__14599b918;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
  }
  return;
}



// FUNCTION 142f31140 FUN_142f31140 body=110 status=ok
// SIG undefined FUN_142f31140(void)

void FUN_142f31140(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x2ed) = 1;
    *puVar1 = &PTR_FUN_1447d72d0;
    puVar1[0x20] = &PTR_LAB_1447d7770;
    puVar1[0x41] = &PTR_LAB_1447d7798;
    puVar1[0x57] = &PTR_LAB_1447d77e8;
    *(undefined4 *)(puVar1 + 0x5e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2f4) = 0;
  }
  return;
}



// FUNCTION 142f311c0 FUN_142f311c0 body=81 status=ok
// SIG undefined FUN_142f311c0(void)

void FUN_142f311c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1420cfdb0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459c1f30;
    *(undefined4 *)(puVar1 + 0x25) = 0xc7c35000;
    *(undefined4 *)((longlong)puVar1 + 300) = 0xc7c35000;
    *(undefined4 *)(puVar1 + 0x26) = 0x47c35000;
    *(undefined4 *)((longlong)puVar1 + 0x134) = 0x47c35000;
  }
  return;
}



// FUNCTION 142f31220 FUN_142f31220 body=281 status=ok
// SIG undefined FUN_142f31220(void)

void FUN_142f31220(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *(undefined1 *)(puVar1 + 0x5c) = 0;
    *puVar1 = &PTR_FUN_1459c2218;
    puVar1[0x20] = &PTR_LAB_1459c26d8;
    *(undefined8 *)((longlong)puVar1 + 0x2e4) = 0;
    puVar1[0x41] = &PTR_LAB_1459c2700;
    *(undefined4 *)((longlong)puVar1 + 0x2ec) = 0;
    *(undefined4 *)(puVar1 + 0x5e) = 0x3f000000;
    *(undefined1 *)((longlong)puVar1 + 0x2f4) = 0;
    *(undefined4 *)(puVar1 + 0x5f) = 0x40000000;
    *(undefined8 *)((longlong)puVar1 + 0x2fc) = 2;
    *(undefined8 *)((longlong)puVar1 + 0x304) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x30c) = 0;
    puVar1[99] = 0;
    puVar1[100] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x65,0);
    puVar1[0x66] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x67,0);
    puVar1[0x68] = 0;
    *(undefined4 *)(puVar1 + 0x70) = 0;
    *(undefined4 *)((longlong)puVar1 + 900) = 0x3f000000;
    *(undefined1 *)(puVar1 + 0x71) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x38c) = 0x40000000;
    puVar1[0x72] = 2;
    puVar1[0x73] = 0;
    puVar1[0x74] = 0;
  }
  return;
}



// FUNCTION 142f31340 FUN_142f31340 body=64 status=ok
// SIG undefined FUN_142f31340(void)

void FUN_142f31340(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    URetainerBox::URetainerBox(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1459c2a60;
    FWeakObjectPtr::operator=(puVar1 + 0x29,0);
    puVar1[0x2a] = 0;
  }
  return;
}



// FUNCTION 142f31380 FUN_142f31380 body=53 status=ok
// SIG undefined FUN_142f31380(void)

void FUN_142f31380(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1420d44e0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459c2d48;
    *(undefined2 *)(puVar1 + 0x6c) = 0xffe0;
  }
  return;
}



// FUNCTION 142f313c0 FUN_142f313c0 body=232 status=ok
// SIG undefined FUN_142f313c0(void)

void FUN_142f313c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1420d4860(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x10e) = 0;
    *puVar1 = &PTR_FUN_1459c3038;
    puVar1[0x10f] = 0xffffffffffffffff;
    puVar1[0x10c] = &PTR_LAB_1459c3320;
    puVar1[0x10d] = &PTR_LAB_1459c33e0;
    *(undefined4 *)(puVar1 + 0x110) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x884) = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x111,0);
    puVar1[0x112] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x113,0);
    puVar1[0x114] = 0;
    *(undefined2 *)(puVar1 + 0x115) = 0x100;
    puVar1[0x117] = 0;
    *(undefined2 *)(puVar1 + 0x118) = 0;
    puVar1[0x119] = 0;
    puVar1[0x11a] = 0;
    puVar1[0x11b] = 0;
    puVar1[0x11c] = 0;
    *(undefined1 *)(puVar1 + 0x11d) = 0;
  }
  return;
}



// FUNCTION 142f314b0 FUN_142f314b0 body=133 status=ok
// SIG undefined FUN_142f314b0(void)

void FUN_142f314b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413205b0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459c3480;
    puVar1[0x2e] = &PTR_LAB_1459c37a8;
    puVar1[0x59] = 0;
    puVar1[0x5a] = 0;
    *(undefined4 *)(puVar1 + 0x5b) = 0xffffffff;
    puVar1[0x5c] = 0;
    puVar1[0x5d] = 0;
    *(undefined1 *)(puVar1 + 0x61) = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x62,0);
    puVar1[99] = 0;
  }
  return;
}



// FUNCTION 142f31540 FUN_142f31540 body=119 status=ok
// SIG undefined FUN_142f31540(void)

void FUN_142f31540(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459c3818;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    FUN_142f315e0(puVar1 + 0x32);
    puVar1[0x4c] = 0;
    *(undefined4 *)(puVar1 + 0x4d) = 0;
    puVar1[0x4e] = 0;
    puVar1[0x4f] = 0;
    *(undefined4 *)(puVar1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 142f315e0 FUN_142f315e0 body=73 status=ok
// SIG undefined FUN_142f315e0(void)

undefined8 * FUN_142f315e0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[4] = USlateBlueprintLibrary::GetLocalSize;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xe] = FUN_1407c3030;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  return param_1;
}



// FUNCTION 142f31630 FUN_142f31630 body=117 status=ok
// SIG undefined FUN_142f31630(void)

void FUN_142f31630(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x140);
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
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  FUN_140458e30(param_1);
  return;
}



// FUNCTION 142f316b0 FUN_142f316b0 body=259 status=ok
// SIG undefined FUN_142f316b0(void)

void FUN_142f316b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x338);
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
  FUN_140691580(param_1 + 0x150);
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x128);
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
  FUN_140458e30(param_1);
  return;
}



// FUNCTION 142f317c0 FUN_142f317c0 body=222 status=ok
// SIG undefined FUN_142f317c0(void)

void FUN_142f317c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x858);
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
  if (*(longlong *)(param_1 + 0x838) != 0) {
    FMemory::Free();
  }
  FScrollBarStyle::~FScrollBarStyle(param_1 + 0x340);
  *(undefined ***)(param_1 + 0x118) = &PTR__scalar_deleting_destructor__144d4f640;
  FSlateBrush::~FSlateBrush(param_1 + 0x2b8);
  FSlateBrush::~FSlateBrush(param_1 + 0x230);
  FSlateBrush::~FSlateBrush(param_1 + 0x1a8);
  FSlateBrush::~FSlateBrush(param_1 + 0x120);
  *(undefined ***)(param_1 + 0x118) = &PTR_FUN_144042b80;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  FUN_140458e30(param_1);
  return;
}



// FUNCTION 142f318e0 FUN_142f318e0 body=52 status=ok
// SIG undefined FUN_142f318e0(void)

undefined8 FUN_142f318e0(undefined8 param_1,ulonglong param_2)

{
  FUN_142f26b90();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x138);
  }
  return param_1;
}



// FUNCTION 142f31920 FUN_142f31920 body=87 status=ok
// SIG undefined FUN_142f31920(void)

longlong FUN_142f31920(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3a8);
  }
  return param_1;
}



// FUNCTION 142f31980 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FCullObjectsToGridCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_142f31630();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x158);
  }
  return param_1;
}



// FUNCTION 142f319c0 FUN_142f319c0 body=52 status=ok
// SIG undefined FUN_142f319c0(void)

undefined8 FUN_142f319c0(undefined8 param_1,ulonglong param_2)

{
  FUN_142f316b0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x380);
  }
  return param_1;
}



// FUNCTION 142f31a00 FUN_142f31a00 body=80 status=ok
// SIG undefined FUN_142f31a00(void)

longlong FUN_142f31a00(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x868) = &PTR_FUN_14468d298;
  *(undefined ***)(param_1 + 0x860) = &PTR_FUN_1459b3488;
  FUN_142f317c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x8f0);
  }
  return param_1;
}



// FUNCTION 142f31a50 FUN_142f31a50 body=85 status=ok
// SIG undefined FUN_142f31a50(void)

longlong FUN_142f31a50(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    FMemory::Free();
  }
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_1 + 0x2c8);
  FUN_141320cb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,800);
  }
  return param_1;
}



// FUNCTION 142f31ab0 FUN_142f31ab0 body=210 status=ok
// SIG undefined FUN_142f31ab0(void)

longlong FUN_142f31ab0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FMemory::Free();
  }
  FUN_140ce1dc0(param_1 + 400);
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
    FMemory::operator_delete(param_1,0x290);
  }
  return param_1;
}



// FUNCTION 142f31b90 FUN_142f31b90 body=62 status=ok
// SIG undefined FUN_142f31b90(void)

void FUN_142f31b90(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *param_2 = 0;
  FText::FText(param_2 + 1);
  param_2[5] = 0;
  return;
}



// FUNCTION 142f31c20 FUN_142f31c20 body=73 status=ok
// SIG undefined FUN_142f31c20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f31c20(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  FText::FText(param_2);
  *(undefined4 *)(param_2 + 3) = 0x40a00000;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x18;
  uVar1 = _DAT_1464aa6c8;
  param_2[4] = _DAT_1464aa6c0;
  param_2[5] = uVar1;
  return;
}



// FUNCTION 142f31ce0 FUN_142f31ce0 body=112 status=ok
// SIG undefined FUN_142f31ce0(void)

undefined8 FUN_142f31ce0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar5 = (undefined4 *)(param_2 + 0x1c);
    do {
      FText::operator=(puVar5 + -7,param_3 + -0x1c + (longlong)puVar5);
      puVar5[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar5);
      *puVar5 = *(undefined4 *)(param_3 + (longlong)puVar5);
      puVar1 = (undefined4 *)(param_3 + 4 + (longlong)puVar5);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      puVar5[1] = *puVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar5[4] = uVar4;
      puVar5 = puVar5 + 0xc;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f31d50 FUN_142f31d50 body=85 status=ok
// SIG undefined FUN_142f31d50(void)

void FUN_142f31d50(void)

{
  if (DAT_146b40b70 == 0) {
    if (DAT_146b411a0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b411a0,&PTR_s__Script_GbxUI_1459c3c20);
    }
    DAT_146b40b70 = GetStaticEnum(FUN_142f32b50,DAT_146b411a0,L"EGbxMenuSwitcherSubmenuInitReason");
  }
  return;
}



// FUNCTION 142f31db0 FUN_142f31db0 body=85 status=ok
// SIG undefined FUN_142f31db0(void)

void FUN_142f31db0(void)

{
  if (DAT_146b40b68 == 0) {
    if (DAT_146b411a0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b411a0,&PTR_s__Script_GbxUI_1459c3c20);
    }
    DAT_146b40b68 = GetStaticEnum(FUN_142f32b80,DAT_146b411a0,L"EGbxProgressBarFillDirection");
  }
  return;
}



// FUNCTION 142f31e10 FUN_142f31e10 body=85 status=ok
// SIG undefined FUN_142f31e10(void)

void FUN_142f31e10(void)

{
  if (DAT_146b40b88 == 0) {
    if (DAT_146b411a0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b411a0,&PTR_s__Script_GbxUI_1459c3c20);
    }
    DAT_146b40b88 =
         GetStaticEnum(FUN_142f32bb0,DAT_146b411a0,L"EGbxScrollBoxListFocusChangedAction");
  }
  return;
}



// FUNCTION 142f31e70 FUN_142f31e70 body=85 status=ok
// SIG undefined FUN_142f31e70(void)

void FUN_142f31e70(void)

{
  if (DAT_146b40b90 == 0) {
    if (DAT_146b411a0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b411a0,&PTR_s__Script_GbxUI_1459c3c20);
    }
    DAT_146b40b90 = GetStaticEnum(FUN_142f32be0,DAT_146b411a0,L"EGbxScrollBoxListWrapMode");
  }
  return;
}



// FUNCTION 142f31ed0 FUN_142f31ed0 body=85 status=ok
// SIG undefined FUN_142f31ed0(void)

void FUN_142f31ed0(void)

{
  if (DAT_146b40b78 == 0) {
    if (DAT_146b411a0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b411a0,&PTR_s__Script_GbxUI_1459c3c20);
    }
    DAT_146b40b78 = GetStaticEnum(FUN_142f32c40,DAT_146b411a0,L"EMenuTransitionOperation");
  }
  return;
}



// FUNCTION 142f31f30 FUN_142f31f30 body=85 status=ok
// SIG undefined FUN_142f31f30(void)

void FUN_142f31f30(void)

{
  if (DAT_146b40b80 == 0) {
    if (DAT_146b411a0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b411a0,&PTR_s__Script_GbxUI_1459c3c20);
    }
    DAT_146b40b80 = GetStaticEnum(FUN_142f32c10,DAT_146b411a0,L"EMenuTransition");
  }
  return;
}



// FUNCTION 142f31f90 FUN_142f31f90 body=85 status=ok
// SIG undefined FUN_142f31f90(void)

void FUN_142f31f90(void)

{
  if (DAT_146b40b98 == 0) {
    if (DAT_146b411a0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b411a0,&PTR_s__Script_GbxUI_1459c3c20);
    }
    DAT_146b40b98 = GetStaticEnum(FUN_142f32c70,DAT_146b411a0,L"EVerticalTextAutoSizeType");
  }
  return;
}



// FUNCTION 142f31ff0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGNewGameUW::GetPrivateStaticClass(void)

{
  if (DAT_146b40ff0 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxMenuSwitcher",&DAT_146b40ff0,
                  StaticRegisterNativesUUGNewGameUW,0x308,0x10000000,0,L"Engine",FUN_142f31080,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGPasswordResetPage::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b40ff0;
}



// FUNCTION 142f320a0 FUN_142f320a0 body=162 status=ok
// SIG undefined FUN_142f320a0(void)

longlong FUN_142f320a0(void)

{
  if (DAT_146b40fc0 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxMenuSwitcherMenuData",&DAT_146b40fc0,FUN_140447710,0x68,
                  0x10000000,0,L"Engine",FUN_142f310f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142f38260,&LAB_140447700,0);
  }
  return DAT_146b40fc0;
}



// FUNCTION 142f32150 FUN_142f32150 body=162 status=ok
// SIG undefined FUN_142f32150(void)

longlong FUN_142f32150(void)

{
  if (DAT_146b41008 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxMenuSwitcherSubmenu",&DAT_146b41008,FUN_140447710,0x2f8,
                  0x10000000,0,L"Engine",FUN_142f31140,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGPasswordResetPage::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b41008;
}



// FUNCTION 142f32200 FUN_142f32200 body=162 status=ok
// SIG undefined FUN_142f32200(void)

longlong FUN_142f32200(void)

{
  if (DAT_146b411c0 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxUIGlobals",&DAT_146b411c0,FUN_140447710,0x288,0x10000000,0,
                  L"GbxUI",&LAB_142f315c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b411c0;
}



// FUNCTION 142f322b0 FUN_142f322b0 body=162 status=ok
// SIG undefined FUN_142f322b0(void)

longlong FUN_142f322b0(void)

{
  if (DAT_146b41280 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxUILibrary",&DAT_146b41280,FUN_142f325d0,0x28,0x10000000,0,
                  L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146b41280;
}



// FUNCTION 142f32360 FUN_142f32360 body=6 status=ok
// SIG undefined FUN_142f32360(void)

undefined8 FUN_142f32360(void)

{
  return 0x7a8d9934;
}



// FUNCTION 142f32370 FUN_142f32370 body=6 status=ok
// SIG undefined FUN_142f32370(void)

undefined8 FUN_142f32370(void)

{
  return 0x90b1f905;
}



// FUNCTION 142f32380 FUN_142f32380 body=6 status=ok
// SIG undefined FUN_142f32380(void)

undefined8 FUN_142f32380(void)

{
  return 0xc1c55f16;
}



// FUNCTION 142f32390 FUN_142f32390 body=6 status=ok
// SIG undefined FUN_142f32390(void)

undefined8 FUN_142f32390(void)

{
  return 0xb0ff34cb;
}



// FUNCTION 142f323a0 FUN_142f323a0 body=6 status=ok
// SIG undefined FUN_142f323a0(void)

undefined8 FUN_142f323a0(void)

{
  return 0x48c1e2e4;
}



// FUNCTION 142f323b0 FUN_142f323b0 body=64 status=ok
// SIG undefined FUN_142f323b0(void)

void FUN_142f323b0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  local_res8 = *param_2;
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b40f20);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 142f323f0 FUN_142f323f0 body=148 status=ok
// SIG undefined FUN_142f323f0(void)

void FUN_142f323f0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  
  lVar1 = *param_1;
  local_3c = *param_5;
  local_34 = *(undefined1 *)(param_5 + 2);
  local_38 = param_5[1];
  local_30 = param_5[3];
  local_28 = *(undefined8 *)(param_5 + 5);
  uStack_20 = *(undefined8 *)(param_5 + 7);
  local_2c = param_5[4];
  local_18 = param_5[9];
  local_48 = param_2;
  local_44 = param_3;
  local_40 = param_4;
  uVar2 = FUN_14178ac60(local_18,DAT_146b40f28);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_48);
  return;
}



// FUNCTION 142f32490 FUN_142f32490 body=73 status=ok
// SIG undefined FUN_142f32490(void)

void FUN_142f32490(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  local_c = param_4;
  uVar2 = FUN_14178ac60(param_1,DAT_146b40f30);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 142f32510 StaticRegisterNativesUUGNewGameUW body=34 status=ok
// SIG undefined StaticRegisterNativesUUGNewGameUW(void)

void UUGNewGameUW::StaticRegisterNativesUUGNewGameUW(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetCurrentSubmenuId_1459c1d80,4);
  return;
}



// FUNCTION 142f32540 StaticRegisterNativesAUGSoundManager body=34 status=ok
// SIG undefined StaticRegisterNativesAUGSoundManager(void)

void AUGSoundManager::StaticRegisterNativesAUGSoundManager(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_EnteredPercentRange_1459c2750,0xc);
  return;
}



// FUNCTION 142f32570 FUN_142f32570 body=34 status=ok
// SIG undefined FUN_142f32570(void)

void FUN_142f32570(void)

{
  undefined8 uVar1;
  
  uVar1 = UGameInstanceGameParameters::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SpinLeft_1459c37f8,2);
  return;
}



// FUNCTION 142f325a0 StaticRegisterNativesUAnimSharingStateInstance body=34 status=ok
// SIG undefined StaticRegisterNativesUAnimSharingStateInstance(void)

void UAnimSharingStateInstance::StaticRegisterNativesUAnimSharingStateInstance(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnScrollBarPositionUpdated_1459c3b10,1);
  return;
}



// FUNCTION 142f325d0 FUN_142f325d0 body=34 status=ok
// SIG undefined FUN_142f325d0(void)

void FUN_142f325d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142f322b0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AbbreviateNumberText_1459c3e80,0xf);
  return;
}



// FUNCTION 142f32600 FUN_142f32600 body=113 status=ok
// SIG undefined FUN_142f32600(void)

void FUN_142f32600(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b40fa8 == 0) {
    if (DAT_146b411a0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b411a0,&PTR_s__Script_GbxUI_1459c3c20);
    }
    lVar1 = DAT_146b411a0;
    uVar2 = FUN_142f32360();
    DAT_146b40fa8 = GetStaticStruct(FUN_142f32ca0,lVar1,L"GbxMenuSwitcherSubmenuInfo",0x30,uVar2);
  }
  return;
}



// FUNCTION 142f32680 FUN_142f32680 body=113 status=ok
// SIG undefined FUN_142f32680(void)

void FUN_142f32680(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b41100 == 0) {
    if (DAT_146b411a0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b411a0,&PTR_s__Script_GbxUI_1459c3c20);
    }
    lVar1 = DAT_146b411a0;
    uVar2 = FUN_142f32370();
    DAT_146b41100 = GetStaticStruct(FUN_142f32cd0,lVar1,L"GbxProgressBarInterpolator",0x28,uVar2);
  }
  return;
}



// FUNCTION 142f32700 FUN_142f32700 body=113 status=ok
// SIG undefined FUN_142f32700(void)

void FUN_142f32700(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b410f0 == 0) {
    if (DAT_146b411a0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b411a0,&PTR_s__Script_GbxUI_1459c3c20);
    }
    lVar1 = DAT_146b411a0;
    uVar2 = FUN_142f32380();
    DAT_146b410f0 = GetStaticStruct(FUN_142f32d00,lVar1,L"GbxProgressBarRange",0x18,uVar2);
  }
  return;
}



// FUNCTION 142f32780 FUN_142f32780 body=113 status=ok
// SIG undefined FUN_142f32780(void)

void FUN_142f32780(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b411f0 == 0) {
    if (DAT_146b411a0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b411a0,&PTR_s__Script_GbxUI_1459c3c20);
    }
    lVar1 = DAT_146b411a0;
    uVar2 = FUN_142f32390();
    DAT_146b411f0 = GetStaticStruct(FUN_142f32d30,lVar1,L"TextDebugData",0x30,uVar2);
  }
  return;
}



// FUNCTION 142f32800 FUN_142f32800 body=113 status=ok
// SIG undefined FUN_142f32800(void)

void FUN_142f32800(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b411a8 == 0) {
    if (DAT_146b411a0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b411a0,&PTR_s__Script_GbxUI_1459c3c20);
    }
    lVar1 = DAT_146b411a0;
    uVar2 = FUN_142f323a0();
    DAT_146b411a8 = GetStaticStruct(FUN_142f32d60,lVar1,L"TextMarkupDictionaryEntry",0x18,uVar2);
  }
  return;
}



// FUNCTION 142f32880 FUN_142f32880 body=47 status=ok
// SIG undefined FUN_142f32880(void)

longlong FUN_142f32880(void)

{
  if (DAT_146b40fb8 == 0) {
    FUN_141786440(&DAT_146b40fb8,&PTR_LAB_1459bd910);
  }
  return DAT_146b40fb8;
}



// FUNCTION 142f328b0 FUN_142f328b0 body=47 status=ok
// SIG undefined FUN_142f328b0(void)

longlong FUN_142f328b0(void)

{
  if (DAT_146b41000 == 0) {
    FUN_141786440(&DAT_146b41000,&PTR_thunk_FUN_142f32150_1459be5e0);
  }
  return DAT_146b41000;
}



// FUNCTION 142f328e0 FUN_142f328e0 body=47 status=ok
// SIG undefined FUN_142f328e0(void)

longlong FUN_142f328e0(void)

{
  if (DAT_146b41020 == 0) {
    FUN_141786440(&DAT_146b41020,&PTR_FUN_1459bfeb0);
  }
  return DAT_146b41020;
}



// FUNCTION 142f32910 FUN_142f32910 body=47 status=ok
// SIG undefined FUN_142f32910(void)

longlong FUN_142f32910(void)

{
  if (DAT_146b41030 == 0) {
    FUN_141786440(&DAT_146b41030,&PTR_FUN_1459c0a10);
  }
  return DAT_146b41030;
}



// FUNCTION 142f32940 FUN_142f32940 body=47 status=ok
// SIG undefined FUN_142f32940(void)

longlong FUN_142f32940(void)

{
  if (DAT_146b41118 == 0) {
    FUN_141786440(&DAT_146b41118,&PTR_FUN_1459c08c0);
  }
  return DAT_146b41118;
}



// FUNCTION 142f32970 FUN_142f32970 body=47 status=ok
// SIG undefined FUN_142f32970(void)

longlong FUN_142f32970(void)

{
  if (DAT_146b41128 == 0) {
    FUN_141786440(&DAT_146b41128,&PTR_FUN_1459bf770);
  }
  return DAT_146b41128;
}



// FUNCTION 142f329a0 FUN_142f329a0 body=47 status=ok
// SIG undefined FUN_142f329a0(void)

longlong FUN_142f329a0(void)

{
  if (DAT_146b41148 == 0) {
    FUN_141786440(&DAT_146b41148,&PTR_GetPrivateStaticClass_1459bfc70);
  }
  return DAT_146b41148;
}



// FUNCTION 142f329d0 FUN_142f329d0 body=47 status=ok
// SIG undefined FUN_142f329d0(void)

longlong FUN_142f329d0(void)

{
  if (DAT_146b411b8 == 0) {
    FUN_141786440(&DAT_146b411b8,&PTR_LAB_1459bc7f0);
  }
  return DAT_146b411b8;
}



// FUNCTION 142f32a00 FUN_142f32a00 body=47 status=ok
// SIG undefined FUN_142f32a00(void)

longlong FUN_142f32a00(void)

{
  if (DAT_146b411c8 == 0) {
    FUN_141786440(&DAT_146b411c8,&PTR_FUN_1459bcfa0);
  }
  return DAT_146b411c8;
}



// FUNCTION 142f32a30 FUN_142f32a30 body=47 status=ok
// SIG undefined FUN_142f32a30(void)

longlong FUN_142f32a30(void)

{
  if (DAT_146b411d8 == 0) {
    FUN_141786a30(&DAT_146b411d8,&PTR_Z_Construct_UPackage__Script_HighMoon_146756f60);
  }
  return DAT_146b411d8;
}



// FUNCTION 142f32a60 FUN_142f32a60 body=47 status=ok
// SIG undefined FUN_142f32a60(void)

longlong FUN_142f32a60(void)

{
  if (DAT_146b411e0 == 0) {
    FUN_141786a30(&DAT_146b411e0,&PTR_Z_Construct_UPackage__Script_HighMoon_146756fe0);
  }
  return DAT_146b411e0;
}



// FUNCTION 142f32a90 FUN_142f32a90 body=47 status=ok
// SIG undefined FUN_142f32a90(void)

longlong FUN_142f32a90(void)

{
  if (DAT_146b410e0 == 0) {
    FUN_141786a30(&DAT_146b410e0,&PTR_Z_Construct_UPackage__Script_HighMoon_146755660);
  }
  return DAT_146b410e0;
}



// FUNCTION 142f32ac0 FUN_142f32ac0 body=47 status=ok
// SIG undefined FUN_142f32ac0(void)

longlong FUN_142f32ac0(void)

{
  if (DAT_146b410d8 == 0) {
    FUN_141786a30(&DAT_146b410d8,&PTR_Z_Construct_UPackage__Script_HighMoon_146755620);
  }
  return DAT_146b410d8;
}



// FUNCTION 142f32af0 FUN_142f32af0 body=47 status=ok
// SIG undefined FUN_142f32af0(void)

longlong FUN_142f32af0(void)

{
  if (DAT_146b41110 == 0) {
    FUN_141786a30(&DAT_146b41110,&PTR_Z_Construct_UPackage__Script_HighMoon_146755ac0);
  }
  return DAT_146b41110;
}



// FUNCTION 142f32b20 FUN_142f32b20 body=47 status=ok
// SIG undefined FUN_142f32b20(void)

longlong FUN_142f32b20(void)

{
  if (DAT_146b411e8 == 0) {
    FUN_141786a30(&DAT_146b411e8,&PTR_Z_Construct_UPackage__Script_HighMoon_1467570a0);
  }
  return DAT_146b411e8;
}



// FUNCTION 142f32b50 FUN_142f32b50 body=47 status=ok
// SIG undefined FUN_142f32b50(void)

longlong FUN_142f32b50(void)

{
  if (DAT_146b40ff8 == 0) {
    FUN_1417866a0(&DAT_146b40ff8,&PTR_Z_Construct_UPackage__Script_HighMoon_146758ae0);
  }
  return DAT_146b40ff8;
}



// FUNCTION 142f32b80 FUN_142f32b80 body=47 status=ok
// SIG undefined FUN_142f32b80(void)

longlong FUN_142f32b80(void)

{
  if (DAT_146b410e8 == 0) {
    FUN_1417866a0(&DAT_146b410e8,&PTR_Z_Construct_UPackage__Script_HighMoon_146758bd0);
  }
  return DAT_146b410e8;
}



// FUNCTION 142f32bb0 FUN_142f32bb0 body=47 status=ok
// SIG undefined FUN_142f32bb0(void)

longlong FUN_142f32bb0(void)

{
  if (DAT_146b41138 == 0) {
    FUN_1417866a0(&DAT_146b41138,&PTR_Z_Construct_UPackage__Script_HighMoon_146758c20);
  }
  return DAT_146b41138;
}



// FUNCTION 142f32be0 FUN_142f32be0 body=47 status=ok
// SIG undefined FUN_142f32be0(void)

longlong FUN_142f32be0(void)

{
  if (DAT_146b41140 == 0) {
    FUN_1417866a0(&DAT_146b41140,&PTR_Z_Construct_UPackage__Script_HighMoon_146758c70);
  }
  return DAT_146b41140;
}



// FUNCTION 142f32c10 FUN_142f32c10 body=47 status=ok
// SIG undefined FUN_142f32c10(void)

longlong FUN_142f32c10(void)

{
  if (DAT_146b41018 == 0) {
    FUN_1417866a0(&DAT_146b41018,&PTR_Z_Construct_UPackage__Script_HighMoon_146758b80);
  }
  return DAT_146b41018;
}



// FUNCTION 142f32c40 FUN_142f32c40 body=47 status=ok
// SIG undefined FUN_142f32c40(void)

longlong FUN_142f32c40(void)

{
  if (DAT_146b41010 == 0) {
    FUN_1417866a0(&DAT_146b41010,&PTR_Z_Construct_UPackage__Script_HighMoon_146758b30);
  }
  return DAT_146b41010;
}



// FUNCTION 142f32c70 FUN_142f32c70 body=47 status=ok
// SIG undefined FUN_142f32c70(void)

longlong FUN_142f32c70(void)

{
  if (DAT_146b41180 == 0) {
    FUN_1417866a0(&DAT_146b41180,&PTR_Z_Construct_UPackage__Script_HighMoon_146758cc0);
  }
  return DAT_146b41180;
}



// FUNCTION 142f32ca0 FUN_142f32ca0 body=47 status=ok
// SIG undefined FUN_142f32ca0(void)

longlong FUN_142f32ca0(void)

{
  if (DAT_146b40fb0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b40fb0,&PTR_Z_Construct_UPackage__Script_HighMoon_146753fa0);
  }
  return DAT_146b40fb0;
}



// FUNCTION 142f32cd0 FUN_142f32cd0 body=47 status=ok
// SIG undefined FUN_142f32cd0(void)

longlong FUN_142f32cd0(void)

{
  if (DAT_146b41108 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b41108,&PTR_Z_Construct_UPackage__Script_HighMoon_1467559f0);
  }
  return DAT_146b41108;
}



// FUNCTION 142f32d00 FUN_142f32d00 body=47 status=ok
// SIG undefined FUN_142f32d00(void)

longlong FUN_142f32d00(void)

{
  if (DAT_146b410f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b410f8,&PTR_Z_Construct_UPackage__Script_HighMoon_1467557e0);
  }
  return DAT_146b410f8;
}



// FUNCTION 142f32d30 FUN_142f32d30 body=47 status=ok
// SIG undefined FUN_142f32d30(void)

longlong FUN_142f32d30(void)

{
  if (DAT_146b411f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b411f8,&PTR_Z_Construct_UPackage__Script_HighMoon_1467571d0);
  }
  return DAT_146b411f8;
}



// FUNCTION 142f32d60 FUN_142f32d60 body=47 status=ok
// SIG undefined FUN_142f32d60(void)

longlong FUN_142f32d60(void)

{
  if (DAT_146b411b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b411b0,&PTR_Z_Construct_UPackage__Script_HighMoon_1467565e0);
  }
  return DAT_146b411b0;
}



// FUNCTION 142f32db0 FUN_142f32db0 body=194 status=ok
// SIG undefined FUN_142f32db0(void)

void FUN_142f32db0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 local_res10 [6];
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
  plVar1 = (longlong *)FUN_142ee0ee0(local_18,local_res10[0]);
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



// FUNCTION 142f32e80 FUN_142f32e80 body=450 status=ok
// SIG undefined FUN_142f32e80(void)

void FUN_142f32e80(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  int local_res10 [2];
  undefined8 local_res18 [2];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [24];
  
  local_68 = 0;
  uStack_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  FText::FText(local_48);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar6 = local_res10[0] != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_58 = local_68;
  local_50 = 0;
  if (local_68 != 0) {
    local_50 = uStack_60;
  }
  uVar5 = FText::FText(local_30,local_48);
  uVar5 = FUN_142ee6260(&local_58,local_res18[0],uVar5,bVar6);
  *param_3 = uVar5;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 142f33050 FUN_142f33050 body=615 status=ok
// SIG undefined FUN_142f33050(void)

void FUN_142f33050(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  int local_res10 [2];
  undefined8 local_res18;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  local_88 = 0;
  uStack_80 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  FText::FText(local_58);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar6 = local_res10[0] != 0;
  FWeakObjectPtr::operator=(&local_98,0);
  local_90 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  FWeakObjectPtr::operator=(&local_a8,0);
  local_a0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_78 = local_a8;
  local_74 = local_a4;
  local_70 = local_a0;
  local_68 = local_98;
  local_64 = local_94;
  local_60 = local_90;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_40 = local_88;
  local_38 = 0;
  if (local_88 != 0) {
    local_38 = uStack_80;
  }
  uVar5 = FText::FText(local_30,local_58);
  uVar5 = FUN_142ee6490(&local_40,local_res18,uVar5,bVar6,&local_68,&local_78);
  *param_3 = uVar5;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 142f332c0 FUN_142f332c0 body=511 status=ok
// SIG undefined FUN_142f332c0(void)

void FUN_142f332c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [24];
  
  local_68 = 0;
  uStack_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  FText::FText(local_48);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_78 = 0;
  local_70 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_res10[0] = 0;
  puVar6 = &local_78;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
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
  local_58 = local_68;
  local_50 = 0;
  if (local_68 != 0) {
    local_50 = uStack_60;
  }
  uVar5 = FText::FText(local_30,local_48);
  uVar5 = FUN_142ee6830(&local_58,local_res18,uVar5,puVar6,local_res10[0]);
  *param_3 = uVar5;
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_78);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 142f334c0 FUN_142f334c0 body=701 status=ok
// SIG undefined FUN_142f334c0(void)

void FUN_142f334c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  local_88 = 0;
  uStack_80 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  FText::FText(local_58);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_98 = 0;
  local_90 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_res10[0] = 0;
  puVar6 = &local_98;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  FWeakObjectPtr::operator=(&local_a8,0);
  local_a0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  FWeakObjectPtr::operator=(&local_b8,0);
  local_b0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_78 = local_b8;
  local_74 = local_b4;
  local_70 = local_b0;
  local_68 = local_a8;
  local_64 = local_a4;
  local_60 = local_a0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_40 = local_88;
  local_38 = 0;
  if (local_88 != 0) {
    local_38 = uStack_80;
  }
  uVar5 = FText::FText(local_30,local_58);
  uVar5 = FUN_142ee6a60(&local_40,local_res18,uVar5,puVar6,local_res10[0],&local_68,&local_78);
  *param_3 = uVar5;
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_98);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 142f33780 FUN_142f33780 body=222 status=ok
// SIG undefined FUN_142f33780(void)

void FUN_142f33780(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18;
  undefined8 local_10;
  
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
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
  local_18 = local_28;
  local_10 = 0;
  if (local_28 != 0) {
    local_10 = uStack_20;
  }
  uVar1 = FUN_142ee6de0(&local_18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f33860 FUN_142f33860 body=410 status=ok
// SIG undefined FUN_142f33860(void)

void FUN_142f33860(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_48 = 0;
  uStack_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FWeakObjectPtr::operator=(&local_58,0);
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FWeakObjectPtr::operator=(&local_68,0);
  local_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_38 = local_68;
  local_34 = local_64;
  local_30 = local_60;
  local_28 = local_58;
  local_24 = local_54;
  local_20 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_18 = local_48;
  local_10 = 0;
  if (local_48 != 0) {
    local_10 = uStack_40;
  }
  uVar1 = FUN_142ee6ec0(&local_18,local_res10,&local_28,&local_38);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f33a00 FUN_142f33a00 body=285 status=ok
// SIG undefined FUN_142f33a00(void)

void FUN_142f33a00(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18;
  undefined8 local_10;
  
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
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
  local_18 = local_28;
  local_10 = 0;
  if (local_28 != 0) {
    local_10 = uStack_20;
  }
  uVar1 = FUN_142ee7220(&local_18,local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f33b20 FUN_142f33b20 body=462 status=ok
// SIG undefined FUN_142f33b20(void)

void FUN_142f33b20(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_58 = 0;
  uStack_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
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
  FWeakObjectPtr::operator=(&local_68,0);
  local_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  FWeakObjectPtr::operator=(&local_78,0);
  local_70 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_48 = local_78;
  local_44 = local_74;
  local_40 = local_70;
  local_38 = local_68;
  local_34 = local_64;
  local_30 = local_60;
  local_28 = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = 0;
  if (local_58 != 0) {
    local_20 = uStack_50;
  }
  uVar1 = FUN_142ee72c0(&local_28,local_res18[0],local_res10,&local_38,&local_48);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f33cf0 FUN_142f33cf0 body=603 status=ok
// SIG undefined FUN_142f33cf0(void)

void FUN_142f33cf0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_78 [2];
  undefined8 local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [24];
  
  local_68 = 0;
  uStack_60 = 0;
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
  FText::FText(local_48);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
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
  local_58 = local_68;
  local_50 = 0;
  if (local_68 != 0) {
    local_50 = uStack_60;
  }
  uVar5 = FText::FText(local_30,local_48);
  uVar5 = FUN_142ee7830(&local_58,local_70,uVar5,local_78[0],local_res20[0],local_res18[0],
                        local_res10[0]);
  *param_3 = uVar5;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 142f33f50 FUN_142f33f50 body=793 status=ok
// SIG undefined FUN_142f33f50(void)

void FUN_142f33f50(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  local_88 = 0;
  uStack_80 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_b0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_b0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  FText::FText(local_58);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_b8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
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
  FWeakObjectPtr::operator=(&local_98,0);
  local_90 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  FWeakObjectPtr::operator=(&local_a8,0);
  local_a0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_78 = local_a8;
  local_74 = local_a4;
  local_70 = local_a0;
  local_68 = local_98;
  local_64 = local_94;
  local_60 = local_90;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_40 = local_88;
  local_38 = 0;
  if (local_88 != 0) {
    local_38 = uStack_80;
  }
  uVar5 = FText::FText(local_30,local_58);
  uVar5 = FUN_142ee7a90(&local_40,local_b0,uVar5,local_b8[0],local_res20[0],local_res18[0],
                        local_res10[0],&local_68,&local_78);
  *param_3 = uVar5;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 142f34270 FUN_142f34270 body=373 status=ok
// SIG undefined FUN_142f34270(void)

void FUN_142f34270(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_res10;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [24];
  
  local_58 = 0;
  uStack_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FText::FText(local_38);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_48 = local_58;
  local_40 = 0;
  if (local_58 != 0) {
    local_40 = uStack_50;
  }
  uVar5 = FText::FText(local_20,local_38);
  uVar5 = FUN_142ee7dd0(&local_48,local_res10,uVar5);
  *param_3 = uVar5;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 142f343f0 FUN_142f343f0 body=548 status=ok
// SIG undefined FUN_142f343f0(void)

void FUN_142f343f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_res10;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_30;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  local_78 = 0;
  uStack_70 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FText::FText(local_48);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  FWeakObjectPtr::operator=(&local_88,0);
  local_80 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  FWeakObjectPtr::operator=(&local_98,0);
  local_90 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_68 = local_98;
  local_64 = local_94;
  local_60 = local_90;
  local_58 = local_88;
  local_54 = local_84;
  local_50 = local_80;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_30 = local_78;
  local_28 = 0;
  if (local_78 != 0) {
    local_28 = uStack_70;
  }
  uVar5 = FText::FText(local_20,local_48);
  uVar5 = FUN_142ee7ec0(&local_30,local_res10,uVar5,&local_58,&local_68);
  *param_3 = uVar5;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 142f34640 execGetStepSize body=45 status=ok
// SIG undefined execGetStepSize(void)

void UAudioMaterialSlider::execGetStepSize(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetStepSize();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f34670 execGetTotalRadius body=45 status=ok
// SIG undefined execGetTotalRadius(void)

void ACG2ScannerWave::execGetTotalRadius(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FCurlHttpRequest::GetElapsedTime();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f346a0 FUN_142f346a0 body=123 status=ok
// SIG undefined FUN_142f346a0(void)

void FUN_142f346a0(undefined8 param_1,longlong param_2)

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
  FUN_142ef4950(param_1,local_res10[0]);
  return;
}



// FUNCTION 142f34720 FUN_142f34720 body=271 status=ok
// SIG undefined FUN_142f34720(void)

void FUN_142f34720(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 local_res10 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined8 uStack_1c;
  undefined4 local_14;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_34 = 0x3f000000;
  local_24 = 0;
  uStack_1c = 0;
  local_38 = 0;
  local_2c = 0x40000000;
  local_30 = 0;
  local_28 = 2;
  local_14 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = &local_38;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142ef4bf0(param_1,local_res10[0],puVar1);
  return;
}



// FUNCTION 142f34830 FUN_142f34830 body=43 status=ok
// SIG undefined FUN_142f34830(void)

void FUN_142f34830(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142ef58c0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f34880 FUN_142f34880 body=123 status=ok
// SIG undefined FUN_142f34880(void)

void FUN_142f34880(undefined8 param_1,longlong param_2)

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
  FUN_142efd850(param_1,local_res10[0]);
  return;
}



// FUNCTION 142f34900 FUN_142f34900 body=241 status=ok
// SIG undefined FUN_142f34900(void)

void FUN_142f34900(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
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
  uVar1 = FUN_142efff00(local_res20,local_res18,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f34a20 FUN_142f34a20 body=487 status=ok
// SIG undefined FUN_142f34a20(void)

void FUN_142f34a20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [24];
  
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  FText::FText(local_38);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
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
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_48 = local_60;
  uStack_44 = uStack_5c;
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar5 = FText::FText(local_20,local_38);
  FTurnBasedMatchmakerDelegate::OnMatchFound(local_68,uVar5,&local_48,local_res20[0],local_res10[0])
  ;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 142f34c10 FUN_142f34c10 body=204 status=ok
// SIG undefined FUN_142f34c10(void)

void FUN_142f34c10(undefined8 param_1,longlong param_2)

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
  FUN_142f0c830(param_1,puVar5);
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



// FUNCTION 142f34ce0 FUN_142f34ce0 body=124 status=ok
// SIG undefined FUN_142f34ce0(void)

void FUN_142f34ce0(undefined8 param_1,longlong param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
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
  FUN_142f0d090(param_1,&local_18);
  return;
}



// FUNCTION 142f34d60 FUN_142f34d60 body=204 status=ok
// SIG undefined FUN_142f34d60(void)

void FUN_142f34d60(undefined8 param_1,longlong param_2)

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
  FUN_142f0e2c0(param_1,puVar5);
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



// FUNCTION 142f34e30 FUN_142f34e30 body=123 status=ok
// SIG undefined FUN_142f34e30(void)

void FUN_142f34e30(undefined8 param_1,longlong param_2)

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
  FUN_142f0eb70(param_1,local_res10[0]);
  return;
}



// FUNCTION 142f34eb0 FUN_142f34eb0 body=123 status=ok
// SIG undefined FUN_142f34eb0(void)

void FUN_142f34eb0(undefined8 param_1,longlong param_2)

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
  FUN_142f0f6a0(param_1,local_res10[0]);
  return;
}



// FUNCTION 142f34f30 FUN_142f34f30 body=334 status=ok
// SIG undefined FUN_142f34f30(void)

void FUN_142f34f30(undefined8 param_1,longlong param_2)

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
  FUN_142f126e0(param_1,local_res10,puVar6);
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



// FUNCTION 142f35080 FUN_142f35080 body=334 status=ok
// SIG undefined FUN_142f35080(void)

void FUN_142f35080(undefined8 param_1,longlong param_2)

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
  FUN_142f12730(param_1,local_res10,puVar6);
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



// FUNCTION 142f351d0 FUN_142f351d0 body=128 status=ok
// SIG undefined FUN_142f351d0(void)

void FUN_142f351d0(undefined8 param_1,longlong param_2)

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
  thunk_FUN_142f12a10(param_1,local_res10);
  return;
}



// FUNCTION 142f35260 FUN_142f35260 body=47 status=ok
// SIG undefined FUN_142f35260(void)

longlong FUN_142f35260(void)

{
  if (DAT_146b41710 == 0) {
    FUN_141786440(&DAT_146b41710,&PTR_GetPrivateStaticClass_1459c5860);
  }
  return DAT_146b41710;
}



// FUNCTION 142f35290 FUN_142f35290 body=47 status=ok
// SIG undefined FUN_142f35290(void)

longlong FUN_142f35290(void)

{
  if (DAT_146b416b8 == 0) {
    FUN_141786a30(&DAT_146b416b8,&PTR_FUN_146759830);
  }
  return DAT_146b416b8;
}



// FUNCTION 142f352c0 FUN_142f352c0 body=47 status=ok
// SIG undefined FUN_142f352c0(void)

longlong FUN_142f352c0(void)

{
  if (DAT_146b416c0 == 0) {
    FUN_141786a30(&DAT_146b416c0,&PTR_FUN_146759a10);
  }
  return DAT_146b416c0;
}



// FUNCTION 142f352f0 FUN_142f352f0 body=47 status=ok
// SIG undefined FUN_142f352f0(void)

longlong FUN_142f352f0(void)

{
  if (DAT_146b416c8 == 0) {
    FUN_141786a30(&DAT_146b416c8,&PTR_FUN_146759b50);
  }
  return DAT_146b416c8;
}



// FUNCTION 142f35320 FUN_142f35320 body=47 status=ok
// SIG undefined FUN_142f35320(void)

longlong FUN_142f35320(void)

{
  if (DAT_146b416d0 == 0) {
    FUN_141786a30(&DAT_146b416d0,&PTR_FUN_146759d00);
  }
  return DAT_146b416d0;
}



// FUNCTION 142f35350 FUN_142f35350 body=47 status=ok
// SIG undefined FUN_142f35350(void)

longlong FUN_142f35350(void)

{
  if (DAT_146b416d8 == 0) {
    FUN_141786a30(&DAT_146b416d8,&PTR_FUN_146759e70);
  }
  return DAT_146b416d8;
}



// FUNCTION 142f35380 FUN_142f35380 body=47 status=ok
// SIG undefined FUN_142f35380(void)

longlong FUN_142f35380(void)

{
  if (DAT_146b416e0 == 0) {
    FUN_141786a30(&DAT_146b416e0,&PTR_FUN_146759ff0);
  }
  return DAT_146b416e0;
}



// FUNCTION 142f353b0 FUN_142f353b0 body=47 status=ok
// SIG undefined FUN_142f353b0(void)

longlong FUN_142f353b0(void)

{
  if (DAT_146b416e8 == 0) {
    FUN_141786a30(&DAT_146b416e8,&PTR_FUN_14675a0f0);
  }
  return DAT_146b416e8;
}



// FUNCTION 142f353e0 FUN_142f353e0 body=47 status=ok
// SIG undefined FUN_142f353e0(void)

longlong FUN_142f353e0(void)

{
  if (DAT_146b416f0 == 0) {
    FUN_141786a30(&DAT_146b416f0,&PTR_FUN_14675a250);
  }
  return DAT_146b416f0;
}



// FUNCTION 142f35410 FUN_142f35410 body=47 status=ok
// SIG undefined FUN_142f35410(void)

longlong FUN_142f35410(void)

{
  if (DAT_146b416f8 == 0) {
    FUN_141786a30(&DAT_146b416f8,&PTR_FUN_14675a380);
  }
  return DAT_146b416f8;
}



// FUNCTION 142f35440 FUN_142f35440 body=47 status=ok
// SIG undefined FUN_142f35440(void)

longlong FUN_142f35440(void)

{
  if (DAT_146b41700 == 0) {
    FUN_141786a30(&DAT_146b41700,&PTR_FUN_14675a4b0);
  }
  return DAT_146b41700;
}



// FUNCTION 142f35470 FUN_142f35470 body=47 status=ok
// SIG undefined FUN_142f35470(void)

longlong FUN_142f35470(void)

{
  if (DAT_146b41708 == 0) {
    FUN_141786a30(&DAT_146b41708,&PTR_FUN_14675a590);
  }
  return DAT_146b41708;
}



// FUNCTION 142f354a0 FUN_142f354a0 body=53 status=ok
// SIG undefined FUN_142f354a0(void)

void FUN_142f354a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x508;
    *puVar1 = &PTR_FUN_1459c8930;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f354e0 FUN_142f354e0 body=53 status=ok
// SIG undefined FUN_142f354e0(void)

void FUN_142f354e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x518;
    *puVar1 = &PTR_FUN_1459c8a48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f35520 FUN_142f35520 body=151 status=ok
// SIG undefined FUN_142f35520(void)

longlong FUN_142f35520(void)

{
  if (DAT_146b41928 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxWidgetFocusManager",&DAT_146b41928,FUN_140447710,0x90,
                  0x10000000,0,L"Engine",FUN_142f36570,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b41928;
}



// FUNCTION 142f355f0 FUN_142f355f0 body=53 status=ok
// SIG undefined FUN_142f355f0(void)

void FUN_142f355f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x34;
    *puVar1 = &PTR_FUN_1459c8c10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142f35630 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ULanguageItemCUnitWidget::GetPrivateStaticClass(void)

{
  if (DAT_146b41768 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxUISpinnerWidget",&DAT_146b41768,
                  StaticRegisterNativesULanguageItemCUnitWidget,0x2d8,0x10000000,0,L"Engine",
                  FUN_142f363f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141301c80,&LAB_140447700,0);
  }
  return DAT_146b41768;
}



// FUNCTION 142f356e0 FUN_142f356e0 body=47 status=ok
// SIG undefined FUN_142f356e0(void)

longlong FUN_142f356e0(void)

{
  if (DAT_146b41760 == 0) {
    FUN_141786440(&DAT_146b41760,&PTR_GetPrivateStaticClass_1459c6850);
  }
  return DAT_146b41760;
}



// FUNCTION 142f35710 FUN_142f35710 body=47 status=ok
// SIG undefined FUN_142f35710(void)

longlong FUN_142f35710(void)

{
  if (DAT_146b418d0 == 0) {
    FUN_141786440(&DAT_146b418d0,&PTR_LAB_1459c4410);
  }
  return DAT_146b418d0;
}



// FUNCTION 142f35740 FUN_142f35740 body=47 status=ok
// SIG undefined FUN_142f35740(void)

longlong FUN_142f35740(void)

{
  if (DAT_146b41758 == 0) {
    FUN_141786a30(&DAT_146b41758,&PTR_FUN_14675acb0);
  }
  return DAT_146b41758;
}



// FUNCTION 142f35780 FUN_142f35780 body=162 status=ok
// SIG undefined FUN_142f35780(void)

longlong FUN_142f35780(void)

{
  if (DAT_146b41908 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxWidgetComponent",&DAT_146b41908,FUN_142f38690,0x870,
                  0x10000000,0,L"Engine",FUN_142f36520,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  AUGDungeon::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b41908;
}



// FUNCTION 142f35830 FUN_142f35830 body=47 status=ok
// SIG undefined FUN_142f35830(void)

longlong FUN_142f35830(void)

{
  if (DAT_146b41900 == 0) {
    FUN_141786440(&DAT_146b41900,&PTR_FUN_1459c6c40);
  }
  return DAT_146b41900;
}



// FUNCTION 142f35860 FUN_142f35860 body=47 status=ok
// SIG undefined FUN_142f35860(void)

longlong FUN_142f35860(void)

{
  if (DAT_146b418e0 == 0) {
    FUN_141786a30(&DAT_146b418e0,&PTR_FUN_14675d070);
  }
  return DAT_146b418e0;
}



// FUNCTION 142f35890 FUN_142f35890 body=47 status=ok
// SIG undefined FUN_142f35890(void)

longlong FUN_142f35890(void)

{
  if (DAT_146b418e8 == 0) {
    FUN_141786a30(&DAT_146b418e8,&PTR_FUN_14675d0f0);
  }
  return DAT_146b418e8;
}



// FUNCTION 142f358c0 FUN_142f358c0 body=47 status=ok
// SIG undefined FUN_142f358c0(void)

longlong FUN_142f358c0(void)

{
  if (DAT_146b418f0 == 0) {
    FUN_141786a30(&DAT_146b418f0,&PTR_FUN_14675d170);
  }
  return DAT_146b418f0;
}



// FUNCTION 142f358f0 FUN_142f358f0 body=47 status=ok
// SIG undefined FUN_142f358f0(void)

longlong FUN_142f358f0(void)

{
  if (DAT_146b418f8 == 0) {
    FUN_141786a30(&DAT_146b418f8,&PTR_FUN_14675d370);
  }
  return DAT_146b418f8;
}



// FUNCTION 142f35930 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USlateBlueprintLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146b41718 == 0) {
    FUN_14171ccd0(L"/Script/GbxUI",L"GbxUILocalization",&DAT_146b41718,
                  StaticRegisterNativesUSlateBlueprintLibrary,0x28,0x10000000,0,L"Engine",
                  FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146b41718;
}



// FUNCTION 142f359e0 FUN_142f359e0 body=53 status=ok
// SIG undefined FUN_142f359e0(void)

void FUN_142f359e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1459ca120;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142f35a20 FUN_142f35a20 body=47 status=ok
// SIG undefined FUN_142f35a20(void)

longlong FUN_142f35a20(void)

{
  if (DAT_146b41850 == 0) {
    FUN_141786440(&DAT_146b41850,&PTR_GetPrivateStaticClass_1459c7b90);
  }
  return DAT_146b41850;
}



// FUNCTION 142f35a50 FUN_142f35a50 body=47 status=ok
// SIG undefined FUN_142f35a50(void)

longlong FUN_142f35a50(void)

{
  if (DAT_146b41770 == 0) {
    FUN_141786a30(&DAT_146b41770,&PTR_FUN_14675b020);
  }
  return DAT_146b41770;
}



// FUNCTION 142f35a80 FUN_142f35a80 body=47 status=ok
// SIG undefined FUN_142f35a80(void)

longlong FUN_142f35a80(void)

{
  if (DAT_146b41778 == 0) {
    FUN_141786a30(&DAT_146b41778,&PTR_FUN_14675b0a0);
  }
  return DAT_146b41778;
}



// FUNCTION 142f35ab0 FUN_142f35ab0 body=47 status=ok
// SIG undefined FUN_142f35ab0(void)

longlong FUN_142f35ab0(void)

{
  if (DAT_146b41780 == 0) {
    FUN_141786a30(&DAT_146b41780,&PTR_FUN_14675b120);
  }
  return DAT_146b41780;
}



// FUNCTION 142f35ae0 FUN_142f35ae0 body=47 status=ok
// SIG undefined FUN_142f35ae0(void)

longlong FUN_142f35ae0(void)

{
  if (DAT_146b41788 == 0) {
    FUN_141786a30(&DAT_146b41788,&PTR_FUN_14675b160);
  }
  return DAT_146b41788;
}



// FUNCTION 142f35b10 FUN_142f35b10 body=47 status=ok
// SIG undefined FUN_142f35b10(void)

longlong FUN_142f35b10(void)

{
  if (DAT_146b41790 == 0) {
    FUN_141786a30(&DAT_146b41790,&PTR_FUN_14675b1e0);
  }
  return DAT_146b41790;
}



// FUNCTION 142f35b40 FUN_142f35b40 body=47 status=ok
// SIG undefined FUN_142f35b40(void)

longlong FUN_142f35b40(void)

{
  if (DAT_146b41798 == 0) {
    FUN_141786a30(&DAT_146b41798,&PTR_FUN_14675b220);
  }
  return DAT_146b41798;
}



// FUNCTION 142f35b70 FUN_142f35b70 body=47 status=ok
// SIG undefined FUN_142f35b70(void)

longlong FUN_142f35b70(void)

{
  if (DAT_146b417a0 == 0) {
    FUN_141786a30(&DAT_146b417a0,&PTR_FUN_14675b260);
  }
  return DAT_146b417a0;
}



// FUNCTION 142f35ba0 FUN_142f35ba0 body=47 status=ok
// SIG undefined FUN_142f35ba0(void)

longlong FUN_142f35ba0(void)

{
  if (DAT_146b417a8 == 0) {
    FUN_141786a30(&DAT_146b417a8,&PTR_FUN_14675b2a0);
  }
  return DAT_146b417a8;
}



// FUNCTION 142f35bd0 FUN_142f35bd0 body=47 status=ok
// SIG undefined FUN_142f35bd0(void)

longlong FUN_142f35bd0(void)

{
  if (DAT_146b417b0 == 0) {
    FUN_141786a30(&DAT_146b417b0,&PTR_FUN_14675b350);
  }
  return DAT_146b417b0;
}



// FUNCTION 142f35c00 FUN_142f35c00 body=47 status=ok
// SIG undefined FUN_142f35c00(void)

longlong FUN_142f35c00(void)

{
  if (DAT_146b417b8 == 0) {
    FUN_141786a30(&DAT_146b417b8,&PTR_FUN_14675b410);
  }
  return DAT_146b417b8;
}



// FUNCTION 142f35c30 FUN_142f35c30 body=47 status=ok
// SIG undefined FUN_142f35c30(void)

longlong FUN_142f35c30(void)

{
  if (DAT_146b417c0 == 0) {
    FUN_141786a30(&DAT_146b417c0,&PTR_FUN_14675b4a0);
  }
  return DAT_146b417c0;
}



// FUNCTION 142f35c60 FUN_142f35c60 body=47 status=ok
// SIG undefined FUN_142f35c60(void)

longlong FUN_142f35c60(void)

{
  if (DAT_146b417c8 == 0) {
    FUN_141786a30(&DAT_146b417c8,&PTR_FUN_14675b570);
  }
  return DAT_146b417c8;
}



// FUNCTION 142f35c90 FUN_142f35c90 body=47 status=ok
// SIG undefined FUN_142f35c90(void)

longlong FUN_142f35c90(void)

{
  if (DAT_146b417d0 == 0) {
    FUN_141786a30(&DAT_146b417d0,&PTR_FUN_14675b5b0);
  }
  return DAT_146b417d0;
}



// FUNCTION 142f35cc0 FUN_142f35cc0 body=47 status=ok
// SIG undefined FUN_142f35cc0(void)

longlong FUN_142f35cc0(void)

{
  if (DAT_146b417d8 == 0) {
    FUN_141786a30(&DAT_146b417d8,&PTR_FUN_14675b5f0);
  }
  return DAT_146b417d8;
}



// FUNCTION 142f35cf0 FUN_142f35cf0 body=47 status=ok
// SIG undefined FUN_142f35cf0(void)

longlong FUN_142f35cf0(void)

{
  if (DAT_146b417e0 == 0) {
    FUN_141786a30(&DAT_146b417e0,&PTR_FUN_14675b670);
  }
  return DAT_146b417e0;
}



// FUNCTION 142f35d20 FUN_142f35d20 body=47 status=ok
// SIG undefined FUN_142f35d20(void)

longlong FUN_142f35d20(void)

{
  if (DAT_146b417e8 == 0) {
    FUN_141786a30(&DAT_146b417e8,&PTR_FUN_14675b770);
  }
  return DAT_146b417e8;
}



// FUNCTION 142f35d50 FUN_142f35d50 body=47 status=ok
// SIG undefined FUN_142f35d50(void)

longlong FUN_142f35d50(void)

{
  if (DAT_146b417f0 == 0) {
    FUN_141786a30(&DAT_146b417f0,&PTR_FUN_14675b830);
  }
  return DAT_146b417f0;
}


