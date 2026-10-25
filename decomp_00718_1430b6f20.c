// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1430b6f20 FUN_1430b6f20 body=144 status=ok
// SIG undefined FUN_1430b6f20(void)

void FUN_1430b6f20(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_14307ee20(param_1,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430b6fb0 FUN_1430b6fb0 body=333 status=ok
// SIG undefined FUN_1430b6fb0(void)

void FUN_1430b6fb0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_28 [4];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
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
  uVar1 = FUN_14307ee60(param_1,local_res10[0],local_28[0],local_res20[0],local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430b7100 FUN_1430b7100 body=608 status=ok
// SIG undefined FUN_1430b7100(void)

void FUN_1430b7100(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_res10 [8];
  int local_res18 [4];
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
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  FUN_142c62180(local_f8);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_f8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  bVar3 = local_res18[0] != 0;
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
  uVar1 = FUN_14307ef00(param_1,local_res10[0],&local_1c8,bVar3);
  *param_3 = uVar1;
  FUN_142c63c50(local_f8);
  return;
}



// FUNCTION 1430b7360 FUN_1430b7360 body=128 status=ok
// SIG undefined FUN_1430b7360(void)

void FUN_1430b7360(undefined8 param_1,longlong param_2)

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
  FUN_14307efa0(param_1,local_res10);
  return;
}



// FUNCTION 1430b73e0 FUN_1430b73e0 body=200 status=ok
// SIG undefined FUN_1430b73e0(void)

void FUN_1430b73e0(undefined8 param_1,longlong param_2)

{
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
  FUN_14307f090(param_1,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 1430b74d0 FUN_1430b74d0 body=330 status=ok
// SIG undefined FUN_1430b74d0(void)

void FUN_1430b74d0(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined4 local_18 [2];
  undefined8 local_10;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_10);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14307fbc0(param_1,local_res10[0],local_10,local_res20[0],local_18[0]);
  return;
}



// FUNCTION 1430b7640 FUN_1430b7640 body=128 status=ok
// SIG undefined FUN_1430b7640(void)

void FUN_1430b7640(undefined8 param_1,longlong param_2)

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
  FUN_143080c40(param_1,local_res10);
  return;
}



// FUNCTION 1430b76c0 FUN_1430b76c0 body=134 status=ok
// SIG undefined FUN_1430b76c0(void)

void FUN_1430b76c0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0xa08))(param_1,local_res8[0] != 0);
  return;
}



// FUNCTION 1430b7750 FUN_1430b7750 body=118 status=ok
// SIG undefined FUN_1430b7750(void)

void FUN_1430b7750(undefined8 param_1,longlong param_2)

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
  FUN_143081e70(param_1,local_res10[0]);
  return;
}



// FUNCTION 1430b78f0 FUN_1430b78f0 body=332 status=ok
// SIG undefined FUN_1430b78f0(void)

void FUN_1430b78f0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int local_res8 [2];
  undefined4 local_res10 [2];
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
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  bVar1 = local_res8[0] != 0;
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
  uVar2 = (**(code **)(*param_1 + 0x980))(param_1,local_res20,bVar1,local_res18[0],local_res10[0]);
  *param_3 = uVar2;
  return;
}



// FUNCTION 1430b7a40 FUN_1430b7a40 body=240 status=ok
// SIG undefined FUN_1430b7a40(void)

void FUN_1430b7a40(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 local_68;
  undefined2 local_60;
  byte local_5e;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_28 = 0x3f800000;
  local_38 = 0;
  uStack_30 = 0;
  local_68 = 0;
  local_60 = 0;
  local_5e = local_5e & 0xe1 | 1;
  local_20 = 0;
  local_58 = 0;
  local_18 = 0;
  uStack_10 = 0;
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
  uVar1 = FUN_143083b50(param_1,puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430b7b30 FUN_1430b7b30 body=256 status=ok
// SIG undefined FUN_1430b7b30(void)

void FUN_1430b7b30(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined4 local_18 [4];
  
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
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_143083d20(param_1,local_res10[0],local_res20[0],local_18[0]);
  return;
}



// FUNCTION 1430b7c30 FUN_1430b7c30 body=240 status=ok
// SIG undefined FUN_1430b7c30(void)

void FUN_1430b7c30(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 local_res10 [3];
  undefined1 local_88 [40];
  longlong local_60;
  longlong local_50;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  FUN_1430b3200(local_88);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  puVar1 = local_88;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_143085fe0(local_res10[0],puVar1);
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1430b7d60 FUN_1430b7d60 body=264 status=ok
// SIG undefined FUN_1430b7d60(void)

void FUN_1430b7d60(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  byte local_c;
  
  local_20 = DAT_1468b5da0;
  local_50 = 0;
  local_48 = 0;
  local_18 = DAT_1468b5da8;
  local_c = local_c & 0xf9 | 9;
  local_14 = 0x3f800000;
  local_58 = 0;
  local_68[0] = 0;
  local_60 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 1;
  local_34 = 0;
  local_30 = 10;
  local_28 = 0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar1 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_143088220(param_1,puVar1);
  return;
}



// FUNCTION 1430b7e70 FUN_1430b7e70 body=268 status=ok
// SIG undefined FUN_1430b7e70(void)

void FUN_1430b7e70(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
  undefined2 local_9c;
  byte local_9a;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  
  local_68 = 0x3f800000;
  local_90 = 0;
  local_88 = 0;
  local_9a = local_9a & 0xe1 | 1;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0x3f800000;
  local_b8[0] = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 1;
  local_9c = 0;
  local_60 = 0;
  local_58 = 0;
  local_18 = 0;
  local_98 = 0;
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  puVar1 = local_b8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_143088630(param_1,puVar1);
  return;
}



// FUNCTION 1430b7f80 FUN_1430b7f80 body=255 status=ok
// SIG undefined FUN_1430b7f80(void)

void FUN_1430b7f80(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
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
  FUN_143088710(param_1,local_res10[0],local_18[0],local_res20);
  return;
}



// FUNCTION 1430b8080 FUN_1430b8080 body=155 status=ok
// SIG undefined FUN_1430b8080(void)

void FUN_1430b8080(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined2 local_18;
  byte local_16;
  undefined8 local_10;
  
  local_16 = local_16 & 0xfe;
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
  puVar1 = &local_18;
  if (*(undefined2 **)(param_2 + 0x38) != (undefined2 *)0x0) {
    puVar1 = *(undefined2 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1430887a0(param_1,puVar1);
  return;
}



// FUNCTION 1430b8120 FUN_1430b8120 body=148 status=ok
// SIG undefined FUN_1430b8120(void)

void FUN_1430b8120(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_48 [64];
  
  FUN_1430678e0(local_48);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar1 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_143088830(param_1,puVar1);
  return;
}



// FUNCTION 1430b81c0 FUN_1430b81c0 body=128 status=ok
// SIG undefined FUN_1430b81c0(void)

void FUN_1430b81c0(undefined8 param_1,longlong param_2)

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
  FUN_1430890e0(param_1,local_res10);
  return;
}



// FUNCTION 1430b8240 FUN_1430b8240 body=178 status=ok
// SIG undefined FUN_1430b8240(void)

void FUN_1430b8240(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x3f8))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerApplyInput_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x400))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1430b8300 FUN_1430b8300 body=78 status=ok
// SIG undefined FUN_1430b8300(void)

void FUN_1430b8300(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x7a8))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerEquipInterruptible_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001430b8347. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x7b0))(param_1);
  return;
}



// FUNCTION 1430b8350 FUN_1430b8350 body=178 status=ok
// SIG undefined FUN_1430b8350(void)

void FUN_1430b8350(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerInterruptReloadToUse_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x7c0))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1430b8410 FUN_1430b8410 body=172 status=ok
// SIG undefined FUN_1430b8410(void)

void FUN_1430b8410(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x708))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerLock_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x710))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1430b84c0 execServerToggleAILogging body=78 status=ok
// SIG undefined execServerToggleAILogging(void)

void APlayerController::execServerToggleAILogging(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x758))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerRestartAutoUse_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001430b8507. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x760))(param_1);
  return;
}



// FUNCTION 1430b8510 FUN_1430b8510 body=166 status=ok
// SIG undefined FUN_1430b8510(void)

void FUN_1430b8510(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  
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
  cVar1 = (**(code **)(*param_1 + 0x748))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetPatternSeed_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x750))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1430b85c0 FUN_1430b85c0 body=312 status=ok
// SIG undefined FUN_1430b85c0(void)

void FUN_1430b85c0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  undefined2 local_res10 [4];
  undefined4 local_res20 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1,local_res8[0],local_res10,local_res20[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetZoomState_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x728))(param_1,local_res8[0],local_res10,local_res20[0]);
  return;
}



// FUNCTION 1430b8700 FUN_1430b8700 body=246 status=ok
// SIG undefined FUN_1430b8700(void)

void FUN_1430b8700(longlong *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  int local_res10 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x738))(param_1,local_res8[0],bVar2);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerStartReloading_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x740))(param_1,local_res8[0],bVar2);
  return;
}



// FUNCTION 1430b8800 FUN_1430b8800 body=237 status=ok
// SIG undefined FUN_1430b8800(void)

void FUN_1430b8800(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
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
  cVar1 = (**(code **)(*param_1 + 0x778))(param_1,local_res10[0],local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerStartUsing_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x780))(param_1,local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 1430b88f0 FUN_1430b88f0 body=237 status=ok
// SIG undefined FUN_1430b88f0(void)

void FUN_1430b88f0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
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
  cVar1 = (**(code **)(*param_1 + 0x788))(param_1,local_res10[0],local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerStopModeSwitch_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x790))(param_1,local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 1430b89e0 FUN_1430b89e0 body=246 status=ok
// SIG undefined FUN_1430b89e0(void)

void FUN_1430b89e0(longlong *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  int local_res10 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x768))(param_1,local_res8[0],bVar2);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerStopUsing_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x770))(param_1,local_res8[0],bVar2);
  return;
}



// FUNCTION 1430b8ae0 FUN_1430b8ae0 body=317 status=ok
// SIG undefined FUN_1430b8ae0(void)

void FUN_1430b8ae0(longlong *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 local_res8 [8];
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
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar2 = local_res20[0] != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x798))(param_1,local_res10[0],local_res8[0],bVar2);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSwitchMode_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x7a0))(param_1,local_res10[0],local_res8[0],bVar2);
  return;
}



// FUNCTION 1430b8c20 FUN_1430b8c20 body=78 status=ok
// SIG undefined FUN_1430b8c20(void)

void FUN_1430b8c20(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x6f0))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerUnlock_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001430b8c67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6f8))(param_1);
  return;
}



// FUNCTION 1430b8c70 FUN_1430b8c70 body=263 status=ok
// SIG undefined FUN_1430b8c70(void)

void FUN_1430b8c70(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  int local_28 [2];
  undefined8 local_20;
  
  local_20 = 0;
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
  bVar1 = local_28[0] != 0;
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20[0] = local_res10[0];
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14308aea0(param_1,local_20,bVar1,local_res20);
  return;
}



// FUNCTION 1430b8d80 FUN_1430b8d80 body=309 status=ok
// SIG undefined FUN_1430b8d80(void)

void FUN_1430b8d80(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 local_res10;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined1 local_18 [16];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  local_28[0] = 0;
  local_24 = 0;
  puVar1 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  local_20 = 0;
  local_1c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar2 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14308b2e0(param_1,local_res10,puVar1,puVar2);
  return;
}



// FUNCTION 1430b8ec0 FUN_1430b8ec0 body=286 status=ok
// SIG undefined FUN_1430b8ec0(void)

void FUN_1430b8ec0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int local_res10 [4];
  undefined8 local_res20;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  
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
  bVar2 = local_res10[0] != 0;
  local_28[0] = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0xffffffff;
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
  FUN_14308b3c0(param_1,local_res20,bVar2,puVar1);
  return;
}



// FUNCTION 1430b8fe0 FUN_1430b8fe0 body=291 status=ok
// SIG undefined FUN_1430b8fe0(void)

void FUN_1430b8fe0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 local_res10 [2];
  undefined8 local_res20;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  
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
  local_18[0] = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  puVar1 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14308b4a0(param_1,local_res20,local_res10[0],puVar1);
  return;
}



// FUNCTION 1430b9110 FUN_1430b9110 body=286 status=ok
// SIG undefined FUN_1430b9110(void)

void FUN_1430b9110(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_18[0] = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  puVar1 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14308b580(param_1,local_res10,local_res20,puVar1);
  return;
}



// FUNCTION 1430b9230 FUN_1430b9230 body=309 status=ok
// SIG undefined FUN_1430b9230(void)

void FUN_1430b9230(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 local_res10;
  undefined1 local_28 [16];
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_18[0] = 0;
  local_14 = 0;
  puVar1 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  local_10 = 0;
  local_c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
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
  FUN_14308b660(param_1,local_res10,puVar1,puVar2);
  return;
}



// FUNCTION 1430b9370 FUN_1430b9370 body=196 status=ok
// SIG undefined FUN_1430b9370(void)

void FUN_1430b9370(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
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
  FUN_14308bb60(param_1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 1430b9440 FUN_1430b9440 body=197 status=ok
// SIG undefined FUN_1430b9440(void)

void FUN_1430b9440(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
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
  uStack_14 = uStack_24;
  uStack_10 = uStack_20;
  uStack_c = uStack_1c;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14308bc50(param_1,local_res10,&local_18);
  return;
}



// FUNCTION 1430b9510 FUN_1430b9510 body=195 status=ok
// SIG undefined FUN_1430b9510(void)

void FUN_1430b9510(undefined8 param_1,longlong param_2)

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
  FUN_14308bf90(param_1,local_res10[0],local_res20[0] != 0);
  return;
}



// FUNCTION 1430b95e0 FUN_1430b95e0 body=123 status=ok
// SIG undefined FUN_1430b95e0(void)

void FUN_1430b95e0(undefined8 param_1,longlong param_2)

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
  uhx::glues::AGEffectSphere_Glue_obj::set_SizeScale(param_1,local_res10[0]);
  return;
}



// FUNCTION 1430b9660 FUN_1430b9660 body=123 status=ok
// SIG undefined FUN_1430b9660(void)

void FUN_1430b9660(undefined8 param_1,longlong param_2)

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
  SScrollBox::SetWheelScrollMultiplier(param_1,local_res10[0]);
  return;
}



// FUNCTION 1430b96e0 FUN_1430b96e0 body=128 status=ok
// SIG undefined FUN_1430b96e0(void)

void FUN_1430b96e0(undefined8 param_1,longlong param_2)

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
  ABP_DestroyableObject_C__pf210322148::bpf__StartSelectBuild__pf(param_1,local_res10);
  return;
}



// FUNCTION 1430b9760 FUN_1430b9760 body=128 status=ok
// SIG undefined FUN_1430b9760(void)

void FUN_1430b9760(undefined8 param_1,longlong param_2)

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
  ABP_ArmorController_C__pf4151835181::bpf__StartSelectBuild__pf(param_1,local_res10);
  return;
}



// FUNCTION 1430b97e0 execSetIgnoreMoveInput body=134 status=ok
// SIG undefined execSetIgnoreMoveInput(void)

void APlayerController::execSetIgnoreMoveInput(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x958))(param_1,local_res8[0] != 0);
  return;
}



// FUNCTION 1430b9870 FUN_1430b9870 body=130 status=ok
// SIG undefined FUN_1430b9870(void)

void FUN_1430b9870(undefined8 param_1,longlong param_2)

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
  FUN_14308e980(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1430b9900 FUN_1430b9900 body=122 status=ok
// SIG undefined FUN_1430b9900(void)

void FUN_1430b9900(longlong *param_1,longlong param_2)

{
  undefined1 local_res8 [8];
  
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
  (**(code **)(*param_1 + 0x818))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1430b99a0 FUN_1430b99a0 body=198 status=ok
// SIG undefined FUN_1430b99a0(void)

void FUN_1430b99a0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x988))(param_1,local_res10,local_res8[0] != 0);
  return;
}



// FUNCTION 1430b9a90 FUN_1430b9a90 body=126 status=ok
// SIG undefined FUN_1430b9a90(void)

void FUN_1430b9a90(undefined8 param_1,longlong param_2)

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
  FUN_14308f980(param_1,local_res10[0]);
  return;
}



// FUNCTION 1430b9b10 FUN_1430b9b10 body=183 status=ok
// SIG undefined FUN_1430b9b10(void)

void FUN_1430b9b10(undefined8 param_1,longlong param_2)

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
  FUN_14308fb00(param_1,local_res10[0],local_res20[0]);
  return;
}



// FUNCTION 1430b9bd0 FUN_1430b9bd0 body=199 status=ok
// SIG undefined FUN_1430b9bd0(void)

void FUN_1430b9bd0(longlong *param_1,longlong param_2)

{
  undefined1 local_res8 [8];
  int local_res10 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
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
  (**(code **)(*param_1 + 0x820))(param_1,local_res8[0],local_res10[0] != 0);
  return;
}



// FUNCTION 1430b9ca0 FUN_1430b9ca0 body=122 status=ok
// SIG undefined FUN_1430b9ca0(void)

void FUN_1430b9ca0(longlong *param_1,longlong param_2)

{
  undefined1 local_res8 [8];
  
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
  (**(code **)(*param_1 + 0x9a0))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1430b9d20 FUN_1430b9d20 body=200 status=ok
// SIG undefined FUN_1430b9d20(void)

void FUN_1430b9d20(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int local_res8 [2];
  int local_res10 [2];
  
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
  (**(code **)(*param_1 + 0x8c0))(param_1,bVar1,local_res10[0] != 0);
  return;
}



// FUNCTION 1430b9df0 FUN_1430b9df0 body=249 status=ok
// SIG undefined FUN_1430b9df0(void)

void FUN_1430b9df0(longlong *param_1,longlong param_2)

{
  undefined1 local_res8 [8];
  undefined1 local_res10 [16];
  int local_res20 [2];
  
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
  (**(code **)(*param_1 + 0x8e0))(param_1,local_res10[0],local_res8[0],local_res20[0] != 0);
  return;
}



// FUNCTION 1430b9f10 FUN_1430b9f10 body=614 status=ok
// SIG undefined FUN_1430b9f10(void)

void FUN_1430b9f10(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_90 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_90);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_98[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_48 = local_88;
  local_40 = local_80;
  local_30 = local_70;
  local_20 = local_60;
  local_38 = local_78;
  local_10 = local_50;
  local_28 = local_68;
  local_18 = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_143091410(local_90,&local_18,&local_28,local_98[0],local_res20[0],local_res10[0],&local_38,
                &local_48);
  return;
}



// FUNCTION 1430ba180 FUN_1430ba180 body=645 status=ok
// SIG undefined FUN_1430ba180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430ba180(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_368 [32];
  undefined4 local_348;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined1 local_2d8 [256];
  undefined8 local_1d8;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 local_150 [256];
  undefined1 *local_50;
  ulonglong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  local_338 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_338);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_338);
  }
  local_1a8 = 0;
  local_158 = 0;
  local_198 = 0;
  local_188 = 0;
  local_15c = 1;
  local_50 = (undefined1 *)0x0;
  local_48 = 0;
  FWeakObjectPtr::operator=(&local_40,0);
  local_38 = 0;
  FWeakObjectPtr::operator=(&local_30,0);
  local_28 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_1a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a8);
  }
  local_308 = local_180;
  local_330 = local_1a8;
  local_328 = local_1a0;
  local_320 = local_198;
  local_318 = local_190;
  local_310 = local_188;
  local_300 = local_178;
  local_2e8 = local_160;
  local_2fc = local_174;
  local_2e4 = local_15c;
  local_2f8 = local_170;
  puVar2 = local_150;
  if (local_50 != (undefined1 *)0x0) {
    puVar2 = local_50;
  }
  local_2f4 = local_16c;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_2e0 = local_158;
  local_2f0 = local_168;
  local_1d8 = 0;
  local_348 = 0;
  FUN_140a79090(local_2d8,puVar2,local_48 & 0xffffffff,0);
  local_1c8 = local_40;
  local_1c4 = local_3c;
  local_1c0 = local_38;
  local_1b8 = local_30;
  local_1b4 = local_2c;
  local_1b0 = local_28;
  uVar1 = FUN_143091860(local_338,&local_330);
  *param_3 = uVar1;
  FUN_1409f5970(local_150);
  return;
}



// FUNCTION 1430ba410 FUN_1430ba410 body=122 status=ok
// SIG undefined FUN_1430ba410(void)

void FUN_1430ba410(longlong *param_1,longlong param_2)

{
  undefined1 local_res8 [8];
  
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
  (**(code **)(*param_1 + 0x8f0))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1430ba4b0 FUN_1430ba4b0 body=130 status=ok
// SIG undefined FUN_1430ba4b0(void)

void FUN_1430ba4b0(undefined8 param_1,longlong param_2)

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
  FUN_143093f10(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1430ba540 FUN_1430ba540 body=47 status=ok
// SIG undefined FUN_1430ba540(void)

longlong FUN_1430ba540(void)

{
  if (DAT_146b49760 == 0) {
    FUN_141786440(&DAT_146b49760,&PTR_thunk_FUN_1430bc880_145a84e80);
  }
  return DAT_146b49760;
}



// FUNCTION 1430ba570 FUN_1430ba570 body=47 status=ok
// SIG undefined FUN_1430ba570(void)

longlong FUN_1430ba570(void)

{
  if (DAT_146b49758 == 0) {
    FUN_141786a30(&DAT_146b49758,&PTR_FUN_1467a4230);
  }
  return DAT_146b49758;
}



// FUNCTION 1430ba5c0 FUN_1430ba5c0 body=162 status=ok
// SIG undefined FUN_1430ba5c0(void)

longlong FUN_1430ba5c0(void)

{
  if (DAT_146b49930 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"WeaponClipReloadComponent",&DAT_146b49930,FUN_1430bcec0,
                  0x208,0x10000000,0,L"Engine",&LAB_1430bb850,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimMontage::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b49930;
}



// FUNCTION 1430ba670 FUN_1430ba670 body=47 status=ok
// SIG undefined FUN_1430ba670(void)

longlong FUN_1430ba670(void)

{
  if (DAT_146b49928 == 0) {
    FUN_141786440(&DAT_146b49928,&PTR_FUN_145a84fd0);
  }
  return DAT_146b49928;
}



// FUNCTION 1430ba6a0 FUN_1430ba6a0 body=47 status=ok
// SIG undefined FUN_1430ba6a0(void)

longlong FUN_1430ba6a0(void)

{
  if (DAT_146b49920 == 0) {
    FUN_141786a30(&DAT_146b49920,&PTR_FUN_1467a66d0);
  }
  return DAT_146b49920;
}



// FUNCTION 1430ba6f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UActionBuff::GetPrivateStaticClass(void)

{
  if (DAT_146b497b8 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"WeaponAmmoPoolComponent",&DAT_146b497b8,
                  StaticRegisterNativesUActionBuff,0x260,0x10000000,0,L"Engine",&LAB_1430bb760,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1430bc880,&LAB_140447700,0);
  }
  return DAT_146b497b8;
}



// FUNCTION 1430ba7a0 FUN_1430ba7a0 body=47 status=ok
// SIG undefined FUN_1430ba7a0(void)

longlong FUN_1430ba7a0(void)

{
  if (DAT_146b497b0 == 0) {
    FUN_141786440(&DAT_146b497b0,&PTR_GetPrivateStaticClass_145a85670);
  }
  return DAT_146b497b0;
}



// FUNCTION 1430ba7d0 FUN_1430ba7d0 body=47 status=ok
// SIG undefined FUN_1430ba7d0(void)

longlong FUN_1430ba7d0(void)

{
  if (DAT_146b49778 == 0) {
    FUN_141786a30(&DAT_146b49778,&PTR_FUN_1467a43b0);
  }
  return DAT_146b49778;
}



// FUNCTION 1430ba800 FUN_1430ba800 body=47 status=ok
// SIG undefined FUN_1430ba800(void)

longlong FUN_1430ba800(void)

{
  if (DAT_146b49780 == 0) {
    FUN_141786a30(&DAT_146b49780,&PTR_FUN_1467a4460);
  }
  return DAT_146b49780;
}



// FUNCTION 1430ba830 FUN_1430ba830 body=47 status=ok
// SIG undefined FUN_1430ba830(void)

longlong FUN_1430ba830(void)

{
  if (DAT_146b49788 == 0) {
    FUN_141786a30(&DAT_146b49788,&PTR_FUN_1467a44a0);
  }
  return DAT_146b49788;
}



// FUNCTION 1430ba860 FUN_1430ba860 body=47 status=ok
// SIG undefined FUN_1430ba860(void)

longlong FUN_1430ba860(void)

{
  if (DAT_146b49790 == 0) {
    FUN_141786a30(&DAT_146b49790,&PTR_FUN_1467a4550);
  }
  return DAT_146b49790;
}



// FUNCTION 1430ba890 FUN_1430ba890 body=47 status=ok
// SIG undefined FUN_1430ba890(void)

longlong FUN_1430ba890(void)

{
  if (DAT_146b49798 == 0) {
    FUN_141786a30(&DAT_146b49798,&PTR_FUN_1467a4590);
  }
  return DAT_146b49798;
}



// FUNCTION 1430ba8c0 FUN_1430ba8c0 body=47 status=ok
// SIG undefined FUN_1430ba8c0(void)

longlong FUN_1430ba8c0(void)

{
  if (DAT_146b497a0 == 0) {
    FUN_141786a30(&DAT_146b497a0,&PTR_FUN_1467a45d0);
  }
  return DAT_146b497a0;
}



// FUNCTION 1430ba8f0 FUN_1430ba8f0 body=47 status=ok
// SIG undefined FUN_1430ba8f0(void)

longlong FUN_1430ba8f0(void)

{
  if (DAT_146b497a8 == 0) {
    FUN_141786a30(&DAT_146b497a8,&PTR_FUN_1467a4610);
  }
  return DAT_146b497a8;
}



// FUNCTION 1430ba930 FUN_1430ba930 body=162 status=ok
// SIG undefined FUN_1430ba930(void)

longlong FUN_1430ba930(void)

{
  if (DAT_146b497c8 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"WeaponAmmoRegenAttributeValueResolver",&DAT_146b497c8,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",&LAB_1430bb770,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDungeonEventListener::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b497c8;
}



// FUNCTION 1430ba9f0 FUN_1430ba9f0 body=47 status=ok
// SIG undefined FUN_1430ba9f0(void)

longlong FUN_1430ba9f0(void)

{
  if (DAT_146b497d8 == 0) {
    FUN_141786440(&DAT_146b497d8,&PTR_thunk_FUN_1430bc930_145a85ba0);
  }
  return DAT_146b497d8;
}



// FUNCTION 1430baa20 FUN_1430baa20 body=47 status=ok
// SIG undefined FUN_1430baa20(void)

longlong FUN_1430baa20(void)

{
  if (DAT_146b497d0 == 0) {
    FUN_141786a30(&DAT_146b497d0,&PTR_FUN_1467a4b60);
  }
  return DAT_146b497d0;
}



// FUNCTION 1430baa70 FUN_1430baa70 body=162 status=ok
// SIG undefined FUN_1430baa70(void)

longlong FUN_1430baa70(void)

{
  if (DAT_146b49940 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"GbxCondition_ZoomState",&DAT_146b49940,FUN_140447710,0x90,
                  0x10000000,0,L"Engine",&LAB_1430bb710,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146b49940;
}



// FUNCTION 1430bab20 FUN_1430bab20 body=47 status=ok
// SIG undefined FUN_1430bab20(void)

longlong FUN_1430bab20(void)

{
  if (DAT_146b49840 == 0) {
    FUN_141786440(&DAT_146b49840,&PTR_GetPrivateStaticClass_145a872d0);
  }
  return DAT_146b49840;
}



// FUNCTION 1430bab50 FUN_1430bab50 body=47 status=ok
// SIG undefined FUN_1430bab50(void)

longlong FUN_1430bab50(void)

{
  if (DAT_146b49838 == 0) {
    FUN_141786a30(&DAT_146b49838,&PTR_FUN_1467a5120);
  }
  return DAT_146b49838;
}



// FUNCTION 1430bab90 FUN_1430bab90 body=53 status=ok
// SIG undefined FUN_1430bab90(void)

void FUN_1430bab90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_145a8a900;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430babd0 FUN_1430babd0 body=53 status=ok
// SIG undefined FUN_1430babd0(void)

void FUN_1430babd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_145a8aa18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430bac10 FUN_1430bac10 body=53 status=ok
// SIG undefined FUN_1430bac10(void)

void FUN_1430bac10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_145a8ab30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430bac50 FUN_1430bac50 body=53 status=ok
// SIG undefined FUN_1430bac50(void)

void FUN_1430bac50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_145a8ac48;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430bac90 FUN_1430bac90 body=53 status=ok
// SIG undefined FUN_1430bac90(void)

void FUN_1430bac90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_145a8b660;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430bacd0 FUN_1430bacd0 body=53 status=ok
// SIG undefined FUN_1430bacd0(void)

void FUN_1430bacd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_145a8b778;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430bad10 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UARTrackedObject::GetPrivateStaticClass(void)

{
  if (DAT_146b49848 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"WeaponAttachmentSlot",&DAT_146b49848,
                  StaticRegisterNativesUARTrackedObject,0xd0,0x10000000,0,L"Engine",&LAB_1430bb7d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_14149b3f0,0);
  }
  return DAT_146b49848;
}



// FUNCTION 1430badd0 FUN_1430badd0 body=53 status=ok
// SIG undefined FUN_1430badd0(void)

void FUN_1430badd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_145a8b890;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1430bae10 FUN_1430bae10 body=53 status=ok
// SIG undefined FUN_1430bae10(void)

void FUN_1430bae10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_145a8b9a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430bae50 FUN_1430bae50 body=53 status=ok
// SIG undefined FUN_1430bae50(void)

void FUN_1430bae50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa8;
    *puVar1 = &PTR_FUN_145a8bac0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430bae90 FUN_1430bae90 body=162 status=ok
// SIG undefined FUN_1430bae90(void)

longlong FUN_1430bae90(void)

{
  if (DAT_146b49858 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"WeaponAttributeContextResolver",&DAT_146b49858,
                  FUN_140447710,0x58,0x10000000,0,L"Engine",&LAB_1430bb7e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1413c1cb0,&LAB_140447700,0);
  }
  return DAT_146b49858;
}



// FUNCTION 1430baf40 FUN_1430baf40 body=53 status=ok
// SIG undefined FUN_1430baf40(void)

void FUN_1430baf40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_145a8bbd8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430bafa0 FUN_1430bafa0 body=162 status=ok
// SIG undefined FUN_1430bafa0(void)

longlong FUN_1430bafa0(void)

{
  if (DAT_146b498b8 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"WeaponChargePercentValueResolver",&DAT_146b498b8,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",FUN_1430bb820,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDungeonEventListener::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b498b8;
}



// FUNCTION 1430bb050 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGStartScreenUW::GetPrivateStaticClass(void)

{
  if (DAT_146b49918 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"WeaponChargeComponent",&DAT_146b49918,FUN_1430bce90,0x300,
                  0x10000000,0,L"Engine",&LAB_1430bb810,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1430bf460,&LAB_140447700,0);
  }
  return DAT_146b49918;
}



// FUNCTION 1430bb100 FUN_1430bb100 body=162 status=ok
// SIG undefined FUN_1430bb100(void)

longlong FUN_1430bb100(void)

{
  if (DAT_146b496f0 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"WeaponAccuracyPoolAttributePropertyValueResolver",
                  &DAT_146b496f0,FUN_140447710,0xb8,0x10000000,0,L"Engine",&LAB_1430bb720,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1413d2540,&LAB_140447700,0);
  }
  return DAT_146b496f0;
}



// FUNCTION 1430bb1c0 FUN_1430bb1c0 body=47 status=ok
// SIG undefined FUN_1430bb1c0(void)

longlong FUN_1430bb1c0(void)

{
  if (DAT_146b49910 == 0) {
    FUN_141786440(&DAT_146b49910,&PTR_GetPrivateStaticClass_145a89510);
  }
  return DAT_146b49910;
}



// FUNCTION 1430bb1f0 FUN_1430bb1f0 body=47 status=ok
// SIG undefined FUN_1430bb1f0(void)

longlong FUN_1430bb1f0(void)

{
  if (DAT_146b498c0 == 0) {
    FUN_141786a30(&DAT_146b498c0,&PTR_FUN_1467a5990);
  }
  return DAT_146b498c0;
}



// FUNCTION 1430bb220 FUN_1430bb220 body=47 status=ok
// SIG undefined FUN_1430bb220(void)

longlong FUN_1430bb220(void)

{
  if (DAT_146b498c8 == 0) {
    FUN_141786a30(&DAT_146b498c8,&PTR_FUN_1467a59d0);
  }
  return DAT_146b498c8;
}



// FUNCTION 1430bb250 FUN_1430bb250 body=47 status=ok
// SIG undefined FUN_1430bb250(void)

longlong FUN_1430bb250(void)

{
  if (DAT_146b498d0 == 0) {
    FUN_141786a30(&DAT_146b498d0,&PTR_FUN_1467a5a10);
  }
  return DAT_146b498d0;
}



// FUNCTION 1430bb280 FUN_1430bb280 body=47 status=ok
// SIG undefined FUN_1430bb280(void)

longlong FUN_1430bb280(void)

{
  if (DAT_146b498d8 == 0) {
    FUN_141786a30(&DAT_146b498d8,&PTR_FUN_1467a5a90);
  }
  return DAT_146b498d8;
}



// FUNCTION 1430bb2b0 FUN_1430bb2b0 body=47 status=ok
// SIG undefined FUN_1430bb2b0(void)

longlong FUN_1430bb2b0(void)

{
  if (DAT_146b498e0 == 0) {
    FUN_141786a30(&DAT_146b498e0,&PTR_FUN_1467a5b10);
  }
  return DAT_146b498e0;
}



// FUNCTION 1430bb2e0 FUN_1430bb2e0 body=47 status=ok
// SIG undefined FUN_1430bb2e0(void)

longlong FUN_1430bb2e0(void)

{
  if (DAT_146b498e8 == 0) {
    FUN_141786a30(&DAT_146b498e8,&PTR_FUN_1467a5b90);
  }
  return DAT_146b498e8;
}



// FUNCTION 1430bb310 FUN_1430bb310 body=47 status=ok
// SIG undefined FUN_1430bb310(void)

longlong FUN_1430bb310(void)

{
  if (DAT_146b498f0 == 0) {
    FUN_141786a30(&DAT_146b498f0,&PTR_FUN_1467a5c50);
  }
  return DAT_146b498f0;
}



// FUNCTION 1430bb340 FUN_1430bb340 body=47 status=ok
// SIG undefined FUN_1430bb340(void)

longlong FUN_1430bb340(void)

{
  if (DAT_146b498f8 == 0) {
    FUN_141786a30(&DAT_146b498f8,&PTR_FUN_1467a5d10);
  }
  return DAT_146b498f8;
}



// FUNCTION 1430bb370 FUN_1430bb370 body=47 status=ok
// SIG undefined FUN_1430bb370(void)

longlong FUN_1430bb370(void)

{
  if (DAT_146b49900 == 0) {
    FUN_141786a30(&DAT_146b49900,&PTR_FUN_1467a5d50);
  }
  return DAT_146b49900;
}



// FUNCTION 1430bb3a0 FUN_1430bb3a0 body=47 status=ok
// SIG undefined FUN_1430bb3a0(void)

longlong FUN_1430bb3a0(void)

{
  if (DAT_146b49908 == 0) {
    FUN_141786a30(&DAT_146b49908,&PTR_FUN_1467a5d90);
  }
  return DAT_146b49908;
}



// FUNCTION 1430bb3d0 FUN_1430bb3d0 body=162 status=ok
// SIG undefined FUN_1430bb3d0(void)

longlong FUN_1430bb3d0(void)

{
  if (DAT_146b49738 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"WeaponAmmoChamberBoneControl",&DAT_146b49738,FUN_140447710,
                  0xa0,0x10000000,0,L"Engine",&LAB_1430bb740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMaterialInterface::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b49738;
}



// FUNCTION 1430bb490 FUN_1430bb490 body=162 status=ok
// SIG undefined FUN_1430bb490(void)

longlong FUN_1430bb490(void)

{
  if (DAT_146b49950 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"WeaponDebugInterface",&DAT_146b49950,FUN_140447710,0x28,
                  0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b49950;
}



// FUNCTION 1430bb540 FUN_1430bb540 body=53 status=ok
// SIG undefined FUN_1430bb540(void)

void FUN_1430bb540(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_145a8b110;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430bb590 FUN_1430bb590 body=53 status=ok
// SIG undefined FUN_1430bb590(void)

void FUN_1430bb590(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_145a8a220;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430bb5d0 FUN_1430bb5d0 body=53 status=ok
// SIG undefined FUN_1430bb5d0(void)

void FUN_1430bb5d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_145a8a338;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430bb610 FUN_1430bb610 body=162 status=ok
// SIG undefined FUN_1430bb610(void)

longlong FUN_1430bb610(void)

{
  if (DAT_146b49750 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"WeaponConsumedLoadedAmmoValueResolver",&DAT_146b49750,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",FUN_1430bb860,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDungeonEventListener::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b49750;
}



// FUNCTION 1430bb6c0 FUN_1430bb6c0 body=53 status=ok
// SIG undefined FUN_1430bb6c0(void)

void FUN_1430bb6c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_145a8a450;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430bb790 FUN_1430bb790 body=41 status=ok
// SIG undefined FUN_1430bb790(void)

void FUN_1430bb790(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1422552b0(puVar1,param_1);
    *puVar1 = &PTR_FUN_14473fe48;
  }
  return;
}



// FUNCTION 1430bb820 FUN_1430bb820 body=41 status=ok
// SIG undefined FUN_1430bb820(void)

void FUN_1430bb820(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142c8d050(puVar1,param_1);
    *puVar1 = &PTR_FUN_145a8ad70;
  }
  return;
}



// FUNCTION 1430bb860 FUN_1430bb860 body=41 status=ok
// SIG undefined FUN_1430bb860(void)

void FUN_1430bb860(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142c8d050(puVar1,param_1);
    *puVar1 = &PTR_FUN_145a8a568;
  }
  return;
}



// FUNCTION 1430bb890 FUN_1430bb890 body=60 status=ok
// SIG undefined FUN_1430bb890(void)

void FUN_1430bb890(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10 [6];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146b496b0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 1430bb8d0 FUN_1430bb8d0 body=60 status=ok
// SIG undefined FUN_1430bb8d0(void)

void FUN_1430bb8d0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10 [6];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146b49658);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 1430bb910 FUN_1430bb910 body=60 status=ok
// SIG undefined FUN_1430bb910(void)

void FUN_1430bb910(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10 [6];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146b49650);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 1430bb950 FUN_1430bb950 body=60 status=ok
// SIG undefined FUN_1430bb950(void)

void FUN_1430bb950(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10 [6];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146b49660);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 1430bb9b0 FUN_1430bb9b0 body=69 status=ok
// SIG undefined FUN_1430bb9b0(void)

void FUN_1430bb9b0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x60);
  *(undefined4 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined4 *)((longlong)param_2 + 0x48) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  return;
}



// FUNCTION 1430bba00 FUN_1430bba00 body=42 status=ok
// SIG undefined FUN_1430bba00(void)

void FUN_1430bba00(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x60);
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  return;
}



// FUNCTION 1430bbaa0 FUN_1430bbaa0 body=61 status=ok
// SIG undefined FUN_1430bbaa0(void)

void FUN_1430bbaa0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x68);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined4 *)((longlong)param_2 + 0x40) = 0x3f800000;
  return;
}



// FUNCTION 1430bbc70 FUN_1430bbc70 body=356 status=ok
// SIG undefined FUN_1430bbc70(void)

undefined8 FUN_1430bbc70(undefined8 param_1,undefined1 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int local_res20;
  
  if (param_4 != 0) {
    plVar8 = (longlong *)(param_3 + 0x10);
    local_res20 = param_4;
    do {
      *param_2 = (char)plVar8[-2];
      plVar1 = (longlong *)(param_2 + 0x10);
      *(longlong *)(param_2 + 8) = plVar8[-1];
      if (plVar1 != plVar8) {
        iVar6 = *(int *)(param_2 + 0x18);
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
        iVar6 = (int)plVar8[1];
        lVar3 = *plVar8;
        *(int *)(param_2 + 0x18) = iVar6;
        if ((iVar6 == 0) && (*(int *)(param_2 + 0x1c) == 0)) {
          *(undefined4 *)(param_2 + 0x1c) = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar6);
          puVar5 = (undefined8 *)*plVar1;
          if (iVar6 != 0) {
            puVar7 = (undefined8 *)(lVar3 + 8);
            do {
              *puVar5 = puVar7[-1];
              puVar5[1] = 0;
              iVar2 = *(int *)(puVar7 + 1);
              _Src = (void *)*puVar7;
              *(int *)(puVar5 + 2) = iVar2;
              if (iVar2 == 0) {
                *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
              }
              else {
                TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar5 + 1,iVar2,0);
                _guard_xfg_dispatch_icall_nop((void *)puVar5[1],_Src,(longlong)iVar2 * 0x18);
              }
              puVar5 = puVar5 + 3;
              puVar7 = puVar7 + 3;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
      }
      TArray<FRuntimeMeshCollisionSourceSectionInfo,TSizedDefaultAllocator<32>_>::operator=
                (param_2 + 0x20,plVar8 + 2);
      plVar8 = plVar8 + 6;
      local_res20 = local_res20 + -1;
      param_2 = param_2 + 0x30;
    } while (local_res20 != 0);
  }
  return 1;
}



// FUNCTION 1430bbde0 Copy body=82 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FRuntimeMeshAsyncBodySetupData>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - (longlong)param_2;
    do {
      *param_2 = *(undefined8 *)(param_3 + (longlong)param_2);
      TArray<FRuntimeMeshCollisionSourceSectionInfo,TSizedDefaultAllocator<32>_>::operator=
                (param_2 + 1,param_3 + 8 + (longlong)param_2);
      param_2 = param_2 + 3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1430bbe40 FUN_1430bbe40 body=309 status=ok
// SIG undefined FUN_1430bbe40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1430bbe40(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

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
  undefined1 *puVar11;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if (param_4 != 0) {
    puVar11 = (undefined1 *)(param_3 + 4);
    do {
      *param_2 = *(undefined4 *)(puVar11 + -4);
      puVar1 = (undefined8 *)(param_2 + 0x14);
      *(undefined1 *)(param_2 + 1) = *puVar11;
      uVar8 = *(undefined8 *)(puVar11 + 0xc);
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(puVar11 + 4);
      *(undefined8 *)(param_2 + 4) = uVar8;
      uVar8 = *(undefined8 *)(puVar11 + 0x1c);
      *(undefined8 *)(param_2 + 6) = *(undefined8 *)(puVar11 + 0x14);
      *(undefined8 *)(param_2 + 8) = uVar8;
      uVar8 = *(undefined8 *)(puVar11 + 0x2c);
      *(undefined8 *)(param_2 + 10) = *(undefined8 *)(puVar11 + 0x24);
      *(undefined8 *)(param_2 + 0xc) = uVar8;
      uVar5 = *(undefined4 *)(puVar11 + 0x38);
      uVar6 = *(undefined4 *)(puVar11 + 0x3c);
      uVar7 = *(undefined4 *)(puVar11 + 0x40);
      param_2[0xe] = *(undefined4 *)(puVar11 + 0x34);
      param_2[0xf] = uVar5;
      param_2[0x10] = uVar6;
      param_2[0x11] = uVar7;
      *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(puVar11 + 0x44);
      uStack_30 = *(longlong **)(puVar11 + 0x54);
      local_38 = *(undefined8 *)(puVar11 + 0x4c);
      if (uStack_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
        UNLOCK();
      }
      if (&local_38 != puVar1) {
        local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
        uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
        uVar8 = *puVar1;
        plVar9 = *(longlong **)(param_2 + 0x16);
        local_28 = (undefined4)local_38;
        uStack_24 = local_38._4_4_;
        uStack_20 = (undefined4)uStack_30;
        uStack_1c = uStack_30._4_4_;
        *(undefined4 *)puVar1 = (undefined4)local_38;
        param_2[0x15] = local_38._4_4_;
        param_2[0x16] = (undefined4)uStack_30;
        param_2[0x17] = uStack_30._4_4_;
        local_38 = uVar8;
        uStack_30 = plVar9;
      }
      plVar9 = uStack_30;
      if (uStack_30 != (longlong *)0x0) {
        LOCK();
        plVar2 = uStack_30 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*uStack_30)(uStack_30);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*uStack_30 + 8))(uStack_30,1);
          }
        }
      }
      puVar11 = puVar11 + 0x60;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x18;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1430bc540 Destruct body=37 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FBakedAnimationStateMachine>::Destruct
               (undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_2 + 0x10);
  return;
}



// FUNCTION 1430bc570 FUN_1430bc570 body=77 status=ok
// SIG undefined FUN_1430bc570(void)

void FUN_1430bc570(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_2 + 0x58);
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



// FUNCTION 1430bc5c0 FUN_1430bc5c0 body=55 status=ok
// SIG undefined FUN_1430bc5c0(void)

void FUN_1430bc5c0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b49528 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b49528 = GetStaticEnum(FUN_1430bd710,uVar1,L"EAmmoRegenType");
  }
  return;
}



// FUNCTION 1430bc600 FUN_1430bc600 body=55 status=ok
// SIG undefined FUN_1430bc600(void)

void FUN_1430bc600(void)

{
  undefined8 uVar1;
  
  if (DAT_146b49578 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b49578 = GetStaticEnum(FUN_1430bd740,uVar1,L"EWeaponActionType");
  }
  return;
}



// FUNCTION 1430bc640 FUN_1430bc640 body=55 status=ok
// SIG undefined FUN_1430bc640(void)

void FUN_1430bc640(void)

{
  undefined8 uVar1;
  
  if (DAT_146b49550 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b49550 = GetStaticEnum(FUN_1430bd770,uVar1,L"EWeaponAttachmentVisibilityType");
  }
  return;
}



// FUNCTION 1430bc680 FUN_1430bc680 body=55 status=ok
// SIG undefined FUN_1430bc680(void)

void FUN_1430bc680(void)

{
  undefined8 uVar1;
  
  if (DAT_146b49568 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b49568 = GetStaticEnum(FUN_1430bd7a0,uVar1,L"EWeaponChargeComparisonOperatorType");
  }
  return;
}



// FUNCTION 1430bc6c0 FUN_1430bc6c0 body=55 status=ok
// SIG undefined FUN_1430bc6c0(void)

void FUN_1430bc6c0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b49560 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b49560 = GetStaticEnum(FUN_1430bd7d0,uVar1,L"EWeaponChargeEventType");
  }
  return;
}



// FUNCTION 1430bc700 FUN_1430bc700 body=55 status=ok
// SIG undefined FUN_1430bc700(void)

void FUN_1430bc700(void)

{
  undefined8 uVar1;
  
  if (DAT_146b49570 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b49570 = GetStaticEnum(FUN_1430bd800,uVar1,L"EWeaponChargeState");
  }
  return;
}



// FUNCTION 1430bc740 FUN_1430bc740 body=55 status=ok
// SIG undefined FUN_1430bc740(void)

void FUN_1430bc740(void)

{
  undefined8 uVar1;
  
  if (DAT_146b49540 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b49540 = GetStaticEnum(FUN_1430bd830,uVar1,L"EWeaponEffectFlag");
  }
  return;
}



// FUNCTION 1430bc780 FUN_1430bc780 body=55 status=ok
// SIG undefined FUN_1430bc780(void)

void FUN_1430bc780(void)

{
  undefined8 uVar1;
  
  if (DAT_146b49558 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b49558 = GetStaticEnum(FUN_1430bd860,uVar1,L"EWeaponEffectType");
  }
  return;
}



// FUNCTION 1430bc7c0 FUN_1430bc7c0 body=55 status=ok
// SIG undefined FUN_1430bc7c0(void)

void FUN_1430bc7c0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b49538 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b49538 = GetStaticEnum(FUN_1430bd890,uVar1,L"EWeaponMaterialEffectBlendMode");
  }
  return;
}



// FUNCTION 1430bc800 FUN_1430bc800 body=55 status=ok
// SIG undefined FUN_1430bc800(void)

void FUN_1430bc800(void)

{
  undefined8 uVar1;
  
  if (DAT_146b49530 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b49530 = GetStaticEnum(FUN_1430bd8c0,uVar1,L"EWeaponSkeletalControlEvent");
  }
  return;
}



// FUNCTION 1430bc840 FUN_1430bc840 body=55 status=ok
// SIG undefined FUN_1430bc840(void)

void FUN_1430bc840(void)

{
  undefined8 uVar1;
  
  if (DAT_146b49548 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b49548 = GetStaticEnum(FUN_1430bd8f0,uVar1,L"EWeaponTextureMipsSetting");
  }
  return;
}



// FUNCTION 1430bc880 FUN_1430bc880 body=162 status=ok
// SIG undefined FUN_1430bc880(void)

longlong FUN_1430bc880(void)

{
  if (DAT_146b49768 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"WeaponAmmoComponent",&DAT_146b49768,FUN_1430bce00,0x1b0,
                  0x10000000,0,L"Engine",&LAB_1430bb750,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b49768;
}



// FUNCTION 1430bc930 FUN_1430bc930 body=162 status=ok
// SIG undefined FUN_1430bc930(void)

longlong FUN_1430bc930(void)

{
  if (DAT_146b497e0 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"WeaponAnimInstance",&DAT_146b497e0,FUN_140447710,0x460,
                  0x10000008,0,L"Engine",FUN_1430bb790,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142256d30,thunk_FUN_1428eccf0,
                  &LAB_14084f730,0);
  }
  return DAT_146b497e0;
}



// FUNCTION 1430bc9e0 FUN_1430bc9e0 body=162 status=ok
// SIG undefined FUN_1430bc9e0(void)

longlong FUN_1430bc9e0(void)

{
  if (DAT_146b497f0 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"WeaponAnimNotify",&DAT_146b497f0,FUN_140447710,0x40,
                  0x10000001,0,L"Engine",&LAB_1430bb7c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimNotify::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b497f0;
}



// FUNCTION 1430bca90 FUN_1430bca90 body=162 status=ok
// SIG undefined FUN_1430bca90(void)

longlong FUN_1430bca90(void)

{
  if (DAT_146b49868 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"WeaponAudioProviderComponent",&DAT_146b49868,FUN_140447710,
                  0x178,0x10000000,0,L"Engine",&LAB_1430bb800,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b49868;
}



// FUNCTION 1430bcb40 FUN_1430bcb40 body=6 status=ok
// SIG undefined FUN_1430bcb40(void)

undefined8 FUN_1430bcb40(void)

{
  return 0xd71b81a9;
}



// FUNCTION 1430bcb50 FUN_1430bcb50 body=6 status=ok
// SIG undefined FUN_1430bcb50(void)

undefined8 FUN_1430bcb50(void)

{
  return 0x1522c2c8;
}



// FUNCTION 1430bcb60 FUN_1430bcb60 body=6 status=ok
// SIG undefined FUN_1430bcb60(void)

undefined8 FUN_1430bcb60(void)

{
  return 0xfc71a9f;
}



// FUNCTION 1430bcb70 FUN_1430bcb70 body=6 status=ok
// SIG undefined FUN_1430bcb70(void)

undefined8 FUN_1430bcb70(void)

{
  return 0xb4952bf7;
}



// FUNCTION 1430bcb80 FUN_1430bcb80 body=6 status=ok
// SIG undefined FUN_1430bcb80(void)

undefined8 FUN_1430bcb80(void)

{
  return 0xef4aa99f;
}



// FUNCTION 1430bcb90 FUN_1430bcb90 body=6 status=ok
// SIG undefined FUN_1430bcb90(void)

undefined8 FUN_1430bcb90(void)

{
  return 0xca4c42e5;
}



// FUNCTION 1430bcba0 FUN_1430bcba0 body=6 status=ok
// SIG undefined FUN_1430bcba0(void)

undefined8 FUN_1430bcba0(void)

{
  return 0xa2412f1e;
}



// FUNCTION 1430bcbb0 FUN_1430bcbb0 body=6 status=ok
// SIG undefined FUN_1430bcbb0(void)

undefined8 FUN_1430bcbb0(void)

{
  return 0x85cf5aba;
}



// FUNCTION 1430bcbc0 FUN_1430bcbc0 body=6 status=ok
// SIG undefined FUN_1430bcbc0(void)

undefined8 FUN_1430bcbc0(void)

{
  return 0xf7a5c7f9;
}



// FUNCTION 1430bcbd0 FUN_1430bcbd0 body=6 status=ok
// SIG undefined FUN_1430bcbd0(void)

undefined8 FUN_1430bcbd0(void)

{
  return 0x7ba99d3;
}



// FUNCTION 1430bcbe0 FUN_1430bcbe0 body=6 status=ok
// SIG undefined FUN_1430bcbe0(void)

undefined8 FUN_1430bcbe0(void)

{
  return 0xdb1ed727;
}



// FUNCTION 1430bcbf0 FUN_1430bcbf0 body=6 status=ok
// SIG undefined FUN_1430bcbf0(void)

undefined8 FUN_1430bcbf0(void)

{
  return 0x31cba629;
}



// FUNCTION 1430bcc00 FUN_1430bcc00 body=6 status=ok
// SIG undefined FUN_1430bcc00(void)

undefined8 FUN_1430bcc00(void)

{
  return 0x2a03f1b8;
}



// FUNCTION 1430bcc10 FUN_1430bcc10 body=6 status=ok
// SIG undefined FUN_1430bcc10(void)

undefined8 FUN_1430bcc10(void)

{
  return 0x997e3415;
}



// FUNCTION 1430bcc20 FUN_1430bcc20 body=6 status=ok
// SIG undefined FUN_1430bcc20(void)

undefined8 FUN_1430bcc20(void)

{
  return 0xdf2a7412;
}



// FUNCTION 1430bcdb0 FUN_1430bcdb0 body=57 status=ok
// SIG undefined FUN_1430bcdb0(void)

void FUN_1430bcdb0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b49668);
                    /* WARNING: Could not recover jumptable at 0x0001430bcde6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1430bcdf0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UMaterialInterface::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1430bce00 FUN_1430bce00 body=34 status=ok
// SIG undefined FUN_1430bce00(void)

void FUN_1430bce00(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1430bc880();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClientRefillAmmo_145a8a848,1);
  return;
}



// FUNCTION 1430bce30 StaticRegisterNativesUActionBuff body=34 status=ok
// SIG undefined StaticRegisterNativesUActionBuff(void)

void UActionBuff::StaticRegisterNativesUActionBuff(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClientConsumeAmmo_145a8a890,7);
  return;
}



// FUNCTION 1430bce60 StaticRegisterNativesUARTrackedObject body=34 status=ok
// SIG undefined StaticRegisterNativesUARTrackedObject(void)

void UARTrackedObject::StaticRegisterNativesUARTrackedObject(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetMesh_145a8ad60,1);
  return;
}



// FUNCTION 1430bce90 FUN_1430bce90 body=34 status=ok
// SIG undefined FUN_1430bce90(void)

void FUN_1430bce90(void)

{
  undefined8 uVar1;
  
  uVar1 = UUGStartScreenUW::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_DelayChargeFinished_145a8b230,10);
  return;
}



// FUNCTION 1430bcec0 FUN_1430bcec0 body=34 status=ok
// SIG undefined FUN_1430bcec0(void)

void FUN_1430bcec0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1430ba5c0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnRep_ClientReloadState_145a8b2d0,1);
  return;
}



// FUNCTION 1430bcef0 FUN_1430bcef0 body=82 status=ok
// SIG undefined FUN_1430bcef0(void)

void FUN_1430bcef0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b49700 == 0) {
    uVar1 = FUN_1430bcb40();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b49700 = GetStaticStruct(FUN_1430bd920,uVar2,L"BodyWeaponActionInfo",0x30,uVar1);
  }
  return;
}



// FUNCTION 1430bcf50 FUN_1430bcf50 body=82 status=ok
// SIG undefined FUN_1430bcf50(void)

void FUN_1430bcf50(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b49720 == 0) {
    uVar1 = FUN_1430bcb50();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b49720 = GetStaticStruct(FUN_1430bd950,uVar2,L"ConditionalActionInfo",0x18,uVar1);
  }
  return;
}



// FUNCTION 1430bcfb0 FUN_1430bcfb0 body=82 status=ok
// SIG undefined FUN_1430bcfb0(void)

void FUN_1430bcfb0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b49710 == 0) {
    uVar1 = FUN_1430bcb60();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b49710 = GetStaticStruct(FUN_1430bd980,uVar2,L"ConditionalWeaponActionSet",0x18,uVar1);
  }
  return;
}



// FUNCTION 1430bd010 FUN_1430bd010 body=82 status=ok
// SIG undefined FUN_1430bd010(void)

void FUN_1430bd010(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b498a0 == 0) {
    uVar1 = FUN_1430bcb70();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b498a0 = GetStaticStruct(FUN_1430bd9b0,uVar2,L"WeaponChargeAttributeEffect",0x60,uVar1);
  }
  return;
}



// FUNCTION 1430bd070 FUN_1430bd070 body=82 status=ok
// SIG undefined FUN_1430bd070(void)

void FUN_1430bd070(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b49890 == 0) {
    uVar1 = FUN_1430bcb80();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b49890 = GetStaticStruct(FUN_1430bd9e0,uVar2,L"WeaponChargeEventNotify",0x10,uVar1);
  }
  return;
}



// FUNCTION 1430bd0d0 FUN_1430bd0d0 body=82 status=ok
// SIG undefined FUN_1430bd0d0(void)

void FUN_1430bd0d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b49828 == 0) {
    uVar1 = FUN_1430bcb90();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b49828 = GetStaticStruct(FUN_1430bda10,uVar2,L"WeaponEffectAttachment",0x60,uVar1);
  }
  return;
}



// FUNCTION 1430bd130 FUN_1430bd130 body=82 status=ok
// SIG undefined FUN_1430bd130(void)

void FUN_1430bd130(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b499a8 == 0) {
    uVar1 = FUN_1430bcba0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b499a8 = GetStaticStruct(FUN_1430bda40,uVar2,L"WeaponEffectQueryData",0x10,uVar1);
  }
  return;
}



// FUNCTION 1430bd190 FUN_1430bd190 body=82 status=ok
// SIG undefined FUN_1430bd190(void)

void FUN_1430bd190(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b499b8 == 0) {
    uVar1 = FUN_1430bcbb0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b499b8 = GetStaticStruct(FUN_1430bda70,uVar2,L"WeaponMaterialEffectData",0x60,uVar1);
  }
  return;
}



// FUNCTION 1430bd1f0 FUN_1430bd1f0 body=82 status=ok
// SIG undefined FUN_1430bd1f0(void)

void FUN_1430bd1f0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b49818 == 0) {
    uVar1 = FUN_1430bcbc0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b49818 = GetStaticStruct(FUN_1430bdaa0,uVar2,L"WeaponMaterialEffectInstance",0x68,uVar1);
  }
  return;
}



// FUNCTION 1430bd250 FUN_1430bd250 body=82 status=ok
// SIG undefined FUN_1430bd250(void)

void FUN_1430bd250(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b499d8 == 0) {
    uVar1 = FUN_1430bcbd0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b499d8 =
         GetStaticStruct(FUN_1430bdad0,uVar2,L"WeaponRegisterAttachmentEffectData",0x60,uVar1);
  }
  return;
}



// FUNCTION 1430bd2b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPoseDriverTarget::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b499c8 == 0) {
    uVar1 = FUN_1430bcbe0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b499c8 =
         GetStaticStruct(FUN_1430bdb00,uVar2,L"WeaponRegisterMaterialEffectData",0xa8,uVar1);
  }
  return;
}



// FUNCTION 1430bd310 FUN_1430bd310 body=82 status=ok
// SIG undefined FUN_1430bd310(void)

void FUN_1430bd310(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b49988 == 0) {
    uVar1 = FUN_1430bcbf0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b49988 =
         GetStaticStruct(FUN_1430bdb30,uVar2,L"WeaponRegisterSkeletalControlData",0x10,uVar1);
  }
  return;
}



// FUNCTION 1430bd370 FUN_1430bd370 body=82 status=ok
// SIG undefined FUN_1430bd370(void)

void FUN_1430bd370(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b49998 == 0) {
    uVar1 = FUN_1430bcc00();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b49998 =
         GetStaticStruct(FUN_1430bdb60,uVar2,L"WeaponRegisterTrinketAttachmentData",0x38,uVar1);
  }
  return;
}



// FUNCTION 1430bd3d0 FUN_1430bd3d0 body=82 status=ok
// SIG undefined FUN_1430bd3d0(void)

void FUN_1430bd3d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b49808 == 0) {
    uVar1 = FUN_1430bcc10();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b49808 = GetStaticStruct(FUN_1430bdb90,uVar2,L"WeaponSkeletalControlInstance",0x38,uVar1)
    ;
  }
  return;
}



// FUNCTION 1430bd430 FUN_1430bd430 body=82 status=ok
// SIG undefined FUN_1430bd430(void)

void FUN_1430bd430(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b497f8 == 0) {
    uVar1 = FUN_1430bcc20();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b497f8 = GetStaticStruct(FUN_1430bdbc0,uVar2,L"WeaponTrinketAttachment",0x40,uVar1);
  }
  return;
}



// FUNCTION 1430bd490 FUN_1430bd490 body=57 status=ok
// SIG undefined FUN_1430bd490(void)

void FUN_1430bd490(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b496c8);
                    /* WARNING: Could not recover jumptable at 0x0001430bd4c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1430bd4d0 FUN_1430bd4d0 body=47 status=ok
// SIG undefined FUN_1430bd4d0(void)

longlong FUN_1430bd4d0(void)

{
  if (DAT_146b49938 == 0) {
    FUN_141786440(&DAT_146b49938,&PTR_FUN_145a85e30);
  }
  return DAT_146b49938;
}



// FUNCTION 1430bd500 FUN_1430bd500 body=47 status=ok
// SIG undefined FUN_1430bd500(void)

longlong FUN_1430bd500(void)

{
  if (DAT_146b496e8 == 0) {
    FUN_141786440(&DAT_146b496e8,&PTR_FUN_145a88120);
  }
  return DAT_146b496e8;
}



// FUNCTION 1430bd530 FUN_1430bd530 body=47 status=ok
// SIG undefined FUN_1430bd530(void)

longlong FUN_1430bd530(void)

{
  if (DAT_146b49730 == 0) {
    FUN_141786440(&DAT_146b49730,&PTR_FUN_145a88790);
  }
  return DAT_146b49730;
}



// FUNCTION 1430bd560 FUN_1430bd560 body=47 status=ok
// SIG undefined FUN_1430bd560(void)

longlong FUN_1430bd560(void)

{
  if (DAT_146b497c0 == 0) {
    FUN_141786440(&DAT_146b497c0,&PTR_FUN_145a85990);
  }
  return DAT_146b497c0;
}



// FUNCTION 1430bd590 FUN_1430bd590 body=47 status=ok
// SIG undefined FUN_1430bd590(void)

longlong FUN_1430bd590(void)

{
  if (DAT_146b497e8 == 0) {
    FUN_141786440(&DAT_146b497e8,&PTR_thunk_FUN_1430bc9e0_145a85d00);
  }
  return DAT_146b497e8;
}



// FUNCTION 1430bd5c0 FUN_1430bd5c0 body=47 status=ok
// SIG undefined FUN_1430bd5c0(void)

longlong FUN_1430bd5c0(void)

{
  if (DAT_146b49850 == 0) {
    FUN_141786440(&DAT_146b49850,&PTR_FUN_145a87ca0);
  }
  return DAT_146b49850;
}



// FUNCTION 1430bd5f0 FUN_1430bd5f0 body=47 status=ok
// SIG undefined FUN_1430bd5f0(void)

longlong FUN_1430bd5f0(void)

{
  if (DAT_146b49860 == 0) {
    FUN_141786440(&DAT_146b49860,&PTR_thunk_FUN_1430bca90_145a87fc0);
  }
  return DAT_146b49860;
}



// FUNCTION 1430bd620 FUN_1430bd620 body=47 status=ok
// SIG undefined FUN_1430bd620(void)

longlong FUN_1430bd620(void)

{
  if (DAT_146b498b0 == 0) {
    FUN_141786440(&DAT_146b498b0,&PTR_FUN_145a88b70);
  }
  return DAT_146b498b0;
}



// FUNCTION 1430bd650 FUN_1430bd650 body=47 status=ok
// SIG undefined FUN_1430bd650(void)

longlong FUN_1430bd650(void)

{
  if (DAT_146b49748 == 0) {
    FUN_141786440(&DAT_146b49748,&PTR_FUN_145a84a80);
  }
  return DAT_146b49748;
}



// FUNCTION 1430bd680 FUN_1430bd680 body=47 status=ok
// SIG undefined FUN_1430bd680(void)

longlong FUN_1430bd680(void)

{
  if (DAT_146b49948 == 0) {
    FUN_141786440(&DAT_146b49948,&PTR_FUN_145a86030);
  }
  return DAT_146b49948;
}



// FUNCTION 1430bd6b0 FUN_1430bd6b0 body=47 status=ok
// SIG undefined FUN_1430bd6b0(void)

longlong FUN_1430bd6b0(void)

{
  if (DAT_146b49740 == 0) {
    FUN_141786a30(&DAT_146b49740,&PTR_Z_Construct_UPackage__Script_Engine_1467a4190);
  }
  return DAT_146b49740;
}



// FUNCTION 1430bd6e0 FUN_1430bd6e0 body=47 status=ok
// SIG undefined FUN_1430bd6e0(void)

longlong FUN_1430bd6e0(void)

{
  if (DAT_146b49870 == 0) {
    FUN_141786a30(&DAT_146b49870,&PTR_Z_Construct_UPackage__Script_Engine_1467a5610);
  }
  return DAT_146b49870;
}



// FUNCTION 1430bd710 FUN_1430bd710 body=47 status=ok
// SIG undefined FUN_1430bd710(void)

longlong FUN_1430bd710(void)

{
  if (DAT_146b49770 == 0) {
    FUN_1417866a0(&DAT_146b49770,&PTR_Z_Construct_UPackage__Script_Engine_1467a7ce0);
  }
  return DAT_146b49770;
}



// FUNCTION 1430bd740 FUN_1430bd740 body=47 status=ok
// SIG undefined FUN_1430bd740(void)

longlong FUN_1430bd740(void)

{
  if (DAT_146b496f8 == 0) {
    FUN_1417866a0(&DAT_146b496f8,&PTR_Z_Construct_UPackage__Script_Engine_1467a7c90);
  }
  return DAT_146b496f8;
}



// FUNCTION 1430bd770 FUN_1430bd770 body=47 status=ok
// SIG undefined FUN_1430bd770(void)

longlong FUN_1430bd770(void)

{
  if (DAT_146b49978 == 0) {
    FUN_1417866a0(&DAT_146b49978,&PTR_Z_Construct_UPackage__Script_Engine_1467a7f60);
  }
  return DAT_146b49978;
}



// FUNCTION 1430bd7a0 FUN_1430bd7a0 body=47 status=ok
// SIG undefined FUN_1430bd7a0(void)

longlong FUN_1430bd7a0(void)

{
  if (DAT_146b49880 == 0) {
    FUN_1417866a0(&DAT_146b49880,&PTR_Z_Construct_UPackage__Script_Engine_1467a7d80);
  }
  return DAT_146b49880;
}



// FUNCTION 1430bd7d0 FUN_1430bd7d0 body=47 status=ok
// SIG undefined FUN_1430bd7d0(void)

longlong FUN_1430bd7d0(void)

{
  if (DAT_146b49878 == 0) {
    FUN_1417866a0(&DAT_146b49878,&PTR_Z_Construct_UPackage__Script_Engine_1467a7d30);
  }
  return DAT_146b49878;
}



// FUNCTION 1430bd800 FUN_1430bd800 body=47 status=ok
// SIG undefined FUN_1430bd800(void)

longlong FUN_1430bd800(void)

{
  if (DAT_146b49888 == 0) {
    FUN_1417866a0(&DAT_146b49888,&PTR_Z_Construct_UPackage__Script_Engine_1467a7dd0);
  }
  return DAT_146b49888;
}



// FUNCTION 1430bd830 FUN_1430bd830 body=47 status=ok
// SIG undefined FUN_1430bd830(void)

longlong FUN_1430bd830(void)

{
  if (DAT_146b49968 == 0) {
    FUN_1417866a0(&DAT_146b49968,&PTR_Z_Construct_UPackage__Script_Engine_1467a7ec0);
  }
  return DAT_146b49968;
}



// FUNCTION 1430bd860 FUN_1430bd860 body=47 status=ok
// SIG undefined FUN_1430bd860(void)

longlong FUN_1430bd860(void)

{
  if (DAT_146b49980 == 0) {
    FUN_1417866a0(&DAT_146b49980,&PTR_Z_Construct_UPackage__Script_Engine_1467a7fb0);
  }
  return DAT_146b49980;
}



// FUNCTION 1430bd890 FUN_1430bd890 body=47 status=ok
// SIG undefined FUN_1430bd890(void)

longlong FUN_1430bd890(void)

{
  if (DAT_146b49960 == 0) {
    FUN_1417866a0(&DAT_146b49960,&PTR_Z_Construct_UPackage__Script_Engine_1467a7e70);
  }
  return DAT_146b49960;
}



// FUNCTION 1430bd8c0 FUN_1430bd8c0 body=47 status=ok
// SIG undefined FUN_1430bd8c0(void)

longlong FUN_1430bd8c0(void)

{
  if (DAT_146b49958 == 0) {
    FUN_1417866a0(&DAT_146b49958,&PTR_Z_Construct_UPackage__Script_Engine_1467a7e20);
  }
  return DAT_146b49958;
}



// FUNCTION 1430bd8f0 FUN_1430bd8f0 body=47 status=ok
// SIG undefined FUN_1430bd8f0(void)

longlong FUN_1430bd8f0(void)

{
  if (DAT_146b49970 == 0) {
    FUN_1417866a0(&DAT_146b49970,&PTR_Z_Construct_UPackage__Script_Engine_1467a7f10);
  }
  return DAT_146b49970;
}



// FUNCTION 1430bd920 FUN_1430bd920 body=47 status=ok
// SIG undefined FUN_1430bd920(void)

longlong FUN_1430bd920(void)

{
  if (DAT_146b49708 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b49708,&PTR_Z_Construct_UPackage__Script_Engine_1467a3e60);
  }
  return DAT_146b49708;
}



// FUNCTION 1430bd950 FUN_1430bd950 body=47 status=ok
// SIG undefined FUN_1430bd950(void)

longlong FUN_1430bd950(void)

{
  if (DAT_146b49728 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b49728,&PTR_Z_Construct_UPackage__Script_Engine_1467a4110);
  }
  return DAT_146b49728;
}



// FUNCTION 1430bd980 FUN_1430bd980 body=47 status=ok
// SIG undefined FUN_1430bd980(void)

longlong FUN_1430bd980(void)

{
  if (DAT_146b49718 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b49718,&PTR_Z_Construct_UPackage__Script_Engine_1467a3f60);
  }
  return DAT_146b49718;
}



// FUNCTION 1430bd9b0 FUN_1430bd9b0 body=47 status=ok
// SIG undefined FUN_1430bd9b0(void)

longlong FUN_1430bd9b0(void)

{
  if (DAT_146b498a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b498a8,&PTR_Z_Construct_UPackage__Script_Engine_1467a5920);
  }
  return DAT_146b498a8;
}



// FUNCTION 1430bd9e0 FUN_1430bd9e0 body=47 status=ok
// SIG undefined FUN_1430bd9e0(void)

longlong FUN_1430bd9e0(void)

{
  if (DAT_146b49898 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b49898,&PTR_Z_Construct_UPackage__Script_Engine_1467a57d0);
  }
  return DAT_146b49898;
}



// FUNCTION 1430bda10 FUN_1430bda10 body=47 status=ok
// SIG undefined FUN_1430bda10(void)

longlong FUN_1430bda10(void)

{
  if (DAT_146b49830 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b49830,&PTR_Z_Construct_UPackage__Script_Engine_1467a5090);
  }
  return DAT_146b49830;
}



// FUNCTION 1430bda40 FUN_1430bda40 body=47 status=ok
// SIG undefined FUN_1430bda40(void)

longlong FUN_1430bda40(void)

{
  if (DAT_146b499b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b499b0,&PTR_Z_Construct_UPackage__Script_Engine_1467a6dc0);
  }
  return DAT_146b499b0;
}



// FUNCTION 1430bda70 FUN_1430bda70 body=47 status=ok
// SIG undefined FUN_1430bda70(void)

longlong FUN_1430bda70(void)

{
  if (DAT_146b499c0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b499c0,&PTR_Z_Construct_UPackage__Script_Engine_1467a7200);
  }
  return DAT_146b499c0;
}



// FUNCTION 1430bdaa0 FUN_1430bdaa0 body=47 status=ok
// SIG undefined FUN_1430bdaa0(void)

longlong FUN_1430bdaa0(void)

{
  if (DAT_146b49820 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b49820,&PTR_Z_Construct_UPackage__Script_Engine_1467a4f70);
  }
  return DAT_146b49820;
}



// FUNCTION 1430bdad0 FUN_1430bdad0 body=47 status=ok
// SIG undefined FUN_1430bdad0(void)

longlong FUN_1430bdad0(void)

{
  if (DAT_146b499e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b499e0,&PTR_Z_Construct_UPackage__Script_Engine_1467a7c40);
  }
  return DAT_146b499e0;
}



// FUNCTION 1430bdb00 FUN_1430bdb00 body=47 status=ok
// SIG undefined FUN_1430bdb00(void)

longlong FUN_1430bdb00(void)

{
  if (DAT_146b499d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b499d0,&PTR_Z_Construct_UPackage__Script_Engine_1467a7740);
  }
  return DAT_146b499d0;
}



// FUNCTION 1430bdb30 FUN_1430bdb30 body=47 status=ok
// SIG undefined FUN_1430bdb30(void)

longlong FUN_1430bdb30(void)

{
  if (DAT_146b49990 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b49990,&PTR_Z_Construct_UPackage__Script_Engine_1467a6aa0);
  }
  return DAT_146b49990;
}



// FUNCTION 1430bdb60 FUN_1430bdb60 body=47 status=ok
// SIG undefined FUN_1430bdb60(void)

longlong FUN_1430bdb60(void)

{
  if (DAT_146b499a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b499a0,&PTR_Z_Construct_UPackage__Script_Engine_1467a6c80);
  }
  return DAT_146b499a0;
}



// FUNCTION 1430bdb90 FUN_1430bdb90 body=47 status=ok
// SIG undefined FUN_1430bdb90(void)

longlong FUN_1430bdb90(void)

{
  if (DAT_146b49810 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b49810,&PTR_Z_Construct_UPackage__Script_Engine_1467a4ee0);
  }
  return DAT_146b49810;
}



// FUNCTION 1430bdbc0 FUN_1430bdbc0 body=47 status=ok
// SIG undefined FUN_1430bdbc0(void)

longlong FUN_1430bdbc0(void)

{
  if (DAT_146b49800 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b49800,&PTR_Z_Construct_UPackage__Script_Engine_1467a4e50);
  }
  return DAT_146b49800;
}



// FUNCTION 1430bdc30 execGetRegenRate body=49 status=ok
// SIG undefined execGetRegenRate(void)

void UHealthComponent::execGetRegenRate(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x438))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430bdc70 FUN_1430bdc70 body=45 status=ok
// SIG undefined FUN_1430bdc70(void)

void FUN_1430bdc70(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1430774d0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430bdca0 execGetMaxSpeed body=49 status=ok
// SIG undefined execGetMaxSpeed(void)

void UMovementComponent::execGetMaxSpeed(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x440))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1430bdce0 FUN_1430bdce0 body=118 status=ok
// SIG undefined FUN_1430bdce0(void)

void FUN_1430bdce0(undefined8 param_1,longlong param_2)

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
  FUN_143080bd0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1430bdd80 FUN_1430bdd80 body=118 status=ok
// SIG undefined FUN_1430bdd80(void)

void FUN_1430bdd80(undefined8 param_1,longlong param_2)

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
  FUN_143081ae0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1430bde60 FUN_1430bde60 body=128 status=ok
// SIG undefined FUN_1430bde60(void)

void FUN_1430bde60(undefined8 param_1,longlong param_2)

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
  FUN_14308bd50(param_1,local_res10);
  return;
}



// FUNCTION 1430bdf00 FUN_1430bdf00 body=162 status=ok
// SIG undefined FUN_1430bdf00(void)

longlong FUN_1430bdf00(void)

{
  if (DAT_146b49bc0 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"WeaponFireRateAccelPercentValueResolver",&DAT_146b49bc0,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",FUN_1430bef90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDungeonEventListener::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b49bc0;
}



// FUNCTION 1430bdfb0 FUN_1430bdfb0 body=47 status=ok
// SIG undefined FUN_1430bdfb0(void)

longlong FUN_1430bdfb0(void)

{
  if (DAT_146b49db0 == 0) {
    FUN_141786440(&DAT_146b49db0,&PTR_GetPrivateStaticClass_145a8c450);
  }
  return DAT_146b49db0;
}



// FUNCTION 1430bdfe0 FUN_1430bdfe0 body=162 status=ok
// SIG undefined FUN_1430bdfe0(void)

longlong FUN_1430bdfe0(void)

{
  if (DAT_146b49c50 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"WeaponFireComponent",&DAT_146b49c50,FUN_1430bfa60,0x900,
                  0x10000000,0,L"Engine",&LAB_1430bef70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1414ea450,&LAB_140447700,0);
  }
  return DAT_146b49c50;
}



// FUNCTION 1430be0a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGunfireSaveSystemSettings::GetPrivateStaticClass(void)

{
  if (DAT_146b49e18 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"WeaponSettings",&DAT_146b49e18,FUN_140447710,0x88,
                  0x10000006,0,L"Engine",&LAB_1430bf040,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDeveloperSettings::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b49e18;
}



// FUNCTION 1430be150 FUN_1430be150 body=53 status=ok
// SIG undefined FUN_1430be150(void)

void FUN_1430be150(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_145a90970;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430be190 FUN_1430be190 body=53 status=ok
// SIG undefined FUN_1430be190(void)

void FUN_1430be190(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_145a90a88;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430be1d0 FUN_1430be1d0 body=53 status=ok
// SIG undefined FUN_1430be1d0(void)

void FUN_1430be1d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_145a90ba0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430be210 FUN_1430be210 body=53 status=ok
// SIG undefined FUN_1430be210(void)

void FUN_1430be210(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_145a90cb8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430be250 FUN_1430be250 body=47 status=ok
// SIG undefined FUN_1430be250(void)

longlong FUN_1430be250(void)

{
  if (DAT_146b49c68 == 0) {
    FUN_141786440(&DAT_146b49c68,&PTR_thunk_FUN_1430bf300_145a8cdd0);
  }
  return DAT_146b49c68;
}



// FUNCTION 1430be280 FUN_1430be280 body=47 status=ok
// SIG undefined FUN_1430be280(void)

longlong FUN_1430be280(void)

{
  if (DAT_146b49c58 == 0) {
    FUN_141786a30(&DAT_146b49c58,&PTR_FUN_1467a9c40);
  }
  return DAT_146b49c58;
}



// FUNCTION 1430be2b0 FUN_1430be2b0 body=47 status=ok
// SIG undefined FUN_1430be2b0(void)

longlong FUN_1430be2b0(void)

{
  if (DAT_146b49c60 == 0) {
    FUN_141786a30(&DAT_146b49c60,&PTR_FUN_1467a9cd0);
  }
  return DAT_146b49c60;
}



// FUNCTION 1430be2e0 FUN_1430be2e0 body=53 status=ok
// SIG undefined FUN_1430be2e0(void)

void FUN_1430be2e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_145a90dd0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1430be340 FUN_1430be340 body=162 status=ok
// SIG undefined FUN_1430be340(void)

longlong FUN_1430be340(void)

{
  if (DAT_146b49e30 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"WeaponShotModifier",&DAT_146b49e30,FUN_140447710,0x188,
                  0x10000000,0,L"Engine",&LAB_1430bf060,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b49e30;
}



// FUNCTION 1430be400 FUN_1430be400 body=47 status=ok
// SIG undefined FUN_1430be400(void)

longlong FUN_1430be400(void)

{
  if (DAT_146b49cf0 == 0) {
    FUN_141786440(&DAT_146b49cf0,&PTR_LAB_145a8ddc0);
  }
  return DAT_146b49cf0;
}



// FUNCTION 1430be430 FUN_1430be430 body=47 status=ok
// SIG undefined FUN_1430be430(void)

longlong FUN_1430be430(void)

{
  if (DAT_146b49c98 == 0) {
    FUN_141786a30(&DAT_146b49c98,&PTR_FUN_1467aa120);
  }
  return DAT_146b49c98;
}



// FUNCTION 1430be460 FUN_1430be460 body=47 status=ok
// SIG undefined FUN_1430be460(void)

longlong FUN_1430be460(void)

{
  if (DAT_146b49ca0 == 0) {
    FUN_141786a30(&DAT_146b49ca0,&PTR_FUN_1467aa160);
  }
  return DAT_146b49ca0;
}



// FUNCTION 1430be490 FUN_1430be490 body=47 status=ok
// SIG undefined FUN_1430be490(void)

longlong FUN_1430be490(void)

{
  if (DAT_146b49ca8 == 0) {
    FUN_141786a30(&DAT_146b49ca8,&PTR_FUN_1467aa1a0);
  }
  return DAT_146b49ca8;
}



// FUNCTION 1430be4c0 FUN_1430be4c0 body=47 status=ok
// SIG undefined FUN_1430be4c0(void)

longlong FUN_1430be4c0(void)

{
  if (DAT_146b49cb0 == 0) {
    FUN_141786a30(&DAT_146b49cb0,&PTR_FUN_1467aa1e0);
  }
  return DAT_146b49cb0;
}



// FUNCTION 1430be4f0 FUN_1430be4f0 body=47 status=ok
// SIG undefined FUN_1430be4f0(void)

longlong FUN_1430be4f0(void)

{
  if (DAT_146b49cb8 == 0) {
    FUN_141786a30(&DAT_146b49cb8,&PTR_FUN_1467aa270);
  }
  return DAT_146b49cb8;
}



// FUNCTION 1430be520 FUN_1430be520 body=47 status=ok
// SIG undefined FUN_1430be520(void)

longlong FUN_1430be520(void)

{
  if (DAT_146b49cc0 == 0) {
    FUN_141786a30(&DAT_146b49cc0,&PTR_FUN_1467aa2b0);
  }
  return DAT_146b49cc0;
}



// FUNCTION 1430be550 FUN_1430be550 body=47 status=ok
// SIG undefined FUN_1430be550(void)

longlong FUN_1430be550(void)

{
  if (DAT_146b49cc8 == 0) {
    FUN_141786a30(&DAT_146b49cc8,&PTR_FUN_1467aa2f0);
  }
  return DAT_146b49cc8;
}



// FUNCTION 1430be580 FUN_1430be580 body=47 status=ok
// SIG undefined FUN_1430be580(void)

longlong FUN_1430be580(void)

{
  if (DAT_146b49cd0 == 0) {
    FUN_141786a30(&DAT_146b49cd0,&PTR_FUN_1467aa330);
  }
  return DAT_146b49cd0;
}



// FUNCTION 1430be5b0 FUN_1430be5b0 body=47 status=ok
// SIG undefined FUN_1430be5b0(void)

longlong FUN_1430be5b0(void)

{
  if (DAT_146b49cd8 == 0) {
    FUN_141786a30(&DAT_146b49cd8,&PTR_FUN_1467aa370);
  }
  return DAT_146b49cd8;
}



// FUNCTION 1430be5e0 FUN_1430be5e0 body=47 status=ok
// SIG undefined FUN_1430be5e0(void)

longlong FUN_1430be5e0(void)

{
  if (DAT_146b49ce0 == 0) {
    FUN_141786a30(&DAT_146b49ce0,&PTR_FUN_1467aa3b0);
  }
  return DAT_146b49ce0;
}



// FUNCTION 1430be610 FUN_1430be610 body=47 status=ok
// SIG undefined FUN_1430be610(void)

longlong FUN_1430be610(void)

{
  if (DAT_146b49ce8 == 0) {
    FUN_141786a30(&DAT_146b49ce8,&PTR_FUN_1467aa440);
  }
  return DAT_146b49ce8;
}



// FUNCTION 1430be640 FUN_1430be640 body=162 status=ok
// SIG undefined FUN_1430be640(void)

longlong FUN_1430be640(void)

{
  if (DAT_146b49ba8 == 0) {
    FUN_14171ccd0(L"/Script/GbxWeapon",L"WeaponFireBeamComponent",&DAT_146b49ba8,FUN_1430bfa30,0x938
                  ,0x10000000,0,L"Engine",&LAB_1430bef60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1430bdfe0,&LAB_140447700,0);
  }
  return DAT_146b49ba8;
}


