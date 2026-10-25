// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1414139b0 FUN_1414139b0 body=47 status=ok
// SIG undefined FUN_1414139b0(void)

longlong FUN_1414139b0(void)

{
  if (DAT_146890bf0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146890bf0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463bebf0);
  }
  return DAT_146890bf0;
}



// FUNCTION 1414139e0 FUN_1414139e0 body=47 status=ok
// SIG undefined FUN_1414139e0(void)

longlong FUN_1414139e0(void)

{
  if (DAT_146890c00 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146890c00,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463bed00);
  }
  return DAT_146890c00;
}



// FUNCTION 141413a10 FUN_141413a10 body=47 status=ok
// SIG undefined FUN_141413a10(void)

longlong FUN_141413a10(void)

{
  if (DAT_146890c28 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146890c28,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463bef40);
  }
  return DAT_146890c28;
}



// FUNCTION 141413a40 FUN_141413a40 body=47 status=ok
// SIG undefined FUN_141413a40(void)

longlong FUN_141413a40(void)

{
  if (DAT_146890c38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146890c38,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463bf020);
  }
  return DAT_146890c38;
}



// FUNCTION 141413a70 FUN_141413a70 body=47 status=ok
// SIG undefined FUN_141413a70(void)

longlong FUN_141413a70(void)

{
  if (DAT_146890c90 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146890c90,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463bf8a0);
  }
  return DAT_146890c90;
}



// FUNCTION 141413aa0 FUN_141413aa0 body=47 status=ok
// SIG undefined FUN_141413aa0(void)

longlong FUN_141413aa0(void)

{
  if (DAT_146890d00 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146890d00,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c0390);
  }
  return DAT_146890d00;
}



// FUNCTION 141413ae0 FUN_141413ae0 body=285 status=ok
// SIG undefined FUN_141413ae0(void)

void FUN_141413ae0(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined4 local_res10 [2];
  void *local_28;
  ulonglong local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
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
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_18,local_20 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 << 2);
  }
  FUN_140a7f320(param_1,local_res10[0],&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141413c00 FUN_141413c00 body=206 status=ok
// SIG undefined FUN_141413c00(void)

void FUN_141413c00(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
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
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  FUN_140a53f50(param_1,local_res10,&local_18);
  return;
}



// FUNCTION 141413cd0 FUN_141413cd0 body=274 status=ok
// SIG undefined FUN_141413cd0(void)

void FUN_141413cd0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_28 [4];
  
  local_28[2] = 0;
  local_28[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  plVar1 = local_28 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar2 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140e4bbc0(param_1,plVar1,plVar2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141413df0 FUN_141413df0 body=60 status=ok
// SIG undefined FUN_141413df0(void)

void FUN_141413df0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1409abf40(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 141413e30 execRemoveAt body=141 status=ok
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
  uVar1 = FUN_140a8e5b0(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141413ec0 FUN_141413ec0 body=133 status=ok
// SIG undefined FUN_141413ec0(void)

void FUN_141413ec0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 local_res10 [8];
  
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
  uVar1 = FUN_140a8e5c0(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141413f50 FUN_141413f50 body=43 status=ok
// SIG undefined FUN_141413f50(void)

void FUN_141413f50(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140a8f220();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141413fa0 FUN_141413fa0 body=128 status=ok
// SIG undefined FUN_141413fa0(void)

void FUN_141413fa0(undefined8 param_1,longlong param_2)

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
  FUN_140bd6900(param_1,local_res10);
  return;
}



// FUNCTION 141414080 execHandleOnLoadoutChangedChanged body=223 status=ok
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
  HandleOnLoadoutChangedChanged(param_1,&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141414160 execHandleOnLoadoutChangedChanged body=223 status=ok
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
  FUN_140bd6e40(param_1,&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141414280 FUN_141414280 body=128 status=ok
// SIG undefined FUN_141414280(void)

void FUN_141414280(undefined8 param_1,longlong param_2)

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
  FUN_140be24e0(param_1,local_res10);
  return;
}



// FUNCTION 141414300 FUN_141414300 body=254 status=ok
// SIG undefined FUN_141414300(void)

void FUN_141414300(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
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
  FUN_140a95900(param_1,local_18[0],local_res20,local_res10);
  return;
}



// FUNCTION 141414400 FUN_141414400 body=128 status=ok
// SIG undefined FUN_141414400(void)

void FUN_141414400(undefined8 param_1,longlong param_2)

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
  FUN_140a6f7e0(param_1,local_res10);
  return;
}



// FUNCTION 141414480 execSetIsInputAllowed body=130 status=ok
// SIG undefined execSetIsInputAllowed(void)

void AShipCharacter::execSetIsInputAllowed(undefined8 param_1,longlong param_2)

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
  SetIsInputAllowed(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 141414510 FUN_141414510 body=130 status=ok
// SIG undefined FUN_141414510(void)

void FUN_141414510(undefined8 param_1,longlong param_2)

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
  FUN_140a969b0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414145a0 FUN_1414145a0 body=191 status=ok
// SIG undefined FUN_1414145a0(void)

void FUN_1414145a0(undefined8 param_1,longlong param_2)

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
  FUN_140a96e20(param_1,bVar1,local_res20);
  return;
}



// FUNCTION 141414660 FUN_141414660 body=220 status=ok
// SIG undefined FUN_141414660(void)

void FUN_141414660(longlong *param_1,longlong param_2)

{
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0xffffffff;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x4a8))(param_1,&local_38);
  return;
}



// FUNCTION 141414760 FUN_141414760 body=272 status=ok
// SIG undefined FUN_141414760(void)

void FUN_141414760(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
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
  FUN_140a9ac90(param_1,local_res20,&local_18,local_res10[0] != 0);
  return;
}



// FUNCTION 141414870 FUN_141414870 body=274 status=ok
// SIG undefined FUN_141414870(void)

void FUN_141414870(undefined8 param_1,longlong param_2)

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
  FUN_140a9afb0(param_1,local_res20,&local_18,local_res10[0]);
  return;
}



// FUNCTION 141414990 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140a9b1e0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141414a50 FUN_141414a50 body=53 status=ok
// SIG undefined FUN_141414a50(void)

void FUN_141414a50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &PTR_FUN_144a3a098;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141414a90 FUN_141414a90 body=53 status=ok
// SIG undefined FUN_141414a90(void)

void FUN_141414a90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_144a39d00;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141414ad0 FUN_141414ad0 body=53 status=ok
// SIG undefined FUN_141414ad0(void)

void FUN_141414ad0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_144a3a1b0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141414b10 FUN_141414b10 body=53 status=ok
// SIG undefined FUN_141414b10(void)

void FUN_141414b10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x270;
    *puVar1 = &PTR_FUN_144a3a2c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141414b60 FUN_141414b60 body=53 status=ok
// SIG undefined FUN_141414b60(void)

void FUN_141414b60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144a3a3e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141414ba0 FUN_141414ba0 body=53 status=ok
// SIG undefined FUN_141414ba0(void)

void FUN_141414ba0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144a3a4f8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141414be0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USlateBlueprintLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146891040 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDamageStatics",&DAT_146891040,
                  StaticRegisterNativesUSlateBlueprintLibrary,0x28,0x10000000,0,L"Engine",
                  FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146891040;
}



// FUNCTION 141414ca0 FUN_141414ca0 body=47 status=ok
// SIG undefined FUN_141414ca0(void)

longlong FUN_141414ca0(void)

{
  if (DAT_146891038 == 0) {
    FUN_141786440(&DAT_146891038,&PTR_GetPrivateStaticClass_144a39040);
  }
  return DAT_146891038;
}



// FUNCTION 141414cd0 FUN_141414cd0 body=47 status=ok
// SIG undefined FUN_141414cd0(void)

longlong FUN_141414cd0(void)

{
  if (DAT_146890fe0 == 0) {
    FUN_141786a30(&DAT_146890fe0,&PTR_FUN_1463c49a0);
  }
  return DAT_146890fe0;
}



// FUNCTION 141414d00 FUN_141414d00 body=47 status=ok
// SIG undefined FUN_141414d00(void)

longlong FUN_141414d00(void)

{
  if (DAT_146890fe8 == 0) {
    FUN_141786a30(&DAT_146890fe8,&PTR_FUN_1463c4a60);
  }
  return DAT_146890fe8;
}



// FUNCTION 141414d30 FUN_141414d30 body=47 status=ok
// SIG undefined FUN_141414d30(void)

longlong FUN_141414d30(void)

{
  if (DAT_146890ff0 == 0) {
    FUN_141786a30(&DAT_146890ff0,&PTR_FUN_1463c5020);
  }
  return DAT_146890ff0;
}



// FUNCTION 141414d60 FUN_141414d60 body=47 status=ok
// SIG undefined FUN_141414d60(void)

longlong FUN_141414d60(void)

{
  if (DAT_146890ff8 == 0) {
    FUN_141786a30(&DAT_146890ff8,&PTR_FUN_1463c56e0);
  }
  return DAT_146890ff8;
}



// FUNCTION 141414d90 FUN_141414d90 body=47 status=ok
// SIG undefined FUN_141414d90(void)

longlong FUN_141414d90(void)

{
  if (DAT_146891000 == 0) {
    FUN_141786a30(&DAT_146891000,&PTR_FUN_1463c57f0);
  }
  return DAT_146891000;
}



// FUNCTION 141414dc0 FUN_141414dc0 body=47 status=ok
// SIG undefined FUN_141414dc0(void)

longlong FUN_141414dc0(void)

{
  if (DAT_146891008 == 0) {
    FUN_141786a30(&DAT_146891008,&PTR_FUN_1463c58f0);
  }
  return DAT_146891008;
}



// FUNCTION 141414df0 FUN_141414df0 body=47 status=ok
// SIG undefined FUN_141414df0(void)

longlong FUN_141414df0(void)

{
  if (DAT_146891010 == 0) {
    FUN_141786a30(&DAT_146891010,&PTR_FUN_1463c5a70);
  }
  return DAT_146891010;
}



// FUNCTION 141414e20 FUN_141414e20 body=47 status=ok
// SIG undefined FUN_141414e20(void)

longlong FUN_141414e20(void)

{
  if (DAT_146891018 == 0) {
    FUN_141786a30(&DAT_146891018,&PTR_FUN_1463c5bd0);
  }
  return DAT_146891018;
}



// FUNCTION 141414e50 FUN_141414e50 body=47 status=ok
// SIG undefined FUN_141414e50(void)

longlong FUN_141414e50(void)

{
  if (DAT_146891020 == 0) {
    FUN_141786a30(&DAT_146891020,&PTR_FUN_1463c5d20);
  }
  return DAT_146891020;
}



// FUNCTION 141414e80 FUN_141414e80 body=47 status=ok
// SIG undefined FUN_141414e80(void)

longlong FUN_141414e80(void)

{
  if (DAT_146891028 == 0) {
    FUN_141786a30(&DAT_146891028,&PTR_FUN_1463c6120);
  }
  return DAT_146891028;
}



// FUNCTION 141414eb0 FUN_141414eb0 body=47 status=ok
// SIG undefined FUN_141414eb0(void)

longlong FUN_141414eb0(void)

{
  if (DAT_146891030 == 0) {
    FUN_141786a30(&DAT_146891030,&PTR_FUN_1463c61e0);
  }
  return DAT_146891030;
}



// FUNCTION 141414ee0 FUN_141414ee0 body=53 status=ok
// SIG undefined FUN_141414ee0(void)

void FUN_141414ee0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &PTR_FUN_144a3a8a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 141414f20 FUN_141414f20 body=53 status=ok
// SIG undefined FUN_141414f20(void)

void FUN_141414f20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &PTR_FUN_144a3a9b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141414f60 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEnvQueryTest_Cover::StaticClass(void)

{
  if (DAT_146890f70 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDamageModifierComponent",&DAT_146890f70,FUN_140447710,
                  0x1f8,0x10000000,0,L"Engine",&LAB_141415410,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1414161a0,&LAB_140447700,0);
  }
  return DAT_146890f70;
}



// FUNCTION 141415030 FUN_141415030 body=162 status=ok
// SIG undefined FUN_141415030(void)

longlong FUN_141415030(void)

{
  if (DAT_146890f80 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDamageOverTimeManager",&DAT_146890f80,FUN_140447710,0x58,
                  0x10000008,0,L"Engine",&LAB_141415420,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142e0d010,&LAB_140447700,0);
  }
  return DAT_146890f80;
}



// FUNCTION 1414150f0 FUN_1414150f0 body=162 status=ok
// SIG undefined FUN_1414150f0(void)

longlong FUN_1414150f0(void)

{
  if (DAT_146890f60 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDamageGlobalsData",&DAT_146890f60,FUN_140447710,0x8a8,
                  0x10000000,0,L"Engine",&LAB_1414153f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141416190,&LAB_140447700,0);
  }
  return DAT_146890f60;
}



// FUNCTION 1414151a0 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FActiveWeaponPhantom_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x200;
    *puVar1 = &PTR_FUN_144a3a670;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1414151e0 FUN_1414151e0 body=53 status=ok
// SIG undefined FUN_1414151e0(void)

void FUN_1414151e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144a3a788;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141415220 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass(void)

{
  if (DAT_146890fb8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDamageSource",&DAT_146890fb8,FUN_140447710,0x98,0x10000000
                  ,0,L"Engine",&LAB_141415440,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142e0d0b0,&LAB_140447700,0);
  }
  return DAT_146890fb8;
}



// FUNCTION 1414152d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGJournalKey::GetPrivateStaticClass(void)

{
  if (DAT_146890f00 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDamageFilter",&DAT_146890f00,FUN_140447710,0xa0,0x10000000
                  ,0,L"Engine",FUN_1414153c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141416180,&LAB_140447700,0);
  }
  return DAT_146890f00;
}



// FUNCTION 1414153c0 FUN_1414153c0 body=38 status=ok
// SIG undefined FUN_1414153c0(void)

void FUN_1414153c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142d0ba40(puVar1);
    *puVar1 = &PTR_FUN_144a39e18;
  }
  return;
}



// FUNCTION 141415460 FUN_141415460 body=162 status=ok
// SIG undefined FUN_141415460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141415460(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *param_1 = 0;
  uVar2 = uRam0000000146890e0c;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(uint *)((longlong)param_1 + 0x5c) = uVar2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar2 = uRam0000000146890e04 & uRam0000000146890e14;
  uVar3 = uRam0000000146890e08 & uRam0000000146890e18;
  uVar4 = uRam0000000146890e0c & uRam0000000146890e1c;
  *(uint *)(param_1 + 0xe) = _DAT_146890e00 & _DAT_146890e10;
  *(uint *)((longlong)param_1 + 0x74) = uVar2;
  *(uint *)(param_1 + 0xf) = uVar3;
  *(uint *)((longlong)param_1 + 0x7c) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  _guard_xfg_dispatch_icall_nop(param_1,0,0xc0);
  uVar1 = uRam00000001468b5b78;
  param_1[10] = _DAT_1468b5b70;
  param_1[0xb] = uVar1;
  uVar1 = uRam00000001468b5b88;
  param_1[0xc] = _DAT_1468b5b80;
  param_1[0xd] = uVar1;
  uVar1 = uRam00000001468b5b98;
  param_1[0xe] = _DAT_1468b5b90;
  param_1[0xf] = uVar1;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)((longlong)param_1 + 0xa2) = 1;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3f800000;
  return param_1;
}



// FUNCTION 141415510 FUN_141415510 body=119 status=ok
// SIG undefined FUN_141415510(void)

longlong FUN_141415510(longlong param_1)

{
  FName::FName(param_1 + 8,L"DamageNumber",1);
  FName::FName(param_1 + 0x10,L"HitCrit",1);
  FName::FName(param_1 + 0x18,L"Resist",1);
  FName::FName(param_1 + 0x20,L"Immune",1);
  *(undefined4 *)(param_1 + 0x30) = 0x43480000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return param_1;
}



// FUNCTION 141415590 FUN_141415590 body=120 status=ok
// SIG undefined FUN_141415590(void)

longlong FUN_141415590(longlong param_1)

{
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0xf0);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x168);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x1e8);
  *(undefined1 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0x40000000;
  *(undefined4 *)(param_1 + 0x268) = 2;
  return param_1;
}



// FUNCTION 141415610 FUN_141415610 body=415 status=ok
// SIG undefined FUN_141415610(void)

void FUN_141415610(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  lVar5 = *param_1;
  iVar7 = (int)param_1[1];
  if (iVar7 != 0) {
    plVar6 = (longlong *)(lVar5 + 0x200);
    do {
      FUN_140591060(plVar6 + 0xb);
      if (plVar6[7] != 0) {
        FMemory::Free();
      }
      if ((int)plVar6[2] != 0) {
        plVar4 = (longlong *)*plVar6;
        if ((longlong *)*plVar6 == (longlong *)0x0) {
          plVar4 = plVar6 + -4;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      if (plVar6[-9] != 0) {
        FMemory::Free();
      }
      if (*(char *)((longlong)plVar6 + -100) != '\0') {
        *(undefined1 *)((longlong)plVar6 + -100) = 0;
      }
      if (*(char *)((longlong)plVar6 + -0x6c) != '\0') {
        *(undefined1 *)((longlong)plVar6 + -0x6c) = 0;
      }
      if (*(char *)((longlong)plVar6 + -0x7c) != '\0') {
        *(undefined1 *)((longlong)plVar6 + -0x7c) = 0;
      }
      if (*(char *)((longlong)plVar6 + -0x84) != '\0') {
        *(undefined1 *)((longlong)plVar6 + -0x84) = 0;
      }
      if (*(char *)((longlong)plVar6 + -0x94) != '\0') {
        *(undefined1 *)((longlong)plVar6 + -0x94) = 0;
      }
      if (*(char *)((longlong)plVar6 + -0xa4) != '\0') {
        *(undefined1 *)((longlong)plVar6 + -0xa4) = 0;
      }
      if (*(char *)((longlong)plVar6 + -0xb4) != '\0') {
        *(undefined1 *)((longlong)plVar6 + -0xb4) = 0;
      }
      if (*(char *)((longlong)plVar6 + -0xc4) != '\0') {
        *(undefined1 *)((longlong)plVar6 + -0xc4) = 0;
      }
      if (*(char *)((longlong)plVar6 + -0xd4) != '\0') {
        *(undefined1 *)((longlong)plVar6 + -0xd4) = 0;
      }
      if (*(char *)((longlong)plVar6 + -0xe4) != '\0') {
        *(undefined1 *)((longlong)plVar6 + -0xe4) = 0;
      }
      if (plVar6[-0x33] != 0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)plVar6[-0x3b];
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
      plVar6 = plVar6 + 0x4e;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1414157b0 FUN_1414157b0 body=43 status=ok
// SIG undefined FUN_1414157b0(void)

undefined8 * FUN_1414157b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1414157e0 FUN_1414157e0 body=52 status=ok
// SIG undefined FUN_1414157e0(void)

undefined8 FUN_1414157e0(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 141415870 FUN_141415870 body=65 status=ok
// SIG undefined FUN_141415870(void)

void FUN_141415870(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x50);
  *(undefined1 *)((longlong)param_2 + 0x10) = 1;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined4 *)((longlong)param_2 + 0x48) = 0x3f800000;
  return;
}



// FUNCTION 1414158f0 FUN_1414158f0 body=38 status=ok
// SIG undefined FUN_1414158f0(void)

void FUN_1414158f0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x270);
  FUN_141415590(param_2);
  return;
}



// FUNCTION 141415ae0 FUN_141415ae0 body=492 status=ok
// SIG undefined FUN_141415ae0(void)

undefined8 FUN_141415ae0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x268);
    do {
      *(undefined8 *)(puVar1 + -0x9a) = *(undefined8 *)((longlong)puVar1 + param_3 + -0x268);
      *(undefined8 *)(puVar1 + -0x98) = *(undefined8 *)((longlong)puVar1 + param_3 + -0x260);
      *(undefined8 *)(puVar1 + -0x96) = *(undefined8 *)((longlong)puVar1 + param_3 + -600);
      *(undefined8 *)(puVar1 + -0x94) = *(undefined8 *)((longlong)puVar1 + param_3 + -0x250);
      puVar1[-0x92] = *(undefined4 *)((longlong)puVar1 + param_3 + -0x248);
      puVar1[-0x91] = *(undefined4 *)((longlong)puVar1 + param_3 + -0x244);
      puVar1[-0x90] = *(undefined4 *)((longlong)puVar1 + param_3 + -0x240);
      puVar1[-0x8f] = *(undefined4 *)((longlong)puVar1 + param_3 + -0x23c);
      puVar1[-0x8e] = *(undefined4 *)((longlong)puVar1 + param_3 + -0x238);
      FRuntimeFloatCurve::operator=(puVar1 + -0x8c,param_3 + -0x230 + (longlong)puVar1);
      puVar1[-0x6e] = *(undefined4 *)((longlong)puVar1 + param_3 + -0x1b8);
      *(undefined8 *)(puVar1 + -0x6d) = *(undefined8 *)((longlong)puVar1 + param_3 + -0x1b4);
      puVar1[-0x6b] = *(undefined4 *)((longlong)puVar1 + param_3 + -0x1ac);
      puVar1[-0x6a] = *(undefined4 *)((longlong)puVar1 + param_3 + -0x1a8);
      *(undefined8 *)(puVar1 + -0x69) = *(undefined8 *)((longlong)puVar1 + param_3 + -0x1a4);
      puVar1[-0x67] = *(undefined4 *)((longlong)puVar1 + param_3 + -0x19c);
      *(undefined8 *)(puVar1 + -0x66) = *(undefined8 *)((longlong)puVar1 + param_3 + -0x198);
      *(undefined8 *)(puVar1 + -100) = *(undefined8 *)((longlong)puVar1 + param_3 + -400);
      *(undefined8 *)(puVar1 + -0x62) = *(undefined8 *)((longlong)puVar1 + param_3 + -0x188);
      *(undefined8 *)(puVar1 + -0x60) = *(undefined8 *)((longlong)puVar1 + param_3 + -0x180);
      FRuntimeFloatCurve::operator=(puVar1 + -0x5e,param_3 + -0x178 + (longlong)puVar1);
      FRuntimeFloatCurve::operator=(puVar1 + -0x40,param_3 + -0x100 + (longlong)puVar1);
      puVar1[-0x22] = *(undefined4 *)((longlong)puVar1 + param_3 + -0x88);
      puVar1[-0x21] = *(undefined4 *)((longlong)puVar1 + param_3 + -0x84);
      FRuntimeFloatCurve::operator=(puVar1 + -0x20,param_3 + -0x80 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + -2) = *(undefined1 *)((longlong)puVar1 + param_3 + -8);
      puVar1[-1] = *(undefined4 *)((longlong)puVar1 + param_3 + -4);
      *puVar1 = *(undefined4 *)((longlong)puVar1 + param_3);
      puVar1[1] = *(undefined4 *)((longlong)puVar1 + param_3 + 4);
      puVar1 = puVar1 + 0x9c;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141415d30 FUN_141415d30 body=441 status=ok
// SIG undefined FUN_141415d30(void)

undefined8 FUN_141415d30(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  char *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  
  if (param_4 != 0) {
    pcVar6 = (char *)(param_3 + 0x1bc);
    do {
      FUN_140a7db00(param_2,pcVar6 + -0x1bc);
      if (pcVar6 + -0xc != (char *)(param_2 + 0x1b0)) {
        if (*(char *)(param_2 + 0x1b4) != '\0') {
          *(undefined1 *)(param_2 + 0x1b4) = 0;
        }
        if (pcVar6[-8] != '\0') {
          *(undefined4 *)(param_2 + 0x1b0) = *(undefined4 *)(pcVar6 + -0xc);
          *(undefined1 *)(param_2 + 0x1b4) = 1;
        }
      }
      if (pcVar6 + -4 != (char *)(param_2 + 0x1b8)) {
        if (*(char *)(param_2 + 0x1bc) != '\0') {
          *(undefined1 *)(param_2 + 0x1bc) = 0;
        }
        if (*pcVar6 != '\0') {
          *(undefined4 *)(param_2 + 0x1b8) = *(undefined4 *)(pcVar6 + -4);
          *(undefined1 *)(param_2 + 0x1bc) = 1;
        }
      }
      *(char *)(param_2 + 0x1c0) = pcVar6[4];
      if (pcVar6 + 8 != (char *)(param_2 + 0x1c4)) {
        if (*(char *)(param_2 + 0x1c8) != '\0') {
          *(undefined1 *)(param_2 + 0x1c8) = 0;
        }
        if (pcVar6[0xc] != '\0') {
          *(undefined4 *)(param_2 + 0x1c4) = *(undefined4 *)(pcVar6 + 8);
          *(undefined1 *)(param_2 + 0x1c8) = 1;
        }
      }
      plVar2 = (longlong *)(param_2 + 0x1e0);
      *(undefined4 *)(param_2 + 0x1cc) = *(undefined4 *)(pcVar6 + 0x10);
      *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)(pcVar6 + 0x14);
      *(undefined4 *)(param_2 + 0x1d4) = *(undefined4 *)(pcVar6 + 0x18);
      *(char *)(param_2 + 0x1d8) = pcVar6[0x1c];
      *(char *)(param_2 + 0x1d9) = pcVar6[0x1d];
      if (plVar2 != (longlong *)(pcVar6 + 0x24)) {
        iVar7 = *(int *)(pcVar6 + 0x2c);
        lVar3 = *(longlong *)(pcVar6 + 0x24);
        *(int *)(param_2 + 0x1e8) = iVar7;
        if ((iVar7 == 0) && (*(int *)(param_2 + 0x1ec) == 0)) {
          *(undefined4 *)(param_2 + 0x1ec) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar2,iVar7);
          if (iVar7 != 0) {
            puVar4 = (undefined4 *)(lVar3 + 4);
            puVar5 = (undefined4 *)*plVar2;
            do {
              *puVar5 = puVar4[-1];
              puVar5[1] = *puVar4;
              puVar5[2] = puVar4[1];
              puVar5[3] = puVar4[2];
              iVar7 = iVar7 + -1;
              puVar4 = puVar4 + 4;
              puVar5 = puVar5 + 4;
            } while (iVar7 != 0);
          }
        }
      }
      pcVar1 = pcVar6 + 0x34;
      pcVar6 = pcVar6 + 0x200;
      *(undefined8 *)(param_2 + 0x1f0) = *(undefined8 *)pcVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x200;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141415ef0 FUN_141415ef0 body=59 status=ok
// SIG undefined FUN_141415ef0(void)

void FUN_141415ef0(undefined8 param_1,longlong param_2)

{
  FRichCurve::~FRichCurve(param_2 + 0x1e8);
  FRichCurve::~FRichCurve(param_2 + 0x168);
  FRichCurve::~FRichCurve(param_2 + 0xf0);
  FRichCurve::~FRichCurve(param_2 + 0x38);
  return;
}



// FUNCTION 141415f30 FUN_141415f30 body=87 status=ok
// SIG undefined FUN_141415f30(void)

void FUN_141415f30(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x1e0) != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_2 + 0x1c8) != '\0') {
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  if (*(char *)(param_2 + 0x1bc) != '\0') {
    *(undefined1 *)(param_2 + 0x1bc) = 0;
  }
  if (*(char *)(param_2 + 0x1b4) != '\0') {
    *(undefined1 *)(param_2 + 0x1b4) = 0;
  }
  FUN_140a7c7a0(param_2);
  return;
}



// FUNCTION 141415f90 FUN_141415f90 body=55 status=ok
// SIG undefined FUN_141415f90(void)

void FUN_141415f90(void)

{
  undefined8 uVar1;
  
  if (DAT_146890db0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890db0 = GetStaticEnum(FUN_1414166e0,uVar1,L"EDamageInstigatorClassification");
  }
  return;
}



// FUNCTION 141415fd0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGFriendsPanelAllFriendsWidget::GetPrivateStaticClass(void)

{
  if (DAT_146890ef0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDamageData",&DAT_146890ef0,FUN_140447710,0x310,0x10000000,
                  0,L"Engine",&LAB_1414153a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141416170,&LAB_140447700,0);
  }
  return DAT_146890ef0;
}



// FUNCTION 141416080 FUN_141416080 body=6 status=ok
// SIG undefined FUN_141416080(void)

undefined8 FUN_141416080(void)

{
  return 0x626aa238;
}



// FUNCTION 141416090 FUN_141416090 body=6 status=ok
// SIG undefined FUN_141416090(void)

undefined8 FUN_141416090(void)

{
  return 0xc138b1ce;
}



// FUNCTION 1414160a0 FUN_1414160a0 body=6 status=ok
// SIG undefined FUN_1414160a0(void)

undefined8 FUN_1414160a0(void)

{
  return 0xa006ebb5;
}



// FUNCTION 1414160b0 FUN_1414160b0 body=6 status=ok
// SIG undefined FUN_1414160b0(void)

undefined8 FUN_1414160b0(void)

{
  return 0x295f5802;
}



// FUNCTION 1414160c0 FUN_1414160c0 body=6 status=ok
// SIG undefined FUN_1414160c0(void)

undefined8 FUN_1414160c0(void)

{
  return 0x73df0bf1;
}



// FUNCTION 1414160d0 FUN_1414160d0 body=6 status=ok
// SIG undefined FUN_1414160d0(void)

undefined8 FUN_1414160d0(void)

{
  return 0x2717c6ca;
}



// FUNCTION 1414160e0 FUN_1414160e0 body=6 status=ok
// SIG undefined FUN_1414160e0(void)

undefined8 FUN_1414160e0(void)

{
  return 0x4a34d3e4;
}



// FUNCTION 1414160f0 FUN_1414160f0 body=6 status=ok
// SIG undefined FUN_1414160f0(void)

undefined8 FUN_1414160f0(void)

{
  return 0xd7c5dffe;
}



// FUNCTION 141416100 FUN_141416100 body=6 status=ok
// SIG undefined FUN_141416100(void)

undefined8 FUN_141416100(void)

{
  return 0x2877ee30;
}



// FUNCTION 141416110 FUN_141416110 body=6 status=ok
// SIG undefined FUN_141416110(void)

undefined8 FUN_141416110(void)

{
  return 0xcc8ef30d;
}



// FUNCTION 1414161b0 thunk_FUN_142e0d010 body=5 status=ok
// SIG undefined thunk_FUN_142e0d010(void)

void thunk_FUN_142e0d010(void)

{
  FUN_142e0d010();
  return;
}



// FUNCTION 1414161c0 thunk_FUN_142e0d0b0 body=5 status=ok
// SIG undefined thunk_FUN_142e0d0b0(void)

void thunk_FUN_142e0d0b0(void)

{
  FUN_142e0d0b0();
  return;
}



// FUNCTION 1414161d0 StaticRegisterNativesUSlateBlueprintLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUSlateBlueprintLibrary(void)

void USlateBlueprintLibrary::StaticRegisterNativesUSlateBlueprintLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AmputateLimb_144a3aad0,0xb);
  return;
}



// FUNCTION 141416200 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventSectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146890fc0 == 0) {
    uVar1 = FUN_141416080();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890fc0 = GetStaticStruct(FUN_141416710,uVar2,L"AmputateLimbData",0xc0,uVar1);
  }
  return;
}



// FUNCTION 141416260 FUN_141416260 body=82 status=ok
// SIG undefined FUN_141416260(void)

void FUN_141416260(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146890fd0 == 0) {
    uVar1 = FUN_141416090();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890fd0 =
         GetStaticStruct(FUN_141416740,uVar2,L"CauseDamageStatusEffectOverrides",0x1c,uVar1);
  }
  return;
}



// FUNCTION 1414162c0 FUN_1414162c0 body=82 status=ok
// SIG undefined FUN_1414162c0(void)

void FUN_1414162c0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146890ed8 == 0) {
    uVar1 = FUN_1414160a0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890ed8 =
         GetStaticStruct(FUN_141416770,uVar2,L"DamageDataCustomStatusEffectApplicationSpec",0x50,
                         uVar1);
  }
  return;
}



// FUNCTION 141416320 FUN_141416320 body=82 status=ok
// SIG undefined FUN_141416320(void)

void FUN_141416320(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146890f48 == 0) {
    uVar1 = FUN_1414160b0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890f48 = GetStaticStruct(FUN_1414167a0,uVar2,L"DamageDisplayInfo",0x38,uVar1);
  }
  return;
}



// FUNCTION 141416380 FUN_141416380 body=82 status=ok
// SIG undefined FUN_141416380(void)

void FUN_141416380(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146890f28 == 0) {
    uVar1 = FUN_1414160c0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890f28 = GetStaticStruct(FUN_1414167d0,uVar2,L"IncomingDamageDisplayInfo",0x270,uVar1);
  }
  return;
}



// FUNCTION 1414163e0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvent::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146890f18 == 0) {
    uVar1 = FUN_1414160d0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890f18 = GetStaticStruct(FUN_141416800,uVar2,L"NumPlayersDamageBalanceInfo",8,uVar1);
  }
  return;
}



// FUNCTION 141416440 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146890fa0 == 0) {
    uVar1 = FUN_1414160e0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890fa0 = GetStaticStruct(FUN_141416830,uVar2,L"OakHealthTypeBalanceData",0x40,uVar1);
  }
  return;
}



// FUNCTION 1414164a0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FActiveWeaponPhantom::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146890f90 == 0) {
    uVar1 = FUN_1414160f0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890f90 = GetStaticStruct(FUN_141416860,uVar2,L"OakPipelineDamageInput",0x200,uVar1);
  }
  return;
}



// FUNCTION 141416500 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneTransformMask::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146890f08 == 0) {
    uVar1 = FUN_141416100();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890f08 = GetStaticStruct(FUN_141416890,uVar2,L"PlayerDifficultyBalanceInfo",4,uVar1);
  }
  return;
}



// FUNCTION 141416560 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146890f38 == 0) {
    uVar1 = FUN_141416110();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890f38 =
         GetStaticStruct(FUN_1414168c0,uVar2,L"StatusEffectApplicationDamageDefaultSettings",0x18,
                         uVar1);
  }
  return;
}



// FUNCTION 1414165c0 FUN_1414165c0 body=47 status=ok
// SIG undefined FUN_1414165c0(void)

longlong FUN_1414165c0(void)

{
  if (DAT_146890ee8 == 0) {
    FUN_141786440(&DAT_146890ee8,&PTR_LAB_144a36990);
  }
  return DAT_146890ee8;
}



// FUNCTION 1414165f0 FUN_1414165f0 body=47 status=ok
// SIG undefined FUN_1414165f0(void)

longlong FUN_1414165f0(void)

{
  if (DAT_146890ef8 == 0) {
    FUN_141786440(&DAT_146890ef8,&PTR_GetPrivateStaticClass_144a39860);
  }
  return DAT_146890ef8;
}



// FUNCTION 141416620 FUN_141416620 body=47 status=ok
// SIG undefined FUN_141416620(void)

longlong FUN_141416620(void)

{
  if (DAT_146890f58 == 0) {
    FUN_141786440(&DAT_146890f58,&PTR_FUN_144a374c0);
  }
  return DAT_146890f58;
}



// FUNCTION 141416650 FUN_141416650 body=47 status=ok
// SIG undefined FUN_141416650(void)

longlong FUN_141416650(void)

{
  if (DAT_146890f68 == 0) {
    FUN_141786440(&DAT_146890f68,&PTR_StaticClass_144a38400);
  }
  return DAT_146890f68;
}



// FUNCTION 141416680 FUN_141416680 body=47 status=ok
// SIG undefined FUN_141416680(void)

longlong FUN_141416680(void)

{
  if (DAT_146890f78 == 0) {
    FUN_141786440(&DAT_146890f78,&PTR_FUN_144a39270);
  }
  return DAT_146890f78;
}



// FUNCTION 1414166b0 FUN_1414166b0 body=47 status=ok
// SIG undefined FUN_1414166b0(void)

longlong FUN_1414166b0(void)

{
  if (DAT_146890fb0 == 0) {
    FUN_141786440(&DAT_146890fb0,&PTR_GetPrivateStaticClass_144a39770);
  }
  return DAT_146890fb0;
}



// FUNCTION 1414166e0 FUN_1414166e0 body=47 status=ok
// SIG undefined FUN_1414166e0(void)

longlong FUN_1414166e0(void)

{
  if (DAT_146890f88 == 0) {
    FUN_1417866a0(&DAT_146890f88,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c6250);
  }
  return DAT_146890f88;
}



// FUNCTION 141416710 FUN_141416710 body=47 status=ok
// SIG undefined FUN_141416710(void)

longlong FUN_141416710(void)

{
  if (DAT_146890fc8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146890fc8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c4630);
  }
  return DAT_146890fc8;
}



// FUNCTION 141416740 FUN_141416740 body=47 status=ok
// SIG undefined FUN_141416740(void)

longlong FUN_141416740(void)

{
  if (DAT_146890fd8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146890fd8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c4810);
  }
  return DAT_146890fd8;
}



// FUNCTION 141416770 FUN_141416770 body=47 status=ok
// SIG undefined FUN_141416770(void)

longlong FUN_141416770(void)

{
  if (DAT_146890ee0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146890ee0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c1b20);
  }
  return DAT_146890ee0;
}



// FUNCTION 1414167a0 FUN_1414167a0 body=47 status=ok
// SIG undefined FUN_1414167a0(void)

longlong FUN_1414167a0(void)

{
  if (DAT_146890f50 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146890f50,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c2960);
  }
  return DAT_146890f50;
}



// FUNCTION 1414167d0 FUN_1414167d0 body=47 status=ok
// SIG undefined FUN_1414167d0(void)

longlong FUN_1414167d0(void)

{
  if (DAT_146890f30 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146890f30,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c2680);
  }
  return DAT_146890f30;
}



// FUNCTION 141416800 FUN_141416800 body=47 status=ok
// SIG undefined FUN_141416800(void)

longlong FUN_141416800(void)

{
  if (DAT_146890f20 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146890f20,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c2080);
  }
  return DAT_146890f20;
}



// FUNCTION 141416830 FUN_141416830 body=47 status=ok
// SIG undefined FUN_141416830(void)

longlong FUN_141416830(void)

{
  if (DAT_146890fa8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146890fa8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c3e20);
  }
  return DAT_146890fa8;
}



// FUNCTION 141416860 FUN_141416860 body=47 status=ok
// SIG undefined FUN_141416860(void)

longlong FUN_141416860(void)

{
  if (DAT_146890f98 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146890f98,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c3c00);
  }
  return DAT_146890f98;
}



// FUNCTION 141416890 FUN_141416890 body=47 status=ok
// SIG undefined FUN_141416890(void)

longlong FUN_141416890(void)

{
  if (DAT_146890f10 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146890f10,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c1fc0);
  }
  return DAT_146890f10;
}



// FUNCTION 1414168c0 FUN_1414168c0 body=47 status=ok
// SIG undefined FUN_1414168c0(void)

longlong FUN_1414168c0(void)

{
  if (DAT_146890f40 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146890f40,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c27b0);
  }
  return DAT_146890f40;
}



// FUNCTION 1414168f0 FUN_1414168f0 body=472 status=ok
// SIG undefined FUN_1414168f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414168f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_138 [32];
  undefined4 local_118 [2];
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [80];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_48;
  undefined1 local_46;
  undefined1 local_44;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_110 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_110);
  }
  _guard_xfg_dispatch_icall_nop(local_e8,0,0xc0);
  local_98 = _DAT_1468b5b70;
  uStack_90 = uRam00000001468b5b78;
  local_78 = _DAT_1468b5b90;
  uStack_74 = uRam00000001468b5b94;
  uStack_70 = uRam00000001468b5b98;
  uStack_6c = uRam00000001468b5b9c;
  local_88 = _DAT_1468b5b80;
  uStack_84 = uRam00000001468b5b84;
  uStack_80 = uRam00000001468b5b88;
  uStack_7c = uRam00000001468b5b8c;
  local_48 = 1;
  local_46 = 1;
  local_44 = 0;
  local_38 = 0x3f800000;
  local_34 = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  puVar2 = local_e8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_108);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  local_118[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_118);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_118);
  }
  local_f8 = local_108;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_f0 = local_100;
  uVar1 = FUN_140a80a60(local_110,puVar2,&local_f8,local_118[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141416ad0 FUN_141416ad0 body=720 status=ok
// SIG undefined FUN_141416ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141416ad0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined1 auStack_448 [32];
  undefined4 local_428 [4];
  undefined1 local_418 [432];
  undefined4 local_268;
  undefined1 local_264;
  undefined4 local_260;
  undefined1 local_25c;
  undefined1 local_258;
  undefined4 local_254;
  undefined1 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined1 local_240;
  undefined1 local_23f;
  longlong local_238;
  int local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined1 local_218 [336];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  longlong local_78;
  undefined4 local_68;
  char local_64;
  undefined4 local_60;
  char local_5c;
  undefined1 local_58;
  undefined4 local_54;
  char local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined1 local_3f;
  longlong local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_448;
  FUN_140a7aac0(local_218);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_218);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_218);
  }
  local_428[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_428);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_428);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140a7ab30(local_418,local_218);
  lVar1 = local_38;
  local_264 = local_64 != '\0';
  if ((bool)local_264) {
    local_268 = local_68;
  }
  local_25c = local_5c != '\0';
  if ((bool)local_25c) {
    local_260 = local_60;
  }
  local_258 = local_58;
  local_250 = local_50 != '\0';
  if ((bool)local_250) {
    local_254 = local_54;
  }
  local_24c = local_4c;
  local_240 = local_40;
  local_244 = local_44;
  local_23f = local_3f;
  local_248 = local_48;
  local_238 = 0;
  local_230 = local_30;
  if (local_30 == 0) {
    local_22c = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_238,local_30,0);
    puVar2 = (undefined4 *)(local_238 + 4);
    puVar3 = (undefined4 *)(lVar1 + 4);
    do {
      puVar2[-1] = puVar3[-1];
      *puVar2 = *puVar3;
      puVar2[1] = puVar3[1];
      puVar2[2] = puVar3[2];
      local_30 = local_30 + -1;
      puVar2 = puVar2 + 4;
      puVar3 = puVar3 + 4;
    } while (local_30 != 0);
  }
  local_228 = local_28;
  FUN_140a830d0(local_418,local_428[0]);
  if (local_38 != 0) {
    FMemory::Free();
  }
  local_50 = 0;
  local_5c = 0;
  local_64 = 0;
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    plVar4 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar4 = local_a8;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141416da0 FUN_141416da0 body=1513 status=ok
// SIG undefined FUN_141416da0(void)

void FUN_141416da0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  undefined1 local_res10 [8];
  int local_res20 [2];
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88 [2];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_90 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_90);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_cc = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_cc);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_cc);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_d0 = 0;
  puVar2 = local_78;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_d0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
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
  local_88[0] = 0;
  local_88[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_a8 = 0;
  plVar1 = local_88;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_b0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_b0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  FUN_142d979c0(&local_68);
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
  local_d4 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_d4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_d4);
  }
  local_d8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_d8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  local_dc = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_dc);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_dc);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar3 = local_res20[0] != 0;
  local_b8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_c0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_e8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  bVar4 = local_e8 != 0;
  local_e0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_e0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  local_e4 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_e4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_e4);
  }
  local_c8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_48 = local_68;
  uStack_40 = uStack_60;
  local_38 = local_58;
  uStack_30 = uStack_50;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140a83140(local_90,local_cc,puVar2,local_d0,local_98,local_a0,plVar1,local_a8,local_b0,
                &local_48,local_res10[0],local_d4,local_d8,local_dc,bVar3,local_b8,local_c0,bVar4,
                local_e0,local_e4,local_c8);
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141417390 FUN_141417390 body=2008 status=ok
// SIG undefined FUN_141417390(void)

void FUN_141417390(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  int local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_258 [2];
  undefined2 local_250;
  undefined2 uStack_24e;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [12];
  undefined4 local_9c;
  
  local_1f0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_1f0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_1f0);
  }
  local_1f8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_1f8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_1f8);
  }
  local_200 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_200);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_200);
  }
  local_258[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_258);
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_178);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_178);
  }
  local_208 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_208);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_208);
  }
  local_210 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_210);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_210);
  }
  local_218 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_218);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_218);
  }
  local_220 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_220);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_220);
  }
  local_240 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_240);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_240);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_188);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_188);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_198);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_198);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_1a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a8);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_1b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b8);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_1c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c8);
  }
  FUN_142d979c0(&local_108);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_108);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  local_228 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_228);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_228);
  }
  local_230 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_230);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_230);
  }
  local_1e8 = 0xbf800000;
  uStack_1e4 = 0xbf800000;
  uStack_1e0 = 0xbf800000;
  uStack_1dc = uStack_1dc & 0xffffff00;
  local_1d8 = 0x3f800000;
  uStack_1d4 = 0x3f800000;
  local_1d0 = 0x3f800000;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_1e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_1e8);
  }
  local_250 = 0;
  uStack_24c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_250);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_250);
  }
  local_248 = 0x3f800000;
  uStack_244 = 0x3f800000;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_248);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_248);
  }
  local_238 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_238);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_238);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_e8 = CONCAT44(uStack_1e4,local_1e8);
  uStack_e0 = CONCAT44(uStack_1dc,uStack_1e0);
  local_d8 = CONCAT44(uStack_1d4,local_1d8);
  local_d0 = local_1d0;
  local_160 = local_1c0;
  local_150 = local_1b0;
  local_140 = local_1a0;
  local_130 = local_190;
  local_120 = local_180;
  local_110 = local_170;
  local_c8 = local_108;
  uStack_c0 = uStack_100;
  local_168 = local_1c8;
  local_158 = local_1b8;
  local_148 = local_1a8;
  local_138 = local_198;
  local_128 = local_188;
  local_118 = local_178;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_b8 = local_f8;
  uStack_b4 = uStack_f4;
  uStack_b0 = uStack_f0;
  uStack_ac = uStack_ec;
  FUN_140a875c0(local_1f0,local_1f8,local_200,local_258[0],puVar1,&local_118,local_208,local_210,
                local_218,local_220,local_240,&local_128,&local_138,&local_148,&local_158,
                local_res20[0],&local_168,&local_c8,local_228,local_230,&local_e8,
                CONCAT44(uStack_24c,CONCAT22(uStack_24e,local_250)),CONCAT44(uStack_244,local_248),
                local_238,local_res10[0] != 0);
  return;
}



// FUNCTION 141417b70 FUN_141417b70 body=127 status=ok
// SIG undefined FUN_141417b70(void)

void FUN_141417b70(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_140a8bbe0(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141417bf0 FUN_141417bf0 body=127 status=ok
// SIG undefined FUN_141417bf0(void)

void FUN_141417bf0(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_140a8c6e0(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141417c70 FUN_141417c70 body=243 status=ok
// SIG undefined FUN_141417c70(void)

void FUN_141417c70(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
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
  uVar1 = FUN_140a8f110(local_res20,local_res10[0],local_res18[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141417d70 FUN_141417d70 body=190 status=ok
// SIG undefined FUN_141417d70(void)

void FUN_141417d70(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 local_res10 [8];
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
  uVar1 = FUN_140a8f180(local_res18,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141417e30 FUN_141417e30 body=190 status=ok
// SIG undefined FUN_141417e30(void)

void FUN_141417e30(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 local_res10 [8];
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
  uVar1 = FUN_140a8f230(local_res18,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141417ef0 FUN_141417ef0 body=1521 status=ok
// SIG undefined FUN_141417ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141417ef0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  undefined1 auStack_428 [32];
  undefined8 local_408;
  undefined1 *local_400;
  undefined8 *local_3f8;
  undefined8 *local_3f0;
  undefined8 *local_3e8;
  undefined8 *local_3e0;
  undefined4 local_3d8;
  undefined4 local_3d0;
  undefined4 local_3c8;
  undefined4 local_3c0;
  undefined4 local_3b8;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398 [2];
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_338;
  undefined4 local_330;
  undefined8 local_328;
  undefined4 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined1 local_2c8 [12];
  undefined4 local_2bc;
  undefined1 local_238 [336];
  longlong local_e8 [4];
  longlong *local_c8;
  int local_b8;
  longlong local_98;
  undefined1 local_84;
  undefined1 local_7c;
  undefined1 local_70;
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_428;
  local_378 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_378);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_378);
  }
  local_380 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_380);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_380);
  }
  local_388 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_388);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_388);
  }
  local_390 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_390);
  }
  _guard_xfg_dispatch_icall_nop(local_2c8,0,0x90);
  local_2bc = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_2c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_2c8);
  }
  puVar3 = local_2c8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_350);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_350);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_360);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_360);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_370);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_370);
  }
  FUN_142d979c0(&local_308);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_308);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_308);
  }
  local_398[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_398);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_398);
  }
  local_39c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_39c);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_39c);
  }
  local_3a0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_3a0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_3a0);
  }
  local_3a4 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_3a4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_3a4);
  }
  local_3a8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_3a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_3a8);
  }
  local_330 = local_368;
  local_2e8 = local_308;
  uStack_2e0 = uStack_300;
  local_320 = local_358;
  local_338 = local_370;
  local_310 = local_348;
  local_3e0 = &local_2e8;
  local_328 = local_360;
  local_318 = local_350;
  local_3b8 = local_3a8;
  local_2d8 = local_2f8;
  uStack_2d0 = uStack_2f0;
  local_3c0 = local_3a4;
  local_3c8 = local_3a0;
  local_3d0 = local_39c;
  local_3d8 = local_398[0];
  local_3e8 = &local_338;
  local_3f8 = &local_318;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_408 = local_390;
  local_400 = puVar3;
  local_3f0 = &local_328;
  lVar2 = FUN_140a8f5e0(local_238,local_378,local_380,local_388);
  FUN_140a7db00(param_3,lVar2);
  if ((undefined4 *)(lVar2 + 0x1b0) != (undefined4 *)(param_3 + 0x1b0)) {
    if (*(char *)(param_3 + 0x1b4) != '\0') {
      *(undefined1 *)(param_3 + 0x1b4) = 0;
    }
    if (*(char *)(lVar2 + 0x1b4) != '\0') {
      *(undefined4 *)(param_3 + 0x1b0) = *(undefined4 *)(lVar2 + 0x1b0);
      *(undefined1 *)(param_3 + 0x1b4) = 1;
    }
  }
  if ((undefined4 *)(lVar2 + 0x1b8) != (undefined4 *)(param_3 + 0x1b8)) {
    if (*(char *)(param_3 + 0x1bc) != '\0') {
      *(undefined1 *)(param_3 + 0x1bc) = 0;
    }
    if (*(char *)(lVar2 + 0x1bc) != '\0') {
      *(undefined4 *)(param_3 + 0x1b8) = *(undefined4 *)(lVar2 + 0x1b8);
      *(undefined1 *)(param_3 + 0x1bc) = 1;
    }
  }
  *(undefined1 *)(param_3 + 0x1c0) = *(undefined1 *)(lVar2 + 0x1c0);
  if ((undefined4 *)(lVar2 + 0x1c4) != (undefined4 *)(param_3 + 0x1c4)) {
    if (*(char *)(param_3 + 0x1c8) != '\0') {
      *(undefined1 *)(param_3 + 0x1c8) = 0;
    }
    if (*(char *)(lVar2 + 0x1c8) != '\0') {
      *(undefined4 *)(param_3 + 0x1c4) = *(undefined4 *)(lVar2 + 0x1c4);
      *(undefined1 *)(param_3 + 0x1c8) = 1;
    }
  }
  plVar4 = (longlong *)(lVar2 + 0x1e0);
  *(undefined4 *)(param_3 + 0x1cc) = *(undefined4 *)(lVar2 + 0x1cc);
  plVar1 = (longlong *)(param_3 + 0x1e0);
  *(undefined4 *)(param_3 + 0x1d0) = *(undefined4 *)(lVar2 + 0x1d0);
  *(undefined4 *)(param_3 + 0x1d4) = *(undefined4 *)(lVar2 + 0x1d4);
  *(undefined1 *)(param_3 + 0x1d8) = *(undefined1 *)(lVar2 + 0x1d8);
  *(undefined1 *)(param_3 + 0x1d9) = *(undefined1 *)(lVar2 + 0x1d9);
  if (plVar1 != plVar4) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar4;
    *plVar4 = 0;
    *(undefined4 *)(param_3 + 0x1e8) = *(undefined4 *)(lVar2 + 0x1e8);
    *(undefined4 *)(param_3 + 0x1ec) = *(undefined4 *)(lVar2 + 0x1ec);
    *(undefined8 *)(lVar2 + 0x1e8) = 0;
  }
  *(undefined8 *)(param_3 + 0x1f0) = *(undefined8 *)(lVar2 + 0x1f0);
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_70 = 0;
  local_7c = 0;
  local_84 = 0;
  if (local_98 != 0) {
    FMemory::Free();
  }
  if (local_b8 != 0) {
    plVar4 = local_e8;
    if (local_c8 != (longlong *)0x0) {
      plVar4 = local_c8;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414184f0 FUN_1414184f0 body=128 status=ok
// SIG undefined FUN_1414184f0(void)

void FUN_1414184f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_140a96040(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141418580 FUN_141418580 body=53 status=ok
// SIG undefined FUN_141418580(void)

void FUN_141418580(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x128;
    *puVar1 = &PTR_FUN_144a442e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414185c0 FUN_1414185c0 body=162 status=ok
// SIG undefined FUN_1414185c0(void)

longlong FUN_1414185c0(void)

{
  if (DAT_146891720 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDownloadableContentGlobalsData",&DAT_146891720,
                  FUN_140447710,0x58,0x10000000,0,L"Engine",FUN_14141a700,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146891720;
}



// FUNCTION 141418670 FUN_141418670 body=53 status=ok
// SIG undefined FUN_141418670(void)

void FUN_141418670(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x120;
    *puVar1 = &PTR_FUN_144a44400;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414186b0 FUN_1414186b0 body=53 status=ok
// SIG undefined FUN_1414186b0(void)

void FUN_1414186b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf8;
    *puVar1 = &PTR_FUN_144a44518;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414186f0 FUN_1414186f0 body=53 status=ok
// SIG undefined FUN_1414186f0(void)

void FUN_1414186f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf8;
    *puVar1 = &PTR_FUN_144a44630;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141418730 FUN_141418730 body=53 status=ok
// SIG undefined FUN_141418730(void)

void FUN_141418730(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x168;
    *puVar1 = &PTR_FUN_144a44748;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141418780 FUN_141418780 body=53 status=ok
// SIG undefined FUN_141418780(void)

void FUN_141418780(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144a430a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414187e0 FUN_1414187e0 body=162 status=ok
// SIG undefined FUN_1414187e0(void)

longlong FUN_1414187e0(void)

{
  if (DAT_146891730 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDownloadableContentLicenseData",&DAT_146891730,
                  FUN_140447710,0x78,0x10000000,0,L"Engine",FUN_14141a740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1404e7290,&LAB_140447700,0);
  }
  return DAT_146891730;
}



// FUNCTION 141418890 FUN_141418890 body=151 status=ok
// SIG undefined FUN_141418890(void)

longlong FUN_141418890(void)

{
  if (DAT_1468916f0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDialogSystemCustomization",&DAT_1468916f0,FUN_140447710,
                  0x30,0x10000000,0,L"Engine",FUN_14141a6b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468916f0;
}



// FUNCTION 141418960 FUN_141418960 body=162 status=ok
// SIG undefined FUN_141418960(void)

longlong FUN_141418960(void)

{
  if (DAT_146891750 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDownloadableEntitlementSetData",&DAT_146891750,
                  FUN_140447710,0x90,0x10000000,0,L"Engine",FUN_14141a7a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1404e7160,&LAB_140447700,0);
  }
  return DAT_146891750;
}



// FUNCTION 141418a10 FUN_141418a10 body=47 status=ok
// SIG undefined FUN_141418a10(void)

longlong FUN_141418a10(void)

{
  if (DAT_146891670 == 0) {
    FUN_141786440(&DAT_146891670,&PTR_FUN_144a3f060);
  }
  return DAT_146891670;
}



// FUNCTION 141418a40 FUN_141418a40 body=47 status=ok
// SIG undefined FUN_141418a40(void)

longlong FUN_141418a40(void)

{
  if (DAT_1468915e0 == 0) {
    FUN_141786a30(&DAT_1468915e0,&PTR_FUN_1463c7750);
  }
  return DAT_1468915e0;
}



// FUNCTION 141418a70 FUN_141418a70 body=47 status=ok
// SIG undefined FUN_141418a70(void)

longlong FUN_141418a70(void)

{
  if (DAT_1468915e8 == 0) {
    FUN_141786a30(&DAT_1468915e8,&PTR_FUN_1463c7810);
  }
  return DAT_1468915e8;
}



// FUNCTION 141418aa0 FUN_141418aa0 body=47 status=ok
// SIG undefined FUN_141418aa0(void)

longlong FUN_141418aa0(void)

{
  if (DAT_1468915f0 == 0) {
    FUN_141786a30(&DAT_1468915f0,&PTR_FUN_1463c7890);
  }
  return DAT_1468915f0;
}



// FUNCTION 141418ad0 FUN_141418ad0 body=47 status=ok
// SIG undefined FUN_141418ad0(void)

longlong FUN_141418ad0(void)

{
  if (DAT_1468915f8 == 0) {
    FUN_141786a30(&DAT_1468915f8,&PTR_FUN_1463c78d0);
  }
  return DAT_1468915f8;
}



// FUNCTION 141418b00 FUN_141418b00 body=47 status=ok
// SIG undefined FUN_141418b00(void)

longlong FUN_141418b00(void)

{
  if (DAT_146891600 == 0) {
    FUN_141786a30(&DAT_146891600,&PTR_FUN_1463c7910);
  }
  return DAT_146891600;
}



// FUNCTION 141418b30 FUN_141418b30 body=47 status=ok
// SIG undefined FUN_141418b30(void)

longlong FUN_141418b30(void)

{
  if (DAT_146891608 == 0) {
    FUN_141786a30(&DAT_146891608,&PTR_FUN_1463c7990);
  }
  return DAT_146891608;
}



// FUNCTION 141418b60 FUN_141418b60 body=47 status=ok
// SIG undefined FUN_141418b60(void)

longlong FUN_141418b60(void)

{
  if (DAT_146891610 == 0) {
    FUN_141786a30(&DAT_146891610,&PTR_FUN_1463c7a10);
  }
  return DAT_146891610;
}



// FUNCTION 141418b90 FUN_141418b90 body=47 status=ok
// SIG undefined FUN_141418b90(void)

longlong FUN_141418b90(void)

{
  if (DAT_146891618 == 0) {
    FUN_141786a30(&DAT_146891618,&PTR_FUN_1463c7ad0);
  }
  return DAT_146891618;
}



// FUNCTION 141418bc0 FUN_141418bc0 body=47 status=ok
// SIG undefined FUN_141418bc0(void)

longlong FUN_141418bc0(void)

{
  if (DAT_146891620 == 0) {
    FUN_141786a30(&DAT_146891620,&PTR_FUN_1463c7b50);
  }
  return DAT_146891620;
}



// FUNCTION 141418bf0 FUN_141418bf0 body=47 status=ok
// SIG undefined FUN_141418bf0(void)

longlong FUN_141418bf0(void)

{
  if (DAT_146891628 == 0) {
    FUN_141786a30(&DAT_146891628,&PTR_FUN_1463c7b90);
  }
  return DAT_146891628;
}



// FUNCTION 141418c20 FUN_141418c20 body=47 status=ok
// SIG undefined FUN_141418c20(void)

longlong FUN_141418c20(void)

{
  if (DAT_146891630 == 0) {
    FUN_141786a30(&DAT_146891630,&PTR_FUN_1463c7bd0);
  }
  return DAT_146891630;
}



// FUNCTION 141418c50 FUN_141418c50 body=47 status=ok
// SIG undefined FUN_141418c50(void)

longlong FUN_141418c50(void)

{
  if (DAT_146891638 == 0) {
    FUN_141786a30(&DAT_146891638,&PTR_FUN_1463c7cc0);
  }
  return DAT_146891638;
}



// FUNCTION 141418c80 FUN_141418c80 body=47 status=ok
// SIG undefined FUN_141418c80(void)

longlong FUN_141418c80(void)

{
  if (DAT_146891640 == 0) {
    FUN_141786a30(&DAT_146891640,&PTR_FUN_1463c7d00);
  }
  return DAT_146891640;
}



// FUNCTION 141418cb0 FUN_141418cb0 body=47 status=ok
// SIG undefined FUN_141418cb0(void)

longlong FUN_141418cb0(void)

{
  if (DAT_146891648 == 0) {
    FUN_141786a30(&DAT_146891648,&PTR_FUN_1463c7df0);
  }
  return DAT_146891648;
}



// FUNCTION 141418ce0 FUN_141418ce0 body=47 status=ok
// SIG undefined FUN_141418ce0(void)

longlong FUN_141418ce0(void)

{
  if (DAT_146891650 == 0) {
    FUN_141786a30(&DAT_146891650,&PTR_FUN_1463c7e30);
  }
  return DAT_146891650;
}



// FUNCTION 141418d10 FUN_141418d10 body=47 status=ok
// SIG undefined FUN_141418d10(void)

longlong FUN_141418d10(void)

{
  if (DAT_146891658 == 0) {
    FUN_141786a30(&DAT_146891658,&PTR_FUN_1463c7e70);
  }
  return DAT_146891658;
}



// FUNCTION 141418d40 FUN_141418d40 body=47 status=ok
// SIG undefined FUN_141418d40(void)

longlong FUN_141418d40(void)

{
  if (DAT_146891660 == 0) {
    FUN_141786a30(&DAT_146891660,&PTR_FUN_1463c7eb0);
  }
  return DAT_146891660;
}



// FUNCTION 141418d70 FUN_141418d70 body=47 status=ok
// SIG undefined FUN_141418d70(void)

longlong FUN_141418d70(void)

{
  if (DAT_146891668 == 0) {
    FUN_141786a30(&DAT_146891668,&PTR_FUN_1463c7ef0);
  }
  return DAT_146891668;
}



// FUNCTION 141418da0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UThrobber::GetPrivateStaticClass(void)

{
  if (DAT_146891530 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DayNightCycleComponent",&DAT_146891530,FUN_14141c950,0x1a8,
                  0x10000000,0,L"Engine",&LAB_14141a220,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146891530;
}



// FUNCTION 141418e50 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGameNetworkManager::GetPrivateStaticClass(void)

{
  if (DAT_1468915c8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDebugWeaponBuilderMenu",&DAT_1468915c8,FUN_14141c980,0x3b8
                  ,0x10000004,0,L"Game",FUN_14141a340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141301c60,&LAB_140447700,0);
  }
  return DAT_1468915c8;
}



// FUNCTION 141418f00 FUN_141418f00 body=47 status=ok
// SIG undefined FUN_141418f00(void)

longlong FUN_141418f00(void)

{
  if (DAT_146891528 == 0) {
    FUN_141786440(&DAT_146891528,&PTR_GetPrivateStaticClass_144a3d1f0);
  }
  return DAT_146891528;
}



// FUNCTION 141418f30 FUN_141418f30 body=47 status=ok
// SIG undefined FUN_141418f30(void)

longlong FUN_141418f30(void)

{
  if (DAT_146891520 == 0) {
    FUN_141786a30(&DAT_146891520,&PTR_FUN_1463c65c0);
  }
  return DAT_146891520;
}



// FUNCTION 141418f60 FUN_141418f60 body=53 status=ok
// SIG undefined FUN_141418f60(void)

void FUN_141418f60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144a422f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141418fa0 FUN_141418fa0 body=53 status=ok
// SIG undefined FUN_141418fa0(void)

void FUN_141418fa0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144a43c08;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141419000 FUN_141419000 body=162 status=ok
// SIG undefined FUN_141419000(void)

longlong FUN_141419000(void)

{
  if (DAT_146891760 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDownloadableInventorySetData",&DAT_146891760,FUN_140447710
                  ,0x78,0x10000000,0,L"Engine",FUN_14141a800,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14141c8b0,&LAB_140447700,0);
  }
  return DAT_146891760;
}



// FUNCTION 1414190b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong APlayerState::GetPrivateStaticClass(void)

{
  if (DAT_146891810 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDroneProjectileMovementComponent_GRMLN",&DAT_146891810,
                  FUN_140447710,0x478,0x10000000,0,L"Engine",&LAB_14141a850,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14141c8e0,&LAB_140447700,0);
  }
  return DAT_146891810;
}



// FUNCTION 141419170 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AAmbientSound::GetPrivateStaticClass(void)

{
  if (DAT_1468916b8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDialogComponent",&DAT_1468916b8,FUN_140447710,0x330,
                  0x10000000,0,L"Engine",FUN_14141a4c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140604cc0,&LAB_140447700,0);
  }
  return DAT_1468916b8;
}



// FUNCTION 141419230 FUN_141419230 body=162 status=ok
// SIG undefined FUN_141419230(void)

longlong FUN_141419230(void)

{
  if (DAT_146891820 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GbxCondition_IsGRMLNBeamTarget",&DAT_146891820,FUN_140447710,
                  0x88,0x10000000,0,L"Engine",FUN_14141a240,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146891820;
}



// FUNCTION 141419300 FUN_141419300 body=162 status=ok
// SIG undefined FUN_141419300(void)

longlong FUN_141419300(void)

{
  if (DAT_1468916e0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDialogSettings",&DAT_1468916e0,FUN_140447710,0x280,
                  0x10000000,0,L"Engine",FUN_14141a580,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140605090,&LAB_140447700,0);
  }
  return DAT_1468916e0;
}



// FUNCTION 1414193b0 FUN_1414193b0 body=162 status=ok
// SIG undefined FUN_1414193b0(void)

longlong FUN_1414193b0(void)

{
  if (DAT_146891508 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDamageType",&DAT_146891508,FUN_140447710,0x150,0x10000000,
                  0,L"Engine",FUN_14141a2a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142e49950,&LAB_140447700,0);
  }
  return DAT_146891508;
}



// FUNCTION 141419460 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UComboBoxString::GetPrivateStaticClass(void)

{
  if (DAT_146891928 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDroneProjectile_GRMLN",&DAT_146891928,FUN_14141c920,0xcd0,
                  0x10000000,0,L"Engine",&LAB_14141a200,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  UMovieScene3DTransformSection::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146891928;
}



// FUNCTION 141419510 FUN_141419510 body=47 status=ok
// SIG undefined FUN_141419510(void)

longlong FUN_141419510(void)

{
  if (DAT_1468915c0 == 0) {
    FUN_141786440(&DAT_1468915c0,&PTR_GetPrivateStaticClass_144a3fee0);
  }
  return DAT_1468915c0;
}



// FUNCTION 141419540 FUN_141419540 body=47 status=ok
// SIG undefined FUN_141419540(void)

longlong FUN_141419540(void)

{
  if (DAT_146891588 == 0) {
    FUN_141786a30(&DAT_146891588,&PTR_FUN_1463c6bf0);
  }
  return DAT_146891588;
}



// FUNCTION 141419570 FUN_141419570 body=47 status=ok
// SIG undefined FUN_141419570(void)

longlong FUN_141419570(void)

{
  if (DAT_146891590 == 0) {
    FUN_141786a30(&DAT_146891590,&PTR_FUN_1463c6cb0);
  }
  return DAT_146891590;
}



// FUNCTION 1414195a0 FUN_1414195a0 body=47 status=ok
// SIG undefined FUN_1414195a0(void)

longlong FUN_1414195a0(void)

{
  if (DAT_146891598 == 0) {
    FUN_141786a30(&DAT_146891598,&PTR_FUN_1463c6cf0);
  }
  return DAT_146891598;
}



// FUNCTION 1414195d0 FUN_1414195d0 body=47 status=ok
// SIG undefined FUN_1414195d0(void)

longlong FUN_1414195d0(void)

{
  if (DAT_1468915a0 == 0) {
    FUN_141786a30(&DAT_1468915a0,&PTR_FUN_1463c6db0);
  }
  return DAT_1468915a0;
}



// FUNCTION 141419600 FUN_141419600 body=47 status=ok
// SIG undefined FUN_141419600(void)

longlong FUN_141419600(void)

{
  if (DAT_1468915a8 == 0) {
    FUN_141786a30(&DAT_1468915a8,&PTR_FUN_1463c6e70);
  }
  return DAT_1468915a8;
}



// FUNCTION 141419630 FUN_141419630 body=47 status=ok
// SIG undefined FUN_141419630(void)

longlong FUN_141419630(void)

{
  if (DAT_1468915b0 == 0) {
    FUN_141786a30(&DAT_1468915b0,&PTR_FUN_1463c6f30);
  }
  return DAT_1468915b0;
}



// FUNCTION 141419660 FUN_141419660 body=47 status=ok
// SIG undefined FUN_141419660(void)

longlong FUN_141419660(void)

{
  if (DAT_1468915b8 == 0) {
    FUN_141786a30(&DAT_1468915b8,&PTR_FUN_1463c6ff0);
  }
  return DAT_1468915b8;
}



// FUNCTION 1414196a0 FUN_1414196a0 body=53 status=ok
// SIG undefined FUN_1414196a0(void)

void FUN_1414196a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_144a42008;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414196e0 FUN_1414196e0 body=162 status=ok
// SIG undefined FUN_1414196e0(void)

longlong FUN_1414196e0(void)

{
  if (DAT_1468916a8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDialogBlackboard",&DAT_1468916a8,FUN_14141c9e0,0x2a68,
                  0x10000000,0,L"Engine",FUN_14141a430,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1405e3660,FUN_1405fb550,&LAB_140447700
                  ,0);
  }
  return DAT_1468916a8;
}



// FUNCTION 1414197a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieScene3DTransformSection::GetPrivateStaticClass(void)

{
  if (DAT_146891780 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDroneProjectile",&DAT_146891780,FUN_14141c8f0,0x730,
                  0x10000000,0,L"Engine",&LAB_14141a1e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1413e4720
                  ,&LAB_140447700,0);
  }
  return DAT_146891780;
}



// FUNCTION 141419850 FUN_141419850 body=47 status=ok
// SIG undefined FUN_141419850(void)

longlong FUN_141419850(void)

{
  if (DAT_146891778 == 0) {
    FUN_141786440(&DAT_146891778,&PTR_GetPrivateStaticClass_144a40450);
  }
  return DAT_146891778;
}



// FUNCTION 141419880 FUN_141419880 body=47 status=ok
// SIG undefined FUN_141419880(void)

longlong FUN_141419880(void)

{
  if (DAT_146891768 == 0) {
    FUN_141786a30(&DAT_146891768,&PTR_FUN_1463c9280);
  }
  return DAT_146891768;
}



// FUNCTION 1414198b0 FUN_1414198b0 body=47 status=ok
// SIG undefined FUN_1414198b0(void)

longlong FUN_1414198b0(void)

{
  if (DAT_146891770 == 0) {
    FUN_141786a30(&DAT_146891770,&PTR_FUN_1463c9300);
  }
  return DAT_146891770;
}



// FUNCTION 1414198e0 FUN_1414198e0 body=162 status=ok
// SIG undefined FUN_1414198e0(void)

longlong FUN_1414198e0(void)

{
  if (DAT_146891678 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDeveloperPerks",&DAT_146891678,FUN_14141c9b0,0x1a0,
                  0x10000000,0,L"Engine",&LAB_14141a410,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146891678;
}



// FUNCTION 1414199a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGStartScreenUW::GetPrivateStaticClass(void)

{
  if (DAT_146891540 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDebugWeaponBuilderButton",&DAT_146891540,FUN_140447710,
                  0x300,0x10000000,0,L"Engine",FUN_14141a2f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14141c8d0,&LAB_140447700,0);
  }
  return DAT_146891540;
}



// FUNCTION 141419a60 FUN_141419a60 body=47 status=ok
// SIG undefined FUN_141419a60(void)

longlong FUN_141419a60(void)

{
  if (DAT_1468916a0 == 0) {
    FUN_141786440(&DAT_1468916a0,&PTR_FUN_144a40930);
  }
  return DAT_1468916a0;
}



// FUNCTION 141419a90 FUN_141419a90 body=47 status=ok
// SIG undefined FUN_141419a90(void)

longlong FUN_141419a90(void)

{
  if (DAT_146891698 == 0) {
    FUN_141786a30(&DAT_146891698,&PTR_FUN_1463c8170);
  }
  return DAT_146891698;
}



// FUNCTION 141419ac0 FUN_141419ac0 body=53 status=ok
// SIG undefined FUN_141419ac0(void)

void FUN_141419ac0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144a427f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141419b10 FUN_141419b10 body=47 status=ok
// SIG undefined FUN_141419b10(void)

longlong FUN_141419b10(void)

{
  if (DAT_1468917d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468917d0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c9940);
  }
  return DAT_1468917d0;
}



// FUNCTION 141419b40 FUN_141419b40 body=47 status=ok
// SIG undefined FUN_141419b40(void)

longlong FUN_141419b40(void)

{
  if (DAT_146891920 == 0) {
    FUN_141786440(&DAT_146891920,&PTR_GetPrivateStaticClass_144a3e550);
  }
  return DAT_146891920;
}



// FUNCTION 141419b70 FUN_141419b70 body=47 status=ok
// SIG undefined FUN_141419b70(void)

longlong FUN_141419b70(void)

{
  if (DAT_146891828 == 0) {
    FUN_141786a30(&DAT_146891828,&PTR_FUN_1463ca300);
  }
  return DAT_146891828;
}



// FUNCTION 141419ba0 FUN_141419ba0 body=47 status=ok
// SIG undefined FUN_141419ba0(void)

longlong FUN_141419ba0(void)

{
  if (DAT_146891830 == 0) {
    FUN_141786a30(&DAT_146891830,&PTR_FUN_1463ca380);
  }
  return DAT_146891830;
}



// FUNCTION 141419bd0 FUN_141419bd0 body=47 status=ok
// SIG undefined FUN_141419bd0(void)

longlong FUN_141419bd0(void)

{
  if (DAT_146891838 == 0) {
    FUN_141786a30(&DAT_146891838,&PTR_FUN_1463ca480);
  }
  return DAT_146891838;
}



// FUNCTION 141419c00 FUN_141419c00 body=47 status=ok
// SIG undefined FUN_141419c00(void)

longlong FUN_141419c00(void)

{
  if (DAT_146891840 == 0) {
    FUN_141786a30(&DAT_146891840,&PTR_FUN_1463ca500);
  }
  return DAT_146891840;
}



// FUNCTION 141419c30 FUN_141419c30 body=47 status=ok
// SIG undefined FUN_141419c30(void)

longlong FUN_141419c30(void)

{
  if (DAT_146891848 == 0) {
    FUN_141786a30(&DAT_146891848,&PTR_FUN_1463ca5c0);
  }
  return DAT_146891848;
}



// FUNCTION 141419c60 FUN_141419c60 body=47 status=ok
// SIG undefined FUN_141419c60(void)

longlong FUN_141419c60(void)

{
  if (DAT_146891850 == 0) {
    FUN_141786a30(&DAT_146891850,&PTR_FUN_1463ca680);
  }
  return DAT_146891850;
}



// FUNCTION 141419c90 FUN_141419c90 body=47 status=ok
// SIG undefined FUN_141419c90(void)

longlong FUN_141419c90(void)

{
  if (DAT_146891858 == 0) {
    FUN_141786a30(&DAT_146891858,&PTR_FUN_1463ca6c0);
  }
  return DAT_146891858;
}



// FUNCTION 141419cc0 FUN_141419cc0 body=47 status=ok
// SIG undefined FUN_141419cc0(void)

longlong FUN_141419cc0(void)

{
  if (DAT_146891860 == 0) {
    FUN_141786a30(&DAT_146891860,&PTR_FUN_1463ca740);
  }
  return DAT_146891860;
}



// FUNCTION 141419cf0 FUN_141419cf0 body=47 status=ok
// SIG undefined FUN_141419cf0(void)

longlong FUN_141419cf0(void)

{
  if (DAT_146891868 == 0) {
    FUN_141786a30(&DAT_146891868,&PTR_FUN_1463ca850);
  }
  return DAT_146891868;
}



// FUNCTION 141419d20 FUN_141419d20 body=47 status=ok
// SIG undefined FUN_141419d20(void)

longlong FUN_141419d20(void)

{
  if (DAT_146891870 == 0) {
    FUN_141786a30(&DAT_146891870,&PTR_FUN_1463ca8e0);
  }
  return DAT_146891870;
}



// FUNCTION 141419d50 FUN_141419d50 body=47 status=ok
// SIG undefined FUN_141419d50(void)

longlong FUN_141419d50(void)

{
  if (DAT_146891878 == 0) {
    FUN_141786a30(&DAT_146891878,&PTR_FUN_1463ca9f0);
  }
  return DAT_146891878;
}



// FUNCTION 141419d80 FUN_141419d80 body=47 status=ok
// SIG undefined FUN_141419d80(void)

longlong FUN_141419d80(void)

{
  if (DAT_146891880 == 0) {
    FUN_141786a30(&DAT_146891880,&PTR_FUN_1463cabb0);
  }
  return DAT_146891880;
}



// FUNCTION 141419db0 FUN_141419db0 body=47 status=ok
// SIG undefined FUN_141419db0(void)

longlong FUN_141419db0(void)

{
  if (DAT_146891888 == 0) {
    FUN_141786a30(&DAT_146891888,&PTR_FUN_1463cacf0);
  }
  return DAT_146891888;
}



// FUNCTION 141419de0 FUN_141419de0 body=47 status=ok
// SIG undefined FUN_141419de0(void)

longlong FUN_141419de0(void)

{
  if (DAT_146891890 == 0) {
    FUN_141786a30(&DAT_146891890,&PTR_FUN_1463cad70);
  }
  return DAT_146891890;
}



// FUNCTION 141419e10 FUN_141419e10 body=47 status=ok
// SIG undefined FUN_141419e10(void)

longlong FUN_141419e10(void)

{
  if (DAT_146891898 == 0) {
    FUN_141786a30(&DAT_146891898,&PTR_FUN_1463cadf0);
  }
  return DAT_146891898;
}



// FUNCTION 141419e40 FUN_141419e40 body=47 status=ok
// SIG undefined FUN_141419e40(void)

longlong FUN_141419e40(void)

{
  if (DAT_1468918a0 == 0) {
    FUN_141786a30(&DAT_1468918a0,&PTR_FUN_1463cae70);
  }
  return DAT_1468918a0;
}



// FUNCTION 141419e70 FUN_141419e70 body=47 status=ok
// SIG undefined FUN_141419e70(void)

longlong FUN_141419e70(void)

{
  if (DAT_1468918a8 == 0) {
    FUN_141786a30(&DAT_1468918a8,&PTR_FUN_1463caeb0);
  }
  return DAT_1468918a8;
}



// FUNCTION 141419ea0 FUN_141419ea0 body=47 status=ok
// SIG undefined FUN_141419ea0(void)

longlong FUN_141419ea0(void)

{
  if (DAT_1468918b0 == 0) {
    FUN_141786a30(&DAT_1468918b0,&PTR_FUN_1463caef0);
  }
  return DAT_1468918b0;
}



// FUNCTION 141419ed0 FUN_141419ed0 body=47 status=ok
// SIG undefined FUN_141419ed0(void)

longlong FUN_141419ed0(void)

{
  if (DAT_1468918b8 == 0) {
    FUN_141786a30(&DAT_1468918b8,&PTR_FUN_1463caf30);
  }
  return DAT_1468918b8;
}



// FUNCTION 141419f00 FUN_141419f00 body=47 status=ok
// SIG undefined FUN_141419f00(void)

longlong FUN_141419f00(void)

{
  if (DAT_1468918c0 == 0) {
    FUN_141786a30(&DAT_1468918c0,&PTR_FUN_1463caf70);
  }
  return DAT_1468918c0;
}



// FUNCTION 141419f30 FUN_141419f30 body=47 status=ok
// SIG undefined FUN_141419f30(void)

longlong FUN_141419f30(void)

{
  if (DAT_1468918c8 == 0) {
    FUN_141786a30(&DAT_1468918c8,&PTR_FUN_1463cafb0);
  }
  return DAT_1468918c8;
}



// FUNCTION 141419f60 FUN_141419f60 body=47 status=ok
// SIG undefined FUN_141419f60(void)

longlong FUN_141419f60(void)

{
  if (DAT_1468918d0 == 0) {
    FUN_141786a30(&DAT_1468918d0,&PTR_FUN_1463caff0);
  }
  return DAT_1468918d0;
}



// FUNCTION 141419f90 FUN_141419f90 body=47 status=ok
// SIG undefined FUN_141419f90(void)

longlong FUN_141419f90(void)

{
  if (DAT_1468918d8 == 0) {
    FUN_141786a30(&DAT_1468918d8,&PTR_FUN_1463cb070);
  }
  return DAT_1468918d8;
}



// FUNCTION 141419fc0 FUN_141419fc0 body=47 status=ok
// SIG undefined FUN_141419fc0(void)

longlong FUN_141419fc0(void)

{
  if (DAT_1468918e0 == 0) {
    FUN_141786a30(&DAT_1468918e0,&PTR_FUN_1463cb0b0);
  }
  return DAT_1468918e0;
}



// FUNCTION 141419ff0 FUN_141419ff0 body=47 status=ok
// SIG undefined FUN_141419ff0(void)

longlong FUN_141419ff0(void)

{
  if (DAT_1468918e8 == 0) {
    FUN_141786a30(&DAT_1468918e8,&PTR_FUN_1463cb170);
  }
  return DAT_1468918e8;
}



// FUNCTION 14141a020 FUN_14141a020 body=47 status=ok
// SIG undefined FUN_14141a020(void)

longlong FUN_14141a020(void)

{
  if (DAT_1468918f0 == 0) {
    FUN_141786a30(&DAT_1468918f0,&PTR_FUN_1463cb1f0);
  }
  return DAT_1468918f0;
}



// FUNCTION 14141a050 FUN_14141a050 body=47 status=ok
// SIG undefined FUN_14141a050(void)

longlong FUN_14141a050(void)

{
  if (DAT_1468918f8 == 0) {
    FUN_141786a30(&DAT_1468918f8,&PTR_FUN_1463cb280);
  }
  return DAT_1468918f8;
}



// FUNCTION 14141a080 FUN_14141a080 body=47 status=ok
// SIG undefined FUN_14141a080(void)

longlong FUN_14141a080(void)

{
  if (DAT_146891900 == 0) {
    FUN_141786a30(&DAT_146891900,&PTR_FUN_1463cb310);
  }
  return DAT_146891900;
}



// FUNCTION 14141a0b0 FUN_14141a0b0 body=47 status=ok
// SIG undefined FUN_14141a0b0(void)

longlong FUN_14141a0b0(void)

{
  if (DAT_146891908 == 0) {
    FUN_141786a30(&DAT_146891908,&PTR_FUN_1463cb390);
  }
  return DAT_146891908;
}



// FUNCTION 14141a0e0 FUN_14141a0e0 body=47 status=ok
// SIG undefined FUN_14141a0e0(void)

longlong FUN_14141a0e0(void)

{
  if (DAT_146891910 == 0) {
    FUN_141786a30(&DAT_146891910,&PTR_FUN_1463cb3d0);
  }
  return DAT_146891910;
}



// FUNCTION 14141a110 FUN_14141a110 body=47 status=ok
// SIG undefined FUN_14141a110(void)

longlong FUN_14141a110(void)

{
  if (DAT_146891918 == 0) {
    FUN_141786a30(&DAT_146891918,&PTR_FUN_1463cb410);
  }
  return DAT_146891918;
}



// FUNCTION 14141a140 FUN_14141a140 body=151 status=ok
// SIG undefined FUN_14141a140(void)

longlong FUN_14141a140(void)

{
  if (DAT_146891700 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDiscordManager",&DAT_146891700,FUN_140447710,0x68,
                  0x10000000,0,L"Engine",&LAB_14141a6f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146891700;
}



// FUNCTION 14141a240 FUN_14141a240 body=90 status=ok
// SIG undefined FUN_14141a240(void)

void FUN_14141a240(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x29) = 3;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144a43fe0;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
  }
  return;
}



// FUNCTION 14141a2a0 FUN_14141a2a0 body=73 status=ok
// SIG undefined FUN_14141a2a0(void)

void FUN_14141a2a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142d2f620(puVar1,param_1);
    *(undefined1 *)(puVar1 + 0x26) = 1;
    *puVar1 = &PTR_FUN_144a41150;
    puVar1[8] = &PTR_LAB_144a413d0;
    puVar1[0x25] = &PTR_LAB_144a41408;
  }
  return;
}



// FUNCTION 14141a2f0 FUN_14141a2f0 body=69 status=ok
// SIG undefined FUN_14141a2f0(void)

void FUN_14141a2f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14141a9f0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144a414d0;
    puVar1[0x20] = &PTR_LAB_1449b23f8;
    puVar1[0x41] = &PTR_LAB_1449b2420;
  }
  return;
}



// FUNCTION 14141a340 FUN_14141a340 body=196 status=ok
// SIG undefined FUN_14141a340(void)

void FUN_14141a340(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x2ed) = 1;
    *(undefined4 *)(puVar1 + 0x5e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2f4) = 0;
    *puVar1 = &PTR_FUN_144a41970;
    puVar1[0x20] = &PTR_LAB_144a41e10;
    puVar1[0x41] = &PTR_LAB_144a41e38;
    puVar1[0x57] = &PTR_LAB_144a41e88;
    puVar1[0x67] = 0;
    puVar1[0x68] = 0;
    puVar1[0x69] = 0;
    puVar1[0x6a] = 0;
    puVar1[0x6b] = 0;
    puVar1[0x6c] = 0;
    puVar1[0x6d] = 0;
    puVar1[0x6e] = 0;
    puVar1[0x6f] = 0;
    *(undefined4 *)(puVar1 + 0x76) = 1;
    *(undefined4 *)((longlong)puVar1 + 0x3b4) = 0x10001;
  }
  return;
}



// FUNCTION 14141a430 FUN_14141a430 body=139 status=ok
// SIG undefined FUN_14141a430(void)

void FUN_14141a430(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1405fcb20(puVar1,param_1);
    *puVar1 = &PTR_FUN_144a42520;
    puVar1[5] = &PTR_FUN_144a427a8;
    puVar1[0x53f] = 0;
    puVar1[0x540] = 0;
    puVar1[0x541] = 0;
    puVar1[0x542] = 0;
    puVar1[0x545] = 0;
    puVar1[0x546] = 0;
    *(undefined4 *)(puVar1 + 0x547) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2a3c) = 0;
    puVar1[0x549] = 0;
    *(undefined4 *)(puVar1 + 0x54a) = 0;
    puVar1[0x54b] = 0;
    puVar1[0x54c] = 0;
  }
  return;
}



// FUNCTION 14141a4c0 FUN_14141a4c0 body=181 status=ok
// SIG undefined FUN_14141a4c0(void)

void FUN_14141a4c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1405e1b60(puVar1,param_1);
    *puVar1 = &PTR_FUN_144a42918;
    puVar1[5] = &PTR_LAB_144a42d38;
    puVar1[0x59] = &PTR_LAB_144a42d68;
    puVar1[0x5b] = 0;
    puVar1[0x5c] = 0;
    puVar1[0x5d] = 0;
    *(undefined4 *)(puVar1 + 0x5e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2f4) = 0;
    puVar1[0x5a] = &DAT_1441d2800;
    puVar1[0x5f] = 0;
    puVar1[0x61] = 0;
    puVar1[0x62] = 0;
    puVar1[99] = 0;
    *(undefined4 *)(puVar1 + 100) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x324) = 0;
    puVar1[0x60] = &DAT_1441d2800;
    puVar1[0x65] = 0;
  }
  return;
}



// FUNCTION 14141a580 FUN_14141a580 body=290 status=ok
// SIG undefined FUN_14141a580(void)

void FUN_14141a580(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1405e1cb0(puVar1);
    *(undefined4 *)(puVar1 + 0x22) = 0x44c00000;
    *puVar1 = &PTR_FUN_144a42dc8;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    *(undefined4 *)(puVar1 + 0x27) = 0x41f00000;
    *(undefined4 *)(puVar1 + 0x29) = 0x451c4000;
    *(undefined8 *)((longlong)puVar1 + 0x14c) = 0x44bb8000;
    *(undefined4 *)((longlong)puVar1 + 0x154) = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    puVar1[0x33] = 0;
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    *(undefined4 *)(puVar1 + 0x38) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    puVar1[0x3a] = 0;
    *(undefined4 *)(puVar1 + 0x3b) = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0;
    *(undefined4 *)(puVar1 + 0x42) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x214) = 0;
    puVar1[0x44] = 0;
    *(undefined4 *)(puVar1 + 0x45) = 0;
    puVar1[0x46] = 0;
    puVar1[0x47] = 0;
    puVar1[0x4a] = 0;
    puVar1[0x4b] = 0;
    *(undefined4 *)(puVar1 + 0x4c) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x264) = 0;
    puVar1[0x4e] = 0;
    *(undefined4 *)(puVar1 + 0x4f) = 0;
  }
  return;
}



// FUNCTION 14141a6b0 FUN_14141a6b0 body=52 status=ok
// SIG undefined FUN_14141a6b0(void)

void FUN_14141a6b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144a431b8;
    puVar1[5] = &PTR_LAB_144a43430;
  }
  return;
}



// FUNCTION 14141a700 FUN_14141a700 body=63 status=ok
// SIG undefined FUN_14141a700(void)

void FUN_14141a700(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144a43458;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
  }
  return;
}



// FUNCTION 14141a740 FUN_14141a740 body=95 status=ok
// SIG undefined FUN_14141a740(void)

void FUN_14141a740(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_143f7a6e8;
    puVar1[7] = 0;
    FText::FText(puVar1 + 8);
    *puVar1 = &PTR_FUN_144a436d0;
    puVar1[0xc] = &PTR_LAB_144a43950;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
  }
  return;
}



// FUNCTION 14141a7a0 FUN_14141a7a0 body=85 status=ok
// SIG undefined FUN_14141a7a0(void)

void FUN_14141a7a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_143f7a448;
    FText::FText(puVar1 + 9);
    FText::FText(puVar1 + 0xc);
    *puVar1 = &PTR__scalar_deleting_destructor__144a43968;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
  }
  return;
}



// FUNCTION 14141a800 FUN_14141a800 body=69 status=ok
// SIG undefined FUN_14141a800(void)

void FUN_14141a800(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_143f7a448;
    FText::FText(puVar1 + 9);
    FText::FText(puVar1 + 0xc);
    *puVar1 = &PTR__scalar_deleting_destructor__144a43d20;
  }
  return;
}



// FUNCTION 14141a860 FResearchTreeMessageData body=110 status=ok
// SIG undefined FResearchTreeMessageData(void)

undefined8 * FResearchTreeMessageData::FResearchTreeMessageData(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x34)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0);
  }
  if ((undefined2 *)param_1[5] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[5] = 0;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 14141a9f0 FUN_14141a9f0 body=124 status=ok
// SIG undefined FUN_14141a9f0(void)

undefined8 * FUN_14141a9f0(undefined8 *param_1)

{
  FUN_141300770();
  *param_1 = &PTR_FUN_1449b1a40;
  param_1[0x20] = &PTR_LAB_1449b1ee0;
  param_1[0x41] = &PTR_LAB_1449b1f08;
  FWeakObjectPtr::operator=(param_1 + 0x57,0);
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  return param_1;
}



// FUNCTION 14141aa70 FUN_14141aa70 body=100 status=ok
// SIG undefined FUN_14141aa70(void)

void FUN_14141aa70(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[5] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 14141aae0 FUN_14141aae0 body=173 status=ok
// SIG undefined FUN_14141aae0(void)

void FUN_14141aae0(longlong *param_1)

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
      plVar7 = plVar7 + 6;
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



// FUNCTION 14141ab90 FUN_14141ab90 body=401 status=ok
// SIG undefined FUN_14141ab90(void)

void FUN_14141ab90(longlong *param_1)

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
      if (bVar4) goto LAB_14141ac51;
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
LAB_14141ac51:
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
      if (*(longlong *)((longlong)iStack_1c * 0x30 + *param_1 + 8) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
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



// FUNCTION 14141ad30 FUN_14141ad30 body=96 status=ok
// SIG undefined FUN_14141ad30(void)

void FUN_14141ad30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x48);
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
  return;
}



// FUNCTION 14141ad90 FUN_14141ad90 body=303 status=ok
// SIG undefined FUN_14141ad90(void)

void FUN_14141ad90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x80);
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
  plVar4 = *(longlong **)(param_1 + 0x68);
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
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_14407f730;
  FUN_141782120(param_1);
  return;
}



// FUNCTION 14141aec0 FUN_14141aec0 body=175 status=ok
// SIG undefined FUN_14141aec0(void)

void FUN_14141aec0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x278);
  lVar1 = *(longlong *)(param_1 + 0x270);
  if (iVar2 != 0) {
    do {
      FUN_1405f0e70(lVar1,0,0);
      lVar1 = lVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x270);
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  FUN_1405e2180(param_1 + 0x210);
  FUN_1405e2180(param_1 + 0x1b0);
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 14141af70 FUN_14141af70 body=189 status=ok
// SIG undefined FUN_14141af70(void)

longlong FUN_14141af70(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_1406da240(param_1 + 0x20,param_2 + 0x20);
  *(byte *)(param_1 + 0xd8) =
       *(byte *)(param_1 + 0xd8) ^ (*(byte *)(param_1 + 0xd8) ^ *(byte *)(param_2 + 0xd8)) & 1;
  *(byte *)(param_1 + 0xd8) =
       (*(byte *)(param_2 + 0xd8) ^ *(byte *)(param_1 + 0xd8)) & 2 ^ *(byte *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  return param_1;
}



// FUNCTION 14141b030 FUN_14141b030 body=484 status=ok
// SIG undefined FUN_14141b030(void)

undefined1 * FUN_14141b030(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(param_1 + 0x120);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  uVar6 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar6;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  uVar6 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = uVar6;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  uVar6 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = uVar6;
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  uVar6 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xf8) = uVar6;
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  uVar3 = *(undefined4 *)(param_2 + 0x10c);
  uVar4 = *(undefined4 *)(param_2 + 0x110);
  uVar5 = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x10c) = uVar3;
  *(undefined4 *)(param_1 + 0x110) = uVar4;
  *(undefined4 *)(param_1 + 0x114) = uVar5;
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  if (puVar1 != (undefined8 *)(param_2 + 0x120)) {
    iVar2 = *(int *)(param_2 + 0x128);
    _Src = *(void **)(param_2 + 0x120);
    *(int *)(param_1 + 0x128) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 300) == 0)) {
      *(undefined4 *)(param_1 + 300) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
    }
  }
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  uVar6 = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x148) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x158) = uVar6;
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
  return param_1;
}



// FUNCTION 14141b290 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FWorldTilesGatherer::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140aa02a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14141b2d0 FUN_14141b2d0 body=66 status=ok
// SIG undefined FUN_14141b2d0(void)

longlong FUN_14141b2d0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x128) = &PTR_GetPoolName_143ff6a70;
  FUN_14141ad90();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 14141b320 FUN_14141b320 body=152 status=ok
// SIG undefined FUN_14141b320(void)

longlong FUN_14141b320(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x370) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x360) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x350) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x2b8) = &PTR_FUN_1445e3d48;
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3b8);
  }
  return param_1;
}



// FUNCTION 14141b3c0 FUN_14141b3c0 body=197 status=ok
// SIG undefined FUN_14141b3c0(void)

longlong FUN_14141b3c0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2a60);
  lVar1 = *(longlong *)(param_1 + 0x2a58);
  if (iVar2 != 0) {
    do {
      FUN_1405f0e70(lVar1,0,0);
      lVar1 = lVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x2a58);
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  *(undefined4 *)(param_1 + 0x2a50) = 0;
  if (*(longlong *)(param_1 + 0x2a48) != 0) {
    FMemory::Free();
  }
  FUN_14141ab90(param_1 + 0x2a08);
  if (*(longlong *)(param_1 + 0x29f8) != 0) {
    FMemory::Free();
  }
  FUN_1405fd3e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2a68);
  }
  return param_1;
}



// FUNCTION 14141b490 FUN_14141b490 body=87 status=ok
// SIG undefined FUN_14141b490(void)

longlong FUN_14141b490(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x300) = &PTR_FUN_1441d26b8;
  *(undefined ***)(param_1 + 0x2d0) = &PTR_FUN_1441d26b8;
  *(undefined ***)(param_1 + 0x2c8) = &PTR_FUN_1441b3948;
  FUN_14141aec0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 14141b4f0 FUN_14141b4f0 body=243 status=ok
// SIG undefined FUN_14141b4f0(void)

longlong FUN_14141b4f0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x278) = 0;
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x230);
  *(undefined4 *)(param_1 + 0x228) = 0;
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  FUN_1405fcf60(param_1 + 400);
  FUN_14141aa70(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x280);
  }
  return param_1;
}



// FUNCTION 14141b5f0 FUN_14141b5f0 body=63 status=ok
// SIG undefined FUN_14141b5f0(void)

longlong FUN_14141b5f0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_1447d59a0;
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14141b630 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UEnvQueryGenerator_CurrentLocation::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14141b680 FUN_14141b680 body=63 status=ok
// SIG undefined FUN_14141b680(void)

longlong FUN_14141b680(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x60) = &PTR_FUN_143fe0658;
  FUN_14141ad30();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14141b6c0 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAIDataGenerationSettings::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_14141aae0(param_1 + 0x80);
  FUN_140aa02a0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14141b700 FUN_14141b700 body=61 status=ok
// SIG undefined FUN_14141b700(void)

void FUN_14141b700(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146891478);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 14141b740 FUN_14141b740 body=86 status=ok
// SIG undefined FUN_14141b740(void)

void FUN_14141b740(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = *param_3;
  local_18 = *(undefined4 *)(param_3 + 1);
  lVar1 = *param_1;
  local_28 = param_2;
  local_14 = param_4;
  uVar2 = FUN_14178ac60(local_20,DAT_146891480);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  return;
}



// FUNCTION 14141b7a0 FUN_14141b7a0 body=65 status=ok
// SIG undefined FUN_14141b7a0(void)

void FUN_14141b7a0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x50);
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined4 *)((longlong)param_2 + 0x38) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 8) = 0x3f800000;
  return;
}


