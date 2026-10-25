// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1430c2fd0 FUN_1430c2fd0 body=192 status=ok
// SIG undefined FUN_1430c2fd0(void)

void FUN_1430c2fd0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_14309cc20(local_res18,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430c3090 FUN_1430c3090 body=190 status=ok
// SIG undefined FUN_1430c3090(void)

void FUN_1430c3090(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_14309dc30(local_res18,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430c3150 FUN_1430c3150 body=192 status=ok
// SIG undefined FUN_1430c3150(void)

void FUN_1430c3150(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_14309dc70(local_res18,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430c3210 FUN_1430c3210 body=45 status=ok
// SIG undefined FUN_1430c3210(void)

void FUN_1430c3210(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14309dca0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430c3240 FUN_1430c3240 body=135 status=ok
// SIG undefined FUN_1430c3240(void)

void FUN_1430c3240(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_14309dd10(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430c32d0 FUN_1430c32d0 body=128 status=ok
// SIG undefined FUN_1430c32d0(void)

void FUN_1430c32d0(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_14309ec90(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430c3350 FUN_1430c3350 body=318 status=ok
// SIG undefined FUN_1430c3350(void)

void FUN_1430c3350(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [2];
  int local_res20 [2];
  undefined4 local_18 [2];
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_10);
  }
  local_18[0] = 0;
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
  FUN_14309f350(local_10,local_18[0],bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 1430c3490 execApplyOutlineToMesh body=238 status=ok
// SIG undefined execApplyOutlineToMesh(void)

void UObjectOutlines::execApplyOutlineToMesh(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
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
  FUN_14309f420(local_18[0],local_res10[0],local_res20);
  return;
}



// FUNCTION 1430c3580 FUN_1430c3580 body=175 status=ok
// SIG undefined FUN_1430c3580(void)

void FUN_1430c3580(undefined8 param_1,longlong param_2)

{
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14309f480(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1430c3630 FUN_1430c3630 body=371 status=ok
// SIG undefined FUN_1430c3630(void)

void FUN_1430c3630(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_28 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14309f800(local_20,local_res10[0],local_28,local_res20[0],local_res18[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430c37b0 FUN_1430c37b0 body=646 status=ok
// SIG undefined FUN_1430c37b0(void)

void FUN_1430c37b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined **local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  void *local_1a8;
  int local_1a0;
  undefined4 local_19c;
  undefined1 local_198;
  undefined1 local_197;
  undefined4 local_194;
  byte local_190;
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  undefined1 local_158 [24];
  undefined1 local_140 [24];
  undefined1 local_128;
  undefined4 local_124;
  undefined1 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  void *local_d8;
  ulonglong local_d0;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined4 local_c4;
  byte local_c0;
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  
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
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  FUN_142c62180(local_f8);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_f8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  local_1a8 = (void *)0x0;
  local_1c8 = &PTR_FUN_143ff6170;
  local_1c0 = local_f0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_1b8 = local_e8;
  local_1b0 = local_e0;
  iVar2 = (int)local_d0;
  local_1a0 = iVar2;
  if (iVar2 == 0) {
    local_19c = 0;
  }
  else {
    TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy
              (&local_1a8,local_d0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_1a8,local_d8,(longlong)iVar2 * 0x38);
  }
  local_198 = local_c8;
  local_197 = local_c7;
  local_194 = local_c4;
  local_190 = local_190 ^ (local_190 ^ local_c0) & 7;
  FUN_1405e0d90(local_188,local_b8);
  FUN_1405e0d90(local_170,local_a0);
  FUN_1405e0d90(local_158,local_88);
  FUN_1405e0d90(local_140,local_70);
  local_128 = local_58;
  local_124 = local_54;
  local_120 = local_50;
  local_118 = local_48;
  local_110 = local_40;
  local_11c = local_4c;
  local_108 = local_38;
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
    UNLOCK();
  }
  uVar1 = FUN_14309f8f0(local_res20,local_res10[0],local_res18,&local_1c8);
  *param_3 = uVar1;
  FUN_142c63c50(local_f8);
  return;
}



// FUNCTION 1430c3aa0 FUN_1430c3aa0 body=134 status=ok
// SIG undefined FUN_1430c3aa0(void)

void FUN_1430c3aa0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x4f8))(param_1,local_res8[0] != 0);
  return;
}



// FUNCTION 1430c3b70 FUN_1430c3b70 body=118 status=ok
// SIG undefined FUN_1430c3b70(void)

void FUN_1430c3b70(undefined8 param_1,longlong param_2)

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
  FUN_1430a2650(param_1,local_res10[0]);
  return;
}



// FUNCTION 1430c3bf0 execRemoveLocalNavigationGrid body=239 status=ok
// SIG undefined execRemoveLocalNavigationGrid(void)

void UNavLocalGridManager::execRemoveLocalNavigationGrid(undefined8 param_1,longlong param_2)

{
  int local_res10 [4];
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
  FUN_1430a3540(local_18[0],local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 1430c3ce0 FUN_1430c3ce0 body=112 status=ok
// SIG undefined FUN_1430c3ce0(void)

void FUN_1430c3ce0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
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
  FUN_1430a4990(local_res10[0]);
  return;
}



// FUNCTION 1430c3d70 execPreSpawnDroppedItem body=175 status=ok
// SIG undefined execPreSpawnDroppedItem(void)

void UItemUtil::execPreSpawnDroppedItem(undefined8 param_1,longlong param_2)

{
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1430a52f0(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1430c3e20 FUN_1430c3e20 body=118 status=ok
// SIG undefined FUN_1430c3e20(void)

void FUN_1430c3e20(undefined8 param_1,longlong param_2)

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
  FUN_1430a5350(param_1,local_res10[0]);
  return;
}



// FUNCTION 1430c3ea0 execPreSpawnDroppedItem body=175 status=ok
// SIG undefined execPreSpawnDroppedItem(void)

void UItemUtil::execPreSpawnDroppedItem(undefined8 param_1,longlong param_2)

{
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1430a5370(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1430c3f50 FUN_1430c3f50 body=118 status=ok
// SIG undefined FUN_1430c3f50(void)

void FUN_1430c3f50(undefined8 param_1,longlong param_2)

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
  FUN_1430a53f0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1430c3fd0 FUN_1430c3fd0 body=118 status=ok
// SIG undefined FUN_1430c3fd0(void)

void FUN_1430c3fd0(undefined8 param_1,longlong param_2)

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
  FUN_1430a5d70(param_1,local_res10[0]);
  return;
}



// FUNCTION 1430c4050 FUN_1430c4050 body=118 status=ok
// SIG undefined FUN_1430c4050(void)

void FUN_1430c4050(undefined8 param_1,longlong param_2)

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
  FUN_1430a5de0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1430c40d0 execIsPaused body=47 status=ok
// SIG undefined execIsPaused(void)

void UBrainComponent::execIsPaused(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x400))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430c4100 execApplyOutlineToMesh body=238 status=ok
// SIG undefined execApplyOutlineToMesh(void)

void UObjectOutlines::execApplyOutlineToMesh(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
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
  FUN_1430a6590(local_18[0],local_res10[0],local_res20);
  return;
}



// FUNCTION 1430c41f0 FUN_1430c41f0 body=175 status=ok
// SIG undefined FUN_1430c41f0(void)

void FUN_1430c41f0(undefined8 param_1,longlong param_2)

{
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1430a65f0(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1430c42a0 FUN_1430c42a0 body=130 status=ok
// SIG undefined FUN_1430c42a0(void)

void FUN_1430c42a0(undefined8 param_1,longlong param_2)

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
  FUN_1430a67a0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1430c4330 FUN_1430c4330 body=112 status=ok
// SIG undefined FUN_1430c4330(void)

void FUN_1430c4330(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
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
  FUN_1430a7550(local_res10[0]);
  return;
}



// FUNCTION 1430c43a0 FUN_1430c43a0 body=1309 status=ok
// SIG undefined FUN_1430c43a0(void)

undefined8 * FUN_1430c43a0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 local_res18;
  int local_res20;
  int local_98;
  longlong *local_88;
  uint local_80;
  int local_7c;
  longlong *local_78;
  uint local_70;
  int iStack_6c;
  longlong *local_68;
  uint local_60;
  int local_5c;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  longlong local_48;
  int local_40;
  
  plVar3 = (longlong *)0x0;
  local_res18 = 0;
  plVar4 = plVar3;
  plVar5 = plVar3;
  if ((((int)param_3[1] != 0) &&
      (plVar4 = (longlong *)0x0, plVar5 = (longlong *)0x0, (longlong *)*param_3 != (longlong *)0x0))
     && (cVar1 = (**(code **)(*(longlong *)*param_3 + 0x18))(), cVar1 != '\0')) {
    piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x38);
    if ((*piVar8 < DAT_146b4a2c4) && (_Init_thread_header(&DAT_146b4a2c4), DAT_146b4a2c4 == -1)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1467b1620,0);
      FGenericPlatformString::Memcpy(DAT_1467b1620,L"StreamName",0x16);
      atexit((_func_5014 *)&LAB_143ec3640);
      _Init_thread_footer(&DAT_146b4a2c4);
    }
    if ((*piVar8 < DAT_146b4a2c8) && (_Init_thread_header(&DAT_146b4a2c8), DAT_146b4a2c8 == -1)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1467b1630,0);
      FGenericPlatformString::Memcpy(DAT_1467b1630,L"Namespace",0x14);
      atexit((_func_5014 *)&LAB_143ec3620);
      _Init_thread_footer(&DAT_146b4a2c8);
    }
    if ((*piVar8 < DAT_146b4a2cc) && (_Init_thread_header(&DAT_146b4a2cc), DAT_146b4a2cc == -1)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1467b1640,0);
      FGenericPlatformString::Memcpy(DAT_1467b1640,L"FlushEveryEvent",0x20);
      atexit((_func_5014 *)&LAB_143ec3600);
      _Init_thread_footer(&DAT_146b4a2cc);
    }
    plVar4 = plVar3;
    if ((int)param_3[1] != 0) {
      plVar4 = (longlong *)*param_3;
    }
    (**(code **)(*plVar4 + 0x38))(plVar4,&local_78,&DAT_1467b1620,0);
    plVar7 = local_78;
    local_res20 = iStack_6c;
    if ((int)param_3[1] != 0) {
      plVar3 = (longlong *)*param_3;
    }
    (**(code **)(*plVar3 + 0x38))(plVar3,&local_58,&DAT_1467b1630,0);
    local_98 = iStack_4c;
    if ((int)param_3[1] == 0) {
      param_3 = (longlong *)0x0;
    }
    else {
      param_3 = (longlong *)*param_3;
    }
    (**(code **)(*param_3 + 0x38))(param_3,&local_48,&DAT_1467b1640,0);
    if ((local_40 != 0) && (local_40 != 1)) {
      local_res18 = FToBoolHelper::FromCStringWide(local_48);
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    plVar4 = local_58;
    plVar5 = plVar7;
    if (((local_70 != 0) && (local_70 != 1)) || ((local_50 != 0 && (local_50 != 1)))) {
      if ((local_70 == 0) || (uVar9 = local_70, local_70 == 1)) {
        plVar5 = (longlong *)0x0;
        uVar9 = 0;
        local_88 = (longlong *)PTR_u_analytics_1467b1600;
        lVar6 = (longlong)PTR_u__145a97fe0_0x12_1467b1608 - (longlong)PTR_u_analytics_1467b1600 >> 1
        ;
        local_68 = (longlong *)0x0;
        local_60 = 0;
        local_res20 = 0;
        local_5c = 0;
        if (lVar6 != 0) {
          iVar11 = (int)lVar6 + 1;
          if (0 < iVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68,iVar11);
            plVar5 = (longlong *)(ulonglong)local_60;
          }
          local_60 = iVar11 + (int)plVar5;
          if (local_5c < (int)local_60) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68);
          }
          local_res20 = local_5c;
          uVar9 = local_60;
          plVar5 = local_68;
          _guard_xfg_dispatch_icall_nop(local_68,local_88,lVar6 * 2);
          *(undefined2 *)((longlong)plVar5 + (longlong)(int)uVar9 * 2 + -2) = 0;
        }
        if (plVar7 != (longlong *)0x0) {
          FMemory::Free(plVar7);
        }
      }
      if ((local_50 == 0) || (uVar10 = local_50, local_50 == 1)) {
        plVar4 = (longlong *)0x0;
        uVar10 = 0;
        local_78 = (longlong *)PTR_u_analytics_1467b1610;
        lVar6 = (longlong)PTR_u__145a97ff8_0x12_1467b1618 - (longlong)PTR_u_analytics_1467b1610 >> 1
        ;
        local_88 = (longlong *)0x0;
        local_80 = 0;
        local_98 = 0;
        local_7c = 0;
        if (lVar6 != 0) {
          iVar11 = (int)lVar6 + 1;
          if (0 < iVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88,iVar11);
            plVar4 = (longlong *)(ulonglong)local_80;
          }
          local_80 = iVar11 + (int)plVar4;
          if (local_7c < (int)local_80) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88);
          }
          local_98 = local_7c;
          uVar10 = local_80;
          plVar4 = local_88;
          _guard_xfg_dispatch_icall_nop(local_88,local_78,lVar6 * 2);
          *(undefined2 *)((longlong)plVar4 + (longlong)(int)uVar10 * 2 + -2) = 0;
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free(local_58);
        }
      }
      plVar2 = (longlong *)operator_new(0x88);
      plVar3 = (longlong *)0x0;
      plVar7 = plVar3;
      if (plVar2 != (longlong *)0x0) {
        *(undefined2 *)(plVar2 + 1) = 0;
        *plVar2 = (longlong)&PTR_FUN_145a99530;
        *(undefined1 *)((longlong)plVar2 + 10) = local_res18;
        plVar2[2] = 0;
        plVar2[3] = 0;
        plVar2[4] = 0;
        plVar2[5] = 0;
        *(undefined4 *)(plVar2 + 6) = 0;
        plVar2[7] = 0;
        plVar2[8] = 0;
        plVar2[9] = 0;
        plVar2[10] = 0;
        plVar2[0xb] = 0;
        plVar2[0xc] = 0;
        plVar2[0xd] = (longlong)plVar5;
        *(uint *)(plVar2 + 0xe) = uVar9;
        *(int *)((longlong)plVar2 + 0x74) = local_res20;
        plVar2[0xf] = (longlong)plVar4;
        *(uint *)(plVar2 + 0x10) = uVar10;
        *(int *)((longlong)plVar2 + 0x84) = local_98;
        plVar7 = plVar2;
        plVar4 = plVar3;
        plVar5 = plVar3;
      }
      plVar2 = (longlong *)operator_new(0x18);
      if (plVar2 != (longlong *)0x0) {
        *(undefined4 *)(plVar2 + 1) = 1;
        *plVar2 = (longlong)&PTR_FUN_144fd9a38;
        *(undefined4 *)((longlong)plVar2 + 0xc) = 1;
        plVar2[2] = (longlong)plVar7;
        plVar3 = plVar2;
      }
      *param_2 = plVar7;
      param_2[1] = plVar3;
      SharedPointerInternals::EnableSharedFromThis(param_2,plVar7,plVar7);
      goto LAB_1430c476e;
    }
  }
  *param_2 = *(undefined8 *)(param_1 + 8);
  lVar6 = *(longlong *)(param_1 + 0x10);
  param_2[1] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
LAB_1430c476e:
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  return param_2;
}



// FUNCTION 1430c48c0 FUN_1430c48c0 body=733 status=ok
// SIG undefined FUN_1430c48c0(void)

void FUN_1430c48c0(longlong param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  void *local_res10;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  longlong *local_40;
  
  puVar8 = (undefined8 *)0x0;
  iVar13 = 0;
  puVar3 = (undefined8 *)operator_new();
  puVar2 = PTR_u_analytics_1467b1610;
  puVar9 = puVar8;
  if (puVar3 != (undefined8 *)0x0) {
    iVar10 = 0;
    local_58 = (void *)0x0;
    lVar6 = (longlong)PTR_u__145a97ff8_0x12_1467b1618 - (longlong)PTR_u_analytics_1467b1610 >> 1;
    local_50 = 0;
    local_res10 = (void *)0x0;
    if (lVar6 != 0) {
      iVar13 = (int)lVar6 + 1;
      iVar10 = 0;
      if (0 < iVar13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,iVar13);
        puVar8 = (undefined8 *)(local_50 & 0xffffffff);
        iVar10 = local_50._4_4_;
      }
      iVar13 = (int)puVar8 + iVar13;
      local_50 = CONCAT44(local_50._4_4_,iVar13);
      if (iVar10 < iVar13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,puVar8);
        iVar13 = (int)local_50;
        iVar10 = local_50._4_4_;
      }
      local_res10 = local_58;
      _guard_xfg_dispatch_icall_nop(local_58,puVar2,lVar6 * 2);
      *(undefined2 *)((longlong)local_res10 + (longlong)iVar13 * 2 + -2) = 0;
    }
    puVar2 = PTR_u_analytics_1467b1600;
    pvVar4 = (void *)0x0;
    lVar6 = (longlong)PTR_u__145a97fe0_0x12_1467b1608 - (longlong)PTR_u_analytics_1467b1600 >> 1;
    iVar12 = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    iVar11 = iVar12;
    if (lVar6 != 0) {
      iVar12 = (int)lVar6 + 1;
      iVar11 = 0;
      if (0 < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68,iVar12);
        pvVar4 = (void *)(local_60 & 0xffffffff);
        iVar11 = local_60._4_4_;
      }
      iVar12 = iVar12 + (int)pvVar4;
      local_60 = CONCAT44(local_60._4_4_,iVar12);
      if (iVar11 < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68);
        iVar12 = (int)local_60;
        iVar11 = local_60._4_4_;
      }
      pvVar4 = local_68;
      _guard_xfg_dispatch_icall_nop(local_68,puVar2,lVar6 * 2);
      *(undefined2 *)((longlong)pvVar4 + (longlong)iVar12 * 2 + -2) = 0;
    }
    *(undefined2 *)(puVar3 + 1) = 0;
    *puVar3 = &PTR_FUN_145a99530;
    *(undefined1 *)((longlong)puVar3 + 10) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = pvVar4;
    *(int *)(puVar3 + 0xe) = iVar12;
    *(int *)((longlong)puVar3 + 0x74) = iVar11;
    puVar3[0xf] = local_res10;
    *(int *)(puVar3 + 0x10) = iVar13;
    puVar8 = (undefined8 *)0x3;
    *(int *)((longlong)puVar3 + 0x84) = iVar10;
    local_68 = (void *)0x0;
    local_58 = (void *)0x0;
    puVar9 = puVar3;
  }
  plVar7 = (longlong *)0x0;
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_144fd9a38;
    plVar5[2] = (longlong)puVar9;
    plVar7 = plVar5;
  }
  local_48 = puVar9;
  local_40 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_48,puVar9,puVar9);
  if ((undefined8 **)(param_1 + 8) != &local_48) {
    *(undefined8 **)(param_1 + 8) = puVar9;
    local_48 = (undefined8 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_40);
    plVar7 = local_40;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if ((((ulonglong)puVar8 & 2) != 0) &&
     (puVar8 = (undefined8 *)(ulonglong)((uint)puVar8 & 0xfffffffd), local_68 != (void *)0x0)) {
    FMemory::Free();
  }
  if ((((ulonglong)puVar8 & 1) != 0) && (local_58 != (void *)0x0)) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1430c4ba0 FUN_1430c4ba0 body=46 status=ok
// SIG undefined FUN_1430c4ba0(void)

void FUN_1430c4ba0(longlong param_1)

{
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001430c4bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
    return;
  }
  return;
}



// FUNCTION 1430c4bd0 FUN_1430c4bd0 body=249 status=ok
// SIG undefined FUN_1430c4bd0(void)

void FUN_1430c4bd0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0xd;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"progressType",0x1a);
  (**(code **)(*param_3 + 8))(param_3,&local_18,*param_1);
  if (local_18 != 0) {
    FMemory::Free();
  }
  local_18 = 0;
  local_10 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"progressName",0x1a);
  (**(code **)(*param_3 + 8))(param_3,&local_18,param_1[1]);
  if (local_18 != 0) {
    FMemory::Free();
  }
  lVar1 = *(longlong *)param_1[2];
  lVar2 = (longlong)(int)((longlong *)param_1[2])[1] * 0x30 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x30) {
    FUN_1430c66d0(lVar1,1,param_3);
  }
  return;
}



// FUNCTION 1430c4cd0 FUN_1430c4cd0 body=574 status=ok
// SIG undefined FUN_1430c4cd0(void)

void FUN_1430c4cd0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 10;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"sessionId",0x14);
  (**(code **)(*param_3 + 8))(param_3,&local_18,*param_1 + 0x20);
  if (local_18 != 0) {
    FMemory::Free();
  }
  local_18 = 0;
  local_10 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"userId",0xe);
  (**(code **)(*param_3 + 8))(param_3,&local_18,*param_1 + 0x10);
  if (local_18 != 0) {
    FMemory::Free();
  }
  local_18 = 0;
  local_10 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"buildInfo",0x14);
  (**(code **)(*param_3 + 8))(param_3,&local_18,*param_1 + 0x58);
  if (local_18 != 0) {
    FMemory::Free();
  }
  local_18 = 0;
  local_10 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,&DAT_145a99620,8);
  (**(code **)(*param_3 + 0x18))(param_3,&local_18,*(undefined4 *)(*param_1 + 0x30));
  if (local_18 != 0) {
    FMemory::Free();
  }
  local_18 = 0;
  local_10 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"gender",0xe);
  (**(code **)(*param_3 + 8))(param_3,&local_18,*param_1 + 0x48);
  if (local_18 != 0) {
    FMemory::Free();
  }
  local_18 = 0;
  local_10 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"location",0x12);
  (**(code **)(*param_3 + 8))(param_3,&local_18,*param_1 + 0x38);
  if (local_18 != 0) {
    FMemory::Free();
  }
  lVar1 = *(longlong *)param_1[1];
  lVar2 = (longlong)(int)((longlong *)param_1[1])[1] * 0x30 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x30) {
    FUN_1430c66d0(lVar1,1,param_3);
  }
  return;
}



// FUNCTION 1430c4f10 FUN_1430c4f10 body=262 status=ok
// SIG undefined FUN_1430c4f10(void)

void FUN_1430c4f10(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0x11;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"gameCurrencyType",0x22);
  (**(code **)(*param_3 + 8))(param_3,&local_18,*param_1);
  if (local_18 != 0) {
    FMemory::Free();
  }
  local_18 = 0;
  local_10 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"gameCurrencyAmount",0x26);
  (**(code **)(*param_3 + 0x18))(param_3,&local_18,*(undefined4 *)param_1[1]);
  if (local_18 != 0) {
    FMemory::Free();
  }
  lVar1 = *(longlong *)param_1[2];
  lVar2 = (longlong)(int)((longlong *)param_1[2])[1] * 0x30 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x30) {
    FUN_1430c66d0(lVar1,1,param_3);
  }
  return;
}



// FUNCTION 1430c5020 FUN_1430c5020 body=204 status=ok
// SIG undefined FUN_1430c5020(void)

void FUN_1430c5020(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_18 [2];
  
  local_18[1] = 0x11;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"gameCurrencyType",0x22);
  (**(code **)(*param_3 + 8))(param_3,local_18,*param_1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"gameCurrencyAmount",0x26);
  (**(code **)(*param_3 + 0x18))(param_3,local_18,*(undefined4 *)param_1[1]);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1430c50f0 FUN_1430c50f0 body=169 status=ok
// SIG undefined FUN_1430c50f0(void)

void FUN_1430c50f0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 6;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"error",0xc);
  (**(code **)(*param_3 + 8))(param_3,&local_18,*param_1);
  if (local_18 != 0) {
    FMemory::Free();
  }
  lVar1 = *(longlong *)param_1[1];
  lVar2 = (longlong)(int)((longlong *)param_1[1])[1] * 0x30 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x30) {
    FUN_1430c66d0(lVar1,1,param_3);
  }
  return;
}



// FUNCTION 1430c51a0 FUN_1430c51a0 body=262 status=ok
// SIG undefined FUN_1430c51a0(void)

void FUN_1430c51a0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 7;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"itemId",0xe);
  (**(code **)(*param_3 + 8))(param_3,&local_18,*param_1);
  if (local_18 != 0) {
    FMemory::Free();
  }
  local_18 = 0;
  local_10 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"itemQuantity",0x1a);
  (**(code **)(*param_3 + 0x18))(param_3,&local_18,*(undefined4 *)param_1[1]);
  if (local_18 != 0) {
    FMemory::Free();
  }
  lVar1 = *(longlong *)param_1[2];
  lVar2 = (longlong)(int)((longlong *)param_1[2])[1] * 0x30 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x30) {
    FUN_1430c66d0(lVar1,1,param_3);
  }
  return;
}



// FUNCTION 1430c52b0 FUN_1430c52b0 body=182 status=ok
// SIG undefined FUN_1430c52b0(void)

void FUN_1430c52b0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 10;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"sessionId",0x14);
  (**(code **)(*param_3 + 8))(param_3,&local_18,*param_1 + 0x20);
  if (local_18 != 0) {
    FMemory::Free();
  }
  lVar1 = *(longlong *)param_1[1];
  lVar2 = (longlong)(int)((longlong *)param_1[1])[1] * 0x30 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x30) {
    FUN_1430c66d0(lVar1,1,param_3);
  }
  return;
}



// FUNCTION 1430c5370 FUN_1430c5370 body=439 status=ok
// SIG undefined FUN_1430c5370(void)

void FUN_1430c5370(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_18 [2];
  
  local_18[1] = 0x11;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"gameCurrencyType",0x22);
  (**(code **)(*param_3 + 8))(param_3,local_18,*param_1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"gameCurrencyAmount",0x26);
  (**(code **)(*param_3 + 0x18))(param_3,local_18,*(undefined4 *)param_1[1]);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"realCurrencyType",0x22);
  (**(code **)(*param_3 + 8))(param_3,local_18,param_1[2]);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"realMoneyCost",0x1c);
  (**(code **)(*param_3 + 0x18))(param_3,local_18,(int)*(float *)param_1[3]);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"paymentProvider",0x20);
  (**(code **)(*param_3 + 8))(param_3,local_18,param_1[4]);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1430c5530 FUN_1430c5530 body=361 status=ok
// SIG undefined FUN_1430c5530(void)

void FUN_1430c5530(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_18 [2];
  
  local_18[1] = 7;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"itemId",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_18,*param_1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"currency",0x12);
  (**(code **)(*param_3 + 8))(param_3,local_18,param_1[1]);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"perItemCost",0x18);
  (**(code **)(*param_3 + 0x18))(param_3,local_18,*(undefined4 *)param_1[2]);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"itemQuantity",0x1a);
  (**(code **)(*param_3 + 0x18))(param_3,local_18,*(undefined4 *)param_1[3]);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1430c56a0 FUN_1430c56a0 body=450 status=ok
// SIG undefined FUN_1430c56a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1430c56a0(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  *param_1 = (longlong)&PTR_FUN_145a99530;
  if ((char)param_1[1] != '\0') {
    local_38 = (longlong *)0x0;
    local_28 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_FUN_143f77b70;
    }
    local_78[0] = 0;
    local_68[0] = FUN_1430c5880;
    local_78[1] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],L"endSession",0x16);
    FUN_142b62d10(param_1 + 0xd,param_1 + 0xf,local_78,local_68);
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      plVar2 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar2 = local_38;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(undefined1 *)((longlong)param_1 + 9) = 1;
    if (*(char *)((longlong)param_1 + 10) != '\0') {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = (longlong)&PTR__purecall_144fd9510;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1430c5880 FUN_1430c5880 body=114 status=ok
// SIG undefined FUN_1430c5880(void)

void FUN_1430c5880(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_18 [2];
  
  local_18[1] = 10;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"sessionId",0x14);
  (**(code **)(*param_3 + 8))(param_3,local_18,*param_1 + 0x20);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1430c5980 FUN_1430c5980 body=306 status=ok
// SIG undefined FUN_1430c5980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430c5980(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if ((char)param_1[1] == '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    local_38 = (longlong *)0x0;
    local_28 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_FUN_143f77b70;
    }
    local_78[0] = 0;
    local_68[0] = FUN_1430c5880;
    local_78[1] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],L"endSession",0x16);
    FUN_142b62d10(param_1 + 0xd,param_1 + 0xf,local_78,local_68);
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      plVar2 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar2 = local_38;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(undefined1 *)((longlong)param_1 + 9) = 1;
    if (*(char *)((longlong)param_1 + 10) != '\0') {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 1430c5ac0 FUN_1430c5ac0 body=120 status=ok
// SIG undefined FUN_1430c5ac0(void)

void FUN_1430c5ac0(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 9) != '\0') {
    FUN_142b62940();
    lVar1 = FUN_142b45e90();
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 8))(*(longlong **)(lVar1 + 0x18),0x3cf5c28f);
    lVar1 = FUN_142b45e90();
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 8))(*(longlong **)(lVar1 + 0x18),0x3cf5c28f);
    lVar1 = FHttpModule::Get();
    (**(code **)(**(longlong **)(lVar1 + 0x10) + 8))(*(longlong **)(lVar1 + 0x10),0x3cf5c28f);
    lVar1 = FHttpModule::Get();
    (**(code **)(**(longlong **)(lVar1 + 0x10) + 8))(*(longlong **)(lVar1 + 0x10),0x3cf5c28f);
    *(undefined1 *)(param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 1430c5b40 FUN_1430c5b40 body=55 status=ok
// SIG undefined FUN_1430c5b40(void)

undefined8 * FUN_1430c5b40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145a994e8;
    puVar1[1] = 0;
    puVar1[2] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1430c5b80 FUN_1430c5b80 body=324 status=ok
// SIG undefined FUN_1430c5b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430c5b80(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [2];
  longlong local_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if ((char)param_1[1] != '\0') {
    uStack_78 = local_98;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_98[0] = param_3;
    local_80 = param_2;
    puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar1 + 1) = (undefined4)local_80;
      *(undefined4 *)((longlong)puVar1 + 0xc) = local_80._4_4_;
      *(undefined4 *)(puVar1 + 2) = (undefined4)uStack_78;
      *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_78._4_4_;
    }
    local_90[0] = 0;
    local_68[0] = &LAB_1430c5920;
    local_90[1] = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_90,0);
    FGenericPlatformString::Memcpy(local_90[0],L"recordCurrencyGiven",0x28);
    FUN_142b62d10(param_1 + 0xd,param_1 + 0xf,local_90,local_68);
    if (local_90[0] != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      plVar2 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar2 = local_38;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(undefined1 *)((longlong)param_1 + 9) = 1;
    if (*(char *)((longlong)param_1 + 10) != '\0') {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
  }
  return;
}



// FUNCTION 1430c5cd0 FUN_1430c5cd0 body=314 status=ok
// SIG undefined FUN_1430c5cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430c5cd0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8 [2];
  longlong local_a0 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if ((char)param_1[1] != '\0') {
    uStack_88 = local_a8;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_a8[0] = param_3;
    local_90 = param_2;
    local_80 = param_4;
    puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_68);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar1 + 1) = (undefined4)local_90;
      *(undefined4 *)((longlong)puVar1 + 0xc) = local_90._4_4_;
      *(undefined4 *)(puVar1 + 2) = (undefined4)uStack_88;
      *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_88._4_4_;
      *puVar1 = &PTR_FUN_143f4d0b0;
      puVar1[3] = local_80;
    }
    local_a0[0] = 0;
    local_78[0] = &LAB_1430c5910;
    local_a0[1] = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a0,0);
    FGenericPlatformString::Memcpy(local_a0[0],L"recordCurrencyGiven",0x28);
    FUN_142b62d10(param_1 + 0xd,param_1 + 0xf,local_a0,local_78);
    if (local_a0[0] != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      plVar2 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar2 = local_48;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(undefined1 *)((longlong)param_1 + 9) = 1;
    if (*(char *)((longlong)param_1 + 10) != '\0') {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
  }
  return;
}



// FUNCTION 1430c5e10 FUN_1430c5e10 body=338 status=ok
// SIG undefined FUN_1430c5e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430c5e10(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined4 local_b8 [2];
  longlong local_b0 [3];
  undefined4 *puStack_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if ((char)param_1[1] != '\0') {
    puStack_98 = local_b8;
    puStack_88 = (undefined1 *)&param_5;
    local_80 = param_6;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_b8[0] = param_3;
    local_b0[2] = param_2;
    local_90 = param_4;
    puVar1 = (undefined8 *)FUN_140438ef0(0x30,local_68);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_143f4d098;
      puVar1[1] = local_b0[2];
      puVar1[2] = puStack_98;
      puVar1[3] = local_90;
      puVar1[4] = puStack_88;
      puVar1[5] = local_80;
    }
    local_b0[0] = 0;
    local_78[0] = &LAB_1430c5960;
    local_b0[1] = 0x17;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b0,0);
    FGenericPlatformString::Memcpy(local_b0[0],L"recordCurrencyPurchase",0x2e);
    FUN_142b62d10(param_1 + 0xd,param_1 + 0xf,local_b0,local_78);
    if (local_b0[0] != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      plVar2 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar2 = local_48;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(undefined1 *)((longlong)param_1 + 9) = 1;
    if (*(char *)((longlong)param_1 + 10) != '\0') {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
  }
  return;
}



// FUNCTION 1430c5f70 FUN_1430c5f70 body=314 status=ok
// SIG undefined FUN_1430c5f70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430c5f70(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8 [2];
  longlong local_a0 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if ((char)param_1[1] != '\0') {
    uStack_88 = local_a8;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_a8[0] = param_3;
    local_90 = param_2;
    local_80 = param_4;
    puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_68);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar1 + 1) = (undefined4)local_90;
      *(undefined4 *)((longlong)puVar1 + 0xc) = local_90._4_4_;
      *(undefined4 *)(puVar1 + 2) = (undefined4)uStack_88;
      *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_88._4_4_;
      *puVar1 = &PTR_FUN_143f4d0b0;
      puVar1[3] = local_80;
    }
    local_a0[0] = 0;
    local_78[0] = &LAB_1430c5910;
    local_a0[1] = 0x17;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a0,0);
    FGenericPlatformString::Memcpy(local_a0[0],L"recordCurrencyPurchase",0x2e);
    FUN_142b62d10(param_1 + 0xd,param_1 + 0xf,local_a0,local_78);
    if (local_a0[0] != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      plVar2 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar2 = local_48;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(undefined1 *)((longlong)param_1 + 9) = 1;
    if (*(char *)((longlong)param_1 + 10) != '\0') {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
  }
  return;
}



// FUNCTION 1430c60b0 FUN_1430c60b0 body=308 status=ok
// SIG undefined FUN_1430c60b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430c60b0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if ((char)param_1[1] != '\0') {
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_78 = param_2;
    uStack_70 = param_3;
    puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar1 + 1) = (undefined4)local_78;
      *(undefined4 *)((longlong)puVar1 + 0xc) = local_78._4_4_;
      *(undefined4 *)(puVar1 + 2) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_70._4_4_;
    }
    local_88[0] = 0;
    local_68[0] = &LAB_1430c5930;
    local_88[1] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88,0);
    FGenericPlatformString::Memcpy(local_88[0],L"error",0xc);
    FUN_142b62d10(param_1 + 0xd,param_1 + 0xf,local_88,local_68);
    if (local_88[0] != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      plVar2 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar2 = local_38;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(undefined1 *)((longlong)param_1 + 9) = 1;
    if (*(char *)((longlong)param_1 + 10) != '\0') {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
  }
  return;
}



// FUNCTION 1430c61f0 FUN_1430c61f0 body=260 status=ok
// SIG undefined FUN_1430c61f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430c61f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88 [2];
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_98 = param_1;
  uStack_90 = param_3;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = (undefined4)local_98;
    *(undefined4 *)((longlong)puVar1 + 0xc) = local_98._4_4_;
    *(undefined4 *)(puVar1 + 2) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_90._4_4_;
  }
  local_78[0] = &LAB_1430c5950;
  uVar2 = FUN_142b67320(local_88,param_2);
  FUN_142b62d10(param_1 + 0xd,param_1 + 0xf,uVar2,local_78);
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  if (*(char *)((longlong)param_1 + 10) != '\0') {
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  return;
}



// FUNCTION 1430c6300 FUN_1430c6300 body=320 status=ok
// SIG undefined FUN_1430c6300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430c6300(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined4 local_b8 [2];
  longlong local_b0 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if ((char)param_1[1] != '\0') {
    local_90 = local_b8;
    puStack_88 = &stack0x00000028;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_b8[0] = param_4;
    local_a0 = param_2;
    uStack_98 = param_3;
    puVar1 = (undefined8 *)FUN_140438ef0(0x28,local_68);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_143ff7760;
      *(undefined4 *)(puVar1 + 1) = (undefined4)local_a0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = local_a0._4_4_;
      *(undefined4 *)(puVar1 + 2) = (undefined4)uStack_98;
      *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_98._4_4_;
      puVar1[3] = local_90;
      puVar1[4] = puStack_88;
    }
    local_b0[0] = 0;
    local_78[0] = &LAB_1430c5970;
    local_b0[1] = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b0,0);
    FGenericPlatformString::Memcpy(local_b0[0],L"recordItemPurchase",0x26);
    FUN_142b62d10(param_1 + 0xd,param_1 + 0xf,local_b0,local_78);
    if (local_b0[0] != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      plVar2 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar2 = local_48;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(undefined1 *)((longlong)param_1 + 9) = 1;
    if (*(char *)((longlong)param_1 + 10) != '\0') {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
  }
  return;
}



// FUNCTION 1430c6440 FUN_1430c6440 body=314 status=ok
// SIG undefined FUN_1430c6440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430c6440(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8 [2];
  longlong local_a0 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if ((char)param_1[1] != '\0') {
    uStack_88 = local_a8;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_a8[0] = param_3;
    local_90 = param_2;
    local_80 = param_4;
    puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_68);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar1 + 1) = (undefined4)local_90;
      *(undefined4 *)((longlong)puVar1 + 0xc) = local_90._4_4_;
      *(undefined4 *)(puVar1 + 2) = (undefined4)uStack_88;
      *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_88._4_4_;
      *puVar1 = &PTR_FUN_143f4d0b0;
      puVar1[3] = local_80;
    }
    local_a0[0] = 0;
    local_78[0] = &LAB_1430c5940;
    local_a0[1] = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a0,0);
    FGenericPlatformString::Memcpy(local_a0[0],L"recordItemPurchase",0x26);
    FUN_142b62d10(param_1 + 0xd,param_1 + 0xf,local_a0,local_78);
    if (local_a0[0] != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      plVar2 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar2 = local_48;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(undefined1 *)((longlong)param_1 + 9) = 1;
    if (*(char *)((longlong)param_1 + 10) != '\0') {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
  }
  return;
}



// FUNCTION 1430c6580 FUN_1430c6580 body=332 status=ok
// SIG undefined FUN_1430c6580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430c6580(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if ((char)param_1[1] != '\0') {
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_98 = param_2;
    uStack_90 = param_3;
    local_88 = param_4;
    puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_68);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar1 + 1) = (undefined4)local_98;
      *(undefined4 *)((longlong)puVar1 + 0xc) = local_98._4_4_;
      *(undefined4 *)(puVar1 + 2) = (undefined4)uStack_90;
      *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_90._4_4_;
      *puVar1 = &PTR_FUN_143f4d0b0;
      puVar1[3] = local_88;
    }
    local_a8[0] = 0;
    local_78[0] = &LAB_1430c5870;
    local_a8[1] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
    FGenericPlatformString::Memcpy(local_a8[0],L"recordProgress",0x1e);
    FUN_142b62d10(param_1 + 0xd,param_1 + 0xf,local_a8,local_78);
    if (local_a8[0] != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      plVar2 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar2 = local_48;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(undefined1 *)((longlong)param_1 + 9) = 1;
    if (*(char *)((longlong)param_1 + 10) != '\0') {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
  }
  return;
}



// FUNCTION 1430c66d0 FUN_1430c66d0 body=257 status=ok
// SIG undefined FUN_1430c66d0(void)

void FUN_1430c66d0(longlong param_1,char param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  longlong lVar3;
  double dVar4;
  longlong local_28 [4];
  
  if (*(int *)(param_1 + 0x2c) == 1) {
    if (param_3 == (longlong *)0x0) {
      return;
    }
    dVar4 = *(double *)(param_1 + 0x20);
    lVar3 = *param_3;
  }
  else {
    if (*(int *)(param_1 + 0x2c) != 0) {
      return;
    }
    if (((param_2 == '\0') || (cVar1 = FString::IsNumeric(param_1 + 0x10), cVar1 == '\0')) ||
       (cVar1 = FString::StartsWith(param_1,L"event_value_",1), cVar1 != '\0')) {
      if (param_3 == (longlong *)0x0) {
        return;
      }
      lVar3 = *param_3;
      uVar2 = FUN_142b67320(local_28,param_1);
      (**(code **)(lVar3 + 8))(param_3,uVar2,param_1 + 0x10);
      goto LAB_1430c67ad;
    }
    if (param_3 == (longlong *)0x0) {
      return;
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)(param_1 + 0x10);
    }
    dVar4 = _wtof(_Str);
    lVar3 = *param_3;
  }
  uVar2 = FUN_142b67320(local_28,param_1);
  (**(code **)(lVar3 + 0x38))(param_3,uVar2,(float)dVar4);
LAB_1430c67ad:
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1430c67f0 FUN_1430c67f0 body=41 status=ok
// SIG undefined FUN_1430c67f0(void)

bool FUN_1430c67f0(longlong param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(char *)(param_1 + 8) == '\0') {
    FString::operator=(param_1 + 0x20);
    bVar1 = *(char *)(param_1 + 8) == '\0';
  }
  return bVar1;
}



// FUNCTION 1430c6830 FUN_1430c6830 body=815 status=ok
// SIG undefined FUN_1430c6830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430c6830(longlong *param_1,undefined8 param_2)

{
  void **ppvVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  undefined1 auStack_e8 [32];
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98 [2];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b0 = param_2;
  if ((char)param_1[1] != '\0') {
    (**(code **)(*param_1 + 8))();
  }
  local_c0._0_4_ = (int)param_1[3];
  lVar7 = (longlong)(int)local_c0;
  pvVar12 = (void *)param_1[2];
  local_c8 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_c8,(2 - (uint)((int)local_c0 != 0)) + (int)local_c0,0);
  pvVar6 = local_c8;
  _guard_xfg_dispatch_icall_nop(local_c8,pvVar12,lVar7 * 2);
  iVar10 = (int)local_c0;
  lVar7 = (longlong)(int)local_c0;
  local_c0._0_4_ = (2 - (uint)((int)local_c0 != 0)) + (int)local_c0;
  if (local_c0._4_4_ < (int)local_c0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,iVar10);
    pvVar6 = local_c8;
  }
  iVar9 = local_c0._4_4_;
  iVar11 = (int)local_c0;
  puVar2 = (undefined2 *)((longlong)pvVar6 + (lVar7 - (ulonglong)(iVar10 != 0)) * 2);
  *puVar2 = 0x2d;
  puVar2[1] = 0;
  uVar4 = FDateTime::Now(&local_a8);
  puVar5 = (undefined8 *)FDateTime::ToString(uVar4,local_98);
  if (iVar11 < 2) {
    pvVar12 = (void *)*puVar5;
    *puVar5 = 0;
    iVar11 = *(int *)(puVar5 + 1);
    iVar9 = *(int *)((longlong)puVar5 + 0xc);
    puVar5[1] = 0;
  }
  else {
    iVar10 = *(int *)(puVar5 + 1) + -1;
    if (*(int *)(puVar5 + 1) == 0) {
      iVar10 = 0;
    }
    if ((iVar11 != 0) || (iVar3 = 1, iVar10 == 0)) {
      iVar3 = 0;
    }
    local_c8 = pvVar6;
    local_c0._0_4_ = iVar11;
    local_c0._4_4_ = iVar9;
    if (iVar9 < iVar3 + iVar10 + iVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8);
    }
    iVar3 = (int)local_c0;
    local_b8 = (void *)*puVar5;
    pvVar12 = local_c8;
    iVar9 = local_c0._4_4_;
    iVar11 = (int)local_c0;
    if (iVar10 != 0) {
      lVar7 = (longlong)(int)local_c0;
      local_c0._0_4_ = (int)local_c0 + (uint)((int)local_c0 == 0) + iVar10;
      if (local_c0._4_4_ < (int)local_c0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,iVar3);
      }
      iVar9 = local_c0._4_4_;
      iVar11 = (int)local_c0;
      pvVar12 = local_c8;
      pvVar6 = (void *)((longlong)local_c8 + (lVar7 - (ulonglong)(iVar3 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar6,local_b8,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)pvVar6 + (longlong)iVar10 * 2) = 0;
    }
    pvVar6 = (void *)0x0;
    param_2 = local_b0;
  }
  ppvVar1 = (void **)(param_1 + 4);
  if (ppvVar1 == &local_c8) {
    if (pvVar12 != (void *)0x0) {
      FMemory::Free(pvVar12);
    }
  }
  else {
    if (*ppvVar1 != (void *)0x0) {
      FMemory::Free();
    }
    *ppvVar1 = pvVar12;
    *(int *)(param_1 + 5) = iVar11;
    *(int *)((longlong)param_1 + 0x2c) = iVar9;
  }
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_a8 = param_1;
  uStack_a0 = param_2;
  puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_78);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar5 + 1) = (undefined4)local_a8;
    *(undefined4 *)((longlong)puVar5 + 0xc) = local_a8._4_4_;
    *(undefined4 *)(puVar5 + 2) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_a0._4_4_;
  }
  local_c8 = (void *)0x0;
  local_88[0] = &LAB_1430c5900;
  local_c0 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy(local_c8,L"startSession",0x1a);
  FUN_142b62d10(param_1 + 0xd,param_1 + 0xf,&local_c8,local_88);
  if (local_c8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    plVar8 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar8 = local_58;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  if (*(char *)((longlong)param_1 + 10) != '\0') {
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



// FUNCTION 1430c6b60 FUN_1430c6b60 body=379 status=ok
// SIG undefined FUN_1430c6b60(void)

void FUN_1430c6b60(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_28;
  longlong *plStack_20;
  longlong *local_18;
  longlong *plStack_10;
  
  if (DAT_146b08400 != 0) {
    PxInitVehicleSDK(DAT_146b08400,0);
    physx::PxVehicleSetSweepHitRejectionAngles();
    local_48 = 0x3f800000;
    local_40 = 0;
    local_3c = 0;
    local_34 = 0x3f800000;
    physx::PxVehicleSetBasisVectors(&local_3c,&local_48);
    plStack_10 = (longlong *)operator_new(0x18);
    if (plStack_10 != (longlong *)0x0) {
      *(undefined4 *)(plStack_10 + 1) = 1;
      *plStack_10 = (longlong)&PTR_FUN_145a9fb48;
      *(undefined4 *)((longlong)plStack_10 + 0xc) = 1;
      plStack_10[2] = (longlong)&PTR_FUN_145a9c4f8;
    }
    local_18 = plStack_10 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
    plStack_20 = plStack_10;
    if (plStack_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_10 + 1) = (int)plStack_10[1] + 1;
      UNLOCK();
    }
    DAT_146b08798 = local_18;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&DAT_146b087a0,&plStack_20);
    plVar5 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
    plVar5 = plStack_10;
    if (plStack_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_10)(plStack_10);
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
  }
  return;
}



// FUNCTION 1430c6ce0 FUN_1430c6ce0 body=370 status=ok
// SIG undefined FUN_1430c6ce0(void)

void FUN_1430c6ce0(char param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 == '\x02') {
    param_3 = (longlong *)*param_3;
    if (param_3 == (longlong *)0x0) {
      return;
    }
    lVar1 = (**(code **)(*param_3 + 0x6d0))(param_3,0,1);
    lVar4 = *(longlong *)(lVar1 + 0x110);
    lVar5 = lVar4;
    if (lVar4 == 0) {
      lVar5 = *(longlong *)(lVar1 + 0x118);
    }
    if (lVar5 == 0) {
      return;
    }
    if (lVar5 == lVar4) {
      sVar3 = *(short *)(lVar1 + 6);
    }
    else {
      sVar3 = *(short *)(lVar1 + 8);
    }
    plVar2 = (longlong *)FUN_1426e2550((int)sVar3);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x358))
                (plVar2,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                 0x136);
    }
    lVar4 = 0;
    if (*(short *)(lVar5 + 8) == 6) {
      lVar4 = lVar5;
    }
    if (lVar4 != 0) {
      physx::PxVehicleNoDrive::setToRestState(param_2);
    }
  }
  else {
    if (param_1 != '\x03') {
      return;
    }
    param_3 = (longlong *)*param_3;
    if (param_3 == (longlong *)0x0) {
      return;
    }
    lVar1 = (**(code **)(*param_3 + 0x6d0))(param_3,0,1);
    lVar4 = *(longlong *)(lVar1 + 0x110);
    lVar5 = lVar4;
    if (lVar4 == 0) {
      lVar5 = *(longlong *)(lVar1 + 0x118);
    }
    if (lVar5 == 0) {
      return;
    }
    if (lVar5 == lVar4) {
      sVar3 = *(short *)(lVar1 + 6);
    }
    else {
      sVar3 = *(short *)(lVar1 + 8);
    }
    plVar2 = (longlong *)FUN_1426e2550((int)sVar3);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x358))
                (plVar2,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                 0x136);
    }
    lVar4 = 0;
    if (*(short *)(lVar5 + 8) == 6) {
      lVar4 = lVar5;
    }
    if (lVar4 != 0) {
      physx::PxVehicleDrive::setToRestState(param_2);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))(plVar2);
  }
  return;
}



// FUNCTION 1430c6e60 FUN_1430c6e60 body=376 status=ok
// SIG undefined FUN_1430c6e60(void)

void FUN_1430c6e60(char param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 == '\0') {
    param_3 = (longlong *)*param_3;
    if (param_3 == (longlong *)0x0) {
      return;
    }
    lVar1 = (**(code **)(*param_3 + 0x6d0))(param_3,0,1);
    lVar4 = *(longlong *)(lVar1 + 0x110);
    lVar5 = lVar4;
    if (lVar4 == 0) {
      lVar5 = *(longlong *)(lVar1 + 0x118);
    }
    if (lVar5 == 0) {
      return;
    }
    if (lVar5 == lVar4) {
      sVar3 = *(short *)(lVar1 + 6);
    }
    else {
      sVar3 = *(short *)(lVar1 + 8);
    }
    plVar2 = (longlong *)FUN_1426e2550((int)sVar3);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x358))
                (plVar2,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                 0x136);
    }
    lVar4 = 0;
    if (*(short *)(lVar5 + 8) == 6) {
      lVar4 = lVar5;
    }
    if (lVar4 != 0) {
      physx::PxVehicleDrive::setToRestState(param_2);
    }
  }
  else {
    if (param_1 != '\x01') {
      FUN_1430c6ce0();
      return;
    }
    param_3 = (longlong *)*param_3;
    if (param_3 == (longlong *)0x0) {
      return;
    }
    lVar1 = (**(code **)(*param_3 + 0x6d0))(param_3,0,1);
    lVar4 = *(longlong *)(lVar1 + 0x110);
    lVar5 = lVar4;
    if (lVar4 == 0) {
      lVar5 = *(longlong *)(lVar1 + 0x118);
    }
    if (lVar5 == 0) {
      return;
    }
    if (lVar5 == lVar4) {
      sVar3 = *(short *)(lVar1 + 6);
    }
    else {
      sVar3 = *(short *)(lVar1 + 8);
    }
    plVar2 = (longlong *)FUN_1426e2550((int)sVar3);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x358))
                (plVar2,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                 0x136);
    }
    lVar4 = 0;
    if (*(short *)(lVar5 + 8) == 6) {
      lVar4 = lVar5;
    }
    if (lVar4 != 0) {
      physx::PxVehicleDrive::setToRestState(param_2);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))(plVar2);
  }
  return;
}



// FUNCTION 1430c6fe0 FUN_1430c6fe0 body=932 status=ok
// SIG undefined FUN_1430c6fe0(void)

float * FUN_1430c6fe0(float *param_1,float *param_2,longlong param_3,float param_4,
                     undefined8 *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float local_170;
  float local_16c;
  float local_168;
  undefined1 local_158 [12];
  undefined4 local_14c;
  float local_144;
  float local_140;
  float local_13c;
  
  lVar7 = (longlong)*(int *)(param_3 + 0x68);
  fVar16 = *param_2;
  fVar21 = param_2[1];
  fVar15 = param_2[2];
  fVar22 = param_2[3];
  fVar20 = 0.0;
  fVar8 = fVar21 * 1.0 - fVar15 * 0.0;
  fVar9 = fVar15 * 0.0 - fVar16 * 1.0;
  fVar11 = fVar16 * 0.0 - fVar21 * 0.0;
  fVar13 = fVar22 * 0.0 - fVar22 * 0.0;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar11 = fVar11 + fVar11;
  fVar13 = fVar13 + fVar13;
  fVar1 = param_2[4];
  fVar2 = param_2[5];
  fVar3 = param_2[6];
  fVar14 = (fVar11 * fVar21 - fVar9 * fVar15) + fVar22 * fVar8 + 0.0;
  fVar15 = (fVar8 * fVar15 - fVar11 * fVar16) + fVar22 * fVar9 + 0.0;
  fVar16 = (fVar9 * fVar16 - fVar8 * fVar21) + fVar22 * fVar11 + 1.0;
  fStack_17c = (fVar13 * fVar22 - fVar13 * fVar22) + fVar22 * fVar13 + 0.0;
  if (0 < lVar7) {
    lVar6 = 0;
    fVar22 = param_4 + param_4;
    local_178 = fVar22 * fVar15;
    fVar21 = fVar20;
    do {
      fVar20 = *param_2;
      fVar8 = param_2[1];
      fVar9 = param_2[2];
      fVar11 = param_2[3];
      lVar5 = *(longlong *)(param_3 + 0x60);
      if (*(longlong *)(param_3 + 0x60) == 0) {
        lVar5 = param_3;
      }
      fVar17 = *(float *)(lVar5 + lVar6) * param_2[8];
      fVar18 = *(float *)(lVar5 + 4 + lVar6) * param_2[9];
      fVar19 = *(float *)(lVar5 + 8 + lVar6) * param_2[10];
      fVar13 = fVar19 * fVar8 - fVar18 * fVar9;
      fVar10 = fVar17 * fVar9 - fVar19 * fVar20;
      fVar12 = fVar18 * fVar20 - fVar17 * fVar8;
      fVar13 = fVar13 + fVar13;
      fVar10 = fVar10 + fVar10;
      fVar12 = fVar12 + fVar12;
      local_188 = (fVar12 * fVar8 - fVar10 * fVar9) + fVar11 * fVar13 + fVar17 + param_2[4] +
                  fVar14 * param_4;
      fStack_184 = (fVar13 * fVar9 - fVar12 * fVar20) + fVar11 * fVar10 + fVar18 + param_2[5] +
                   fVar15 * param_4;
      fStack_180 = (fVar10 * fVar20 - fVar13 * fVar8) + fVar11 * fVar12 + fVar19 + param_2[6] +
                   fVar16 * param_4;
      local_170 = local_188 - fVar22 * fVar14;
      local_16c = fStack_184 - local_178;
      local_168 = fStack_180 - fVar22 * fVar16;
      _guard_xfg_dispatch_icall_nop(local_158,0,0x90);
      local_14c = 0x3f800000;
      cVar4 = UWorld::LineTraceSingleByChannel
                        (*(undefined8 *)*param_5,local_158,&local_188,&local_170,
                         *(undefined4 *)param_5[1],param_5[2],param_5[3]);
      fVar20 = fVar21;
      if (cVar4 != '\0') {
        lVar5 = *(longlong *)(param_3 + 0x60);
        if (*(longlong *)(param_3 + 0x60) == 0) {
          lVar5 = param_3;
        }
        fVar20 = ((local_140 - fVar2) * fVar15 + (local_144 - fVar1) * fVar14 +
                 (local_13c - fVar3) * fVar16) - *(float *)(lVar5 + 8 + lVar6);
        if (fVar20 <= fVar21) {
          fVar20 = fVar21;
        }
      }
      lVar6 = lVar6 + 0xc;
      lVar7 = lVar7 + -1;
      fVar21 = fVar20;
    } while (lVar7 != 0);
  }
  *param_1 = fVar14 * fVar20 + fVar1;
  param_1[1] = fVar15 * fVar20 + fVar2;
  param_1[2] = fVar16 * fVar20 + fVar3;
  return param_1;
}



// FUNCTION 1430c7390 FUN_1430c7390 body=855 status=ok
// SIG undefined FUN_1430c7390(void)

void FUN_1430c7390(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  int iVar18;
  int iVar19;
  int iVar20;
  undefined8 *puVar21;
  int iVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  
  iVar18 = (param_2 + -2) / 2;
  if (-1 < iVar18) {
    iVar19 = iVar18 * 2 + 1;
    iVar2 = iVar19;
    iVar20 = iVar18;
joined_r0x0001430c73d5:
    do {
      if (iVar19 < param_2) {
        iVar19 = iVar18 * 2;
        iVar22 = iVar19 + 1;
        if (iVar19 + 2 < param_2) {
          if (*(int *)(param_1 + (longlong)iVar19 * 0xf + 0x20) <
              *(int *)(param_1 + (longlong)iVar22 * 0xf + 2)) {
            iVar22 = iVar19;
          }
          iVar22 = iVar22 + 1;
        }
        puVar21 = param_1 + (longlong)iVar22 * 0xf;
        puVar23 = param_1 + (longlong)iVar18 * 0xf;
        if (*(int *)(puVar23 + 2) < *(int *)(puVar21 + 2)) {
          if (puVar23 != puVar21) {
            uVar3 = puVar21[1];
            uVar4 = *puVar23;
            uVar5 = puVar23[1];
            uVar6 = puVar23[2];
            uVar7 = puVar23[3];
            uVar8 = puVar23[4];
            uVar9 = puVar23[5];
            uVar10 = puVar23[6];
            uVar11 = puVar23[7];
            uVar12 = puVar23[8];
            uVar13 = puVar23[9];
            uVar14 = puVar23[10];
            uVar15 = puVar23[0xb];
            uVar16 = puVar23[0xc];
            uVar17 = puVar23[0xd];
            uVar1 = puVar23[0xe];
            *puVar23 = *puVar21;
            puVar23[1] = uVar3;
            uVar3 = puVar21[3];
            puVar23[2] = puVar21[2];
            puVar23[3] = uVar3;
            uVar3 = puVar21[5];
            puVar23[4] = puVar21[4];
            puVar23[5] = uVar3;
            uVar3 = puVar21[7];
            puVar23[6] = puVar21[6];
            puVar23[7] = uVar3;
            uVar3 = puVar21[9];
            puVar23[8] = puVar21[8];
            puVar23[9] = uVar3;
            uVar3 = puVar21[0xb];
            puVar23[10] = puVar21[10];
            puVar23[0xb] = uVar3;
            uVar3 = puVar21[0xd];
            puVar23[0xc] = puVar21[0xc];
            puVar23[0xd] = uVar3;
            puVar23[0xe] = puVar21[0xe];
            *puVar21 = uVar4;
            puVar21[1] = uVar5;
            puVar21[2] = uVar6;
            puVar21[3] = uVar7;
            puVar21[4] = uVar8;
            puVar21[5] = uVar9;
            puVar21[6] = uVar10;
            puVar21[7] = uVar11;
            puVar21[8] = uVar12;
            puVar21[9] = uVar13;
            puVar21[10] = uVar14;
            puVar21[0xb] = uVar15;
            puVar21[0xc] = uVar16;
            puVar21[0xd] = uVar17;
            puVar21[0xe] = uVar1;
          }
          iVar19 = iVar22 * 2 + 1;
          iVar18 = iVar22;
          goto joined_r0x0001430c73d5;
        }
      }
      iVar19 = iVar2 + -2;
      iVar18 = iVar20 + -1;
      iVar2 = iVar19;
      iVar20 = iVar18;
    } while (-1 < iVar18);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar21 = param_1 + (longlong)param_2 * 0xf;
    do {
      if (param_1 != puVar21) {
        uVar3 = puVar21[1];
        uVar4 = *param_1;
        uVar5 = param_1[1];
        uVar6 = param_1[2];
        uVar7 = param_1[3];
        uVar8 = param_1[4];
        uVar9 = param_1[5];
        uVar10 = param_1[6];
        uVar11 = param_1[7];
        uVar12 = param_1[8];
        uVar13 = param_1[9];
        uVar14 = param_1[10];
        uVar15 = param_1[0xb];
        uVar16 = param_1[0xc];
        uVar17 = param_1[0xd];
        uVar1 = param_1[0xe];
        *param_1 = *puVar21;
        param_1[1] = uVar3;
        uVar3 = puVar21[3];
        param_1[2] = puVar21[2];
        param_1[3] = uVar3;
        uVar3 = puVar21[5];
        param_1[4] = puVar21[4];
        param_1[5] = uVar3;
        uVar3 = puVar21[7];
        param_1[6] = puVar21[6];
        param_1[7] = uVar3;
        uVar3 = puVar21[9];
        param_1[8] = puVar21[8];
        param_1[9] = uVar3;
        uVar3 = puVar21[0xb];
        param_1[10] = puVar21[10];
        param_1[0xb] = uVar3;
        uVar3 = puVar21[0xd];
        param_1[0xc] = puVar21[0xc];
        param_1[0xd] = uVar3;
        param_1[0xe] = puVar21[0xe];
        *puVar21 = uVar4;
        puVar21[1] = uVar5;
        puVar21[2] = uVar6;
        puVar21[3] = uVar7;
        puVar21[4] = uVar8;
        puVar21[5] = uVar9;
        puVar21[6] = uVar10;
        puVar21[7] = uVar11;
        puVar21[8] = uVar12;
        puVar21[9] = uVar13;
        puVar21[10] = uVar14;
        puVar21[0xb] = uVar15;
        puVar21[0xc] = uVar16;
        puVar21[0xd] = uVar17;
        puVar21[0xe] = uVar1;
      }
      iVar18 = 0;
      if (1 < param_2) {
        do {
          iVar2 = iVar18 * 2;
          iVar19 = iVar2 + 1;
          if (iVar2 + 2 < param_2) {
            if (*(int *)(param_1 + (longlong)iVar2 * 0xf + 0x20) <
                *(int *)(param_1 + (longlong)iVar19 * 0xf + 2)) {
              iVar19 = iVar2;
            }
            iVar19 = iVar19 + 1;
          }
          puVar23 = param_1 + (longlong)iVar19 * 0xf;
          puVar24 = param_1 + (longlong)iVar18 * 0xf;
          if (*(int *)(puVar23 + 2) <= *(int *)(puVar24 + 2)) break;
          if (puVar24 != puVar23) {
            uVar3 = puVar23[1];
            uVar4 = *puVar24;
            uVar5 = puVar24[1];
            uVar6 = puVar24[2];
            uVar7 = puVar24[3];
            uVar8 = puVar24[4];
            uVar9 = puVar24[5];
            uVar10 = puVar24[6];
            uVar11 = puVar24[7];
            uVar12 = puVar24[8];
            uVar13 = puVar24[9];
            uVar14 = puVar24[10];
            uVar15 = puVar24[0xb];
            uVar16 = puVar24[0xc];
            uVar17 = puVar24[0xd];
            uVar1 = puVar24[0xe];
            *puVar24 = *puVar23;
            puVar24[1] = uVar3;
            uVar3 = puVar23[3];
            puVar24[2] = puVar23[2];
            puVar24[3] = uVar3;
            uVar3 = puVar23[5];
            puVar24[4] = puVar23[4];
            puVar24[5] = uVar3;
            uVar3 = puVar23[7];
            puVar24[6] = puVar23[6];
            puVar24[7] = uVar3;
            uVar3 = puVar23[9];
            puVar24[8] = puVar23[8];
            puVar24[9] = uVar3;
            uVar3 = puVar23[0xb];
            puVar24[10] = puVar23[10];
            puVar24[0xb] = uVar3;
            uVar3 = puVar23[0xd];
            puVar24[0xc] = puVar23[0xc];
            puVar24[0xd] = uVar3;
            puVar24[0xe] = puVar23[0xe];
            *puVar23 = uVar4;
            puVar23[1] = uVar5;
            puVar23[2] = uVar6;
            puVar23[3] = uVar7;
            puVar23[4] = uVar8;
            puVar23[5] = uVar9;
            puVar23[6] = uVar10;
            puVar23[7] = uVar11;
            puVar23[8] = uVar12;
            puVar23[9] = uVar13;
            puVar23[10] = uVar14;
            puVar23[0xb] = uVar15;
            puVar23[0xc] = uVar16;
            puVar23[0xd] = uVar17;
            puVar23[0xe] = uVar1;
          }
          iVar18 = iVar19;
        } while (iVar19 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar21 = puVar21 + -0xf;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1430c76f0 FUN_1430c76f0 body=1367 status=ok
// SIG undefined FUN_1430c76f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430c76f0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  undefined8 uVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  longlong *plVar29;
  float fVar30;
  undefined1 auStack_3b8 [48];
  longlong local_388;
  longlong local_378;
  longlong lStack_370;
  undefined4 local_368;
  undefined1 local_360 [744];
  ulonglong local_78;
  
  if (1 < param_2) {
    local_78 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
    fVar30 = (float)(longlong)param_2;
    lStack_370 = param_1 + -0x78 + param_2 * 0x78;
    if ((longlong)param_2 < 0) {
      fVar30 = fVar30 + 1.8446744e+19;
    }
    local_378 = param_1;
    fVar30 = _guard_xfg_dispatch_icall_nop(fVar30);
    local_368 = (undefined4)(longlong)(fVar30 + fVar30);
    _guard_xfg_dispatch_icall_nop(local_360,0,0x2e8);
    plVar29 = &local_378;
    do {
      puVar28 = (undefined8 *)*plVar29;
      puVar23 = (undefined8 *)plVar29[1];
      lVar1 = plVar29[2];
      local_388._0_4_ = (int)lVar1;
      lVar21 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)puVar23 - (longlong)puVar28),
                      8) + ((longlong)puVar23 - (longlong)puVar28);
      lVar21 = ((lVar21 >> 6) + 1) - (lVar21 >> 0x3f);
      puVar27 = puVar28;
      if ((int)local_388 != 0) {
LAB_1430c77f0:
        if (8 < lVar21) {
          puVar28 = puVar27 + (lVar21 / 2) * 0xf;
          if (puVar28 != puVar27) {
            uVar6 = puVar27[1];
            uVar7 = *puVar28;
            uVar8 = puVar28[1];
            uVar9 = puVar28[2];
            uVar10 = puVar28[3];
            uVar11 = puVar28[4];
            uVar12 = puVar28[5];
            uVar13 = puVar28[6];
            uVar14 = puVar28[7];
            uVar15 = puVar28[8];
            uVar16 = puVar28[9];
            uVar17 = puVar28[10];
            uVar18 = puVar28[0xb];
            uVar19 = puVar28[0xc];
            uVar20 = puVar28[0xd];
            uVar2 = puVar28[0xe];
            *puVar28 = *puVar27;
            puVar28[1] = uVar6;
            uVar6 = puVar27[3];
            puVar28[2] = puVar27[2];
            puVar28[3] = uVar6;
            uVar6 = puVar27[5];
            puVar28[4] = puVar27[4];
            puVar28[5] = uVar6;
            uVar6 = puVar27[7];
            puVar28[6] = puVar27[6];
            puVar28[7] = uVar6;
            uVar6 = puVar27[9];
            puVar28[8] = puVar27[8];
            puVar28[9] = uVar6;
            uVar6 = puVar27[0xb];
            puVar28[10] = puVar27[10];
            puVar28[0xb] = uVar6;
            uVar3 = *(undefined4 *)((longlong)puVar27 + 100);
            uVar4 = *(undefined4 *)(puVar27 + 0xd);
            uVar5 = *(undefined4 *)((longlong)puVar27 + 0x6c);
            *(undefined4 *)(puVar28 + 0xc) = *(undefined4 *)(puVar27 + 0xc);
            *(undefined4 *)((longlong)puVar28 + 100) = uVar3;
            *(undefined4 *)(puVar28 + 0xd) = uVar4;
            *(undefined4 *)((longlong)puVar28 + 0x6c) = uVar5;
            puVar28[0xe] = puVar27[0xe];
            *puVar27 = uVar7;
            puVar27[1] = uVar8;
            puVar27[2] = uVar9;
            puVar27[3] = uVar10;
            puVar27[4] = uVar11;
            puVar27[5] = uVar12;
            puVar27[6] = uVar13;
            puVar27[7] = uVar14;
            puVar27[8] = uVar15;
            puVar27[9] = uVar16;
            puVar27[10] = uVar17;
            puVar27[0xb] = uVar18;
            puVar27[0xc] = uVar19;
            puVar27[0xd] = uVar20;
            puVar27[0xe] = uVar2;
          }
          puVar24 = puVar23 + 0xf;
          puVar28 = puVar27;
LAB_1430c78b0:
          puVar26 = puVar28;
          puVar28 = puVar26 + 0xf;
          if (puVar28 <= puVar23) goto code_r0x0001430c78b9;
          goto LAB_1430c78c3;
        }
        for (; puVar24 = puVar27, puVar28 = puVar27, puVar27 < puVar23; puVar23 = puVar23 + -0xf) {
          while (puVar26 = puVar24, puVar28 = puVar28 + 0xf, puVar28 <= puVar23) {
            puVar24 = puVar28;
            if (*(int *)(puVar28 + 2) <= *(int *)(puVar26 + 2)) {
              puVar24 = puVar26;
            }
          }
          if (puVar26 != puVar23) {
            uVar6 = puVar23[1];
            uVar7 = *puVar26;
            uVar8 = puVar26[1];
            uVar9 = puVar26[2];
            uVar10 = puVar26[3];
            uVar11 = puVar26[4];
            uVar12 = puVar26[5];
            uVar13 = puVar26[6];
            uVar14 = puVar26[7];
            uVar15 = puVar26[8];
            uVar16 = puVar26[9];
            uVar17 = puVar26[10];
            uVar18 = puVar26[0xb];
            uVar19 = puVar26[0xc];
            uVar20 = puVar26[0xd];
            uVar2 = puVar26[0xe];
            *puVar26 = *puVar23;
            puVar26[1] = uVar6;
            uVar6 = puVar23[3];
            puVar26[2] = puVar23[2];
            puVar26[3] = uVar6;
            uVar6 = puVar23[5];
            puVar26[4] = puVar23[4];
            puVar26[5] = uVar6;
            uVar6 = puVar23[7];
            puVar26[6] = puVar23[6];
            puVar26[7] = uVar6;
            uVar6 = puVar23[9];
            puVar26[8] = puVar23[8];
            puVar26[9] = uVar6;
            uVar6 = puVar23[0xb];
            puVar26[10] = puVar23[10];
            puVar26[0xb] = uVar6;
            uVar6 = puVar23[0xd];
            puVar26[0xc] = puVar23[0xc];
            puVar26[0xd] = uVar6;
            puVar26[0xe] = puVar23[0xe];
            *puVar23 = uVar7;
            puVar23[1] = uVar8;
            puVar23[2] = uVar9;
            puVar23[3] = uVar10;
            puVar23[4] = uVar11;
            puVar23[5] = uVar12;
            puVar23[6] = uVar13;
            puVar23[7] = uVar14;
            puVar23[8] = uVar15;
            puVar23[9] = uVar16;
            puVar23[10] = uVar17;
            puVar23[0xb] = uVar18;
            puVar23[0xc] = uVar19;
            puVar23[0xd] = uVar20;
            puVar23[0xe] = uVar2;
          }
        }
        goto LAB_1430c7af3;
      }
LAB_1430c7ae4:
      local_388 = lVar1;
      FUN_1430c7390(puVar28,lVar21,param_3,param_4);
LAB_1430c7af3:
      plVar29 = plVar29 + -3;
    } while (&local_378 <= plVar29);
  }
  return;
code_r0x0001430c78b9:
  if (*(int *)(puVar26 + 0x11) <= *(int *)(puVar27 + 2)) goto LAB_1430c78b0;
LAB_1430c78c3:
  do {
    puVar25 = puVar24;
    puVar24 = puVar25 + -0xf;
    if (puVar24 <= puVar27) break;
  } while (*(int *)(puVar27 + 2) <= *(int *)(puVar25 + -0xd));
  if (puVar28 <= puVar24) {
    if (puVar28 != puVar24) {
      uVar6 = puVar25[-0xe];
      uVar7 = *puVar28;
      uVar8 = puVar26[0x10];
      uVar9 = puVar26[0x11];
      uVar10 = puVar26[0x12];
      uVar11 = puVar26[0x13];
      uVar12 = puVar26[0x14];
      uVar13 = puVar26[0x15];
      uVar14 = puVar26[0x16];
      uVar15 = puVar26[0x17];
      uVar16 = puVar26[0x18];
      uVar17 = puVar26[0x19];
      uVar18 = puVar26[0x1a];
      uVar19 = puVar26[0x1b];
      uVar20 = puVar26[0x1c];
      uVar2 = puVar26[0x1d];
      *puVar28 = *puVar24;
      puVar26[0x10] = uVar6;
      uVar6 = puVar25[-0xc];
      puVar26[0x11] = puVar25[-0xd];
      puVar26[0x12] = uVar6;
      uVar6 = puVar25[-10];
      puVar26[0x13] = puVar25[-0xb];
      puVar26[0x14] = uVar6;
      uVar6 = puVar25[-8];
      puVar26[0x15] = puVar25[-9];
      puVar26[0x16] = uVar6;
      uVar6 = puVar25[-6];
      puVar26[0x17] = puVar25[-7];
      puVar26[0x18] = uVar6;
      uVar6 = puVar25[-4];
      puVar26[0x19] = puVar25[-5];
      puVar26[0x1a] = uVar6;
      uVar3 = *(undefined4 *)((longlong)puVar25 + -0x14);
      uVar4 = *(undefined4 *)(puVar25 + -2);
      uVar5 = *(undefined4 *)((longlong)puVar25 + -0xc);
      *(undefined4 *)(puVar26 + 0x1b) = *(undefined4 *)(puVar25 + -3);
      *(undefined4 *)((longlong)puVar26 + 0xdc) = uVar3;
      *(undefined4 *)(puVar26 + 0x1c) = uVar4;
      *(undefined4 *)((longlong)puVar26 + 0xe4) = uVar5;
      puVar26[0x1d] = puVar25[-1];
      *puVar24 = uVar7;
      puVar25[-0xe] = uVar8;
      puVar25[-0xd] = uVar9;
      puVar25[-0xc] = uVar10;
      puVar25[-0xb] = uVar11;
      puVar25[-10] = uVar12;
      puVar25[-9] = uVar13;
      puVar25[-8] = uVar14;
      puVar25[-7] = uVar15;
      puVar25[-6] = uVar16;
      puVar25[-5] = uVar17;
      puVar25[-4] = uVar18;
      puVar25[-3] = uVar19;
      puVar25[-2] = uVar20;
      puVar25[-1] = uVar2;
    }
    goto LAB_1430c78b0;
  }
  if (puVar27 != puVar24) {
    uVar6 = puVar25[-0xe];
    uVar7 = *puVar27;
    uVar8 = puVar27[1];
    uVar9 = puVar27[2];
    uVar10 = puVar27[3];
    uVar11 = puVar27[4];
    uVar12 = puVar27[5];
    uVar13 = puVar27[6];
    uVar14 = puVar27[7];
    uVar15 = puVar27[8];
    uVar16 = puVar27[9];
    uVar17 = puVar27[10];
    uVar18 = puVar27[0xb];
    uVar19 = puVar27[0xc];
    uVar20 = puVar27[0xd];
    uVar2 = puVar27[0xe];
    *puVar27 = *puVar24;
    puVar27[1] = uVar6;
    uVar6 = puVar25[-0xc];
    puVar27[2] = puVar25[-0xd];
    puVar27[3] = uVar6;
    uVar6 = puVar25[-10];
    puVar27[4] = puVar25[-0xb];
    puVar27[5] = uVar6;
    uVar6 = puVar25[-8];
    puVar27[6] = puVar25[-9];
    puVar27[7] = uVar6;
    uVar6 = puVar25[-6];
    puVar27[8] = puVar25[-7];
    puVar27[9] = uVar6;
    uVar6 = puVar25[-4];
    puVar27[10] = puVar25[-5];
    puVar27[0xb] = uVar6;
    uVar3 = *(undefined4 *)((longlong)puVar25 + -0x14);
    uVar4 = *(undefined4 *)(puVar25 + -2);
    uVar5 = *(undefined4 *)((longlong)puVar25 + -0xc);
    *(undefined4 *)(puVar27 + 0xc) = *(undefined4 *)(puVar25 + -3);
    *(undefined4 *)((longlong)puVar27 + 100) = uVar3;
    *(undefined4 *)(puVar27 + 0xd) = uVar4;
    *(undefined4 *)((longlong)puVar27 + 0x6c) = uVar5;
    puVar27[0xe] = puVar25[-1];
    *puVar24 = uVar7;
    puVar25[-0xe] = uVar8;
    puVar25[-0xd] = uVar9;
    puVar25[-0xc] = uVar10;
    puVar25[-0xb] = uVar11;
    puVar25[-10] = uVar12;
    puVar25[-9] = uVar13;
    puVar25[-8] = uVar14;
    puVar25[-7] = uVar15;
    puVar25[-6] = uVar16;
    puVar25[-5] = uVar17;
    puVar25[-4] = uVar18;
    puVar25[-3] = uVar19;
    puVar25[-2] = uVar20;
    puVar25[-1] = uVar2;
  }
  local_388._0_4_ = (int)local_388 + -1;
  lVar21 = (longlong)puVar24 + (-0x78 - (longlong)puVar27);
  lVar21 = lVar21 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar21),8);
  lVar22 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)puVar23 - (longlong)puVar28),8) +
           ((longlong)puVar23 - (longlong)puVar28);
  if ((lVar21 >> 6) - (lVar21 >> 0x3f) < (lVar22 >> 6) - (lVar22 >> 0x3f)) {
    if (puVar28 < puVar23) {
      *plVar29 = (longlong)puVar28;
      plVar29[1] = (longlong)puVar23;
      *(int *)(plVar29 + 2) = (int)local_388;
      plVar29 = plVar29 + 3;
    }
    if (puVar24 <= puVar27 + 0xf) goto LAB_1430c7af3;
    puVar23 = puVar25 + -0x1e;
    puVar28 = puVar27;
  }
  else {
    if (puVar27 + 0xf < puVar24) {
      *plVar29 = (longlong)puVar27;
      plVar29[1] = (longlong)(puVar25 + -0x1e);
      *(int *)(plVar29 + 2) = (int)local_388;
      plVar29 = plVar29 + 3;
    }
    if (puVar23 <= puVar28) goto LAB_1430c7af3;
  }
  lVar21 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)puVar23 - (longlong)puVar28),8) +
           ((longlong)puVar23 - (longlong)puVar28);
  lVar21 = ((lVar21 >> 6) + 1) - (lVar21 >> 0x3f);
  puVar27 = puVar28;
  if ((int)local_388 == 0) goto LAB_1430c7ae4;
  goto LAB_1430c77f0;
}



// FUNCTION 1430c7c50 __Internal_AddDynamic<ANgheDa> body=339 status=ok
// SIG undefined __Internal_AddDynamic<ANgheDa>(void)

void TBaseDynamicMulticastDelegate<FWeakObjectPtr,void,UPrimitiveComponent_*,AActor_*,UPrimitiveComponent_*,int,bool,FHitResult_const_&>
     ::__Internal_AddDynamic<ANgheDa>
               (longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  FWeakObjectPtr::operator=(&local_28,0);
  uVar5 = 0;
  local_20 = 0;
  FWeakObjectPtr::operator=(&local_28,param_2);
  local_20 = param_4;
  if ((param_4 != 0) && (lVar1 = FWeakObjectPtr::Get(&local_28), lVar1 != 0)) {
    UObject::FindFunction(lVar1,local_20);
  }
  iVar6 = (int)param_1[1];
  uVar7 = uVar5;
  if (0 < iVar6) {
    do {
      iVar4 = (int)uVar5;
      if (*(longlong *)(*param_1 + uVar7 + 8) == 0) {
LAB_1430c7d01:
        iVar2 = (iVar6 - iVar4) + -1;
        if (0 < iVar2) {
          iVar2 = 1;
        }
        if (iVar2 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar4 * 0x10 + *param_1),
                     (void *)((longlong)(iVar6 - iVar2) * 0x10 + *param_1),(longlong)iVar2 << 4);
          iVar6 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar6 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
      }
      else {
        lVar1 = FWeakObjectPtr::Get(*param_1 + uVar7,1);
        if (lVar1 == 0) {
          iVar6 = (int)param_1[1];
          goto LAB_1430c7d01;
        }
        uVar5 = (ulonglong)(iVar4 + 1);
        uVar7 = uVar7 + 0x10;
      }
      iVar6 = (int)param_1[1];
    } while ((int)uVar5 < iVar6);
  }
  *(int *)(param_1 + 1) = iVar6 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar6);
  }
  puVar3 = (undefined4 *)((longlong)iVar6 * 0x10 + *param_1);
  *puVar3 = local_28;
  puVar3[1] = local_24;
  *(longlong *)(puVar3 + 2) = local_20;
  return;
}



// FUNCTION 1430c7db0 FUN_1430c7db0 body=430 status=ok
// SIG undefined FUN_1430c7db0(void)

undefined8 * FUN_1430c7db0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  FUN_1426850b0();
  *param_1 = &PTR_FUN_145a9b188;
  param_1[0x8b] = &PTR_LAB_145a9b9f0;
  param_1[0x98] = &PTR_LAB_145a9ba48;
  param_1[0x99] = &PTR_LAB_145a9ba70;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0xa1] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa2] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0x4cbebc20;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 2;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DefaultVehicleMesh",1);
  uVar1 = *puVar2;
  uVar3 = FUN_142a07000();
  plVar4 = (longlong *)FUN_141789050(param_2,param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x9a] = plVar4;
  (**(code **)(*plVar4 + 0x640))(plVar4,DAT_146aefc80);
  *(byte *)(param_1[0x9a] + 0x3c0) = *(byte *)(param_1[0x9a] + 0x3c0) | 8;
  *(byte *)(param_1[0x9a] + 0x3c0) = *(byte *)(param_1[0x9a] + 0x3c0) | 2;
  *(byte *)(param_1[0x9a] + 0x3c0) = *(byte *)(param_1[0x9a] + 0x3c0) | 1;
  *(byte *)(param_1[0x9a] + 0xb1a) = *(byte *)(param_1[0x9a] + 0xb1a) | 8;
  FUN_1423974f0(param_1[0x9a],1);
  FUN_14234fe40(param_1[0x9a],0);
  *(undefined1 *)(param_1[0x9a] + 0x2ec) = 1;
  *(undefined1 *)(param_1[0x9a] + 0x2ed) = 1;
  *(undefined1 *)(param_1[0x9a] + 0x878) = 0;
  param_1[0x2d] = param_1[0x9a];
  return param_1;
}



// FUNCTION 1430c7f60 FUN_1430c7f60 body=72 status=ok
// SIG undefined FUN_1430c7f60(void)

undefined8 * FUN_1430c7f60(undefined8 *param_1)

{
  FUN_14221fbd0();
  *(undefined2 *)(param_1 + 0x8b) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145a9d470;
  *(undefined1 *)((longlong)param_1 + 0x45a) = 0;
  param_1[0x8d] = 0;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 1;
  return param_1;
}



// FUNCTION 1430c7fb0 FUN_1430c7fb0 body=329 status=ok
// SIG undefined FUN_1430c7fb0(void)

undefined8 * FUN_1430c7fb0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144167968;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  FAlphaBlend::FAlphaBlend(param_1 + 0x10,0x3e4ccccd);
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x41200000;
  param_1[0x1f] = 0x41200000;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0xbf800000;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0xbf800000;
  FUN_141f84110(param_1 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *param_1 = &PTR_LAB_145a9b050;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  return param_1;
}



// FUNCTION 1430c8100 FUN_1430c8100 body=306 status=ok
// SIG undefined FUN_1430c8100(void)

undefined4 * FUN_1430c8100(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  *param_1 = 0x43200000;
  param_1[1] = 0x43960000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 2);
  param_1[0x20] = 0x3f800000;
  param_1[0x21] = 0x3f800000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x22);
  param_1[0x42] = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  param_1[0x4e] = 0x3f800000;
  uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 2);
  puVar2 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(uVar1,local_res10,0,0x3f800000,0,*puVar2);
  puVar2 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(uVar1,local_res10,0x3f800000,0,0,*puVar2);
  uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x22);
  puVar2 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(uVar1,local_res10,0,0x3f800000,0,*puVar2);
  return param_1;
}



// FUNCTION 1430c8240 FUN_1430c8240 body=296 status=ok
// SIG undefined FUN_1430c8240(void)

undefined8 * FUN_1430c8240(undefined8 *param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  undefined4 uStack_c;
  
  param_1[2] = param_2;
  *param_1 = &PTR_LAB_145a9c4d8;
  *(undefined4 *)(param_1 + 3) = param_3;
  param_1[1] = &PTR_LAB_145a9c4e8;
  FTickFunction::FTickFunction(param_1 + 4);
  uVar5 = 0;
  param_1[4] = &PTR__scalar_deleting_destructor__145a9c4c0;
  param_1[0xf] = 0;
  if (param_4 != '\0') {
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar2 != (longlong *)0x0) {
      plVar2[1] = (longlong)param_1;
      *plVar2 = (longlong)&PTR_GetPoolName_143fc2050;
      *(undefined4 *)(plVar2 + 2) = 0x430d99d0;
      *(undefined4 *)((longlong)plVar2 + 0x14) = 1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_143fc2098;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b57d0,1);
      puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
      iVar1 = DAT_1464b57d8;
      lVar3 = (longlong)DAT_1464b57d8;
      uVar5 = *puVar4;
      DAT_1464b57d8 = DAT_1464b57d8 + 1;
      if (DAT_1464b57dc < DAT_1464b57d8) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b57d0,iVar1);
      }
      puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_1464b57d0);
      *puVar4 = plVar2;
      *(undefined4 *)(puVar4 + 1) = 3;
    }
    param_1[0xf] = uVar5;
  }
  return param_1;
}



// FUNCTION 1430c8370 FUN_1430c8370 body=178 status=ok
// SIG undefined FUN_1430c8370(void)

longlong FUN_1430c8370(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  physx::PxVehicleEngineData::PxVehicleEngineData();
  *(undefined4 *)(param_1 + 0xf0) = 0x40800000;
  *(undefined4 *)(param_1 + 0xf4) = 7;
  *(undefined4 *)(param_1 + 0xf8) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x70) = 0xc0800000;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0x40800000;
  *(undefined4 *)(param_1 + 0x7c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x80) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x84) = 0x3f8ccccd;
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  puVar2 = (undefined4 *)(param_1 + 0x8c);
  for (lVar1 = 0x19; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x100) = 0x41200000;
  *(undefined4 *)(param_1 + 0x104) = 1;
  *(undefined4 *)(param_1 + 0x108) = 5;
  physx::PxVehicleAutoBoxData::PxVehicleAutoBoxData(param_1 + 0x110);
  return param_1;
}



// FUNCTION 1430c8430 FUN_1430c8430 body=69 status=ok
// SIG undefined FUN_1430c8430(void)

undefined8 * FUN_1430c8430(undefined8 *param_1)

{
  FUN_14095d8f0();
  *param_1 = &PTR_FUN_145a9ba88;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x3dcccccd;
  return param_1;
}



// FUNCTION 1430c8480 FUN_1430c8480 body=207 status=ok
// SIG undefined FUN_1430c8480(void)

undefined8 * FUN_1430c8480(undefined8 *param_1)

{
  FUN_14235eec0();
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x3f800000;
  *param_1 = &PTR_FUN_145a9c520;
  *(undefined4 *)(param_1 + 0x44) = 0x3f000000;
  param_1[5] = &PTR_LAB_145a9cae0;
  FUN_140590080(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25c) = 0;
  param_1[0x51] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x4e) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0x437a0000;
  *(undefined4 *)(param_1 + 0x50) = 0x437a0000;
  *(undefined2 *)((longlong)param_1 + 0x284) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x286) = 1;
  *(undefined1 *)(param_1 + 0x52) = 1;
  return param_1;
}



// FUNCTION 1430c8550 FUN_1430c8550 body=181 status=ok
// SIG undefined FUN_1430c8550(void)

undefined8 * FUN_1430c8550(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  FUN_142326e40();
  *param_1 = &PTR_FUN_145a9db58;
  param_1[5] = &PTR_LAB_145a9df50;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x30);
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x30);
  puVar2 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(uVar1,local_res18,0,0,0,*puVar2);
  puVar2 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(uVar1,local_res18,0x3f000000,0x3f800000,0,*puVar2);
  return param_1;
}



// FUNCTION 1430c8610 FUN_1430c8610 body=199 status=ok
// SIG undefined FUN_1430c8610(void)

undefined8 * FUN_1430c8610(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_145a9df80;
  param_1[5] = &PTR_LAB_145a9e398;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 2;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0xff;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x41] = 0x40000000;
  if ((*(uint *)(param_1 + 1) >> 6 & 1) == 0) {
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 1;
  }
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  return param_1;
}



// FUNCTION 1430c86e0 FUN_1430c86e0 body=413 status=ok
// SIG undefined FUN_1430c86e0(void)

undefined8 * FUN_1430c86e0(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_145a9e800;
  param_1[5] = &PTR_LAB_145a9ec28;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0x453b8000;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x3e19999a;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3b) = 1;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 2;
  *(undefined4 *)(param_1 + 0x3f) = 0x43fa0000;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x43960000;
  *(undefined4 *)(param_1 + 0x40) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0x43480000;
  *(undefined4 *)(param_1 + 0x41) = 0x42700000;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0x420c0000;
  *(undefined4 *)(param_1 + 0x42) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x43) = 1;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0xff;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0xbf800000;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  param_1[0x5a] = 0x3f000000;
  return param_1;
}



// FUNCTION 1430c8880 FUN_1430c8880 body=44 status=ok
// SIG undefined FUN_1430c8880(void)

undefined8 * FUN_1430c8880(undefined8 *param_1)

{
  FUN_14243e810();
  *param_1 = &PTR_FUN_1450a9300;
  param_1[5] = &PTR_LAB_1450a98a8;
  return param_1;
}



// FUNCTION 1430c88b0 FUN_1430c88b0 body=231 status=ok
// SIG undefined FUN_1430c88b0(void)

undefined8 * FUN_1430c88b0(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  
  FUN_1423a0b90();
  *(undefined4 *)(param_1 + 0xe4) = 0x3f000000;
  plVar1 = param_1 + 0xe5;
  *(undefined4 *)((longlong)param_1 + 0x724) = 0x41a00000;
  *param_1 = &PTR_FUN_145a9ec58;
  param_1[5] = &PTR_LAB_145a9f548;
  param_1[0x5a] = &PTR_LAB_145a9f578;
  *plVar1 = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0x44bb8000;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar2 == '\0') {
    param_1[0xe7] = param_1;
    param_1[0xe6] = &DAT_146b4a460;
    *plVar1 = (longlong)DAT_146b4a460;
    DAT_146b4a460 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 1430c89a0 FUN_1430c89a0 body=149 status=ok
// SIG undefined FUN_1430c89a0(void)

undefined8 * FUN_1430c89a0(undefined8 *param_1)

{
  FUN_1426d4fa0();
  *param_1 = &PTR_FUN_145a9f5d0;
  param_1[5] = &PTR_LAB_145a9fb18;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(undefined4 *)(param_1 + 0xa1) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0x425c0000;
  *(undefined4 *)(param_1 + 0xa2) = 0x41c80000;
  *(undefined4 *)((longlong)param_1 + 0x514) = 0x41f00000;
  *(undefined4 *)(param_1 + 0xa3) = 0x3f800000;
  return param_1;
}



// FUNCTION 1430c8a40 FUN_1430c8a40 body=232 status=ok
// SIG undefined FUN_1430c8a40(void)

undefined8 * FUN_1430c8a40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  FUN_142326e40();
  *param_1 = &PTR_FUN_145a9e3c8;
  param_1[5] = &PTR_LAB_145a9e7d0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x3b);
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4d) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x3f800000;
  uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x3b);
  puVar2 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(uVar1,local_res18,0,0x44960000,0,*puVar2);
  FUN_142350b20(param_1,1);
  return param_1;
}



// FUNCTION 1430c8b30 FUN_1430c8b30 body=58 status=ok
// SIG undefined FUN_1430c8b30(void)

undefined8 * FUN_1430c8b30(undefined8 *param_1)

{
  FUN_142fded40();
  *param_1 = &PTR_FUN_145a9cf38;
  param_1[5] = &PTR_LAB_145a35ad8;
  param_1[0x2f] = &PTR_LAB_145a35b08;
  return param_1;
}



// FUNCTION 1430c8b70 FUN_1430c8b70 body=460 status=ok
// SIG undefined FUN_1430c8b70(void)

undefined8 * FUN_1430c8b70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  FUN_142326e40();
  *(undefined2 *)(param_1 + 0x2f) = 1;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  *param_1 = &PTR_FUN_145a9cb10;
  param_1[5] = &PTR_LAB_145a9cf08;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0x41200000;
  *(undefined4 *)(param_1 + 0x50) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x51) = 0x3f19999a;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x52);
  *(undefined4 *)(param_1 + 0x61) = 0x43160000;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x62) = 0x3f333333;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0x41200000;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x52);
  puVar2 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(uVar1,local_res18,0,0x3f28f5c3,0,*puVar2);
  puVar2 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(uVar1,local_res18,0x3f800000,0x3f800000,0,*puVar2);
  return param_1;
}



// FUNCTION 1430c8d40 FUN_1430c8d40 body=1880 status=ok
// SIG undefined FUN_1430c8d40(void)

undefined8 * FUN_1430c8d40(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  local_res8 = param_1;
  FUN_14095daa0();
  *param_1 = &PTR_FUN_145a9bd18;
  param_1[5] = &PTR_LAB_145a9c3c8;
  param_1[0x42] = &PTR_LAB_145a9c3f8;
  param_1[0xb7] = &PTR_LAB_145a9c468;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  *(undefined1 *)(param_1 + 0xba) = 1;
  *(undefined4 *)((longlong)param_1 + 0x5d4) = 0xbe99999a;
  param_1[0xbb] = 0x3f4ccccd;
  *(undefined2 *)(param_1 + 0xbc) = 0x101;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0xbd);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x664) = 1;
  *(undefined4 *)(param_1 + 0xcd) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x66c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xce) = 0x42340000;
  *(undefined1 *)((longlong)param_1 + 0x674) = 1;
  param_1[0xcf] = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x684) = 0x42b40000;
  *(undefined4 *)(param_1 + 0xd1) = 0x431b0000;
  *(undefined4 *)((longlong)param_1 + 0x68c) = 0x40a00000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0xd2);
  *(undefined4 *)(param_1 + 0xe1) = 0x453b8000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0xe2);
  *(undefined4 *)(param_1 + 0xf1) = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0xf2);
  *(undefined4 *)(param_1 + 0x101) = 0xbdcccccd;
  *(undefined4 *)((longlong)param_1 + 0x80c) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x102) = 0x3fc00000;
  *(undefined2 *)((longlong)param_1 + 0x814) = 1;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined1 *)((longlong)param_1 + 0x844) = 1;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x109);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x127) = 0x44340000;
  *(undefined1 *)((longlong)param_1 + 0x93c) = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x128);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x137);
  *(undefined4 *)(param_1 + 0x146) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x147) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0xa3c) = 0x41f00000;
  *(undefined1 *)(param_1 + 0x148) = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x149);
  *(undefined2 *)(param_1 + 0x158) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac4) = 0x3f800000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x159);
  *(undefined2 *)(param_1 + 0x168) = 1;
  *(undefined1 *)((longlong)param_1 + 0xb42) = 1;
  *(undefined1 *)(param_1 + 0x16a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb54) = 0x42700000;
  *(undefined4 *)(param_1 + 0x16b) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb5c) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x16c) = 0x45228000;
  *(undefined4 *)((longlong)param_1 + 0xb64) = 0x42c80000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x16d);
  FRuntimeFloatCurve::FRuntimeFloatCurve();
  *(undefined4 *)(local_res8 + 0x18b) = 0x3ecccccd;
  *(undefined4 *)(local_res8 + 0x18c) = 0;
  local_res8[0x18d] = 0;
  local_res8[0x18e] = 0;
  local_res8[399] = 0;
  local_res8[400] = 0;
  local_res8[0x191] = 0;
  *(undefined4 *)(local_res8 + 0x192) = 0x3f800000;
  *(undefined1 *)(local_res8 + 0x196) = 0;
  *(undefined4 *)(local_res8 + 0x193) = 0x42340000;
  local_res8[0x198] = 0;
  local_res8[0x199] = 0;
  local_res8[0x19c] = 0;
  local_res8[0x19d] = 0;
  local_res8[0x19e] = 0;
  local_res8[0x1a0] = 0;
  *(undefined4 *)(local_res8 + 0x1a1) = 0x3f800000;
  local_res8[0x1a2] = 0;
  local_res8[0x1a3] = 0;
  local_res8[0x1a4] = 0;
  local_res8[0x1a5] = 0;
  *(undefined4 *)(local_res8 + 0x1a7) = 0;
  *(undefined4 *)((longlong)local_res8 + 0xd34) = 0xffffffff;
  uVar2 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0xbd);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res18);
  FRichCurve::AddKey(uVar2,local_res20,0,0x3f800000,0,*puVar3);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res18);
  FRichCurve::AddKey(uVar2,local_res20,0x3f800000,0,0,*puVar3);
  uVar2 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x128);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res18);
  FRichCurve::AddKey(uVar2,local_res20,0,0,0,*puVar3);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res18);
  FRichCurve::AddKey(uVar2,local_res20,0x41f00000,0x41700000,0,*puVar3);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res18);
  FRichCurve::AddKey(uVar2,local_res20,0x43160000,0x42340000,0,*puVar3);
  uVar2 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x149);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res18);
  FRichCurve::AddKey(uVar2,local_res20,0,0,0,*puVar3);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res18);
  FRichCurve::AddKey(uVar2,local_res20,0x41f00000,0x41700000,0,*puVar3);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res18);
  FRichCurve::AddKey(uVar2,local_res20,0x43160000,0x42340000,0,*puVar3);
  uVar2 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x118);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res18);
  FRichCurve::AddKey(uVar2,local_res20,0,0x3f800000,0,*puVar3);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res18);
  FRichCurve::AddKey(uVar2,local_res20,0x43340000,0x3f800000,0,*puVar3);
  uVar2 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0xd2);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res18);
  FRichCurve::AddKey(uVar2,local_res20,0,0x3f800000,0,*puVar3);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res18);
  FRichCurve::AddKey(uVar2,local_res20,0x41700000,0x3f800000,0,*puVar3);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(local_res18);
  FRichCurve::AddKey(uVar2,local_res20,0x42480000,0,0,*puVar3);
  puVar1 = local_res8;
  uVar2 = FRuntimeFloatCurve::GetRichCurve(local_res8 + 0xe2);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(&local_res8);
  FRichCurve::AddKey(uVar2,local_res18,0,0,0,*puVar3);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(&local_res8);
  FRichCurve::AddKey(uVar2,local_res18,0x3f800000,0x3f800000,0,*puVar3);
  uVar2 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x137);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(&local_res8);
  FRichCurve::AddKey(uVar2,local_res18,0,0x43b40000,0,*puVar3);
  uVar2 = FRuntimeFloatCurve::GetRichCurve(puVar1 + 0xf2);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(&local_res8);
  FRichCurve::AddKey(uVar2,local_res18,0,0,0,*puVar3);
  uVar2 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x17c);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(&local_res8);
  FRichCurve::AddKey(uVar2,local_res18,0,0,0,*puVar3);
  puVar3 = (undefined4 *)FKeyHandle::FKeyHandle(&local_res8);
  FRichCurve::AddKey(uVar2,local_res18,0x3f800000,0x3f800000,0,*puVar3);
  *(undefined4 *)(puVar1 + 0x18c) = 0x3f800000;
  return puVar1;
}



// FUNCTION 1430c94a0 FUN_1430c94a0 body=145 status=ok
// SIG undefined FUN_1430c94a0(void)

void FUN_1430c94a0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (*(int *)(param_1 + 0x4c8) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x4c0);
  }
  if ((plVar2 != (longlong *)0x0) ||
     ((*(int *)(param_1 + 0x4c8) != 0 &&
      (plVar2 = *(longlong **)(param_1 + 0x4c0), plVar2 != (longlong *)0x0)))) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    if (*(longlong *)(param_1 + 0x4c0) != 0) {
      uVar1 = FMemory::Realloc(*(longlong *)(param_1 + 0x4c0),0,0);
      *(undefined8 *)(param_1 + 0x4c0) = uVar1;
    }
    *(undefined4 *)(param_1 + 0x4c8) = 0;
  }
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
  }
  FUN_1405911f0(param_1);
  return;
}



// FUNCTION 1430c9540 FUN_1430c9540 body=633 status=ok
// SIG undefined FUN_1430c9540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430c9540(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined8 uVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float fStack_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [80];
  
  lVar5 = *param_1;
  if (*(char *)(lVar5 + 0x1c1) == '\0') {
    FUN_14223c850(*(undefined8 *)(lVar5 + 0x220),param_1[1],1,0,1);
    return;
  }
  lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x220) + 0x168);
  if (lVar5 == 0) {
    local_98 = _DAT_1468b5d90;
    local_90 = DAT_1468b5d98;
  }
  else {
    local_98 = *(undefined8 *)(lVar5 + 0x220);
    local_90 = *(float *)(lVar5 + 0x228);
  }
  local_88 = local_98;
  uVar6 = local_88;
  fStack_80 = local_90;
  if (lVar5 == 0) {
    local_6c = 0x3f800000;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
  }
  else {
    local_78 = *(undefined4 *)(lVar5 + 0x210);
    local_74 = *(undefined4 *)(lVar5 + 0x214);
    local_70 = *(undefined4 *)(lVar5 + 0x218);
    local_6c = *(undefined4 *)(lVar5 + 0x21c);
  }
  pfVar7 = (float *)param_1[1];
  local_90 = pfVar7[2] - local_90;
  local_88._4_4_ = (float)((ulonglong)local_98 >> 0x20);
  local_88._0_4_ = (float)local_98;
  local_98 = CONCAT44(pfVar7[1] - local_88._4_4_,*pfVar7 - (float)local_88);
  local_88 = uVar6;
  uVar6 = FRotationMatrix::MakeFromXZ(local_58,&local_98,&DAT_1464aa798);
  FMatrix::ToQuat(uVar6,local_68);
  pfVar7 = (float *)FQuat::Slerp_NotNormalized
                              (&local_98,&local_78,local_68,
                               *(float *)param_1[2] * *(float *)(*param_1 + 0x1c4));
  fVar1 = *pfVar7;
  fVar2 = pfVar7[1];
  fVar3 = pfVar7[2];
  fVar4 = pfVar7[3];
  auVar8._0_4_ = fVar1 * fVar1 + fVar3 * fVar3;
  auVar8._4_4_ = fVar2 * fVar2 + fVar4 * fVar4;
  auVar8._8_4_ = fVar3 * fVar3 + fVar1 * fVar1;
  auVar8._12_4_ = fVar4 * fVar4 + fVar2 * fVar2;
  fVar14 = auVar8._4_4_ + auVar8._0_4_;
  fVar15 = auVar8._8_4_ + auVar8._4_4_;
  fVar16 = auVar8._12_4_ + auVar8._8_4_;
  fVar17 = auVar8._0_4_ + auVar8._12_4_;
  auVar9._4_4_ = fVar15;
  auVar9._0_4_ = fVar14;
  auVar9._8_4_ = fVar16;
  auVar9._12_4_ = fVar17;
  auVar9 = rsqrtps(auVar8,auVar9);
  fVar10 = auVar9._0_4_;
  fVar11 = auVar9._4_4_;
  fVar12 = auVar9._8_4_;
  fVar13 = auVar9._12_4_;
  fVar10 = (_DAT_146b4a2e0 - fVar10 * fVar10 * fVar14 * _DAT_146b4a2e0) * fVar10 + fVar10;
  fVar11 = (fRam0000000146b4a2e4 - fVar11 * fVar11 * fVar15 * fRam0000000146b4a2e4) * fVar11 +
           fVar11;
  fVar12 = (fRam0000000146b4a2e8 - fVar12 * fVar12 * fVar16 * fRam0000000146b4a2e8) * fVar12 +
           fVar12;
  fVar13 = (fRam0000000146b4a2ec - fVar13 * fVar13 * fVar17 * fRam0000000146b4a2ec) * fVar13 +
           fVar13;
  fStack_80 = (float)(((uint)(((fRam0000000146b4a2e8 -
                               fVar12 * fVar12 * fVar16 * fRam0000000146b4a2e8) * fVar12 + fVar12) *
                             fVar3) ^ uRam0000000146b4a2d8) & -(uint)(1e-08 <= fVar16) ^
                     uRam0000000146b4a2d8);
  uStack_7c = ((uint)(((fRam0000000146b4a2ec - fVar13 * fVar13 * fVar17 * fRam0000000146b4a2ec) *
                       fVar13 + fVar13) * fVar4) ^ uRam0000000146b4a2dc) & -(uint)(1e-08 <= fVar17)
              ^ uRam0000000146b4a2dc;
  local_88 = CONCAT44(((uint)(((fRam0000000146b4a2e4 -
                               fVar11 * fVar11 * fVar15 * fRam0000000146b4a2e4) * fVar11 + fVar11) *
                             fVar2) ^ uRam0000000146b4a2d4) & -(uint)(1e-08 <= fVar15) ^
                      uRam0000000146b4a2d4,
                      ((uint)(((_DAT_146b4a2e0 - fVar10 * fVar10 * fVar14 * _DAT_146b4a2e0) * fVar10
                              + fVar10) * fVar1) ^ _DAT_146b4a2d0) & -(uint)(1e-08 <= fVar14) ^
                      _DAT_146b4a2d0);
  local_98 = *(undefined8 *)param_1[1];
  local_90 = *(float *)((undefined8 *)param_1[1] + 1);
  FUN_14223c960(*(undefined8 *)(*param_1 + 0x220),&local_98,&local_88,1,0,1);
  return;
}



// FUNCTION 1430c97c0 FUN_1430c97c0 body=638 status=ok
// SIG undefined FUN_1430c97c0(void)

undefined8 * FUN_1430c97c0(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [144];
  
  lVar2 = *(longlong *)(*param_1 + 0x220);
  if (((*(longlong *)(lVar2 + 0x4d8) == 0) || (*(longlong *)(lVar2 + 0x4e0) == 0)) ||
     (cVar8 = (**(code **)(**(longlong **)(lVar2 + 0x4e0) + 0x48))(), cVar8 == '\0')) {
    pfVar3 = (float *)param_1[1];
    fVar4 = *pfVar3;
    fVar5 = pfVar3[1];
    fVar6 = pfVar3[2];
    fVar7 = pfVar3[3];
    fVar17 = pfVar3[8] * 1.0;
    fVar18 = pfVar3[9] * 0.0;
    fVar19 = pfVar3[10] * 0.0;
    fVar10 = fVar5 * 1.0 - fVar6 * 0.0;
    fVar11 = fVar6 * 0.0 - fVar4 * 1.0;
    fVar12 = fVar4 * 0.0 - fVar5 * 0.0;
    fVar10 = fVar10 + fVar10;
    fVar11 = fVar11 + fVar11;
    fVar12 = fVar12 + fVar12;
    fVar16 = (fVar11 * fVar4 - fVar10 * fVar5) + fVar7 * fVar12 + 1.0;
    fVar13 = fVar5 * fVar19 - fVar6 * fVar18;
    fVar14 = fVar6 * fVar17 - fVar4 * fVar19;
    fVar15 = fVar4 * fVar18 - fVar5 * fVar17;
    if ((((fVar14 + fVar14) * fVar4 - (fVar13 + fVar13) * fVar5) +
         fVar7 * (fVar15 + fVar15) + fVar19 <= 0.0) || (*(float *)param_1[2] <= fVar16)) {
      *param_2 = CONCAT44((fVar10 * fVar6 - fVar12 * fVar4) + fVar7 * fVar11 + 0.0,
                          (fVar12 * fVar5 - fVar11 * fVar6) + fVar7 * fVar10 + 0.0);
      *(float *)(param_2 + 1) = fVar16;
    }
    else {
      fVar10 = fVar5 * fVar19 - fVar6 * fVar18;
      fVar11 = fVar6 * fVar17 - fVar4 * fVar19;
      fVar12 = fVar4 * fVar18 - fVar5 * fVar17;
      fVar10 = fVar10 + fVar10;
      fVar11 = fVar11 + fVar11;
      fVar12 = fVar12 + fVar12;
      local_b8 = (fVar12 * fVar5 - fVar11 * fVar6) + fVar7 * fVar10 + fVar17;
      fStack_b4 = (fVar10 * fVar6 - fVar12 * fVar4) + fVar7 * fVar11 + fVar18;
      local_b0 = (fVar11 * fVar4 - fVar10 * fVar5) + fVar7 * fVar12 + fVar19;
      FRotationMatrix::MakeFromZX(local_98,&DAT_1464aa798,&local_b8);
      FMatrix::GetUnitAxis(local_98,&local_b8,2);
      uVar1 = *(uint *)(*param_1 + 0x208);
      uVar9 = FMatrix::GetUnitAxis(local_98,local_a8,3);
      FVector::RotateAngleAxis(uVar9,param_2,uVar1 ^ 0x80000000,&local_b8);
    }
  }
  else {
    *param_2 = DAT_1464aa798;
    *(undefined4 *)(param_2 + 1) = DAT_1464aa7a0;
  }
  return param_2;
}



// FUNCTION 1430c9a40 FUN_1430c9a40 body=202 status=ok
// SIG undefined FUN_1430c9a40(void)

void FUN_1430c9a40(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined8 *puVar5;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  
  FUN_1430e16b0(*(undefined8 *)(*(longlong *)(*param_1 + 0x2a0) + 0xa0),&local_48,0);
  pfVar4 = (float *)param_1[2];
  puVar5 = (undefined8 *)param_1[1];
  fVar1 = *pfVar4;
  fVar2 = pfVar4[1];
  fVar3 = pfVar4[2];
  *puVar5 = CONCAT44(fVar1 * local_44 + fVar2 * local_38 + local_2c * fVar3,
                     fVar1 * local_48 + fVar2 * local_3c + local_30 * fVar3);
  *(float *)(puVar5 + 1) = fVar1 * local_40 + fVar2 * local_34 + local_28 * fVar3;
  return;
}



// FUNCTION 1430c9b10 FUN_1430c9b10 body=197 status=ok
// SIG undefined FUN_1430c9b10(void)

void FUN_1430c9b10(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong local_res8;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c [36];
  
  plVar5 = *(longlong **)(*(longlong *)(*param_1 + 0x2a0) + 0xa0);
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0x3f800000;
  local_38 = 0;
  local_30 = 0;
  uVar1 = *(undefined8 *)(*(longlong *)(*param_1 + 0x2a0) + 0xa0);
  uVar3 = (**(code **)(*plVar5 + 0xa0))(plVar5,local_2c);
  puVar4 = (undefined8 *)physx::PxD6JointCreate(DAT_146b08400,0,uVar3,uVar1,&local_48);
  plVar5 = (longlong *)(*param_1 + 0xce8);
  if (plVar5 == &local_res8) {
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4);
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar5;
    *plVar5 = (longlong)puVar4;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)();
      return;
    }
  }
  return;
}



// FUNCTION 1430c9be0 FUN_1430c9be0 body=3479 status=ok
// SIG undefined FUN_1430c9be0(void)

void FUN_1430c9be0(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  char local_res8;
  longlong **local_res10;
  longlong local_res18;
  float local_res20;
  undefined8 local_178;
  float local_170;
  undefined8 local_168;
  float local_160;
  longlong *local_158;
  float local_150;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  undefined1 local_100 [8];
  float local_f8;
  
  local_158 = *(longlong **)(*(longlong *)(*param_1 + 0x2a0) + 0xa0);
  FWeakObjectPtr::operator=(&local_res10);
  lVar6 = FUN_1409655c0(*(undefined8 *)param_1[1],&local_res10);
  plVar1 = *(longlong **)(*param_1 + 0xd00);
  uVar7 = AGameStateBase::GetPrivateStaticClass();
  lVar8 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar7);
  if (lVar8 == 0) {
    local_res8 = '\0';
  }
  else {
    local_res8 = *(char *)(lVar8 + 0x1c0);
  }
  (**(code **)(*(longlong *)(*param_1 + 0x5b8) + 0x18))((longlong *)(*param_1 + 0x5b8),&local_140);
  if ((lVar6 != 0) && (*(int *)(*param_1 + 0x228) != 0)) {
    (**(code **)(*local_158 + 0xf0))(local_158,&local_130);
    lVar8 = *param_1;
    iVar15 = 0;
    iVar13 = 0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
    if (0 < *(int *)(lVar8 + 0x228)) {
      pfVar10 = (float *)(lVar6 + 0x9c);
      lVar14 = 0;
      local_res18 = -0x9c - lVar6;
      do {
        if (*(char *)(pfVar10 + -0x20) != '\0') {
          fVar21 = fVar21 + pfVar10[-2];
          fVar22 = fVar22 + pfVar10[-1];
          fVar23 = fVar23 + *pfVar10;
          iVar15 = iVar15 + 1;
        }
        lVar11 = (longlong)iVar13 * 0xa0;
        uVar7 = ((undefined8 *)(lVar11 + lVar6))[1];
        lVar9 = lVar11 + lVar6;
        puVar12 = (undefined8 *)(*(longlong *)(lVar8 + 0xcf0) + lVar11);
        *puVar12 = *(undefined8 *)(lVar11 + lVar6);
        puVar12[1] = uVar7;
        uVar7 = *(undefined8 *)(lVar9 + 0x18);
        puVar12[2] = *(undefined8 *)(lVar9 + 0x10);
        puVar12[3] = uVar7;
        uVar7 = *(undefined8 *)(lVar9 + 0x28);
        puVar12[4] = *(undefined8 *)(lVar9 + 0x20);
        puVar12[5] = uVar7;
        uVar7 = *(undefined8 *)(lVar9 + 0x38);
        puVar12[6] = *(undefined8 *)(lVar9 + 0x30);
        puVar12[7] = uVar7;
        uVar7 = *(undefined8 *)(lVar9 + 0x48);
        puVar12[8] = *(undefined8 *)(lVar9 + 0x40);
        puVar12[9] = uVar7;
        uVar7 = *(undefined8 *)(lVar9 + 0x58);
        puVar12[10] = *(undefined8 *)(lVar9 + 0x50);
        puVar12[0xb] = uVar7;
        uVar7 = *(undefined8 *)(lVar9 + 0x68);
        puVar12[0xc] = *(undefined8 *)(lVar9 + 0x60);
        puVar12[0xd] = uVar7;
        uVar7 = *(undefined8 *)(lVar9 + 0x78);
        puVar12[0xe] = *(undefined8 *)(lVar9 + 0x70);
        puVar12[0xf] = uVar7;
        uVar7 = *(undefined8 *)(lVar9 + 0x88);
        puVar12[0x10] = *(undefined8 *)(lVar9 + 0x80);
        puVar12[0x11] = uVar7;
        uVar2 = *(undefined4 *)(lVar9 + 0x94);
        uVar3 = *(undefined4 *)(lVar9 + 0x98);
        uVar4 = *(undefined4 *)(lVar9 + 0x9c);
        *(undefined4 *)(puVar12 + 0x12) = *(undefined4 *)(lVar9 + 0x90);
        *(undefined4 *)((longlong)puVar12 + 0x94) = uVar2;
        *(undefined4 *)(puVar12 + 0x13) = uVar3;
        *(undefined4 *)((longlong)puVar12 + 0x9c) = uVar4;
        lVar8 = *(longlong *)(*(longlong *)(*param_1 + 0x288) + lVar14);
        if (lVar8 != 0) {
          lVar9 = FUN_1430e3550();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            *(undefined1 *)(lVar8 + 0x128) =
                 *(undefined1 *)
                  (local_res18 + *(longlong *)(*param_1 + 0xcf0) + 0x1c + (longlong)pfVar10);
          }
        }
        lVar8 = *param_1;
        iVar13 = iVar13 + 1;
        lVar14 = lVar14 + 8;
        pfVar10 = pfVar10 + 0x28;
      } while (iVar13 < *(int *)(lVar8 + 0x228));
    }
    if (iVar15 == *(int *)(lVar8 + 0x228)) {
      if (*(char *)(lVar8 + 0x815) == '\0') {
        *(undefined1 *)param_1[2] = 1;
        *(undefined1 *)(*param_1 + 0x815) = 1;
      }
      else {
        *(float *)(lVar8 + 0x81c) = *(float *)param_1[3] + *(float *)(lVar8 + 0x81c);
        *(undefined1 *)(*param_1 + 0x815) = 1;
      }
    }
    else if (*(char *)(lVar8 + 0x815) != '\0') {
      (**(code **)(*local_158 + 0x128))(local_158,&local_178);
      fVar18 = (float)local_178 * (float)local_178 + local_178._4_4_ * local_178._4_4_ +
               local_170 * local_170;
      if (fVar18 <= 0.0) {
        fVar16 = 0.0;
        fVar17 = 0.0;
        fVar18 = 0.0;
      }
      else {
        fVar18 = 1.0 / SQRT(fVar18);
        fVar16 = fVar18 * local_178._4_4_;
        fVar17 = fVar18 * local_170;
        fVar18 = fVar18 * (float)local_178;
      }
      (**(code **)(*(longlong *)(*param_1 + 0x5b8) + 0x20))
                ((longlong *)(*param_1 + 0x5b8),&local_168);
      lVar6 = *param_1;
      if (iVar15 < *(int *)(lVar6 + 0x818)) {
        *(undefined4 *)param_1[4] = *(undefined4 *)(lVar6 + 0x81c);
        fVar18 = fVar18 * (float)local_168 + fVar16 * local_168._4_4_ + fVar17 * local_160;
        if (-1.0 <= fVar18) {
          if (1.0 <= fVar18) {
            fVar18 = 1.0;
          }
        }
        else {
          fVar18 = -1.0;
        }
        fVar18 = _guard_xfg_dispatch_icall_nop(fVar18);
        *(float *)param_1[5] = fVar18;
        *(int *)param_1[6] = *(int *)(lVar6 + 0x228) - iVar15;
        *(undefined1 *)param_1[7] = 1;
        lVar6 = *param_1;
      }
      if (iVar15 == 0) {
        FUN_1430cfd20(lVar6,&local_178);
        *(undefined4 *)(*param_1 + 0x81c) = 0;
        *(undefined1 *)(*param_1 + 0x815) = 0;
      }
    }
    *(int *)(*param_1 + 0x818) = iVar15;
    local_res10 = &local_158;
    lVar6 = *param_1;
    if (*(char *)(lVar6 + 0x815) == '\0') {
      fVar18 = *(float *)(lVar6 + 0x810);
    }
    else {
      fVar18 = *(float *)(lVar6 + 0x80c);
    }
    fVar16 = (float)(**(code **)(**(longlong **)(lVar6 + 0xd00) + 0x840))();
    fVar17 = (float)FUN_1428cc5b0(*(undefined8 *)param_1[8]);
    lVar6 = *param_1;
    fVar16 = fVar17 * (fVar18 - 1.0) * fVar16;
    if (*(char *)(lVar6 + 0x815) == '\0') {
      fVar18 = 1.0 - *(float *)(lVar6 + 0xcd4);
      if (1e-08 < fVar18) {
        lVar8 = *(longlong *)(lVar6 + 0xd00);
        fVar18 = fVar16 * *(float *)(lVar6 + 0x230) * fVar18;
        fVar17 = fVar18 * local_138;
        *(float *)(lVar8 + 0x4e8) = *(float *)(lVar8 + 0x4e8) - local_140 * fVar17;
        *(float *)(lVar8 + 0x4ec) = *(float *)(lVar8 + 0x4ec) - local_13c * fVar17;
        *(float *)(lVar8 + 0x4f0) = (fVar18 - local_138 * fVar17) + *(float *)(lVar8 + 0x4f0);
        lVar6 = *param_1;
      }
      if (0 < *(int *)(lVar6 + 0x818)) {
        local_178 = 0;
        fVar17 = (float)*(int *)(lVar6 + 0x818);
        fVar18 = 1.0 / fVar17;
        local_170 = (fVar17 / (float)*(int *)(lVar6 + 0x228)) * fVar16 * *(float *)(lVar6 + 0x230);
        local_160 = fVar23 * fVar18;
        local_168 = CONCAT44(fVar22 * fVar18,fVar21 * fVar18);
LAB_1430ca225:
        pfVar10 = (float *)FUN_1430cb080(&local_res10,local_100,&local_178,&local_168);
        fVar21 = *pfVar10;
        fVar22 = pfVar10[1];
        lVar6 = *(longlong *)(*param_1 + 0xd00);
        *(float *)(lVar6 + 0x4fc) = pfVar10[2] + *(float *)(lVar6 + 0x4fc);
        *(float *)(lVar6 + 0x4f8) = fVar22 + *(float *)(lVar6 + 0x4f8);
        *(float *)(lVar6 + 0x4f4) = fVar21 + *(float *)(lVar6 + 0x4f4);
      }
    }
    else {
      *(float *)(*(longlong *)(lVar6 + 0xd00) + 0x4f0) =
           fVar16 * *(float *)(lVar6 + 0x230) + *(float *)(*(longlong *)(lVar6 + 0xd00) + 0x4f0);
      if (*(char *)(*param_1 + 0x674) != '\0') {
        (**(code **)(*local_158 + 0x128))(local_158,&local_150);
        local_160 = *(float *)(*param_1 + 0x67c);
        if (0.0 < local_148) {
          local_160 = local_160 * *(float *)(*param_1 + 0x678);
        }
        local_160 = -local_160;
        local_168 = 0;
        local_178 = 0;
        local_170 = (float)FUN_1428cc5b0(*(undefined8 *)param_1[8]);
        local_170 = local_170 * *(float *)(*param_1 + 0x80c);
        goto LAB_1430ca225;
      }
    }
  }
  lVar6 = *param_1;
  if (*(char *)(lVar6 + 0x815) != '\0') {
    fVar21 = *(float *)param_1[3];
    if (*(char *)(lVar6 + 0x664) != '\0') {
      plVar1 = *(longlong **)(*(longlong *)(lVar6 + 0x2a0) + 0xa0);
      (**(code **)(*plVar1 + 0x138))(plVar1,&local_150);
      (**(code **)(*plVar1 + 0x128))(plVar1,local_100);
      fVar22 = *(float *)(lVar6 + 0x670);
      lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0xd00) + 0x168);
      if (lVar8 == 0) {
        local_160 = DAT_1464aa7a0;
        puVar12 = &local_168;
        local_168 = DAT_1464aa798;
      }
      else {
        puVar12 = (undefined8 *)FUN_14238db80(lVar8,&local_168);
      }
      local_170 = *(float *)(puVar12 + 1);
      fVar23 = *(float *)(lVar6 + 0x66c);
      if (0.0 < local_f8) {
        fVar23 = fVar23 * *(float *)(lVar6 + 0x668);
      }
      if (-1.0 <= local_170) {
        fVar18 = local_170;
        if (1.0 <= local_170) {
          fVar18 = 1.0;
        }
      }
      else {
        fVar18 = -1.0;
      }
      fVar18 = _guard_xfg_dispatch_icall_nop(fVar18);
      if (fVar18 < fVar22 * 0.017453292) {
        FUN_1430e16b0(plVar1,&local_130,0);
        fVar23 = -(fVar23 * fVar21);
        fVar22 = -1.0;
        if ((-1.0 <= fVar23) && (fVar22 = fVar23, 0.0 <= fVar23)) {
          fVar22 = 0.0;
        }
        lVar6 = *(longlong *)(lVar6 + 0xd00);
        fVar21 = 1.0 / fVar21;
        *(float *)(lVar6 + 0x4f4) =
             fVar21 * fVar22 * (local_148 * local_118 +
                               local_14c * local_124 + local_150 * local_130) +
             *(float *)(lVar6 + 0x4f4);
        *(float *)(lVar6 + 0x4f8) =
             fVar21 * fVar22 * (local_148 * local_114 +
                               local_14c * local_120 + local_150 * local_12c) +
             *(float *)(lVar6 + 0x4f8);
        *(float *)(lVar6 + 0x4fc) =
             fVar21 * fVar22 * (local_148 * local_110 +
                               local_14c * local_11c + local_150 * local_128) +
             *(float *)(lVar6 + 0x4fc);
      }
    }
    goto LAB_1430ca8eb;
  }
  (**(code **)(*local_158 + 0x138))(local_158,&local_150);
  (**(code **)(*local_158 + 0x128))(local_158,&local_178);
  (**(code **)(*(longlong *)(*param_1 + 0x5b8) + 0x20))((longlong *)(*param_1 + 0x5b8),&local_168);
  fVar23 = local_160;
  fVar22 = local_168._4_4_;
  fVar21 = (float)local_168;
  lVar6 = *param_1;
  local_res10 = (longlong **)CONCAT44(local_res10._4_4_,local_140);
  fVar16 = local_160 * local_13c - local_168._4_4_ * local_138;
  local_104 = local_160;
  local_res20 = local_13c;
  fVar17 = (float)local_168 * local_138 - local_160 * local_140;
  local_108 = local_168._4_4_;
  local_res18 = CONCAT44(local_res18._4_4_,local_138);
  fVar24 = local_168._4_4_ * local_140 - (float)local_168 * local_13c;
  fVar18 = local_150 * local_140 + local_14c * local_13c + local_148 * local_138;
  if (((*(char *)(lVar6 + 0x5e1) == '\0') || (local_res8 != '\0')) ||
     (ABS(*(float *)(lVar6 + 0xcd8)) <= 1e-08)) {
LAB_1430ca5c3:
    *(undefined4 *)(*param_1 + 0x660) = 0;
  }
  else {
    if (((local_178._4_4_ * local_168._4_4_ + (float)local_178 * (float)local_168 +
          local_170 * local_160 <= 0.0) || (*(longlong *)param_1[9] == 0)) ||
       ((ABS(fVar18) <= 1e-08 ||
        (fVar19 = (float)FUN_1430d7710(lVar6), 1e-08 <= fVar19 * *(float *)(lVar6 + 0x314) * fVar18)
        ))) goto LAB_1430ca5c3;
    fVar22 = (float)FRichCurve::Eval(*(undefined8 *)param_1[9],*(undefined4 *)(*param_1 + 0x660));
    if (0.0 <= fVar22) {
      if (1.0 <= fVar22) {
        fVar22 = 1.0;
      }
    }
    else {
      fVar22 = 0.0;
    }
    *(float *)(*param_1 + 0x660) = *(float *)param_1[3] + *(float *)(*param_1 + 0x660);
    fVar23 = *(float *)(*param_1 + 0xcd8) / *(float *)(*param_1 + 0xcdc);
    if (0.0 <= fVar23) {
      if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
    }
    else {
      fVar23 = 0.0;
    }
    fVar23 = -(fVar22 * fVar18 * fVar23);
    FUN_1430e16b0(local_158,&local_130,0);
    fVar22 = 1.0 / *(float *)param_1[3];
    lVar6 = *(longlong *)(*param_1 + 0xd00);
    *(float *)(lVar6 + 0x4fc) =
         fVar22 * (local_110 * (float)local_res18 +
                  local_11c * local_res20 + local_128 * local_res10._0_4_) * fVar23 +
         *(float *)(lVar6 + 0x4fc);
    *(float *)(lVar6 + 0x4f8) =
         fVar22 * (local_114 * (float)local_res18 +
                  local_120 * local_res20 + local_12c * local_res10._0_4_) * fVar23 +
         *(float *)(lVar6 + 0x4f8);
    *(float *)(lVar6 + 0x4f4) =
         fVar22 * (local_118 * (float)local_res18 +
                  local_124 * local_res20 + local_130 * local_res10._0_4_) * fVar23 +
         *(float *)(lVar6 + 0x4f4);
    fVar22 = local_108;
    fVar23 = local_104;
  }
  if (((*(char *)(*param_1 + 0x844) != '\0') && (*(longlong *)param_1[10] != 0)) &&
     (local_res8 == '\0')) {
    fVar19 = local_170 * fVar24;
    fVar20 = (float)local_178 * fVar16;
    fVar18 = local_178._4_4_ * fVar17;
    fVar21 = (float)FRichCurve::Eval(*(longlong *)param_1[10],
                                     ((float)local_178 * fVar21 + local_178._4_4_ * fVar22 +
                                     local_170 * fVar23) * 0.036);
    lVar6 = *param_1;
    if (0.01 < *(float *)(lVar6 + 0x840) || *(float *)(lVar6 + 0x840) == 0.01) {
      FUN_1430cfd20(lVar6,&local_178);
    }
    else {
      fVar22 = *(float *)(lVar6 + 0x230);
      fVar21 = -(fVar21 * (fVar20 + fVar18 + fVar19));
      fVar23 = 1.0 / *(float *)param_1[3];
      lVar6 = *(longlong *)(lVar6 + 0xd00);
      *(float *)(lVar6 + 0x4e8) = fVar23 * fVar22 * fVar21 * fVar16 + *(float *)(lVar6 + 0x4e8);
      *(float *)(lVar6 + 0x4ec) = fVar23 * fVar22 * fVar21 * fVar17 + *(float *)(lVar6 + 0x4ec);
      *(float *)(lVar6 + 0x4f0) = fVar23 * fVar22 * fVar21 * fVar24 + *(float *)(lVar6 + 0x4f0);
    }
  }
  FUN_1430d9e10(*param_1,*(undefined4 *)param_1[3]);
LAB_1430ca8eb:
  FUN_1430ce390(*param_1,*(undefined4 *)param_1[3]);
  FUN_1430cd200(*param_1,*(undefined4 *)param_1[3]);
  FUN_1430d1270(*param_1,*(undefined4 *)param_1[3]);
  return;
}



// FUNCTION 1430ca980 FUN_1430ca980 body=260 status=ok
// SIG undefined FUN_1430ca980(void)

void FUN_1430ca980(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 != 0) {
    lVar7 = FUN_1430e5840();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
         ) != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      iVar1 = *(int *)(param_2 + 0x570);
      *(int *)(param_2 + 0x570) = param_4;
      if (iVar1 != param_4) {
        bVar4 = false;
        *(int *)(param_2 + 0x56c) = *(int *)(param_2 + 0x56c) + 1;
        iVar8 = *(int *)(param_2 + 0x56c);
        iVar6 = *(int *)(param_2 + 0x560) + -1;
        lVar7 = (longlong)iVar6;
        if (-1 < iVar6) {
          lVar9 = lVar7 << 4;
          bVar4 = false;
          do {
            lVar2 = *(longlong *)(param_2 + 0x558);
            if (((*(int *)(lVar9 + 8 + lVar2) == 0) ||
                (plVar3 = *(longlong **)(lVar9 + lVar2), plVar3 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar3 + 0x40))(plVar3,iVar1,param_4), cVar5 == '\0')) {
              bVar4 = true;
            }
            lVar9 = lVar9 + -0x10;
            lVar7 = lVar7 + -1;
          } while (-1 < lVar7);
          iVar8 = *(int *)(param_2 + 0x56c);
        }
        *(int *)(param_2 + 0x56c) = iVar8 + -1;
        if (bVar4) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                    ((longlong *)(param_2 + 0x558),0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1430caa90 FUN_1430caa90 body=897 status=ok
// SIG undefined FUN_1430caa90(void)

undefined8 * FUN_1430caa90(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_198;
  float local_190;
  float local_188;
  float fStack_184;
  float local_180;
  undefined4 local_178;
  undefined4 local_174;
  float local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [12];
  undefined4 local_11c;
  undefined8 local_fc;
  float local_f4;
  undefined1 local_98 [144];
  
  pfVar2 = (float *)param_1[1];
  if (*(char *)*param_1 == '\0') {
    uVar5 = *(undefined8 *)(pfVar2 + 2);
    *param_2 = *(undefined8 *)pfVar2;
    param_2[1] = uVar5;
    uVar5 = *(undefined8 *)(pfVar2 + 6);
    param_2[2] = *(undefined8 *)(pfVar2 + 4);
    param_2[3] = uVar5;
    uVar5 = *(undefined8 *)(pfVar2 + 10);
    param_2[4] = *(undefined8 *)(pfVar2 + 8);
    param_2[5] = uVar5;
  }
  else {
    fVar3 = *pfVar2;
    fVar11 = pfVar2[1];
    fVar4 = pfVar2[2];
    fVar9 = pfVar2[3];
    fVar8 = fVar11 * 1.0 - fVar4 * 0.0;
    fVar10 = fVar4 * 0.0 - fVar3 * 1.0;
    fVar12 = fVar3 * 0.0 - fVar11 * 0.0;
    fVar13 = pfVar2[4];
    fVar14 = pfVar2[5];
    local_170 = pfVar2[6];
    fVar8 = fVar8 + fVar8;
    fVar10 = fVar10 + fVar10;
    fVar12 = fVar12 + fVar12;
    fVar1 = *(float *)(param_1[2] + 0x1fc);
    local_180 = local_170 - ((fVar10 * fVar3 - fVar8 * fVar11) + fVar9 * fVar12 + 1.0) * fVar1;
    _guard_xfg_dispatch_icall_nop(local_128,0,0x90);
    puVar7 = (undefined8 *)param_1[3];
    local_11c = 0x3f800000;
    local_190 = local_180;
    local_180 = local_170;
    local_174 = *(undefined4 *)(puVar7[2] + 0x200);
    local_178 = 2;
    local_198 = CONCAT44(fVar14 - ((fVar8 * fVar4 - fVar12 * fVar3) + fVar9 * fVar10 + 0.0) * fVar1,
                         fVar13 - ((fVar12 * fVar11 - fVar10 * fVar4) + fVar9 * fVar8 + 0.0) * fVar1
                        );
    local_188 = fVar13;
    fStack_184 = fVar14;
    cVar6 = UWorld::SweepSingleByChannel
                      (*(undefined8 *)*puVar7,local_128,&local_188,&local_198,&DAT_1464aa810,
                       *(undefined4 *)puVar7[1],&local_178,puVar7[3],puVar7[4]);
    pfVar2 = (float *)param_1[1];
    if (cVar6 == '\0') {
      uVar5 = *(undefined8 *)(pfVar2 + 2);
      *param_2 = *(undefined8 *)pfVar2;
      param_2[1] = uVar5;
      uVar5 = *(undefined8 *)(pfVar2 + 6);
      param_2[2] = *(undefined8 *)(pfVar2 + 4);
      param_2[3] = uVar5;
      uVar5 = *(undefined8 *)(pfVar2 + 10);
      param_2[4] = *(undefined8 *)(pfVar2 + 8);
      param_2[5] = uVar5;
    }
    else {
      fVar1 = *pfVar2;
      fVar3 = pfVar2[1];
      fVar11 = pfVar2[2];
      fVar4 = pfVar2[3];
      if (*(float *)param_1[4] <= local_f4) {
        puVar7 = &local_fc;
        fVar13 = fVar3 * 0.0 - fVar11 * 0.0;
        fVar14 = fVar11 * 1.0 - fVar1 * 0.0;
        fVar8 = fVar1 * 0.0 - fVar3 * 1.0;
        fVar13 = fVar13 + fVar13;
        fVar14 = fVar14 + fVar14;
        fVar8 = fVar8 + fVar8;
        fVar9 = (fVar8 * fVar3 - fVar14 * fVar11) + fVar4 * fVar13 + 1.0;
        fVar11 = (fVar13 * fVar11 - fVar8 * fVar1) + fVar4 * fVar14 + 0.0;
        local_190 = (fVar14 * fVar1 - fVar13 * fVar3) + fVar4 * fVar8 + 0.0;
      }
      else {
        puVar7 = &DAT_1464aa798;
        fVar13 = fVar3 * 0.0 - fVar11 * 0.0;
        fVar14 = fVar11 * 1.0 - fVar1 * 0.0;
        fVar8 = fVar1 * 0.0 - fVar3 * 1.0;
        fVar13 = fVar13 + fVar13;
        fVar14 = fVar14 + fVar14;
        fVar8 = fVar8 + fVar8;
        fVar9 = (fVar8 * fVar3 - fVar14 * fVar11) + fVar4 * fVar13 + 1.0;
        fVar11 = (fVar13 * fVar11 - fVar8 * fVar1) + fVar4 * fVar14 + 0.0;
        local_190 = (fVar14 * fVar1 - fVar13 * fVar3) + fVar4 * fVar8 + 0.0;
      }
      local_198 = CONCAT44(fVar11,fVar9);
      puVar7 = (undefined8 *)FRotationMatrix::MakeFromZX(local_98,puVar7,&local_198);
      local_158 = puVar7[2];
      uStack_150 = puVar7[3];
      local_168 = *puVar7;
      uStack_160 = puVar7[1];
      local_148 = puVar7[4];
      uStack_140 = puVar7[5];
      local_138 = *(undefined8 *)(param_1[1] + 0x10);
      _uStack_130 = CONCAT44((int)((ulonglong)puVar7[7] >> 0x20),*(undefined4 *)(param_1[1] + 0x18))
      ;
      FUN_140487e30(param_2,&local_168);
    }
  }
  return param_2;
}



// FUNCTION 1430cae20 FUN_1430cae20 body=213 status=ok
// SIG undefined FUN_1430cae20(void)

void FUN_1430cae20(longlong *param_1)

{
  float fVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float fVar5;
  float local_58;
  float local_54;
  float local_50;
  
  uVar4 = (**(code **)(**(longlong **)(*param_1 + 0x180) + 0x6d0))
                    (*(longlong **)(*param_1 + 0x180),0,1);
  FUN_142699720(uVar4,&local_58);
  pfVar2 = (float *)param_1[2];
  fVar1 = pfVar2[2];
  puVar3 = (undefined8 *)param_1[1];
  fVar5 = *pfVar2 * local_58 + pfVar2[1] * local_54 + fVar1 * local_50;
  *puVar3 = CONCAT44(local_54 - pfVar2[1] * fVar5,local_58 - *pfVar2 * fVar5);
  *(float *)(puVar3 + 1) = local_50 - fVar1 * fVar5;
  return;
}



// FUNCTION 1430caf00 FUN_1430caf00 body=238 status=ok
// SIG undefined FUN_1430caf00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

float FUN_1430caf00(void)

{
  int iVar1;
  ulonglong uVar2;
  float *pfVar3;
  undefined1 *puVar4;
  char in_R9B;
  float fVar5;
  undefined4 in_stack_00000028;
  float in_stack_00000030;
  undefined1 auStack_48 [32];
  float *local_28;
  float afStack_20 [2];
  ulonglong local_18;
  
  puVar4 = auStack_48;
  local_18 = DAT_1468387a8 ^ (ulonglong)&local_28;
  iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(DAT_146b4a4d0);
  if (((longlong)iVar1 & 0x3fffffffffffffffU) == 0) {
    pfVar3 = (float *)0x0;
  }
  else {
    iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(DAT_146b4a4d0);
    uVar2 = (longlong)iVar1 * 4 + 0x1e;
    if (uVar2 <= (longlong)iVar1 * 4 + 0xfU) {
      uVar2 = 0xffffffffffffff0;
    }
    puVar4 = auStack_48 + -(uVar2 & 0xfffffffffffffff0);
    pfVar3 = (float *)((longlong)afStack_20 + -(uVar2 & 0xfffffffffffffff0));
  }
  local_28 = pfVar3;
  *(undefined8 *)(puVar4 + -8) = 0x1430caf94;
  afStack_20[0] = (float)TResourceArray<unsigned_char,0>::GetResourceDataSize(DAT_146b4a4d0);
  *(undefined8 *)(puVar4 + -8) = 0x1430cafb8;
  FUN_1415ada30(DAT_146b4a4d0,in_stack_00000028,&local_28,1);
  fVar5 = *pfVar3;
  if ((in_R9B == '\0') && (0.7 <= in_stack_00000030)) {
    fVar5 = fVar5 + pfVar3[1];
  }
  *(undefined8 *)(puVar4 + -8) = 0x1430cafe0;
  return fVar5;
}



// FUNCTION 1430caff0 FUN_1430caff0 body=130 status=ok
// SIG undefined FUN_1430caff0(void)

void FUN_1430caff0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(char *)(*(longlong *)(lVar1 + 0x2a8) + 0x100) == '\0') {
    *(byte *)(param_1[1] + 0x24) = (byte)(*(uint *)(lVar1 + 0x310) >> 1) & 1;
    *(byte *)(param_1[1] + 0x25) = (byte)(*(uint *)(*param_1 + 0x310) >> 2) & 1;
    lVar1 = *param_1;
  }
  if ((*(char *)(lVar1 + 0x5d0) == '\0') && (*(longlong *)(lVar1 + 0x2a8) != 0)) {
    FUN_143975300(param_1[2],param_1[3],param_1[1],*(undefined4 *)param_1[4],0,
                  *(longlong *)(lVar1 + 0x2a8));
  }
  return;
}



// FUNCTION 1430cb080 FUN_1430cb080 body=517 status=ok
// SIG undefined FUN_1430cb080(void)

float * FUN_1430cb080(undefined8 *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 local_c8 [16];
  undefined1 local_b8 [28];
  undefined1 local_9c [148];
  
  uVar5 = (**(code **)(**(longlong **)*param_1 + 0xf0))(*(longlong **)*param_1,local_b8);
  uVar6 = (**(code **)(**(longlong **)*param_1 + 0xa0))(*(longlong **)*param_1,local_9c);
  pfVar7 = (float *)physx::PxQuat::operator*(uVar6,local_c8,uVar5);
  fVar9 = param_4[1] + param_4[1];
  fVar13 = *param_4 + *param_4;
  fVar1 = pfVar7[3];
  fVar12 = param_4[2] + param_4[2];
  fVar2 = *pfVar7;
  fVar15 = pfVar7[1];
  fVar3 = pfVar7[2];
  fVar10 = fVar1 * fVar1 - 0.5;
  fVar8 = fVar15 * fVar9 + fVar2 * fVar13 + fVar3 * fVar12;
  fVar14 = (fVar15 * fVar12 - fVar3 * fVar9) * fVar1 + fVar10 * fVar13 + fVar2 * fVar8;
  fVar4 = param_3[1];
  fVar11 = (fVar3 * fVar13 - fVar2 * fVar12) * fVar1 + fVar10 * fVar9 + fVar15 * fVar8;
  fVar15 = (fVar2 * fVar9 - fVar15 * fVar13) * fVar1 + fVar10 * fVar12 + fVar3 * fVar8;
  fVar1 = *param_3;
  fVar2 = param_3[2];
  *param_2 = fVar11 * param_3[2] - fVar15 * fVar4;
  param_2[2] = fVar4 * fVar14 - fVar1 * fVar11;
  param_2[1] = fVar15 * fVar1 - fVar14 * fVar2;
  return param_2;
}



// FUNCTION 1430cb290 FUN_1430cb290 body=130 status=ok
// SIG undefined FUN_1430cb290(void)

void FUN_1430cb290(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(char *)(*(longlong *)(lVar1 + 0x2a8) + 0x100) == '\0') {
    *(byte *)(param_1[1] + 0x24) = (byte)(*(uint *)(lVar1 + 0x310) >> 1) & 1;
    *(byte *)(param_1[1] + 0x25) = (byte)(*(uint *)(*param_1 + 0x310) >> 2) & 1;
    lVar1 = *param_1;
  }
  if ((*(char *)(lVar1 + 0x5d0) == '\x01') && (*(longlong *)(lVar1 + 0x2a8) != 0)) {
    FUN_143975380(param_1[2],param_1[3],param_1[1],*(undefined4 *)param_1[4],0,
                  *(longlong *)(lVar1 + 0x2a8));
  }
  return;
}



// FUNCTION 1430cb320 FUN_1430cb320 body=2806 status=ok
// SIG undefined FUN_1430cb320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430cb320(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_198;
  float fStack_190;
  float fStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  float local_170;
  float local_16c;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined8 local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  (**(code **)(*(longlong *)(*param_1 + 0x5b8) + 0x18))((longlong *)(*param_1 + 0x5b8),&local_160);
  FUN_142699720(*(undefined8 *)param_1[1],&local_170);
  fVar10 = local_170 * local_160 + local_16c * local_15c + local_168 * local_158;
  fVar17 = local_168 - local_158 * fVar10;
  fVar15 = local_16c - local_15c * fVar10;
  fVar10 = local_170 - local_160 * fVar10;
  if ((*(longlong *)param_1[2] != 0) && (*(char *)(*param_1 + 0x93c) != '\0')) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b4a5ac) &&
       (_Init_thread_header(&DAT_146b4a5ac), DAT_146b4a5ac == -1)) {
      _DAT_146b4a5a0 = 0;
      _DAT_146b4a5a8 = 1.0;
      _Init_thread_footer(&DAT_146b4a5ac);
    }
    iVar5 = (**(code **)(**(longlong **)(*param_1 + 0xce8) + 0xf0))
                      (*(longlong **)(*param_1 + 0xce8),3);
    lVar8 = *(longlong *)(*(longlong *)(*param_1 + 0xd00) + 0x168);
    if (lVar8 == 0) {
      local_1a0 = (float)DAT_1464aa7b0;
      puVar6 = &local_1a8;
      local_1a8 = DAT_1464aa7a8;
    }
    else {
      puVar6 = (undefined8 *)FUN_142369f10(lVar8,&local_198);
    }
    local_1a8 = *puVar6;
    fVar19 = *(float *)(puVar6 + 1);
    fVar16 = (float)((ulonglong)local_1a8 >> 0x20);
    local_130 = CONCAT44(fVar16,fVar16);
    local_1a0 = fVar19;
    if ((0.98 <= ABS(fVar16 * _DAT_146b4a5a4 + (float)local_1a8 * _DAT_146b4a5a0 +
                     fVar19 * _DAT_146b4a5a8)) ||
       (lVar8 = *param_1, *(char *)(lVar8 + 0x815) != '\0')) {
      if (iVar5 == 0) {
        (**(code **)(**(longlong **)(*param_1 + 0xce8) + 0xe8))
                  (*(longlong **)(*param_1 + 0xce8),3,2);
      }
    }
    else {
      if (iVar5 != 0) {
        (**(code **)(**(longlong **)(lVar8 + 0xce8) + 0xe8))(*(longlong **)(lVar8 + 0xce8),3);
        lVar8 = *param_1;
        lVar1 = *(longlong *)(*(longlong *)(lVar8 + 0xd00) + 0x168);
        fStack_190 = (float)DAT_1468b5da8;
        local_198 = DAT_1468b5da0;
        if (lVar1 != 0) {
          local_128 = *(float *)(lVar1 + 0x210);
          fStack_124 = *(float *)(lVar1 + 0x214);
          fStack_120 = *(float *)(lVar1 + 0x218);
          fStack_11c = *(float *)(lVar1 + 0x21c);
          auVar14._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_124);
          auVar14._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_128);
          auVar14._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_120);
          auVar14._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_11c);
          iVar5 = movmskps((int)*(longlong *)(lVar8 + 0xd00),auVar14);
          if (iVar5 != 0) {
            *(float *)(lVar1 + 0x250) = local_128;
            *(float *)(lVar1 + 0x254) = fStack_124;
            *(float *)(lVar1 + 600) = fStack_120;
            *(float *)(lVar1 + 0x25c) = fStack_11c;
            puVar6 = (undefined8 *)FQuat::Rotator(&local_128,&local_188);
            *(undefined8 *)(lVar1 + 0x260) = *puVar6;
            *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar6 + 1);
            lVar8 = *param_1;
          }
          fStack_190 = (float)*(undefined4 *)(lVar1 + 0x268);
          local_198 = *(undefined8 *)(lVar1 + 0x260);
        }
        *(float *)(lVar8 + 0xce0) = fStack_190;
        lVar8 = *param_1;
        local_188 = local_198;
        uStack_180 = fStack_190;
      }
      fVar10 = SQRT(fVar15 * fVar15 + fVar10 * fVar10 + fVar17 * fVar17);
      if (*(float *)(lVar8 + 800) <= 0.0) {
        if ((*(char *)(lVar8 + 0x815) != '\0') || (ABS(*(float *)(lVar8 + 0x314)) <= 1e-08)) {
          fVar15 = 0.0;
        }
        else {
          fVar18 = (float)FUN_1430d7710(lVar8);
          fVar17 = *(float *)(lVar8 + 0x314);
          fVar15 = (float)FRichCurve::Eval(*(undefined8 *)param_1[2],fVar10 * 0.036,0);
          lVar8 = *param_1;
          fVar15 = fVar15 * fVar18 * fVar17;
        }
        uVar7 = FRuntimeFloatCurve::GetRichCurve(lVar8 + 0x9b8);
        fVar10 = (float)FRichCurve::Eval(uVar7,fVar10,0x43b40000);
        lVar8 = *param_1;
        local_1b0 = *(undefined4 *)param_1[3];
        local_1b8 = 0x447a0000;
        uVar9 = FUN_1430d1900(lVar8,fVar15,lVar8 + 0xce4,*(float *)(lVar8 + 0xa30) / fVar10);
      }
      else {
        local_1b0 = *(undefined4 *)param_1[3];
        local_1b8 = 0x447a0000;
        uVar9 = FUN_1430d1900();
      }
      *(undefined4 *)(*param_1 + 0xce0) = uVar9;
      fVar15 = fVar19 * _DAT_146b4a5a4 - fVar16 * _DAT_146b4a5a8;
      fVar17 = (float)local_1a8 * _DAT_146b4a5a8 - fVar19 * _DAT_146b4a5a0;
      fVar18 = fVar16 * _DAT_146b4a5a0 - (float)local_1a8 * _DAT_146b4a5a4;
      fVar10 = fVar17 * fVar17 + fVar15 * fVar15 + fVar18 * fVar18;
      local_e8 = fVar15;
      local_e4 = fVar17;
      local_e0 = fVar18;
      if ((fVar10 != 1.0) &&
         (local_e8 = DAT_1468b5d90, local_e4 = DAT_1468b5d94, local_e0 = DAT_1468b5d98,
         1e-08 <= fVar10)) {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = CONCAT44(0,fVar10);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = CONCAT44(0,fVar10);
        auVar14 = rsqrtss(auVar12,auVar4);
        fVar11 = auVar14._0_4_;
        fVar11 = fVar11 + fVar11 * (0.5 - fVar10 * 0.5 * fVar11 * fVar11);
        fVar11 = fVar11 + fVar11 * (0.5 - fVar10 * 0.5 * fVar11 * fVar11);
        local_e8 = fVar15 * fVar11;
        local_e4 = fVar17 * fVar11;
        local_e0 = fVar18 * fVar11;
      }
      fVar15 = local_e0 * fVar16 - local_e4 * fVar19;
      fVar17 = local_e8 * fVar19 - local_e0 * (float)local_1a8;
      fVar19 = local_e4 * (float)local_1a8 - local_e8 * fVar16;
      fVar10 = fVar17 * fVar17 + fVar15 * fVar15 + fVar19 * fVar19;
      local_d8 = fVar15;
      local_d4 = fVar17;
      local_d0 = fVar19;
      if ((fVar10 != 1.0) &&
         (local_d8 = DAT_1468b5d90, local_d4 = DAT_1468b5d94, local_d0 = DAT_1468b5d98,
         1e-08 <= fVar10)) {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = CONCAT44(0,fVar10);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = CONCAT44(0,fVar10);
        auVar14 = rsqrtss(auVar13,auVar3);
        fVar16 = auVar14._0_4_;
        fVar16 = fVar16 + fVar16 * (0.5 - fVar10 * 0.5 * fVar16 * fVar16);
        fVar16 = fVar16 + fVar16 * (0.5 - fVar10 * 0.5 * fVar16 * fVar16);
        local_d8 = fVar15 * fVar16;
        local_d4 = fVar17 * fVar16;
        local_d0 = fVar19 * fVar16;
      }
      fVar10 = *(float *)(*param_1 + 0xce0) * -0.008726646;
      if (fVar10 < 0.0) {
        fVar15 = fVar10 * 0.15915494 - 0.5;
      }
      else {
        fVar15 = fVar10 * 0.15915494 + 0.5;
      }
      fVar10 = fVar10 - (float)(int)fVar15 * 6.2831855;
      if (fVar10 <= 1.5707964) {
        if (-1.5707964 <= fVar10) {
          fVar15 = 1.0;
        }
        else {
          fVar15 = -1.0;
          fVar10 = -3.1415927 - fVar10;
        }
      }
      else {
        fVar15 = -1.0;
        fVar10 = 3.1415927 - fVar10;
      }
      fVar17 = fVar10 * fVar10;
      local_ec = 0;
      local_dc = 0;
      local_cc = 0;
      local_f8 = (float)local_1a8;
      local_f0 = local_1a0;
      local_c8 = 0;
      uStack_c0 = 0x3f80000000000000;
      fVar10 = (((((2.7525562e-06 - fVar17 * 2.3889859e-08) * fVar17 - 0.00019840874) * fVar17 +
                 0.008333331) * fVar17 - 0.16666667) * fVar17 + 1.0) * fVar10;
      local_f4 = (float)local_130;
      fVar16 = (float)local_1a8 * fVar10;
      fVar19 = local_f4 * fVar10;
      fVar15 = (((((2.4760495e-05 - fVar17 * 2.6051615e-07) * fVar17 - 0.0013888378) * fVar17 +
                 0.041666638) * fVar17 - 0.5) * fVar17 + 1.0) * fVar15;
      fVar10 = local_1a0 * fVar10;
      FQuat::FQuat(&local_128,&local_f8);
      local_198 = CONCAT44(fVar19,fVar16);
      local_118 = fStack_11c * fVar16 * _DAT_146b4a360 + fVar15 * local_128 +
                  fStack_120 * fVar19 * _DAT_146b4a350 + fStack_124 * fVar10 * _DAT_146b4a340;
      fStack_114 = fStack_120 * fVar16 * fRam0000000146b4a364 + fVar15 * fStack_124 +
                   fStack_11c * fVar19 * fRam0000000146b4a354 +
                   local_128 * fVar10 * fRam0000000146b4a344;
      fStack_110 = fStack_124 * fVar16 * fRam0000000146b4a368 + fVar15 * fStack_120 +
                   local_128 * fVar19 * fRam0000000146b4a358 +
                   fStack_11c * fVar10 * fRam0000000146b4a348;
      fStack_10c = local_128 * fVar16 * fRam0000000146b4a36c + fVar15 * fStack_11c +
                   fStack_124 * fVar19 * fRam0000000146b4a35c +
                   fStack_120 * fVar10 * fRam0000000146b4a34c;
      fStack_190 = fVar10;
      fStack_18c = fVar15;
      puVar6 = (undefined8 *)FUN_142699110(*(undefined8 *)param_1[1],&local_f8,1,0);
      local_108 = *puVar6;
      uStack_100 = puVar6[1];
      local_1b8 = *(undefined4 *)(*param_1 + 0x938);
      FUN_1430db460(&local_188,&local_108,&local_118,*(undefined4 *)param_1[3]);
      lVar8 = *(longlong *)(*(longlong *)(*param_1 + 0xd00) + 0x168);
      if (lVar8 == 0) {
        fStack_190 = DAT_1468b5d98;
        puVar6 = &local_198;
        local_198 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      }
      else {
        puVar6 = &local_1a8;
        local_1a0 = *(float *)(lVar8 + 0x228);
        local_1a8 = *(undefined8 *)(lVar8 + 0x220);
      }
      uStack_148 = CONCAT44(uStack_17c,uStack_180);
      fStack_190 = *(float *)(puVar6 + 1);
      local_150 = local_188;
      local_140 = (undefined4)*puVar6;
      local_13c = (undefined4)((ulonglong)*puVar6 >> 0x20);
      plVar2 = *(longlong **)(*param_1 + 0xce8);
      local_138 = fStack_190;
      (**(code **)(*plVar2 + 0x38))(plVar2,0,&local_150);
    }
  }
  return;
}



// FUNCTION 1430cbe20 FUN_1430cbe20 body=418 status=ok
// SIG undefined FUN_1430cbe20(void)

void FUN_1430cbe20(undefined8 *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (1e-08 < ABS(param_3)) {
    pfVar8 = (float *)*param_1;
    fVar1 = param_2[2];
    fVar2 = param_2[1];
    fVar3 = *param_2;
    fVar11 = fVar2 * pfVar8[1] + fVar3 * *pfVar8 + fVar1 * pfVar8[2];
    fVar10 = fVar11 + param_3;
    if ((*(float *)param_1[1] < fVar10) || (fVar12 = param_3, fVar10 < -*(float *)param_1[1])) {
      fVar12 = param_3 - fVar11;
    }
    if (fVar12 * param_3 <= 0.0) {
      fVar12 = 0.0;
    }
    pfVar8 = (float *)param_1[3];
    fVar12 = fVar12 / *(float *)param_1[4];
    lVar9 = *(longlong *)(param_1[2] + 0xd00);
    fVar10 = pfVar8[5];
    fVar11 = pfVar8[2];
    fVar4 = pfVar8[8];
    fVar5 = pfVar8[4];
    fVar6 = pfVar8[1];
    fVar7 = pfVar8[7];
    *(float *)(lVar9 + 0x4f4) =
         (fVar2 * pfVar8[3] + fVar3 * *pfVar8 + fVar1 * pfVar8[6]) * fVar12 +
         *(float *)(lVar9 + 0x4f4);
    *(float *)(lVar9 + 0x4fc) =
         (fVar11 * fVar3 + fVar10 * fVar2 + fVar4 * fVar1) * fVar12 + *(float *)(lVar9 + 0x4fc);
    *(float *)(lVar9 + 0x4f8) =
         (fVar5 * fVar2 + fVar6 * fVar3 + fVar7 * fVar1) * fVar12 + *(float *)(lVar9 + 0x4f8);
  }
  return;
}



// FUNCTION 1430cc090 FUN_1430cc090 body=144 status=ok
// SIG undefined FUN_1430cc090(void)

longlong FUN_1430cc090(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x558);
  if (*(longlong *)(param_1 + 0x540) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x508) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x4c8) = &PTR_FUN_143fe0658;
  *(undefined ***)(param_1 + 0x4c0) = &PTR_FUN_14407f310;
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_14407ef78;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x578);
  }
  return param_1;
}



// FUNCTION 1430cc120 FUN_1430cc120 body=439 status=ok
// SIG undefined FUN_1430cc120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1430cc120(undefined8 *param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  
  lVar3 = param_1[0xf];
  uVar6 = 0;
  *param_1 = &PTR_LAB_145a9c4d8;
  param_1[1] = &PTR_LAB_145a9c4e8;
  uVar8 = uVar6;
  uVar10 = uVar6;
  iVar4 = DAT_1464b57d8;
  if (0 < DAT_1464b57d8) {
    do {
      plVar9 = (longlong *)(DAT_1464b57d0 + uVar10);
      if ((((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
         iVar4 = DAT_1464b57d8, *plVar2 == lVar3)) {
        if (((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar9 != 0) {
            lVar3 = FMemory::Realloc(*plVar9,0,0);
            *plVar9 = lVar3;
          }
          *(undefined4 *)(plVar9 + 1) = 0;
          iVar4 = DAT_1464b57d8;
        }
        break;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar10 = uVar10 + 0x10;
    } while ((int)uVar7 < iVar4);
  }
  if (DAT_1464b57e4 < 1) {
    uVar8 = uVar6;
    iVar5 = iVar4;
    if (0 < iVar4) {
      do {
        if (((*(int *)(uVar6 + 8 + DAT_1464b57d0) == 0) ||
            (*(longlong **)(uVar6 + DAT_1464b57d0) == (longlong *)0x0)) ||
           (cVar1 = (**(code **)(**(longlong **)(uVar6 + DAT_1464b57d0) + 0x10))(), cVar1 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464b57d0,uVar8,1,1);
        }
        else {
          uVar8 = (ulonglong)((int)uVar8 + 1);
          uVar6 = uVar6 + 0x10;
        }
        iVar5 = DAT_1464b57d8;
      } while ((int)uVar8 < DAT_1464b57d8);
    }
    _DAT_1464b57e0 = iVar5 * 2;
    if (_DAT_1464b57e0 < 3) {
      _DAT_1464b57e0 = 2;
    }
    if ((_DAT_1464b57e0 < iVar4) && (DAT_1464b57dc != iVar5)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464b57d0);
    }
  }
  FTickFunction::~FTickFunction(param_1 + 4);
  param_1[1] = &PTR__purecall_143f3ef70;
  *param_1 = &PTR__purecall_143f3ef70;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1430cc2e0 FUN_1430cc2e0 body=43 status=ok
// SIG undefined FUN_1430cc2e0(void)

undefined8 * FUN_1430cc2e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145a9c4f8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1430cc310 FUN_1430cc310 body=97 status=ok
// SIG undefined FUN_1430cc310(void)

longlong FUN_1430cc310(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2a8);
  FUN_140591060(param_1 + 0x240);
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x300);
  }
  return param_1;
}



// FUNCTION 1430cc380 FUN_1430cc380 body=67 status=ok
// SIG undefined FUN_1430cc380(void)

longlong FUN_1430cc380(longlong param_1,ulonglong param_2)

{
  FRichCurve::~FRichCurve(param_1 + 0x180);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 1430cc3d0 FUN_1430cc3d0 body=119 status=ok
// SIG undefined FUN_1430cc3d0(void)

longlong FUN_1430cc3d0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x198);
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 1430cc450 FUN_1430cc450 body=204 status=ok
// SIG undefined FUN_1430cc450(void)

longlong FUN_1430cc450(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x290) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1e0);
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2d8);
  }
  return param_1;
}



// FUNCTION 1430cc520 FUN_1430cc520 body=185 status=ok
// SIG undefined FUN_1430cc520(void)

longlong FUN_1430cc520(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x768) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x758) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x748) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x738) != 0) {
    if (*(longlong *)(param_1 + 0x728) == 0) {
      **(longlong **)(param_1 + 0x730) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x730) = *(longlong *)(param_1 + 0x728);
      *(undefined8 *)(*(longlong *)(param_1 + 0x728) + 8) = *(undefined8 *)(param_1 + 0x730);
      *(undefined8 *)(param_1 + 0x728) = 0;
    }
    *(undefined8 *)(param_1 + 0x730) = 0;
    *(undefined8 *)(param_1 + 0x738) = 0;
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x790);
  }
  return param_1;
}



// FUNCTION 1430cc5e0 FUN_1430cc5e0 body=107 status=ok
// SIG undefined FUN_1430cc5e0(void)

longlong FUN_1430cc5e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    FMemory::Free();
  }
  FUN_1430c94a0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x540);
  }
  return param_1;
}



// FUNCTION 1430cc650 FUN_1430cc650 body=102 status=ok
// SIG undefined FUN_1430cc650(void)

longlong FUN_1430cc650(longlong param_1,ulonglong param_2)

{
  FRichCurve::~FRichCurve(param_1 + 0x1d8);
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x288);
  }
  return param_1;
}



// FUNCTION 1430cc6c0 FUN_1430cc6c0 body=153 status=ok
// SIG undefined FUN_1430cc6c0(void)

longlong FUN_1430cc6c0(longlong param_1,ulonglong param_2)

{
  FRichCurve::~FRichCurve(param_1 + 0x290);
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x368);
  }
  return param_1;
}



// FUNCTION 1430cc760 FUN_1430cc760 body=376 status=ok
// SIG undefined FUN_1430cc760(void)

longlong FUN_1430cc760(longlong param_1,ulonglong param_2)

{
  FUN_14188a930(param_1 + 0xd20);
  FUN_14188a930(param_1 + 0xd10);
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0xcf0));
  if (*(undefined8 **)(param_1 + 0xce8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0xce8))();
  }
  if (*(longlong *)(param_1 + 0xcc0) != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_1 + 0xbe0);
  FRichCurve::~FRichCurve(param_1 + 0xb68);
  FRichCurve::~FRichCurve(param_1 + 0xac8);
  FRichCurve::~FRichCurve(param_1 + 0xa48);
  FRichCurve::~FRichCurve(param_1 + 0x9b8);
  FRichCurve::~FRichCurve(param_1 + 0x940);
  FRichCurve::~FRichCurve(param_1 + 0x8c0);
  FRichCurve::~FRichCurve(param_1 + 0x848);
  if (*(longlong *)(param_1 + 0x830) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x820) != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_1 + 0x790);
  FRichCurve::~FRichCurve(param_1 + 0x710);
  FRichCurve::~FRichCurve(param_1 + 0x690);
  FRichCurve::~FRichCurve(param_1 + 0x5e8);
  if (*(longlong *)(param_1 + 0x5c0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x5b8) = &PTR_FUN_1441b49f8;
  FRichCurve::~FRichCurve(param_1 + 0x538);
  if (*(longlong *)(param_1 + 0x518) != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_1 + 0x458);
  FUN_14096d3c0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd40);
  }
  return param_1;
}



// FUNCTION 1430cc8e0 FUN_1430cc8e0 body=581 status=ok
// SIG undefined FUN_1430cc8e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430cc8e0(longlong param_1,char param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x280) != param_2) {
    *(char *)(param_1 + 0x280) = param_2;
    if (*(longlong *)(param_1 + 0x278) != 0) {
      *(char *)(*(longlong *)(param_1 + 0x278) + 0x421) = param_2;
      if (*(char *)(param_1 + 0x280) == '\0') {
        if (*(longlong *)(param_1 + 600) != 0) {
          lVar5 = *(longlong *)(param_1 + 0x278);
          FWeakObjectPtr::operator=(&local_78);
          *(undefined4 *)(lVar5 + 0xd34) = local_78;
          *(undefined4 *)(lVar5 + 0xd38) = local_74;
          if (*(longlong *)(lVar5 + 0x2a0) != 0) {
            uVar6 = 0;
            uVar1 = *(uint *)(*(longlong *)(lVar5 + 0x2a0) + 0x3c);
            if (uVar1 != 0) {
              do {
                plVar2 = *(longlong **)((longlong)(int)uVar6 * 0x38 + *(longlong *)(lVar5 + 0x220));
                if (plVar2 == (longlong *)0x0) {
                  lVar4 = 0;
                }
                else {
                  lVar4 = plVar2[0x1f];
                  if (lVar4 == 0) {
                    (**(code **)(*plVar2 + 0x368))(plVar2);
                    lVar4 = plVar2[0x1f];
                  }
                }
                puVar3 = (undefined8 *)
                         physx::PxVehicleWheelsSimData::getTireData
                                   (*(longlong *)(lVar5 + 0x2a0) + 0x10,uVar6);
                local_68 = *puVar3;
                uStack_60 = puVar3[1];
                local_58 = puVar3[2];
                uStack_50 = puVar3[3];
                local_48 = *(undefined4 *)(puVar3 + 4);
                uStack_44 = *(undefined4 *)((longlong)puVar3 + 0x24);
                uStack_40 = *(undefined4 *)(puVar3 + 5);
                uStack_3c = *(undefined4 *)((longlong)puVar3 + 0x2c);
                local_38 = *(undefined4 *)(puVar3 + 6);
                uStack_34 = *(undefined4 *)((longlong)puVar3 + 0x34);
                uStack_30 = *(undefined4 *)(puVar3 + 7);
                uStack_2c = *(undefined4 *)((longlong)puVar3 + 0x3c);
                lVar4 = *(longlong *)(lVar4 + 0x68);
                if (lVar4 == 0) {
                  lVar4 = UAndroidPermissionCallbackProxy::GetInstance();
                }
                uStack_40 = *(undefined4 *)(lVar4 + 0x48);
                physx::PxVehicleWheelsSimData::setTireData
                          (*(longlong *)(lVar5 + 0x2a0) + 0x10,uVar6,&local_68);
                uVar6 = uVar6 + 1;
              } while (uVar6 < uVar1);
            }
          }
        }
        if (*(float *)(param_1 + 0x260) != 1.0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x278) + 0x80c) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x278) + 0xcd0);
        }
      }
      else {
        if (*(longlong *)(param_1 + 600) != 0) {
          lVar5 = *(longlong *)(param_1 + 0x278);
          FWeakObjectPtr::operator=(lVar5 + 0xd34);
          if (*(longlong *)(lVar5 + 0x2a0) != 0) {
            FUN_1430d40b0(lVar5);
          }
        }
        if (*(float *)(param_1 + 0x260) != 1.0) {
          *(float *)(*(longlong *)(param_1 + 0x278) + 0x80c) = *(float *)(param_1 + 0x260);
        }
      }
    }
    lVar5 = param_1 + 0x178;
    if (*(char *)(param_1 + 0x280) == '\0') {
      lVar5 = param_1 + 0x188;
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar5);
  }
  return;
}



// FUNCTION 1430ccb30 FUN_1430ccb30 body=63 status=ok
// SIG undefined FUN_1430ccb30(void)

void FUN_1430ccb30(longlong param_1,float *param_2)

{
  *(float *)(param_1 + 0x4e8) = *(float *)(param_1 + 0x4e8) + *param_2;
  *(float *)(param_1 + 0x4ec) = param_2[1] + *(float *)(param_1 + 0x4ec);
  *(float *)(param_1 + 0x4f0) = param_2[2] + *(float *)(param_1 + 0x4f0);
  return;
}



// FUNCTION 1430ccbb0 FUN_1430ccbb0 body=79 status=ok
// SIG undefined FUN_1430ccbb0(void)

void FUN_1430ccbb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x4d8) != 0) && (*(longlong *)(param_1 + 0x4e0) != 0)) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e0) + 0x28))();
    if (lVar1 != 0) {
      FUN_14268e880(lVar1,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 1430ccc00 FUN_1430ccc00 body=177 status=ok
// SIG undefined FUN_1430ccc00(void)

undefined8 * FUN_1430ccc00(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  plVar1 = (longlong *)(param_1 + 0xd20);
  iVar2 = *(int *)(param_1 + 0xd28);
  *(int *)(param_1 + 0xd28) = iVar2 + 1;
  if (*(int *)(param_1 + 0xd2c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
  }
  lVar6 = (longlong)iVar2 * 0x10;
  plVar5 = (longlong *)(*plVar1 + lVar6);
  *plVar5 = 0;
  *(undefined4 *)(plVar5 + 1) = 0;
  if (((param_3 != plVar5) && ((int)param_3[1] != 0)) && ((longlong *)*param_3 != (longlong *)0x0))
  {
    (**(code **)(*(longlong *)*param_3 + 0x30))();
  }
  lVar3 = *plVar1;
  *param_2 = 0;
  if ((*(int *)(lVar6 + 8 + lVar3) != 0) &&
     (plVar1 = *(longlong **)(lVar6 + lVar3), plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1430cccc0 FUN_1430cccc0 body=63 status=ok
// SIG undefined FUN_1430cccc0(void)

void FUN_1430cccc0(longlong param_1,float *param_2)

{
  *(float *)(param_1 + 0x4f4) = *(float *)(param_1 + 0x4f4) + *param_2;
  *(float *)(param_1 + 0x4f8) = param_2[1] + *(float *)(param_1 + 0x4f8);
  *(float *)(param_1 + 0x4fc) = param_2[2] + *(float *)(param_1 + 0x4fc);
  return;
}



// FUNCTION 1430ccd00 FUN_1430ccd00 body=78 status=ok
// SIG undefined FUN_1430ccd00(void)

void FUN_1430ccd00(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x548);
    *(int *)(param_1 + 0x548) = iVar1 + 1;
    if (*(int *)(param_1 + 0x54c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_1 + 0x540),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x540) + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 1430ccd50 FUN_1430ccd50 body=452 status=ok
// SIG undefined FUN_1430ccd50(void)

void FUN_1430ccd50(longlong param_1,longlong *param_2,char param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *local_38;
  undefined8 local_30;
  
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_14222e300(param_1,&local_38);
  plVar1 = local_38 + (int)local_30;
  plVar9 = local_38;
  do {
    if (plVar9 == plVar1) {
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
      return;
    }
    plVar3 = (longlong *)*plVar9;
    if (plVar3 != (longlong *)0x0) {
      if (param_3 != '\0') {
        lVar7 = FUN_1429d7ab0();
        if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((bVar5) && (cVar6 = (**(code **)(*plVar3 + 0x780))(plVar3), cVar6 != '\0'))
        goto LAB_1430ccecc;
      }
      if (param_4 != '\0') {
        lVar7 = FUN_1429d7ab0();
        if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((bVar5) && (cVar6 = (**(code **)(*plVar3 + 0x780))(plVar3), cVar6 == '\0'))
        goto LAB_1430ccecc;
      }
      puVar4 = (undefined8 *)*param_2;
      for (puVar8 = puVar4; puVar8 != puVar4 + (int)param_2[1]; puVar8 = puVar8 + 1) {
        if ((longlong *)*puVar8 == plVar3) {
          if ((int)((longlong)puVar8 - (longlong)puVar4 >> 3) != -1) goto LAB_1430ccecc;
          break;
        }
      }
      lVar7 = FUN_14222e2a0(plVar3);
      if (lVar7 == param_1) {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        *(longlong **)(*param_2 + (longlong)iVar2 * 8) = plVar3;
        FUN_1430ccd50(plVar3,param_2,0,0);
      }
    }
LAB_1430ccecc:
    plVar9 = plVar9 + 1;
  } while( true );
}



// FUNCTION 1430ccf20 FUN_1430ccf20 body=200 status=ok
// SIG undefined FUN_1430ccf20(void)

void FUN_1430ccf20(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  code *local_48;
  longlong *plStack_40;
  longlong local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined4 *local_20;
  undefined1 *local_18;
  undefined1 *local_10;
  
  plVar1 = *(longlong **)(param_1 + 0x180);
  if (plVar1 != (longlong *)0x0) {
    local_res10[0] = param_2;
    local_res18[0] = param_3;
    local_res20[0] = param_4;
    lVar2 = (**(code **)(*plVar1 + 0x6d0))(plVar1,0,1);
    if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x2a0) != 0)) {
      local_30 = local_res10;
      local_28 = local_res18;
      local_20 = local_res20;
      local_18 = &stack0x00000028;
      local_10 = &stack0x00000030;
      plStack_40 = &local_38;
      local_48 = FUN_1430cf360;
      local_38 = param_1;
      FUN_142693730(lVar2,&local_48);
    }
  }
  return;
}



// FUNCTION 1430ccff0 FUN_1430ccff0 body=514 status=ok
// SIG undefined FUN_1430ccff0(void)

void FUN_1430ccff0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  uint param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 *local_78;
  undefined4 *local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined4 *local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [56];
  
  lVar3 = *(longlong *)(param_1 + 0xd00);
  if (lVar3 != 0) {
    local_res10[0] = param_2;
    local_res18[0] = param_3;
    if (*(longlong *)(lVar3 + 0x168) == 0) {
      local_b0 = DAT_1464aa7c0;
      puVar2 = &local_b8;
      local_b8 = DAT_1464aa7b8;
    }
    else {
      puVar2 = (undefined8 *)FUN_14238d380(*(longlong *)(lVar3 + 0x168),local_a8);
      lVar3 = *(longlong *)(param_1 + 0xd00);
    }
    local_b8 = *puVar2;
    local_b0 = *(undefined4 *)(puVar2 + 1);
    local_94 = (int)((ulonglong)local_b8 >> 0x20);
    local_90 = local_b0;
    local_98 = (int)local_b8;
    if (*(longlong *)(lVar3 + 0x168) == 0) {
      local_b0 = DAT_1464aa7b0;
      puVar2 = &local_b8;
      local_b8 = DAT_1464aa7a8;
    }
    else {
      puVar2 = (undefined8 *)FUN_142369f10(*(longlong *)(lVar3 + 0x168),local_a8);
      lVar3 = *(longlong *)(param_1 + 0xd00);
    }
    local_b8 = *puVar2;
    local_b0 = *(undefined4 *)(puVar2 + 1);
    local_84 = (int)((ulonglong)local_b8 >> 0x20);
    local_80 = local_b0;
    local_88 = (int)local_b8;
    if (*(longlong *)(lVar3 + 0x168) == 0) {
      local_b0 = DAT_1464aa7a0;
      puVar2 = &local_b8;
      local_b8 = DAT_1464aa798;
    }
    else {
      puVar2 = (undefined8 *)FUN_14238db80(*(longlong *)(lVar3 + 0x168),local_a8);
    }
    local_b8 = *puVar2;
    local_b0 = *(undefined4 *)(puVar2 + 1);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x2a0) + 0xa0);
    local_a0 = local_b0;
    (**(code **)(*plVar1 + 0x138))(plVar1,local_50);
    FUN_1430e16b0(plVar1,local_40,0);
    local_78 = local_50;
    local_70 = local_res18;
    local_60 = local_40;
    local_58 = local_res10;
    local_68 = param_1;
    FUN_1430cbe20(&local_78,&local_98,param_4);
    FUN_1430cbe20(&local_78,&local_88,param_5 ^ 0x80000000);
    FUN_1430cbe20(&local_78,&local_b8,param_6);
  }
  return;
}



// FUNCTION 1430cd200 FUN_1430cd200 body=628 status=ok
// SIG undefined FUN_1430cd200(void)

void FUN_1430cd200(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_78;
  float fStack_74;
  undefined8 local_68;
  float local_60;
  
  if (*(char *)(param_1 + 0x680) == '\0') {
    return;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xd00) + 0x168);
  if (lVar2 == 0) {
    local_60 = DAT_1464aa7a0;
    puVar4 = &local_68;
    local_68 = DAT_1464aa798;
  }
  else {
    puVar4 = (undefined8 *)FUN_14238db80(lVar2,&local_68);
  }
  uVar1 = *puVar4;
  fVar12 = *(float *)(param_1 + 0x684);
  fVar8 = *(float *)(puVar4 + 1);
  fVar6 = *(float *)(param_1 + 0x688);
  fVar9 = fVar12;
  if (fVar6 <= fVar12) {
    fVar9 = fVar6;
  }
  if (fVar12 <= fVar6) {
    fVar12 = fVar6;
  }
  fVar6 = _guard_xfg_dispatch_icall_nop(fVar9 * 0.017453292);
  if (fVar6 <= fVar8) {
    return;
  }
  fVar6 = _guard_xfg_dispatch_icall_nop(fVar12 * 0.017453292);
  if (fVar8 <= fVar6) {
    return;
  }
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x2a0) + 0xa0);
  (**(code **)(*plVar3 + 0x128))(plVar3,&local_68);
  fVar11 = (float)local_68 * (float)local_68;
  fVar7 = local_68._4_4_ * local_68._4_4_;
  fVar10 = local_60 * local_60;
  fVar6 = -1.0;
  if ((-1.0 <= fVar8) && (fVar6 = fVar8, 1.0 <= fVar8)) {
    fVar6 = 1.0;
  }
  fVar8 = _guard_xfg_dispatch_icall_nop(fVar6);
  fVar6 = *(float *)(param_1 + 0x68c);
  fVar12 = fVar12 - fVar8 * 57.295776;
  fVar9 = fVar8 * 57.295776 - fVar9;
  if (fVar9 <= fVar12) {
    fVar12 = fVar9;
  }
  if (1e-08 < ABS(fVar6)) {
    fVar12 = fVar12 / fVar6;
    if (fVar12 < 0.0) {
      fVar12 = 0.0;
      goto LAB_1430cd396;
    }
  }
  else if (fVar12 < fVar6) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = 1.0;
  }
  if (1.0 <= fVar12) {
    fVar12 = 1.0;
  }
LAB_1430cd396:
  uVar5 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x690);
  fVar6 = (float)FRichCurve::Eval(uVar5,SQRT(fVar11 + fVar7 + fVar10) * 0.036,0);
  if (1e-08 < ABS(fVar6)) {
    lVar2 = *(longlong *)(param_1 + 0xd00);
    fStack_74 = (float)((ulonglong)uVar1 >> 0x20);
    local_78 = (float)uVar1;
    fVar12 = -(fVar6 * *(float *)(param_1 + 0x708) * fVar12);
    *(float *)(lVar2 + 0x4f4) = fStack_74 * -1000.0 * fVar12 + *(float *)(lVar2 + 0x4f4);
    *(float *)(lVar2 + 0x4f8) = *(float *)(lVar2 + 0x4f8) - local_78 * -1000.0 * fVar12;
  }
  return;
}



// FUNCTION 1430cd480 FUN_1430cd480 body=400 status=ok
// SIG undefined FUN_1430cd480(void)

void FUN_1430cd480(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  short sVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if ((*(longlong *)(param_1 + 0x780) != 0) && (*(longlong *)(param_1 + 0x778) != 0)) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x780) + 0x290);
    uVar9 = 0;
    if (0 < iVar1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x780);
        iVar8 = (int)uVar9;
        if ((((*(char *)(lVar3 + 0x5d0) == '\x02') &&
             (lVar2 = *(longlong *)(lVar3 + 0x2a0), lVar2 != 0)) &&
            (plVar4 = *(longlong **)(lVar3 + 0x180), plVar4 != (longlong *)0x0)) &&
           ((-1 < iVar8 && (iVar8 < *(int *)(lVar3 + 0x228))))) {
          lVar3 = (**(code **)(*plVar4 + 0x6d0))(plVar4,0,1);
          uVar6 = *(ulonglong *)(lVar3 + 0x110);
          uVar7 = uVar6;
          if (uVar6 == 0) {
            uVar7 = *(ulonglong *)(lVar3 + 0x118);
          }
          if (uVar7 != 0) {
            if (uVar7 == uVar6) {
              sVar5 = *(short *)(lVar3 + 6);
            }
            else {
              sVar5 = *(short *)(lVar3 + 8);
            }
            plVar4 = (longlong *)FUN_1426e2550((int)sVar5);
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x358))
                        (plVar4,
                         "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                         0x136);
            }
            uVar6 = 0;
            if (*(short *)(uVar7 + 8) == 6) {
              uVar6 = uVar7;
            }
            if (uVar6 != 0) {
              physx::PxVehicleNoDrive::setBrakeTorque(lVar2,uVar9,param_2 * 10000.0);
            }
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x360))(plVar4);
            }
          }
        }
        uVar9 = (ulonglong)(iVar8 + 1U);
      } while ((int)(iVar8 + 1U) < iVar1);
    }
  }
  return;
}



// FUNCTION 1430cd610 FUN_1430cd610 body=521 status=ok
// SIG undefined FUN_1430cd610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430cd610(longlong param_1,float param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  float local_res10 [2];
  undefined1 auStack_e8 [32];
  char local_c8;
  char local_c7 [3];
  undefined4 local_c4;
  undefined4 local_c0 [2];
  ulonglong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 *local_88;
  char *local_80;
  float *local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  ulonglong *local_60;
  char *local_58;
  longlong *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_res10[0] = param_2;
  local_a0 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x30);
  local_98 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x290);
  plVar1 = *(longlong **)(param_1 + -0x438);
  if ((plVar1 != (longlong *)0x0) && (1e-08 < local_res10[0])) {
    local_b8 = 0;
    lVar3 = (**(code **)(*plVar1 + 0x6d0))(plVar1,0,1);
    if ((lVar3 != 0) && (*(longlong *)(param_1 + -0x318) != 0)) {
      local_b0 = *(longlong *)(param_1 + -0x498);
      if (local_b0 == 0) {
        local_b0 = FUN_1423407b0(param_1 + -0x5b8);
      }
      if (((local_b0 != 0) && (cVar2 = UWorld::IsGameWorld(local_b0), cVar2 != '\0')) &&
         (*(longlong *)(local_b0 + 0x218) != 0)) {
        local_a8 = FPhysXVehicleManager::GetVehicleManagerFromScene();
        local_88 = &local_a8;
        local_c8 = '\0';
        local_80 = &local_c8;
        local_c7[0] = '\0';
        local_78 = local_res10;
        local_70 = &local_c4;
        local_68 = local_c0;
        local_60 = &local_b8;
        local_58 = local_c7;
        local_50 = &local_b0;
        local_48 = &local_a0;
        local_40 = &local_98;
        uStack_30 = &local_90;
        local_38 = &LAB_1430cf350;
        local_c4 = 0;
        local_c0[0] = 0;
        local_b8 = local_b8 & 0xffffffff00000000;
        local_90 = param_1 + -0x5b8;
        FUN_1426936b0(lVar3,&local_38);
        if (local_c8 != '\0') {
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x268,0);
        }
        if (local_c7[0] != '\0') {
          local_38 = (undefined1 *)CONCAT44(local_c0[0],local_c4);
          uStack_30 = (longlong *)
                      CONCAT44(CONCAT31(uStack_30._5_3_,*(int *)(param_1 + 0x260) == 0),
                               (undefined4)local_b8);
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x278,&local_38);
        }
      }
    }
  }
  return;
}



// FUNCTION 1430cd820 FUN_1430cd820 body=547 status=ok
// SIG undefined FUN_1430cd820(void)

void FUN_1430cd820(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  short sVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if (((*(longlong *)(param_1 + 0x528) != 0) && (*(longlong *)(param_1 + 0x530) != 0)) &&
     (*(longlong *)(param_1 + 0x520) != 0)) {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x520) + 0x118);
    uVar2 = UWheeledVehicleMovementComponent4W::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar2);
    if (lVar3 == 0) {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x520) + 0x118);
      uVar2 = FUN_1430e3810();
      lVar3 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar2);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x5d0) == '\x02')) {
        iVar8 = *(int *)(lVar3 + 0x228);
        uVar10 = 0;
        if (0 < iVar8) {
          do {
            iVar9 = (int)uVar10;
            if (((*(char *)(lVar3 + 0x5d0) == '\x02') &&
                (lVar1 = *(longlong *)(lVar3 + 0x2a0), lVar1 != 0)) &&
               ((plVar5 = *(longlong **)(lVar3 + 0x180), plVar5 != (longlong *)0x0 &&
                ((-1 < iVar9 && (iVar9 < iVar8)))))) {
              lVar4 = (**(code **)(*plVar5 + 0x6d0))(plVar5,0,1);
              uVar7 = *(ulonglong *)(lVar4 + 0x110);
              uVar11 = uVar7;
              if (uVar7 == 0) {
                uVar11 = *(ulonglong *)(lVar4 + 0x118);
              }
              if (uVar11 != 0) {
                if (uVar11 == uVar7) {
                  sVar6 = *(short *)(lVar4 + 6);
                }
                else {
                  sVar6 = *(short *)(lVar4 + 8);
                }
                plVar5 = (longlong *)FUN_1426e2550((int)sVar6);
                if (plVar5 != (longlong *)0x0) {
                  (**(code **)(*plVar5 + 0x358))
                            (plVar5,
                             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h"
                             ,0x136);
                }
                uVar7 = 0;
                if (*(short *)(uVar11 + 8) == 6) {
                  uVar7 = uVar11;
                }
                if (uVar7 != 0) {
                  physx::PxVehicleNoDrive::setDriveTorque(lVar1,uVar10,param_2 * 10000.0);
                }
                if (plVar5 != (longlong *)0x0) {
                  (**(code **)(*plVar5 + 0x360))(plVar5);
                }
              }
            }
            iVar8 = *(int *)(lVar3 + 0x228);
            uVar10 = (ulonglong)(iVar9 + 1U);
          } while ((int)(iVar9 + 1U) < iVar8);
        }
      }
    }
    else {
      iVar8 = 0;
      if (0 < *(int *)(lVar3 + 0x228)) {
        do {
          FUN_1409683a0(lVar3,param_2,iVar8);
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(lVar3 + 0x228));
      }
    }
  }
  return;
}



// FUNCTION 1430cda50 FUN_1430cda50 body=889 status=ok
// SIG undefined FUN_1430cda50(void)

undefined1 FUN_1430cda50(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  bool bVar11;
  float fVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_f8;
  float fStack_f4;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  float local_b0;
  
  if (*(longlong *)(param_1 + 0x520) != 0) {
    FUN_1430cd820(param_1,0x3f800000);
    fVar4 = *(float *)(param_1 + 0x220);
    fVar5 = *(float *)(param_1 + 0x224);
    local_e8 = *(undefined8 *)(param_1 + 0x220);
    fVar6 = *(float *)(param_1 + 0x228);
    lVar1 = *(longlong *)(param_1 + 0x520);
    lVar2 = *(longlong *)(param_1 + 0x118);
    fVar7 = *(float *)(lVar1 + 0x220);
    fVar8 = *(float *)(lVar1 + 0x224);
    fVar9 = *(float *)(lVar1 + 0x228);
    if (lVar2 != 0) {
      local_f8 = fVar7;
      fStack_f4 = fVar8;
      local_f0 = fVar9;
      local_e0 = fVar6;
      lVar13 = FUN_1430e5840();
      fVar12 = local_f0;
      lVar1 = *(longlong *)(lVar2 + 0x10);
      if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar13 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
          lVar13 + 0x88)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (((bVar11) && (*(longlong *)(param_1 + 0x530) != 0)) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x530) + 0x180) != 0)) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x520) + 0x718);
        if (lVar1 != 0) {
          fVar14 = *(float *)(*(longlong *)(param_1 + 0x520) + 0x724);
          fVar17 = fVar8 - fVar5;
          fVar15 = fVar7 - fVar4;
          if (fVar17 * fVar17 + fVar15 * fVar15 + (fVar9 - fVar6) * (fVar9 - fVar6) <=
              fVar14 * fVar14) {
            return 1;
          }
          uVar10 = CONCAT44(fStack_f4,local_f8);
          local_c0 = local_f0;
          local_c8 = uVar10;
          UPrimitiveComponent::GetPhysicsLinearVelocityAtPoint(lVar1,&local_d8,&local_c8,0);
          local_c8 = local_e8;
          local_c0 = local_e0;
          UPrimitiveComponent::GetPhysicsLinearVelocityAtPoint
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x530) + 0x180),&local_f8,&local_c8,0);
          fVar17 = 1.0 / *(float *)(*(longlong *)(param_1 + 0x520) + 0x720);
          fVar15 = fVar17 * fVar17 * 9.0;
          fVar18 = fVar15 * param_2;
          fVar16 = local_f0 - local_d0;
          fVar19 = 1.0 / ((fVar18 + fVar17 * 4.5) * param_2 + 1.0);
          fVar14 = local_f8 - local_d8;
          fVar18 = (fVar18 + fVar17 * 4.5) * fVar19;
          fVar19 = fVar19 * fVar15;
          fVar17 = fStack_f4 - local_d4;
          fVar15 = (float)(**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x520) + 0x718) +
                                      0x7f0))();
          local_e0 = ((fVar6 - fVar9) * fVar19 + fVar16 * fVar18) * fVar15;
          local_c0 = fVar12;
          local_e8 = CONCAT44(((fVar5 - fVar8) * fVar19 + fVar17 * fVar18) * fVar15,
                              ((fVar4 - fVar7) * fVar19 + fVar14 * fVar18) * fVar15);
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x520) + 0x718);
          local_c8 = uVar10;
          local_b0 = local_e0;
          (**(code **)(*plVar3 + 0x608))(plVar3,&local_e8,&local_c8,0);
          return 0;
        }
      }
    }
  }
  return 1;
}



// FUNCTION 1430cddd0 FUN_1430cddd0 body=1466 status=ok
// SIG undefined FUN_1430cddd0(void)

void FUN_1430cddd0(longlong *param_1,longlong param_2,float *param_3,float *param_4,float param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  float local_c8;
  float local_c4;
  
  if ((((1e-08 < ABS(param_4[1])) || (1e-08 < ABS(*param_4))) && (param_1[0x9b] != 0)) &&
     ((param_1[0x9c] != 0 && (*(longlong *)(param_2 + 0x4c0) != 0)))) {
    lVar1 = param_1[0x2d];
    fVar11 = *(float *)(param_1 + 0xaa);
    if (lVar1 == 0) {
      fVar13 = 0.0;
      fVar14 = 0.0;
      fVar5 = 0.0;
      fVar9 = 0.0;
      fVar8 = 0.0;
      fVar4 = 0.0;
      fVar12 = fRam0000000146b4a32c;
    }
    else {
      fVar9 = *(float *)(lVar1 + 0x210);
      fVar8 = *(float *)(lVar1 + 0x214);
      fVar4 = *(float *)(lVar1 + 0x218);
      fVar13 = *(float *)(lVar1 + 0x220);
      fVar14 = *(float *)(lVar1 + 0x224);
      fVar5 = *(float *)(lVar1 + 0x228);
      fVar12 = *(float *)(lVar1 + 0x21c);
    }
    lVar1 = *(longlong *)(param_2 + 0x168);
    if (lVar1 == 0) {
      local_d0 = DAT_1468b5d98;
      puVar2 = &local_d8;
      local_d8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    else {
      puVar2 = &local_e8;
      local_e0 = *(float *)(lVar1 + 0x228);
      local_e8 = *(undefined8 *)(lVar1 + 0x220);
    }
    local_d8 = *puVar2;
    local_d0 = *(float *)(puVar2 + 1);
    fVar13 = fVar13 - (float)local_d8;
    fVar3 = fVar8 * 1.0 - fVar4 * 0.0;
    fVar6 = fVar4 * 0.0 - fVar9 * 1.0;
    fVar7 = fVar9 * 0.0 - fVar8 * 0.0;
    fVar3 = fVar3 + fVar3;
    fVar6 = fVar6 + fVar6;
    fVar7 = fVar7 + fVar7;
    fVar14 = fVar14 - (float)((ulonglong)local_d8 >> 0x20);
    fVar15 = (fVar7 * fVar8 - fVar6 * fVar4) + fVar12 * fVar3 + 0.0;
    fVar16 = (fVar3 * fVar4 - fVar7 * fVar9) + fVar12 * fVar6 + 0.0;
    fVar3 = (fVar6 * fVar9 - fVar3 * fVar8) + fVar12 * fVar7 + 1.0;
    fVar4 = fVar16 * fVar14 + fVar15 * fVar13 + fVar3 * (fVar5 - local_d0);
    fVar14 = fVar14 - fVar16 * fVar4;
    fVar13 = fVar13 - fVar15 * fVar4;
    fVar12 = (fVar5 - local_d0) - fVar3 * fVar4;
    fVar5 = fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12;
    fVar4 = fVar12;
    fVar9 = fVar13;
    fVar8 = fVar14;
    if ((fVar5 != 1.0) &&
       (fVar4 = DAT_1468b5d98, fVar9 = DAT_1468b5d90, fVar8 = DAT_1468b5d94, 1e-08 <= fVar5)) {
      auVar10 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar8 = auVar10._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar5 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar5 * 0.5 * fVar8 * fVar8);
      local_e8 = CONCAT44(local_e8._4_4_,fVar8);
      fVar4 = fVar12 * fVar8;
      fVar9 = fVar13 * fVar8;
      fVar8 = fVar14 * fVar8;
    }
    fVar12 = (float)(**(code **)(*(longlong *)param_1[0x9c] + 0x10))();
    local_e8 = CONCAT44(local_e8._4_4_,fVar12);
    local_c4 = (float)(**(code **)(**(longlong **)(param_2 + 0x4c0) + 0x7f0))();
    (**(code **)(*param_1 + 0x308))(param_1,&local_d8);
    fVar6 = local_d8._4_4_ * fVar8 + (float)local_d8 * fVar9 + local_d0 * fVar4;
    local_c8 = fVar6 * fVar8;
    fVar13 = DAT_1468b5d98;
    fVar14 = DAT_1468b5d90;
    fVar5 = DAT_1468b5d94;
    if (local_c8 * fVar8 + fVar6 * fVar9 * fVar9 + fVar6 * fVar4 * fVar4 <= 0.0) {
      param_5 = (fVar12 * param_4[1]) / param_5;
      fVar13 = -(param_5 * fVar6 * fVar4);
      fVar14 = -(param_5 * fVar6 * fVar9);
      fVar5 = -(param_5 * local_c8);
    }
    fVar11 = fVar11 * *param_4 * (local_c4 / (float)local_e8);
    fVar14 = fVar11 * fVar9 + fVar14;
    fVar5 = fVar11 * fVar8 + fVar5;
    fVar13 = fVar11 * fVar4 + fVar13;
    fVar11 = DAT_1468b5d90;
    fVar4 = DAT_1468b5d98;
    fVar9 = DAT_1468b5d94;
    if (param_1[0x9a] != 0) {
      local_e8 = 0;
      UPrimitiveComponent::GetCenterOfMass(param_1[0x9a],&local_e8,0);
      fVar11 = fVar13 * (param_3[1] - local_e8._4_4_) - fVar5 * (param_3[2] - local_e0);
      fVar9 = fVar14 * (param_3[2] - local_e0) - fVar13 * (*param_3 - (float)local_e8);
      fVar4 = fVar5 * (*param_3 - (float)local_e8) - fVar14 * (param_3[1] - local_e8._4_4_);
    }
    *(float *)(param_1 + 0x9d) = fVar14 + *(float *)(param_1 + 0x9d);
    *(float *)((longlong)param_1 + 0x4ec) = fVar5 + *(float *)((longlong)param_1 + 0x4ec);
    *(float *)(param_1 + 0x9e) = fVar13 + *(float *)(param_1 + 0x9e);
    fVar11 = fVar15 * fVar11 + fVar16 * fVar9 + fVar3 * fVar4;
    *(float *)((longlong)param_1 + 0x4f4) = fVar15 * fVar11 + *(float *)((longlong)param_1 + 0x4f4);
    *(float *)(param_1 + 0x9f) = fVar16 * fVar11 + *(float *)(param_1 + 0x9f);
    *(float *)((longlong)param_1 + 0x4fc) = fVar3 * fVar11 + *(float *)((longlong)param_1 + 0x4fc);
  }
  return;
}



// FUNCTION 1430ce390 FUN_1430ce390 body=1037 status=ok
// SIG undefined FUN_1430ce390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430ce390(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  float local_e0;
  undefined4 local_d8 [2];
  undefined8 local_d0;
  undefined4 *puStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 *puStack_b8;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  puStack_c8 = local_d8;
  local_d0._0_4_ = (undefined4)param_1;
  local_d0._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  local_c0 = (undefined4)local_d0;
  uStack_bc = local_d0._4_4_;
  local_d8[0] = param_2;
  local_d0 = param_1;
  puStack_b8 = puStack_c8;
  if ((*(char *)(param_1 + 0xb42) == '\0') || (ABS(*(float *)(param_1 + 800)) <= 1e-08)) {
    if (*(longlong *)(param_1 + 0xb48) == 0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = FUN_142c48f90(*(longlong *)(param_1 + 0xb48),*(undefined8 *)(param_1 + 0xd00),0);
    }
  }
  else {
    cVar4 = '\x01';
  }
  if ((*(char *)(param_1 + 0xb41) == '\0') ||
     (((*(char *)(param_1 + 0xb50) == '\0' && (*(char *)(param_1 + 0x815) != '\0')) ||
      (cVar4 == '\0')))) {
    uVar9 = *(undefined4 *)(param_1 + 0xb5c);
    fVar8 = 0.0;
    goto LAB_1430ce6ff;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x2a0) + 0xa0);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xd00) + 0x168);
  if (lVar2 == 0) {
    fVar8 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar18 = fRam0000000146b4a32c;
  }
  else {
    fVar8 = *(float *)(lVar2 + 0x210);
    fVar16 = *(float *)(lVar2 + 0x214);
    fVar17 = *(float *)(lVar2 + 0x218);
    fVar18 = *(float *)(lVar2 + 0x21c);
  }
  pfVar6 = (float *)(**(code **)(*plVar1 + 0x128))(plVar1,&local_d0);
  fVar10 = fVar16 * 1.0 - fVar17 * 0.0;
  fVar11 = fVar17 * 0.0 - fVar8 * 1.0;
  fVar12 = fVar8 * 0.0 - fVar16 * 0.0;
  fVar10 = fVar10 + fVar10;
  fVar11 = fVar11 + fVar11;
  fVar12 = fVar12 + fVar12;
  fVar14 = (fVar12 * fVar16 - fVar11 * fVar17) + fVar18 * fVar10 + 0.0;
  fVar15 = (fVar10 * fVar17 - fVar12 * fVar8) + fVar18 * fVar11 + 0.0;
  fVar11 = (fVar11 * fVar8 - fVar10 * fVar16) + fVar18 * fVar12 + 1.0;
  fVar10 = fVar15 * pfVar6[1] + fVar14 * *pfVar6 + fVar11 * pfVar6[2];
  fVar12 = *pfVar6 - fVar14 * fVar10;
  fVar14 = pfVar6[1] - fVar15 * fVar10;
  fVar10 = pfVar6[2] - fVar11 * fVar10;
  iVar5 = FUN_140963c50(param_1);
  if (iVar5 < 0) {
    fVar11 = fVar16 * 0.0 - fVar17 * 0.0;
    fVar15 = fVar17 * 1.0 - fVar8 * 0.0;
    fVar13 = fVar8 * 0.0 - fVar16 * 1.0;
    fVar11 = fVar11 + fVar11;
    fVar15 = fVar15 + fVar15;
    fVar13 = fVar13 + fVar13;
    if (-0.1 <= ((fVar13 * fVar16 - fVar15 * fVar17) + fVar18 * fVar11 + 1.0) * fVar12 +
                ((fVar11 * fVar17 - fVar13 * fVar8) + fVar18 * fVar15 + 0.0) * fVar14 +
                ((fVar15 * fVar8 - fVar11 * fVar16) + fVar18 * fVar13 + 0.0) * fVar10)
    goto LAB_1430ce62e;
    bVar3 = true;
  }
  else {
LAB_1430ce62e:
    bVar3 = false;
  }
  fVar8 = *(float *)(param_1 + 0xb60);
  uVar7 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0xb68);
  fVar8 = (float)FRichCurve::Eval(uVar7,SQRT(fVar12 * fVar12 + fVar14 * fVar14 + fVar10 * fVar10) *
                                        (1.0 / fVar8),0);
  fVar8 = fVar8 * *(float *)(param_1 + 0xcd4);
  if (bVar3) {
    fVar8 = -fVar8;
  }
  uVar9 = *(undefined4 *)(param_1 + 0xb58);
  fVar8 = fVar8 * *(float *)(param_1 + 0x314) * *(float *)(param_1 + 0xb54) * 0.017453292;
LAB_1430ce6ff:
  uVar9 = FMath::FInterpTo(*(undefined4 *)(param_1 + 0xd30),fVar8,local_d8[0],uVar9);
  *(undefined4 *)(param_1 + 0xd30) = uVar9;
  lVar2 = CONCAT44(uStack_bc,local_c0);
  local_e0 = *(float *)(lVar2 + 0xd30);
  if (1e-08 < ABS(local_e0)) {
    local_e8 = 0;
    FUN_1430ccff0(lVar2,*puStack_b8,*(float *)(lVar2 + 0xb64) * 0.017453292,0);
  }
  return;
}



// FUNCTION 1430ce7a0 FUN_1430ce7a0 body=311 status=ok
// SIG undefined FUN_1430ce7a0(void)

void FUN_1430ce7a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 local_res8;
  
  if ((*(longlong *)(param_1 + 0x520) != 0) && (*(longlong *)(param_1 + 0x520) != param_2)) {
    local_res8 = *(undefined8 *)(param_1 + 0x528);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x4f8,&local_res8);
    plVar1 = *(longlong **)(param_1 + 0x520);
    local_res8 = *(undefined8 *)(param_1 + 0x528);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (plVar1 + 0xed,&local_res8);
    (**(code **)(*plVar1 + 0x358))(plVar1,0);
    plVar1[0xef] = 0;
    FUN_1430cd480(plVar1,(int)plVar1[0xe8]);
    *(undefined1 *)(plVar1 + 0xf1) = 0;
    FUN_1430cd820(param_1,0);
    *(undefined8 *)(param_1 + 0x520) = 0;
    cVar3 = FUN_1426e4b00(param_1);
    if (cVar3 != '\0') {
      UMediumSkipWidget::CanWorkWhenGamePaused(param_1);
    }
  }
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x718) != 0)) {
    local_res8 = *(undefined8 *)(param_1 + 0x528);
    *(longlong *)(param_1 + 0x520) = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x4d8,&local_res8);
    lVar2 = *(longlong *)(param_1 + 0x520);
    local_res8 = *(undefined8 *)(param_1 + 0x528);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar2 + 0x748,&local_res8);
    *(undefined1 *)(lVar2 + 0x788) = 1;
  }
  return;
}



// FUNCTION 1430ce8e0 FUN_1430ce8e0 body=160 status=ok
// SIG undefined FUN_1430ce8e0(void)

void FUN_1430ce8e0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  FUN_142330890();
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  plVar3 = (longlong *)0x0;
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x218) != 0)) {
    plVar3 = (longlong *)FUN_1426e2530(*(longlong *)(lVar2 + 0x218),0);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x358))
                (plVar3,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxVehicle\\Private\\WheeledVehicleMovementComponentNW.cpp"
                 ,0xd1);
    }
  }
  *(undefined8 *)(param_1 + 0xce8) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xcf0);
  *(undefined8 *)(param_1 + 0xcf0) = 0;
  FMemory::operator_delete(uVar1);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x360))(plVar3);
  }
  return;
}



// FUNCTION 1430ce980 FUN_1430ce980 body=478 status=ok
// SIG undefined FUN_1430ce980(void)

void FUN_1430ce980(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  FUN_142223710();
  uVar9 = 0;
  if (param_1[0xa7] != 0) {
    plVar1 = param_1 + 0xa8;
    *(undefined4 *)(param_1 + 0xa9) = 0;
    if (*(int *)((longlong)param_1 + 0x54c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
    }
    uVar6 = FUN_142dfdf30();
    plVar7 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar6);
    if (plVar7 == (longlong *)0x0) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)(*plVar7 + 0x400))(plVar7);
    }
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_142d7dfb0(param_1[0xa7],param_1,uVar5,&local_48,0);
    uVar11 = (ulonglong)((longlong)(local_48 + (int)local_40) + (7 - (longlong)local_48)) >> 3;
    if (local_48 + (int)local_40 < local_48) {
      uVar11 = uVar9;
    }
    puVar10 = local_48;
    if (uVar11 != 0) {
      do {
        iVar2 = (int)param_1[0xa9];
        uVar6 = *puVar10;
        *(int *)(param_1 + 0xa9) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0x54c) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
        }
        uVar9 = uVar9 + 1;
        *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar6;
        puVar10 = puVar10 + 1;
      } while (uVar9 != uVar11);
    }
    if (local_48 != (undefined8 *)0x0) {
      FMemory::Free(local_48);
    }
  }
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_14222e300(param_1,&local_38);
  plVar1 = local_38 + (int)local_30;
  for (plVar7 = local_38; plVar7 != plVar1; plVar7 = plVar7 + 1) {
    lVar3 = *plVar7;
    if (lVar3 != 0) {
      lVar8 = APlayerState::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        FUN_1430e5f40(lVar3);
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}



// FUNCTION 1430ceb60 FUN_1430ceb60 body=27 status=ok
// SIG undefined FUN_1430ceb60(void)

void FUN_1430ceb60(undefined8 param_1)

{
  FUN_142330a70();
  FUN_1430e1b70(param_1);
  return;
}



// FUNCTION 1430ceb80 FUN_1430ceb80 body=522 status=ok
// SIG undefined FUN_1430ceb80(void)

void FUN_1430ceb80(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_142330a70();
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x2d8);
    if ((lVar7 != 0) && (iVar5 = FUN_14233f450(param_1), iVar5 == 3)) {
      puVar6 = (undefined4 *)FUN_142d62b60(&local_38,*(undefined8 *)(param_1 + 0x118),lVar7,1);
      uVar1 = puVar6[1];
      uVar2 = puVar6[2];
      uVar3 = puVar6[3];
      *(undefined4 *)(param_1 + 0x1d8) = *puVar6;
      *(undefined4 *)(param_1 + 0x1dc) = uVar1;
      *(undefined4 *)(param_1 + 0x1e0) = uVar2;
      *(undefined4 *)(param_1 + 0x1e4) = uVar3;
      *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(puVar6 + 4);
    }
    if ((*(char *)(*(longlong *)(param_1 + 0x1b0) + 0x314) != '\0') &&
       (lVar7 = (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x838))(), lVar7 != 0)) {
      lVar8 = FUN_1430e3810();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_38 = &LAB_1430d5f00;
        uStack_30 = 0;
        plVar9 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = (longlong)&PTR_FUN_1440f9050;
          FWeakObjectPtr::operator=(plVar9 + 1,param_1);
          *(undefined4 *)(plVar9 + 2) = (undefined4)local_38;
          *(undefined4 *)((longlong)plVar9 + 0x14) = local_38._4_4_;
          *(undefined4 *)(plVar9 + 3) = uStack_30;
          *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_2c;
          lVar8 = FDelegateHandle::GenerateNewID();
          plVar9[5] = lVar8;
        }
        plVar11 = (longlong *)(lVar7 + 0xd10);
        iVar5 = *(int *)(lVar7 + 0xd18);
        *(int *)(lVar7 + 0xd18) = iVar5 + 1;
        if (*(int *)(lVar7 + 0xd1c) < iVar5 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar5);
        }
        lVar7 = (longlong)iVar5 * 0x10;
        puVar10 = (undefined8 *)(*plVar11 + lVar7);
        *puVar10 = 0;
        *(undefined4 *)(puVar10 + 1) = 0;
        if ((&local_38 != puVar10) && (plVar9 != (longlong *)0x0)) {
          (**(code **)(*plVar9 + 0x30))(plVar9);
        }
        if ((*(int *)(lVar7 + 8 + *plVar11) != 0) &&
           (plVar11 = *(longlong **)(lVar7 + *plVar11), plVar11 != (longlong *)0x0)) {
          (**(code **)(*plVar11 + 0x20))(plVar11,local_res8);
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x28))(plVar9,0);
          lVar7 = FMemory::Realloc(plVar9,0,0);
          if (lVar7 != 0) {
            FMemory::Free(lVar7);
          }
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
    *(undefined4 *)(param_1 + 0x210) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x30c);
  return;
}



// FUNCTION 1430ced90 FUN_1430ced90 body=105 status=ok
// SIG undefined FUN_1430ced90(void)

void FUN_1430ced90(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 local_28 [32];
  
  FUN_142330a70();
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    iVar2 = FUN_14233f450(param_1);
    if (iVar2 == 3) {
      puVar3 = (undefined8 *)
               FUN_142d62b60(local_28,*(undefined8 *)(param_1 + 0x118),
                             *(undefined8 *)(param_1 + 0x1d0),1);
      uVar1 = puVar3[1];
      *(undefined8 *)(param_1 + 0x228) = *puVar3;
      *(undefined8 *)(param_1 + 0x230) = uVar1;
      *(undefined8 *)(param_1 + 0x238) = puVar3[2];
    }
  }
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_1 + 0x1d8);
  return;
}



// FUNCTION 1430cee00 FUN_1430cee00 body=361 status=ok
// SIG undefined FUN_1430cee00(void)

void FUN_1430cee00(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)param_1[0x23];
  if (plVar1 == (longlong *)0x0) goto LAB_1430ceee5;
  uVar3 = UEnvQueryTest::GetPrivateStaticClass();
  lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
  if (lVar4 == 0) {
LAB_1430cee75:
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_1430e3810();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar5 = lVar4;
    if (!bVar2) goto LAB_1430cee75;
  }
  param_1[0xf0] = lVar5;
  if (lVar4 != 0) {
    param_1[0xe3] = *(longlong *)(lVar4 + 0x180);
    goto LAB_1430ceee5;
  }
  lVar4 = *(longlong *)(param_1[0x23] + 0x168);
  if (lVar4 == 0) {
LAB_1430ceedc:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1430ceedc;
  }
  param_1[0xe3] = lVar4;
LAB_1430ceee5:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b4a538) && (_Init_thread_header(&DAT_146b4a538), DAT_146b4a538 == -1))
  {
    FName::FName(&DAT_146b4a530,L"Trigger",1);
    _Init_thread_footer(&DAT_146b4a538);
  }
  (**(code **)(*param_1 + 0x640))(param_1,DAT_146b4a530);
  FUN_142385110(param_1);
  return;
}



// FUNCTION 1430cef70 FUN_1430cef70 body=190 status=ok
// SIG undefined FUN_1430cef70(void)

void FUN_1430cef70(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x118);
  if (plVar4 == (longlong *)0x0) {
LAB_1430cefbf:
    plVar4 = (longlong *)0x0;
  }
  else {
    lVar2 = FUN_1430e5840();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1430cefbf;
  }
  *(longlong **)(param_1 + 0x528) = plVar4;
  if (plVar4 == (longlong *)0x0) goto LAB_1430cf01c;
  lVar2 = (**(code **)(*plVar4 + 0x838))(plVar4);
  if (lVar2 == 0) {
LAB_1430cf013:
    lVar2 = 0;
  }
  else {
    lVar3 = FUN_14096cb40();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1430cf013;
  }
  *(longlong *)(param_1 + 0x530) = lVar2;
LAB_1430cf01c:
  FUN_142330a70(param_1);
  return;
}



// FUNCTION 1430cf030 FUN_1430cf030 body=118 status=ok
// SIG undefined FUN_1430cf030(void)

void FUN_1430cf030(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142330a70();
  if (*(longlong **)(param_1 + 0x270) == (longlong *)0x0) {
    return;
  }
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x838))();
  if (lVar2 != 0) {
    lVar3 = FUN_1430e3810();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1430cf094;
  }
  lVar2 = 0;
LAB_1430cf094:
  *(longlong *)(param_1 + 0x278) = lVar2;
  return;
}



// FUNCTION 1430cf0b0 FUN_1430cf0b0 body=127 status=ok
// SIG undefined FUN_1430cf0b0(void)

void FUN_1430cf0b0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_142fe7b10();
  iVar3 = FUN_14233f450(param_1);
  if ((iVar3 == 3) && (lVar1 = param_1[0x23], lVar1 != 0)) {
    lVar4 = FUN_1430e5840();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*param_1 + 0x4b8))(param_1,lVar1,0);
    }
  }
  return;
}



// FUNCTION 1430cf130 FUN_1430cf130 body=33 status=ok
// SIG undefined FUN_1430cf130(void)

void FUN_1430cf130(longlong param_1)

{
  FUN_1430e5ce0();
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x178,0);
  return;
}



// FUNCTION 1430cf160 FUN_1430cf160 body=33 status=ok
// SIG undefined FUN_1430cf160(void)

void FUN_1430cf160(longlong param_1)

{
  FUN_1430e5d20();
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x188,0);
  return;
}



// FUNCTION 1430cf190 FUN_1430cf190 body=206 status=ok
// SIG undefined FUN_1430cf190(void)

ulonglong FUN_1430cf190(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 0x5d0) != '\x03') {
    uVar4 = FUN_140960030();
    return uVar4;
  }
  iVar1 = FUN_140963c50();
  if ((*(float *)(param_1 + 0x308) <= -0.1 && *(float *)(param_1 + 0x308) != -0.1) && (iVar1 != -1))
  {
    return 0xffffffff;
  }
  uVar2 = FUN_140960030(param_1);
  uVar4 = (ulonglong)uVar2;
  if (uVar2 == 0) {
    fVar5 = (float)physx::PxVehicleDriveDynData::getAnalogInput
                             (*(longlong *)(param_1 + 0x2a8) + 0xc0,0);
    iVar3 = FUN_1409649c0(param_1);
    if (((iVar1 == iVar3) && (0.1 < ABS(fVar5))) &&
       (uVar4 = 0xffffffff, 0.0 < *(float *)(param_1 + 0x308) || *(float *)(param_1 + 0x308) == 0.0)
       ) {
      uVar4 = 1;
    }
  }
  return uVar4;
}



// FUNCTION 1430cf280 FUN_1430cf280 body=62 status=ok
// SIG undefined FUN_1430cf280(void)

float FUN_1430cf280(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_1430d7790();
  fVar2 = (float)FUN_140960430(param_1);
  if (*(char *)(param_1 + 0x5d0) == '\x03') {
    fVar2 = *(float *)(param_1 + 0x308);
  }
  return fVar2 * fVar1;
}



// FUNCTION 1430cf360 FUN_1430cf360 body=72 status=ok
// SIG undefined FUN_1430cf360(void)

void FUN_1430cf360(undefined8 *param_1)

{
  FUN_1430ccff0(*param_1,*(undefined4 *)param_1[1],*(undefined4 *)param_1[2],
                *(undefined4 *)param_1[3],*(undefined4 *)param_1[4],*(undefined4 *)param_1[5]);
  return;
}



// FUNCTION 1430cf3b0 FUN_1430cf3b0 body=88 status=ok
// SIG undefined FUN_1430cf3b0(void)

void FUN_1430cf3b0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  undefined4 local_20;
  
  plVar1 = *(longlong **)(*(longlong *)(*param_1 + 0x2a0) + 0xa0);
  (**(code **)(*plVar1 + 0x138))(plVar1,&local_28);
  puVar2 = (undefined8 *)param_1[1];
  *puVar2 = local_28;
  *(undefined4 *)(puVar2 + 1) = local_20;
  return;
}



// FUNCTION 1430cf430 FUN_1430cf430 body=64 status=ok
// SIG undefined FUN_1430cf430(void)

void FUN_1430cf430(undefined8 *param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined1 local_18 [16];
  
  plVar2 = (longlong *)FUN_142697a40(*(undefined8 *)*param_1);
  puVar3 = (undefined4 *)(**(code **)(*plVar2 + 0x128))(plVar2,local_18);
  puVar1 = (undefined4 *)param_1[1];
  *puVar1 = *puVar3;
  puVar1[1] = puVar3[1];
  puVar1[2] = puVar3[2];
  return;
}



// FUNCTION 1430cf4e0 FUN_1430cf4e0 body=833 status=ok
// SIG undefined FUN_1430cf4e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1430cf4e0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  ulonglong in_RAX;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar15;
  float fVar16;
  undefined1 in_XMM5 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_98;
  float local_90;
  float local_88;
  float local_84;
  undefined4 local_78;
  undefined4 local_74;
  
  if ((char)param_2[0xf1] == '\0') {
    in_RAX = 0;
    if (param_2[0x23] != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x220);
      fVar5 = *(float *)(param_1 + 0x228);
      auVar14 = *(undefined1 (*) [16])(param_1 + 0x230);
      fVar2 = auVar14._0_4_;
      fVar3 = auVar14._4_4_;
      fVar4 = auVar14._8_4_;
      lVar1 = *(longlong *)(param_2[0x23] + 0x168);
      if (lVar1 == 0) {
        local_98._0_4_ = DAT_1468b5d90;
        local_98._4_4_ = DAT_1468b5d94;
        local_90 = DAT_1468b5d98;
      }
      else {
        local_98._0_4_ = *(float *)(lVar1 + 0x220);
        local_98._4_4_ = *(float *)(lVar1 + 0x224);
        local_90 = *(float *)(lVar1 + 0x228);
      }
      local_98._0_4_ = (float)local_98 - *(float *)(param_1 + 0x220);
      local_98._4_4_ = local_98._4_4_ - *(float *)(param_1 + 0x224);
      local_90 = local_90 - fVar5;
      fVar8 = local_98._4_4_ * local_98._4_4_ + (float)local_98 * (float)local_98 +
              local_90 * local_90;
      fVar11 = local_98._4_4_;
      fVar17 = (float)local_98;
      fVar18 = local_90;
      if ((fVar8 != 1.0) &&
         (fVar11 = DAT_1468b5d94, fVar17 = DAT_1468b5d90, fVar18 = DAT_1468b5d98, 1e-08 <= fVar8)) {
        auVar13 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
        fVar11 = auVar13._0_4_;
        in_XMM5._4_12_ = auVar13._4_12_;
        fVar11 = fVar11 + fVar11 * (0.5 - fVar8 * 0.5 * fVar11 * fVar11);
        in_XMM5._0_4_ = fVar11 + fVar11 * (0.5 - fVar8 * 0.5 * fVar11 * fVar11);
        fVar11 = local_98._4_4_ * in_XMM5._0_4_;
        fVar17 = (float)local_98 * in_XMM5._0_4_;
        fVar18 = local_90 * in_XMM5._0_4_;
      }
      fVar19 = *(float *)(param_1 + 0x210) * _DAT_146b4a410;
      fVar20 = *(float *)(param_1 + 0x214) * fRam0000000146b4a414;
      fVar21 = *(float *)(param_1 + 0x218) * fRam0000000146b4a418;
      fVar22 = *(float *)(param_1 + 0x21c) * fRam0000000146b4a41c;
      auVar14 = rcpps(in_XMM5,auVar14);
      fVar8 = fVar18 * fVar20 - fVar11 * fVar21;
      fVar9 = fVar17 * fVar21 - fVar18 * fVar19;
      fVar10 = fVar11 * fVar19 - fVar17 * fVar20;
      fVar12 = auVar14._0_4_;
      fVar15 = auVar14._4_4_;
      fVar16 = auVar14._8_4_;
      fVar8 = fVar8 + fVar8;
      fVar9 = fVar9 + fVar9;
      fVar10 = fVar10 + fVar10;
      fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar2;
      fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar3;
      fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar4;
      fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar2;
      fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar3;
      fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar4;
      local_90 = ((fVar9 * fVar19 - fVar8 * fVar20) + fVar22 * fVar10 + fVar18) *
                 (float)(-(uint)((float)((uint)fVar4 & uRam0000000146b4a3e8) <= fRam0000000146b4a408
                                ) & (uint)fVar16 ^ (uint)fVar16);
      local_98 = CONCAT44(((fVar8 * fVar21 - fVar10 * fVar19) + fVar22 * fVar9 + fVar11) *
                          (float)(-(uint)((float)((uint)fVar3 & uRam0000000146b4a3e4) <=
                                         fRam0000000146b4a404) & (uint)fVar15 ^ (uint)fVar15),
                          ((fVar10 * fVar20 - fVar9 * fVar21) + fVar22 * fVar8 + fVar17) *
                          (float)(-(uint)((float)((uint)fVar2 & _DAT_146b4a3e0) <= _DAT_146b4a400) &
                                  (uint)fVar12 ^ (uint)fVar12));
      in_RAX = FVector::Rotation(&local_98,&local_88);
      if ((ABS(local_84) < *(float *)(param_1 + 0x50c) ||
           ABS(local_84) == *(float *)(param_1 + 0x50c)) &&
         (ABS(local_88) < *(float *)(param_1 + 0x510) ||
          ABS(local_88) == *(float *)(param_1 + 0x510))) {
        local_74 = *(undefined4 *)(param_1 + 0x508);
        local_78 = 2;
        local_98 = uVar6;
        local_90 = fVar5;
        uVar7 = (**(code **)(*param_2 + 0x870))(param_2,&local_98,&DAT_1464aa810,&local_78);
        return uVar7;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1430cf830 FUN_1430cf830 body=161 status=ok
// SIG undefined FUN_1430cf830(void)

void FUN_1430cf830(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_res8 [4];
  
  cVar2 = *(char *)(param_1 + 0x1c0);
  if ((((cVar2 != '\0') && (*(char *)(param_1 + 0x178) != '\0')) &&
      (lVar1 = *(longlong *)(param_1 + 0x270), lVar1 != 0)) && (*(char *)(lVar1 + 0x128) != '\x01'))
  {
    FUN_1430dbcc0(lVar1,0);
    cVar2 = *(char *)(param_1 + 0x1c0);
  }
  if (cVar2 != '\0') {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 400,0);
  }
  if (*(char *)(param_1 + 0x260) != '\0') {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x1b0,0);
  }
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  *(undefined1 *)(param_1 + 0x260) = 0;
  local_res8[0] = DAT_146b4a478;
  FUN_142dbb5d0(param_1 + 0x1c8,local_res8);
  return;
}



// FUNCTION 1430cf8e0 FUN_1430cf8e0 body=824 status=ok
// SIG undefined FUN_1430cf8e0(void)

undefined8 FUN_1430cf8e0(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float local_78;
  float local_74;
  float local_70;
  undefined8 local_68;
  float local_60;
  
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    fVar9 = *(float *)(*(longlong *)(param_1 + 0x1b0) + 0x304);
    if (0.0 < fVar9) {
      lVar3 = *(longlong *)(param_1 + 0x120);
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0();
      }
      fVar9 = fVar9 + *(float *)(param_1 + 0x1d0);
      if (*(float *)(lVar3 + 0x790) <= fVar9 && fVar9 != *(float *)(lVar3 + 0x790)) {
        return 0;
      }
    }
    cVar2 = FUN_142d52a00(param_1 + 0x1d8);
    if (cVar2 != '\0') {
      uVar4 = FUN_142d52a20(param_1 + 0x1d8);
      uVar4 = FArchive::operator<<(uVar4);
      FUN_142d5fed0(uVar4);
      if (ABS(extraout_XMM0_Da) <= 1e-08) {
        return 0;
      }
    }
    if (((*(char *)(*(longlong *)(param_1 + 0x1b0) + 0x308) != '\0') &&
        (iVar1 = *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x30c), 0 < iVar1)) &&
       (cVar2 = FUN_142d52a00(param_1 + 0x1d8), cVar2 != '\0')) {
      uVar4 = FUN_142d52a20(param_1 + 0x1d8);
      uVar4 = FArchive::operator<<(uVar4);
      fVar9 = (float)FUN_142d61c30(uVar4);
      uVar4 = FUN_142d52a20(param_1 + 0x1d8);
      uVar4 = FArchive::operator<<(uVar4);
      FUN_142d5fed0(uVar4);
      if (extraout_XMM0_Da_00 < fVar9 / (float)iVar1) {
        return 0;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x308))
              (*(longlong **)(param_1 + 0x1b8),&local_78);
    cVar2 = FUN_1430dd9e0(*(undefined8 *)(param_1 + 0x1b8));
    fVar9 = *(float *)(*(longlong *)(param_1 + 0x1b0) + 0x2fc);
    if (0.0 < fVar9) {
      lVar3 = 0x38;
      if (cVar2 != '\0') {
        lVar3 = 0x188;
      }
      FUN_1430d47c0(lVar3 + *(longlong *)(param_1 + 0x1b0),*(undefined8 *)(param_1 + 0x1b8),
                    &local_78,0);
      if (extraout_XMM0_Da_01 < fVar9) {
        return 0;
      }
    }
    fVar9 = *(float *)(*(longlong *)(param_1 + 0x1b0) + 0x300);
    if (0.0 < fVar9) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x168);
      if (lVar3 == 0) {
        local_60 = (float)DAT_1464aa7b0;
        puVar5 = &local_68;
        local_68 = DAT_1464aa7a8;
      }
      else {
        puVar5 = (undefined8 *)FUN_142369f10(lVar3,&local_68);
      }
      local_60 = *(float *)(puVar5 + 1);
      fVar6 = local_74 * local_74 + local_78 * local_78 + local_70 * local_70;
      auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar7 = auVar8._0_4_;
      fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
      fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
      fVar7 = local_74 * fVar7 * (float)((ulonglong)*puVar5 >> 0x20) +
              fVar7 * local_78 * (float)*puVar5 + fVar7 * local_70 * local_60;
      fVar6 = -1.0;
      if ((-1.0 <= fVar7) && (fVar6 = fVar7, 1.0 <= fVar7)) {
        fVar6 = 1.0;
      }
      fVar6 = _guard_xfg_dispatch_icall_nop(fVar6);
      if (fVar9 * 0.017453292 < fVar6) {
        return 0;
      }
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x2e8);
    if ((lVar3 == 0) ||
       (cVar2 = FUN_142c48f90(lVar3,*(undefined8 *)(param_1 + 0x1b8),0), cVar2 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1430cfc20 FUN_1430cfc20 body=144 status=ok
// SIG undefined FUN_1430cfc20(void)

void FUN_1430cfc20(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1bc) = 0;
  *(undefined1 *)(param_1 + 0x1b8) = *(undefined1 *)(param_1 + 0x280);
  puVar1 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x270) + 0x738))
                     (*(longlong **)(param_1 + 0x270),local_18);
  *(undefined8 *)(param_1 + 0x1c4) = *puVar1;
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(puVar1 + 1);
  local_28 = *puVar1;
  local_20 = *(undefined4 *)(puVar1 + 1);
  FUN_1430e5fc0(param_1,*(undefined1 *)(param_1 + 0x280),*(undefined4 *)(param_1 + 0x1bc),
                *(undefined4 *)(param_1 + 0x1c0),&local_28);
  return;
}



// FUNCTION 1430cfcb0 FUN_1430cfcb0 body=104 status=ok
// SIG undefined FUN_1430cfcb0(void)

void FUN_1430cfcb0(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1[0x36] != 0) {
    *(undefined2 *)((longlong)param_1 + 0x1c3) = 0;
    *(undefined1 *)((longlong)param_1 + 0x1c2) = 0;
    if (*(char *)((longlong)param_1 + 0x1c1) != '\0') {
      lVar1 = param_1[0x24];
      *(undefined1 *)((longlong)param_1 + 0x1c1) = 0;
      if (lVar1 == 0) {
        lVar1 = FUN_1423407b0();
      }
      *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(lVar1 + 0x790);
                    /* WARNING: Could not recover jumptable at 0x0001430cfd0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x410))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1430cfd20 FUN_1430cfd20 body=200 status=ok
// SIG undefined FUN_1430cfd20(void)

void FUN_1430cfd20(longlong param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 local_38 [48];
  
  pfVar1 = (float *)(**(code **)(*(longlong *)(param_1 + 0x5b8) + 0x20))
                              ((longlong *)(param_1 + 0x5b8),local_38);
  fVar3 = 0.0;
  fVar2 = 0.0;
  fVar4 = *param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2];
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  else {
    fVar3 = 1.0 / SQRT(fVar4);
    fVar4 = fVar3 * param_2[1];
    fVar2 = fVar3 * param_2[2];
    fVar3 = fVar3 * *param_2;
  }
  *(float *)(param_1 + 0x840) = 1.0 - (pfVar1[1] * fVar4 + *pfVar1 * fVar3 + pfVar1[2] * fVar2);
  return;
}



// FUNCTION 1430cfdf0 FUN_1430cfdf0 body=5233 status=ok
// SIG undefined FUN_1430cfdf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1430cfdf0(longlong *param_1,longlong *param_2,undefined8 *param_3,float param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  float fVar12;
  char cVar13;
  char cVar14;
  int iVar15;
  longlong lVar16;
  float *pfVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  int iVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined4 uVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_668 [32];
  undefined4 *local_648;
  float *local_640;
  undefined8 **local_638;
  float *local_630;
  undefined8 **local_628;
  undefined1 local_618 [4];
  float local_614;
  undefined8 local_610;
  float local_608;
  float local_600;
  float local_5fc;
  undefined8 local_5f8;
  float local_5f0;
  undefined8 local_5e8;
  float local_5e0;
  float local_5d8;
  float local_5d4;
  float local_5d0;
  float local_5cc;
  undefined8 local_5c8;
  float local_5c0;
  undefined8 local_5b8;
  float local_5b0;
  float local_5a8;
  float local_5a4;
  float local_5a0;
  float local_59c;
  undefined8 local_598;
  float local_590;
  float local_588;
  float fStack_584;
  float local_580;
  float local_578;
  float local_574;
  float local_570;
  float local_560;
  float local_55c;
  float local_558;
  undefined8 local_550;
  float local_548;
  longlong local_540;
  undefined8 local_538;
  undefined8 uStack_530;
  float *local_528;
  longlong **pplStack_520;
  float *local_518;
  float local_510;
  float fStack_50c;
  float local_508;
  float local_500;
  float local_4fc;
  float local_4f8;
  undefined8 local_4f0;
  float local_4e8;
  undefined8 local_4e0;
  float local_4d8;
  undefined1 local_4d0 [8];
  float local_4c8;
  undefined1 local_4b8 [8];
  float fStack_4b0;
  float fStack_4ac;
  undefined1 local_4a8 [16];
  longlong *local_498;
  float *local_490;
  longlong *local_488;
  float *local_480;
  undefined8 **local_478;
  longlong *local_470;
  undefined8 *local_468;
  undefined8 local_460;
  undefined4 local_458;
  undefined8 local_448;
  float local_440;
  undefined8 local_438;
  float local_430;
  float local_420;
  undefined1 local_418 [12];
  undefined4 uStack_40c;
  undefined8 local_408;
  undefined8 uStack_400;
  longlong *local_3f8 [5];
  float local_3d0;
  float local_3c0;
  undefined1 local_3b8 [16];
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_368 [32];
  float local_348;
  float local_344;
  float local_340;
  undefined1 local_328 [12];
  undefined4 local_31c;
  float local_308;
  float local_304;
  float local_300;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  undefined1 local_298 [12];
  undefined4 local_28c;
  float local_278;
  float local_274;
  float local_270;
  float local_260;
  float local_25c;
  float local_258;
  undefined1 local_208 [96];
  undefined1 *local_1a8;
  undefined8 local_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  float local_168 [18];
  longlong local_120;
  longlong local_100;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_668;
  local_540 = param_1[0x24];
  local_5a4 = param_4;
  local_470 = param_1;
  local_468 = param_3;
  if (local_540 == 0) {
    local_540 = FUN_1423407b0();
  }
  lVar16 = (**(code **)(*(longlong *)param_1[0x44] + 0x838))();
  plVar2 = *(longlong **)(lVar16 + 0x180);
  local_5a0 = (float)(**(code **)(*plVar2 + 0x4f8))(plVar2);
  local_648 = (undefined4 *)param_1[0x44];
  FUN_1422ffb20(local_168,DAT_146b4a440,local_618,0);
  FUN_1426d3dd0(local_3f8);
  FUN_1426ea8d0(local_3f8,2);
  (**(code **)(*plVar2 + 0x740))(plVar2,local_168,local_3f8);
  local_498 = &local_540;
  local_490 = &local_5a0;
  local_480 = local_168;
  local_478 = local_3f8;
  local_488 = param_1;
  local_5d8 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x41) * 0.017453292);
  local_538 = (longlong *)&stack0x00000028;
  pplStack_520 = &local_498;
  local_518 = &local_5d8;
  uStack_530 = (float *)param_3;
  local_528 = (float *)param_1;
  FUN_1430caa90(&local_538,&local_198);
  if (((char)param_1[0x38] == '\0') ||
     (((*(float *)(param_1 + 0x55) == 0.0 && (*(float *)((longlong)param_1 + 0x2ac) == 0.0)) &&
      (*(float *)(param_1 + 0x56) == 0.0)))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  uStack_530 = &local_198;
  local_528 = &local_5d8;
  local_538 = param_1;
  FUN_1430c97c0(&local_538,local_3b8);
  if (bVar5) {
    local_548 = *(float *)(param_1 + 0x56);
    puVar19 = &local_550;
    local_550 = param_1[0x55];
  }
  else {
    puVar19 = &local_5b8;
    fVar24 = fStack_194 * 0.0 - fStack_190 * 0.0;
    fVar30 = fStack_190 * 1.0 - local_198 * 0.0;
    fVar28 = local_198 * 0.0 - fStack_194 * 1.0;
    fVar24 = fVar24 + fVar24;
    fVar30 = fVar30 + fVar30;
    fVar28 = fVar28 + fVar28;
    local_5b0 = (fVar30 * local_198 - fVar24 * fStack_194) + fStack_18c * fVar28 + 0.0;
    local_5b8 = CONCAT44((fVar24 * fStack_190 - fVar28 * local_198) + fStack_18c * fVar30 + 0.0,
                         (fVar28 * fStack_194 - fVar30 * fStack_190) + fStack_18c * fVar24 + 1.0);
  }
  local_460 = *puVar19;
  local_458 = *(undefined4 *)(puVar19 + 1);
  FRotationMatrix::MakeFromZX(local_368,local_3b8,&local_460);
  FMatrix::GetUnitAxis(local_368,&local_560,1);
  local_5c8 = CONCAT44(local_344,local_348);
  local_5c0 = local_340;
  fVar24 = local_344 * local_344 + local_348 * local_348 + local_340 * local_340;
  if (fVar24 == 1.0) {
    local_5b0 = local_340;
    local_5b8 = local_5c8;
    fVar30 = local_344;
    fVar28 = local_340;
    fVar36 = local_348;
  }
  else {
    fVar30 = DAT_1468b5d94;
    fVar28 = DAT_1468b5d98;
    fVar36 = DAT_1468b5d90;
    if (1e-08 <= fVar24) {
      auVar32 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
      local_59c = auVar32._0_4_;
      local_59c = local_59c + local_59c * (0.5 - fVar24 * 0.5 * local_59c * local_59c);
      local_59c = local_59c + local_59c * (0.5 - fVar24 * 0.5 * local_59c * local_59c);
      fVar30 = local_59c * local_344;
      fVar36 = local_59c * local_348;
      fVar28 = local_59c * local_340;
    }
  }
  FMatrix::GetUnitAxis(local_368,&local_550,2);
  fVar38 = 0.0;
  local_5e0 = local_558;
  fVar24 = 0.0;
  fVar37 = 0.0;
  *param_2 = 0;
  local_4a8._4_4_ = uStack_184;
  local_4a8._0_4_ = uStack_184;
  local_4a8._8_4_ = uStack_184;
  local_4a8._12_4_ = uStack_184;
  local_5c0 = fStack_180;
  local_4b8._4_4_ = fStack_180;
  local_4b8._0_4_ = fStack_180;
  fStack_4b0 = fStack_180;
  fStack_4ac = fStack_180;
  local_600 = 0.0;
  local_5d4 = 0.0;
  local_5e8 = CONCAT44(local_55c,local_560);
  local_614 = 0.0;
  local_610 = CONCAT44(fVar30,fVar36);
  local_418._4_4_ = uStack_184;
  local_418._0_4_ = local_188;
  local_418._8_4_ = fStack_180;
  uStack_40c = uStack_17c;
  param_2[1] = 1;
  local_608 = fVar28;
  TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2);
  puVar19 = (undefined8 *)*param_2;
  uVar34 = local_418._0_4_;
  uVar33 = local_4a8._0_4_;
  *puVar19 = CONCAT44(local_4a8._0_4_,local_418._0_4_);
  *(float *)(puVar19 + 1) = local_5c0;
  local_59c = _guard_xfg_dispatch_icall_nop(*(float *)((longlong)param_1 + 0x20c) * 0.017453292);
  if (local_5a4 <= 1.0) {
LAB_1430d0d11:
    iVar21 = 0;
    plVar2 = (longlong *)param_1[0x44];
    local_1a8 = (undefined1 *)0x0;
    local_1a0 = 0;
    uVar18 = FUN_14096cb40();
    lVar16 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar18);
    if (lVar16 != 0) {
      iVar1 = *(int *)(lVar16 + 0x290);
      if (0 < iVar1) {
        do {
          puVar19 = (undefined8 *)FUN_140965330(lVar16,local_4d0,iVar21);
          uVar10 = local_1a0;
          lVar22 = (longlong)(int)local_1a0;
          iVar15 = (int)local_1a0 + 1;
          local_1a0 = CONCAT44(local_1a0._4_4_,iVar15);
          if (local_1a0._4_4_ < iVar15) {
            TArray<FVector,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                      (local_208,uVar10 & 0xffffffff);
          }
          puVar20 = local_208;
          if (local_1a8 != (undefined1 *)0x0) {
            puVar20 = local_1a8;
          }
          iVar21 = iVar21 + 1;
          *(undefined8 *)(puVar20 + lVar22 * 0xc) = *puVar19;
          *(undefined4 *)(puVar20 + lVar22 * 0xc + 8) = *(undefined4 *)(puVar19 + 1);
          param_1 = local_470;
        } while (iVar21 < iVar1);
      }
      lVar16 = *param_2;
      local_538 = &local_540;
      lVar22 = (longlong)(int)param_2[1];
      local_3a8 = *local_468;
      uStack_3a0 = local_468[1];
      local_528 = local_168;
      pplStack_520 = local_3f8;
      local_648 = (undefined4 *)local_418;
      local_398._4_4_ = *(undefined4 *)(lVar16 + -8 + lVar22 * 0xc);
      local_398._0_4_ = *(undefined4 *)(lVar16 + -0xc + lVar22 * 0xc);
      local_398._8_4_ = *(undefined4 *)(lVar16 + -4 + lVar22 * 0xc);
      local_398._12_4_ = 0;
      uStack_530._0_4_ = SUB84(&local_5a0,0);
      uStack_530._4_4_ = (undefined4)((ulonglong)&local_5a0 >> 0x20);
      local_388._4_4_ = DAT_1464aa788._4_4_;
      local_388._0_4_ = (undefined4)DAT_1464aa788;
      local_388._8_4_ = DAT_1464aa790;
      local_388._12_4_ = 0;
      local_418._8_4_ = (undefined4)uStack_530;
      local_418._0_8_ = local_538;
      uStack_40c = uStack_530._4_4_;
      uStack_530 = &local_5a0;
      local_408 = local_528;
      uStack_400 = pplStack_520;
      puVar19 = (undefined8 *)
                FUN_1430c6fe0(local_4d0,&local_3a8,local_208,
                              *(float *)((longlong)param_1 + 0x204) + 100.0);
      *(undefined8 *)(lVar16 + -0xc + lVar22 * 0xc) = *puVar19;
      *(undefined4 *)(lVar16 + -4 + lVar22 * 0xc) = *(undefined4 *)(puVar19 + 1);
    }
    if (local_1a8 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    if (local_100 != 0) {
      FMemory::Free();
    }
    if (local_120 != 0) {
      FMemory::Free();
    }
    return param_2;
  }
  fVar36 = 0.0;
  local_4f8 = (float)local_4b8._0_4_;
  local_500 = (float)uVar34;
  local_4fc = (float)uVar33;
  fVar30 = 0.0;
  fVar28 = 0.0;
  do {
    fVar35 = local_59c;
    fVar25 = local_5a4 - fVar36;
    if (*(float *)(param_1 + 0x3f) <= local_5a4 - fVar36) {
      fVar25 = *(float *)(param_1 + 0x3f);
    }
    local_5f8 = CONCAT44(local_5e8._4_4_ * fVar25 + local_4fc,(float)local_5e8 * fVar25 + local_500)
    ;
    local_5f0 = local_5e0 * fVar25 + local_4f8;
    _guard_xfg_dispatch_icall_nop(local_298,0,0x90);
    local_638 = local_3f8;
    local_640 = local_168;
    local_28c = 0x3f800000;
    local_648 = (undefined4 *)CONCAT44(local_648._4_4_,local_5a0);
    cVar13 = UWorld::LineTraceSingleByChannel(local_540,local_298,&local_500,&local_5f8);
    if (cVar13 == '\0') {
      lVar16 = FRotationMatrix::MakeFromXZ(&local_3a8,&local_5e8,&local_610);
      uVar18 = local_5f8;
      local_510 = *(float *)(lVar16 + 0x20);
      fStack_50c = *(float *)(lVar16 + 0x24);
      local_508 = *(float *)(lVar16 + 0x28);
      fVar26 = fStack_50c * fStack_50c + local_510 * local_510 + local_508 * local_508;
      fVar30 = local_510;
      fVar36 = fStack_50c;
      fVar35 = local_508;
      uVar11 = *(undefined8 *)(lVar16 + 0x20);
      fVar25 = local_508;
      if ((fVar26 != 1.0) &&
         (fVar30 = DAT_1468b5d90, fVar36 = DAT_1468b5d94, fVar35 = DAT_1468b5d98, uVar11 = local_4f0
         , fVar25 = local_4e8, 1e-08 <= fVar26)) {
        auVar32 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
        local_5fc = auVar32._0_4_;
        local_5fc = local_5fc + local_5fc * (0.5 - fVar26 * 0.5 * local_5fc * local_5fc);
        local_5fc = local_5fc + local_5fc * (0.5 - fVar26 * 0.5 * local_5fc * local_5fc);
        fVar30 = local_5fc * local_510;
        fVar36 = local_5fc * fStack_50c;
        fVar35 = local_5fc * local_508;
      }
      local_4e8 = fVar25;
      local_4f0 = uVar11;
      fVar25 = *(float *)((longlong)param_1 + 0x1fc);
      local_3c0 = local_5f0;
      fVar26 = (float)local_5f8 - fVar25 * fVar30;
      local_3d0 = local_5f0 - fVar25 * fVar35;
      fVar30 = local_5f8._4_4_ - fVar25 * fVar36;
      _guard_xfg_dispatch_icall_nop(local_328,0,0x90);
      local_440 = local_3d0;
      local_430 = local_3c0;
      local_448 = CONCAT44(fVar30,fVar26);
      local_31c = 0x3f800000;
      local_438 = uVar18;
      local_628 = local_478;
      local_630 = local_480;
      local_638 = (undefined8 **)&local_538;
      local_538 = (longlong *)CONCAT44((int)local_488[0x40],2);
      local_640 = (float *)CONCAT44(local_640._4_4_,*local_490);
      local_648 = &DAT_1464aa810;
      cVar14 = UWorld::SweepSingleByChannel(*local_498,local_328,&local_438,&local_448);
      local_5d0 = local_304;
      local_5cc = local_300;
      local_578 = local_2f0;
      local_574 = local_2ec;
      local_570 = local_2e8;
      local_5a8 = local_308;
      fVar35 = local_59c;
      fVar30 = local_600;
      fVar25 = local_308;
      if (cVar14 != '\0') goto LAB_1430d06fd;
LAB_1430d0fa0:
      if ((((char)param_1[0x43] != '\0') && (cVar14 == '\0')) || (local_608 <= 0.0)) {
        local_598 = local_610;
        uVar33 = (int)local_610;
        uVar34 = (int)((ulonglong)local_610 >> 0x20);
      }
      else {
        local_598 = CONCAT44(DAT_1464aa798._4_4_,(undefined4)DAT_1464aa798);
        uVar33 = (undefined4)DAT_1464aa798;
        uVar34 = DAT_1464aa798._4_4_;
        local_608 = DAT_1464aa7a0;
      }
      local_5c0 = local_5f0;
      fVar36 = SQRT((local_5f8._4_4_ - (float)local_4a8._0_4_) *
                    (local_5f8._4_4_ - (float)local_4a8._0_4_) +
                    ((float)local_5f8 - (float)local_418._0_4_) *
                    ((float)local_5f8 - (float)local_418._0_4_) +
                    (local_5f0 - (float)local_4b8._0_4_) * (local_5f0 - (float)local_4b8._0_4_)) +
               local_5d4;
      local_5c8 = local_5f8;
      if ((char)param_1[0x43] == '\0') {
        local_5e0 = 0.0;
        fVar24 = (float)local_5e8 * (float)local_5e8 + local_5e8._4_4_ * local_5e8._4_4_;
        if (1e-08 < fVar24) {
          local_5e0 = 0.0;
          auVar32 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
          fVar30 = auVar32._0_4_;
          fVar30 = fVar30 + fVar30 * (0.5 - fVar24 * 0.5 * fVar30 * fVar30);
          fVar30 = fVar30 + fVar30 * (0.5 - fVar24 * 0.5 * fVar30 * fVar30);
          local_5e8 = CONCAT44(local_5e8._4_4_ * fVar30,(float)local_5e8 * fVar30);
        }
      }
      iVar21 = (int)param_2[1];
      local_610 = CONCAT44(uVar34,uVar33);
      *(int *)(param_2 + 1) = iVar21 + 1;
      fVar24 = local_5f8._4_4_;
      local_5d4 = fVar36;
      local_590 = local_608;
      if (*(int *)((longlong)param_2 + 0xc) < iVar21 + 1) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar21);
        fVar24 = (float)((ulonglong)local_5f8 >> 0x20);
      }
      lVar16 = *param_2;
      *(ulonglong *)(lVar16 + (longlong)iVar21 * 0xc) = CONCAT44(fVar24,(float)local_5f8);
      *(float *)(lVar16 + 8 + (longlong)iVar21 * 0xc) = local_5f0;
      fVar24 = local_598._4_4_;
      fVar37 = local_590;
      fVar38 = (float)local_598;
      if (cVar14 == '\0') {
        fVar30 = *(float *)((longlong)param_1 + 0x204);
        local_600 = (float)local_5f8 - (float)local_598 * fVar30;
        local_5fc = local_5f8._4_4_ - local_598._4_4_ * fVar30;
        local_614 = local_5f0 - local_590 * fVar30;
      }
      else {
        local_600 = local_5a8;
        local_614 = local_5cc;
        local_5fc = local_5d0;
      }
    }
    else {
      if (local_258 < local_5d8) goto LAB_1430d0d11;
      cVar14 = '\x01';
      local_5d0 = local_274;
      local_5cc = local_270;
      local_578 = local_260;
      local_570 = local_258;
      fVar25 = local_278;
      local_574 = local_25c;
LAB_1430d06fd:
      bVar5 = local_570 <= local_5d8;
      if (((fVar38 == 0.0) && (fVar24 == 0.0)) && (fVar37 == 0.0)) {
        bVar4 = false;
        bVar6 = true;
      }
      else {
        bVar4 = true;
        bVar6 = fVar35 < fVar38 * local_578 + fVar24 * local_574 + fVar37 * local_570;
      }
      local_5a8 = fVar25;
      pfVar17 = (float *)FRotationMatrix::MakeFromZX(&local_3a8,&local_578,&local_560);
      fVar9 = local_570;
      fVar8 = local_574;
      fVar26 = local_578;
      fVar36 = *pfVar17;
      fVar35 = pfVar17[1];
      local_5b8 = *(undefined8 *)pfVar17;
      local_5b0 = pfVar17[2];
      fVar27 = fVar35 * fVar35 + fVar36 * fVar36 + local_5b0 * local_5b0;
      fVar23 = fVar35;
      fVar29 = local_5b0;
      fVar31 = fVar36;
      uVar18 = local_5b8;
      fVar12 = local_5b0;
      if ((fVar27 != 1.0) &&
         (fVar23 = DAT_1468b5d94, fVar29 = DAT_1468b5d98, fVar31 = DAT_1468b5d90, uVar18 = local_4e0
         , fVar12 = local_4d8, 1e-08 <= fVar27)) {
        auVar32 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
        local_5fc = auVar32._0_4_;
        local_5fc = local_5fc + local_5fc * (0.5 - fVar27 * 0.5 * local_5fc * local_5fc);
        local_5fc = local_5fc + local_5fc * (0.5 - fVar27 * 0.5 * local_5fc * local_5fc);
        fVar23 = local_5fc * fVar35;
        fVar29 = local_5fc * local_5b0;
        fVar31 = local_5fc * fVar36;
      }
      local_4d8 = fVar12;
      local_4e0 = uVar18;
      if (bVar4) {
        bVar3 = 0.0 <= fVar24 * fVar23 + fVar38 * fVar31 + fVar37 * fVar29;
      }
      else {
        bVar3 = true;
      }
      if (((fVar30 == 0.0) && (fVar28 == 0.0)) && (local_614 == 0.0)) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if ((bVar7) || (!bVar4)) {
        bVar4 = true;
      }
      else {
        bVar4 = ABS(fVar24 * (local_5d0 - fVar28) + fVar38 * (fVar25 - fVar30) +
                    fVar37 * (local_5cc - local_614)) < *(float *)(param_1 + 0x42);
      }
      if ((bVar5) || (((!bVar6 || (!bVar4)) && (!bVar3)))) goto LAB_1430d0fa0;
      local_5fc = local_5d0;
      local_614 = local_5cc;
      fVar24 = fVar25;
      if (cVar13 != '\0') {
        fVar24 = local_550._4_4_ * local_574 + local_578 * (float)local_550 + local_548 * local_570;
        fVar38 = local_578 - fVar24 * (float)local_550;
        fVar37 = local_570 - fVar24 * local_548;
        fVar35 = local_574 - fVar24 * local_550._4_4_;
        fVar36 = fVar38 * fVar38 + fVar35 * fVar35 + fVar37 * fVar37;
        fVar24 = fVar37;
        fVar30 = fVar38;
        fVar28 = fVar35;
        if ((fVar36 != 1.0) &&
           (fVar24 = DAT_1468b5d98, fVar30 = DAT_1468b5d90, fVar28 = DAT_1468b5d94, 1e-08 <= fVar36)
           ) {
          auVar32 = rsqrtss(ZEXT416((uint)fVar36),ZEXT416((uint)fVar36));
          fVar28 = auVar32._0_4_;
          fVar28 = fVar28 + fVar28 * (0.5 - fVar36 * 0.5 * fVar28 * fVar28);
          fVar28 = fVar28 + fVar28 * (0.5 - fVar36 * 0.5 * fVar28 * fVar28);
          fVar24 = fVar37 * fVar28;
          fVar30 = fVar38 * fVar28;
          fVar28 = fVar35 * fVar28;
        }
        fVar36 = fVar30 * local_560 + fVar28 * local_55c + fVar24 * local_558;
        local_588 = local_560 - fVar30 * fVar36;
        fStack_584 = local_55c - fVar28 * fVar36;
        local_580 = local_558 - fVar24 * fVar36;
        fVar36 = fStack_584 * fStack_584 + local_588 * local_588 + local_580 * local_580;
        if (fVar36 != 1.0) {
          if (1e-08 <= fVar36) {
            auVar32 = rsqrtss(ZEXT416((uint)fVar36),ZEXT416((uint)fVar36));
            fVar37 = auVar32._0_4_;
            fVar37 = fVar37 + fVar37 * (0.5 - fVar36 * 0.5 * fVar37 * fVar37);
            fVar37 = fVar37 + fVar37 * (0.5 - fVar36 * 0.5 * fVar37 * fVar37);
            local_588 = local_588 * fVar37;
            fStack_584 = fStack_584 * fVar37;
            local_580 = local_580 * fVar37;
          }
          else {
            local_588 = DAT_1468b5d90;
            fStack_584 = DAT_1468b5d94;
            local_580 = DAT_1468b5d98;
          }
        }
        fVar36 = *(float *)((longlong)param_1 + 0x214);
        local_5e8 = CONCAT44(fStack_584,local_588);
        local_610._0_4_ = (fVar30 - (float)local_610) * fVar36 + (float)local_610;
        local_610._4_4_ = (fVar28 - local_610._4_4_) * fVar36 + local_610._4_4_;
        local_608 = (fVar24 - local_608) * fVar36 + local_608;
        fVar24 = local_5a8;
        local_5e0 = local_580;
      }
      fVar30 = *(float *)((longlong)param_1 + 0x204);
      iVar21 = (int)param_2[1];
      fVar28 = fVar30 * local_608 + local_5cc;
      fVar24 = fVar30 * (float)local_610 + fVar24;
      fVar30 = fVar30 * local_610._4_4_ + local_5d0;
      *(int *)(param_2 + 1) = iVar21 + 1;
      fVar35 = SQRT((fVar24 - (float)local_418._0_4_) * (fVar24 - (float)local_418._0_4_) +
                    (fVar30 - (float)local_4a8._0_4_) * (fVar30 - (float)local_4a8._0_4_) +
                    (fVar28 - (float)local_4b8._0_4_) * (fVar28 - (float)local_4b8._0_4_));
      fVar36 = fVar35 + local_5d4;
      local_5c8 = CONCAT44(fVar30,fVar24);
      local_600 = fVar25;
      local_5d4 = fVar36;
      local_5c0 = fVar28;
      local_4c8 = fVar28;
      local_420 = local_608;
      if (*(int *)((longlong)param_2 + 0xc) < iVar21 + 1) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2);
      }
      lVar16 = *param_2;
      *(ulonglong *)(lVar16 + (longlong)iVar21 * 0xc) = CONCAT44(fVar30,fVar24);
      *(float *)(lVar16 + 8 + (longlong)iVar21 * 0xc) = fVar28;
      fVar24 = fVar8;
      fVar37 = fVar9;
      fVar38 = fVar26;
      if (fVar35 < 1.0) goto LAB_1430d0d11;
    }
    if (local_5a4 - fVar36 <= 1.0) goto LAB_1430d0d11;
    _local_4b8 = ZEXT416((uint)local_5c0);
    local_4a8 = ZEXT416((uint)local_5c8._4_4_);
    _local_418 = ZEXT416((uint)(float)local_5c8);
    local_4f8 = local_5c0;
    local_500 = (float)local_5c8;
    local_4fc = local_5c8._4_4_;
    fVar30 = local_600;
    fVar28 = local_5fc;
  } while( true );
}



// FUNCTION 1430d1270 FUN_1430d1270 body=942 status=ok
// SIG undefined FUN_1430d1270(void)

void FUN_1430d1270(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  undefined8 uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined1 local_e8 [16];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined1 local_b8 [176];
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x2a0) + 0xa0);
  (**(code **)(*plVar1 + 0xa0))(plVar1,&local_d8);
  lVar3 = (**(code **)(*plVar1 + 0xf0))(plVar1,local_b8);
  iVar6 = 0;
  fVar17 = *(float *)(lVar3 + 0x10) + *(float *)(lVar3 + 0x10);
  fVar11 = *(float *)(lVar3 + 0x14) + *(float *)(lVar3 + 0x14);
  fVar16 = *(float *)(lVar3 + 0x18) + *(float *)(lVar3 + 0x18);
  fVar14 = local_cc * local_cc - 0.5;
  fVar8 = local_d4 * fVar11 + local_d8 * fVar17 + local_d0 * fVar16;
  if (0 < *(int *)(param_1 + 0x290)) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x288));
      if (0.0 < *(float *)(lVar2 + 0xf0)) {
        pfVar4 = (float *)FUN_140964f20(lVar2,local_e8);
        local_100 = pfVar4[2];
        local_104 = pfVar4[1];
        local_108 = *pfVar4;
        physx::PxRigidBodyExt::getVelocityAtPos(&local_f8,plVar1,&local_108);
        fVar12 = *(float *)(lVar2 + 0xf0) / *(float *)(lVar2 + 0x48);
        if (0.0 <= fVar12) {
          if (1.0 <= fVar12) {
            fVar12 = 1.0;
          }
        }
        else {
          fVar12 = 0.0;
        }
        uVar5 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0xbe0);
        fVar12 = (float)FRichCurve::Eval(uVar5,fVar12,0);
        lVar2 = *(longlong *)(param_1 + 0xd00);
        fVar9 = local_108 -
                ((local_d4 * fVar16 - local_d0 * fVar11) * local_cc + fVar14 * fVar17 +
                 local_d8 * fVar8 + local_c8);
        fVar7 = local_104 -
                ((local_d0 * fVar17 - local_d8 * fVar16) * local_cc + fVar14 * fVar11 +
                 local_d4 * fVar8 + local_c4);
        fVar10 = fVar12 * *(float *)(param_1 + 0xc58) * 3200.0;
        fVar12 = local_100 -
                 ((local_d8 * fVar11 - local_d4 * fVar17) * local_cc + fVar14 * fVar16 +
                  local_d0 * fVar8 + local_c0);
        fVar13 = -(fVar10 * local_f4);
        fVar15 = -(fVar10 * local_f8);
        fVar10 = -(fVar10 * local_f0);
        *(float *)(lVar2 + 0x4ec) = fVar13 + *(float *)(lVar2 + 0x4ec);
        *(float *)(lVar2 + 0x4e8) = fVar15 + *(float *)(lVar2 + 0x4e8);
        *(float *)(lVar2 + 0x4f0) = fVar10 + *(float *)(lVar2 + 0x4f0);
        lVar2 = *(longlong *)(param_1 + 0xd00);
        *(float *)(lVar2 + 0x4f4) = (fVar10 * fVar7 - fVar13 * fVar12) + *(float *)(lVar2 + 0x4f4);
        *(float *)(lVar2 + 0x4f8) = (fVar15 * fVar12 - fVar10 * fVar9) + *(float *)(lVar2 + 0x4f8);
        *(float *)(lVar2 + 0x4fc) = (fVar13 * fVar9 - fVar15 * fVar7) + *(float *)(lVar2 + 0x4fc);
      }
      iVar6 = iVar6 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar6 < *(int *)(param_1 + 0x290));
  }
  return;
}



// FUNCTION 1430d1620 FUN_1430d1620 body=156 status=ok
// SIG undefined FUN_1430d1620(void)

undefined8 * FUN_1430d1620(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *local_38;
  longlong *plStack_30;
  longlong local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x6d0))
                    (*(longlong **)(param_1 + 0x180),0,1);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x2a0) != 0)) {
    plStack_30 = &local_28;
    local_38 = &LAB_1430cf330;
    local_28 = param_1;
    local_20 = param_2;
    local_18 = param_3;
    FUN_1426936b0(lVar1,&local_38);
  }
  return param_2;
}



// FUNCTION 1430d16c0 FUN_1430d16c0 body=69 status=ok
// SIG undefined FUN_1430d16c0(void)

void FUN_1430d16c0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x80);
  if (lVar1 != 0) {
    FUN_1430c8240(lVar1,param_2,param_3,1);
    return;
  }
  return;
}



// FUNCTION 1430d1710 FUN_1430d1710 body=126 status=ok
// SIG undefined FUN_1430d1710(void)

undefined8 * FUN_1430d1710(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1[2] = param_2;
    *puVar1 = &PTR_LAB_145a9c4d8;
    *(undefined4 *)(puVar1 + 3) = param_3;
    puVar1[1] = &PTR_LAB_145a9c4e8;
    FTickFunction::FTickFunction();
    puVar1[4] = &PTR__scalar_deleting_destructor__145a9c4c0;
    puVar1[0xf] = 0;
  }
  puVar2 = puVar1 + 1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}



// FUNCTION 1430d1790 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145a9fb58;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_145a9fba0;
  }
  return;
}



// FUNCTION 1430d17e0 FUN_1430d17e0 body=84 status=ok
// SIG undefined FUN_1430d17e0(void)

void FUN_1430d17e0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x5a8))();
  if ((param_1[0x54] == 0) && (param_1[0x30] != 0)) {
    (**(code **)(*param_1 + 0x640))(param_1);
    if (param_1[0x54] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001430d1827. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x650))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1430d1840 FUN_1430d1840 body=182 status=ok
// SIG undefined FUN_1430d1840(void)

void FUN_1430d1840(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  
  FUN_140960ca0();
  physx::PxVehicleWheelsDynData::setTireForceShaderFunction
            (*(longlong *)(param_1 + 0x2a0) + 0x70,FUN_1430d9be0);
  FUN_143972d90(*(longlong *)(param_1 + 0x2a0) + 0x70,FUN_1430d9b00);
  fVar5 = 0.0;
  *(undefined4 *)(param_1 + 0xcdc) = 0;
  fVar4 = 0.0;
  if (0 < (int)*(uint *)(param_1 + 0x290)) {
    plVar2 = *(longlong **)(param_1 + 0x288);
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x290);
    do {
      if ((*plVar2 != 0) && (lVar1 = *(longlong *)(*plVar2 + 0x68), lVar1 != 0)) {
        fVar5 = fVar5 + 1.0;
        *(float *)(param_1 + 0xcdc) = *(float *)(lVar1 + 0x30) + *(float *)(param_1 + 0xcdc);
      }
      plVar2 = plVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    fVar4 = *(float *)(param_1 + 0xcdc);
  }
  *(float *)(param_1 + 0xcdc) = fVar4 / fVar5;
  return;
}



// FUNCTION 1430d1900 FUN_1430d1900 body=261 status=ok
// SIG undefined FUN_1430d1900(void)

undefined8
FUN_1430d1900(undefined8 param_1,undefined8 param_2,float *param_3,undefined8 param_4,float param_5,
             float param_6)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = (float)param_4;
  fVar4 = (float)param_2;
  uVar3 = (uint)((ulonglong)param_1 >> 0x20);
  fVar1 = (float)param_1;
  if (fVar6 <= 0.0001) {
    fVar6 = 0.0001;
  }
  param_5 = fVar6 * param_5;
  fVar7 = 1.0 / fVar6 + 1.0 / fVar6;
  fVar6 = fVar7 * param_6;
  fVar8 = 1.0 / (((fVar6 * 0.235 + 0.48) * fVar6 + 1.0) * fVar6 + 1.0);
  fVar2 = fVar1 - fVar4;
  fVar6 = -param_5;
  uVar5 = (uint)((ulonglong)param_4 >> 0x20) ^ 0x80000000;
  if ((-param_5 <= fVar2) && (fVar6 = fVar2, uVar5 = uVar3, param_5 <= fVar2)) {
    fVar6 = param_5;
  }
  param_6 = (fVar6 * fVar7 + *param_3) * param_6;
  fVar6 = (param_6 + fVar6) * fVar8 + (fVar1 - fVar6);
  *param_3 = (*param_3 - param_6 * fVar7) * fVar8;
  if (0.0 < fVar4 - fVar1 == fVar4 < fVar6) {
    *param_3 = 0.0;
    return param_2;
  }
  return CONCAT44(uVar5,fVar6);
}



// FUNCTION 1430d1a50 FUN_1430d1a50 body=12 status=ok
// SIG undefined FUN_1430d1a50(void)

void FUN_1430d1a50(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_145a9c4f8;
  return;
}



// FUNCTION 1430d1a60 FUN_1430d1a60 body=109 status=ok
// SIG undefined FUN_1430d1a60(void)

void FUN_1430d1a60(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int local_res8 [8];
  
  FUN_142692640();
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_14622c9a0,local_res8,uVar3);
  if (((local_res8[0] != -1) && (lVar1 = DAT_14622c9a0 + (longlong)local_res8[0] * 0x18, lVar1 != 0)
      ) && (plVar2 = *(longlong **)(lVar1 + 8), plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001430d1ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x290))(plVar2,param_1);
    return;
  }
  return;
}



// FUNCTION 1430d1ad0 FUN_1430d1ad0 body=199 status=ok
// SIG undefined FUN_1430d1ad0(void)

void FUN_1430d1ad0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_res8;
  
  if (*(longlong *)(param_1 + 0x520) != 0) {
    local_res8 = *(undefined8 *)(param_1 + 0x528);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x4f8,&local_res8);
    plVar1 = *(longlong **)(param_1 + 0x520);
    local_res8 = *(undefined8 *)(param_1 + 0x528);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (plVar1 + 0xed,&local_res8);
    (**(code **)(*plVar1 + 0x358))(plVar1,0);
    plVar1[0xef] = 0;
    FUN_1430cd480(plVar1,(int)plVar1[0xe8]);
    *(undefined1 *)(plVar1 + 0xf1) = 0;
    FUN_1430cd820(param_1,0);
    *(undefined8 *)(param_1 + 0x520) = 0;
  }
  cVar2 = FUN_1426e4b00(param_1);
  if (cVar2 != '\0') {
    UMediumSkipWidget::CanWorkWhenGamePaused(param_1);
    return;
  }
  return;
}



// FUNCTION 1430d1ba0 FUN_1430d1ba0 body=275 status=ok
// SIG undefined FUN_1430d1ba0(void)

void FUN_1430d1ba0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b4a4e8) && (_Init_thread_header(&DAT_146b4a4e8), DAT_146b4a4e8 == -1))
  {
    FName::FName(&DAT_146b4a4e0,L"Vehicle",1);
    _Init_thread_footer(&DAT_146b4a4e8);
  }
  FUN_142693100(param_1,param_2,param_3,param_4,param_5);
  plVar1 = (longlong *)*param_3;
  plVar2 = plVar1 + (int)param_3[1];
  while( true ) {
    if (plVar1 == plVar2) {
      return;
    }
    if (*plVar1 == DAT_146b4a4e0) break;
    plVar1 = plVar1 + 1;
  }
  if (*(longlong *)(param_1 + 0x4d8) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x4e0);
  }
  (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_4,param_5);
  return;
}



// FUNCTION 1430d1cc0 FUN_1430d1cc0 body=185 status=ok
// SIG undefined FUN_1430d1cc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430d1cc0(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x220) + 0x168);
  if (lVar1 == 0) {
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    local_28 = _DAT_146b4a320 & _DAT_146b4a330;
    uStack_24 = uRam0000000146b4a324 & uRam0000000146b4a334;
    uStack_20 = uRam0000000146b4a328 & uRam0000000146b4a338;
    uStack_1c = uRam0000000146b4a32c & uRam0000000146b4a33c;
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = uRam0000000146b4a32c;
  }
  else {
    local_48 = *(undefined4 *)(lVar1 + 0x210);
    uStack_44 = *(undefined4 *)(lVar1 + 0x214);
    uStack_40 = *(undefined4 *)(lVar1 + 0x218);
    local_38 = *(undefined4 *)(lVar1 + 0x220);
    uStack_34 = *(undefined4 *)(lVar1 + 0x224);
    uStack_30 = *(undefined4 *)(lVar1 + 0x228);
    uStack_2c = *(undefined4 *)(lVar1 + 0x22c);
    local_28 = *(uint *)(lVar1 + 0x230);
    uStack_24 = *(uint *)(lVar1 + 0x234);
    uStack_20 = *(uint *)(lVar1 + 0x238);
    uStack_1c = *(uint *)(lVar1 + 0x23c);
    uStack_3c = *(uint *)(lVar1 + 0x21c);
  }
  local_60 = 1;
  local_68 = 1;
  FUN_1430cfdf0(param_1,local_58,&local_48,*(undefined4 *)(param_1 + 0x1b8));
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1430d1d80 FUN_1430d1d80 body=515 status=ok
// SIG undefined FUN_1430d1d80(void)

void FUN_1430d1d80(longlong param_1,undefined8 param_2,undefined4 *param_3,float *param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong local_88 [2];
  uint local_78;
  uint local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((*(char *)(param_1 + 0x5d0) == '\x03') && (*(longlong *)(param_1 + 0x2a8) != 0)) {
    uVar1 = UEngine::GetSmallFont();
    FUN_1428bbbd0(param_2,&DAT_1464aa744);
    fVar2 = (float)physx::PxVehicleDriveDynData::getAnalogInput
                             (*(longlong *)(param_1 + 0x2a8) + 0xc0,0);
    fVar3 = (float)physx::PxVehicleDriveDynData::getAnalogInput
                             (*(longlong *)(param_1 + 0x2a8) + 0xc0,1);
    fVar4 = (float)physx::PxVehicleDriveDynData::getAnalogInput
                             (*(longlong *)(param_1 + 0x2a8) + 0xc0,2);
    fVar5 = (float)physx::PxVehicleDriveDynData::getAnalogInput
                             (*(longlong *)(param_1 + 0x2a8) + 0xc0,3);
    fVar6 = (float)physx::PxVehicleDriveDynData::getAnalogInput
                             (*(longlong *)(param_1 + 0x2a8) + 0xc0,4);
    FString::PrintfImpl(local_88,
                        L"Tank inputs : \nAccel : %.2f\nBrake left : %.2f -- Brake right : %.2f\nThrust left : %.2f --- Thrust right : %.2f"
                        ,(double)fVar2,(double)fVar3,(double)fVar4,(double)fVar5,(double)fVar6);
    local_78 = local_78 & 0xfffffffc;
    local_74 = local_74 & 0xfffffffe;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    fVar2 = (float)UCanvas::DrawText(param_2,uVar1,local_88,*param_3,*param_4,0x3f800000,0x3f800000,
                                     &local_78);
    *param_4 = fVar2 + *param_4;
    if (local_88[0] != 0) {
      FMemory::Free();
    }
  }
  FUN_1409610e0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1430d1f90 thunk_FUN_1430cc8e0 body=5 status=ok
// SIG undefined thunk_FUN_1430cc8e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_1430cc8e0(longlong param_1,char param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x280) != param_2) {
    *(char *)(param_1 + 0x280) = param_2;
    if (*(longlong *)(param_1 + 0x278) != 0) {
      *(char *)(*(longlong *)(param_1 + 0x278) + 0x421) = param_2;
      if (*(char *)(param_1 + 0x280) == '\0') {
        if (*(longlong *)(param_1 + 600) != 0) {
          lVar5 = *(longlong *)(param_1 + 0x278);
          FWeakObjectPtr::operator=(&uStack_78);
          *(undefined4 *)(lVar5 + 0xd34) = uStack_78;
          *(undefined4 *)(lVar5 + 0xd38) = uStack_74;
          if (*(longlong *)(lVar5 + 0x2a0) != 0) {
            uVar6 = 0;
            uVar1 = *(uint *)(*(longlong *)(lVar5 + 0x2a0) + 0x3c);
            if (uVar1 != 0) {
              do {
                plVar2 = *(longlong **)((longlong)(int)uVar6 * 0x38 + *(longlong *)(lVar5 + 0x220));
                if (plVar2 == (longlong *)0x0) {
                  lVar4 = 0;
                }
                else {
                  lVar4 = plVar2[0x1f];
                  if (lVar4 == 0) {
                    (**(code **)(*plVar2 + 0x368))(plVar2);
                    lVar4 = plVar2[0x1f];
                  }
                }
                puVar3 = (undefined8 *)
                         physx::PxVehicleWheelsSimData::getTireData
                                   (*(longlong *)(lVar5 + 0x2a0) + 0x10,uVar6);
                uStack_68 = *puVar3;
                uStack_60 = puVar3[1];
                uStack_58 = puVar3[2];
                uStack_50 = puVar3[3];
                uStack_48 = *(undefined4 *)(puVar3 + 4);
                uStack_44 = *(undefined4 *)((longlong)puVar3 + 0x24);
                uStack_40 = *(undefined4 *)(puVar3 + 5);
                uStack_3c = *(undefined4 *)((longlong)puVar3 + 0x2c);
                uStack_38 = *(undefined4 *)(puVar3 + 6);
                uStack_34 = *(undefined4 *)((longlong)puVar3 + 0x34);
                uStack_30 = *(undefined4 *)(puVar3 + 7);
                uStack_2c = *(undefined4 *)((longlong)puVar3 + 0x3c);
                lVar4 = *(longlong *)(lVar4 + 0x68);
                if (lVar4 == 0) {
                  lVar4 = UAndroidPermissionCallbackProxy::GetInstance();
                }
                uStack_40 = *(undefined4 *)(lVar4 + 0x48);
                physx::PxVehicleWheelsSimData::setTireData
                          (*(longlong *)(lVar5 + 0x2a0) + 0x10,uVar6,&uStack_68);
                uVar6 = uVar6 + 1;
              } while (uVar6 < uVar1);
            }
          }
        }
        if (*(float *)(param_1 + 0x260) != 1.0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x278) + 0x80c) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x278) + 0xcd0);
        }
      }
      else {
        if (*(longlong *)(param_1 + 600) != 0) {
          lVar5 = *(longlong *)(param_1 + 0x278);
          FWeakObjectPtr::operator=(lVar5 + 0xd34);
          if (*(longlong *)(lVar5 + 0x2a0) != 0) {
            FUN_1430d40b0(lVar5);
          }
        }
        if (*(float *)(param_1 + 0x260) != 1.0) {
          *(float *)(*(longlong *)(param_1 + 0x278) + 0x80c) = *(float *)(param_1 + 0x260);
        }
      }
    }
    lVar5 = param_1 + 0x178;
    if (*(char *)(param_1 + 0x280) == '\0') {
      lVar5 = param_1 + 0x188;
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar5);
  }
  return;
}



// FUNCTION 1430d1fa0 FUN_1430d1fa0 body=199 status=ok
// SIG undefined FUN_1430d1fa0(void)

void FUN_1430d1fa0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong local_38 [2];
  undefined1 local_28 [32];
  
  cVar1 = FUN_14059ee90();
  if (cVar1 != '\0') {
    if (*(longlong *)(param_1 + 0x230) == 0) {
      FUN_1405ac8f0(param_1 + 0x240,0,4);
    }
    else {
      local_38[0] = 0;
      local_38[1] = 0;
      FUN_1405a2d20(*(undefined8 *)(param_1 + 0x240),local_28,*(longlong *)(param_1 + 0x230),0,0,
                    local_38);
      FUN_140591060(local_28);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
    FUN_1405913a0(param_1 + 0x240,&DAT_1461fcfe0);
    *(undefined4 *)(param_1 + 0x250) = DAT_1461fcff0;
  }
  FUN_14233a670(param_1,param_2);
  return;
}



// FUNCTION 1430d2070 FUN_1430d2070 body=7040 status=ok
// SIG undefined FUN_1430d2070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430d2070(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  longlong lVar13;
  float *pfVar14;
  undefined1 (*pauVar15) [16];
  undefined8 *puVar16;
  int iVar17;
  longlong *plVar18;
  longlong lVar19;
  int *piVar20;
  longlong lVar21;
  float fVar22;
  float *pfVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar31;
  float fVar32;
  undefined1 auVar28 [16];
  float fVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar47;
  float fVar48;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar49;
  float fVar50;
  undefined1 auVar51 [12];
  undefined1 auVar52 [12];
  float fVar55;
  undefined1 auVar53 [16];
  float fVar56;
  float fVar57;
  undefined1 auVar54 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  char local_278;
  float local_270;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined1 local_228 [8];
  float fStack_220;
  float fStack_21c;
  float local_218;
  int *local_210;
  longlong local_208;
  longlong local_200;
  undefined8 local_1f8;
  float fStack_1f0;
  float fStack_1ec;
  undefined4 local_1e8;
  float fStack_1e4;
  undefined4 uStack_1e0;
  float fStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  int *local_1c8;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined1 local_188 [16];
  undefined1 local_178 [8];
  float fStack_170;
  float fStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [8];
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [48];
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  if (*param_2 != 0) {
    local_208 = *(longlong *)(*param_2 + 0xb8);
    local_200 = *(longlong *)(param_1 + 0x150);
    plVar1 = param_2 + 1;
    if (local_200 != 0) {
      piVar20 = *(int **)(param_1 + 0x140);
      local_1c8 = piVar20 + (longlong)*(int *)(param_1 + 0x148) * 0x1e;
      lVar2 = param_2[3];
      if (piVar20 != local_1c8) {
        pfVar23 = (float *)(piVar20 + 0x1d);
        do {
          local_210 = piVar20;
          cVar12 = FBoneReference::IsValidToEvaluate(pfVar23 + -0x1b,lVar2);
          fVar63 = fRam0000000146b4a32c;
          if (cVar12 != '\0') {
            if (*(char *)(pfVar23 + -0x18) == '\0') {
              fVar22 = pfVar23[-0x17];
            }
            else if (pfVar23[-0x19] == -NAN) {
              fVar22 = -NAN;
            }
            else {
              fVar22 = *(float *)(*(longlong *)(lVar2 + 0x80) + (longlong)(int)pfVar23[-0x19] * 4);
            }
            if (*(char *)(pfVar23 + -0xc) == '\0') {
              fVar31 = pfVar23[-0xb];
            }
            else if (pfVar23[-0xd] == -NAN) {
              fVar31 = -NAN;
            }
            else {
              fVar31 = *(float *)(*(longlong *)(lVar2 + 0x80) + (longlong)(int)pfVar23[-0xd] * 4);
            }
            if (*(char *)(pfVar23 + -0x12) == '\0') {
              fVar70 = pfVar23[-0x11];
            }
            else if (pfVar23[-0x13] == -NAN) {
              fVar70 = -NAN;
            }
            else {
              fVar70 = *(float *)(*(longlong *)(lVar2 + 0x80) + (longlong)(int)pfVar23[-0x13] * 4);
            }
            local_278 = '\0';
            fVar71 = (float)((uint)_DAT_146b4a320 & _DAT_146b4a330);
            fVar72 = (float)((uint)fRam0000000146b4a324 & uRam0000000146b4a334);
            fVar73 = (float)((uint)fRam0000000146b4a328 & uRam0000000146b4a338);
            fVar74 = (float)((uint)fRam0000000146b4a32c & uRam0000000146b4a33c);
            fVar58 = 0.0;
            fVar60 = 0.0;
            fVar34 = 0.0;
            local_148 = 0.0;
            fStack_144 = 0.0;
            fStack_140 = 0.0;
            fStack_13c = fRam0000000146b4a32c;
            _local_178 = ZEXT812(0);
            fStack_16c = fRam0000000146b4a32c;
            _local_138 = ZEXT816(0);
            local_168 = 0;
            uStack_160 = 0;
            local_158 = fVar71;
            fStack_154 = fVar72;
            fStack_150 = fVar73;
            fStack_14c = fVar74;
            local_128 = fVar71;
            fStack_124 = fVar72;
            fStack_120 = fVar73;
            fStack_11c = fVar74;
            cVar12 = FBoneReference::IsValidToEvaluate(pfVar23 + -0xf,lVar2);
            fVar38 = 0.0;
            fVar24 = 0.0;
            fVar35 = 0.0;
            if (cVar12 != '\0') {
              lVar21 = param_2[4];
              local_278 = '\x01';
              if (*(char *)(lVar21 + (int)fVar31) == '\0') {
                FUN_14060c680(plVar1,fVar31);
                lVar21 = param_2[4];
              }
              lVar13 = (longlong)(int)fVar31;
              lVar19 = *plVar1;
              pauVar15 = (undefined1 (*) [16])(lVar19 + 0x10 + lVar13 * 0x30);
              local_1d8 = *(undefined8 *)*pauVar15;
              uStack_1d0 = *(undefined8 *)(*pauVar15 + 8);
              _local_228 = *pauVar15;
              pfVar14 = (float *)(lVar19 + lVar13 * 0x30);
              fVar63 = *pfVar14;
              fVar38 = pfVar14[1];
              fVar24 = pfVar14[2];
              fVar35 = pfVar14[3];
              pfVar14 = (float *)(lVar19 + 0x20 + lVar13 * 0x30);
              fVar71 = *pfVar14;
              fVar72 = pfVar14[1];
              fVar73 = pfVar14[2];
              fVar74 = pfVar14[3];
              if (*(char *)(lVar21 + (int)fVar22) == '\0') {
                FUN_14060c680(plVar1,fVar22);
                lVar19 = *plVar1;
              }
              pfVar14 = (float *)(lVar19 + 0x10 + (longlong)(int)fVar22 * 0x30);
              fVar58 = pfVar14[1] - (float)local_228._4_4_;
              fVar60 = *pfVar14 - (float)local_228._0_4_;
              fVar64 = pfVar14[2] - fStack_220;
              fVar34 = fVar58 * fVar58 + fVar60 * fVar60 + fVar64 * fVar64;
              if (1e-08 < fVar34) {
                auVar53 = rsqrtss(ZEXT416((uint)fVar34),ZEXT416((uint)fVar34));
                fVar49 = auVar53._0_4_;
                fVar49 = fVar49 + fVar49 * (0.5 - fVar34 * 0.5 * fVar49 * fVar49);
                fVar49 = fVar49 + fVar49 * (0.5 - fVar34 * 0.5 * fVar49 * fVar49);
                fVar60 = fVar60 * fVar49;
                fVar58 = fVar58 * fVar49;
                fVar64 = fVar64 * fVar49;
              }
              fVar69 = (pfVar14[1] + pfVar23[-1]) - (float)local_228._4_4_;
              fVar65 = (pfVar14[2] + *pfVar23) - fStack_220;
              fVar49 = (*pfVar14 + pfVar23[-2]) - (float)local_228._0_4_;
              fVar34 = fVar49 * fVar49 + fVar69 * fVar69 + fVar65 * fVar65;
              if (1e-08 < fVar34) {
                auVar53 = rsqrtss(ZEXT416((uint)fVar34),ZEXT416((uint)fVar34));
                fVar42 = auVar53._0_4_;
                fVar42 = fVar42 + fVar42 * (0.5 - fVar34 * 0.5 * fVar42 * fVar42);
                fVar42 = fVar42 + fVar42 * (0.5 - fVar34 * 0.5 * fVar42 * fVar42);
                fVar49 = fVar49 * fVar42;
                fVar69 = fVar69 * fVar42;
                fVar65 = fVar65 * fVar42;
              }
              local_270 = fVar49 * fVar64 - fVar65 * fVar60;
              fVar42 = fVar60 * fVar69 - fVar49 * fVar58;
              fVar49 = fVar58 * fVar69 + fVar49 * fVar60 + fVar65 * fVar64;
              fVar58 = fVar65 * fVar58 - fVar64 * fVar69;
              fVar60 = local_270 * local_270 + fVar58 * fVar58 + fVar42 * fVar42;
              fVar34 = local_270;
              local_218 = fVar58;
              if (1e-08 < fVar60) {
                auVar53 = rsqrtss(ZEXT416((uint)fVar60),ZEXT416((uint)fVar60));
                local_218 = auVar53._0_4_;
                local_218 = local_218 + local_218 * (0.5 - fVar60 * 0.5 * local_218 * local_218);
                local_218 = local_218 + local_218 * (0.5 - fVar60 * 0.5 * local_218 * local_218);
                fVar58 = fVar58 * local_218;
                fVar42 = fVar42 * local_218;
                fVar34 = local_270 * local_218;
              }
              if (-1.0 <= fVar49) {
                if (1.0 <= fVar49) {
                  fVar49 = 1.0;
                }
              }
              else {
                fVar49 = -1.0;
              }
              local_228._4_4_ = _guard_xfg_dispatch_icall_nop(fVar49);
              local_228._4_4_ = (float)local_228._4_4_ * 0.5;
              if ((float)local_228._4_4_ < 0.0) {
                fVar60 = (float)local_228._4_4_ * 0.15915494 - 0.5;
              }
              else {
                fVar60 = (float)local_228._4_4_ * 0.15915494 + 0.5;
              }
              local_228._4_4_ = (float)local_228._4_4_ - (float)(int)fVar60 * 6.2831855;
              if ((float)local_228._4_4_ <= 1.5707964) {
                if (-1.5707964 <= (float)local_228._4_4_) {
                  fStack_21c = 1.0;
                }
                else {
                  fStack_21c = -1.0;
                  local_228._4_4_ = -3.1415927 - (float)local_228._4_4_;
                }
              }
              else {
                fStack_21c = -1.0;
                local_228._4_4_ = 3.1415927 - (float)local_228._4_4_;
              }
              local_270 = (float)param_3[1];
              fVar60 = (float)local_228._4_4_ * (float)local_228._4_4_;
              *(int *)(param_3 + 1) = (int)local_270 + 1;
              local_228._4_4_ =
                   (((((2.7525562e-06 - fVar60 * 2.3889859e-08) * fVar60 - 0.00019840874) * fVar60 +
                     0.008333331) * fVar60 - 0.16666667) * fVar60 + 1.0) * (float)local_228._4_4_;
              fStack_220 = fVar42 * (float)local_228._4_4_;
              local_228._0_4_ = (float)local_228._4_4_ * fVar58;
              local_228._4_4_ = (float)local_228._4_4_ * fVar34;
              fStack_21c = (((((2.4760495e-05 - fVar60 * 2.6051615e-07) * fVar60 - 0.0013888378) *
                              fVar60 + 0.041666638) * fVar60 - 0.5) * fVar60 + 1.0) * fStack_21c;
              fVar58 = fVar35 * (float)local_228._0_4_ * _DAT_146b4a360 + fStack_21c * fVar63 +
                       fVar24 * (float)local_228._4_4_ * _DAT_146b4a350 +
                       fVar38 * fStack_220 * _DAT_146b4a340;
              fVar60 = fVar24 * (float)local_228._0_4_ * fRam0000000146b4a364 + fStack_21c * fVar38
                       + fVar35 * (float)local_228._4_4_ * fRam0000000146b4a354 +
                       fVar63 * fStack_220 * fRam0000000146b4a344;
              fVar34 = fVar38 * (float)local_228._0_4_ * fRam0000000146b4a368 + fStack_21c * fVar24
                       + fVar63 * (float)local_228._4_4_ * fRam0000000146b4a358 +
                       fVar35 * fStack_220 * fRam0000000146b4a348;
              fVar63 = fVar63 * (float)local_228._0_4_ * fRam0000000146b4a36c + fStack_21c * fVar35
                       + fVar38 * (float)local_228._4_4_ * fRam0000000146b4a35c +
                       fVar24 * fStack_220 * fRam0000000146b4a34c;
              if (*(int *)((longlong)param_3 + 0xc) < (int)local_270 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
                ResizeGrow(param_3,local_270,local_228._4_4_);
              }
              pfVar14 = (float *)((longlong)(int)local_270 * 0x40 + *param_3);
              *pfVar14 = fVar31;
              pfVar14[4] = fVar58;
              pfVar14[5] = fVar60;
              pfVar14[6] = fVar34;
              pfVar14[7] = fVar63;
              pfVar14[8] = (float)local_1d8;
              pfVar14[9] = local_1d8._4_4_;
              pfVar14[10] = (float)uStack_1d0;
              pfVar14[0xb] = uStack_1d0._4_4_;
              pfVar14[0xc] = fVar71;
              pfVar14[0xd] = fVar72;
              pfVar14[0xe] = fVar73;
              pfVar14[0xf] = fVar74;
              fVar38 = (float)local_1d8;
              fVar24 = local_1d8._4_4_;
              fVar35 = (float)uStack_1d0;
            }
            fVar31 = -1.0;
            cVar12 = FBoneReference::IsValidToEvaluate(pfVar23 + -0x15,lVar2);
            if (cVar12 == '\0') {
              pauVar15 = (undefined1 (*) [16])FUN_140611730(plVar1,fVar22);
              lVar21 = local_208 + 0x210;
              local_288 = 1;
              _local_178 = *pauVar15;
              local_168 = *(undefined8 *)pauVar15[1];
              uStack_160 = *(undefined8 *)(pauVar15[1] + 8);
              local_158 = (float)*(undefined8 *)pauVar15[2];
              fStack_154 = (float)((ulonglong)*(undefined8 *)pauVar15[2] >> 0x20);
              fStack_150 = (float)*(undefined8 *)(pauVar15[2] + 8);
              fStack_14c = (float)((ulonglong)*(undefined8 *)(pauVar15[2] + 8) >> 0x20);
              FUN_14224c850(lVar21,plVar1,local_178,fVar22);
              pfVar14 = (float *)FRotator::Quaternion
                                           ((longlong)*local_210 * 0x20 +
                                            *(longlong *)(local_200 + 0x6c8) + 8,local_188);
              local_288 = 1;
              fVar31 = *pfVar14;
              fVar64 = pfVar14[1];
              fVar49 = pfVar14[2];
              fVar65 = pfVar14[3];
              fVar37 = (float)local_178._4_4_ * fVar31;
              fVar39 = (float)local_178._0_4_ * fVar31;
              fVar69 = (float)local_178._0_4_ * fVar64;
              fVar42 = (float)local_178._4_4_ * fVar64;
              fVar57 = (float)local_178._0_4_ * fVar49;
              fVar33 = fStack_170 * fVar49;
              local_178._0_4_ =
                   fStack_16c * fVar31 * _DAT_146b4a360 + fVar65 * (float)local_178._0_4_ +
                   fStack_170 * fVar64 * _DAT_146b4a350 +
                   (float)local_178._4_4_ * fVar49 * _DAT_146b4a340;
              local_178._4_4_ =
                   fStack_170 * fVar31 * fRam0000000146b4a364 + fVar65 * (float)local_178._4_4_ +
                   fStack_16c * fVar64 * fRam0000000146b4a354 + fVar57 * fRam0000000146b4a344;
              fStack_170 = fVar37 * fRam0000000146b4a368 + fVar65 * fStack_170 +
                           fVar69 * fRam0000000146b4a358 +
                           fStack_16c * fVar49 * fRam0000000146b4a348;
              fStack_16c = fVar39 * fRam0000000146b4a36c + fVar65 * fStack_16c +
                           fVar42 * fRam0000000146b4a35c + fVar33 * fRam0000000146b4a34c;
              if (local_278 == '\0') {
                local_168 = CONCAT44(local_168._4_4_ + pfVar23[-1],(float)local_168 + pfVar23[-2]);
                uStack_160 = CONCAT44(uStack_160._4_4_ + 0.0,(float)uStack_160 + *pfVar23);
                FUN_14224c080(lVar21,plVar1,local_178,fVar22);
              }
              else {
                FUN_14224c080(lVar21,plVar1,&local_148,fVar70);
                plVar18 = plVar1;
                pfVar14 = (float *)FCSPose<FCompactPose>::GetLocalSpaceTransform
                                             (plVar1,local_118,fVar22);
                fVar42 = fRam0000000146b4a388;
                fVar69 = fRam0000000146b4a384;
                fVar65 = _DAT_146b4a380;
                fVar49 = fRam0000000146b4a328;
                fVar64 = fRam0000000146b4a324;
                fVar70 = _DAT_146b4a320;
                _local_228 = *(undefined1 (*) [16])(pfVar14 + 8);
                fVar31 = local_228._0_4_;
                fVar57 = local_228._4_4_;
                fVar33 = local_228._8_4_;
                auVar53._4_4_ = fVar72;
                auVar53._0_4_ = fVar71;
                auVar53._8_4_ = fVar73;
                auVar53._12_4_ = fVar74;
                auVar53 = minps(_local_228,auVar53);
                auVar25._4_4_ = -(uint)(auVar53._4_4_ < fRam0000000146b4a384);
                auVar25._0_4_ = -(uint)(auVar53._0_4_ < _DAT_146b4a380);
                auVar25._8_4_ = -(uint)(auVar53._8_4_ < fRam0000000146b4a388);
                auVar25._12_4_ = -(uint)(auVar53._12_4_ < fRam0000000146b4a38c);
                iVar17 = movmskps((int)plVar18,auVar25);
                if (iVar17 == 0) {
                  fVar71 = pfVar14[4] * fVar71;
                  fVar72 = pfVar14[5] * fVar72;
                  fVar73 = pfVar14[6] * fVar73;
                  fVar31 = fVar73 * fVar60 - fVar72 * fVar34;
                  fVar70 = fVar71 * fVar34 - fVar73 * fVar58;
                  fVar74 = fVar72 * fVar58 - fVar71 * fVar60;
                  fVar31 = fVar31 + fVar31;
                  fVar70 = fVar70 + fVar70;
                  fVar74 = fVar74 + fVar74;
                  auVar52._0_4_ =
                       (fVar74 * fVar60 - fVar70 * fVar34) + fVar63 * fVar31 + fVar71 + fVar38;
                  auVar52._4_4_ =
                       (fVar31 * fVar34 - fVar74 * fVar58) + fVar63 * fVar70 + fVar72 + fVar24;
                  auVar52._8_4_ =
                       (fVar70 * fVar58 - fVar31 * fVar60) + fVar63 * fVar74 + fVar73 + fVar35;
                }
                else {
                  fVar41 = fVar60 + fVar60;
                  fVar43 = fVar34 + fVar34;
                  fVar44 = (fVar58 + fVar58) * fVar58;
                  fVar32 = (fVar58 + fVar58) * fVar63;
                  fVar37 = *pfVar14;
                  fVar39 = pfVar14[1];
                  fVar36 = pfVar14[2];
                  fVar40 = pfVar14[3];
                  fVar66 = (fVar43 * fVar63 + fVar41 * fVar58) * fVar71;
                  fVar67 = (fVar32 + fVar43 * fVar60) * fVar72;
                  fVar68 = (fVar41 * fVar63 + fVar43 * fVar58) * fVar73;
                  fVar47 = fVar72 * (fVar41 * fVar58 - fVar43 * fVar63);
                  fVar48 = fVar73 * (fVar43 * fVar60 - fVar32);
                  fVar50 = fVar71 * (fVar43 * fVar58 - fVar41 * fVar63);
                  fVar58 = (float)((uint)((_DAT_146b4a320 - (fVar43 * fVar34 + fVar41 * fVar60)) *
                                         fVar71) & _DAT_146b4a330);
                  fVar32 = (float)((uint)((fRam0000000146b4a324 - (fVar43 * fVar34 + fVar44)) *
                                         fVar72) & uRam0000000146b4a334);
                  fVar41 = (float)((uint)((fRam0000000146b4a328 - (fVar41 * fVar60 + fVar44)) *
                                         fVar73) & uRam0000000146b4a338);
                  fVar43 = (float)((uint)((fRam0000000146b4a32c - (fVar44 + fVar44)) * fVar74) &
                                  uRam0000000146b4a33c);
                  fVar63 = fVar39 + fVar39;
                  fVar34 = fVar36 + fVar36;
                  fVar44 = fVar37 * (fVar37 + fVar37);
                  fVar74 = fVar40 * (fVar37 + fVar37);
                  fVar59 = (fVar40 * fVar34 + fVar37 * fVar63) * fVar31;
                  fVar61 = (fVar74 + fVar39 * fVar34) * fVar57;
                  fVar62 = (fVar40 * fVar63 + fVar37 * fVar34) * fVar33;
                  fVar55 = fVar57 * (fVar37 * fVar63 - fVar40 * fVar34);
                  fVar56 = fVar33 * (fVar39 * fVar34 - fVar74);
                  fVar37 = fVar31 * (fVar37 * fVar34 - fVar40 * fVar63);
                  fVar74 = (float)((uint)((_DAT_146b4a320 - (fVar36 * fVar34 + fVar39 * fVar63)) *
                                         fVar31) & _DAT_146b4a330);
                  fVar60 = (float)((uint)((fRam0000000146b4a324 - (fVar36 * fVar34 + fVar44)) *
                                         fVar57) & uRam0000000146b4a334);
                  fVar57 = (float)((uint)((fRam0000000146b4a328 - (fVar39 * fVar63 + fVar44)) *
                                         fVar33) & uRam0000000146b4a338);
                  fVar33 = (float)((uint)((fRam0000000146b4a32c - (fVar44 + fVar44)) * fStack_21c) &
                                  uRam0000000146b4a33c);
                  fVar63 = pfVar14[4];
                  fVar31 = pfVar14[5];
                  fVar34 = pfVar14[6];
                  local_268 = fVar59 * fVar47 + fVar74 * fVar58 + fVar37 * fVar68 + fVar33 * fVar38;
                  fStack_264 = fVar59 * fVar32 + fVar74 * fVar66 + fVar37 * fVar48 + fVar33 * fVar24
                  ;
                  fStack_260 = fVar59 * fVar67 + fVar74 * fVar50 + fVar37 * fVar41 + fVar33 * fVar35
                  ;
                  fStack_25c = fVar59 * fVar43 + fVar74 * fVar43 + fVar37 * fVar43 +
                               fVar33 * fRam0000000146b4a32c;
                  local_258 = fVar60 * fVar47 + fVar55 * fVar58 + fVar61 * fVar68 + fVar33 * fVar38;
                  fStack_254 = fVar60 * fVar32 + fVar55 * fVar66 + fVar61 * fVar48 + fVar33 * fVar24
                  ;
                  fStack_250 = fVar60 * fVar67 + fVar55 * fVar50 + fVar61 * fVar41 + fVar33 * fVar35
                  ;
                  fStack_24c = fVar60 * fVar43 + fVar55 * fVar43 + fVar61 * fVar43 +
                               fVar33 * fRam0000000146b4a32c;
                  local_248 = fVar56 * fVar47 + fVar62 * fVar58 + fVar57 * fVar68 + fVar33 * fVar38;
                  fStack_244 = fVar56 * fVar32 + fVar62 * fVar66 + fVar57 * fVar48 + fVar33 * fVar24
                  ;
                  fStack_240 = fVar56 * fVar67 + fVar62 * fVar50 + fVar57 * fVar41 + fVar33 * fVar35
                  ;
                  fStack_23c = fVar56 * fVar43 + fVar62 * fVar43 + fVar57 * fVar43 +
                               fVar33 * fRam0000000146b4a32c;
                  local_238 = fVar31 * fVar47 + fVar63 * fVar58 + fVar34 * fVar68 +
                              fRam0000000146b4a32c * fVar38;
                  fStack_234 = fVar31 * fVar32 + fVar63 * fVar66 + fVar34 * fVar48 +
                               fRam0000000146b4a32c * fVar24;
                  fStack_230 = fVar31 * fVar67 + fVar63 * fVar50 + fVar34 * fVar41 +
                               fRam0000000146b4a32c * fVar35;
                  fStack_22c = fVar31 * fVar43 + fVar63 * fVar43 + fVar34 * fVar43 +
                               fRam0000000146b4a32c * fRam0000000146b4a32c;
                  FMatrix::RemoveScaling(&local_268);
                  fVar63 = (float)(-(uint)(fVar65 <= (float)local_228._0_4_ * fVar71) &
                                   (_DAT_146b4a370 ^ (uint)fVar70) ^ _DAT_146b4a370);
                  fVar31 = (float)(-(uint)(fVar69 <= (float)local_228._4_4_ * fVar72) &
                                   (uRam0000000146b4a374 ^ (uint)fVar64) ^ uRam0000000146b4a374);
                  fVar70 = (float)(-(uint)(fVar42 <= fStack_220 * fVar73) &
                                   (uRam0000000146b4a378 ^ (uint)fVar49) ^ uRam0000000146b4a378);
                  local_268 = local_268 * fVar63;
                  fStack_264 = fStack_264 * fVar63;
                  fStack_260 = fStack_260 * fVar63;
                  fStack_254 = fStack_254 * fVar31;
                  fStack_250 = fStack_250 * fVar31;
                  local_258 = local_258 * fVar31;
                  fStack_244 = fStack_244 * fVar70;
                  fStack_240 = fStack_240 * fVar70;
                  local_248 = local_248 * fVar70;
                  FQuat::FQuat(&local_198,&local_268);
                  local_270 = 1e-08;
                  auVar30._0_4_ = local_198 * local_198 + fStack_190 * fStack_190;
                  auVar30._4_4_ = fStack_194 * fStack_194 + fStack_18c * fStack_18c;
                  auVar30._8_4_ = fStack_190 * fStack_190 + local_198 * local_198;
                  auVar30._12_4_ = fStack_18c * fStack_18c + fStack_194 * fStack_194;
                  auVar46._0_4_ = auVar30._4_4_ + auVar30._0_4_;
                  auVar46._4_4_ = auVar30._8_4_ + auVar30._4_4_;
                  auVar46._8_4_ = auVar30._12_4_ + auVar30._8_4_;
                  auVar46._12_4_ = auVar30._0_4_ + auVar30._12_4_;
                  auVar53 = rsqrtps(auVar30,auVar46);
                  fVar63 = auVar53._0_4_;
                  fVar31 = auVar53._4_4_;
                  fVar70 = auVar53._8_4_;
                  fVar34 = auVar53._12_4_;
                  fVar63 = (_DAT_146b4a2e0 - fVar63 * fVar63 * auVar46._0_4_ * _DAT_146b4a2e0) *
                           fVar63 + fVar63;
                  fVar31 = (fRam0000000146b4a2e4 -
                           fVar31 * fVar31 * auVar46._4_4_ * fRam0000000146b4a2e4) * fVar31 + fVar31
                  ;
                  fVar70 = (fRam0000000146b4a2e8 -
                           fVar70 * fVar70 * auVar46._8_4_ * fRam0000000146b4a2e8) * fVar70 + fVar70
                  ;
                  fVar34 = (fRam0000000146b4a2ec -
                           fVar34 * fVar34 * auVar46._12_4_ * fRam0000000146b4a2ec) * fVar34 +
                           fVar34;
                  local_198 = (float)(((uint)(((_DAT_146b4a2e0 -
                                               fVar63 * fVar63 * auVar46._0_4_ * _DAT_146b4a2e0) *
                                               fVar63 + fVar63) * local_198) ^ _DAT_146b4a2d0) &
                                      -(uint)(1e-08 <= auVar46._0_4_) ^ _DAT_146b4a2d0);
                  fStack_194 = (float)(((uint)(((fRam0000000146b4a2e4 -
                                                fVar31 * fVar31 *
                                                auVar46._4_4_ * fRam0000000146b4a2e4) * fVar31 +
                                               fVar31) * fStack_194) ^ uRam0000000146b4a2d4) &
                                       -(uint)(1e-08 <= auVar46._4_4_) ^ uRam0000000146b4a2d4);
                  fStack_190 = (float)(((uint)(((fRam0000000146b4a2e8 -
                                                fVar70 * fVar70 *
                                                auVar46._8_4_ * fRam0000000146b4a2e8) * fVar70 +
                                               fVar70) * fStack_190) ^ uRam0000000146b4a2d8) &
                                       -(uint)(1e-08 <= auVar46._8_4_) ^ uRam0000000146b4a2d8);
                  fStack_18c = (float)(((uint)(((fRam0000000146b4a2ec -
                                                fVar34 * fVar34 *
                                                auVar46._12_4_ * fRam0000000146b4a2ec) * fVar34 +
                                               fVar34) * fStack_18c) ^ uRam0000000146b4a2dc) &
                                       -(uint)(1e-08 <= auVar46._12_4_) ^ uRam0000000146b4a2dc);
                  auVar52._4_4_ = fStack_234;
                  auVar52._0_4_ = local_238;
                  auVar52._8_4_ = fStack_230;
                }
                fStack_12c = 0.0;
                _local_138 = auVar52;
              }
            }
            else {
              pauVar15 = (undefined1 (*) [16])
                         FCSPose<FCompactPose>::GetLocalSpaceTransform(plVar1,local_118,fVar22);
              _local_178 = *pauVar15;
              local_168 = *(undefined8 *)pauVar15[1];
              uStack_160 = *(undefined8 *)(pauVar15[1] + 8);
              local_158 = (float)*(undefined8 *)pauVar15[2];
              fStack_154 = (float)((ulonglong)*(undefined8 *)pauVar15[2] >> 0x20);
              fStack_150 = (float)*(undefined8 *)(pauVar15[2] + 8);
              fStack_14c = (float)((ulonglong)*(undefined8 *)(pauVar15[2] + 8) >> 0x20);
              if (*(char *)((longlong)(int)fVar70 + param_2[4]) == '\0') {
                FUN_14060c680(plVar1,fVar70);
              }
              local_288 = 1;
              lVar21 = local_208 + 0x210;
              puVar16 = (undefined8 *)((longlong)(int)fVar70 * 0x30 + *plVar1);
              local_148 = (float)*puVar16;
              fStack_144 = (float)((ulonglong)*puVar16 >> 0x20);
              fStack_140 = (float)puVar16[1];
              fStack_13c = (float)((ulonglong)puVar16[1] >> 0x20);
              _local_138 = *(undefined1 (*) [16])(puVar16 + 2);
              local_128 = (float)puVar16[4];
              fStack_124 = (float)((ulonglong)puVar16[4] >> 0x20);
              fStack_120 = (float)puVar16[5];
              fStack_11c = (float)((ulonglong)puVar16[5] >> 0x20);
              FUN_14224c850(lVar21,plVar1,&local_148,fVar70);
              fStack_1f0 = *(float *)((longlong)*local_210 * 0x20 + 0xc +
                                     *(longlong *)(local_200 + 0x6c8)) * 0.008726646;
              fVar64 = *(float *)((longlong)*local_210 * 0x20 + 8 + *(longlong *)(local_200 + 0x6c8)
                                 );
              if (fStack_1f0 < 0.0) {
                fVar49 = fStack_1f0 * 0.15915494 - 0.5;
              }
              else {
                fVar49 = fStack_1f0 * 0.15915494 + 0.5;
              }
              fStack_1f0 = fStack_1f0 - (float)(int)fVar49 * 6.2831855;
              if (fStack_1f0 <= 1.5707964) {
                if (-1.5707964 <= fStack_1f0) {
                  fVar31 = 1.0;
                }
                else {
                  fStack_1f0 = -3.1415927 - fStack_1f0;
                }
              }
              else {
                fStack_1f0 = 3.1415927 - fStack_1f0;
              }
              fVar49 = fStack_1f0 * fStack_1f0;
              local_288 = 1;
              fStack_1f0 = (((((2.7525562e-06 - fVar49 * 2.3889859e-08) * fVar49 - 0.00019840874) *
                              fVar49 + 0.008333331) * fVar49 - 0.16666667) * fVar49 + 1.0) *
                           fStack_1f0;
              fStack_1ec = (((((2.4760495e-05 - fVar49 * 2.6051615e-07) * fVar49 - 0.0013888378) *
                              fVar49 + 0.041666638) * fVar49 - 0.5) * fVar49 + 1.0) * fVar31;
              fVar42 = fStack_144 * 0.0;
              fVar57 = local_148 * 0.0;
              local_1f8 = 0;
              fVar31 = local_148 * 0.0;
              fVar49 = fStack_144 * 0.0;
              fVar65 = local_148 * fStack_1f0;
              fVar69 = fStack_140 * fStack_1f0;
              local_148 = fStack_13c * 0.0 * _DAT_146b4a360 + fStack_1ec * local_148 +
                          fStack_140 * 0.0 * _DAT_146b4a350 +
                          fStack_144 * fStack_1f0 * _DAT_146b4a340;
              fStack_144 = fStack_140 * 0.0 * fRam0000000146b4a364 + fStack_1ec * fStack_144 +
                           fStack_13c * 0.0 * fRam0000000146b4a354 + fVar65 * fRam0000000146b4a344;
              fStack_140 = fVar42 * fRam0000000146b4a368 + fStack_1ec * fStack_140 +
                           fVar31 * fRam0000000146b4a358 +
                           fStack_13c * fStack_1f0 * fRam0000000146b4a348;
              fStack_13c = fVar57 * fRam0000000146b4a36c + fStack_1ec * fStack_13c +
                           fVar49 * fRam0000000146b4a35c + fVar69 * fRam0000000146b4a34c;
              if (local_278 == '\0') {
                local_138._4_4_ = (float)local_138._4_4_ + pfVar23[-1];
                local_138._0_4_ = (float)local_138._0_4_ + pfVar23[-2];
                fStack_130 = fStack_130 + *pfVar23;
                fStack_12c = fStack_12c + 0.0;
                FUN_14224c080(lVar21,plVar1,&local_148,fVar70);
                local_228._4_4_ = fRam0000000146b4a384;
                local_228._0_4_ = _DAT_146b4a380;
                fStack_220 = fRam0000000146b4a388;
                fStack_21c = fRam0000000146b4a38c;
                fVar31 = _DAT_146b4a2e0;
                fVar49 = fRam0000000146b4a2e4;
                fVar65 = fRam0000000146b4a2e8;
                fVar69 = fRam0000000146b4a2ec;
                fVar63 = (float)local_138._0_4_;
                fVar34 = (float)local_138._4_4_;
                fVar71 = fStack_130;
                fVar72 = fStack_12c;
              }
              else {
                FUN_14224c080(lVar21,plVar1,&local_148,fVar70);
                plVar18 = plVar1;
                pfVar14 = (float *)FCSPose<FCompactPose>::GetLocalSpaceTransform
                                             (plVar1,local_118,fVar70);
                fVar33 = fRam0000000146b4a328;
                fVar57 = fRam0000000146b4a324;
                fVar42 = _DAT_146b4a320;
                fVar69 = fRam0000000146b4a2ec;
                fVar65 = fRam0000000146b4a2e8;
                fVar49 = fRam0000000146b4a2e4;
                fVar31 = _DAT_146b4a2e0;
                local_228._4_4_ = fRam0000000146b4a384;
                local_228._0_4_ = _DAT_146b4a380;
                fStack_220 = fRam0000000146b4a388;
                fStack_21c = fRam0000000146b4a38c;
                auVar53 = *(undefined1 (*) [16])(pfVar14 + 8);
                auVar3._4_4_ = fVar72;
                auVar3._0_4_ = fVar71;
                auVar3._8_4_ = fVar73;
                auVar3._12_4_ = fVar74;
                auVar25 = minps(auVar53,auVar3);
                auVar26._4_4_ = -(uint)(auVar25._4_4_ < fRam0000000146b4a384);
                auVar26._0_4_ = -(uint)(auVar25._0_4_ < _DAT_146b4a380);
                auVar26._8_4_ = -(uint)(auVar25._8_4_ < fRam0000000146b4a388);
                auVar26._12_4_ = -(uint)(auVar25._12_4_ < fRam0000000146b4a38c);
                iVar17 = movmskps((int)plVar18,auVar26);
                if (iVar17 == 0) {
                  fVar71 = pfVar14[4] * fVar71;
                  fVar72 = pfVar14[5] * fVar72;
                  fVar73 = pfVar14[6] * fVar73;
                  fVar74 = fVar73 * fVar60 - fVar72 * fVar34;
                  fVar42 = fVar71 * fVar34 - fVar73 * fVar58;
                  fVar57 = fVar72 * fVar58 - fVar71 * fVar60;
                  fVar74 = fVar74 + fVar74;
                  fVar42 = fVar42 + fVar42;
                  fVar57 = fVar57 + fVar57;
                  auVar51._0_4_ =
                       (fVar57 * fVar60 - fVar42 * fVar34) + fVar63 * fVar74 + fVar71 + fVar38;
                  auVar51._4_4_ =
                       (fVar74 * fVar34 - fVar57 * fVar58) + fVar63 * fVar42 + fVar72 + fVar24;
                  auVar51._8_4_ =
                       (fVar42 * fVar58 - fVar74 * fVar60) + fVar63 * fVar57 + fVar73 + fVar35;
                }
                else {
                  fVar36 = fVar60 + fVar60;
                  fVar39 = fVar34 + fVar34;
                  fVar40 = (fVar58 + fVar58) * fVar58;
                  fVar37 = (fVar58 + fVar58) * fVar63;
                  fVar66 = (fVar39 * fVar63 + fVar36 * fVar58) * fVar71;
                  fVar67 = (fVar37 + fVar39 * fVar60) * fVar72;
                  fVar68 = (fVar36 * fVar63 + fVar39 * fVar58) * fVar73;
                  fVar43 = fVar72 * (fVar36 * fVar58 - fVar39 * fVar63);
                  fVar47 = fVar73 * (fVar39 * fVar60 - fVar37);
                  fVar48 = fVar71 * (fVar39 * fVar58 - fVar36 * fVar63);
                  fVar37 = (float)((uint)((_DAT_146b4a320 - (fVar39 * fVar34 + fVar36 * fVar60)) *
                                         fVar71) & _DAT_146b4a330);
                  fVar39 = (float)((uint)((fRam0000000146b4a324 - (fVar39 * fVar34 + fVar40)) *
                                         fVar72) & uRam0000000146b4a334);
                  fVar36 = (float)((uint)((fRam0000000146b4a328 - (fVar36 * fVar60 + fVar40)) *
                                         fVar73) & uRam0000000146b4a338);
                  fVar32 = (float)((uint)((fRam0000000146b4a32c - (fVar40 + fVar40)) * fVar74) &
                                  uRam0000000146b4a33c);
                  fVar63 = *pfVar14;
                  fVar34 = pfVar14[1];
                  fVar74 = pfVar14[2];
                  fVar58 = pfVar14[3];
                  fVar40 = fVar34 + fVar34;
                  fVar41 = fVar74 + fVar74;
                  fVar44 = (fVar63 + fVar63) * fVar63;
                  fVar60 = (fVar63 + fVar63) * fVar58;
                  fVar59 = (fVar41 * fVar58 + fVar40 * fVar63) * auVar53._0_4_;
                  fVar61 = (fVar60 + fVar41 * fVar34) * auVar53._4_4_;
                  fVar62 = (fVar40 * fVar58 + fVar41 * fVar63) * auVar53._8_4_;
                  fVar50 = auVar53._4_4_ * (fVar40 * fVar63 - fVar41 * fVar58);
                  fVar55 = auVar53._8_4_ * (fVar41 * fVar34 - fVar60);
                  fVar56 = auVar53._0_4_ * (fVar41 * fVar63 - fVar40 * fVar58);
                  fVar58 = (float)((uint)((_DAT_146b4a320 - (fVar41 * fVar74 + fVar40 * fVar34)) *
                                         pfVar14[8]) & _DAT_146b4a330);
                  fVar60 = (float)((uint)((fRam0000000146b4a324 - (fVar41 * fVar74 + fVar44)) *
                                         pfVar14[9]) & uRam0000000146b4a334);
                  fVar40 = (float)((uint)((fRam0000000146b4a328 - (fVar40 * fVar34 + fVar44)) *
                                         pfVar14[10]) & uRam0000000146b4a338);
                  fVar41 = (float)((uint)((fRam0000000146b4a32c - (fVar44 + fVar44)) * pfVar14[0xb])
                                  & uRam0000000146b4a33c);
                  fVar63 = pfVar14[4];
                  fVar34 = pfVar14[5];
                  fVar74 = pfVar14[6];
                  local_268 = fVar59 * fVar43 + fVar58 * fVar37 + fVar56 * fVar68 + fVar41 * fVar38;
                  fStack_264 = fVar59 * fVar39 + fVar58 * fVar66 + fVar56 * fVar47 + fVar41 * fVar24
                  ;
                  fStack_260 = fVar59 * fVar67 + fVar58 * fVar48 + fVar56 * fVar36 + fVar41 * fVar35
                  ;
                  fStack_25c = fVar59 * fVar32 + fVar58 * fVar32 + fVar56 * fVar32 +
                               fVar41 * fRam0000000146b4a32c;
                  local_258 = fVar60 * fVar43 + fVar50 * fVar37 + fVar61 * fVar68 + fVar41 * fVar38;
                  fStack_254 = fVar60 * fVar39 + fVar50 * fVar66 + fVar61 * fVar47 + fVar41 * fVar24
                  ;
                  fStack_250 = fVar60 * fVar67 + fVar50 * fVar48 + fVar61 * fVar36 + fVar41 * fVar35
                  ;
                  fStack_24c = fVar60 * fVar32 + fVar50 * fVar32 + fVar61 * fVar32 +
                               fVar41 * fRam0000000146b4a32c;
                  local_248 = fVar55 * fVar43 + fVar62 * fVar37 + fVar40 * fVar68 + fVar41 * fVar38;
                  fStack_244 = fVar55 * fVar39 + fVar62 * fVar66 + fVar40 * fVar47 + fVar41 * fVar24
                  ;
                  fStack_240 = fVar55 * fVar67 + fVar62 * fVar48 + fVar40 * fVar36 + fVar41 * fVar35
                  ;
                  fStack_23c = fVar55 * fVar32 + fVar62 * fVar32 + fVar40 * fVar32 +
                               fVar41 * fRam0000000146b4a32c;
                  local_238 = fVar34 * fVar43 + fVar63 * fVar37 + fVar74 * fVar68 +
                              fRam0000000146b4a32c * fVar38;
                  fStack_234 = fVar34 * fVar39 + fVar63 * fVar66 + fVar74 * fVar47 +
                               fRam0000000146b4a32c * fVar24;
                  fStack_230 = fVar34 * fVar67 + fVar63 * fVar48 + fVar74 * fVar36 +
                               fRam0000000146b4a32c * fVar35;
                  fStack_22c = fVar34 * fVar32 + fVar63 * fVar32 + fVar74 * fVar32 +
                               fRam0000000146b4a32c * fRam0000000146b4a32c;
                  FMatrix::RemoveScaling(&local_268);
                  fVar63 = (float)(-(uint)((float)local_228._0_4_ <= fVar71 * pfVar14[8]) &
                                   (_DAT_146b4a370 ^ (uint)fVar42) ^ _DAT_146b4a370);
                  fVar34 = (float)(-(uint)((float)local_228._4_4_ <= fVar72 * pfVar14[9]) &
                                   (uRam0000000146b4a374 ^ (uint)fVar57) ^ uRam0000000146b4a374);
                  fVar71 = (float)(-(uint)(fStack_220 <= fVar73 * pfVar14[10]) &
                                   (uRam0000000146b4a378 ^ (uint)fVar33) ^ uRam0000000146b4a378);
                  local_268 = local_268 * fVar63;
                  fStack_264 = fStack_264 * fVar63;
                  fStack_260 = fStack_260 * fVar63;
                  fStack_254 = fStack_254 * fVar34;
                  fStack_250 = fStack_250 * fVar34;
                  local_258 = local_258 * fVar34;
                  fStack_244 = fStack_244 * fVar71;
                  fStack_240 = fStack_240 * fVar71;
                  local_248 = local_248 * fVar71;
                  FQuat::FQuat(&local_1b8,&local_268);
                  local_270 = 1e-08;
                  local_228._4_4_ = fRam0000000146b4a384;
                  local_228._0_4_ = _DAT_146b4a380;
                  fStack_220 = fRam0000000146b4a388;
                  fStack_21c = fRam0000000146b4a38c;
                  auVar28._0_4_ = local_1b8 * local_1b8 + fStack_1b0 * fStack_1b0;
                  auVar28._4_4_ = fStack_1b4 * fStack_1b4 + fStack_1ac * fStack_1ac;
                  auVar28._8_4_ = fStack_1b0 * fStack_1b0 + local_1b8 * local_1b8;
                  auVar28._12_4_ = fStack_1ac * fStack_1ac + fStack_1b4 * fStack_1b4;
                  auVar54._0_4_ = auVar28._4_4_ + auVar28._0_4_;
                  auVar54._4_4_ = auVar28._8_4_ + auVar28._4_4_;
                  auVar54._8_4_ = auVar28._12_4_ + auVar28._8_4_;
                  auVar54._12_4_ = auVar28._0_4_ + auVar28._12_4_;
                  auVar53 = rsqrtps(auVar28,auVar54);
                  fVar63 = auVar53._0_4_;
                  fVar34 = auVar53._4_4_;
                  fVar71 = auVar53._8_4_;
                  fVar72 = auVar53._12_4_;
                  fVar63 = (fVar31 - fVar63 * fVar63 * auVar54._0_4_ * fVar31) * fVar63 + fVar63;
                  fVar34 = (fVar49 - fVar34 * fVar34 * auVar54._4_4_ * fVar49) * fVar34 + fVar34;
                  fVar71 = (fVar65 - fVar71 * fVar71 * auVar54._8_4_ * fVar65) * fVar71 + fVar71;
                  fVar72 = (fVar69 - fVar72 * fVar72 * auVar54._12_4_ * fVar69) * fVar72 + fVar72;
                  auVar51._4_4_ = fStack_234;
                  auVar51._0_4_ = local_238;
                  auVar51._8_4_ = fStack_230;
                  local_1b8 = (float)(((uint)(((fVar31 - fVar63 * fVar63 * auVar54._0_4_ * fVar31) *
                                               fVar63 + fVar63) * local_1b8) ^ _DAT_146b4a2d0) &
                                      -(uint)(1e-08 <= auVar54._0_4_) ^ _DAT_146b4a2d0);
                  fStack_1b4 = (float)(((uint)(((fVar49 - fVar34 * fVar34 * auVar54._4_4_ * fVar49)
                                                * fVar34 + fVar34) * fStack_1b4) ^
                                       uRam0000000146b4a2d4) & -(uint)(1e-08 <= auVar54._4_4_) ^
                                      uRam0000000146b4a2d4);
                  fStack_1b0 = (float)(((uint)(((fVar65 - fVar71 * fVar71 * auVar54._8_4_ * fVar65)
                                                * fVar71 + fVar71) * fStack_1b0) ^
                                       uRam0000000146b4a2d8) & -(uint)(1e-08 <= auVar54._8_4_) ^
                                      uRam0000000146b4a2d8);
                  fStack_1ac = (float)(((uint)(((fVar69 - fVar72 * fVar72 * auVar54._12_4_ * fVar69)
                                                * fVar72 + fVar72) * fStack_1ac) ^
                                       uRam0000000146b4a2dc) & -(uint)(1e-08 <= auVar54._12_4_) ^
                                      uRam0000000146b4a2dc);
                }
                fStack_12c = 0.0;
                _local_138 = auVar51;
                fVar63 = auVar51._0_4_;
                fVar34 = auVar51._4_4_;
                fVar71 = auVar51._8_4_;
                fVar72 = 0.0;
              }
              fVar38 = fRam0000000146b4a328;
              fVar74 = fRam0000000146b4a324;
              fVar73 = _DAT_146b4a320;
              fVar64 = fVar64 * -0.008726646;
              if (fVar64 < 0.0) {
                fVar24 = fVar64 * 0.15915494 - 0.5;
              }
              else {
                fVar24 = fVar64 * 0.15915494 + 0.5;
              }
              fVar64 = fVar64 - (float)(int)fVar24 * 6.2831855;
              if (fVar64 <= 1.5707964) {
                if (fVar64 < -1.5707964) {
                  fVar35 = -3.1415927;
                  goto LAB_1430d2f11;
                }
                fStack_1dc = 1.0;
              }
              else {
                fVar35 = 3.1415927;
LAB_1430d2f11:
                fStack_1dc = -1.0;
                fVar64 = fVar35 - fVar64;
              }
              auVar7._4_4_ = fStack_124;
              auVar7._0_4_ = local_128;
              auVar7._8_4_ = fStack_120;
              auVar7._12_4_ = fStack_11c;
              fVar35 = fVar64 * fVar64;
              fStack_1e4 = (((((2.7525562e-06 - fVar35 * 2.3889859e-08) * fVar35 - 0.00019840874) *
                              fVar35 + 0.008333331) * fVar35 - 0.16666667) * fVar35 + 1.0) * fVar64;
              auVar5._4_4_ = fStack_154;
              auVar5._0_4_ = local_158;
              auVar5._8_4_ = fStack_150;
              auVar5._12_4_ = fStack_14c;
              fStack_1dc = (((((2.4760495e-05 - fVar35 * 2.6051615e-07) * fVar35 - 0.0013888378) *
                              fVar35 + 0.041666638) * fVar35 - 0.5) * fVar35 + 1.0) * fStack_1dc;
              local_1e8 = 0;
              uStack_1e0 = 0;
              auVar53 = minps(auVar5,auVar7);
              auVar27._4_4_ = -(uint)(auVar53._4_4_ < fRam0000000146b4a384);
              auVar27._0_4_ = -(uint)(auVar53._0_4_ < _DAT_146b4a380);
              auVar27._8_4_ = -(uint)(auVar53._8_4_ < fRam0000000146b4a388);
              auVar27._12_4_ = -(uint)(auVar53._12_4_ < fRam0000000146b4a38c);
              iVar17 = movmskps((int)fVar24,auVar27);
              fVar24 = fStack_16c * 0.0 * _DAT_146b4a360 + fStack_1dc * (float)local_178._0_4_ +
                       fStack_170 * fStack_1e4 * _DAT_146b4a350 +
                       (float)local_178._4_4_ * 0.0 * _DAT_146b4a340;
              fVar35 = fStack_170 * 0.0 * fRam0000000146b4a364 + fStack_1dc * (float)local_178._4_4_
                       + fStack_16c * fStack_1e4 * fRam0000000146b4a354 +
                       (float)local_178._0_4_ * 0.0 * fRam0000000146b4a344;
              fVar58 = (float)local_178._4_4_ * 0.0 * fRam0000000146b4a368 + fStack_1dc * fStack_170
                       + (float)local_178._0_4_ * fStack_1e4 * fRam0000000146b4a358 +
                       fStack_16c * 0.0 * fRam0000000146b4a348;
              fStack_16c = (float)local_178._0_4_ * 0.0 * fRam0000000146b4a36c +
                           fStack_1dc * fStack_16c +
                           (float)local_178._4_4_ * fStack_1e4 * fRam0000000146b4a35c +
                           fStack_170 * 0.0 * fRam0000000146b4a34c;
              local_178._4_4_ = fVar35;
              local_178._0_4_ = fVar24;
              fStack_170 = fVar58;
              if (iVar17 == 0) {
                local_168._0_4_ = (float)local_168 * local_128;
                local_168._4_4_ = local_168._4_4_ * fStack_124;
                uStack_160._0_4_ = (float)uStack_160 * fStack_120;
                uStack_160._4_4_ = uStack_160._4_4_ * fStack_11c;
                local_178._0_4_ =
                     fStack_16c * local_148 * _DAT_146b4a360 + fStack_13c * fVar24 +
                     fVar58 * fStack_144 * _DAT_146b4a350 + fVar35 * fStack_140 * _DAT_146b4a340;
                local_178._4_4_ =
                     fVar58 * local_148 * fRam0000000146b4a364 + fStack_13c * fVar35 +
                     fStack_16c * fStack_144 * fRam0000000146b4a354 +
                     fVar24 * fStack_140 * fRam0000000146b4a344;
                fStack_170 = fVar35 * local_148 * fRam0000000146b4a368 + fStack_13c * fVar58 +
                             fVar24 * fStack_144 * fRam0000000146b4a358 +
                             fStack_16c * fStack_140 * fRam0000000146b4a348;
                fStack_16c = fVar24 * local_148 * fRam0000000146b4a36c + fStack_13c * fStack_16c +
                             fVar35 * fStack_144 * fRam0000000146b4a35c +
                             fVar58 * fStack_140 * fRam0000000146b4a34c;
                fVar74 = (float)uStack_160 * fStack_144 - local_168._4_4_ * fStack_140;
                fVar38 = (float)local_168 * fStack_140 - (float)uStack_160 * local_148;
                fVar24 = local_168._4_4_ * local_148 - (float)local_168 * fStack_144;
                fVar35 = uStack_160._4_4_ * fStack_13c - uStack_160._4_4_ * fStack_13c;
                fVar74 = fVar74 + fVar74;
                fVar38 = fVar38 + fVar38;
                fVar24 = fVar24 + fVar24;
                fVar35 = fVar35 + fVar35;
                local_158 = local_158 * local_128;
                fStack_154 = fStack_154 * fStack_124;
                fStack_150 = fStack_150 * fStack_120;
                fStack_14c = fStack_14c * fStack_11c;
                fVar31 = (fVar24 * fStack_144 - fVar38 * fStack_140) +
                         fStack_13c * fVar74 + (float)local_168 + fVar63;
                fVar73 = (fVar74 * fStack_140 - fVar24 * local_148) +
                         fStack_13c * fVar38 + local_168._4_4_ + fVar34;
                fVar74 = (fVar38 * local_148 - fVar74 * fStack_144) +
                         fStack_13c * fVar24 + (float)uStack_160 + fVar71;
                fVar38 = (fVar35 * fStack_13c - fVar35 * fStack_13c) +
                         fStack_13c * fVar35 + uStack_160._4_4_ + fVar72;
              }
              else {
                fVar64 = fStack_144 + fStack_144;
                fVar60 = fStack_140 + fStack_140;
                local_1d8 = CONCAT44(fStack_154 * fStack_124,local_158 * local_128);
                uStack_1d0 = CONCAT44(fStack_14c * fStack_11c,fStack_150 * fStack_120);
                fVar57 = (local_148 + local_148) * local_148;
                fVar72 = (local_148 + local_148) * fStack_13c;
                fVar50 = (fVar60 * fStack_13c + fVar64 * local_148) * local_128;
                fVar55 = (fVar72 + fVar60 * fStack_144) * fStack_124;
                fVar56 = (fVar64 * fStack_13c + fVar60 * local_148) * fStack_120;
                fVar32 = fStack_124 * (fVar64 * local_148 - fVar60 * fStack_13c);
                fVar41 = fStack_120 * (fVar60 * fStack_144 - fVar72);
                fVar43 = local_128 * (fVar60 * local_148 - fVar64 * fStack_13c);
                fVar72 = (float)((uint)((_DAT_146b4a320 -
                                        (fVar60 * fStack_140 + fVar64 * fStack_144)) * local_128) &
                                _DAT_146b4a330);
                fVar60 = (float)((uint)((fRam0000000146b4a324 - (fVar60 * fStack_140 + fVar57)) *
                                       fStack_124) & uRam0000000146b4a334);
                fVar42 = (float)((uint)((fRam0000000146b4a328 - (fVar64 * fStack_144 + fVar57)) *
                                       fStack_120) & uRam0000000146b4a338);
                fVar33 = (float)((uint)((fRam0000000146b4a32c - (fVar57 + fVar57)) * fStack_11c) &
                                uRam0000000146b4a33c);
                fVar64 = fVar35 + fVar35;
                fVar57 = fVar58 + fVar58;
                fVar37 = (fVar24 + fVar24) * fVar24;
                fVar36 = fStack_16c * (fVar24 + fVar24);
                fVar44 = (fStack_16c * fVar57 + fVar24 * fVar64) * local_158;
                fVar47 = (fVar36 + fVar35 * fVar57) * fStack_154;
                fVar48 = (fStack_16c * fVar64 + fVar24 * fVar57) * fStack_150;
                fVar39 = fStack_154 * (fVar24 * fVar64 - fStack_16c * fVar57);
                fVar36 = fStack_150 * (fVar35 * fVar57 - fVar36);
                fVar40 = local_158 * (fVar24 * fVar57 - fStack_16c * fVar64);
                fVar24 = (float)((uint)((_DAT_146b4a320 - (fVar57 * fVar58 + fVar64 * fVar35)) *
                                       local_158) & _DAT_146b4a330);
                fVar58 = (float)((uint)((fRam0000000146b4a324 - (fVar57 * fVar58 + fVar37)) *
                                       fStack_154) & uRam0000000146b4a334);
                fVar35 = (float)((uint)((fRam0000000146b4a328 - (fVar64 * fVar35 + fVar37)) *
                                       fStack_150) & uRam0000000146b4a338);
                fVar64 = (float)((uint)((fRam0000000146b4a32c - (fVar37 + fVar37)) * fStack_14c) &
                                uRam0000000146b4a33c);
                local_268 = fVar44 * fVar32 + fVar24 * fVar72 + fVar40 * fVar56 + fVar64 * fVar63;
                fStack_264 = fVar44 * fVar60 + fVar24 * fVar50 + fVar40 * fVar41 + fVar64 * fVar34;
                fStack_260 = fVar44 * fVar55 + fVar24 * fVar43 + fVar40 * fVar42 + fVar64 * fVar71;
                fStack_25c = fVar44 * fVar33 + fVar24 * fVar33 + fVar40 * fVar33 +
                             fVar64 * fRam0000000146b4a32c;
                local_258 = fVar58 * fVar32 + fVar39 * fVar72 + fVar47 * fVar56 + fVar64 * fVar63;
                fStack_254 = fVar58 * fVar60 + fVar39 * fVar50 + fVar47 * fVar41 + fVar64 * fVar34;
                fStack_250 = fVar58 * fVar55 + fVar39 * fVar43 + fVar47 * fVar42 + fVar64 * fVar71;
                fStack_24c = fVar58 * fVar33 + fVar39 * fVar33 + fVar47 * fVar33 +
                             fVar64 * fRam0000000146b4a32c;
                local_248 = fVar36 * fVar32 + fVar48 * fVar72 + fVar35 * fVar56 + fVar64 * fVar63;
                fStack_244 = fVar36 * fVar60 + fVar48 * fVar50 + fVar35 * fVar41 + fVar64 * fVar34;
                fStack_240 = fVar36 * fVar55 + fVar48 * fVar43 + fVar35 * fVar42 + fVar64 * fVar71;
                fStack_23c = fVar36 * fVar33 + fVar48 * fVar33 + fVar35 * fVar33 +
                             fVar64 * fRam0000000146b4a32c;
                local_238 = local_168._4_4_ * fVar32 + (float)local_168 * fVar72 +
                            (float)uStack_160 * fVar56 + fRam0000000146b4a32c * fVar63;
                fStack_234 = local_168._4_4_ * fVar60 + (float)local_168 * fVar50 +
                             (float)uStack_160 * fVar41 + fRam0000000146b4a32c * fVar34;
                fStack_230 = local_168._4_4_ * fVar55 + (float)local_168 * fVar43 +
                             (float)uStack_160 * fVar42 + fRam0000000146b4a32c * fVar71;
                fStack_22c = local_168._4_4_ * fVar33 + (float)local_168 * fVar33 +
                             (float)uStack_160 * fVar33 +
                             fRam0000000146b4a32c * fRam0000000146b4a32c;
                FMatrix::RemoveScaling(&local_268);
                fVar63 = (float)(-(uint)((float)local_228._0_4_ <= (float)local_1d8) &
                                 (_DAT_146b4a370 ^ (uint)fVar73) ^ _DAT_146b4a370);
                fVar34 = (float)(-(uint)((float)local_228._4_4_ <= local_1d8._4_4_) &
                                 (uRam0000000146b4a374 ^ (uint)fVar74) ^ uRam0000000146b4a374);
                fVar71 = (float)(-(uint)(fStack_220 <= (float)uStack_1d0) &
                                 (uRam0000000146b4a378 ^ (uint)fVar38) ^ uRam0000000146b4a378);
                local_268 = local_268 * fVar63;
                fStack_264 = fStack_264 * fVar63;
                fStack_260 = fStack_260 * fVar63;
                fStack_254 = fStack_254 * fVar34;
                fStack_250 = fStack_250 * fVar34;
                local_258 = local_258 * fVar34;
                fStack_244 = fStack_244 * fVar71;
                fStack_240 = fStack_240 * fVar71;
                local_248 = local_248 * fVar71;
                FQuat::FQuat(&local_1a8,&local_268);
                local_270 = 1e-08;
                auVar29._0_4_ = local_1a8 * local_1a8 + fStack_1a0 * fStack_1a0;
                auVar29._4_4_ = fStack_1a4 * fStack_1a4 + fStack_19c * fStack_19c;
                auVar29._8_4_ = fStack_1a0 * fStack_1a0 + local_1a8 * local_1a8;
                auVar29._12_4_ = fStack_19c * fStack_19c + fStack_1a4 * fStack_1a4;
                auVar45._0_4_ = auVar29._4_4_ + auVar29._0_4_;
                auVar45._4_4_ = auVar29._8_4_ + auVar29._4_4_;
                auVar45._8_4_ = auVar29._12_4_ + auVar29._8_4_;
                auVar45._12_4_ = auVar29._0_4_ + auVar29._12_4_;
                auVar53 = rsqrtps(auVar29,auVar45);
                fVar63 = auVar53._0_4_;
                fVar34 = auVar53._4_4_;
                fVar71 = auVar53._8_4_;
                fVar72 = auVar53._12_4_;
                fVar63 = (fVar31 - fVar63 * fVar63 * auVar45._0_4_ * fVar31) * fVar63 + fVar63;
                fVar34 = (fVar49 - fVar34 * fVar34 * auVar45._4_4_ * fVar49) * fVar34 + fVar34;
                fVar71 = (fVar65 - fVar71 * fVar71 * auVar45._8_4_ * fVar65) * fVar71 + fVar71;
                fVar72 = (fVar69 - fVar72 * fVar72 * auVar45._12_4_ * fVar69) * fVar72 + fVar72;
                fVar38 = 0.0;
                local_178._0_4_ =
                     ((uint)(((fVar31 - fVar63 * fVar63 * auVar45._0_4_ * fVar31) * fVar63 + fVar63)
                            * local_1a8) ^ _DAT_146b4a2d0) & -(uint)(1e-08 <= auVar45._0_4_) ^
                     _DAT_146b4a2d0;
                local_178._4_4_ =
                     ((uint)(((fVar49 - fVar34 * fVar34 * auVar45._4_4_ * fVar49) * fVar34 + fVar34)
                            * fStack_1a4) ^ uRam0000000146b4a2d4) & -(uint)(1e-08 <= auVar45._4_4_)
                     ^ uRam0000000146b4a2d4;
                fStack_170 = (float)(((uint)(((fVar65 - fVar71 * fVar71 * auVar45._8_4_ * fVar65) *
                                              fVar71 + fVar71) * fStack_1a0) ^ uRam0000000146b4a2d8)
                                     & -(uint)(1e-08 <= auVar45._8_4_) ^ uRam0000000146b4a2d8);
                fStack_16c = (float)(((uint)(((fVar69 - fVar72 * fVar72 * auVar45._12_4_ * fVar69) *
                                              fVar72 + fVar72) * fStack_19c) ^ uRam0000000146b4a2dc)
                                     & -(uint)(1e-08 <= auVar45._12_4_) ^ uRam0000000146b4a2dc);
                fVar31 = local_238;
                fVar73 = fStack_234;
                fVar74 = fStack_230;
                fVar63 = (float)local_138._0_4_;
                fVar34 = (float)local_138._4_4_;
                fVar71 = fStack_130;
                fVar72 = fStack_12c;
                local_158 = (float)local_1d8;
                fStack_154 = local_1d8._4_4_;
                fStack_150 = (float)uStack_1d0;
                fStack_14c = uStack_1d0._4_4_;
                local_1a8 = (float)local_178._0_4_;
                fStack_1a4 = (float)local_178._4_4_;
                fStack_1a0 = fStack_170;
                fStack_19c = fStack_16c;
              }
              fVar69 = fStack_11c;
              fVar65 = fStack_120;
              fVar49 = fStack_124;
              fVar64 = local_128;
              fVar60 = fStack_13c;
              fVar58 = fStack_140;
              fVar35 = fStack_144;
              fVar24 = local_148;
              iVar17 = (int)param_3[1];
              local_168 = CONCAT44(fVar73,fVar31);
              uStack_160 = CONCAT44(fVar38,fVar74);
              *(int *)(param_3 + 1) = iVar17 + 1;
              if (*(int *)((longlong)param_3 + 0xc) < iVar17 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
                ResizeGrow(param_3,iVar17);
              }
              pfVar14 = (float *)((longlong)iVar17 * 0x40 + *param_3);
              *pfVar14 = fVar70;
              pfVar14[4] = fVar24;
              pfVar14[5] = fVar35;
              pfVar14[6] = fVar58;
              pfVar14[7] = fVar60;
              pfVar14[8] = fVar63;
              pfVar14[9] = fVar34;
              pfVar14[10] = fVar71;
              pfVar14[0xb] = fVar72;
              pfVar14[0xc] = fVar64;
              pfVar14[0xd] = fVar49;
              pfVar14[0xe] = fVar65;
              pfVar14[0xf] = fVar69;
            }
            uVar11 = uStack_160;
            uVar10 = local_168;
            iVar17 = (int)param_3[1];
            uVar8 = local_178._0_4_;
            uVar9 = local_178._4_4_;
            fVar63 = fStack_170;
            fVar31 = fStack_16c;
            uVar4 = CONCAT44(fStack_154,local_158);
            uVar6 = CONCAT44(fStack_14c,fStack_150);
            *(int *)(param_3 + 1) = iVar17 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar17 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
              ResizeGrow(param_3,iVar17);
            }
            pfVar14 = (float *)((longlong)iVar17 * 0x40 + *param_3);
            *pfVar14 = fVar22;
            *(undefined8 *)(pfVar14 + 0xc) = uVar4;
            *(undefined8 *)(pfVar14 + 0xe) = uVar6;
            pfVar14[4] = (float)uVar8;
            pfVar14[5] = (float)uVar9;
            pfVar14[6] = fVar63;
            pfVar14[7] = fVar31;
            *(undefined8 *)(pfVar14 + 8) = uVar10;
            *(undefined8 *)(pfVar14 + 10) = uVar11;
            piVar20 = local_210;
          }
          piVar20 = piVar20 + 0x1e;
          pfVar23 = pfVar23 + 0x1e;
        } while (piVar20 != local_1c8);
      }
    }
  }
  return;
}



// FUNCTION 1430d3bf0 FUN_1430d3bf0 body=47 status=ok
// SIG undefined FUN_1430d3bf0(void)

void FUN_1430d3bf0(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if ((lVar1 != 0) && (param_2 == '\x01')) {
    FUN_1430e5da0(lVar1);
    return;
  }
  return;
}



// FUNCTION 1430d3c20 FUN_1430d3c20 body=44 status=ok
// SIG undefined FUN_1430d3c20(void)

undefined1 FUN_1430d3c20(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if ((lVar1 != 0) && (param_2 == '\x01')) {
    FUN_1430e5da0(lVar1);
  }
  return 1;
}



// FUNCTION 1430d3c60 FUN_1430d3c60 body=548 status=ok
// SIG undefined FUN_1430d3c60(void)

void FUN_1430d3c60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  longlong local_18;
  int local_10;
  
  if (*(char *)(param_1 + 0x814) == '\0') {
    *(undefined4 *)(param_2 + (ulonglong)(uint)(*(int *)(param_2 + 0x40) * 2) * 4) = 0;
    *(undefined4 *)(param_2 + (ulonglong)(*(int *)(param_2 + 0x40) * 2 + 1) * 4) = 0x3f800000;
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  }
  else {
    uVar3 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x538);
    FRichCurve::GetCopyOfKeys(uVar3);
    if (7 < local_10) {
      local_10 = 8;
    }
    lVar4 = 0;
    lVar5 = (longlong)local_10;
    lVar7 = lVar4;
    if (3 < lVar5) {
      iVar2 = *(int *)(param_2 + 0x40);
      lVar6 = (lVar5 - 4U >> 2) + 1;
      lVar7 = lVar6 * 4;
      do {
        fVar8 = *(float *)(lVar4 + 8 + local_18);
        if (0.0 <= fVar8) {
          if (1.0 <= fVar8) {
            fVar8 = 1.0;
          }
        }
        else {
          fVar8 = 0.0;
        }
        *(float *)(param_2 + (ulonglong)(uint)(iVar2 * 2) * 4) =
             *(float *)(lVar4 + 4 + local_18) * 27.777779;
        *(float *)(param_2 + (ulonglong)(*(int *)(param_2 + 0x40) * 2 + 1) * 4) = fVar8;
        iVar2 = *(int *)(param_2 + 0x40) + 1;
        *(int *)(param_2 + 0x40) = iVar2;
        fVar8 = *(float *)(lVar4 + 0x24 + local_18);
        if (0.0 <= fVar8) {
          if (1.0 <= fVar8) {
            fVar8 = 1.0;
          }
        }
        else {
          fVar8 = 0.0;
        }
        *(float *)(param_2 + (ulonglong)(uint)(iVar2 * 2) * 4) =
             *(float *)(lVar4 + 0x20 + local_18) * 27.777779;
        *(float *)(param_2 + (ulonglong)(*(int *)(param_2 + 0x40) * 2 + 1) * 4) = fVar8;
        iVar2 = *(int *)(param_2 + 0x40) + 1;
        *(int *)(param_2 + 0x40) = iVar2;
        fVar8 = *(float *)(lVar4 + 0x40 + local_18);
        if (0.0 <= fVar8) {
          if (1.0 <= fVar8) {
            fVar8 = 1.0;
          }
        }
        else {
          fVar8 = 0.0;
        }
        *(float *)(param_2 + (ulonglong)(uint)(iVar2 * 2) * 4) =
             *(float *)(lVar4 + 0x3c + local_18) * 27.777779;
        *(float *)(param_2 + (ulonglong)(*(int *)(param_2 + 0x40) * 2 + 1) * 4) = fVar8;
        iVar2 = *(int *)(param_2 + 0x40) + 1;
        *(int *)(param_2 + 0x40) = iVar2;
        fVar8 = *(float *)(lVar4 + 0x5c + local_18);
        if (0.0 <= fVar8) {
          if (1.0 <= fVar8) {
            fVar8 = 1.0;
          }
        }
        else {
          fVar8 = 0.0;
        }
        lVar1 = lVar4 + 0x58;
        lVar4 = lVar4 + 0x70;
        *(float *)(param_2 + (ulonglong)(uint)(iVar2 * 2) * 4) =
             *(float *)(lVar1 + local_18) * 27.777779;
        *(float *)(param_2 + (ulonglong)(*(int *)(param_2 + 0x40) * 2 + 1) * 4) = fVar8;
        *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
        iVar2 = *(int *)(param_2 + 0x40);
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar7 < lVar5) {
      lVar4 = lVar7 * 0x1c;
      lVar5 = lVar5 - lVar7;
      do {
        fVar8 = *(float *)(lVar4 + 8 + local_18);
        if (0.0 <= fVar8) {
          if (1.0 <= fVar8) {
            fVar8 = 1.0;
          }
        }
        else {
          fVar8 = 0.0;
        }
        lVar7 = lVar4 + 4;
        lVar4 = lVar4 + 0x1c;
        *(float *)(param_2 + (ulonglong)(uint)(*(int *)(param_2 + 0x40) * 2) * 4) =
             *(float *)(lVar7 + local_18) * 27.777779;
        *(float *)(param_2 + (ulonglong)(*(int *)(param_2 + 0x40) * 2 + 1) * 4) = fVar8;
        *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (local_18 != 0) {
      FMemory::Free();
      return;
    }
  }
  return;
}



// FUNCTION 1430d3e90 FUN_1430d3e90 body=234 status=ok
// SIG undefined FUN_1430d3e90(void)

void FUN_1430d3e90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1426ea8d0(param_2,0,0);
  FCollisionResponseContainer::SetResponse(param_2,2,2);
  FCollisionResponseContainer::SetResponse(param_2,0xf,2);
  FCollisionResponseContainer::SetResponse(param_2,0xe,2);
  FCollisionResponseContainer::SetResponse(param_2,0x12,2);
  FUN_1426ea8d0(param_3,0,0);
  FCollisionResponseContainer::SetResponse(param_3,0,2);
  FCollisionResponseContainer::SetResponse(param_3,1,2);
  FCollisionResponseContainer::SetResponse(param_3,2,2);
  FCollisionResponseContainer::SetResponse(param_3,5,2);
  FCollisionResponseContainer::SetResponse(param_3,7,2);
  FCollisionResponseContainer::SetResponse(param_3,6,2);
  FCollisionResponseContainer::SetResponse(param_3,0x12,2);
  return;
}



// FUNCTION 1430d3f80 FUN_1430d3f80 body=162 status=ok
// SIG undefined FUN_1430d3f80(void)

longlong FUN_1430d3f80(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if (((piVar1 != (int *)0x0) && (*piVar1 == 1)) && (*(longlong *)(piVar1 + 2) != 0)) {
    lVar4 = *(longlong *)(piVar1 + 2) + 0x138;
    cVar3 = FWeakObjectPtr::IsValid(lVar4);
    if (cVar3 != '\0') {
      lVar4 = FWeakObjectPtr::Get(lVar4);
      lVar4 = *(longlong *)(lVar4 + 0x118);
      if (lVar4 != 0) {
        lVar5 = FUN_1430e5840();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return lVar4;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1430d4030 FUN_1430d4030 body=115 status=ok
// SIG undefined FUN_1430d4030(void)

longlong FUN_1430d4030(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1430d3f80();
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(lVar2 + 0x4d8);
  if (lVar2 != 0) {
    lVar3 = FUN_14096cb40();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 1430d40b0 FUN_1430d40b0 body=186 status=ok
// SIG undefined FUN_1430d40b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430d40b0(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    uVar3 = 0;
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x2a0) + 0x3c);
    if (uVar1 != 0) {
      do {
        puVar2 = (undefined8 *)
                 physx::PxVehicleWheelsSimData::getTireData
                           (*(longlong *)(param_1 + 0x2a0) + 0x10,uVar3);
        local_68 = *puVar2;
        uStack_60 = puVar2[1];
        local_58 = puVar2[2];
        uStack_50 = puVar2[3];
        local_48 = *(undefined4 *)(puVar2 + 4);
        uStack_44 = *(undefined4 *)((longlong)puVar2 + 0x24);
        uStack_3c = *(undefined4 *)((longlong)puVar2 + 0x2c);
        local_38 = *(undefined4 *)(puVar2 + 6);
        uStack_34 = *(undefined4 *)((longlong)puVar2 + 0x34);
        uStack_30 = *(undefined4 *)(puVar2 + 7);
        uStack_2c = *(undefined4 *)((longlong)puVar2 + 0x3c);
        uStack_40 = *(undefined4 *)(param_2 + 0x48);
        physx::PxVehicleWheelsSimData::setTireData
                  (*(longlong *)(param_1 + 0x2a0) + 0x10,uVar3,&local_68);
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  return;
}



// FUNCTION 1430d4170 FUN_1430d4170 body=1248 status=ok
// SIG undefined FUN_1430d4170(void)

void FUN_1430d4170(longlong param_1,float *param_2)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int *piVar7;
  float *pfVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int *piVar13;
  int iVar14;
  longlong local_res10;
  void *local_b8;
  int local_b0;
  int local_ac;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  int local_80;
  undefined4 local_7c;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58 [2];
  undefined2 *local_48 [2];
  
  if (param_2[8] == 0.0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = *(undefined2 **)(param_2 + 6);
  }
  lVar4 = FClothLODDataCommon::StaticStruct();
  local_res10 = *(longlong *)(lVar4 + 0x18);
  FName::ToString(&local_res10,&local_88);
  puVar10 = &DAT_143f3eda8;
  if (local_80 != 0) {
    puVar10 = local_88;
  }
  FString::PrintfImpl(&local_b8,L"%s<W:%.1f%%> %s",puVar10,(double)(*param_2 * 100.0),puVar12);
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  param_2[8] = 0.0;
  if (param_2[9] != 0.0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  local_98 = (void *)0x0;
  local_90 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  pvVar2 = local_98;
  FGenericPlatformString::Convert<char,wchar_t>(local_98,2,&DAT_145a99928,2,0x3f);
  iVar3 = local_b0;
  if (((int)local_90 != 0) && (iVar14 = (int)local_90 + -1, iVar14 != 0)) {
    lVar4 = (longlong)local_b0;
    local_b0 = (uint)(local_b0 == 0) + local_b0 + iVar14;
    if (local_ac < local_b0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar3);
    }
    pvVar1 = (void *)((longlong)local_b8 + (lVar4 - (ulonglong)(iVar3 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar14 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar14 * 2) = 0;
  }
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FUN_141f85ec0(param_1,&local_b8);
  local_98 = (void *)0x0;
  local_90 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  pvVar2 = local_98;
  FGenericPlatformString::Convert<char,wchar_t>(local_98,2,&DAT_145a9992c,2,0x3f);
  iVar3 = local_b0;
  if (((int)local_90 != 0) && (iVar14 = (int)local_90 + -1, iVar14 != 0)) {
    lVar4 = (longlong)local_b0;
    local_b0 = (uint)(local_b0 == 0) + iVar14 + local_b0;
    if (local_ac < local_b0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar3);
    }
    pvVar1 = (void *)((longlong)local_b8 + (lVar4 - (ulonglong)(iVar3 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar14 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar14 * 2) = 0;
  }
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = local_b8;
  lVar4 = (longlong)local_b0;
  local_98 = (void *)0x0;
  local_90 = CONCAT44(local_90._4_4_,local_b0);
  if (local_b0 == 0) {
    local_90 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_b0,0);
    _guard_xfg_dispatch_icall_nop(local_98,pvVar2,lVar4 * 2);
  }
  FNodeDebugData::AddDebugItem(param_2,&local_98,0);
  lVar4 = *(longlong *)(param_1 + 0x150);
  local_res10 = lVar4;
  if (lVar4 != 0) {
    piVar7 = *(int **)(param_1 + 0x140);
    piVar13 = piVar7 + (longlong)*(int *)(param_1 + 0x148) * 0x1e;
    if (piVar7 != piVar13) {
      pfVar8 = (float *)(piVar7 + 0x1c);
      do {
        if (pfVar8[-0x18] == -NAN) {
          puVar5 = (undefined8 *)FName::ToString(pfVar8 + -0x1a,local_48);
          if (*(int *)(puVar5 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)*puVar5;
          }
          FString::PrintfImpl(&local_98,L" [Wheel Index : %d] Bone: %s (invalid bone)",*piVar7,
                              puVar12);
          if (local_b8 != (void *)0x0) {
            FMemory::Free();
          }
          local_b8 = local_98;
          local_b0 = (int)local_90;
          local_ac = local_90._4_4_;
          local_90 = 0;
          local_98 = (void *)0x0;
          puVar12 = local_48[0];
        }
        else {
          FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)pfVar8[-1],
                              (double)*pfVar8,(double)pfVar8[1]);
          lVar9 = *(longlong *)(lVar4 + 0x6c8);
          puVar12 = &DAT_143f3eda8;
          if (local_60 != 0) {
            puVar12 = local_68;
          }
          lVar6 = (longlong)*piVar7 * 0x20;
          FString::PrintfImpl(&local_78,L"P=%f Y=%f R=%f",(double)*(float *)(lVar6 + 8 + lVar9),
                              (double)*(float *)(lVar6 + 0xc + lVar9),
                              (double)*(float *)(lVar6 + 0x10 + lVar9));
          puVar10 = &DAT_143f3eda8;
          if (local_70 != 0) {
            puVar10 = local_78;
          }
          puVar5 = (undefined8 *)FName::ToString(pfVar8 + -0x1a,local_58);
          if (*(int *)(puVar5 + 1) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)*puVar5;
          }
          FString::PrintfImpl(&local_a8,
                              L" [Wheel Index : %d] Bone: %s , Rotation Offset : %s, Location Offset : %s"
                              ,*piVar7,puVar11,puVar10,puVar12);
          if (local_b8 != (void *)0x0) {
            FMemory::Free();
          }
          local_b8 = local_a8;
          local_b0 = (int)local_a0;
          local_ac = local_a0._4_4_;
          local_a0 = 0;
          local_a8 = (void *)0x0;
          if (local_58[0] != 0) {
            FMemory::Free();
          }
          puVar12 = local_68;
          if (local_78 != (undefined2 *)0x0) {
            FMemory::Free();
            puVar12 = local_68;
          }
        }
        if (puVar12 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        pvVar2 = local_b8;
        lVar9 = (longlong)local_b0;
        local_88 = (undefined2 *)0x0;
        local_80 = local_b0;
        if (local_b0 == 0) {
          local_7c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,local_b0,0);
          _guard_xfg_dispatch_icall_nop(local_88,pvVar2,lVar9 * 2);
        }
        FNodeDebugData::AddDebugItem(param_2,&local_88,0);
        piVar7 = piVar7 + 0x1e;
        pfVar8 = pfVar8 + 0x1e;
      } while (piVar7 != piVar13);
    }
  }
  FPoseLinkBase::GatherDebugData(param_1 + 0x30,param_2);
  if (local_b8 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1430d4650 FUN_1430d4650 body=361 status=ok
// SIG undefined FUN_1430d4650(void)

void FUN_1430d4650(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 local_38 [48];
  
  FUN_1409637a0();
  if ((*(float *)(param_3 + 0xc) * *(float *)(param_3 + 4) < 0.0) &&
     (((*(char *)(param_1 + 0xac0) != '\0' && (0.0 < *(float *)(param_1 + 0x31c))) ||
      ((*(char *)(param_1 + 0xac1) != '\0' &&
       ((0.0 < *(float *)(param_1 + 800) && (*(char *)(param_2 + 0x5c) != '\0')))))))) {
    fVar5 = 1.0;
    lVar2 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0xac8);
    if (lVar2 != 0) {
      pfVar3 = (float *)(**(code **)(**(longlong **)(param_1 + 0x118) + 0x308))
                                  (*(longlong **)(param_1 + 0x118),local_38);
      fVar5 = pfVar3[1];
      fVar6 = *pfVar3;
      fVar1 = pfVar3[2];
      uVar4 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0xac8);
      fVar5 = (float)FRichCurve::Eval(uVar4,SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar1 * fVar1) *
                                            0.036,0x3f800000);
    }
    fVar6 = *(float *)(param_1 + 0x31c);
    if (((*(char *)(param_1 + 0xac1) != '\0') && (*(char *)(param_2 + 0x5c) != '\0')) &&
       (fVar6 < *(float *)(param_1 + 800))) {
      fVar6 = *(float *)(param_1 + 800);
    }
    fVar6 = fVar5 * *(float *)(param_1 + 0xac4) * fVar6;
    *(float *)(param_4 + 4) = fVar6 * *(float *)(param_4 + 4);
    if (*(char *)(param_1 + 0xac2) != '\0') {
      *(float *)(param_4 + 8) = fVar6 * *(float *)(param_4 + 8);
    }
  }
  return;
}



// FUNCTION 1430d47c0 FUN_1430d47c0 body=269 status=ok
// SIG undefined FUN_1430d47c0(void)

float FUN_1430d47c0(undefined8 param_1,undefined8 param_2,float *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_98;
  undefined4 local_90;
  float local_88;
  float local_84;
  float local_80;
  undefined1 local_78 [112];
  
  FUN_1430d4ae0(param_1,&local_98,param_2);
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = local_98;
    *(undefined4 *)(param_4 + 1) = local_90;
  }
  uVar1 = FRotationMatrix::MakeFromXZ(local_78,&local_98,&DAT_1464aa798);
  FMatrix::GetUnitAxis(uVar1,&local_88,3);
  fVar2 = *param_3 * local_88 + param_3[1] * local_84 + param_3[2] * local_80;
  fVar3 = *param_3 - local_88 * fVar2;
  fVar4 = param_3[1] - local_84 * fVar2;
  fVar2 = param_3[2] - local_80 * fVar2;
  return SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) * 0.036;
}



// FUNCTION 1430d48d0 FUN_1430d48d0 body=143 status=ok
// SIG undefined FUN_1430d48d0(void)

undefined8 * FUN_1430d48d0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_28;
  undefined8 *local_20;
  code *local_18;
  longlong *plStack_10;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  plVar1 = *(longlong **)(param_1 + 0x180);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x6d0))(plVar1,0,1);
    if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x2a0) != 0)) {
      plStack_10 = &local_28;
      local_18 = FUN_1430cf3b0;
      local_28 = param_1;
      local_20 = param_2;
      FUN_1426936b0(lVar2,&local_18);
    }
  }
  return param_2;
}



// FUNCTION 1430d4960 FUN_1430d4960 body=378 status=ok
// SIG undefined FUN_1430d4960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1430d4960(longlong param_1,float *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  lVar1 = *(longlong *)(param_1 + 0x178);
  local_18 = DAT_1464aa810;
  fStack_14 = DAT_1464aa814;
  fStack_10 = DAT_1464aa818;
  fStack_c = DAT_1464aa81c;
  fVar21 = DAT_1464aa810;
  fVar10 = DAT_1464aa814;
  fVar14 = DAT_1464aa818;
  fVar9 = DAT_1464aa81c;
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
    if (lVar1 == 0) goto LAB_1430d4a6d;
    plVar2 = *(longlong **)(lVar1 + 400);
    if (plVar2 != (longlong *)0x0) {
      pfVar8 = (float *)(**(code **)(*plVar2 + 0x438))
                                  (plVar2,&local_18,*(undefined8 *)(lVar1 + 0x198));
      fVar21 = *pfVar8;
      fVar10 = pfVar8[1];
      fVar14 = pfVar8[2];
      fVar9 = pfVar8[3];
      goto LAB_1430d4a6d;
    }
    if (lVar1 != 0) {
      fVar21 = *(float *)(lVar1 + 0x210);
      fVar10 = *(float *)(lVar1 + 0x214);
      fVar14 = *(float *)(lVar1 + 0x218);
      fVar9 = *(float *)(lVar1 + 0x21c);
      goto LAB_1430d4a6d;
    }
  }
  else {
    plVar2 = *(longlong **)(lVar1 + 400);
    if (plVar2 != (longlong *)0x0) {
      pfVar8 = (float *)(**(code **)(*plVar2 + 0x438))
                                  (plVar2,&local_18,*(undefined8 *)(lVar1 + 0x198));
      fVar21 = *pfVar8;
      fVar10 = pfVar8[1];
      fVar14 = pfVar8[2];
      fVar9 = pfVar8[3];
      goto LAB_1430d4a6d;
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
    if (lVar1 == lVar3) goto LAB_1430d4a6d;
    if (lVar3 != 0) {
      fVar21 = *(float *)(lVar3 + 0x210);
      fVar10 = *(float *)(lVar3 + 0x214);
      fVar14 = *(float *)(lVar3 + 0x218);
      fVar9 = *(float *)(lVar3 + 0x21c);
      goto LAB_1430d4a6d;
    }
  }
  fVar9 = 1.0;
  fVar21 = 0.0;
  fVar10 = 0.0;
  fVar14 = 0.0;
LAB_1430d4a6d:
  fVar4 = *(float *)(param_1 + 0x2e0);
  fVar5 = *(float *)(param_1 + 0x2e4);
  fVar6 = *(float *)(param_1 + 0x2e8);
  fVar7 = *(float *)(param_1 + 0x2ec);
  fVar18 = fVar6 * fVar21 * fRam0000000146b4a364;
  fVar19 = fVar5 * fVar21 * fRam0000000146b4a368;
  fVar20 = fVar4 * fVar21 * fRam0000000146b4a36c;
  fVar11 = fVar7 * fVar10 * fRam0000000146b4a354;
  fVar12 = fVar4 * fVar10 * fRam0000000146b4a358;
  fVar13 = fVar5 * fVar10 * fRam0000000146b4a35c;
  fVar15 = fVar4 * fVar14 * fRam0000000146b4a344;
  fVar16 = fVar7 * fVar14 * fRam0000000146b4a348;
  fVar17 = fVar6 * fVar14 * fRam0000000146b4a34c;
  *param_2 = fVar7 * fVar21 * _DAT_146b4a360 + fVar9 * fVar4 + fVar6 * fVar10 * _DAT_146b4a350 +
             fVar5 * fVar14 * _DAT_146b4a340;
  param_2[1] = fVar18 + fVar9 * fVar5 + fVar11 + fVar15;
  param_2[2] = fVar19 + fVar9 * fVar6 + fVar12 + fVar16;
  param_2[3] = fVar20 + fVar9 * fVar7 + fVar13 + fVar17;
  return param_2;
}



// FUNCTION 1430d4ae0 FUN_1430d4ae0 body=584 status=ok
// SIG undefined FUN_1430d4ae0(void)

undefined8 FUN_1430d4ae0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 local_res8;
  undefined8 local_68;
  float local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_48;
  float local_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  local_60 = DAT_1468b5d98;
  local_68 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  if (*(char *)(param_1 + 0x100) == '\x14') {
    uVar3 = FUN_14096cb40();
    lVar4 = (**(code **)(*param_3 + 0x628))(param_3,uVar3);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)FUN_140963e40(lVar4,&local_48);
      uVar3 = *puVar5;
      local_68._0_4_ = (float)uVar3;
      local_60 = *(float *)(puVar5 + 1);
      local_68 = uVar3;
      if ((((float)local_68 != 0.0) ||
          (local_68._4_4_ = (float)((ulonglong)uVar3 >> 0x20), local_68._4_4_ != 0.0)) ||
         (local_60 != 0.0)) {
        lVar4 = param_3[0x2d];
        if (lVar4 == 0) {
          uVar6 = (undefined4)DAT_1468b5da0;
          local_54 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
          local_40 = DAT_1468b5da8;
        }
        else {
          local_38 = *(float *)(lVar4 + 0x210);
          fStack_34 = *(float *)(lVar4 + 0x214);
          fStack_30 = *(float *)(lVar4 + 0x218);
          fStack_2c = *(float *)(lVar4 + 0x21c);
          auVar1._4_4_ = -(uint)(*(float *)(lVar4 + 0x254) != fStack_34);
          auVar1._0_4_ = -(uint)(*(float *)(lVar4 + 0x250) != local_38);
          auVar1._8_4_ = -(uint)(*(float *)(lVar4 + 600) != fStack_30);
          auVar1._12_4_ = -(uint)(*(float *)(lVar4 + 0x25c) != fStack_2c);
          iVar2 = movmskps(local_60,auVar1);
          if (iVar2 != 0) {
            *(float *)(lVar4 + 0x250) = local_38;
            *(float *)(lVar4 + 0x254) = fStack_34;
            *(float *)(lVar4 + 600) = fStack_30;
            *(float *)(lVar4 + 0x25c) = fStack_2c;
            puVar5 = (undefined8 *)FQuat::Rotator(&local_38,&local_48);
            *(undefined8 *)(lVar4 + 0x260) = *puVar5;
            *(undefined4 *)(lVar4 + 0x268) = *(undefined4 *)(puVar5 + 1);
          }
          uVar6 = (undefined4)*(undefined8 *)(lVar4 + 0x260);
          local_54 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x260) >> 0x20);
          local_40 = *(float *)(lVar4 + 0x268);
        }
        local_48 = CONCAT44(local_54,uVar6);
        local_58 = 0;
        local_50 = 0;
        puVar5 = (undefined8 *)FRotator::RotateVector(&local_58,&local_48,&local_68);
        local_68 = *puVar5;
        local_60 = *(float *)(puVar5 + 1);
      }
    }
    if ((((float)local_68 != 0.0) || (local_68._4_4_ != 0.0)) || (local_60 != 0.0))
    goto LAB_1430d4ce6;
    lVar4 = param_3[0x2d];
  }
  else {
    lVar4 = param_3[0x2d];
  }
  if (lVar4 == 0) {
    local_40 = (float)DAT_1464aa7b0;
    puVar5 = &local_48;
    local_48 = DAT_1464aa7a8;
  }
  else {
    puVar5 = (undefined8 *)FUN_142369f10(lVar4,&local_48);
  }
  local_68 = *puVar5;
  local_60 = *(float *)(puVar5 + 1);
  local_40 = local_60;
LAB_1430d4ce6:
  local_res8 = 0;
  FUN_142da9940((char *)(param_1 + 0x100),param_2,&local_68,param_3,&local_res8,0);
  return param_2;
}



// FUNCTION 1430d4d30 FUN_1430d4d30 body=154 status=ok
// SIG undefined FUN_1430d4d30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1430d4d30(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 local_28 [12];
  undefined1 local_1c [20];
  
  uVar1 = DAT_1468b5d98;
  if ((*(longlong *)(param_1 + 0x1b8) != 0) && (*(longlong *)(param_1 + 0x1b0) != 0)) {
    cVar2 = FUN_1430dd9e0();
    if (cVar2 == '\0') {
      puVar5 = local_1c;
      lVar3 = 0x38;
    }
    else {
      puVar5 = local_28;
      lVar3 = 0x188;
    }
    puVar4 = (undefined8 *)
             FUN_1430d4ae0(*(longlong *)(param_1 + 0x1b0) + lVar3,puVar5,
                           *(undefined8 *)(param_1 + 0x1b8));
    uVar1 = *(undefined4 *)(puVar4 + 1);
    *param_2 = *puVar4;
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  }
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 1430d4dd0 FUN_1430d4dd0 body=602 status=ok
// SIG undefined FUN_1430d4dd0(void)

undefined8 FUN_1430d4dd0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 local_res8;
  undefined8 local_68;
  float local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_48;
  float local_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  plVar1 = *(longlong **)(param_1 + 0x270);
  local_60 = DAT_1468b5d98;
  local_68 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  if (*(char *)(param_1 + 0x318) == '\x14') {
    uVar4 = FUN_14096cb40();
    lVar5 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)FUN_140963e40(lVar5,&local_48);
      uVar4 = *puVar6;
      local_68._0_4_ = (float)uVar4;
      local_60 = *(float *)(puVar6 + 1);
      local_68 = uVar4;
      if ((((float)local_68 != 0.0) ||
          (local_68._4_4_ = (float)((ulonglong)uVar4 >> 0x20), local_68._4_4_ != 0.0)) ||
         (local_60 != 0.0)) {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x270) + 0x168);
        if (lVar5 == 0) {
          uVar7 = (undefined4)DAT_1468b5da0;
          local_54 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
          local_40 = DAT_1468b5da8;
        }
        else {
          local_38 = *(float *)(lVar5 + 0x210);
          fStack_34 = *(float *)(lVar5 + 0x214);
          fStack_30 = *(float *)(lVar5 + 0x218);
          fStack_2c = *(float *)(lVar5 + 0x21c);
          auVar2._4_4_ = -(uint)(*(float *)(lVar5 + 0x254) != fStack_34);
          auVar2._0_4_ = -(uint)(*(float *)(lVar5 + 0x250) != local_38);
          auVar2._8_4_ = -(uint)(*(float *)(lVar5 + 600) != fStack_30);
          auVar2._12_4_ = -(uint)(*(float *)(lVar5 + 0x25c) != fStack_2c);
          iVar3 = movmskps((int)*(longlong *)(param_1 + 0x270),auVar2);
          if (iVar3 != 0) {
            *(float *)(lVar5 + 0x250) = local_38;
            *(float *)(lVar5 + 0x254) = fStack_34;
            *(float *)(lVar5 + 600) = fStack_30;
            *(float *)(lVar5 + 0x25c) = fStack_2c;
            puVar6 = (undefined8 *)FQuat::Rotator(&local_38,&local_48);
            *(undefined8 *)(lVar5 + 0x260) = *puVar6;
            *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(puVar6 + 1);
          }
          uVar7 = (undefined4)*(undefined8 *)(lVar5 + 0x260);
          local_54 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x260) >> 0x20);
          local_40 = *(float *)(lVar5 + 0x268);
        }
        local_48 = CONCAT44(local_54,uVar7);
        local_58 = 0;
        local_50 = 0;
        puVar6 = (undefined8 *)FRotator::RotateVector(&local_58,&local_48,&local_68);
        local_68 = *puVar6;
        local_60 = *(float *)(puVar6 + 1);
      }
    }
    if ((((float)local_68 != 0.0) || (local_68._4_4_ != 0.0)) || (local_60 != 0.0))
    goto LAB_1430d4fdc;
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x270) + 0x168);
  }
  else {
    lVar5 = plVar1[0x2d];
  }
  if (lVar5 == 0) {
    local_40 = (float)DAT_1464aa7b0;
    puVar6 = &local_48;
    local_48 = DAT_1464aa7a8;
  }
  else {
    puVar6 = (undefined8 *)FUN_142369f10(lVar5,&local_48);
  }
  local_68 = *puVar6;
  local_60 = *(float *)(puVar6 + 1);
  local_40 = local_60;
LAB_1430d4fdc:
  local_res8 = 0;
  FUN_142da9940(param_1 + 0x318,param_2,&local_68,*(undefined8 *)(param_1 + 0x270),&local_res8,0);
  return param_2;
}



// FUNCTION 1430d5030 FUN_1430d5030 body=121 status=ok
// SIG undefined FUN_1430d5030(void)

float FUN_1430d5030(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x288) - *(float *)(param_1 + 0x284);
  if (1e-08 < ABS(fVar2)) {
    fVar1 = 0.0;
    fVar2 = (param_2 - *(float *)(param_1 + 0x284)) / fVar2;
    if (fVar2 < 0.0) goto LAB_1430d5099;
  }
  else if (param_2 < *(float *)(param_1 + 0x288)) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = 1.0;
  }
  fVar1 = fVar2;
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
LAB_1430d5099:
  return (*(float *)(param_1 + 0x310) - *(float *)(param_1 + 0x30c)) * fVar1 +
         *(float *)(param_1 + 0x30c);
}



// FUNCTION 1430d50b0 FUN_1430d50b0 body=373 status=ok
// SIG undefined FUN_1430d50b0(void)

undefined8 FUN_1430d50b0(longlong param_1)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  float *pfVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_78;
  float local_70;
  undefined1 local_68 [12];
  undefined1 local_5c [84];
  
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
    return 0;
  }
  if (*(float *)(*(longlong *)(param_1 + 0x1b0) + 0x38) <= 0.0) {
    return 0x3f800000;
  }
  if (*(longlong *)(param_1 + 0x1b8) == 0) {
    plVar6 = (longlong *)0x0;
    fVar10 = 0.0;
    fVar8 = DAT_1468b5d94;
    fVar11 = DAT_1468b5d98;
    fVar9 = DAT_1468b5d90;
  }
  else {
    cVar2 = FUN_1430dd9e0();
    if (cVar2 == '\0') {
      puVar7 = local_5c;
      lVar3 = 0x38;
    }
    else {
      puVar7 = local_68;
      lVar3 = 0x188;
    }
    puVar4 = (undefined8 *)
             FUN_1430d4ae0(*(longlong *)(param_1 + 0x1b0) + lVar3,puVar7,
                           *(undefined8 *)(param_1 + 0x1b8));
    plVar6 = *(longlong **)(param_1 + 0x1b8);
    local_78 = *puVar4;
    local_70 = *(float *)(puVar4 + 1);
    fVar10 = (float)((ulonglong)local_78 >> 0x20);
    fVar8 = fVar10;
    fVar11 = local_70;
    fVar9 = (float)local_78;
  }
  pfVar5 = (float *)(**(code **)(*plVar6 + 0x308))(plVar6,&local_78);
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x1b0) + 0x2fc);
  fVar8 = fVar8 * pfVar5[1] + fVar9 * *pfVar5 + fVar11 * pfVar5[2];
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  fVar9 = (fVar8 * 0.036 - fVar1) / (*(float *)(*(longlong *)(param_1 + 0x1b0) + 0x38) - fVar1);
  fVar8 = 0.0;
  fVar11 = 0.0;
  if ((0.0 <= fVar9) && (fVar8 = fVar9, fVar11 = fVar10, 1.0 <= fVar9)) {
    fVar8 = 1.0;
  }
  return CONCAT44(fVar11,fVar8);
}



// FUNCTION 1430d5230 FUN_1430d5230 body=1801 status=ok
// SIG undefined FUN_1430d5230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1430d5230(longlong param_1,float *param_2,float *param_3,float *param_4,char param_5,
                     longlong param_6)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_168;
  uint local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [208];
  
  *param_4 = 0.0;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xd00) + 0x490);
  if (lVar5 == 0) {
LAB_1430d52af:
    lVar5 = 0;
  }
  else {
    lVar3 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1430d52af;
  }
  if (((lVar5 == 0) || (*(longlong *)(lVar5 + 0x528) == 0)) ||
     ((1 < (byte)(param_5 - 4U) && (SQRT(*param_3 * *param_3 + param_3[1] * param_3[1]) <= 0.1)))) {
    *(undefined4 *)(param_1 + 0xd08) = 0;
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    return param_2;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xd00) + 0x168);
  if (lVar3 == 0) {
    pfVar4 = (float *)&DAT_1468b5b70;
  }
  else {
    pfVar4 = (float *)(lVar3 + 0x210);
  }
  fVar6 = *pfVar4;
  fVar7 = pfVar4[1];
  fVar8 = pfVar4[2];
  fVar9 = pfVar4[3];
  local_160 = *(uint *)(param_1 + 0xce0) ^ 0x80000000;
  local_168 = 0;
  pfVar4 = (float *)FRotator::Quaternion(&local_168,&local_148);
  fVar14 = *pfVar4;
  fVar10 = pfVar4[1];
  fVar15 = pfVar4[2];
  fVar16 = pfVar4[3];
  fVar11 = fVar6 * fVar16 * _DAT_146b4a360 + fVar9 * fVar14 + fVar7 * fVar15 * _DAT_146b4a350 +
           fVar8 * fVar10 * _DAT_146b4a340;
  fVar12 = fVar6 * fVar15 * fRam0000000146b4a364 + fVar9 * fVar10 +
           fVar7 * fVar16 * fRam0000000146b4a354 + fVar8 * fVar14 * fRam0000000146b4a344;
  fVar13 = fVar6 * fVar10 * fRam0000000146b4a368 + fVar9 * fVar15 +
           fVar7 * fVar14 * fRam0000000146b4a358 + fVar8 * fVar16 * fRam0000000146b4a348;
  fVar14 = fVar6 * fVar14 * fRam0000000146b4a36c + fVar9 * fVar16 +
           fVar7 * fVar10 * fRam0000000146b4a35c + fVar8 * fVar15 * fRam0000000146b4a34c;
  fVar6 = fVar12 * 0.0 - fVar13 * 0.0;
  fVar7 = fVar13 * 1.0 - fVar11 * 0.0;
  fVar8 = fVar11 * 0.0 - fVar12 * 1.0;
  fVar9 = fVar14 * 0.0 - fVar14 * 0.0;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  local_138 = (fVar8 * fVar12 - fVar7 * fVar13) + fVar14 * fVar6 + 1.0;
  fStack_134 = (fVar6 * fVar13 - fVar8 * fVar11) + fVar14 * fVar7 + 0.0;
  fStack_130 = (fVar7 * fVar11 - fVar6 * fVar12) + fVar14 * fVar8 + 0.0;
  fStack_12c = (fVar9 * fVar14 - fVar9 * fVar14) + fVar14 * fVar9 + 0.0;
  fVar6 = fVar12 * 0.0 - fVar13 * 1.0;
  fVar7 = fVar13 * 0.0 - fVar11 * 0.0;
  fVar8 = fVar11 * 1.0 - fVar12 * 0.0;
  fVar9 = fVar14 * 0.0 - fVar14 * 0.0;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  local_148 = (fVar8 * fVar12 - fVar7 * fVar13) + fVar14 * fVar6 + 0.0;
  fStack_144 = (fVar6 * fVar13 - fVar8 * fVar11) + fVar14 * fVar7 + 1.0;
  fStack_140 = (fVar7 * fVar11 - fVar6 * fVar12) + fVar14 * fVar8 + 0.0;
  fStack_13c = (fVar9 * fVar14 - fVar9 * fVar14) + fVar14 * fVar9 + 0.0;
  fVar6 = fVar12 * 1.0 - fVar13 * 0.0;
  fVar7 = fVar13 * 0.0 - fVar11 * 1.0;
  fVar8 = fVar11 * 0.0 - fVar12 * 0.0;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  local_158 = (fVar8 * fVar12 - fVar7 * fVar13) + fVar6 * fVar14 + 0.0;
  local_154 = (fVar6 * fVar13 - fVar8 * fVar11) + fVar7 * fVar14 + 0.0;
  local_150 = (fVar7 * fVar11 - fVar6 * fVar12) + fVar8 * fVar14 + 1.0;
  FUN_1426e1d20(*(undefined8 *)(lVar5 + 0x528),local_128);
  FRotator::Vector(local_128,local_118);
  FRotationMatrix::MakeFromZX(local_f8,&local_158,local_118);
  fVar6 = 1.0;
  if (param_5 == '\x04') {
    pfVar4 = (float *)FMatrix::GetUnitAxis(local_f8,&local_168,1);
    fVar9 = -*pfVar4;
    fVar14 = -pfVar4[1];
    fVar7 = -pfVar4[2];
  }
  else if (param_5 == '\x05') {
    if (param_3[1] <= 0.0 && param_3[1] != 0.0) {
      fVar7 = -1.0;
    }
    else {
      fVar7 = 1.0;
    }
    pfVar4 = (float *)FMatrix::GetUnitAxis(local_f8,&local_168,1);
    fVar9 = fVar7 * *pfVar4;
    fVar14 = fVar7 * pfVar4[1];
    fVar7 = fVar7 * pfVar4[2];
  }
  else {
    fVar7 = *param_3;
    pfVar4 = (float *)FMatrix::GetUnitAxis(local_f8,&local_168,2);
    fVar8 = param_3[1];
    fVar9 = *pfVar4;
    fVar14 = pfVar4[1];
    fVar10 = pfVar4[2];
    pfVar4 = (float *)FMatrix::GetUnitAxis(local_f8,local_108,1);
    fVar9 = fVar8 * *pfVar4 + fVar7 * fVar9;
    fVar14 = fVar8 * pfVar4[1] + fVar7 * fVar14;
    fVar7 = fVar8 * pfVar4[2] + fVar7 * fVar10;
  }
  fVar16 = fVar14 * fStack_144;
  fVar10 = fVar9 * local_148;
  fVar15 = fVar7 * fStack_140;
  fVar8 = SQRT(fVar14 * fVar14 + fVar9 * fVar9 + fVar7 * fVar7);
  fVar7 = fVar14 * fStack_134 + fVar9 * local_138 + fVar7 * fStack_130;
  if ((*(float *)(param_1 + 0x5dc) <= 0.0) ||
     (fVar9 = (float)FUN_140964620(param_1),
     fVar9 < *(float *)(param_1 + 0x5dc) || fVar9 == *(float *)(param_1 + 0x5dc))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (param_5 == '\x01') {
LAB_1430d572e:
    fVar14 = 1.0;
  }
  else {
    if ((param_5 != '\x02') && (param_5 != '\x04')) {
      if (param_5 != '\x05') {
        if (fVar7 < *(float *)(param_1 + 0x5d4)) {
          fVar9 = -1.0;
        }
        else {
          fVar9 = 1.0;
        }
        if ((fVar8 < *(float *)(param_1 + 0x5d8)) ||
           (fVar14 = *(float *)(param_1 + 0xd08), *(float *)(param_1 + 0xd08) == 0.0)) {
          fVar14 = fVar9;
        }
        goto LAB_1430d5732;
      }
      if (0.0 < param_3[1] || param_3[1] == 0.0) goto LAB_1430d572e;
    }
    fVar14 = -1.0;
  }
LAB_1430d5732:
  if ((*(char *)(param_1 + 0x5e0) != '\0') || (0.0 <= fVar14)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (fVar8 <= 0.1) {
    *(undefined4 *)(param_1 + 0xd08) = 0;
  }
  else if (param_5 == '\x03') {
    if ((((bVar2) || (!bVar1)) || (*(float *)(param_1 + 0xd08) == 0.0)) ||
       (fVar8 < *(float *)(param_1 + 0x5d8))) {
      if (param_3[1] <= *(float *)(param_1 + 0x5d4)) {
        *(undefined4 *)(param_1 + 0xd08) = 0xbf800000;
      }
      else {
        *(undefined4 *)(param_1 + 0xd08) = 0x3f800000;
      }
    }
  }
  else {
    *(float *)(param_1 + 0xd08) = fVar14;
  }
  fVar7 = (fVar14 * fVar7) / fVar8;
  if (-1.0 <= fVar7) {
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
  }
  else {
    fVar7 = -1.0;
  }
  fVar7 = _guard_xfg_dispatch_icall_nop(fVar7);
  fVar7 = fVar7 * 57.295776;
  if (fVar16 + fVar10 + fVar15 < 0.0) {
    fVar9 = -1.0;
  }
  else {
    fVar9 = 1.0;
  }
  *param_4 = fVar7 * fVar9;
  if (param_6 == 0) {
    if (1e-08 < ABS(DAT_1467b1724 - DAT_1467b1720)) {
      fVar7 = (fVar7 - DAT_1467b1720) / (DAT_1467b1724 - DAT_1467b1720);
      if (fVar7 < 0.0) {
        fVar7 = 0.0;
        goto LAB_1430d5856;
      }
    }
    else if (fVar7 < DAT_1467b1724) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = 1.0;
    }
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
  }
  else {
    fVar7 = (float)FRichCurve::Eval(param_6,fVar7,0);
  }
LAB_1430d5856:
  fVar7 = fVar7 * fVar9;
  if (*(char *)(param_1 + 0x5d0) == '\x03') {
    if (0.0 < param_3[1] || param_3[1] == 0.0) goto LAB_1430d58a0;
  }
  else {
    fVar9 = (float)UGeometryCacheComponent::GetStartTimeOffset(param_1);
    if (-1.0 <= fVar9) goto LAB_1430d58a0;
  }
  fVar6 = -1.0;
LAB_1430d58a0:
  if (fVar6 != fVar14) {
    fVar7 = -fVar7;
  }
  if (param_5 == '\x05') {
    fVar8 = param_3[1];
  }
  else if (fVar14 < 0.0) {
    fVar8 = -fVar8;
  }
  *param_2 = fVar7;
  param_2[1] = fVar8;
  return param_2;
}



// FUNCTION 1430d5940 FUN_1430d5940 body=58 status=ok
// SIG undefined FUN_1430d5940(void)

undefined8
FUN_1430d5940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,longlong param_6)

{
  longlong lVar1;
  
  lVar1 = param_6 + 0x30;
  if (param_6 == 0) {
    lVar1 = 0;
  }
  FUN_1430d5230(param_1,param_2,param_3,param_4,param_5,lVar1);
  return param_2;
}



// FUNCTION 1430d5980 FUN_1430d5980 body=541 status=ok
// SIG undefined FUN_1430d5980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1430d5980(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  uint uStack_8c;
  char local_88 [64];
  undefined1 local_48 [64];
  
  lVar5 = FUN_1430e2e50();
  if (lVar5 == 0) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
  }
  else {
    FUN_142ced280(lVar5,&local_e8,1);
    uVar6 = FUN_142ced5e0(lVar5,local_88,1);
    FUN_142ce6bb0(lVar5,&local_d8,uVar6);
    fVar1 = (float)DAT_146b4a310;
    fVar2 = DAT_146b4a310._4_4_;
    fVar3 = DAT_146b4a310._8_4_;
    fVar4 = DAT_146b4a310._12_4_;
    auVar7._4_4_ = local_e4 - local_d4;
    auVar7._0_4_ = local_e8 - local_d8;
    auVar7._8_4_ = local_e0 - local_d0;
    auVar7._12_4_ = 0;
    auVar7 = divps(auVar7,_DAT_146b4a310);
    fVar8 = (local_e8 - local_d8) - (float)(int)auVar7._0_4_ * fVar1;
    fVar9 = (local_e4 - local_d4) - (float)(int)auVar7._4_4_ * fVar2;
    fVar10 = (local_e0 - local_d0) - (float)(int)auVar7._8_4_ * fVar3;
    fVar11 = 0.0 - (float)(int)auVar7._12_4_ * fVar4;
    local_98 = (float)(((uint)(fVar1 + fVar8) ^ (uint)fVar8) & -(uint)(0.0 <= fVar8) ^
                      (uint)(fVar1 + fVar8));
    fStack_94 = (float)(((uint)(fVar2 + fVar9) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                       (uint)(fVar2 + fVar9));
    fStack_90 = (float)(((uint)(fVar3 + fVar10) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                       (uint)(fVar3 + fVar10));
    fVar8 = (float)(((uint)(fVar4 + fVar11) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                   (uint)(fVar4 + fVar11));
    local_98 = (float)(((uint)(local_98 - fVar1) ^ (uint)local_98) &
                       -(uint)(_DAT_146b4a300 < local_98) ^ (uint)local_98);
    fStack_94 = (float)(((uint)(fStack_94 - fVar2) ^ (uint)fStack_94) &
                        -(uint)(fRam0000000146b4a304 < fStack_94) ^ (uint)fStack_94);
    fStack_90 = (float)(((uint)(fStack_90 - fVar3) ^ (uint)fStack_90) &
                        -(uint)(fRam0000000146b4a308 < fStack_90) ^ (uint)fStack_90);
    uStack_8c = ((uint)(fVar8 - fVar4) ^ (uint)fVar8) & -(uint)(fRam0000000146b4a30c < fVar8) ^
                (uint)fVar8;
    FUN_142ced5e0(lVar5,local_88,1);
    if ((local_88[0] == '\t') || (local_88[0] == '\0')) {
      uVar6 = FUN_142ced5e0(lVar5,local_48,0);
      FUN_142ce6bb0(lVar5,&local_a8,uVar6);
      local_f8 = local_a8;
      local_f4 = local_a4;
      local_f0 = local_a0;
    }
    else {
      FUN_1430d6fd0(param_1,&local_c8);
      uVar6 = FUN_142ced5e0(lVar5,local_48,1);
      FUN_142ce6b40(lVar5,&local_108,uVar6);
      local_b8 = local_108 - local_c8;
      local_b4 = local_104 - local_c4;
      local_b0 = local_100 - local_c0;
      FVector::Rotation(&local_b8,&local_f8);
      (**(code **)(*param_1 + 0x5b0))(param_1,&local_f8,&local_108);
    }
    *param_2 = local_98 + local_f8;
    param_2[1] = fStack_94 + local_f4;
    param_2[2] = fStack_90 + local_f0;
  }
  return param_2;
}



// FUNCTION 1430d5ba0 FUN_1430d5ba0 body=128 status=ok
// SIG undefined FUN_1430d5ba0(void)

int FUN_1430d5ba0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  float fVar3;
  
  cVar1 = FUN_142d52a00(param_1 + 0x1d8);
  if (((cVar1 != '\0') && (*(longlong *)(param_1 + 0x1b0) != 0)) &&
     (*(int *)(*(longlong *)(param_1 + 0x1b0) + 0x30c) != 0)) {
    uVar2 = FUN_142d52a20(param_1 + 0x1d8);
    uVar2 = FArchive::operator<<(uVar2);
    fVar3 = (float)FUN_142d5fea0(uVar2);
    return (int)((float)*(int *)(*(longlong *)(param_1 + 0x1b0) + 0x30c) * fVar3);
  }
  return 0;
}



// FUNCTION 1430d5c20 FUN_1430d5c20 body=63 status=ok
// SIG undefined FUN_1430d5c20(void)

undefined8 FUN_1430d5c20(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_142d52a00(param_1 + 0x1d8);
  if (cVar1 != '\0') {
    uVar2 = FUN_142d52a20(param_1 + 0x1d8);
    uVar2 = FArchive::operator<<(uVar2);
    uVar2 = FUN_142d5fed0(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1430d5c60 FUN_1430d5c60 body=63 status=ok
// SIG undefined FUN_1430d5c60(void)

undefined8 FUN_1430d5c60(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_142d52a00(param_1 + 0x228);
  if (cVar1 != '\0') {
    uVar2 = FUN_142d52a20(param_1 + 0x228);
    uVar2 = FArchive::operator<<(uVar2);
    uVar2 = FUN_142d5fed0(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1430d5ca0 FUN_1430d5ca0 body=122 status=ok
// SIG undefined FUN_1430d5ca0(void)

/* WARNING: Removing unreachable block (ram,0x0001430d5cf9) */

float FUN_1430d5ca0(longlong param_1)

{
  float fVar1;
  
  if (*(char *)(param_1 + 0x1c0) != '\0') {
    fVar1 = *(float *)(param_1 + 0x288) - *(float *)(param_1 + 0x284);
    if (ABS(fVar1) <= 1e-08) {
      if (*(float *)(param_1 + 0x264) < *(float *)(param_1 + 0x288)) {
        return 0.0;
      }
      return 1.0;
    }
    fVar1 = (*(float *)(param_1 + 0x264) - *(float *)(param_1 + 0x284)) / fVar1;
    if (0.0 <= fVar1) {
      if (1.0 <= fVar1) {
        fVar1 = 1.0;
      }
      return fVar1;
    }
  }
  return 0.0;
}



// FUNCTION 1430d5d20 FUN_1430d5d20 body=145 status=ok
// SIG undefined FUN_1430d5d20(void)

int FUN_1430d5d20(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  cVar2 = FUN_142d52a00(param_1 + 0x228);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = FUN_142d52a20(param_1 + 0x228);
  uVar3 = FArchive::operator<<(uVar3);
  fVar4 = (float)FUN_142d61c30(uVar3);
  iVar1 = *(int *)(param_1 + 0x1d8);
  uVar3 = FUN_142d52a20(param_1 + 0x228);
  uVar3 = FArchive::operator<<(uVar3);
  fVar5 = (float)FUN_142d5fed0(uVar3);
  return (int)(fVar5 / (fVar4 / (float)iVar1));
}



// FUNCTION 1430d5dc0 FUN_1430d5dc0 body=307 status=ok
// SIG undefined FUN_1430d5dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1430d5dc0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 in_EAX;
  int iVar11;
  undefined8 *puVar12;
  float *pfVar13;
  float *pfVar14;
  undefined1 local_38 [16];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 local_18 [16];
  
  lVar1 = *(longlong *)(param_1 + 0x178);
  if (lVar1 != 0) {
    local_28 = *(float *)(lVar1 + 0x210);
    fStack_24 = *(float *)(lVar1 + 0x214);
    fStack_20 = *(float *)(lVar1 + 0x218);
    fStack_1c = *(float *)(lVar1 + 0x21c);
    auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_24);
    auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_28);
    auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_20);
    auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_1c);
    iVar11 = movmskps(in_EAX,auVar2);
    if (iVar11 != 0) {
      *(float *)(lVar1 + 0x250) = local_28;
      *(float *)(lVar1 + 0x254) = fStack_24;
      *(float *)(lVar1 + 600) = fStack_20;
      *(float *)(lVar1 + 0x25c) = fStack_1c;
      puVar12 = (undefined8 *)FQuat::Rotator(&local_28,local_38);
      *(undefined8 *)(lVar1 + 0x260) = *puVar12;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar12 + 1);
    }
    *param_2 = *(undefined8 *)(lVar1 + 0x260);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x268);
    return param_2;
  }
  pfVar13 = (float *)FRotator::Quaternion(param_1 + 0x210,local_38);
  pfVar14 = (float *)FUN_1430d4960(param_1,local_18);
  fVar3 = *pfVar13;
  fVar4 = pfVar13[1];
  fVar5 = pfVar13[2];
  fVar6 = pfVar13[3];
  fVar7 = *pfVar14;
  fVar8 = pfVar14[1];
  fVar9 = pfVar14[2];
  fVar10 = pfVar14[3];
  local_28 = fVar6 * fVar7 * _DAT_146b4a360 + fVar10 * fVar3 + fVar5 * fVar8 * _DAT_146b4a350 +
             fVar4 * fVar9 * _DAT_146b4a340;
  fStack_24 = fVar5 * fVar7 * fRam0000000146b4a364 + fVar10 * fVar4 +
              fVar6 * fVar8 * fRam0000000146b4a354 + fVar3 * fVar9 * fRam0000000146b4a344;
  fStack_20 = fVar4 * fVar7 * fRam0000000146b4a368 + fVar10 * fVar5 +
              fVar3 * fVar8 * fRam0000000146b4a358 + fVar6 * fVar9 * fRam0000000146b4a348;
  fStack_1c = fVar3 * fVar7 * fRam0000000146b4a36c + fVar10 * fVar6 +
              fVar4 * fVar8 * fRam0000000146b4a35c + fVar5 * fVar9 * fRam0000000146b4a34c;
  FQuat::Rotator(&local_28,param_2);
  return param_2;
}



// FUNCTION 1430d5f10 FUN_1430d5f10 body=308 status=ok
// SIG undefined FUN_1430d5f10(void)

undefined8 * FUN_1430d5f10(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined8 local_98;
  undefined4 local_90;
  char local_88 [64];
  undefined1 local_48 [64];
  
  if ((param_3 == 0) && (param_3 = FUN_1430e2e50(), param_3 == 0)) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    return param_2;
  }
  FUN_142ced5e0(param_3,local_88,1);
  if ((local_88[0] == '\t') || (local_88[0] == '\0')) {
    uVar1 = FUN_142ced5e0(param_3,local_48,0);
    FUN_142ce6bb0(param_3,param_2,uVar1);
  }
  else {
    FUN_1430d6fd0(param_1,&local_b8);
    uVar1 = FUN_142ced5e0(param_3,local_48,1);
    FUN_142ce6b40(param_3,&local_c8,uVar1);
    local_a8 = local_c8 - local_b8;
    local_a4 = local_c4 - local_b4;
    local_a0 = local_c0 - local_b0;
    FVector::Rotation(&local_a8,&local_98);
    (**(code **)(*param_1 + 0x5b0))(param_1,&local_98,&local_c8);
    *param_2 = local_98;
    *(undefined4 *)(param_2 + 1) = local_90;
  }
  return param_2;
}



// FUNCTION 1430d6050 FUN_1430d6050 body=105 status=ok
// SIG undefined FUN_1430d6050(void)

undefined8 * FUN_1430d6050(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_48 [64];
  
  lVar1 = FUN_1430e2e50();
  if (lVar1 == 0) {
    *param_2 = DAT_1467b1710;
    *(undefined4 *)(param_2 + 1) = DAT_1467b1718;
    return param_2;
  }
  uVar2 = FUN_142ced5e0(lVar1,local_48,1);
  FUN_142ce6b40(lVar1,param_2,uVar2);
  return param_2;
}



// FUNCTION 1430d60c0 FUN_1430d60c0 body=611 status=ok
// SIG undefined FUN_1430d60c0(void)

float * FUN_1430d60c0(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_88;
  float fStack_84;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  float local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [64];
  
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x748) + 0x490);
  if (lVar5 != 0) {
    lVar7 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) && (*(longlong *)(lVar5 + 0x528) != 0)) {
      lVar7 = *(longlong *)(param_1 + 0x748);
      if (*(longlong *)(lVar7 + 0x168) == 0) {
        local_70 = DAT_1464aa7b0;
        puVar8 = &local_78;
        local_78 = DAT_1464aa7a8;
      }
      else {
        puVar8 = (undefined8 *)FUN_142369f10(*(longlong *)(lVar7 + 0x168),&local_68);
        lVar7 = *(longlong *)(param_1 + 0x748);
      }
      uVar3 = *puVar8;
      fVar10 = *(float *)(puVar8 + 1);
      if (*(longlong *)(lVar7 + 0x168) == 0) {
        local_60 = (float)DAT_1464aa7c0;
        puVar8 = &local_68;
        local_68 = DAT_1464aa7b8;
      }
      else {
        puVar8 = (undefined8 *)FUN_14238d380(*(longlong *)(lVar7 + 0x168),&local_68);
      }
      uVar4 = *puVar8;
      local_60 = *(float *)(puVar8 + 1);
      FUN_1426e1d20(*(undefined8 *)(lVar5 + 0x528),local_58);
      FRotator::RotateVector(local_58,&local_78,&DAT_1464aa7a8);
      FRotator::RotateVector(local_58,local_48,&DAT_1464aa7b8);
      fVar1 = param_3[1];
      fStack_84 = (float)((ulonglong)uVar3 >> 0x20);
      local_88 = (float)uVar3;
      fVar2 = *param_3;
      fVar11 = (float)local_78 * local_88 + local_78._4_4_ * fStack_84 + local_70 * fVar10;
      fVar12 = (float)local_78 * (float)uVar4 + local_78._4_4_ * (float)((ulonglong)uVar4 >> 0x20) +
               local_70 * local_60;
      fVar9 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
      fVar10 = (fVar1 * fVar11 - fVar2 * fVar12) - *(float *)(param_1 + 0x1c);
      if (*(float *)(param_1 + 0x20) <= fVar9) {
        fVar10 = *(float *)(param_1 + 0x750);
      }
      *(float *)(param_1 + 0x750) = fVar10;
      if (fVar10 < 0.0) {
        fVar9 = -fVar9;
      }
      *param_2 = fVar2 * fVar11 + fVar1 * fVar12;
      param_2[1] = fVar9;
      return param_2;
    }
  }
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  return param_2;
}



// FUNCTION 1430d6330 FUN_1430d6330 body=470 status=ok
// SIG undefined FUN_1430d6330(void)

float * FUN_1430d6330(longlong param_1,float *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar1 = *(longlong *)(param_1 + 0xcf0);
  if (lVar1 != 0) {
    lVar7 = (longlong)*(int *)(param_1 + 0x228);
    uVar6 = 0;
    fVar12 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    uVar4 = uVar6;
    if (3 < lVar7) {
      pfVar3 = (float *)(lVar1 + 0x50);
      lVar2 = (lVar7 - 4U >> 2) + 1;
      uVar4 = lVar2 * 4;
      do {
        if (*(char *)(pfVar3 + -0xd) == '\0') {
          fVar9 = fVar9 + pfVar3[-2];
          fVar10 = fVar10 + pfVar3[-1];
          fVar11 = fVar11 + *pfVar3;
          uVar6 = (ulonglong)((int)uVar6 + 1);
        }
        if (*(char *)(pfVar3 + 0x1b) == '\0') {
          fVar9 = fVar9 + pfVar3[0x26];
          fVar10 = fVar10 + pfVar3[0x27];
          fVar11 = fVar11 + pfVar3[0x28];
          uVar6 = (ulonglong)((int)uVar6 + 1);
        }
        if (*(char *)(pfVar3 + 0x43) == '\0') {
          fVar9 = fVar9 + pfVar3[0x4e];
          fVar10 = fVar10 + pfVar3[0x4f];
          fVar11 = fVar11 + pfVar3[0x50];
          uVar6 = (ulonglong)((int)uVar6 + 1);
        }
        if (*(char *)(pfVar3 + 0x6b) == '\0') {
          fVar9 = fVar9 + pfVar3[0x76];
          fVar10 = fVar10 + pfVar3[0x77];
          fVar11 = fVar11 + pfVar3[0x78];
          uVar6 = (ulonglong)((int)uVar6 + 1);
        }
        pfVar3 = pfVar3 + 0xa0;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    iVar5 = (int)uVar6;
    if ((longlong)uVar4 < lVar7) {
      pfVar3 = (float *)(lVar1 + 0x50 + uVar4 * 0xa0);
      lVar7 = lVar7 - uVar4;
      do {
        if (*(char *)(pfVar3 + -0xd) == '\0') {
          fVar9 = fVar9 + pfVar3[-2];
          fVar10 = fVar10 + pfVar3[-1];
          fVar11 = fVar11 + *pfVar3;
          uVar6 = (ulonglong)((int)uVar6 + 1);
        }
        iVar5 = (int)uVar6;
        pfVar3 = pfVar3 + 0x28;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (0 < iVar5) {
      fVar8 = 1.0 / (float)iVar5;
      fVar9 = fVar9 * fVar8;
      fVar10 = fVar10 * fVar8;
      fVar11 = fVar11 * fVar8;
      fVar8 = fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11;
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
        fVar11 = 0.0;
      }
      else {
        fVar8 = 1.0 / SQRT(fVar8);
        fVar12 = fVar8 * fVar10;
        fVar11 = fVar8 * fVar11;
        fVar8 = fVar8 * fVar9;
      }
      *param_2 = fVar8;
      param_2[1] = fVar12;
      param_2[2] = fVar11;
      return param_2;
    }
  }
  fVar11 = *(float *)(param_3 + 1);
  *(undefined8 *)param_2 = *param_3;
  param_2[2] = fVar11;
  return param_2;
}



// FUNCTION 1430d6510 FUN_1430d6510 body=20 status=ok
// SIG undefined FUN_1430d6510(void)

undefined4 FUN_1430d6510(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x30c);
  }
  return 0;
}



// FUNCTION 1430d6530 FUN_1430d6530 body=232 status=ok
// SIG undefined FUN_1430d6530(void)

void FUN_1430d6530(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_1426970a0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b4a4b8) && (_Init_thread_header(&DAT_146b4a4b8), DAT_146b4a4b8 == -1))
  {
    uVar1 = FUN_1430e5840();
    FUN_1430e5840();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"VehicleParts",1);
    DAT_146b4a4b0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b4a4b8);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b4a4b0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b4a4b0 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b4a4b0 + 0x30));
  }
  return;
}



// FUNCTION 1430d6620 FUN_1430d6620 body=433 status=ok
// SIG undefined FUN_1430d6620(void)

void FUN_1430d6620(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b4a568) && (_Init_thread_header(&DAT_146b4a568), DAT_146b4a568 == -1)) {
    uVar1 = APlayerState::GetPrivateStaticClass();
    APlayerState::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"OwningVehicle",1);
    DAT_146b4a560 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b4a568);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b4a560 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b4a560 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b4a560 + 0x30));
  }
  if ((*piVar5 < DAT_146b4a578) && (_Init_thread_header(&DAT_146b4a578), DAT_146b4a578 == -1)) {
    uVar1 = APlayerState::GetPrivateStaticClass();
    APlayerState::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ParentSocket",1);
    DAT_146b4a570 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b4a578);
  }
  if (0 < *(int *)(DAT_146b4a570 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b4a570 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b4a570 + 0x30));
  }
  return;
}



// FUNCTION 1430d67e0 FUN_1430d67e0 body=437 status=ok
// SIG undefined FUN_1430d67e0(void)

void FUN_1430d67e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b4a488) && (_Init_thread_header(&DAT_146b4a488), DAT_146b4a488 == -1)) {
    uVar1 = URemnantQuestSubQuest::GetPrivateStaticClass();
    URemnantQuestSubQuest::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RemoteTurretRelativeRotation",1);
    DAT_146b4a480 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b4a488);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b4a480 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b4a480 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b4a480 + 0x30));
  }
  if ((*piVar5 < DAT_146b4a498) && (_Init_thread_header(&DAT_146b4a498), DAT_146b4a498 == -1)) {
    uVar1 = URemnantQuestSubQuest::GetPrivateStaticClass();
    URemnantQuestSubQuest::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RotationInputs",1);
    DAT_146b4a490 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b4a498);
  }
  if (0 < *(int *)(DAT_146b4a490 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b4a490 + 0x40) + (short)iVar4;
      local_14 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b4a490 + 0x30));
  }
  return;
}



// FUNCTION 1430d69a0 FUN_1430d69a0 body=433 status=ok
// SIG undefined FUN_1430d69a0(void)

void FUN_1430d69a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b4a4f8) && (_Init_thread_header(&DAT_146b4a4f8), DAT_146b4a4f8 == -1)) {
    uVar1 = UTextBlock::GetPrivateStaticClass();
    UTextBlock::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"BoostPool",1);
    DAT_146b4a4f0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b4a4f8);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b4a4f0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b4a4f0 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b4a4f0 + 0x30));
  }
  if ((*piVar5 < DAT_146b4a508) && (_Init_thread_header(&DAT_146b4a508), DAT_146b4a508 == -1)) {
    uVar1 = UTextBlock::GetPrivateStaticClass();
    UTextBlock::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsBoosting",1);
    DAT_146b4a500 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b4a508);
  }
  if (0 < *(int *)(DAT_146b4a500 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b4a500 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b4a500 + 0x30));
  }
  return;
}



// FUNCTION 1430d6b60 FUN_1430d6b60 body=433 status=ok
// SIG undefined FUN_1430d6b60(void)

void FUN_1430d6b60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b4a518) && (_Init_thread_header(&DAT_146b4a518), DAT_146b4a518 == -1)) {
    uVar1 = FUN_1430e4ad0();
    FUN_1430e4ad0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"BoostPool",1);
    DAT_146b4a510 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b4a518);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b4a510 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b4a510 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b4a510 + 0x30));
  }
  if ((*piVar5 < DAT_146b4a528) && (_Init_thread_header(&DAT_146b4a528), DAT_146b4a528 == -1)) {
    uVar1 = FUN_1430e4ad0();
    FUN_1430e4ad0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bTeleportRequested",1);
    DAT_146b4a520 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b4a528);
  }
  if (0 < *(int *)(DAT_146b4a520 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b4a520 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b4a520 + 0x30));
  }
  return;
}



// FUNCTION 1430d6d20 FUN_1430d6d20 body=232 status=ok
// SIG undefined FUN_1430d6d20(void)

void FUN_1430d6d20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b4a548) && (_Init_thread_header(&DAT_146b4a548), DAT_146b4a548 == -1))
  {
    uVar1 = FUN_1430e3990();
    FUN_1430e3990();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedState",1);
    DAT_146b4a540 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b4a548);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b4a540 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b4a540 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b4a540 + 0x30));
  }
  return;
}



// FUNCTION 1430d6e10 FUN_1430d6e10 body=236 status=ok
// SIG undefined FUN_1430d6e10(void)

void FUN_1430d6e10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b4a588) && (_Init_thread_header(&DAT_146b4a588), DAT_146b4a588 == -1))
  {
    uVar1 = AGameStateBase::GetPrivateStaticClass();
    AGameStateBase::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsPowerSliding",1);
    DAT_146b4a580 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b4a588);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b4a580 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b4a580 + 0x40) + (short)iVar3;
      local_14 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b4a580 + 0x30));
  }
  return;
}



// FUNCTION 1430d6f10 FUN_1430d6f10 body=63 status=ok
// SIG undefined FUN_1430d6f10(void)

undefined8 FUN_1430d6f10(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_142d52a00(param_1 + 0x1d8);
  if (cVar1 != '\0') {
    uVar2 = FUN_142d52a20(param_1 + 0x1d8);
    uVar2 = FArchive::operator<<(uVar2);
    uVar2 = FUN_142d61c30(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1430d6f50 FUN_1430d6f50 body=63 status=ok
// SIG undefined FUN_1430d6f50(void)

undefined8 FUN_1430d6f50(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_142d52a00(param_1 + 0x228);
  if (cVar1 != '\0') {
    uVar2 = FUN_142d52a20(param_1 + 0x228);
    uVar2 = FArchive::operator<<(uVar2);
    uVar2 = FUN_142d61c30(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1430d6f90 FUN_1430d6f90 body=37 status=ok
// SIG undefined FUN_1430d6f90(void)

undefined8 FUN_1430d6f90(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x4d8) != 0) && (*(longlong *)(param_1 + 0x4e0) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001430d6fae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e0) + 0x50))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1430d6fd0 FUN_1430d6fd0 body=402 status=ok
// SIG undefined FUN_1430d6fd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1430d6fd0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  
  plVar4 = *(longlong **)(param_1 + 0x178);
  if (plVar4 == (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x288) == 0) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x118) + 0x168);
LAB_1430d707c:
      if (plVar4 != (longlong *)0x0) goto LAB_1430d70ec;
    }
    else {
      plVar4 = (longlong *)
               FUN_14222b250(*(longlong *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x288),0);
      if (plVar4 != (longlong *)0x0) {
        cVar2 = (**(code **)(*plVar4 + 0x440))(plVar4,*(undefined8 *)(param_1 + 0x288));
        if (((cVar2 == '\0') && (plVar4[0x32] != 0)) &&
           (lVar1 = *(longlong *)(plVar4[0x32] + 0x118), lVar1 != *(longlong *)(param_1 + 0x118))) {
          plVar4 = (longlong *)FUN_14222b250(lVar1,*(undefined8 *)(param_1 + 0x288),0);
        }
        goto LAB_1430d707c;
      }
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
    if (lVar1 == 0) {
      local_18 = (undefined4)_DAT_1468b5d90;
      uStack_14 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
      uVar3 = DAT_1468b5d98;
    }
    else {
      local_18 = *(undefined4 *)(lVar1 + 0x220);
      uStack_14 = *(undefined4 *)(lVar1 + 0x224);
      uVar3 = *(undefined4 *)(lVar1 + 0x228);
    }
  }
  else {
LAB_1430d70ec:
    if (*(longlong *)(param_1 + 0x288) == 0) {
      local_18 = (undefined4)plVar4[0x44];
      uStack_14 = *(undefined4 *)((longlong)plVar4 + 0x224);
      uVar3 = (undefined4)plVar4[0x45];
    }
    else {
      puVar5 = (undefined4 *)
               (**(code **)(*plVar4 + 0x428))(plVar4,&local_18,*(undefined8 *)(param_1 + 0x288));
      local_18 = *puVar5;
      uStack_14 = puVar5[1];
      uVar3 = puVar5[2];
    }
  }
  *param_2 = local_18;
  param_2[1] = uStack_14;
  param_2[2] = uVar3;
  return param_2;
}



// FUNCTION 1430d7170 FUN_1430d7170 body=899 status=ok
// SIG undefined FUN_1430d7170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1430d7170(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 *local_1b0;
  undefined *local_1a8;
  undefined1 local_198 [8];
  float local_190;
  float local_18c;
  float local_188;
  undefined8 local_180;
  float local_178;
  float local_170;
  float local_16c;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_150;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  byte local_128 [12];
  undefined4 local_11c;
  float local_114;
  float local_110;
  float local_10c;
  undefined1 local_98 [72];
  longlong local_50;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  plVar7 = *(longlong **)(param_1 + 0x2f0);
  local_180 = DAT_1468b5da0;
  local_178 = DAT_1468b5da8;
  if ((plVar7 != (longlong *)0x0) ||
     (plVar7 = *(longlong **)(param_1 + 0x208), plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x648))(DAT_1468b5da0,&local_160,&local_150);
    if (*(char *)(param_1 + 0x25f) == '\0') {
      fVar1 = (float)DAT_146b4a310;
      fVar2 = DAT_146b4a310._4_4_;
      fVar3 = DAT_146b4a310._8_4_;
      auVar8._4_4_ = local_14c;
      auVar8._0_4_ = local_150;
      auVar8._8_4_ = local_148;
      auVar8._12_4_ = 0;
      auVar8 = divps(auVar8,_DAT_146b4a310);
      local_150 = local_150 - (float)(int)auVar8._0_4_ * fVar1;
      local_14c = local_14c - (float)(int)auVar8._4_4_ * fVar2;
      local_148 = local_148 - (float)(int)auVar8._8_4_ * fVar3;
      fVar9 = (float)(((uint)(local_150 + fVar1) ^ (uint)local_150) & -(uint)(0.0 <= local_150) ^
                     (uint)(local_150 + fVar1));
      fVar10 = (float)(((uint)(local_14c + fVar2) ^ (uint)local_14c) & -(uint)(0.0 <= local_14c) ^
                      (uint)(local_14c + fVar2));
      local_178 = (float)(((uint)(local_148 + fVar3) ^ (uint)local_148) & -(uint)(0.0 <= local_148)
                         ^ (uint)(local_148 + fVar3));
      local_178 = (float)(((uint)(local_178 - fVar3) ^ (uint)local_178) &
                          -(uint)(fRam0000000146b4a308 < local_178) ^ (uint)local_178);
      local_180 = CONCAT44(((uint)(fVar10 - fVar2) ^ (uint)fVar10) &
                           -(uint)(fRam0000000146b4a304 < fVar10) ^ (uint)fVar10,
                           ((uint)(fVar9 - fVar1) ^ (uint)fVar9) & -(uint)(_DAT_146b4a300 < fVar9) ^
                           (uint)fVar9);
      local_168 = local_178;
    }
    else {
      pfVar4 = (float *)FRotator::Vector(&local_150,&local_170);
      local_18c = local_15c + pfVar4[1] * 16384.0;
      local_188 = local_158 + pfVar4[2] * 16384.0;
      local_190 = *pfVar4 * 16384.0 + local_160;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_146b4a4a8) {
        _Init_thread_header(&DAT_146b4a4a8);
        if (DAT_146b4a4a8 == -1) {
          FName::FName(&DAT_146b4a4a0,L"TurretMovement",1);
          _Init_thread_footer(&DAT_146b4a4a8);
        }
      }
      local_1b8 = *(undefined8 *)(param_1 + 0x208);
      FUN_1422ffb20(local_98,DAT_146b4a4a0,local_198,1);
      lVar5 = 0;
      if (*(longlong *)(param_1 + 0x208) != 0) {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 0x168);
      }
      if ((lVar5 != 0) && (*(longlong *)(lVar5 + 400) != 0)) {
        FCollisionQueryParams::AddIgnoredActor(local_98);
      }
      _guard_xfg_dispatch_icall_nop(local_128,0,0x90);
      lVar5 = *(longlong *)(param_1 + 0x120);
      local_11c = 0x3f800000;
      if (lVar5 == 0) {
        lVar5 = FUN_1423407b0(param_1);
      }
      local_1a8 = &DAT_146aefe68;
      local_1b0 = local_98;
      local_1b8 = CONCAT44(local_1b8._4_4_,4);
      UWorld::LineTraceSingleByChannel(lVar5,local_128,&local_160,&local_190);
      if ((local_128[0] & 1) != 0) {
        local_190 = local_114;
        local_188 = local_10c;
        local_18c = local_110;
      }
      FUN_1430d6fd0(param_1,&local_140);
      local_170 = local_190 - local_140;
      local_16c = local_18c - local_13c;
      local_168 = local_188 - local_138;
      puVar6 = (undefined8 *)FVector::Rotation(&local_170,&local_140);
      local_180 = *puVar6;
      local_178 = *(float *)(puVar6 + 1);
      if (local_30 != 0) {
        FMemory::Free();
      }
      if (local_50 != 0) {
        FMemory::Free();
      }
    }
  }
  FRotator::Quaternion(&local_180,param_2);
  return param_2;
}



// FUNCTION 1430d7500 FUN_1430d7500 body=249 status=ok
// SIG undefined FUN_1430d7500(void)

undefined8 FUN_1430d7500(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float *pfVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_58;
  float local_50;
  undefined8 local_48 [8];
  
  plVar5 = *(longlong **)(param_1 + 0x1b8);
  if ((plVar5 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x1b0) == 0)) {
    fVar7 = 0.0;
    fVar6 = DAT_1468b5d94;
    fVar8 = DAT_1468b5d98;
    fVar9 = DAT_1468b5d90;
  }
  else {
    cVar1 = FUN_1430dd9e0();
    if (cVar1 == '\0') {
      puVar3 = local_48;
      lVar2 = 0x38;
    }
    else {
      puVar3 = &local_58;
      lVar2 = 0x188;
    }
    puVar3 = (undefined8 *)
             FUN_1430d4ae0(*(longlong *)(param_1 + 0x1b0) + lVar2,puVar3,
                           *(undefined8 *)(param_1 + 0x1b8));
    plVar5 = *(longlong **)(param_1 + 0x1b8);
    local_58 = *puVar3;
    local_50 = *(float *)(puVar3 + 1);
    fVar7 = (float)((ulonglong)local_58 >> 0x20);
    fVar6 = fVar7;
    fVar8 = local_50;
    fVar9 = (float)local_58;
  }
  pfVar4 = (float *)(**(code **)(*plVar5 + 0x308))(plVar5,local_48);
  fVar6 = fVar6 * pfVar4[1] + fVar9 * *pfVar4 + fVar8 * pfVar4[2];
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  return CONCAT44(fVar7,fVar6 * 0.036);
}



// FUNCTION 1430d7600 FUN_1430d7600 body=264 status=ok
// SIG undefined FUN_1430d7600(void)

void FUN_1430d7600(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *local_28;
  undefined8 local_20;
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_14222e300(param_1,&local_28);
  plVar1 = local_28 + (int)local_20;
  plVar7 = local_28;
  do {
    if (plVar7 == plVar1) {
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
      }
      return;
    }
    lVar3 = *plVar7;
    if (lVar3 != 0) {
      plVar4 = (longlong *)*param_3;
      for (plVar5 = plVar4; plVar5 != plVar4 + (int)param_3[1]; plVar5 = plVar5 + 1) {
        if (*plVar5 == lVar3) {
          if ((int)((longlong)plVar5 - (longlong)plVar4 >> 3) != -1) goto LAB_1430d76ca;
          break;
        }
      }
      lVar6 = FUN_14222e2a0(lVar3);
      if (lVar6 == param_1) {
        iVar2 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
        }
        *(longlong *)(*param_3 + (longlong)iVar2 * 8) = lVar3;
        FUN_1430ccd50(lVar3,param_3,0,0);
      }
    }
LAB_1430d76ca:
    plVar7 = plVar7 + 1;
  } while( true );
}



// FUNCTION 1430d7710 FUN_1430d7710 body=124 status=ok
// SIG undefined FUN_1430d7710(void)

float FUN_1430d7710(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  
  plVar3 = *(longlong **)(param_1 + 0xd10);
  plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0xd18) * 2;
  fVar6 = 1.0;
  for (; plVar3 != plVar4; plVar3 = plVar3 + 2) {
    if ((((int)plVar3[1] != 0) && ((longlong *)*plVar3 != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(*(longlong *)*plVar3 + 0x18))(), cVar1 != '\0')) {
      if ((int)plVar3[1] == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)*plVar3;
      }
      fVar5 = (float)(**(code **)(*plVar2 + 0x38))();
      fVar6 = fVar6 * fVar5;
    }
  }
  return fVar6;
}



// FUNCTION 1430d7790 FUN_1430d7790 body=124 status=ok
// SIG undefined FUN_1430d7790(void)

float FUN_1430d7790(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  
  plVar3 = *(longlong **)(param_1 + 0xd20);
  plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0xd28) * 2;
  fVar6 = 1.0;
  for (; plVar3 != plVar4; plVar3 = plVar3 + 2) {
    if ((((int)plVar3[1] != 0) && ((longlong *)*plVar3 != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(*(longlong *)*plVar3 + 0x18))(), cVar1 != '\0')) {
      if ((int)plVar3[1] == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)*plVar3;
      }
      fVar5 = (float)(**(code **)(*plVar2 + 0x38))();
      fVar6 = fVar6 * fVar5;
    }
  }
  return fVar6;
}



// FUNCTION 1430d7810 FUN_1430d7810 body=37 status=ok
// SIG undefined FUN_1430d7810(void)

undefined8 FUN_1430d7810(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x4d8) != 0) && (*(longlong *)(param_1 + 0x4e0) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001430d782e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e0) + 0x28))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1430d7870 FUN_1430d7870 body=703 status=ok
// SIG undefined FUN_1430d7870(void)

void FUN_1430d7870(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong local_38;
  int local_30;
  
  *(float *)(param_2 + 10) = *(float *)(param_1 + 0x7c) * 10000.0;
  *(float *)(param_2 + 0xb) = *(float *)(param_1 + 0x78) * 0.10471976;
  *(float *)((longlong)param_2 + 0x5c) = *(float *)(param_1 + 0x80) * 10000.0;
  *(float *)(param_2 + 0xc) = *(float *)(param_1 + 0x84) * 10000.0;
  *(float *)((longlong)param_2 + 100) = *(float *)(param_1 + 0x88) * 10000.0;
  fVar8 = (float)FUN_140963040();
  lVar5 = 0;
  *(float *)((longlong)param_2 + 0x54) = fVar8 * 10000.0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  uVar2 = FRuntimeFloatCurve::GetRichCurve(param_1);
  FRichCurve::GetCopyOfKeys(uVar2,&local_38);
  if (8 < local_30) {
    local_30 = 8;
  }
  lVar6 = (longlong)local_30;
  lVar7 = lVar5;
  if (3 < lVar6) {
    iVar3 = *(int *)(param_2 + 8);
    lVar4 = (lVar6 - 4U >> 2) + 1;
    fVar10 = 1.0 / fVar8;
    lVar7 = lVar4 * 4;
    do {
      fVar9 = *(float *)(local_38 + 4 + lVar5) / *(float *)(param_1 + 0x78);
      if (0.0 <= fVar9) {
        if (1.0 <= fVar9) {
          fVar9 = 1.0;
        }
      }
      else {
        fVar9 = 0.0;
      }
      fVar1 = *(float *)(local_38 + 8 + lVar5);
      *(float *)((longlong)param_2 + (ulonglong)(uint)(iVar3 * 2) * 4) = fVar9;
      *(float *)((longlong)param_2 + (ulonglong)(*(int *)(param_2 + 8) * 2 + 1) * 4) =
           fVar10 * fVar1;
      iVar3 = *(int *)(param_2 + 8);
      *(int *)(param_2 + 8) = iVar3 + 1;
      fVar9 = *(float *)(local_38 + 0x20 + lVar5) / *(float *)(param_1 + 0x78);
      if (0.0 <= fVar9) {
        if (1.0 <= fVar9) {
          fVar9 = 1.0;
        }
      }
      else {
        fVar9 = 0.0;
      }
      fVar1 = *(float *)(local_38 + 0x24 + lVar5);
      *(float *)((longlong)param_2 + (ulonglong)(uint)((iVar3 + 1) * 2) * 4) = fVar9;
      *(float *)((longlong)param_2 + (ulonglong)(*(int *)(param_2 + 8) * 2 + 1) * 4) =
           fVar10 * fVar1;
      iVar3 = *(int *)(param_2 + 8);
      *(int *)(param_2 + 8) = iVar3 + 1;
      fVar9 = *(float *)(lVar5 + 0x3c + local_38) / *(float *)(param_1 + 0x78);
      if (0.0 <= fVar9) {
        if (1.0 <= fVar9) {
          fVar9 = 1.0;
        }
      }
      else {
        fVar9 = 0.0;
      }
      fVar1 = *(float *)(lVar5 + 0x40 + local_38);
      *(float *)((longlong)param_2 + (ulonglong)(uint)((iVar3 + 1) * 2) * 4) = fVar9;
      *(float *)((longlong)param_2 + (ulonglong)(*(int *)(param_2 + 8) * 2 + 1) * 4) =
           fVar10 * fVar1;
      iVar3 = *(int *)(param_2 + 8);
      *(int *)(param_2 + 8) = iVar3 + 1;
      fVar9 = *(float *)(lVar5 + 0x58 + local_38) / *(float *)(param_1 + 0x78);
      if (0.0 <= fVar9) {
        if (1.0 <= fVar9) {
          fVar9 = 1.0;
        }
      }
      else {
        fVar9 = 0.0;
      }
      fVar1 = *(float *)(lVar5 + 0x5c + local_38);
      lVar5 = lVar5 + 0x70;
      *(float *)((longlong)param_2 + (ulonglong)(uint)((iVar3 + 1) * 2) * 4) = fVar9;
      *(float *)((longlong)param_2 + (ulonglong)(*(int *)(param_2 + 8) * 2 + 1) * 4) =
           fVar10 * fVar1;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      iVar3 = *(int *)(param_2 + 8);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (lVar7 < lVar6) {
    lVar5 = lVar7 * 0x1c;
    lVar6 = lVar6 - lVar7;
    do {
      fVar10 = *(float *)(lVar5 + 4 + local_38) / *(float *)(param_1 + 0x78);
      if (0.0 <= fVar10) {
        if (1.0 <= fVar10) {
          fVar10 = 1.0;
        }
      }
      else {
        fVar10 = 0.0;
      }
      fVar9 = *(float *)(lVar5 + 8 + local_38);
      lVar5 = lVar5 + 0x1c;
      *(float *)((longlong)param_2 + (ulonglong)(uint)(*(int *)(param_2 + 8) * 2) * 4) = fVar10;
      *(float *)((longlong)param_2 + (ulonglong)(*(int *)(param_2 + 8) * 2 + 1) * 4) =
           (1.0 / fVar8) * fVar9;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1430d7b30 FUN_1430d7b30 body=410 status=ok
// SIG undefined FUN_1430d7b30(void)

float * FUN_1430d7b30(longlong *param_1,float *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float local_58;
  float local_54;
  float local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  (**(code **)(*param_1 + 0x18))(param_1,&local_58);
  if (*(longlong *)(param_1[0xe9] + 0x168) == 0) {
    local_40 = DAT_1464aa7b0;
    puVar1 = &local_48;
    local_48 = DAT_1464aa7a8;
  }
  else {
    puVar1 = (undefined8 *)FUN_142369f10(*(longlong *)(param_1[0xe9] + 0x168),&local_48);
  }
  fVar5 = (float)*puVar1;
  local_48._4_4_ = (float)((ulonglong)*puVar1 >> 0x20);
  fVar2 = fVar5 * local_58 + local_48._4_4_ * local_54 + local_50 * *(float *)(puVar1 + 1);
  fVar5 = fVar5 - local_58 * fVar2;
  local_48._4_4_ = local_48._4_4_ - fVar2 * local_54;
  fVar6 = *(float *)(puVar1 + 1) - fVar2 * local_50;
  *param_2 = fVar5;
  param_2[1] = local_48._4_4_;
  param_2[2] = fVar6;
  fVar2 = fVar5 * fVar5 + local_48._4_4_ * local_48._4_4_ + fVar6 * fVar6;
  if (1e-08 < fVar2) {
    auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar3 = auVar4._0_4_;
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    *param_2 = fVar5 * fVar3;
    param_2[1] = local_48._4_4_ * fVar3;
    param_2[2] = fVar6 * fVar3;
  }
  return param_2;
}



// FUNCTION 1430d7cd0 FUN_1430d7cd0 body=127 status=ok
// SIG undefined FUN_1430d7cd0(void)

undefined8 FUN_1430d7cd0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x748) + 0x168);
  if (lVar1 == 0) {
    local_20 = DAT_1464aa7a0;
    puVar2 = &local_28;
    local_28 = DAT_1464aa798;
  }
  else {
    puVar2 = (undefined8 *)FUN_14238db80(lVar1,&local_28);
  }
  local_1c = *puVar2;
  local_14 = *(undefined4 *)(puVar2 + 1);
  FUN_1430d6330(param_1 + -0x5b8,param_2,&local_1c);
  return param_2;
}



// FUNCTION 1430d7d50 FUN_1430d7d50 body=138 status=ok
// SIG undefined FUN_1430d7d50(void)

void FUN_1430d7d50(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  uVar2 = 0;
  if (3 < uVar1) {
    uVar2 = (uVar1 - 4 >> 2) + 1;
    uVar4 = (ulonglong)uVar2;
    uVar2 = uVar2 * 4;
    lVar3 = 0;
    do {
      *(undefined4 *)(lVar3 + 0x1c + *(longlong *)(param_1 + 0x60)) = 0;
      *(undefined4 *)(lVar3 + 0x5c + *(longlong *)(param_1 + 0x60)) = 0;
      *(undefined4 *)(lVar3 + 0x9c + *(longlong *)(param_1 + 0x60)) = 0;
      *(undefined4 *)(lVar3 + 0xdc + *(longlong *)(param_1 + 0x60)) = 0;
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + 0x100;
    } while (uVar4 != 0);
  }
  if (uVar2 < uVar1) {
    uVar4 = (ulonglong)(uVar1 - uVar2);
    lVar3 = (ulonglong)uVar2 << 6;
    do {
      *(undefined4 *)(lVar3 + 0x1c + *(longlong *)(param_1 + 0x60)) = 0;
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + 0x40;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 1430d7de0 FUN_1430d7de0 body=565 status=ok
// SIG undefined FUN_1430d7de0(void)

void FUN_1430d7de0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined8 local_res8;
  
  if (*(char *)(param_1 + 0x458) != '\0') {
    if ((*(longlong *)(param_1 + 0x460) == 0) ||
       (lVar8 = *(longlong *)(param_1 + 0x168), lVar8 == 0)) {
      if ((*(char *)(param_1 + 0x128) != '\x03') &&
         (plVar1 = *(longlong **)(param_1 + 0x168), plVar1 != (longlong *)0x0)) {
        lVar8 = FUN_1429f11d0();
        if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          (**(code **)(*plVar1 + 0x5b8))(plVar1,0);
                    /* WARNING: Could not recover jumptable at 0x0001430d800e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar1 + 0x638))(plVar1,0);
          return;
        }
      }
    }
    else {
      if ((*(byte *)(lVar8 + 0xb8) & 4) != 0) {
        FUN_1430e2810(param_1,param_1);
        lVar8 = *(longlong *)(param_1 + 0x168);
      }
      plVar1 = (longlong *)(lVar8 + 0x150);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_1441bfda8;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        plVar6[2] = (longlong)FUN_1430e2810;
        plVar6[3] = param_1;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[4] = lVar7;
        *plVar6 = (longlong)&PTR_FUN_1441bfdf0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_res8);
        iVar2 = *(int *)(lVar8 + 0x158);
        *(int *)(lVar8 + 0x158) = iVar2 + 1;
        if (*(int *)(lVar8 + 0x15c) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        lVar8 = *plVar1;
        *(longlong **)(lVar8 + (longlong)iVar2 * 0x10) = plVar6;
        *(undefined4 *)(lVar8 + 8 + (longlong)iVar2 * 0x10) = 3;
      }
      lVar8 = AActor::GetParentComponent(param_1);
      if (lVar8 != 0) {
        lVar7 = UGCombatTextWidget::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(L"&AVehiclePartActor::WeldActorToVehicle",L"::");
          pwVar5 = (wchar_t *)0x0;
          while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
            pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
            pwVar5 = pwVar4;
          }
          FName::FName(&local_res8,pwVar5 + 2,1);
          TBaseDynamicMulticastDelegate<FWeakObjectPtr,void,UPrimitiveComponent_*,AActor_*,UPrimitiveComponent_*,int,bool,FHitResult_const_&>
          ::__Internal_AddDynamic<ANgheDa>(lVar8 + 0x308,param_1,FUN_1430e2810,local_res8);
        }
      }
    }
  }
  return;
}



// FUNCTION 1430d8020 FUN_1430d8020 body=332 status=ok
// SIG undefined FUN_1430d8020(void)

void FUN_1430d8020(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  FUN_1430022a0();
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 != 0) {
    lVar5 = FUN_1430e5840();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      plVar7 = *(longlong **)(param_2 + 0x20);
      plVar1 = plVar7 + *(int *)(param_2 + 0x28);
      if (plVar7 == plVar1) {
        *(undefined1 *)(param_1 + 0x1a0) = 0;
      }
      else {
        do {
          lVar5 = *plVar7;
          if (lVar5 != 0) {
            lVar6 = FUN_1430e5bb0();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              iVar2 = *(int *)(lVar3 + 0x548);
              *(int *)(lVar3 + 0x548) = iVar2 + 1;
              if (*(int *)(lVar3 + 0x54c) < iVar2 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (lVar3 + 0x540,iVar2);
              }
              *(longlong *)(*(longlong *)(lVar3 + 0x540) + (longlong)iVar2 * 8) = lVar5;
            }
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar1);
        *(undefined1 *)(param_1 + 0x1a0) = 0;
      }
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  return;
}



// FUNCTION 1430d8170 FUN_1430d8170 body=496 status=ok
// SIG undefined FUN_1430d8170(void)

void FUN_1430d8170(ulonglong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  ulonglong uVar7;
  int *piVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  lVar3 = *(longlong *)(param_1 + 0x150);
  if (lVar3 != 0) {
    iVar6 = *(int *)(param_1 + 0x148);
    iVar2 = *(int *)(lVar3 + 0x6d0);
    piVar8 = *(int **)(param_1 + 0x140);
    piVar5 = piVar8 + (longlong)iVar6 * 0x1e;
    local_res8 = param_1;
    local_res10 = param_2;
    if (piVar8 != piVar5) {
      do {
        uVar7 = 0;
        if (0 < (longlong)iVar2) {
          local_res18 = 0;
          local_res20 = 0;
          uVar9 = uVar7;
          lVar10 = (longlong)iVar2;
          do {
            lVar4 = 8;
            if (*(longlong *)(piVar8 + 0x14) != 0) {
              lVar4 = 0x50;
            }
            if ((*(longlong *)(lVar4 + (longlong)piVar8) != 0) &&
               (*(longlong *)(lVar4 + (longlong)piVar8) ==
                *(longlong *)(*(longlong *)(lVar3 + 0x6c8) + uVar7))) {
              *piVar8 = (int)uVar9;
              FUN_1422f3ff0(piVar8 + 2,param_2,0);
              FUN_1422f3ff0(piVar8 + 8,local_res10,0);
              FUN_1422f3ff0(piVar8 + 0x14,local_res10,0);
              FUN_1422f3ff0(piVar8 + 0xe,local_res10,0);
              lVar4 = *(longlong *)(lVar3 + 0x6c8);
              *(undefined8 *)(piVar8 + 0x1b) = *(undefined8 *)(lVar4 + 0x14 + uVar7);
              piVar8[0x1d] = *(int *)(lVar4 + 0x1c + uVar7);
              param_2 = local_res10;
            }
            uVar9 = (ulonglong)((int)uVar9 + 1);
            uVar7 = uVar7 + 0x20;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        piVar8 = piVar8 + 0x1e;
      } while (piVar8 != piVar5);
      iVar6 = *(int *)(local_res8 + 0x148);
    }
    puVar1 = (undefined8 *)(local_res8 + 0x140);
    local_res8 = local_res8 & 0xffffffffffffff00;
    FUN_1430c76f0(*puVar1,(longlong)iVar6,0,&local_res8);
  }
  return;
}



// FUNCTION 1430d8360 FUN_1430d8360 body=124 status=ok
// SIG undefined FUN_1430d8360(void)

void FUN_1430d8360(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_142340f20();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_1430e5840();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(longlong *)(param_1 + 0x200) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x200) = 0;
  return;
}



// FUNCTION 1430d83e0 FUN_1430d83e0 body=124 status=ok
// SIG undefined FUN_1430d83e0(void)

void FUN_1430d83e0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_142340f20();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_1430e5840();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(longlong *)(param_1 + 0x1b8) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  return;
}



// FUNCTION 1430d8460 FUN_1430d8460 body=124 status=ok
// SIG undefined FUN_1430d8460(void)

void FUN_1430d8460(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_142340f20();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_1430e5840();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(longlong *)(param_1 + 0x220) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x220) = 0;
  return;
}



// FUNCTION 1430d84f0 FUN_1430d84f0 body=124 status=ok
// SIG undefined FUN_1430d84f0(void)

void FUN_1430d84f0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_142340f20();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_1430e5840();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(longlong *)(param_1 + 0x270) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x270) = 0;
  return;
}



// FUNCTION 1430d8570 FUN_1430d8570 body=417 status=ok
// SIG undefined FUN_1430d8570(void)

void FUN_1430d8570(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = param_1[0x23];
  if (lVar5 != 0) {
    lVar3 = FUN_1430e5840();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1430d85c9;
  }
  lVar5 = 0;
LAB_1430d85c9:
  param_1[0x1a0] = lVar5;
  if (lVar5 != 0) {
    FUN_142350b20(param_1,1);
    (**(code **)(*param_1 + 0x450))(param_1,*(undefined8 *)(param_1[0x1a0] + 0x4d0));
    lVar5 = param_1[0x1a0];
    *(longlong **)(lVar5 + 0x4d8) = param_1;
    uVar4 = UUserObjectListEntry::GetPrivateStaticClass();
    uVar4 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar4);
    *(undefined8 *)(lVar5 + 0x4e0) = uVar4;
    cVar2 = (**(code **)(*param_1 + 0x318))(param_1);
    if (cVar2 != '\0') {
      FUN_142338140(param_1);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146b4a598) {
      _Init_thread_header(&DAT_146b4a598);
      if (DAT_146b4a598 == -1) {
        FName::FName(&DAT_146b4a590,L"ColResponseContext",1);
        _Init_thread_footer(&DAT_146b4a598);
      }
    }
    lVar5 = DAT_146b4a590;
    if (DAT_146b4a590 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar4 = FUN_1430e36b0();
    lVar5 = FUN_1417985e0(uVar4,param_1,lVar5,0,0,0,0,0,0);
    param_1[0x19f] = lVar5;
  }
  *(undefined4 *)(param_1 + 0x19a) = *(undefined4 *)((longlong)param_1 + 0x80c);
  return;
}



// FUNCTION 1430d8720 FUN_1430d8720 body=39 status=ok
// SIG undefined FUN_1430d8720(void)

void FUN_1430d8720(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145a9b010;
    return;
  }
  return;
}



// FUNCTION 1430d8750 FUN_1430d8750 body=37 status=ok
// SIG undefined FUN_1430d8750(void)

ulonglong FUN_1430d8750(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((*(longlong *)(param_1 + 0x4d8) != 0) && (*(longlong *)(param_1 + 0x4e0) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001430d876e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e0) + 0x48))();
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1430d8780 FUN_1430d8780 body=8 status=ok
// SIG undefined FUN_1430d8780(void)

undefined1 FUN_1430d8780(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x260);
}



// FUNCTION 1430d8790 IsChildActor body=12 status=ok
// SIG undefined IsChildActor(void)

void AActor::IsChildActor(longlong param_1)

{
  FUN_1407c3030(param_1 + 0x1c8);
  return;
}



// FUNCTION 1430d87a0 FUN_1430d87a0 body=54 status=ok
// SIG undefined FUN_1430d87a0(void)

undefined1 FUN_1430d87a0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = AGameStateBase::GetPrivateStaticClass();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  if (lVar2 != 0) {
    return *(undefined1 *)(lVar2 + 0x1c0);
  }
  return 0;
}



// FUNCTION 1430d87e0 IsAsyncCallbackRegistered body=12 status=ok
// SIG undefined IsAsyncCallbackRegistered(void)

bool UCharacterMovementComponent::IsAsyncCallbackRegistered(longlong param_1)

{
  return *(longlong *)(param_1 + 0x1b0) != 0;
}



// FUNCTION 1430d87f0 FUN_1430d87f0 body=109 status=ok
// SIG undefined FUN_1430d87f0(void)

undefined8 FUN_1430d87f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x140);
  lVar3 = (longlong)*(int *)(param_1 + 0x148) * 0x78 + lVar2;
  while( true ) {
    if (lVar2 == lVar3) {
      return 0;
    }
    cVar1 = FBoneReference::IsValidToEvaluate(lVar2 + 8,param_3);
    if (cVar1 == '\x01') break;
    lVar2 = lVar2 + 0x78;
  }
  return 1;
}



// FUNCTION 1430d8860 FUN_1430d8860 body=1311 status=ok
// SIG undefined FUN_1430d8860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430d8860(float param_1,float param_2,longlong param_3,longlong *param_4,longlong *param_5,
                  float *param_6)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_218 [32];
  float local_1f8;
  float local_1f4;
  float local_1f0;
  uint local_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  undefined1 local_1c0 [24];
  undefined1 local_1a8 [192];
  undefined1 *local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_1c8 = param_5;
  if (0.0 < param_1) {
    uVar13 = 0;
    uVar2 = *(uint *)(param_3 + 0x58);
    fVar23 = param_6[1];
    local_1f8 = 0.0;
    local_1f4 = 0.0;
    local_1f0 = 0.0;
    local_e8 = (undefined1 *)0x0;
    local_e0 = 0;
    fVar16 = *param_6;
    local_1ec = uVar2;
    if (0 < (int)uVar2) {
      FUN_14231bc50(local_1a8,uVar2);
    }
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    uVar9 = uVar2;
    if (uVar2 != 0) {
      local_1d0 = 0;
      do {
        local_1d8 = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        puVar10 = &uStack_1e0;
        lVar15 = 2;
        plVar8 = local_1c8;
        do {
          lVar12 = *plVar8;
          if (lVar12 != 0) {
            if (param_4 != (longlong *)0x0) {
              (**(code **)(*param_4 + 0x348))
                        (param_4,
                         "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxVehicle\\Private\\VehicleContactModifyCallback.cpp"
                         ,0xaf);
              lVar12 = *plVar8;
            }
            puVar6 = (undefined4 *)
                     physx::PxRigidBodyExt::getVelocityAtPos
                               (local_1c0,lVar12,uVar13 * 0x40 + *(longlong *)(param_3 + 0x60));
            *(undefined4 *)(puVar10 + -1) = *puVar6;
            uVar3 = puVar6[1];
            *(undefined4 *)puVar10 = puVar6[2];
            *(undefined4 *)((longlong)puVar10 + -4) = uVar3;
            if (param_4 != (longlong *)0x0) {
              (**(code **)(*param_4 + 0x350))(param_4);
            }
          }
          uVar4 = local_e0;
          lVar12 = local_1d0;
          plVar8 = plVar8 + 1;
          puVar10 = (undefined8 *)((longlong)puVar10 + 0xc);
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        lVar15 = *(longlong *)(param_3 + 0x60);
        fVar17 = *(float *)(local_1d0 + 0x20 + lVar15);
        fVar18 = *(float *)(local_1d0 + 0x24 + lVar15);
        fVar19 = *(float *)(local_1d0 + 0x28 + lVar15);
        lVar11 = (longlong)(int)local_e0;
        iVar5 = (int)local_e0 + 1;
        local_e0 = CONCAT44(local_e0._4_4_,iVar5);
        fVar20 = ((local_1e8._4_4_ - (float)local_1d8) * fVar18 +
                  ((float)local_1e8 - uStack_1e0._4_4_) * fVar17 +
                  ((float)uStack_1e0 - local_1d8._4_4_) * fVar19 +
                 (1.0 / param_1) * *(float *)(local_1d0 + 0xc + lVar15)) * (fVar23 + fVar16);
        fVar17 = fVar17 * fVar20;
        fVar18 = fVar18 * fVar20;
        fVar19 = fVar19 * fVar20;
        fVar20 = fVar17 + local_1f8;
        fVar21 = fVar18 + local_1f4;
        fVar22 = fVar19 + local_1f0;
        local_1f8 = fVar20;
        local_1f4 = fVar21;
        local_1f0 = fVar22;
        if (local_e0._4_4_ < iVar5) {
          TArray<FVector,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow
                    (local_1a8,uVar4 & 0xffffffff);
        }
        puVar7 = local_1a8;
        if (local_e8 != (undefined1 *)0x0) {
          puVar7 = local_e8;
        }
        local_1d0 = lVar12 + 0x40;
        uVar14 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar14;
        *(float *)(puVar7 + lVar11 * 0xc) = fVar17;
        *(float *)(puVar7 + lVar11 * 0xc + 4) = fVar18;
        *(float *)(puVar7 + lVar11 * 0xc + 8) = fVar19;
        uVar9 = local_1ec;
      } while (uVar14 < uVar2);
    }
    lVar15 = 0;
    fVar23 = 1.0 / (float)uVar9;
    fVar23 = SQRT(fVar23 * fVar21 * fVar23 * fVar21 + fVar23 * fVar20 * fVar23 * fVar20 +
                  fVar23 * fVar22 * fVar23 * fVar22);
    if (uVar9 != 0) {
      uVar13 = (ulonglong)uVar9;
      lVar12 = lVar15;
      do {
        fVar16 = 3.4028235e+38;
        if ((*param_6 != 0.0) && (fVar20 = fVar23 / *param_6, param_2 < fVar20)) {
          puVar7 = local_1a8;
          if (local_e8 != (undefined1 *)0x0) {
            puVar7 = local_e8;
          }
          fVar20 = SQRT(*(float *)(puVar7 + lVar12) * *(float *)(puVar7 + lVar12) +
                        *(float *)(puVar7 + lVar12 + 4) * *(float *)(puVar7 + lVar12 + 4) +
                        *(float *)(puVar7 + lVar12 + 8) * *(float *)(puVar7 + lVar12 + 8)) *
                   (param_2 / fVar20);
          if (fVar20 < 3.4028235e+38) {
            pbVar1 = (byte *)(*(longlong *)(param_3 + 0x60) +
                              (ulonglong)*(uint *)(param_3 + 0x58) * -0x30 + 0x2b);
            *pbVar1 = *pbVar1 | 0x20;
            *(float *)(*(longlong *)(param_3 + 0x60) + 0x1c + lVar15) = fVar20;
            fVar16 = fVar20;
          }
        }
        if ((param_6[1] != 0.0) && (fVar20 = fVar23 / param_6[1], param_2 < fVar20)) {
          puVar7 = local_1a8;
          if (local_e8 != (undefined1 *)0x0) {
            puVar7 = local_e8;
          }
          fVar20 = SQRT(*(float *)(puVar7 + lVar12) * *(float *)(puVar7 + lVar12) +
                        *(float *)(puVar7 + lVar12 + 4) * *(float *)(puVar7 + lVar12 + 4) +
                        *(float *)(puVar7 + lVar12 + 8) * *(float *)(puVar7 + lVar12 + 8)) *
                   (param_2 / fVar20);
          if (fVar20 < fVar16) {
            pbVar1 = (byte *)(*(longlong *)(param_3 + 0x60) +
                              (ulonglong)*(uint *)(param_3 + 0x58) * -0x30 + 0x2b);
            *pbVar1 = *pbVar1 | 0x20;
            *(float *)(*(longlong *)(param_3 + 0x60) + 0x1c + lVar15) = fVar20;
          }
        }
        lVar12 = lVar12 + 0xc;
        lVar15 = lVar15 + 0x40;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    if (local_e8 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1430d8d80 FUN_1430d8d80 body=250 status=ok
// SIG undefined FUN_1430d8d80(void)

void FUN_1430d8d80(longlong param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0xd00);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x500) != '\0')) {
    *param_3 = 0x7f7fffff;
    *param_4 = 0x7f7fffff;
    return;
  }
  if (*(longlong *)(param_1 + 0xcf8) == 0) {
    return;
  }
  *(longlong *)(*(longlong *)(param_1 + 0xcf8) + 0x28) = lVar3;
  lVar3 = *(longlong *)(param_2 + 0x118);
  if (lVar3 != 0) {
    lVar2 = FUN_1430e5840();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1430d8e2a;
  }
  lVar3 = 0;
LAB_1430d8e2a:
  *(longlong *)(*(longlong *)(param_1 + 0xcf8) + 0x30) = lVar3;
  if (*(char *)(param_1 + 0xcb0) == '\0') {
    uVar4 = FUN_142c98860(param_1 + 0xc60,*(undefined8 *)(param_1 + 0xcf8));
  }
  else {
    uVar4 = 0x7f7fc99e;
  }
  *param_3 = uVar4;
  *param_4 = uVar4;
  return;
}



// FUNCTION 1430d8e80 FUN_1430d8e80 body=2856 status=ok
// SIG undefined FUN_1430d8e80(void)

/* WARNING: Removing unreachable block (ram,0x0001430d9166) */

void FUN_1430d8e80(longlong param_1,longlong param_2,uint param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  BOOL BVar7;
  longlong *plVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  float *pfVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  byte bVar18;
  uint uVar19;
  longlong lVar20;
  byte bVar21;
  byte bVar22;
  longlong lVar23;
  longlong *plVar24;
  uint uVar25;
  bool bVar26;
  float fVar27;
  undefined4 uVar28;
  float local_res8 [2];
  longlong **in_stack_fffffffffffffe68;
  undefined4 uVar29;
  uint local_178;
  longlong *local_170;
  float local_168;
  float local_164;
  longlong local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  longlong *local_130;
  longlong local_128;
  ulonglong local_120;
  longlong local_118;
  undefined1 local_110 [8];
  int local_108;
  uint local_104;
  undefined1 local_100 [8];
  int local_f8;
  uint local_f4;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined4 local_c8;
  
  plVar8 = (longlong *)
           FUN_1426e2530(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  local_178 = 0;
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x6c);
  if (param_3 != 0) {
    local_160 = 0;
    do {
      lVar20 = local_160;
      (**(code **)(*plVar8 + 0x348))(plVar8,0,0);
      lVar20 = lVar20 * 0x68;
      plVar11 = *(longlong **)(lVar20 + 0x10 + param_2);
      (**(code **)(*plVar11 + 0xa0))(plVar11,local_100);
      plVar11 = *(longlong **)(lVar20 + 0x18 + param_2);
      (**(code **)(*plVar11 + 0xa0))(plVar11,local_110);
      plVar11 = *(longlong **)(lVar20 + param_2);
      cVar5 = (**(code **)(*plVar11 + 0x20))(plVar11,"PxRigidBody");
      plVar12 = (longlong *)0x0;
      if (cVar5 != '\0') {
        plVar12 = plVar11;
      }
      plVar11 = *(longlong **)(lVar20 + 8 + param_2);
      local_130 = plVar12;
      cVar5 = (**(code **)(*plVar11 + 0x20))(plVar11);
      plVar24 = (longlong *)0x0;
      if (cVar5 != '\0') {
        plVar24 = plVar11;
      }
      local_170 = plVar24;
      if (plVar12 == (longlong *)0x0) {
        bVar18 = 0;
      }
      else {
        pbVar9 = (byte *)(**(code **)(*plVar12 + 0x178))(plVar12);
        bVar18 = *pbVar9;
      }
      if (plVar24 == (longlong *)0x0) {
        bVar21 = 0;
      }
      else {
        pbVar9 = (byte *)(**(code **)(*plVar24 + 0x178))(plVar24);
        bVar21 = *pbVar9;
      }
      bVar22 = bVar21 & 1;
      local_res8[0] = (float)(CONCAT31(local_res8[0]._1_3_,bVar21) & 0xffffff01);
      if (plVar12 == (longlong *)0x0) {
        local_158 = 0;
      }
      else {
        local_158 = (**(code **)(*plVar12 + 0x100))(plVar12);
      }
      if (plVar24 == (longlong *)0x0) {
        local_154 = 0;
      }
      else {
        local_154 = (**(code **)(*plVar24 + 0x100))(plVar24);
      }
      (**(code **)(*plVar8 + 0x350))();
      uVar19 = local_f4 >> 0x17 & 0x1f;
      uVar25 = local_104 >> 0x17 & 0x1f;
      if ((uVar19 == 6) || (uVar25 == 6)) {
        if (local_f8 == local_108) {
LAB_1430d9904:
          FUN_1430d7d50((ulonglong)local_178 * 0x68 + param_2);
        }
        else if (uVar19 == 6) {
          if (uVar25 != 6) {
            iVar6 = 1;
            goto LAB_1430d90d3;
          }
LAB_1430d92ee:
          if (((bVar18 & 1) != 0) || (bVar22 != 0)) goto LAB_1430d9904;
          plVar11 = (longlong *)FUN_1430d4030(*(undefined8 *)(lVar20 + param_2));
          plVar12 = (longlong *)FUN_1430d4030(*(undefined8 *)(lVar20 + 8 + param_2));
          if ((plVar11 != (longlong *)0x0) && (plVar12 != (longlong *)0x0)) {
            local_170 = (longlong *)CONCAT44(local_170._4_4_,0x3f800000);
            local_res8[0] = 1.0;
            (**(code **)(*plVar11 + 0x608))(plVar11,plVar12,&local_170,local_res8);
            local_164 = 1.0;
            local_168 = 1.0;
            (**(code **)(*plVar12 + 0x608))(plVar12,plVar11,&local_164,&local_168);
            uVar19 = 0;
            if (*(int *)(lVar20 + 0x58 + param_2) != 0) {
              do {
                uVar19 = uVar19 + 1;
                lVar10 = *(longlong *)(lVar20 + 0x60 + param_2) +
                         (ulonglong)*(uint *)(lVar20 + 0x58 + param_2) * -0x30;
                pbVar9 = (byte *)(lVar10 + 0x2b);
                *pbVar9 = *pbVar9 | 8;
                *(float *)(lVar10 + 4) = 1.0 / local_res8[0];
                pfVar13 = (float *)(*(longlong *)(lVar20 + 0x60 + param_2) +
                                   (ulonglong)*(uint *)(lVar20 + 0x58 + param_2) * -0x30);
                pbVar9 = (byte *)((longlong)pfVar13 + 0x2b);
                *pbVar9 = *pbVar9 | 8;
                *pfVar13 = 1.0 / local_170._0_4_;
                lVar10 = *(longlong *)(lVar20 + 0x60 + param_2) +
                         (ulonglong)*(uint *)(lVar20 + 0x58 + param_2) * -0x30;
                pbVar9 = (byte *)(lVar10 + 0x2b);
                *pbVar9 = *pbVar9 | 8;
                *(float *)(lVar10 + 0xc) = 1.0 / local_168;
                lVar10 = *(longlong *)(lVar20 + 0x60 + param_2) +
                         (ulonglong)*(uint *)(lVar20 + 0x58 + param_2) * -0x30;
                pbVar9 = (byte *)(lVar10 + 0x2b);
                *pbVar9 = *pbVar9 | 8;
                *(float *)(lVar10 + 8) = 1.0 / local_164;
              } while (uVar19 < *(uint *)(lVar20 + 0x58 + param_2));
            }
          }
          local_f0 = local_130;
          in_stack_fffffffffffffe68 = &local_f0;
          local_e8 = plVar24;
          FUN_1430d8860(uVar1,0x462d9c72,(ulonglong)local_178 * 0x68 + param_2,plVar8,
                        in_stack_fffffffffffffe68,&local_158);
        }
        else {
          iVar6 = 0;
LAB_1430d90d3:
          lVar23 = local_160 * 0xd;
          lVar10 = *(longlong *)(param_2 + (iVar6 + lVar23) * 8);
          if ((((lVar10 != 0) && (piVar2 = *(int **)(lVar10 + 0x10), piVar2 != (int *)0x0)) &&
              (*piVar2 == 1)) && (*(longlong *)(piVar2 + 2) != 0)) {
            lVar10 = *(longlong *)(piVar2 + 2) + 0x138;
            cVar5 = FWeakObjectPtr::IsValid(lVar10);
            if (cVar5 != '\0') {
              lVar10 = FWeakObjectPtr::Get(lVar10);
              lVar10 = *(longlong *)(lVar10 + 0x118);
              if (lVar10 != 0) {
                FUN_1430e3bf0();
                plVar11 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar10);
                if (plVar11 != (longlong *)0x0) {
                  lVar10 = *(longlong *)(param_2 + ((int)(iVar6 + 1U & 0x80000001) + lVar23) * 8);
                  if (((lVar10 != 0) && (piVar2 = *(int **)(lVar10 + 0x10), piVar2 != (int *)0x0))
                     && ((*piVar2 == 1 && (*(longlong *)(piVar2 + 2) != 0)))) {
                    lVar10 = *(longlong *)(piVar2 + 2) + 0x138;
                    cVar5 = FWeakObjectPtr::IsValid(lVar10);
                    if (cVar5 != '\0') {
                      lVar10 = FWeakObjectPtr::Get(lVar10);
                      if (*(longlong *)(lVar10 + 0x118) != 0) {
                        FUN_1428dfc70();
                      }
                    }
                  }
                  cVar5 = (**(code **)(*plVar11 + 0x10))(plVar11);
                  if (cVar5 != '\0') goto LAB_1430d9904;
                }
              }
            }
            bVar22 = local_res8[0]._0_1_;
          }
          if (uVar19 == 6) {
            plVar24 = local_170;
            if (uVar25 == 6) goto LAB_1430d92ee;
LAB_1430d9222:
            if (uVar25 != 2) {
              local_120 = (ulonglong)(uVar19 != 6);
              local_118 = local_160 * 0xd;
              lVar10 = FUN_1430d4030(*(undefined8 *)(param_2 + (local_118 + local_120) * 8));
              if (((lVar10 != 0) && (local_128 = *(longlong *)(lVar10 + 0x2a0), local_128 != 0)) &&
                 (((lVar10 = *(longlong *)(lVar20 + 0x10 + param_2), lVar10 != 0 &&
                   ((lVar10 = FUN_14095c950(*(undefined8 *)(lVar10 + 0x10)), lVar10 != 0 &&
                    (iVar6 = *(int *)(lVar10 + 0xa8), iVar6 != -1)))) ||
                  ((lVar10 = *(longlong *)(lVar20 + 0x18 + param_2), lVar10 != 0 &&
                   ((lVar10 = FUN_14095c950(*(undefined8 *)(lVar10 + 0x10)), lVar10 != 0 &&
                    (iVar6 = *(int *)(lVar10 + 0xa8), iVar6 != -1)))))))) {
                uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffffe68 >> 0x20);
                if ((uVar19 == 5) || (uVar25 == 5)) {
                  bVar26 = true;
                }
                else {
                  bVar26 = false;
                }
                if ((uVar19 != 7) && (uVar25 != 7)) {
                  plVar11 = (longlong *)UAudioSettings::GetPrivateStaticClass();
                  lVar10 = plVar11[0x1f];
                  if (lVar10 == 0) {
                    (**(code **)(*plVar11 + 0x368))(plVar11);
                    lVar10 = plVar11[0x1f];
                  }
                  fVar27 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar10 + 0x128) * 0.017453292);
                  (**(code **)(*plVar8 + 0x348))
                            (plVar8,
                             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxVehicle\\Private\\VehicleContactModifyCallback.cpp"
                             ,0x18b);
                  uVar28 = DAT_1467b171c;
                  if (bVar26) {
                    uVar28 = DAT_146b4a50c;
                  }
                  in_stack_fffffffffffffe68 = (longlong **)CONCAT44(uVar29,fVar27);
                  iVar6 = FUN_143958e60(local_128,iVar6,uVar28,0x7f7fffff,in_stack_fffffffffffffe68,
                                        (ulonglong)local_178 * 0x68 + param_2);
                  if ((bVar26) && (iVar6 != 0)) {
                    plVar11 = *(longlong **)
                               (param_2 + ((ulonglong)((int)local_120 - 1U & 1) + local_118) * 8);
                    plVar12 = (longlong *)0x0;
                    if ((short)plVar11[1] == 6) {
                      plVar12 = plVar11;
                    }
                    if (((plVar12 != (longlong *)0x0) &&
                        (cVar5 = (**(code **)(*plVar12 + 0x1f0))(), cVar5 == '\0')) &&
                       (uVar17 = 0, *(int *)(lVar20 + 0x58 + param_2) != 0)) {
                      do {
                        lVar10 = uVar17 * 0x40;
                        uVar16 = (int)uVar17 + 1;
                        uVar17 = (ulonglong)uVar16;
                        pbVar9 = (byte *)(*(longlong *)(lVar20 + 0x60 + param_2) +
                                          (ulonglong)*(uint *)(lVar20 + 0x58 + param_2) * -0x30 +
                                         0x2b);
                        *pbVar9 = *pbVar9 | 0x20;
                        *(undefined4 *)(lVar10 + 0x1c + *(longlong *)(lVar20 + 0x60 + param_2)) =
                             0x7f7fffff;
                      } while (uVar16 < *(uint *)(lVar20 + 0x58 + param_2));
                    }
                  }
                  else if (iVar6 == *(int *)(lVar20 + 0x58 + param_2)) {
                    (**(code **)(*plVar8 + 0x350))(plVar8);
                    goto LAB_1430d9919;
                  }
                  (**(code **)(*plVar8 + 0x350))(plVar8);
                }
              }
              if (((bVar18 & 1) != 0) || (local_res8[0]._0_1_ != '\0')) {
                if ((uVar19 == 1) || (uVar25 == 1)) {
                  local_e0 = local_130;
                  local_d8 = local_170;
                  in_stack_fffffffffffffe68 = &local_e0;
                  FUN_1430d8860(uVar1,0x44d05555,(ulonglong)local_178 * 0x68 + param_2,plVar8,
                                in_stack_fffffffffffffe68,&local_158);
                }
                else if ((uVar19 == 0xe) || (uVar25 == 0xe)) {
                  FUN_1430d7d50((ulonglong)local_178 * 0x68 + param_2);
                }
              }
              goto LAB_1430d9919;
            }
          }
          else if (uVar19 != 2) goto LAB_1430d9222;
          lVar23 = local_160 * 0xd;
          lVar10 = FUN_1430d3f80(*(undefined8 *)(param_2 + ((ulonglong)(uVar19 == 2) + lVar23) * 8))
          ;
          if ((((lVar10 != 0) &&
               (lVar23 = *(longlong *)(param_2 + ((ulonglong)(uVar19 != 2) + lVar23) * 8),
               lVar23 != 0)) && (piVar2 = *(int **)(lVar23 + 0x10), piVar2 != (int *)0x0)) &&
             ((*piVar2 == 1 && (*(longlong *)(piVar2 + 2) != 0)))) {
            lVar23 = *(longlong *)(piVar2 + 2) + 0x138;
            cVar5 = FWeakObjectPtr::IsValid(lVar23);
            if (cVar5 != '\0') {
              lVar23 = FWeakObjectPtr::Get(lVar23);
              lVar23 = *(longlong *)(lVar23 + 0x118);
              if (lVar23 != 0) {
                lVar14 = APostProcessVolume::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar23 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
                  bVar26 = false;
                }
                else {
                  bVar26 = true;
                }
                if (bVar26) {
                  bVar26 = true;
                  FUN_1430e3bf0();
                  plVar11 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar23);
                  if (plVar11 != (longlong *)0x0) {
                    cVar5 = (**(code **)(*plVar11 + 0x18))(plVar11);
                    bVar26 = cVar5 == '\0';
                  }
                  if (bVar26) {
                    FUN_1430d7d50((ulonglong)local_178 * 0x68 + param_2);
                    puVar3 = *(undefined8 **)(lVar20 + 0x60 + param_2);
                    local_c8 = *(undefined4 *)(puVar3 + 1);
                    uVar4 = *puVar3;
                    FWeakObjectPtr::operator=(&local_150,lVar10);
                    FWeakObjectPtr::operator=(&local_148);
                    local_138 = local_c8;
                    local_134 = 0;
                    local_140 = uVar4;
                    BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b4a3b8);
                    if (BVar7 == 0) {
                      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b4a3b8);
                    }
                    lVar10 = DAT_146b4a430;
                    lVar23 = (longlong)DAT_146b4a438 * 0x20 + DAT_146b4a430;
                    for (lVar20 = DAT_146b4a430; lVar20 != lVar23; lVar20 = lVar20 + 0x20) {
                      cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar20);
                      if ((cVar5 == '\0') ||
                         (cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                                            (lVar20 + 8), cVar5 == '\0')) {
                        bVar26 = false;
                      }
                      else {
                        bVar26 = true;
                      }
                      if (bVar26) {
                        iVar6 = (int)(lVar20 - lVar10 >> 5);
                        if ((iVar6 < 0) || (DAT_146b4a438 <= iVar6)) goto LAB_1430d982f;
                        bVar26 = true;
                        goto LAB_1430d9831;
                      }
                    }
                    iVar6 = -1;
LAB_1430d982f:
                    bVar26 = false;
LAB_1430d9831:
                    lVar20 = DAT_146b4a430;
                    if (bVar26) {
                      *(undefined8 *)((longlong)iVar6 * 0x20 + 0x10 + DAT_146b4a430) = local_140;
                      *(undefined4 *)((longlong)iVar6 * 0x20 + 0x18 + lVar20) = local_138;
                      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b4a3b8);
                    }
                    else {
                      lVar20 = (longlong)DAT_146b4a438;
                      DAT_146b4a438 = DAT_146b4a438 + 1;
                      if (DAT_146b4a43c < DAT_146b4a438) {
                        FUN_140fd5770(&DAT_146b4a430);
                      }
                      puVar15 = (undefined4 *)(lVar20 * 0x20 + DAT_146b4a430);
                      *puVar15 = local_150;
                      puVar15[1] = local_14c;
                      puVar15[2] = local_148;
                      puVar15[3] = local_144;
                      *(undefined8 *)(puVar15 + 4) = local_140;
                      puVar15[6] = local_138;
                      puVar15[7] = local_134;
                      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b4a3b8);
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_1430d9919:
      local_178 = local_178 + 1;
      local_160 = local_160 + 1;
    } while (local_178 < param_3);
  }
  return;
}



// FUNCTION 1430d99b0 FUN_1430d99b0 body=31 status=ok
// SIG undefined FUN_1430d99b0(void)

void FUN_1430d99b0(longlong param_1)

{
  FUN_1409664d0();
  *(undefined8 *)(param_1 + 0xce8) = 0;
  return;
}



// FUNCTION 1430d99d0 FUN_1430d99d0 body=101 status=ok
// SIG undefined FUN_1430d99d0(void)

void FUN_1430d99d0(longlong param_1,longlong param_2)

{
  if ((param_2 == *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50)) &&
     (*(char *)(param_1 + 0x2d) == '\0')) {
    *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 0x16;
    *(undefined2 *)(param_1 + 0x28) = 0x404;
    *(longlong *)(param_1 + 0x70) = param_1;
    if (*(char *)(param_2 + 0x64d) != '\0') {
      FTickFunction::AddPrerequisite(param_1 + 0x20,param_2,param_2 + 0x640);
      FTickFunction::RegisterTickFunction
                (param_1 + 0x20,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50) + 0x30));
    }
  }
  return;
}



// FUNCTION 1430d9aa0 FUN_1430d9aa0 body=26 status=ok
// SIG undefined FUN_1430d9aa0(void)

void FUN_1430d9aa0(longlong param_1,byte param_2)

{
  if (*(byte *)(param_1 + 0x1c1) != param_2) {
    *(byte *)(param_1 + 0x1c1) = param_2;
    FUN_1430dbb00(param_1,param_2 ^ 1,1);
    return;
  }
  return;
}



// FUNCTION 1430d9ac0 FUN_1430d9ac0 body=23 status=ok
// SIG undefined FUN_1430d9ac0(void)

void FUN_1430d9ac0(longlong param_1,byte param_2)

{
  if (*(byte *)(param_1 + 0x1c0) != param_2) {
    *(byte *)(param_1 + 0x1c0) = param_2;
    FUN_1430dc0b0(param_1,param_2 ^ 1);
    return;
  }
  return;
}



// FUNCTION 1430d9b00 FUN_1430d9b00 body=216 status=ok
// SIG undefined FUN_1430d9b00(void)

float FUN_1430d9b00(longlong param_1,float param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  lVar4 = *(longlong *)(param_1 + 0xa0);
  if (lVar4 != 0) {
    lVar3 = FUN_1430e3810();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1430d9b5b;
  }
  lVar4 = 0;
LAB_1430d9b5b:
  plVar1 = *(longlong **)(lVar4 + 0x118);
  fVar5 = 1.0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_1430e5840();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      fVar5 = (float)(**(code **)(*plVar1 + 0x848))(plVar1);
    }
  }
  return param_2 * *(float *)(lVar4 + 0xcd4) * fVar5;
}



// FUNCTION 1430d9be0 FUN_1430d9be0 body=426 status=ok
// SIG undefined FUN_1430d9be0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430d9be0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                  undefined4 param_13,undefined4 *param_14,undefined4 *param_15,undefined4 *param_16
                  )

{
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_a8 = param_7;
  local_a0 = param_9;
  local_a4 = param_8;
  local_94 = param_12;
  local_ac = param_6;
  local_98 = param_10;
  local_9c = param_11;
  local_90 = param_13;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = param_2;
  local_b4 = param_3;
  local_b0 = param_4;
  (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x5b0))
            (*(longlong **)(param_1 + 0xa0),param_1,&local_b8,&local_c8);
  *param_14 = (undefined4)local_c8;
  *param_15 = local_c8._4_4_;
  *param_16 = local_c0;
  *(undefined4 *)(param_1 + 0xac) = param_6;
  *(undefined4 *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xb4) = param_4;
  *(undefined4 *)(param_1 + 0xb8) = param_10;
  *(undefined4 *)(param_1 + 0xbc) = param_11;
  *(undefined4 *)(param_1 + 0xc0) = *param_14;
  *(undefined4 *)(param_1 + 0xc4) = *param_15;
  *(undefined4 *)(param_1 + 200) = *param_16;
  return;
}



// FUNCTION 1430d9d90 FUN_1430d9d90 body=95 status=ok
// SIG undefined FUN_1430d9d90(void)

void FUN_1430d9d90(longlong *param_1)

{
  longlong lVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x1c4) = 1;
  if ((param_1[0x36] != 0) && (*(char *)((longlong)param_1 + 0x1c1) != '\0')) {
    lVar1 = param_1[0x24];
    *(undefined1 *)((longlong)param_1 + 0x1c1) = 0;
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(lVar1 + 0x790);
                    /* WARNING: Could not recover jumptable at 0x0001430d9de2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x410))(param_1);
    return;
  }
  return;
}



// FUNCTION 1430d9df0 AddEventTriggerToList body=31 status=ok
// SIG undefined AddEventTriggerToList(void)

void UCigars_DrivingManager::AddEventTriggerToList(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_142dafbc0(param_1 + 0x1c8,local_res10);
  return;
}



// FUNCTION 1430d9e10 FUN_1430d9e10 body=1771 status=ok
// SIG undefined FUN_1430d9e10(void)

void FUN_1430d9e10(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float local_140;
  float local_13c;
  float local_138;
  undefined1 local_130 [16];
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  undefined1 local_100 [200];
  
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x2a0) + 0xa0);
  (**(code **)(*plVar4 + 0x128))(plVar4,&local_140);
  (**(code **)(*plVar4 + 0x128))(plVar4,local_130);
  (**(code **)(*plVar4 + 0xa0))(plVar4,&local_120);
  lVar6 = (**(code **)(*plVar4 + 0xf0))(plVar4,local_100);
  fVar31 = *(float *)(lVar6 + 0x10) + *(float *)(lVar6 + 0x10);
  fVar28 = *(float *)(lVar6 + 0x14) + *(float *)(lVar6 + 0x14);
  fVar25 = *(float *)(lVar6 + 0x18) + *(float *)(lVar6 + 0x18);
  fVar34 = local_114 * local_114 - 0.5;
  fVar23 = local_11c * fVar28 + local_120 * fVar31 + local_118 * fVar25;
  fVar32 = (float)DAT_1464aa7a8 + (float)DAT_1464aa7a8;
  fVar11 = local_108 +
           (local_120 * fVar28 - local_11c * fVar31) * local_114 + fVar34 * fVar25 +
           local_118 * fVar23;
  fVar29 = DAT_1464aa7a8._4_4_ + DAT_1464aa7a8._4_4_;
  fVar12 = local_10c +
           (local_118 * fVar31 - local_120 * fVar25) * local_114 + fVar34 * fVar28 +
           local_11c * fVar23;
  fVar25 = local_110 +
           (local_11c * fVar25 - local_118 * fVar28) * local_114 + fVar34 * fVar31 +
           local_120 * fVar23;
  fVar17 = DAT_1464aa7b0 + DAT_1464aa7b0;
  fVar23 = *(float *)(param_1 + 0xcd4);
  fVar28 = local_11c * fVar29 + local_120 * fVar32 + local_118 * fVar17;
  fVar31 = local_118 * fVar28;
  fVar26 = (local_120 * fVar29 - local_11c * fVar32) * local_114;
  fVar14 = local_11c * fVar28;
  fVar21 = (local_118 * fVar32 - local_120 * fVar17) * local_114;
  fVar28 = local_120 * fVar28;
  fVar20 = (local_11c * fVar17 - local_118 * fVar29) * local_114;
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x290)) {
    lVar6 = 0;
    lVar9 = 0;
    fVar13 = local_120;
    fVar35 = local_11c;
    fVar38 = local_118;
    do {
      lVar8 = *(longlong *)(lVar9 + *(longlong *)(param_1 + 0x288));
      if (lVar8 == 0) {
LAB_1430da19b:
        lVar8 = 0;
      }
      else {
        lVar7 = FUN_1430e3550();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        fVar13 = local_120;
        fVar35 = local_11c;
        fVar38 = local_118;
        if (!bVar5) goto LAB_1430da19b;
      }
      lVar7 = *(longlong *)(param_1 + 0xcf0);
      if (((*(char *)(lVar6 + 0x1c + lVar7) == '\0') && (lVar8 != 0)) &&
         (fVar1 = *(float *)(lVar8 + 0x124), 0.0 < fVar1)) {
        fVar15 = *(float *)(lVar6 + 0x78 + lVar7);
        if (local_140 * (fVar20 + fVar34 * fVar32 + fVar28) +
            local_13c * (fVar21 + fVar34 * fVar29 + fVar14) +
            local_138 * (fVar26 + fVar34 * fVar17 + fVar31) < 0.0) {
          fVar15 = -fVar15;
        }
        if (fVar1 < fVar15) {
          if (*(longlong *)(lVar8 + 0x68) == 0) {
            fVar18 = 1.0;
          }
          else {
            fVar18 = *(float *)(*(longlong *)(lVar8 + 0x68) + 0x30);
          }
          fVar33 = *(float *)(lVar6 + 0x54 + lVar7);
          if (1e-08 < ABS(fVar18)) {
            fVar30 = fVar33 / fVar18;
            fVar18 = 0.0;
            if (0.0 <= fVar30) goto LAB_1430da225;
          }
          else {
            fVar30 = 0.0;
            if (fVar18 <= fVar33) {
              fVar30 = 1.0;
            }
LAB_1430da225:
            fVar18 = fVar30;
            if (1.0 <= fVar30) {
              fVar18 = 1.0;
            }
          }
          fVar33 = *(float *)(lVar6 + 0x94 + lVar7);
          fVar30 = *(float *)(lVar6 + 0x9c + lVar7);
          fVar33 = fVar33 + fVar33;
          fVar24 = *(float *)(lVar6 + 0x98 + lVar7);
          fVar30 = fVar30 + fVar30;
          fVar24 = fVar24 + fVar24;
          fVar27 = local_114 * local_114 - 0.5;
          fVar22 = fVar35 * fVar24 + fVar13 * fVar33 + fVar38 * fVar30;
          fVar19 = *(float *)(lVar6 + 100 + lVar7);
          fVar16 = *(float *)(lVar6 + 0x60 + lVar7);
          fVar2 = *(float *)(lVar6 + 0x68 + lVar7);
          fVar3 = *(float *)(lVar8 + 0x48);
          fVar37 = (local_110 +
                   (fVar35 * fVar30 - fVar38 * fVar24) * local_114 + fVar27 * fVar33 +
                   fVar13 * fVar22) - fVar25;
          fVar36 = (local_108 +
                   (fVar13 * fVar24 - fVar35 * fVar33) * local_114 + fVar27 * fVar30 +
                   fVar38 * fVar22) - fVar11;
          fVar35 = (local_10c +
                   (fVar38 * fVar33 - fVar13 * fVar30) * local_114 + fVar27 * fVar24 +
                   fVar35 * fVar22) - fVar12;
          fVar13 = (float)physx::PxVehicleWheelsDynData::getWheelRotationSpeed
                                    (*(longlong *)(param_1 + 0x2a0) + 0x70,iVar10);
          fVar13 = fVar13 * fVar18 * fVar23 * (fVar15 - fVar1) * fVar3 * *(float *)(param_1 + 0x230)
          ;
          fVar16 = fVar13 * fVar16;
          fVar19 = fVar13 * fVar19;
          fVar13 = fVar13 * fVar2;
          lVar8 = *(longlong *)(param_1 + 0xd00);
          *(float *)(lVar8 + 0x4e8) = fVar16 + *(float *)(lVar8 + 0x4e8);
          *(float *)(lVar8 + 0x4ec) = fVar19 + *(float *)(lVar8 + 0x4ec);
          *(float *)(lVar8 + 0x4f0) = fVar13 + *(float *)(lVar8 + 0x4f0);
          lVar8 = *(longlong *)(param_1 + 0xd00);
          *(float *)(lVar8 + 0x4f8) =
               (fVar36 * fVar16 - fVar37 * fVar13) + *(float *)(lVar8 + 0x4f8);
          *(float *)(lVar8 + 0x4fc) =
               (fVar37 * fVar19 - fVar35 * fVar16) + *(float *)(lVar8 + 0x4fc);
          *(float *)(lVar8 + 0x4f4) =
               (fVar35 * fVar13 - fVar36 * fVar19) + *(float *)(lVar8 + 0x4f4);
          fVar13 = local_120;
          fVar35 = local_11c;
          fVar38 = local_118;
        }
      }
      iVar10 = iVar10 + 1;
      lVar9 = lVar9 + 8;
      lVar6 = lVar6 + 0xa0;
    } while (iVar10 < *(int *)(param_1 + 0x290));
  }
  return;
}



// FUNCTION 1430da500 FUN_1430da500 body=634 status=ok
// SIG undefined FUN_1430da500(void)

undefined8 *
FUN_1430da500(undefined8 *param_1,longlong *param_2,longlong param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_1f8 [8];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  void *local_1d8;
  int local_1d0;
  int local_1cc;
  undefined1 local_1c8;
  undefined1 local_1c7;
  undefined4 local_1c4;
  byte local_1c0;
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [24];
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  undefined1 local_158;
  undefined4 local_154;
  undefined1 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  longlong local_138;
  undefined **local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined4 local_f4;
  byte local_f0;
  undefined1 local_e8 [24];
  undefined1 local_d0 [24];
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  undefined1 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  if (param_3 != 0) {
    lVar4 = FUN_142e20fc0();
    lVar6 = param_3;
    do {
      if (lVar6 == lVar4) {
        uVar5 = FUN_142e27720();
        lVar6 = (**(code **)(*param_2 + 0x628))(param_2,uVar5);
        if (lVar6 != 0) {
          FUN_142c62180(local_1f8);
          local_1c7 = 0;
          FUN_142c62590(&local_60,&DAT_146b2fcb8,param_4);
          iVar3 = local_1d0;
          lVar4 = (longlong)local_1d0;
          local_1d0 = local_1d0 + 1;
          if (local_1cc < local_1d0) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_1d8,iVar3);
          }
          lVar4 = lVar4 * 0x38;
          *(undefined8 *)(lVar4 + (longlong)local_1d8) = local_60;
          ((undefined8 *)(lVar4 + (longlong)local_1d8))[1] = uStack_58;
          puVar1 = (undefined8 *)(lVar4 + 0x10 + (longlong)local_1d8);
          *puVar1 = local_50;
          puVar1[1] = uStack_48;
          puVar2 = (undefined4 *)(lVar4 + 0x20 + (longlong)local_1d8);
          *puVar2 = local_40;
          puVar2[1] = uStack_3c;
          puVar2[2] = uStack_38;
          puVar2[3] = uStack_34;
          *(undefined8 *)(lVar4 + 0x30 + (longlong)local_1d8) = local_30;
          lVar4 = (longlong)local_1d0;
          local_128 = &PTR_FUN_143ff6170;
          local_120 = local_1f0;
          local_118 = local_1e8;
          local_110 = local_1e0;
          local_108 = (void *)0x0;
          local_100 = local_1d0;
          if (local_1d0 == 0) {
            local_fc = 0;
          }
          else {
            TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy
                      (&local_108,local_1d0,0);
            _guard_xfg_dispatch_icall_nop(local_108,local_1d8,lVar4 * 0x38);
          }
          local_f8 = local_1c8;
          local_f7 = local_1c7;
          local_f4 = local_1c4;
          local_f0 = local_f0 ^ (local_f0 ^ local_1c0) & 7;
          FUN_1405e0d90(local_e8,local_1b8);
          FUN_1405e0d90(local_d0,local_1a0);
          FUN_1405e0d90(local_b8,local_188);
          FUN_1405e0d90(local_a0,local_170);
          local_88 = local_158;
          local_84 = local_154;
          local_80 = local_150;
          local_78 = local_148;
          local_70 = local_140;
          local_7c = local_14c;
          local_68 = local_138;
          if (local_138 != 0) {
            LOCK();
            *(int *)(local_138 + 0xc) = *(int *)(local_138 + 0xc) + 1;
            UNLOCK();
          }
          FUN_142c7bb40(lVar6,param_1,param_3,&local_128,0);
          FUN_142c63c50(local_1f8);
          return param_1;
        }
        *param_1 = 0;
        param_1[1] = 0;
        return param_1;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1430da780 DestroyComponent body=32 status=ok
// SIG undefined DestroyComponent(void)

void UWidgetComponent::DestroyComponent(longlong *param_1)

{
  FUN_1426a43a0();
                    /* WARNING: Could not recover jumptable at 0x0001430da799. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x860))(param_1);
  return;
}



// FUNCTION 1430da7b0 FUN_1430da7b0 body=488 status=ok
// SIG undefined FUN_1430da7b0(void)

void FUN_1430da7b0(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined1 *local_a8 [2];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  code *local_58 [6];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_1426a45e0();
  (**(code **)(*param_1 + 0x850))(param_1);
  uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  plVar2 = (longlong *)FUN_142d80ec0(uVar1);
  if (plVar2 != (longlong *)0x0) {
    piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x38);
    if (*piVar4 < DAT_146b4a4c8) {
      _Init_thread_header(&DAT_146b4a4c8);
      if (DAT_146b4a4c8 == -1) {
        FName::FName(&DAT_146b4a4c0,L"AllVehicles",1);
        _Init_thread_footer(&DAT_146b4a4c8);
      }
    }
    if (*piVar4 < DAT_146b4a4d8) {
      _Init_thread_header(&DAT_146b4a4d8);
      if (DAT_146b4a4d8 == -1) {
        DAT_146b4a4d0 = FUN_142d84420(plVar2,DAT_146b4a4c0);
        _Init_thread_footer(&DAT_146b4a4d8);
      }
    }
    local_28 = 0;
    local_18 = 0;
    local_58[0] = AK::MemoryMgr::StartProfileThreadUsage;
    local_78 = 0;
    local_68 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_98);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_143f3f130;
    }
    local_a8[0] = &LAB_1430cf4b0;
    (**(code **)(*plVar2 + 0x288))(plVar2,param_1,DAT_146b4a4c0,local_a8,0,local_58,0);
    local_78 = 0;
    local_68 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_98);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_143f3f130;
    }
    local_a8[0] = &LAB_1430cf490;
    FUN_142d8e4e0(plVar2,param_1,local_a8);
  }
  return;
}



// FUNCTION 1430da9a0 FUN_1430da9a0 body=329 status=ok
// SIG undefined FUN_1430da9a0(void)

void FUN_1430da9a0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_142238430();
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 != '\0') {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x45a) != '\0') {
    uVar2 = UScrollBox::GetPrivateStaticClass();
    lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar2);
    if (lVar3 != 0) {
      *(byte *)(lVar3 + 0x7e8) = *(byte *)(lVar3 + 0x7e8) | 1;
      FUN_1430d7de0(param_1);
      return;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146b4a558) {
      _Init_thread_header(&DAT_146b4a558);
      if (DAT_146b4a558 == -1) {
        FName::FName(&DAT_146b4a550,L"VehiclePartDmgForwardingComp",1);
        _Init_thread_footer(&DAT_146b4a558);
      }
    }
    lVar3 = DAT_146b4a550;
    if (DAT_146b4a550 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar2 = UScrollBox::GetPrivateStaticClass();
    lVar3 = FUN_1417985e0(uVar2,param_1,lVar3,0,0,0,0,0,0);
    *(byte *)(lVar3 + 0x7e8) = *(byte *)(lVar3 + 0x7e8) | 3;
    FUN_14234b150(lVar3);
  }
  FUN_1430d7de0(param_1);
  return;
}



// FUNCTION 1430daaf0 FUN_1430daaf0 body=37 status=ok
// SIG undefined FUN_1430daaf0(void)

void FUN_1430daaf0(longlong param_1)

{
  FUN_14300c710();
  if (*(longlong *)(param_1 + 0x208) != 0) {
    *(undefined1 *)(param_1 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 1430dab20 FUN_1430dab20 body=1935 status=ok
// SIG undefined FUN_1430dab20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430dab20(undefined8 param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  char cVar6;
  BOOL BVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
  float fVar19;
  uint uVar20;
  float fVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_238 [32];
  code **local_218;
  code **local_210;
  char local_208;
  float local_204;
  undefined8 local_200;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  undefined1 local_1b0 [8];
  longlong local_1a8;
  longlong local_198;
  undefined4 local_190;
  undefined4 local_188;
  float local_184;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  code *local_168 [2];
  longlong local_158 [4];
  longlong *local_138;
  int local_128;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b4a3b8);
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b4a3b8);
  }
  local_1a8 = (longlong)DAT_146b4a438 * 0x20 + DAT_146b4a430;
  lVar18 = DAT_146b4a430;
  if (DAT_146b4a430 != local_1a8) {
    do {
      uVar15 = 0;
      lVar9 = FWeakObjectPtr::Get(lVar18 + 8);
      lVar10 = FWeakObjectPtr::Get(lVar18);
      if ((((lVar9 != 0) && (lVar10 != 0)) && (*(longlong *)(lVar10 + 0x4d0) != 0)) &&
         ((lVar1 = *(longlong *)(lVar9 + 0x4d0), local_1b8 = lVar1, lVar1 != 0 &&
          (local_1c8 = *(longlong **)(lVar9 + 0x4c8), local_1c8 != (longlong *)0x0)))) {
        uVar11 = FUN_1430e3bf0();
        plVar12 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar9,uVar11);
        local_1c0 = plVar12;
        if (plVar12 != (longlong *)0x0) {
          cVar6 = (**(code **)(*plVar12 + 0x10))(plVar12,lVar10);
          if (cVar6 != '\0') goto LAB_1430db104;
        }
        fVar19 = *(float *)(lVar1 + 0x220);
        fVar21 = *(float *)(lVar1 + 0x224);
        fVar25 = *(float *)(lVar1 + 0x228);
        local_178 = *(undefined8 *)(lVar1 + 0x210);
        uStack_170 = *(undefined8 *)(lVar1 + 0x218);
        fVar27 = *(float *)(lVar1 + 0x210);
        fVar30 = *(float *)(lVar1 + 0x214);
        fVar34 = *(float *)(lVar1 + 0x218);
        fVar35 = *(float *)(lVar1 + 0x21c);
        local_138 = (longlong *)0x0;
        local_128 = 0;
        fVar26 = fVar30 * 1.0 - fVar34 * 0.0;
        fVar28 = fVar34 * 0.0 - fVar27 * 1.0;
        fVar29 = fVar27 * 0.0 - fVar30 * 0.0;
        local_168[0] = FUN_1407c3030;
        local_188 = 3;
        local_180 = 0x48127c00;
        local_200 = 0;
        fVar26 = fVar26 + fVar26;
        fVar28 = fVar28 + fVar28;
        fVar29 = fVar29 + fVar29;
        uVar20 = *(uint *)(lVar1 + 0x230) & _DAT_146b4a3e0;
        uVar22 = *(uint *)(lVar1 + 0x234) & uRam0000000146b4a3e4;
        uVar23 = *(uint *)(lVar1 + 0x238) & uRam0000000146b4a3e8;
        uVar24 = *(uint *)(lVar1 + 0x23c) & uRam0000000146b4a3ec;
        auVar31._4_4_ = uVar22;
        auVar31._0_4_ = uVar20;
        auVar31._8_4_ = uVar23;
        auVar31._12_4_ = uVar24;
        auVar32._4_4_ = uVar23;
        auVar32._0_4_ = uVar22;
        auVar32._8_4_ = uVar20;
        auVar32._12_4_ = uVar24;
        auVar32 = minps(auVar31,auVar32);
        fVar33 = (fVar29 * fVar30 - fVar28 * fVar34) + fVar35 * fVar26 + 0.0;
        fVar34 = (fVar26 * fVar34 - fVar29 * fVar27) + fVar35 * fVar28 + 0.0;
        fVar35 = (fVar28 * fVar27 - fVar26 * fVar30) + fVar35 * fVar29 + 1.0;
        auVar3._4_4_ = uVar20;
        auVar3._0_4_ = uVar23;
        auVar3._8_4_ = uVar22;
        auVar3._12_4_ = uVar24;
        auVar32 = minps(auVar32,auVar3);
        local_204 = auVar32._0_4_;
        local_184 = local_204 * *(float *)(lVar1 + 0x714);
        fVar27 = local_184 + 150000.0;
        fVar30 = local_204 * *(float *)(lVar1 + 0x710) + local_184;
        local_1e8 = (fVar19 - fVar33 * fVar30) + fVar33 * fVar27;
        local_1e4 = (fVar21 - fVar34 * fVar30) + fVar34 * fVar27;
        local_1e0 = (fVar25 - fVar35 * fVar30) + fVar35 * fVar27;
        uVar11 = (**(code **)(**(longlong **)(lVar10 + 0x4d0) + 0x6d0))
                           (*(longlong **)(lVar10 + 0x4d0),0,1);
        local_210 = local_168;
        local_218 = (code **)&local_188;
        FUN_142694150(uVar11,&local_1f8,&local_1e8,&local_178);
        if (local_128 != 0) {
          plVar17 = local_158;
          if (local_138 != (longlong *)0x0) {
            plVar17 = local_138;
          }
          if (plVar17 != (longlong *)0x0) {
            (**(code **)(*plVar17 + 0x10))(plVar17,0);
          }
        }
        if (local_138 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (0.001 < local_1ec) {
          fVar27 = local_1ec + 0.1;
          plVar17 = (longlong *)(lVar1 + 0x378);
          local_204 = *(float *)(lVar1 + 0x380);
          fVar30 = local_1f8 * fVar27;
          fVar34 = local_1f4 * fVar27;
          *(int *)(lVar1 + 0x380) = (int)local_204 + 1;
          fVar27 = local_1f0 * fVar27;
          if (*(int *)(lVar1 + 900) < (int)local_204 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar17,local_204);
          }
          local_1d4 = 1.0 / param_2;
          *(longlong *)(*plVar17 + (longlong)(int)local_204 * 8) = lVar10;
          local_1d0 = local_1d4 * fVar27;
          local_1d8 = local_1d4 * fVar30;
          local_1d4 = local_1d4 * fVar34;
          (**(code **)(*local_1c8 + 0x7b0))(local_1c8,&local_1d8,param_2,0);
          fVar21 = *(float *)(lVar1 + 0x224) - fVar21;
          fVar19 = *(float *)(lVar1 + 0x220) - fVar19;
          fVar25 = *(float *)(lVar1 + 0x228) - fVar25;
          bVar4 = fVar30 * fVar30 + fVar34 * fVar34 + fVar27 * fVar27 <= 100.0;
          bVar5 = fVar21 * fVar21 + fVar19 * fVar19 + fVar25 * fVar25 <= 100.0;
          if ((bVar4) || (local_208 = '\x01', bVar5)) {
            local_208 = '\0';
          }
          if ((!bVar4) && (bVar5)) {
            fVar19 = param_2 + *(float *)(lVar18 + 0x1c);
            if (5.0 <= fVar19) {
              fVar19 = 5.0;
            }
            *(float *)(lVar18 + 0x1c) = fVar19;
          }
          iVar13 = *(int *)(lVar1 + 0x380);
          uVar16 = uVar15;
          if (0 < iVar13) {
            do {
              iVar14 = (int)uVar15;
              lVar2 = *plVar17;
              if (*(longlong *)(lVar2 + uVar16) == lVar10) {
                iVar8 = (iVar13 - iVar14) + -1;
                if (0 < iVar8) {
                  iVar8 = 1;
                }
                if (iVar8 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(lVar2 + (longlong)iVar14 * 8),
                             (void *)(lVar2 + (longlong)(iVar13 - iVar8) * 8),(longlong)iVar8 << 3);
                  iVar13 = *(int *)(lVar1 + 0x380);
                }
                *(int *)(lVar1 + 0x380) = iVar13 + -1;
                TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar17);
                iVar13 = *(int *)(lVar1 + 0x380);
                iVar14 = iVar14 + -1;
                uVar16 = uVar16 - 8;
              }
              uVar15 = (ulonglong)(iVar14 + 1U);
              plVar12 = local_1c0;
              uVar16 = uVar16 + 8;
            } while ((int)(iVar14 + 1U) < iVar13);
          }
          lVar1 = local_1b8;
          local_218 = (code **)&local_1f8;
          FUN_1422ffd10(local_168,lVar9,local_1b8,lVar18 + 0x10);
          local_218 = local_168;
          FUN_142227dc0(lVar10,*(undefined8 *)(lVar10 + 0x4d0),lVar1,1);
          local_218 = local_168;
          FUN_142227dc0(lVar9,lVar1,*(undefined8 *)(lVar10 + 0x4d0),0);
          if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 0x20))(plVar12,local_1b0,lVar10,*(undefined4 *)(lVar18 + 0x1c));
            local_198 = *(longlong *)(lVar18 + 0x10);
            local_190 = *(undefined4 *)(lVar18 + 0x18);
            local_218 = (code **)CONCAT44(local_218._4_4_,param_2);
            FUN_1430cddd0(lVar10,lVar9,&local_198,local_1b0);
          }
          if (local_208 == '\0') goto LAB_1430db104;
        }
        *(float *)(lVar18 + 0x1c) = *(float *)(lVar18 + 0x1c) - param_2;
      }
LAB_1430db104:
      lVar18 = lVar18 + 0x20;
    } while (lVar18 != local_1a8);
  }
  uVar16 = 0;
  uVar15 = uVar16;
  if (0 < DAT_146b4a438) {
    do {
      lVar9 = DAT_146b4a430 + uVar16;
      lVar18 = FWeakObjectPtr::Get(lVar9 + 8);
      iVar13 = (int)uVar15;
      if (lVar18 == 0) {
LAB_1430db1ec:
        if (*(float *)(lVar9 + 0x1c) <= 0.0) goto LAB_1430db1f7;
        uVar15 = (ulonglong)(iVar13 + 1);
        uVar16 = uVar16 + 0x20;
      }
      else {
        uVar11 = FUN_1430e3bf0();
        plVar12 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar18,uVar11);
        if (plVar12 == (longlong *)0x0) goto LAB_1430db1ec;
        uVar11 = FWeakObjectPtr::Get(lVar9);
        cVar6 = (**(code **)(*plVar12 + 0x10))(plVar12,uVar11);
        if (cVar6 == '\0') goto LAB_1430db1ec;
LAB_1430db1f7:
        iVar14 = (DAT_146b4a438 - iVar13) + -1;
        if (0 < iVar14) {
          iVar14 = 1;
        }
        if (iVar14 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar13 * 0x20 + DAT_146b4a430),
                     (void *)((longlong)(DAT_146b4a438 - iVar14) * 0x20 + DAT_146b4a430),
                     (longlong)iVar14 << 5);
        }
        DAT_146b4a438 = DAT_146b4a438 + -1;
        TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(&DAT_146b4a430);
      }
    } while ((int)uVar15 < DAT_146b4a438);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b4a3b8);
  return;
}



// FUNCTION 1430db2b0 FUN_1430db2b0 body=36 status=ok
// SIG undefined FUN_1430db2b0(void)

void FUN_1430db2b0(longlong param_1)

{
  if (*(char *)(param_1 + 0x470) != '\0') {
    FUN_1430d7de0();
    *(undefined1 *)(param_1 + 0x470) = 0;
  }
  return;
}


