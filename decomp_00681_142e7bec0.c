// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142e7bec0 FUN_142e7bec0 body=142 status=ok
// SIG undefined FUN_142e7bec0(void)

void FUN_142e7bec0(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_142dcd7d0(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e7bf50 FUN_142e7bf50 body=145 status=ok
// SIG undefined FUN_142e7bf50(void)

void FUN_142e7bf50(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_142dcd820(param_1,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e7bff0 FUN_142e7bff0 body=259 status=ok
// SIG undefined FUN_142e7bff0(void)

void FUN_142e7bff0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_38;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar3 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142dce5a0(param_1,local_18,puVar2,puVar3);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142e7c100 FUN_142e7c100 body=358 status=ok
// SIG undefined FUN_142e7c100(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e7c100(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_408 [32];
  undefined8 local_3e8;
  byte local_3e0 [8];
  undefined8 local_3d8;
  undefined1 local_3d0 [24];
  undefined1 local_3b8 [912];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_408;
  FUN_142dc1ad0(local_3b8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3b8);
  }
  local_3e8 = 0;
  puVar6 = local_3b8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_3e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_3e8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  pbVar4 = (byte *)FUN_14077bb00(local_3d0,local_3e8);
  local_3d8 = *(undefined8 *)(pbVar4 + 8);
  bVar1 = *pbVar4;
  local_3e0[0] = bVar1;
  cVar3 = FUN_14077cd10(local_3e0);
  if ((((cVar3 == '\0') || (7 < bVar1)) ||
      (*(float *)(puVar6 + (ulonglong)bVar1 * 0x68 + 0x28) <= 0.0)) ||
     (3.4028235e+38 <= *(float *)(puVar6 + (ulonglong)bVar1 * 0x68 + 0x20))) {
    puVar5 = &DAT_146731720;
  }
  else {
    puVar5 = (undefined8 *)(puVar6 + (ulonglong)*pbVar4 * 0x68 + 0x38);
  }
  uVar2 = *(undefined4 *)(puVar5 + 1);
  *param_3 = *puVar5;
  *(undefined4 *)(param_3 + 1) = uVar2;
  return;
}



// FUNCTION 142e7c270 FUN_142e7c270 body=468 status=ok
// SIG undefined FUN_142e7c270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e7c270(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_478 [40];
  undefined8 local_450;
  byte local_448 [8];
  undefined8 local_440;
  undefined1 local_438 [16];
  undefined1 local_428 [112];
  undefined1 local_3b8 [912];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  FUN_142dc1ad0(local_3b8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3b8);
  }
  local_450 = 0;
  puVar6 = local_3b8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_450);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_450);
  }
  FUN_140772210(local_428);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_428);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_428);
  }
  puVar5 = local_428;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  pbVar3 = (byte *)FUN_14077bb00(local_438,local_450);
  local_440 = *(undefined8 *)(pbVar3 + 8);
  bVar1 = *pbVar3;
  local_448[0] = bVar1;
  cVar2 = FUN_14077cd10(local_448);
  if ((((cVar2 == '\0') || (7 < bVar1)) ||
      (lVar4 = (ulonglong)bVar1 * 0x68, *(float *)(puVar6 + lVar4 + 0x28) <= 0.0)) ||
     ((3.4028235e+38 <= *(float *)(puVar6 + lVar4 + 0x20) ||
      ((*(uint *)(puVar6 + lVar4 + 100) >> 1 & 1) == 0)))) {
    *param_3 = 0;
  }
  else {
    FUN_1407263c0(puVar5,puVar6 + (ulonglong)*pbVar3 * 0x68 + 0x20);
    *param_3 = 1;
  }
  return;
}



// FUNCTION 142e7c450 FUN_142e7c450 body=358 status=ok
// SIG undefined FUN_142e7c450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e7c450(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_408 [32];
  undefined8 local_3e8;
  byte local_3e0 [8];
  undefined8 local_3d8;
  undefined1 local_3d0 [24];
  undefined1 local_3b8 [912];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_408;
  FUN_142dc1ad0(local_3b8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3b8);
  }
  local_3e8 = 0;
  puVar6 = local_3b8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_3e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_3e8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  pbVar4 = (byte *)FUN_14077bb00(local_3d0,local_3e8);
  local_3d8 = *(undefined8 *)(pbVar4 + 8);
  bVar1 = *pbVar4;
  local_3e0[0] = bVar1;
  cVar3 = FUN_14077cd10(local_3e0);
  if ((((cVar3 == '\0') || (7 < bVar1)) ||
      (*(float *)(puVar6 + (ulonglong)bVar1 * 0x68 + 0x28) <= 0.0)) ||
     (3.4028235e+38 <= *(float *)(puVar6 + (ulonglong)bVar1 * 0x68 + 0x20))) {
    puVar5 = &DAT_146731720;
  }
  else {
    puVar5 = (undefined8 *)(puVar6 + (ulonglong)*pbVar4 * 0x68 + 0x2c);
  }
  uVar2 = *(undefined4 *)(puVar5 + 1);
  *param_3 = *puVar5;
  *(undefined4 *)(param_3 + 1) = uVar2;
  return;
}



// FUNCTION 142e7c5c0 FUN_142e7c5c0 body=142 status=ok
// SIG undefined FUN_142e7c5c0(void)

void FUN_142e7c5c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_142dcffb0(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e7c650 FUN_142e7c650 body=254 status=ok
// SIG undefined FUN_142e7c650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e7c650(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_3e8 [32];
  undefined4 local_3c8 [4];
  undefined1 local_3b8 [912];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  local_3c8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3c8);
  }
  FUN_142dc1ad0(local_3b8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3b8);
  }
  puVar2 = local_3b8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142dd0110(param_1,local_3c8[0],puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e7c770 FUN_142e7c770 body=256 status=ok
// SIG undefined FUN_142e7c770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e7c770(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_3e8 [32];
  undefined8 local_3c8 [2];
  undefined1 local_3b8 [912];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  local_3c8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3c8);
  }
  FUN_142dc1ad0(local_3b8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3b8);
  }
  puVar2 = local_3b8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142dd0170(param_1,local_3c8[0],puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e7c870 FUN_142e7c870 body=60 status=ok
// SIG undefined FUN_142e7c870(void)

void FUN_142e7c870(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142dd0240(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142e7c8b0 FUN_142e7c8b0 body=216 status=ok
// SIG undefined FUN_142e7c8b0(void)

void FUN_142e7c8b0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 local_res10;
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
  puVar2 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142dd0420(param_1,local_res10,puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e7c990 FUN_142e7c990 body=543 status=ok
// SIG undefined FUN_142e7c990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e7c990(longlong param_1,longlong param_2,ulonglong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 local_88;
  undefined8 local_78;
  undefined4 local_70;
  float local_60;
  ulonglong local_58;
  uint local_50;
  int local_4c;
  undefined1 local_48 [32];
  
  uVar5 = 0;
  local_58 = 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_50 = 0;
  local_4c = 0;
  uVar7 = uVar5;
  if (0 < *(int *)(param_1 + 800)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (&local_58);
    uVar5 = (ulonglong)local_50;
    lVar6 = *(longlong *)(param_1 + 0x318);
    if (*(longlong *)(param_1 + 0x318) == 0) {
      lVar6 = param_1 + 0x2b8;
    }
    lVar1 = lVar6 + (longlong)*(int *)(param_1 + 800) * 0x18;
    uVar7 = local_58;
    for (; uVar4 = (uint)uVar5, lVar6 != lVar1; lVar6 = lVar6 + 0x18) {
      cVar3 = FUN_142dcfb90(param_1,lVar6,&local_78);
      if (cVar3 != '\0') {
        local_50 = uVar4 + 1;
        if (local_4c < (int)local_50) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_58,uVar5);
          uVar7 = local_58;
        }
        uVar5 = (ulonglong)local_50;
        *(undefined8 *)(uVar7 + (longlong)(int)uVar4 * 0xc) = local_78;
        *(undefined4 *)(uVar7 + 8 + (longlong)(int)uVar4 * 0xc) = local_70;
      }
    }
    if (0 < (int)uVar4) goto LAB_142e7cb48;
  }
  uVar4 = (uint)uVar5;
  plVar2 = *(longlong **)(param_1 + 0x118);
  if (plVar2 != (longlong *)0x0) {
    if (plVar2[0x2d] == 0) {
      local_88 = _DAT_1468b5d90;
    }
    else {
      local_88 = *(undefined8 *)(plVar2[0x2d] + 0x220);
    }
    lVar6 = (**(code **)(*plVar2 + 0x560))(plVar2,local_48,0);
    local_50 = uVar4 + 1;
    local_60 = (*(float *)(lVar6 + 0x14) + *(float *)(lVar6 + 8)) * 0.5;
    if (local_4c < (int)local_50) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_58,uVar5);
      uVar7 = local_58;
    }
    *(undefined8 *)(uVar7 + (longlong)(int)uVar4 * 0xc) = local_88;
    *(float *)(uVar7 + 8 + (longlong)(int)uVar4 * 0xc) = local_60;
    uVar4 = local_50;
  }
LAB_142e7cb48:
  if (param_3 != &local_58) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = uVar7;
    *(uint *)(param_3 + 1) = uVar4;
    *(int *)((longlong)param_3 + 0xc) = local_4c;
    return;
  }
  if (uVar7 != 0) {
    FMemory::Free(uVar7);
  }
  return;
}



// FUNCTION 142e7cbb0 FUN_142e7cbb0 body=122 status=ok
// SIG undefined FUN_142e7cbb0(void)

void FUN_142e7cbb0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_142dd0600(param_1,local_18);
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



// FUNCTION 142e7cc50 FUN_142e7cc50 body=189 status=ok
// SIG undefined FUN_142e7cc50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e7cc50(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_3c8 [32];
  undefined1 local_3a8 [912];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  FUN_142dc1ad0(local_3a8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3a8);
  }
  puVar2 = local_3a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142dd1180(puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e7cd10 FUN_142e7cd10 body=323 status=ok
// SIG undefined FUN_142e7cd10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e7cd10(undefined8 param_1,longlong param_2,byte *param_3)

{
  char cVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_3f8 [32];
  undefined8 local_3d8;
  undefined1 local_3d0 [24];
  undefined1 local_3b8 [912];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  FUN_142dc1ad0(local_3b8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3b8);
  }
  local_3d8 = 0;
  puVar4 = local_3b8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_3d8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  pbVar2 = (byte *)FUN_14077bb00(local_3d0,local_3d8);
  cVar1 = FUN_14077cd10(pbVar2);
  if ((((cVar1 == '\0') || (7 < *pbVar2)) ||
      (lVar3 = (ulonglong)*pbVar2 * 0x68, *(float *)(puVar4 + lVar3 + 0x28) <= 0.0)) ||
     (3.4028235e+38 <= *(float *)(puVar4 + lVar3 + 0x20))) {
    *param_3 = 0;
  }
  else {
    *param_3 = (byte)(*(uint *)(puVar4 + lVar3 + 100) >> 1) & 1;
  }
  return;
}



// FUNCTION 142e7ce60 FUN_142e7ce60 body=143 status=ok
// SIG undefined FUN_142e7ce60(void)

void FUN_142e7ce60(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_142dd1310(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e7cf20 execRemoveAt body=141 status=ok
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
  uVar1 = FUN_142dd3220(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e7cfb0 FUN_142e7cfb0 body=189 status=ok
// SIG undefined FUN_142e7cfb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e7cfb0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_3c8 [32];
  undefined1 local_3a8 [912];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  FUN_142dc1ad0(local_3a8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3a8);
  }
  puVar2 = local_3a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = thunk_FUN_142dd3420(puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e7d070 FUN_142e7d070 body=194 status=ok
// SIG undefined FUN_142e7d070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e7d070(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_3c8 [32];
  undefined1 local_3a8 [912];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  FUN_142dc1ad0(local_3a8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3a8);
  }
  puVar1 = local_3a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *(bool *)param_3 = *(int *)(puVar1 + 900) != -1;
  return;
}



// FUNCTION 142e7d140 FUN_142e7d140 body=326 status=ok
// SIG undefined FUN_142e7d140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e7d140(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  char cVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_3f8 [32];
  undefined8 local_3d8;
  undefined1 local_3d0 [24];
  undefined1 local_3b8 [912];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  FUN_142dc1ad0(local_3b8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3b8);
  }
  local_3d8 = 0;
  puVar4 = local_3b8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_3d8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  pbVar2 = (byte *)FUN_14077bb00(local_3d0,local_3d8);
  cVar1 = FUN_14077cd10(pbVar2);
  if ((((cVar1 == '\0') || (7 < *pbVar2)) ||
      (lVar3 = (ulonglong)*pbVar2 * 0x68, (*(uint *)(puVar4 + lVar3 + 100) >> 1 & 1) == 0)) ||
     ((*(float *)(puVar4 + lVar3 + 0x28) <= 0.0 ||
      (3.4028235e+38 <= *(float *)(puVar4 + lVar3 + 0x20))))) {
    *param_3 = 0;
  }
  else {
    *param_3 = 1;
  }
  return;
}



// FUNCTION 142e7d290 FUN_142e7d290 body=73 status=ok
// SIG undefined FUN_142e7d290(void)

void FUN_142e7d290(longlong param_1,longlong param_2,undefined1 *param_3)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if (*(char *)(param_1 + 0x269) != '\0') {
    cVar1 = FUN_1407c3030(param_1 + 0x3a0);
    if (cVar1 == '\0') {
      *param_3 = 1;
      return;
    }
  }
  *param_3 = 0;
  return;
}



// FUNCTION 142e7d2e0 FUN_142e7d2e0 body=82 status=ok
// SIG undefined FUN_142e7d2e0(void)

void FUN_142e7d2e0(longlong param_1,longlong param_2,undefined1 *param_3)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if ((*(char *)(param_1 + 0x26b) != '\0') && (*(char *)(param_1 + 0x269) != '\0')) {
    cVar1 = FUN_1407c3030(param_1 + 0x3a0);
    if (cVar1 == '\0') {
      *param_3 = 1;
      return;
    }
  }
  *param_3 = 0;
  return;
}



// FUNCTION 142e7d340 FUN_142e7d340 body=143 status=ok
// SIG undefined FUN_142e7d340(void)

void FUN_142e7d340(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_142dd39e0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e7d3d0 FUN_142e7d3d0 body=143 status=ok
// SIG undefined FUN_142e7d3d0(void)

void FUN_142e7d3d0(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_142dd3a30(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e7d460 FUN_142e7d460 body=82 status=ok
// SIG undefined FUN_142e7d460(void)

void FUN_142e7d460(longlong param_1,longlong param_2,undefined1 *param_3)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if ((*(char *)(param_1 + 0x26a) != '\0') && (*(char *)(param_1 + 0x269) != '\0')) {
    cVar1 = FUN_1407c3030(param_1 + 0x3a0);
    if (cVar1 == '\0') {
      *param_3 = 1;
      return;
    }
  }
  *param_3 = 0;
  return;
}



// FUNCTION 142e7d4c0 FUN_142e7d4c0 body=82 status=ok
// SIG undefined FUN_142e7d4c0(void)

void FUN_142e7d4c0(longlong param_1,longlong param_2,undefined1 *param_3)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if ((*(char *)(param_1 + 0x26c) != '\0') && (*(char *)(param_1 + 0x269) != '\0')) {
    cVar1 = FUN_1407c3030(param_1 + 0x3a0);
    if (cVar1 == '\0') {
      *param_3 = 1;
      return;
    }
  }
  *param_3 = 0;
  return;
}



// FUNCTION 142e7d520 FUN_142e7d520 body=143 status=ok
// SIG undefined FUN_142e7d520(void)

void FUN_142e7d520(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_142dd3a70(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e7d5d0 FUN_142e7d5d0 body=218 status=ok
// SIG undefined FUN_142e7d5d0(void)

void FUN_142e7d5d0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 local_res10;
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
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
  puVar3 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_142dd6f80(local_38,local_res10,puVar3);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  return;
}



// FUNCTION 142e7d6b0 FUN_142e7d6b0 body=209 status=ok
// SIG undefined FUN_142e7d6b0(void)

void FUN_142e7d6b0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_18 = 0;
  uStack_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  puVar2 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142dd9890(local_res10,puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e7d790 FUN_142e7d790 body=210 status=ok
// SIG undefined FUN_142e7d790(void)

void FUN_142e7d790(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 local_res10;
  undefined1 local_28 [32];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FAudioDeviceHandle::FAudioDeviceHandle(local_28);
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
  uVar1 = FUN_142dd9a30(local_res10,puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e7d870 FUN_142e7d870 body=181 status=ok
// SIG undefined FUN_142e7d870(void)

void FUN_142e7d870(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x3f8))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetBestTarget_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x400))(param_1,local_res8);
  return;
}



// FUNCTION 142e7d930 FUN_142e7d930 body=128 status=ok
// SIG undefined FUN_142e7d930(void)

void FUN_142e7d930(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x269) = local_res8[0] != 0;
  return;
}



// FUNCTION 142e7d9b0 FUN_142e7d9b0 body=128 status=ok
// SIG undefined FUN_142e7d9b0(void)

void FUN_142e7d9b0(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x26b) = local_res8[0] != 0;
  return;
}



// FUNCTION 142e7da30 FUN_142e7da30 body=128 status=ok
// SIG undefined FUN_142e7da30(void)

void FUN_142e7da30(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x26a) = local_res8[0] != 0;
  return;
}



// FUNCTION 142e7dab0 FUN_142e7dab0 body=128 status=ok
// SIG undefined FUN_142e7dab0(void)

void FUN_142e7dab0(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x26c) = local_res8[0] != 0;
  return;
}



// FUNCTION 142e7db30 FUN_142e7db30 body=204 status=ok
// SIG undefined FUN_142e7db30(void)

void FUN_142e7db30(undefined8 param_1,longlong param_2)

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
  FUN_142ddc620(param_1,puVar5);
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



// FUNCTION 142e7dc00 FUN_142e7dc00 body=128 status=ok
// SIG undefined FUN_142e7dc00(void)

void FUN_142e7dc00(undefined8 param_1,longlong param_2)

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
  FUN_142ddc6a0(param_1,local_res10);
  return;
}



// FUNCTION 142e7dc90 FUN_142e7dc90 body=162 status=ok
// SIG undefined FUN_142e7dc90(void)

longlong FUN_142e7dc90(void)

{
  if (DAT_146b3cd10 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"UIStatData_Numeric_Formula",&DAT_146b3cd10,
                  FUN_140447710,0x228,0x10000000,0,L"Engine",&LAB_142e7f2a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UListViewBase::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b3cd10;
}



// FUNCTION 142e7dd60 FUN_142e7dd60 body=162 status=ok
// SIG undefined FUN_142e7dd60(void)

longlong FUN_142e7dd60(void)

{
  if (DAT_146b3cd20 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"UIStatData_Text",&DAT_146b3cd20,FUN_140447710,0x98,
                  0x10000000,0,L"Engine",FUN_142e7f2c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UCompositingElementInput::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b3cd20;
}



// FUNCTION 142e7de20 FUN_142e7de20 body=53 status=ok
// SIG undefined FUN_142e7de20(void)

void FUN_142e7de20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_145976450;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e7de60 FUN_142e7de60 body=53 status=ok
// SIG undefined FUN_142e7de60(void)

void FUN_142e7de60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_145976568;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e7dea0 FUN_142e7dea0 body=53 status=ok
// SIG undefined FUN_142e7dea0(void)

void FUN_142e7dea0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_145976680;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e7dee0 FUN_142e7dee0 body=162 status=ok
// SIG undefined FUN_142e7dee0(void)

longlong FUN_142e7dee0(void)

{
  if (DAT_146b3cb50 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"TargetingDebugServerRpcComponent",&DAT_146b3cb50,
                  FUN_142e81840,0x178,0x10000000,0,L"Engine",&LAB_142e7f1a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b3cb50;
}



// FUNCTION 142e7df90 FUN_142e7df90 body=53 status=ok
// SIG undefined FUN_142e7df90(void)

void FUN_142e7df90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x590;
    *puVar1 = &PTR_FUN_145976798;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e7dfd0 FUN_142e7dfd0 body=162 status=ok
// SIG undefined FUN_142e7dfd0(void)

longlong FUN_142e7dfd0(void)

{
  if (DAT_146b3cc48 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"TerritoryComponent",&DAT_146b3cc48,FUN_140447710,
                  0x780,0x10000006,0,L"Editor",&LAB_142e7f1d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_146b3cc48;
}



// FUNCTION 142e7e080 FUN_142e7e080 body=53 status=ok
// SIG undefined FUN_142e7e080(void)

void FUN_142e7e080(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1459768b0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e7e0d0 FUN_142e7e0d0 body=53 status=ok
// SIG undefined FUN_142e7e0d0(void)

void FUN_142e7e0d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1459757d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e7e110 FUN_142e7e110 body=162 status=ok
// SIG undefined FUN_142e7e110(void)

longlong FUN_142e7e110(void)

{
  if (DAT_146b3cda8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"UsabilityDataSelection",&DAT_146b3cda8,
                  FUN_140447710,0xb8,0x10000000,0,L"Engine",FUN_142e7f340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b3cda8;
}



// FUNCTION 142e7e1e0 FUN_142e7e1e0 body=53 status=ok
// SIG undefined FUN_142e7e1e0(void)

void FUN_142e7e1e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_145975980;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e7e220 FUN_142e7e220 body=47 status=ok
// SIG undefined FUN_142e7e220(void)

longlong FUN_142e7e220(void)

{
  if (DAT_146b3cca0 == 0) {
    FUN_141786440(&DAT_146b3cca0,&PTR_GetPrivateStaticClass_1459729c0);
  }
  return DAT_146b3cca0;
}



// FUNCTION 142e7e250 FUN_142e7e250 body=47 status=ok
// SIG undefined FUN_142e7e250(void)

longlong FUN_142e7e250(void)

{
  if (DAT_146b3cc78 == 0) {
    FUN_141786a30(&DAT_146b3cc78,&PTR_FUN_146735280);
  }
  return DAT_146b3cc78;
}



// FUNCTION 142e7e280 FUN_142e7e280 body=47 status=ok
// SIG undefined FUN_142e7e280(void)

longlong FUN_142e7e280(void)

{
  if (DAT_146b3cc80 == 0) {
    FUN_141786a30(&DAT_146b3cc80,&PTR_FUN_146735330);
  }
  return DAT_146b3cc80;
}



// FUNCTION 142e7e2b0 FUN_142e7e2b0 body=47 status=ok
// SIG undefined FUN_142e7e2b0(void)

longlong FUN_142e7e2b0(void)

{
  if (DAT_146b3cc88 == 0) {
    FUN_141786a30(&DAT_146b3cc88,&PTR_FUN_146735430);
  }
  return DAT_146b3cc88;
}



// FUNCTION 142e7e2e0 FUN_142e7e2e0 body=47 status=ok
// SIG undefined FUN_142e7e2e0(void)

longlong FUN_142e7e2e0(void)

{
  if (DAT_146b3cc90 == 0) {
    FUN_141786a30(&DAT_146b3cc90,&PTR_FUN_146735530);
  }
  return DAT_146b3cc90;
}



// FUNCTION 142e7e310 FUN_142e7e310 body=47 status=ok
// SIG undefined FUN_142e7e310(void)

longlong FUN_142e7e310(void)

{
  if (DAT_146b3cc98 == 0) {
    FUN_141786a30(&DAT_146b3cc98,&PTR_FUN_146735600);
  }
  return DAT_146b3cc98;
}



// FUNCTION 142e7e340 FUN_142e7e340 body=47 status=ok
// SIG undefined FUN_142e7e340(void)

longlong FUN_142e7e340(void)

{
  if (DAT_146b3cb48 == 0) {
    FUN_141786440(&DAT_146b3cb48,&PTR_FUN_145971dd0);
  }
  return DAT_146b3cb48;
}



// FUNCTION 142e7e370 FUN_142e7e370 body=47 status=ok
// SIG undefined FUN_142e7e370(void)

longlong FUN_142e7e370(void)

{
  if (DAT_146b3cb40 == 0) {
    FUN_141786a30(&DAT_146b3cb40,&PTR_FUN_146733af0);
  }
  return DAT_146b3cb40;
}



// FUNCTION 142e7e3a0 FUN_142e7e3a0 body=162 status=ok
// SIG undefined FUN_142e7e3a0(void)

longlong FUN_142e7e3a0(void)

{
  if (DAT_146b3cc70 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"TrivialFoleyImplementationComponent",&DAT_146b3cc70
                  ,FUN_140447710,0x1b0,0x10000000,0,L"Engine",FUN_142e7f1e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b3cc70;
}



// FUNCTION 142e7e450 FUN_142e7e450 body=53 status=ok
// SIG undefined FUN_142e7e450(void)

void FUN_142e7e450(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_1459752a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142e7e490 FUN_142e7e490 body=53 status=ok
// SIG undefined FUN_142e7e490(void)

void FUN_142e7e490(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_1459753c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e7e4f0 FUN_142e7e4f0 body=47 status=ok
// SIG undefined FUN_142e7e4f0(void)

longlong FUN_142e7e4f0(void)

{
  if (DAT_146b3cb78 == 0) {
    FUN_141786440(&DAT_146b3cb78,&PTR_GetPrivateStaticClass_145972920);
  }
  return DAT_146b3cb78;
}



// FUNCTION 142e7e520 FUN_142e7e520 body=47 status=ok
// SIG undefined FUN_142e7e520(void)

longlong FUN_142e7e520(void)

{
  if (DAT_146b3cb70 == 0) {
    FUN_141786a30(&DAT_146b3cb70,&PTR_FUN_146733cb0);
  }
  return DAT_146b3cb70;
}



// FUNCTION 142e7e550 FUN_142e7e550 body=47 status=ok
// SIG undefined FUN_142e7e550(void)

longlong FUN_142e7e550(void)

{
  if (DAT_146b3ce68 == 0) {
    FUN_141786440(&DAT_146b3ce68,&PTR_thunk_FUN_142e80f20_145973f40);
  }
  return DAT_146b3ce68;
}



// FUNCTION 142e7e580 FUN_142e7e580 body=47 status=ok
// SIG undefined FUN_142e7e580(void)

longlong FUN_142e7e580(void)

{
  if (DAT_146b3ce30 == 0) {
    FUN_141786a30(&DAT_146b3ce30,&PTR_FUN_146737720);
  }
  return DAT_146b3ce30;
}



// FUNCTION 142e7e5b0 FUN_142e7e5b0 body=47 status=ok
// SIG undefined FUN_142e7e5b0(void)

longlong FUN_142e7e5b0(void)

{
  if (DAT_146b3ce38 == 0) {
    FUN_141786a30(&DAT_146b3ce38,&PTR_FUN_1467377d0);
  }
  return DAT_146b3ce38;
}



// FUNCTION 142e7e5e0 FUN_142e7e5e0 body=47 status=ok
// SIG undefined FUN_142e7e5e0(void)

longlong FUN_142e7e5e0(void)

{
  if (DAT_146b3ce40 == 0) {
    FUN_141786a30(&DAT_146b3ce40,&PTR_FUN_1467378a0);
  }
  return DAT_146b3ce40;
}



// FUNCTION 142e7e610 FUN_142e7e610 body=47 status=ok
// SIG undefined FUN_142e7e610(void)

longlong FUN_142e7e610(void)

{
  if (DAT_146b3ce48 == 0) {
    FUN_141786a30(&DAT_146b3ce48,&PTR_FUN_146737920);
  }
  return DAT_146b3ce48;
}



// FUNCTION 142e7e640 FUN_142e7e640 body=47 status=ok
// SIG undefined FUN_142e7e640(void)

longlong FUN_142e7e640(void)

{
  if (DAT_146b3ce50 == 0) {
    FUN_141786a30(&DAT_146b3ce50,&PTR_FUN_146737960);
  }
  return DAT_146b3ce50;
}



// FUNCTION 142e7e670 FUN_142e7e670 body=47 status=ok
// SIG undefined FUN_142e7e670(void)

longlong FUN_142e7e670(void)

{
  if (DAT_146b3ce58 == 0) {
    FUN_141786a30(&DAT_146b3ce58,&PTR_FUN_1467379e0);
  }
  return DAT_146b3ce58;
}



// FUNCTION 142e7e6a0 FUN_142e7e6a0 body=47 status=ok
// SIG undefined FUN_142e7e6a0(void)

longlong FUN_142e7e6a0(void)

{
  if (DAT_146b3ce60 == 0) {
    FUN_141786a30(&DAT_146b3ce60,&PTR_FUN_146737ab0);
  }
  return DAT_146b3ce60;
}



// FUNCTION 142e7e6d0 FUN_142e7e6d0 body=53 status=ok
// SIG undefined FUN_142e7e6d0(void)

void FUN_142e7e6d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_145975530;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e7e710 FUN_142e7e710 body=53 status=ok
// SIG undefined FUN_142e7e710(void)

void FUN_142e7e710(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_145976ca8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e7e770 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCurveFloat::GetPrivateStaticClass(void)

{
  if (DAT_146b3cb80 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"Team",&DAT_146b3cb80,
                  StaticRegisterNativesUCurveFloat,0xb0,0x10000000,0,L"Engine",&LAB_142e7f1b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b3cb80;
}



// FUNCTION 142e7e820 FUN_142e7e820 body=47 status=ok
// SIG undefined FUN_142e7e820(void)

longlong FUN_142e7e820(void)

{
  if (DAT_146b3cbf8 == 0) {
    FUN_141786440(&DAT_146b3cbf8,&PTR_GetPrivateStaticClass_145973700);
  }
  return DAT_146b3cbf8;
}



// FUNCTION 142e7e850 FUN_142e7e850 body=47 status=ok
// SIG undefined FUN_142e7e850(void)

longlong FUN_142e7e850(void)

{
  if (DAT_146b3cb88 == 0) {
    FUN_141786a30(&DAT_146b3cb88,&PTR_FUN_1467340a0);
  }
  return DAT_146b3cb88;
}



// FUNCTION 142e7e880 FUN_142e7e880 body=47 status=ok
// SIG undefined FUN_142e7e880(void)

longlong FUN_142e7e880(void)

{
  if (DAT_146b3cb90 == 0) {
    FUN_141786a30(&DAT_146b3cb90,&PTR_FUN_146734160);
  }
  return DAT_146b3cb90;
}



// FUNCTION 142e7e8b0 FUN_142e7e8b0 body=47 status=ok
// SIG undefined FUN_142e7e8b0(void)

longlong FUN_142e7e8b0(void)

{
  if (DAT_146b3cb98 == 0) {
    FUN_141786a30(&DAT_146b3cb98,&PTR_FUN_146734220);
  }
  return DAT_146b3cb98;
}



// FUNCTION 142e7e8e0 FUN_142e7e8e0 body=47 status=ok
// SIG undefined FUN_142e7e8e0(void)

longlong FUN_142e7e8e0(void)

{
  if (DAT_146b3cba0 == 0) {
    FUN_141786a30(&DAT_146b3cba0,&PTR_FUN_1467342a0);
  }
  return DAT_146b3cba0;
}



// FUNCTION 142e7e910 FUN_142e7e910 body=47 status=ok
// SIG undefined FUN_142e7e910(void)

longlong FUN_142e7e910(void)

{
  if (DAT_146b3cba8 == 0) {
    FUN_141786a30(&DAT_146b3cba8,&PTR_FUN_146734370);
  }
  return DAT_146b3cba8;
}



// FUNCTION 142e7e940 FUN_142e7e940 body=47 status=ok
// SIG undefined FUN_142e7e940(void)

longlong FUN_142e7e940(void)

{
  if (DAT_146b3cbb0 == 0) {
    FUN_141786a30(&DAT_146b3cbb0,&PTR_FUN_146734440);
  }
  return DAT_146b3cbb0;
}



// FUNCTION 142e7e970 FUN_142e7e970 body=47 status=ok
// SIG undefined FUN_142e7e970(void)

longlong FUN_142e7e970(void)

{
  if (DAT_146b3cbb8 == 0) {
    FUN_141786a30(&DAT_146b3cbb8,&PTR_FUN_146734510);
  }
  return DAT_146b3cbb8;
}



// FUNCTION 142e7e9a0 FUN_142e7e9a0 body=47 status=ok
// SIG undefined FUN_142e7e9a0(void)

longlong FUN_142e7e9a0(void)

{
  if (DAT_146b3cbc0 == 0) {
    FUN_141786a30(&DAT_146b3cbc0,&PTR_FUN_146734550);
  }
  return DAT_146b3cbc0;
}



// FUNCTION 142e7e9d0 FUN_142e7e9d0 body=47 status=ok
// SIG undefined FUN_142e7e9d0(void)

longlong FUN_142e7e9d0(void)

{
  if (DAT_146b3cbc8 == 0) {
    FUN_141786a30(&DAT_146b3cbc8,&PTR_FUN_1467345d0);
  }
  return DAT_146b3cbc8;
}



// FUNCTION 142e7ea00 FUN_142e7ea00 body=47 status=ok
// SIG undefined FUN_142e7ea00(void)

longlong FUN_142e7ea00(void)

{
  if (DAT_146b3cbd0 == 0) {
    FUN_141786a30(&DAT_146b3cbd0,&PTR_FUN_146734660);
  }
  return DAT_146b3cbd0;
}



// FUNCTION 142e7ea30 FUN_142e7ea30 body=47 status=ok
// SIG undefined FUN_142e7ea30(void)

longlong FUN_142e7ea30(void)

{
  if (DAT_146b3cbd8 == 0) {
    FUN_141786a30(&DAT_146b3cbd8,&PTR_FUN_1467346e0);
  }
  return DAT_146b3cbd8;
}



// FUNCTION 142e7ea60 FUN_142e7ea60 body=47 status=ok
// SIG undefined FUN_142e7ea60(void)

longlong FUN_142e7ea60(void)

{
  if (DAT_146b3cbe0 == 0) {
    FUN_141786a30(&DAT_146b3cbe0,&PTR_FUN_146734760);
  }
  return DAT_146b3cbe0;
}



// FUNCTION 142e7ea90 FUN_142e7ea90 body=47 status=ok
// SIG undefined FUN_142e7ea90(void)

longlong FUN_142e7ea90(void)

{
  if (DAT_146b3cbe8 == 0) {
    FUN_141786a30(&DAT_146b3cbe8,&PTR_FUN_1467347f0);
  }
  return DAT_146b3cbe8;
}



// FUNCTION 142e7eac0 FUN_142e7eac0 body=47 status=ok
// SIG undefined FUN_142e7eac0(void)

longlong FUN_142e7eac0(void)

{
  if (DAT_146b3cbf0 == 0) {
    FUN_141786a30(&DAT_146b3cbf0,&PTR_FUN_146734830);
  }
  return DAT_146b3cbf0;
}



// FUNCTION 142e7eaf0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDamageableInterface::GetPrivateStaticClass(void)

{
  if (DAT_146b3cd98 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"UIStatAttributeEffectProvider",&DAT_146b3cd98,
                  FUN_140447710,0x28,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b3cd98;
}



// FUNCTION 142e7eba0 FUN_142e7eba0 body=53 status=ok
// SIG undefined FUN_142e7eba0(void)

void FUN_142e7eba0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_145976dc0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142e7ebe0 FUN_142e7ebe0 body=53 status=ok
// SIG undefined FUN_142e7ebe0(void)

void FUN_142e7ebe0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &PTR_FUN_145976ed8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142e7ec30 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDamageableInterface::GetPrivateStaticClass(void)

{
  if (DAT_146b3cc10 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"TeleportInterface",&DAT_146b3cc10,FUN_140447710,
                  0x28,0x10004001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b3cc10;
}



// FUNCTION 142e7ed00 FUN_142e7ed00 body=47 status=ok
// SIG undefined FUN_142e7ed00(void)

longlong FUN_142e7ed00(void)

{
  if (DAT_146b3cce8 == 0) {
    FUN_141786440(&DAT_146b3cce8,&PTR_GetPrivateStaticClass_145974bf0);
  }
  return DAT_146b3cce8;
}



// FUNCTION 142e7ed40 FUN_142e7ed40 body=53 status=ok
// SIG undefined FUN_142e7ed40(void)

void FUN_142e7ed40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe8;
    *puVar1 = &PTR_FUN_145976040;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142e7ed80 FUN_142e7ed80 body=170 status=ok
// SIG undefined FUN_142e7ed80(void)

void FUN_142e7ed80(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  if (param_3 != 0) {
    param_2 = param_2 + 0x20;
    puVar2 = (undefined8 *)*param_1;
    do {
      *puVar2 = *(undefined8 *)(param_2 + -0x20);
      FText::FText(puVar2 + 1,param_2 + -0x18);
      FText::FText(puVar2 + 4,param_2);
      *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_2 + 0x18);
      puVar1 = (undefined1 *)(param_2 + 0x1c);
      param_2 = param_2 + 0x40;
      *(undefined1 *)((longlong)puVar2 + 0x3c) = *puVar1;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 8;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 142e7ee30 FUN_142e7ee30 body=877 status=ok
// SIG undefined FUN_142e7ee30(void)

int * FUN_142e7ee30(longlong *param_1,int *param_2,undefined4 *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong *_Src;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  bool local_res8;
  
  iVar18 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar16 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x18);
    *(int *)(param_1 + 6) = iVar16;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar16 * 0x18) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar12;
  local_res8 = false;
  lVar9 = (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar17 = (uint *)((longlong)plVar10 + lVar9);
  *puVar17 = *puVar17 | 1 << ((byte)iVar12 & 0x1f);
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  lVar1 = (longlong)iVar12 * 0x18;
  _Src = (ulonglong *)(*param_1 + lVar1);
  *(undefined4 *)_Src = *param_3;
  *(undefined4 *)((longlong)_Src + 4) = uVar4;
  *(undefined4 *)(_Src + 1) = uVar5;
  *(undefined4 *)((longlong)_Src + 0xc) = uVar6;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  iVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar16 != 1) {
    iVar8 = iVar18;
    if (iVar16 != 0) {
      iVar14 = (int)(*_Src >> 4);
      uVar13 = 0x9e3779b9U - iVar14 ^ iVar14 << 8;
      uVar11 = -(uVar13 + iVar14) ^ uVar13 >> 0xd;
      uVar15 = (iVar14 - uVar13) - uVar11 ^ uVar11 >> 0xc;
      uVar13 = (uVar13 - uVar15) - uVar11 ^ uVar15 << 0x10;
      uVar11 = (uVar11 - uVar13) - uVar15 ^ uVar13 >> 5;
      uVar15 = (uVar15 - uVar13) - uVar11 ^ uVar11 >> 3;
      uVar13 = (uVar13 - uVar15) - uVar11 ^ uVar15 << 10;
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar14 = *(int *)((longlong)plVar10 +
                       (((longlong)(int)((uVar11 - uVar13) - uVar15) ^ (ulonglong)(uVar13 >> 0xf)) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar14 != -1) {
        do {
          iVar8 = iVar14;
          if (*(ulonglong *)(*param_1 + (longlong)iVar14 * 0x18) == *_Src) break;
          iVar14 = *(int *)(*param_1 + 0x10 + (longlong)iVar14 * 0x18);
          iVar8 = iVar18;
        } while (iVar14 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar8 * 0x18),_Src,0x10);
      bVar3 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar12;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar18 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar18;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar10 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar17 = (uint *)((longlong)plVar10 + lVar9);
      *puVar17 = *puVar17 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_142e7f16e;
    }
  }
  cVar7 = TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar16,0);
  if (cVar7 == '\0') {
    iVar18 = (int)(*_Src >> 4);
    uVar13 = 0x9e3779b9U - iVar18 ^ iVar18 << 8;
    uVar15 = -(uVar13 + iVar18) ^ uVar13 >> 0xd;
    uVar11 = (iVar18 - uVar13) - uVar15 ^ uVar15 >> 0xc;
    uVar13 = (uVar13 - uVar11) - uVar15 ^ uVar11 << 0x10;
    uVar15 = (uVar15 - uVar13) - uVar11 ^ uVar13 >> 5;
    uVar11 = (uVar11 - uVar13) - uVar15 ^ uVar15 >> 3;
    uVar13 = (uVar13 - uVar11) - uVar15 ^ uVar11 << 10;
    uVar11 = ((uVar15 - uVar13) - uVar11 ^ uVar13 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar11;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_142e7f16e:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142e7f1e0 FUN_142e7f1e0 body=82 status=ok
// SIG undefined FUN_142e7f1e0(void)

void FUN_142e7f1e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142326e40(puVar1,param_1);
    *puVar1 = &PTR_FUN_145975a98;
    puVar1[5] = &PTR_LAB_145975e90;
    puVar1[0x2f] = &PTR_LAB_145975ec0;
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
  }
  return;
}



// FUNCTION 142e7f2c0 FUN_142e7f2c0 body=67 status=ok
// SIG undefined FUN_142e7f2c0(void)

void FUN_142e7f2c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142de35f0(puVar1,param_1);
    *puVar1 = &PTR_FUN_145976158;
    FText::FText(puVar1 + 0xd);
    FText::FText(puVar1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 142e7f310 FUN_142e7f310 body=41 status=ok
// SIG undefined FUN_142e7f310(void)

void FUN_142e7f310(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144716088;
  }
  return;
}



// FUNCTION 142e7f340 FUN_142e7f340 body=128 status=ok
// SIG undefined FUN_142e7f340(void)

void FUN_142e7f340(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459769c8;
    *(byte *)(puVar1 + 7) = *(byte *)(puVar1 + 7) | 3;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *(byte *)(puVar1 + 0xb) = *(byte *)(puVar1 + 0xb) | 3;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    *(byte *)(puVar1 + 0xf) = *(byte *)(puVar1 + 0xf) | 3;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    *(byte *)(puVar1 + 0x13) = *(byte *)(puVar1 + 0x13) | 3;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
  }
  return;
}



// FUNCTION 142e7f3e0 FUN_142e7f3e0 body=165 status=ok
// SIG undefined FUN_142e7f3e0(void)

longlong FUN_142e7f3e0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
  return param_1;
}



// FUNCTION 142e7f490 FUN_142e7f490 body=122 status=ok
// SIG undefined FUN_142e7f490(void)

void FUN_142e7f490(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x580) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x288);
  FUN_14099aac0(param_1 + 0x10);
  return;
}



// FUNCTION 142e7f510 operator= body=506 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FFlareResourceDescription_*,int>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,int,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_142e7f66b;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_142e7f66b:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        FUN_142e7ee30(param_1,local_res8,*param_2 + (longlong)iStack_4c * 0x18,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 142e7f710 FUN_142e7f710 body=899 status=ok
// SIG undefined FUN_142e7f710(void)

undefined8 * FUN_142e7f710(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *_Src;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  
  puVar4 = param_1 + 2;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  if (puVar4 != param_2 + 2) {
    iVar7 = *(int *)(param_1 + 0x4f);
    puVar5 = (undefined8 *)param_1[0x4e];
    if ((undefined8 *)param_1[0x4e] == (undefined8 *)0x0) {
      puVar5 = puVar4;
    }
    if (iVar7 != 0) {
      plVar6 = puVar5 + 0x11;
      do {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 0x13;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar7 = *(int *)(param_2 + 0x4f);
    puVar5 = (undefined8 *)param_2[0x4e];
    *(int *)(param_1 + 0x4f) = iVar7;
    if ((iVar7 == 0) && (*(int *)((longlong)param_1 + 0x27c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
    }
    else {
      FUN_142e816f0(puVar4,iVar7);
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = param_2 + 2;
      }
      puVar3 = (undefined8 *)param_1[0x4e];
      if ((undefined8 *)param_1[0x4e] == (undefined8 *)0x0) {
        puVar3 = puVar4;
      }
      if (iVar7 != 0) {
        lVar8 = (longlong)puVar5 - (longlong)puVar3;
        puVar3 = puVar3 + 0x11;
        do {
          puVar3[-0x11] = *puVar5;
          *puVar3 = 0;
          iVar1 = *(int *)((longlong)puVar3 + lVar8 + 8);
          _Src = *(void **)((longlong)puVar3 + lVar8);
          *(int *)(puVar3 + 1) = iVar1;
          if (iVar1 == 0) {
            *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
          }
          else {
            TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>
            ::ResizeForCopy(puVar3 + -0x10,iVar1,0);
            if (_Src == (void *)0x0) {
              _Src = (void *)(lVar8 + -0x80 + (longlong)puVar3);
            }
            puVar4 = (undefined8 *)*puVar3;
            if ((undefined8 *)*puVar3 == (undefined8 *)0x0) {
              puVar4 = puVar3 + -0x10;
            }
            _guard_xfg_dispatch_icall_nop(puVar4,_Src,(longlong)iVar1 << 4);
          }
          puVar5 = puVar5 + 0x13;
          puVar3 = puVar3 + 0x13;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  TSet<TTuple<FFlareResourceDescription_*,int>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,int,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0x51,param_2 + 0x51);
  puVar4 = param_1 + 0x5c;
  param_1[0x5b] = param_2[0x5b];
  if (puVar4 != param_2 + 0x5c) {
    iVar7 = *(int *)(param_2 + 0x7d);
    puVar5 = (undefined8 *)param_2[0x7c];
    *(int *)(param_1 + 0x7d) = iVar7;
    if ((iVar7 == 0) && (*(int *)((longlong)param_1 + 0x3ec) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x3ec) = 0;
    }
    else {
      FUN_142e81650(puVar4,iVar7);
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = param_2 + 0x5c;
      }
      puVar3 = (undefined8 *)param_1[0x7c];
      if ((undefined8 *)param_1[0x7c] == (undefined8 *)0x0) {
        puVar3 = puVar4;
      }
      if (iVar7 != 0) {
        lVar8 = (longlong)puVar3 - (longlong)puVar5;
        do {
          uVar2 = puVar5[1];
          *(undefined8 *)(lVar8 + (longlong)puVar5) = *puVar5;
          *(undefined8 *)((longlong)puVar5 + lVar8 + 8) = uVar2;
          puVar5 = puVar5 + 2;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
  }
  puVar4 = param_1 + 0x7e;
  if (puVar4 != param_2 + 0x7e) {
    iVar7 = *(int *)(param_2 + 0x9f);
    puVar5 = (undefined8 *)param_2[0x9e];
    *(int *)(param_1 + 0x9f) = iVar7;
    if ((iVar7 == 0) && (*(int *)((longlong)param_1 + 0x4fc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x4fc) = 0;
    }
    else {
      FUN_142e81650(puVar4,iVar7);
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = param_2 + 0x7e;
      }
      puVar3 = (undefined8 *)param_1[0x9e];
      if ((undefined8 *)param_1[0x9e] == (undefined8 *)0x0) {
        puVar3 = puVar4;
      }
      if (iVar7 != 0) {
        lVar8 = (longlong)puVar3 - (longlong)puVar5;
        do {
          uVar2 = puVar5[1];
          *(undefined8 *)(lVar8 + (longlong)puVar5) = *puVar5;
          *(undefined8 *)((longlong)puVar5 + lVar8 + 8) = uVar2;
          puVar5 = puVar5 + 2;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
  }
  puVar4 = param_1 + 0xa0;
  if (puVar4 != param_2 + 0xa0) {
    iVar7 = *(int *)(param_2 + 0xb1);
    puVar5 = (undefined8 *)param_2[0xb0];
    *(int *)(param_1 + 0xb1) = iVar7;
    if ((iVar7 == 0) && (*(int *)((longlong)param_1 + 0x58c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x58c) = 0;
      return param_1;
    }
    TArray<FGameplayTag,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::ResizeForCopy
              (puVar4,iVar7);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = param_2 + 0xa0;
    }
    puVar3 = (undefined8 *)param_1[0xb0];
    if ((undefined8 *)param_1[0xb0] == (undefined8 *)0x0) {
      puVar3 = puVar4;
    }
    _guard_xfg_dispatch_icall_nop(puVar3,puVar5,(longlong)iVar7 << 3);
  }
  return param_1;
}



// FUNCTION 142e7faa0 FUN_142e7faa0 body=137 status=ok
// SIG undefined FUN_142e7faa0(void)

undefined8 FUN_142e7faa0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  
  iVar3 = (int)param_1[1];
  if (iVar3 != *(int *)(param_2 + 1)) {
    return 0;
  }
  param_2 = (undefined8 *)*param_2;
  if (iVar3 != 0) {
    pfVar2 = (float *)(*param_1 + 0x10);
    do {
      if (*(char *)(pfVar2 + 1) != *(char *)((longlong)param_2 + 0x14)) {
        return 0;
      }
      if (*(float *)(param_2 + 2) != *pfVar2) {
        return 0;
      }
      if (pfVar2[-2] != *(float *)(param_2 + 1)) {
        return 0;
      }
      iVar1 = _guard_xfg_dispatch_icall_nop
                        (*(void **)(pfVar2 + -4),(void *)*param_2,(longlong)(int)pfVar2[-2] << 2);
      if (iVar1 != 0) {
        return 0;
      }
      param_2 = param_2 + 3;
      pfVar2 = pfVar2 + 6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 1;
}



// FUNCTION 142e7fb50 FUN_142e7fb50 body=87 status=ok
// SIG undefined FUN_142e7fb50(void)

longlong FUN_142e7fb50(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1441b49f8;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 142e7fbb0 FUN_142e7fbb0 body=187 status=ok
// SIG undefined FUN_142e7fbb0(void)

longlong FUN_142e7fbb0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x88);
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
  plVar4 = *(longlong **)(param_1 + 0x70);
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
  FUN_1412095f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 142e7fc70 FUN_142e7fc70 body=118 status=ok
// SIG undefined FUN_142e7fc70(void)

longlong FUN_142e7fc70(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 142e7fcf0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142e7ff00 Construct body=38 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FOnlineProxyStoreOffer>::Construct
               (undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0xe8);
  FUN_142e7f3e0(param_2);
  return;
}



// FUNCTION 142e7ff50 FUN_142e7ff50 body=399 status=ok
// SIG undefined FUN_142e7ff50(void)

undefined8 FUN_142e7ff50(undefined8 param_1,longlong *param_2,longlong *param_3,uint param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint local_res20;
  
  uVar3 = (ulonglong)param_4;
  local_res20 = param_4;
  if (param_4 != 0) {
    do {
      uVar2 = (uint)uVar3;
      if (param_2 != param_3) {
        for (iVar6 = (int)param_2[1]; iVar6 != 0; iVar6 = iVar6 + -1) {
          FUN_140dddf90();
          uVar2 = local_res20;
        }
        iVar6 = (int)param_3[1];
        lVar7 = *param_3;
        *(int *)(param_2 + 1) = iVar6;
        if ((iVar6 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_2,iVar6);
          plVar8 = (longlong *)*param_2;
          uVar2 = local_res20;
          if (iVar6 != 0) {
            plVar9 = (longlong *)(lVar7 + 8);
            do {
              *plVar8 = plVar9[-1];
              plVar8[1] = 0;
              iVar5 = (int)plVar9[1];
              lVar7 = *plVar9;
              *(int *)(plVar8 + 2) = iVar5;
              if (iVar5 == 0) {
                *(undefined4 *)((longlong)plVar8 + 0x14) = 0;
              }
              else {
                TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(plVar8 + 1,iVar5,0);
                lVar7 = lVar7 + 0x20;
                puVar4 = (undefined8 *)plVar8[1];
                do {
                  *puVar4 = *(undefined8 *)(lVar7 + -0x20);
                  FText::FText(puVar4 + 1,lVar7 + -0x18);
                  FText::FText(puVar4 + 4,lVar7);
                  *(undefined4 *)(puVar4 + 7) = *(undefined4 *)(lVar7 + 0x18);
                  puVar1 = (undefined1 *)(lVar7 + 0x1c);
                  lVar7 = lVar7 + 0x40;
                  *(undefined1 *)((longlong)puVar4 + 0x3c) = *puVar1;
                  iVar5 = iVar5 + -1;
                  puVar4 = puVar4 + 8;
                } while (iVar5 != 0);
              }
              plVar8 = plVar8 + 3;
              plVar9 = plVar9 + 3;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
      }
      param_3 = param_3 + 2;
      local_res20 = uVar2 - 1;
      uVar3 = (ulonglong)local_res20;
      param_2 = param_2 + 2;
    } while (local_res20 != 0);
    uVar3 = 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 142e800e0 Copy body=127 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FGamepadBindings>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20 + param_2);
      FText::operator=(param_2 + -0x18,param_3 + -0x18 + param_2);
      FText::operator=(param_2,param_3 + param_2);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18 + param_2);
      *(undefined1 *)(param_2 + 0x1c) = *(undefined1 *)(param_3 + 0x1c + param_2);
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e80160 FUN_142e80160 body=324 status=ok
// SIG undefined FUN_142e80160(void)

undefined8 FUN_142e80160(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if (param_4 != 0) {
    plVar9 = (longlong *)(param_3 + 8);
    do {
      plVar1 = param_2 + 1;
      *param_2 = plVar9[-1];
      if (plVar1 != plVar9) {
        iVar7 = (int)param_2[2];
        if (iVar7 != 0) {
          plVar8 = (longlong *)(*plVar1 + 0x10);
          do {
            plVar5 = (longlong *)plVar8[3];
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar5 + 1;
              lVar6 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar3 = (int *)((longlong)plVar5 + 0xc);
                iVar4 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            plVar5 = (longlong *)*plVar8;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar5 + 1;
              lVar6 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar3 = (int *)((longlong)plVar5 + 0xc);
                iVar4 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            plVar8 = plVar8 + 8;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        FUN_142e7ed80(plVar1,*plVar9,(int)plVar9[1],*(undefined4 *)((longlong)param_2 + 0x14),0);
      }
      plVar9 = plVar9 + 3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 3;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e802b0 FUN_142e802b0 body=320 status=ok
// SIG undefined FUN_142e802b0(void)

undefined8 FUN_142e802b0(undefined8 param_1,longlong *param_2,longlong *param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      plVar4 = (longlong *)*param_2;
      for (iVar6 = (int)param_2[1]; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 3;
      }
      iVar6 = (int)param_3[1];
      lVar3 = *param_3;
      *(int *)(param_2 + 1) = iVar6;
      if ((iVar6 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_2,iVar6);
        puVar5 = (undefined8 *)*param_2;
        if (iVar6 != 0) {
          puVar7 = (undefined4 *)(lVar3 + 0x10);
          do {
            *puVar5 = 0;
            iVar2 = puVar7[-2];
            _Src = *(void **)(puVar7 + -4);
            *(int *)(puVar5 + 1) = iVar2;
            if (iVar2 == 0) {
              *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
            }
            else {
              TArray<int,FDefaultAllocator>::ResizeForCopy(puVar5,iVar2,0);
              _guard_xfg_dispatch_icall_nop((void *)*puVar5,_Src,(longlong)iVar2 << 2);
            }
            *(undefined4 *)(puVar5 + 2) = *puVar7;
            *(undefined1 *)((longlong)puVar5 + 0x14) = *(undefined1 *)(puVar7 + 1);
            puVar1 = (undefined1 *)((longlong)puVar7 + 5);
            puVar7 = puVar7 + 6;
            *(undefined1 *)((longlong)puVar5 + 0x15) = *puVar1;
            puVar5 = puVar5 + 3;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 142e80500 Copy body=130 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FDescribeFleetEventsRequest>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x18);
    do {
      FString::operator=(puVar1 + -3,param_3 + -0x18 + (longlong)puVar1);
      puVar1[-1] = *(undefined8 *)(param_3 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 8 + (longlong)puVar1);
      FString::operator=(puVar1 + 2,param_3 + 0x10 + (longlong)puVar1);
      puVar1 = puVar1 + 7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e80590 Copy body=202 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FSurvivalWaveDifficultyBalanceParams>::Copy
          (undefined8 param_1,undefined1 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined4 *)(param_3 + 4);
    do {
      *param_2 = *(undefined1 *)(puVar3 + -1);
      puVar1 = (undefined8 *)(param_2 + 0x10);
      *(undefined4 *)(param_2 + 4) = *puVar3;
      *(undefined4 *)(param_2 + 8) = puVar3[1];
      if (puVar1 != (undefined8 *)(puVar3 + 3)) {
        iVar2 = puVar3[5];
        _Src = *(void **)(puVar3 + 3);
        *(int *)(param_2 + 0x18) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x1c) == 0)) {
          *(undefined4 *)(param_2 + 0x1c) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
        }
      }
      puVar3 = puVar3 + 8;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x20;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e80660 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FAnimNode_RigidBody>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_142e7f710(param_2 + param_3,param_3);
      param_3 = param_3 + 0x590;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e80780 FUN_142e80780 body=181 status=ok
// SIG undefined FUN_142e80780(void)

undefined8 FUN_142e80780(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 2);
    do {
      puVar1[-2] = puVar1[param_3 + -2];
      puVar1[-1] = puVar1[param_3 + -1];
      *puVar1 = puVar1[param_3];
      puVar1[1] = puVar1[param_3 + 1];
      puVar1[2] = puVar1[param_3 + 2];
      puVar1[3] = puVar1[param_3 + 3];
      puVar1[4] = puVar1[param_3 + 4];
      FText::operator=(puVar1 + 6,puVar1 + param_3 + 6);
      *(undefined8 *)(puVar1 + 0x1e) = *(undefined8 *)(puVar1 + param_3 + 0x1e);
      *(undefined8 *)(puVar1 + 0x26) = *(undefined8 *)(puVar1 + param_3 + 0x26);
      *(undefined8 *)(puVar1 + 0x2e) = *(undefined8 *)(puVar1 + param_3 + 0x2e);
      *(undefined8 *)(puVar1 + 0x36) = *(undefined8 *)(puVar1 + param_3 + 0x36);
      puVar1 = puVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142e80840 Destruct body=90 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FAssetBundleData>::Destruct(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_2;
  iVar2 = (int)param_2[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      FUN_140dddf90(lVar1);
      lVar1 = lVar1 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_2;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142e808c0 FUN_142e808c0 body=55 status=ok
// SIG undefined FUN_142e808c0(void)

void FUN_142e808c0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3c978 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c978 = GetStaticEnum(FUN_142e82200,uVar1,L"EHoldToUseMode");
  }
  return;
}



// FUNCTION 142e80900 FUN_142e80900 body=55 status=ok
// SIG undefined FUN_142e80900(void)

void FUN_142e80900(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3c970 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c970 = GetStaticEnum(FUN_142e82230,uVar1,L"ETeamCollisionChannel");
  }
  return;
}



// FUNCTION 142e80940 FUN_142e80940 body=55 status=ok
// SIG undefined FUN_142e80940(void)

void FUN_142e80940(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3c950 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c950 = GetStaticEnum(FUN_142e82260,uVar1,L"ETerritoryCombatProxyType");
  }
  return;
}



// FUNCTION 142e80980 FUN_142e80980 body=55 status=ok
// SIG undefined FUN_142e80980(void)

void FUN_142e80980(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3c960 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c960 = GetStaticEnum(FUN_142e82290,uVar1,L"ETerritoryDrawStyle");
  }
  return;
}



// FUNCTION 142e809c0 FUN_142e809c0 body=55 status=ok
// SIG undefined FUN_142e809c0(void)

void FUN_142e809c0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3c958 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c958 = GetStaticEnum(FUN_142e822c0,uVar1,L"ETerritoryType");
  }
  return;
}



// FUNCTION 142e80a00 FUN_142e80a00 body=55 status=ok
// SIG undefined FUN_142e80a00(void)

void FUN_142e80a00(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3c968 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c968 = GetStaticEnum(FUN_142e822f0,uVar1,L"EThreatReason");
  }
  return;
}



// FUNCTION 142e80a40 FUN_142e80a40 body=55 status=ok
// SIG undefined FUN_142e80a40(void)

void FUN_142e80a40(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3c988 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c988 = GetStaticEnum(FUN_142e82320,uVar1,L"EUIStatCombinationMethod");
  }
  return;
}



// FUNCTION 142e80a80 FUN_142e80a80 body=55 status=ok
// SIG undefined FUN_142e80a80(void)

void FUN_142e80a80(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3c990 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c990 = GetStaticEnum(FUN_142e82350,uVar1,L"EUIStatValueRoundingMode");
  }
  return;
}



// FUNCTION 142e80ac0 FUN_142e80ac0 body=55 status=ok
// SIG undefined FUN_142e80ac0(void)

void FUN_142e80ac0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3c998 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c998 = GetStaticEnum(FUN_142e82380,uVar1,L"EUIStatValueSignStyle");
  }
  return;
}



// FUNCTION 142e80b00 FUN_142e80b00 body=55 status=ok
// SIG undefined FUN_142e80b00(void)

void FUN_142e80b00(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3c948 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c948 = GetStaticEnum(FUN_142e823b0,uVar1,L"EUIStatValueStyle");
  }
  return;
}



// FUNCTION 142e80b40 FUN_142e80b40 body=55 status=ok
// SIG undefined FUN_142e80b40(void)

void FUN_142e80b40(void)

{
  undefined8 uVar1;
  
  if (DAT_146b3c980 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3c980 = GetStaticEnum(FUN_142e823e0,uVar1,L"EUsabilityType");
  }
  return;
}



// FUNCTION 142e80bb0 GetFormat body=4 status=ok
// SIG undefined GetFormat(void)

undefined4 FWmfMediaTextureSample::GetFormat(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// FUNCTION 142e80bc0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCircularThrobber::GetPrivateStaticClass(void)

{
  if (DAT_146b3cc00 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"TeamComponent",&DAT_146b3cc00,FUN_142e818a0,0x1b8,
                  0x10000000,0,L"Engine",&LAB_142e7f1c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b3cc00;
}



// FUNCTION 142e80c70 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCompositingElementInput::GetPrivateStaticClass(void)

{
  if (DAT_146b3cca8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"UIStatData",&DAT_146b3cca8,FUN_142e818d0,0x68,
                  0x10000001,0,L"Engine",&LAB_142e7f240,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b3cca8;
}



// FUNCTION 142e80d20 FUN_142e80d20 body=162 status=ok
// SIG undefined FUN_142e80d20(void)

longlong FUN_142e80d20(void)

{
  if (DAT_146b3ccb8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"UIStatData_Attribute",&DAT_146b3ccb8,FUN_140447710,
                  0x248,0x10000000,0,L"Engine",&LAB_142e7f260,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UListViewBase::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b3ccb8;
}



// FUNCTION 142e80dd0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UListViewBase::GetPrivateStaticClass(void)

{
  if (DAT_146b3ccf0 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"UIStatData_Numeric",&DAT_146b3ccf0,FUN_140447710,
                  0x220,0x10000001,0,L"Engine",&LAB_142e7f280,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UCompositingElementInput::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b3ccf0;
}



// FUNCTION 142e80e80 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDungeonEventListener::GetPrivateStaticClass(void)

{
  if (DAT_146b3cd00 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"UIStatFormulaEvaluator",&DAT_146b3cd00,
                  FUN_140447710,0x28,0x10000001,0,L"Engine",FUN_142e7f310,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b3cd00;
}



// FUNCTION 142e80f20 FUN_142e80f20 body=162 status=ok
// SIG undefined FUN_142e80f20(void)

longlong FUN_142e80f20(void)

{
  if (DAT_146b3ce70 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"UsableComponent",&DAT_146b3ce70,FUN_142e81900,0x3b0
                  ,0x10000002,0,L"Game",&LAB_142e7f3c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b3ce70;
}



// FUNCTION 142e80fd0 FUN_142e80fd0 body=6 status=ok
// SIG undefined FUN_142e80fd0(void)

undefined8 FUN_142e80fd0(void)

{
  return 0xb2443018;
}



// FUNCTION 142e80fe0 FUN_142e80fe0 body=6 status=ok
// SIG undefined FUN_142e80fe0(void)

undefined8 FUN_142e80fe0(void)

{
  return 0xc1d3ebe;
}



// FUNCTION 142e80ff0 FUN_142e80ff0 body=6 status=ok
// SIG undefined FUN_142e80ff0(void)

undefined8 FUN_142e80ff0(void)

{
  return 0x1eda60f7;
}



// FUNCTION 142e81000 FUN_142e81000 body=6 status=ok
// SIG undefined FUN_142e81000(void)

undefined8 FUN_142e81000(void)

{
  return 0x273c23bb;
}



// FUNCTION 142e81010 FUN_142e81010 body=6 status=ok
// SIG undefined FUN_142e81010(void)

undefined8 FUN_142e81010(void)

{
  return 0x69afca1c;
}



// FUNCTION 142e81020 FUN_142e81020 body=6 status=ok
// SIG undefined FUN_142e81020(void)

undefined8 FUN_142e81020(void)

{
  return 0x2d10ff9e;
}



// FUNCTION 142e81030 FUN_142e81030 body=6 status=ok
// SIG undefined FUN_142e81030(void)

undefined8 FUN_142e81030(void)

{
  return 0xe9601530;
}



// FUNCTION 142e81040 FUN_142e81040 body=6 status=ok
// SIG undefined FUN_142e81040(void)

undefined8 FUN_142e81040(void)

{
  return 0x3f41a688;
}



// FUNCTION 142e81050 FUN_142e81050 body=6 status=ok
// SIG undefined FUN_142e81050(void)

undefined8 FUN_142e81050(void)

{
  return 0xc85cc5f0;
}



// FUNCTION 142e81060 FUN_142e81060 body=6 status=ok
// SIG undefined FUN_142e81060(void)

undefined8 FUN_142e81060(void)

{
  return 0x80f10b7a;
}



// FUNCTION 142e81070 FUN_142e81070 body=6 status=ok
// SIG undefined FUN_142e81070(void)

undefined8 FUN_142e81070(void)

{
  return 0x7497a5cb;
}



// FUNCTION 142e81080 FUN_142e81080 body=6 status=ok
// SIG undefined FUN_142e81080(void)

undefined8 FUN_142e81080(void)

{
  return 0xfe2f75e8;
}



// FUNCTION 142e81090 FUN_142e81090 body=6 status=ok
// SIG undefined FUN_142e81090(void)

undefined8 FUN_142e81090(void)

{
  return 0xbe21f4a0;
}



// FUNCTION 142e810a0 FUN_142e810a0 body=6 status=ok
// SIG undefined FUN_142e810a0(void)

undefined8 FUN_142e810a0(void)

{
  return 0x14e028d2;
}



// FUNCTION 142e810b0 FUN_142e810b0 body=6 status=ok
// SIG undefined FUN_142e810b0(void)

undefined8 FUN_142e810b0(void)

{
  return 0x5a877e7a;
}



// FUNCTION 142e810c0 FUN_142e810c0 body=6 status=ok
// SIG undefined FUN_142e810c0(void)

undefined8 FUN_142e810c0(void)

{
  return 0xcc90b194;
}



// FUNCTION 142e810d0 FUN_142e810d0 body=6 status=ok
// SIG undefined FUN_142e810d0(void)

undefined8 FUN_142e810d0(void)

{
  return 0xe947d168;
}



// FUNCTION 142e810e0 FUN_142e810e0 body=29 status=ok
// SIG undefined FUN_142e810e0(void)

undefined1
FUN_142e810e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_142e7faa0(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 142e81100 FUN_142e81100 body=88 status=ok
// SIG undefined FUN_142e81100(void)

bool FUN_142e81100(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  char local_10;
  
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  lVar1 = *param_1;
  local_18 = *(undefined8 *)(param_2 + 4);
  local_10 = '\0';
  uVar2 = FUN_14178ac60(local_28,DAT_146b3cb10);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  return local_10 != '\0';
}



// FUNCTION 142e81160 FUN_142e81160 body=305 status=ok
// SIG undefined FUN_142e81160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_142e81160(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_5f8 [32];
  undefined8 local_5d8;
  undefined8 local_5d0;
  undefined1 local_5c8;
  undefined8 local_360;
  undefined8 local_358;
  undefined1 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined4 local_314;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_5f8;
  local_5d0 = 0;
  local_360 = 0;
  local_40 = 0;
  local_358 = 0;
  local_348 = 0;
  local_340 = 0;
  local_328 = 0;
  local_320 = 0;
  local_314 = 0;
  local_308 = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_50 = 0;
  local_48 = 0;
  local_5c8 = 1;
  local_350 = 1;
  local_318 = 0xffffffff;
  local_5d8 = param_2;
  FUN_142e7f710(&local_5d0,param_3);
  lVar1 = *param_1;
  uVar3 = FUN_14178ac60(param_1,DAT_146b3cad0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar3,&local_5d8);
  uVar2 = local_40;
  FUN_142e7f490(&local_5d0);
  return uVar2;
}



// FUNCTION 142e812a0 FUN_142e812a0 body=154 status=ok
// SIG undefined FUN_142e812a0(void)

undefined8 FUN_142e812a0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(local_28);
  lVar4 = *param_1;
  uVar5 = FUN_14178ac60(param_1,DAT_146b3cb18);
  (**(code **)(lVar4 + 0x208))(param_1,uVar5,local_28);
  FText::FText(param_2,local_28);
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
  return param_2;
}



// FUNCTION 142e81340 FUN_142e81340 body=377 status=ok
// SIG undefined FUN_142e81340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142e81340(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_618 [32];
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined1 local_5e8;
  undefined8 local_380;
  undefined8 local_378;
  undefined1 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined4 local_334;
  undefined8 local_328;
  undefined4 local_320;
  undefined8 local_318;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_618;
  local_5e8 = 1;
  local_5f0 = 0;
  local_380 = 0;
  local_378 = 0;
  local_368 = 0;
  local_360 = 0;
  local_348 = 0;
  local_340 = 0;
  local_338 = 0xffffffff;
  local_334 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_210 = 0;
  local_208 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_70 = 0;
  local_68 = 0;
  local_370 = 1;
  FText::FText(local_60);
  local_5f8 = param_3;
  FUN_142e7f710(&local_5f0,param_4);
  lVar4 = *param_1;
  uVar5 = FUN_14178ac60(param_1,DAT_146b3cad8);
  (**(code **)(lVar4 + 0x208))(param_1,uVar5,&local_5f8);
  FText::FText(param_2,local_60);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  FUN_142e7f490(&local_5f0);
  return param_2;
}



// FUNCTION 142e815b0 ResizeForCopy body=148 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FGameplayTag,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::ResizeForCopy
               (longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x11) {
      uVar2 = 0x10;
    }
    else {
      uVar3 = FMemory::QuantizeSize((longlong)(int)param_2 << 3,0);
      uVar2 = (uint)(uVar3 >> 3);
      if ((int)uVar2 < (int)param_2) {
        uVar2 = 0x7fffffff;
      }
    }
  }
  if (uVar2 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0x80);
    if (uVar2 < 0x11) {
      if (lVar1 == 0) goto LAB_142e8162e;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar2 == 0)) goto LAB_142e8162e;
      lVar5 = (longlong)(int)uVar2 << 3;
    }
    uVar4 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0x80) = uVar4;
  }
LAB_142e8162e:
  *(uint *)(param_1 + 0x8c) = uVar2;
  return;
}



// FUNCTION 142e81650 FUN_142e81650 body=148 status=ok
// SIG undefined FUN_142e81650(void)

void FUN_142e81650(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x11) {
      uVar2 = 0x10;
    }
    else {
      uVar3 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      uVar2 = (uint)(uVar3 >> 4);
      if ((int)uVar2 < (int)param_2) {
        uVar2 = 0x7fffffff;
      }
    }
  }
  if (uVar2 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0x100);
    if (uVar2 < 0x11) {
      if (lVar1 == 0) goto LAB_142e816ce;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar2 == 0)) goto LAB_142e816ce;
      lVar5 = (longlong)(int)uVar2 << 4;
    }
    uVar4 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0x100) = uVar4;
  }
LAB_142e816ce:
  *(uint *)(param_1 + 0x10c) = uVar2;
  return;
}



// FUNCTION 142e816f0 FUN_142e816f0 body=167 status=ok
// SIG undefined FUN_142e816f0(void)

void FUN_142e816f0(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      uVar4 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x98,0);
      uVar4 = (uint)(uVar2 / 0x98);
      if ((int)uVar4 < (int)param_2) {
        uVar4 = 0x7fffffff;
      }
    }
  }
  if (uVar4 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0x260);
    if (uVar4 < 5) {
      if (lVar1 == 0) goto LAB_142e81781;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar4 == 0)) goto LAB_142e81781;
      lVar5 = (longlong)(int)uVar4 * 0x98;
    }
    uVar3 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0x260) = uVar3;
  }
LAB_142e81781:
  *(uint *)(param_1 + 0x26c) = uVar4;
  return;
}



// FUNCTION 142e817a0 ResizeForCopy body=148 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
     ResizeForCopy(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      uVar2 = 8;
    }
    else {
      uVar3 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      uVar2 = (uint)(uVar3 >> 4);
      if ((int)uVar2 < (int)param_2) {
        uVar2 = 0x7fffffff;
      }
    }
  }
  if (uVar2 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0x80);
    if (uVar2 < 9) {
      if (lVar1 == 0) goto LAB_142e8181e;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar2 == 0)) goto LAB_142e8181e;
      lVar5 = (longlong)(int)uVar2 << 4;
    }
    uVar4 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0x80) = uVar4;
  }
LAB_142e8181e:
  *(uint *)(param_1 + 0x8c) = uVar2;
  return;
}



// FUNCTION 142e81840 FUN_142e81840 body=34 status=ok
// SIG undefined FUN_142e81840(void)

void FUN_142e81840(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142e7dee0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetInspectedActor_1459754d8,1);
  return;
}



// FUNCTION 142e81870 StaticRegisterNativesUCurveFloat body=34 status=ok
// SIG undefined StaticRegisterNativesUCurveFloat(void)

void UCurveFloat::StaticRegisterNativesUCurveFloat(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetAttitudeToward_145975648,1);
  return;
}



// FUNCTION 142e818a0 FUN_142e818a0 body=34 status=ok
// SIG undefined FUN_142e818a0(void)

void FUN_142e818a0(void)

{
  undefined8 uVar1;
  
  uVar1 = UCircularThrobber::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_GetTeamAttitudeTowardsActor_145975660,0xe);
  return;
}



// FUNCTION 142e818d0 FUN_142e818d0 body=34 status=ok
// SIG undefined FUN_142e818d0(void)

void FUN_142e818d0(void)

{
  undefined8 uVar1;
  
  uVar1 = UCompositingElementInput::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ComputeAttributeModification_145975f20,5)
  ;
  return;
}



// FUNCTION 142e81900 FUN_142e81900 body=34 status=ok
// SIG undefined FUN_142e81900(void)

void FUN_142e81900(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142e80f20();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetInteractionHeader_145976ff0,7);
  return;
}



// FUNCTION 142e81930 FUN_142e81930 body=82 status=ok
// SIG undefined FUN_142e81930(void)

void FUN_142e81930(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3cd30 == 0) {
    uVar1 = FUN_142e80fd0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3cd30 = GetStaticStruct(FUN_142e82410,uVar2,L"CachedUIStatCollectionData",0x10,uVar1);
  }
  return;
}



// FUNCTION 142e81990 FUN_142e81990 body=82 status=ok
// SIG undefined FUN_142e81990(void)

void FUN_142e81990(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3cd50 == 0) {
    uVar1 = FUN_142e80fe0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3cd50 = GetStaticStruct(FUN_142e82440,uVar2,L"CachedUIStatData",0x40,uVar1);
  }
  return;
}



// FUNCTION 142e819f0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPoseDriverTransform::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3cd40 == 0) {
    uVar1 = FUN_142e80ff0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3cd40 = GetStaticStruct(FUN_142e82470,uVar2,L"CachedUIStatSectionData",0x18,uVar1);
  }
  return;
}



// FUNCTION 142e81a50 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSplineIKCachedBoneData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3ce00 == 0) {
    uVar1 = FUN_142e81000();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3ce00 = GetStaticStruct(FUN_142e824a0,uVar2,L"HoldToUseSettings",0x14,uVar1);
  }
  return;
}



// FUNCTION 142e81ab0 FUN_142e81ab0 body=82 status=ok
// SIG undefined FUN_142e81ab0(void)

void FUN_142e81ab0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3cd80 == 0) {
    uVar1 = FUN_142e81010();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3cd80 =
         GetStaticStruct(FUN_142e824d0,uVar2,L"ReplicatedUIStatCollectionData",0x10,uVar1);
  }
  return;
}



// FUNCTION 142e81b10 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_Root::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3cc58 == 0) {
    uVar1 = FUN_142e81020();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3cc58 = GetStaticStruct(FUN_142e82500,uVar2,L"TargetPersistentNotes",0x48,uVar1);
  }
  return;
}



// FUNCTION 142e81b70 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_RefPose::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3cb30 == 0) {
    uVar1 = FUN_142e81030();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3cb30 = GetStaticStruct(FUN_142e82530,uVar2,L"TargetQueryDebugDesc",0x38,uVar1);
  }
  return;
}



// FUNCTION 142e81bd0 FUN_142e81bd0 body=82 status=ok
// SIG undefined FUN_142e81bd0(void)

void FUN_142e81bd0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3cb20 == 0) {
    uVar1 = FUN_142e81040();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3cb20 = GetStaticStruct(FUN_142e82560,uVar2,L"TargetQueryTestDebugDesc",8,uVar1);
  }
  return;
}



// FUNCTION 142e81c30 FUN_142e81c30 body=82 status=ok
// SIG undefined FUN_142e81c30(void)

void FUN_142e81c30(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3cb60 == 0) {
    uVar1 = FUN_142e81050();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3cb60 = GetStaticStruct(FUN_142e82590,uVar2,L"TeamAttitudeSetEntry",0x10,uVar1);
  }
  return;
}



// FUNCTION 142e81c90 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSplineIKCachedBoneData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3cc30 == 0) {
    uVar1 = FUN_142e81060();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3cc30 = GetStaticStruct(FUN_142e825c0,uVar2,L"TerritoryData",0x20,uVar1);
  }
  return;
}



// FUNCTION 142e81cf0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_RigidBody::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3cd60 == 0) {
    uVar1 = FUN_142e81070();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3cd60 = GetStaticStruct(FUN_142e825f0,uVar2,L"UIStatCollector",0x590,uVar1);
  }
  return;
}



// FUNCTION 142e81d50 FUN_142e81d50 body=82 status=ok
// SIG undefined FUN_142e81d50(void)

void FUN_142e81d50(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3cd70 == 0) {
    uVar1 = FUN_142e81080();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3cd70 = GetStaticStruct(FUN_142e82620,uVar2,L"UIStatPriorityData",0x10,uVar1);
  }
  return;
}



// FUNCTION 142e81db0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_CopyPoseFromMesh::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3ccd8 == 0) {
    uVar1 = FUN_142e81090();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3ccd8 = GetStaticStruct(FUN_142e82650,uVar2,L"UIStatValueRemappingData",0xe8,uVar1);
  }
  return;
}



// FUNCTION 142e81e10 FUN_142e81e10 body=82 status=ok
// SIG undefined FUN_142e81e10(void)

void FUN_142e81e10(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3cde0 == 0) {
    uVar1 = FUN_142e810a0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3cde0 = GetStaticStruct(FUN_142e82680,uVar2,L"UsabilityInfo",0x40,uVar1);
  }
  return;
}



// FUNCTION 142e81e70 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPoseDriverTransform::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3ce10 == 0) {
    uVar1 = FUN_142e810b0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3ce10 = GetStaticStruct(FUN_142e826b0,uVar2,L"UsabilityQuery",0x18,uVar1);
  }
  return;
}



// FUNCTION 142e81ed0 FUN_142e81ed0 body=82 status=ok
// SIG undefined FUN_142e81ed0(void)

void FUN_142e81ed0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3cdf0 == 0) {
    uVar1 = FUN_142e810c0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3cdf0 = GetStaticStruct(FUN_142e826e0,uVar2,L"UsableAngleRestriction",8,uVar1);
  }
  return;
}



// FUNCTION 142e81f30 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPoseDriverTransform::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b3ce20 == 0) {
    uVar1 = FUN_142e810d0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b3ce20 = GetStaticStruct(FUN_142e82710,uVar2,L"UseEvent",0x18,uVar1);
  }
  return;
}



// FUNCTION 142e81f90 FUN_142e81f90 body=47 status=ok
// SIG undefined FUN_142e81f90(void)

longlong FUN_142e81f90(void)

{
  if (DAT_146b3cc08 == 0) {
    FUN_141786440(&DAT_146b3cc08,&PTR_GetPrivateStaticClass_145973bf0);
  }
  return DAT_146b3cc08;
}



// FUNCTION 142e81fc0 FUN_142e81fc0 body=47 status=ok
// SIG undefined FUN_142e81fc0(void)

longlong FUN_142e81fc0(void)

{
  if (DAT_146b3cc40 == 0) {
    FUN_141786440(&DAT_146b3cc40,&PTR_FUN_145971240);
  }
  return DAT_146b3cc40;
}



// FUNCTION 142e81ff0 FUN_142e81ff0 body=47 status=ok
// SIG undefined FUN_142e81ff0(void)

longlong FUN_142e81ff0(void)

{
  if (DAT_146b3cc68 == 0) {
    FUN_141786440(&DAT_146b3cc68,&PTR_FUN_145971af0);
  }
  return DAT_146b3cc68;
}



// FUNCTION 142e82020 FUN_142e82020 body=47 status=ok
// SIG undefined FUN_142e82020(void)

longlong FUN_142e82020(void)

{
  if (DAT_146b3cd90 == 0) {
    FUN_141786440(&DAT_146b3cd90,&PTR_GetPrivateStaticClass_145970c40);
  }
  return DAT_146b3cd90;
}



// FUNCTION 142e82050 FUN_142e82050 body=47 status=ok
// SIG undefined FUN_142e82050(void)

longlong FUN_142e82050(void)

{
  if (DAT_146b3ccb0 == 0) {
    FUN_141786440(&DAT_146b3ccb0,&PTR_LAB_145974390);
  }
  return DAT_146b3ccb0;
}



// FUNCTION 142e82080 FUN_142e82080 body=47 status=ok
// SIG undefined FUN_142e82080(void)

longlong FUN_142e82080(void)

{
  if (DAT_146b3cd08 == 0) {
    FUN_141786440(&DAT_146b3cd08,&PTR_FUN_145970340);
  }
  return DAT_146b3cd08;
}



// FUNCTION 142e820b0 FUN_142e820b0 body=47 status=ok
// SIG undefined FUN_142e820b0(void)

longlong FUN_142e820b0(void)

{
  if (DAT_146b3cd18 == 0) {
    FUN_141786440(&DAT_146b3cd18,&PTR_FUN_1459704b0);
  }
  return DAT_146b3cd18;
}



// FUNCTION 142e820e0 FUN_142e820e0 body=47 status=ok
// SIG undefined FUN_142e820e0(void)

longlong FUN_142e820e0(void)

{
  if (DAT_146b3ccf8 == 0) {
    FUN_141786440(&DAT_146b3ccf8,&PTR_GetPrivateStaticClass_145970200);
  }
  return DAT_146b3ccf8;
}



// FUNCTION 142e82110 FUN_142e82110 body=47 status=ok
// SIG undefined FUN_142e82110(void)

longlong FUN_142e82110(void)

{
  if (DAT_146b3cda0 == 0) {
    FUN_141786440(&DAT_146b3cda0,&PTR_FUN_145971390);
  }
  return DAT_146b3cda0;
}



// FUNCTION 142e82140 FUN_142e82140 body=47 status=ok
// SIG undefined FUN_142e82140(void)

longlong FUN_142e82140(void)

{
  if (DAT_146b3cdb8 == 0) {
    FUN_141786a30(&DAT_146b3cdb8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146736bf0);
  }
  return DAT_146b3cdb8;
}



// FUNCTION 142e82170 FUN_142e82170 body=47 status=ok
// SIG undefined FUN_142e82170(void)

longlong FUN_142e82170(void)

{
  if (DAT_146b3cdb0 == 0) {
    FUN_141786a30(&DAT_146b3cdb0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146736aa0);
  }
  return DAT_146b3cdb0;
}



// FUNCTION 142e821a0 FUN_142e821a0 body=47 status=ok
// SIG undefined FUN_142e821a0(void)

longlong FUN_142e821a0(void)

{
  if (DAT_146b3cdc0 == 0) {
    FUN_141786a30(&DAT_146b3cdc0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146736cb0);
  }
  return DAT_146b3cdc0;
}



// FUNCTION 142e821d0 FUN_142e821d0 body=47 status=ok
// SIG undefined FUN_142e821d0(void)

longlong FUN_142e821d0(void)

{
  if (DAT_146b3cdc8 == 0) {
    FUN_141786a30(&DAT_146b3cdc8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146736d30);
  }
  return DAT_146b3cdc8;
}



// FUNCTION 142e82200 FUN_142e82200 body=47 status=ok
// SIG undefined FUN_142e82200(void)

longlong FUN_142e82200(void)

{
  if (DAT_146b3cdd0 == 0) {
    FUN_1417866a0(&DAT_146b3cdd0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146738580);
  }
  return DAT_146b3cdd0;
}



// FUNCTION 142e82230 FUN_142e82230 body=47 status=ok
// SIG undefined FUN_142e82230(void)

longlong FUN_142e82230(void)

{
  if (DAT_146b3cb58 == 0) {
    FUN_1417866a0(&DAT_146b3cb58,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1467382b0);
  }
  return DAT_146b3cb58;
}



// FUNCTION 142e82260 FUN_142e82260 body=47 status=ok
// SIG undefined FUN_142e82260(void)

longlong FUN_142e82260(void)

{
  if (DAT_146b3cc18 == 0) {
    FUN_1417866a0(&DAT_146b3cc18,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146738300);
  }
  return DAT_146b3cc18;
}



// FUNCTION 142e82290 FUN_142e82290 body=47 status=ok
// SIG undefined FUN_142e82290(void)

longlong FUN_142e82290(void)

{
  if (DAT_146b3cc28 == 0) {
    FUN_1417866a0(&DAT_146b3cc28,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1467383a0);
  }
  return DAT_146b3cc28;
}



// FUNCTION 142e822c0 FUN_142e822c0 body=47 status=ok
// SIG undefined FUN_142e822c0(void)

longlong FUN_142e822c0(void)

{
  if (DAT_146b3cc20 == 0) {
    FUN_1417866a0(&DAT_146b3cc20,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146738350);
  }
  return DAT_146b3cc20;
}



// FUNCTION 142e822f0 FUN_142e822f0 body=47 status=ok
// SIG undefined FUN_142e822f0(void)

longlong FUN_142e822f0(void)

{
  if (DAT_146b3cc50 == 0) {
    FUN_1417866a0(&DAT_146b3cc50,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1467383f0);
  }
  return DAT_146b3cc50;
}



// FUNCTION 142e82320 FUN_142e82320 body=47 status=ok
// SIG undefined FUN_142e82320(void)

longlong FUN_142e82320(void)

{
  if (DAT_146b3ccc0 == 0) {
    FUN_1417866a0(&DAT_146b3ccc0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146738440);
  }
  return DAT_146b3ccc0;
}



// FUNCTION 142e82350 FUN_142e82350 body=47 status=ok
// SIG undefined FUN_142e82350(void)

longlong FUN_142e82350(void)

{
  if (DAT_146b3ccc8 == 0) {
    FUN_1417866a0(&DAT_146b3ccc8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146738490);
  }
  return DAT_146b3ccc8;
}



// FUNCTION 142e82380 FUN_142e82380 body=47 status=ok
// SIG undefined FUN_142e82380(void)

longlong FUN_142e82380(void)

{
  if (DAT_146b3ccd0 == 0) {
    FUN_1417866a0(&DAT_146b3ccd0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1467384e0);
  }
  return DAT_146b3ccd0;
}



// FUNCTION 142e823b0 FUN_142e823b0 body=47 status=ok
// SIG undefined FUN_142e823b0(void)

longlong FUN_142e823b0(void)

{
  if (DAT_146b3cd28 == 0) {
    FUN_1417866a0(&DAT_146b3cd28,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146738530);
  }
  return DAT_146b3cd28;
}



// FUNCTION 142e823e0 FUN_142e823e0 body=47 status=ok
// SIG undefined FUN_142e823e0(void)

longlong FUN_142e823e0(void)

{
  if (DAT_146b3cdd8 == 0) {
    FUN_1417866a0(&DAT_146b3cdd8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1467385d0);
  }
  return DAT_146b3cdd8;
}



// FUNCTION 142e82410 FUN_142e82410 body=47 status=ok
// SIG undefined FUN_142e82410(void)

longlong FUN_142e82410(void)

{
  if (DAT_146b3cd38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3cd38,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1467364a0);
  }
  return DAT_146b3cd38;
}



// FUNCTION 142e82440 FUN_142e82440 body=47 status=ok
// SIG undefined FUN_142e82440(void)

longlong FUN_142e82440(void)

{
  if (DAT_146b3cd58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3cd58,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146736760);
  }
  return DAT_146b3cd58;
}



// FUNCTION 142e82470 FUN_142e82470 body=47 status=ok
// SIG undefined FUN_142e82470(void)

longlong FUN_142e82470(void)

{
  if (DAT_146b3cd48 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3cd48,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1467365a0);
  }
  return DAT_146b3cd48;
}



// FUNCTION 142e824a0 FUN_142e824a0 body=47 status=ok
// SIG undefined FUN_142e824a0(void)

longlong FUN_142e824a0(void)

{
  if (DAT_146b3ce08 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3ce08,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146737360);
  }
  return DAT_146b3ce08;
}



// FUNCTION 142e824d0 FUN_142e824d0 body=47 status=ok
// SIG undefined FUN_142e824d0(void)

longlong FUN_142e824d0(void)

{
  if (DAT_146b3cd88 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3cd88,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1467368c0);
  }
  return DAT_146b3cd88;
}



// FUNCTION 142e82500 FUN_142e82500 body=47 status=ok
// SIG undefined FUN_142e82500(void)

longlong FUN_142e82500(void)

{
  if (DAT_146b3cc60 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3cc60,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146734f80);
  }
  return DAT_146b3cc60;
}



// FUNCTION 142e82530 FUN_142e82530 body=47 status=ok
// SIG undefined FUN_142e82530(void)

longlong FUN_142e82530(void)

{
  if (DAT_146b3cb38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3cb38,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146733a60);
  }
  return DAT_146b3cb38;
}



// FUNCTION 142e82560 FUN_142e82560 body=47 status=ok
// SIG undefined FUN_142e82560(void)

longlong FUN_142e82560(void)

{
  if (DAT_146b3cb28 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3cb28,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1467338e0);
  }
  return DAT_146b3cb28;
}



// FUNCTION 142e82590 FUN_142e82590 body=47 status=ok
// SIG undefined FUN_142e82590(void)

longlong FUN_142e82590(void)

{
  if (DAT_146b3cb68 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3cb68,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146733be0);
  }
  return DAT_146b3cb68;
}



// FUNCTION 142e825c0 FUN_142e825c0 body=47 status=ok
// SIG undefined FUN_142e825c0(void)

longlong FUN_142e825c0(void)

{
  if (DAT_146b3cc38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3cc38,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146734c30);
  }
  return DAT_146b3cc38;
}



// FUNCTION 142e825f0 FUN_142e825f0 body=47 status=ok
// SIG undefined FUN_142e825f0(void)

longlong FUN_142e825f0(void)

{
  if (DAT_146b3cd68 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3cd68,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1467367b0);
  }
  return DAT_146b3cd68;
}



// FUNCTION 142e82620 FUN_142e82620 body=47 status=ok
// SIG undefined FUN_142e82620(void)

longlong FUN_142e82620(void)

{
  if (DAT_146b3cd78 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3cd78,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146736870);
  }
  return DAT_146b3cd78;
}



// FUNCTION 142e82650 FUN_142e82650 body=47 status=ok
// SIG undefined FUN_142e82650(void)

longlong FUN_142e82650(void)

{
  if (DAT_146b3cce0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3cce0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146735aa0);
  }
  return DAT_146b3cce0;
}



// FUNCTION 142e82680 FUN_142e82680 body=47 status=ok
// SIG undefined FUN_142e82680(void)

longlong FUN_142e82680(void)

{
  if (DAT_146b3cde8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3cde8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1467370e0);
  }
  return DAT_146b3cde8;
}



// FUNCTION 142e826b0 FUN_142e826b0 body=47 status=ok
// SIG undefined FUN_142e826b0(void)

longlong FUN_142e826b0(void)

{
  if (DAT_146b3ce18 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3ce18,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_146737500);
  }
  return DAT_146b3ce18;
}



// FUNCTION 142e826e0 FUN_142e826e0 body=47 status=ok
// SIG undefined FUN_142e826e0(void)

longlong FUN_142e826e0(void)

{
  if (DAT_146b3cdf8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3cdf8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1467371a0);
  }
  return DAT_146b3cdf8;
}



// FUNCTION 142e82710 FUN_142e82710 body=47 status=ok
// SIG undefined FUN_142e82710(void)

longlong FUN_142e82710(void)

{
  if (DAT_146b3ce28 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b3ce28,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1467376a0);
  }
  return DAT_146b3ce28;
}



// FUNCTION 142e82740 FUN_142e82740 body=566 status=ok
// SIG undefined FUN_142e82740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e82740(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 unaff_RDI;
  bool bVar2;
  undefined4 uVar3;
  undefined1 auStack_5e8 [32];
  int local_5c8 [2];
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined1 local_5b0;
  undefined1 local_5a8 [608];
  undefined8 local_348;
  undefined8 local_340;
  undefined1 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  longlong local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_5e8;
  local_5c0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_5c0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c0);
  }
  local_5c8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_5c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_5c8);
  }
  bVar2 = local_5c8[0] != 0;
  local_5b8 = 0;
  local_5b0 = 1;
  local_348 = 0;
  local_340 = 0;
  local_338 = 1;
  local_330 = 0;
  local_328 = 0;
  local_310 = 0;
  local_308 = 0;
  local_300 = 0xffffffff;
  local_2fc = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_5b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_5b8);
  }
  puVar1 = &local_5b8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar3 = FUN_142de8cc0(puVar1,local_5c0,(int)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar2) + 1)
  ;
  *param_3 = uVar3;
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (local_1d8 != 0) {
    FMemory::Free();
  }
  local_2e8 = 0;
  if (local_2f0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_330);
  FUN_14099aac0(local_5a8);
  return;
}



// FUNCTION 142e82980 FUN_142e82980 body=163 status=ok
// SIG undefined FUN_142e82980(void)

void FUN_142e82980(undefined8 param_1,longlong param_2)

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
  FUN_142de76c0(param_1,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142e82a30 FUN_142e82a30 body=143 status=ok
// SIG undefined FUN_142e82a30(void)

void FUN_142e82a30(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_142de8c20(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e82af0 FUN_142e82af0 body=143 status=ok
// SIG undefined FUN_142e82af0(void)

void FUN_142e82af0(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_142dec940(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e82b80 FUN_142e82b80 body=143 status=ok
// SIG undefined FUN_142e82b80(void)

void FUN_142e82b80(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_142dec980(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e82c10 FUN_142e82c10 body=43 status=ok
// SIG undefined FUN_142e82c10(void)

void FUN_142e82c10(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142dec9a0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e82c40 FUN_142e82c40 body=128 status=ok
// SIG undefined FUN_142e82c40(void)

void FUN_142e82c40(undefined8 param_1,longlong param_2)

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
  FUN_142dedd30(param_1,local_res10);
  return;
}



// FUNCTION 142e82cc0 FUN_142e82cc0 body=143 status=ok
// SIG undefined FUN_142e82cc0(void)

void FUN_142e82cc0(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_142dee8a0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e82d50 FUN_142e82d50 body=143 status=ok
// SIG undefined FUN_142e82d50(void)

void FUN_142e82d50(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_142dee910(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e82de0 FUN_142e82de0 body=143 status=ok
// SIG undefined FUN_142e82de0(void)

void FUN_142e82de0(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_142deeb90(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e82e70 FUN_142e82e70 body=176 status=ok
// SIG undefined FUN_142e82e70(void)

void FUN_142e82e70(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
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
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x400))(param_1,puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e82f20 FUN_142e82f20 body=488 status=ok
// SIG undefined FUN_142e82f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e82f20(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_5e8 [32];
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined1 local_5b8;
  undefined1 local_5b0 [608];
  undefined8 local_350;
  undefined8 local_348;
  undefined1 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 local_304;
  longlong local_2f8;
  undefined4 local_2f0;
  undefined8 local_2e8;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_5e8;
  local_5c8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_5c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c8);
  }
  local_5c0 = 0;
  local_5b8 = 1;
  local_350 = 0;
  local_348 = 0;
  local_340 = 1;
  local_338 = 0;
  local_330 = 0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0xffffffff;
  local_304 = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_5c0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c0);
  }
  puVar1 = &local_5c0;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = (**(code **)(*param_1 + 0x280))(param_1,local_5c8,puVar1);
  *param_3 = uVar2;
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_d0 != 0) {
    FMemory::Free();
  }
  if (local_1e0 != 0) {
    FMemory::Free();
  }
  local_2f0 = 0;
  if (local_2f8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_338);
  FUN_14099aac0(local_5b0);
  return;
}



// FUNCTION 142e83110 FUN_142e83110 body=127 status=ok
// SIG undefined FUN_142e83110(void)

void FUN_142e83110(longlong *param_1,longlong param_2,undefined8 param_3)

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
  uVar5 = (**(code **)(*param_1 + 0x3f8))(param_1,local_28);
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



// FUNCTION 142e83190 FUN_142e83190 body=566 status=ok
// SIG undefined FUN_142e83190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142e83190(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_608 [32];
  undefined8 local_5e8;
  undefined1 local_5e0 [8];
  longlong *local_5d8;
  undefined8 local_5c8;
  undefined1 local_5c0;
  undefined1 local_5b8 [608];
  undefined8 local_358;
  undefined8 local_350;
  undefined1 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 local_30c;
  longlong local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_608;
  local_5e8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_5e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_5e8);
  }
  local_5c8 = 0;
  local_310 = 0xffffffff;
  local_5c0 = 1;
  local_358 = 0;
  local_350 = 0;
  local_348 = 1;
  local_340 = 0;
  local_338 = 0;
  local_320 = 0;
  local_318 = 0;
  local_30c = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_48 = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_5c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c8);
  }
  puVar6 = &local_5c8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar5 = (**(code **)(*param_1 + 0x288))(param_1,local_5e0,local_5e8,puVar6);
  FText::operator=(param_3,uVar5);
  if (local_5d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5d8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_5d8)(local_5d8);
      LOCK();
      piVar2 = (int *)((longlong)local_5d8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_5d8 + 8))(local_5d8,1);
      }
    }
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if (local_1e8 != 0) {
    FMemory::Free();
  }
  local_2f8 = 0;
  if (local_300 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_340);
  FUN_14099aac0(local_5b8);
  return;
}



// FUNCTION 142e833d0 FUN_142e833d0 body=150 status=ok
// SIG undefined FUN_142e833d0(void)

void FUN_142e833d0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = (**(code **)(*param_1 + 0x290))(param_1,local_res8);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142e83490 FUN_142e83490 body=130 status=ok
// SIG undefined FUN_142e83490(void)

void FUN_142e83490(undefined8 param_1,longlong param_2)

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
  FUN_142df2730(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 142e83520 FUN_142e83520 body=181 status=ok
// SIG undefined FUN_142e83520(void)

void FUN_142e83520(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x3f8))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"SetInspectedActor_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x400))(param_1,local_res8);
  return;
}



// FUNCTION 142e835e0 FUN_142e835e0 body=208 status=ok
// SIG undefined FUN_142e835e0(void)

void FUN_142e835e0(longlong param_1,longlong param_2)

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
  FText::operator=(param_1 + 0x260,puVar5);
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



// FUNCTION 142e836b0 FUN_142e836b0 body=128 status=ok
// SIG undefined FUN_142e836b0(void)

void FUN_142e836b0(undefined8 param_1,longlong param_2)

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
  FUN_142df2b50(param_1,local_res10);
  return;
}



// FUNCTION 142e83730 FUN_142e83730 body=128 status=ok
// SIG undefined FUN_142e83730(void)

void FUN_142e83730(undefined8 param_1,longlong param_2)

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
  FUN_142df2ca0(param_1,local_res10);
  return;
}



// FUNCTION 142e837b0 FUN_142e837b0 body=130 status=ok
// SIG undefined FUN_142e837b0(void)

void FUN_142e837b0(undefined8 param_1,longlong param_2)

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
  FUN_142df2ce0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 142e83860 FUN_142e83860 body=191 status=ok
// SIG undefined FUN_142e83860(void)

void FUN_142e83860(undefined8 param_1,longlong param_2)

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
  FUN_142df3080(param_1,bVar1,local_res20);
  return;
}



// FUNCTION 142e83920 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDamageableInterface::GetPrivateStaticClass(void)

{
  if (DAT_146b3d1b0 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"WeaponUserInterface",&DAT_146b3d1b0,FUN_140447710,
                  0x28,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b3d1b0;
}



// FUNCTION 142e839e0 FUN_142e839e0 body=162 status=ok
// SIG undefined FUN_142e839e0(void)

longlong FUN_142e839e0(void)

{
  if (DAT_146b3d1c0 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"WeatherTemplate",&DAT_146b3d1c0,FUN_140447710,0x40,
                  0x10000000,0,L"Engine",FUN_1414baa20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b3d1c0;
}


