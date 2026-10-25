// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142151cb0 FUN_142151cb0 body=128 status=ok
// SIG undefined FUN_142151cb0(void)

void FUN_142151cb0(undefined8 param_1,longlong param_2)

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
  FUN_1420e2950(param_1,local_res10);
  return;
}



// FUNCTION 142151d70 FUN_142151d70 body=43 status=ok
// SIG undefined FUN_142151d70(void)

void FUN_142151d70(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1420f9970();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142151da0 execGetDisplayedEntryWidgets body=134 status=ok
// SIG undefined execGetDisplayedEntryWidgets(void)

void UListViewBase::execGetDisplayedEntryWidgets
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_14091f410();
  if (param_3 != puVar2) {
    _Src = (void *)*puVar2;
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(param_3 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      return;
    }
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_3,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_3,_Src,(longlong)iVar1 << 3);
  }
  return;
}



// FUNCTION 142151e30 execGetIndexForItem body=143 status=ok
// SIG undefined execGetIndexForItem(void)

void UListView::execGetIndexForItem(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  uVar1 = GetIndexForItem(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142151ec0 execGetItemAt body=142 status=ok
// SIG undefined execGetItemAt(void)

void UListView::execGetItemAt(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = GetItemAt(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142151f50 execGetListItemObject body=45 status=ok
// SIG undefined execGetListItemObject(void)

void IUserObjectListEntry::execGetListItemObject
               (longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x40))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142151fb0 execGetMenuPosition body=54 status=ok
// SIG undefined execGetMenuPosition(void)

void UMenuAnchor::execGetMenuPosition(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)GetMenuPosition(param_1,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142151ff0 FUN_142151ff0 body=43 status=ok
// SIG undefined FUN_142151ff0(void)

void FUN_142151ff0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FSlateRHIRenderer::GetCurrentSceneIndex();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142152020 execGetText body=123 status=ok
// SIG undefined execGetText(void)

void UMultiLineEditableText::execGetText(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar5 = GetText(param_1,local_28);
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



// FUNCTION 1421520a0 FUN_1421520a0 body=123 status=ok
// SIG undefined FUN_1421520a0(void)

void FUN_1421520a0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar5 = FUN_1420ff010(param_1,local_28);
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



// FUNCTION 142152120 execGetValue body=43 status=ok
// SIG undefined execGetValue(void)

void UInt32Binding::execGetValue(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetValue();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142152150 execGetValue body=43 status=ok
// SIG undefined execGetValue(void)

void UMouseCursorBinding::execGetValue(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetValue();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142152180 FUN_142152180 body=43 status=ok
// SIG undefined FUN_142152180(void)

void FUN_142152180(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1421041b0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421521d0 FUN_1421521d0 body=44 status=ok
// SIG undefined FUN_1421521d0(void)

void FUN_1421521d0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x18))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142152200 FUN_142152200 body=43 status=ok
// SIG undefined FUN_142152200(void)

void FUN_142152200(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142106070();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142152230 FUN_142152230 body=43 status=ok
// SIG undefined FUN_142152230(void)

void FUN_142152230(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142106100();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142152260 FUN_142152260 body=126 status=ok
// SIG undefined FUN_142152260(void)

void FUN_142152260(undefined8 param_1,longlong param_2)

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
  FUN_142108920(param_1,local_res10[0]);
  return;
}



// FUNCTION 1421522e0 execOpen body=130 status=ok
// SIG undefined execOpen(void)

void UMenuAnchor::execOpen(undefined8 param_1,longlong param_2)

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
  Open(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 142152390 FUN_142152390 body=126 status=ok
// SIG undefined FUN_142152390(void)

void FUN_142152390(undefined8 param_1,longlong param_2)

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
  FUN_14212e790(param_1,local_res10[0]);
  return;
}



// FUNCTION 142152450 FUN_142152450 body=130 status=ok
// SIG undefined FUN_142152450(void)

void FUN_142152450(undefined8 param_1,longlong param_2)

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
  FUN_142130050(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1421524e0 execSetError body=192 status=ok
// SIG undefined execSetError(void)

void UMultiLineEditableTextBox::execSetError(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [24];
  
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
  uVar5 = FText::FText(local_20,local_38);
  SetError(param_1,uVar5);
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



// FUNCTION 1421525a0 FUN_1421525a0 body=130 status=ok
// SIG undefined FUN_1421525a0(void)

void FUN_1421525a0(undefined8 param_1,longlong param_2)

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
  FUN_1421326c0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 142152630 FUN_142152630 body=130 status=ok
// SIG undefined FUN_142152630(void)

void FUN_142152630(undefined8 param_1,longlong param_2)

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
  FUN_142132710(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1421526c0 FUN_1421526c0 body=126 status=ok
// SIG undefined FUN_1421526c0(void)

void FUN_1421526c0(undefined8 param_1,longlong param_2)

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
  FUN_142134a90(param_1,local_res10[0]);
  return;
}



// FUNCTION 142152740 FUN_142152740 body=127 status=ok
// SIG undefined FUN_142152740(void)

void FUN_142152740(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  
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
  local_res20[0] = local_res10[0];
  FUN_142135190(param_1,local_res20);
  return;
}



// FUNCTION 1421527c0 FUN_1421527c0 body=192 status=ok
// SIG undefined FUN_1421527c0(void)

void FUN_1421527c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [24];
  
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
  uVar5 = FText::FText(local_20,local_38);
  FUN_142135990(param_1,uVar5);
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



// FUNCTION 142152880 FUN_142152880 body=192 status=ok
// SIG undefined FUN_142152880(void)

void FUN_142152880(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [24];
  
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
  uVar5 = FText::FText(local_20,local_38);
  FUN_142135a80(param_1,uVar5);
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



// FUNCTION 142152940 FUN_142152940 body=43 status=ok
// SIG undefined FUN_142152940(void)

void FUN_142152940(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142137070();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142152970 execToggleOpen body=130 status=ok
// SIG undefined execToggleOpen(void)

void UMenuAnchor::execToggleOpen(undefined8 param_1,longlong param_2)

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
  ToggleOpen(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 142152a00 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ATroiCaoGateActor::GetPrivateStaticClass(void)

{
  if (DAT_146ae9768 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"RichTextBlock",&DAT_146ae9768,
                  StaticRegisterNativesATroiCaoGateActor,0x360,0x10000000,0,L"Engine",&LAB_1421549d0
                  ,TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                   ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_142151090,&LAB_140447700,0);
  }
  return DAT_146ae9768;
}



// FUNCTION 142152ac0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UScrollBoxSlot::GetPrivateStaticClass(void)

{
  if (DAT_146ae98d0 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"ScrollBoxSlot",&DAT_146ae98d0,StaticRegisterNativesUScrollBoxSlot
                  ,0x58,0x10000000,0,L"Engine",&LAB_142154ad0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPanelSlot::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae98d0;
}



// FUNCTION 142152b70 FUN_142152b70 body=47 status=ok
// SIG undefined FUN_142152b70(void)

longlong FUN_142152b70(void)

{
  if (DAT_146ae98c8 == 0) {
    FUN_141786440(&DAT_146ae98c8,&PTR_GetPrivateStaticClass_144fbf570);
  }
  return DAT_146ae98c8;
}



// FUNCTION 142152ba0 FUN_142152ba0 body=47 status=ok
// SIG undefined FUN_142152ba0(void)

longlong FUN_142152ba0(void)

{
  if (DAT_146ae98b0 == 0) {
    FUN_141786a30(&DAT_146ae98b0,&PTR_FUN_146510fb0);
  }
  return DAT_146ae98b0;
}



// FUNCTION 142152bd0 FUN_142152bd0 body=47 status=ok
// SIG undefined FUN_142152bd0(void)

longlong FUN_142152bd0(void)

{
  if (DAT_146ae98b8 == 0) {
    FUN_141786a30(&DAT_146ae98b8,&PTR_FUN_146511030);
  }
  return DAT_146ae98b8;
}



// FUNCTION 142152c00 FUN_142152c00 body=47 status=ok
// SIG undefined FUN_142152c00(void)

longlong FUN_142152c00(void)

{
  if (DAT_146ae98c0 == 0) {
    FUN_141786a30(&DAT_146ae98c0,&PTR_FUN_1465110b0);
  }
  return DAT_146ae98c0;
}



// FUNCTION 142152c30 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UOverlay::GetPrivateStaticClass(void)

{
  if (DAT_146ae9628 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"Overlay",&DAT_146ae9628,StaticRegisterNativesUOverlay,0x128,
                  0x10000000,0,L"Engine",&LAB_142154900,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPanelWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae9628;
}



// FUNCTION 142152ce0 FUN_142152ce0 body=47 status=ok
// SIG undefined FUN_142152ce0(void)

longlong FUN_142152ce0(void)

{
  if (DAT_146ae9620 == 0) {
    FUN_141786440(&DAT_146ae9620,&PTR_GetPrivateStaticClass_144fbf660);
  }
  return DAT_146ae9620;
}



// FUNCTION 142152d10 FUN_142152d10 body=47 status=ok
// SIG undefined FUN_142152d10(void)

longlong FUN_142152d10(void)

{
  if (DAT_146ae96b0 == 0) {
    FUN_141786440(&DAT_146ae96b0,&PTR_GetPrivateStaticClass_144fc09c0);
  }
  return DAT_146ae96b0;
}



// FUNCTION 142152d40 FUN_142152d40 body=47 status=ok
// SIG undefined FUN_142152d40(void)

longlong FUN_142152d40(void)

{
  if (DAT_146ae9618 == 0) {
    FUN_141786a30(&DAT_146ae9618,&PTR_FUN_14650dd80);
  }
  return DAT_146ae9618;
}



// FUNCTION 142152d90 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UOverlaySlot::GetPrivateStaticClass(void)

{
  if (DAT_146ae9650 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"OverlaySlot",&DAT_146ae9650,StaticRegisterNativesUOverlaySlot,
                  0x58,0x10000000,0,L"Engine",&LAB_142154920,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPanelSlot::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae9650;
}



// FUNCTION 142152e40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USizeBox::GetPrivateStaticClass(void)

{
  if (DAT_146ae9950 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"SizeBox",&DAT_146ae9950,StaticRegisterNativesUSizeBox,0x148,
                  0x10000000,0,L"Engine",&LAB_142154af0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UContentWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae9950;
}



// FUNCTION 142152ef0 FUN_142152ef0 body=47 status=ok
// SIG undefined FUN_142152ef0(void)

longlong FUN_142152ef0(void)

{
  if (DAT_146ae9648 == 0) {
    FUN_141786440(&DAT_146ae9648,&PTR_GetPrivateStaticClass_144fbfa70);
  }
  return DAT_146ae9648;
}



// FUNCTION 142152f20 FUN_142152f20 body=47 status=ok
// SIG undefined FUN_142152f20(void)

longlong FUN_142152f20(void)

{
  if (DAT_146ae9658 == 0) {
    FUN_141786440(&DAT_146ae9658,&PTR_GetPrivateStaticClass_144fbfc90);
  }
  return DAT_146ae9658;
}



// FUNCTION 142152f50 FUN_142152f50 body=47 status=ok
// SIG undefined FUN_142152f50(void)

longlong FUN_142152f50(void)

{
  if (DAT_146ae9630 == 0) {
    FUN_141786a30(&DAT_146ae9630,&PTR_FUN_14650de30);
  }
  return DAT_146ae9630;
}



// FUNCTION 142152f80 FUN_142152f80 body=47 status=ok
// SIG undefined FUN_142152f80(void)

longlong FUN_142152f80(void)

{
  if (DAT_146ae9638 == 0) {
    FUN_141786a30(&DAT_146ae9638,&PTR_FUN_14650deb0);
  }
  return DAT_146ae9638;
}



// FUNCTION 142152fb0 FUN_142152fb0 body=47 status=ok
// SIG undefined FUN_142152fb0(void)

longlong FUN_142152fb0(void)

{
  if (DAT_146ae9640 == 0) {
    FUN_141786a30(&DAT_146ae9640,&PTR_FUN_14650df30);
  }
  return DAT_146ae9640;
}



// FUNCTION 142152fe0 FUN_142152fe0 body=47 status=ok
// SIG undefined FUN_142152fe0(void)

longlong FUN_142152fe0(void)

{
  if (DAT_146ae9948 == 0) {
    FUN_141786440(&DAT_146ae9948,&PTR_GetPrivateStaticClass_144fc01f0);
  }
  return DAT_146ae9948;
}



// FUNCTION 142153010 FUN_142153010 body=47 status=ok
// SIG undefined FUN_142153010(void)

longlong FUN_142153010(void)

{
  if (DAT_146ae98d8 == 0) {
    FUN_141786a30(&DAT_146ae98d8,&PTR_FUN_1465111e0);
  }
  return DAT_146ae98d8;
}



// FUNCTION 142153040 FUN_142153040 body=47 status=ok
// SIG undefined FUN_142153040(void)

longlong FUN_142153040(void)

{
  if (DAT_146ae98e0 == 0) {
    FUN_141786a30(&DAT_146ae98e0,&PTR_FUN_146511220);
  }
  return DAT_146ae98e0;
}



// FUNCTION 142153070 FUN_142153070 body=47 status=ok
// SIG undefined FUN_142153070(void)

longlong FUN_142153070(void)

{
  if (DAT_146ae98e8 == 0) {
    FUN_141786a30(&DAT_146ae98e8,&PTR_FUN_146511260);
  }
  return DAT_146ae98e8;
}



// FUNCTION 1421530a0 FUN_1421530a0 body=47 status=ok
// SIG undefined FUN_1421530a0(void)

longlong FUN_1421530a0(void)

{
  if (DAT_146ae98f0 == 0) {
    FUN_141786a30(&DAT_146ae98f0,&PTR_FUN_1465112a0);
  }
  return DAT_146ae98f0;
}



// FUNCTION 1421530d0 FUN_1421530d0 body=47 status=ok
// SIG undefined FUN_1421530d0(void)

longlong FUN_1421530d0(void)

{
  if (DAT_146ae98f8 == 0) {
    FUN_141786a30(&DAT_146ae98f8,&PTR_FUN_1465112e0);
  }
  return DAT_146ae98f8;
}



// FUNCTION 142153100 FUN_142153100 body=47 status=ok
// SIG undefined FUN_142153100(void)

longlong FUN_142153100(void)

{
  if (DAT_146ae9900 == 0) {
    FUN_141786a30(&DAT_146ae9900,&PTR_FUN_146511320);
  }
  return DAT_146ae9900;
}



// FUNCTION 142153130 FUN_142153130 body=47 status=ok
// SIG undefined FUN_142153130(void)

longlong FUN_142153130(void)

{
  if (DAT_146ae9908 == 0) {
    FUN_141786a30(&DAT_146ae9908,&PTR_FUN_146511360);
  }
  return DAT_146ae9908;
}



// FUNCTION 142153160 FUN_142153160 body=47 status=ok
// SIG undefined FUN_142153160(void)

longlong FUN_142153160(void)

{
  if (DAT_146ae9910 == 0) {
    FUN_141786a30(&DAT_146ae9910,&PTR_FUN_1465113e0);
  }
  return DAT_146ae9910;
}



// FUNCTION 142153190 FUN_142153190 body=47 status=ok
// SIG undefined FUN_142153190(void)

longlong FUN_142153190(void)

{
  if (DAT_146ae9918 == 0) {
    FUN_141786a30(&DAT_146ae9918,&PTR_FUN_146511460);
  }
  return DAT_146ae9918;
}



// FUNCTION 1421531c0 FUN_1421531c0 body=47 status=ok
// SIG undefined FUN_1421531c0(void)

longlong FUN_1421531c0(void)

{
  if (DAT_146ae9920 == 0) {
    FUN_141786a30(&DAT_146ae9920,&PTR_FUN_1465114e0);
  }
  return DAT_146ae9920;
}



// FUNCTION 1421531f0 FUN_1421531f0 body=47 status=ok
// SIG undefined FUN_1421531f0(void)

longlong FUN_1421531f0(void)

{
  if (DAT_146ae9928 == 0) {
    FUN_141786a30(&DAT_146ae9928,&PTR_FUN_146511560);
  }
  return DAT_146ae9928;
}



// FUNCTION 142153220 FUN_142153220 body=47 status=ok
// SIG undefined FUN_142153220(void)

longlong FUN_142153220(void)

{
  if (DAT_146ae9930 == 0) {
    FUN_141786a30(&DAT_146ae9930,&PTR_FUN_1465115e0);
  }
  return DAT_146ae9930;
}



// FUNCTION 142153250 FUN_142153250 body=47 status=ok
// SIG undefined FUN_142153250(void)

longlong FUN_142153250(void)

{
  if (DAT_146ae9938 == 0) {
    FUN_141786a30(&DAT_146ae9938,&PTR_FUN_146511660);
  }
  return DAT_146ae9938;
}



// FUNCTION 142153280 FUN_142153280 body=47 status=ok
// SIG undefined FUN_142153280(void)

longlong FUN_142153280(void)

{
  if (DAT_146ae9940 == 0) {
    FUN_141786a30(&DAT_146ae9940,&PTR_FUN_1465116e0);
  }
  return DAT_146ae9940;
}



// FUNCTION 1421532b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UScaleBox::GetPrivateStaticClass(void)

{
  if (DAT_146ae97f0 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"ScaleBox",&DAT_146ae97f0,StaticRegisterNativesUScaleBox,0x138,
                  0x10000004,0,L"Engine",&LAB_142154a50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UContentWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae97f0;
}



// FUNCTION 142153380 FUN_142153380 body=47 status=ok
// SIG undefined FUN_142153380(void)

longlong FUN_142153380(void)

{
  if (DAT_146ae9760 == 0) {
    FUN_141786440(&DAT_146ae9760,&PTR_GetPrivateStaticClass_144fc06d0);
  }
  return DAT_146ae9760;
}



// FUNCTION 1421533b0 FUN_1421533b0 body=47 status=ok
// SIG undefined FUN_1421533b0(void)

longlong FUN_1421533b0(void)

{
  if (DAT_146ae9740 == 0) {
    FUN_141786a30(&DAT_146ae9740,&PTR_FUN_14650f2a0);
  }
  return DAT_146ae9740;
}



// FUNCTION 1421533e0 FUN_1421533e0 body=47 status=ok
// SIG undefined FUN_1421533e0(void)

longlong FUN_1421533e0(void)

{
  if (DAT_146ae9748 == 0) {
    FUN_141786a30(&DAT_146ae9748,&PTR_FUN_14650f320);
  }
  return DAT_146ae9748;
}



// FUNCTION 142153410 FUN_142153410 body=47 status=ok
// SIG undefined FUN_142153410(void)

longlong FUN_142153410(void)

{
  if (DAT_146ae9750 == 0) {
    FUN_141786a30(&DAT_146ae9750,&PTR_FUN_14650f3a0);
  }
  return DAT_146ae9750;
}



// FUNCTION 142153440 FUN_142153440 body=47 status=ok
// SIG undefined FUN_142153440(void)

longlong FUN_142153440(void)

{
  if (DAT_146ae9758 == 0) {
    FUN_141786a30(&DAT_146ae9758,&PTR_FUN_14650f420);
  }
  return DAT_146ae9758;
}



// FUNCTION 142153470 FUN_142153470 body=47 status=ok
// SIG undefined FUN_142153470(void)

longlong FUN_142153470(void)

{
  if (DAT_146ae9668 == 0) {
    FUN_141786a30(&DAT_146ae9668,&PTR_FUN_14650e190);
  }
  return DAT_146ae9668;
}



// FUNCTION 1421534a0 FUN_1421534a0 body=47 status=ok
// SIG undefined FUN_1421534a0(void)

longlong FUN_1421534a0(void)

{
  if (DAT_146ae9670 == 0) {
    FUN_141786a30(&DAT_146ae9670,&PTR_FUN_14650e1d0);
  }
  return DAT_146ae9670;
}



// FUNCTION 1421534d0 FUN_1421534d0 body=47 status=ok
// SIG undefined FUN_1421534d0(void)

longlong FUN_1421534d0(void)

{
  if (DAT_146ae9678 == 0) {
    FUN_141786a30(&DAT_146ae9678,&PTR_FUN_14650e290);
  }
  return DAT_146ae9678;
}



// FUNCTION 142153500 FUN_142153500 body=47 status=ok
// SIG undefined FUN_142153500(void)

longlong FUN_142153500(void)

{
  if (DAT_146ae9680 == 0) {
    FUN_141786a30(&DAT_146ae9680,&PTR_FUN_14650e350);
  }
  return DAT_146ae9680;
}



// FUNCTION 142153530 FUN_142153530 body=47 status=ok
// SIG undefined FUN_142153530(void)

longlong FUN_142153530(void)

{
  if (DAT_146ae9688 == 0) {
    FUN_141786a30(&DAT_146ae9688,&PTR_FUN_14650e3d0);
  }
  return DAT_146ae9688;
}



// FUNCTION 142153560 FUN_142153560 body=47 status=ok
// SIG undefined FUN_142153560(void)

longlong FUN_142153560(void)

{
  if (DAT_146ae9690 == 0) {
    FUN_141786a30(&DAT_146ae9690,&PTR_FUN_14650e460);
  }
  return DAT_146ae9690;
}



// FUNCTION 142153590 FUN_142153590 body=47 status=ok
// SIG undefined FUN_142153590(void)

longlong FUN_142153590(void)

{
  if (DAT_146ae9698 == 0) {
    FUN_141786a30(&DAT_146ae9698,&PTR_FUN_14650e530);
  }
  return DAT_146ae9698;
}



// FUNCTION 1421535c0 FUN_1421535c0 body=47 status=ok
// SIG undefined FUN_1421535c0(void)

longlong FUN_1421535c0(void)

{
  if (DAT_146ae96a0 == 0) {
    FUN_141786a30(&DAT_146ae96a0,&PTR_FUN_14650e600);
  }
  return DAT_146ae96a0;
}



// FUNCTION 1421535f0 FUN_1421535f0 body=47 status=ok
// SIG undefined FUN_1421535f0(void)

longlong FUN_1421535f0(void)

{
  if (DAT_146ae96a8 == 0) {
    FUN_141786a30(&DAT_146ae96a8,&PTR_FUN_14650e6c0);
  }
  return DAT_146ae96a8;
}



// FUNCTION 142153620 FUN_142153620 body=53 status=ok
// SIG undefined FUN_142153620(void)

void FUN_142153620(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1e8;
    *puVar1 = &PTR_FUN_144fc2ed0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142153670 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USizeBoxSlot::GetPrivateStaticClass(void)

{
  if (DAT_146ae9978 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"SizeBoxSlot",&DAT_146ae9978,StaticRegisterNativesUSizeBoxSlot,
                  0x60,0x10000000,0,L"Engine",&LAB_142154b10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPanelSlot::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae9978;
}



// FUNCTION 142153730 FUN_142153730 body=47 status=ok
// SIG undefined FUN_142153730(void)

longlong FUN_142153730(void)

{
  if (DAT_146ae9970 == 0) {
    FUN_141786440(&DAT_146ae9970,&PTR_GetPrivateStaticClass_144fc0c80);
  }
  return DAT_146ae9970;
}



// FUNCTION 142153760 FUN_142153760 body=47 status=ok
// SIG undefined FUN_142153760(void)

longlong FUN_142153760(void)

{
  if (DAT_146ae9958 == 0) {
    FUN_141786a30(&DAT_146ae9958,&PTR_FUN_146511b40);
  }
  return DAT_146ae9958;
}



// FUNCTION 142153790 FUN_142153790 body=47 status=ok
// SIG undefined FUN_142153790(void)

longlong FUN_142153790(void)

{
  if (DAT_146ae9960 == 0) {
    FUN_141786a30(&DAT_146ae9960,&PTR_FUN_146511bc0);
  }
  return DAT_146ae9960;
}



// FUNCTION 1421537c0 FUN_1421537c0 body=47 status=ok
// SIG undefined FUN_1421537c0(void)

longlong FUN_1421537c0(void)

{
  if (DAT_146ae9968 == 0) {
    FUN_141786a30(&DAT_146ae9968,&PTR_FUN_146511c40);
  }
  return DAT_146ae9968;
}



// FUNCTION 142153810 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USlateBlueprintLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146ae99e0 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"SlateBlueprintLibrary",&DAT_146ae99e0,
                  StaticRegisterNativesUSlateBlueprintLibrary,0x28,0x10000000,0,L"Engine",
                  &LAB_140492340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146ae99e0;
}



// FUNCTION 1421538c0 FUN_1421538c0 body=47 status=ok
// SIG undefined FUN_1421538c0(void)

longlong FUN_1421538c0(void)

{
  if (DAT_146ae99d8 == 0) {
    FUN_141786440(&DAT_146ae99d8,&PTR_GetPrivateStaticClass_144fc13e0);
  }
  return DAT_146ae99d8;
}



// FUNCTION 1421538f0 FUN_1421538f0 body=47 status=ok
// SIG undefined FUN_1421538f0(void)

longlong FUN_1421538f0(void)

{
  if (DAT_146ae9980 == 0) {
    FUN_141786a30(&DAT_146ae9980,&PTR_FUN_146511e30);
  }
  return DAT_146ae9980;
}



// FUNCTION 142153920 FUN_142153920 body=47 status=ok
// SIG undefined FUN_142153920(void)

longlong FUN_142153920(void)

{
  if (DAT_146ae9988 == 0) {
    FUN_141786a30(&DAT_146ae9988,&PTR_FUN_146511f70);
  }
  return DAT_146ae9988;
}



// FUNCTION 142153950 FUN_142153950 body=47 status=ok
// SIG undefined FUN_142153950(void)

longlong FUN_142153950(void)

{
  if (DAT_146ae9990 == 0) {
    FUN_141786a30(&DAT_146ae9990,&PTR_FUN_146512080);
  }
  return DAT_146ae9990;
}



// FUNCTION 142153980 FUN_142153980 body=47 status=ok
// SIG undefined FUN_142153980(void)

longlong FUN_142153980(void)

{
  if (DAT_146ae9998 == 0) {
    FUN_141786a30(&DAT_146ae9998,&PTR_FUN_146512140);
  }
  return DAT_146ae9998;
}



// FUNCTION 1421539b0 FUN_1421539b0 body=47 status=ok
// SIG undefined FUN_1421539b0(void)

longlong FUN_1421539b0(void)

{
  if (DAT_146ae99a0 == 0) {
    FUN_141786a30(&DAT_146ae99a0,&PTR_FUN_146512200);
  }
  return DAT_146ae99a0;
}



// FUNCTION 1421539e0 FUN_1421539e0 body=47 status=ok
// SIG undefined FUN_1421539e0(void)

longlong FUN_1421539e0(void)

{
  if (DAT_146ae99a8 == 0) {
    FUN_141786a30(&DAT_146ae99a8,&PTR_FUN_146512310);
  }
  return DAT_146ae99a8;
}



// FUNCTION 142153a10 FUN_142153a10 body=47 status=ok
// SIG undefined FUN_142153a10(void)

longlong FUN_142153a10(void)

{
  if (DAT_146ae99b0 == 0) {
    FUN_141786a30(&DAT_146ae99b0,&PTR_FUN_146512410);
  }
  return DAT_146ae99b0;
}



// FUNCTION 142153a40 FUN_142153a40 body=47 status=ok
// SIG undefined FUN_142153a40(void)

longlong FUN_142153a40(void)

{
  if (DAT_146ae99b8 == 0) {
    FUN_141786a30(&DAT_146ae99b8,&PTR_FUN_146512590);
  }
  return DAT_146ae99b8;
}



// FUNCTION 142153a70 FUN_142153a70 body=47 status=ok
// SIG undefined FUN_142153a70(void)

longlong FUN_142153a70(void)

{
  if (DAT_146ae99c0 == 0) {
    FUN_141786a30(&DAT_146ae99c0,&PTR_FUN_146512690);
  }
  return DAT_146ae99c0;
}



// FUNCTION 142153aa0 FUN_142153aa0 body=47 status=ok
// SIG undefined FUN_142153aa0(void)

longlong FUN_142153aa0(void)

{
  if (DAT_146ae99c8 == 0) {
    FUN_141786a30(&DAT_146ae99c8,&PTR_FUN_146512790);
  }
  return DAT_146ae99c8;
}



// FUNCTION 142153ad0 FUN_142153ad0 body=47 status=ok
// SIG undefined FUN_142153ad0(void)

longlong FUN_142153ad0(void)

{
  if (DAT_146ae99d0 == 0) {
    FUN_141786a30(&DAT_146ae99d0,&PTR_FUN_1465128d0);
  }
  return DAT_146ae99d0;
}



// FUNCTION 142153b10 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong URichTextBlockDecorator::GetPrivateStaticClass(void)

{
  if (DAT_146ae9778 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"RichTextBlockDecorator",&DAT_146ae9778,FUN_140447710,0x28,
                  0x10000001,0,L"Engine",&LAB_1421549f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146ae9778;
}



// FUNCTION 142153bb0 FUN_142153bb0 body=47 status=ok
// SIG undefined FUN_142153bb0(void)

longlong FUN_142153bb0(void)

{
  if (DAT_146ae9770 == 0) {
    FUN_141786440(&DAT_146ae9770,&PTR_GetPrivateStaticClass_144fc15b0);
  }
  return DAT_146ae9770;
}



// FUNCTION 142153be0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UProgressBar::GetPrivateStaticClass(void)

{
  if (DAT_146ae96e0 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"ProgressBar",&DAT_146ae96e0,StaticRegisterNativesUProgressBar,
                  0x310,0x10000000,0,L"Engine",&LAB_142154980,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae96e0;
}



// FUNCTION 142153ca0 FUN_142153ca0 body=162 status=ok
// SIG undefined FUN_142153ca0(void)

longlong FUN_142153ca0(void)

{
  if (DAT_146ae9798 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"RichTextBlockImageDecorator",&DAT_146ae9798,FUN_140447710,0x30,
                  0x10000000,0,L"Engine",&LAB_142154a10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  URichTextBlockDecorator::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae9798;
}



// FUNCTION 142153d50 FUN_142153d50 body=53 status=ok
// SIG undefined FUN_142153d50(void)

void FUN_142153d50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &PTR_FUN_144fc3040;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142153d90 FUN_142153d90 body=47 status=ok
// SIG undefined FUN_142153d90(void)

longlong FUN_142153d90(void)

{
  if (DAT_146ae96d8 == 0) {
    FUN_141786440(&DAT_146ae96d8,&PTR_GetPrivateStaticClass_144fc19d0);
  }
  return DAT_146ae96d8;
}



// FUNCTION 142153dc0 FUN_142153dc0 body=47 status=ok
// SIG undefined FUN_142153dc0(void)

longlong FUN_142153dc0(void)

{
  if (DAT_146ae96c0 == 0) {
    FUN_141786a30(&DAT_146ae96c0,&PTR_FUN_14650e7f0);
  }
  return DAT_146ae96c0;
}



// FUNCTION 142153df0 FUN_142153df0 body=47 status=ok
// SIG undefined FUN_142153df0(void)

longlong FUN_142153df0(void)

{
  if (DAT_146ae96c8 == 0) {
    FUN_141786a30(&DAT_146ae96c8,&PTR_FUN_14650e880);
  }
  return DAT_146ae96c8;
}



// FUNCTION 142153e20 FUN_142153e20 body=47 status=ok
// SIG undefined FUN_142153e20(void)

longlong FUN_142153e20(void)

{
  if (DAT_146ae96d0 == 0) {
    FUN_141786a30(&DAT_146ae96d0,&PTR_FUN_14650e900);
  }
  return DAT_146ae96d0;
}



// FUNCTION 142153e80 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong URetainerBox::GetPrivateStaticClass(void)

{
  if (DAT_146ae9728 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"RetainerBox",&DAT_146ae9728,StaticRegisterNativesURetainerBox,
                  0x148,0x10000000,0,L"Engine",&LAB_1421549b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UContentWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae9728;
}



// FUNCTION 142153f30 FUN_142153f30 body=47 status=ok
// SIG undefined FUN_142153f30(void)

longlong FUN_142153f30(void)

{
  if (DAT_146ae9720 == 0) {
    FUN_141786440(&DAT_146ae9720,&PTR_GetPrivateStaticClass_144fc1ef0);
  }
  return DAT_146ae9720;
}



// FUNCTION 142153f60 FUN_142153f60 body=47 status=ok
// SIG undefined FUN_142153f60(void)

longlong FUN_142153f60(void)

{
  if (DAT_146ae96f8 == 0) {
    FUN_141786a30(&DAT_146ae96f8,&PTR_FUN_14650eda0);
  }
  return DAT_146ae96f8;
}



// FUNCTION 142153f90 FUN_142153f90 body=47 status=ok
// SIG undefined FUN_142153f90(void)

longlong FUN_142153f90(void)

{
  if (DAT_146ae9700 == 0) {
    FUN_141786a30(&DAT_146ae9700,&PTR_FUN_14650ede0);
  }
  return DAT_146ae9700;
}



// FUNCTION 142153fc0 FUN_142153fc0 body=47 status=ok
// SIG undefined FUN_142153fc0(void)

longlong FUN_142153fc0(void)

{
  if (DAT_146ae9708 == 0) {
    FUN_141786a30(&DAT_146ae9708,&PTR_FUN_14650ee60);
  }
  return DAT_146ae9708;
}



// FUNCTION 142153ff0 FUN_142153ff0 body=47 status=ok
// SIG undefined FUN_142153ff0(void)

longlong FUN_142153ff0(void)

{
  if (DAT_146ae9710 == 0) {
    FUN_141786a30(&DAT_146ae9710,&PTR_FUN_14650ef10);
  }
  return DAT_146ae9710;
}



// FUNCTION 142154020 FUN_142154020 body=47 status=ok
// SIG undefined FUN_142154020(void)

longlong FUN_142154020(void)

{
  if (DAT_146ae9718 == 0) {
    FUN_141786a30(&DAT_146ae9718,&PTR_FUN_14650ef90);
  }
  return DAT_146ae9718;
}



// FUNCTION 142154050 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USafeZone::GetPrivateStaticClass(void)

{
  if (DAT_146ae97b0 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"SafeZone",&DAT_146ae97b0,StaticRegisterNativesUSafeZone,0x130,
                  0x10000000,0,L"Engine",&LAB_142154a30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UContentWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae97b0;
}



// FUNCTION 142154100 FUN_142154100 body=47 status=ok
// SIG undefined FUN_142154100(void)

longlong FUN_142154100(void)

{
  if (DAT_146ae97e8 == 0) {
    FUN_141786440(&DAT_146ae97e8,&PTR_GetPrivateStaticClass_144fc22c0);
  }
  return DAT_146ae97e8;
}



// FUNCTION 142154130 FUN_142154130 body=47 status=ok
// SIG undefined FUN_142154130(void)

longlong FUN_142154130(void)

{
  if (DAT_146ae97c8 == 0) {
    FUN_141786a30(&DAT_146ae97c8,&PTR_FUN_14650fbe0);
  }
  return DAT_146ae97c8;
}



// FUNCTION 142154160 FUN_142154160 body=47 status=ok
// SIG undefined FUN_142154160(void)

longlong FUN_142154160(void)

{
  if (DAT_146ae97d0 == 0) {
    FUN_141786a30(&DAT_146ae97d0,&PTR_FUN_14650fc60);
  }
  return DAT_146ae97d0;
}



// FUNCTION 1421541a0 FUN_1421541a0 body=47 status=ok
// SIG undefined FUN_1421541a0(void)

longlong FUN_1421541a0(void)

{
  if (DAT_146ae97d8 == 0) {
    FUN_141786a30(&DAT_146ae97d8,&PTR_FUN_14650fce0);
  }
  return DAT_146ae97d8;
}



// FUNCTION 1421541d0 FUN_1421541d0 body=47 status=ok
// SIG undefined FUN_1421541d0(void)

longlong FUN_1421541d0(void)

{
  if (DAT_146ae97e0 == 0) {
    FUN_141786a30(&DAT_146ae97e0,&PTR_FUN_14650fd60);
  }
  return DAT_146ae97e0;
}



// FUNCTION 142154200 FUN_142154200 body=47 status=ok
// SIG undefined FUN_142154200(void)

longlong FUN_142154200(void)

{
  if (DAT_146ae97a8 == 0) {
    FUN_141786440(&DAT_146ae97a8,&PTR_GetPrivateStaticClass_144fc2350);
  }
  return DAT_146ae97a8;
}



// FUNCTION 142154230 FUN_142154230 body=47 status=ok
// SIG undefined FUN_142154230(void)

longlong FUN_142154230(void)

{
  if (DAT_146ae97a0 == 0) {
    FUN_141786a30(&DAT_146ae97a0,&PTR_FUN_14650f880);
  }
  return DAT_146ae97a0;
}



// FUNCTION 142154280 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USafeZoneSlot::GetPrivateStaticClass(void)

{
  if (DAT_146ae97c0 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"SafeZoneSlot",&DAT_146ae97c0,FUN_140447710,0x60,0x10000000,0,
                  L"Engine",&LAB_142154a40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPanelSlot::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae97c0;
}



// FUNCTION 142154330 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UScaleBoxSlot::GetPrivateStaticClass(void)

{
  if (DAT_146ae9818 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"ScaleBoxSlot",&DAT_146ae9818,StaticRegisterNativesUScaleBoxSlot,
                  0x60,0x10000000,0,L"Engine",&LAB_142154a70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPanelSlot::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae9818;
}



// FUNCTION 1421543e0 FUN_1421543e0 body=47 status=ok
// SIG undefined FUN_1421543e0(void)

longlong FUN_1421543e0(void)

{
  if (DAT_146ae9810 == 0) {
    FUN_141786440(&DAT_146ae9810,&PTR_GetPrivateStaticClass_144fc27e0);
  }
  return DAT_146ae9810;
}



// FUNCTION 142154410 FUN_142154410 body=47 status=ok
// SIG undefined FUN_142154410(void)

longlong FUN_142154410(void)

{
  if (DAT_146ae97f8 == 0) {
    FUN_141786a30(&DAT_146ae97f8,&PTR_FUN_14650ff60);
  }
  return DAT_146ae97f8;
}



// FUNCTION 142154440 FUN_142154440 body=47 status=ok
// SIG undefined FUN_142154440(void)

longlong FUN_142154440(void)

{
  if (DAT_146ae9800 == 0) {
    FUN_141786a30(&DAT_146ae9800,&PTR_FUN_14650ffe0);
  }
  return DAT_146ae9800;
}



// FUNCTION 142154470 FUN_142154470 body=47 status=ok
// SIG undefined FUN_142154470(void)

longlong FUN_142154470(void)

{
  if (DAT_146ae9808 == 0) {
    FUN_141786a30(&DAT_146ae9808,&PTR_FUN_146510060);
  }
  return DAT_146ae9808;
}



// FUNCTION 1421544c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UScrollBar::GetPrivateStaticClass(void)

{
  if (DAT_146ae9830 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"ScrollBar",&DAT_146ae9830,StaticRegisterNativesUScrollBar,0x5f8,
                  0x10000000,0,L"Engine",&LAB_142154a90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae9830;
}



// FUNCTION 142154570 FUN_142154570 body=47 status=ok
// SIG undefined FUN_142154570(void)

longlong FUN_142154570(void)

{
  if (DAT_146ae9828 == 0) {
    FUN_141786440(&DAT_146ae9828,&PTR_GetPrivateStaticClass_144fc29d0);
  }
  return DAT_146ae9828;
}



// FUNCTION 1421545a0 FUN_1421545a0 body=47 status=ok
// SIG undefined FUN_1421545a0(void)

longlong FUN_1421545a0(void)

{
  if (DAT_146ae9820 == 0) {
    FUN_141786a30(&DAT_146ae9820,&PTR_FUN_146510200);
  }
  return DAT_146ae9820;
}



// FUNCTION 1421545e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UScrollBox::GetPrivateStaticClass(void)

{
  if (DAT_146ae98a8 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"ScrollBox",&DAT_146ae98a8,StaticRegisterNativesUScrollBox,0x860,
                  0x10000000,0,L"Engine",&LAB_142154ab0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPanelWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae98a8;
}



// FUNCTION 142154690 FUN_142154690 body=47 status=ok
// SIG undefined FUN_142154690(void)

longlong FUN_142154690(void)

{
  if (DAT_146ae98a0 == 0) {
    FUN_141786440(&DAT_146ae98a0,&PTR_GetPrivateStaticClass_144fbf120);
  }
  return DAT_146ae98a0;
}



// FUNCTION 1421546c0 FUN_1421546c0 body=47 status=ok
// SIG undefined FUN_1421546c0(void)

longlong FUN_1421546c0(void)

{
  if (DAT_146ae9840 == 0) {
    FUN_141786a30(&DAT_146ae9840,&PTR_FUN_146510470);
  }
  return DAT_146ae9840;
}



// FUNCTION 1421546f0 FUN_1421546f0 body=47 status=ok
// SIG undefined FUN_1421546f0(void)

longlong FUN_1421546f0(void)

{
  if (DAT_146ae9848 == 0) {
    FUN_141786a30(&DAT_146ae9848,&PTR_FUN_1465104f0);
  }
  return DAT_146ae9848;
}



// FUNCTION 142154720 FUN_142154720 body=47 status=ok
// SIG undefined FUN_142154720(void)

longlong FUN_142154720(void)

{
  if (DAT_146ae9850 == 0) {
    FUN_141786a30(&DAT_146ae9850,&PTR_FUN_146510570);
  }
  return DAT_146ae9850;
}



// FUNCTION 142154750 FUN_142154750 body=47 status=ok
// SIG undefined FUN_142154750(void)

longlong FUN_142154750(void)

{
  if (DAT_146ae9858 == 0) {
    FUN_141786a30(&DAT_146ae9858,&PTR_FUN_1465105b0);
  }
  return DAT_146ae9858;
}



// FUNCTION 142154780 FUN_142154780 body=47 status=ok
// SIG undefined FUN_142154780(void)

longlong FUN_142154780(void)

{
  if (DAT_146ae9860 == 0) {
    FUN_141786a30(&DAT_146ae9860,&PTR_FUN_1465105f0);
  }
  return DAT_146ae9860;
}



// FUNCTION 1421547b0 FUN_1421547b0 body=47 status=ok
// SIG undefined FUN_1421547b0(void)

longlong FUN_1421547b0(void)

{
  if (DAT_146ae9868 == 0) {
    FUN_141786a30(&DAT_146ae9868,&PTR_FUN_146510740);
  }
  return DAT_146ae9868;
}



// FUNCTION 1421547e0 FUN_1421547e0 body=47 status=ok
// SIG undefined FUN_1421547e0(void)

longlong FUN_1421547e0(void)

{
  if (DAT_146ae9870 == 0) {
    FUN_141786a30(&DAT_146ae9870,&PTR_FUN_1465107d0);
  }
  return DAT_146ae9870;
}



// FUNCTION 142154810 FUN_142154810 body=47 status=ok
// SIG undefined FUN_142154810(void)

longlong FUN_142154810(void)

{
  if (DAT_146ae9878 == 0) {
    FUN_141786a30(&DAT_146ae9878,&PTR_FUN_146510860);
  }
  return DAT_146ae9878;
}



// FUNCTION 142154840 FUN_142154840 body=47 status=ok
// SIG undefined FUN_142154840(void)

longlong FUN_142154840(void)

{
  if (DAT_146ae9880 == 0) {
    FUN_141786a30(&DAT_146ae9880,&PTR_FUN_1465108e0);
  }
  return DAT_146ae9880;
}



// FUNCTION 142154870 FUN_142154870 body=47 status=ok
// SIG undefined FUN_142154870(void)

longlong FUN_142154870(void)

{
  if (DAT_146ae9888 == 0) {
    FUN_141786a30(&DAT_146ae9888,&PTR_FUN_146510960);
  }
  return DAT_146ae9888;
}



// FUNCTION 1421548a0 FUN_1421548a0 body=47 status=ok
// SIG undefined FUN_1421548a0(void)

longlong FUN_1421548a0(void)

{
  if (DAT_146ae9890 == 0) {
    FUN_141786a30(&DAT_146ae9890,&PTR_FUN_146510a20);
  }
  return DAT_146ae9890;
}



// FUNCTION 1421548d0 FUN_1421548d0 body=47 status=ok
// SIG undefined FUN_1421548d0(void)

longlong FUN_1421548d0(void)

{
  if (DAT_146ae9898 == 0) {
    FUN_141786a30(&DAT_146ae9898,&PTR_FUN_146510aa0);
  }
  return DAT_146ae9898;
}



// FUNCTION 142154b30 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FRichImageRow::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FSlateBrush::~FSlateBrush(param_1 + 1);
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 142154b80 FUN_142154b80 body=66 status=ok
// SIG undefined FUN_142154b80(void)

undefined8 * FUN_142154b80(undefined8 *param_1,ulonglong param_2)

{
  FUN_140691580(param_1 + 1);
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e8);
  }
  return param_1;
}



// FUNCTION 142154bd0 Construct body=175 status=ok
// SIG undefined Construct(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UScriptStruct::TCppStructOps<FRichImageRow>::Construct(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uStackX_14;
  
  ::_guard_xfg_dispatch_icall_nop(param_2 + 2,0,0x80);
  *param_2 = &PTR__scalar_deleting_destructor__144fc3030;
  param_2[1] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_2 + 2) = 0x42000000;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0x42000000;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_2[5] = _DAT_1464aa6c0;
  param_2[6] = uVar1;
  *(undefined1 *)(param_2 + 7) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_2 + 0xd) = uVar2;
  *(undefined4 *)(param_2 + 0xc) = uVar2;
  *(undefined1 *)(param_2 + 0xe) = 0;
  uStackX_14 = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_2 + 0x6c) = uStackX_14;
  *(undefined4 *)((longlong)param_2 + 100) = uStackX_14;
  *(undefined4 *)((longlong)param_2 + 0x74) = 3;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) & 0xfc;
  return;
}



// FUNCTION 142154c80 FUN_142154c80 body=50 status=ok
// SIG undefined FUN_142154c80(void)

void FUN_142154c80(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2 + 1,0,0x1e0);
  *param_2 = &PTR_FUN_144fc2ec0;
  FUN_1417f2e90(param_2 + 1);
  return;
}



// FUNCTION 142154cc0 Copy body=75 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FRichImageRow>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = param_3 + 8;
    do {
      FUN_1406922e0(lVar1 + (param_2 - param_3),lVar1);
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142154d10 FUN_142154d10 body=428 status=ok
// SIG undefined FUN_142154d10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142154d10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (param_4 != 0) {
    puVar11 = (undefined8 *)(param_3 + 0x18);
    do {
      *(undefined8 *)(param_2 + 0x10) = puVar11[-1];
      puVar1 = (undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(param_2 + 0x18) = *puVar11;
      uVar5 = *(undefined4 *)((longlong)puVar11 + 0xc);
      uVar6 = *(undefined4 *)(puVar11 + 2);
      uVar7 = *(undefined4 *)((longlong)puVar11 + 0x14);
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(puVar11 + 1);
      *(undefined4 *)(param_2 + 0x24) = uVar5;
      *(undefined4 *)(param_2 + 0x28) = uVar6;
      *(undefined4 *)(param_2 + 0x2c) = uVar7;
      uVar5 = *(undefined4 *)((longlong)puVar11 + 0x1c);
      uVar6 = *(undefined4 *)(puVar11 + 4);
      uVar7 = *(undefined4 *)((longlong)puVar11 + 0x24);
      *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(puVar11 + 3);
      *(undefined4 *)(param_2 + 0x34) = uVar5;
      *(undefined4 *)(param_2 + 0x38) = uVar6;
      *(undefined4 *)(param_2 + 0x3c) = uVar7;
      uStack_40 = (longlong *)puVar11[6];
      local_48 = puVar11[5];
      if (uStack_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_40 + 1) = (int)uStack_40[1] + 1;
        UNLOCK();
      }
      if (&local_48 != puVar1) {
        local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
        uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
        uVar8 = *puVar1;
        plVar9 = *(longlong **)(param_2 + 0x48);
        local_38 = (undefined4)local_48;
        uStack_34 = local_48._4_4_;
        uStack_30 = (undefined4)uStack_40;
        uStack_2c = uStack_40._4_4_;
        *(undefined4 *)puVar1 = (undefined4)local_48;
        *(undefined4 *)(param_2 + 0x44) = local_48._4_4_;
        *(undefined4 *)(param_2 + 0x48) = (undefined4)uStack_40;
        *(undefined4 *)(param_2 + 0x4c) = uStack_40._4_4_;
        local_48 = uVar8;
        uStack_40 = plVar9;
      }
      plVar9 = uStack_40;
      if (uStack_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = uStack_40 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*uStack_40)(uStack_40);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*uStack_40 + 8))(uStack_40,1);
          }
        }
      }
      *(undefined8 *)(param_2 + 0x50) = puVar11[7];
      *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(puVar11 + 8);
      *(undefined1 *)(param_2 + 0x5c) = *(undefined1 *)((longlong)puVar11 + 0x44);
      FUN_140692440(param_2 + 0x60,puVar11 + 9);
      *(undefined8 *)(param_2 + 0x88) = puVar11[0xe];
      uVar5 = *(undefined4 *)((longlong)puVar11 + 0x7c);
      uVar6 = *(undefined4 *)(puVar11 + 0x10);
      uVar7 = *(undefined4 *)((longlong)puVar11 + 0x84);
      *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(puVar11 + 0xf);
      *(undefined4 *)(param_2 + 0x94) = uVar5;
      *(undefined4 *)(param_2 + 0x98) = uVar6;
      *(undefined4 *)(param_2 + 0x9c) = uVar7;
      FUN_140692440(param_2 + 0xa0,puVar11 + 0x11);
      uVar5 = *(undefined4 *)((longlong)puVar11 + 0xb4);
      uVar6 = *(undefined4 *)(puVar11 + 0x17);
      uVar7 = *(undefined4 *)((longlong)puVar11 + 0xbc);
      *(undefined4 *)(param_2 + 200) = *(undefined4 *)(puVar11 + 0x16);
      *(undefined4 *)(param_2 + 0xcc) = uVar5;
      *(undefined4 *)(param_2 + 0xd0) = uVar6;
      *(undefined4 *)(param_2 + 0xd4) = uVar7;
      FUN_1406922e0(param_2 + 0xd8,puVar11 + 0x18);
      FUN_1406922e0(param_2 + 0x160,puVar11 + 0x29);
      puVar11 = puVar11 + 0x3d;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x1e8;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142154ec0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPanelSlot::GetPrivateStaticClass(void)

{
  if (DAT_146ae9660 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"PanelSlot",&DAT_146ae9660,FUN_140447710,0x38,0x10000000,0,
                  L"Engine",&LAB_142154940,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_142155180,&LAB_140447700,0);
  }
  return DAT_146ae9660;
}



// FUNCTION 142154f70 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPanelWidget::GetPrivateStaticClass(void)

{
  if (DAT_146ae96b8 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"PanelWidget",&DAT_146ae96b8,StaticRegisterNativesUPanelWidget,
                  0x118,0x10000001,0,L"Engine",&LAB_142154960,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae96b8;
}



// FUNCTION 142155020 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPropertyBinding::GetPrivateStaticClass(void)

{
  if (DAT_146ae96f0 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"PropertyBinding",&DAT_146ae96f0,FUN_140447710,0x60,0x10000000,0,
                  L"Engine",&LAB_1421549a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146ae96f0;
}



// FUNCTION 1421550c0 Get_Z_Construct_UScriptStruct_FRichImageRow_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FRichImageRow_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FRichImageRow_CRC(void)

{
  return 0xce80150c;
}



// FUNCTION 1421550d0 Get_Z_Construct_UScriptStruct_FRichTextStyleRow_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FRichTextStyleRow_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FRichTextStyleRow_CRC(void)

{
  return 0xe63813a3;
}



// FUNCTION 142155190 StaticRegisterNativesUOverlay body=34 status=ok
// SIG undefined StaticRegisterNativesUOverlay(void)

void UOverlay::StaticRegisterNativesUOverlay(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddChildToOverlay_144fc2d68,1);
  return;
}



// FUNCTION 1421551c0 StaticRegisterNativesUOverlaySlot body=34 status=ok
// SIG undefined StaticRegisterNativesUOverlaySlot(void)

void UOverlaySlot::StaticRegisterNativesUOverlaySlot(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetHorizontalAlignment_144fc2d78,3);
  return;
}



// FUNCTION 1421551f0 StaticRegisterNativesUPanelWidget body=34 status=ok
// SIG undefined StaticRegisterNativesUPanelWidget(void)

void UPanelWidget::StaticRegisterNativesUPanelWidget(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddChild_144fc2db0,9);
  return;
}



// FUNCTION 142155220 StaticRegisterNativesUProgressBar body=34 status=ok
// SIG undefined StaticRegisterNativesUProgressBar(void)

void UProgressBar::StaticRegisterNativesUProgressBar(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetFillColorAndOpacity_144fc2e40,3);
  return;
}



// FUNCTION 142155250 StaticRegisterNativesURetainerBox body=34 status=ok
// SIG undefined StaticRegisterNativesURetainerBox(void)

void URetainerBox::StaticRegisterNativesURetainerBox(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetEffectMaterial_144fc2e70,5);
  return;
}



// FUNCTION 142155280 StaticRegisterNativesATroiCaoGateActor body=34 status=ok
// SIG undefined StaticRegisterNativesATroiCaoGateActor(void)

void ATroiCaoGateActor::StaticRegisterNativesATroiCaoGateActor(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetDecoratorByClass_144fc2ff0,4);
  return;
}



// FUNCTION 1421552b0 StaticRegisterNativesUSafeZone body=34 status=ok
// SIG undefined StaticRegisterNativesUSafeZone(void)

void USafeZone::StaticRegisterNativesUSafeZone(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetSidesToPad_144fc3158,1);
  return;
}



// FUNCTION 1421552e0 StaticRegisterNativesUScaleBox body=34 status=ok
// SIG undefined StaticRegisterNativesUScaleBox(void)

void UScaleBox::StaticRegisterNativesUScaleBox(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetIgnoreInheritedScale_144fc3170,4);
  return;
}



// FUNCTION 142155310 StaticRegisterNativesUScaleBoxSlot body=34 status=ok
// SIG undefined StaticRegisterNativesUScaleBoxSlot(void)

void UScaleBoxSlot::StaticRegisterNativesUScaleBoxSlot(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetHorizontalAlignment_144fc31b0,3);
  return;
}



// FUNCTION 142155340 StaticRegisterNativesUScrollBar body=34 status=ok
// SIG undefined StaticRegisterNativesUScrollBar(void)

void UScrollBar::StaticRegisterNativesUScrollBar(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetState_144fc31e0,1);
  return;
}



// FUNCTION 142155370 StaticRegisterNativesUScrollBox body=34 status=ok
// SIG undefined StaticRegisterNativesUScrollBox(void)

void UScrollBox::StaticRegisterNativesUScrollBox(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetPhysicalScrollOffset_144fc31f0,0xc);
  return;
}



// FUNCTION 1421553a0 StaticRegisterNativesUScrollBoxSlot body=34 status=ok
// SIG undefined StaticRegisterNativesUScrollBoxSlot(void)

void UScrollBoxSlot::StaticRegisterNativesUScrollBoxSlot(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetHorizontalAlignment_144fc32b0,3);
  return;
}



// FUNCTION 1421553d0 StaticRegisterNativesUSizeBox body=34 status=ok
// SIG undefined StaticRegisterNativesUSizeBox(void)

void USizeBox::StaticRegisterNativesUSizeBox(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClearHeightOverride_144fc32e0,0xe);
  return;
}



// FUNCTION 142155400 StaticRegisterNativesUSizeBoxSlot body=34 status=ok
// SIG undefined StaticRegisterNativesUSizeBoxSlot(void)

void USizeBoxSlot::StaticRegisterNativesUSizeBoxSlot(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetHorizontalAlignment_144fc33c0,3);
  return;
}



// FUNCTION 142155430 StaticRegisterNativesUSlateBlueprintLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUSlateBlueprintLibrary(void)

void USlateBlueprintLibrary::StaticRegisterNativesUSlateBlueprintLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AbsoluteToLocal_144fc33f0,0xb);
  return;
}



// FUNCTION 142155460 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FRichImageRow::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146ae9780 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FRichImageRow_CRC();
    uVar2 = Z_Construct_UPackage__Script_UMG();
    DAT_146ae9780 = GetStaticStruct(FUN_1421555e0,uVar2,L"RichImageRow",0x90,uVar1);
  }
  return;
}



// FUNCTION 1421554c0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FVectorParameterNameAndCurves::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146ae9730 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FRichTextStyleRow_CRC();
    uVar2 = Z_Construct_UPackage__Script_UMG();
    DAT_146ae9730 = GetStaticStruct(FUN_142155610,uVar2,L"RichTextStyleRow",0x1e8,uVar1);
  }
  return;
}



// FUNCTION 142155520 FUN_142155520 body=47 status=ok
// SIG undefined FUN_142155520(void)

longlong FUN_142155520(void)

{
  if (DAT_146ae96e8 == 0) {
    FUN_141786440(&DAT_146ae96e8,&PTR_GetPrivateStaticClass_144fc1be0);
  }
  return DAT_146ae96e8;
}



// FUNCTION 142155550 FUN_142155550 body=47 status=ok
// SIG undefined FUN_142155550(void)

longlong FUN_142155550(void)

{
  if (DAT_146ae9790 == 0) {
    FUN_141786440(&DAT_146ae9790,&PTR_FUN_144fc1780);
  }
  return DAT_146ae9790;
}



// FUNCTION 142155580 FUN_142155580 body=47 status=ok
// SIG undefined FUN_142155580(void)

longlong FUN_142155580(void)

{
  if (DAT_146ae97b8 == 0) {
    FUN_141786440(&DAT_146ae97b8,&PTR_GetPrivateStaticClass_144fc2590);
  }
  return DAT_146ae97b8;
}



// FUNCTION 1421555b0 FUN_1421555b0 body=47 status=ok
// SIG undefined FUN_1421555b0(void)

longlong FUN_1421555b0(void)

{
  if (DAT_146ae9838 == 0) {
    FUN_141786a30(&DAT_146ae9838,&PTR_Z_Construct_UPackage__Script_UMG_1465103f0);
  }
  return DAT_146ae9838;
}



// FUNCTION 1421555e0 FUN_1421555e0 body=47 status=ok
// SIG undefined FUN_1421555e0(void)

longlong FUN_1421555e0(void)

{
  if (DAT_146ae9788 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146ae9788,&PTR_Z_Construct_UPackage__Script_UMG_14650f680);
  }
  return DAT_146ae9788;
}



// FUNCTION 142155610 FUN_142155610 body=47 status=ok
// SIG undefined FUN_142155610(void)

longlong FUN_142155610(void)

{
  if (DAT_146ae9738 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146ae9738,&PTR_Z_Construct_UPackage__Script_UMG_14650f1c0);
  }
  return DAT_146ae9738;
}



// FUNCTION 142155640 execAbsoluteToLocal body=245 status=ok
// SIG undefined execAbsoluteToLocal(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void USlateBlueprintLibrary::execAbsoluteToLocal
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  FGeometry::FGeometry(local_58);
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)AbsoluteToLocal(local_60,puVar2,local_68);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142155740 execAbsoluteToViewport body=329 status=ok
// SIG undefined execAbsoluteToViewport(void)

void USlateBlueprintLibrary::execAbsoluteToViewport(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 local_res10;
  undefined1 local_res20 [8];
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_10);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = local_res20;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  puVar2 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1420de980(local_res10,local_10,puVar1,puVar2);
  return;
}



// FUNCTION 142155890 FUN_142155890 body=144 status=ok
// SIG undefined FUN_142155890(void)

void FUN_142155890(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_1420def40(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142155920 execAddChildToOverlay body=144 status=ok
// SIG undefined execAddChildToOverlay(void)

void UOverlay::execAddChildToOverlay(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = AddChildToOverlay(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142155ab0 FUN_142155ab0 body=720 status=ok
// SIG undefined FUN_142155ab0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142155ab0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined4 uStackX_14;
  undefined **local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  longlong *plStack_c0;
  byte local_b8;
  undefined **local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *plStack_30;
  byte local_28;
  
  local_28 = local_28 & 0xfc;
  local_a8 = &PTR__scalar_deleting_destructor__143f489a8;
  local_88 = _DAT_1464aa6c0;
  uStack_80 = _DAT_1464aa6c8;
  local_98 = 0;
  uStack_90 = 0;
  local_50 = (undefined4)DAT_1468b5d88;
  local_68 = (longlong *)0x0;
  uStack_60 = 0;
  uStackX_14 = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
  local_44 = uStackX_14;
  local_4c = uStackX_14;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_a0 = 0x42000000;
  local_9c = 0x42000000;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_40 = 0;
  local_3c = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_48 = local_50;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_138 = &PTR__scalar_deleting_destructor__143f489a8;
  local_128 = 0;
  uStack_120 = 0;
  local_f8 = (longlong *)0x0;
  uStack_f0 = 0;
  pppuVar8 = &local_a8;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar8 = *(undefined ****)(param_2 + 0x38);
  }
  local_118 = _DAT_1464aa6c0;
  uStack_110 = _DAT_1464aa6c8;
  local_e0 = (undefined4)DAT_1468b5d88;
  local_b8 = local_b8 & 0xfc;
  uStackX_14 = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
  local_d4 = uStackX_14;
  local_dc = uStackX_14;
  local_c8 = 0;
  plStack_c0 = (longlong *)0x0;
  local_130 = 0x42000000;
  local_12c = 0x42000000;
  local_108 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_d0 = 0;
  local_cc = 3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_d8 = local_e0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_138);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_138);
  }
  pppuVar7 = &local_138;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar7 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar6 = USlateBlueprintLibrary::EqualEqual_SlateBrush(pppuVar8,pppuVar7);
  plVar5 = plStack_c0;
  *param_3 = uVar6;
  local_138 = &PTR__scalar_deleting_destructor__143f489a8;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
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
  plVar5 = local_f8;
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_f8)(local_f8);
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
  plVar5 = plStack_30;
  local_a8 = &PTR__scalar_deleting_destructor__143f489a8;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
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
  plVar5 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_68)(local_68);
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



// FUNCTION 142155d80 execGetAbsoluteSize body=188 status=ok
// SIG undefined execGetAbsoluteSize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void USlateBlueprintLibrary::execGetAbsoluteSize
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  FGeometry::FGeometry(local_50);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar2 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)GetAbsoluteSize(local_58,puVar2);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142155e40 execGetChildAt body=142 status=ok
// SIG undefined execGetChildAt(void)

void UPanelWidget::execGetChildAt(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = GetChildAt(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142155ed0 execGetChildIndex body=143 status=ok
// SIG undefined execGetChildIndex(void)

void UPanelWidget::execGetChildIndex(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  uVar1 = GetChildIndex(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142155f60 FUN_142155f60 body=43 status=ok
// SIG undefined FUN_142155f60(void)

void FUN_142155f60(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1420f9a60();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142155f90 FUN_142155f90 body=144 status=ok
// SIG undefined FUN_142155f90(void)

void FUN_142155f90(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_1420fa590(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142156020 FUN_142156020 body=44 status=ok
// SIG undefined FUN_142156020(void)

void FUN_142156020(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1420fba50();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142156050 execGetLocalSize body=188 status=ok
// SIG undefined execGetLocalSize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void USlateBlueprintLibrary::execGetLocalSize
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  FGeometry::FGeometry(local_50);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar2 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)GetLocalSize(local_58,puVar2);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142156110 FUN_142156110 body=45 status=ok
// SIG undefined FUN_142156110(void)

void FUN_142156110(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1420fd730();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142156140 FUN_142156140 body=45 status=ok
// SIG undefined FUN_142156140(void)

void FUN_142156140(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1420fe220();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142156170 FUN_142156170 body=123 status=ok
// SIG undefined FUN_142156170(void)

void FUN_142156170(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar5 = FUN_1420ff060(param_1,local_28);
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



// FUNCTION 1421561f0 FUN_1421561f0 body=45 status=ok
// SIG undefined FUN_1421561f0(void)

void FUN_1421561f0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1420ffeb0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142156220 execHasAnyChildren body=43 status=ok
// SIG undefined execHasAnyChildren(void)

void UPanelWidget::execHasAnyChildren(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = HasAnyChildren();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142156250 execHasChild body=143 status=ok
// SIG undefined execHasChild(void)

void UPanelWidget::execHasChild(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = HasChild(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421562e0 execIsUnderLocation body=251 status=ok
// SIG undefined execIsUnderLocation(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void USlateBlueprintLibrary::execIsUnderLocation
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  FGeometry::FGeometry(local_60);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar3 = local_60;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar2 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = IsUnderLocation(puVar3,puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421563e0 execLocalToAbsolute body=245 status=ok
// SIG undefined execLocalToAbsolute(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void USlateBlueprintLibrary::execLocalToAbsolute
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  FGeometry::FGeometry(local_58);
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)LocalToAbsolute(local_60,puVar2,local_68);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 1421564e0 execLocalToViewport body=471 status=ok
// SIG undefined execLocalToViewport(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void USlateBlueprintLibrary::execLocalToViewport(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  FGeometry::FGeometry(local_48);
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
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
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
  puVar3 = local_60;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_78 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_78 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  LocalToViewport(local_68,puVar2,local_50,puVar3);
  return;
}



// FUNCTION 1421566c0 FUN_1421566c0 body=143 status=ok
// SIG undefined FUN_1421566c0(void)

void FUN_1421566c0(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_14212c190(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142156750 execRemoveAt body=141 status=ok
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
  uVar1 = FUN_14212c1f0(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142156800 FUN_142156800 body=243 status=ok
// SIG undefined FUN_142156800(void)

void FUN_142156800(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 local_res10 [2];
  undefined1 local_res20 [8];
  undefined8 local_18 [2];
  
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
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  puVar1 = local_res20;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14212dc50(local_res10[0],local_18[0],puVar1);
  return;
}



// FUNCTION 142156900 FUN_142156900 body=243 status=ok
// SIG undefined FUN_142156900(void)

void FUN_142156900(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 local_res10 [2];
  undefined1 local_res20 [8];
  undefined8 local_18 [2];
  
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
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  puVar1 = local_res20;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14212dd60(local_res10[0],local_18[0],puVar1);
  return;
}



// FUNCTION 142156a00 execScreenToWidgetLocal body=375 status=ok
// SIG undefined execScreenToWidgetLocal(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void USlateBlueprintLibrary::execScreenToWidgetLocal(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  FGeometry::FGeometry(local_50);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar1 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar2 = local_60;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14212de40(local_68,puVar1,local_58,puVar2);
  return;
}



// FUNCTION 142156bc0 execScrollWidgetIntoView body=255 status=ok
// SIG undefined execScrollWidgetIntoView(void)

void UScrollBox::execScrollWidgetIntoView(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined1 local_res10 [16];
  int local_res20 [2];
  undefined8 local_28 [2];
  
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
  bVar1 = local_res20[0] != 0;
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
  FUN_14212edf0(param_1,local_28[0],bVar1,local_res10[0]);
  return;
}



// FUNCTION 142156cc0 execSetAllowOverscroll body=130 status=ok
// SIG undefined execSetAllowOverscroll(void)

void UScrollBox::execSetAllowOverscroll(undefined8 param_1,longlong param_2)

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
  SetAllowOverscroll(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 142156d50 FUN_142156d50 body=130 status=ok
// SIG undefined FUN_142156d50(void)

void FUN_142156d50(undefined8 param_1,longlong param_2)

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
  FUN_14212f3a0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 142156de0 FUN_142156de0 body=246 status=ok
// SIG undefined FUN_142156de0(void)

void FUN_142156de0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined8 local_40;
  longlong *plStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_58 = 0x3f800000;
  uStack_54 = 0;
  uStack_50 = 0x3f800000;
  uStack_4c = 0x3f800000;
  local_48 = 0;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_20 = local_48;
  local_18 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = plStack_38;
  local_30 = local_58;
  uStack_2c = uStack_54;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_38 + 1) = (int)plStack_38[1] + 1;
    UNLOCK();
  }
  FUN_142130300(param_1,&local_30);
  plVar5 = plStack_38;
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



// FUNCTION 142156ee0 FUN_142156ee0 body=128 status=ok
// SIG undefined FUN_142156ee0(void)

void FUN_142156ee0(undefined8 param_1,longlong param_2)

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
  FUN_142130e80(param_1,local_res10);
  return;
}



// FUNCTION 142156f60 execSetFillColorAndOpacity body=124 status=ok
// SIG undefined execSetFillColorAndOpacity(void)

void UProgressBar::execSetFillColorAndOpacity(undefined8 param_1,longlong param_2)

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
  SetFillColorAndOpacity(param_1,&local_18);
  return;
}



// FUNCTION 142156fe0 execSetHeightOverride body=123 status=ok
// SIG undefined execSetHeightOverride(void)

void USizeBox::execSetHeightOverride(undefined8 param_1,longlong param_2)

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
  SetHeightOverride(param_1,local_res10[0]);
  return;
}



// FUNCTION 142157060 execSetHorizontalAlignment body=118 status=ok
// SIG undefined execSetHorizontalAlignment(void)

void UOverlaySlot::execSetHorizontalAlignment(undefined8 param_1,longlong param_2)

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
  SetHorizontalAlignment(param_1,local_res10[0]);
  return;
}



// FUNCTION 1421570e0 execSetHorizontalAlignment body=118 status=ok
// SIG undefined execSetHorizontalAlignment(void)

void UScrollBoxSlot::execSetHorizontalAlignment(undefined8 param_1,longlong param_2)

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
  SetHorizontalAlignment(param_1,local_res10[0]);
  return;
}



// FUNCTION 142157160 FUN_142157160 body=130 status=ok
// SIG undefined FUN_142157160(void)

void FUN_142157160(undefined8 param_1,longlong param_2)

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
  FUN_142131f10(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1421571f0 execSetIsMarquee body=130 status=ok
// SIG undefined execSetIsMarquee(void)

void UProgressBar::execSetIsMarquee(undefined8 param_1,longlong param_2)

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
  SetIsMarquee(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 142157280 execSetMaxAspectRatio body=123 status=ok
// SIG undefined execSetMaxAspectRatio(void)

void USizeBox::execSetMaxAspectRatio(undefined8 param_1,longlong param_2)

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
  SetMaxAspectRatio(param_1,local_res10[0]);
  return;
}



// FUNCTION 142157300 execSetMaxDesiredHeight body=123 status=ok
// SIG undefined execSetMaxDesiredHeight(void)

void USizeBox::execSetMaxDesiredHeight(undefined8 param_1,longlong param_2)

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
  SetMaxDesiredHeight(param_1,local_res10[0]);
  return;
}



// FUNCTION 142157380 execSetMaxDesiredWidth body=123 status=ok
// SIG undefined execSetMaxDesiredWidth(void)

void USizeBox::execSetMaxDesiredWidth(undefined8 param_1,longlong param_2)

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
  SetMaxDesiredWidth(param_1,local_res10[0]);
  return;
}



// FUNCTION 142157400 execSetMinDesiredHeight body=123 status=ok
// SIG undefined execSetMinDesiredHeight(void)

void USizeBox::execSetMinDesiredHeight(undefined8 param_1,longlong param_2)

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
  SetMinDesiredHeight(param_1,local_res10[0]);
  return;
}



// FUNCTION 142157480 execSetMinDesiredWidth body=123 status=ok
// SIG undefined execSetMinDesiredWidth(void)

void USizeBox::execSetMinDesiredWidth(undefined8 param_1,longlong param_2)

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
  SetMinDesiredWidth(param_1,local_res10[0]);
  return;
}



// FUNCTION 142157500 execSetOrientation body=118 status=ok
// SIG undefined execSetOrientation(void)

void UScrollBox::execSetOrientation(undefined8 param_1,longlong param_2)

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
  SetOrientation(param_1,local_res10[0]);
  return;
}



// FUNCTION 142157580 execSetPadding body=131 status=ok
// SIG undefined execSetPadding(void)

void UOverlaySlot::execSetPadding(undefined8 param_1,longlong param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_10 = (undefined4)uStack_20;
  uStack_c = uStack_20._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  SetPadding(param_1,&local_18);
  return;
}



// FUNCTION 142157610 execSetPadding body=131 status=ok
// SIG undefined execSetPadding(void)

void UScaleBoxSlot::execSetPadding(undefined8 param_1,longlong param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_10 = (undefined4)uStack_20;
  uStack_c = uStack_20._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  SetPadding(param_1,&local_18);
  return;
}



// FUNCTION 1421576a0 execSetPadding body=131 status=ok
// SIG undefined execSetPadding(void)

void UScrollBoxSlot::execSetPadding(undefined8 param_1,longlong param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_10 = (undefined4)uStack_20;
  uStack_c = uStack_20._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  SetPadding(param_1,&local_18);
  return;
}



// FUNCTION 142157730 execSetPadding body=131 status=ok
// SIG undefined execSetPadding(void)

void UUGMenuItemContainerSlot::execSetPadding(undefined8 param_1,longlong param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_10 = (undefined4)uStack_20;
  uStack_c = uStack_20._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  SetPadding(param_1,&local_18);
  return;
}



// FUNCTION 1421577c0 execSetPercent body=123 status=ok
// SIG undefined execSetPercent(void)

void UProgressBar::execSetPercent(undefined8 param_1,longlong param_2)

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
  SetPercent(param_1,local_res10[0]);
  return;
}



// FUNCTION 142157840 FUN_142157840 body=188 status=ok
// SIG undefined FUN_142157840(void)

void FUN_142157840(undefined8 param_1,longlong param_2)

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
  FUN_142134690(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 142157900 execSetScrollBarVisibility body=118 status=ok
// SIG undefined execSetScrollBarVisibility(void)

void UScrollBox::execSetScrollBarVisibility(undefined8 param_1,longlong param_2)

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
  SetScrollBarVisibility(param_1,local_res10[0]);
  return;
}



// FUNCTION 142157980 FUN_142157980 body=123 status=ok
// SIG undefined FUN_142157980(void)

void FUN_142157980(undefined8 param_1,longlong param_2)

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
  FUN_142134a30(param_1,local_res10[0]);
  return;
}



// FUNCTION 142157a00 execSetScrollbarThickness body=138 status=ok
// SIG undefined execSetScrollbarThickness(void)

void UScrollBox::execSetScrollbarThickness(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_res10 [8];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar1 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  SetScrollbarThickness(param_1,puVar1);
  return;
}



// FUNCTION 142157a90 execSetSidesToPad body=355 status=ok
// SIG undefined execSetSidesToPad(void)

void USafeZone::execSetSidesToPad(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int local_res10 [4];
  int local_res20 [2];
  int local_38;
  int local_34 [3];
  
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
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  bVar3 = local_38 != 0;
  local_34[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_34);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  SetSidesToPad(param_1,bVar1,bVar2,bVar3,local_34[0] != 0);
  return;
}



// FUNCTION 142157c00 FUN_142157c00 body=190 status=ok
// SIG undefined FUN_142157c00(void)

void FUN_142157c00(undefined8 param_1,longlong param_2)

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
  FUN_1421356c0(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 142157cc0 FUN_142157cc0 body=118 status=ok
// SIG undefined FUN_142157cc0(void)

void FUN_142157cc0(undefined8 param_1,longlong param_2)

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
  FUN_142135730(param_1,local_res10[0]);
  return;
}



// FUNCTION 142157d40 FUN_142157d40 body=118 status=ok
// SIG undefined FUN_142157d40(void)

void FUN_142157d40(undefined8 param_1,longlong param_2)

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
  FUN_142135750(param_1,local_res10[0]);
  return;
}



// FUNCTION 142157dc0 FUN_142157dc0 body=204 status=ok
// SIG undefined FUN_142157dc0(void)

void FUN_142157dc0(undefined8 param_1,longlong param_2)

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
  FUN_142135b70(param_1,puVar5);
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



// FUNCTION 142157e90 FUN_142157e90 body=128 status=ok
// SIG undefined FUN_142157e90(void)

void FUN_142157e90(undefined8 param_1,longlong param_2)

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
  FUN_142135df0(param_1,local_res10);
  return;
}



// FUNCTION 142157f10 FUN_142157f10 body=123 status=ok
// SIG undefined FUN_142157f10(void)

void FUN_142157f10(undefined8 param_1,longlong param_2)

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
  FUN_142136650(param_1,local_res10[0]);
  return;
}



// FUNCTION 142157f90 execSetVerticalAlignment body=118 status=ok
// SIG undefined execSetVerticalAlignment(void)

void UOverlaySlot::execSetVerticalAlignment(undefined8 param_1,longlong param_2)

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
  SetVerticalAlignment(param_1,local_res10[0]);
  return;
}



// FUNCTION 142158010 execSetVerticalAlignment body=118 status=ok
// SIG undefined execSetVerticalAlignment(void)

void UScrollBoxSlot::execSetVerticalAlignment(undefined8 param_1,longlong param_2)

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
  SetVerticalAlignment(param_1,local_res10[0]);
  return;
}



// FUNCTION 142158090 execSetWidthOverride body=123 status=ok
// SIG undefined execSetWidthOverride(void)

void USizeBox::execSetWidthOverride(undefined8 param_1,longlong param_2)

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
  SetWidthOverride(param_1,local_res10[0]);
  return;
}



// FUNCTION 142158110 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UExpandableArea::GetPrivateStaticClass(void)

{
  if (DAT_146ae9ed8 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"TreeView",&DAT_146ae9ed8,StaticRegisterNativesUExpandableArea,
                  0x370,0x10000000,0,L"Engine",&LAB_14215a7f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UProgressBar::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae9ed8;
}



// FUNCTION 1421581c0 FUN_1421581c0 body=151 status=ok
// SIG undefined FUN_1421581c0(void)

longlong FUN_1421581c0(void)

{
  if (DAT_146ae9ef0 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"UMGSequencePlayer",&DAT_146ae9ef0,FUN_140447710,0x708,0x10000008,
                  0,L"Engine",&LAB_14215a810,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146ae9ef0;
}



// FUNCTION 142158260 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTextBinding::GetPrivateStaticClass(void)

{
  if (DAT_146ae9dc0 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"TextBinding",&DAT_146ae9dc0,StaticRegisterNativesUTextBinding,
                  0x68,0x10000000,0,L"Engine",&LAB_14215a760,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPropertyBinding::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ae9dc0;
}



// FUNCTION 142158310 FUN_142158310 body=47 status=ok
// SIG undefined FUN_142158310(void)

longlong FUN_142158310(void)

{
  if (DAT_146aea200 == 0) {
    FUN_141786440(&DAT_146aea200,&PTR_LAB_144fc7ed0);
  }
  return DAT_146aea200;
}



// FUNCTION 142158340 FUN_142158340 body=47 status=ok
// SIG undefined FUN_142158340(void)

longlong FUN_142158340(void)

{
  if (DAT_146ae9f98 == 0) {
    FUN_141786a30(&DAT_146ae9f98,&PTR_FUN_1465166c0);
  }
  return DAT_146ae9f98;
}



// FUNCTION 142158370 FUN_142158370 body=47 status=ok
// SIG undefined FUN_142158370(void)

longlong FUN_142158370(void)

{
  if (DAT_146ae9fa0 == 0) {
    FUN_141786a30(&DAT_146ae9fa0,&PTR_FUN_146516700);
  }
  return DAT_146ae9fa0;
}



// FUNCTION 1421583a0 FUN_1421583a0 body=47 status=ok
// SIG undefined FUN_1421583a0(void)

longlong FUN_1421583a0(void)

{
  if (DAT_146ae9fa8 == 0) {
    FUN_141786a30(&DAT_146ae9fa8,&PTR_FUN_146516740);
  }
  return DAT_146ae9fa8;
}



// FUNCTION 1421583d0 FUN_1421583d0 body=47 status=ok
// SIG undefined FUN_1421583d0(void)

longlong FUN_1421583d0(void)

{
  if (DAT_146ae9fb0 == 0) {
    FUN_141786a30(&DAT_146ae9fb0,&PTR_FUN_146516780);
  }
  return DAT_146ae9fb0;
}



// FUNCTION 142158400 FUN_142158400 body=47 status=ok
// SIG undefined FUN_142158400(void)

longlong FUN_142158400(void)

{
  if (DAT_146ae9fb8 == 0) {
    FUN_141786a30(&DAT_146ae9fb8,&PTR_FUN_1465167c0);
  }
  return DAT_146ae9fb8;
}



// FUNCTION 142158430 FUN_142158430 body=47 status=ok
// SIG undefined FUN_142158430(void)

longlong FUN_142158430(void)

{
  if (DAT_146ae9fc0 == 0) {
    FUN_141786a30(&DAT_146ae9fc0,&PTR_FUN_146516840);
  }
  return DAT_146ae9fc0;
}



// FUNCTION 142158460 FUN_142158460 body=47 status=ok
// SIG undefined FUN_142158460(void)

longlong FUN_142158460(void)

{
  if (DAT_146ae9fc8 == 0) {
    FUN_141786a30(&DAT_146ae9fc8,&PTR_FUN_1465168c0);
  }
  return DAT_146ae9fc8;
}



// FUNCTION 142158490 FUN_142158490 body=47 status=ok
// SIG undefined FUN_142158490(void)

longlong FUN_142158490(void)

{
  if (DAT_146ae9fd0 == 0) {
    FUN_141786a30(&DAT_146ae9fd0,&PTR_FUN_146516940);
  }
  return DAT_146ae9fd0;
}


