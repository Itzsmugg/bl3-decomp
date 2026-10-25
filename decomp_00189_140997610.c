// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140997610 FUN_140997610 body=148 status=ok
// SIG undefined FUN_140997610(void)

void FUN_140997610(undefined8 param_1,longlong param_2)

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
  FUN_140993060(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409976b0 FUN_1409976b0 body=163 status=ok
// SIG undefined FUN_1409976b0(void)

void FUN_1409976b0(undefined8 param_1,longlong param_2)

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
  FUN_140993070(param_1,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140997760 FUN_140997760 body=246 status=ok
// SIG undefined FUN_140997760(void)

void FUN_140997760(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong local_28 [4];
  
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1409930e0(param_1,local_28 + 2,plVar1);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140997860 FUN_140997860 body=214 status=ok
// SIG undefined FUN_140997860(void)

void FUN_140997860(undefined8 param_1,longlong param_2)

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
  FUN_140993280(param_1,local_18,local_res10[0] != 0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140997940 FUN_140997940 body=118 status=ok
// SIG undefined FUN_140997940(void)

void FUN_140997940(undefined8 param_1,longlong param_2)

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
  FWebBrowserSingleton::SetJSBindingToLoweringEnabled(param_1,local_res10[0]);
  return;
}



// FUNCTION 1409979c0 execHandleOnLoadoutChangedChanged body=223 status=ok
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
  FUN_1409932b0(param_1,&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140997aa0 FUN_140997aa0 body=211 status=ok
// SIG undefined FUN_140997aa0(void)

void FUN_140997aa0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
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
  FUN_1409932e0(param_1,local_18,local_res10);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140997b80 FUN_140997b80 body=231 status=ok
// SIG undefined FUN_140997b80(void)

void FUN_140997b80(undefined8 param_1,longlong param_2)

{
  longlong local_28 [4];
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140993300(param_1,local_28 + 2,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140997c70 FUN_140997c70 body=246 status=ok
// SIG undefined FUN_140997c70(void)

void FUN_140997c70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong local_28 [4];
  
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140993330(param_1,local_28 + 2,plVar1);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140997d70 FUN_140997d70 body=216 status=ok
// SIG undefined FUN_140997d70(void)

void FUN_140997d70(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
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
  FUN_1409934e0(param_1,local_18,local_res10[0]);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140997e50 FUN_140997e50 body=246 status=ok
// SIG undefined FUN_140997e50(void)

void FUN_140997e50(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong local_28 [4];
  
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140993500(param_1,local_28 + 2,plVar1);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140997f50 FUN_140997f50 body=211 status=ok
// SIG undefined FUN_140997f50(void)

void FUN_140997f50(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
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
  FUN_1409936c0(param_1,local_18,local_res10);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140998030 FUN_140998030 body=128 status=ok
// SIG undefined FUN_140998030(void)

void FUN_140998030(undefined8 param_1,longlong param_2)

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
  FUN_1409936e0(param_1,local_res10);
  return;
}



// FUNCTION 1409980b0 FUN_1409980b0 body=128 status=ok
// SIG undefined FUN_1409980b0(void)

void FUN_1409980b0(undefined8 param_1,longlong param_2)

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
  UNetDriver::SetNetDriverName(param_1,local_res10);
  return;
}



// FUNCTION 140998130 FUN_140998130 body=284 status=ok
// SIG undefined FUN_140998130(void)

void FUN_140998130(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong **pplVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_28 = (longlong *)0x0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  pplVar3 = &local_28;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar3 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1409937c0(param_1,&local_18,pplVar3);
  plVar1 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140998250 FUN_140998250 body=231 status=ok
// SIG undefined FUN_140998250(void)

void FUN_140998250(undefined8 param_1,longlong param_2)

{
  longlong local_28 [4];
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1409939f0(param_1,local_28 + 2,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140998340 FUN_140998340 body=148 status=ok
// SIG undefined FUN_140998340(void)

void FUN_140998340(undefined8 param_1,longlong param_2)

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
  FUN_140993a10(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409983e0 FUN_1409983e0 body=118 status=ok
// SIG undefined FUN_1409983e0(void)

void FUN_1409983e0(undefined8 param_1,longlong param_2)

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
  FWebBrowserSingleton::SetDevToolsShortcutEnabled(param_1,local_res10[0]);
  return;
}



// FUNCTION 140998460 FUN_140998460 body=225 status=ok
// SIG undefined FUN_140998460(void)

undefined8 FUN_140998460(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_10 = 3;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143f4d290;
    FWeakObjectPtr::operator=(plVar1 + 1,param_3);
    plVar1[2] = param_4;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143f4d2d8;
  }
  TBaseMulticastDelegate<void>::Add(param_1,param_2,&local_18);
  plVar1 = local_18;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return param_2;
    }
    (**(code **)(*local_18 + 0x28))(local_18,0);
    plVar1 = (longlong *)FMemory::Realloc(plVar1,0,0);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return param_2;
}



// FUNCTION 140998550 AddUObject<UHelloNeighborGameInstance> body=224 status=ok
// SIG undefined AddUObject<UHelloNeighborGameInstance>(void)

undefined8
TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_28;
  int local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_4;
  uStack_14 = param_4[1];
  uStack_10 = param_4[2];
  uStack_c = param_4[3];
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar1 + 1,param_3);
    *(undefined4 *)(plVar1 + 2) = local_18;
    *(undefined4 *)((longlong)plVar1 + 0x14) = uStack_14;
    *(undefined4 *)(plVar1 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143fcff08;
  }
  Add(param_1,param_2,&local_28);
  plVar1 = local_28;
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return param_2;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    plVar1 = (longlong *)FMemory::Realloc(plVar1,0,0);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return param_2;
}



// FUNCTION 140998630 FUN_140998630 body=280 status=ok
// SIG undefined FUN_140998630(void)

void FUN_140998630(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FWeakObjectPtr::operator=(param_1 + 2,0);
  param_1[3] = 0;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_144012f30;
    FWeakObjectPtr::operator=(plVar2 + 1,param_2);
    *(undefined4 *)(plVar2 + 2) = local_18;
    *(undefined4 *)((longlong)plVar2 + 0x14) = uStack_14;
    *(undefined4 *)(plVar2 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_144012f78;
  }
  if ((longlong *)&local_18 != param_1) {
    if (plVar2 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar3 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar3;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 140998750 FUN_140998750 body=405 status=ok
// SIG undefined FUN_140998750(void)

void FUN_140998750(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FPlayerReservation,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  puVar2 = (undefined4 *)*param_1;
  if (param_3 != 0) {
    param_2 = param_2 + 0x18;
    piVar1 = puVar2 + 0x13;
    do {
      piVar1[-0xd] = 0;
      piVar1[-0xc] = 0;
      piVar1[-0xb] = 0;
      piVar1[-10] = 0;
      *puVar2 = 0xffffffff;
      piVar1[-0x12] = 0;
      piVar1[-0xf] = 0;
      piVar1[-0xe] = 0;
      piVar1[-0xb] = 0;
      if (0x7fffffff < (uint)piVar1[-10]) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(piVar1 + -0xd,0);
      }
      if (*(undefined2 **)(piVar1 + -0xd) != (undefined2 *)0x0) {
        **(undefined2 **)(piVar1 + -0xd) = 0;
      }
      piVar1[-0x11] = 0;
      *puVar2 = *(undefined4 *)(param_2 + -0x18);
      piVar1[-0x12] = *(int *)(param_2 + -0x14);
      piVar1[-0x11] = *(int *)(param_2 + -0x10);
      local_40 = *(undefined8 *)(param_2 + -8);
      FString::FString(local_38,param_2);
      FSoftObjectPath::operator=(piVar1 + -0xf,&local_40);
      piVar1[-3] = 0;
      piVar1[-2] = 0;
      piVar1[-1] = 0;
      piVar1[0] = 0;
      piVar1[-9] = -1;
      piVar1[-8] = 0;
      piVar1[-5] = 0;
      piVar1[-4] = 0;
      piVar1[-1] = 0;
      if ((*piVar1 < 0) && (*piVar1 != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(piVar1 + -3,0);
      }
      if (*(undefined2 **)(piVar1 + -3) != (undefined2 *)0x0) {
        **(undefined2 **)(piVar1 + -3) = 0;
      }
      piVar1[-7] = 0;
      piVar1[-9] = *(int *)(param_2 + 0x10);
      piVar1[-8] = *(int *)(param_2 + 0x14);
      piVar1[-7] = *(int *)(param_2 + 0x18);
      local_40 = *(undefined8 *)(param_2 + 0x20);
      FString::FString(local_38,param_2 + 0x28);
      FSoftObjectPath::operator=(piVar1 + -5);
      puVar2 = puVar2 + 0x14;
      piVar1 = piVar1 + 0x14;
      param_2 = param_2 + 0x50;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1409988f0 FUN_1409988f0 body=755 status=ok
// SIG undefined FUN_1409988f0(void)

uint * FUN_1409988f0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  ulonglong *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  bool bVar14;
  uint local_res8 [2];
  
  iVar10 = 1;
  uVar9 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar11 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = *(uint *)(param_1 + 6);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)(int)uVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x18) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar11;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)(int)uVar11 * 0x18);
  puVar2 = (ulonglong *)param_3[1];
  *_Src = *(ulonglong *)*param_3;
  _Src[1] = *puVar2;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_1409a61c0(param_1,local_res8,_Src);
    uVar11 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar8 * 0x18),_Src,0x10);
      uVar5 = *param_2;
      bVar3 = (byte)uVar5 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = uVar5;
      }
      lVar8 = *param_1;
      *(undefined4 *)(lVar8 + (longlong)(int)uVar5 * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar9 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar8 + 4 + (longlong)(int)uVar5 * 0x18) = uVar9;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar5;
      plVar6 = (longlong *)param_1[4];
      *param_2 = uVar11;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_140998bba;
    }
  }
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar11) {
    uVar5 = (uVar11 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar12 = '\0';
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar10;
    }
    uVar5 = (uVar11 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar12 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    iVar10 = (int)(*_Src >> 4);
    uVar5 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar13 = -(iVar10 + uVar5) ^ uVar5 >> 0xd;
    uVar11 = (iVar10 - uVar5) - uVar13 ^ uVar13 >> 0xc;
    uVar5 = (uVar5 - uVar11) - uVar13 ^ uVar11 << 0x10;
    uVar13 = (uVar13 - uVar5) - uVar11 ^ uVar5 >> 5;
    uVar11 = (uVar11 - uVar5) - uVar13 ^ uVar13 >> 3;
    uVar5 = (uVar5 - uVar11) - uVar13 ^ uVar11 << 10;
    uVar11 = ((uVar13 - uVar5) - uVar11 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar11;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140998bba:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 140998bf0 FUN_140998bf0 body=205 status=ok
// SIG undefined FUN_140998bf0(void)

longlong * FUN_140998bf0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar5 = (longlong *)*param_1;
  plVar6 = plVar5 + (longlong)(int)param_1[1] * 4;
  do {
    if (plVar5 == plVar6) {
      return (longlong *)0x0;
    }
    if (*plVar5 != 0) {
      lVar2 = UUGLoadoutBarUW::GetPrivateStaticClass();
      lVar7 = *plVar5;
      for (lVar4 = lVar7; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
        if (lVar4 == lVar2) goto LAB_140998c50;
      }
    }
    lVar7 = 0;
LAB_140998c50:
    plVar1 = (longlong *)*param_2;
    if (*plVar1 != 0) {
      lVar3 = UUGLoadoutBarUW::GetPrivateStaticClass();
      lVar4 = *plVar1;
      for (lVar2 = lVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar3) goto LAB_140998c80;
      }
    }
    lVar4 = 0;
LAB_140998c80:
    if ((lVar7 == lVar4) && (plVar5[1] == *(longlong *)param_2[1])) {
      return plVar5;
    }
    plVar5 = plVar5 + 4;
  } while( true );
}



// FUNCTION 140998cc0 FUN_140998cc0 body=186 status=ok
// SIG undefined FUN_140998cc0(void)

longlong FUN_140998cc0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = *param_1;
  lVar4 = (longlong)(int)param_1[1] * 0x20 + lVar6;
  do {
    if (lVar6 == lVar4) {
      return 0;
    }
    if (*(longlong *)(lVar6 + 0x18) != 0) {
      lVar1 = FUN_14144bcb0();
      lVar5 = *(longlong *)(lVar6 + 0x18);
      for (lVar3 = lVar5; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar1) goto LAB_140998d20;
      }
    }
    lVar5 = 0;
LAB_140998d20:
    if (*param_2 != 0) {
      lVar2 = FUN_14144bcb0();
      lVar3 = *param_2;
      for (lVar1 = lVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        if (lVar1 == lVar2) goto LAB_140998d50;
      }
    }
    lVar3 = 0;
LAB_140998d50:
    if (lVar5 == lVar3) {
      return lVar6;
    }
    lVar6 = lVar6 + 0x20;
  } while( true );
}



// FUNCTION 140998d80 FUN_140998d80 body=129 status=ok
// SIG undefined FUN_140998d80(void)

undefined8 * FUN_140998d80(undefined8 *param_1)

{
  FUN_140a4df50();
  *param_1 = &PTR_FUN_14419aaf8;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xa3) = 0;
  FUN_140590080(param_1 + 0xa4);
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfb | 2;
  return param_1;
}



// FUNCTION 140998e10 FUN_140998e10 body=256 status=ok
// SIG undefined FUN_140998e10(void)

undefined8 * FUN_140998e10(undefined8 *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  FUN_140e69380();
  *param_1 = &PTR_FUN_1441967b8;
  param_1[0x8b] = &PTR_LAB_144197018;
  param_1[0x98] = &PTR_LAB_144197070;
  param_1[0x99] = &PTR_LAB_144197090;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"BalanceStateDefault",1);
  uVar4 = *puVar2;
  uVar3 = UAnimMontage::GetPrivateStaticClass();
  uVar4 = FUN_141752410(param_1,uVar4,uVar3,uVar3,1,0,0);
  param_1[0xa0] = uVar4;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CustomizationComponent",1);
  uVar4 = *puVar2;
  uVar3 = FUN_142e43690();
  uVar4 = FUN_141752410(param_1,uVar4,uVar3,uVar3,1,0,0);
  param_1[0xa1] = uVar4;
  FUN_142350b20(uVar4,0);
  if (param_1[0x9b] != 0) {
    puVar1 = (uint *)(param_1[0x9b] + 0x620);
    *puVar1 = *puVar1 | 0x4000;
  }
  return param_1;
}



// FUNCTION 140998f10 FUN_140998f10 body=213 status=ok
// SIG undefined FUN_140998f10(void)

undefined8 * FUN_140998f10(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14125b280();
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xfe;
  *param_1 = &PTR_FUN_144193fb0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  param_1[0x8b] = &PTR_LAB_1441946c0;
  *(undefined1 *)((longlong)param_1 + 0x702) = 0;
  param_1[0x8c] = &PTR_LAB_1441946d8;
  param_1[0xd0] = &PTR_LAB_144194700;
  param_1[0xd1] = &PTR_LAB_144194718;
  param_1[0xdc] = &PTR_LAB_1441947e8;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CustomizationComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142e43690();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xdf] = uVar3;
  FUN_142350b20(uVar3,0);
  return param_1;
}



// FUNCTION 140998ff0 FUN_140998ff0 body=146 status=ok
// SIG undefined FUN_140998ff0(void)

undefined8 * FUN_140998ff0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  *param_1 = 0;
  iVar4 = (int)param_2[1];
  lVar1 = *param_2;
  *(int *)(param_1 + 1) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
  FUN_1409b7fb0(param_1,iVar4,0);
  puVar5 = (undefined4 *)*param_1;
  puVar2 = (undefined4 *)(lVar1 + 0x10);
  puVar3 = puVar5 + 4;
  do {
    *puVar5 = puVar2[-4];
    puVar5 = puVar5 + 5;
    puVar3[-3] = puVar2[-3];
    puVar3[-2] = puVar2[-2];
    puVar3[-1] = puVar2[-1];
    *puVar3 = *puVar2;
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + 5;
    puVar3 = puVar3 + 5;
  } while (iVar4 != 0);
  return param_1;
}



// FUNCTION 140999090 FPendingAutoReceiveInputActor body=38 status=ok
// SIG undefined FPendingAutoReceiveInputActor(void)

longlong FPendingAutoReceiveInputActor::FPendingAutoReceiveInputActor
                   (longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FWeakObjectPtr::operator=();
  *(undefined4 *)(param_1 + 8) = param_3;
  return param_1;
}



// FUNCTION 1409990c0 FUN_1409990c0 body=68 status=ok
// SIG undefined FUN_1409990c0(void)

undefined8 * FUN_1409990c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6050(param_1,uVar1);
  *param_1 = &PTR_FUN_144195e00;
  *(undefined1 *)((longlong)param_1 + 0x69) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  uVar1 = UEnvQueryItemType_Actor::GetPrivateStaticClass();
  param_1[10] = uVar1;
  return param_1;
}



// FUNCTION 140999110 FUN_140999110 body=60 status=ok
// SIG undefined FUN_140999110(void)

undefined8 * FUN_140999110(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6400();
  *param_1 = &PTR_FUN_1441960a0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 3;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  uVar1 = UEnvQueryItemType_Actor::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 140999150 FUN_140999150 body=119 status=ok
// SIG undefined FUN_140999150(void)

undefined8 * FUN_140999150(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6400();
  *param_1 = &PTR_FUN_14419b1e0;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x3b);
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x41);
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x42340000;
  *(undefined1 *)(param_1 + 0x1e) = 2;
  uVar1 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  FUN_142bf1f60(param_1,0);
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x47] = uVar1;
  return param_1;
}



// FUNCTION 1409991d0 FUN_1409991d0 body=301 status=ok
// SIG undefined FUN_1409991d0(void)

undefined8 * FUN_1409991d0(undefined8 *param_1)

{
  undefined8 local_res8;
  
  FUN_143098570();
  *param_1 = &PTR_FUN_144196338;
  param_1[5] = &PTR_LAB_144196788;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_142d2e580(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0xffffffff;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  param_1[100] = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  FName::FName(&local_res8,L"SnapZoom",1);
  param_1[0x35] = local_res8;
  *(undefined4 *)(param_1 + 0x36) = 0x41c80000;
  return param_1;
}



// FUNCTION 140999300 FUN_140999300 body=118 status=ok
// SIG undefined FUN_140999300(void)

undefined8 * FUN_140999300(undefined8 *param_1)

{
  FUN_14128a710();
  *param_1 = &PTR_FUN_144197260;
  param_1[5] = &PTR_LAB_144197780;
  param_1[0x2f] = &PTR_LAB_1441977b0;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x46);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x23c);
  FUN_14246fd50(param_1 + 0x46,0x40200000);
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  return param_1;
}



// FUNCTION 140999380 FUN_140999380 body=49 status=ok
// SIG undefined FUN_140999380(void)

undefined8 * FUN_140999380(undefined8 *param_1)

{
  FUN_1430e9c70();
  *param_1 = &PTR__scalar_deleting_destructor__144192b50;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  return param_1;
}



// FUNCTION 1409993c0 FUN_1409993c0 body=33 status=ok
// SIG undefined FUN_1409993c0(void)

undefined8 * FUN_1409993c0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_144198048;
  return param_1;
}



// FUNCTION 1409993f0 UAnimNotifyState_KawaiiPhysicsAddExternalForce body=59 status=ok
// SIG undefined UAnimNotifyState_KawaiiPhysicsAddExternalForce(void)

undefined8 *
UAnimNotifyState_KawaiiPhysicsAddExternalForce::UAnimNotifyState_KawaiiPhysicsAddExternalForce
          (undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR__scalar_deleting_destructor__1441982d8;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 140999430 FUN_140999430 body=33 status=ok
// SIG undefined FUN_140999430(void)

undefined8 * FUN_140999430(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_144198568;
  return param_1;
}



// FUNCTION 140999460 USoundNode body=43 status=ok
// SIG undefined USoundNode(void)

undefined8 * USoundNode::USoundNode(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR__scalar_deleting_destructor__1441987f8;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 140999490 USoundNode body=43 status=ok
// SIG undefined USoundNode(void)

undefined8 * USoundNode::USoundNode(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR__scalar_deleting_destructor__144198a88;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1409994c0 USoundNode body=43 status=ok
// SIG undefined USoundNode(void)

undefined8 * USoundNode::USoundNode(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR__scalar_deleting_destructor__144198d18;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1409994f0 UCigars_HangMultiBarNotify body=37 status=ok
// SIG undefined UCigars_HangMultiBarNotify(void)

undefined8 * UCigars_HangMultiBarNotify::UCigars_HangMultiBarNotify(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_144198fa8;
  return param_1;
}



// FUNCTION 140999520 USoundNode body=43 status=ok
// SIG undefined USoundNode(void)

undefined8 * USoundNode::USoundNode(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR__scalar_deleting_destructor__144199238;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 140999550 FUN_140999550 body=33 status=ok
// SIG undefined FUN_140999550(void)

undefined8 * FUN_140999550(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_1441994c8;
  return param_1;
}



// FUNCTION 140999580 FUN_140999580 body=359 status=ok
// SIG undefined FUN_140999580(void)

undefined8 * FUN_140999580(undefined8 *param_1)

{
  FUN_1430e9c70();
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  *param_1 = &PTR__scalar_deleting_destructor__144193138;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1ba) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0xff;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0xff;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x204);
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined1 *)((longlong)param_1 + 0x222) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  param_1[0x45] = 0x41f00000;
  FUN_14246da30(param_1 + 0x46);
  FUN_14246da30((longlong)param_1 + 0x244);
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) & 0xfd | 1;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1b9) = 1;
  return param_1;
}



// FUNCTION 1409996f0 FUN_1409996f0 body=148 status=ok
// SIG undefined FUN_1409996f0(void)

undefined8 * FUN_1409996f0(undefined8 *param_1)

{
  FUN_142c8cfb0();
  *param_1 = &PTR_FUN_144199d20;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xd4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x19,0);
  }
  if ((undefined2 *)param_1[0x19] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x19] = 0;
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  return param_1;
}



// FUNCTION 140999790 FUN_140999790 body=33 status=ok
// SIG undefined FUN_140999790(void)

undefined8 * FUN_140999790(undefined8 *param_1)

{
  FUN_142c8cfb0();
  *param_1 = &PTR_FUN_14419a010;
  return param_1;
}



// FUNCTION 1409997c0 FUN_1409997c0 body=55 status=ok
// SIG undefined FUN_1409997c0(void)

undefined8 * FUN_1409997c0(undefined8 *param_1)

{
  FUN_140999580();
  *param_1 = &PTR_FUN_14419baf8;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  return param_1;
}



// FUNCTION 140999800 FUN_140999800 body=50 status=ok
// SIG undefined FUN_140999800(void)

undefined8 * FUN_140999800(undefined8 *param_1)

{
  FUN_140999580();
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *param_1 = &PTR_FUN_144193580;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  return param_1;
}



// FUNCTION 140999840 FUN_140999840 body=183 status=ok
// SIG undefined FUN_140999840(void)

undefined8 * FUN_140999840(undefined8 *param_1)

{
  FUN_140999580();
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  *param_1 = &PTR_FUN_144193a80;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 2;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0x3f800000;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  return param_1;
}



// FUNCTION 140999900 FUN_140999900 body=256 status=ok
// SIG undefined FUN_140999900(void)

undefined8 * FUN_140999900(undefined8 *param_1)

{
  FUN_140999580();
  *param_1 = &PTR_FUN_14419c220;
  *(undefined1 *)(param_1 + 0x4c) = 0xff;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0xff;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  FUN_142d2e580(param_1 + 0x53);
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 3;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0x3f800000;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0xffffffff;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f4) = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0xffffffff;
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 2;
  return param_1;
}



// FUNCTION 140999a00 FUN_140999a00 body=50 status=ok
// SIG undefined FUN_140999a00(void)

undefined8 * FUN_140999a00(undefined8 *param_1)

{
  FUN_140999580();
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  *param_1 = &PTR_FUN_144193580;
  return param_1;
}



// FUNCTION 140999a40 FUN_140999a40 body=50 status=ok
// SIG undefined FUN_140999a40(void)

undefined8 * FUN_140999a40(undefined8 *param_1)

{
  FUN_140999580();
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) & 0xfe;
  *param_1 = &PTR_FUN_1441977c8;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0xffffffff;
  return param_1;
}



// FUNCTION 140999a80 FUN_140999a80 body=62 status=ok
// SIG undefined FUN_140999a80(void)

undefined8 * FUN_140999a80(undefined8 *param_1)

{
  FUN_140999580();
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144194810;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  return param_1;
}



// FUNCTION 140999ac0 FUN_140999ac0 body=131 status=ok
// SIG undefined FUN_140999ac0(void)

undefined8 * FUN_140999ac0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1409c3560();
  *(undefined1 *)(param_1 + 0x44) = 0;
  *param_1 = &PTR_FUN_144191f50;
  param_1[5] = &PTR_LAB_144192210;
  param_1[0xc] = &PTR_LAB_144192258;
  param_1[0x43] = &PTR_LAB_144192268;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0x10000;
  *(undefined1 *)((longlong)param_1 + 0x25c) = 1;
  uVar1 = FVolumeControlStyle::StaticStruct();
  *(byte *)((longlong)param_1 + 0x25d) = *(byte *)((longlong)param_1 + 0x25d) & 0xfc;
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 140999b50 FUN_140999b50 body=131 status=ok
// SIG undefined FUN_140999b50(void)

undefined8 * FUN_140999b50(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140999ac0();
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *param_1 = &PTR_FUN_14419b478;
  param_1[5] = &PTR_LAB_14419b738;
  param_1[0xc] = &PTR_LAB_14419b780;
  param_1[0x43] = &PTR_LAB_14419b790;
  uVar1 = FVolumeControlStyle::StaticStruct();
  param_1[0xb] = uVar1;
  *param_1 = &PTR_FUN_14419b7b8;
  param_1[5] = &PTR_LAB_14419ba78;
  param_1[0xc] = &PTR_LAB_14419bac0;
  param_1[0x43] = &PTR_LAB_14419bad0;
  return param_1;
}



// FUNCTION 140999be0 FUN_140999be0 body=142 status=ok
// SIG undefined FUN_140999be0(void)

undefined8 * FUN_140999be0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140999ac0();
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *param_1 = &PTR_FUN_14419b478;
  param_1[5] = &PTR_LAB_14419b738;
  param_1[0xc] = &PTR_LAB_14419b780;
  param_1[0x43] = &PTR_LAB_14419b790;
  uVar1 = FVolumeControlStyle::StaticStruct();
  param_1[0xb] = uVar1;
  *param_1 = &PTR_FUN_14419bf60;
  param_1[5] = &PTR_LAB_14419ba78;
  param_1[0xc] = &PTR_LAB_14419bac0;
  param_1[0x43] = &PTR_LAB_14419bad0;
  param_1[0x4e] = 0;
  return param_1;
}



// FUNCTION 140999c70 FUN_140999c70 body=131 status=ok
// SIG undefined FUN_140999c70(void)

undefined8 * FUN_140999c70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140999ac0();
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *param_1 = &PTR_FUN_14419b478;
  param_1[5] = &PTR_LAB_14419b738;
  param_1[0xc] = &PTR_LAB_14419b780;
  param_1[0x43] = &PTR_LAB_14419b790;
  uVar1 = FVolumeControlStyle::StaticStruct();
  param_1[0xb] = uVar1;
  *param_1 = &PTR_FUN_14419c6c8;
  param_1[5] = &PTR_LAB_14419ba78;
  param_1[0xc] = &PTR_LAB_14419bac0;
  param_1[0x43] = &PTR_LAB_14419bad0;
  return param_1;
}



// FUNCTION 140999d00 FUN_140999d00 body=85 status=ok
// SIG undefined FUN_140999d00(void)

undefined8 * FUN_140999d00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140999ac0();
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *param_1 = &PTR_FUN_14419b478;
  param_1[5] = &PTR_LAB_14419b738;
  param_1[0xc] = &PTR_LAB_14419b780;
  param_1[0x43] = &PTR_LAB_14419b790;
  uVar1 = FVolumeControlStyle::StaticStruct();
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 140999d60 FUN_140999d60 body=69 status=ok
// SIG undefined FUN_140999d60(void)

undefined8 * FUN_140999d60(undefined8 *param_1)

{
  FUN_140999ac0();
  *param_1 = &PTR_FUN_144192290;
  param_1[5] = &PTR_LAB_144192550;
  param_1[0xc] = &PTR_LAB_144192598;
  param_1[0x43] = &PTR_LAB_1441925a8;
  return param_1;
}



// FUNCTION 140999db0 FUN_140999db0 body=69 status=ok
// SIG undefined FUN_140999db0(void)

undefined8 * FUN_140999db0(undefined8 *param_1)

{
  FUN_140999ac0();
  *param_1 = &PTR_FUN_1441925d0;
  param_1[5] = &PTR_LAB_144192550;
  param_1[0xc] = &PTR_LAB_144192598;
  param_1[0x43] = &PTR_LAB_1441925a8;
  return param_1;
}



// FUNCTION 140999e00 FUN_140999e00 body=69 status=ok
// SIG undefined FUN_140999e00(void)

undefined8 * FUN_140999e00(undefined8 *param_1)

{
  FUN_140999ac0();
  *param_1 = &PTR_FUN_144192890;
  param_1[5] = &PTR_LAB_144192550;
  param_1[0xc] = &PTR_LAB_144192598;
  param_1[0x43] = &PTR_LAB_1441925a8;
  return param_1;
}



// FUNCTION 140999e50 FUN_140999e50 body=90 status=ok
// SIG undefined FUN_140999e50(void)

undefined8 * FUN_140999e50(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1409c3710();
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *param_1 = &PTR_FUN_144199758;
  param_1[5] = &PTR_LAB_1441999f8;
  param_1[0x29] = &PTR_LAB_144199a40;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x172) = 0;
  uVar1 = FHierarchicalSimplification::StaticStruct();
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 140999eb0 FUN_140999eb0 body=119 status=ok
// SIG undefined FUN_140999eb0(void)

undefined8 * FUN_140999eb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  FUN_1409c42e0();
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *param_1 = &PTR_FUN_144194c58;
  param_1[5] = &PTR_LAB_144194f08;
  param_1[0xc] = &PTR_LAB_144194f50;
  param_1[0x47] = &PTR_LAB_144194f60;
  FName::FName(local_res8,L"PetUltimateAbility",1);
  param_1[9] = local_res8[0];
  uVar1 = FVolumeControlStyle::StaticStruct();
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 140999f30 USoundNode body=43 status=ok
// SIG undefined USoundNode(void)

undefined8 * USoundNode::USoundNode(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__14419a300;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 140999f60 FUN_140999f60 body=44 status=ok
// SIG undefined FUN_140999f60(void)

undefined8 * FUN_140999f60(undefined8 *param_1)

{
  FUN_1430e9e60();
  *param_1 = &PTR__scalar_deleting_destructor__144194fa8;
  param_1[5] = &PTR_LAB_1441953b0;
  return param_1;
}



// FUNCTION 140999f90 FUN_140999f90 body=56 status=ok
// SIG undefined FUN_140999f90(void)

undefined8 * FUN_140999f90(undefined8 *param_1)

{
  FUN_1430e9c70();
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14419a580;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  return param_1;
}



// FUNCTION 140999fd0 FUN_140999fd0 body=175 status=ok
// SIG undefined FUN_140999fd0(void)

undefined8 * FUN_140999fd0(undefined8 *param_1)

{
  FUN_1430e9c70();
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR_FUN_144195660;
  param_1[0x24] = &PTR_LAB_144195960;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  *(undefined2 *)((longlong)param_1 + 0x172) = 1;
  *(undefined1 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  return param_1;
}



// FUNCTION 14099a080 FUN_14099a080 body=73 status=ok
// SIG undefined FUN_14099a080(void)

undefined8 * FUN_14099a080(undefined8 *param_1)

{
  UAssetImportData::UAssetImportData();
  *param_1 = &PTR__scalar_deleting_destructor__14419a870;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



// FUNCTION 14099a0d0 FUN_14099a0d0 body=70 status=ok
// SIG undefined FUN_14099a0d0(void)

undefined8 * FUN_14099a0d0(undefined8 *param_1)

{
  FUN_1430e9c70();
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *param_1 = &PTR_FUN_144192e40;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  return param_1;
}



// FUNCTION 14099a120 FUN_14099a120 body=1023 status=ok
// SIG undefined FUN_14099a120(void)

undefined8 * FUN_14099a120(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_1430e9e60();
  *param_1 = &PTR__scalar_deleting_destructor__144195978;
  param_1[5] = &PTR_LAB_144195dd0;
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
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 2;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 2;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 2;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 2;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 2;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 2;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 2;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 2;
  param_1[0x74] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x8d] = 0xffffffffffffffff;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x514) = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  param_1[0xa6] = 0xffffffffffffffff;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x594) = 0;
  param_1[0xb4] = 0;
  *(undefined4 *)(param_1 + 0xb5) = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  *(undefined4 *)(param_1 + 0xbd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5ec) = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xc1] = 0xffffffffffffffff;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  *(undefined2 *)(param_1 + 0xca) = 0;
  *(undefined4 *)((longlong)param_1 + 0x65c) = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DefaultAbilityTree",1);
  uVar3 = *puVar1;
  uVar2 = FUN_14144ea90();
  uVar3 = FUN_141789050(param_2,param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x76] = uVar3;
  return param_1;
}



// FUNCTION 14099a520 UOCPlayerRank body=51 status=ok
// SIG undefined UOCPlayerRank(void)

undefined8 * UOCPlayerRank::UOCPlayerRank(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__1441953e0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 14099a560 FUN_14099a560 body=259 status=ok
// SIG undefined FUN_14099a560(void)

undefined8 * FUN_14099a560(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144199a68;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  return param_1;
}



// FUNCTION 14099a670 FUN_14099a670 body=44 status=ok
// SIG undefined FUN_14099a670(void)

undefined8 * FUN_14099a670(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR__scalar_deleting_destructor__144197c20;
  param_1[5] = &PTR_LAB_144198018;
  return param_1;
}



// FUNCTION 14099a6a0 ~TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator>(void)

void TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator>::
     ~TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x20);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 7;
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



// FUNCTION 14099a700 FUN_14099a700 body=159 status=ok
// SIG undefined FUN_14099a700(void)

void FUN_14099a700(longlong *param_1)

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
      plVar7 = plVar7 + 4;
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



// FUNCTION 14099a7a0 FUN_14099a7a0 body=131 status=ok
// SIG undefined FUN_14099a7a0(void)

void FUN_14099a7a0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x88;
    do {
      if (*(longlong *)(lVar1 + 0xc0) != 0) {
        FMemory::Free();
      }
      FRichCurve::~FRichCurve(lVar1);
      FRichCurve::~FRichCurve(lVar1 + -0x80);
      lVar1 = lVar1 + 0x158;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14099a830 FUN_14099a830 body=161 status=ok
// SIG undefined FUN_14099a830(void)

void FUN_14099a830(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar3 = lVar3 + 0x1d8;
    do {
      if (*(longlong *)(lVar3 + 0x80) != 0) {
        FMemory::Free();
      }
      FRichCurve::~FRichCurve(lVar3);
      lVar4 = 4;
      lVar1 = lVar3 + -0x10;
      do {
        lVar1 = lVar1 + -0x70;
        FRichCurve::~FRichCurve(lVar1);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      lVar3 = lVar3 + 0x268;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar3 = *param_1;
  }
  if (lVar3 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14099a8e0 ~TArray<FSpawnGenerator,FDefaultAllocator> body=109 status=ok
// SIG undefined ~TArray<FSpawnGenerator,FDefaultAllocator>(void)

void TArray<FSpawnGenerator,FDefaultAllocator>::~TArray<FSpawnGenerator,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      if (plVar2[5] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 10;
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



// FUNCTION 14099a950 FUN_14099a950 body=95 status=ok
// SIG undefined FUN_14099a950(void)

void FUN_14099a950(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 7;
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



// FUNCTION 14099a9b0 FUN_14099a9b0 body=140 status=ok
// SIG undefined FUN_14099a9b0(void)

void FUN_14099a9b0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x68);
    do {
      if (plVar2[5] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-5] != 0) {
        FMemory::Free();
      }
      if (plVar2[-10] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x14;
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



// FUNCTION 14099aa40 FUN_14099aa40 body=123 status=ok
// SIG undefined FUN_14099aa40(void)

void FUN_14099aa40(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x40);
    do {
      if (plVar2[5] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-5] != 0) {
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



// FUNCTION 14099aac0 FUN_14099aac0 body=112 status=ok
// SIG undefined FUN_14099aac0(void)

void FUN_14099aac0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x260);
  iVar4 = *(int *)(param_1 + 0x268);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = param_1;
  }
  if (iVar4 != 0) {
    plVar3 = (longlong *)(lVar2 + 0x88);
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0x13;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar1 = *(longlong *)(param_1 + 0x260);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14099ab30 ~TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> body=395 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

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
      if (bVar4) goto LAB_14099abf1;
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
LAB_14099abf1:
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
      FFastArraySerializerGuidReferences::~FFastArraySerializerGuidReferences
                ((longlong)iStack_1c * 200 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<200,8>_>,TSizedDefaultAllocator<32>_>::
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



// FUNCTION 14099acc0 FUN_14099acc0 body=129 status=ok
// SIG undefined FUN_14099acc0(void)

void FUN_14099acc0(longlong param_1)

{
  *(undefined ***)(param_1 + 0x688) = &PTR_FUN_144193ee0;
  *(undefined ***)(param_1 + 0x680) = &PTR_FUN_143fe0658;
  if (*(longlong *)(param_1 + 0x660) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x460) = &PTR_FUN_14407f310;
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_143fe0658;
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 14099ad50 ~FFastArraySerializerGuidReferences body=105 status=ok
// SIG undefined ~FFastArraySerializerGuidReferences(void)

void FFastArraySerializerGuidReferences::~FFastArraySerializerGuidReferences(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}



// FUNCTION 14099adc0 FUN_14099adc0 body=105 status=ok
// SIG undefined FUN_14099adc0(void)

void FUN_14099adc0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}



// FUNCTION 14099ae30 FUN_14099ae30 body=308 status=ok
// SIG undefined FUN_14099ae30(void)

void FUN_14099ae30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  iVar5 = *(int *)(param_1 + 0xb0);
  lVar3 = *(longlong *)(param_1 + 0xa8);
  if (iVar5 != 0) {
    plVar4 = (longlong *)(lVar3 + 0x40);
    do {
      if (plVar4[3] != 0) {
        FMemory::Free();
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 0xe;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar3 = *(longlong *)(param_1 + 0xa8);
  }
  if (lVar3 != 0) {
    FMemory::Free();
  }
  iVar5 = *(int *)(param_1 + 0x78);
  lVar3 = *(longlong *)(param_1 + 0x70);
  if (iVar5 != 0) {
    plVar4 = (longlong *)(lVar3 + 8);
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar3 = *(longlong *)(param_1 + 0x70);
  }
  if (lVar3 != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x60);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x48);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x28);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 14099af70 FUN_14099af70 body=162 status=ok
// SIG undefined FUN_14099af70(void)

void FUN_14099af70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1d8);
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 400);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x178);
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 14099b020 FUN_14099b020 body=593 status=ok
// SIG undefined FUN_14099b020(void)

void FUN_14099b020(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x120);
  iVar6 = *(int *)(param_1 + 0x128);
  if (iVar6 != 0) {
    lVar4 = lVar4 + 0x300;
    do {
      if (*(longlong *)(lVar4 + 0xc0) != 0) {
        FMemory::Free();
      }
      FRichCurve::~FRichCurve(lVar4);
      FRichCurve::~FRichCurve(lVar4 + -0x80);
      if (*(longlong *)(lVar4 + -0x98) != 0) {
        FMemory::Free();
      }
      FRichCurve::~FRichCurve(lVar4 + -0x118);
      lVar2 = 4;
      lVar5 = lVar4 + -0x128;
      do {
        lVar5 = lVar5 + -0x70;
        FRichCurve::~FRichCurve(lVar5);
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      lVar4 = lVar4 + 0x3d0;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar4 = *(longlong *)(param_1 + 0x120);
  }
  if (lVar4 != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 0x118);
  lVar4 = *(longlong *)(param_1 + 0x110);
  if (iVar6 != 0) {
    lVar4 = lVar4 + 0x20;
    do {
      FRichCurve::~FRichCurve(lVar4);
      lVar4 = lVar4 + 0x98;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar4 = *(longlong *)(param_1 + 0x110);
  }
  if (lVar4 != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 0x100);
  lVar4 = *(longlong *)(param_1 + 0xf8);
  if (iVar6 != 0) {
    lVar4 = lVar4 + 0x10;
    do {
      FUN_14099a830(lVar4 + 0x10);
      FUN_14099a7a0(lVar4);
      lVar4 = lVar4 + 0x30;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar4 = *(longlong *)(param_1 + 0xf8);
  }
  if (lVar4 != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 0xf0);
  lVar4 = *(longlong *)(param_1 + 0xe8);
  if (iVar6 != 0) {
    lVar4 = lVar4 + 0x50;
    do {
      FUN_14099a830(lVar4 + 0x10);
      FUN_14099a7a0(lVar4);
      lVar4 = lVar4 + 0x80;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar4 = *(longlong *)(param_1 + 0xe8);
  }
  if (lVar4 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  FUN_14099a830(param_1 + 0xb0);
  FUN_14099a7a0(param_1 + 0xa0);
  iVar6 = *(int *)(param_1 + 0x98);
  lVar4 = *(longlong *)(param_1 + 0x90);
  if (iVar6 != 0) {
    plVar3 = (longlong *)(lVar4 + 0x20);
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 6;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar4 = *(longlong *)(param_1 + 0x90);
  }
  if (lVar4 != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar6 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  return;
}



// FUNCTION 14099b280 FUN_14099b280 body=131 status=ok
// SIG undefined FUN_14099b280(void)

void FUN_14099b280(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x204);
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  FUN_14099a700(param_1 + 0x128);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FUN_14099ae30(param_1);
  return;
}



// FUNCTION 14099b310 FUN_14099b310 body=100 status=ok
// SIG undefined FUN_14099b310(void)

void FUN_14099b310(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x140);
  plVar1 = *(longlong **)(param_1 + 0x138);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x138);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_14099b020(param_1);
  return;
}



// FUNCTION 14099b380 FUN_14099b380 body=129 status=ok
// SIG undefined FUN_14099b380(void)

void FUN_14099b380(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  iVar3 = *(int *)(param_1 + 0x220);
  lVar1 = *(longlong *)(param_1 + 0x218);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x16;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x218);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  FUN_142c63cd0(param_1);
  return;
}



// FUNCTION 14099b410 FUN_14099b410 body=454 status=ok
// SIG undefined FUN_14099b410(void)

void FUN_14099b410(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  FUN_14099a9b0(param_1 + 0x690);
  FUN_14099aa40(param_1 + 0x680);
  TArray<FSpawnGenerator,FDefaultAllocator>::~TArray<FSpawnGenerator,FDefaultAllocator>
            (param_1 + 0x670);
  FUN_14099a950(param_1 + 0x660);
  if (*(longlong *)(param_1 + 0x640) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x638);
  lVar2 = *(longlong *)(param_1 + 0x630);
  if (iVar1 != 0) {
    lVar2 = lVar2 + 0x10;
    do {
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (lVar2);
      lVar2 = lVar2 + 0x20;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    lVar2 = *(longlong *)(param_1 + 0x630);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  FUN_14099adc0(param_1 + 0x560);
  if (*(longlong *)(param_1 + 0x550) != 0) {
    FMemory::Free();
  }
  FUN_14099adc0(param_1 + 0x488);
  FUN_14099adc0(param_1 + 0x3c0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x380);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x368);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x350);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x338);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 800);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x308);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2f0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2d8);
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  FUN_14099af70(param_1);
  return;
}



// FUNCTION 14099b5e0 FUN_14099b5e0 body=261 status=ok
// SIG undefined FUN_14099b5e0(void)

void FUN_14099b5e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *(longlong *)(param_1 + 0x1f0);
  iVar6 = *(int *)(param_1 + 0x1f8);
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 8);
    do {
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
      plVar7 = plVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0x1f0);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_143fe0658;
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 14099b6f0 FUN_14099b6f0 body=536 status=ok
// SIG undefined FUN_14099b6f0(void)

undefined4 * FUN_14099b6f0(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  plVar1 = (longlong *)(param_2 + 2);
  plVar2 = (longlong *)(param_1 + 2);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (plVar2 != plVar1) {
    iVar5 = param_1[4];
    lVar3 = *plVar2;
    if (iVar5 != 0) {
      plVar4 = (longlong *)(lVar3 + 0x18);
      do {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 7;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      lVar3 = *plVar2;
    }
    if (lVar3 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    *(undefined8 *)(param_2 + 4) = 0;
  }
  plVar1 = (longlong *)(param_2 + 6);
  plVar2 = (longlong *)(param_1 + 6);
  if (plVar2 != plVar1) {
    iVar5 = param_1[8];
    lVar3 = *plVar2;
    if (iVar5 != 0) {
      plVar4 = (longlong *)(lVar3 + 0x18);
      do {
        if (plVar4[5] != 0) {
          FMemory::Free();
        }
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 10;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      lVar3 = *plVar2;
    }
    if (lVar3 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    *(undefined8 *)(param_2 + 8) = 0;
  }
  plVar1 = (longlong *)(param_2 + 10);
  plVar2 = (longlong *)(param_1 + 10);
  if (plVar2 != plVar1) {
    iVar5 = param_1[0xc];
    lVar3 = *plVar2;
    if (iVar5 != 0) {
      plVar4 = (longlong *)(lVar3 + 0x40);
      do {
        if (plVar4[5] != 0) {
          FMemory::Free();
        }
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        if (plVar4[-5] != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 0xf;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      lVar3 = *plVar2;
    }
    if (lVar3 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    *(undefined8 *)(param_2 + 0xc) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0xe);
  plVar2 = (longlong *)(param_1 + 0xe);
  if (plVar2 != plVar1) {
    iVar5 = param_1[0x10];
    lVar3 = *plVar2;
    if (iVar5 != 0) {
      plVar4 = (longlong *)(lVar3 + 0x68);
      do {
        if (plVar4[5] != 0) {
          FMemory::Free();
        }
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        if (plVar4[-5] != 0) {
          FMemory::Free();
        }
        if (plVar4[-10] != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 0x14;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      lVar3 = *plVar2;
    }
    if (lVar3 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  return param_1;
}



// FUNCTION 14099b910 FUN_14099b910 body=920 status=ok
// SIG undefined FUN_14099b910(void)

undefined4 * FUN_14099b910(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 local_50 [24];
  
  plVar1 = (longlong *)(param_1 + 2);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (plVar1 != (longlong *)(param_2 + 2)) {
    iVar5 = param_1[4];
    if (iVar5 != 0) {
      plVar3 = (longlong *)(*plVar1 + 0x18);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 7;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = param_2[4];
    lVar4 = *(longlong *)(param_2 + 2);
    param_1[4] = iVar5;
    if ((iVar5 == 0) && (param_1[5] == 0)) {
      param_1[5] = 0;
    }
    else {
      TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(plVar1,iVar5);
      puVar9 = (undefined4 *)*plVar1;
      if (iVar5 != 0) {
        puVar6 = (undefined8 *)(puVar9 + 8);
        puVar8 = (undefined4 *)(lVar4 + 4);
        do {
          puVar6[-1] = 0;
          *puVar6 = 0;
          *puVar9 = 0xffffffff;
          *(undefined4 *)((longlong)puVar6 + -0x1c) = 0;
          puVar6[-2] = 0;
          *(undefined4 *)puVar6 = 0;
          if (0x7fffffff < *(uint *)((longlong)puVar6 + 4)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar6 + -1,0);
          }
          if ((undefined2 *)puVar6[-1] != (undefined2 *)0x0) {
            *(undefined2 *)puVar6[-1] = 0;
          }
          *(undefined4 *)(puVar6 + -3) = 0;
          *puVar9 = puVar8[-1];
          *(undefined4 *)((longlong)puVar6 + -0x1c) = *puVar8;
          *(undefined4 *)(puVar6 + -3) = puVar8[1];
          FString::FString(local_50,puVar8 + 5);
          FSoftObjectPath::operator=(puVar6 + -2);
          puVar9 = puVar9 + 0xe;
          *(undefined4 *)(puVar6 + 1) = puVar8[9];
          *(undefined4 *)((longlong)puVar6 + 0xc) = puVar8[10];
          puVar2 = puVar8 + 0xb;
          puVar8 = puVar8 + 0xe;
          *(undefined4 *)(puVar6 + 2) = *puVar2;
          puVar6 = puVar6 + 7;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  plVar1 = (longlong *)(param_1 + 6);
  if (plVar1 != (longlong *)(param_2 + 6)) {
    iVar5 = param_1[8];
    if (iVar5 != 0) {
      plVar3 = (longlong *)(*plVar1 + 0x18);
      do {
        if (plVar3[5] != 0) {
          FMemory::Free();
        }
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 10;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_140998750(plVar1,*(longlong *)(param_2 + 6),param_2[8],param_1[9],0);
  }
  plVar1 = (longlong *)(param_1 + 10);
  if (plVar1 != (longlong *)(param_2 + 10)) {
    iVar5 = param_1[0xc];
    if (iVar5 != 0) {
      plVar3 = (longlong *)(*plVar1 + 0x40);
      do {
        if (plVar3[5] != 0) {
          FMemory::Free();
        }
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        if (plVar3[-5] != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 0xf;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = param_2[0xc];
    lVar4 = *(longlong *)(param_2 + 10);
    param_1[0xc] = iVar5;
    if ((iVar5 == 0) && (param_1[0xd] == 0)) {
      param_1[0xd] = 0;
    }
    else {
      FUN_1409b8040(plVar1,iVar5);
      lVar7 = *plVar1;
      if (iVar5 != 0) {
        lVar4 = lVar4 + 0x50;
        do {
          TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar7,lVar4 + -0x50);
          TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar7 + 0x28,lVar4 + -0x28);
          TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar7 + 0x50,lVar4);
          lVar7 = lVar7 + 0x78;
          lVar4 = lVar4 + 0x78;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  plVar1 = (longlong *)(param_1 + 0xe);
  if (plVar1 != (longlong *)(param_2 + 0xe)) {
    iVar5 = param_1[0x10];
    if (iVar5 != 0) {
      plVar3 = (longlong *)(*plVar1 + 0x68);
      do {
        if (plVar3[5] != 0) {
          FMemory::Free();
        }
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        if (plVar3[-5] != 0) {
          FMemory::Free();
        }
        if (plVar3[-10] != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 0x14;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = param_2[0x10];
    lVar4 = *(longlong *)(param_2 + 0xe);
    param_1[0x10] = iVar5;
    if ((iVar5 == 0) && (param_1[0x11] == 0)) {
      param_1[0x11] = 0;
    }
    else {
      FUN_1406bbfe0(plVar1,iVar5);
      lVar7 = *plVar1;
      if (iVar5 != 0) {
        lVar4 = lVar4 + 0x50;
        do {
          TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar7,lVar4 + -0x50);
          TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar7 + 0x28,lVar4 + -0x28);
          TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar7 + 0x50,lVar4);
          TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar7 + 0x78,lVar4 + 0x28);
          lVar7 = lVar7 + 0xa0;
          lVar4 = lVar4 + 0xa0;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  return param_1;
}



// FUNCTION 14099bcb0 FUN_14099bcb0 body=432 status=ok
// SIG undefined FUN_14099bcb0(void)

void FUN_14099bcb0(undefined8 *param_1,ulonglong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  uVar14 = 0;
  plVar11 = (longlong *)*param_2;
  uVar12 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (plVar11 + (int)param_2[1] < plVar11) {
    uVar12 = uVar14;
  }
  if (uVar12 != 0) {
    do {
      lVar10 = *plVar11;
      if (lVar10 != 0) {
        iVar2 = *(int *)*param_1;
        uVar3 = *(undefined4 *)param_1[3];
        uVar4 = *(undefined4 *)param_1[2];
        lVar6 = param_1[1];
        plVar1 = (longlong *)(lVar6 + 0xb0);
        iVar5 = *(int *)(lVar6 + 0xb8);
        lVar13 = (longlong)iVar5;
        *(int *)(lVar6 + 0xb8) = iVar5 + 1;
        if (*(int *)(lVar6 + 0xbc) < iVar5 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1);
        }
        lVar7 = *plVar1;
        *(undefined8 *)(lVar7 + lVar13 * 0x30) = 0;
        *(undefined8 *)(lVar7 + 8 + lVar13 * 0x30) = 0;
        *(undefined8 *)(lVar7 + 0x10 + lVar13 * 0x30) = 0;
        *(undefined8 *)(lVar7 + 0x18 + lVar13 * 0x30) = 0;
        *(undefined8 *)(lVar7 + 0x20 + lVar13 * 0x30) = 0;
        *(undefined8 *)(lVar7 + 0x28 + lVar13 * 0x30) = 0;
        lVar7 = *plVar1;
        *(longlong *)(lVar7 + lVar13 * 0x30) = lVar6;
        *(undefined4 *)(lVar7 + 0x1c + lVar13 * 0x30) = uVar4;
        *(undefined4 *)(lVar7 + 0x20 + lVar13 * 0x30) = uVar3;
        *(undefined1 *)(lVar7 + 0x24 + lVar13 * 0x30) = param_3;
        *(int *)(lVar7 + 0x10 + lVar13 * 0x30) = iVar5;
        *(longlong *)(lVar7 + 8 + lVar13 * 0x30) = lVar10;
        *(int *)(lVar7 + 0x14 + lVar13 * 0x30) = iVar2;
        *(undefined4 *)(lVar7 + 0x18 + lVar13 * 0x30) = 0xffffffff;
        *(int *)*param_1 = iVar5;
        piVar8 = (int *)*param_1;
        if (*piVar8 != -1) {
          lVar10 = param_1[4];
          iVar5 = *(int *)(lVar10 + 0x28);
          iVar9 = iVar5 + 1;
          *(int *)(lVar10 + 0x28) = iVar9;
          if (*(int *)(lVar10 + 0x2c) < iVar9) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar10 + 0x20);
          }
          *(int *)(*(longlong *)(lVar10 + 0x20) + (longlong)iVar5 * 4) = *piVar8;
          if (((-1 < iVar2) && (iVar2 < *(int *)(param_1[1] + 0xb8))) &&
             (lVar10 = (longlong)iVar2 * 0x30 + *(longlong *)(param_1[1] + 0xb0), lVar10 != 0)) {
            *(undefined4 *)(lVar10 + 0x18) = *(undefined4 *)*param_1;
          }
        }
      }
      plVar11 = plVar11 + 1;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar12);
  }
  return;
}



// FUNCTION 14099c010 FUN_14099c010 body=102 status=ok
// SIG undefined FUN_14099c010(void)

longlong FUN_14099c010(longlong param_1,ulonglong param_2)

{
  FUN_140591060(param_1 + 0x520);
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x538);
  }
  return param_1;
}



// FUNCTION 14099c080 FUN_14099c080 body=94 status=ok
// SIG undefined FUN_14099c080(void)

longlong FUN_14099c080(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x4c8) = &PTR_FUN_1441939c8;
  *(undefined ***)(param_1 + 0x4c0) = &PTR_FUN_144194f88;
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_14407ef78;
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x510);
  }
  return param_1;
}



// FUNCTION 14099c0e0 FUN_14099c0e0 body=66 status=ok
// SIG undefined FUN_14099c0e0(void)

longlong FUN_14099c0e0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x6e0) = &PTR_FUN_144191f28;
  FUN_14099acc0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x708);
  }
  return param_1;
}



// FUNCTION 14099c130 FUN_14099c130 body=43 status=ok
// SIG undefined FUN_14099c130(void)

undefined8 * FUN_14099c130(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144194f88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14099c160 FUN_14099c160 body=43 status=ok
// SIG undefined FUN_14099c160(void)

undefined8 * FUN_14099c160(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144193ee0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14099c190 FUN_14099c190 body=43 status=ok
// SIG undefined FUN_14099c190(void)

undefined8 * FUN_14099c190(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144191f28;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14099c1c0 FUN_14099c1c0 body=43 status=ok
// SIG undefined FUN_14099c1c0(void)

undefined8 * FUN_14099c1c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1441939c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14099c1f0 FUN_14099c1f0 body=84 status=ok
// SIG undefined FUN_14099c1f0(void)

longlong FUN_14099c1f0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14099c250 FUN_14099c250 body=73 status=ok
// SIG undefined FUN_14099c250(void)

longlong FUN_14099c250(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x208) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x1d8) = &PTR_ValueToString_14407aff8;
  FUN_140729c00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x248);
  }
  return param_1;
}



// FUNCTION 14099c2a0 FUN_14099c2a0 body=119 status=ok
// SIG undefined FUN_14099c2a0(void)

longlong FUN_14099c2a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    FMemory::Free();
  }
  FUN_1406d8b70(param_1 + 0x1c0);
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 14099c320 FUN_14099c320 body=123 status=ok
// SIG undefined FUN_14099c320(void)

longlong FUN_14099c320(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  thunk_FUN_142478640(param_1 + 0x23c);
  thunk_FUN_142478640(param_1 + 0x230);
  plVar3 = *(longlong **)(param_1 + 0x228);
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
  FUN_14099b5e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x248);
  }
  return param_1;
}



// FUNCTION 14099c3a0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAIPerceptionStimuliSourceComponent::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FUN_14099ae30(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 14099c3f0 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UTTLPartsDevelopManager::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
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



// FUNCTION 14099c460 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleEventGenerator::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14099c4a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessTemporalAACS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14099b280();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,600);
  }
  return param_1;
}



// FUNCTION 14099c4e0 FUN_14099c4e0 body=73 status=ok
// SIG undefined FUN_14099c4e0(void)

longlong FUN_14099c4e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 14099c530 FUN_14099c530 body=52 status=ok
// SIG undefined FUN_14099c530(void)

undefined8 FUN_14099c530(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14099c570 FUN_14099c570 body=73 status=ok
// SIG undefined FUN_14099c570(void)

longlong FUN_14099c570(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FMemory::Free();
  }
  FUN_14099b280(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x278);
  }
  return param_1;
}



// FUNCTION 14099c5c0 FUN_14099c5c0 body=52 status=ok
// SIG undefined FUN_14099c5c0(void)

undefined8 FUN_14099c5c0(undefined8 param_1,ulonglong param_2)

{
  FUN_14099b280();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x268);
  }
  return param_1;
}



// FUNCTION 14099c600 FUN_14099c600 body=102 status=ok
// SIG undefined FUN_14099c600(void)

longlong FUN_14099c600(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x268);
  FUN_14099b280(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x300);
  }
  return param_1;
}



// FUNCTION 14099c670 FUN_14099c670 body=102 status=ok
// SIG undefined FUN_14099c670(void)

longlong FUN_14099c670(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x350) != 0) {
    FMemory::Free();
  }
  FUN_1406d8b70(param_1 + 0x298);
  FUN_14099b280(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x400);
  }
  return param_1;
}



// FUNCTION 14099c6e0 FUN_14099c6e0 body=52 status=ok
// SIG undefined FUN_14099c6e0(void)

undefined8 FUN_14099c6e0(undefined8 param_1,ulonglong param_2)

{
  FUN_14099b280();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x278);
  }
  return param_1;
}



// FUNCTION 14099c720 `scalar_deleting_destructor' body=67 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UGCharacterClassAttackInfo::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  FUN_140590de0(param_1 + 0x268);
  FUN_14099b280(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x278);
  }
  return param_1;
}



// FUNCTION 14099c770 FUN_14099c770 body=87 status=ok
// SIG undefined FUN_14099c770(void)

longlong FUN_14099c770(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x218) = &PTR_FUN_144191f28;
  FUN_142c63cd0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x260);
  }
  return param_1;
}



// FUNCTION 14099c7d0 FUN_14099c7d0 body=87 status=ok
// SIG undefined FUN_14099c7d0(void)

longlong FUN_14099c7d0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x218) = &PTR_FUN_144191f28;
  FUN_142c63cd0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x278);
  }
  return param_1;
}



// FUNCTION 14099c830 FUN_14099c830 body=87 status=ok
// SIG undefined FUN_14099c830(void)

longlong FUN_14099c830(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x218) = &PTR_FUN_144191f28;
  FUN_142c63cd0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x270);
  }
  return param_1;
}



// FUNCTION 14099c890 FUN_14099c890 body=87 status=ok
// SIG undefined FUN_14099c890(void)

longlong FUN_14099c890(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x218) = &PTR_FUN_144191f28;
  FUN_142c63cd0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x268);
  }
  return param_1;
}



// FUNCTION 14099c8f0 FUN_14099c8f0 body=66 status=ok
// SIG undefined FUN_14099c8f0(void)

longlong FUN_14099c8f0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x148) = &PTR_FUN_144191f28;
  FUN_14099b310();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x178);
  }
  return param_1;
}



// FUNCTION 14099c940 FUN_14099c940 body=66 status=ok
// SIG undefined FUN_14099c940(void)

longlong FUN_14099c940(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x238) = &PTR_FUN_144191f28;
  FUN_14099b380();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,600);
  }
  return param_1;
}



// FUNCTION 14099c990 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessTemporalAACS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14099af70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,600);
  }
  return param_1;
}



// FUNCTION 14099c9d0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FHashStringDataflowNode::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FUN_14099ae30(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 14099ca20 FUN_14099ca20 body=104 status=ok
// SIG undefined FUN_14099ca20(void)

longlong FUN_14099ca20(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_143fe0658;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FUN_14099ae30(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 14099ca90 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FTextHistory_AsCurrency::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14099cae0 FUN_14099cae0 body=90 status=ok
// SIG undefined FUN_14099cae0(void)

longlong FUN_14099cae0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FUN_14099ae30(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 14099cb40 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UWebSocketNetDriver::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14099b410();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6a8);
  }
  return param_1;
}



// FUNCTION 14099cb80 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAutoDestroySubsystem::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14099cbd0 FUN_14099cbd0 body=255 status=ok
// SIG undefined FUN_14099cbd0(void)

longlong FUN_14099cbd0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator>::
  ~TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator>(param_1 + 0xa0);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x188);
  }
  return param_1;
}



// FUNCTION 14099ccd0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 CAkBus::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140458c20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x178);
  }
  return param_1;
}



// FUNCTION 14099cd10 thunk_FUN_1409add40 body=7 status=ok
// SIG undefined thunk_FUN_1409add40(void)

void thunk_FUN_1409add40(undefined8 param_1)

{
  FUN_1409add40(param_1,2);
  return;
}



// FUNCTION 14099cd20 CancelLatentActions body=144 status=ok
// SIG undefined CancelLatentActions(void)

void UUserWidget::CancelLatentActions(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    FWeakObjectPtr::operator=(local_res8,param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      lVar2 = lVar1 + 0x400;
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 400) + 0x98);
    }
    FUN_142534fa0(lVar2,local_res8);
    if (*(longlong *)(lVar1 + 400) != 0) {
      FUN_1428800b0(*(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90),param_1);
      return;
    }
    FUN_1428800b0(*(undefined8 *)(lVar1 + 0x3f8),param_1);
  }
  return;
}



// FUNCTION 14099cdb0 FUN_14099cdb0 body=143 status=ok
// SIG undefined FUN_14099cdb0(void)

void FUN_14099cdb0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x310) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 0x310);
    *(undefined8 *)(param_1 + 0x310) = 0;
  }
  *(undefined4 *)(param_1 + 0x308) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  return;
}



// FUNCTION 14099ce40 FUN_14099ce40 body=97 status=ok
// SIG undefined FUN_14099ce40(void)

void FUN_14099ce40(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((char)param_1[0x25] == '\x03') {
    lVar1 = (**(code **)(param_1[0x8b] + 0x10))(param_1 + 0x8b);
    if (lVar1 != 0) {
      uVar2 = (**(code **)(param_1[0x8b] + 0x10))(param_1 + 0x8b);
      FUN_1409add40(uVar2,0);
    }
    (**(code **)(*param_1 + 0x6d0))(param_1,0);
  }
  return;
}



// FUNCTION 14099ceb0 FUN_14099ceb0 body=578 status=ok
// SIG undefined FUN_14099ceb0(void)

ulonglong FUN_14099ceb0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 *local_78;
  longlong local_70;
  int *local_68;
  undefined4 *local_60;
  longlong *local_58;
  
  plVar13 = (longlong *)(param_1 + 0x90);
  uVar2 = *(uint *)(param_1 + 0x98);
  uVar10 = (ulonglong)(int)uVar2;
  *(uint *)(param_1 + 0x98) = uVar2 + 1;
  if (*(int *)(param_1 + 0x9c) < (int)(uVar2 + 1)) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar13);
  }
  lVar5 = *plVar13;
  uVar14 = 0;
  *(undefined8 *)(lVar5 + uVar10 * 0x28) = 0;
  *(undefined8 *)(lVar5 + 8 + uVar10 * 0x28) = 0;
  iVar12 = -1;
  *(undefined8 *)(lVar5 + 0x10 + uVar10 * 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x18 + uVar10 * 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x20 + uVar10 * 0x28) = 0;
  lVar5 = *plVar13;
  *(longlong *)(lVar5 + 8 + uVar10 * 0x28) = param_2;
  *(longlong *)(lVar5 + uVar10 * 0x28) = param_1;
  *(uint *)(lVar5 + 0x10 + uVar10 * 0x28) = uVar2;
  plVar13 = *(longlong **)(param_2 + 0xa8);
  lVar5 = lVar5 + uVar10 * 0x28;
  uVar11 = (longlong)*(int *)(param_2 + 0xb0) & 0x1fffffffffffffff;
  if (plVar13 + *(int *)(param_2 + 0xb0) < plVar13) {
    uVar11 = uVar14;
  }
  if (uVar11 != 0) {
    do {
      lVar9 = *plVar13;
      if (lVar9 != 0) {
        local_res18[0] = (undefined4)uVar10;
        plVar1 = (longlong *)(param_1 + 0xa0);
        iVar3 = *(int *)(param_1 + 0xa8);
        *(int *)(param_1 + 0xa8) = iVar3 + 1;
        if (*(int *)(param_1 + 0xac) < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar1);
        }
        lVar6 = *plVar1;
        lVar8 = (longlong)iVar3 * 0x38;
        *(undefined8 *)(lVar8 + lVar6) = 0;
        *(undefined8 *)(lVar8 + 8 + lVar6) = 0;
        *(undefined8 *)(lVar8 + 0x10 + lVar6) = 0;
        *(undefined8 *)(lVar8 + 0x18 + lVar6) = 0;
        *(undefined8 *)(lVar8 + 0x20 + lVar6) = 0;
        *(undefined8 *)(lVar8 + 0x28 + lVar6) = 0;
        *(undefined8 *)(lVar8 + 0x30 + lVar6) = 0;
        local_58 = (longlong *)(*plVar1 + lVar8);
        *local_58 = param_1;
        local_58[1] = lVar9;
        *(undefined4 *)((longlong)local_58 + 0x1c) = local_res18[0];
        *(int *)(local_58 + 2) = iVar3;
        local_78 = local_res20;
        local_68 = local_res10;
        *(int *)((longlong)local_58 + 0x14) = iVar12;
        *(undefined4 *)(local_58 + 3) = 0xffffffff;
        local_60 = local_res18;
        local_res20[0] = 0xffffffff;
        local_res10[0] = iVar3;
        local_70 = param_1;
        FUN_14099bcb0(&local_78,lVar9 + 0x38,0);
        FUN_14099bcb0(&local_78);
        iVar3 = local_res10[0];
        if (local_res10[0] != -1) {
          iVar4 = *(int *)(lVar5 + 0x20);
          iVar7 = iVar4 + 1;
          *(int *)(lVar5 + 0x20) = iVar7;
          if (*(int *)(lVar5 + 0x24) < iVar7) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar5 + 0x18);
          }
          *(int *)(*(longlong *)(lVar5 + 0x18) + (longlong)iVar4 * 4) = iVar3;
          if ((-1 < iVar12) && (iVar12 < *(int *)(param_1 + 0xa8))) {
            lVar9 = (longlong)iVar12 * 0x38 + *plVar1;
            uVar10 = (ulonglong)uVar2;
            iVar12 = iVar3;
            if (lVar9 != 0) {
              *(int *)(lVar9 + 0x18) = iVar3;
            }
            goto LAB_14099d0cb;
          }
        }
        uVar10 = (ulonglong)uVar2;
        iVar12 = iVar3;
      }
LAB_14099d0cb:
      plVar13 = plVar13 + 1;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar11);
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 14099d100 FUN_14099d100 body=198 status=ok
// SIG undefined FUN_14099d100(void)

void FUN_14099d100(longlong *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  lVar4 = *param_1;
  iVar5 = (int)param_1[1];
  lVar6 = (longlong)iVar5 * 0x10 + lVar4;
  if (lVar4 != lVar6) {
    do {
      cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar4,param_2);
      if ((cVar2 != '\0') && (*(int *)(lVar4 + 8) == param_2[2])) {
        *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + param_3;
        return;
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != lVar6);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar5);
  }
  puVar3 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x10);
  *puVar3 = *param_2;
  puVar3[1] = param_2[1];
  puVar3[2] = param_2[2];
  puVar3[3] = 0;
  piVar1 = (int *)((longlong)iVar5 * 0x10 + 0xc + *param_1);
  *piVar1 = *piVar1 + param_3;
  return;
}



// FUNCTION 14099d1d0 FUN_14099d1d0 body=594 status=ok
// SIG undefined FUN_14099d1d0(void)

undefined1 FUN_14099d1d0(undefined8 param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar2 = DAT_146b4ae20;
  if (param_2 == 0) {
    return DAT_146b4ae20;
  }
  lVar3 = FUN_1430f1090();
  lVar5 = param_2;
  while (lVar5 != lVar3) {
    lVar5 = *(longlong *)(lVar5 + 0x30);
    if (lVar5 == 0) {
      return uVar2;
    }
  }
  local_40 = (longlong *)0x0;
  local_38 = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_40,0);
  *local_40 = param_3;
  local_30 = 0;
  uVar4 = FUN_1413c6340();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar5 = FUN_1417985e0(uVar4,param_1,0,0,0,0,0,0,0);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = DAT_146b33f38;
  lVar7 = DAT_146b33f38 + 0x60;
  lVar6 = FWeakObjectPtr::Get(lVar7);
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar3 + 0x68)) || (*(longlong *)(lVar3 + 0x70) == 0))
    goto LAB_14099d392;
    lVar6 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar7,lVar6);
    if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar3 + 0x68) = DAT_1464b56f4;
    }
    lVar6 = FWeakObjectPtr::Get(lVar7);
    if (lVar6 == 0) goto LAB_14099d392;
  }
  lVar3 = FUN_142e778a0();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1421d3220(lVar5 + 0x60,lVar6 + 0x90);
  }
LAB_14099d392:
  if (param_3 != 0) {
    lVar3 = FUN_1413d1240();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined1 *)(lVar5 + 0x90) = 1;
    }
  }
  *(longlong *)(lVar5 + 0x88) = param_2;
  local_48 = lVar5;
  uVar2 = thunk_FUN_1430eccd0(param_1,&local_48);
  if (local_40 != (longlong *)0x0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 14099d430 FUN_14099d430 body=584 status=ok
// SIG undefined FUN_14099d430(void)

undefined1 FUN_14099d430(undefined8 param_1,longlong param_2,longlong param_3,float param_4)

{
  int iVar1;
  undefined8 *_Src;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 **ppuVar4;
  longlong lVar5;
  float fVar6;
  undefined8 *local_118;
  ulonglong local_110;
  longlong local_108;
  longlong local_100;
  int local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_60;
  
  uVar2 = DAT_146b4ae20;
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar1 = *(int *)(param_2 + 0x10);
    local_100 = 0;
    local_f8 = 0;
    local_f4 = 0;
    if (iVar1 != 0) {
      if (0 < iVar1) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_100,iVar1);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(local_100 + (longlong)local_f8 * 8),*(void **)(param_2 + 8),
                 (longlong)iVar1 << 3);
      local_f8 = local_f8 + iVar1;
    }
    local_f0 = 0;
    uVar3 = UBTTask_RunBehaviorDynamic::GetPrivateStaticClass();
    local_118 = (undefined8 *)0x0;
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_108 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
    local_a8 = *(undefined8 *)(param_3 + 8);
    uStack_a0 = *(undefined1 *)(param_3 + 0x10);
    uStack_60 = 0;
    fVar6 = *(float *)(param_3 + 0x18);
    if ((*(float *)(param_3 + 0x18) <= param_4) &&
       (fVar6 = *(float *)(param_3 + 0x14), param_4 <= *(float *)(param_3 + 0x14))) {
      fVar6 = param_4;
    }
    FUN_142c8c260(&local_e8,fVar6);
    local_118 = (undefined8 *)0x0;
    local_110 = 1;
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(&local_118,0);
    _Src = local_118;
    *local_118 = local_a8;
    local_118[1] = CONCAT71(uStack_9f,uStack_a0);
    local_118[2] = local_e8;
    local_118[3] = uStack_e0;
    local_118[4] = local_d8;
    local_118[5] = uStack_d0;
    local_118[6] = local_c8;
    local_118[7] = uStack_c0;
    *(undefined4 *)(local_118 + 8) = local_b8;
    *(undefined4 *)((longlong)local_118 + 0x44) = uStack_b4;
    *(undefined4 *)(local_118 + 9) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)local_118 + 0x4c) = uStack_60._4_4_;
    ppuVar4 = (undefined8 **)(local_108 + 0x38);
    if (ppuVar4 != &local_118) {
      lVar5 = (longlong)(int)local_110;
      *(int *)(local_108 + 0x40) = (int)local_110;
      if (((int)local_110 == 0) && (*(int *)(local_108 + 0x44) == 0)) {
        *(undefined4 *)(local_108 + 0x44) = 0;
      }
      else {
        TArray<FPlayerReservation,FDefaultAllocator>::ResizeForCopy(ppuVar4,local_110 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppuVar4,_Src,lVar5 * 0x50);
      }
    }
    uVar2 = thunk_FUN_1430eccd0(param_1,&local_108);
    if (_Src != (undefined8 *)0x0) {
      FMemory::Free(_Src);
    }
    if (local_100 != 0) {
      FMemory::Free();
    }
  }
  return uVar2;
}



// FUNCTION 14099d680 FUN_14099d680 body=724 status=ok
// SIG undefined FUN_14099d680(void)

void FUN_14099d680(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined8 local_68;
  float local_60;
  
  lVar6 = FWeakObjectPtr::Get(param_2);
  if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x1b8) != 0)) {
    lVar7 = FUN_142dddd00(lVar6);
    lVar11 = *(longlong *)(param_1 + 0x2f0);
    iVar13 = 0;
    lVar12 = (longlong)*(int *)(param_1 + 0x2f8) * 0x60 + lVar11;
    for (; lVar11 != lVar12; lVar11 = lVar11 + 0x60) {
      lVar8 = FWeakObjectPtr::Get(lVar11);
      if (lVar8 == lVar6) {
        iVar13 = iVar13 + 1;
      }
    }
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x1b8);
    *(longlong *)(param_2 + 0x10) = lVar6;
    if ((lVar7 == 0) || (lVar11 = *(longlong *)(lVar7 + 0x290), lVar11 == 0)) {
      lVar11 = *(longlong *)(param_1 + 0x1a8);
    }
    *(longlong *)(param_2 + 0x20) = lVar11;
    uVar9 = FUN_14222b250(lVar6,lVar11,0);
    *(undefined8 *)(param_2 + 0x18) = uVar9;
    *(ulonglong *)(param_2 + 0x28) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    *(float *)(param_2 + 0x30) = DAT_1468b5d98;
    if (1 < iVar13) {
      iVar13 = rand();
      *(float *)(param_2 + 0x2c) =
           ((float)iVar13 * 3.051851e-05 + (float)iVar13 * 3.051851e-05) - 1.0;
      iVar13 = rand();
      fVar14 = ((float)iVar13 * 3.051851e-05 + (float)iVar13 * 3.051851e-05) - 1.0;
      *(float *)(param_2 + 0x30) = fVar14;
      fVar1 = *(float *)(param_2 + 0x2c);
      fVar2 = *(float *)(param_2 + 0x28);
      fVar16 = fVar2 * fVar2 + fVar1 * fVar1 + fVar14 * fVar14;
      if (fVar16 == 1.0) {
        local_68 = *(undefined8 *)(param_2 + 0x28);
        fVar15 = (float)((ulonglong)local_68 >> 0x20);
        local_60 = *(float *)(param_2 + 0x30);
        fVar19 = (float)local_68;
      }
      else {
        fVar15 = DAT_1468b5d94;
        local_60 = DAT_1468b5d98;
        fVar19 = DAT_1468b5d90;
        if (1e-08 <= fVar16) {
          auVar18 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
          fVar17 = auVar18._0_4_;
          fVar17 = fVar17 + fVar17 * (0.5 - fVar16 * 0.5 * fVar17 * fVar17);
          fVar17 = fVar17 + fVar17 * (0.5 - fVar16 * 0.5 * fVar17 * fVar17);
          fVar19 = fVar2 * fVar17;
          fVar15 = fVar1 * fVar17;
          local_60 = fVar14 * fVar17;
        }
      }
      fVar1 = *(float *)(param_1 + 0x1b0);
      local_60 = local_60 * fVar1;
      *(ulonglong *)(param_2 + 0x28) = CONCAT44(fVar15 * fVar1,fVar19 * fVar1);
      *(float *)(param_2 + 0x30) = local_60;
    }
    puVar10 = (undefined4 *)FGuid::NewGuid(&local_68);
    uVar3 = puVar10[1];
    uVar4 = puVar10[2];
    uVar5 = puVar10[3];
    *(undefined4 *)(param_2 + 0x38) = *puVar10;
    *(undefined4 *)(param_2 + 0x3c) = uVar3;
    *(undefined4 *)(param_2 + 0x40) = uVar4;
    *(undefined4 *)(param_2 + 0x44) = uVar5;
    lVar6 = FUN_1409aab20(param_1);
    if (lVar6 != 0) {
      FUN_140c331b0(lVar6,param_2 + 8);
    }
  }
  return;
}



// FUNCTION 14099d960 FUN_14099d960 body=295 status=ok
// SIG undefined FUN_14099d960(void)

void FUN_14099d960(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int local_res8 [2];
  
  if (param_1[0xf] != 0) {
    plVar5 = (longlong *)param_1[0x16];
    plVar4 = plVar5 + (longlong)(int)param_1[0x17] * 6;
    if (plVar5 != plVar4) {
      while ((param_2 == 0 || (lVar2 = plVar5[1], lVar2 != param_2))) {
        plVar5 = plVar5 + 6;
        if (plVar5 == plVar4) {
          return;
        }
      }
      iVar1 = (int)param_1[0x2c];
      if (((0 < iVar1) && (lVar2 != 0)) && (lVar6 = *plVar5, lVar6 != 0)) {
        iVar3 = *(int *)((longlong)plVar5 + 0x1c);
        if (((-1 < iVar3) && (iVar3 < *(int *)(lVar6 + 0xa8))) &&
           ((lVar6 = (longlong)iVar3 * 0x38 + *(longlong *)(lVar6 + 0xa0), lVar6 != 0 &&
            (*(char *)(lVar6 + 0x30) != '\0')))) {
          if ((byte)(*(char *)(lVar2 + 0x34) - 3U) < 2) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(lVar2 + 0x30);
          }
          if ((int)plVar5[5] < iVar3) {
            iVar3 = 0;
            if (-1 < iVar1 + -1) {
              iVar3 = iVar1 + -1;
            }
            if (iVar3 != iVar1) {
              *(int *)(param_1 + 0x2c) = iVar3;
              local_res8[0] = iVar3;
              TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                        (param_1 + 9,local_res8);
              (**(code **)(*param_1 + 0x260))(param_1);
            }
            FUN_1409adc80(param_1,plVar5);
            FUN_141455e60(param_1,param_2);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14099da90 FUN_14099da90 body=132 status=ok
// SIG undefined FUN_14099da90(void)

ulonglong FUN_14099da90(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  ulonglong in_RAX;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    cVar3 = FUN_140e27ac0(param_2,param_3);
    if (cVar3 != '\0') {
      in_RAX = FUN_140e279c0(param_2,param_3);
      if ((char)in_RAX == '\0') goto LAB_14099db02;
    }
    iVar1 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
    }
    lVar2 = *param_1;
    *(longlong *)(lVar2 + (longlong)iVar1 * 8) = param_3;
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
LAB_14099db02:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14099db20 FUN_14099db20 body=401 status=ok
// SIG undefined FUN_14099db20(void)

void FUN_14099db20(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  char local_14;
  
  cVar4 = FUN_1430ef9c0();
  if (((cVar4 != '\0') &&
      (((cVar4 = *(char *)(param_2 + 1), cVar4 != '\0' || (*(char *)((longlong)param_2 + 9) != '\0')
        ) && (param_2[2] != 0)))) && (param_2[3] != 0)) {
    cVar3 = *(char *)((longlong)param_2 + 9);
    FWeakObjectPtr::operator=(&local_34,*param_2);
    FWeakObjectPtr::operator=(&local_2c,param_2[2]);
    FWeakObjectPtr::operator=(&local_24,param_2[3]);
    FWeakObjectPtr::operator=(&local_1c,param_2[4]);
    lVar7 = *(longlong *)(param_1 + 0x18);
    iVar8 = *(int *)(param_1 + 0x20);
    local_14 = '\0';
    lVar1 = lVar7 + (longlong)iVar8 * 0x28;
    if (lVar7 != lVar1) {
      do {
        lVar5 = FWeakObjectPtr::Get(lVar7 + 0xc);
        lVar6 = FWeakObjectPtr::Get(&local_2c);
        if (lVar5 == lVar6) {
          lVar5 = FWeakObjectPtr::Get(lVar7 + 0x14);
          lVar6 = FWeakObjectPtr::Get(&local_24);
          if (lVar5 == lVar6) {
            return;
          }
        }
        lVar7 = lVar7 + 0x28;
      } while (lVar7 != lVar1);
      iVar8 = *(int *)(param_1 + 0x20);
    }
    *(int *)(param_1 + 0x20) = iVar8 + 1;
    if (*(int *)(param_1 + 0x24) < iVar8 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x18,iVar8);
    }
    pcVar2 = (char *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 0x28);
    *pcVar2 = cVar4;
    pcVar2[1] = cVar3;
    *(undefined4 *)(pcVar2 + 4) = local_34;
    *(undefined4 *)(pcVar2 + 8) = local_30;
    *(undefined4 *)(pcVar2 + 0xc) = local_2c;
    *(undefined4 *)(pcVar2 + 0x10) = local_28;
    *(undefined4 *)(pcVar2 + 0x14) = local_24;
    *(undefined4 *)(pcVar2 + 0x18) = local_20;
    *(undefined4 *)(pcVar2 + 0x1c) = local_1c;
    *(undefined4 *)(pcVar2 + 0x20) = local_18;
    pcVar2[0x24] = local_14;
    FUN_1430ed400(param_1);
  }
  return;
}



// FUNCTION 14099dcd0 FUN_14099dcd0 body=352 status=ok
// SIG undefined FUN_14099dcd0(void)

void FUN_14099dcd0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int local_res10 [2];
  longlong *local_res18;
  undefined1 local_res20 [8];
  
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
  lVar9 = *plVar3;
  lVar8 = (longlong)(int)plVar3[1] * 0x10 + lVar9;
  if (lVar9 != lVar8) {
    plVar3 = (longlong *)0x0;
    do {
      plVar4 = (longlong *)FUN_1409aabf0(lVar9,local_res20);
      plVar7 = plVar3;
      if (*plVar4 != 0) {
        plVar5 = (longlong *)FUN_1414425d0();
        for (plVar1 = (longlong *)*plVar4;
            (plVar7 = plVar3, plVar1 != (longlong *)0x0 &&
            (plVar7 = (longlong *)*plVar4, plVar1 != plVar5)); plVar1 = (longlong *)plVar1[6]) {
        }
      }
      local_res18 = plVar7;
      FUN_1409a61c0(param_1 + 0xc0,local_res10,&local_res18);
      plVar7 = plVar3;
      if (local_res10[0] != -1) {
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)local_res10[0] * 0x18);
      }
      plVar4 = plVar7 + 1;
      if (plVar7 == (longlong *)0x0) {
        plVar4 = plVar3;
      }
      if (plVar4 != (longlong *)0x0) {
        plVar7 = *(longlong **)(param_1 + 0xb0);
        local_res18 = (longlong *)*plVar4;
        plVar4 = plVar7 + (longlong)*(int *)(param_1 + 0xb8) * 6;
        for (; plVar7 != plVar4; plVar7 = plVar7 + 6) {
          if ((local_res18 != (longlong *)0x0) && ((longlong *)plVar7[1] == local_res18)) {
            iVar6 = *(int *)(lVar9 + 0xc) + *(int *)((longlong)plVar7 + 0x2c);
            if (*(int *)((longlong)plVar7 + 0x2c) != iVar6) {
              lVar2 = *plVar7;
              *(int *)((longlong)plVar7 + 0x2c) = iVar6;
              if (lVar2 != 0) {
                FUN_1409b5dc0(lVar2,plVar7);
                local_res18 = (longlong *)plVar7[1];
                TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                          (lVar2 + 0x38,&local_res18);
              }
            }
            break;
          }
        }
      }
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != lVar8);
  }
  return;
}



// FUNCTION 14099de30 FUN_14099de30 body=523 status=ok
// SIG undefined FUN_14099de30(void)

void FUN_14099de30(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong local_res8;
  longlong *local_38;
  longlong *plStack_30;
  
  if ((((*param_1 != 0) && (param_3 != 0)) && (lVar9 = *(longlong *)(param_3 + 0x78), lVar9 != 0))
     && ((param_5 != (longlong *)0x0 && (*param_2 != 0)))) {
    lVar3 = UUGLoadoutBarUW::GetPrivateStaticClass();
    lVar4 = *param_2;
    lVar6 = lVar4;
    if (lVar4 != 0) {
      while (lVar6 != lVar3) {
        lVar6 = *(longlong *)(lVar6 + 0x30);
        if (lVar6 == 0) {
          return;
        }
      }
      if (lVar4 == 0) {
        return;
      }
      if (lVar9 == 0) {
        return;
      }
      plStack_30 = &local_res8;
      local_res8 = lVar9;
      local_38 = param_2;
      lVar4 = FUN_140998bf0(param_1 + 1,&local_38);
      if (lVar4 == 0) {
        iVar2 = (int)param_1[2];
        *(int *)(param_1 + 2) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0x14) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_1 + 1,iVar2);
        }
        plVar7 = (longlong *)(param_1[1] + (longlong)iVar2 * 0x20);
        *plVar7 = *param_2;
        plVar7[1] = lVar9;
        plVar7[2] = 0;
        plVar7[3] = 0;
        lVar4 = param_1[1] + (longlong)iVar2 * 0x20;
        if (lVar4 == 0) {
          return;
        }
      }
      plVar5 = *(longlong **)(lVar4 + 0x10);
      plVar7 = (longlong *)(lVar4 + 0x10);
      iVar2 = *(int *)(lVar4 + 0x18);
      local_38 = param_5;
      lVar9 = (longlong)iVar2 * 0x18;
      plVar1 = plVar5 + (longlong)iVar2 * 3;
      for (; (plVar8 = (longlong *)0x0, plVar5 != plVar1 &&
             (plVar8 = plVar5, (longlong *)*plVar5 != param_5)); plVar5 = plVar5 + 3) {
      }
      if (plVar8 == (longlong *)0x0) {
        *(int *)(lVar4 + 0x18) = iVar2 + 1;
        if (*(int *)(lVar4 + 0x1c) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar7,iVar2);
        }
        lVar4 = *plVar7;
        *(longlong **)(lVar9 + lVar4) = param_5;
        *(undefined8 *)(lVar9 + 8 + lVar4) = 0;
        *(undefined8 *)(lVar9 + 0x10 + lVar4) = 0;
        plVar8 = (longlong *)(*plVar7 + lVar9);
        if (plVar8 == (longlong *)0x0) {
          return;
        }
      }
      plVar5 = (longlong *)plVar8[1];
      plVar7 = plVar8 + 1;
      iVar2 = (int)plVar8[2];
      lVar9 = (longlong)iVar2 * 0x10;
      plVar1 = plVar5 + (longlong)iVar2 * 2;
      for (; plVar5 != plVar1; plVar5 = plVar5 + 2) {
        if (*plVar5 == param_3) goto LAB_14099e018;
      }
      *(int *)(plVar8 + 2) = iVar2 + 1;
      if (*(int *)((longlong)plVar8 + 0x14) < iVar2 + 1) {
        local_res8 = param_3;
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7);
        param_3 = local_res8;
      }
      lVar4 = *plVar7;
      *(longlong *)(lVar9 + lVar4) = param_3;
      *(undefined8 *)(lVar9 + 8 + lVar4) = 0;
      plVar5 = (longlong *)(*plVar7 + lVar9);
LAB_14099e018:
      if (plVar5 != (longlong *)0x0) {
        plVar5[1] = param_4;
      }
    }
  }
  return;
}



// FUNCTION 14099e040 FUN_14099e040 body=4156 status=ok
// SIG undefined FUN_14099e040(void)

void FUN_14099e040(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  longlong *plVar22;
  longlong *plVar23;
  int iVar24;
  undefined4 *puVar25;
  longlong *plVar26;
  undefined1 uVar27;
  int iVar28;
  ulonglong uVar29;
  longlong local_res8;
  longlong local_res10;
  undefined1 local_res18;
  longlong *local_res20;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  uint local_d0;
  int local_cc;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  uVar27 = *(undefined1 *)(param_1 + 0x650);
  *(undefined1 *)(param_1 + 0x650) = 1;
  lVar8 = *(longlong *)(param_1 + 0x118);
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = uVar27;
  if (lVar8 == 0) {
LAB_14099e0c1:
    local_e8 = 0;
  }
  else {
    lVar7 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14099e0c1;
    local_e8 = *(ulonglong *)(lVar8 + 0x2c70);
  }
  lVar8 = param_1;
  if (local_e8 != 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar7 = *(longlong *)(DAT_146b33f38 + 0x58);
    if (lVar7 != 0) {
      plVar23 = *(longlong **)(lVar7 + 0x1098);
      plVar17 = plVar23 + *(int *)(lVar7 + 0x10a0);
      local_res20 = plVar17;
      if (plVar23 != plVar17) {
        do {
          plVar26 = (longlong *)*plVar23;
          lVar8 = param_1;
          if (((plVar26 != (longlong *)0x0) && (0 < (int)plVar26[0x69])) &&
             (cVar6 = (**(code **)(*plVar26 + 0x280))(plVar26), plVar17 = local_res20, cVar6 == '\0'
             )) {
            puVar3 = (undefined4 *)plVar26[0x68];
            lVar7 = plVar26[0x69];
            if (puVar3 != puVar3 + (longlong)(int)lVar7 * 10) {
              plVar26 = (longlong *)(param_1 + 0x640);
              local_f0 = 0;
              puVar25 = puVar3 + 1;
              do {
                local_88 = 0;
                local_a0 = CONCAT44(*puVar25,puVar25[-1]);
                local_98[0] = puVar25[1];
                local_c8 = *(undefined8 *)(puVar25 + 3);
                local_80 = 0;
                local_90 = 0;
                FString::FString(&local_c0,puVar25 + 5);
                FSoftObjectPath::operator=(&local_90,&local_c8);
                lVar8 = FUN_1405ec200(&local_a0);
                if (lVar8 == 0) {
LAB_14099e22e:
                  lVar8 = 0;
                }
                else {
                  lVar9 = FUN_14144e630();
                  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  if (!bVar5) goto LAB_14099e22e;
                }
                plVar17 = (longlong *)*plVar26;
                iVar24 = *(int *)(param_1 + 0x648);
                for (plVar10 = plVar17; plVar10 != plVar17 + iVar24; plVar10 = plVar10 + 1) {
                  if (*plVar10 == lVar8) {
                    if ((int)((longlong)plVar10 - (longlong)plVar17 >> 3) != -1) goto LAB_14099e282;
                    break;
                  }
                }
                *(int *)(param_1 + 0x648) = iVar24 + 1;
                if (*(int *)(param_1 + 0x64c) < iVar24 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar26,iVar24);
                }
                *(longlong *)(*plVar26 + (longlong)iVar24 * 8) = lVar8;
LAB_14099e282:
                if (local_88 != 0) {
                  FMemory::Free();
                }
                puVar1 = puVar25 + 9;
                plVar17 = local_res20;
                puVar25 = puVar25 + 10;
                lVar8 = local_res8;
              } while (puVar1 != puVar3 + (longlong)(int)lVar7 * 10);
            }
          }
          plVar23 = plVar23 + 1;
          param_2 = local_res10;
          param_1 = lVar8;
          uVar27 = local_res18;
        } while (plVar23 != plVar17);
      }
    }
  }
  FUN_1409b7930(lVar8,0);
  if (param_2 == 0) {
    *(undefined1 *)(lVar8 + 0x650) = uVar27;
    return;
  }
  lVar7 = *(longlong *)(param_2 + 0x100);
  iVar24 = 0;
  iVar28 = 0;
  local_e8 = local_e8 & 0xffffffff00000000;
  local_f0 = (longlong)*(int *)(param_2 + 0x108) * 0x38 + lVar7;
  local_d8 = (longlong *)0x0;
  local_res20 = (longlong *)((ulonglong)local_res20 & 0xffffffff00000000);
  local_cc = 0;
  if (lVar7 != local_f0) {
LAB_14099e314:
    lVar9 = FUN_140d3b240(lVar7);
    if (lVar9 == 0) {
LAB_14099e35b:
      lVar11 = 0;
    }
    else {
      lVar11 = FUN_14144ecc0();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      lVar11 = lVar9;
      if (!bVar5) goto LAB_14099e35b;
    }
    plVar17 = *(longlong **)(lVar8 + 0x640);
    bVar5 = false;
    plVar23 = plVar17 + *(int *)(lVar8 + 0x648);
    if (plVar17 != plVar23) {
      do {
        lVar8 = *plVar17;
        if (lVar8 != 0) {
          plVar10 = *(longlong **)(lVar8 + 0xa8);
          plVar26 = plVar10 + *(int *)(lVar8 + 0xb0);
          for (; plVar10 != plVar26; plVar10 = plVar10 + 1) {
            lVar13 = *plVar10;
            if (lVar13 != 0) {
              plVar22 = *(longlong **)(lVar13 + 0x38);
              plVar2 = plVar22 + *(int *)(lVar13 + 0x40);
              for (; plVar22 != plVar2; plVar22 = plVar22 + 1) {
                if (lVar9 == *plVar22) goto LAB_14099e537;
              }
              plVar22 = *(longlong **)(lVar13 + 0x48);
              plVar2 = plVar22 + *(int *)(lVar13 + 0x50);
              for (; plVar22 != plVar2; plVar22 = plVar22 + 1) {
                if (lVar9 == *plVar22) goto LAB_14099e537;
              }
            }
          }
        }
        if (lVar11 != 0) {
          if (*(longlong *)(lVar11 + 0x88) != 0) {
            lVar12 = FUN_14144bcb0();
            lVar13 = *(longlong *)(lVar11 + 0x88);
            for (lVar14 = lVar13; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x30)) {
              if (lVar14 == lVar12) goto LAB_14099e431;
            }
          }
          lVar13 = 0;
LAB_14099e431:
          cVar6 = FUN_1409ae1d0(lVar8,lVar13);
          if (cVar6 != '\0') {
            uVar29 = (ulonglong)(int)local_res20;
            plVar23 = local_d8;
            goto joined_r0x00014099e5bf;
          }
        }
        plVar17 = plVar17 + 1;
      } while (plVar17 != plVar23);
      iVar24 = (int)local_e8;
    }
    iVar28 = (int)local_res20;
    goto LAB_14099e456;
  }
LAB_14099e497:
  lVar8 = *(longlong *)(param_2 + 0x110);
  lVar7 = (longlong)*(int *)(param_2 + 0x118) * 0x50 + lVar8;
  plVar23 = local_d8;
  if (lVar8 != lVar7) {
    plVar17 = local_d8 + iVar28;
    lVar8 = lVar8 + 0x38;
    do {
      FUN_140d3a450(lVar8 + -0x38,&local_f0);
      plVar26 = plVar23;
      for (; plVar26 != plVar17; plVar26 = plVar26 + 1) {
        lVar9 = *plVar26;
        if (lVar9 != 0) {
          lVar11 = FUN_14144ecc0();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            if (*(longlong *)(lVar9 + 0x88) != 0) {
              lVar13 = FUN_14144bcb0();
              lVar9 = *(longlong *)(lVar9 + 0x88);
              for (lVar11 = lVar9; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)) {
                if (lVar11 == lVar13) goto LAB_14099e618;
              }
            }
            lVar9 = 0;
LAB_14099e618:
            lVar11 = 0;
            if (local_f0 != 0) {
              lVar14 = FUN_14144bcb0();
              for (lVar13 = local_f0;
                  (lVar11 = 0, lVar13 != 0 && (lVar11 = local_f0, lVar13 != lVar14));
                  lVar13 = *(longlong *)(lVar13 + 0x30)) {
              }
            }
            if (lVar9 == lVar11) {
              local_108 = 0;
              local_100 = 0;
              local_f8 = 0;
              local_b0 = 0;
              local_a8 = 0;
              FUN_1417978e0(&local_108,&local_b0);
              local_c8 = local_108;
              *(undefined4 *)(lVar8 + -0x38) = 0xffffffff;
              *(undefined4 *)(lVar8 + -0x34) = 0;
              FString::FString(&local_c0,&local_100);
              FSoftObjectPath::operator=(lVar8 + -0x28,&local_c8);
              *(undefined4 *)(lVar8 + -0x30) = 0;
              if (local_100 != 0) {
                FMemory::Free();
              }
              local_108 = 0;
              local_100 = 0;
              local_f8 = 0;
              local_e8 = 0;
              local_e0 = 0;
              FUN_1417978e0(&local_108,&local_e8);
              local_c8 = local_108;
              *(undefined4 *)(lVar8 + -0x10) = 0xffffffff;
              *(undefined4 *)(lVar8 + -0xc) = 0;
              FString::FString(&local_c0,&local_100);
              FSoftObjectPath::operator=(lVar8,&local_c8);
              *(undefined4 *)(lVar8 + -8) = 0;
              if (local_100 != 0) {
                FMemory::Free();
              }
            }
          }
        }
        plVar23 = local_d8;
      }
      lVar9 = lVar8 + 0x18;
      lVar8 = lVar8 + 0x50;
    } while (lVar9 != lVar7);
  }
  lVar8 = *(longlong *)(local_res10 + 0x120);
  local_f0 = (longlong)*(int *)(local_res10 + 0x128) * 0x78 + lVar8;
  if (lVar8 != local_f0) {
    plVar17 = plVar23 + (int)local_res20;
    lVar8 = lVar8 + 0x38;
    do {
      FUN_140d3a4e0(lVar8 + -0x38,&local_e8);
      lVar7 = FUN_140d3a610(lVar8 + -0x38);
      plVar26 = plVar23;
      for (; plVar26 != plVar17; plVar26 = plVar26 + 1) {
        lVar9 = *plVar26;
        if (lVar9 == 0) {
LAB_14099e801:
          lVar11 = 0;
        }
        else {
          lVar11 = FUN_14144ecc0();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          lVar11 = lVar9;
          if (!bVar5) goto LAB_14099e801;
        }
        if (lVar9 == 0) {
LAB_14099e83e:
          lVar9 = 0;
        }
        else {
          lVar13 = FUN_14144ee20();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) goto LAB_14099e83e;
        }
        if (lVar11 == 0) {
LAB_14099e8a9:
          if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x88) == lVar7)) goto LAB_14099e8bf;
        }
        else {
          if (*(longlong *)(lVar11 + 0x88) != 0) {
            uVar15 = FUN_14144bcb0();
            uVar29 = *(ulonglong *)(lVar11 + 0x88);
            for (uVar4 = uVar29; uVar4 != 0; uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
              if (uVar4 == uVar15) goto LAB_14099e873;
            }
          }
          uVar29 = 0;
LAB_14099e873:
          if (local_e8 != 0) {
            uVar15 = UUGLoadoutBarUW::GetPrivateStaticClass();
            for (uVar4 = local_e8; uVar4 != 0; uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
              uVar16 = local_e8;
              if (uVar4 == uVar15) goto LAB_14099e8a4;
            }
          }
          uVar16 = 0;
LAB_14099e8a4:
          if (uVar29 != uVar16) goto LAB_14099e8a9;
LAB_14099e8bf:
          local_108 = 0;
          local_100 = 0;
          local_f8 = 0;
          local_b0 = 0;
          local_a8 = 0;
          FUN_1417978e0(&local_108,&local_b0);
          local_c8 = local_108;
          *(undefined4 *)(lVar8 + -0x38) = 0xffffffff;
          *(undefined4 *)(lVar8 + -0x34) = 0;
          FString::FString(&local_c0,&local_100);
          FSoftObjectPath::operator=(lVar8 + -0x28,&local_c8);
          *(undefined4 *)(lVar8 + -0x30) = 0;
          if (local_100 != 0) {
            FMemory::Free();
          }
          local_108 = 0;
          local_100 = 0;
          local_f8 = 0;
          local_78 = 0;
          local_70 = 0;
          FUN_1417978e0(&local_108,&local_78);
          local_c8 = local_108;
          *(undefined4 *)(lVar8 + -0x10) = 0xffffffff;
          *(undefined4 *)(lVar8 + -0xc) = 0;
          FString::FString(&local_c0,&local_100);
          FSoftObjectPath::operator=(lVar8,&local_c8);
          *(undefined4 *)(lVar8 + -8) = 0;
          if (local_100 != 0) {
            FMemory::Free();
          }
          local_108 = 0;
          local_100 = 0;
          local_f8 = 0;
          local_68 = 0;
          local_60 = 0;
          FUN_1417978e0(&local_108,&local_68);
          local_c8 = local_108;
          *(undefined4 *)(lVar8 + 0x18) = 0xffffffff;
          *(undefined4 *)(lVar8 + 0x1c) = 0;
          FString::FString(&local_c0,&local_100);
          FSoftObjectPath::operator=(lVar8 + 0x28,&local_c8);
          *(undefined4 *)(lVar8 + 0x20) = 0;
          if (local_100 != 0) {
            FMemory::Free();
          }
        }
        plVar23 = local_d8;
      }
      lVar7 = lVar8 + 0x40;
      lVar8 = lVar8 + 0x78;
    } while (lVar7 != local_f0);
  }
  lVar8 = *(longlong *)(local_res10 + 0x130);
  local_f0 = (longlong)*(int *)(local_res10 + 0x138) * 0xa0 + lVar8;
  if (lVar8 != local_f0) {
    plVar23 = plVar23 + (int)local_res20;
    lVar8 = lVar8 + 0x60;
    local_res20 = plVar23;
    do {
      plVar17 = (longlong *)FUN_140d3a4e0(lVar8 + -0x60,&local_e8);
      if (*plVar17 != 0) {
        lVar11 = UUGLoadoutBarUW::GetPrivateStaticClass();
        lVar7 = *plVar17;
        for (lVar9 = lVar7; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
          if (lVar9 == lVar11) goto LAB_14099ea98;
        }
      }
      lVar7 = 0;
LAB_14099ea98:
      lVar9 = FUN_140d3a690(lVar8 + -0x60);
      plVar17 = local_d8;
      if (local_d8 != plVar23) {
        do {
          lVar11 = *plVar17;
          if (lVar11 == 0) {
LAB_14099eaff:
            lVar13 = 0;
          }
          else {
            lVar13 = FUN_14144ecc0();
            if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            lVar13 = lVar11;
            if (!bVar5) goto LAB_14099eaff;
          }
          if (lVar11 == 0) {
LAB_14099eb3c:
            lVar11 = 0;
          }
          else {
            lVar14 = FUN_14144ee20();
            if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (!bVar5) goto LAB_14099eb3c;
          }
          if (lVar13 == 0) {
LAB_14099eb99:
            if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0x88) == lVar9)) goto LAB_14099ebaf;
          }
          else {
            if (*(longlong *)(lVar13 + 0x88) != 0) {
              lVar12 = FUN_14144bcb0();
              lVar13 = *(longlong *)(lVar13 + 0x88);
              for (lVar14 = lVar13; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x30)) {
                if (lVar14 == lVar12) goto LAB_14099eb71;
              }
            }
            lVar13 = 0;
LAB_14099eb71:
            if (lVar7 != 0) {
              lVar12 = FUN_14144bcb0();
              lVar14 = lVar7;
              do {
                lVar18 = lVar7;
                if (lVar14 == lVar12) goto LAB_14099eb94;
                lVar14 = *(longlong *)(lVar14 + 0x30);
              } while (lVar14 != 0);
            }
            lVar18 = 0;
LAB_14099eb94:
            if (lVar13 != lVar18) goto LAB_14099eb99;
LAB_14099ebaf:
            local_c8 = 0;
            local_c0 = 0;
            local_b8 = 0;
            local_68 = 0;
            local_60 = 0;
            FUN_1417978e0(&local_c8,&local_68);
            local_a0 = local_c8;
            *(undefined4 *)(lVar8 + -0x60) = 0xffffffff;
            *(undefined4 *)(lVar8 + -0x5c) = 0;
            FString::FString(local_98,&local_c0);
            FSoftObjectPath::operator=(lVar8 + -0x50,&local_a0);
            *(undefined4 *)(lVar8 + -0x58) = 0;
            if (local_c0 != 0) {
              FMemory::Free();
            }
            local_78 = 0;
            local_70 = 0;
            puVar19 = (undefined8 *)FSoftObjectPath::FSoftObjectPath(&local_c8,&local_78);
            *(undefined4 *)(lVar8 + -0x10) = 0xffffffff;
            *(undefined4 *)(lVar8 + -0xc) = 0;
            local_a0 = *puVar19;
            FString::FString(local_98,puVar19 + 1);
            FSoftObjectPath::operator=(lVar8,&local_a0);
            *(undefined4 *)(lVar8 + -8) = 0;
            if (puVar19[1] != 0) {
              FMemory::Free();
            }
            local_58 = 0;
            local_50 = 0;
            puVar19 = (undefined8 *)FSoftObjectPath::FSoftObjectPath(&local_c8,&local_58);
            *(undefined4 *)(lVar8 + 0x18) = 0xffffffff;
            *(undefined4 *)(lVar8 + 0x1c) = 0;
            local_a0 = *puVar19;
            FString::FString(local_98,puVar19 + 1);
            FSoftObjectPath::operator=(lVar8 + 0x28,&local_a0);
            *(undefined4 *)(lVar8 + 0x20) = 0;
            if (puVar19[1] != 0) {
              FMemory::Free();
            }
            local_b0 = 0;
            local_a8 = 0;
            uVar20 = FString::FString(&local_108,&local_b0);
            puVar19 = (undefined8 *)FSoftObjectPath::FSoftObjectPath(&local_c8,uVar20);
            *(undefined4 *)(lVar8 + -0x38) = 0xffffffff;
            *(undefined4 *)(lVar8 + -0x34) = 0;
            local_a0 = *puVar19;
            FString::FString(local_98,puVar19 + 1);
            FSoftObjectPath::operator=(lVar8 + -0x28,&local_a0);
            *(undefined4 *)(lVar8 + -0x30) = 0;
            if (puVar19[1] != 0) {
              FMemory::Free();
            }
            if (local_b0 != 0) {
              FMemory::Free();
            }
          }
          plVar17 = plVar17 + 1;
          plVar23 = local_res20;
        } while (plVar17 != local_res20);
      }
      lVar7 = lVar8 + 0x40;
      lVar8 = lVar8 + 0xa0;
    } while (lVar7 != local_f0);
  }
  lVar7 = local_res10;
  lVar9 = local_res8;
  TArray<FGGamepadButtonLayout,FDefaultAllocator>::Empty(local_res8 + 0x630,0);
  lVar8 = *(longlong *)(lVar7 + 0x130);
  lVar11 = (longlong)*(int *)(lVar7 + 0x138) * 0xa0 + lVar8;
  for (; lVar8 != lVar11; lVar8 = lVar8 + 0xa0) {
    FUN_140d3a4e0(lVar8,&local_res8);
    lVar7 = FUN_140d3a690(lVar8);
    lVar13 = FUN_140d3b640(lVar8);
    uVar20 = FUN_140d3b5e0(lVar8);
    if (local_res8 != 0) {
      lVar12 = UUGLoadoutBarUW::GetPrivateStaticClass();
      for (lVar14 = local_res8; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x30)) {
        if (lVar14 == lVar12) {
          if ((lVar7 != 0) && (lVar13 != 0)) {
            FUN_14099de30(lVar9 + 0x628,&local_res8,lVar13,uVar20,lVar7);
          }
          break;
        }
      }
    }
    lVar7 = local_res10;
  }
  lVar8 = *(longlong *)(lVar9 + 0x3b0);
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x17c) = *(undefined4 *)(lVar7 + 0xf8);
    *(undefined4 *)(lVar8 + 0x160) = *(undefined4 *)(lVar7 + 0xfc);
    lVar11 = *(longlong *)(lVar7 + 0x100);
    lVar13 = (longlong)*(int *)(lVar7 + 0x108) * 0x38 + lVar11;
    for (; lVar11 != lVar13; lVar11 = lVar11 + 0x38) {
      local_res8 = FUN_140d3b240(lVar11);
      plVar23 = *(longlong **)(lVar8 + 0xb0);
      plVar17 = plVar23 + (longlong)*(int *)(lVar8 + 0xb8) * 6;
      for (; plVar23 != plVar17; plVar23 = plVar23 + 6) {
        if ((local_res8 == 0) || (plVar23[1] != local_res8)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          if (plVar23 != (longlong *)0x0) {
            iVar24 = *(int *)(lVar11 + 0x28);
            lVar7 = plVar23[5];
            if ((int)lVar7 != iVar24) {
              lVar14 = *plVar23;
              *(int *)(plVar23 + 5) = iVar24;
              if ((lVar14 != 0) && ((int)lVar7 != iVar24)) {
                FUN_1409b5dc0(lVar14,plVar23);
                local_res8 = plVar23[1];
                TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                          (lVar14 + 0x38,&local_res8);
              }
            }
          }
          break;
        }
      }
      lVar7 = local_res10;
    }
    FUN_1409be440(lVar8);
  }
  iVar24 = FUN_14233f450(lVar9);
  lVar8 = local_res10;
  if (iVar24 == 3) {
    lVar7 = *(longlong *)(lVar7 + 0x110);
    lVar11 = (longlong)*(int *)(local_res10 + 0x118) * 0x50 + lVar7;
    for (; lVar7 != lVar11; lVar7 = lVar7 + 0x50) {
      local_res10 = FUN_140d3bb40(lVar7);
      if (local_res10 != 0) {
        lVar13 = *(longlong *)(lVar9 + 0x478);
        lVar14 = (longlong)*(int *)(lVar9 + 0x480) * 0x20 + lVar13;
        for (; lVar13 != lVar14; lVar13 = lVar13 + 0x20) {
          if (*(longlong *)(lVar13 + 0x10) == local_res10) goto LAB_14099ef91;
        }
        lVar13 = 0;
LAB_14099ef91:
        if (lVar13 != 0) {
          uVar20 = FUN_140d3a450(lVar7,&local_res8);
          FUN_1409ba780(lVar13,lVar9 + 0x3c0,uVar20);
        }
      }
    }
    lVar7 = *(longlong *)(lVar8 + 0x120);
    lVar8 = (longlong)*(int *)(lVar8 + 0x128) * 0x78 + lVar7;
    for (; lVar7 != lVar8; lVar7 = lVar7 + 0x78) {
      uVar20 = FUN_140d3ba80(lVar7);
      uVar21 = FUN_140d3a4e0(lVar7,&local_res10);
      lVar11 = FUN_1409ab2f0(lVar9 + 0x488,uVar21,uVar20);
      if (lVar11 != 0) {
        uVar20 = FUN_140d3a610(lVar7);
        FUN_1409ba950(lVar11,lVar9 + 0x488,uVar20);
      }
    }
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  *(undefined1 *)(lVar9 + 0x650) = local_res18;
  return;
LAB_14099e537:
  uVar29 = (ulonglong)(int)local_res20;
  for (plVar23 = local_d8; plVar23 != local_d8 + uVar29; plVar23 = plVar23 + 1) {
    if (*plVar23 == lVar9) goto LAB_14099e560;
  }
LAB_14099e56c:
  local_d0 = (int)uVar29 + 1;
  local_res20 = (longlong *)CONCAT44(local_res20._4_4_,local_d0);
  if (local_cc < (int)local_d0) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8);
    local_res20 = (longlong *)CONCAT44(local_res20._4_4_,local_d0);
  }
  local_d8[uVar29] = lVar9;
  uVar29 = (ulonglong)local_d0;
LAB_14099e5a0:
  iVar28 = (int)uVar29;
  bVar5 = true;
  iVar24 = (int)local_e8;
LAB_14099e456:
  if ((lVar9 != 0) && (bVar5)) {
    iVar24 = iVar24 + *(int *)(lVar7 + 0x28);
    local_e8 = CONCAT44(local_e8._4_4_,iVar24);
    *(undefined4 *)(lVar7 + 0x28) = 0;
  }
  lVar7 = lVar7 + 0x38;
  lVar8 = local_res8;
  if (lVar7 == local_f0) goto code_r0x00014099e483;
  goto LAB_14099e314;
joined_r0x00014099e5bf:
  if (plVar23 == local_d8 + uVar29) goto LAB_14099e56c;
  if (*plVar23 == lVar9) goto LAB_14099e560;
  plVar23 = plVar23 + 1;
  goto joined_r0x00014099e5bf;
LAB_14099e560:
  if ((int)((longlong)plVar23 - (longlong)local_d8 >> 3) != -1) goto LAB_14099e5a0;
  goto LAB_14099e56c;
code_r0x00014099e483:
  param_2 = local_res10;
  if (0 < iVar24) {
    *(int *)(local_res10 + 0xfc) = *(int *)(local_res10 + 0xfc) + iVar24;
  }
  goto LAB_14099e497;
}



// FUNCTION 14099f080 FUN_14099f080 body=1595 status=ok
// SIG undefined FUN_14099f080(void)

void FUN_14099f080(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  wchar_t *pwVar15;
  int *piVar16;
  undefined8 local_res10;
  longlong local_res18 [2];
  int local_48;
  int local_44;
  longlong local_40;
  
  iVar6 = FUN_1430ec7c0();
  if (iVar6 == 3) {
    plVar7 = (longlong *)FUN_1430ec7a0(param_1);
    pwVar15 = (wchar_t *)0x0;
    if (plVar7 != (longlong *)0x0) {
      uVar8 = FUN_142e1a5a0();
      lVar9 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar8);
      if (lVar9 != 0) {
        if ((param_1[0x2b] != 0) && (*(longlong *)(param_1[0x2b] + 0x30) != 0)) {
          lVar10 = FUN_142d62010(lVar9);
          pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnDurationResourceDepleted",L"::");
          pwVar4 = pwVar15;
          while (pwVar3 = pwVar11, pwVar3 != (wchar_t *)0x0) {
            pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
            pwVar4 = pwVar3;
          }
          FName::FName(&local_res10,pwVar4 + 2,1);
          FUN_14074ba20(lVar10 + 8,param_1,&LAB_14099be6c,local_res10);
        }
        if ((param_1[0x2a] != 0) && (*(longlong *)(param_1[0x2a] + 0x30) != 0)) {
          lVar9 = FUN_142d62010(lVar9);
          pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCooldownResourceFilled",L"::");
          pwVar4 = pwVar15;
          while (pwVar3 = pwVar11, pwVar3 != (wchar_t *)0x0) {
            pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
            pwVar4 = pwVar3;
          }
          FName::FName(&local_res10,pwVar4 + 2,1);
          FUN_14074ba20(lVar9 + 0x28,param_1,&LAB_14099be78,local_res10);
        }
      }
    }
    lVar9 = FUN_1430ec7a0(param_1);
    if (lVar9 != 0) {
      lVar10 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar10 = *(longlong *)(lVar9 + 0x490);
        if (lVar10 != 0) {
          lVar12 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            pwVar11 = _guard_xfg_dispatch_icall_nop
                                (L"&UOakActionAbility::OnOwnerCinematicModeChanged",L"::");
            pwVar4 = pwVar15;
            while (pwVar3 = pwVar11, pwVar3 != (wchar_t *)0x0) {
              pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
              pwVar4 = pwVar3;
            }
            FName::FName(local_res18,pwVar4 + 2,1);
            plVar7 = (longlong *)(lVar10 + 0xba8);
            FWeakObjectPtr::operator=(&local_48,0);
            local_40 = 0;
            FWeakObjectPtr::operator=(&local_48,param_1);
            local_40 = local_res18[0];
            local_res10 = 0;
            if ((local_res18[0] != 0) && (lVar12 = FWeakObjectPtr::Get(&local_48), lVar12 != 0)) {
              UObject::FindFunction(lVar12,local_40);
            }
            piVar1 = (int *)*plVar7;
            iVar6 = *(int *)(lVar10 + 0xbb0);
            for (piVar16 = piVar1; piVar16 != piVar1 + (longlong)iVar6 * 4; piVar16 = piVar16 + 4) {
              if (((*piVar16 == local_48) && (piVar16[1] == local_44)) ||
                 ((cVar5 = FWeakObjectPtr::IsValid(piVar16), cVar5 == '\0' &&
                  (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if ((bVar2) && (*(longlong *)(piVar16 + 2) == local_40)) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if (bVar2) {
                if ((int)((longlong)piVar16 - (longlong)piVar1 >> 4) != -1) goto LAB_14099f3d9;
                break;
              }
            }
            iVar6 = *(int *)(lVar10 + 0xbb0);
            lVar12 = (longlong)iVar6;
            *(int *)(lVar10 + 0xbb0) = iVar6 + 1;
            if (*(int *)(lVar10 + 0xbb4) < iVar6 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar6);
            }
            lVar10 = *plVar7;
            *(int *)(lVar10 + lVar12 * 0x10) = local_48;
            *(int *)(lVar10 + 4 + lVar12 * 0x10) = local_44;
            *(longlong *)(lVar10 + 8 + lVar12 * 0x10) = local_40;
LAB_14099f3d9:
            TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar7);
          }
        }
        if (*(longlong *)(lVar9 + 0x10e0) != 0) {
          if (*(char *)((longlong)param_1 + 0x1b9) == '\0') {
            pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerDeadOrDying",L"::");
            pwVar4 = pwVar15;
            while (pwVar3 = pwVar11, pwVar3 != (wchar_t *)0x0) {
              pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
              pwVar4 = pwVar3;
            }
            FName::FName(&local_res10,pwVar4 + 2,1);
            lVar9 = lVar9 + 0xf18;
          }
          else {
            pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerDeadOrDying",L"::");
            pwVar4 = pwVar15;
            while (pwVar3 = pwVar11, pwVar3 != (wchar_t *)0x0) {
              pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
              pwVar4 = pwVar3;
            }
            FName::FName(&local_res10,pwVar4 + 2,1);
            lVar9 = *(longlong *)(lVar9 + 0x10e0) + 0x1140;
          }
          FUN_14074ba20(lVar9,param_1,FUN_1409b1370,local_res10);
        }
      }
    }
    plVar7 = (longlong *)FUN_142f40c20();
    if ((((int)plVar7[1] == 0) || ((longlong *)*plVar7 == (longlong *)0x0)) ||
       (cVar5 = (**(code **)(*(longlong *)*plVar7 + 0x18))(), cVar5 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      puVar13 = (undefined8 *)FUN_142f40c20();
      if (*(int *)(puVar13 + 1) != 0) {
        pwVar15 = (wchar_t *)*puVar13;
      }
      lVar9 = (**(code **)(*(longlong *)pwVar15 + 0x38))();
      if (lVar9 != 0) {
        plVar7 = (longlong *)(lVar9 + 0x500);
        plVar14 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar14 != (longlong *)0x0) {
          *plVar14 = (longlong)&PTR_FUN_143f4d290;
          FWeakObjectPtr::operator=(plVar14 + 1,param_1);
          plVar14[2] = (longlong)FUN_1409b1090;
          lVar10 = FDelegateHandle::GenerateNewID();
          plVar14[4] = lVar10;
          *plVar14 = (longlong)&PTR_FUN_143f4d2d8;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
          (**(code **)(*plVar14 + 0x20))(plVar14,&local_res10);
          iVar6 = *(int *)(lVar9 + 0x508);
          *(int *)(lVar9 + 0x508) = iVar6 + 1;
          if (*(int *)(lVar9 + 0x50c) < iVar6 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar6);
          }
          lVar9 = *plVar7;
          *(longlong **)(lVar9 + (longlong)iVar6 * 0x10) = plVar14;
          *(undefined4 *)(lVar9 + 8 + (longlong)iVar6 * 0x10) = 3;
        }
      }
    }
    if ((((*(byte *)(param_1 + 0x24) & 2) != 0) &&
        (lVar9 = (**(code **)(*param_1 + 0x148))(param_1), lVar9 != 0)) &&
       (lVar9 = *(longlong *)(lVar9 + 400), lVar9 != 0)) {
      lVar10 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        plVar14 = (longlong *)(lVar9 + 0xa80);
        plVar7 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = (longlong)&PTR_FUN_143f4d170;
          FWeakObjectPtr::operator=(plVar7 + 1,param_1);
          plVar7[2] = (longlong)FUN_1409b1370;
          lVar10 = FDelegateHandle::GenerateNewID();
          plVar7[4] = lVar10;
          *plVar7 = (longlong)&PTR_FUN_143f4d1b8;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar14,1);
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_res10);
          iVar6 = *(int *)(lVar9 + 0xa88);
          *(int *)(lVar9 + 0xa88) = iVar6 + 1;
          if (*(int *)(lVar9 + 0xa8c) < iVar6 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar6);
          }
          puVar13 = (undefined8 *)((longlong)iVar6 * 0x10 + *plVar14);
          *puVar13 = plVar7;
          *(undefined4 *)(puVar13 + 1) = 3;
        }
      }
    }
  }
  return;
}



// FUNCTION 14099f6c0 FUN_14099f6c0 body=535 status=ok
// SIG undefined FUN_14099f6c0(void)

void FUN_14099f6c0(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  undefined8 local_res10;
  longlong local_res18 [2];
  int local_28;
  int local_24;
  longlong local_20;
  
  FUN_14099f080();
  iVar4 = FUN_1430ec7c0(param_1);
  if (iVar4 == 3) {
    if ((*(longlong *)(param_1 + 0x110) != 0) &&
       (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0x910), lVar7 != 0)) {
      FUN_140998460(lVar7 + 0x1e8,&local_res10,param_1,FUN_1409b3f70);
    }
    plVar5 = (longlong *)FUN_1430ec7a0(param_1);
    if (plVar5 != (longlong *)0x0) {
      uVar6 = FUN_142e1a5a0();
      lVar7 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
      if (((lVar7 != 0) && (*(longlong *)(param_1 + 600) != 0)) &&
         (*(longlong *)(*(longlong *)(param_1 + 600) + 0x30) != 0)) {
        lVar7 = FUN_142d62010(lVar7);
        pwVar8 = _guard_xfg_dispatch_icall_nop
                           (L"&ThisClass::OnDigicloneRespawnCooldownFilled",L"::");
        pwVar2 = (wchar_t *)0x0;
        while (pwVar1 = pwVar8, pwVar1 != (wchar_t *)0x0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar2 = pwVar1;
        }
        FName::FName(local_res18,pwVar2 + 2,1);
        FWeakObjectPtr::operator=(&local_28,0);
        local_20 = 0;
        FWeakObjectPtr::operator=(&local_28,param_1);
        local_20 = local_res18[0];
        local_res10 = 0;
        if ((local_res18[0] != 0) && (lVar9 = FWeakObjectPtr::Get(&local_28), lVar9 != 0)) {
          UObject::FindFunction(lVar9,local_20);
        }
        piVar10 = *(int **)(lVar7 + 0x28);
        iVar4 = *(int *)(lVar7 + 0x30);
        for (piVar11 = piVar10; piVar11 != piVar10 + (longlong)iVar4 * 4; piVar11 = piVar11 + 4) {
          if ((((*piVar11 == local_28) && (piVar11[1] == local_24)) ||
              ((cVar3 = FWeakObjectPtr::IsValid(piVar11), cVar3 == '\0' &&
               (cVar3 = FWeakObjectPtr::IsValid(&local_28), cVar3 == '\0')))) &&
             (*(longlong *)(piVar11 + 2) == local_20)) {
            if ((int)((longlong)piVar11 - (longlong)piVar10 >> 4) != -1) goto LAB_14099f8b9;
            break;
          }
        }
        iVar4 = *(int *)(lVar7 + 0x30);
        *(int *)(lVar7 + 0x30) = iVar4 + 1;
        if (*(int *)(lVar7 + 0x34) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar7 + 0x28,iVar4);
        }
        piVar10 = (int *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar7 + 0x28));
        *piVar10 = local_28;
        piVar10[1] = local_24;
        *(longlong *)(piVar10 + 2) = local_20;
LAB_14099f8b9:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar7 + 0x28);
      }
    }
  }
  return;
}



// FUNCTION 14099f8e0 FUN_14099f8e0 body=1246 status=ok
// SIG undefined FUN_14099f8e0(void)

void FUN_14099f8e0(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  undefined8 local_res8;
  ulonglong local_res10;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar7 = *(longlong *)(param_1 + 0x118);
  pwVar14 = (wchar_t *)0x0;
  if (lVar7 != 0) {
    lVar5 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (iVar4 = FUN_14233f450(param_1), iVar4 == 3)) {
      uVar6 = FUN_1414aa4c0();
      lVar7 = AGameStateBase::OnRep_GameModeClass(lVar7,uVar6);
      if (lVar7 != 0) {
        lVar5 = FUN_1414aa4c0();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          pwVar8 = _guard_xfg_dispatch_icall_nop
                             (L"&UOakPlayerAbilityManagerComponent::OnPlayerLevelUp",L"::");
          pwVar9 = pwVar14;
          while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
            pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
            pwVar9 = pwVar2;
          }
          FName::FName(&local_res10,pwVar9 + 2,1);
          uVar3 = local_res10;
          plVar13 = (longlong *)(lVar7 + 0x208);
          FWeakObjectPtr::operator=(&local_48,0);
          uStack_40 = 0;
          FWeakObjectPtr::operator=(&local_48,param_1);
          uStack_40 = uVar3;
          local_res8 = 0;
          if ((uVar3 != 0) && (lVar5 = FWeakObjectPtr::Get(&local_48), lVar5 != 0)) {
            UObject::FindFunction(lVar5,uStack_40);
          }
          TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar13);
          iVar4 = *(int *)(lVar7 + 0x210);
          *(int *)(lVar7 + 0x210) = iVar4 + 1;
          if (*(int *)(lVar7 + 0x214) < iVar4 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar4);
          }
          puVar12 = (undefined4 *)((longlong)iVar4 * 0x10 + *plVar13);
          *puVar12 = (undefined4)local_48;
          puVar12[1] = local_48._4_4_;
          *(ulonglong *)(puVar12 + 2) = uStack_40;
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerAbilityTreeReset",L"::");
    pwVar9 = pwVar14;
    while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar9 = pwVar2;
    }
    FName::FName(&local_res10,pwVar9 + 2,1);
    lVar7 = *(longlong *)(param_1 + 0x3b0);
    FWeakObjectPtr::operator=(&local_48,0);
    uStack_40 = 0;
    FWeakObjectPtr::operator=(&local_48,param_1);
    uStack_40 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar5 = FWeakObjectPtr::Get(&local_48), lVar5 != 0)) {
      UObject::FindFunction(lVar5,uStack_40);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar7 + 0x68);
    iVar4 = *(int *)(lVar7 + 0x70);
    *(int *)(lVar7 + 0x70) = iVar4 + 1;
    if (*(int *)(lVar7 + 0x74) < iVar4 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar7 + 0x68,iVar4);
    }
    puVar12 = (undefined4 *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar7 + 0x68));
    *puVar12 = (undefined4)local_48;
    puVar12[1] = local_48._4_4_;
    *(ulonglong *)(puVar12 + 2) = uStack_40;
    uStack_40 = uStack_40 & 0xffffffff00000000;
    local_48 = FUN_1409b1330;
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerAbilityTreeGradeChanged",L"::");
    pwVar9 = pwVar14;
    while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar9 = pwVar2;
    }
    FName::FName(&local_res8,pwVar9 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
              (*(longlong *)(param_1 + 0x3b0) + 0x58,param_1,&local_48,local_res8);
    uStack_40 = uStack_40 & 0xffffffff00000000;
    local_48 = FUN_1409b1350;
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerAbilityTreePointsChanged",L"::");
    while (pwVar8 = pwVar9, pwVar8 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
      pwVar14 = pwVar8;
    }
    FName::FName(&local_res8,pwVar14 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
              (*(longlong *)(param_1 + 0x3b0) + 0x48,param_1,&local_48,local_res8);
  }
  uStack_40 = uStack_40 & 0xffffffff00000000;
  local_48 = FUN_1409ac0e0;
  plVar13 = (longlong *)(param_1 + 0x178);
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar10 + 1,param_1);
    *(undefined4 *)(plVar10 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar10 + 0x14) = local_48._4_4_;
    *(undefined4 *)(plVar10 + 3) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_40._4_4_;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar10[5] = lVar7;
    *plVar10 = (longlong)&PTR_FUN_143fcff08;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar13,1);
    (**(code **)(*plVar10 + 0x20))(plVar10,&local_res8);
    iVar4 = *(int *)(param_1 + 0x180);
    *(int *)(param_1 + 0x180) = iVar4 + 1;
    if (*(int *)(param_1 + 0x184) < iVar4 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar4);
    }
    puVar11 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar13);
    *puVar11 = plVar10;
    *(undefined4 *)(puVar11 + 1) = 3;
  }
  uStack_40 = uStack_40 & 0xffffffff00000000;
  local_48 = FUN_1409ac600;
  plVar13 = (longlong *)(param_1 + 400);
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar10 + 1,param_1);
    *(undefined4 *)(plVar10 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar10 + 0x14) = local_48._4_4_;
    *(undefined4 *)(plVar10 + 3) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_40._4_4_;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar10[5] = lVar7;
    *plVar10 = (longlong)&PTR_FUN_143fcff08;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar13,1);
    (**(code **)(*plVar10 + 0x20))(plVar10,&local_res8);
    iVar4 = *(int *)(param_1 + 0x198);
    *(int *)(param_1 + 0x198) = iVar4 + 1;
    if (*(int *)(param_1 + 0x19c) < iVar4 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar4);
    }
    puVar11 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar13);
    *puVar11 = plVar10;
    *(undefined4 *)(puVar11 + 1) = 3;
  }
  return;
}



// FUNCTION 14099fdc0 FUN_14099fdc0 body=106 status=ok
// SIG undefined FUN_14099fdc0(void)

void FUN_14099fdc0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  FUN_142c6c710(plVar1);
  if ((*(byte *)((longlong)plVar1 + 0x25d) & 1) == 0) {
    *(byte *)((longlong)plVar1 + 0x25d) = *(byte *)((longlong)plVar1 + 0x25d) | 1;
    (**(code **)(*plVar1 + 0x2b8))(plVar1);
  }
  if (*(char *)((longlong)plVar1 + 0x25a) != '\0') {
    uVar2 = FUN_142c6f130(param_1);
    FUN_142d8edf0(uVar2,DAT_146864b10);
  }
  FUN_1409c9270(param_1);
  return;
}



// FUNCTION 14099fe30 FUN_14099fe30 body=165 status=ok
// SIG undefined FUN_14099fe30(void)

void FUN_14099fe30(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  FUN_142c6c710(plVar3);
  if ((*(byte *)((longlong)plVar3 + 0x25d) & 1) == 0) {
    *(byte *)((longlong)plVar3 + 0x25d) = *(byte *)((longlong)plVar3 + 0x25d) | 1;
    (**(code **)(*plVar3 + 0x2b8))(plVar3);
  }
  if (*(char *)((longlong)plVar3 + 0x25a) != '\0') {
    uVar2 = FUN_142c6f130(param_1);
    FUN_142d8edf0(uVar2,DAT_146864b10);
  }
  FUN_1409c9270(param_1);
  plVar3 = (longlong *)FUN_142c6f130(param_1);
  if (plVar3 != (longlong *)0x0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    uVar2 = UGFriendsPanelAllFriendsWidget::GetPrivateStaticClass();
    uVar2 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar2);
    *(undefined8 *)(lVar1 + 0x268) = uVar2;
  }
  return;
}



// FUNCTION 14099fee0 FUN_14099fee0 body=31 status=ok
// SIG undefined FUN_14099fee0(void)

void FUN_14099fee0(longlong param_1)

{
  FUN_1409ad540(*(undefined8 *)(param_1 + 0x10));
  FUN_142ce2190(param_1);
  return;
}



// FUNCTION 14099ff00 FUN_14099ff00 body=71 status=ok
// SIG undefined FUN_14099ff00(void)

void FUN_14099ff00(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  FUN_142c6c710(plVar1);
  if (*(char *)((longlong)plVar1 + 0x172) == '\0') {
    *(undefined1 *)((longlong)plVar1 + 0x172) = 1;
    (**(code **)(*plVar1 + 0x298))(plVar1);
  }
  FUN_142ce2190(param_1);
  return;
}



// FUNCTION 14099ff70 FUN_14099ff70 body=338 status=ok
// SIG undefined FUN_14099ff70(void)

void FUN_14099ff70(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong local_18 [2];
  
  FUN_140e71740();
  if (*(byte *)(param_1 + 0x25) < 3) {
    (**(code **)(*param_1 + 0x310))(param_1,1);
    lVar4 = (**(code **)(param_1[0x99] + 0xb8))(param_1 + 0x99,0);
    if (lVar4 != 0) {
      FUN_1423970c0(lVar4,0);
    }
  }
  else {
    FUN_142d2ad60(param_1[0xa1]);
  }
  uVar5 = URemnantQuestSubQuest::GetPrivateStaticClass();
  lVar4 = (**(code **)(*param_1 + 0x628))(param_1,uVar5);
  if ((lVar4 != 0) &&
     (((plVar1 = (longlong *)(lVar4 + 0x2a8), *(int *)(lVar4 + 0x2b0) == 0 ||
       ((longlong *)*plVar1 == (longlong *)0x0)) ||
      (cVar3 = (**(code **)(*(longlong *)*plVar1 + 0x18))(), cVar3 == '\0')))) {
    plVar6 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_GetPoolName_143f3f148;
      plVar6[1] = (longlong)FUN_141240f00;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[3] = lVar7;
    }
    if (local_18 != plVar1) {
      if (plVar6 == (longlong *)0x0) {
        if ((*(int *)(lVar4 + 0x2b0) != 0) &&
           (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar1 != 0) {
            lVar7 = FMemory::Realloc(*plVar1,0,0);
            *plVar1 = lVar7;
          }
          *(undefined4 *)(lVar4 + 0x2b0) = 0;
        }
      }
      else {
        (**(code **)(*plVar6 + 0x30))(plVar6,plVar1);
      }
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6,0);
      lVar4 = FMemory::Realloc(plVar6,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
  }
  return;
}



// FUNCTION 1409a00d0 FUN_1409a00d0 body=83 status=ok
// SIG undefined FUN_1409a00d0(void)

void FUN_1409a00d0(longlong param_1)

{
  FUN_141264210();
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_1409b6fe0(param_1 + 0x6e0);
    *(undefined1 *)(param_1 + 0x702) = 1;
    if (*(longlong *)(param_1 + 0x6f0) != 0) {
      FUN_1414743a0(param_1);
      FUN_142d2ad60(*(undefined8 *)(param_1 + 0x6f8));
      return;
    }
  }
  return;
}



// FUNCTION 1409a0130 FUN_1409a0130 body=316 status=ok
// SIG undefined FUN_1409a0130(void)

void FUN_1409a0130(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  
  FUN_141264210();
  if (*(char *)(param_1 + 0x128) != '\x03') {
    return;
  }
  FUN_1409b6fe0(param_1 + 0x6e0);
  *(undefined1 *)(param_1 + 0x702) = 1;
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FUN_1414743a0(param_1);
    FUN_142d2ad60(*(undefined8 *)(param_1 + 0x6f8));
  }
  if (*(char *)(param_1 + 0x128) != '\x03') {
    return;
  }
  lVar4 = (**(code **)(*(longlong *)(param_1 + 0x6e0) + 0x10))();
  if (lVar4 != 0) {
    lVar5 = UMHWaitingRewardsListButtonWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1409a01db;
  }
  lVar4 = 0;
LAB_1409a01db:
  *(longlong *)(param_1 + 0x708) = lVar4;
  if (lVar4 != 0) {
    lVar4 = FUN_1409ab120(lVar4 + 0x268,param_1 + 0x710,1);
    FWeakObjectPtr::operator=(&local_res8,param_1);
    iVar2 = *(int *)(lVar4 + 0x18);
    *(int *)(lVar4 + 0x18) = iVar2 + 1;
    if (*(int *)(lVar4 + 0x1c) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar4 + 0x10,iVar2);
    }
    puVar1 = (undefined4 *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar2 * 8);
    *puVar1 = local_res8;
    puVar1[1] = local_resc;
    *(undefined4 *)(param_1 + 0x720) = *(undefined4 *)(*(longlong *)(param_1 + 0x708) + 0x25c);
    FUN_1413e2940(param_1);
  }
  return;
}



// FUNCTION 1409a0270 FUN_1409a0270 body=461 status=ok
// SIG undefined FUN_1409a0270(void)

void FUN_1409a0270(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined8 uVar8;
  int *piVar9;
  int *piVar10;
  longlong *plVar11;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  FUN_140a856a0();
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_1409b6fe0(param_1 + 0x760);
    *(undefined1 *)(param_1 + 0x788) = 1;
    if (*(longlong *)(param_1 + 0x770) != 0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBeginOverlap",L"::");
      pwVar4 = (wchar_t *)0x0;
      while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_res10,pwVar4 + 2,1);
      lVar2 = *(longlong *)(param_1 + 0x770);
      plVar11 = (longlong *)(lVar2 + 0x570);
      FWeakObjectPtr::operator=(&local_28,0);
      local_20 = 0;
      FWeakObjectPtr::operator=(&local_28,param_1);
      local_20 = local_res10;
      if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_20);
      }
      piVar9 = (int *)*plVar11;
      iVar1 = *(int *)(lVar2 + 0x578);
      for (piVar10 = piVar9; piVar10 != piVar9 + (longlong)iVar1 * 4; piVar10 = piVar10 + 4) {
        if ((((*piVar10 == local_28) && (piVar10[1] == local_24)) ||
            ((cVar5 = FWeakObjectPtr::IsValid(piVar10), cVar5 == '\0' &&
             (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) &&
           (*(longlong *)(piVar10 + 2) == local_20)) {
          if ((int)((longlong)piVar10 - (longlong)piVar9 >> 4) != -1) goto LAB_1409a0408;
          break;
        }
      }
      iVar1 = *(int *)(lVar2 + 0x578);
      *(int *)(lVar2 + 0x578) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x57c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
      }
      piVar9 = (int *)((longlong)iVar1 * 0x10 + *plVar11);
      *piVar9 = local_28;
      piVar9[1] = local_24;
      *(longlong *)(piVar9 + 2) = local_20;
LAB_1409a0408:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
    }
    uVar8 = FUN_142df3580(*(undefined8 *)(param_1 + 0x118));
    *(undefined8 *)(param_1 + 0x780) = uVar8;
  }
  return;
}



// FUNCTION 1409a0440 FUN_1409a0440 body=86 status=ok
// SIG undefined FUN_1409a0440(void)

void FUN_1409a0440(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_1409ccdf0();
  if ((*(char *)(param_1 + 0x128) == '\x03') &&
     (plVar1 = *(longlong **)(param_1 + 0x470), plVar1 != (longlong *)0x0)) {
    uVar2 = FUN_1412e9ee0();
    uVar2 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    *(undefined8 *)(param_1 + 0x488) = uVar2;
  }
  FUN_1409b5fc0(param_1);
  return;
}



// FUNCTION 1409a04a0 FUN_1409a04a0 body=310 status=ok
// SIG undefined FUN_1409a04a0(void)

void FUN_1409a04a0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  float fVar8;
  undefined1 local_res8 [8];
  undefined4 uStack_c;
  
  FUN_142330a70();
  fVar8 = (float)FUN_142c98860(param_1 + 0x278,*(undefined8 *)(param_1 + 0x118));
  *(int *)(param_1 + 0x2e8) = (int)fVar8;
  lVar3 = FUN_14309ec50(param_1);
  if (lVar3 != 0) {
    lVar4 = FUN_141499e60();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar7 = (longlong *)(lVar3 + 0x980);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        *(undefined4 *)(plVar5 + 2) = 0x409a6da0;
        *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
        *(undefined4 *)(plVar5 + 3) = 0;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_c;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar4;
        *plVar5 = (longlong)&PTR_FUN_143f77bd0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
        (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
        iVar1 = *(int *)(lVar3 + 0x988);
        *(int *)(lVar3 + 0x988) = iVar1 + 1;
        if (*(int *)(lVar3 + 0x98c) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
        }
        puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar7);
        *puVar6 = plVar5;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
    }
  }
  return;
}



// FUNCTION 1409a05e0 FUN_1409a05e0 body=186 status=ok
// SIG undefined FUN_1409a05e0(void)

void FUN_1409a05e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong local_18;
  undefined1 local_10;
  
  FUN_142330a70();
  iVar4 = FUN_14233f450(param_1);
  if ((iVar4 == 3) && (lVar7 = *(longlong *)(param_1 + 0x248), lVar7 != 0)) {
    plVar6 = *(longlong **)(lVar7 + 0x30);
    plVar1 = plVar6 + *(int *)(lVar7 + 0x38);
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if (*plVar6 != 0) {
        lVar5 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
        lVar7 = *plVar6;
        for (lVar2 = lVar7; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
          if (lVar2 == lVar5) goto LAB_1409a0656;
        }
      }
      lVar7 = 0;
LAB_1409a0656:
      cVar3 = FUN_1430ecc40(param_1,lVar7);
      if (cVar3 == '\0') {
        local_10 = 2;
        local_18 = lVar7;
        FUN_1430ea410(param_1,&local_18);
      }
    }
  }
  return;
}



// FUNCTION 1409a06a0 FUN_1409a06a0 body=276 status=ok
// SIG undefined FUN_1409a06a0(void)

void FUN_1409a06a0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong local_18;
  undefined1 local_10;
  
  FUN_142330a70();
  iVar4 = FUN_14233f450(param_1);
  if ((iVar4 == 3) && (lVar7 = param_1[0x49], lVar7 != 0)) {
    plVar8 = *(longlong **)(lVar7 + 0x30);
    plVar2 = plVar8 + *(int *)(lVar7 + 0x38);
    for (; plVar8 != plVar2; plVar8 = plVar8 + 1) {
      if (*plVar8 != 0) {
        lVar5 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
        lVar7 = *plVar8;
        for (lVar1 = lVar7; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
          if (lVar1 == lVar5) goto LAB_1409a0716;
        }
      }
      lVar7 = 0;
LAB_1409a0716:
      cVar3 = FUN_1430ecc40(param_1,lVar7);
      if (cVar3 == '\0') {
        local_10 = 2;
        local_18 = lVar7;
        FUN_1430ea410(param_1,&local_18);
      }
    }
  }
  param_1[0x8e] = (longlong)param_1;
  param_1[0xa7] = (longlong)param_1;
  param_1[0xc2] = (longlong)param_1;
  param_1[0xc5] = (longlong)param_1;
  FUN_1409a6f80(param_1);
  plVar2 = (longlong *)param_1[0x23];
  if (plVar2 != (longlong *)0x0) {
    uVar6 = FUN_142e1a5a0();
    lVar7 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar6);
    if (lVar7 != 0) {
      (**(code **)(*param_1 + 0x3d0))(param_1,lVar7);
    }
  }
  return;
}



// FUNCTION 1409a07d0 FUN_1409a07d0 body=31 status=ok
// SIG undefined FUN_1409a07d0(void)

undefined1 FUN_1409a07d0(longlong param_1)

{
  FUN_142c6c710(param_1 + -0x148);
  return *(undefined1 *)(param_1 + 0x28);
}



// FUNCTION 1409a07f0 FUN_1409a07f0 body=73 status=ok
// SIG undefined FUN_1409a07f0(void)

void FUN_1409a07f0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  FUN_1409a0890(param_2,param_3,param_4,param_1 + 0x58,param_1 + 0x100,param_5);
  return;
}



// FUNCTION 1409a0840 FUN_1409a0840 body=70 status=ok
// SIG undefined FUN_1409a0840(void)

void FUN_1409a0840(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  FUN_1409a0890(param_2,param_3,param_4,param_1 + 0x48,param_1 + 0x70,param_5);
  return;
}



// FUNCTION 1409a0890 FUN_1409a0890 body=1774 status=ok
// SIG undefined FUN_1409a0890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409a0890(undefined8 param_1,byte param_2,char param_3,undefined8 param_4,
                  ulonglong *param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  wchar_t *_Dst;
  int iVar3;
  longlong *plVar4;
  void *_Src;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  char *pcVar16;
  longlong lVar17;
  undefined1 auStack_6c8 [32];
  longlong local_6a8;
  undefined8 local_6a0;
  wchar_t *local_698;
  undefined8 local_690;
  longlong local_688;
  int local_680;
  undefined8 local_678;
  void *local_670;
  int local_668;
  undefined1 local_660 [8];
  longlong *local_658;
  undefined1 local_648 [16];
  undefined4 local_638;
  undefined4 local_630;
  undefined4 uStack_62c;
  undefined1 local_628 [8];
  longlong *local_620;
  char local_610;
  undefined4 local_608;
  undefined4 local_600;
  undefined4 uStack_5fc;
  undefined1 local_5f8 [8];
  longlong *local_5f0;
  char local_5e0;
  undefined8 local_5d8;
  undefined1 local_5d0;
  undefined1 local_5c8 [608];
  undefined8 local_368;
  undefined8 local_360;
  undefined1 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_330;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_31c;
  longlong local_310;
  undefined4 local_308;
  undefined8 local_300;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_6c8;
  local_678 = param_6;
  if (param_3 == '\0') {
    FText::operator=(param_6,param_4);
  }
  else {
    uVar13 = 0;
    local_698 = (wchar_t *)0x0;
    local_690 = 0;
    local_6a8 = 0;
    local_6a0 = 0;
    if (param_2 != 0) {
      local_690 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_698,0);
      local_638 = 4;
      builtin_wcsncpy(local_698,L"{0}\n",5);
      FText::FText(local_628,param_4);
      uVar12 = local_6a0;
      lVar11 = (longlong)(int)local_6a0;
      local_610 = '\x01';
      iVar5 = (int)local_6a0 + 1;
      local_6a0 = CONCAT44(local_6a0._4_4_,iVar5);
      if (local_6a0._4_4_ < iVar5) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_6a8,uVar12 & 0xffffffff);
      }
      puVar9 = (undefined4 *)(lVar11 * 0x30 + local_6a8);
      *puVar9 = local_638;
      *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_62c,local_630);
      *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_62c,local_630);
      puVar9[2] = local_630;
      *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_62c,local_630);
      *(undefined1 *)(puVar9 + 10) = 0;
      if (local_610 != '\0') {
        FText::FText(puVar9 + 4,local_628);
        *(undefined1 *)(puVar9 + 10) = 1;
        if ((local_610 != '\0') && (local_610 = '\0', local_620 != (longlong *)0x0)) {
          LOCK();
          plVar7 = local_620 + 1;
          lVar11 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_620)(local_620);
            LOCK();
            piVar1 = (int *)((longlong)local_620 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_620 + 8))(local_620,1);
            }
          }
        }
      }
    }
    local_5d0 = 1;
    local_368 = 0;
    local_360 = 0;
    local_358 = 1;
    local_350 = 0;
    local_348 = 0;
    local_330 = 0;
    local_328 = 0;
    local_320 = 0xffffffff;
    local_31c = 0;
    local_310 = 0;
    local_308 = 0;
    local_300 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_58 = 0;
    local_50 = 0;
    local_5d8 = param_1;
    UCheatManagerGunfire::GetAllCheats(&local_688);
    plVar7 = (longlong *)*param_5;
    uVar12 = (longlong)(int)param_5[1] & 0x1fffffffffffffff;
    if (plVar7 + (int)param_5[1] < plVar7) {
      uVar12 = uVar13;
    }
    if (uVar12 != 0) {
      do {
        if (*plVar7 != 0) {
          FUN_142de5080(&local_5d8,*plVar7,0);
        }
        plVar7 = plVar7 + 1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar12);
    }
    FUN_142de7fc0(&local_5d8,&local_688);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146864cb8) &&
       (_Init_thread_header(&DAT_146864cb8), DAT_146864cb8 == -1)) {
      FName::FName(&DAT_146864cb0,L"Primary",1);
      _Init_thread_footer(&DAT_146864cb8);
    }
    iVar5 = param_2 - 1;
    plVar7 = (longlong *)FUN_142dec810(&local_688,&DAT_146864cb0);
    lVar11 = *plVar7;
    lVar17 = (longlong)(int)plVar7[1] * 0x40 + lVar11;
    for (; lVar11 != lVar17; lVar11 = lVar11 + 0x40) {
      iVar5 = iVar5 + 1;
      FString::PrintfImpl(&local_670,L"{%i}\n",iVar5);
      _Src = local_670;
      uVar13 = local_690;
      iVar10 = 0;
      if (local_668 != 0) {
        iVar10 = local_668 + -1;
      }
      if (iVar10 != 0) {
        iVar3 = (int)local_690;
        lVar14 = (longlong)(int)local_690;
        iVar6 = (uint)((int)local_690 == 0) + iVar10 + (int)local_690;
        local_690 = CONCAT44(local_690._4_4_,iVar6);
        if (local_690._4_4_ < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_698,uVar13 & 0xffffffff);
        }
        _Dst = local_698 + (lVar14 - (ulonglong)(iVar3 != 0));
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar10 * 2);
        _Dst[iVar10] = L'\0';
      }
      if (local_670 != (void *)0x0) {
        FMemory::Free(local_670);
      }
      local_608 = 4;
      FText::FText(local_5f8,lVar11 + 0x20);
      uVar13 = local_6a0;
      lVar14 = (longlong)(int)local_6a0;
      local_5e0 = '\x01';
      iVar10 = (int)local_6a0 + 1;
      local_6a0 = CONCAT44(local_6a0._4_4_,iVar10);
      if (local_6a0._4_4_ < iVar10) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_6a8,uVar13 & 0xffffffff);
      }
      puVar9 = (undefined4 *)(lVar14 * 0x30 + local_6a8);
      *puVar9 = local_608;
      *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_5fc,local_600);
      *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_5fc,local_600);
      puVar9[2] = local_600;
      *(ulonglong *)(puVar9 + 2) = CONCAT44(uStack_5fc,local_600);
      *(undefined1 *)(puVar9 + 10) = 0;
      if (local_5e0 != '\0') {
        FText::FText(puVar9 + 4,local_5f8);
        plVar7 = local_5f0;
        *(undefined1 *)(puVar9 + 10) = 1;
        if ((local_5e0 != '\0') && (local_5e0 = '\0', local_5f0 != (longlong *)0x0)) {
          LOCK();
          plVar15 = local_5f0 + 1;
          lVar14 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_5f0)(local_5f0);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
      }
      param_6 = local_678;
    }
    uVar8 = FTextFormat::FromString(local_648,&local_698);
    uVar8 = FText::Format(local_660,uVar8,&local_6a8);
    FText::operator=(param_6,uVar8);
    if (local_658 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_658 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_658)(local_658);
        LOCK();
        piVar1 = (int *)((longlong)local_658 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_658 + 8))(local_658,1);
        }
      }
    }
    if (local_680 != 0) {
      plVar7 = (longlong *)(local_688 + 8);
      iVar5 = local_680;
      do {
        iVar10 = (int)plVar7[1];
        lVar11 = *plVar7;
        if (iVar10 != 0) {
          plVar15 = (longlong *)(lVar11 + 0x10);
          do {
            plVar4 = (longlong *)plVar15[3];
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar4 + 1;
              lVar11 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
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
            plVar4 = (longlong *)*plVar15;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar4 + 1;
              lVar11 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
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
            plVar15 = plVar15 + 8;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          lVar11 = *plVar7;
        }
        if (lVar11 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (local_688 != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
    if (local_1f8 != 0) {
      FMemory::Free();
    }
    local_308 = 0;
    if (local_310 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_350);
    FUN_14099aac0(local_5c8);
    if ((int)local_6a0 != 0) {
      pcVar16 = (char *)(local_6a8 + 0x28);
      iVar5 = (int)local_6a0;
      do {
        if (*pcVar16 != '\0') {
          *pcVar16 = '\0';
          plVar7 = *(longlong **)(pcVar16 + -0x10);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar15 = plVar7 + 1;
            lVar11 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
        }
        pcVar16 = pcVar16 + 0x30;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (local_6a8 != 0) {
      FMemory::Free();
    }
    if (local_698 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1409a0f80 FUN_1409a0f80 body=82 status=ok
// SIG undefined FUN_1409a0f80(void)

void FUN_1409a0f80(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  
  uVar1 = DAT_1468646e4;
  DAT_1468646e4 = param_3;
  FUN_1409a0890(param_2,param_4,param_5,param_1 + 0x58,param_1 + 0x100,param_6);
  DAT_1468646e4 = uVar1;
  return;
}



// FUNCTION 1409a0fe0 FUN_1409a0fe0 body=219 status=ok
// SIG undefined FUN_1409a0fe0(void)

int FUN_1409a0fe0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  int iVar5;
  
  lVar1 = *param_1;
  iVar8 = 0;
  if ((lVar1 != 0) && (0 < (int)param_1[4])) {
    iVar6 = *(int *)param_1[3];
    if ((-1 < iVar6) &&
       ((iVar6 < *(int *)(lVar1 + 0xa8) &&
        (plVar7 = (longlong *)((longlong)iVar6 * 0x38 + *(longlong *)(lVar1 + 0xa0)),
        plVar7 != (longlong *)0x0)))) {
      do {
        lVar1 = *plVar7;
        iVar4 = 0;
        iVar5 = 0;
        iVar6 = iVar4;
        if ((lVar1 != 0) && (iVar6 = iVar5, 0 < (int)plVar7[5])) {
          iVar5 = *(int *)plVar7[4];
          if (((-1 < iVar5) && (iVar5 < *(int *)(lVar1 + 0xb8))) &&
             (plVar3 = (longlong *)((longlong)iVar5 * 0x30 + *(longlong *)(lVar1 + 0xb0)),
             plVar3 != (longlong *)0x0)) {
            while( true ) {
              iVar6 = iVar4 + (int)plVar3[5];
              lVar2 = *plVar3;
              if (lVar2 == 0) break;
              iVar4 = (int)plVar3[3];
              if (((iVar4 < 0) || (*(int *)(lVar2 + 0xb8) <= iVar4)) ||
                 (plVar3 = (longlong *)((longlong)iVar4 * 0x30 + *(longlong *)(lVar2 + 0xb0)),
                 iVar4 = iVar6, plVar3 == (longlong *)0x0)) break;
            }
          }
        }
        iVar8 = iVar8 + iVar6;
        if (lVar1 == 0) {
          return iVar8;
        }
        iVar6 = (int)plVar7[3];
        if (iVar6 < 0) {
          return iVar8;
        }
        if (*(int *)(lVar1 + 0xa8) <= iVar6) {
          return iVar8;
        }
        plVar7 = (longlong *)((longlong)iVar6 * 0x38 + *(longlong *)(lVar1 + 0xa0));
        if (plVar7 == (longlong *)0x0) {
          return iVar8;
        }
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 1409a10c0 FUN_1409a10c0 body=839 status=ok
// SIG undefined FUN_1409a10c0(void)

void FUN_1409a10c0(longlong param_1,longlong param_2,undefined8 *param_3,float param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_res8 [2];
  undefined1 local_d8 [8];
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined1 *local_b8 [2];
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined4 local_78;
  
  if (*(char *)(param_1 + 0xa60) == '\0') {
    if (0.0 < param_4) {
      fVar6 = DAT_1468b5d98;
      fVar4 = DAT_1468b5d90;
      fVar7 = DAT_1468b5d94;
      if ((*(longlong *)(param_1 + 0x898) != 0) &&
         (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x898) + 0x900), lVar1 != 0)) {
        FUN_142cecfa0(lVar1,local_res8,local_d8);
        uVar2 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x8e8);
        fVar4 = (float)FRichCurve::Eval(uVar2,local_res8[0],0);
        fVar6 = 0.0;
        if ((0.0 <= fVar4) && (fVar6 = fVar4, 1.0 <= fVar4)) {
          fVar6 = 1.0;
        }
        fVar4 = (*(float *)(param_1 + 0xa28) - *(float *)(param_1 + 0xa1c)) * fVar6 +
                *(float *)(param_1 + 0xa1c);
        fVar7 = (*(float *)(param_1 + 0xa2c) - *(float *)(param_1 + 0xa20)) * fVar6 +
                *(float *)(param_1 + 0xa20);
        fVar6 = (*(float *)(param_1 + 0xa30) - *(float *)(param_1 + 0xa24)) * fVar6 +
                *(float *)(param_1 + 0xa24);
        if (*(float *)(param_1 + 0x9e0) <= local_res8[0] &&
            local_res8[0] != *(float *)(param_1 + 0x9e0)) {
          fVar5 = _guard_xfg_dispatch_icall_nop
                            (local_res8[0] * *(float *)(param_1 + 0x9e4) * 3.1415927);
          fVar5 = (float)FMath::FInterpTo(*(undefined4 *)(param_1 + 0xa5c),
                                          fVar5 * *(float *)(param_1 + 0x9e8),param_4,0x3f800000);
          *(float *)(param_1 + 0xa5c) = fVar5;
          fVar6 = fVar6 + fVar5;
        }
      }
      lVar1 = *(longlong *)(param_2 + 0x178);
      if (lVar1 == 0) {
        local_d0 = 3.4028235e+38;
        fStack_cc = 3.4028235e+38;
        local_c8 = 3.4028235e+38;
      }
      else {
        local_d0 = *(float *)(lVar1 + 0x220);
        fStack_cc = *(float *)(lVar1 + 0x224);
        local_c8 = *(float *)(lVar1 + 0x228);
      }
      param_4 = 1.0 / param_4;
      fVar6 = (fVar6 - local_c8) * param_4;
      *param_3 = CONCAT44((fVar7 - fStack_cc) * param_4,(fVar4 - local_d0) * param_4);
      *(float *)(param_3 + 1) = fVar6;
      if ((*(char *)(param_1 + 0xa61) == '\0') &&
         (fVar4 = *(float *)(param_1 + 0xa28) - local_d0,
         local_c8 = *(float *)(param_1 + 0xa30) - local_c8,
         fVar7 = *(float *)(param_1 + 0xa2c) - fStack_cc,
         fVar7 * fVar7 + fVar4 * fVar4 + local_c8 * local_c8 <=
         *(float *)(param_1 + 0x9ec) * *(float *)(param_1 + 0x9ec))) {
        local_88 = 0;
        local_78 = 0;
        local_c8 = fVar6;
        puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[1] = param_1;
          *puVar3 = &PTR_FUN_143f77b70;
        }
        local_b8[0] = &LAB_1409a1d80;
        uVar2 = FUN_14247f500();
        FUN_14247d5a0(uVar2,param_2,local_b8);
      }
    }
  }
  else {
    *param_3 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    *(float *)(param_3 + 1) = DAT_1468b5d98;
  }
  return;
}



// FUNCTION 1409a1410 FUN_1409a1410 body=1408 status=ok
// SIG undefined FUN_1409a1410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409a1410(longlong param_1,float *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  char cVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_1e8 [32];
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  char local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float local_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined8 local_160;
  longlong *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [16];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_e8 [16];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  local_138 = 0;
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  local_150 = 0;
  uStack_148 = 0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  local_140 = 0;
  *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0xa28);
  param_2[2] = *(float *)(param_1 + 0xa30);
  *param_3 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  *(float *)(param_3 + 1) = DAT_1468b5d98;
  if (((*(longlong *)(param_1 + 0x898) != 0) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x898) + 0x4c0) != 0)) &&
     (*(longlong *)(param_1 + 0x7b8) != 0)) {
    plVar6 = (longlong *)FUN_142e20fc0();
    plVar9 = *(longlong **)(param_1 + 0x7b8);
    for (plVar3 = plVar9; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[6]) {
      if (plVar3 == plVar6) {
        if (plVar9 == (longlong *)0x0) {
          return;
        }
        lVar8 = plVar9[0x1f];
        if (lVar8 == 0) {
          (**(code **)(*plVar9 + 0x368))(plVar9);
          lVar8 = plVar9[0x1f];
          if (lVar8 == 0) {
            return;
          }
        }
        lVar7 = UThrobber::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) {
          return;
        }
        FUN_142c85760(*(undefined8 *)(*(longlong *)(param_1 + 0x898) + 0x920),&local_160,
                      *(undefined8 *)(param_1 + 0x7b8));
        lVar8 = FUN_142c6f640(local_160,1);
        if (lVar8 != 0) {
          lVar7 = UAnimMontage::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            FUN_14224ffa0(local_118,*(undefined8 *)(param_1 + 0x9f0),lVar8,0);
            cVar10 = '\0';
            local_128 = local_108;
            uStack_124 = uStack_104;
            uStack_120 = uStack_100;
            uStack_11c = uStack_fc;
            local_164 = uStack_100;
            *(undefined4 *)param_3 = local_108;
            *(undefined4 *)((longlong)param_3 + 4) = uStack_104;
            *(undefined4 *)(param_3 + 1) = uStack_100;
            fVar14 = DAT_1468b5d98;
            fVar13 = DAT_1468b5d94;
            fVar15 = DAT_1468b5d90;
            local_1bc = DAT_1468b5d90;
            local_1b8 = DAT_1468b5d94;
            local_1b4 = DAT_1468b5d98;
            local_1c8 = DAT_1468b5d90;
            local_1c4 = DAT_1468b5d94;
            local_1c0 = DAT_1468b5d98;
            local_16c = local_108;
            uStack_168 = uStack_104;
            local_1b0 = '\0';
            lVar7 = FUN_1423af5a0(*(undefined8 *)(*(longlong *)(param_1 + 0x898) + 0x4c0));
            local_188 = fVar15;
            fStack_184 = fVar13;
            local_1a0 = fVar14;
            cVar5 = local_1b0;
            if (lVar7 != 0) {
              plVar9 = *(longlong **)(lVar7 + 0x40);
              uVar11 = 0;
              uVar12 = (longlong)*(int *)(lVar7 + 0x48) & 0x1fffffffffffffff;
              if (plVar9 + *(int *)(lVar7 + 0x48) < plVar9) {
                uVar12 = uVar11;
              }
              if (uVar12 != 0) {
                do {
                  lVar7 = *plVar9;
                  if ((lVar7 != 0) && (local_1a8 = 0, *(longlong *)(lVar7 + 0x90) != 0)) {
                    FUN_14224ffa0(local_e8,*(undefined8 *)(lVar7 + 0x90),lVar8,0);
                    local_198 = local_d8;
                    fStack_194 = fStack_d4;
                    fStack_190 = fStack_d0;
                    uStack_18c = uStack_cc;
                    if (cVar10 == '\0') {
                      cVar10 = '\x01';
                      local_1bc = local_d8;
                      local_1b8 = fStack_d4;
                      local_1b4 = fStack_d0;
                      local_1c8 = local_d8;
                      local_1c4 = fStack_d4;
                      local_1c0 = fStack_d0;
                      fVar13 = fStack_d4;
                      fVar14 = fStack_d0;
                      fVar15 = local_d8;
                      local_188 = local_d8;
                      fStack_184 = fStack_d4;
                      local_1a0 = fStack_d0;
                    }
                    else {
                      if (local_d8 < local_188) {
                        local_1c8 = local_d8;
                        local_188 = local_d8;
                      }
                      if (fStack_d4 < fStack_184) {
                        local_1c4 = fStack_d4;
                        fStack_184 = fStack_d4;
                      }
                      if (fStack_d0 < local_1a0) {
                        local_1c0 = fStack_d0;
                        local_1a0 = fStack_d0;
                      }
                      if (fVar15 < local_d8) {
                        local_1bc = local_d8;
                        fVar15 = local_d8;
                      }
                      if (fVar13 < fStack_d4) {
                        local_1b8 = fStack_d4;
                        fVar13 = fStack_d4;
                      }
                      if (fVar14 < fStack_d0) {
                        local_1b4 = fStack_d0;
                        fVar14 = fStack_d0;
                      }
                    }
                  }
                  plVar9 = plVar9 + 1;
                  uVar11 = uVar11 + 1;
                  cVar5 = cVar10;
                } while (uVar11 != uVar12);
              }
            }
            local_1b0 = cVar5;
            fVar13 = fVar13 - fStack_184;
            fVar15 = fVar15 - local_188;
            fVar14 = fVar14 - local_1a0;
            fStack_178 = fVar13 * 0.5;
            fStack_17c = fVar15 * 0.5;
            fStack_174 = fVar14 * 0.5;
            local_188 = fStack_17c + local_188;
            fStack_184 = fStack_178 + fStack_184;
            local_1a0 = fStack_174 + local_1a0;
            *param_2 = local_188;
            param_2[1] = fStack_184;
            param_2[2] = local_1a0;
            param_2[3] = fStack_17c;
            local_170 = SQRT((fVar13 * fVar13 + fVar15 * fVar15 + fVar14 * fVar14) * 0.25);
            *(ulonglong *)(param_2 + 4) = CONCAT44(fStack_174,fStack_178);
            param_2[6] = local_170;
            fStack_180 = local_1a0;
          }
        }
        if (local_158 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar9 = local_158 + 1;
        lVar8 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar8 != 1) {
          return;
        }
        (**(code **)*local_158)(local_158);
        LOCK();
        piVar1 = (int *)((longlong)local_158 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 != 1) {
          return;
        }
        (**(code **)(*local_158 + 8))(local_158,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1409a1990 FUN_1409a1990 body=113 status=ok
// SIG undefined FUN_1409a1990(void)

int FUN_1409a1990(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar5;
  int iVar4;
  
  lVar1 = *param_1;
  iVar3 = 0;
  iVar4 = 0;
  iVar5 = iVar3;
  if ((lVar1 != 0) && (iVar5 = iVar4, 0 < (int)param_1[5])) {
    iVar4 = *(int *)param_1[4];
    if ((-1 < iVar4) &&
       ((iVar4 < *(int *)(lVar1 + 0xb8) &&
        (plVar2 = (longlong *)((longlong)iVar4 * 0x30 + *(longlong *)(lVar1 + 0xb0)),
        plVar2 != (longlong *)0x0)))) {
      while( true ) {
        iVar5 = iVar3 + (int)plVar2[5];
        lVar1 = *plVar2;
        if (lVar1 == 0) break;
        iVar3 = (int)plVar2[3];
        if (iVar3 < 0) {
          return iVar5;
        }
        if (*(int *)(lVar1 + 0xb8) <= iVar3) {
          return iVar5;
        }
        plVar2 = (longlong *)((longlong)iVar3 * 0x30 + *(longlong *)(lVar1 + 0xb0));
        iVar3 = iVar5;
        if (plVar2 == (longlong *)0x0) {
          return iVar5;
        }
      }
    }
  }
  return iVar5;
}



// FUNCTION 1409a1a10 FUN_1409a1a10 body=208 status=ok
// SIG undefined FUN_1409a1a10(void)

char FUN_1409a1a10(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  plVar3 = (longlong *)FUN_1430ec7a0();
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)(plVar3 + 0x83) & 1) != 0) {
        return '\x02';
      }
      cVar2 = (**(code **)(*plVar3 + 0x950))(plVar3);
      if (cVar2 != '\0') {
        return '\x02';
      }
      if ((plVar3[0x21c] != 0) && (cVar2 = FUN_140adaa20(), cVar2 != '\0')) {
        return '\x02';
      }
    }
  }
  if ((*(char *)(param_1 + 0xf8) != '\0') && (lVar4 = FUN_1409a7f40(param_1), lVar4 == 0)) {
    return '\x02';
  }
  if (*(longlong **)(param_1 + 0x110) == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x148))();
  }
  cVar2 = FUN_140adaba0(uVar5);
  return (cVar2 == '\0') + '\x02';
}



// FUNCTION 1409a1ae0 FUN_1409a1ae0 body=554 status=ok
// SIG undefined FUN_1409a1ae0(void)

undefined8 FUN_1409a1ae0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  plVar3 = (longlong *)FUN_1430ec7a0();
  if (plVar3 == (longlong *)0x0) goto LAB_1409a1ced;
  lVar4 = FUN_1413f82e0();
  if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_1409a1ced;
  if (plVar3[0x26] == 0) {
    return 2;
  }
  lVar4 = FUN_140b825a0();
  if (lVar4 != 0) {
    cVar2 = FUN_140cba690(lVar4,1);
    if (cVar2 != '\0') {
      return 2;
    }
    cVar2 = FUN_140cba690(lVar4,*(undefined1 *)(param_1 + 0x104));
    if (cVar2 != '\0') {
      return 2;
    }
  }
  if ((*(byte *)(plVar3 + 0x83) & 1) != 0) {
    return 2;
  }
  lVar4 = plVar3[0x1cd];
  if (lVar4 != 0) {
    if (((*(char *)(lVar4 + 0x248) == '\x06') && (*(char *)(lVar4 + 0x249) == '\0')) &&
       (*(longlong *)(lVar4 + 0x178) != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (*(char *)(param_1 + 0x100) == '\0')) {
      return 2;
    }
    if (((*(byte *)(lVar4 + 0x1968) & 1) != 0) && (*(char *)(param_1 + 0x101) == '\0')) {
      return 2;
    }
  }
  cVar2 = (**(code **)(*plVar3 + 0x950))(plVar3);
  if (cVar2 != '\0') {
    return 2;
  }
  if ((plVar3[0x21c] != 0) && (cVar2 = FUN_140adaa20(), cVar2 != '\0')) {
    return 2;
  }
  lVar4 = plVar3[0x138];
  if (lVar4 == 0) {
LAB_1409a1c68:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1409a1c68;
    cVar2 = FUN_140d01c90(lVar4);
    if ((cVar2 != '\0') && (*(char *)(param_1 + 0x103) != '\0')) {
      return 2;
    }
  }
  if (*(char *)(param_1 + 0x102) == '\0') {
    plVar7 = (longlong *)0x0;
    if (plVar3[0x21c] != 0) {
      plVar7 = plVar3;
    }
    if (plVar7 == (longlong *)0x0) {
      if ((lVar4 != 0) && (plVar7 = *(longlong **)(lVar4 + 0x848), plVar7 != (longlong *)0x0)) {
        lVar4 = FUN_1413f82e0();
        if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) goto LAB_1409a1ccb;
      }
    }
    else {
LAB_1409a1ccb:
      if ((plVar7[0x21c] != 0) && (*(char *)(plVar7[0x21c] + 0x10e6) == '\x02')) {
        return 2;
      }
    }
  }
  if (*(char *)(param_1 + 0xa1) == '\x02') {
    return 3;
  }
LAB_1409a1ced:
  uVar6 = FUN_1430eac10(param_1);
  return uVar6;
}



// FUNCTION 1409a1d20 FUN_1409a1d20 body=81 status=ok
// SIG undefined FUN_1409a1d20(void)

undefined8 FUN_1409a1d20(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((*(char *)(param_1 + 0xf8) != '\0') && (lVar2 = FUN_1409a7f40(), lVar2 == 0)) {
    return 2;
  }
  if (*(longlong **)(param_1 + 0x110) == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x148))();
  }
  cVar1 = FUN_140adaba0(uVar3);
  if (cVar1 != '\0') {
    return 2;
  }
  return 3;
}



// FUNCTION 1409a1dc0 FUN_1409a1dc0 body=202 status=ok
// SIG undefined FUN_1409a1dc0(void)

undefined8
FUN_1409a1dc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar3 = AGFireballProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar1 = *(longlong *)(lVar1 + 0x118), lVar1 != 0)) {
      plVar4 = (longlong *)FUN_1422325e0(lVar1);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x2e8))(plVar4,lVar1,param_2,param_3,param_4,param_5,param_1);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1409a1e90 FUN_1409a1e90 body=115 status=ok
// SIG undefined FUN_1409a1e90(void)

undefined1 FUN_1409a1e90(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong local_28;
  int local_20;
  int local_1c;
  undefined1 local_18;
  char local_17;
  
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x98) != '\0') {
      return 1;
    }
    if ((*(longlong *)(param_1 + 0x3b0) != 0) &&
       (cVar1 = FUN_1409a7690(*(longlong *)(param_1 + 0x3b0),param_2,&local_28), cVar1 != '\0')) {
      if (local_17 == '\0') {
        if (0 < local_1c + local_20) {
          return 1;
        }
        if (local_28 == 0) {
          return 0;
        }
        if ((1 < (byte)(*(char *)(local_28 + 0x34) - 3U)) && (*(int *)(local_28 + 0x30) != 0)) {
          return 0;
        }
      }
      return local_18;
    }
  }
  return 0;
}



// FUNCTION 1409a1f10 FUN_1409a1f10 body=103 status=ok
// SIG undefined FUN_1409a1f10(void)

ulonglong FUN_1409a1f10(longlong *param_1)

{
  int iVar1;
  ulonglong in_RAX;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    iVar1 = *(int *)((longlong)param_1 + 0x1c);
    in_RAX = (ulonglong)iVar1;
    if (((-1 < iVar1) && (iVar1 < *(int *)(lVar3 + 0xa8))) &&
       (lVar3 = in_RAX * 0x38 + *(longlong *)(lVar3 + 0xa0), lVar3 != 0)) {
      bVar2 = *(byte *)(lVar3 + 0x30);
      if (*(char *)((longlong)param_1 + 0x24) == '\0') {
        if (0 < *(int *)((longlong)param_1 + 0x2c) + (int)param_1[5]) {
          return 1;
        }
        lVar3 = param_1[1];
        if ((lVar3 == 0) ||
           ((1 < (byte)(*(char *)(lVar3 + 0x34) - 3U) && (*(int *)(lVar3 + 0x30) != 0)))) {
          bVar2 = 0;
        }
      }
      return (ulonglong)bVar2;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1409a1f80 FUN_1409a1f80 body=58 status=ok
// SIG undefined FUN_1409a1f80(void)

ulonglong FUN_1409a1f80(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  uint7 uVar3;
  
  if (*(char *)((longlong)param_1 + 0x11) == '\0') {
    iVar2 = *(int *)((longlong)param_1 + 0xc) + (int)param_1[1];
    uVar3 = (uint7)(uint3)((uint)iVar2 >> 8);
    if (0 < iVar2) {
      return CONCAT71(uVar3,1);
    }
    lVar1 = *param_1;
    if ((lVar1 == 0) ||
       ((1 < (byte)(*(char *)(lVar1 + 0x34) - 3U) && (*(int *)(lVar1 + 0x30) != 0)))) {
      return (ulonglong)uVar3 << 8;
    }
  }
  return (ulonglong)*(byte *)(param_1 + 2);
}



// FUNCTION 1409a1fc0 FUN_1409a1fc0 body=1403 status=ok
// SIG undefined FUN_1409a1fc0(void)

undefined8 FUN_1409a1fc0(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong local_38;
  int local_30;
  int local_2c;
  char local_28;
  char local_27;
  
  if (*param_3 != 0) {
    lVar5 = FUN_14144bcb0();
    for (lVar9 = *param_3; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
      if (lVar9 == lVar5) {
        if (*param_3 == 0) {
          return 1;
        }
        if (*(longlong *)(param_1 + 0x3b0) == 0) {
          if (param_4 == (longlong *)0x0) {
            return 0;
          }
          if ((wchar_t *)*param_4 == L"No ability tree.") {
            return 0;
          }
          iVar4 = 0;
          *(undefined4 *)(param_4 + 1) = 0;
          if (*(int *)((longlong)param_4 + 0xc) != 0x11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,0x11);
            iVar4 = (int)param_4[1];
          }
          *(int *)(param_4 + 1) = iVar4 + 0x11;
          if (*(int *)((longlong)param_4 + 0xc) < iVar4 + 0x11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar4);
          }
          builtin_wcsncpy((wchar_t *)*param_4,L"No ability tree.",0x11);
          return 0;
        }
        if (param_2 == 0) {
          if (param_4 == (longlong *)0x0) {
            return 0;
          }
          if ((undefined *)*param_4 == &DAT_1441853e8) {
            return 0;
          }
          iVar4 = 0;
          *(undefined4 *)(param_4 + 1) = 0;
          if (*(int *)((longlong)param_4 + 0xc) != 0xe) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,0xe);
            iVar4 = (int)param_4[1];
          }
          *(int *)(param_4 + 1) = iVar4 + 0xe;
          if (*(int *)((longlong)param_4 + 0xc) < iVar4 + 0xe) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar4);
          }
          puVar1 = (undefined8 *)*param_4;
          *puVar1 = 0x610076006e0049;
          puVar1[1] = 0x2000640069006c;
          puVar1[2] = 0x74006f006c0053;
          *(undefined4 *)(puVar1 + 3) = 0x2e;
          return 0;
        }
        iVar4 = FUN_1409a7720(param_1);
        if (iVar4 < *(int *)(param_2 + 0x60)) {
          if (param_4 == (longlong *)0x0) {
            return 0;
          }
          if ((wchar_t *)*param_4 == L"The slot is locked.") {
            return 0;
          }
          iVar4 = 0;
          *(undefined4 *)(param_4 + 1) = 0;
          if (*(int *)((longlong)param_4 + 0xc) != 0x14) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,0x14);
            iVar4 = (int)param_4[1];
          }
          *(int *)(param_4 + 1) = iVar4 + 0x14;
          if (*(int *)((longlong)param_4 + 0xc) < iVar4 + 0x14) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar4);
          }
          builtin_wcsncpy((wchar_t *)*param_4,L"The slot is locked.",0x14);
          return 0;
        }
        lVar9 = 0;
        iVar4 = 0;
        if (*param_3 == 0) goto LAB_1409a21d2;
        lVar6 = FUN_14144bcb0();
        lVar5 = *param_3;
        goto joined_r0x0001409a21ba;
      }
    }
  }
  return 1;
joined_r0x0001409a21ba:
  if (lVar5 == 0) {
LAB_1409a21d2:
    if ((param_4 != (longlong *)0x0) && ((undefined *)*param_4 != &DAT_1441854b0)) {
      *(undefined4 *)(param_4 + 1) = 0;
      if (*(int *)((longlong)param_4 + 0xc) != 0x23) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,0x23);
        iVar4 = (int)param_4[1];
      }
      *(int *)(param_4 + 1) = iVar4 + 0x23;
      if (*(int *)((longlong)param_4 + 0xc) < iVar4 + 0x23) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar4);
      }
      puVar1 = (undefined8 *)*param_4;
      *puVar1 = 0x74006f006c0053;
      puVar1[1] = 0x65006f00640020;
      puVar1[2] = 0x6f006e00200073;
      puVar1[3] = 0x75007300200074;
      puVar1[4] = 0x72006f00700070;
      puVar1[5] = 0x68007400200074;
      puVar1[6] = 0x62006100200065;
      puVar1[7] = 0x740069006c0069;
      *(undefined4 *)(puVar1 + 8) = 0x2e0079;
      *(undefined2 *)((longlong)puVar1 + 0x44) = 0;
    }
    return 0;
  }
  if (lVar5 == lVar6) {
    if (*param_3 != 0) {
      plVar10 = *(longlong **)(param_2 + 0x68);
      plVar2 = plVar10 + *(int *)(param_2 + 0x70);
      for (; plVar10 != plVar2; plVar10 = plVar10 + 1) {
        if (*plVar10 != 0) {
          lVar7 = FUN_14144bcb0();
          lVar5 = *plVar10;
          lVar6 = lVar5;
          if (lVar5 != 0) {
LAB_1409a22a0:
            if (lVar6 != lVar7) goto code_r0x0001409a22a5;
            if (lVar5 != 0) {
              lVar6 = FUN_14144bcb0();
              for (lVar5 = *plVar10;
                  (lVar7 = lVar9, lVar5 != 0 && (lVar7 = *plVar10, lVar5 != lVar6));
                  lVar5 = *(longlong *)(lVar5 + 0x30)) {
              }
              lVar5 = lVar9;
              if (*param_3 != 0) {
                lVar8 = FUN_14144bcb0();
                for (lVar6 = *param_3;
                    (lVar5 = lVar9, lVar6 != 0 && (lVar5 = *param_3, lVar6 != lVar8));
                    lVar6 = *(longlong *)(lVar6 + 0x30)) {
                }
              }
              for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
                if (lVar5 == lVar7) {
                  plVar2 = (longlong *)*param_3;
                  if (plVar2 != (longlong *)0x0) {
                    lVar9 = plVar2[0x1f];
                    if (lVar9 == 0) {
                      (**(code **)(*plVar2 + 0x368))(plVar2);
                      lVar9 = plVar2[0x1f];
                      if (lVar9 == 0) goto LAB_1409a23df;
                    }
                    if (*(char *)(lVar9 + 0xf8) == '\0') {
                      if (param_4 == (longlong *)0x0) {
                        return 0;
                      }
                      if ((wchar_t *)*param_4 == L"This ability cannot be slotted.") {
                        return 0;
                      }
                      *(undefined4 *)(param_4 + 1) = 0;
                      if (*(int *)((longlong)param_4 + 0xc) != 0x20) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,0x20);
                        iVar4 = (int)param_4[1];
                      }
                      *(int *)(param_4 + 1) = iVar4 + 0x20;
                      if (*(int *)((longlong)param_4 + 0xc) < iVar4 + 0x20) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar4);
                      }
                      builtin_wcsncpy((wchar_t *)*param_4,L"This ability cannot be slotted.",0x20);
                      return 0;
                    }
                  }
LAB_1409a23df:
                  cVar3 = FUN_1409a74d0(*(undefined8 *)(param_1 + 0x3b0),param_3,&local_38);
                  if (cVar3 == '\0') {
                    if (param_4 == (longlong *)0x0) {
                      return 0;
                    }
                    if ((undefined *)*param_4 == &DAT_1441855b8) {
                      return 0;
                    }
                    *(undefined4 *)(param_4 + 1) = 0;
                    if (*(int *)((longlong)param_4 + 0xc) != 0x1e) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,0x1e);
                      iVar4 = (int)param_4[1];
                    }
                    *(int *)(param_4 + 1) = iVar4 + 0x1e;
                    if (*(int *)((longlong)param_4 + 0xc) < iVar4 + 0x1e) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar4);
                    }
                    puVar1 = (undefined8 *)*param_4;
                    *puVar1 = 0x6c006900610046;
                    puVar1[1] = 0x74002000640065;
                    puVar1[2] = 0x6500720020006f;
                    puVar1[3] = 0x65006900720074;
                    puVar1[4] = 0x74002000650076;
                    puVar1[5] = 0x20006500650072;
                    puVar1[6] = 0x6f0066006e0069;
                    *(undefined4 *)(puVar1 + 7) = 0x2e;
                    return 0;
                  }
                  if (local_27 == '\0') {
                    if (0 < local_2c + local_30) {
                      return 1;
                    }
                    if ((local_38 == 0) ||
                       ((1 < (byte)(*(char *)(local_38 + 0x34) - 3U) &&
                        (*(int *)(local_38 + 0x30) != 0)))) goto LAB_1409a24bf;
                  }
                  if (local_28 != '\0') {
                    return 1;
                  }
LAB_1409a24bf:
                  if (param_4 == (longlong *)0x0) {
                    return 0;
                  }
                  if ((wchar_t *)*param_4 == L"No points allocated to ability.") {
                    return 0;
                  }
                  *(undefined4 *)(param_4 + 1) = 0;
                  if (*(int *)((longlong)param_4 + 0xc) != 0x20) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,0x20);
                    iVar4 = (int)param_4[1];
                  }
                  *(int *)(param_4 + 1) = iVar4 + 0x20;
                  if (*(int *)((longlong)param_4 + 0xc) < iVar4 + 0x20) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar4);
                  }
                  builtin_wcsncpy((wchar_t *)*param_4,L"No points allocated to ability.",0x20);
                  return 0;
                }
              }
            }
          }
        }
LAB_1409a2314:
      }
    }
    goto LAB_1409a21d2;
  }
  lVar5 = *(longlong *)(lVar5 + 0x30);
  goto joined_r0x0001409a21ba;
code_r0x0001409a22a5:
  lVar6 = *(longlong *)(lVar6 + 0x30);
  if (lVar6 == 0) goto LAB_1409a2314;
  goto LAB_1409a22a0;
}



// FUNCTION 1409a2540 FUN_1409a2540 body=1654 status=ok
// SIG undefined FUN_1409a2540(void)

undefined8
FUN_1409a2540(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,longlong *param_5
             )

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong local_res20;
  longlong local_38;
  int local_30;
  int local_2c;
  char local_28;
  char local_27;
  
  uVar4 = FUN_1409a7720();
  if (param_4 == 0) {
    return 1;
  }
  if (param_3 == 0) {
    if (param_5 == (longlong *)0x0) {
      return 0;
    }
    if ((undefined *)*param_5 == &DAT_1441861b0) {
      return 0;
    }
    iVar8 = 0;
    *(undefined4 *)(param_5 + 1) = 0;
    if (*(int *)((longlong)param_5 + 0xc) != 0xe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_5,0xe);
      iVar8 = (int)param_5[1];
    }
    *(int *)(param_5 + 1) = iVar8 + 0xe;
    if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 0xe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar8);
    }
    puVar1 = (undefined8 *)*param_5;
    *puVar1 = 0x610076006e0049;
    puVar1[1] = 0x2000640069006c;
    puVar1[2] = 0x74006f006c0073;
    *(undefined4 *)(puVar1 + 3) = 0x2e;
    return 0;
  }
  if (*(longlong *)(param_1 + 0x3b0) == 0) {
    if (param_5 == (longlong *)0x0) {
      return 0;
    }
    if ((wchar_t *)*param_5 == L"Failed to find player ability tree.") {
      return 0;
    }
    iVar8 = 0;
    *(undefined4 *)(param_5 + 1) = 0;
    if (*(int *)((longlong)param_5 + 0xc) != 0x24) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_5,0x24);
      iVar8 = (int)param_5[1];
    }
    *(int *)(param_5 + 1) = iVar8 + 0x24;
    if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 0x24) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar8);
    }
    builtin_wcsncpy((wchar_t *)*param_5,L"Failed to find player ability tree.",0x24);
    return 0;
  }
  cVar3 = FUN_1409aec20(param_3,uVar4);
  if (cVar3 == '\0') {
    if (param_5 == (longlong *)0x0) {
      return 0;
    }
    if ((wchar_t *)*param_5 == L"Slot is locked.") {
      return 0;
    }
    iVar8 = 0;
    *(undefined4 *)(param_5 + 1) = 0;
    if (*(int *)((longlong)param_5 + 0xc) != 0x10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_5,0x10);
      iVar8 = (int)param_5[1];
    }
    *(int *)(param_5 + 1) = iVar8 + 0x10;
    if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 0x10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar8);
    }
    builtin_wcsncpy((wchar_t *)*param_5,L"Slot is locked.",0x10);
    return 0;
  }
  if (*(char *)(param_4 + 0x98) == '\0') {
    cVar3 = FUN_1409a7690(*(undefined8 *)(param_1 + 0x3b0),param_4,&local_38);
    if (cVar3 == '\0') {
      if (param_5 == (longlong *)0x0) {
        return 0;
      }
      if ((wchar_t *)*param_5 == L"Failed to retrieve augment item data.") {
        return 0;
      }
      iVar8 = 0;
      *(undefined4 *)(param_5 + 1) = 0;
      if (*(int *)((longlong)param_5 + 0xc) != 0x26) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_5,0x26);
        iVar8 = (int)param_5[1];
      }
      *(int *)(param_5 + 1) = iVar8 + 0x26;
      if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 0x26) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar8);
      }
      builtin_wcsncpy((wchar_t *)*param_5,L"Failed to retrieve augment item data.",0x26);
      return 0;
    }
    if (local_27 == '\0') {
      if (0 < local_2c + local_30) goto LAB_1409a28d2;
      if ((local_38 != 0) &&
         (((byte)(*(char *)(local_38 + 0x34) - 3U) < 2 || (*(int *)(local_38 + 0x30) == 0))))
      goto LAB_1409a27fd;
    }
    else {
LAB_1409a27fd:
      if (local_28 != '\0') goto LAB_1409a28d2;
    }
    if ((param_5 != (longlong *)0x0) &&
       ((wchar_t *)*param_5 != L"Item is not unlocked to be used (no points or locked wingtip item)"
       )) {
      iVar8 = 0;
      *(undefined4 *)(param_5 + 1) = 0;
      if (*(int *)((longlong)param_5 + 0xc) != 0x43) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_5,0x43);
        iVar8 = (int)param_5[1];
      }
      *(int *)(param_5 + 1) = iVar8 + 0x43;
      if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 0x43) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar8);
      }
      builtin_wcsncpy((wchar_t *)*param_5,
                      L"Item is not unlocked to be used (no points or locked wingtip item)",0x43);
      return 0;
    }
  }
  else {
LAB_1409a28d2:
    plVar6 = *(longlong **)(param_3 + 0x68);
    plVar2 = plVar6 + *(int *)(param_3 + 0x70);
    for (; plVar6 != plVar2; plVar6 = plVar6 + 1) {
      if (*plVar6 == param_4) {
        plVar2 = (longlong *)*param_2;
        if ((plVar2 == (longlong *)0x0) ||
           ((plVar2[0x1f] == 0 && ((**(code **)(*plVar2 + 0x368))(plVar2), plVar2[0x1f] == 0)))) {
          if (param_5 == (longlong *)0x0) {
            return 0;
          }
          if ((wchar_t *)*param_5 == L"Invalid slot list.") {
            return 0;
          }
          iVar8 = 0;
          *(undefined4 *)(param_5 + 1) = 0;
          if (*(int *)((longlong)param_5 + 0xc) != 0x13) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_5,0x13);
            iVar8 = (int)param_5[1];
          }
          *(int *)(param_5 + 1) = iVar8 + 0x13;
          if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 0x13) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar8);
          }
          builtin_wcsncpy((wchar_t *)*param_5,L"Invalid slot list.",0x13);
          return 0;
        }
        if (*(longlong *)(param_3 + 0x78) == 0) {
          return 1;
        }
        local_res20 = *param_2;
        lVar5 = FUN_1409ab2f0(param_1 + 0x488,&local_res20);
        lVar7 = 0;
        iVar8 = 0;
        if (lVar5 != 0) {
          lVar7 = *(longlong *)(lVar5 + 0x20);
        }
        if (lVar7 != 0) {
          cVar3 = UActorComponent::ComponentHasTag(lVar7,param_4);
          if (cVar3 != '\0') {
            return 1;
          }
          if (param_5 == (longlong *)0x0) {
            return 0;
          }
          if ((wchar_t *)*param_5 == L"Invalid parent dependency.") {
            return 0;
          }
          *(undefined4 *)(param_5 + 1) = 0;
          if (*(int *)((longlong)param_5 + 0xc) != 0x1b) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_5,0x1b);
            iVar8 = (int)param_5[1];
          }
          *(int *)(param_5 + 1) = iVar8 + 0x1b;
          if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 0x1b) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar8);
          }
          builtin_wcsncpy((wchar_t *)*param_5,L"Invalid parent dependency.",0x1b);
          return 0;
        }
        if (param_5 == (longlong *)0x0) {
          return 0;
        }
        if ((wchar_t *)*param_5 == L"Parent dependency is not slotted.") {
          return 0;
        }
        *(undefined4 *)(param_5 + 1) = 0;
        if (*(int *)((longlong)param_5 + 0xc) != 0x22) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_5,0x22);
          iVar8 = (int)param_5[1];
        }
        *(int *)(param_5 + 1) = iVar8 + 0x22;
        if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 0x22) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar8);
        }
        builtin_wcsncpy((wchar_t *)*param_5,L"Parent dependency is not slotted.",0x22);
        return 0;
      }
    }
    if ((param_5 != (longlong *)0x0) && ((wchar_t *)*param_5 != L"Slot does not support augment."))
    {
      iVar8 = 0;
      *(undefined4 *)(param_5 + 1) = 0;
      if (*(int *)((longlong)param_5 + 0xc) != 0x1f) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_5,0x1f);
        iVar8 = (int)param_5[1];
      }
      *(int *)(param_5 + 1) = iVar8 + 0x1f;
      if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 0x1f) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar8);
      }
      builtin_wcsncpy((wchar_t *)*param_5,L"Slot does not support augment.",0x1f);
    }
  }
  return 0;
}



// FUNCTION 1409a2bc0 FUN_1409a2bc0 body=240 status=ok
// SIG undefined FUN_1409a2bc0(void)

bool FUN_1409a2bc0(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar3 = FUN_14306e030();
  if (cVar3 == '\0') {
    return false;
  }
  cVar3 = (**(code **)(*param_1 + 0x408))();
  if (cVar3 != '\0') {
    lVar5 = param_1[0x40];
    if (lVar5 != 0) {
      lVar4 = AAmbientSound::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        iVar1 = *(int *)(lVar5 + 0x2ec);
        if ((iVar1 < 0) || (*(int *)(lVar5 + 0x2f8) <= iVar1)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar5 = FWeakObjectPtr::Get((longlong)iVar1 * 0x60 + *(longlong *)(lVar5 + 0x2f0));
          return lVar5 != 0;
        }
        return false;
      }
    }
    return true;
  }
  return true;
}



// FUNCTION 1409a2cb0 FUN_1409a2cb0 body=231 status=ok
// SIG undefined FUN_1409a2cb0(void)

bool FUN_1409a2cb0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if (*(longlong *)(param_1 + 0x3b8) == 0) {
    return false;
  }
  lVar1 = *(longlong *)(param_1 + 0x110);
  if (lVar1 == 0) {
    return false;
  }
  cVar2 = *(char *)(param_1 + 0x1b8);
  if (cVar2 == '\0') {
    return false;
  }
  if (cVar2 == '\x01') {
    cVar2 = FUN_140c39ab0(lVar1,0,0);
  }
  else {
    if (cVar2 != '\x02') goto LAB_1409a2d08;
    cVar2 = FUN_140c39ab0(lVar1,0,2);
  }
  if (cVar2 == '\0') {
    return false;
  }
LAB_1409a2d08:
  lVar1 = *(longlong *)(param_1 + 0x110);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 0xe68);
  }
  if ((((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1778) != 0)) &&
      ((*(byte *)(lVar4 + 0x18cc) & 2) == 0)) && (*(longlong *)(lVar4 + 0x178) != 0)) {
    return false;
  }
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10e0) != 0)) &&
     (cVar2 = FUN_140adac80(), cVar2 != '\0')) {
    return (*(byte *)(param_1 + 0x3b0) & 8) != 0;
  }
  local_28 = *(undefined4 *)(param_1 + 0x280);
  uStack_24 = *(undefined4 *)(param_1 + 0x284);
  uStack_20 = *(undefined4 *)(param_1 + 0x288);
  uStack_1c = *(undefined4 *)(param_1 + 0x28c);
  local_18 = *(undefined8 *)(param_1 + 0x290);
  uVar3 = FUN_142d63aa0(&local_28,2);
  return (bool)uVar3;
}



// FUNCTION 1409a2da0 FUN_1409a2da0 body=82 status=ok
// SIG undefined FUN_1409a2da0(void)

undefined8 FUN_1409a2da0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x110);
  if ((lVar1 != 0) && (cVar2 = *(char *)(param_1 + 0x1b8), cVar2 != '\0')) {
    if (cVar2 == '\x01') {
      cVar2 = FUN_140c39ab0(lVar1,0,0);
    }
    else {
      if (cVar2 != '\x02') {
        return 1;
      }
      cVar2 = FUN_140c39ab0(lVar1,0,2);
    }
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1409a2e00 FUN_1409a2e00 body=52 status=ok
// SIG undefined FUN_1409a2e00(void)

bool FUN_1409a2e00(longlong param_1)

{
  char cVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *(undefined4 *)(param_1 + 0x1c0);
  uStack_24 = *(undefined4 *)(param_1 + 0x1c4);
  uStack_20 = *(undefined4 *)(param_1 + 0x1c8);
  uStack_1c = *(undefined4 *)(param_1 + 0x1cc);
  local_18 = *(undefined8 *)(param_1 + 0x1d0);
  cVar1 = FUN_142d63aa0(&local_28,2);
  return cVar1 == '\0';
}



// FUNCTION 1409a2e40 IsStereoEnabled body=8 status=ok
// SIG undefined IsStereoEnabled(void)

undefined1 FOpenXRHMD::IsStereoEnabled(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x1f0);
}



// FUNCTION 1409a2e50 FUN_1409a2e50 body=269 status=ok
// SIG undefined FUN_1409a2e50(void)

undefined8 FUN_1409a2e50(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar2 = (**(code **)(*param_1 + 0x380))();
  if ((cVar2 != '\0') && (*(char *)((longlong)param_1 + 0xa1) == '\x03')) {
    plVar1 = (longlong *)param_1[0x22];
    if (plVar1 == (longlong *)0x0) {
      return 1;
    }
    cVar2 = (**(code **)(*plVar1 + 0x950))(plVar1);
    if (((cVar2 == '\0') && ((char)plVar1[0x1d8] != '\x03')) &&
       (cVar2 = (**(code **)(plVar1[0x1b1] + 0x110))(plVar1 + 0x1b1,0), cVar2 != '\0')) {
      lVar5 = plVar1[0x1cd];
      if (lVar5 != 0) {
        cVar2 = FUN_140a66d90(lVar5);
        if (cVar2 != '\0') {
          return 0;
        }
        lVar5 = *(longlong *)(lVar5 + 0x1778);
        if (lVar5 != 0) {
          lVar4 = FUN_141410cb0();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) {
            return 0;
          }
          if ((*(byte *)(lVar5 + 0x8a0) & 0x10) != 0) {
            return 0;
          }
        }
      }
      lVar5 = (**(code **)(*plVar1 + 0x670))(plVar1);
      if (lVar5 == 0) {
        return 1;
      }
      if ((*(byte *)(lVar5 + 0x418) & 1) == 0) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1409a2f60 FUN_1409a2f60 body=322 status=ok
// SIG undefined FUN_1409a2f60(void)

ulonglong FUN_1409a2f60(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = (**(code **)(*param_1 + 0x380))();
  if (((char)uVar4 == '\0') || (*(char *)((longlong)param_1 + 0xa1) != '\x03')) goto LAB_1409a3090;
  plVar2 = (longlong *)param_1[0x22];
  if (plVar2 != (longlong *)0x0) {
    uVar4 = (**(code **)(*plVar2 + 0x950))(plVar2);
    if (((char)uVar4 != '\0') || ((char)plVar2[0x1d8] == '\x03')) goto LAB_1409a3090;
    uVar4 = (**(code **)(plVar2[0x1b1] + 0x110))(plVar2 + 0x1b1,0);
    if ((char)uVar4 == '\0') goto LAB_1409a3090;
    lVar3 = plVar2[0x1cd];
    if (lVar3 != 0) {
      uVar4 = FUN_140a66d90(lVar3);
      if ((char)uVar4 != '\0') goto LAB_1409a3090;
      lVar3 = *(longlong *)(lVar3 + 0x1778);
      if (lVar3 != 0) {
        lVar5 = FUN_141410cb0();
        iVar1 = *(int *)(lVar5 + 0x90);
        uVar4 = (longlong)iVar1;
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar1) ||
           (uVar4 = *(ulonglong *)(*(longlong *)(lVar3 + 0x10) + 0x88),
           *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar5 + 0x88)) {
          uVar4 = uVar4 & 0xffffffffffffff00;
        }
        else {
          uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
        }
        if (((char)uVar4 == '\0') || ((*(byte *)(lVar3 + 0x8a0) & 0x10) != 0)) goto LAB_1409a3090;
      }
    }
    uVar4 = (**(code **)(*plVar2 + 0x670))(plVar2);
    if ((uVar4 != 0) && ((*(byte *)(uVar4 + 0x418) & 1) != 0)) goto LAB_1409a3090;
  }
  uVar4 = 0;
  if (param_1[0x22] != 0) {
    uVar4 = *(ulonglong *)(param_1[0x22] + 0xe68);
  }
  if ((uVar4 == 0) || (*(longlong *)(uVar4 + 0x1778) == 0)) {
    return CONCAT71((int7)(uVar4 >> 8),1);
  }
LAB_1409a3090:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1409a30b0 FUN_1409a30b0 body=60 status=ok
// SIG undefined FUN_1409a30b0(void)

void FUN_1409a30b0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    cVar1 = FUN_140c469d0();
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001409a30df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x118) + 0x8e0))(*(longlong **)(param_1 + 0x118),0);
      return;
    }
  }
  return;
}



// FUNCTION 1409a3110 FUN_1409a3110 body=221 status=ok
// SIG undefined FUN_1409a3110(void)

void FUN_1409a3110(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x324);
  plVar2 = *(longlong **)(param_1 + 0x318);
  iVar5 = *(int *)(param_1 + 800);
  if (iVar1 < 0) {
    if (iVar5 != 0) {
      do {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar1 = *(int *)(param_1 + 0x324);
    }
    *(undefined4 *)(param_1 + 800) = 0;
    if (iVar1 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo((undefined8 *)(param_1 + 0x318),0);
    }
  }
  else {
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    *(undefined4 *)(param_1 + 800) = 0;
  }
  uVar3 = 0;
  plVar2 = *(longlong **)(param_1 + 0x2c0);
  uVar4 = (longlong)*(int *)(param_1 + 0x2c8) & 0x1fffffffffffffff;
  if (plVar2 + *(int *)(param_1 + 0x2c8) < plVar2) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      if (*plVar2 != 0) {
        (**(code **)(*(longlong *)(*plVar2 + 0x148) + 0x38))();
      }
      plVar2 = plVar2 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar4);
  }
  return;
}



// FUNCTION 1409a31f0 FUN_1409a31f0 body=89 status=ok
// SIG undefined FUN_1409a31f0(void)

void FUN_1409a31f0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 8) + 0x10;
    do {
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (lVar1);
      lVar1 = lVar1 + 0x20;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              ((longlong *)(param_1 + 8),0);
  }
  return;
}



// FUNCTION 1409a3250 FUN_1409a3250 body=136 status=ok
// SIG undefined FUN_1409a3250(void)

void FUN_1409a3250(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x2f0);
  lVar3 = (longlong)*(int *)(param_1 + 0x2f8) * 0x60 + lVar4;
  if (lVar4 != lVar3) {
    puVar2 = (undefined8 *)(lVar4 + 0x40);
    do {
      lVar1 = FUN_1409aab20(param_1);
      if (lVar1 != 0) {
        FUN_140c542e0(lVar1,puVar2 + -7);
        *puVar2 = 0;
        puVar2[-1] = 0;
      }
      lVar4 = lVar4 + 0x60;
      puVar2 = puVar2 + 0xc;
    } while (lVar4 != lVar3);
  }
  return;
}



// FUNCTION 1409a32e0 FUN_1409a32e0 body=120 status=ok
// SIG undefined FUN_1409a32e0(void)

void FUN_1409a32e0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    iVar1 = FUN_14233f450();
    if (iVar1 < 3) {
      lVar3 = *(longlong *)(param_1 + 0xb0);
      lVar2 = (longlong)*(int *)(param_1 + 0xb8) * 0x30 + lVar3;
      if (lVar3 != lVar2) {
        while ((param_2 == 0 || (*(longlong *)(lVar3 + 8) != param_2))) {
          lVar3 = lVar3 + 0x30;
          if (lVar3 == lVar2) {
            return;
          }
        }
        FUN_1409adc80(param_1);
      }
    }
  }
  return;
}



// FUNCTION 1409a3360 FUN_1409a3360 body=47 status=ok
// SIG undefined FUN_1409a3360(void)

void FUN_1409a3360(longlong param_1,undefined1 param_2)

{
  longlong local_18;
  undefined1 local_10;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    local_18 = param_1;
    local_10 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (*(longlong *)(param_1 + 0x118) + 0x2c8,&local_18);
  }
  return;
}



// FUNCTION 1409a3390 FUN_1409a3390 body=135 status=ok
// SIG undefined FUN_1409a3390(void)

void FUN_1409a3390(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 local_res10;
  
  local_res10 = param_2;
  iVar1 = FUN_14233f450();
  if (iVar1 < 3) {
    FUN_14099de30(param_1 + 0x628,&local_res10,param_3,param_4,param_5);
    iVar1 = FUN_14233f450(param_1);
    if (iVar1 == 3) {
      FUN_141455ea0(param_1,local_res10,param_3,param_4,param_5);
    }
  }
  return;
}



// FUNCTION 1409a3420 FUN_1409a3420 body=59 status=ok
// SIG undefined FUN_1409a3420(void)

void FUN_1409a3420(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if (iVar1 < 3) {
    if (*(longlong *)(param_1 + 0x3b0) != 0) {
      FUN_1409b7d80();
    }
    FUN_1409a31f0(param_1 + 0x628);
    return;
  }
  return;
}



// FUNCTION 1409a3460 FUN_1409a3460 body=55 status=ok
// SIG undefined FUN_1409a3460(void)

void FUN_1409a3460(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    iVar1 = FUN_14233f450();
    if (iVar1 < 3) {
      FUN_1409bb130(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 1409a34a0 FUN_1409a34a0 body=171 status=ok
// SIG undefined FUN_1409a34a0(void)

void FUN_1409a34a0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  float fVar7;
  undefined1 local_48 [64];
  
  fVar7 = (float)FUN_14247f5a0(param_1 + 0x230);
  if (fVar7 <= 0.0) {
    fVar7 = 1.0;
  }
  else {
    fVar7 = *(float *)(param_1 + 0x234) / fVar7;
  }
  puVar5 = (undefined8 *)FUN_142c62590(local_48,&DAT_146b2fd10,fVar7);
  iVar2 = *(int *)(param_2 + 0x28);
  *(int *)(param_2 + 0x28) = iVar2 + 1;
  if (*(int *)(param_2 + 0x2c) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_2 + 0x20),iVar2);
  }
  uVar4 = puVar5[1];
  lVar3 = *(longlong *)(param_2 + 0x20);
  lVar6 = (longlong)iVar2 * 0x38;
  *(undefined8 *)(lVar6 + lVar3) = *puVar5;
  ((undefined8 *)(lVar6 + lVar3))[1] = uVar4;
  uVar4 = puVar5[3];
  puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar3);
  *puVar1 = puVar5[2];
  puVar1[1] = uVar4;
  uVar4 = puVar5[5];
  puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar3);
  *puVar1 = puVar5[4];
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar6 + 0x30 + lVar3) = puVar5[6];
  return;
}



// FUNCTION 1409a3550 FUN_1409a3550 body=134 status=ok
// SIG undefined FUN_1409a3550(void)

void FUN_1409a3550(longlong *param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0x5e) = (int)param_1[0x5e] + 1;
  *(int *)((longlong)param_1 + 0x2f4) = *(int *)((longlong)param_1 + 0x2f4) + -1;
  iVar1 = (int)param_1[0x5e];
  if ((int)param_1[0x5f] < (int)param_1[0x5e]) {
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x5e) = iVar1;
  (**(code **)(*param_1 + 0x260))(param_1);
  if (*(int *)((longlong)param_1 + 0x2f4) < 1) {
    if ((*(byte *)((longlong)param_1 + 0x25c) & 8) == 0) {
      FUN_1409add40(param_1,0);
      return;
    }
    *(int *)((longlong)param_1 + 0x2f4) = (int)param_1[0x5f];
    param_1[0x5c] = 0;
  }
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x4d);
  return;
}



// FUNCTION 1409a35e0 FUN_1409a35e0 body=78 status=ok
// SIG undefined FUN_1409a35e0(void)

void FUN_1409a35e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14419ca48;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_14419ca90;
  }
  return;
}



// FUNCTION 1409a3630 FUN_1409a3630 body=78 status=ok
// SIG undefined FUN_1409a3630(void)

void FUN_1409a3630(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14419c988;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_14419c9d0;
  }
  return;
}



// FUNCTION 1409a3680 FUN_1409a3680 body=612 status=ok
// SIG undefined FUN_1409a3680(void)

void FUN_1409a3680(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined8 local_res8;
  
  lVar6 = *(longlong *)(param_1 + 0x118);
  pwVar9 = (wchar_t *)0x0;
  if (lVar6 != 0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (iVar3 = FUN_14233f450(param_1), iVar3 == 3)) {
      uVar5 = FUN_1414aa4c0();
      lVar6 = AGameStateBase::OnRep_GameModeClass(lVar6,uVar5);
      if (lVar6 != 0) {
        lVar4 = FUN_1414aa4c0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          pwVar7 = _guard_xfg_dispatch_icall_nop
                             (L"&UOakPlayerAbilityManagerComponent::OnPlayerLevelUp",L"::");
          pwVar8 = pwVar9;
          while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
            pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
            pwVar8 = pwVar2;
          }
          FName::FName(&local_res8,pwVar8 + 2,1);
          TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar6 + 0x208,param_1,local_res8);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerAbilityTreeReset",L"::");
    pwVar8 = pwVar9;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar8 = pwVar2;
    }
    FName::FName(&local_res8,pwVar8 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(param_1 + 0x3b0) + 0x68,param_1,local_res8);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerAbilityTreeGradeChanged",L"::");
    pwVar8 = pwVar9;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar8 = pwVar2;
    }
    FName::FName(&local_res8,pwVar8 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(param_1 + 0x3b0) + 0x58,param_1,local_res8);
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerAbilityTreePointsChanged",L"::");
    while (pwVar7 = pwVar8, pwVar7 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
      pwVar9 = pwVar7;
    }
    FName::FName(&local_res8,pwVar9 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(param_1 + 0x3b0) + 0x48,param_1,local_res8);
  }
  return;
}



// FUNCTION 1409a38f0 FUN_1409a38f0 body=173 status=ok
// SIG undefined FUN_1409a38f0(void)

void FUN_1409a38f0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  float fVar1;
  wchar_t *pwVar2;
  longlong local_28 [4];
  
  if (param_2 != 0) {
    FUN_142228330();
    fVar1 = *(float *)(param_2 + 0x240);
    pwVar2 = L"{c:r}Inactive{c}";
    *(float *)(param_2 + 0x240) = fVar1 + 15.0;
    if (*(char *)(param_1 + 0x518) != '\0') {
      pwVar2 = L"{c:r}Searching{c:}";
    }
    FString::PrintfImpl(local_28,L"Command Ring: %s",pwVar2,param_4,param_5);
    FUN_1428c0170(param_2 + 0x98,local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    *(float *)(param_2 + 0x240) = fVar1;
  }
  return;
}



// FUNCTION 1409a39a0 FUN_1409a39a0 body=736 status=ok
// SIG undefined FUN_1409a39a0(void)

void FUN_1409a39a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  void *_Dst;
  float fVar2;
  int iVar3;
  ulonglong uVar4;
  void *_Src;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined8 uVar11;
  undefined8 local_res10;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined2 *local_80;
  undefined8 local_78;
  undefined2 *local_70;
  undefined8 local_68;
  void *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  
  if ((param_2 != 0) && (0 < *(int *)(param_1 + 0x20))) {
    fVar2 = *(float *)(param_2 + 0x240);
    local_90 = 0;
    local_88 = 0x11;
    *(float *)(param_2 + 0x240) = fVar2 + 15.0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
    FGenericPlatformString::Memcpy(local_90,L"Weapon Shot Mod:",0x22);
    lVar9 = *(longlong *)(param_1 + 0x18);
    lVar1 = lVar9 + (longlong)*(int *)(param_1 + 0x20) * 0x28;
    for (; lVar9 != lVar1; lVar9 = lVar9 + 0x28) {
      lVar6 = FWeakObjectPtr::Get(lVar9 + 0x14);
      if (lVar6 == 0) {
        local_70 = (undefined2 *)0x0;
        local_68 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
        FGenericPlatformString::Memcpy(local_70,&DAT_143f3edc8,10);
      }
      else {
        local_res10 = *(undefined8 *)(lVar6 + 0x18);
        FName::ToString(&local_res10,&local_70);
      }
      iVar7 = 0;
      puVar8 = &DAT_143f3eda8;
      if ((int)local_68 != 0) {
        puVar8 = local_70;
      }
      lVar6 = FWeakObjectPtr::Get(lVar9 + 0xc);
      if (lVar6 == 0) {
        local_80 = (undefined2 *)0x0;
        local_78 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,0);
        FGenericPlatformString::Memcpy(local_80,&DAT_143f3edc8,10);
      }
      else {
        local_98 = *(undefined8 *)(lVar6 + 0x18);
        FName::ToString(&local_98,&local_80);
      }
      puVar10 = &DAT_143f3eda8;
      if ((int)local_78 != 0) {
        puVar10 = local_80;
      }
      FString::PrintfImpl(&local_50,L"%s/%s",puVar10,puVar8);
      if (local_80 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_70 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      puVar8 = &DAT_143f3eda8;
      if (local_48 != 0) {
        puVar8 = local_50;
      }
      uVar11 = 0x72;
      if (*(char *)(lVar9 + 0x24) != '\0') {
        uVar11 = 0x67;
      }
      FString::PrintfImpl(&local_60,L" [{c:%c}%s{c}]",uVar11,puVar8);
      _Src = local_60;
      uVar4 = local_88;
      if (local_58 != 0) {
        iVar7 = local_58 + -1;
      }
      if (iVar7 != 0) {
        iVar3 = (int)local_88;
        lVar6 = (longlong)(int)local_88;
        iVar5 = (uint)((int)local_88 == 0) + (int)local_88 + iVar7;
        local_88 = CONCAT44(local_88._4_4_,iVar5);
        if (local_88._4_4_ < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,uVar4 & 0xffffffff);
        }
        _Dst = (void *)(local_90 + (lVar6 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)_Dst) = 0;
      }
      if (local_60 != (void *)0x0) {
        FMemory::Free(local_60);
      }
      if (local_50 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    FUN_1428c0170(param_2 + 0x98,&local_90);
    *(float *)(param_2 + 0x240) = fVar2;
    if (local_90 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1409a3c80 FUN_1409a3c80 body=834 status=ok
// SIG undefined FUN_1409a3c80(void)

void FUN_1409a3c80(longlong param_1,longlong param_2)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  bool bVar15;
  longlong lVar16;
  longlong local_res10;
  undefined4 in_stack_00000030;
  undefined8 local_a8;
  longlong local_a0;
  undefined2 *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined8 local_80;
  longlong local_78 [2];
  longlong local_68 [6];
  
  bVar15 = false;
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x3b0);
  }
  lVar16 = *(longlong *)(param_1 + 0xb8);
  plVar10 = (longlong *)0x0;
  bVar2 = false;
  fVar1 = *(float *)(param_2 + 0x240);
  local_a0 = lVar16 + (longlong)*(int *)(param_1 + 0xc0) * 0x28;
  if (lVar16 != local_a0) {
    do {
      if (*(longlong *)(lVar16 + 0x10) != 0) {
        plVar4 = (longlong *)UUGLoadoutBarUW::GetPrivateStaticClass();
        plVar9 = *(longlong **)(lVar16 + 0x10);
        for (plVar7 = plVar9; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[6]) {
          if (plVar7 == plVar4) goto LAB_1409a3d40;
        }
      }
      plVar9 = (longlong *)0x0;
LAB_1409a3d40:
      if (plVar10 != (longlong *)0x0) {
        plVar4 = (longlong *)UUGLoadoutBarUW::GetPrivateStaticClass();
        plVar7 = plVar10;
        do {
          plVar5 = plVar10;
          if (plVar7 == plVar4) goto LAB_1409a3d60;
          plVar7 = (longlong *)plVar7[6];
        } while (plVar7 != (longlong *)0x0);
      }
      plVar5 = (longlong *)0x0;
LAB_1409a3d60:
      if (plVar9 != plVar5) {
        if (bVar2) {
          *(float *)(param_2 + 0x240) = fVar1;
        }
        plVar10 = *(longlong **)(lVar16 + 0x10);
        if (plVar10 == (longlong *)0x0) {
LAB_1409a3dc6:
          bVar15 = true;
          if (plVar10 != (longlong *)0x0) {
            plVar7 = (longlong *)UUGLoadoutBarUW::GetPrivateStaticClass();
            plVar9 = plVar10;
            do {
              if (plVar9 == plVar7) {
                local_res10 = plVar10[3];
                FName::ToString(&local_res10,&local_98);
                goto LAB_1409a3e18;
              }
              plVar9 = (longlong *)plVar9[6];
            } while (plVar9 != (longlong *)0x0);
          }
          local_90 = 5;
          local_98 = (undefined2 *)0x0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
          FGenericPlatformString::Memcpy(local_98,&DAT_143f3edc8,10);
LAB_1409a3e18:
          puVar13 = &DAT_143f3eda8;
          if ((int)local_90 != 0) {
            puVar13 = local_98;
          }
        }
        else {
          lVar8 = plVar10[0x1f];
          if (lVar8 == 0) {
            (**(code **)(*plVar10 + 0x368))(plVar10);
            lVar8 = plVar10[0x1f];
            if (lVar8 == 0) goto LAB_1409a3dc6;
          }
          puVar6 = (undefined8 *)FText::ToString(lVar8 + 0x40);
          if (*(int *)(puVar6 + 1) == 0) {
            puVar13 = &DAT_143f3eda8;
          }
          else {
            puVar13 = (undefined2 *)*puVar6;
          }
        }
        FString::PrintfImpl(local_78,L"{c:b}%s{c}",puVar13);
        FUN_1428c0170(param_2 + 0x98);
        if (local_78[0] != 0) {
          FMemory::Free();
        }
        if ((bVar15) && (bVar15 = false, local_98 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        bVar2 = true;
        *(float *)(param_2 + 0x240) = fVar1 + 15.0;
      }
      if (*(longlong *)(lVar16 + 0x18) != 0) {
        cVar3 = FUN_1409aec20(*(longlong *)(lVar16 + 0x18),in_stack_00000030,uVar12);
        uVar11 = 0x72;
        if (cVar3 != '\0') {
          uVar11 = 0x67;
        }
        puVar13 = *(undefined2 **)(lVar16 + 0x20);
        if (puVar13 == (undefined2 *)0x0) {
          local_80 = 5;
          local_88 = puVar13;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
          FGenericPlatformString::Memcpy(local_88,&DAT_143f3edc8,10);
        }
        else {
          local_a8 = *(undefined8 *)(puVar13 + 0xc);
          FName::ToString(&local_a8,&local_88);
        }
        puVar13 = &DAT_143f3eda8;
        if ((int)local_80 != 0) {
          puVar13 = local_88;
        }
        puVar6 = (undefined8 *)FText::ToString(*(longlong *)(lVar16 + 0x18) + 0x30);
        if (*(int *)(puVar6 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar6;
        }
        FString::PrintfImpl(local_68,L"{c:%c}[%s]{c} {c:b}%s{c}",uVar11,puVar14,puVar13);
        FUN_1428c0170(param_2 + 0x98);
        if (local_68[0] != 0) {
          FMemory::Free();
        }
        if (local_88 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      lVar16 = lVar16 + 0x28;
    } while (lVar16 != local_a0);
  }
  *(float *)(param_2 + 0x240) = fVar1;
  return;
}



// FUNCTION 1409a3fd0 FUN_1409a3fd0 body=580 status=ok
// SIG undefined FUN_1409a3fd0(void)

void FUN_1409a3fd0(longlong param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined4 local_res8 [2];
  int in_stack_00000030;
  undefined2 *local_58;
  undefined8 local_50;
  longlong local_48 [4];
  
  bVar8 = false;
  local_58 = (undefined2 *)0x0;
  local_50 = 0xe;
  local_res8[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"Ability Slots",0x1c);
  FUN_1428a6fb0(param_2 + 0x98,&local_58,local_res8);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  fVar1 = *(float *)(param_2 + 0x240);
  *(float *)(param_2 + 0x240) = fVar1 + 15.0;
  lVar7 = *(longlong *)(param_1 + 0xb8);
  lVar12 = (longlong)*(int *)(param_1 + 0xc0) * 0x20 + lVar7;
  for (; lVar7 != lVar12; lVar7 = lVar7 + 0x20) {
    lVar4 = *(longlong *)(lVar7 + 0x10);
    if (lVar4 != 0) {
      plVar3 = *(longlong **)(lVar7 + 0x18);
      if (plVar3 == (longlong *)0x0) {
        lVar6 = 0;
      }
      else {
        lVar6 = plVar3[0x1f];
        if (lVar6 == 0) {
          (**(code **)(*plVar3 + 0x368))(plVar3);
          lVar6 = plVar3[0x1f];
          lVar4 = *(longlong *)(lVar7 + 0x10);
        }
      }
      iVar2 = *(int *)(lVar4 + 0x60);
      if (lVar6 == 0) {
        local_58 = (undefined2 *)0x0;
        local_50 = 5;
        bVar8 = true;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
        FGenericPlatformString::Memcpy(local_58,&DAT_143f3edc8,10);
        puVar9 = &DAT_143f3eda8;
        if ((int)local_50 != 0) {
          puVar9 = local_58;
        }
      }
      else {
        puVar5 = (undefined8 *)FText::ToString(lVar6 + 0x40);
        if (*(int *)(puVar5 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar5;
        }
      }
      puVar5 = (undefined8 *)FText::ToString(*(longlong *)(lVar7 + 0x10) + 0x30);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar5;
      }
      uVar10 = 0x72;
      if (iVar2 <= in_stack_00000030) {
        uVar10 = 0x67;
      }
      FString::PrintfImpl(local_48,L"{c:%c}[%s]{c} {c:b}%s{c}",uVar10,puVar11,puVar9);
      FUN_1428c0170(param_2 + 0x98);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      if ((bVar8) && (bVar8 = false, local_58 != (undefined2 *)0x0)) {
        FMemory::Free();
      }
    }
  }
  *(float *)(param_2 + 0x240) = fVar1;
  return;
}



// FUNCTION 1409a4220 FUN_1409a4220 body=853 status=ok
// SIG undefined FUN_1409a4220(void)

void FUN_1409a4220(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  undefined2 *puVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined2 *puVar15;
  bool bVar16;
  ulonglong local_c8;
  undefined2 *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong local_90 [2];
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60 [5];
  
  bVar5 = false;
  bVar4 = false;
  local_c8 = local_c8 & 0xffffffff00000000;
  iVar8 = FUN_1430ec7c0();
  if ((iVar8 == 3) && (0 < *(int *)(param_1 + 0xf0))) {
    lVar12 = param_2 + 0x98;
    local_c8 = local_c8 & 0xffffffff00000000;
    local_c0 = (undefined2 *)0x0;
    local_b8 = 7;
    local_b0 = lVar12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c0,0);
    FGenericPlatformString::Memcpy(local_c0,L"Timers",0xe);
    FUN_1428a6fb0(lVar12,&local_c0,&local_c8);
    if (local_c0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    fVar1 = *(float *)(param_2 + 0x240);
    *(float *)(param_2 + 0x240) = fVar1 + 15.0;
    plVar13 = *(longlong **)(param_1 + 0xe8);
    local_98 = plVar13 + (longlong)*(int *)(param_1 + 0xf0) * 5;
    if (plVar13 != local_98) {
      local_c8 = 0;
      do {
        if (*(char *)((longlong)plVar13 + 0x15) == '\0') {
          bVar16 = true;
        }
        else if (*(char *)((longlong)plVar13 + 0x15) == '\x01') {
          bVar16 = *(char *)(param_1 + 0xa1) == '\x03';
        }
        else {
          bVar16 = false;
        }
        if ((char)plVar13[1] == '\0') {
          bVar5 = true;
          FString::PrintfImpl(local_80,L"{c:b}%.2f{c}/{c:y}%.2f{c}  [{c:g}%d/%d{c}]",
                              (double)*(float *)(plVar13 + 3),
                              (double)*(float *)((longlong)plVar13 + 0xc),
                              *(undefined4 *)((longlong)plVar13 + 0x1c),(int)plVar13[2]);
          plVar9 = local_80;
        }
        else {
          bVar4 = true;
          FString::PrintfImpl(local_90,L"{c:b}%.2f{c}",(double)*(float *)(plVar13 + 3));
          plVar9 = local_90;
        }
        puVar2 = (undefined2 *)*plVar9;
        *plVar9 = 0;
        lVar12 = plVar9[1];
        plVar9[1] = 0;
        if ((bVar4) && (bVar4 = false, local_90[0] != 0)) {
          FMemory::Free();
        }
        if ((bVar5) && (bVar5 = false, local_80[0] != 0)) {
          FMemory::Free();
        }
        lVar3 = *plVar13;
        local_a8 = 0;
        if (lVar3 == 0) {
          local_c8 = 0;
        }
        else {
          local_a8 = *(longlong *)(lVar3 + 0x30);
        }
        if (local_a8 == 0) {
          if (lVar3 == 0) {
            local_c0 = (undefined2 *)0x0;
            local_b8 = 5;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c0,0);
            FGenericPlatformString::Memcpy(local_c0,&DAT_143f3edc8,10);
          }
          else {
            local_a0 = *(undefined8 *)(lVar3 + 0x18);
            FName::ToString(&local_a0,&local_c0);
          }
          bVar7 = false;
          bVar6 = true;
          puVar15 = local_c0;
          if ((int)local_b8 == 0) {
            puVar15 = &DAT_143f3eda8;
          }
        }
        else {
          puVar10 = (undefined8 *)FName::ToString(&local_a8,local_60);
          if (*(int *)(puVar10 + 1) == 0) {
            bVar7 = true;
            bVar6 = false;
            puVar15 = &DAT_143f3eda8;
          }
          else {
            bVar7 = true;
            bVar6 = false;
            puVar15 = (undefined2 *)*puVar10;
          }
        }
        puVar11 = &DAT_143f3eda8;
        if ((int)lVar12 != 0) {
          puVar11 = puVar2;
        }
        uVar14 = 0x72;
        if (bVar16) {
          uVar14 = 0x67;
        }
        FString::PrintfImpl(local_70,L"{c:%c}[%s]{c}: %s",uVar14,puVar15,puVar11);
        FUN_1428c0170(local_b0,local_70);
        if (local_70[0] != 0) {
          FMemory::Free();
        }
        if ((bVar6) && (local_c0 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        if ((bVar7) && (local_60[0] != 0)) {
          FMemory::Free();
        }
        if (puVar2 != (undefined2 *)0x0) {
          FMemory::Free(puVar2);
        }
        plVar13 = plVar13 + 5;
        lVar12 = local_b0;
      } while (plVar13 != local_98);
    }
    *(float *)(lVar12 + 0x1a8) = fVar1;
  }
  FUN_1430eb680(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1409a4580 FUN_1409a4580 body=1242 status=ok
// SIG undefined FUN_1409a4580(void)

void FUN_1409a4580(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  int iVar11;
  wchar_t *pwVar12;
  longlong *plVar13;
  float fVar14;
  undefined8 local_res10;
  wchar_t *local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  
  if (param_2 == 0) {
    return;
  }
  FUN_1409a4220(param_1,param_2,param_3,param_4,param_5);
  fVar2 = *(float *)(param_2 + 0x240);
  lVar1 = param_2 + 0x98;
  pwVar12 = (wchar_t *)0x0;
  *(float *)(param_2 + 0x240) = fVar2 + 15.0;
  if ((char)param_1[0x2f] != '\0') {
    iVar4 = (int)param_1[0x40];
    iVar11 = (int)param_1[0x41];
    pwVar7 = pwVar12;
    iVar6 = 0;
    if (iVar4 < iVar11) {
      fVar14 = (float)FUN_1409a7d90(param_1);
      FString::PrintfImpl(&local_68,L"{c:y}%.2f{c}",(double)fVar14);
      iVar11 = (int)param_1[0x41];
      iVar4 = (int)param_1[0x40];
      pwVar7 = local_68;
      iVar6 = (int)local_60;
    }
    pwVar8 = L"";
    if (iVar6 != 0) {
      pwVar8 = pwVar7;
    }
    FString::PrintfImpl(&local_68,L"Charges [{c:y}%d{c}/%d] %s",iVar4,iVar11,pwVar8);
    FUN_1428c0170(lVar1,&local_68);
    if (local_68 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (pwVar7 != (wchar_t *)0x0) {
      FMemory::Free(pwVar7);
    }
  }
  local_78 = (wchar_t *)0x0;
  local_70 = (ulonglong)(uint)local_70;
  iVar4 = FUN_1430ec7c0(param_1);
  if ((iVar4 == 3) && (*(char *)((longlong)param_1 + 0x222) != '\0')) {
    fVar14 = *(float *)((longlong)param_1 + 0x224);
    pwVar7 = L"{c:r}*PENDING SHUTDOWN*{c} {c:y}%.2f{c} remaining";
  }
  else {
    cVar3 = (**(code **)(*param_1 + 0x380))(param_1);
    if (cVar3 != '\0') {
      local_70 = local_70 & 0xffffffff00000000;
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78,0xe);
      iVar4 = (uint)local_70 + 0xe;
      local_70 = CONCAT44(local_70._4_4_,iVar4);
      if (local_70._4_4_ < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78);
        iVar4 = (uint)local_70;
      }
      builtin_wcsncpy(local_78,L"{c:g}READY{c}",0xe);
      pwVar7 = local_78;
      goto LAB_1409a488d;
    }
    if ((char)param_1[0x2f] == '\0') {
      if ((char)param_1[0x3e] == '\0') {
        local_58 = (undefined4)param_1[0x38];
        uStack_54 = *(undefined4 *)((longlong)param_1 + 0x1c4);
        uStack_50 = (undefined4)param_1[0x39];
        uStack_4c = *(undefined4 *)((longlong)param_1 + 0x1cc);
        local_48 = param_1[0x3a];
        cVar3 = FUN_142d63aa0(&local_58,2);
        if (cVar3 == '\0') {
          fVar14 = (float)FUN_1409a7d90(param_1);
          pwVar7 = L"{c:y}COOLING DOWN{c} {c:y}%.2f{c}";
          goto LAB_1409a47b8;
        }
        goto LAB_1409a4770;
      }
    }
    else {
LAB_1409a4770:
      if ((char)param_1[0x3e] == '\0') {
        local_70 = local_70 & 0xffffffff00000000;
        if ((char)param_1[0x2f] == '\0') {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78,0x16);
          iVar4 = (uint)local_70 + 0x16;
          local_70 = CONCAT44(local_70._4_4_,iVar4);
          if (local_70._4_4_ < iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78);
            iVar4 = (uint)local_70;
          }
          builtin_wcsncpy(local_78,L"***....WHERE AM I?***",0x16);
          pwVar7 = local_78;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78,0x15);
          iVar4 = (uint)local_70 + 0x15;
          local_70 = CONCAT44(local_70._4_4_,iVar4);
          if (local_70._4_4_ < iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78);
            iVar4 = (uint)local_70;
          }
          builtin_wcsncpy(local_78,L"***....NO CHARGES***",0x15);
          pwVar7 = local_78;
        }
        goto LAB_1409a488d;
      }
    }
    cVar3 = FUN_142d52a00(param_1 + 0x3b);
    if (cVar3 == '\0') {
      fVar14 = 0.0;
    }
    else {
      uVar5 = FUN_142d52a20(param_1 + 0x3b);
      uVar5 = FArchive::operator<<(uVar5);
      fVar14 = (float)FUN_142d5fea0(uVar5);
    }
    pwVar7 = L"{c:r}ACTIVE{c} {c:y}%2.f{c}";
  }
LAB_1409a47b8:
  FString::PrintfImpl(&local_68,pwVar7,(double)fVar14);
  pwVar7 = local_68;
  iVar4 = (int)local_60;
LAB_1409a488d:
  pwVar8 = L"";
  if (iVar4 != 0) {
    pwVar8 = pwVar7;
  }
  FString::PrintfImpl(&local_68,L"STATE: %s",pwVar8);
  FUN_1428c0170(lVar1,&local_68);
  if (local_68 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (pwVar7 != (wchar_t *)0x0) {
    FMemory::Free(pwVar7);
  }
  FString::PrintfImpl(&local_68,L"{c:r}OWNED RESOURCES{c}: %d",(int)param_1[0x43]);
  FUN_1428c0170(lVar1,&local_68);
  if (local_68 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  plVar9 = (longlong *)param_1[0x42];
  plVar13 = plVar9 + (longlong)(int)param_1[0x43] * 2;
  do {
    if (plVar9 == plVar13) {
      *(float *)(param_2 + 0x240) = fVar2;
      return;
    }
    pwVar7 = pwVar12;
    if (((*plVar9 == 0) || ((longlong *)plVar9[1] == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(*(longlong *)plVar9[1] + 0x20))(), pwVar7 = (wchar_t *)0x0,
       cVar3 == '\0')) {
LAB_1409a4969:
      pwVar8 = L"";
    }
    else {
      FString::PrintfImpl(&local_68,L"{c:r}Blocking{c}");
      pwVar7 = local_68;
      iVar4 = (int)local_60;
      local_68 = (wchar_t *)0x0;
      local_60 = 0;
      pwVar8 = pwVar7;
      if (iVar4 == 0) goto LAB_1409a4969;
    }
    if (*plVar9 == 0) {
      local_78 = (wchar_t *)0x0;
      local_70 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      FGenericPlatformString::Memcpy(local_78,&DAT_143f3edc8,10);
    }
    else {
      local_res10 = *(undefined8 *)(*plVar9 + 0x18);
      FName::ToString(&local_res10,&local_78);
    }
    pwVar10 = L"";
    if ((uint)local_70 != 0) {
      pwVar10 = local_78;
    }
    FString::PrintfImpl(&local_58,L"   -- %s %s",pwVar10,pwVar8);
    FUN_1428c0170(lVar1);
    if (CONCAT44(uStack_54,local_58) != 0) {
      FMemory::Free();
    }
    if (local_78 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (pwVar7 != (wchar_t *)0x0) {
      FMemory::Free(pwVar7);
    }
    plVar9 = plVar9 + 2;
  } while( true );
}



// FUNCTION 1409a4a60 FUN_1409a4a60 body=418 status=ok
// SIG undefined FUN_1409a4a60(void)

void FUN_1409a4a60(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined4 local_res18 [4];
  longlong local_38 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146864c90) && (_Init_thread_header(&DAT_146864c90), DAT_146864c90 == -1))
  {
    FName::FName(&DAT_146864c88,L"OakAbilities",1);
    _Init_thread_footer(&DAT_146864c90);
  }
  plVar3 = (longlong *)*param_3;
  plVar1 = plVar3 + (int)param_3[1];
  do {
    if (plVar3 == plVar1) {
LAB_1409a4b9b:
      FUN_1430ebf00(param_1,param_2,param_3,param_4);
      return;
    }
    if (*plVar3 == DAT_146864c88) {
      uVar2 = FUN_1409a7720(param_1);
      local_38[1] = 0xe;
      local_38[0] = 0;
      local_res18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      FGenericPlatformString::Memcpy(local_38[0],L"OAK ABILITIES",0x1c);
      FUN_1428a6fb0(param_2 + 0x98,local_38,local_res18);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      FUN_1409a3c80(param_1 + 0x488,param_2,param_3,param_4,param_5,uVar2);
      FUN_1409a3fd0(param_1 + 0x3c0,param_2,param_3,param_4,param_5,uVar2);
      goto LAB_1409a4b9b;
    }
    plVar3 = plVar3 + 1;
  } while( true );
}



// FUNCTION 1409a4c10 FUN_1409a4c10 body=1228 status=ok
// SIG undefined FUN_1409a4c10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409a4c10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  longlong local_c8;
  float local_c0;
  longlong local_b8;
  float local_b0;
  longlong local_a8;
  float local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_80;
  float local_78;
  longlong local_70;
  float local_68;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  longlong local_38;
  float fStack_30;
  float fStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  plVar1 = (longlong *)param_1[0x22];
  if (((plVar1 == (longlong *)0x0) || (param_1[0x77] == 0)) ||
     (*(char *)((longlong)param_1 + 0x3f4) != '\0')) {
    FUN_1413dd5d0();
    return;
  }
  lVar2 = plVar1[0x2d];
  if (lVar2 == 0) {
    local_c0 = DAT_1468b5d98;
    plVar14 = &local_c8;
    local_c8 = _DAT_1468b5d90;
  }
  else {
    plVar14 = &local_b8;
    local_b0 = (float)*(undefined4 *)(lVar2 + 0x228);
    local_b8 = *(longlong *)(lVar2 + 0x220);
  }
  local_70 = *plVar14;
  local_b0 = *(float *)(plVar14 + 1);
  lVar13 = plVar1[0x9a];
  if (lVar13 != 0) {
    uVar17 = *(uint *)(lVar13 + 0x230) & _DAT_1468647c0;
    uVar18 = *(uint *)(lVar13 + 0x234) & uRam00000001468647c4;
    uVar19 = *(uint *)(lVar13 + 0x238) & uRam00000001468647c8;
    uVar20 = *(uint *)(lVar13 + 0x23c) & uRam00000001468647cc;
    auVar21._4_4_ = uVar18;
    auVar21._0_4_ = uVar17;
    auVar21._8_4_ = uVar19;
    auVar21._12_4_ = uVar20;
    auVar22._4_4_ = uVar19;
    auVar22._0_4_ = uVar18;
    auVar22._8_4_ = uVar17;
    auVar22._12_4_ = uVar20;
    auVar22 = minps(auVar21,auVar22);
    auVar7._4_4_ = uVar17;
    auVar7._0_4_ = uVar19;
    auVar7._8_4_ = uVar18;
    auVar7._12_4_ = uVar20;
    auVar22 = minps(auVar22,auVar7);
    local_b0 = local_b0 - auVar22._0_4_ * *(float *)(lVar13 + 0x710);
  }
  local_68 = local_b0;
  if (lVar2 == 0) {
    uVar15 = (undefined4)DAT_1468b5da0;
    uVar16 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    local_c0 = DAT_1468b5da8;
  }
  else {
    fVar8 = *(float *)(lVar2 + 0x210);
    local_38 = *(longlong *)(lVar2 + 0x210);
    fStack_30 = *(float *)(lVar2 + 0x218);
    fStack_2c = *(float *)(lVar2 + 0x21c);
    auVar4._4_4_ = -(uint)(*(float *)(lVar2 + 0x254) != *(float *)(lVar2 + 0x214));
    auVar4._0_4_ = -(uint)(*(float *)(lVar2 + 0x250) != fVar8);
    auVar4._8_4_ = -(uint)(*(float *)(lVar2 + 600) != fStack_30);
    auVar4._12_4_ = -(uint)(*(float *)(lVar2 + 0x25c) != fStack_2c);
    iVar11 = movmskps((int)lVar13,auVar4);
    if (iVar11 != 0) {
      *(float *)(lVar2 + 0x250) = fVar8;
      *(float *)(lVar2 + 0x254) = *(float *)(lVar2 + 0x214);
      *(float *)(lVar2 + 600) = fStack_30;
      *(float *)(lVar2 + 0x25c) = fStack_2c;
      puVar12 = (undefined8 *)FQuat::Rotator(&local_38,&local_98);
      *(undefined8 *)(lVar2 + 0x260) = *puVar12;
      *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(puVar12 + 1);
    }
    uVar15 = (undefined4)*(undefined8 *)(lVar2 + 0x260);
    uVar16 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x260) >> 0x20);
    local_c0 = *(float *)(lVar2 + 0x268);
  }
  local_c8 = CONCAT44(uVar16,uVar15);
  local_80 = local_c8;
  local_78 = local_c0;
  FUN_1413dd610(param_1);
  cVar9 = FUN_140ec3060(plVar1);
  cVar10 = FUN_140ec3060(param_1[0x77]);
  if (cVar9 != cVar10) {
LAB_1409a5063:
    FUN_1409bc080(param_1,&local_70,&local_80);
    FUN_1413dd650(param_1);
    return;
  }
  lVar2 = param_1[0x77];
  FUN_14223c460(plVar1,0);
  if (lVar2 != 0) {
    FUN_14223c460(lVar2,0);
  }
  lVar13 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar13 != 0) && (cVar9 = FUN_1413dd370(param_1), cVar9 != '\0')) {
    lVar3 = *(longlong *)(param_1[0x77] + 0x168);
    if (lVar3 == 0) {
      local_c8 = _DAT_1468b5d90;
      local_c0 = DAT_1468b5d98;
    }
    else {
      local_c8 = *(longlong *)(lVar3 + 0x220);
      local_c0 = *(float *)(lVar3 + 0x228);
    }
    local_b8 = local_c8;
    local_b0 = local_c0;
    lVar3 = *(longlong *)(param_1[0x77] + 0x168);
    if (lVar3 == 0) {
      uVar15 = (undefined4)DAT_1468b5da0;
      uVar16 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_c0 = DAT_1468b5da8;
    }
    else {
      local_58 = *(float *)(lVar3 + 0x210);
      fStack_54 = *(float *)(lVar3 + 0x214);
      fStack_50 = *(float *)(lVar3 + 0x218);
      fStack_4c = *(float *)(lVar3 + 0x21c);
      auVar5._4_4_ = -(uint)(*(float *)(lVar3 + 0x254) != fStack_54);
      auVar5._0_4_ = -(uint)(*(float *)(lVar3 + 0x250) != local_58);
      auVar5._8_4_ = -(uint)(*(float *)(lVar3 + 600) != fStack_50);
      auVar5._12_4_ = -(uint)(*(float *)(lVar3 + 0x25c) != fStack_4c);
      iVar11 = movmskps(local_c0,auVar5);
      if (iVar11 != 0) {
        *(float *)(lVar3 + 0x250) = local_58;
        *(float *)(lVar3 + 0x254) = fStack_54;
        *(float *)(lVar3 + 600) = fStack_50;
        *(float *)(lVar3 + 0x25c) = fStack_4c;
        puVar12 = (undefined8 *)FQuat::Rotator(&local_58,&local_98);
        *(undefined8 *)(lVar3 + 0x260) = *puVar12;
        *(undefined4 *)(lVar3 + 0x268) = *(undefined4 *)(puVar12 + 1);
      }
      uVar15 = (undefined4)*(undefined8 *)(lVar3 + 0x260);
      uVar16 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x260) >> 0x20);
      local_c0 = *(float *)(lVar3 + 0x268);
    }
    local_c8 = CONCAT44(uVar16,uVar15);
    local_a8 = local_c8;
    local_a0 = local_c0;
    cVar9 = FUN_142546cc0(lVar13,plVar1,&local_b8,&local_a8);
    if (cVar9 != '\0') {
      fStack_30 = local_b0;
      local_38 = local_b8;
      fStack_2c = (float)CONCAT31(fStack_2c._1_3_,1);
      lVar13 = *(longlong *)(param_1[0x77] + 0x168);
      if (lVar13 == 0) {
        uVar15 = (undefined4)DAT_1468b5da0;
        uVar16 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_a0 = DAT_1468b5da8;
      }
      else {
        local_48 = *(float *)(lVar13 + 0x210);
        fStack_44 = *(float *)(lVar13 + 0x214);
        fStack_40 = *(float *)(lVar13 + 0x218);
        fStack_3c = *(float *)(lVar13 + 0x21c);
        auVar6._4_4_ = -(uint)(*(float *)(lVar13 + 0x254) != fStack_44);
        auVar6._0_4_ = -(uint)(*(float *)(lVar13 + 0x250) != local_48);
        auVar6._8_4_ = -(uint)(*(float *)(lVar13 + 600) != fStack_40);
        auVar6._12_4_ = -(uint)(*(float *)(lVar13 + 0x25c) != fStack_3c);
        iVar11 = movmskps((int)param_1[0x77],auVar6);
        if (iVar11 != 0) {
          *(float *)(lVar13 + 0x250) = local_48;
          *(float *)(lVar13 + 0x254) = fStack_44;
          *(float *)(lVar13 + 600) = fStack_40;
          *(float *)(lVar13 + 0x25c) = fStack_3c;
          puVar12 = (undefined8 *)FQuat::Rotator(&local_48,&local_58);
          *(undefined8 *)(lVar13 + 0x260) = *puVar12;
          *(undefined4 *)(lVar13 + 0x268) = *(undefined4 *)(puVar12 + 1);
        }
        uVar15 = (undefined4)*(undefined8 *)(lVar13 + 0x260);
        uVar16 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x260) >> 0x20);
        local_a0 = *(float *)(lVar13 + 0x268);
      }
      local_a8 = CONCAT44(uVar16,uVar15);
      local_b0 = local_a0;
      lVar13 = plVar1[0x2d];
      local_b8 = CONCAT44(uVar16,uVar15);
      if (lVar13 == 0) {
        local_a0 = DAT_1468b5d98;
        plVar14 = &local_a8;
        local_a8 = _DAT_1468b5d90;
      }
      else {
        plVar14 = &local_c8;
        local_c0 = *(float *)(lVar13 + 0x228);
        local_c8 = *(longlong *)(lVar13 + 0x220);
      }
      local_98 = *plVar14;
      local_90 = (undefined4)plVar14[1];
      local_d8 = 0;
      cVar9 = (**(code **)(*plVar1 + 0x500))(plVar1,&local_38,&local_b8,0);
      if (cVar9 != '\0') {
        FUN_140a768c0(plVar1,&local_98);
        if ((longlong *)plVar1[0x1cd] != (longlong *)0x0) {
          (**(code **)(*(longlong *)plVar1[0x1cd] + 0x430))();
        }
        fStack_2c = (float)((uint)fStack_2c & 0xffffff00);
        FUN_14223c460(plVar1,1);
        goto LAB_1409a5063;
      }
      goto LAB_1409a50ae;
    }
  }
  fStack_2c = (float)((uint)fStack_2c & 0xffffff00);
LAB_1409a50ae:
  FUN_1413dd5d0(param_1);
  fStack_2c = (float)((uint)fStack_2c & 0xffffff00);
  FUN_14223c460(plVar1,1);
  if (lVar2 != 0) {
    FUN_14223c460(lVar2,1);
  }
  return;
}



// FUNCTION 1409a50e0 FUN_1409a50e0 body=149 status=ok
// SIG undefined FUN_1409a50e0(void)

void FUN_1409a50e0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*param_1 + 0x68);
    do {
      if (plVar1[5] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      if (plVar1[-5] != 0) {
        FMemory::Free();
      }
      if (plVar1[-10] != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x14;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 1409a5180 Empty body=99 status=ok
// SIG undefined Empty(void)

void TArray<FGGamepadButtonLayout,FDefaultAllocator>::Empty(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = *param_1 + 0x10;
    do {
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (lVar1);
      lVar1 = lVar1 + 0x20;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 1409a51f0 FUN_1409a51f0 body=276 status=ok
// SIG undefined FUN_1409a51f0(void)

void FUN_1409a51f0(longlong param_1,char param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined8 local_res8;
  
  if ((*(char *)(param_1 + 0x1b9) != '\0') && (lVar4 = FUN_1430ec7a0(), lVar4 != 0)) {
    lVar5 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (param_2 != '\0') {
        pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerDeadOrDying",L"::");
        pwVar3 = (wchar_t *)0x0;
        while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_res8,pwVar3 + 2,1);
        FUN_14074ba20(*(longlong *)(lVar4 + 0x10e0) + 0x1140,param_1,FUN_1409b1370,local_res8);
        return;
      }
      FUN_1407665e0(*(longlong *)(lVar4 + 0x10e0) + 0x1140,param_1);
    }
  }
  return;
}



// FUNCTION 1409a5310 FUN_1409a5310 body=55 status=ok
// SIG undefined FUN_1409a5310(void)

void FUN_1409a5310(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x25a) != '\0') {
    uVar1 = FUN_142c6f130();
    FUN_142d8f6b0(uVar1,DAT_146864b10);
  }
  FUN_1409d1d40(param_1);
  return;
}



// FUNCTION 1409a5350 FUN_1409a5350 body=95 status=ok
// SIG undefined FUN_1409a5350(void)

void FUN_1409a5350(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((*(char *)(lVar1 + 0x260) != '\0') && (*(longlong *)(lVar1 + 0x268) != 0)) {
    FUN_140e61de0(*(longlong *)(lVar1 + 0x268),*(undefined8 *)(lVar1 + 0x18));
    lVar1 = *(longlong *)(param_1 + 0x10);
  }
  if (*(char *)(lVar1 + 0x25a) != '\0') {
    uVar2 = FUN_142c6f130(param_1);
    FUN_142d8f6b0(uVar2,DAT_146864b10);
  }
  FUN_1409d1d40(param_1);
  return;
}



// FUNCTION 1409a53b0 FUN_1409a53b0 body=28 status=ok
// SIG undefined FUN_1409a53b0(void)

void FUN_1409a53b0(longlong param_1)

{
  FUN_142ce9580();
  FUN_1409bcf90(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1409a53d0 FUN_1409a53d0 body=59 status=ok
// SIG undefined FUN_1409a53d0(void)

void FUN_1409a53d0(longlong param_1)

{
  char cVar1;
  
  FUN_14222a250();
  cVar1 = FUN_14059f160(param_1 + 0x520);
  if (cVar1 != '\0') {
    FUN_1405ac8f0(param_1 + 0x520,0,4);
    return;
  }
  return;
}



// FUNCTION 1409a5410 FUN_1409a5410 body=72 status=ok
// SIG undefined FUN_1409a5410(void)

void FUN_1409a5410(longlong param_1,undefined4 param_2)

{
  if ((*(char *)(param_1 + 0x128) == '\x03') && (*(char *)(param_1 + 0x702) != '\0')) {
    FUN_1409be4f0(param_1 + 0x6e0);
    *(undefined1 *)(param_1 + 0x702) = 0;
  }
  FUN_14126ac70(param_1,param_2);
  return;
}



// FUNCTION 1409a5460 FUN_1409a5460 body=431 status=ok
// SIG undefined FUN_1409a5460(void)

void FUN_1409a5460(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  
  if ((*(char *)(param_1 + 0x128) == '\x03') && (*(char *)(param_1 + 0x702) != '\0')) {
    FUN_1409be4f0(param_1 + 0x6e0);
    *(undefined1 *)(param_1 + 0x702) = 0;
  }
  FUN_14126ac70(param_1,param_2);
  if ((*(char *)(param_1 + 0x128) == '\x03') && (lVar2 = *(longlong *)(param_1 + 0x708), lVar2 != 0)
     ) {
    piVar7 = *(int **)(lVar2 + 0x268);
    piVar5 = piVar7 + (longlong)*(int *)(lVar2 + 0x270) * 8;
    if (piVar7 != piVar5) {
      while (((piVar7[1] != *(int *)(param_1 + 0x714) || piVar7[2] != *(int *)(param_1 + 0x718)) ||
             piVar7[3] != *(int *)(param_1 + 0x71c)) || *piVar7 != *(int *)(param_1 + 0x710)) {
        piVar7 = piVar7 + 8;
        if (piVar7 == piVar5) {
          return;
        }
      }
      if (piVar7 != (int *)0x0) {
        FWeakObjectPtr::operator=(local_res8,param_1);
        iVar1 = piVar7[6];
        if (iVar1 != 0) {
          iVar8 = 0;
          cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                            (*(undefined8 *)(piVar7 + 4),local_res8);
          bVar9 = cVar4 == '\0';
          iVar6 = 0;
          do {
            iVar3 = iVar6;
            do {
              iVar3 = iVar3 + 1;
              if (iVar1 <= iVar3) break;
              cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                                (*(longlong *)(piVar7 + 4) + (longlong)iVar3 * 8,local_res8);
            } while (bVar9 == (cVar4 == '\0'));
            if (bVar9 != false) {
              if (iVar8 != iVar6) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*(longlong *)(piVar7 + 4) + (longlong)iVar8 * 8),
                           (void *)(*(longlong *)(piVar7 + 4) + (longlong)iVar6 * 8),
                           (longlong)(iVar3 - iVar6) << 3);
              }
              iVar8 = iVar8 + (iVar3 - iVar6);
            }
            bVar9 = (bool)(bVar9 ^ 1);
            iVar6 = iVar3;
          } while (iVar3 < iVar1);
          piVar7[6] = iVar8;
        }
      }
    }
  }
  return;
}



// FUNCTION 1409a5610 FUN_1409a5610 body=72 status=ok
// SIG undefined FUN_1409a5610(void)

void FUN_1409a5610(longlong param_1,undefined4 param_2)

{
  if ((*(char *)(param_1 + 0x128) == '\x03') && (*(char *)(param_1 + 0x788) != '\0')) {
    FUN_1409be4f0(param_1 + 0x760);
    *(undefined1 *)(param_1 + 0x788) = 0;
  }
  FUN_14222a250(param_1,param_2);
  return;
}



// FUNCTION 1409a5670 FUN_1409a5670 body=27 status=ok
// SIG undefined FUN_1409a5670(void)

void FUN_1409a5670(undefined8 param_1)

{
  FUN_14233a670();
  FUN_1409a3250(param_1);
  return;
}



// FUNCTION 1409a5690 FUN_1409a5690 body=192 status=ok
// SIG undefined FUN_1409a5690(void)

undefined1 FUN_1409a5690(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_28;
  int local_20;
  int local_1c;
  undefined1 local_18;
  char local_17;
  
  plVar3 = (longlong *)FUN_1409b94b0();
  if (plVar3 != (longlong *)0x0) {
    uVar4 = AGFireballProjectile::GetPrivateStaticClass();
    lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
    if ((lVar5 != 0) && (lVar1 = *(longlong *)(param_1 + 0x88), lVar1 != 0)) {
      if (*(char *)(lVar1 + 0x98) != '\0') {
        return 1;
      }
      if ((*(longlong *)(lVar5 + 0x3b0) != 0) &&
         (cVar2 = FUN_1409a7690(*(longlong *)(lVar5 + 0x3b0),lVar1,&local_28), cVar2 != '\0')) {
        if (local_17 == '\0') {
          if (0 < local_1c + local_20) {
            return 1;
          }
          if (local_28 == 0) {
            return 0;
          }
          if ((1 < (byte)(*(char *)(local_28 + 0x34) - 3U)) && (*(int *)(local_28 + 0x30) != 0)) {
            return 0;
          }
        }
        return local_18;
      }
    }
  }
  return 0;
}



// FUNCTION 1409a5750 FUN_1409a5750 body=410 status=ok
// SIG undefined FUN_1409a5750(void)

ulonglong FUN_1409a5750(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  if (param_3 != 0) {
    lVar3 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
    iVar2 = *(int *)(lVar3 + 0x90);
    uVar5 = (longlong)iVar2;
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < iVar2) ||
       (uVar5 = *(ulonglong *)(*(longlong *)(param_3 + 0x10) + 0x88),
       *(longlong *)(uVar5 + (longlong)iVar2 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar5 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar5 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
LAB_1409a5894:
      if (*(longlong *)(param_1 + 0x88) != 0) {
        plVar6 = *(longlong **)(param_3 + 0xe8);
        plVar1 = plVar6 + (longlong)*(int *)(param_3 + 0xf0) * 5;
        for (; plVar6 != plVar1; plVar6 = plVar6 + 5) {
          if (*plVar6 == *(longlong *)(param_1 + 0x88)) goto LAB_1409a58d4;
        }
        plVar6 = (longlong *)0x0;
LAB_1409a58d4:
        return CONCAT71((int7)((ulonglong)plVar1 >> 8),plVar6 != (longlong *)0x0);
      }
      goto LAB_1409a57d3;
    }
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    in_RAX = FUN_1430f1090();
    for (uVar5 = *(ulonglong *)(param_1 + 0x90); uVar5 != 0; uVar5 = *(ulonglong *)(uVar5 + 0x30)) {
      if (uVar5 == in_RAX) {
        if ((*(ulonglong *)(param_1 + 0x90) != 0) && (param_2 != (longlong *)0x0)) {
          lVar3 = FUN_1428dfc70();
          iVar2 = *(int *)(lVar3 + 0x90);
          uVar5 = (longlong)iVar2;
          if ((*(int *)(param_2[2] + 0x90) < iVar2) ||
             (uVar5 = *(ulonglong *)(param_2[2] + 0x88),
             *(longlong *)(uVar5 + (longlong)iVar2 * 8) != lVar3 + 0x88)) {
            in_RAX = uVar5 & 0xffffffffffffff00;
          }
          else {
            in_RAX = CONCAT71((int7)(uVar5 >> 8),1);
          }
          if ((char)in_RAX != '\0') {
            uVar4 = UTDMCommanderArtilleryWidget::GetPrivateStaticClass();
            lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
            in_RAX = 0;
            if (lVar3 != 0) {
              param_3 = FUN_1430ec580(lVar3,*(undefined8 *)(param_1 + 0x90));
              in_RAX = 0;
              if (param_3 != 0) {
                lVar3 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
                iVar2 = *(int *)(lVar3 + 0x90);
                uVar5 = (longlong)iVar2;
                if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < iVar2) ||
                   (uVar5 = *(ulonglong *)(*(longlong *)(param_3 + 0x10) + 0x88),
                   *(longlong *)(uVar5 + (longlong)iVar2 * 8) != lVar3 + 0x88)) {
                  in_RAX = uVar5 & 0xffffffffffffff00;
                }
                else {
                  in_RAX = CONCAT71((int7)(uVar5 >> 8),1);
                }
                if ((char)in_RAX != '\0') goto LAB_1409a5894;
              }
            }
          }
        }
        break;
      }
    }
  }
LAB_1409a57d3:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1409a58f0 FUN_1409a58f0 body=114 status=ok
// SIG undefined FUN_1409a58f0(void)

undefined1 FUN_1409a58f0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_1409b94b0();
  if (plVar1 != (longlong *)0x0) {
    uVar2 = AGFireballProjectile::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      lVar3 = FUN_1409a6100(lVar3,*(undefined8 *)(param_1 + 0x88));
      if (lVar3 != 0) {
        return *(undefined1 *)(lVar3 + 0x1f0);
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1409a5970 FUN_1409a5970 body=380 status=ok
// SIG undefined FUN_1409a5970(void)

bool FUN_1409a5970(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_res10 [3];
  
  if (param_2 == (longlong *)0x0) {
    return false;
  }
  lVar4 = FUN_1413ffe00();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    lVar4 = FUN_1413e48b0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return false;
    }
    if (param_2[0x91] == 0) {
      return false;
    }
    param_2 = *(longlong **)(param_2[0x91] + 0x118);
    if (param_2 == (longlong *)0x0) {
      return false;
    }
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return false;
    }
  }
  uVar5 = AGFireballProjectile::GetPrivateStaticClass();
  lVar4 = (**(code **)(*param_2 + 0x628))(param_2,uVar5);
  if (lVar4 == 0) {
    return false;
  }
  lVar1 = *(longlong *)(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    local_res10[0] = *(undefined8 *)(param_1 + 0x88);
    lVar4 = FUN_1409ab2f0(lVar4 + 0x488,local_res10);
    if (lVar4 == 0) {
      return false;
    }
    return *(longlong *)(lVar4 + 0x20) == lVar1;
  }
  uVar3 = FUN_1409ae120(lVar4,*(undefined8 *)(param_1 + 0x88),lVar1);
  return (bool)uVar3;
}



// FUNCTION 1409a5af0 FUN_1409a5af0 body=244 status=ok
// SIG undefined FUN_1409a5af0(void)

undefined8 FUN_1409a5af0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != (longlong *)0x0) {
    lVar2 = FUN_1413ffe00();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = AGFireballProjectile::GetPrivateStaticClass();
      lVar2 = (**(code **)(*param_3 + 0x628))(param_3,uVar3);
      if (lVar2 != 0) {
        uVar3 = UGAccountPage::GetPrivateStaticClass();
        lVar2 = FUN_1409a6100(lVar2,uVar3);
        if (lVar2 != 0) {
          lVar4 = UGAccountPage::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            lVar4 = FWeakObjectPtr::Get(lVar2 + 0x2e8);
            if (lVar4 != param_2) {
              *(undefined4 *)(lVar2 + 0x2f0) = 1;
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1409a5bf0 FUN_1409a5bf0 body=114 status=ok
// SIG undefined FUN_1409a5bf0(void)

ulonglong FUN_1409a5bf0(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_1413ffd50();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      uVar3 = FUN_140a67a70(param_2,*(undefined1 *)(param_1 + 0x88));
      return uVar3;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1409a5c70 FUN_1409a5c70 body=115 status=ok
// SIG undefined FUN_1409a5c70(void)

ulonglong FUN_1409a5c70(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_3 != 0) {
    lVar3 = FUN_1414425d0();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(param_3 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      uVar2 = *(uint *)(param_1 + 0x88);
      in_RAX = (ulonglong)uVar2;
      if ((int)uVar2 <= *(int *)(param_3 + 0x128)) {
        return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1409a5cf0 FUN_1409a5cf0 body=123 status=ok
// SIG undefined FUN_1409a5cf0(void)

ulonglong FUN_1409a5cf0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  plVar2 = (longlong *)FUN_1409b94b0();
  uVar4 = 0;
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_1412e9ee0();
    uVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
    if ((((uVar4 != 0) && (lVar1 = *(longlong *)(uVar4 + 0x3d8), lVar1 != 0)) &&
        (uVar4 = 0, *(char *)(lVar1 + 0x70) == *(char *)(param_1 + 0x88))) &&
       ((*(char *)(param_1 + 0x89) == '\0' ||
        (uVar4 = 0, *(char *)(lVar1 + 0x71) == *(char *)(param_1 + 0x8a))))) {
      return 1;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1409a5d70 FUN_1409a5d70 body=89 status=ok
// SIG undefined FUN_1409a5d70(void)

ulonglong FUN_1409a5d70(undefined8 param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_1413d6240();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      return (ulonglong)*(byte *)(param_2 + 0x25c);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1409a5dd0 FUN_1409a5dd0 body=49 status=ok
// SIG undefined FUN_1409a5dd0(void)

void FUN_1409a5dd0(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001409a5dfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,*(code **)(param_1 + 0x10));
  return;
}



// FUNCTION 1409a5e10 FUN_1409a5e10 body=132 status=ok
// SIG undefined FUN_1409a5e10(void)

void FUN_1409a5e10(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_18;
  longlong local_10;
  
  uVar7 = FWeakObjectPtr::Get(param_1 + 8);
  local_18 = *param_2;
  pcVar4 = *(code **)(param_1 + 0x10);
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar4)(uVar7,&local_18);
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
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



// FUNCTION 1409a5ea0 FUN_1409a5ea0 body=92 status=ok
// SIG undefined FUN_1409a5ea0(void)

undefined1 FUN_1409a5ea0(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2);
    return 1;
  }
  return 0;
}



// FUNCTION 1409a5f00 FUN_1409a5f00 body=303 status=ok
// SIG undefined FUN_1409a5f00(void)

undefined8 FUN_1409a5f00(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 local_28;
  longlong *local_20;
  
  lVar7 = FWeakObjectPtr::Get(param_1 + 8);
  plVar4 = (longlong *)param_2[1];
  if (lVar7 != 0) {
    uVar5 = *param_2;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    uVar8 = FWeakObjectPtr::Get(param_1 + 8);
    pcVar6 = *(code **)(param_1 + 0x10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_28 = uVar5;
    local_20 = plVar4;
    (*pcVar6)(uVar8,&local_28);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    return 1;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return 0;
}



// FUNCTION 1409a6030 Find body=201 status=ok
// SIG undefined Find(void)

ulonglong TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                    (longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  plVar6 = plVar1;
  do {
    if (plVar6 == plVar1 + (int)lVar2) {
      return 0xffffffff;
    }
    if (*plVar6 != 0) {
      lVar3 = UUGLoadoutBarUW::GetPrivateStaticClass();
      lVar7 = *plVar6;
      for (lVar5 = lVar7; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (lVar5 == lVar3) goto LAB_1409a6090;
      }
    }
    lVar7 = 0;
LAB_1409a6090:
    if (*param_2 != 0) {
      lVar4 = UUGLoadoutBarUW::GetPrivateStaticClass();
      lVar5 = *param_2;
      for (lVar3 = lVar5; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar4) goto LAB_1409a60c0;
      }
    }
    lVar5 = 0;
LAB_1409a60c0:
    if (lVar7 == lVar5) {
      return (longlong)plVar6 - (longlong)plVar1 >> 3 & 0xffffffff;
    }
    plVar6 = plVar6 + 1;
  } while( true );
}



// FUNCTION 1409a6100 FUN_1409a6100 body=178 status=ok
// SIG undefined FUN_1409a6100(void)

longlong FUN_1409a6100(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_res10;
  undefined8 local_res18;
  
  if (param_2 != 0) {
    local_res10 = param_2;
    lVar3 = UUGLoadoutBarUW::GetPrivateStaticClass();
    do {
      if (param_2 == lVar3) {
        plVar4 = *(longlong **)(param_1 + 0x550);
        plVar1 = plVar4 + *(int *)(param_1 + 0x558);
        if (plVar4 == plVar1) {
          return 0;
        }
        do {
          lVar3 = *plVar4;
          if (lVar3 != 0) {
            local_res18 = *(undefined8 *)(lVar3 + 0x10);
            cVar2 = FUN_1409aea60(&local_res10,&local_res18);
            if (cVar2 != '\0') {
              return lVar3;
            }
          }
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar1);
        return 0;
      }
      param_2 = *(longlong *)(param_2 + 0x30);
    } while (param_2 != 0);
  }
  return 0;
}



// FUNCTION 1409a61c0 FUN_1409a61c0 body=383 status=ok
// SIG undefined FUN_1409a61c0(void)

int * FUN_1409a61c0(longlong *param_1,int *param_2,ulonglong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar10 = (int)(*param_3 >> 4);
    uVar9 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar5 = -(uVar9 + iVar10) ^ uVar9 >> 0xd;
    uVar11 = (iVar10 - uVar9) - uVar5 ^ uVar5 >> 0xc;
    uVar9 = (uVar9 - uVar11) - uVar5 ^ uVar11 << 0x10;
    uVar5 = (uVar5 - uVar9) - uVar11 ^ uVar9 >> 5;
    uVar11 = (uVar11 - uVar9) - uVar5 ^ uVar5 >> 3;
    uVar9 = (uVar9 - uVar11) - uVar5 ^ uVar11 << 10;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar10 = *(int *)((longlong)plVar2 +
                     (((longlong)(int)((uVar5 - uVar9) - uVar11) ^ (ulonglong)(uVar9 >> 0xf)) &
                     (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar10 != -1) {
      lVar6 = *param_1;
      do {
        lVar1 = (longlong)iVar10 * 0x18;
        if (*(longlong *)(lVar1 + lVar6) != 0) {
          uVar3 = FUN_14144bcb0();
          uVar8 = *(ulonglong *)(lVar1 + lVar6);
          for (uVar7 = uVar8; uVar7 != 0; uVar7 = *(ulonglong *)(uVar7 + 0x30)) {
            if (uVar7 == uVar3) goto LAB_1409a62e0;
          }
        }
        uVar8 = 0;
LAB_1409a62e0:
        if (*param_3 != 0) {
          uVar4 = FUN_14144bcb0();
          uVar7 = *param_3;
          for (uVar3 = uVar7; uVar3 != 0; uVar3 = *(ulonglong *)(uVar3 + 0x30)) {
            if (uVar3 == uVar4) goto LAB_1409a6306;
          }
        }
        uVar7 = 0;
LAB_1409a6306:
        if (uVar8 == uVar7) {
          *param_2 = iVar10;
          return param_2;
        }
        lVar6 = *param_1;
        iVar10 = *(int *)(lVar1 + 0x10 + lVar6);
      } while (iVar10 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1409a6340 FUN_1409a6340 body=491 status=ok
// SIG undefined FUN_1409a6340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409a6340(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  longlong *local_108;
  int local_100;
  undefined8 local_f8 [2];
  undefined1 local_e8 [8];
  longlong local_e0;
  longlong local_d0;
  longlong local_b8;
  undefined1 local_a0 [64];
  longlong local_60;
  undefined4 local_58;
  longlong local_48;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  *(undefined4 *)(param_1 + 0x3f8) = 0xffffffff;
  FUN_142d2e580(local_e8);
  local_f8[0] = 0;
  FUN_1413dd1a0(param_1,*(undefined4 *)(param_1 + 0x3f0),local_e8,local_f8);
  FWeakObjectPtr::operator=(param_1 + 1000,local_f8[0]);
  local_108 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_100 = 3;
  local_108 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_14419c988;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    plVar2[2] = (longlong)FUN_1409b09e0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_14419c9d0;
  }
  uVar1 = FUN_142d369f0(local_e8,local_f8[0],&local_108);
  *(undefined4 *)(param_1 + 0x3f8) = uVar1;
  if (local_100 != 0) {
    if (local_108 == (longlong *)0x0) goto LAB_1409a6474;
    (**(code **)(*local_108 + 0x28))(local_108,0);
    if (local_108 != (longlong *)0x0) {
      local_108 = (longlong *)FMemory::Realloc(local_108,0,0);
    }
    local_100 = 0;
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free(local_108);
  }
LAB_1409a6474:
  if (*(int *)(param_1 + 0x3f8) == -1) {
    *(undefined4 *)(param_1 + 0x3f8) = 0xffffffff;
    *(undefined4 *)(param_1 + 1000) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x3ec) = 0;
    *(undefined1 *)(param_1 + 0x3f4) = 0;
    *(undefined4 *)(param_1 + 0x3f8) = 0xffffffff;
    FUN_1413dd440(param_1);
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  local_58 = 0;
  if (local_60 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_a0);
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (local_d0 != 0) {
    FMemory::Free();
  }
  if (local_e0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409a6530 FUN_1409a6530 body=49 status=ok
// SIG undefined FUN_1409a6530(void)

longlong * FUN_1409a6530(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0xe8);
  plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0xf0) * 5;
  while( true ) {
    if (plVar2 == plVar1) {
      return (longlong *)0x0;
    }
    if (*plVar2 == param_2) break;
    plVar2 = plVar2 + 5;
  }
  return plVar2;
}



// FUNCTION 1409a6570 FUN_1409a6570 body=592 status=ok
// SIG undefined FUN_1409a6570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409a6570(longlong param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_1430731d0();
  lVar5 = *(longlong *)(param_1 + 0x200);
  if (lVar5 != 0) {
    lVar3 = AAmbientSound::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (param_2 == '\0') {
        iVar1 = *(int *)(lVar5 + 0x2ec);
        if ((iVar1 < 0) || (*(int *)(lVar5 + 0x2f8) <= iVar1)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) &&
           (lVar3 = FWeakObjectPtr::Get((longlong)iVar1 * 0x60 + *(longlong *)(lVar5 + 0x2f0)),
           lVar3 != 0)) {
          return;
        }
      }
      local_a8 = &LAB_1409a6da0;
      lVar3 = *(longlong *)(lVar5 + 0x120);
      uStack_a0 = 0;
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(lVar5);
      }
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar6 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar4 + 1,lVar5);
        *(undefined4 *)(plVar4 + 2) = (undefined4)local_a8;
        *(undefined4 *)((longlong)plVar4 + 0x14) = local_a8._4_4_;
        *(undefined4 *)(plVar4 + 3) = uStack_a0;
        *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_9c;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar4[5] = lVar3;
        *plVar4 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_98 = 0;
      local_90 = 0;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_98);
      }
      FWeakObjectPtr::operator=(local_88,0);
      local_b0 = 0xbf800000;
      local_b8 = 0;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar6,lVar5 + 800,&local_98,0x40000000);
      if (local_38 != 0) {
        plVar7 = local_68;
        if (local_48 != (longlong *)0x0) {
          plVar7 = local_48;
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7,0);
        }
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        lVar5 = FMemory::Realloc(plVar4,0,0);
        if (lVar5 != 0) {
          FMemory::Free(lVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 1409a67c0 FUN_1409a67c0 body=719 status=ok
// SIG undefined FUN_1409a67c0(void)

undefined1 FUN_1409a67c0(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char cVar19;
  bool bVar20;
  uint uVar21;
  longlong lVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  char cVar29;
  ulonglong uVar30;
  undefined8 *local_res10;
  
  cVar19 = FUN_143073e70();
  if (cVar19 != '\0') {
    lVar6 = *(longlong *)(param_1 + 0x200);
    if (lVar6 != 0) {
      lVar22 = AAmbientSound::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar22 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar22 + 0x90) * 8) != lVar22 + 0x88)) {
        bVar20 = false;
      }
      else {
        bVar20 = true;
      }
      if (bVar20) {
        if ((*(byte *)(param_1 + 0x4e0) & 4) != 0) {
          puVar7 = *(undefined4 **)(lVar6 + 0x2f0);
          uVar25 = 0xffffffffffffffff;
          cVar19 = '\0';
          do {
            cVar29 = cVar19;
            uVar25 = uVar25 >> 1;
            cVar19 = cVar29 + -1;
          } while (0xffffffff < uVar25);
          puVar23 = puVar7 + (longlong)*(int *)(lVar6 + 0x2f8) * 0x18;
          if ((puVar7 != puVar23) && (puVar28 = puVar7 + 0x18, puVar28 != puVar23)) {
            local_res10 = (undefined8 *)(puVar7 + 0x1a);
            uVar30 = 2;
            do {
              uVar1 = uVar30 - 1;
              do {
                uVar26 = 0;
                uVar24 = 0;
                if (uVar30 != 1) {
                  do {
                    do {
                      uVar21 = std::_guard_xfg_dispatch_icall_nop();
                    } while (uVar25 < uVar21);
                    uVar26 = (uVar26 << (cVar29 - 2U & 0x3f)) * 2 | (ulonglong)uVar21;
                    uVar24 = (uVar24 << (cVar29 - 2U & 0x3f)) * 2 | uVar25;
                  } while (uVar24 < uVar1);
                }
              } while ((uVar24 / uVar30 <= uVar26 / uVar30) && (uVar24 % uVar30 != uVar1));
              if (uVar26 % uVar30 != uVar1) {
                uVar3 = *(undefined4 *)((longlong)local_res10 + -4);
                uVar4 = *puVar28;
                uVar8 = *local_res10;
                uVar9 = local_res10[1];
                puVar27 = puVar7 + (uVar26 % uVar30) * 0x18;
                uVar10 = local_res10[2];
                uVar11 = local_res10[3];
                uVar12 = local_res10[4];
                uVar13 = local_res10[5];
                uVar14 = local_res10[6];
                uVar15 = local_res10[7];
                uVar16 = local_res10[8];
                uVar17 = local_res10[9];
                uVar2 = local_res10[10];
                *puVar28 = *puVar27;
                *(undefined4 *)((longlong)local_res10 + -4) = puVar27[1];
                uVar18 = *(undefined8 *)(puVar27 + 4);
                *local_res10 = *(undefined8 *)(puVar27 + 2);
                local_res10[1] = uVar18;
                uVar18 = *(undefined8 *)(puVar27 + 8);
                local_res10[2] = *(undefined8 *)(puVar27 + 6);
                local_res10[3] = uVar18;
                uVar18 = *(undefined8 *)(puVar27 + 0xc);
                local_res10[4] = *(undefined8 *)(puVar27 + 10);
                local_res10[5] = uVar18;
                uVar18 = *(undefined8 *)(puVar27 + 0x10);
                local_res10[6] = *(undefined8 *)(puVar27 + 0xe);
                local_res10[7] = uVar18;
                uVar18 = *(undefined8 *)(puVar27 + 0x14);
                local_res10[8] = *(undefined8 *)(puVar27 + 0x12);
                local_res10[9] = uVar18;
                local_res10[10] = *(undefined8 *)(puVar27 + 0x16);
                *puVar27 = uVar4;
                puVar27[1] = uVar3;
                *(undefined8 *)(puVar27 + 2) = uVar8;
                *(undefined8 *)(puVar27 + 4) = uVar9;
                *(undefined8 *)(puVar27 + 6) = uVar10;
                *(undefined8 *)(puVar27 + 8) = uVar11;
                *(undefined8 *)(puVar27 + 10) = uVar12;
                *(undefined8 *)(puVar27 + 0xc) = uVar13;
                *(undefined8 *)(puVar27 + 0xe) = uVar14;
                *(undefined8 *)(puVar27 + 0x10) = uVar15;
                *(undefined8 *)(puVar27 + 0x12) = uVar16;
                *(undefined8 *)(puVar27 + 0x14) = uVar17;
                *(undefined8 *)(puVar27 + 0x16) = uVar2;
              }
              local_res10 = local_res10 + 0xc;
              uVar30 = uVar30 + 1;
              puVar28 = puVar28 + 0x18;
            } while (puVar28 != puVar23);
          }
        }
        iVar5 = *(int *)(param_1 + 0x4e8);
        if (iVar5 == (iVar5 / 3 + (iVar5 >> 0x1f) +
                     (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f))
                     * 3) {
          *(int *)(lVar6 + 0x2ec) = *(int *)(lVar6 + 0x2ec) + 1;
        }
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1409a6a90 FUN_1409a6a90 body=44 status=ok
// SIG undefined FUN_1409a6a90(void)

void FUN_1409a6a90(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  
  lVar1 = FUN_1409a7ca0();
  if (lVar1 != 0) {
    local_res18[0] = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar1 + 0x48,local_res18);
  }
  return;
}



// FUNCTION 1409a6ac0 FUN_1409a6ac0 body=44 status=ok
// SIG undefined FUN_1409a6ac0(void)

void FUN_1409a6ac0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  
  lVar1 = FUN_1409a7ca0();
  if (lVar1 != 0) {
    local_res18[0] = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar1 + 0x38,local_res18);
  }
  return;
}



// FUNCTION 1409a6af0 FUN_1409a6af0 body=32 status=ok
// SIG undefined FUN_1409a6af0(void)

void FUN_1409a6af0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1409a7ca0();
  if (lVar1 != 0) {
    TBaseMulticastDelegate<void>::Broadcast(lVar1 + 0x58);
    return;
  }
  return;
}



// FUNCTION 1409a6b10 FUN_1409a6b10 body=44 status=ok
// SIG undefined FUN_1409a6b10(void)

void FUN_1409a6b10(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  
  lVar1 = FUN_1409ab270();
  if (lVar1 != 0) {
    local_res18[0] = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar1 + 0x48,local_res18);
  }
  return;
}



// FUNCTION 1409a6b40 FUN_1409a6b40 body=44 status=ok
// SIG undefined FUN_1409a6b40(void)

void FUN_1409a6b40(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  
  lVar1 = FUN_1409a8cf0();
  if (lVar1 != 0) {
    local_res18[0] = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar1 + 0x38,local_res18);
  }
  return;
}


