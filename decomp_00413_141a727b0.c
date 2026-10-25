// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141a727b0 FUN_141a727b0 body=135 status=ok
// SIG undefined FUN_141a727b0(void)

void FUN_141a727b0(char *param_1,longlong *param_2)

{
  int iVar1;
  
  if (*param_1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    LOCK();
    param_1[0x10] = '\x01';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    UNLOCK();
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(char **)(*param_2 + (longlong)iVar1 * 8) = param_1;
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
  FUN_1415b5910(*(undefined8 *)(param_1 + 8));
  FMemory::operator_delete(param_1,0x20);
  return;
}



// FUNCTION 141a72850 FUN_141a72850 body=92 status=ok
// SIG undefined FUN_141a72850(void)

undefined8 FUN_141a72850(longlong param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
  case 2:
  case 0x20:
  case 0x22:
    return *(undefined8 *)(param_1 + 0xd0);
  case 1:
  case 0x21:
    return *(undefined8 *)(param_1 + 0xd8);
  default:
    return *(undefined8 *)(param_1 + 0x8000000c8);
  case 0x10:
  case 0x12:
    return *(undefined8 *)(param_1 + 0xe0);
  case 0x11:
    return *(undefined8 *)(param_1 + 0xe8);
  }
}



// FUNCTION 141a72b50 FUN_141a72b50 body=56 status=ok
// SIG undefined FUN_141a72b50(void)

undefined8 FUN_141a72b50(longlong param_1,longlong param_2)

{
  if (param_2 != param_1 + 0x460) {
    FUN_1419cbcc0(param_2,param_1 + 0x460,*(undefined4 *)(param_1 + 0x560),
                  *(undefined4 *)(param_2 + 0x104),0);
  }
  return 1;
}



// FUNCTION 141a72b90 FUN_141a72b90 body=1869 status=ok
// SIG undefined FUN_141a72b90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Switch with 1 destination removed at 0x000141a73002 */

longlong * FUN_141a72b90(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined4 uVar15;
  uint uVar16;
  longlong lVar18;
  undefined1 auStack_3a8 [32];
  longlong local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined4 local_360;
  longlong local_358;
  longlong lStack_350;
  undefined2 local_348;
  undefined2 uStack_346;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined1 local_2f8;
  undefined1 local_2f7 [31];
  longlong local_2d8 [6];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  longlong local_188 [42];
  ulonglong local_38;
  ulonglong uVar17;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
  _guard_xfg_dispatch_icall_nop(param_1,0,0x310);
  lVar10 = *(longlong *)(param_3 + 0xc0);
  uVar13 = 0;
  *param_1 = lVar10;
  param_1[1] = *(longlong *)(lVar10 + 8);
  if (*(longlong *)(param_2 + 0x30) == 0) {
    local_368 = CONCAT35(local_368._5_3_,0xf00000004);
    lVar10 = 2;
    local_2d8[5] = local_368;
    local_288 = local_368;
    uStack_260 = local_368;
    local_238 = local_368;
    local_210 = local_368;
    local_1e8 = local_368;
    local_1c0 = local_368;
    local_198 = local_368;
    local_2d8[0] = 0;
    local_2d8[1] = 0;
    local_2d8[2] = 0x100000002;
    local_2d8[3] = 0x200000001;
    local_2d8[4] = 0x100000001;
    local_2a8 = 0;
    uStack_2a0 = 0x100000002;
    local_298 = 0x200000001;
    uStack_290 = 0x100000001;
    uStack_280 = 0;
    local_278 = 0x100000002;
    uStack_270 = 0x200000001;
    local_268 = 0x100000001;
    local_258 = 0;
    uStack_250 = 0x100000002;
    local_248 = 0x200000001;
    uStack_240 = 0x100000001;
    uStack_230 = 0;
    local_228 = 0x100000002;
    uStack_220 = 0x200000001;
    local_218 = 0x100000001;
    local_208 = 0;
    uStack_200 = 0x100000002;
    local_1f8 = 0x200000001;
    uStack_1f0 = 0x100000001;
    local_1e0 = 0;
    uStack_1d8 = 0x100000002;
    local_1d0 = 0x200000001;
    uStack_1c8 = 0x100000001;
    local_1b8 = 0;
    uStack_1b0 = 0x100000002;
    local_1a8 = 0x200000001;
    uStack_1a0 = 0x100000001;
    plVar14 = local_2d8;
    plVar6 = local_188;
    do {
      plVar9 = plVar6;
      plVar8 = plVar14;
      lVar18 = plVar8[1];
      lVar1 = plVar8[2];
      lVar2 = plVar8[3];
      *plVar9 = *plVar8;
      plVar9[1] = lVar18;
      lVar18 = plVar8[4];
      lVar5 = plVar8[5];
      plVar9[2] = lVar1;
      plVar9[3] = lVar2;
      lVar1 = plVar8[6];
      lVar2 = plVar8[7];
      plVar9[4] = lVar18;
      plVar9[5] = lVar5;
      lVar18 = plVar8[8];
      lVar5 = plVar8[9];
      plVar9[6] = lVar1;
      plVar9[7] = lVar2;
      lVar1 = plVar8[10];
      lVar2 = plVar8[0xb];
      plVar9[8] = lVar18;
      plVar9[9] = lVar5;
      lVar18 = plVar8[0xc];
      lVar5 = plVar8[0xd];
      plVar9[10] = lVar1;
      plVar9[0xb] = lVar2;
      lVar1 = plVar8[0xe];
      lVar2 = plVar8[0xf];
      plVar9[0xc] = lVar18;
      plVar9[0xd] = lVar5;
      plVar9[0xe] = lVar1;
      plVar9[0xf] = lVar2;
      lVar10 = lVar10 + -1;
      plVar14 = plVar8 + 0x10;
      plVar6 = plVar9 + 0x10;
    } while (lVar10 != 0);
    lVar10 = plVar8[0x11];
    lVar18 = plVar8[0x12];
    lVar1 = plVar8[0x13];
    plVar9[0x10] = plVar8[0x10];
    plVar9[0x11] = lVar10;
    lVar2 = plVar8[0x14];
    lVar5 = plVar8[0x15];
    plVar9[0x12] = lVar18;
    plVar9[0x13] = lVar1;
    lVar18 = plVar8[0x16];
    lVar1 = plVar8[0x17];
    lVar10 = plVar8[0x18];
    plVar9[0x14] = lVar2;
    plVar9[0x15] = lVar5;
    plVar9[0x16] = lVar18;
    plVar9[0x17] = lVar1;
    plVar9[0x18] = lVar10;
    plVar14 = local_188;
  }
  else {
    lVar10 = 2;
    plVar14 = (longlong *)(*(longlong *)(param_2 + 0x30) + 0x54);
    plVar6 = local_2d8;
    do {
      plVar9 = plVar6;
      plVar8 = plVar14;
      lVar18 = plVar8[1];
      lVar1 = plVar8[2];
      lVar2 = plVar8[3];
      *plVar9 = *plVar8;
      plVar9[1] = lVar18;
      lVar18 = plVar8[4];
      lVar5 = plVar8[5];
      plVar9[2] = lVar1;
      plVar9[3] = lVar2;
      lVar1 = plVar8[6];
      lVar2 = plVar8[7];
      plVar9[4] = lVar18;
      plVar9[5] = lVar5;
      lVar18 = plVar8[8];
      lVar5 = plVar8[9];
      plVar9[6] = lVar1;
      plVar9[7] = lVar2;
      lVar1 = plVar8[10];
      lVar2 = plVar8[0xb];
      plVar9[8] = lVar18;
      plVar9[9] = lVar5;
      lVar18 = plVar8[0xc];
      lVar5 = plVar8[0xd];
      plVar9[10] = lVar1;
      plVar9[0xb] = lVar2;
      lVar1 = plVar8[0xe];
      lVar2 = plVar8[0xf];
      plVar9[0xc] = lVar18;
      plVar9[0xd] = lVar5;
      plVar9[0xe] = lVar1;
      plVar9[0xf] = lVar2;
      lVar10 = lVar10 + -1;
      plVar14 = plVar8 + 0x10;
      plVar6 = plVar9 + 0x10;
    } while (lVar10 != 0);
    lVar10 = plVar8[0x11];
    lVar18 = plVar8[0x12];
    lVar1 = plVar8[0x13];
    plVar9[0x10] = plVar8[0x10];
    plVar9[0x11] = lVar10;
    lVar2 = plVar8[0x14];
    lVar5 = plVar8[0x15];
    plVar9[0x12] = lVar18;
    plVar9[0x13] = lVar1;
    lVar18 = plVar8[0x16];
    lVar1 = plVar8[0x17];
    lVar10 = plVar8[0x18];
    plVar9[0x14] = lVar2;
    plVar9[0x15] = lVar5;
    plVar9[0x16] = lVar18;
    plVar9[0x17] = lVar1;
    plVar9[0x18] = lVar10;
    plVar14 = local_2d8;
  }
  lVar18 = 2;
  lVar10 = 2;
  plVar6 = param_1 + 0x10;
  do {
    plVar9 = plVar6;
    plVar8 = plVar14;
    lVar1 = plVar8[1];
    lVar2 = plVar8[2];
    lVar5 = plVar8[3];
    *plVar9 = *plVar8;
    plVar9[1] = lVar1;
    lVar1 = plVar8[4];
    lVar3 = plVar8[5];
    plVar9[2] = lVar2;
    plVar9[3] = lVar5;
    lVar2 = plVar8[6];
    lVar5 = plVar8[7];
    plVar9[4] = lVar1;
    plVar9[5] = lVar3;
    lVar1 = plVar8[8];
    lVar3 = plVar8[9];
    plVar9[6] = lVar2;
    plVar9[7] = lVar5;
    lVar2 = plVar8[10];
    lVar5 = plVar8[0xb];
    plVar9[8] = lVar1;
    plVar9[9] = lVar3;
    lVar1 = plVar8[0xc];
    lVar3 = plVar8[0xd];
    plVar9[10] = lVar2;
    plVar9[0xb] = lVar5;
    lVar2 = plVar8[0xe];
    lVar5 = plVar8[0xf];
    plVar9[0xc] = lVar1;
    plVar9[0xd] = lVar3;
    plVar9[0xe] = lVar2;
    plVar9[0xf] = lVar5;
    lVar10 = lVar10 + -1;
    plVar14 = plVar8 + 0x10;
    plVar6 = plVar9 + 0x10;
  } while (lVar10 != 0);
  lVar10 = plVar8[0x10];
  lVar1 = plVar8[0x11];
  uVar15 = 1;
  lVar2 = plVar8[0x12];
  lVar5 = plVar8[0x13];
  *(undefined4 *)(param_1 + 0x39) = 0xffffffff;
  plVar9[0x10] = lVar10;
  plVar9[0x11] = lVar1;
  lVar1 = plVar8[0x14];
  lVar3 = plVar8[0x15];
  plVar9[0x12] = lVar2;
  plVar9[0x13] = lVar5;
  lVar2 = plVar8[0x16];
  lVar5 = plVar8[0x17];
  lVar10 = plVar8[0x18];
  plVar9[0x14] = lVar1;
  plVar9[0x15] = lVar3;
  plVar9[0x16] = lVar2;
  plVar9[0x17] = lVar5;
  plVar9[0x18] = lVar10;
  lVar10 = *(longlong *)(param_2 + 0x38);
  uVar12 = 0;
  if (lVar10 == 0) {
    plVar14 = &local_358;
    local_378 = 0;
    uStack_370 = 1;
    local_368 = 0;
    local_358 = 0x300000003;
    lStack_350 = 0;
    uStack_330 = 0;
    local_348 = 0;
    uStack_346 = 0;
    uStack_344 = 0;
    uStack_340 = 1;
    uStack_33c = 0;
    local_338 = 0;
    uStack_334 = 0;
  }
  else {
    local_388 = *(longlong *)(lVar10 + 0x28);
    uStack_380 = *(undefined8 *)(lVar10 + 0x30);
    local_360 = *(undefined4 *)(lVar10 + 0x50);
    plVar14 = &local_388;
    local_378 = *(undefined8 *)(lVar10 + 0x38);
    uStack_370 = *(undefined8 *)(lVar10 + 0x40);
    local_368 = *(undefined8 *)(lVar10 + 0x48);
  }
  lVar10 = plVar14[1];
  lVar1 = plVar14[2];
  lVar2 = plVar14[3];
  *(longlong *)((longlong)param_1 + 0x1cc) = *plVar14;
  *(longlong *)((longlong)param_1 + 0x1d4) = lVar10;
  lVar10 = plVar14[4];
  lVar5 = plVar14[5];
  *(longlong *)((longlong)param_1 + 0x1dc) = lVar1;
  *(longlong *)((longlong)param_1 + 0x1e4) = lVar2;
  *(longlong *)((longlong)param_1 + 0x1ec) = lVar10;
  *(int *)((longlong)param_1 + 500) = (int)lVar5;
  lVar10 = *(longlong *)(param_2 + 0x40);
  if (lVar10 == 0) {
    local_358 = 0x100000001;
    lStack_350 = 2;
    local_348 = 0xffff;
    uStack_344 = 1;
    uStack_340 = 1;
    uStack_33c = 1;
    local_338 = 8;
    uStack_324 = 0;
    uStack_334 = 1;
    uStack_330 = 1;
    uStack_32c = 1;
    local_328 = 8;
  }
  else {
    local_358 = *(longlong *)(lVar10 + 0x28);
    lStack_350 = *(longlong *)(lVar10 + 0x30);
    uVar4 = *(undefined8 *)(lVar10 + 0x38);
    local_348 = (undefined2)uVar4;
    uStack_346 = (undefined2)((ulonglong)uVar4 >> 0x10);
    uStack_344 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_340 = (undefined4)*(undefined8 *)(lVar10 + 0x40);
    uStack_33c = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x40) >> 0x20);
    local_338 = (undefined4)*(undefined8 *)(lVar10 + 0x48);
    uStack_334 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x48) >> 0x20);
    uStack_330 = (undefined4)*(undefined8 *)(lVar10 + 0x50);
    uStack_32c = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x50) >> 0x20);
    local_328 = (undefined4)*(undefined8 *)(lVar10 + 0x58);
    uStack_324 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x58) >> 0x20);
  }
  param_1[0x3f] = local_358;
  param_1[0x40] = lStack_350;
  param_1[0x41] = CONCAT44(uStack_344,CONCAT22(uStack_346,local_348));
  param_1[0x42] = CONCAT44(uStack_33c,uStack_340);
  param_1[0x43] = CONCAT44(uStack_334,local_338);
  param_1[0x44] = CONCAT44(uStack_32c,uStack_330);
  param_1[0x45] = CONCAT44(uStack_324,local_328);
  if ((*(longlong *)(param_3 + 0x40) == 0) || (*(longlong *)(param_3 + 0x48) == 0)) {
    uVar7 = uVar12;
    switch(*(undefined4 *)(param_2 + 0x4c)) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    default:
      break;
    case 4:
      break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
      uVar7 = 4;
    }
    *(undefined4 *)((longlong)param_1 + 0x244) = uVar7;
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x244) = 4;
  }
  FUN_141a7d480(param_2,param_1 + 0x49,(longlong)param_1 + 0x26c);
  *(uint *)(param_1 + 0x4e) = (uint)*(ushort *)(param_2 + 0xb4);
  if (8 < *(ushort *)(param_2 + 0xb4)) {
    uVar12 = 0xffffffff;
  }
  *(undefined4 *)((longlong)param_1 + 0x274) = uVar12;
  lVar10 = *(longlong *)(param_3 + 0x68);
  param_1[0x46] = *(longlong *)(param_3 + 0x60);
  param_1[0x47] = lVar10;
  lVar10 = *(longlong *)(param_3 + 0x50);
  if (lVar10 != 0) {
    lVar1 = *(longlong *)(lVar10 + 200);
    param_1[0xc] = *(longlong *)(lVar10 + 0xc0);
    param_1[0xd] = lVar1;
    lVar1 = *(longlong *)(lVar10 + 0xd8);
    param_1[0xe] = *(longlong *)(lVar10 + 0xd0);
    param_1[0xf] = lVar1;
  }
  lVar10 = *(longlong *)(param_3 + 0x30);
  if (lVar10 != 0) {
    lVar1 = *(longlong *)(lVar10 + 0x50);
    param_1[2] = *(longlong *)(lVar10 + 0x48);
    param_1[3] = lVar1;
    lVar1 = *(longlong *)(lVar10 + 0x38);
    param_1[0x53] = *(longlong *)(lVar10 + 0x30);
    param_1[0x54] = lVar1;
    *(undefined4 *)(param_1 + 0x55) = *(undefined4 *)(lVar10 + 0x40);
  }
  lVar10 = *(longlong *)(param_3 + 0x38);
  if (lVar10 != 0) {
    lVar1 = *(longlong *)(lVar10 + 0x50);
    param_1[4] = *(longlong *)(lVar10 + 0x48);
    param_1[5] = lVar1;
    lVar1 = *(longlong *)(lVar10 + 0x38);
    param_1[0x5d] = *(longlong *)(lVar10 + 0x30);
    param_1[0x5e] = lVar1;
    *(undefined4 *)(param_1 + 0x5f) = *(undefined4 *)(lVar10 + 0x40);
  }
  lVar10 = *(longlong *)(param_3 + 0x48);
  if (lVar10 != 0) {
    lVar1 = *(longlong *)(lVar10 + 0x50);
    param_1[6] = *(longlong *)(lVar10 + 0x48);
    param_1[7] = lVar1;
    lVar1 = *(longlong *)(lVar10 + 0x38);
    param_1[0x58] = *(longlong *)(lVar10 + 0x30);
    param_1[0x59] = lVar1;
    *(undefined4 *)(param_1 + 0x5a) = *(undefined4 *)(lVar10 + 0x40);
  }
  lVar10 = *(longlong *)(param_3 + 0x40);
  if (lVar10 != 0) {
    lVar1 = *(longlong *)(lVar10 + 0x50);
    param_1[8] = *(longlong *)(lVar10 + 0x48);
    param_1[9] = lVar1;
    uVar4 = *(undefined8 *)(lVar10 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x2ac) = *(undefined8 *)(lVar10 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x2b4) = uVar4;
    *(undefined4 *)((longlong)param_1 + 700) = *(undefined4 *)(lVar10 + 0x40);
  }
  lVar10 = *(longlong *)(param_3 + 0x50);
  if (lVar10 != 0) {
    lVar1 = *(longlong *)(lVar10 + 0x50);
    param_1[10] = *(longlong *)(lVar10 + 0x48);
    param_1[0xb] = lVar1;
    uVar4 = *(undefined8 *)(lVar10 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x2d4) = *(undefined8 *)(lVar10 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x2dc) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = *(undefined4 *)(lVar10 + 0x40);
  }
  if ((DAT_146ab62ec == '\0') || (*(char *)(param_2 + 0x48) == '\0')) {
    uVar15 = 0;
  }
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar15;
  FMD5::FMD5(&local_358);
  uVar17 = uVar13;
  if ((int)param_1[0x47] != 0) {
    do {
      lVar10 = -1;
      plVar14 = (longlong *)(uVar17 * 0x20 + param_1[0x46]);
      do {
        lVar10 = lVar10 + 1;
      } while (*(char *)(*plVar14 + lVar10) != '\0');
      FMD5::Update(&local_358);
      FMD5::Update(&local_358,plVar14 + 1,4);
      FMD5::Update(&local_358,(longlong)plVar14 + 0xc,4);
      FMD5::Update(&local_358,plVar14 + 2,4);
      FMD5::Update(&local_358,(longlong)plVar14 + 0x14,4);
      FMD5::Update(&local_358,plVar14 + 3,4);
      FMD5::Update(&local_358,(longlong)plVar14 + 0x1c,4);
      uVar16 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
    } while (uVar16 < *(uint *)(param_1 + 0x47));
  }
  local_2f8 = 0;
  FMD5::Final(&local_358,local_2f7);
  local_2f8 = 1;
  puVar11 = local_2f7 + 2;
  do {
    uVar13 = uVar13 ^ CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(puVar11[-2],
                                                                                     puVar11[-1]),
                                                                            *puVar11),puVar11[1]),
                                                          puVar11[2]),puVar11[3]),puVar11[4]),
                               puVar11[5]);
    lVar18 = lVar18 + -1;
    puVar11 = puVar11 + 8;
  } while (lVar18 != 0);
  AK::MemoryMgr::StartProfileThreadUsage((long)&local_358);
  param_1[0x60] = uVar13;
  return param_1;
}



// FUNCTION 141a73380 FUN_141a73380 body=180 status=ok
// SIG undefined FUN_141a73380(void)

undefined8 FUN_141a73380(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x18);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      UNLOCK();
    }
    else {
      FAsyncTask<FD3D12PipelineStateWorker>::EnsureCompletion(plVar3,1);
      if (iVar2 != 0) {
        uVar4 = *(undefined8 *)plVar3[5];
        LOCK();
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
        UNLOCK();
        return uVar4;
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
      LOCK();
      piVar1 = (int *)(param_1 + 0x18);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        do {
          FUN_1416b1760(0);
        } while (*(int *)(param_1 + 0x18) != 0);
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,1);
    }
  }
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 141a73440 GetPlaneSliceFromViewFormat body=59 status=ok
// SIG undefined GetPlaneSliceFromViewFormat(void)

undefined4 GetPlaneSliceFromViewFormat(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_141a71f60();
  if (iVar1 == 0x13) {
    if ((param_2 != 0x15) && (param_2 == 0x16)) {
      return 1;
    }
  }
  else if (((iVar1 == 0x2c) && (param_2 != 0x2e)) && (param_2 == 0x2f)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141a73480 GetQuantizedBoundShaderState body=453 status=ok
// SIG undefined GetQuantizedBoundShaderState(void)

undefined4 *
FD3D12RootSignatureManager::GetQuantizedBoundShaderState
          (longlong param_1,undefined4 *param_2,longlong param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  BOOL BVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
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
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  BVar10 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar10 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  iVar4 = *(int *)(param_1 + 0x58);
  puStack_30 = (uint *)(param_1 + 0x40);
  puVar13 = (undefined4 *)0x0;
  local_68 = 0;
  uStack_64 = 1;
  local_58._4_4_ = 0;
  uStack_50 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar15 = puStack_30;
    }
    uVar5 = *puVar15;
    puVar12 = puVar13;
    puVar14 = puVar13;
    while (uVar5 == 0) {
      iVar11 = (int)puVar12;
      uStack_50 = (int)puVar14 + 0x20;
      puVar14 = (undefined4 *)(ulonglong)uStack_50;
      local_68 = iVar11 + 1;
      puVar12 = (undefined4 *)(ulonglong)local_68;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar11) goto LAB_141a7356f;
      uVar5 = puVar15[(longlong)iVar11 + 1];
    }
    uStack_64 = -uVar5 & uVar5;
    iVar11 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    local_58._4_4_ = (uStack_50 - iVar11) + 0x1f;
    if (iVar4 < local_58._4_4_) {
LAB_141a7356f:
      local_58._4_4_ = iVar4;
    }
  }
  uStack_28 = 0xffffffff;
  iStack_24 = local_58._4_4_;
  uStack_20 = uStack_50;
  uStack_1c = iStack_4c;
  uStack_38 = local_68;
  uStack_34 = uStack_64;
  uStack_60 = local_68;
  uStack_5c = uStack_64;
  local_48 = uStack_50;
  uStack_44 = iStack_4c;
  uStack_50 = 0xffffffff;
  iStack_4c = local_58._4_4_;
  bVar6 = local_58._4_4_ < iVar4;
  local_40 = plVar1;
  local_58 = puStack_30;
  if (bVar6) {
    do {
      if (*(longlong *)(*plVar1 + 0x20 + (longlong)iStack_4c * 0x30) == param_3) {
        puVar13 = (undefined4 *)((longlong)iStack_4c * 0x30 + *plVar1);
        break;
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  uVar7 = puVar13[1];
  uVar8 = puVar13[2];
  uVar9 = puVar13[3];
  uVar3 = *(undefined1 *)(puVar13 + 6);
  uVar2 = *(undefined8 *)(puVar13 + 4);
  *param_2 = *puVar13;
  param_2[1] = uVar7;
  param_2[2] = uVar8;
  param_2[3] = uVar9;
  *(undefined8 *)(param_2 + 4) = uVar2;
  *(undefined1 *)(param_2 + 6) = uVar3;
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}



// FUNCTION 141a73650 FUN_141a73650 body=524 status=ok
// SIG undefined FUN_141a73650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_141a73650(longlong param_1,longlong param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 *local_b0;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  undefined **local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined4 local_68;
  ulonglong *local_60;
  undefined *local_58;
  longlong local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if ((*(longlong *)(param_2 + 0x48) != 0) &&
     (cVar2 = FUN_141a576f0(*(longlong *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x50)),
     cVar2 == '\0')) {
    if (param_3 == '\0') {
      return 0;
    }
    QueryPerformanceCounter(&local_98);
    if (*(longlong *)(param_2 + 0x50) == *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x40)) {
      puVar5 = (undefined *)0x0;
      if (DAT_146ab6383 != '\0') {
        cVar2 = FUN_141ed7f80(&DAT_146ab6e78);
        puVar5 = &DAT_146ab6e78;
        if (cVar2 == '\0') {
          puVar5 = (undefined *)0x0;
        }
      }
      FUN_141a55210(**(undefined8 **)(param_1 + 0x5d8),&local_90,0);
      local_90 = &PTR_FUN_144da6378;
      if (local_88 != 0) {
        LOCK();
        piVar1 = (int *)(local_88 + 8);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (local_88 != 0)) {
          FUN_141a4db60(local_88);
          FMemory::operator_delete(local_88,0x110);
        }
      }
      if (puVar5 != (undefined *)0x0) {
        FRHICommandListImmediate::UnStallRHIThread(puVar5);
      }
    }
    FUN_141a7d9d0(param_2 + 0x40);
    QueryPerformanceCounter(&local_a0);
    DAT_146ac3acc = DAT_146ac3acc + (local_a0.s.LowPart - local_98._0_4_);
    _DAT_146ac3aec = _DAT_146ac3aec + 1;
  }
  local_48 = (ulonglong)(uint)(*(int *)(param_2 + 0x20) << 3);
  local_40 = local_48 + 8;
  if (*(int *)(param_2 + 0x34) == 1) {
    lVar4 = *(longlong *)(param_1 + 0x548);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x5c8);
  }
  local_70 = *(longlong **)(lVar4 + 0x18);
  local_60 = &local_48;
  local_58 = &DAT_1469fd1b8;
  local_68 = 0;
  local_50 = 0;
  iVar3 = (**(code **)(*local_70 + 0x40))(local_70,0,&local_48,&local_50);
  if (iVar3 < 0) {
    local_b0 = &local_80;
    local_80 = 0;
    local_78 = 0;
    local_b8 = 0;
    FUN_141a94000(iVar3,"pResource->Map(Subresource, pReadRange, reinterpret_cast<void**>(&pData))",
                  "d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\D3D12RHIPrivate.h",
                  0x51c);
  }
  *(undefined8 *)(param_2 + 0x28) =
       *(undefined8 *)(local_50 + (ulonglong)*(uint *)(param_2 + 0x20) * 8);
  (**(code **)(*local_70 + 0x48))(local_70,local_68,local_58);
  return 1;
}



// FUNCTION 141a73860 FUN_141a73860 body=679 status=ok
// SIG undefined FUN_141a73860(void)

int FUN_141a73860(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined **local_90;
  longlong local_88;
  longlong local_80;
  int local_78;
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_90 = (undefined **)(*(longlong *)(param_2 + 8) + 0x98);
  uVar4 = *(uint *)(*(longlong *)(param_2 + 8) + 0xa0);
  if (uVar4 == 0) {
    return 0;
  }
  uVar12 = 0;
  local_78 = 0;
  local_80 = 0;
  local_74 = 0;
  if (0 < (int)uVar4) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (&local_80,uVar4);
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  lVar14 = local_80;
  iVar11 = local_78;
  if (uVar4 != 0) {
    do {
      plVar13 = (longlong *)(*local_90 + (longlong)(int)uVar12 * 0x10);
      uVar5 = *(undefined4 *)((longlong)plVar13 + 0xc);
      lVar10 = *plVar13;
      local_60 = CONCAT44(local_60._4_4_,uVar5);
      iVar6 = CResourceState::GetSubresourceState(lVar10 + 0x80,uVar5);
      iVar8 = (int)plVar13[1];
      if (iVar6 != iVar8) {
        local_60 = CONCAT44(iVar6,(undefined4)local_60);
        uStack_58 = CONCAT44(uStack_58._4_4_,iVar8);
        uStack_68 = *(undefined8 *)(*plVar13 + 0x18);
        local_78 = iVar11 + 1;
        if (local_74 < local_78) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(&local_80,iVar11);
          lVar14 = local_80;
        }
        puVar2 = (undefined4 *)((longlong)iVar11 * 0x20 + lVar14);
        *puVar2 = (undefined4)local_70;
        puVar2[1] = local_70._4_4_;
        puVar2[2] = (undefined4)uStack_68;
        puVar2[3] = uStack_68._4_4_;
        puVar3 = (undefined8 *)((longlong)iVar11 * 0x20 + 0x10 + lVar14);
        *puVar3 = local_60;
        puVar3[1] = uStack_58;
        iVar11 = local_78;
      }
      uVar9 = FUN_141a55a90(*(longlong *)(param_2 + 8) + 0xa8,*plVar13);
      iVar7 = CResourceState::GetSubresourceState(uVar9,uVar5);
      if (iVar7 != -1) {
        iVar8 = iVar7;
      }
      if (iVar6 != iVar8) {
        CResourceState::SetSubresourceState(lVar10 + 0x80,uVar5,iVar8);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar4);
  }
  if (0 < iVar11) {
    lVar10 = *(longlong *)(param_1 + 0xd0);
    if (lVar10 == 0) {
      lVar10 = FUN_141a75680(param_1 + 0x70);
      *(longlong *)(param_1 + 0xd0) = lVar10;
    }
    uVar9 = FUN_141a75810(param_1,&local_90,lVar10);
    FUN_141a69050(param_3,uVar9);
    local_90 = &PTR_FUN_144da6378;
    if (local_88 != 0) {
      LOCK();
      piVar1 = (int *)(local_88 + 8);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar14 = local_80;
      iVar11 = local_78;
      if ((iVar8 == 1) && (local_88 != 0)) {
        FUN_141a4db60(local_88);
        FMemory::operator_delete(local_88,0x110);
        lVar14 = local_80;
        iVar11 = local_78;
      }
    }
    iVar8 = FUN_140a08210();
    if (iVar8 < iVar11) {
      lVar10 = lVar14;
      iVar6 = iVar11;
      do {
        iVar7 = iVar8;
        if (iVar6 <= iVar8) {
          iVar7 = iVar6;
        }
        plVar13 = *(longlong **)(*(longlong *)(param_3 + 8) + 0x28);
        (**(code **)(*plVar13 + 0xd0))(plVar13,iVar7,lVar10);
        lVar10 = lVar10 + (longlong)iVar8 * 0x20;
        iVar6 = iVar6 - iVar8;
      } while (0 < iVar6);
    }
    else {
      plVar13 = *(longlong **)(*(longlong *)(param_3 + 8) + 0x28);
      (**(code **)(*plVar13 + 0xd0))(plVar13,iVar11,lVar14);
    }
  }
  if (lVar14 != 0) {
    FMemory::Free(lVar14);
  }
  return iVar11;
}



// FUNCTION 141a73b10 GetRootSignature body=393 status=ok
// SIG undefined GetRootSignature(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FD3D12RootSignatureManager::GetRootSignature(longlong *param_1,undefined8 param_2)

{
  BOOL BVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_7b8 [32];
  int local_798 [2];
  longlong *local_790;
  undefined8 local_788;
  longlong **local_780;
  undefined1 local_778 [1800];
  undefined1 local_70 [56];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_7b8;
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  }
  TSet<TTuple<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*>,TDefaultMapHashableKeyFuncs<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 6,local_798,param_2);
  plVar4 = (longlong *)0x0;
  plVar2 = plVar4;
  if (local_798[0] != -1) {
    plVar2 = (longlong *)((longlong)local_798[0] * 0x30 + param_1[6]);
  }
  plVar3 = plVar2 + 4;
  if (plVar2 == (longlong *)0x0) {
    plVar3 = plVar4;
  }
  if (plVar3 == (longlong *)0x0) {
    plVar2 = (longlong *)operator_new(0x68);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = *param_1;
      plVar2[1] = 0;
      *(undefined2 *)((longlong)plVar2 + 0x2a) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x2c) = 0;
      *(undefined1 *)(plVar2 + 6) = 0;
      *(undefined2 *)((longlong)plVar2 + 0x32) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x34) = 0;
      *(undefined1 *)(plVar2 + 7) = 0;
      *(undefined2 *)((longlong)plVar2 + 0x3a) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x3c) = 0;
      *(undefined1 *)(plVar2 + 8) = 0;
      *(undefined2 *)((longlong)plVar2 + 0x42) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x44) = 0;
      *(undefined1 *)(plVar2 + 9) = 0;
      *(undefined2 *)((longlong)plVar2 + 0x4a) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x4c) = 0;
      *(undefined1 *)(plVar2 + 10) = 0;
      *(undefined2 *)((longlong)plVar2 + 0x52) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x54) = 0;
      *(undefined1 *)(plVar2 + 0xb) = 0;
      plVar2[0xc] = 0;
      FUN_141a67890(local_778,param_2,*(undefined4 *)(*plVar2 + 0x34));
      FUN_141a74b50(plVar2,local_70);
      plVar4 = plVar2;
    }
    local_780 = &local_790;
    local_790 = plVar4;
    local_788 = param_2;
    FUN_141a63410(param_1 + 6,local_798,&local_788,0);
    plVar3 = local_790;
  }
  else {
    plVar3 = (longlong *)*plVar3;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return plVar3;
}



// FUNCTION 141a73ca0 FUN_141a73ca0 body=1003 status=ok
// SIG undefined FUN_141a73ca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_141a73ca0(longlong param_1,longlong *param_2,longlong *param_3,int *param_4,int *param_5,
             int *param_6,undefined8 *param_7)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  int *piVar9;
  int *piVar10;
  undefined *puVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 *local_150;
  int *local_148;
  int local_138;
  undefined *local_130;
  undefined **local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  int local_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  int local_68;
  int local_64;
  undefined4 local_60;
  uint local_5c;
  int local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar7 = 0;
  local_128 = *(undefined ***)(**(longlong **)(param_1 + 0x50) + 0xd50);
  puVar11 = local_128[2];
  local_118 = *(longlong *)local_128[0xbb] + 0x460;
  if (param_3 != (longlong *)0x0) {
    local_130 = puVar11;
    lVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    puVar11 = local_130;
  }
  lVar1 = *(longlong *)(lVar7 + 0x28);
  if (*(int *)(lVar1 + 0xb8) == 3) {
    uVar3 = *(undefined8 *)(lVar7 + 0x1c8);
    *param_7 = *(undefined8 *)(lVar7 + 0x1c0);
    param_7[1] = uVar3;
    uVar3 = *(undefined8 *)(lVar7 + 0x1d8);
    param_7[2] = *(undefined8 *)(lVar7 + 0x1d0);
    param_7[3] = uVar3;
    *param_5 = *param_4;
    param_5[1] = param_4[1];
    param_5[2] = param_4[2];
    param_5[3] = param_4[3];
    lVar7 = *(longlong *)(lVar7 + 0x28);
    *param_2 = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    local_5c = param_4[2];
    local_68 = *param_4;
    local_138 = local_5c - local_68;
    local_58 = param_4[3];
    local_64 = param_4[1];
    iVar13 = local_58 - local_64;
    local_60 = 0;
    local_54 = 1;
    local_130 = (undefined *)0x0;
    local_158 = (ulonglong)local_158._4_4_ << 0x20;
    uVar12 = (&DAT_1464ca1c4)[(longlong)*(int *)((longlong)param_3 + 0x3c) * 10] *
             *(int *)(lVar1 + 0x40) + 0xffU & 0xffffff00;
    iVar6 = FUN_141a6e3f0(puVar11,3,*(int *)(lVar1 + 0x48) * uVar12,&local_130);
    if (iVar6 < 0) {
      local_150 = &local_110;
      local_158 = 0;
      local_110 = 0;
      local_108 = 0;
      FUN_141a94000(iVar6,
                    "Adapter->CreateBuffer(D3D12_HEAP_TYPE_READBACK, MipBytesAligned, TempTexture2D.GetInitReference())"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RenderTarget.cpp"
                    ,0x2c4);
    }
    lVar5 = local_118;
    piVar9 = (int *)0x0;
    *param_5 = DAT_1468b5ca0;
    param_5[1] = DAT_1468b5ca4;
    param_5[2] = local_138;
    param_5[3] = iVar13;
    piVar10 = piVar9;
    if ((*(byte *)(lVar7 + 0x1f8) & 1) != 0) {
      iVar6 = *param_6;
      if (iVar6 == 1) {
        piVar10 = (int *)0x1;
      }
      else if (iVar6 == 2) {
        piVar10 = (int *)0x2;
      }
      else if (iVar6 == 3) {
        piVar10 = (int *)0x3;
      }
      else if (iVar6 == 4) {
        piVar10 = (int *)&DAT_00000004;
      }
      else {
        piVar10 = (int *)0x0;
        if (iVar6 == 5) {
          piVar10 = (int *)0x5;
        }
      }
    }
    if ((((local_68 != 0) || (local_64 != 0)) ||
        (uVar8 = *(ulonglong *)(lVar1 + 0x40), local_5c != uVar8)) ||
       (iStack_f8 = *(int *)(lVar1 + 0x48), local_58 != iStack_f8)) {
      iStack_f8 = *(int *)(lVar1 + 0x48);
      piVar9 = &local_68;
      uVar8 = (ulonglong)*(uint *)(lVar1 + 0x40);
    }
    local_100 = *(undefined4 *)(lVar1 + 0x50);
    uStack_fc = (undefined4)uVar8;
    local_e8 = 0;
    uStack_cc = 0;
    uStack_f4 = 1;
    local_c8 = *(undefined8 *)(local_130 + 0x18);
    uStack_e0 = CONCAT44(uStack_fc,local_100);
    uStack_d8 = CONCAT44(1,iStack_f8);
    local_c0 = 1;
    local_b8 = 0;
    uStack_a4 = 1;
    uStack_9c = 0;
    local_98 = *(undefined8 *)(*(longlong *)(lVar7 + 0x28) + 0x18);
    local_90 = 0;
    local_88 = SUB84(piVar10,0);
    uStack_d0 = uVar12;
    uStack_b0 = uStack_e0;
    local_a8 = iStack_f8;
    uStack_a0 = uVar12;
    FUN_141a60fb0(local_118,*(undefined8 *)(lVar7 + 0x28),0x800);
    lVar7 = *(longlong *)(lVar5 + 8);
    if (*(int *)(lVar7 + 0x100) != 0) {
      (**(code **)(**(longlong **)(lVar7 + 0x28) + 0xd0))
                (*(longlong **)(lVar7 + 0x28),*(int *)(lVar7 + 0x100),*(undefined8 *)(lVar7 + 0xf8))
      ;
      *(undefined4 *)(lVar7 + 0x100) = 0;
      lVar7 = *(longlong *)(lVar5 + 8);
    }
    if (*(int *)(lVar7 + 0x100) != 0) {
      (**(code **)(**(longlong **)(lVar7 + 0x28) + 0xd0))
                (*(longlong **)(lVar7 + 0x28),*(int *)(lVar7 + 0x100),*(undefined8 *)(lVar7 + 0xf8))
      ;
      *(undefined4 *)(lVar7 + 0x100) = 0;
    }
    ppuVar4 = local_128;
    local_150 = &local_98;
    local_158 = local_158 & 0xffffffff00000000;
    *(int *)(*(longlong *)local_128[0xbb] + 0x2c54) =
         *(int *)(*(longlong *)local_128[0xbb] + 0x2c54) + 1;
    plVar2 = *(longlong **)(*(longlong *)(lVar5 + 8) + 0x28);
    local_148 = piVar9;
    (**(code **)(*plVar2 + 0x80))(plVar2,&local_c8,0,0);
    *param_7 = local_e8;
    param_7[1] = uStack_e0;
    *(undefined4 *)(param_7 + 2) = (undefined4)uStack_d8;
    *(undefined4 *)((longlong)param_7 + 0x14) = uStack_d8._4_4_;
    *(uint *)(param_7 + 3) = uStack_d0;
    *(undefined4 *)((longlong)param_7 + 0x1c) = uStack_cc;
    FUN_141a55210(*(undefined8 *)ppuVar4[0xbb],&local_128,1);
    local_128 = &PTR_FUN_144da6378;
    if (local_120 != 0) {
      LOCK();
      piVar9 = (int *)(local_120 + 8);
      iVar6 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if ((iVar6 == 1) && (local_120 != 0)) {
        FUN_141a4db60(local_120);
        FMemory::operator_delete(local_120,0x110);
      }
    }
    *param_2 = (longlong)local_130;
  }
  return param_2;
}



// FUNCTION 141a74090 FUN_141a74090 body=1655 status=ok
// SIG undefined FUN_141a74090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_141a74090(longlong param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined *puVar15;
  int iVar16;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined8 *local_210;
  longlong local_208;
  LARGE_INTEGER local_200;
  LARGE_INTEGER local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined **local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  longlong *local_180;
  undefined4 local_178;
  ulonglong *local_170;
  undefined *local_168;
  longlong local_160;
  longlong *local_158;
  undefined4 local_150;
  ulonglong *local_148;
  undefined *local_140;
  longlong local_138;
  longlong *local_130;
  undefined4 local_128;
  longlong *local_120;
  undefined *local_118;
  longlong local_110;
  longlong *local_108;
  undefined4 local_100;
  ulonglong *local_f8;
  undefined *local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  ulonglong *local_d0;
  undefined *local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  undefined *local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_208 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0xd50);
  if (DAT_146ab6339 != '\0') {
    iVar12 = *(int *)(param_1 + 0x4c);
    if ((param_2 == '\0') && (iVar16 = 1, 1 < *(int *)(param_1 + 0x50))) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x68);
        uVar6 = iVar12 * 2;
        if (((*(longlong *)(lVar4 + 0x20 + (longlong)(int)uVar6 * 0x18) == 0) ||
            (cVar8 = FUN_141a576f0(), cVar8 != '\0')) &&
           ((*(longlong *)(lVar4 + (longlong)(int)uVar6 * 0x18 + 8) == 0 ||
            (cVar8 = FUN_141a576f0(), cVar8 != '\0')))) {
          if (*(char *)(param_1 + 0x54) == '\0') {
            local_68 = (ulonglong)(uVar6 + 2) << 3;
            local_130 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x18);
            local_120 = &local_70;
            local_118 = &DAT_1469fd1d0;
            local_128 = 0;
            local_110 = 0;
            local_70 = (ulonglong)uVar6 * 8;
            iVar9 = (**(code **)(*local_130 + 0x40))(local_130,0,&local_70,&local_110);
            if (iVar9 < 0) {
              local_210 = &local_1d0;
              local_1d0 = 0;
              local_1c8 = 0;
              local_218 = 0;
              FUN_141a94000(iVar9,
                            "pResource->Map(Subresource, pReadRange, reinterpret_cast<void**>(&pData))"
                            ,
                            "d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\D3D12RHIPrivate.h"
                            ,0x51c);
            }
            uVar14 = *(ulonglong *)(local_110 + (ulonglong)uVar6 * 8);
            uVar13 = *(ulonglong *)(local_110 + (ulonglong)(uVar6 + 1) * 8);
            plVar10 = local_130;
            puVar15 = local_118;
            uVar3 = local_128;
          }
          else {
            local_90 = (ulonglong)(uint)(*(int *)(param_1 + 0x58) << 3);
            local_88 = local_90 + 8;
            local_170 = &local_90;
            local_180 = *(longlong **)(*(longlong *)(DAT_1469fd220 + 0x70) + 0x18);
            local_178 = 0;
            local_168 = &DAT_1469fd1d0;
            local_160 = 0;
            iVar9 = (**(code **)(*local_180 + 0x40))(local_180,0,&local_90,&local_160);
            if (iVar9 < 0) {
              local_210 = &local_1f0;
              local_1f0 = 0;
              local_1e8 = 0;
              local_218 = 0;
              FUN_141a94000(iVar9,
                            "pResource->Map(Subresource, pReadRange, reinterpret_cast<void**>(&pData))"
                            ,
                            "d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\D3D12RHIPrivate.h"
                            ,0x51c);
            }
            uVar14 = *(ulonglong *)(local_160 + (ulonglong)*(uint *)(param_1 + 0x58) * 8);
            (**(code **)(*local_180 + 0x48))(local_180,local_178,local_168);
            local_80 = (ulonglong)(uint)(*(int *)(param_1 + 0x5c) << 3);
            local_78 = local_80 + 8;
            local_148 = &local_80;
            local_158 = *(longlong **)(*(longlong *)(DAT_1469fd220 + 0x70) + 0x18);
            local_150 = 0;
            local_140 = &DAT_1469fd1d0;
            local_138 = 0;
            iVar9 = (**(code **)(*local_158 + 0x40))(local_158,0,&local_80,&local_138);
            if (iVar9 < 0) {
              local_210 = &local_1e0;
              local_1e0 = 0;
              local_1d8 = 0;
              local_218 = 0;
              FUN_141a94000(iVar9,
                            "pResource->Map(Subresource, pReadRange, reinterpret_cast<void**>(&pData))"
                            ,
                            "d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\D3D12RHIPrivate.h"
                            ,0x51c);
            }
            uVar13 = *(ulonglong *)(local_138 + (ulonglong)*(uint *)(param_1 + 0x5c) * 8);
            plVar10 = local_158;
            puVar15 = local_140;
            uVar3 = local_150;
          }
          (**(code **)(*plVar10 + 0x48))(plVar10,uVar3,puVar15);
          if (uVar14 < uVar13) {
            return uVar13 - uVar14;
          }
        }
        iVar16 = iVar16 + 1;
        iVar12 = (*(int *)(param_1 + 0x48) + -1 + iVar12) % *(int *)(param_1 + 0x48);
      } while (iVar16 < *(int *)(param_1 + 0x50));
    }
    if ((0 < *(int *)(param_1 + 0x50)) || (param_2 != '\0')) {
      if ((*(int *)(param_1 + 0x50) == *(int *)(param_1 + 0x48)) || (param_2 != '\0')) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      QueryPerformanceCounter(&local_1f8);
      uVar6 = iVar12 * 2;
      if (bVar7) {
        lVar5 = *(longlong *)(param_1 + 0x68);
        lVar11 = (longlong)(int)uVar6 + 1;
        lVar4 = lVar5 + (longlong)(int)uVar6 * 0x18;
        lVar2 = lVar5 + lVar11 * 0x18;
        if ((*(longlong *)(lVar2 + 0x10) ==
             *(longlong *)(*(longlong *)(lVar5 + 8 + lVar11 * 0x18) + 0x40)) ||
           (*(longlong *)(lVar4 + 0x10) == *(longlong *)(*(longlong *)(lVar4 + 8) + 0x40))) {
          FUN_141a55210(**(undefined8 **)(local_208 + 0x5d8),&local_1c0,0);
          local_1c0 = &PTR_FUN_144da6378;
          if (local_1b8 != 0) {
            LOCK();
            piVar1 = (int *)(local_1b8 + 8);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar12 == 1) && (local_1b8 != 0)) {
              FUN_141a4db60(local_1b8);
              FMemory::operator_delete(local_1b8);
            }
          }
        }
        FUN_141a7d9d0(lVar4);
        FUN_141a7d9d0(lVar2);
      }
      QueryPerformanceCounter(&local_200);
      DAT_146ac3acc = DAT_146ac3acc + (local_200.s.LowPart - local_1f8._0_4_);
      _DAT_146ac3aec = _DAT_146ac3aec + 1;
      if (*(char *)(param_1 + 0x54) == '\0') {
        local_38 = (ulonglong)(uVar6 + 2) << 3;
        local_b8 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x18);
        local_a8 = &local_40;
        local_a0 = &DAT_1469fd1d0;
        local_b0 = 0;
        local_98 = 0;
        local_40 = (ulonglong)uVar6 * 8;
        iVar12 = (**(code **)(*local_b8 + 0x40))(local_b8,0,&local_40,&local_98);
        if (iVar12 < 0) {
          local_210 = &local_190;
          local_190 = 0;
          local_188 = 0;
          local_218 = 0;
          FUN_141a94000(iVar12,
                        "pResource->Map(Subresource, pReadRange, reinterpret_cast<void**>(&pData))",
                        "d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\D3D12RHIPrivate.h"
                        ,0x51c);
        }
        uVar14 = *(ulonglong *)(local_98 + (ulonglong)uVar6 * 8);
        uVar13 = *(ulonglong *)(local_98 + (ulonglong)(uVar6 + 1) * 8);
        (**(code **)(*local_b8 + 0x48))(local_b8,local_b0,local_a0);
      }
      else {
        local_60 = (ulonglong)(uint)(*(int *)(param_1 + 0x58) << 3);
        local_58 = local_60 + 8;
        local_f8 = &local_60;
        local_108 = *(longlong **)(*(longlong *)(DAT_1469fd220 + 0x70) + 0x18);
        local_100 = 0;
        local_f0 = &DAT_1469fd1d0;
        local_e8 = 0;
        iVar12 = (**(code **)(*local_108 + 0x40))(local_108,0,&local_60,&local_e8);
        if (iVar12 < 0) {
          local_210 = &local_1b0;
          local_1b0 = 0;
          local_1a8 = 0;
          local_218 = 0;
          FUN_141a94000(iVar12,
                        "pResource->Map(Subresource, pReadRange, reinterpret_cast<void**>(&pData))",
                        "d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\D3D12RHIPrivate.h"
                        ,0x51c);
        }
        uVar14 = *(ulonglong *)(local_e8 + (ulonglong)*(uint *)(param_1 + 0x58) * 8);
        (**(code **)(*local_108 + 0x48))(local_108,local_100,local_f0);
        local_50 = (ulonglong)(uint)(*(int *)(param_1 + 0x5c) << 3);
        local_48 = local_50 + 8;
        local_d0 = &local_50;
        local_e0 = *(longlong **)(*(longlong *)(DAT_1469fd220 + 0x70) + 0x18);
        local_d8 = 0;
        local_c8 = &DAT_1469fd1d0;
        local_c0 = 0;
        iVar12 = (**(code **)(*local_e0 + 0x40))(local_e0,0,&local_50,&local_c0);
        if (iVar12 < 0) {
          local_210 = &local_1a0;
          local_1a0 = 0;
          local_198 = 0;
          local_218 = 0;
          FUN_141a94000(iVar12,
                        "pResource->Map(Subresource, pReadRange, reinterpret_cast<void**>(&pData))",
                        "d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\D3D12RHIPrivate.h"
                        ,0x51c);
        }
        uVar13 = *(ulonglong *)(local_c0 + (ulonglong)*(uint *)(param_1 + 0x5c) * 8);
        (**(code **)(*local_e0 + 0x48))(local_e0,local_d8,local_c8);
      }
      if (uVar14 < uVar13) {
        return uVar13 - uVar14;
      }
    }
  }
  return 0;
}



// FUNCTION 141a74710 FUN_141a74710 body=122 status=ok
// SIG undefined FUN_141a74710(void)

void FUN_141a74710(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  plVar2 = (longlong *)FUN_141a55960(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xd50));
  iVar1 = (**(code **)(*plVar2 + 0x78))
                    (plVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x10),param_3);
  if (iVar1 < 0) {
    local_18 = 0;
    local_10 = 0;
    FUN_141a94000(iVar1,"CommandQueue->Wait(FenceCore->GetFence(), FenceValue)",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DirectCommandListManager.cpp"
                  ,0xdc,0,&local_18);
  }
  return;
}



// FUNCTION 141a74790 FUN_141a74790 body=240 status=ok
// SIG undefined FUN_141a74790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141a74790(undefined8 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_97 [31];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  FMD5::FMD5(local_78);
  FMD5::Update(local_78,param_1,param_2);
  local_98 = 0;
  FMD5::Final(local_78,local_97);
  uVar2 = 0;
  local_98 = 1;
  lVar3 = 2;
  puVar1 = local_97 + 2;
  do {
    uVar2 = uVar2 ^ CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(puVar1[-2],
                                                                                   puVar1[-1]),
                                                                          *puVar1),puVar1[1]),
                                                        puVar1[2]),puVar1[3]),puVar1[4]),puVar1[5]);
    lVar3 = lVar3 + -1;
    puVar1 = puVar1 + 8;
  } while (lVar3 != 0);
  AK::MemoryMgr::StartProfileThreadUsage((long)local_78);
  return uVar2;
}



// FUNCTION 141a74880 HashPSODesc body=138 status=ok
// SIG undefined HashPSODesc(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FD3D12PipelineStateCache::HashPSODesc(longlong param_1)

{
  undefined1 auStack_b8 [56];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  local_70 = 0;
  uStack_48 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = 0;
  local_60 = *(undefined8 *)(param_1 + 0x20);
  local_80 = 0;
  local_50 = 0;
  local_30 = *(undefined4 *)(param_1 + 0x50);
  uStack_2c = *(undefined4 *)(param_1 + 0x54);
  uStack_58 = 0;
  local_40 = *(undefined4 *)(param_1 + 0x40);
  uStack_3c = *(undefined4 *)(param_1 + 0x44);
  uStack_38 = *(undefined4 *)(param_1 + 0x48);
  uStack_34 = *(undefined4 *)(param_1 + 0x4c);
  uStack_28 = 0;
  FUN_141a74790(&local_80,0x60);
  return;
}



// FUNCTION 141a74910 FUN_141a74910 body=567 status=ok
// SIG undefined FUN_141a74910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a74910(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined8 *local_110;
  longlong *local_108;
  undefined4 local_f8 [2];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  ulonglong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  plVar6 = (longlong *)mu::Mesh::GetFaceBuffers(*param_1);
  plVar2 = (longlong *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  iVar5 = (**(code **)(*plVar6 + 0x138))
                    (plVar6,(longlong)param_1 + 0x54,&DAT_144daafa8,param_1 + 0xd);
  if (iVar5 < 0) {
    local_110 = &local_98;
    local_98 = 0;
    local_90 = 0;
    local_118 = (undefined4 *)0x0;
    FUN_141a94000(iVar5,
                  "GetParentDevice()->GetDevice()->CreateQueryHeap(&QueryHeapDesc, IID_PPV_ARGS(QueryHeap.GetInitReference()))"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.cpp",0x200
                 );
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1[0xd]);
  plVar2 = param_1 + 0xe;
  puVar3 = (undefined8 *)*plVar2;
  uStack_bc = 0x10001;
  uStack_b8 = 0;
  uStack_ac = 1;
  uStack_a8 = 0;
  uVar4 = *(undefined8 *)(*param_1 + 0x10);
  local_c8 = (ulonglong)(uint)((int)param_1[0xb] * (int)param_1[10]);
  local_f0 = 3;
  uStack_e8 = 0x100000000;
  local_d8 = 1;
  uStack_d0 = 0;
  uStack_c0 = 1;
  uStack_b4 = 1;
  local_68 = 1;
  local_f8[0] = 0x400;
  *plVar2 = 0;
  uStack_48 = 0x1000100000001;
  local_78 = 3;
  uStack_70 = 0x100000000;
  local_60 = CONCAT44(uStack_d4,1);
  local_30 = (ulonglong)uStack_a4 << 0x20;
  uStack_58 = 0;
  local_40 = 0;
  uStack_3c = 1;
  uStack_38 = 0;
  uStack_34 = 1;
  local_50 = local_c8;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*puVar3)();
    }
  }
  local_118 = local_f8;
  local_110 = (undefined8 *)0x0;
  local_108 = plVar2;
  iVar5 = FUN_141a6e5e0(uVar4,&local_60,&local_78,0xc);
  if (iVar5 < 0) {
    local_110 = &local_88;
    local_88 = 0;
    local_80 = 0;
    local_118 = (undefined4 *)0x0;
    FUN_141a94000(iVar5,
                  "Adapter->CreateCommittedResource( ResultBufferDesc, ResultBufferHeapProperties, ED3D12AllocatorID::BufferStandaloneReadback, D3D12_RESOURCE_STATE_COPY_DEST, nullptr, ResultBuffer.GetInitReference())"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.cpp",0x217
                 );
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)*plVar2);
  iVar5 = (**(code **)(**(longlong **)(*plVar2 + 0x18) + 0x40))
                    (*(longlong **)(*plVar2 + 0x18),0,0,param_1 + 0xf);
  if (iVar5 < 0) {
    local_110 = &local_f0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_118 = (undefined4 *)0x0;
    FUN_141a94000(iVar5,"ResultBuffer->GetResource()->Map(0, nullptr, &pResultData)",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.cpp",0x223)
    ;
  }
  FUN_141a7d170(param_1);
  return;
}



// FUNCTION 141a74b50 FUN_141a74b50 body=571 status=ok
// SIG undefined FUN_141a74b50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a74b50(longlong *param_1,int *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_1b8 [32];
  undefined *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong local_180 [3];
  undefined1 local_168 [256];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  plVar2 = (longlong *)param_1[0xc];
  plVar3 = *(longlong **)(*param_1 + 0x18);
  uVar1 = *(undefined4 *)(*param_1 + 0x38);
  local_188 = (longlong *)0x0;
  param_1[0xc] = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  iVar6 = D3DX12SerializeVersionedRootSignature(param_2,uVar1,param_1 + 0xc,&local_188);
  if (local_188 != (longlong *)0x0) {
    uVar7 = (**(code **)(*local_188 + 0x18))();
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_168,uVar7);
    LowLevelFatalErrorHandler
              ("Unknown",0x11b,L"D3DX12SerializeVersionedRootSignature failed with error %s",
               local_60);
    if (local_68 != 0) {
      FMemory::Free();
    }
    uVar7 = (**(code **)(*local_188 + 0x18))();
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_168,uVar7);
    local_198 = (undefined *)local_60;
    FDebug::AssertFailed
              (&DAT_144da73d6,"Unknown",0x11b,
               L"D3DX12SerializeVersionedRootSignature failed with error %s");
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  if (iVar6 < 0) {
    local_190 = local_180;
    local_180[0] = 0;
    local_198 = (undefined *)0x0;
    local_180[1] = 0;
    FUN_141a94000(iVar6,"SerializeHR",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                  ,0x11d);
  }
  plVar2 = (longlong *)param_1[1];
  plVar4 = (longlong *)param_1[0xc];
  param_1[1] = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  lVar5 = *plVar3;
  uVar7 = (**(code **)(*plVar4 + 0x20))(plVar4);
  uVar8 = (**(code **)(*plVar4 + 0x18))(plVar4);
  local_198 = &DAT_144daaff0;
  local_190 = param_1 + 1;
  iVar6 = (**(code **)(lVar5 + 0x80))(plVar3,0,uVar8,uVar7);
  if (iVar6 < 0) {
    local_190 = local_180;
    local_180[0] = 0;
    local_180[1] = 0;
    local_198 = (undefined *)0x0;
    FUN_141a94000(iVar6,
                  "Device->CreateRootSignature(0, RootSignatureBlob->GetBufferPointer(), RootSignatureBlob->GetBufferSize(), IID_PPV_ARGS(RootSignature.GetInitReference()))"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                  ,0x124);
  }
  if (*param_2 == 1) {
    FUN_141a63970(param_1,param_2 + 2);
  }
  else if (*param_2 == 2) {
    FUN_141a63970(param_1,param_2 + 2);
  }
  if (local_188 != (longlong *)0x0) {
    (**(code **)(*local_188 + 0x10))();
  }
  return;
}



// FUNCTION 141a74d90 FUN_141a74d90 body=135 status=ok
// SIG undefined FUN_141a74d90(void)

void FUN_141a74d90(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  param_1[2] = param_2;
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x34);
  FUN_141a55bf0(param_1 + 0x3c4,param_2,param_3,DAT_1464c1190,0x800,param_5);
  if (param_4 != 0) {
    _guard_xfg_dispatch_icall_nop(param_1 + 7,(void *)(param_4 + 0x38),0x1de8);
    FUN_141a70620(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141a74e13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



// FUNCTION 141a74e20 FUN_141a74e20 body=531 status=ok
// SIG undefined FUN_141a74e20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a74e20(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 *local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar7 = *(longlong *)(param_1 + 0x40);
  plVar2 = *(longlong **)(lVar7 + 0x18);
  if (DAT_146ab6338 == '\0') {
    FUN_141a6b810(lVar7);
    DAT_146ab6339 = DAT_146ab6340 != 0;
    DAT_146ab6338 = '\x01';
  }
  puVar8 = (undefined8 *)0x0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  if (DAT_146ab6339 != '\0') {
    if (DAT_1469fd220 == 0) {
      local_3c = *(int *)(param_1 + 0x48) * 2;
      local_38 = 0;
      local_40 = 1;
      puVar6 = (undefined8 *)operator_new(0x10);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = *(undefined8 *)(lVar7 + 0xd50);
        puVar6[1] = 0;
        puVar8 = puVar6;
      }
      plVar3 = (longlong *)puVar8[1];
      puVar8[1] = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      iVar4 = (**(code **)(*plVar2 + 0x138))(plVar2,&local_40,&DAT_144daafa8,puVar8 + 1);
      if (iVar4 < 0) {
        local_60 = &local_50;
        local_50 = 0;
        local_48 = 0;
        local_68 = 0;
        FUN_141a94000(iVar4,
                      "D3DDevice->CreateQueryHeap(&QueryHeapDesc, IID_PPV_ARGS(NewHeap->Heap.GetInitReference()))"
                      ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.cpp",
                      0x2ab);
      }
      AK::MemoryMgr::StartProfileThreadUsage((long)puVar8[1]);
      *(undefined8 **)(param_1 + 0x60) = puVar8;
      puVar8 = *(undefined8 **)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0;
      iVar4 = local_3c * 8;
      if (puVar8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar8 + 1);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*puVar8)(puVar8,1);
        }
      }
      local_68 = local_68 & 0xffffffff00000000;
      FUN_141a6e3f0(lVar7,3,iVar4,param_1 + 0x78);
      AK::MemoryMgr::StartProfileThreadUsage((long)*(undefined8 *)(param_1 + 0x78));
      iVar4 = *(int *)(param_1 + 0x70);
      lVar7 = (longlong)local_3c;
      iVar5 = iVar4 + local_3c;
      *(int *)(param_1 + 0x70) = iVar5;
      if (*(int *)(param_1 + 0x74) < iVar5) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0x68);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar4 * 0x18),0,lVar7 * 0x18);
    }
    else {
      *(undefined1 *)(param_1 + 0x54) = 1;
      TArray<FNavPoly,TSizedDefaultAllocator<32>_>::AddZeroed
                (param_1 + 0x68,*(int *)(param_1 + 0x48) * 2);
    }
  }
  return;
}



// FUNCTION 141a75040 FUN_141a75040 body=216 status=ok
// SIG undefined FUN_141a75040(void)

void FUN_141a75040(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 local_res10 [2];
  
  lVar5 = DAT_1469fd220;
  uVar6 = 0;
  if (DAT_1469fd220 != 0) {
    if (*(longlong *)(DAT_1469fd220 + 0x78) != 0) {
      plVar3 = *(longlong **)(*(longlong *)(DAT_1469fd220 + 0x70) + 0x18);
      (**(code **)(*plVar3 + 0x48))(plVar3,0,0);
      *(undefined8 *)(lVar5 + 0x78) = 0;
    }
    plVar3 = *(longlong **)(lVar5 + 0x68);
    *(undefined8 *)(lVar5 + 0x68) = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    puVar4 = *(undefined8 **)(lVar5 + 0x70);
    *(undefined8 *)(lVar5 + 0x70) = 0;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    DAT_1469fd220 = 0;
  }
  lVar5 = operator_new(0x80);
  if (lVar5 != 0) {
    local_res10[0] = 1;
    uVar6 = FUN_141a67510(lVar5,*(undefined8 *)(param_1 + 0xd50),local_res10,DAT_1464c118c,5);
  }
  DAT_1469fd220 = uVar6;
  FUN_141a74910(uVar6);
  return;
}



// FUNCTION 141a75120 FUN_141a75120 body=520 status=ok
// SIG undefined FUN_141a75120(void)

void FUN_141a75120(longlong param_1,int *param_2,longlong param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  ushort uVar11;
  int iVar12;
  byte bVar13;
  ushort uVar14;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(param_1 + 0x84) = param_4;
  if (*(char *)(*(longlong *)(param_3 + 0x10) + 0xb5) == '\0') {
LAB_141a75182:
    uVar7 = 0;
  }
  else {
    iVar12 = *param_2;
    iVar8 = FUN_141a71f60(*(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x50));
    if (iVar8 == 0x13) {
      iVar12 = iVar12 + -0x15;
LAB_141a75177:
      if ((iVar12 != 0) && (iVar12 == 1)) goto LAB_141a75182;
    }
    else if (iVar8 == 0x2c) {
      iVar12 = iVar12 + -0x2e;
      goto LAB_141a75177;
    }
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0x80) = uVar7;
  if (*(char *)(*(longlong *)(param_3 + 0x10) + 0xb5) != '\0') {
    iVar12 = *param_2;
    iVar8 = FUN_141a71f60(*(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x50));
    if (iVar8 == 0x13) {
      if ((iVar12 != 0x15) && (iVar12 == 0x16)) goto LAB_141a7525c;
    }
    else if ((iVar8 == 0x2c) && ((iVar12 != 0x2e && (iVar12 == 0x2f)))) {
LAB_141a7525c:
      uVar7 = 1;
      goto LAB_141a751bf;
    }
  }
  uVar7 = 0;
LAB_141a751bf:
  *(undefined1 *)(param_1 + 0x81) = uVar7;
  *(longlong *)(param_1 + 0x40) = param_3;
  uVar4 = *(undefined8 *)(param_2 + 2);
  lVar3 = *(longlong *)(param_3 + 0x10);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  iVar12 = param_2[5];
  iVar8 = param_2[6];
  iVar6 = param_2[7];
  *(int *)(param_1 + 0x68) = param_2[4];
  *(int *)(param_1 + 0x6c) = iVar12;
  *(int *)(param_1 + 0x70) = iVar8;
  *(int *)(param_1 + 0x74) = iVar6;
  uVar14 = 1;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 8);
  if (*(int *)(lVar3 + 0x30) != 4) {
    uVar14 = *(ushort *)(lVar3 + 0x4c);
  }
  uVar2 = *(undefined4 *)(lVar3 + 0x50);
  FUN_141a65c30(&local_28,param_1 + 0x58,uVar2);
  bVar1 = *(byte *)(lVar3 + 0x4e);
  uStack_20 = CONCAT31(uStack_20._1_3_,bVar1);
  uStack_20 = CONCAT22(uVar14,(undefined2)uStack_20);
  iVar12 = FUN_141a71f60(uVar2);
  if ((iVar12 == 0x13) || (bVar13 = 1, iVar12 == 0x2c)) {
    bVar13 = 2;
  }
  if (*(int *)(param_1 + 0x5c) == 8) {
    local_28 = CONCAT22(1,(short)local_28);
    uVar11 = 1;
  }
  else {
    uVar11 = local_28._2_2_;
  }
  uStack_1c = CONCAT22(uVar11 - (short)local_28,CONCAT11((char)uStack_24,bVar13));
  if (((((char)uStack_24 == '\0') && (uStack_24._1_1_ == bVar1)) && ((short)local_28 == 0)) &&
     (((uVar11 == uVar14 && (uStack_24._2_1_ == '\0')) &&
      ((uStack_24._3_1_ == bVar13 &&
       (uVar10 = (uint)uStack_24._3_1_ * (uint)uVar14 * (uint)bVar1, uVar10 < 0xff)))))) {
    local_28 = 0x10000;
    uStack_24._0_2_ = (ushort)(byte)uVar10 << 8;
    uStack_24 = CONCAT22(0x100,(short)uStack_24);
  }
  *(undefined4 *)(param_1 + 0x48) = local_28;
  *(undefined4 *)(param_1 + 0x4c) = uStack_24;
  *(undefined4 *)(param_1 + 0x50) = uStack_20;
  *(undefined4 *)(param_1 + 0x54) = uStack_1c;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x18);
  uVar9 = mu::Mesh::GetFaceBuffers(*(undefined8 *)(param_1 + 0x20));
  FUN_1404c2138(uVar9,uVar5,param_1 + 0x58,uVar4);
  return;
}



// FUNCTION 141a75330 FUN_141a75330 body=225 status=ok
// SIG undefined FUN_141a75330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a75330(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int iStack_20;
  int iStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (param_2 == 0) {
    lVar2 = 0;
    iStack_20 = 0;
  }
  else {
    lVar2 = (ulonglong)param_4 + *(longlong *)(param_2 + 0x40);
    iStack_20 = *(int *)(param_2 + 0x60) - param_4;
  }
  if (((lVar2 != *(longlong *)(param_1 + 0x520)) || (iStack_20 != *(int *)(param_1 + 0x528))) ||
     (param_3 != *(int *)(param_1 + 0x52c))) {
    *(undefined1 *)(param_1 + 0x21) = 1;
    *(longlong *)(param_1 + 0x530) = param_2;
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x520) = 0;
      *(undefined8 *)(param_1 + 0x528) = 0;
      *(undefined8 *)(param_1 + 0x530) = 0;
      return;
    }
    local_28._0_4_ = (undefined4)lVar2;
    local_28._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
    *(undefined4 *)(param_1 + 0x520) = (undefined4)local_28;
    *(undefined4 *)(param_1 + 0x524) = local_28._4_4_;
    *(int *)(param_1 + 0x528) = iStack_20;
    *(int *)(param_1 + 0x52c) = param_3;
  }
  if (((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x10), lVar1 != 0)) &&
     (*(char *)(lVar1 + 0xb4) != '\0')) {
    local_28 = lVar2;
    iStack_1c = param_3;
    FUN_141a60fb0(*(longlong *)(param_1 + 0x18) + 0x460,lVar1,2,0xffffffff);
    return;
  }
  return;
}



// FUNCTION 141a75420 FUN_141a75420 body=293 status=ok
// SIG undefined FUN_141a75420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a75420(longlong param_1,longlong param_2,uint param_3,int param_4,uint param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int iStack_30;
  int iStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  uVar5 = (ulonglong)param_3;
  if (param_2 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = (ulonglong)param_5 + *(longlong *)(param_2 + 0x40);
  }
  if (param_2 == 0) {
    iStack_30 = 0;
  }
  else {
    iStack_30 = *(int *)(param_2 + 0x60) - param_5;
  }
  plVar4 = (longlong *)((uVar5 + 0x1e) * 0x10 + param_1);
  if (((local_38 != *plVar4) || (param_4 != *(int *)((longlong)plVar4 + 0xc))) ||
     (iStack_30 != (int)plVar4[1])) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(longlong *)(param_1 + 0x3e0 + uVar5 * 8) = param_2;
    if (param_2 == 0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined8 *)(param_1 + 0x3e0 + uVar5 * 8) = 0;
      uVar3 = *(uint *)(param_1 + 0x4e4) & ~(1 << (param_3 & 0x1f));
    }
    else {
      *(undefined4 *)plVar4 = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar4 + 4) = local_38._4_4_;
      *(int *)(plVar4 + 1) = iStack_30;
      *(int *)((longlong)plVar4 + 0xc) = param_4;
      uVar3 = *(uint *)(param_1 + 0x4e4) | 1 << (param_3 & 0x1f);
    }
    *(uint *)(param_1 + 0x4e4) = uVar3;
    if (uVar3 == 0) {
      *(undefined4 *)(param_1 + 0x4e0) = 0xffffffff;
    }
    else {
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar6 = 0;
      if (uVar3 != 0) {
        iVar6 = iVar2;
      }
      *(int *)(param_1 + 0x4e0) = iVar6;
    }
  }
  if (((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x10), lVar1 != 0)) &&
     (*(char *)(lVar1 + 0xb4) != '\0')) {
    iStack_2c = param_4;
    FUN_141a60fb0(*(longlong *)(param_1 + 0x18) + 0x460,lVar1,1,0xffffffff);
  }
  return;
}



// FUNCTION 141a75550 FUN_141a75550 body=74 status=ok
// SIG undefined FUN_141a75550(void)

bool FUN_141a75550(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  if (param_2 <= *(ulonglong *)(param_1 + 0x40)) {
    return true;
  }
  uVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x78) + 0x10) + 0x40))();
  *(ulonglong *)(param_1 + 0x70) = uVar1;
  *(ulonglong *)(param_1 + 0x40) = uVar1;
  return param_2 <= uVar1;
}



// FUNCTION 141a755c0 FUN_141a755c0 body=33 status=ok
// SIG undefined FUN_141a755c0(void)

void FUN_141a755c0(longlong param_1,undefined8 param_2)

{
  FUN_141a4fd40(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x700),param_2,
                0x200,param_1 + 0x10);
  return;
}



// FUNCTION 141a75610 FUN_141a75610 body=109 status=ok
// SIG undefined FUN_141a75610(void)

void FUN_141a75610(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong local_res8;
  
  local_res8 = *param_3;
  uVar3 = *(undefined8 *)(param_1 + 8);
  if (local_res8 != 0) {
    LOCK();
    *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    UNLOCK();
  }
  FUN_141a58010(uVar3,param_2,param_1 + 0x10,&local_res8);
  FUN_141a7adc0(param_1 + -0x30);
  puVar4 = (undefined8 *)*param_3;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  return;
}



// FUNCTION 141a75680 FUN_141a75680 body=394 status=ok
// SIG undefined FUN_141a75680(void)

undefined8 * FUN_141a75680(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 local_18;
  undefined8 uStack_10;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  if (*(longlong *)param_1[5] != 0) {
    puVar7 = *(undefined8 **)(*(longlong *)param_1[5] + 8);
    LOCK();
    bVar8 = *(int *)(puVar7 + 3) == 0;
    if (bVar8) {
      *(int *)(puVar7 + 3) = 0;
    }
    UNLOCK();
    if ((bVar8) && (cVar2 = FUN_141a88e20(puVar7 + 1), cVar2 != '\0')) {
      iVar4 = (**(code **)(*(longlong *)*puVar7 + 0x40))();
      if (iVar4 < 0) {
        local_18 = 0;
        uStack_10 = 0;
        FUN_141a94000(iVar4,"CommandAllocator->Reset()",
                      "d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\D3D12CommandList.h"
                      ,0x16,0,&local_18);
      }
      lVar5 = *(longlong *)param_1[5];
      if (lVar5 != 0) {
        puVar7 = *(undefined8 **)(lVar5 + 8);
        lVar1 = param_1[5];
        param_1[5] = lVar5;
        *(undefined8 *)(lVar5 + 8) = 0;
        FMemory::operator_delete(lVar1,0x10);
      }
      goto LAB_141a757e7;
    }
  }
  lVar5 = operator_new(0x20);
  puVar7 = (undefined8 *)0x0;
  if (lVar5 != 0) {
    uVar6 = mu::Mesh::GetFaceBuffers(*param_1);
    puVar7 = (undefined8 *)FUN_141a4b250(lVar5,uVar6,param_1 + 0xb);
  }
  iVar4 = (int)param_1[2];
  *(int *)(param_1 + 2) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x14) < iVar4 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 1,iVar4);
  }
  *(undefined8 **)(param_1[1] + (longlong)iVar4 * 8) = puVar7;
  lVar5 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + 0x738);
  uVar6 = (**(code **)(**(longlong **)(*(longlong *)(lVar5 + 0x78) + 0x10) + 0x40))();
  local_18._0_4_ = (undefined4)lVar5;
  local_18._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
  uStack_10._0_4_ = (undefined4)uVar6;
  uStack_10._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  *(undefined8 *)(lVar5 + 0x70) = uVar6;
  *(undefined8 *)(lVar5 + 0x40) = uVar6;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_18;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_18._4_4_;
  *(undefined4 *)(puVar7 + 2) = (undefined4)uStack_10;
  *(undefined4 *)((longlong)puVar7 + 0x14) = uStack_10._4_4_;
  local_18 = lVar5;
  uStack_10 = uVar6;
LAB_141a757e7:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  return puVar7;
}



// FUNCTION 141a75810 FUN_141a75810 body=424 status=ok
// SIG undefined FUN_141a75810(void)

undefined *** FUN_141a75810(longlong param_1,undefined ***param_2,undefined8 *param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  char cVar3;
  int iVar4;
  undefined **local_38;
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  param_2[1] = (undefined **)0x0;
  *param_2 = &PTR_FUN_144da6378;
  cVar3 = FUN_141a6fea0(param_1 + 0x20);
  if (cVar3 == '\0') {
    local_38 = &PTR_FUN_144da6378;
    local_30 = (undefined **)0x0;
    FUN_141a531d0(&local_38,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xe0),param_3,
                  param_1);
    if (param_2 != &local_38) {
      if (param_2[1] != (undefined **)0x0) {
        LOCK();
        ppuVar2 = param_2[1] + 1;
        iVar4 = *(int *)ppuVar2;
        *(int *)ppuVar2 = *(int *)ppuVar2 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (ppuVar2 = param_2[1], ppuVar2 != (undefined **)0x0)) {
          FUN_141a4db60(ppuVar2);
          FMemory::operator_delete(ppuVar2,0x110);
        }
      }
      param_2[1] = (undefined **)0x0;
      if (local_30 != (undefined **)0x0) {
        param_2[1] = local_30;
        LOCK();
        *(int *)(local_30 + 1) = *(int *)(local_30 + 1) + 1;
        UNLOCK();
      }
    }
    ppuVar2 = local_30;
    local_38 = &PTR_FUN_144da6378;
    if (local_30 != (undefined **)0x0) {
      LOCK();
      ppuVar1 = local_30 + 1;
      iVar4 = *(int *)ppuVar1;
      *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (local_30 != (undefined **)0x0)) {
        FUN_141a4db60(local_30);
        FMemory::operator_delete(ppuVar2,0x110);
      }
    }
  }
  ppuVar2 = param_2[1];
  iVar4 = (**(code **)(*(longlong *)ppuVar2[5] + 0x50))(ppuVar2[5],*param_3,0);
  if (iVar4 < 0) {
    local_28 = 0;
    local_20 = 0;
    FUN_141a94000(iVar4,"CommandList->Reset(CommandAllocator, nullptr)",
                  "d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\D3D12CommandList.h",
                  0x53,0,&local_28);
  }
  ppuVar2[7] = (undefined *)param_3;
  *(undefined1 *)(ppuVar2 + 10) = 0;
  LOCK();
  *(int *)(param_3 + 3) = *(int *)(param_3 + 3) + 1;
  UNLOCK();
  FUN_141a52290(ppuVar2);
  *(undefined4 *)(ppuVar2 + 0x14) = 0;
  if (0x7fffffff < *(uint *)((longlong)ppuVar2 + 0xa4)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(ppuVar2 + 0x13,0);
  }
  FUN_141a54820(ppuVar2 + 0x15);
  return param_2;
}



// FUNCTION 141a759c0 FUN_141a759c0 body=99 status=ok
// SIG undefined FUN_141a759c0(void)

void FUN_141a759c0(longlong param_1)

{
  char cVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)0x0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(&DAT_146ab6e78);
    puVar2 = &DAT_146ab6e78;
    if (cVar1 == '\0') {
      puVar2 = (undefined *)0x0;
    }
  }
  FUN_141a6b810(**(undefined8 **)(param_1 + 0x50));
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  FRHICommandListImmediate::UnStallRHIThread(puVar2);
  return;
}



// FUNCTION 141a75a30 FUN_141a75a30 body=3853 status=ok
// SIG undefined FUN_141a75a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a75a30(longlong param_1,longlong *param_2,longlong *param_3,int *param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_4e8 [32];
  ulonglong local_4c8;
  undefined8 *local_4c0;
  int *local_4b8;
  undefined8 *local_4b0;
  undefined8 *local_4a8;
  char local_4a0;
  char local_498;
  char local_497;
  longlong *local_490;
  ulonglong local_488;
  int local_480;
  undefined8 local_478;
  int local_470;
  int local_46c;
  longlong local_468;
  undefined8 local_460;
  int local_458;
  int local_454;
  longlong local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined **local_430;
  longlong local_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  uint uStack_408;
  undefined4 uStack_404;
  undefined8 local_400;
  undefined4 local_3f8;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  int iStack_3e4;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  uint uStack_3d8;
  undefined4 uStack_3d4;
  undefined8 local_3d0;
  undefined4 local_3c8;
  int local_3c0;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined4 local_390;
  undefined8 local_370;
  undefined4 local_368;
  int local_360;
  undefined8 local_340;
  undefined4 local_338;
  int local_330;
  undefined8 local_310;
  undefined4 local_308;
  int local_300;
  undefined8 local_2e0;
  undefined4 local_2d8;
  int local_2d0;
  undefined8 local_2b0;
  undefined4 local_2a8;
  int local_2a0;
  undefined8 local_280;
  undefined4 local_278;
  int local_270;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 local_240;
  int local_220;
  int local_21c;
  undefined4 local_218;
  int local_214;
  int local_210;
  undefined4 local_20c;
  undefined1 local_208 [32];
  longlong local_1e8;
  ulonglong local_50;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_4e8;
  if (param_3 == (longlong *)0x0) {
    return;
  }
  local_490 = param_3;
  FRHICommandListBase::FRHICommandListBase(local_208,1);
  local_1e8 = param_1;
  plVar5 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
  uVar9 = 0;
  iVar10 = 0;
  uVar6 = uVar9;
  if (plVar5 != (longlong *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x48))(plVar5);
  }
  uVar15 = uVar6 - 0x68;
  if (uVar6 == 0) {
    uVar15 = uVar9;
  }
  plVar5 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
  uVar6 = uVar9;
  if (plVar5 != (longlong *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x48))(plVar5);
  }
  uVar17 = uVar6 - 0x68;
  if (uVar6 == 0) {
    uVar17 = uVar9;
  }
  plVar5 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2);
  uVar6 = uVar9;
  if (plVar5 != (longlong *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x48))(plVar5);
  }
  local_488 = uVar6 - 0x68;
  if (uVar6 == 0) {
    local_488 = uVar9;
  }
  plVar5 = (longlong *)(**(code **)(*param_3 + 0x20))(param_3);
  uVar6 = uVar9;
  if (plVar5 != (longlong *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x48))(plVar5);
  }
  uVar16 = uVar6 - 0x68;
  if (uVar6 == 0) {
    uVar16 = uVar9;
  }
  plVar5 = (longlong *)(**(code **)(*param_2 + 0x18))(param_2);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x48))(plVar5);
  }
  plVar5 = (longlong *)(**(code **)(*local_490 + 0x18))();
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x48))(plVar5);
  }
  if ((uVar15 == 0) || (uVar17 == 0)) {
    if ((local_488 == 0) || (uVar16 == 0)) {
      if ((uVar15 == 0) || (uVar16 == 0)) goto LAB_141a768fb;
      iVar10 = *param_4;
      if (iVar10 == 1) {
        uVar11 = 1;
      }
      else if (iVar10 == 2) {
        uVar11 = 2;
      }
      else if (iVar10 == 3) {
        uVar11 = 3;
      }
      else if (iVar10 == 4) {
        uVar11 = 4;
      }
      else if (iVar10 == 5) {
        uVar11 = 5;
      }
      else {
        uVar11 = 0;
      }
      lVar8 = *(longlong *)(uVar16 + 0x90);
      lVar7 = param_1 + 0x460;
      uVar12 = 0xffffffff;
      local_490 = (longlong *)CONCAT44(local_490._4_4_,0xffffffff);
      local_250 = *(undefined8 *)(lVar8 + 0x18);
      local_248 = 0;
      local_3a0 = *(undefined8 *)(*(longlong *)(uVar15 + 0x90) + 0x18);
      local_398 = 0;
      local_390 = 0;
      local_497 = *(char *)(lVar8 + 0xb4);
      local_240 = uVar11;
      if (local_497 == '\0') {
        local_490 = (longlong *)CONCAT44(local_490._4_4_,*(undefined4 *)(lVar8 + 0xa8));
        local_4c8 = CONCAT44(local_4c8._4_4_,uVar11);
        FUN_141a4f5b0(lVar7,lVar8,*(undefined4 *)(lVar8 + 0xa8),0x400);
      }
      else {
        FUN_141a60fb0(lVar7,lVar8,0x400,uVar11);
      }
      lVar2 = *(longlong *)(uVar15 + 0x90);
      local_488 = CONCAT44(local_488._4_4_,local_390);
      local_498 = *(char *)(lVar2 + 0xb4);
      if (local_498 == '\0') {
        uVar12 = *(undefined4 *)(lVar2 + 0xa8);
        local_4c8 = CONCAT44(local_4c8._4_4_,local_390);
        FUN_141a4f5b0(lVar7,lVar2,uVar12,0x800);
      }
      else {
        FUN_141a60fb0(lVar7,lVar2,0x800,local_390);
      }
      *(int *)(param_1 + 0x2c54) = *(int *)(param_1 + 0x2c54) + 1;
      FUN_141a72770(lVar7);
      local_4c0 = &local_3a0;
      local_4b8 = (int *)0x0;
      local_4c8 = local_4c8 & 0xffffffff00000000;
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x28);
      (**(code **)(*plVar5 + 0x80))(plVar5,&local_250,0,0);
      if (local_498 == '\0') {
        local_4c8 = CONCAT44(local_4c8._4_4_,(undefined4)local_488);
        FUN_141a4f5b0(lVar7,lVar2,0x800,uVar12);
      }
      if (local_497 != '\0') goto LAB_141a768fb;
      local_4c8 = CONCAT44(local_4c8._4_4_,uVar11);
    }
    else {
      if (local_488 == uVar16) goto LAB_141a768fb;
      if (*(char *)(param_1 + 0x1a8) != '\0') {
        FUN_141a5e390(*(undefined8 *)(param_1 + 0x1b8),0,0);
      }
      iVar14 = *param_4;
      if (iVar14 == 1) {
        iVar10 = 1;
      }
      else if (iVar14 == 2) {
        iVar10 = 2;
      }
      else if (iVar14 == 3) {
        iVar10 = 3;
      }
      else if (iVar14 == 4) {
        iVar10 = 4;
      }
      else if (iVar14 == 5) {
        iVar10 = 5;
      }
      iVar14 = (iVar10 + param_4[10] * 6) * *(int *)(local_488 + 0x34) + param_4[9];
      iVar10 = (iVar10 + param_4[0xb] * 6) * *(int *)(uVar16 + 0x34) + param_4[9];
      if ((1 < *(uint *)(param_2 + 7)) && (*(uint *)(uVar16 + 0x38) < 2)) {
        local_478 = *(longlong *)(uVar16 + 0x90);
        lVar7 = param_1 + 0x460;
        uVar11 = 0xffffffff;
        local_490 = (longlong *)CONCAT44(local_490._4_4_,0xffffffff);
        local_497 = *(char *)(local_478 + 0xb4);
        if (local_497 == '\0') {
          local_490 = (longlong *)CONCAT44(local_490._4_4_,*(undefined4 *)(local_478 + 0xa8));
          local_4c8 = CONCAT44(local_4c8._4_4_,iVar10);
          FUN_141a4f5b0(lVar7,local_478,*(undefined4 *)(local_478 + 0xa8),0x1000);
        }
        else {
          FUN_141a60fb0(lVar7,local_478,0x1000,iVar10);
        }
        uVar9 = local_488;
        local_450 = *(longlong *)(local_488 + 0x90);
        local_498 = *(char *)(local_450 + 0xb4);
        if (local_498 == '\0') {
          uVar11 = *(undefined4 *)(local_450 + 0xa8);
          local_4c8 = CONCAT44(local_4c8._4_4_,iVar14);
          FUN_141a4f5b0(lVar7,local_450,uVar11,0x2000);
        }
        else {
          FUN_141a60fb0(lVar7,local_450,0x2000,iVar14);
        }
        *(int *)(param_1 + 0x2c58) = *(int *)(param_1 + 0x2c58) + 1;
        FUN_141a72770(lVar7);
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x28);
        local_4c0 = (undefined8 *)
                    CONCAT44(local_4c0._4_4_,
                             (&DAT_1464ca1cc)[(longlong)*(int *)(uVar16 + 0x3c) * 10]);
        local_4c8 = CONCAT44(local_4c8._4_4_,iVar14);
        (**(code **)(*plVar5 + 0x98))
                  (plVar5,*(undefined8 *)(*(longlong *)(uVar16 + 0x90) + 0x18),iVar10,
                   *(undefined8 *)(*(longlong *)(uVar9 + 0x90) + 0x18));
        if (local_498 == '\0') {
          local_4c8 = CONCAT44(local_4c8._4_4_,iVar14);
          FUN_141a4f5b0(lVar7,local_450,0x2000,uVar11);
        }
        if (local_497 != '\0') goto LAB_141a768fb;
        uVar13 = 0x1000;
        local_4c8 = CONCAT44(local_4c8._4_4_,iVar10);
        lVar8 = local_478;
        goto LAB_141a768f1;
      }
      lVar8 = *(longlong *)(uVar16 + 0x90);
      uVar11 = 0xffffffff;
      local_490 = (longlong *)CONCAT44(local_490._4_4_,0xffffffff);
      local_280 = *(undefined8 *)(lVar8 + 0x18);
      local_278 = 0;
      local_3d0 = *(undefined8 *)(*(longlong *)(local_488 + 0x90) + 0x18);
      lVar7 = param_1 + 0x460;
      local_3c8 = 0;
      local_497 = *(char *)(lVar8 + 0xb4);
      local_3c0 = iVar14;
      local_270 = iVar10;
      if (local_497 == '\0') {
        local_490 = (longlong *)CONCAT44(local_490._4_4_,*(undefined4 *)(lVar8 + 0xa8));
        local_4c8 = CONCAT44(local_4c8._4_4_,iVar10);
        FUN_141a4f5b0(lVar7,lVar8,*(undefined4 *)(lVar8 + 0xa8),0x400);
      }
      else {
        FUN_141a60fb0(lVar7,lVar8,0x400,iVar10);
      }
      uVar9 = local_488;
      local_488 = CONCAT44(local_488._4_4_,local_3c0);
      lVar2 = *(longlong *)(uVar9 + 0x90);
      local_498 = *(char *)(lVar2 + 0xb4);
      if (local_498 == '\0') {
        uVar11 = *(undefined4 *)(lVar2 + 0xa8);
        local_4c8 = CONCAT44(local_4c8._4_4_,local_3c0);
        FUN_141a4f5b0(lVar7,lVar2,uVar11,0x800);
      }
      else {
        FUN_141a60fb0(lVar7,lVar2,0x800,local_3c0);
      }
      *(int *)(param_1 + 0x2c54) = *(int *)(param_1 + 0x2c54) + 1;
      FUN_141a72770(lVar7);
      local_4c0 = &local_3d0;
      local_4b8 = (int *)0x0;
      local_4c8 = local_4c8 & 0xffffffff00000000;
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x28);
      (**(code **)(*plVar5 + 0x80))(plVar5,&local_280,0,0);
      if (local_498 == '\0') {
        local_4c8 = CONCAT44(local_4c8._4_4_,(undefined4)local_488);
        FUN_141a4f5b0(lVar7,lVar2,0x800,uVar11);
      }
      if (local_497 != '\0') goto LAB_141a768fb;
      local_4c8 = CONCAT44(local_4c8._4_4_,iVar10);
    }
    uVar13 = 0x400;
    goto LAB_141a768f1;
  }
  iVar10 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x10) + 0x4c);
  if (uVar15 == uVar17) goto LAB_141a768fb;
  if (*(char *)(param_1 + 0x1a8) != '\0') {
    FUN_141a5e390(*(longlong *)(param_1 + 0x1b8),0,0);
  }
  if (0xafff < iVar10) {
    local_480 = 0x22;
    lVar7 = FUN_141a72850(uVar17 + 0x68);
    if (((lVar7 != 0) && (1 < *(uint *)(param_2 + 7))) && (*(uint *)(local_490 + 7) < 2)) {
      lVar7 = *(longlong *)(uVar17 + 0x90);
      iVar10 = param_4[1];
      local_454 = *(int *)(uVar17 + 100);
      local_458 = *(int *)(uVar17 + 0x60);
      if (((iVar10 < 0) || (param_4[3] < 0)) || ((param_4[2] < 0 || (param_4[4] < 0)))) {
        local_478 = 0;
        local_470 = local_458;
        local_46c = local_454;
      }
      else {
        local_478 = CONCAT44(param_4[2],iVar10);
        local_470 = param_4[3];
        local_46c = param_4[4];
      }
      if (((iVar10 < 0) || (param_4[3] < 0)) || ((param_4[2] < 0 || (param_4[4] < 0)))) {
        local_460 = 0;
      }
      else {
        local_460 = CONCAT44(param_4[2],iVar10);
        local_458 = param_4[3];
        local_454 = param_4[4];
      }
      iVar10 = -(uint)(*(char *)(uVar17 + 0x130) != '\0');
      if (iVar10 < *(int *)(uVar17 + 0x128)) {
        lVar8 = *(longlong *)(uVar17 + 0x120);
        if (*(longlong *)(uVar17 + 0x120) == 0) {
          lVar8 = uVar17 + 0x118;
        }
        uVar9 = *(ulonglong *)(lVar8 + (longlong)iVar10 * 8);
      }
      local_4c0 = (undefined8 *)FUN_141a72850(uVar17 + 0x68,0x22);
      local_4a8 = &local_478;
      local_4a0 = local_498;
      local_4b0 = &local_460;
      local_4c8 = uVar9;
      local_4b8 = (int *)(lVar7 + 0x30);
      FUN_141a63d40(param_1,local_208,uVar15,uVar17);
      goto LAB_141a768fb;
    }
  }
  iVar10 = (&DAT_1464ca1cc)[(longlong)*(int *)(uVar17 + 0x3c) * 10];
  if (iVar10 == 0x1b) {
    local_468 = CONCAT44(local_468._4_4_,0x1c);
  }
  else {
    iVar14 = 0x57;
    if (iVar10 != 0x5a) {
      iVar14 = iVar10;
    }
    local_468 = CONCAT44(local_468._4_4_,iVar14);
  }
  if ((*(uint *)(param_2 + 7) < 2) || (1 < *(uint *)(uVar17 + 0x38))) {
    iVar10 = param_4[1];
    if ((iVar10 < 0) ||
       (((iVar14 = param_4[2], iVar14 < 0 || (param_4[3] - iVar10 < 1)) || (param_4[4] - iVar14 < 1)
        ))) {
      local_450 = *(longlong *)(uVar15 + 0x90);
      lVar7 = param_1 + 0x460;
      iVar10 = param_4[10];
      uVar11 = 0xffffffff;
      local_490 = (longlong *)CONCAT44(local_490._4_4_,0xffffffff);
      local_497 = *(char *)(local_450 + 0xb4);
      local_488 = CONCAT44(local_488._4_4_,iVar10);
      if (local_497 == '\0') {
        local_490 = (longlong *)CONCAT44(local_490._4_4_,*(undefined4 *)(local_450 + 0xa8));
        local_4c8 = CONCAT44(local_4c8._4_4_,iVar10);
        FUN_141a4f5b0(lVar7,local_450,*(undefined4 *)(local_450 + 0xa8),0x800);
      }
      else {
        FUN_141a60fb0(lVar7,local_450,0x800,iVar10);
      }
      local_478 = *(longlong *)(uVar17 + 0x90);
      if (*(int *)(local_478 + 0x30) == 1) {
        lVar8 = *(longlong *)(uVar15 + 0x90);
        uStack_404 = 0;
        local_420 = 0;
        local_3e0 = *(undefined4 *)(lVar8 + 0x48);
        iStack_3e4 = *(int *)(lVar8 + 0x40);
        uStack_440 = CONCAT44(1,local_3e0);
        uStack_3e8 = *(undefined4 *)(lVar8 + 0x50);
        local_448 = (undefined **)CONCAT44(iStack_3e4,uStack_3e8);
        uStack_418 = local_448;
        uStack_410 = uStack_440;
        uStack_408 = (&DAT_1464ca1c4)[(longlong)*(int *)(uVar15 + 0x3c) * 10] * iStack_3e4 + 0xffU &
                     0xffffff00;
        local_400 = *(undefined8 *)(local_478 + 0x18);
        local_3f8 = 1;
        uStack_3dc = 1;
        uStack_3d4 = 0;
        local_3f0 = 0;
        uStack_3ec = 0;
        local_310 = *(undefined8 *)(lVar8 + 0x18);
        local_300 = param_4[10];
        *(int *)(param_1 + 0x2c54) = *(int *)(param_1 + 0x2c54) + 1;
        local_308 = 0;
        uStack_3d8 = uStack_408;
        FUN_141a72770(lVar7);
        local_4c0 = &local_310;
        local_4b8 = (int *)0x0;
        local_4c8 = local_4c8 & 0xffffffff00000000;
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x28);
        (**(code **)(*plVar5 + 0x80))(plVar5,&local_400,0,0);
        lVar7 = *(longlong *)(param_1 + 0x468);
        local_448 = &PTR_FUN_144da6378;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        uStack_440 = lVar7;
        FUN_141a69050(uVar17 + 0x248,&local_448);
        uVar6 = uVar9;
        if (lVar7 != 0) {
          uVar6 = *(ulonglong *)(lVar7 + 0x40);
        }
        *(ulonglong *)(uVar17 + 600) = uVar6;
        if (lVar7 != 0) {
          LOCK();
          piVar1 = (int *)(lVar7 + 8);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            FUN_141a4db60(lVar7);
            FMemory::operator_delete(lVar7,0x110);
          }
        }
        lVar7 = DAT_1469fd108;
        cVar3 = FUN_1415ad720(&DAT_1468e2448);
        if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
          DVar4 = GetCurrentThreadId();
          uVar6 = 4;
          if (DVar4 == DAT_1468c21c0) goto LAB_141a76278;
        }
        else {
LAB_141a76278:
          uVar6 = uVar9;
        }
        if (*(int *)(uVar6 + lVar7) == 1) {
          FUN_141a55210(param_1,&local_430,0);
          local_430 = &PTR_FUN_144da6378;
          if (local_428 != 0) {
            LOCK();
            piVar1 = (int *)(local_428 + 8);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar10 == 1) && (local_428 != 0)) {
              FUN_141a4db60(local_428);
              FMemory::operator_delete(local_428,0x110);
            }
          }
        }
      }
      else {
        local_498 = *(char *)(local_478 + 0xb4);
        if (local_498 == '\0') {
          uVar11 = *(undefined4 *)(local_478 + 0xa8);
          local_4c8 = local_4c8 & 0xffffffff00000000;
          FUN_141a4f5b0(lVar7,local_478,uVar11,0x400);
        }
        else {
          FUN_141a60fb0(lVar7,local_478,0x400,0);
        }
        local_2b0 = *(undefined8 *)(*(longlong *)(uVar17 + 0x90) + 0x18);
        local_2a0 = param_4[0xb];
        local_2a8 = 0;
        local_2e0 = *(undefined8 *)(*(longlong *)(uVar15 + 0x90) + 0x18);
        local_2d0 = param_4[10];
        *(int *)(param_1 + 0x2c54) = *(int *)(param_1 + 0x2c54) + 1;
        local_2d8 = 0;
        FUN_141a72770(lVar7);
        local_4c0 = &local_2e0;
        local_4b8 = (int *)0x0;
        local_4c8 = local_4c8 & 0xffffffff00000000;
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x28);
        (**(code **)(*plVar5 + 0x80))(plVar5,&local_2b0,0,0);
        if (local_498 == '\0') {
          local_4c8 = local_4c8 & 0xffffffff00000000;
          FUN_141a4f5b0(lVar7,local_478,0x400,uVar11);
        }
      }
      if (local_497 != '\0') goto LAB_141a768fb;
      uVar13 = 0x800;
      local_4c8 = CONCAT44(local_4c8._4_4_,(undefined4)local_488);
      lVar8 = local_450;
    }
    else {
      local_214 = param_4[3];
      lVar7 = param_1 + 0x460;
      uVar11 = 0xffffffff;
      local_210 = param_4[4];
      local_468 = *(longlong *)(uVar17 + 0x90);
      local_480 = param_4[0xb];
      local_218 = 0;
      local_20c = 1;
      local_497 = *(char *)(local_468 + 0xb4);
      local_490 = (longlong *)CONCAT44(local_490._4_4_,0xffffffff);
      local_220 = iVar10;
      local_21c = iVar14;
      if (local_497 == '\0') {
        local_490 = (longlong *)CONCAT44(local_490._4_4_,*(undefined4 *)(local_468 + 0xa8));
        local_4c8 = CONCAT44(local_4c8._4_4_,local_480);
        FUN_141a4f5b0(lVar7,local_468,*(undefined4 *)(local_468 + 0xa8),0x400);
      }
      else {
        FUN_141a60fb0(lVar7,local_468,0x400,local_480);
      }
      local_478 = *(longlong *)(uVar15 + 0x90);
      iVar10 = param_4[10];
      local_488 = CONCAT44(local_488._4_4_,iVar10);
      local_498 = *(char *)(local_478 + 0xb4);
      if (local_498 == '\0') {
        uVar11 = *(undefined4 *)(local_478 + 0xa8);
        local_4c8 = CONCAT44(local_4c8._4_4_,iVar10);
        FUN_141a4f5b0(lVar7,local_478,uVar11,0x800);
      }
      else {
        FUN_141a60fb0(lVar7,local_478,0x800,iVar10);
      }
      local_340 = *(undefined8 *)(*(longlong *)(uVar17 + 0x90) + 0x18);
      local_330 = param_4[0xb];
      local_338 = 0;
      local_370 = *(undefined8 *)(*(longlong *)(uVar15 + 0x90) + 0x18);
      local_360 = param_4[10];
      *(int *)(param_1 + 0x2c54) = *(int *)(param_1 + 0x2c54) + 1;
      local_368 = 0;
      FUN_141a72770(lVar7);
      local_4b8 = &local_220;
      local_4c0 = &local_370;
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x28);
      local_4c8 = local_4c8 & 0xffffffff00000000;
      (**(code **)(*plVar5 + 0x80))(plVar5,&local_340,param_4[5],param_4[6]);
      if (local_498 == '\0') {
        local_4c8 = CONCAT44(local_4c8._4_4_,(undefined4)local_488);
        FUN_141a4f5b0(lVar7,local_478,0x800,uVar11);
      }
      if (local_497 != '\0') goto LAB_141a768fb;
      uVar13 = 0x400;
      local_4c8 = CONCAT44(local_4c8._4_4_,local_480);
      lVar8 = local_468;
    }
  }
  else {
    lVar8 = *(longlong *)(uVar17 + 0x90);
    lVar7 = param_1 + 0x460;
    iVar10 = param_4[0xb];
    uVar11 = 0xffffffff;
    local_490 = (longlong *)CONCAT44(local_490._4_4_,0xffffffff);
    local_488 = CONCAT44(local_488._4_4_,iVar10);
    local_498 = *(char *)(lVar8 + 0xb4);
    if (local_498 == '\0') {
      local_490 = (longlong *)CONCAT44(local_490._4_4_,*(undefined4 *)(lVar8 + 0xa8));
      local_4c8 = CONCAT44(local_4c8._4_4_,iVar10);
      FUN_141a4f5b0(lVar7,lVar8,*(undefined4 *)(lVar8 + 0xa8),0x1000);
    }
    else {
      FUN_141a60fb0(lVar7,lVar8,0x1000,iVar10);
    }
    local_478 = *(longlong *)(uVar15 + 0x90);
    local_480 = param_4[10];
    local_497 = *(char *)(local_478 + 0xb4);
    if (local_497 == '\0') {
      uVar11 = *(undefined4 *)(local_478 + 0xa8);
      local_4c8 = CONCAT44(local_4c8._4_4_,local_480);
      FUN_141a4f5b0(lVar7,local_478,uVar11,0x2000);
    }
    else {
      FUN_141a60fb0(lVar7,local_478,0x2000,local_480);
    }
    *(int *)(param_1 + 0x2c58) = *(int *)(param_1 + 0x2c58) + 1;
    FUN_141a72770(lVar7);
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x28);
    local_4c0 = (undefined8 *)CONCAT44(local_4c0._4_4_,(undefined4)local_468);
    local_4c8 = CONCAT44(local_4c8._4_4_,param_4[10]);
    (**(code **)(*plVar5 + 0x98))
              (plVar5,*(undefined8 *)(*(longlong *)(uVar17 + 0x90) + 0x18),param_4[0xb],
               *(undefined8 *)(*(longlong *)(uVar15 + 0x90) + 0x18));
    if (local_497 == '\0') {
      local_4c8 = CONCAT44(local_4c8._4_4_,local_480);
      FUN_141a4f5b0(lVar7,local_478,0x2000,uVar11);
    }
    if (local_498 != '\0') goto LAB_141a768fb;
    uVar13 = 0x1000;
    local_4c8 = CONCAT44(local_4c8._4_4_,(undefined4)local_488);
  }
LAB_141a768f1:
  FUN_141a4f5b0(param_1 + 0x460,lVar8,uVar13,(ulonglong)local_490 & 0xffffffff);
LAB_141a768fb:
  FRHICommandListBase::~FRHICommandListBase(local_208);
  return;
}



// FUNCTION 141a76940 FUN_141a76940 body=820 status=ok
// SIG undefined FUN_141a76940(void)

undefined8 * FUN_141a76940(undefined8 param_1,undefined8 *param_2,undefined1 *param_3)

{
  byte *pbVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  puVar4 = (undefined8 *)operator_new(0x1a0);
  pcVar5 = param_3 + 2;
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar4 + 1) = 0;
    *puVar4 = &PTR_FUN_144daa650;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined2 *)(puVar4 + 2) = 0x100;
    *(undefined1 *)(puVar4 + 3) = *param_3;
    *(undefined1 *)((longlong)puVar4 + 0x19) = param_3[1];
    *(char *)((longlong)puVar4 + 0x1a) = *pcVar5;
    *(undefined1 *)((longlong)puVar4 + 0x1b) = param_3[3];
    *(undefined1 *)((longlong)puVar4 + 0x1c) = param_3[4];
    *(undefined1 *)((longlong)puVar4 + 0x1d) = param_3[5];
    *(undefined1 *)((longlong)puVar4 + 0x1e) = param_3[6];
    *(undefined1 *)((longlong)puVar4 + 0x1f) = param_3[7];
    *(undefined1 *)(puVar4 + 4) = param_3[8];
    *(undefined1 *)((longlong)puVar4 + 0x21) = param_3[9];
    *(undefined1 *)((longlong)puVar4 + 0x22) = param_3[10];
    *(undefined1 *)((longlong)puVar4 + 0x23) = param_3[0xb];
    *(undefined1 *)((longlong)puVar4 + 0x24) = param_3[0xc];
    *(undefined1 *)((longlong)puVar4 + 0x25) = param_3[0xd];
    *(undefined1 *)((longlong)puVar4 + 0x26) = param_3[0xe];
    *(undefined1 *)((longlong)puVar4 + 0x27) = param_3[0xf];
    *(undefined1 *)(puVar4 + 5) = param_3[0x10];
    *(undefined1 *)((longlong)puVar4 + 0x29) = param_3[0x11];
    *(undefined1 *)((longlong)puVar4 + 0x2a) = param_3[0x12];
    *(undefined1 *)((longlong)puVar4 + 0x2b) = param_3[0x13];
    *(undefined1 *)((longlong)puVar4 + 0x2c) = param_3[0x14];
    *(undefined1 *)((longlong)puVar4 + 0x2d) = param_3[0x15];
    *(undefined1 *)((longlong)puVar4 + 0x2e) = param_3[0x16];
    *(undefined1 *)((longlong)puVar4 + 0x2f) = param_3[0x17];
    *(undefined1 *)(puVar4 + 6) = param_3[0x18];
    *(undefined1 *)((longlong)puVar4 + 0x31) = param_3[0x19];
    *(undefined1 *)((longlong)puVar4 + 0x32) = param_3[0x1a];
    *(undefined1 *)((longlong)puVar4 + 0x33) = param_3[0x1b];
    *(undefined1 *)((longlong)puVar4 + 0x34) = param_3[0x1c];
    *(undefined1 *)((longlong)puVar4 + 0x35) = param_3[0x1d];
    *(undefined1 *)((longlong)puVar4 + 0x36) = param_3[0x1e];
    *(undefined1 *)((longlong)puVar4 + 0x37) = param_3[0x1f];
    *(undefined1 *)(puVar4 + 7) = param_3[0x20];
    *(undefined1 *)((longlong)puVar4 + 0x39) = param_3[0x21];
    *(undefined1 *)((longlong)puVar4 + 0x3a) = param_3[0x22];
    *(undefined1 *)((longlong)puVar4 + 0x3b) = param_3[0x23];
    *(undefined1 *)((longlong)puVar4 + 0x3c) = param_3[0x24];
    *(undefined1 *)((longlong)puVar4 + 0x3d) = param_3[0x25];
    *(undefined1 *)((longlong)puVar4 + 0x3e) = param_3[0x26];
    *(undefined1 *)((longlong)puVar4 + 0x3f) = param_3[0x27];
    *(undefined1 *)(puVar4 + 8) = param_3[0x28];
    *(undefined1 *)((longlong)puVar4 + 0x41) = param_3[0x29];
    *(undefined1 *)((longlong)puVar4 + 0x42) = param_3[0x2a];
    *(undefined1 *)((longlong)puVar4 + 0x43) = param_3[0x2b];
    *(undefined1 *)((longlong)puVar4 + 0x44) = param_3[0x2c];
    *(undefined1 *)((longlong)puVar4 + 0x45) = param_3[0x2d];
    *(undefined1 *)((longlong)puVar4 + 0x46) = param_3[0x2e];
    *(undefined1 *)((longlong)puVar4 + 0x47) = param_3[0x2f];
    *(undefined1 *)(puVar4 + 9) = param_3[0x30];
    *(undefined1 *)((longlong)puVar4 + 0x49) = param_3[0x31];
    *(undefined1 *)((longlong)puVar4 + 0x4a) = param_3[0x32];
    *(undefined1 *)((longlong)puVar4 + 0x4b) = param_3[0x33];
    *(undefined1 *)((longlong)puVar4 + 0x4c) = param_3[0x34];
    *(undefined1 *)((longlong)puVar4 + 0x4d) = param_3[0x35];
    *(undefined1 *)((longlong)puVar4 + 0x4e) = param_3[0x36];
    *(undefined1 *)((longlong)puVar4 + 0x4f) = param_3[0x37];
    *(undefined1 *)(puVar4 + 10) = param_3[0x38];
  }
  _guard_xfg_dispatch_icall_nop(puVar4 + 0xb,0,0x144);
  *(undefined4 *)((longlong)puVar4 + 0x54) = 0;
  puVar6 = (undefined4 *)((longlong)puVar4 + 100);
  lVar7 = 8;
  *(uint *)(puVar4 + 0xb) = (uint)(byte)param_3[0x38];
  do {
    if ((((pcVar5[-2] == '\0') && (*pcVar5 == '\0')) && (pcVar5[-1] == '\x01')) &&
       (((pcVar5[1] == '\0' && (pcVar5[3] == '\0')) && (pcVar5[2] == '\x01')))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    puVar6[-2] = uVar3;
    cVar2 = pcVar5[-2];
    if (cVar2 == '\x01') {
      uVar3 = 2;
    }
    else if (cVar2 == '\x02') {
      uVar3 = 4;
    }
    else if (cVar2 == '\x03') {
      uVar3 = 5;
    }
    else if (cVar2 == '\x04') {
      uVar3 = 3;
    }
    else {
      uVar3 = 1;
    }
    puVar6[2] = uVar3;
    uVar3 = FUN_141a440d0(pcVar5[-1]);
    *puVar6 = uVar3;
    uVar3 = FUN_141a440d0(*pcVar5);
    puVar6[1] = uVar3;
    cVar2 = pcVar5[1];
    if (cVar2 == '\x01') {
      uVar3 = 2;
    }
    else if (cVar2 == '\x02') {
      uVar3 = 4;
    }
    else if (cVar2 == '\x03') {
      uVar3 = 5;
    }
    else if (cVar2 == '\x04') {
      uVar3 = 3;
    }
    else {
      uVar3 = 1;
    }
    puVar6[5] = uVar3;
    uVar3 = FUN_141a440d0(pcVar5[2]);
    puVar6[3] = uVar3;
    uVar3 = FUN_141a440d0(pcVar5[3]);
    puVar6[4] = uVar3;
    pbVar1 = (byte *)(pcVar5 + 4);
    pcVar5 = pcVar5 + 7;
    *(byte *)(puVar6 + 7) = *pbVar1 & 0xf;
    puVar6 = puVar6 + 10;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  *param_2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a76c80 FUN_141a76c80 body=240 status=ok
// SIG undefined FUN_141a76c80(void)

undefined8
FUN_141a76c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (undefined8 *)FUN_140438ef0(0x40,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144213c30;
    puVar1[1] = &local_res18;
    puVar1[2] = &local_res20;
    puVar1[3] = &param_7;
    puVar1[4] = &param_5;
    puVar1[5] = &param_6;
    puVar1[6] = &param_8;
    puVar1[7] = param_1;
  }
  local_58[0] = FUN_141a6b9d0;
  FUN_141ec7eb0(param_2,local_58,local_res18,local_res20,param_7,param_5,param_6,param_8);
  return param_2;
}



// FUNCTION 141a76d70 FUN_141a76d70 body=110 status=ok
// SIG undefined FUN_141a76d70(void)

longlong * FUN_141a76d70(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_141a6b0c0(&DAT_1469fd078,0x80);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_141a66d10(lVar1,**(undefined8 **)(param_1 + 0x50),param_3);
  }
  FUN_141a6e860(lVar1);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a76de0 FUN_141a76de0 body=677 status=ok
// SIG undefined FUN_141a76de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141a76de0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_218 [56];
  int local_1e0 [2];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined1 *local_100 [2];
  longlong local_f0 [4];
  longlong *local_d0;
  int local_c0;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  lVar1 = **(longlong **)(param_1 + 0x50);
  lVar7 = lVar1 + 0x210;
  lVar3 = FUN_141a72260(lVar7);
  if (lVar3 == 0) {
    _guard_xfg_dispatch_icall_nop(&local_1d0,0,0x60);
    local_1c0 = *(undefined8 *)(param_3 + 0x50);
    uStack_1b8 = *(undefined8 *)(param_3 + 0x58);
    lVar3 = *(longlong *)(param_3 + 0xd0);
    local_190 = *(undefined8 *)(param_3 + 0x38);
    uStack_188 = *(undefined8 *)(param_3 + 0x40);
    uVar2 = *(undefined8 *)(lVar3 + 8);
    local_1d0._0_4_ = (undefined4)lVar3;
    local_1d0._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
    uStack_1c8._0_4_ = (undefined4)uVar2;
    uStack_1c8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    local_180 = *(undefined4 *)(param_3 + 0x48);
    uStack_88 = uStack_1a8;
    _local_90 = CONCAT44(uStack_1ac,1);
    uStack_10c = uStack_17c;
    uStack_108 = 0;
    local_150 = 0;
    local_140 = 1;
    uStack_13c = uStack_1ac;
    uStack_138 = 0;
    uStack_128 = uStack_198;
    uStack_124 = uStack_194;
    local_130 = 0;
    uStack_158 = 0;
    local_160 = 0;
    local_b0 = (undefined4)local_1d0;
    uStack_ac = local_1d0._4_4_;
    uStack_a8 = (undefined4)uStack_1c8;
    uStack_a4 = uStack_1c8._4_4_;
    local_80 = local_1a0;
    uStack_7c = uStack_19c;
    uStack_78 = uStack_198;
    uStack_74 = uStack_194;
    uStack_5c = uStack_17c;
    local_1d0 = lVar3;
    uStack_1c8 = uVar2;
    uStack_148 = uStack_1b8;
    local_120 = local_190;
    uStack_118 = uStack_188;
    local_110 = local_180;
    local_a0 = local_1c0;
    uStack_98 = uStack_1b8;
    local_70 = local_190;
    uStack_68 = uStack_188;
    local_60 = local_180;
    uStack_58 = FUN_141a74790(&local_160,0x60);
    AcquireSRWLockShared((PSRWLOCK)(lVar1 + 0x488));
    FUN_141a71fe0(lVar1 + 0x310,local_1e0,&local_b0);
    plVar4 = (longlong *)0x0;
    if (local_1e0[0] != -1) {
      plVar4 = (longlong *)((longlong)local_1e0[0] * 0x70 + *(longlong *)(lVar1 + 0x310));
    }
    plVar6 = plVar4 + 0xc;
    if (plVar4 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    if (plVar6 == (longlong *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)(lVar1 + 0x488));
    }
    else {
      lVar3 = *plVar6;
      ReleaseSRWLockShared((PSRWLOCK)(lVar1 + 0x488));
      if ((lVar3 != 0) && (lVar3 = FUN_141a6aa50(lVar7,param_3,lVar3), lVar3 != 0))
      goto LAB_141a76f9b;
    }
    local_1d8 = 0;
    local_d0 = (longlong *)0x0;
    local_c0 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_f0);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = lVar7;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_100[0] = &LAB_141a6ba00;
    FUN_141a6a4a0(lVar7,&local_b0,&local_1d8,local_100);
    if (local_c0 != 0) {
      plVar4 = local_f0;
      if (local_d0 != (longlong *)0x0) {
        plVar4 = local_d0;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_d0 != (longlong *)0x0) {
      FMemory::Free();
    }
    lVar3 = FUN_141a6aa50(lVar7,param_3,local_1d8);
    *param_2 = lVar3;
    if (lVar3 == 0) {
      return param_2;
    }
  }
  else {
LAB_141a76f9b:
    *param_2 = lVar3;
  }
  LOCK();
  *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  UNLOCK();
  return param_2;
}



// FUNCTION 141a77090 FUN_141a77090 body=848 status=ok
// SIG undefined FUN_141a77090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141a77090(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  void *_Src;
  char *pcVar5;
  int *piVar6;
  undefined8 uVar7;
  int iVar8;
  char *pcVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_158 [32];
  undefined4 local_138 [2];
  undefined8 *local_130;
  ulonglong uStack_128;
  longlong local_120;
  undefined **local_118;
  longlong *local_110;
  byte local_ef;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined1 local_68 [32];
  ulonglong local_48;
  ulonglong uVar12;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_130 = param_2;
  local_120 = param_1;
  pcVar5 = (char *)operator_new(0xd8);
  iVar8 = 0;
  pcVar9 = (char *)0x0;
  if (pcVar5 != (char *)0x0) {
    *(undefined ***)pcVar5 = &PTR_FUN_143f3ece8;
    pcVar5[8] = '\0';
    pcVar5[9] = '\0';
    pcVar5[10] = '\0';
    pcVar5[0xb] = '\0';
    pcVar5[0xc] = '\0';
    pcVar5[0xd] = '\0';
    pcVar5[0xe] = '\0';
    pcVar5[0xf] = '\0';
    pcVar5[0x10] = '\0';
    pcVar5[0x11] = '\x01';
    pcVar5[0x18] = '\0';
    pcVar5[0x19] = '\0';
    pcVar5[0x1a] = '\0';
    pcVar5[0x1b] = '\0';
    pcVar5[0x1c] = '\0';
    pcVar5[0x1d] = '\0';
    pcVar5[0x1e] = '\0';
    pcVar5[0x1f] = '\0';
    pcVar5[0x20] = '\0';
    pcVar5[0x21] = '\0';
    pcVar5[0x22] = '\0';
    pcVar5[0x23] = '\0';
    pcVar5[0x24] = '\0';
    pcVar5[0x25] = '\0';
    pcVar5[0x26] = '\0';
    pcVar5[0x27] = '\0';
    pcVar5[0x28] = '\0';
    pcVar5[0x29] = '\0';
    pcVar5[0x2a] = '\0';
    pcVar5[0x2b] = '\0';
    *(undefined ***)pcVar5 = &PTR__scalar_deleting_destructor__144daa6b0;
    pcVar5[0x30] = '\0';
    pcVar5[0x31] = '\0';
    pcVar5[0x32] = '\0';
    pcVar5[0x33] = '\0';
    pcVar5[0x34] = '\0';
    pcVar5[0x35] = '\0';
    pcVar5[0x36] = '\0';
    pcVar5[0x37] = '\0';
    pcVar5[0x50] = '\0';
    pcVar5[0x51] = '\0';
    pcVar5[0x52] = '\0';
    pcVar5[0x53] = '\0';
    pcVar5[0x54] = '\0';
    pcVar5[0x55] = '\0';
    pcVar5[0x56] = '\0';
    pcVar5[0x57] = '\0';
    pcVar5[0x58] = '\0';
    pcVar5[0x59] = '\0';
    pcVar5[0x5a] = '\0';
    pcVar5[0x5b] = '\0';
    pcVar5[0x5c] = '\0';
    pcVar5[0x5d] = '\0';
    pcVar5[0x5e] = '\0';
    pcVar5[0x5f] = '\0';
    pcVar5[0x38] = '\0';
    pcVar5[0x39] = '\0';
    pcVar5[0x3a] = '\0';
    pcVar5[0x3b] = '\0';
    pcVar5[0x3c] = '\0';
    pcVar5[0x3d] = '\0';
    pcVar5[0x3e] = '\0';
    pcVar5[0x3f] = '\0';
    pcVar5[0x40] = '\0';
    pcVar5[0x41] = '\0';
    pcVar5[0x42] = '\0';
    pcVar5[0x43] = '\0';
    pcVar5[0x44] = '\0';
    pcVar5[0x45] = '\0';
    pcVar5[0x46] = '\0';
    pcVar5[0x47] = '\0';
    pcVar5[0x48] = '\0';
    pcVar5[0x49] = '\0';
    pcVar5[0x4a] = '\0';
    pcVar5[0x4b] = '\0';
    pcVar5[0x60] = '\0';
    pcVar5[0x61] = '\0';
    pcVar5[0x62] = '\0';
    pcVar5[99] = '\0';
    pcVar5[100] = '\0';
    pcVar5[0x65] = '\0';
    pcVar5[0x66] = '\0';
    pcVar5[0x67] = '\0';
    pcVar5[0x68] = '\0';
    pcVar5[0x69] = '\0';
    pcVar5[0x6a] = '\0';
    pcVar5[0x6b] = '\0';
    pcVar5[0x6c] = '\0';
    pcVar5[0x6d] = '\0';
    pcVar5[0x6e] = '\0';
    pcVar5[0x6f] = '\0';
    pcVar5[0x70] = '\0';
    pcVar5[0x71] = '\0';
    pcVar5[0x72] = '\0';
    pcVar5[0x73] = '\0';
    pcVar5[0x78] = '\0';
    pcVar5[0x79] = '\0';
    pcVar5[0x7a] = '\0';
    pcVar5[0x7b] = '\0';
    pcVar5[0x7c] = '\0';
    pcVar5[0x7d] = '\0';
    pcVar5[0x7e] = '\0';
    pcVar5[0x7f] = '\0';
    pcVar5[0x80] = '\0';
    pcVar5[0x81] = '\0';
    pcVar5[0x82] = '\0';
    pcVar5[0x83] = '\0';
    pcVar5[0x84] = '\0';
    pcVar5[0x85] = '\0';
    pcVar5[0x86] = '\0';
    pcVar5[0x87] = '\0';
    pcVar5[0x88] = '\0';
    pcVar5[0x89] = '\0';
    pcVar5[0x8a] = '\0';
    pcVar5[0x8b] = '\0';
    pcVar5[0x8c] = '\0';
    pcVar5[0x8d] = '\0';
    pcVar5[0x8e] = '\0';
    pcVar5[0x8f] = '\0';
    pcVar5[0x90] = '\0';
    pcVar5[0x91] = '\0';
    pcVar5[0x92] = '\0';
    pcVar5[0x93] = '\0';
    pcVar5[0x94] = '\0';
    pcVar5[0x95] = '\0';
    pcVar5[0x96] = '\0';
    pcVar5[0x97] = '\0';
    pcVar5[0x98] = '\0';
    pcVar5[0x99] = '\0';
    pcVar5[0x9a] = '\0';
    pcVar5[0x9b] = '\0';
    pcVar5[0x9c] = '\0';
    pcVar5[0x9d] = '\0';
    pcVar5[0x9e] = '\0';
    pcVar5[0x9f] = '\0';
    pcVar5[0xa0] = '\0';
    pcVar5[0xa1] = '\0';
    pcVar5[0xa2] = '\0';
    pcVar5[0xa3] = '\0';
    pcVar5[0xa4] = '\0';
    pcVar5[0xa5] = '\0';
    pcVar5[0xa6] = '\0';
    pcVar5[0xa7] = '\0';
    pcVar5[0xa8] = '\0';
    pcVar5[0xa9] = '\0';
    pcVar5[0xaa] = '\0';
    pcVar5[0xab] = '\0';
    pcVar5[0xac] = '\0';
    pcVar5[0xad] = '\0';
    pcVar5[0xae] = '\0';
    pcVar5[0xaf] = '\0';
    pcVar5[0xb0] = '\0';
    pcVar5[0xb1] = '\0';
    pcVar5[0xb2] = '\0';
    pcVar5[0xb3] = '\0';
    pcVar5[0xb4] = '\0';
    pcVar5[0xb5] = '\0';
    pcVar5[0xb6] = '\0';
    pcVar5[0xb7] = '\0';
    pcVar5[0xb8] = '\0';
    pcVar5[0xb9] = '\0';
    pcVar5[0xba] = '\0';
    pcVar5[0xbb] = '\0';
    pcVar5[0xbc] = '\0';
    pcVar5[0xbd] = '\0';
    pcVar5[0xbe] = '\0';
    pcVar5[0xbf] = '\0';
    pcVar5[0xc0] = '\0';
    pcVar5[0xc1] = '\0';
    pcVar5[0xc2] = '\0';
    pcVar5[0xc3] = '\0';
    pcVar5[0xc4] = '\0';
    pcVar5[0xc5] = '\0';
    pcVar5[0xc6] = '\0';
    pcVar5[199] = '\0';
    pcVar9 = pcVar5;
  }
  FArchive::FArchive(&local_118);
  local_88 = 0;
  local_118 = &PTR_FUN_143f4a3a0;
  local_78 = 0x7fffffffffffffff;
  local_80 = param_3;
  FArchive::SetIsLoading(&local_118,1);
  FArchive::SetIsPersistent(&local_118,1);
  if ((undefined4 *)local_110[1] < (undefined4 *)*local_110 + 1) {
    (*(code *)local_118[10])(&local_118,pcVar9 + 0x70,4);
    if ((local_ef & 0x10) != 0) {
      FArchive::ByteSwap(&local_118,pcVar9 + 0x70,4);
    }
  }
  else {
    *(undefined4 *)(pcVar9 + 0x70) = *(undefined4 *)*local_110;
    *local_110 = *local_110 + 4;
  }
  FUN_1408bda20(&local_118,pcVar9 + 0x78);
  FUN_1408bda20(&local_118,pcVar9 + 0x88);
  FUN_1408bda20(&local_118,pcVar9 + 0x98);
  FUN_1408bda20(&local_118,pcVar9 + 0xa8);
  FUN_1408bda20(&local_118,pcVar9 + 0xb8);
  uVar4 = *(uint *)(param_3 + 1);
  lVar10 = (longlong)(int)local_88;
  if (3 < uVar4) {
    iVar8 = *(int *)(*param_3 + -4 + (longlong)(int)uVar4);
  }
  lVar3 = *param_3 + (longlong)(int)uVar4;
  piVar1 = (int *)(lVar3 - 4);
  uVar11 = (uVar4 - (int)local_88) - iVar8;
  uVar12 = (ulonglong)uVar11;
  iVar8 = 0;
  if (3 < uVar4) {
    iVar8 = *piVar1;
  }
  for (piVar6 = (int *)(lVar3 - iVar8); pcVar5 = (char *)0x0, piVar6 < piVar1;
      piVar6 = (int *)((char *)((longlong)piVar6 + 5) + *(uint *)((longlong)piVar6 + 1))) {
    if (((char)*piVar6 == 'p') &&
       (pcVar5 = (char *)((longlong)piVar6 + 5), *(uint *)((longlong)piVar6 + 1) == 5)) break;
  }
  plVar2 = (longlong *)(pcVar9 + 0x60);
  *(undefined4 *)(pcVar9 + 200) = *(undefined4 *)pcVar5;
  pcVar9[0xcc] = pcVar5[4];
  if (plVar2 != param_3) {
    iVar8 = (int)param_3[1];
    _Src = (void *)*param_3;
    *(int *)(pcVar9 + 0x68) = iVar8;
    if ((iVar8 == 0) && (*(int *)(pcVar9 + 0x6c) == 0)) {
      pcVar9[0x6c] = '\0';
      pcVar9[0x6d] = '\0';
      pcVar9[0x6e] = '\0';
      pcVar9[0x6f] = '\0';
      param_2 = local_130;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(plVar2,iVar8);
      _guard_xfg_dispatch_icall_nop((void *)*plVar2,_Src,(longlong)iVar8);
      param_2 = local_130;
    }
  }
  local_130 = (undefined8 *)(lVar10 + *plVar2);
  *(undefined8 **)(pcVar9 + 0x50) = local_130;
  *(uint *)(pcVar9 + 0x58) = uVar11;
  pcVar9[0x5c] = '\0';
  pcVar9[0x5d] = '\0';
  pcVar9[0x5e] = '\0';
  pcVar9[0x5f] = '\0';
  pcVar9[0x38] = '\0';
  pcVar9[0x39] = '\0';
  pcVar9[0x3a] = '\0';
  pcVar9[0x3b] = '\0';
  pcVar9[0x3c] = '\0';
  pcVar9[0x3d] = '\0';
  pcVar9[0x3e] = '\0';
  pcVar9[0x3f] = '\0';
  pcVar9[0x40] = '\0';
  pcVar9[0x41] = '\0';
  pcVar9[0x42] = '\0';
  pcVar9[0x43] = '\0';
  pcVar9[0x44] = '\0';
  pcVar9[0x45] = '\0';
  pcVar9[0x46] = '\0';
  pcVar9[0x47] = '\0';
  pcVar9[0x48] = '\0';
  pcVar9[0x49] = '\0';
  pcVar9[0x4a] = '\0';
  pcVar9[0x4b] = '\0';
  uStack_128 = uVar12;
  if ((*(longlong *)(pcVar9 + 0x50) != 0) && (*(ulonglong *)(pcVar9 + 0x58) != 0)) {
    FSHA1::HashBuffer(*(longlong *)(pcVar9 + 0x50),*(ulonglong *)(pcVar9 + 0x58) & 0xffffffff);
  }
  lVar10 = **(longlong **)(local_120 + 0x50);
  local_138[0] = *(undefined4 *)(lVar10 + 0x34);
  FUN_141a8b0b0(local_138,pcVar9,local_68);
  uVar7 = FD3D12RootSignatureManager::GetRootSignature(lVar10 + 400,local_68);
  *(undefined8 *)(pcVar9 + 0xd0) = uVar7;
  *param_2 = pcVar9;
  LOCK();
  *(int *)(pcVar9 + 8) = *(int *)(pcVar9 + 8) + 1;
  UNLOCK();
  FArchive::~FArchive(&local_118);
  return param_2;
}



// FUNCTION 141a773e0 FUN_141a773e0 body=559 status=ok
// SIG undefined FUN_141a773e0(void)

undefined8 * FUN_141a773e0(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  puVar5 = (undefined8 *)operator_new(0x68);
  puVar7 = (undefined8 *)0x0;
  uVar6 = 0;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar5 + 1) = 0;
    *puVar5 = &PTR_FUN_144daa640;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *(undefined2 *)(puVar5 + 2) = 0x100;
    *(char *)(puVar5 + 3) = *param_3;
    *(char *)((longlong)puVar5 + 0x19) = param_3[1];
    *(char *)((longlong)puVar5 + 0x1a) = param_3[2];
    *(char *)((longlong)puVar5 + 0x1b) = param_3[3];
    *(char *)((longlong)puVar5 + 0x1c) = param_3[4];
    *(char *)((longlong)puVar5 + 0x1d) = param_3[5];
    *(char *)((longlong)puVar5 + 0x1e) = param_3[6];
    *(char *)((longlong)puVar5 + 0x1f) = param_3[7];
    *(char *)(puVar5 + 4) = param_3[8];
    *(char *)((longlong)puVar5 + 0x21) = param_3[9];
    *(char *)((longlong)puVar5 + 0x22) = param_3[10];
    *(char *)((longlong)puVar5 + 0x23) = param_3[0xb];
    *(char *)((longlong)puVar5 + 0x24) = param_3[0xc];
    *(char *)((longlong)puVar5 + 0x25) = param_3[0xd];
    *(undefined4 *)(puVar5 + 0xc) = 0;
    puVar7 = puVar5;
  }
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  uVar8 = 1;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  if ((param_3[1] != '\a') || (uVar3 = 0, *param_3 != '\0')) {
    uVar3 = uVar8;
  }
  *(uint *)(puVar7 + 5) = uVar3;
  *(uint *)((longlong)puVar7 + 0x2c) = (uint)(*param_3 != '\0');
  uVar4 = FUN_141a44170(param_3[1]);
  *(undefined4 *)(puVar7 + 6) = uVar4;
  if ((param_3[2] == '\0') && (param_3[7] == '\0')) {
    uVar8 = uVar6;
  }
  *(uint *)((longlong)puVar7 + 0x34) = uVar8;
  *(char *)(puVar7 + 7) = param_3[0xc];
  *(char *)((longlong)puVar7 + 0x39) = param_3[0xd];
  uVar4 = FUN_141a44170(param_3[3]);
  *(undefined4 *)(puVar7 + 9) = uVar4;
  uVar4 = FUN_141a441e0(param_3[4]);
  *(undefined4 *)((longlong)puVar7 + 0x3c) = uVar4;
  uVar4 = FUN_141a441e0(param_3[5]);
  *(undefined4 *)(puVar7 + 8) = uVar4;
  uVar4 = FUN_141a441e0();
  *(undefined4 *)((longlong)puVar7 + 0x44) = uVar4;
  if (param_3[7] == '\0') {
    *(undefined8 *)((longlong)puVar7 + 0x4c) = *(undefined8 *)((longlong)puVar7 + 0x3c);
    *(undefined8 *)((longlong)puVar7 + 0x54) = *(undefined8 *)((longlong)puVar7 + 0x44);
  }
  else {
    uVar4 = FUN_141a44170(param_3[8]);
    *(undefined4 *)(puVar7 + 0xb) = uVar4;
    uVar4 = FUN_141a441e0(param_3[9]);
    *(undefined4 *)((longlong)puVar7 + 0x4c) = uVar4;
    uVar4 = FUN_141a441e0(param_3[10]);
    *(undefined4 *)(puVar7 + 10) = uVar4;
    uVar4 = FUN_141a441e0();
    *(undefined4 *)((longlong)puVar7 + 0x54) = uVar4;
  }
  *(uint *)((longlong)puVar7 + 0x5c) = uVar6;
  if (((((param_3[4] == '\0') && (param_3[5] == '\0')) && (param_3[6] == '\0')) &&
      ((param_3[9] == '\0' && (param_3[10] == '\0')))) && (param_3[0xb] == '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((param_3[0xd] == '\0') || (bVar2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  cVar1 = *param_3;
  *(uint *)(puVar7 + 0xc) = uVar6;
  if (cVar1 != '\0') {
    *(undefined4 *)(puVar7 + 0xc) = 2;
    uVar6 = 2;
  }
  if (bVar2) {
    *(uint *)(puVar7 + 0xc) = uVar6 | 0x20;
  }
  *param_2 = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a77610 FUN_141a77610 body=796 status=ok
// SIG undefined FUN_141a77610(void)

undefined8 * FUN_141a77610(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  void *_Src;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined **local_d8;
  longlong *local_d0;
  byte local_af;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  
  pcVar5 = (char *)operator_new(200);
  iVar9 = 0;
  pcVar8 = (char *)0x0;
  if (pcVar5 != (char *)0x0) {
    *(undefined ***)pcVar5 = &PTR_FUN_143f3ece8;
    pcVar5[8] = '\0';
    pcVar5[9] = '\0';
    pcVar5[10] = '\0';
    pcVar5[0xb] = '\0';
    pcVar5[0xc] = '\0';
    pcVar5[0xd] = '\0';
    pcVar5[0xe] = '\0';
    pcVar5[0xf] = '\0';
    pcVar5[0x10] = '\0';
    pcVar5[0x11] = '\x01';
    pcVar5[0x18] = '\0';
    pcVar5[0x19] = '\0';
    pcVar5[0x1a] = '\0';
    pcVar5[0x1b] = '\0';
    pcVar5[0x1c] = '\0';
    pcVar5[0x1d] = '\0';
    pcVar5[0x1e] = '\0';
    pcVar5[0x1f] = '\0';
    pcVar5[0x20] = '\0';
    pcVar5[0x21] = '\0';
    pcVar5[0x22] = '\0';
    pcVar5[0x23] = '\0';
    pcVar5[0x24] = '\0';
    pcVar5[0x25] = '\0';
    pcVar5[0x26] = '\0';
    pcVar5[0x27] = '\0';
    pcVar5[0x28] = '\0';
    pcVar5[0x29] = '\0';
    pcVar5[0x2a] = '\0';
    pcVar5[0x2b] = '\0';
    *(undefined ***)pcVar5 = &PTR__scalar_deleting_destructor__144daa6a0;
    pcVar5[0x48] = '\0';
    pcVar5[0x49] = '\0';
    pcVar5[0x4a] = '\0';
    pcVar5[0x4b] = '\0';
    pcVar5[0x4c] = '\0';
    pcVar5[0x4d] = '\0';
    pcVar5[0x4e] = '\0';
    pcVar5[0x4f] = '\0';
    pcVar5[0x50] = '\0';
    pcVar5[0x51] = '\0';
    pcVar5[0x52] = '\0';
    pcVar5[0x53] = '\0';
    pcVar5[0x54] = '\0';
    pcVar5[0x55] = '\0';
    pcVar5[0x56] = '\0';
    pcVar5[0x57] = '\0';
    pcVar5[0x30] = '\0';
    pcVar5[0x31] = '\0';
    pcVar5[0x32] = '\0';
    pcVar5[0x33] = '\0';
    pcVar5[0x34] = '\0';
    pcVar5[0x35] = '\0';
    pcVar5[0x36] = '\0';
    pcVar5[0x37] = '\0';
    pcVar5[0x38] = '\0';
    pcVar5[0x39] = '\0';
    pcVar5[0x3a] = '\0';
    pcVar5[0x3b] = '\0';
    pcVar5[0x3c] = '\0';
    pcVar5[0x3d] = '\0';
    pcVar5[0x3e] = '\0';
    pcVar5[0x3f] = '\0';
    pcVar5[0x40] = '\0';
    pcVar5[0x41] = '\0';
    pcVar5[0x42] = '\0';
    pcVar5[0x43] = '\0';
    pcVar5[0x58] = '\0';
    pcVar5[0x59] = '\0';
    pcVar5[0x5a] = '\0';
    pcVar5[0x5b] = '\0';
    pcVar5[0x60] = '\0';
    pcVar5[0x61] = '\0';
    pcVar5[0x62] = '\0';
    pcVar5[99] = '\0';
    pcVar5[100] = '\0';
    pcVar5[0x65] = '\0';
    pcVar5[0x66] = '\0';
    pcVar5[0x67] = '\0';
    pcVar5[0x68] = '\0';
    pcVar5[0x69] = '\0';
    pcVar5[0x6a] = '\0';
    pcVar5[0x6b] = '\0';
    pcVar5[0x6c] = '\0';
    pcVar5[0x6d] = '\0';
    pcVar5[0x6e] = '\0';
    pcVar5[0x6f] = '\0';
    pcVar5[0x70] = '\0';
    pcVar5[0x71] = '\0';
    pcVar5[0x72] = '\0';
    pcVar5[0x73] = '\0';
    pcVar5[0x74] = '\0';
    pcVar5[0x75] = '\0';
    pcVar5[0x76] = '\0';
    pcVar5[0x77] = '\0';
    pcVar5[0x78] = '\0';
    pcVar5[0x79] = '\0';
    pcVar5[0x7a] = '\0';
    pcVar5[0x7b] = '\0';
    pcVar5[0x7c] = '\0';
    pcVar5[0x7d] = '\0';
    pcVar5[0x7e] = '\0';
    pcVar5[0x7f] = '\0';
    pcVar5[0x80] = '\0';
    pcVar5[0x81] = '\0';
    pcVar5[0x82] = '\0';
    pcVar5[0x83] = '\0';
    pcVar5[0x84] = '\0';
    pcVar5[0x85] = '\0';
    pcVar5[0x86] = '\0';
    pcVar5[0x87] = '\0';
    pcVar5[0x88] = '\0';
    pcVar5[0x89] = '\0';
    pcVar5[0x8a] = '\0';
    pcVar5[0x8b] = '\0';
    pcVar5[0x8c] = '\0';
    pcVar5[0x8d] = '\0';
    pcVar5[0x8e] = '\0';
    pcVar5[0x8f] = '\0';
    pcVar5[0x90] = '\0';
    pcVar5[0x91] = '\0';
    pcVar5[0x92] = '\0';
    pcVar5[0x93] = '\0';
    pcVar5[0x94] = '\0';
    pcVar5[0x95] = '\0';
    pcVar5[0x96] = '\0';
    pcVar5[0x97] = '\0';
    pcVar5[0x98] = '\0';
    pcVar5[0x99] = '\0';
    pcVar5[0x9a] = '\0';
    pcVar5[0x9b] = '\0';
    pcVar5[0x9c] = '\0';
    pcVar5[0x9d] = '\0';
    pcVar5[0x9e] = '\0';
    pcVar5[0x9f] = '\0';
    pcVar5[0xa0] = '\0';
    pcVar5[0xa1] = '\0';
    pcVar5[0xa2] = '\0';
    pcVar5[0xa3] = '\0';
    pcVar5[0xa4] = '\0';
    pcVar5[0xa5] = '\0';
    pcVar5[0xa6] = '\0';
    pcVar5[0xa7] = '\0';
    pcVar5[0xa8] = '\0';
    pcVar5[0xa9] = '\0';
    pcVar5[0xaa] = '\0';
    pcVar5[0xab] = '\0';
    pcVar5[0xac] = '\0';
    pcVar5[0xad] = '\0';
    pcVar5[0xae] = '\0';
    pcVar5[0xaf] = '\0';
    pcVar5[0xb0] = '\0';
    pcVar5[0xb1] = '\0';
    pcVar5[0xb2] = '\0';
    pcVar5[0xb3] = '\0';
    pcVar5[0xb4] = '\0';
    pcVar5[0xb5] = '\0';
    pcVar5[0xb6] = '\0';
    pcVar5[0xb7] = '\0';
    pcVar5[0xb8] = '\0';
    pcVar5[0xb9] = '\0';
    pcVar5[0xba] = '\0';
    pcVar5[0xbb] = '\0';
    pcVar5[0xbc] = '\0';
    pcVar5[0xbd] = '\0';
    pcVar5[0xbe] = '\0';
    pcVar5[0xbf] = '\0';
    pcVar8 = pcVar5;
  }
  FArchive::FArchive(&local_d8);
  local_48 = 0;
  local_d8 = &PTR_FUN_143f4a3a0;
  local_38 = 0x7fffffffffffffff;
  local_40 = param_3;
  FArchive::SetIsLoading(&local_d8,1);
  FArchive::SetIsPersistent(&local_d8,1);
  if ((undefined4 *)local_d0[1] < (undefined4 *)*local_d0 + 1) {
    (*(code *)local_d8[10])(&local_d8,pcVar8 + 0x58,4);
    if ((local_af & 0x10) != 0) {
      FArchive::ByteSwap(&local_d8,pcVar8 + 0x58,4);
    }
  }
  else {
    *(undefined4 *)(pcVar8 + 0x58) = *(undefined4 *)*local_d0;
    *local_d0 = *local_d0 + 4;
  }
  FUN_1408bda20(&local_d8,pcVar8 + 0x60);
  FUN_1408bda20(&local_d8,pcVar8 + 0x70);
  FUN_1408bda20(&local_d8,pcVar8 + 0x80);
  FUN_1408bda20(&local_d8,pcVar8 + 0x90);
  FUN_1408bda20(&local_d8,pcVar8 + 0xa0);
  uVar4 = *(uint *)(param_3 + 1);
  lVar10 = (longlong)(int)local_48;
  if (3 < uVar4) {
    iVar9 = *(int *)((longlong)(int)uVar4 + -4 + *param_3);
  }
  lVar3 = (longlong)(int)uVar4 + *param_3;
  iVar11 = uVar4 - (int)local_48;
  piVar1 = (int *)(lVar3 - 4);
  iVar7 = 0;
  if (3 < uVar4) {
    iVar7 = *piVar1;
  }
  for (piVar6 = (int *)(lVar3 - iVar7); pcVar5 = (char *)0x0, piVar6 < piVar1;
      piVar6 = (int *)((char *)((longlong)piVar6 + 5) + *(uint *)((longlong)piVar6 + 1))) {
    if (((char)*piVar6 == 'p') &&
       (pcVar5 = (char *)((longlong)piVar6 + 5), *(uint *)((longlong)piVar6 + 1) == 5)) break;
  }
  plVar2 = (longlong *)(pcVar8 + 0xb0);
  *(undefined4 *)(pcVar8 + 0xc0) = *(undefined4 *)pcVar5;
  pcVar8[0xc4] = pcVar5[4];
  if (plVar2 != param_3) {
    iVar7 = (int)param_3[1];
    _Src = (void *)*param_3;
    *(int *)(pcVar8 + 0xb8) = iVar7;
    if ((iVar7 == 0) && (*(int *)(pcVar8 + 0xbc) == 0)) {
      pcVar8[0xbc] = '\0';
      pcVar8[0xbd] = '\0';
      pcVar8[0xbe] = '\0';
      pcVar8[0xbf] = '\0';
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(plVar2,iVar7);
      _guard_xfg_dispatch_icall_nop((void *)*plVar2,_Src,(longlong)iVar7);
    }
  }
  *(longlong *)(pcVar8 + 0x48) = lVar10 + *plVar2;
  *(int *)(pcVar8 + 0x50) = iVar11 - iVar9;
  pcVar8[0x54] = '\0';
  pcVar8[0x55] = '\0';
  pcVar8[0x56] = '\0';
  pcVar8[0x57] = '\0';
  pcVar8[0x30] = '\0';
  pcVar8[0x31] = '\0';
  pcVar8[0x32] = '\0';
  pcVar8[0x33] = '\0';
  pcVar8[0x34] = '\0';
  pcVar8[0x35] = '\0';
  pcVar8[0x36] = '\0';
  pcVar8[0x37] = '\0';
  pcVar8[0x38] = '\0';
  pcVar8[0x39] = '\0';
  pcVar8[0x3a] = '\0';
  pcVar8[0x3b] = '\0';
  pcVar8[0x3c] = '\0';
  pcVar8[0x3d] = '\0';
  pcVar8[0x3e] = '\0';
  pcVar8[0x3f] = '\0';
  pcVar8[0x40] = '\0';
  pcVar8[0x41] = '\0';
  pcVar8[0x42] = '\0';
  pcVar8[0x43] = '\0';
  if ((*(longlong *)(pcVar8 + 0x48) != 0) && (*(ulonglong *)(pcVar8 + 0x50) != 0)) {
    FSHA1::HashBuffer(*(longlong *)(pcVar8 + 0x48),*(ulonglong *)(pcVar8 + 0x50) & 0xffffffff);
  }
  *param_2 = pcVar8;
  LOCK();
  *(int *)(pcVar8 + 8) = *(int *)(pcVar8 + 8) + 1;
  UNLOCK();
  FArchive::~FArchive(&local_d8);
  return param_2;
}



// FUNCTION 141a77930 FUN_141a77930 body=659 status=ok
// SIG undefined FUN_141a77930(void)

longlong * FUN_141a77930(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  void *_Src;
  longlong lVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined **local_d8;
  longlong *local_d0;
  byte local_af;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  
  lVar5 = operator_new(0xf8);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FD3D12GeometryShader::FD3D12GeometryShader(lVar5);
  }
  FArchive::FArchive(&local_d8);
  local_48 = 0;
  local_d8 = &PTR_FUN_143f4a3a0;
  local_38 = 0x7fffffffffffffff;
  local_40 = param_3;
  FArchive::SetIsLoading(&local_d8,1);
  FArchive::SetIsPersistent(&local_d8,1);
  if ((undefined4 *)local_d0[1] < (undefined4 *)*local_d0 + 1) {
    (*(code *)local_d8[10])(&local_d8,lVar5 + 0x58,4);
    if ((local_af & 0x10) != 0) {
      FArchive::ByteSwap(&local_d8,lVar5 + 0x58,4);
    }
  }
  else {
    *(undefined4 *)(lVar5 + 0x58) = *(undefined4 *)*local_d0;
    *local_d0 = *local_d0 + 4;
  }
  FUN_1408bda20(&local_d8,lVar5 + 0x60);
  FUN_1408bda20(&local_d8,lVar5 + 0x70);
  FUN_1408bda20(&local_d8,lVar5 + 0x80);
  FUN_1408bda20(&local_d8,lVar5 + 0x90);
  FUN_1408bda20(&local_d8,lVar5 + 0xa0);
  uVar4 = *(uint *)(param_3 + 1);
  lVar10 = (longlong)(int)local_48;
  if (uVar4 < 4) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)((longlong)(int)uVar4 + -4 + *param_3);
  }
  lVar3 = (longlong)(int)uVar4 + *param_3;
  iVar11 = uVar4 - (int)local_48;
  piVar1 = (int *)(lVar3 - 4);
  if (uVar4 < 4) {
    iVar9 = 0;
  }
  else {
    iVar9 = *piVar1;
  }
  for (piVar6 = (int *)(lVar3 - iVar9); piVar6 < piVar1;
      piVar6 = (int *)(pcVar7 + *(uint *)((longlong)piVar6 + 1))) {
    pcVar7 = (char *)((longlong)piVar6 + 5);
    if (((char)*piVar6 == 'p') && (*(uint *)((longlong)piVar6 + 1) == 5)) goto LAB_141a77ace;
  }
  pcVar7 = (char *)0x0;
LAB_141a77ace:
  plVar2 = (longlong *)(lVar5 + 0xb0);
  *(undefined4 *)(lVar5 + 0xf1) = *(undefined4 *)pcVar7;
  *(char *)(lVar5 + 0xf5) = pcVar7[4];
  if (plVar2 != param_3) {
    _Src = (void *)*param_3;
    iVar9 = (int)param_3[1];
    *(int *)(lVar5 + 0xb8) = iVar9;
    if ((iVar9 == 0) && (*(int *)(lVar5 + 0xbc) == 0)) {
      *(undefined4 *)(lVar5 + 0xbc) = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(plVar2,iVar9);
      _guard_xfg_dispatch_icall_nop((void *)*plVar2,_Src,(longlong)iVar9);
    }
  }
  *(longlong *)(lVar5 + 0x48) = lVar10 + *plVar2;
  *(int *)(lVar5 + 0x50) = iVar11 - iVar8;
  *(undefined4 *)(lVar5 + 0x54) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(undefined4 *)(lVar5 + 0x40) = 0;
  if ((*(longlong *)(lVar5 + 0x48) != 0) && (*(ulonglong *)(lVar5 + 0x50) != 0)) {
    FSHA1::HashBuffer(*(longlong *)(lVar5 + 0x48),*(ulonglong *)(lVar5 + 0x50) & 0xffffffff);
  }
  *param_2 = lVar5;
  LOCK();
  *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
  UNLOCK();
  FArchive::~FArchive(&local_d8);
  return param_2;
}



// FUNCTION 141a77bd0 FUN_141a77bd0 body=889 status=ok
// SIG undefined FUN_141a77bd0(void)

longlong *
FUN_141a77bd0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,uint param_5,
             void *param_6,int param_7)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  char *pcVar9;
  undefined8 uVar10;
  void *_Dst;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined **local_d8;
  longlong *local_d0;
  byte local_af;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  
  lVar5 = operator_new(0xf8);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FD3D12GeometryShader::FD3D12GeometryShader(lVar5);
  }
  FArchive::FArchive(&local_d8);
  local_48 = 0;
  local_d8 = &PTR_FUN_143f4a3a0;
  local_38 = 0x7fffffffffffffff;
  local_40 = param_3;
  FArchive::SetIsLoading(&local_d8,1);
  FArchive::SetIsPersistent(&local_d8,1);
  if ((undefined4 *)local_d0[1] < (undefined4 *)*local_d0 + 1) {
    (*(code *)local_d8[10])(&local_d8,lVar5 + 0x58,4);
    if ((local_af & 0x10) != 0) {
      FArchive::ByteSwap(&local_d8,lVar5 + 0x58,4);
    }
  }
  else {
    *(undefined4 *)(lVar5 + 0x58) = *(undefined4 *)*local_d0;
    *local_d0 = *local_d0 + 4;
  }
  FUN_1408bda20(&local_d8,lVar5 + 0x60);
  FUN_1408bda20(&local_d8,lVar5 + 0x70);
  FUN_1408bda20(&local_d8,lVar5 + 0x80);
  FUN_1408bda20(&local_d8,lVar5 + 0x90);
  FUN_1408bda20(&local_d8,lVar5 + 0xa0);
  uVar3 = *(uint *)(param_3 + 1);
  lVar13 = (longlong)(int)local_48;
  if (uVar3 < 4) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((longlong)(int)uVar3 + -4 + *param_3);
  }
  iVar12 = uVar3 - (int)local_48;
  if (param_7 == -1) {
    param_7 = -1;
  }
  *(int *)(lVar5 + 0xdc) = param_7;
  lVar6 = (longlong)*(int *)(param_4 + 0x300);
  *(int *)(lVar5 + 200) = *(int *)(param_4 + 0x300);
  lVar7 = operator_new();
  *(longlong *)(lVar5 + 0xe0) = lVar7;
  *(longlong *)(lVar5 + 0xc0) = lVar7;
  if (lVar7 != 0) {
    if (0 < lVar6) {
      lVar7 = 0;
      do {
        lVar1 = lVar7 + 0x18;
        *(undefined4 *)(lVar7 + *(longlong *)(lVar5 + 0xe0)) = *(undefined4 *)(param_4 + lVar7);
        *(undefined8 *)(*(longlong *)(lVar5 + 0xe0) + -0x10 + lVar1) =
             *(undefined8 *)(param_4 + -0x10 + lVar1);
        *(undefined4 *)(*(longlong *)(lVar5 + 0xe0) + -8 + lVar1) =
             *(undefined4 *)(param_4 + -8 + lVar1);
        *(undefined1 *)(*(longlong *)(lVar5 + 0xe0) + -4 + lVar1) =
             *(undefined1 *)(param_4 + -4 + lVar1);
        *(undefined1 *)(*(longlong *)(lVar5 + 0xe0) + -3 + lVar1) =
             *(undefined1 *)(param_4 + -3 + lVar1);
        *(undefined1 *)(*(longlong *)(lVar5 + 0xe0) + -2 + lVar1) =
             *(undefined1 *)(param_4 + -2 + lVar1);
        lVar6 = lVar6 + -1;
        lVar7 = lVar1;
      } while (lVar6 != 0);
    }
    lVar6 = *param_3 + (longlong)(int)*(uint *)(param_3 + 1);
    piVar2 = (int *)(lVar6 - 4);
    if (*(uint *)(param_3 + 1) < 4) {
      iVar11 = 0;
    }
    else {
      iVar11 = *piVar2;
    }
    for (piVar8 = (int *)(lVar6 - iVar11); piVar8 < piVar2;
        piVar8 = (int *)(pcVar9 + *(uint *)((longlong)piVar8 + 1))) {
      pcVar9 = (char *)((longlong)piVar8 + 5);
      if (((char)*piVar8 == 'p') && (*(uint *)((longlong)piVar8 + 1) == 5)) goto LAB_141a77e4e;
    }
    pcVar9 = (char *)0x0;
LAB_141a77e4e:
    *(undefined4 *)(lVar5 + 0xf1) = *(undefined4 *)pcVar9;
    *(char *)(lVar5 + 0xf5) = pcVar9[4];
    uVar10 = SUB168(ZEXT816(4) * ZEXT416(param_5),0);
    *(uint *)(lVar5 + 0xd8) = param_5;
    *(undefined1 *)(lVar5 + 0xf0) = 1;
    if (SUB168(ZEXT816(4) * ZEXT416(param_5),8) != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    _Dst = (void *)operator_new(uVar10);
    *(void **)(lVar5 + 0xe8) = _Dst;
    *(void **)(lVar5 + 0xd0) = _Dst;
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,param_6,(ulonglong)param_5 * 4);
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(lVar5 + 0xb0,param_3);
      *(longlong *)(lVar5 + 0x48) = lVar13 + *(longlong *)(lVar5 + 0xb0);
      *(int *)(lVar5 + 0x50) = iVar12 - iVar4;
      *(undefined4 *)(lVar5 + 0x54) = 0;
      *(undefined8 *)(lVar5 + 0x30) = 0;
      *(undefined8 *)(lVar5 + 0x38) = 0;
      *(undefined4 *)(lVar5 + 0x40) = 0;
      if ((*(longlong *)(lVar5 + 0x48) != 0) && (*(ulonglong *)(lVar5 + 0x50) != 0)) {
        FSHA1::HashBuffer(*(longlong *)(lVar5 + 0x48),*(ulonglong *)(lVar5 + 0x50) & 0xffffffff);
      }
      *param_2 = lVar5;
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
      goto LAB_141a77f1b;
    }
  }
  *param_2 = 0;
LAB_141a77f1b:
  FArchive::~FArchive(&local_d8);
  return param_2;
}



// FUNCTION 141a77f50 FUN_141a77f50 body=1272 status=ok
// SIG undefined FUN_141a77f50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141a77f50(longlong **param_1,longlong *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  char cVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  longlong **pplVar20;
  undefined1 auStack_ae8 [32];
  longlong local_ac8;
  undefined8 local_ac0;
  undefined8 local_ab8;
  undefined8 local_ab0;
  undefined1 local_aa0 [8];
  longlong local_a98;
  longlong local_a90;
  undefined8 local_a88;
  undefined8 local_a80;
  undefined8 local_a78;
  longlong local_a70;
  undefined8 local_a68;
  undefined8 local_a60;
  undefined8 local_a58;
  undefined8 local_a50;
  code *local_a40 [2];
  undefined1 local_a30 [32];
  undefined8 local_a10;
  undefined4 local_a00;
  undefined1 local_9f0 [784];
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined8 local_6c0;
  undefined8 local_6b0;
  undefined8 local_6a0;
  undefined8 local_690;
  undefined8 local_680;
  undefined8 local_670;
  undefined8 local_4b0;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_3d8;
  undefined8 *local_3c0;
  undefined8 *puStack_3b8;
  longlong *local_3b0;
  undefined8 *puStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  longlong **local_390;
  int local_380;
  undefined8 local_370 [97];
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_1468387a8 ^ (ulonglong)auStack_ae8;
  lVar18 = *param_1[10];
  puVar17 = (undefined8 *)(lVar18 + 0x210);
  lVar11 = FUN_141a724a0(puVar17,param_3,&local_a58);
  if (lVar11 != 0) {
    *param_2 = lVar11;
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
    return param_2;
  }
  local_a88 = param_3[5];
  local_a70 = param_3[4];
  local_a80 = param_3[3];
  local_a78 = param_3[2];
  local_a68 = param_3[1];
  local_a60 = *param_3;
  local_3c0 = &local_a60;
  puStack_3b8 = &local_a68;
  local_3b0 = &local_a70;
  puStack_3a8 = &local_a78;
  local_3a0 = &local_a80;
  uStack_398 = &local_a88;
  local_a10 = 0;
  local_a00 = 0;
  local_390 = param_1;
  puVar12 = (undefined8 *)FUN_140438ef0(0x40,local_a30);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &PTR_FUN_144213c30;
    puVar12[1] = local_3c0;
    puVar12[2] = puStack_3b8;
    puVar12[3] = local_3b0;
    puVar12[4] = puStack_3a8;
    *(undefined4 *)(puVar12 + 5) = (undefined4)local_3a0;
    *(undefined4 *)((longlong)puVar12 + 0x2c) = local_3a0._4_4_;
    *(undefined4 *)(puVar12 + 6) = (undefined4)uStack_398;
    *(undefined4 *)((longlong)puVar12 + 0x34) = uStack_398._4_4_;
    puVar12[7] = local_390;
  }
  local_a40[0] = FUN_141a6b9d0;
  local_ab0 = local_a88;
  local_ab8 = local_a80;
  local_ac0 = local_a78;
  local_ac8 = local_a70;
  FUN_141ec7eb0(&local_a90,local_a40,local_a60,local_a68);
  local_a50 = local_a58;
  local_a98 = local_a90;
  puVar12 = (undefined8 *)FUN_141a72b90(local_9f0,param_3,local_a90);
  lVar19 = 6;
  lVar11 = 6;
  puVar9 = local_370;
  do {
    puVar15 = puVar9;
    puVar13 = puVar12;
    uVar5 = puVar13[1];
    *puVar15 = *puVar13;
    puVar15[1] = uVar5;
    uVar5 = puVar13[3];
    puVar15[2] = puVar13[2];
    puVar15[3] = uVar5;
    uVar5 = puVar13[5];
    puVar15[4] = puVar13[4];
    puVar15[5] = uVar5;
    uVar5 = puVar13[7];
    puVar15[6] = puVar13[6];
    puVar15[7] = uVar5;
    uVar5 = puVar13[9];
    puVar15[8] = puVar13[8];
    puVar15[9] = uVar5;
    uVar5 = puVar13[0xb];
    puVar15[10] = puVar13[10];
    puVar15[0xb] = uVar5;
    uVar5 = puVar13[0xd];
    puVar15[0xc] = puVar13[0xc];
    puVar15[0xd] = uVar5;
    uVar5 = puVar13[0xf];
    puVar15[0xe] = puVar13[0xe];
    puVar15[0xf] = uVar5;
    lVar11 = lVar11 + -1;
    puVar12 = puVar13 + 0x10;
    puVar9 = puVar15 + 0x10;
  } while (lVar11 != 0);
  uVar5 = puVar13[0x11];
  puVar15[0x10] = puVar13[0x10];
  puVar15[0x11] = uVar5;
  puVar12 = &local_6e0;
  puVar9 = local_370;
  do {
    puVar15 = puVar9;
    puVar13 = puVar12;
    uVar5 = puVar15[1];
    uVar6 = puVar15[2];
    uVar7 = puVar15[3];
    *puVar13 = *puVar15;
    puVar13[1] = uVar5;
    uVar5 = puVar15[4];
    uVar8 = puVar15[5];
    puVar13[2] = uVar6;
    puVar13[3] = uVar7;
    uVar6 = puVar15[6];
    uVar7 = puVar15[7];
    puVar13[4] = uVar5;
    puVar13[5] = uVar8;
    uVar5 = puVar15[8];
    uVar8 = puVar15[9];
    puVar13[6] = uVar6;
    puVar13[7] = uVar7;
    uVar6 = puVar15[10];
    uVar7 = puVar15[0xb];
    puVar13[8] = uVar5;
    puVar13[9] = uVar8;
    uVar5 = puVar15[0xc];
    uVar8 = puVar15[0xd];
    puVar13[10] = uVar6;
    puVar13[0xb] = uVar7;
    uVar1 = *(undefined4 *)(puVar15 + 0xe);
    uVar2 = *(undefined4 *)((longlong)puVar15 + 0x74);
    uVar3 = *(undefined4 *)(puVar15 + 0xf);
    uVar4 = *(undefined4 *)((longlong)puVar15 + 0x7c);
    puVar13[0xc] = uVar5;
    puVar13[0xd] = uVar8;
    *(undefined4 *)(puVar13 + 0xe) = uVar1;
    *(undefined4 *)((longlong)puVar13 + 0x74) = uVar2;
    *(undefined4 *)(puVar13 + 0xf) = uVar3;
    *(undefined4 *)((longlong)puVar13 + 0x7c) = uVar4;
    lVar19 = lVar19 + -1;
    puVar12 = puVar13 + 0x10;
    puVar9 = puVar15 + 0x10;
  } while (lVar19 != 0);
  uVar1 = *(undefined4 *)((longlong)puVar15 + 0x84);
  uVar2 = *(undefined4 *)(puVar15 + 0x11);
  uVar3 = *(undefined4 *)((longlong)puVar15 + 0x8c);
  *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar15 + 0x10);
  *(undefined4 *)((longlong)puVar13 + 0x84) = uVar1;
  *(undefined4 *)(puVar13 + 0x11) = uVar2;
  *(undefined4 *)((longlong)puVar13 + 0x8c) = uVar3;
  local_6d0 = 0;
  local_6c0 = 0;
  local_6a0 = 0;
  local_6b0 = 0;
  local_690 = 0;
  local_4b0 = 0;
  local_670 = 0;
  local_680 = 0;
  local_460 = 0;
  local_458 = 0;
  local_3d8 = 0;
  uStack_6d8 = 0;
  local_6e0 = 0;
  local_68 = FUN_141a74790(&local_6e0,0x310);
  AcquireSRWLockShared((PSRWLOCK)(lVar18 + 0x478));
  if (*(int *)(lVar18 + 0x2c8) != *(int *)(lVar18 + 0x2f4)) {
    lVar11 = *(longlong *)(lVar18 + 0x300);
    if (*(longlong *)(lVar18 + 0x300) == 0) {
      lVar11 = lVar18 + 0x2f8;
    }
    iVar16 = *(int *)(lVar11 + ((longlong)
                                ((int)((ulonglong)local_68 >> 0x20) * 0x17 + (int)local_68) &
                               (longlong)*(int *)(lVar18 + 0x308) - 1U) * 4);
    if (iVar16 != -1) {
      lVar11 = *(longlong *)(lVar18 + 0x2c0);
      do {
        lVar19 = (longlong)iVar16 * 800 + lVar11;
        cVar10 = equality_pipeline_state_desc<FD3D12LowLevelGraphicsPipelineStateDesc>::operator()
                           (local_aa0,lVar19,local_370);
        if (cVar10 != '\0') {
          if (iVar16 != -1) goto LAB_141a782e6;
          break;
        }
        iVar16 = *(int *)(lVar19 + 0x318);
      } while (iVar16 != -1);
    }
  }
  lVar19 = 0;
LAB_141a782e6:
  plVar14 = (longlong *)(lVar19 + 0x310);
  if (lVar19 == 0) {
    plVar14 = (longlong *)0x0;
  }
  if (plVar14 == (longlong *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar18 + 0x478));
    lVar18 = local_a98;
LAB_141a7834a:
    local_a98 = 0;
    local_390 = (longlong **)0x0;
    local_380 = 0;
    puVar12 = (undefined8 *)FUN_140438ef0(0x10,&local_3b0);
    if (puVar12 != (undefined8 *)0x0) {
      puVar12[1] = puVar17;
      *puVar12 = &PTR_FUN_143f77b70;
    }
    local_3c0 = (undefined8 *)&LAB_141a6ba10;
    FUN_141a6a750(puVar17,local_370,&local_a98,&local_3c0);
    if (local_380 != 0) {
      pplVar20 = &local_3b0;
      if (local_390 != (longlong **)0x0) {
        pplVar20 = local_390;
      }
      if (pplVar20 != (longlong **)0x0) {
        (*(code *)(*pplVar20)[2])(pplVar20,0);
      }
    }
    if (local_390 != (longlong **)0x0) {
      FMemory::Free();
    }
    local_ac8 = local_a98;
    lVar11 = (**(code **)*puVar17)(puVar17,param_3,local_a58,lVar18);
    *param_2 = lVar11;
    if (lVar11 == 0) goto LAB_141a78412;
  }
  else {
    lVar11 = *plVar14;
    ReleaseSRWLockShared((PSRWLOCK)(lVar18 + 0x478));
    lVar18 = local_a98;
    if ((lVar11 == 0) ||
       (local_ac8 = lVar11, lVar11 = (**(code **)*puVar17)(puVar17,param_3,local_a50,local_a98),
       lVar11 == 0)) goto LAB_141a7834a;
    *param_2 = lVar11;
  }
  LOCK();
  *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
  UNLOCK();
LAB_141a78412:
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a90);
  return param_2;
}



// FUNCTION 141a78450 FUN_141a78450 body=288 status=ok
// SIG undefined FUN_141a78450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_141a78450(longlong param_1,longlong *param_2,undefined4 param_3,uint param_4,uint param_5,
             undefined8 param_6)

{
  longlong lVar1;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  uint local_f0;
  uint local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined4 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uStack_9c = 1;
  uStack_98 = 0;
  local_b8 = (ulonglong)param_4;
  local_60._0_4_ = 0;
  uStack_c0 = 0;
  uStack_ac = 0x10001;
  if ((param_5 & 8) != 0) {
    local_60._0_4_ = 4;
  }
  local_c8 = 1;
  uStack_b0 = 1;
  uStack_a4 = 1;
  local_90 = 1;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_7c = 0;
  uStack_78 = 1;
  uStack_74 = 0x10001;
  local_70 = 0;
  uStack_6c = 1;
  uStack_68 = 0;
  uStack_64 = 1;
  if ((param_5 >> 9 & 1) == 0) {
    local_60._0_4_ = (uint)local_60 | 8;
  }
  local_60 = CONCAT44(uStack_94,(uint)local_60);
  local_d8 = 0;
  local_e0 = param_6;
  local_e8 = param_5;
  local_58[0] = 1;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_44 = 0;
  uStack_40 = 1;
  uStack_3c = 0x10001;
  local_38 = 0;
  uStack_34 = 1;
  uStack_30 = 0;
  uStack_2c = 1;
  local_28 = local_60;
  local_f8 = param_3;
  local_f0 = param_4;
  local_80 = param_4;
  local_48 = param_4;
  lVar1 = FUN_141a44de0(**(undefined8 **)(param_1 + 0x50),0,local_58,4);
  if (*(char *)(lVar1 + 0xb8) != '\0') {
    *(undefined1 *)(lVar1 + 0x19) = 0;
  }
  AK::MemoryMgr::StartProfileThreadUsage((int)lVar1 + 0x40);
  *param_2 = lVar1 + 8;
  if (lVar1 + 8 != 0) {
    LOCK();
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a78570 FUN_141a78570 body=793 status=ok
// SIG undefined FUN_141a78570(void)

undefined8 * FUN_141a78570(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  void *_Src;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined **local_d8;
  longlong *local_d0;
  byte local_af;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  
  pcVar5 = (char *)operator_new(200);
  iVar9 = 0;
  pcVar8 = (char *)0x0;
  if (pcVar5 != (char *)0x0) {
    *(undefined ***)pcVar5 = &PTR_FUN_143f3ece8;
    pcVar5[8] = '\0';
    pcVar5[9] = '\0';
    pcVar5[10] = '\0';
    pcVar5[0xb] = '\0';
    pcVar5[0xc] = '\0';
    pcVar5[0xd] = '\0';
    pcVar5[0xe] = '\0';
    pcVar5[0xf] = '\0';
    pcVar5[0x10] = '\0';
    pcVar5[0x11] = '\x01';
    pcVar5[0x18] = '\0';
    pcVar5[0x19] = '\0';
    pcVar5[0x1a] = '\0';
    pcVar5[0x1b] = '\0';
    pcVar5[0x1c] = '\0';
    pcVar5[0x1d] = '\0';
    pcVar5[0x1e] = '\0';
    pcVar5[0x1f] = '\0';
    pcVar5[0x20] = '\0';
    pcVar5[0x21] = '\0';
    pcVar5[0x22] = '\0';
    pcVar5[0x23] = '\0';
    pcVar5[0x24] = '\0';
    pcVar5[0x25] = '\0';
    pcVar5[0x26] = '\0';
    pcVar5[0x27] = '\0';
    pcVar5[0x28] = '\0';
    pcVar5[0x29] = '\0';
    pcVar5[0x2a] = '\0';
    pcVar5[0x2b] = '\0';
    *(undefined ***)pcVar5 = &PTR__scalar_deleting_destructor__144daa6a8;
    pcVar5[0x48] = '\0';
    pcVar5[0x49] = '\0';
    pcVar5[0x4a] = '\0';
    pcVar5[0x4b] = '\0';
    pcVar5[0x4c] = '\0';
    pcVar5[0x4d] = '\0';
    pcVar5[0x4e] = '\0';
    pcVar5[0x4f] = '\0';
    pcVar5[0x50] = '\0';
    pcVar5[0x51] = '\0';
    pcVar5[0x52] = '\0';
    pcVar5[0x53] = '\0';
    pcVar5[0x54] = '\0';
    pcVar5[0x55] = '\0';
    pcVar5[0x56] = '\0';
    pcVar5[0x57] = '\0';
    pcVar5[0x30] = '\0';
    pcVar5[0x31] = '\0';
    pcVar5[0x32] = '\0';
    pcVar5[0x33] = '\0';
    pcVar5[0x34] = '\0';
    pcVar5[0x35] = '\0';
    pcVar5[0x36] = '\0';
    pcVar5[0x37] = '\0';
    pcVar5[0x38] = '\0';
    pcVar5[0x39] = '\0';
    pcVar5[0x3a] = '\0';
    pcVar5[0x3b] = '\0';
    pcVar5[0x3c] = '\0';
    pcVar5[0x3d] = '\0';
    pcVar5[0x3e] = '\0';
    pcVar5[0x3f] = '\0';
    pcVar5[0x40] = '\0';
    pcVar5[0x41] = '\0';
    pcVar5[0x42] = '\0';
    pcVar5[0x43] = '\0';
    pcVar5[0x58] = '\0';
    pcVar5[0x59] = '\0';
    pcVar5[0x5a] = '\0';
    pcVar5[0x5b] = '\0';
    pcVar5[0x5c] = '\0';
    pcVar5[0x5d] = '\0';
    pcVar5[0x5e] = '\0';
    pcVar5[0x5f] = '\0';
    pcVar5[0x60] = '\0';
    pcVar5[0x61] = '\0';
    pcVar5[0x62] = '\0';
    pcVar5[99] = '\0';
    pcVar5[100] = '\0';
    pcVar5[0x65] = '\0';
    pcVar5[0x66] = '\0';
    pcVar5[0x67] = '\0';
    pcVar5[0x68] = '\0';
    pcVar5[0x69] = '\0';
    pcVar5[0x6a] = '\0';
    pcVar5[0x6b] = '\0';
    pcVar5[0x70] = '\0';
    pcVar5[0x71] = '\0';
    pcVar5[0x72] = '\0';
    pcVar5[0x73] = '\0';
    pcVar5[0x74] = '\0';
    pcVar5[0x75] = '\0';
    pcVar5[0x76] = '\0';
    pcVar5[0x77] = '\0';
    pcVar5[0x78] = '\0';
    pcVar5[0x79] = '\0';
    pcVar5[0x7a] = '\0';
    pcVar5[0x7b] = '\0';
    pcVar5[0x7c] = '\0';
    pcVar5[0x7d] = '\0';
    pcVar5[0x7e] = '\0';
    pcVar5[0x7f] = '\0';
    pcVar5[0x80] = '\0';
    pcVar5[0x81] = '\0';
    pcVar5[0x82] = '\0';
    pcVar5[0x83] = '\0';
    pcVar5[0x84] = '\0';
    pcVar5[0x85] = '\0';
    pcVar5[0x86] = '\0';
    pcVar5[0x87] = '\0';
    pcVar5[0x88] = '\0';
    pcVar5[0x89] = '\0';
    pcVar5[0x8a] = '\0';
    pcVar5[0x8b] = '\0';
    pcVar5[0x8c] = '\0';
    pcVar5[0x8d] = '\0';
    pcVar5[0x8e] = '\0';
    pcVar5[0x8f] = '\0';
    pcVar5[0x90] = '\0';
    pcVar5[0x91] = '\0';
    pcVar5[0x92] = '\0';
    pcVar5[0x93] = '\0';
    pcVar5[0x94] = '\0';
    pcVar5[0x95] = '\0';
    pcVar5[0x96] = '\0';
    pcVar5[0x97] = '\0';
    pcVar5[0x98] = '\0';
    pcVar5[0x99] = '\0';
    pcVar5[0x9a] = '\0';
    pcVar5[0x9b] = '\0';
    pcVar5[0x9c] = '\0';
    pcVar5[0x9d] = '\0';
    pcVar5[0x9e] = '\0';
    pcVar5[0x9f] = '\0';
    pcVar5[0xa0] = '\0';
    pcVar5[0xa1] = '\0';
    pcVar5[0xa2] = '\0';
    pcVar5[0xa3] = '\0';
    pcVar5[0xa4] = '\0';
    pcVar5[0xa5] = '\0';
    pcVar5[0xa6] = '\0';
    pcVar5[0xa7] = '\0';
    pcVar5[0xa8] = '\0';
    pcVar5[0xa9] = '\0';
    pcVar5[0xaa] = '\0';
    pcVar5[0xab] = '\0';
    pcVar5[0xac] = '\0';
    pcVar5[0xad] = '\0';
    pcVar5[0xae] = '\0';
    pcVar5[0xaf] = '\0';
    pcVar5[0xb0] = '\0';
    pcVar5[0xb1] = '\0';
    pcVar5[0xb2] = '\0';
    pcVar5[0xb3] = '\0';
    pcVar5[0xb4] = '\0';
    pcVar5[0xb5] = '\0';
    pcVar5[0xb6] = '\0';
    pcVar5[0xb7] = '\0';
    pcVar5[0xb8] = '\0';
    pcVar5[0xb9] = '\0';
    pcVar5[0xba] = '\0';
    pcVar5[0xbb] = '\0';
    pcVar5[0xbc] = '\0';
    pcVar5[0xbd] = '\0';
    pcVar5[0xbe] = '\0';
    pcVar5[0xbf] = '\0';
    pcVar8 = pcVar5;
  }
  FArchive::FArchive(&local_d8);
  local_48 = 0;
  local_d8 = &PTR_FUN_143f4a3a0;
  local_38 = 0x7fffffffffffffff;
  local_40 = param_3;
  FArchive::SetIsLoading(&local_d8,1);
  FArchive::SetIsPersistent(&local_d8,1);
  if ((undefined4 *)local_d0[1] < (undefined4 *)*local_d0 + 1) {
    (*(code *)local_d8[10])(&local_d8,pcVar8 + 0x68,4);
    if ((local_af & 0x10) != 0) {
      FArchive::ByteSwap(&local_d8,pcVar8 + 0x68,4);
    }
  }
  else {
    *(undefined4 *)(pcVar8 + 0x68) = *(undefined4 *)*local_d0;
    *local_d0 = *local_d0 + 4;
  }
  FUN_1408bda20(&local_d8,pcVar8 + 0x70);
  FUN_1408bda20(&local_d8,pcVar8 + 0x80);
  FUN_1408bda20(&local_d8,pcVar8 + 0x90);
  FUN_1408bda20(&local_d8,pcVar8 + 0xa0);
  FUN_1408bda20(&local_d8,pcVar8 + 0xb0);
  uVar4 = *(uint *)(param_3 + 1);
  lVar10 = (longlong)(int)local_48;
  if (3 < uVar4) {
    iVar9 = *(int *)((longlong)(int)uVar4 + -4 + *param_3);
  }
  lVar3 = (longlong)(int)uVar4 + *param_3;
  iVar11 = uVar4 - (int)local_48;
  piVar1 = (int *)(lVar3 - 4);
  iVar7 = 0;
  if (3 < uVar4) {
    iVar7 = *piVar1;
  }
  for (piVar6 = (int *)(lVar3 - iVar7); pcVar5 = (char *)0x0, piVar6 < piVar1;
      piVar6 = (int *)((char *)((longlong)piVar6 + 5) + *(uint *)((longlong)piVar6 + 1))) {
    if (((char)*piVar6 == 'p') &&
       (pcVar5 = (char *)((longlong)piVar6 + 5), *(uint *)((longlong)piVar6 + 1) == 5)) break;
  }
  plVar2 = (longlong *)(pcVar8 + 0x58);
  *(undefined4 *)(pcVar8 + 0xc0) = *(undefined4 *)pcVar5;
  pcVar8[0xc4] = pcVar5[4];
  if (plVar2 != param_3) {
    iVar7 = (int)param_3[1];
    _Src = (void *)*param_3;
    *(int *)(pcVar8 + 0x60) = iVar7;
    if ((iVar7 == 0) && (*(int *)(pcVar8 + 100) == 0)) {
      pcVar8[100] = '\0';
      pcVar8[0x65] = '\0';
      pcVar8[0x66] = '\0';
      pcVar8[0x67] = '\0';
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(plVar2,iVar7);
      _guard_xfg_dispatch_icall_nop((void *)*plVar2,_Src,(longlong)iVar7);
    }
  }
  *(longlong *)(pcVar8 + 0x48) = lVar10 + *plVar2;
  *(int *)(pcVar8 + 0x50) = iVar11 - iVar9;
  pcVar8[0x54] = '\0';
  pcVar8[0x55] = '\0';
  pcVar8[0x56] = '\0';
  pcVar8[0x57] = '\0';
  pcVar8[0x30] = '\0';
  pcVar8[0x31] = '\0';
  pcVar8[0x32] = '\0';
  pcVar8[0x33] = '\0';
  pcVar8[0x34] = '\0';
  pcVar8[0x35] = '\0';
  pcVar8[0x36] = '\0';
  pcVar8[0x37] = '\0';
  pcVar8[0x38] = '\0';
  pcVar8[0x39] = '\0';
  pcVar8[0x3a] = '\0';
  pcVar8[0x3b] = '\0';
  pcVar8[0x3c] = '\0';
  pcVar8[0x3d] = '\0';
  pcVar8[0x3e] = '\0';
  pcVar8[0x3f] = '\0';
  pcVar8[0x40] = '\0';
  pcVar8[0x41] = '\0';
  pcVar8[0x42] = '\0';
  pcVar8[0x43] = '\0';
  if ((*(longlong *)(pcVar8 + 0x48) != 0) && (*(ulonglong *)(pcVar8 + 0x50) != 0)) {
    FSHA1::HashBuffer(*(longlong *)(pcVar8 + 0x48),*(ulonglong *)(pcVar8 + 0x50) & 0xffffffff);
  }
  *param_2 = pcVar8;
  LOCK();
  *(int *)(pcVar8 + 8) = *(int *)(pcVar8 + 8) + 1;
  UNLOCK();
  FArchive::~FArchive(&local_d8);
  return param_2;
}



// FUNCTION 141a78890 FUN_141a78890 body=295 status=ok
// SIG undefined FUN_141a78890(void)

undefined8 * FUN_141a78890(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  puVar3 = (undefined8 *)operator_new(0x58);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *puVar3 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar3 + 1) = 0;
    *puVar3 = &PTR_FUN_144daa630;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *(undefined2 *)(puVar3 + 2) = 0x100;
    *(char *)(puVar3 + 3) = *param_3;
    *(char *)((longlong)puVar3 + 0x19) = param_3[1];
    *(undefined4 *)((longlong)puVar3 + 0x1c) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_3 + 8);
    *(char *)((longlong)puVar3 + 0x24) = param_3[0xc];
    *(char *)((longlong)puVar3 + 0x25) = param_3[0xd];
  }
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  uVar4 = 3;
  puVar3[9] = 0;
  *(undefined4 *)(puVar3 + 10) = 0;
  uVar2 = uVar4;
  if (param_3[1] != '\x01') {
    if (param_3[1] == '\x02') {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
  }
  *(undefined4 *)((longlong)puVar3 + 0x2c) = uVar2;
  if (*param_3 == '\x01') {
    uVar4 = 2;
  }
  *(undefined4 *)(puVar3 + 5) = uVar4;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(puVar3 + 6) = 1;
  fVar1 = *(float *)(param_3 + 4);
  *(undefined4 *)(puVar3 + 8) = 1;
  *param_2 = puVar3;
  *(int *)((longlong)puVar3 + 0x34) =
       (int)ROUND((fVar1 * 16777216.0 + fVar1 * 16777216.0) - 0.5) >> 1;
  *(uint *)((longlong)puVar3 + 0x44) = (uint)(byte)param_3[0xc];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a789c0 FUN_141a789c0 body=168 status=ok
// SIG undefined FUN_141a789c0(void)

undefined8 * FUN_141a789c0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar1 = **(longlong **)(param_1 + 0x50);
  puVar3 = (undefined8 *)operator_new(0x58);
  puVar4 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(lVar1 + 0xd50);
    *puVar3 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *(undefined2 *)(puVar3 + 2) = 0x100;
    puVar3[3] = uVar2;
    *puVar3 = &PTR_FUN_144daa750;
    puVar3[5] = 0;
    *(undefined4 *)((longlong)puVar3 + 0x34) = param_3;
    puVar3[7] = 0;
    puVar3[8] = &PTR_FUN_144da6378;
    puVar3[9] = 0;
    puVar3[10] = 0;
    *(byte *)(puVar3 + 6) = *(byte *)(puVar3 + 6) & 0xfc;
    *(undefined4 *)(puVar3 + 4) = 0xffffffff;
    puVar4 = puVar3;
  }
  *param_2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a78a70 FUN_141a78a70 body=168 status=ok
// SIG undefined FUN_141a78a70(void)

undefined8 *
FUN_141a78a70(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar1 = **(longlong **)(param_1 + 0x50);
  puVar3 = (undefined8 *)operator_new(0x58);
  puVar4 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(lVar1 + 0xd50);
    *puVar3 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *(undefined2 *)(puVar3 + 2) = 0x100;
    puVar3[3] = uVar2;
    *puVar3 = &PTR_FUN_144daa750;
    puVar3[5] = 0;
    *(undefined4 *)((longlong)puVar3 + 0x34) = param_4;
    puVar3[7] = 0;
    puVar3[8] = &PTR_FUN_144da6378;
    puVar3[9] = 0;
    puVar3[10] = 0;
    *(byte *)(puVar3 + 6) = *(byte *)(puVar3 + 6) & 0xfc;
    *(undefined4 *)(puVar3 + 4) = 0xffffffff;
    puVar4 = puVar3;
  }
  *param_2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a78b20 FUN_141a78b20 body=52 status=ok
// SIG undefined FUN_141a78b20(void)

longlong * FUN_141a78b20(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_141a6f270(*(undefined8 *)(**(longlong **)(param_1 + 0x50) + 0xd50),param_3);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a78b60 FUN_141a78b60 body=803 status=ok
// SIG undefined FUN_141a78b60(void)

undefined8 * FUN_141a78b60(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  void *_Src;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined **local_d8;
  longlong *local_d0;
  byte local_af;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  
  pcVar6 = (char *)operator_new(0xd0);
  iVar9 = 0;
  pcVar8 = (char *)0x0;
  if (pcVar6 != (char *)0x0) {
    *(undefined ***)pcVar6 = &PTR_FUN_143f3ece8;
    pcVar6[8] = '\0';
    pcVar6[9] = '\0';
    pcVar6[10] = '\0';
    pcVar6[0xb] = '\0';
    pcVar6[0xc] = '\0';
    pcVar6[0xd] = '\0';
    pcVar6[0xe] = '\0';
    pcVar6[0xf] = '\0';
    pcVar6[0x10] = '\0';
    pcVar6[0x11] = '\x01';
    pcVar6[0x18] = '\0';
    pcVar6[0x19] = '\0';
    pcVar6[0x1a] = '\0';
    pcVar6[0x1b] = '\0';
    pcVar6[0x1c] = '\0';
    pcVar6[0x1d] = '\0';
    pcVar6[0x1e] = '\0';
    pcVar6[0x1f] = '\0';
    pcVar6[0x20] = '\0';
    pcVar6[0x21] = '\0';
    pcVar6[0x22] = '\0';
    pcVar6[0x23] = '\0';
    pcVar6[0x24] = '\0';
    pcVar6[0x25] = '\0';
    pcVar6[0x26] = '\0';
    pcVar6[0x27] = '\0';
    pcVar6[0x28] = '\0';
    pcVar6[0x29] = '\0';
    pcVar6[0x2a] = '\0';
    pcVar6[0x2b] = '\0';
    *(undefined ***)pcVar6 = &PTR__scalar_deleting_destructor__144daa690;
    pcVar6[0x48] = '\0';
    pcVar6[0x49] = '\0';
    pcVar6[0x4a] = '\0';
    pcVar6[0x4b] = '\0';
    pcVar6[0x4c] = '\0';
    pcVar6[0x4d] = '\0';
    pcVar6[0x4e] = '\0';
    pcVar6[0x4f] = '\0';
    pcVar6[0x50] = '\0';
    pcVar6[0x51] = '\0';
    pcVar6[0x52] = '\0';
    pcVar6[0x53] = '\0';
    pcVar6[0x54] = '\0';
    pcVar6[0x55] = '\0';
    pcVar6[0x56] = '\0';
    pcVar6[0x57] = '\0';
    pcVar6[0x30] = '\0';
    pcVar6[0x31] = '\0';
    pcVar6[0x32] = '\0';
    pcVar6[0x33] = '\0';
    pcVar6[0x34] = '\0';
    pcVar6[0x35] = '\0';
    pcVar6[0x36] = '\0';
    pcVar6[0x37] = '\0';
    pcVar6[0x38] = '\0';
    pcVar6[0x39] = '\0';
    pcVar6[0x3a] = '\0';
    pcVar6[0x3b] = '\0';
    pcVar6[0x3c] = '\0';
    pcVar6[0x3d] = '\0';
    pcVar6[0x3e] = '\0';
    pcVar6[0x3f] = '\0';
    pcVar6[0x40] = '\0';
    pcVar6[0x41] = '\0';
    pcVar6[0x42] = '\0';
    pcVar6[0x43] = '\0';
    pcVar6[0x58] = '\0';
    pcVar6[0x59] = '\0';
    pcVar6[0x5a] = '\0';
    pcVar6[0x5b] = '\0';
    pcVar6[0x60] = '\0';
    pcVar6[0x61] = '\0';
    pcVar6[0x62] = '\0';
    pcVar6[99] = '\0';
    pcVar6[100] = '\0';
    pcVar6[0x65] = '\0';
    pcVar6[0x66] = '\0';
    pcVar6[0x67] = '\0';
    pcVar6[0x68] = '\0';
    pcVar6[0x69] = '\0';
    pcVar6[0x6a] = '\0';
    pcVar6[0x6b] = '\0';
    pcVar6[0x6c] = '\0';
    pcVar6[0x6d] = '\0';
    pcVar6[0x6e] = '\0';
    pcVar6[0x6f] = '\0';
    pcVar6[0x70] = '\0';
    pcVar6[0x71] = '\0';
    pcVar6[0x72] = '\0';
    pcVar6[0x73] = '\0';
    pcVar6[0x74] = '\0';
    pcVar6[0x75] = '\0';
    pcVar6[0x76] = '\0';
    pcVar6[0x77] = '\0';
    pcVar6[0x78] = '\0';
    pcVar6[0x79] = '\0';
    pcVar6[0x7a] = '\0';
    pcVar6[0x7b] = '\0';
    pcVar6[0x7c] = '\0';
    pcVar6[0x7d] = '\0';
    pcVar6[0x7e] = '\0';
    pcVar6[0x7f] = '\0';
    pcVar6[0x80] = '\0';
    pcVar6[0x81] = '\0';
    pcVar6[0x82] = '\0';
    pcVar6[0x83] = '\0';
    pcVar6[0x84] = '\0';
    pcVar6[0x85] = '\0';
    pcVar6[0x86] = '\0';
    pcVar6[0x87] = '\0';
    pcVar6[0x88] = '\0';
    pcVar6[0x89] = '\0';
    pcVar6[0x8a] = '\0';
    pcVar6[0x8b] = '\0';
    pcVar6[0x8c] = '\0';
    pcVar6[0x8d] = '\0';
    pcVar6[0x8e] = '\0';
    pcVar6[0x8f] = '\0';
    pcVar6[0x90] = '\0';
    pcVar6[0x91] = '\0';
    pcVar6[0x92] = '\0';
    pcVar6[0x93] = '\0';
    pcVar6[0x94] = '\0';
    pcVar6[0x95] = '\0';
    pcVar6[0x96] = '\0';
    pcVar6[0x97] = '\0';
    pcVar6[0x98] = '\0';
    pcVar6[0x99] = '\0';
    pcVar6[0x9a] = '\0';
    pcVar6[0x9b] = '\0';
    pcVar6[0x9c] = '\0';
    pcVar6[0x9d] = '\0';
    pcVar6[0x9e] = '\0';
    pcVar6[0x9f] = '\0';
    pcVar6[0xa0] = '\0';
    pcVar6[0xa1] = '\0';
    pcVar6[0xa2] = '\0';
    pcVar6[0xa3] = '\0';
    pcVar6[0xa4] = '\0';
    pcVar6[0xa5] = '\0';
    pcVar6[0xa6] = '\0';
    pcVar6[0xa7] = '\0';
    pcVar6[0xa8] = '\0';
    pcVar6[0xa9] = '\0';
    pcVar6[0xaa] = '\0';
    pcVar6[0xab] = '\0';
    pcVar6[0xac] = '\0';
    pcVar6[0xad] = '\0';
    pcVar6[0xae] = '\0';
    pcVar6[0xaf] = '\0';
    pcVar6[0xb0] = '\0';
    pcVar6[0xb1] = '\0';
    pcVar6[0xb2] = '\0';
    pcVar6[0xb3] = '\0';
    pcVar6[0xb4] = '\0';
    pcVar6[0xb5] = '\0';
    pcVar6[0xb6] = '\0';
    pcVar6[0xb7] = '\0';
    pcVar6[0xb8] = '\0';
    pcVar6[0xb9] = '\0';
    pcVar6[0xba] = '\0';
    pcVar6[0xbb] = '\0';
    pcVar6[0xbc] = '\0';
    pcVar6[0xbd] = '\0';
    pcVar6[0xbe] = '\0';
    pcVar6[0xbf] = '\0';
    pcVar8 = pcVar6;
  }
  FArchive::FArchive(&local_d8);
  local_48 = 0;
  local_d8 = &PTR_FUN_143f4a3a0;
  local_38 = 0x7fffffffffffffff;
  local_40 = param_3;
  FArchive::SetIsLoading(&local_d8,1);
  FArchive::SetIsPersistent(&local_d8,1);
  if ((undefined4 *)local_d0[1] < (undefined4 *)*local_d0 + 1) {
    (*(code *)local_d8[10])(&local_d8,pcVar8 + 0x58,4);
    if ((local_af & 0x10) != 0) {
      FArchive::ByteSwap(&local_d8,pcVar8 + 0x58,4);
    }
  }
  else {
    *(undefined4 *)(pcVar8 + 0x58) = *(undefined4 *)*local_d0;
    *local_d0 = *local_d0 + 4;
  }
  FUN_1408bda20(&local_d8,pcVar8 + 0x60);
  FUN_1408bda20(&local_d8,pcVar8 + 0x70);
  FUN_1408bda20(&local_d8,pcVar8 + 0x80);
  FUN_1408bda20(&local_d8,pcVar8 + 0x90);
  FUN_1408bda20(&local_d8,pcVar8 + 0xa0);
  uVar4 = *(uint *)(param_3 + 1);
  iVar5 = (int)local_48;
  lVar10 = (longlong)(int)local_48;
  if (3 < uVar4) {
    iVar9 = *(int *)((longlong)(int)uVar4 + -4 + *param_3);
  }
  lVar3 = (longlong)(int)uVar4 + *param_3;
  piVar1 = (int *)(lVar3 - 4);
  iVar11 = (uVar4 - iVar9) - (int)local_48;
  iVar9 = 0;
  if (3 < uVar4) {
    iVar9 = *piVar1;
  }
  for (piVar7 = (int *)(lVar3 - iVar9); pcVar6 = (char *)0x0, piVar7 < piVar1;
      piVar7 = (int *)((char *)((longlong)piVar7 + 5) + *(uint *)((longlong)piVar7 + 1))) {
    if (((char)*piVar7 == 'p') &&
       (pcVar6 = (char *)((longlong)piVar7 + 5), *(uint *)((longlong)piVar7 + 1) == 5)) break;
  }
  plVar2 = (longlong *)(pcVar8 + 0xb0);
  *(undefined4 *)(pcVar8 + 0xc4) = *(undefined4 *)pcVar6;
  pcVar8[200] = pcVar6[4];
  if (plVar2 != param_3) {
    iVar9 = (int)param_3[1];
    _Src = (void *)*param_3;
    *(int *)(pcVar8 + 0xb8) = iVar9;
    if ((iVar9 == 0) && (*(int *)(pcVar8 + 0xbc) == 0)) {
      pcVar8[0xbc] = '\0';
      pcVar8[0xbd] = '\0';
      pcVar8[0xbe] = '\0';
      pcVar8[0xbf] = '\0';
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(plVar2,iVar9);
      _guard_xfg_dispatch_icall_nop((void *)*plVar2,_Src,(longlong)iVar9);
    }
  }
  *(int *)(pcVar8 + 0xc0) = iVar5;
  *(longlong *)(pcVar8 + 0x48) = lVar10 + *plVar2;
  *(int *)(pcVar8 + 0x50) = iVar11;
  pcVar8[0x54] = '\0';
  pcVar8[0x55] = '\0';
  pcVar8[0x56] = '\0';
  pcVar8[0x57] = '\0';
  pcVar8[0x30] = '\0';
  pcVar8[0x31] = '\0';
  pcVar8[0x32] = '\0';
  pcVar8[0x33] = '\0';
  pcVar8[0x34] = '\0';
  pcVar8[0x35] = '\0';
  pcVar8[0x36] = '\0';
  pcVar8[0x37] = '\0';
  pcVar8[0x38] = '\0';
  pcVar8[0x39] = '\0';
  pcVar8[0x3a] = '\0';
  pcVar8[0x3b] = '\0';
  pcVar8[0x3c] = '\0';
  pcVar8[0x3d] = '\0';
  pcVar8[0x3e] = '\0';
  pcVar8[0x3f] = '\0';
  pcVar8[0x40] = '\0';
  pcVar8[0x41] = '\0';
  pcVar8[0x42] = '\0';
  pcVar8[0x43] = '\0';
  if ((*(longlong *)(pcVar8 + 0x48) != 0) && (*(ulonglong *)(pcVar8 + 0x50) != 0)) {
    FSHA1::HashBuffer(*(longlong *)(pcVar8 + 0x48),*(ulonglong *)(pcVar8 + 0x50) & 0xffffffff);
  }
  *param_2 = pcVar8;
  LOCK();
  *(int *)(pcVar8 + 8) = *(int *)(pcVar8 + 8) + 1;
  UNLOCK();
  FArchive::~FArchive(&local_d8);
  return param_2;
}



// FUNCTION 141a78e90 FUN_141a78e90 body=22 status=ok
// SIG undefined FUN_141a78e90(void)

void FUN_141a78e90(longlong param_1)

{
  FUN_141a70af0(*(longlong *)(param_1 + 0x1b8) + 0x4d8,param_1);
  return;
}



// FUNCTION 141a78f10 FUN_141a78f10 body=217 status=ok
// SIG undefined FUN_141a78f10(void)

ulonglong FUN_141a78f10(undefined8 param_1,longlong param_2,ulonglong *param_3,undefined1 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong in_RAX;
  ulonglong uVar3;
  ulonglong uVar4;
  
  *param_3 = 0;
  if (*(int *)(param_2 + 0x20) != -1) {
    in_RAX = 0;
    if ((*(byte *)(param_2 + 0x30) & 2) != 0) {
      if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
        in_RAX = FUN_141a73650(*(undefined8 *)(param_2 + 0x18),param_2,param_4);
        if ((char)in_RAX == '\0') goto LAB_141a78fdc;
        *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) | 1;
      }
      if (*(int *)(param_2 + 0x34) != 2) {
        uVar4 = *(ulonglong *)(param_2 + 0x28);
        uVar3 = *param_3;
        if (*param_3 <= uVar4) {
          uVar3 = uVar4;
        }
        *param_3 = uVar3;
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
      uVar4 = DAT_146ab6340 / 1000000;
      if (uVar4 < 2) {
        uVar4 = 1;
      }
      if (uVar4 != 0) {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar4;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)(param_2 + 0x28);
        uVar3 = SUB168(auVar2 / auVar1,0);
        uVar4 = *param_3;
        if (*param_3 <= uVar3) {
          uVar4 = uVar3;
        }
        *param_3 = uVar4;
        return CONCAT71(SUB167(auVar2 / auVar1,1),1);
      }
      *param_3 = 0;
      return 1;
    }
  }
LAB_141a78fdc:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141a78ff0 FUN_141a78ff0 body=752 status=ok
// SIG undefined FUN_141a78ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a78ff0(longlong param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_1f8 [32];
  int *local_1d8;
  longlong **local_1d0;
  uint local_1c8 [2];
  longlong *local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  int local_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  undefined1 local_178 [304];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_1c0 = (longlong *)0x0;
  plVar1 = *(longlong **)(**(longlong **)(param_1 + 0x50) + 0x728);
  iVar2 = (**(code **)(*plVar1 + 0x38))
                    (plVar1,*(undefined4 *)(**(longlong **)(param_1 + 0x50) + 0x48),&local_1c0);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*local_1c0 + 0x40))(local_1c0,local_178);
    if (iVar2 < 0) {
      local_1d0 = &local_1b8;
      local_1b8 = (longlong *)0x0;
      local_1b0 = 0;
      local_1d8 = (int *)0x0;
      FUN_141a94000(iVar2,"Adapter->GetDesc(&AdapterDesc)",
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHI.cpp",0x1e0)
      ;
    }
    iVar2 = 0;
    iVar10 = 0;
    bVar9 = false;
    local_1b8 = (longlong *)0x0;
    iVar3 = (**(code **)(*local_1c0 + 0x38))(local_1c0,0);
    if (iVar3 == -0x7785fffe) {
      if (local_1b8 != (longlong *)0x0) {
        (**(code **)(*local_1b8 + 0x10))();
      }
LAB_141a792c6:
      if (local_1c0 != (longlong *)0x0) {
        (**(code **)(*local_1c0 + 0x10))();
      }
      *param_2 = iVar2;
      *param_3 = iVar10;
      return;
    }
    if (-1 < iVar3) {
      local_1c8[0] = 0;
      local_1d8 = (int *)0x0;
      iVar3 = (**(code **)(*local_1b8 + 0x40))(local_1b8,0x1c,0,local_1c8);
      if (iVar3 != -0x7785fffe) {
        if (iVar3 != -0x7785ffde) {
          uVar4 = SUB168(ZEXT816(0x1c) * ZEXT416(local_1c8[0]),0);
          if (SUB168(ZEXT816(0x1c) * ZEXT416(local_1c8[0]),8) != 0) {
            uVar4 = 0xffffffffffffffff;
          }
          piVar5 = (int *)operator_new(uVar4);
          local_1d8 = piVar5;
          iVar3 = (**(code **)(*local_1b8 + 0x40))(local_1b8,0x1c,0,local_1c8);
          if (iVar3 < 0) {
            local_1d0 = &local_1a8;
            local_1d8 = (int *)0x0;
            local_1a8 = (longlong *)0x0;
            local_1a0 = 0;
            FUN_141a94000(iVar3,"Output->GetDisplayModeList(Format, 0, &NumModes, ModeList)",
                          "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHI.cpp",
                          0x203);
          }
          if (local_1c8[0] != 0) {
            uVar11 = (ulonglong)local_1c8[0];
            piVar6 = piVar5;
            do {
              if ((!bVar9) ||
                 ((uVar7 = *piVar6 - *param_2 >> 0x1f, uVar8 = iVar2 - *param_2 >> 0x1f,
                  (int)((*piVar6 - *param_2 ^ uVar7) - uVar7) <=
                  (int)((iVar2 - *param_2 ^ uVar8) - uVar8) &&
                  (uVar7 = piVar6[1] - *param_3 >> 0x1f, uVar8 = iVar10 - *param_3 >> 0x1f,
                  (int)((piVar6[1] - *param_3 ^ uVar7) - uVar7) <=
                  (int)((iVar10 - *param_3 ^ uVar8) - uVar8))))) {
                local_198 = *piVar6;
                iStack_194 = piVar6[1];
                iStack_190 = piVar6[2];
                iStack_18c = piVar6[3];
                bVar9 = true;
                iVar2 = local_198;
                iVar10 = iStack_194;
              }
              piVar6 = piVar6 + 7;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          FMemory::operator_delete(piVar5);
          if (local_1b8 != (longlong *)0x0) {
            (**(code **)(*local_1b8 + 0x10))();
          }
          goto LAB_141a792c6;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0x1ff,
                   L"This application cannot be run over a remote desktop configuration");
        FDebug::AssertFailed
                  (&DAT_144da7355,"Unknown",0x1ff,
                   L"This application cannot be run over a remote desktop configuration");
      }
    }
    if (local_1b8 != (longlong *)0x0) {
      (**(code **)(*local_1b8 + 0x10))();
    }
  }
  if (local_1c0 != (longlong *)0x0) {
    (**(code **)(*local_1c0 + 0x10))();
  }
  return;
}



// FUNCTION 141a792e0 FUN_141a792e0 body=48 status=ok
// SIG undefined FUN_141a792e0(void)

void FUN_141a792e0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  
  lVar1 = param_2 + -8;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  FUN_141a45d40(param_1,0,lVar1,param_3,param_4,param_5);
  return;
}



// FUNCTION 141a79310 FUN_141a79310 body=518 status=ok
// SIG undefined FUN_141a79310(void)

void FUN_141a79310(longlong param_1,longlong *param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_res10;
  undefined **local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined **local_58;
  longlong local_50;
  longlong local_48;
  
  if (param_2 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  lVar6 = *(longlong *)(lVar6 + 0x28);
  lVar7 = (**(code **)(*param_2 + 8))(param_2);
  local_58 = &PTR_FUN_144da6378;
  lVar8 = *(longlong *)(lVar7 + 0x250);
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  lVar2 = *(longlong *)(lVar7 + 600);
  local_50 = lVar8;
  local_48 = lVar2;
  if (((lVar8 == 0) || (cVar4 = FUN_141a576f0(lVar8,lVar2), cVar4 != '\0')) ||
     (lVar2 != *(longlong *)(lVar8 + 0x40))) {
    FUN_141a7d9d0(&local_58);
  }
  else {
    FUN_141a55210(**(undefined8 **)(*(longlong *)(**(longlong **)(param_1 + 0x50) + 0xd50) + 0x5d8),
                  &local_78,1);
    local_78 = &PTR_FUN_144da6378;
    if (local_70 != 0) {
      LOCK();
      piVar1 = (int *)(local_70 + 8);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar8 = local_50;
      if ((iVar5 == 1) && (local_70 != 0)) {
        FUN_141a4db60(local_70);
        FMemory::operator_delete(local_70,0x110);
        lVar8 = local_50;
      }
    }
  }
  plVar3 = *(longlong **)(lVar6 + 0x18);
  iVar5 = (**(code **)(*plVar3 + 0x40))(plVar3,0,0,&local_res10);
  if (iVar5 == -0x7785fffb) {
    *(undefined1 *)(**(longlong **)(param_1 + 0x50) + 0x44) = 1;
    *param_3 = 0;
    *param_5 = 0;
    *param_4 = 0;
    (**(code **)(**(longlong **)(**(longlong **)(param_1 + 0x50) + 0x18) + 0x128))();
  }
  else {
    if (iVar5 < 0) {
      local_68 = 0;
      local_60 = 0;
      FUN_141a94000(iVar5,"Result",
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RenderTarget.cpp"
                    ,0x55e,*(undefined8 *)(**(longlong **)(param_1 + 0x50) + 0x18),&local_68);
    }
    *param_3 = local_res10;
    *param_4 = *(undefined4 *)(lVar7 + 0x234);
    *param_5 = *(undefined4 *)(lVar7 + 0x238);
  }
  if (lVar8 != 0) {
    LOCK();
    piVar1 = (int *)(lVar8 + 8);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      FUN_141a4db60(local_50);
      FMemory::operator_delete(local_50,0x110);
    }
  }
  return;
}



// FUNCTION 141a79520 FUN_141a79520 body=1232 status=ok
// SIG undefined FUN_141a79520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_141a79520(longlong param_1,longlong *param_2,int *param_3,ulonglong param_4,
                  longlong *param_5)

{
  int *piVar1;
  uint6 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iStackX_24;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  ulonglong *local_190;
  int *local_188;
  char local_178;
  ulonglong local_170;
  uint local_168;
  int local_164;
  uint local_160;
  longlong local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  ulonglong local_140 [2];
  int local_130;
  undefined **local_128;
  longlong local_120;
  longlong local_118 [3];
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  uint uStack_f4;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  undefined4 local_90;
  undefined4 local_88;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  uVar6 = 0;
  local_128 = *(undefined ***)(**(longlong **)(param_1 + 0x50) + 0xd50);
  local_148 = (undefined8 *)local_128[2];
  local_158 = *(longlong *)local_128[0xbb];
  local_140[0] = uVar6;
  if (param_2 != (longlong *)0x0) {
    local_140[0] = (**(code **)(*param_2 + 0x48))(param_2);
  }
  local_164 = param_3[3] - param_3[1];
  local_168 = param_3[2] - *param_3;
  uVar12 = (ulonglong)local_168;
  local_170 = *(longlong *)(local_140[0] + 0x28);
  iStackX_24 = (int)(param_4 >> 0x20);
  iVar5 = (int)param_4;
  *(undefined4 *)(param_5 + 1) = 0;
  iVar10 = (iStackX_24 - iVar5) * local_164 * local_168;
  if (*(int *)((longlong)param_5 + 0xc) != iVar10 * 8) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_5);
  }
  local_68 = *param_3;
  local_64 = param_3[1];
  local_5c = param_3[2];
  local_58 = param_3[3];
  local_54 = iStackX_24;
  local_150 = (undefined8 *)0x0;
  local_198 = (ulonglong)local_198._4_4_ << 0x20;
  uVar7 = (&DAT_1464ca1c4)[(longlong)*(int *)((longlong)param_2 + 0x3c) * 10] *
          *(int *)(local_170 + 0x40) + 0xffU & 0xffffff00;
  local_130 = uVar7 * *(int *)(local_170 + 0x48);
  local_160 = uVar7;
  local_60 = iVar5;
  iVar3 = FUN_141a6e3f0(local_148,3,(uint)*(ushort *)(local_170 + 0x4c) * local_130,&local_150);
  if (iVar3 < 0) {
    local_190 = (ulonglong *)(local_118 + 1);
    local_118[1] = 0;
    local_118[2] = 0;
    local_198 = 0;
    FUN_141a94000(iVar3,
                  "Adapter->CreateBuffer(D3D12_HEAP_TYPE_READBACK, MipBytesAligned, TempTexture3D.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RenderTarget.cpp"
                  ,0x639);
  }
  lVar9 = local_158;
  uStack_f4 = (uint)*(ushort *)(local_170 + 0x4c);
  uStack_f8 = *(undefined4 *)(local_170 + 0x48);
  uVar2 = *(uint6 *)(local_170 + 0x48);
  uStack_fc = *(undefined4 *)(local_170 + 0x40);
  local_100 = *(undefined4 *)(local_170 + 0x50);
  uStack_e0 = CONCAT44(uStack_fc,local_100);
  local_148 = local_150;
  local_cc = 0;
  local_c8 = local_150[3];
  uStack_d8._0_4_ = (undefined4)uVar2;
  uStack_d8._4_4_ = (uint)(ushort)(uVar2 >> 0x20);
  local_c0 = 1;
  local_a8 = (undefined4)uStack_d8;
  uStack_a4 = uStack_d8._4_4_;
  uStack_9c = 0;
  local_e8 = 0;
  local_170 = CONCAT44(local_170._4_4_,0xffffffff);
  local_b8 = 0;
  uStack_b4 = 0;
  local_98 = *(ulonglong *)(*(longlong *)(local_140[0] + 0x28) + 0x18);
  local_90 = 0;
  local_88 = 0;
  local_140[0] = *(ulonglong *)(local_140[0] + 0x28);
  local_178 = *(char *)(local_140[0] + 0xb4);
  uStack_d8 = (ulonglong)uVar2;
  local_d0 = uVar7;
  uStack_b0 = local_100;
  uStack_ac = uStack_fc;
  uStack_a0 = uVar7;
  if (local_178 == '\0') {
    local_170 = CONCAT44(local_170._4_4_,*(undefined4 *)(local_140[0] + 0xa8));
    local_198 = local_198 & 0xffffffff00000000;
    FUN_141a4f5b0(local_158 + 0x460,local_140[0],*(undefined4 *)(local_140[0] + 0xa8),0x800);
  }
  else {
    FUN_141a60fb0(local_158 + 0x460,local_140[0],0x800,0);
  }
  *(int *)(local_158 + 0x2c54) = *(int *)(local_158 + 0x2c54) + 1;
  lVar9 = *(longlong *)(lVar9 + 0x468);
  if (*(int *)(lVar9 + 0x100) != 0) {
    (**(code **)(**(longlong **)(lVar9 + 0x28) + 0xd0))
              (*(longlong **)(lVar9 + 0x28),*(int *)(lVar9 + 0x100),*(undefined8 *)(lVar9 + 0xf8));
    *(undefined4 *)(lVar9 + 0x100) = 0;
    lVar9 = *(longlong *)(local_158 + 0x468);
  }
  local_188 = &local_68;
  local_190 = &local_98;
  local_198 = local_198 & 0xffffffff00000000;
  (**(code **)(**(longlong **)(lVar9 + 0x28) + 0x80))(*(longlong **)(lVar9 + 0x28),&local_c8,0,0);
  if (local_178 == '\0') {
    local_198 = local_198 & 0xffffffff00000000;
    FUN_141a4f5b0(local_158 + 0x460,local_140[0],0x800,local_170 & 0xffffffff);
  }
  FUN_141a55210(*(undefined8 *)local_128[0xbb],&local_128,1);
  local_128 = &PTR_FUN_144da6378;
  if (local_120 != 0) {
    LOCK();
    piVar1 = (int *)(local_120 + 8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (local_120 != 0)) {
      FUN_141a4db60(local_120);
      FMemory::operator_delete(local_120);
    }
  }
  iVar3 = (**(code **)(*(longlong *)local_148[3] + 0x40))((longlong *)local_148[3],0,0,local_118);
  if (iVar3 < 0) {
    local_190 = local_140;
    local_140[0] = 0;
    local_140[1] = 0;
    local_198 = 0;
    FUN_141a94000(iVar3,"TempTexture3D->GetResource()->Map(0, nullptr, &pData)",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RenderTarget.cpp"
                  ,0x666);
  }
  iVar3 = (int)param_5[1];
  if (iVar3 <= iVar10) {
    *(int *)(param_5 + 1) = iVar10 + iVar3;
    if (*(int *)((longlong)param_5 + 0xc) < iVar10 + iVar3) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_5);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*param_5 + (longlong)iVar3 * 8),0,(longlong)iVar10 << 3);
  }
  param_4 = param_4 & 0xffffffff;
  local_170 = CONCAT44(local_170._4_4_,iVar5);
  if (iVar5 < iStackX_24) {
    iVar10 = param_3[3];
    iVar3 = local_164;
    do {
      uVar7 = local_168;
      iVar8 = param_3[1];
      iVar11 = (int)param_4;
      if (iVar8 < iVar10) {
        uVar4 = ((int)param_4 - iVar5) * local_130;
        do {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_5 +
                             (longlong)(int)((((int)uVar6 - param_3[1]) + iVar8) * uVar7) * 8),
                     (void *)((ulonglong)((iVar8 - param_3[1]) * local_160) + local_118[0] +
                             (ulonglong)uVar4),uVar12 << 3);
          iVar10 = param_3[3];
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar10);
        uVar12 = (ulonglong)local_168;
        iVar11 = (int)local_170;
        iVar3 = local_164;
      }
      uVar7 = iVar11 + 1;
      param_4 = (ulonglong)uVar7;
      uVar6 = (ulonglong)(uint)((int)uVar6 + iVar3);
      local_170 = CONCAT44(local_170._4_4_,uVar7);
    } while ((int)uVar7 < iStackX_24);
  }
  (**(code **)(*(longlong *)local_148[3] + 0x48))((longlong *)local_148[3],0,0);
  LOCK();
  piVar1 = (int *)(local_150 + 1);
  iVar5 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar5 == 1) {
    (**(code **)*local_150)(local_150,1);
  }
  return;
}



// FUNCTION 141a799f0 FUN_141a799f0 body=925 status=ok
// SIG undefined FUN_141a799f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a799f0(longlong param_1,longlong *param_2,int *param_3,longlong *param_4,
                  longlong *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_358 [32];
  longlong *local_338;
  longlong *local_330;
  undefined4 *local_328;
  ulonglong local_318;
  int local_310;
  longlong *local_308;
  longlong local_300;
  longlong local_2f8 [2];
  undefined **local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  undefined **local_2d0;
  longlong local_2c8;
  longlong local_2b8;
  longlong lStack_2b0;
  undefined4 local_2a8;
  longlong local_298;
  longlong lStack_290;
  undefined4 local_288;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  int local_258;
  int iStack_254;
  int iStack_250;
  int iStack_24c;
  int local_248;
  int iStack_244;
  int iStack_240;
  int iStack_23c;
  undefined1 local_210 [32];
  undefined8 local_1f0;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  iVar6 = 0;
  iVar7 = 0;
  local_308 = param_5;
  local_318 = param_1;
  if (param_2 == (longlong *)0x0) {
    *(undefined4 *)(param_4 + 1) = 0;
    iVar6 = 0;
    if (*(int *)((longlong)param_4 + 0xc) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_4);
      iVar6 = *(int *)((longlong)param_4 + 0xc);
      iVar7 = (int)param_4[1];
    }
    iVar8 = (param_3[3] - param_3[1]) * (param_3[2] - *param_3);
    iVar4 = iVar7 + iVar8;
    *(int *)(param_4 + 1) = iVar4;
    if (iVar6 < iVar4) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_4);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*param_4 + (longlong)iVar7 * 4),0,(longlong)iVar8 << 2);
  }
  else {
    local_2f8[0] = 0;
    local_2f8[1] = 0;
    local_300 = (**(code **)(*param_2 + 0x48))(param_2);
    lVar5 = (**(code **)(*param_2 + 8))(param_2);
    local_2e8 = &PTR_FUN_144da6378;
    lVar10 = *(longlong *)(lVar5 + 0x250);
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
      UNLOCK();
    }
    lVar5 = *(longlong *)(lVar5 + 600);
    local_2e0 = lVar10;
    local_2d8 = lVar5;
    if (lVar10 != 0) {
      cVar3 = FUN_141a576f0(lVar10,lVar5);
      if ((cVar3 == '\0') && (lVar5 == *(longlong *)(lVar10 + 0x40))) {
        FUN_141a55210(**(undefined8 **)
                        (*(longlong *)(**(longlong **)(local_318 + 0x50) + 0xd50) + 0x5d8),
                      &local_2d0,1);
        local_2d0 = &PTR_FUN_144da6378;
        if (local_2c8 != 0) {
          LOCK();
          piVar1 = (int *)(local_2c8 + 8);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          lVar10 = local_2e0;
          if ((iVar7 == 1) && (local_2c8 != 0)) {
            FUN_141a4db60(local_2c8);
            FMemory::operator_delete(local_2c8,0x110);
            lVar10 = local_2e0;
          }
        }
      }
      else {
        FUN_141a7d9d0(&local_2e8);
      }
    }
    local_300 = *(longlong *)(local_300 + 0x28);
    if (*(int *)(local_300 + 0x54) == 1) {
      local_2b8 = *local_308;
      lStack_2b0 = local_308[1];
      local_2a8 = (undefined4)local_308[2];
      local_338 = &local_2b8;
      local_258 = *param_3;
      iStack_254 = param_3[1];
      iStack_250 = param_3[2];
      iStack_24c = param_3[3];
      FUN_141a7abc0(local_318,param_2,&local_258,local_2f8);
    }
    else {
      uVar2 = **(undefined8 **)(*(longlong *)(**(longlong **)(local_318 + 0x50) + 0xd50) + 0x5d8);
      FRHICommandListBase::FRHICommandListBase(local_210,1);
      local_298 = *local_308;
      lStack_290 = local_308[1];
      local_288 = (undefined4)local_308[2];
      local_330 = &local_298;
      local_338 = local_2f8;
      local_248 = *param_3;
      iStack_244 = param_3[1];
      iStack_240 = param_3[2];
      iStack_23c = param_3[3];
      local_1f0 = uVar2;
      FUN_141a7a2e0(local_318,local_210,param_2,&local_248);
      FRHICommandListBase::~FRHICommandListBase(local_210);
    }
    iVar9 = (param_3[2] - *param_3) * *(int *)(local_300 + 0x54);
    iVar7 = param_3[3];
    iVar4 = param_3[1];
    local_318 = CONCAT44(local_318._4_4_,iVar7 - iVar4);
    *(undefined4 *)(param_4 + 1) = 0;
    iVar8 = 0;
    iVar7 = iVar7 - iVar4;
    local_310 = iVar9;
    if (*(int *)((longlong)param_4 + 0xc) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_4,0);
      iVar8 = *(int *)((longlong)param_4 + 0xc);
      iVar6 = (int)param_4[1];
      iVar7 = (int)local_318;
    }
    iVar7 = iVar7 * iVar9 + iVar6;
    *(int *)(param_4 + 1) = iVar7;
    if (iVar8 < iVar7) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_4,iVar6);
    }
    lVar5 = local_2f8[0];
    local_278 = (undefined4)*local_308;
    uStack_274 = *(undefined4 *)((longlong)local_308 + 4);
    uStack_270 = (undefined4)local_308[1];
    uStack_26c = *(undefined4 *)((longlong)local_308 + 0xc);
    local_268 = (undefined4)local_308[2];
    local_328 = &local_278;
    local_330 = (longlong *)*param_4;
    local_338 = (longlong *)
                CONCAT44(local_338._4_4_,
                         SUB164(*(undefined1 (*) [16])
                                 (&DAT_1464ca1c0 +
                                 (longlong)*(int *)((longlong)param_2 + 0x3c) * 0x28),4) * iVar9);
    FUN_141a6cbb0(SUB168(*(undefined1 (*) [16])
                          (&DAT_1464ca1c0 + (longlong)*(int *)((longlong)param_2 + 0x3c) * 0x28),8)
                  >> 0x20,local_310,local_318 & 0xffffffff,local_2f8[0]);
    if (lVar10 != 0) {
      LOCK();
      piVar1 = (int *)(lVar10 + 8);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar5 = local_2f8[0];
      if (iVar7 == 1) {
        FUN_141a4db60(local_2e0);
        FMemory::operator_delete(local_2e0,0x110);
        lVar5 = local_2f8[0];
      }
    }
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  return;
}



// FUNCTION 141a79d90 FUN_141a79d90 body=1262 status=ok
// SIG undefined FUN_141a79d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_141a79d90(longlong param_1,longlong *param_2,int *param_3,longlong *param_4,int param_5,
                  int param_6,int param_7)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  longlong *local_180;
  int *local_178;
  char local_168;
  uint local_164;
  ulonglong local_160;
  longlong local_158;
  undefined8 *local_150;
  longlong local_148 [2];
  undefined8 *local_138;
  undefined **local_130;
  longlong local_128;
  longlong local_120 [3];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  uint local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined4 local_98;
  int local_90;
  int local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_130 = *(undefined ***)(**(longlong **)(param_1 + 0x50) + 0xd50);
  puVar2 = local_130[2];
  local_158 = *(longlong *)local_130[0xbb];
  if (param_2 == (longlong *)0x0) {
    local_148[0] = 0;
  }
  else {
    local_148[0] = (**(code **)(*param_2 + 0x48))(param_2);
  }
  uVar8 = param_3[2] - *param_3;
  lVar5 = *(longlong *)(local_148[0] + 0x28);
  iVar7 = (param_3[3] - param_3[1]) * uVar8;
  *(undefined4 *)(param_4 + 1) = 0;
  local_160 = lVar5;
  if (*(int *)((longlong)param_4 + 0xc) != iVar7) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_4);
  }
  local_70 = *param_3;
  local_6c = param_3[1];
  local_64 = param_3[2];
  local_60 = param_3[3];
  local_68 = 0;
  local_5c = 1;
  local_150 = (undefined8 *)0x0;
  local_188 = (ulonglong)local_188._4_4_ << 0x20;
  iVar9 = 3;
  local_164 = (&DAT_1464ca1c4)[(longlong)*(int *)((longlong)param_2 + 0x3c) * 10] *
              *(int *)(lVar5 + 0x40) + 0xffU & 0xffffff00;
  iVar4 = FUN_141a6e3f0(puVar2,3,*(int *)(lVar5 + 0x48) * local_164,&local_150);
  if (iVar4 < 0) {
    local_180 = local_120 + 1;
    local_188 = 0;
    local_120[1] = 0;
    local_120[2] = 0;
    FUN_141a94000(iVar4,
                  "Adapter->CreateBuffer(D3D12_HEAP_TYPE_READBACK, MipBytesAligned, TempTexture2D.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RenderTarget.cpp"
                  ,0x59d);
  }
  bVar6 = 0;
  lVar5 = (**(code **)(*param_2 + 8))(param_2);
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_2 + 0x10))(param_2);
    if (lVar5 == 0) {
      lVar5 = (**(code **)(*param_2 + 0x20))(param_2);
      if (lVar5 == 0) goto LAB_141a79f1d;
      goto LAB_141a79f13;
    }
    bVar6 = *(byte *)(lVar5 + 0x268);
  }
  else {
LAB_141a79f13:
    bVar6 = *(byte *)(lVar5 + 0x260);
  }
  bVar6 = bVar6 & 1;
LAB_141a79f1d:
  lVar5 = local_158;
  iVar4 = 0;
  if (bVar6 != 0) {
    if (param_5 == 1) {
      iVar9 = 1;
    }
    else if (param_5 == 2) {
      iVar9 = 2;
    }
    else if (param_5 != 3) {
      if (param_5 == 4) {
        iVar9 = 4;
      }
      else if (param_5 == 5) {
        iVar9 = 5;
      }
      else {
        iVar9 = 0;
      }
    }
    iVar4 = (iVar9 + param_6 * 6) * (uint)*(ushort *)(local_160 + 0x4e) + param_7;
  }
  uStack_100 = *(undefined4 *)(local_160 + 0x48);
  uStack_104 = *(undefined4 *)(local_160 + 0x40);
  local_108 = *(undefined4 *)(local_160 + 0x50);
  local_d8 = local_164;
  local_138 = local_150;
  uStack_fc = 1;
  uStack_e8 = CONCAT44(uStack_104,local_108);
  uStack_e0 = CONCAT44(1,uStack_100);
  local_d0 = local_150[3];
  local_c8 = 1;
  local_d4 = 0;
  local_f0 = 0;
  local_160 = CONCAT44(local_160._4_4_,0xffffffff);
  uStack_ac = 1;
  uStack_a8 = local_164;
  uStack_a4 = 0;
  local_c0 = 0;
  uStack_bc = 0;
  local_a0 = *(longlong *)(*(longlong *)(local_148[0] + 0x28) + 0x18);
  local_98 = 0;
  local_148[0] = *(longlong *)(local_148[0] + 0x28);
  local_168 = *(char *)(local_148[0] + 0xb4);
  uStack_b8 = local_108;
  uStack_b4 = uStack_104;
  local_b0 = uStack_100;
  local_90 = iVar4;
  if (local_168 == '\0') {
    local_160 = CONCAT44(local_160._4_4_,*(undefined4 *)(local_148[0] + 0xa8));
    local_188 = CONCAT44(local_188._4_4_,iVar4);
    FUN_141a4f5b0(local_158 + 0x460,local_148[0],*(undefined4 *)(local_148[0] + 0xa8),0x800);
  }
  else {
    FUN_141a60fb0(local_158 + 0x460,local_148[0],0x800,iVar4);
  }
  *(int *)(local_158 + 0x2c54) = *(int *)(local_158 + 0x2c54) + 1;
  lVar5 = *(longlong *)(lVar5 + 0x468);
  if (*(int *)(lVar5 + 0x100) != 0) {
    (**(code **)(**(longlong **)(lVar5 + 0x28) + 0xd0))
              (*(longlong **)(lVar5 + 0x28),*(int *)(lVar5 + 0x100),*(undefined8 *)(lVar5 + 0xf8));
    *(undefined4 *)(lVar5 + 0x100) = 0;
    lVar5 = *(longlong *)(local_158 + 0x468);
  }
  local_178 = &local_70;
  local_180 = &local_a0;
  local_188 = local_188 & 0xffffffff00000000;
  (**(code **)(**(longlong **)(lVar5 + 0x28) + 0x80))(*(longlong **)(lVar5 + 0x28),&local_d0,0,0);
  if (local_168 == '\0') {
    local_188 = CONCAT44(local_188._4_4_,iVar4);
    FUN_141a4f5b0(local_158 + 0x460,local_148[0],0x800,local_160 & 0xffffffff);
  }
  FUN_141a55210(*(undefined8 *)local_130[0xbb],&local_130,1);
  local_130 = &PTR_FUN_144da6378;
  if (local_128 != 0) {
    LOCK();
    piVar1 = (int *)(local_128 + 8);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (local_128 != 0)) {
      FUN_141a4db60(local_128);
      FMemory::operator_delete(local_128);
    }
  }
  iVar4 = (**(code **)(*(longlong *)local_138[3] + 0x40))((longlong *)local_138[3],0,0,local_120);
  if (iVar4 < 0) {
    local_180 = local_148;
    local_148[0] = 0;
    local_148[1] = 0;
    local_188 = 0;
    FUN_141a94000(iVar4,"TempTexture2D->GetResource()->Map(0, nullptr, &pData)",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RenderTarget.cpp"
                  ,0x5fc);
  }
  iVar4 = (int)param_4[1];
  if (iVar4 <= iVar7) {
    *(int *)(param_4 + 1) = iVar7 + iVar4;
    if (*(int *)((longlong)param_4 + 0xc) < iVar7 + iVar4) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_4);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*param_4 + (longlong)iVar4 * 8),0,(longlong)iVar7 << 3);
  }
  uVar3 = local_164;
  iVar7 = param_3[1];
  if (iVar7 < param_3[3]) {
    do {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_4 + (longlong)(int)((iVar7 - param_3[1]) * uVar8) * 8),
                 (void *)((ulonglong)((iVar7 - param_3[1]) * uVar3) + local_120[0]),
                 (ulonglong)uVar8 << 3);
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_3[3]);
  }
  (**(code **)(*(longlong *)local_138[3] + 0x48))((longlong *)local_138[3],0,0);
  LOCK();
  piVar1 = (int *)(local_150 + 1);
  iVar7 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar7 == 1) {
    (**(code **)*local_150)(local_150,1);
  }
  return;
}



// FUNCTION 141a7a280 FUN_141a7a280 body=12 status=ok
// SIG undefined FUN_141a7a280(void)

void FUN_141a7a280(longlong param_1)

{
  FUN_141a7cf50(param_1 + 0x4e0);
  return;
}



// FUNCTION 141a7a2b0 FUN_141a7a2b0 body=46 status=ok
// SIG undefined FUN_141a7a2b0(void)

void FUN_141a7a2b0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x28) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000141a7a2da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1,0,0);
  return;
}



// FUNCTION 141a7a2e0 FUN_141a7a2e0 body=2260 status=ok
// SIG undefined FUN_141a7a2e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a7a2e0(longlong param_1,undefined8 param_2,longlong *param_3,int *param_4,
                  longlong *param_5,int *param_6)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  undefined2 uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  undefined1 auStack_358 [32];
  undefined8 *local_338;
  undefined8 *local_330;
  undefined8 **local_328;
  int *local_320;
  undefined8 *local_318;
  uint local_310;
  uint local_308;
  uint local_304;
  uint local_300;
  undefined8 *local_2f8;
  undefined8 *local_2f0;
  undefined8 *local_2e8;
  undefined8 *local_2e0;
  undefined4 local_2d8 [2];
  longlong local_2d0;
  undefined8 *local_2c8;
  longlong *local_2c0;
  longlong *local_2b8;
  int local_2b0;
  undefined8 uStack_2ac;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  uint local_290;
  int local_28c;
  int local_288;
  int local_284;
  int local_280;
  int local_27c;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_260;
  undefined8 local_258;
  longlong local_250;
  longlong local_248;
  undefined8 *local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined **local_208;
  longlong local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  uint uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  uint uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined1 local_198 [8];
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_180;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  uint uStack_144;
  int local_140;
  undefined4 uStack_13c;
  uint uStack_138;
  undefined4 uStack_134;
  int local_130;
  int local_12c;
  undefined4 local_128;
  int local_124;
  int local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  ulonglong local_108;
  int local_100;
  undefined4 local_fc;
  int local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_5f;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  local_2b8 = param_5;
  local_2d0 = *(longlong *)(**(longlong **)(param_1 + 0x50) + 0xd50);
  uVar16 = *(undefined8 *)(local_2d0 + 0x10);
  local_250 = **(longlong **)(local_2d0 + 0x5d8);
  local_2c0 = param_3;
  local_260 = uVar16;
  local_258 = param_2;
  if (param_3 == (longlong *)0x0) {
    lVar11 = 0;
  }
  else {
    lVar11 = (**(code **)(*param_3 + 0x48))(param_3);
  }
  lVar3 = *(longlong *)(lVar11 + 0x28);
  iVar10 = param_4[2];
  iVar25 = param_4[3];
  iVar26 = *param_4;
  local_308 = iVar10 - iVar26;
  iVar24 = param_4[1];
  uVar20 = iVar25 - iVar24;
  local_300 = uVar20;
  local_2c8 = (undefined8 *)lVar3;
  uVar9 = FUN_141a6c8c0(*(undefined4 *)(lVar3 + 0x50));
  local_304 = *(uint *)(lVar3 + 0x54);
  local_108 = (ulonglong)local_308;
  uStack_ec = 0;
  local_11c = 1;
  local_278 = 1;
  uStack_26c = 1;
  local_128 = 0;
  local_114 = 0;
  local_10c = 0;
  local_118 = 3;
  local_fc = 0x10001;
  local_f8 = *(int *)(lVar3 + 0x50);
  local_328 = &local_2f8;
  local_338 = (undefined8 *)local_2d8;
  uStack_f4 = 1;
  uStack_f0 = 0;
  local_e8 = 1;
  local_1a0 = 1;
  uStack_270 = 0;
  local_330 = (undefined8 *)0x0;
  local_1b0 = 1;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 1;
  local_2d8[0] = 4;
  local_2f8 = (undefined8 *)0x0;
  local_130 = iVar26;
  local_12c = iVar24;
  local_124 = iVar10;
  local_120 = iVar25;
  local_100 = uVar20;
  iVar10 = FUN_141a6e5e0(uVar16,&local_118,&local_1b0,9);
  if (iVar10 < 0) {
    local_330 = &local_238;
    local_238 = 0;
    local_230 = 0;
    local_338 = (undefined8 *)0x0;
    FUN_141a94000(iVar10,
                  "Adapter->CreateCommittedResource(NonMSAADesc, HeapProps, ED3D12AllocatorID::RenderTargetStandalone, D3D12_RESOURCE_STATE_RENDER_TARGET, nullptr, NonMSAATexture2D.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RenderTarget.cpp"
                  ,0x4c3);
  }
  puVar21 = local_2f8;
  local_d8 = local_2d0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_5f = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_d0 = 1;
  local_c8 = local_2f8;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_2e8 = local_2f8;
  if ((*(int *)(local_2f8 + 0x17) != 1) && (*(int *)(local_2f8 + 0x17) != 4)) {
    iVar10 = (**(code **)(*(longlong *)local_2f8[3] + 0x40))
                       ((longlong *)local_2f8[3],0,0,local_2f8 + 0x1b);
    if (iVar10 < 0) {
      local_330 = &local_228;
      local_338 = (undefined8 *)0x0;
      local_228 = 0;
      local_220 = 0;
      FUN_141a94000(iVar10,"Resource->Map(0, nullptr, &ResourceBaseAddress)",
                    "d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\../Public/D3D12Resources.h"
                    ,0xf9);
    }
    local_a0 = puVar21[0x1b];
  }
  local_98 = puVar21[0x1a];
  local_60 = 0;
  uStack_2a4 = 0;
  uStack_2a0 = 0;
  uStack_29c = 0;
  if (local_f8 == 0x1b) {
    local_2b0 = 0x1c;
  }
  else {
    local_2b0 = 0x57;
    if (local_f8 != 0x5a) {
      local_2b0 = local_f8;
    }
  }
  uStack_2ac = 4;
  puVar12 = (undefined8 *)operator_new(0x70);
  local_2f0 = puVar12;
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &PTR_FUN_144daa6c0;
    puVar12[1] = local_2d0;
    puVar13 = (undefined8 *)
              FDescriptorHeapManager::AllocateHeapSlot(local_2d0 + 0xb0,local_198,puVar12 + 3);
    piVar1 = (int *)(puVar12 + 8);
    puVar12[2] = *puVar13;
    *(undefined4 *)(puVar12 + 4) = 0;
    puVar12[0xb] = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar12 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar12 + 100) = 0;
    *(undefined2 *)(puVar12 + 0xd) = 0x100;
    *puVar12 = &PTR_FUN_144daa6c8;
    puVar12[0xb] = &PTR_LAB_144daa6d0;
    puVar12[5] = &local_d8;
    *piVar1 = local_2b0;
    *(undefined4 *)((longlong)puVar12 + 0x44) = (undefined4)uStack_2ac;
    *(undefined4 *)(puVar12 + 9) = uStack_2ac._4_4_;
    *(undefined4 *)((longlong)puVar12 + 0x4c) = uStack_2a4;
    puVar12[10] = CONCAT44(uStack_29c,uStack_2a0);
    if (*(int *)(local_c8 + 6) == 4) {
      uVar23 = 1;
    }
    else {
      uVar23 = *(undefined2 *)((longlong)local_c8 + 0x4c);
    }
    local_330 = (undefined8 *)CONCAT44(local_330._4_4_,*(undefined4 *)(puVar12 + 4));
    local_338 = (undefined8 *)CONCAT44(local_338._4_4_,*(undefined4 *)(local_c8 + 10));
    puVar14 = (undefined4 *)
              FUN_141a65dc0(&local_278,piVar1,*(undefined1 *)((longlong)local_c8 + 0x4e),uVar23);
    uVar6 = puVar14[1];
    uVar7 = puVar14[2];
    uVar8 = puVar14[3];
    *(undefined4 *)(puVar12 + 6) = *puVar14;
    *(undefined4 *)((longlong)puVar12 + 0x34) = uVar6;
    *(undefined4 *)(puVar12 + 7) = uVar7;
    *(undefined4 *)((longlong)puVar12 + 0x3c) = uVar8;
    uVar16 = puVar12[2];
    uVar4 = local_c8[3];
    uVar15 = mu::Mesh::GetFaceBuffers(local_2f0[1]);
    FUN_141a4e9d0(uVar15,uVar4,piVar1,uVar16);
    uVar16 = local_260;
    uVar20 = local_300;
  }
  if (local_2f0 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_2f0 + 0xc) = *(int *)(local_2f0 + 0xc) + 1;
    UNLOCK();
    local_2e8 = local_2f8;
    puVar21 = local_2f8;
  }
  local_2e0 = (undefined8 *)0x0;
  local_338 = (undefined8 *)((ulonglong)local_338 & 0xffffffff00000000);
  uVar19 = (&DAT_1464ca1c4)[(longlong)*(int *)((longlong)local_2c0 + 0x3c) * 10] * local_308 + 0xff
           & 0xffffff00;
  local_300 = uVar19;
  local_240 = local_2f0;
  iVar10 = FUN_141a6e3f0(uVar16,3,uVar19 * uVar20,&local_2e0);
  if (iVar10 < 0) {
    local_330 = &local_218;
    local_218 = 0;
    local_210 = 0;
    local_338 = (undefined8 *)0x0;
    FUN_141a94000(iVar10,
                  "Adapter->CreateBuffer(D3D12_HEAP_TYPE_READBACK, MipBytesAligned, StagingTexture2D.GetInitReference())"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RenderTarget.cpp"
                  ,0x4dc);
  }
  plVar5 = local_2b8;
  puVar12 = local_2e0;
  local_180 = 0;
  if ((*(byte *)(lVar11 + 0x1f8) & 1) != 0) {
    iVar10 = *param_6;
    if (iVar10 == 1) {
      local_180 = 1;
    }
    else if (iVar10 == 2) {
      local_180 = 2;
    }
    else if (iVar10 == 3) {
      local_180 = 3;
    }
    else if (iVar10 == 4) {
      local_180 = 4;
    }
    else if (iVar10 == 5) {
      local_180 = 5;
    }
    else {
      local_180 = 0;
    }
  }
  uStack_1dc = 1;
  local_1e8 = *(undefined4 *)((longlong)local_2c8 + 0x50);
  uStack_1b4 = 0;
  local_1d0 = 0;
  local_160 = local_2e0[3];
  local_158 = 1;
  iVar10 = 0;
  uStack_1e4 = local_308;
  uStack_1c8 = CONCAT44(local_308,local_1e8);
  uStack_1c0 = CONCAT44(1,uVar20);
  local_2c8 = local_2e0;
  local_150 = 0;
  uStack_14c = 0;
  uStack_144 = local_308;
  uStack_13c = 1;
  uStack_134 = 0;
  local_190 = puVar21[3];
  local_188 = 0;
  *(undefined4 *)(local_2b8 + 1) = 0;
  iVar25 = 0;
  iStack_1e0 = uVar20;
  uStack_1b8 = uVar19;
  uStack_148 = local_1e8;
  local_140 = uVar20;
  uStack_138 = uVar19;
  if (*(int *)((longlong)local_2b8 + 0xc) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(local_2b8);
    iVar10 = (int)plVar5[1];
    iVar25 = *(int *)((longlong)plVar5 + 0xc);
  }
  uVar19 = local_304;
  iVar10 = local_304 * uVar9 * uVar20 * local_308 + iVar10;
  *(int *)(plVar5 + 1) = iVar10;
  if (iVar25 < iVar10) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar5);
  }
  uVar27 = 0;
  puVar13 = puVar12;
  if (uVar19 != 0) {
    local_298 = 0;
    local_290 = local_308;
    local_28c = uVar20;
    do {
      local_288 = *param_4;
      local_284 = param_4[1];
      local_280 = param_4[2];
      local_27c = param_4[3];
      uVar16 = (**(code **)(*local_2c0 + 8))();
      lVar11 = local_250;
      local_318 = &local_298;
      local_320 = &local_288;
      local_328 = (undefined8 **)&local_118;
      local_330 = (undefined8 *)0x0;
      local_338 = local_2f0;
      local_310 = uVar27;
      FUN_141a64690(local_250,local_258,uVar16,0);
      FUN_141a60fb0(lVar11 + 0x460,puVar21,0x800,local_180);
      *(int *)(lVar11 + 0x2c54) = *(int *)(lVar11 + 0x2c54) + 1;
      local_328 = (undefined8 **)&local_130;
      local_330 = &local_190;
      plVar5 = *(longlong **)(*(longlong *)(lVar11 + 0x468) + 0x28);
      local_338 = (undefined8 *)((ulonglong)local_338 & 0xffffffff00000000);
      (**(code **)(*plVar5 + 0x80))(plVar5,&local_160,0,0);
      FUN_141a55210(**(undefined8 **)(local_2d0 + 0x5d8),&local_208,1);
      lVar11 = local_200;
      local_208 = &PTR_FUN_144da6378;
      if (local_200 != 0) {
        LOCK();
        piVar1 = (int *)(local_200 + 8);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar10 == 1) && (local_200 != 0)) {
          FUN_141a4db60(local_200);
          FMemory::operator_delete(lVar11,0x110);
        }
        local_2e8 = local_2f8;
        puVar21 = local_2f8;
      }
      iVar10 = (**(code **)(*(longlong *)puVar12[3] + 0x40))((longlong *)puVar12[3],0,0);
      if (iVar10 < 0) {
        local_330 = &local_1f8;
        local_1f8 = 0;
        local_1f0 = 0;
        local_338 = (undefined8 *)0x0;
        FUN_141a94000(iVar10,"StagingTexture2D->GetResource()->Map(0, nullptr, &pData)",
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RenderTarget.cpp"
                     );
      }
      iVar10 = param_4[1];
      if (iVar10 < param_4[3]) {
        iVar25 = param_4[2];
        do {
          iVar26 = *param_4;
          puVar22 = (undefined1 *)
                    ((ulonglong)(iVar26 * uVar9) +
                    (ulonglong)((iVar10 - param_4[1]) * local_300) + local_248);
          puVar17 = (undefined1 *)
                    ((longlong)(int)((uVar27 + (iVar10 - param_4[1]) * uVar19 * local_308) * uVar9)
                    + *local_2b8);
          if (iVar26 < iVar25) {
            do {
              uVar18 = (ulonglong)uVar9;
              if (uVar9 != 0) {
                do {
                  uVar2 = *puVar22;
                  puVar22 = puVar22 + 1;
                  *puVar17 = uVar2;
                  puVar17 = puVar17 + 1;
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
              }
              iVar25 = param_4[2];
              puVar17 = puVar17 + (uVar19 - 1) * uVar9;
              iVar26 = iVar26 + 1;
            } while (iVar26 < iVar25);
          }
          iVar10 = iVar10 + 1;
          puVar12 = local_2c8;
          puVar21 = local_2e8;
        } while (iVar10 < param_4[3]);
      }
      (**(code **)(*(longlong *)puVar12[3] + 0x48))((longlong *)puVar12[3],0,0);
      uVar27 = uVar27 + 1;
      puVar13 = local_2e0;
    } while (uVar27 < uVar19);
  }
  LOCK();
  piVar1 = (int *)(puVar13 + 1);
  iVar10 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar10 == 1) {
    (**(code **)*local_2e0)(local_2e0,1);
  }
  FUN_141a680b0(&local_240);
  FUN_141a7bb70(&local_d8);
  LOCK();
  piVar1 = (int *)(local_2f8 + 1);
  iVar10 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar10 == 1) {
    (**(code **)*local_2f8)(local_2f8,1);
  }
  return;
}



// FUNCTION 141a7abc0 FUN_141a7abc0 body=503 status=ok
// SIG undefined FUN_141a7abc0(void)

void FUN_141a7abc0(undefined8 param_1,longlong *param_2,int *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  void *_Dst;
  void *_Src;
  ulonglong _Size;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *local_res10;
  longlong local_res18;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_48 [12];
  int local_3c;
  
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x48))(param_2);
  }
  iVar7 = param_3[2];
  iVar2 = *param_3;
  uVar10 = param_3[3] - param_3[1];
  uVar11 = (ulonglong)uVar10;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = *param_5;
  uStack_60 = param_5[1];
  local_58 = *(undefined4 *)(param_5 + 2);
  local_78 = *param_3;
  iStack_74 = param_3[1];
  iStack_70 = param_3[2];
  iStack_6c = param_3[3];
  FUN_141a73ca0(param_1,&local_res10,param_2,&local_78,&local_88,&local_68,local_48);
  iVar6 = 0;
  iVar3 = (&DAT_1464ca1c4)[(longlong)*(int *)((longlong)param_2 + 0x3c) * 10];
  *(undefined4 *)(param_4 + 1) = 0;
  iVar8 = 0;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_4);
    iVar6 = *(int *)(param_4 + 1);
    iVar8 = *(int *)((longlong)param_4 + 0xc);
  }
  iVar6 = iVar3 * uVar10 * (iVar7 - iVar2) + iVar6;
  *(int *)(param_4 + 1) = iVar6;
  if (iVar8 < iVar6) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_4);
  }
  puVar5 = local_res10;
  iVar7 = (**(code **)(*(longlong *)local_res10[3] + 0x40))
                    ((longlong *)local_res10[3],0,0,&local_res18);
  if (iVar7 < 0) {
    local_98 = 0;
    local_90 = 0;
    FUN_141a94000(iVar7,"TempTexture2D->GetResource()->Map(0, nullptr, &pData)",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RenderTarget.cpp"
                  ,0x31a,0,&local_98);
  }
  _Dst = (void *)*param_4;
  _Size = (ulonglong)(uint)((param_3[2] - *param_3) * iVar3);
  uVar9 = local_3c * iVar3 + 0xffU & 0xffffff00;
  _Src = (void *)((ulonglong)(uint)((int)local_88 * iVar3) +
                 (ulonglong)(local_88._4_4_ * uVar9) + local_res18);
  if (uVar10 != 0) {
    do {
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
      _Dst = (void *)((longlong)_Dst + _Size);
      _Src = (void *)((longlong)_Src + (ulonglong)uVar9);
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  plVar4 = (longlong *)puVar5[3];
  (**(code **)(*plVar4 + 0x48))(plVar4,0,0);
  LOCK();
  piVar1 = (int *)(puVar5 + 1);
  iVar7 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar7 == 1) {
    (**(code **)*local_res10)(local_res10,1);
  }
  return;
}



// FUNCTION 141a7adc0 FUN_141a7adc0 body=482 status=ok
// SIG undefined FUN_141a7adc0(void)

void FUN_141a7adc0(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  BOOL BVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined2 uVar15;
  undefined1 local_48 [16];
  
  BVar10 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
  if (BVar10 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
  }
  plVar14 = *(longlong **)(param_1 + 400);
  if (*(longlong **)(param_1 + 400) == (longlong *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x188);
  }
  plVar1 = plVar14 + *(int *)(param_1 + 0x198);
  for (; plVar14 != plVar1; plVar14 = plVar14 + 1) {
    lVar2 = *plVar14;
    if (*(int *)(lVar2 + 0x5c) == 1) {
      *(ulonglong *)(lVar2 + 0x68) =
           *(ulonglong *)(param_1 + 0x88) / (ulonglong)*(uint *)(lVar2 + 0x84);
    }
    FUN_141a75120(lVar2,lVar2 + 0x58,param_1 + 0x40);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1a0);
  BVar10 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar10 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar14 = *(longlong **)(param_1 + 0x1d0);
  if (*(longlong **)(param_1 + 0x1d0) == (longlong *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x1c8);
  }
  plVar1 = plVar14 + *(int *)(param_1 + 0x1d8);
  if (plVar14 != plVar1) {
    do {
      lVar2 = *plVar14;
      uVar15 = 1;
      lVar3 = *(longlong *)(lVar2 + 0x80);
      *(longlong *)(lVar2 + 0x40) = param_1 + 0x40;
      lVar4 = *(longlong *)(param_1 + 0x50);
      if (*(int *)(lVar4 + 0x30) != 4) {
        uVar15 = *(undefined2 *)(lVar4 + 0x4c);
      }
      puVar11 = (undefined4 *)
                FUN_141a65fc0(local_48,lVar2 + 0x58,*(undefined1 *)(lVar4 + 0x4e),uVar15,
                              *(undefined4 *)(lVar4 + 0x50),*(undefined4 *)(lVar2 + 0x38));
      uVar7 = puVar11[1];
      uVar8 = puVar11[2];
      uVar9 = puVar11[3];
      *(undefined4 *)(lVar2 + 0x48) = *puVar11;
      *(undefined4 *)(lVar2 + 0x4c) = uVar7;
      *(undefined4 *)(lVar2 + 0x50) = uVar8;
      *(undefined4 *)(lVar2 + 0x54) = uVar9;
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x18);
      uVar13 = 0;
      if (lVar3 != 0) {
        uVar13 = *(undefined8 *)(lVar3 + 0x18);
      }
      uVar6 = *(undefined8 *)(lVar2 + 0x28);
      uVar12 = mu::Mesh::GetFaceBuffers(*(undefined8 *)(lVar2 + 0x20));
      FUN_141a4e9c4(uVar12,uVar5,uVar13,lVar2 + 0x58,uVar6);
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000141a7af9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 141a7afb0 Rehash body=520 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>_>,TDefaultMapHashableKeyFuncs<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_141a7b0ef;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_141a7b0ef:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        puVar12 = (uint *)(*param_1 + (longlong)iStack_1c * 0x48);
        uVar5 = (int)*plVar2 - 1U & *puVar12;
        puVar12[0x11] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar12[0x10] =
             *(uint *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141a7b1c0 FUN_141a7b1c0 body=534 status=ok
// SIG undefined FUN_141a7b1c0(void)

void FUN_141a7b1c0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar8) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar8 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_141a7b2ff;
        uVar8 = puVar12[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_141a7b2ff:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        lVar5 = (longlong)iStack_1c * 0x70 + *param_1;
        uVar8 = (int)((ulonglong)*(undefined8 *)(lVar5 + 0x58) >> 0x20) * 0x17 +
                (int)*(undefined8 *)(lVar5 + 0x58) & (int)*plVar2 - 1U;
        *(uint *)(lVar5 + 0x6c) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar5 + 0x68) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141a7b3e0 FUN_141a7b3e0 body=546 status=ok
// SIG undefined FUN_141a7b3e0(void)

void FUN_141a7b3e0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar8) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar8 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_141a7b51f;
        uVar8 = puVar12[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_141a7b51f:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        lVar5 = (longlong)iStack_1c * 800 + *param_1;
        uVar8 = (int)((ulonglong)*(undefined8 *)(lVar5 + 0x308) >> 0x20) * 0x17 +
                (int)*(undefined8 *)(lVar5 + 0x308) & (int)*plVar2 - 1U;
        *(uint *)(lVar5 + 0x31c) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar5 + 0x318) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141a7b610 Rehash body=532 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*>,TDefaultMapHashableKeyFuncs<FD3D12QuantizedBoundShaderState,FD3D12RootSignature_*,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141a7b73f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141a7b73f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0x30 + *param_1;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x2c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x28) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141a7b830 FUN_141a7b830 body=517 status=ok
// SIG undefined FUN_141a7b830(void)

void FUN_141a7b830(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_141a7b96f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_141a7b96f:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        lVar6 = (longlong)iStack_1c * 0x20 + *param_1;
        uVar5 = (int)*plVar2 - 1U & *(uint *)(lVar6 + 8);
        *(uint *)(lVar6 + 0x1c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x18) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141a7ba40 Release body=43 status=ok
// SIG undefined Release(void)

int FD3D12RefCount::Release(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar3 = iVar2 + -1;
  if ((iVar3 == 0) && (param_1 != (undefined8 *)0x0)) {
    (**(code **)*param_1)(param_1,iVar2);
  }
  return iVar3;
}



// FUNCTION 141a7ba70 ReleaseCommandAllocator body=111 status=ok
// SIG undefined ReleaseCommandAllocator(void)

void FD3D12CommandAllocatorManager::ReleaseCommandAllocator(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  BOOL BVar2;
  undefined8 *puVar3;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  }
  puVar3 = (undefined8 *)operator_new(0x10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = param_2;
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    *(undefined8 **)(param_1 + 0x20) = puVar3;
    *puVar1 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x000141a7bad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 141a7bae0 FUN_141a7bae0 body=22 status=ok
// SIG undefined FUN_141a7bae0(void)

void FUN_141a7bae0(longlong param_1,longlong param_2)

{
  int *piVar1;
  
  LOCK();
  piVar1 = (int *)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x38) + 0x18);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  FUN_141a70e50(param_1 + 0x20);
  return;
}



// FUNCTION 141a7bb00 FUN_141a7bb00 body=105 status=ok
// SIG undefined FUN_141a7bb00(void)

void FUN_141a7bb00(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x60);
  if (lVar3 != 0) {
    if (*(longlong **)(lVar3 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar3 + 8) + 0x10))();
    }
    FMemory::operator_delete(lVar3,0x10);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  return;
}



// FUNCTION 141a7bb70 FUN_141a7bb70 body=232 status=ok
// SIG undefined FUN_141a7bb70(void)

void FUN_141a7bb70(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = (int)param_1[1];
  if (iVar3 == 1) {
    if (*(char *)((longlong)param_1 + 0x79) != '\0') {
      FUN_141a6ae70(param_1,1);
      *(undefined1 *)((longlong)param_1 + 0x79) = 0;
    }
    iVar3 = (int)param_1[5];
    if ((iVar3 == 9) || (iVar3 == 8)) {
      FUN_141a5efd0(*param_1 + 0x6c0,param_1);
      iVar3 = (int)param_1[5];
    }
    if (iVar3 == 9) {
      LOCK();
      bVar4 = DAT_1469fd110 == 0;
      if (bVar4) {
        DAT_1469fd110 = 0;
      }
      UNLOCK();
      if (!bVar4) {
        FD3D12RefCount::Release(param_1[2]);
        return;
      }
    }
  }
  else {
    if (iVar3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x000141a7bbcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)param_1[3] + 8))((longlong *)param_1[3],param_1);
      return;
    }
    if (iVar3 != 4) {
      return;
    }
  }
  puVar2 = (undefined8 *)param_1[2];
  if (*(char *)((longlong)puVar2 + 0xb6) != '\0') {
    FUN_141a70ed0(*(longlong *)(*param_1 + 0x10) + 0x740,puVar2);
    return;
  }
  LOCK();
  piVar1 = (int *)(puVar2 + 1);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar3 == 1) && (puVar2 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141a7bc4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,1);
    return;
  }
  return;
}



// FUNCTION 141a7bc60 FUN_141a7bc60 body=146 status=ok
// SIG undefined FUN_141a7bc60(void)

void FUN_141a7bc60(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  BOOL BVar3;
  undefined8 *puVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xd0);
  if (lVar1 != 0) {
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
    }
    puVar4 = (undefined8 *)operator_new(0x10);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = lVar1;
      puVar2 = *(undefined8 **)(param_1 + 0x90);
      *(undefined8 **)(param_1 + 0x90) = puVar4;
      *puVar2 = puVar4;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 141a7bd00 FUN_141a7bd00 body=1143 status=ok
// SIG undefined FUN_141a7bd00(void)

ulonglong FUN_141a7bd00(longlong *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  BOOL BVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar16;
  undefined8 *local_48;
  ulonglong uStack_40;
  
  lVar3 = *param_1;
  puVar15 = (undefined8 *)0x0;
  if (param_2 == '\0') {
    while (*(longlong *)param_1[0xd] != 0) {
      plVar14 = *(longlong **)(*(longlong *)param_1[0xd] + 8);
      LOCK();
      bVar16 = (int)plVar14[6] == 0;
      if (bVar16) {
        *(int *)(plVar14 + 6) = 0;
      }
      UNLOCK();
      if (!bVar16) break;
      if (plVar14[8] != 0) {
        (**(code **)(*(longlong *)plVar14[7] + 0x20))((longlong *)plVar14[7],0xffffffff,0);
        plVar14[8] = 0;
      }
      lVar4 = *(longlong *)param_1[0xd];
      if (lVar4 != 0) {
        plVar14 = *(longlong **)(lVar4 + 8);
        lVar5 = param_1[0xd];
        param_1[0xd] = lVar4;
        *(undefined8 *)(lVar4 + 8) = 0;
        FMemory::operator_delete(lVar5,0x10);
      }
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x10))(plVar14,1);
      }
    }
    puVar10 = (undefined8 *)operator_new(0x50);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &PTR_Abandon_144daafb8;
      puVar10[2] = lVar3;
      puVar11 = (undefined8 *)operator_new(0x18);
      puVar13 = puVar15;
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar13 = puVar11;
      }
      puVar10[5] = puVar13;
      puVar10[4] = puVar13;
      lVar3 = *(longlong *)(lVar3 + 0x738);
      BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      if (BVar8 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      }
      while (*(longlong *)param_1[9] != 0) {
        local_48 = *(undefined8 **)(*(longlong *)param_1[9] + 8);
        uStack_40 = *(ulonglong *)(*(longlong *)param_1[9] + 0x10);
        if (0x1000 < (uint)puVar15) break;
        if (*(ulonglong *)(lVar3 + 0x40) < uStack_40) {
          uVar12 = (**(code **)(**(longlong **)(*(longlong *)(lVar3 + 0x78) + 0x10) + 0x40))();
          *(ulonglong *)(lVar3 + 0x70) = uVar12;
          *(ulonglong *)(lVar3 + 0x40) = uVar12;
          if (uVar12 < uStack_40) break;
        }
        lVar4 = *(longlong *)param_1[9];
        if (lVar4 != 0) {
          local_48 = *(undefined8 **)(lVar4 + 8);
          uStack_40 = *(ulonglong *)(lVar4 + 0x10);
          lVar5 = param_1[9];
          param_1[9] = lVar4;
          *(undefined8 *)(lVar4 + 8) = 0;
          *(undefined8 *)(lVar4 + 0x10) = 0;
          FMemory::operator_delete(lVar5,0x18);
        }
        *(int *)(param_1 + 10) = (int)param_1[10] + -1;
        puVar13 = (undefined8 *)operator_new(0x18);
        if (puVar13 != (undefined8 *)0x0) {
          *puVar13 = 0;
          puVar13[1] = local_48;
          puVar13[2] = uStack_40;
          puVar11 = (undefined8 *)puVar10[4];
          puVar10[4] = puVar13;
          *puVar11 = puVar13;
        }
        puVar15 = (undefined8 *)(ulonglong)((uint)puVar15 + 1);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      *(undefined4 *)(puVar10 + 6) = 0;
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar15 = puVar10;
    }
    lVar3 = DAT_1468b5010;
    LOCK();
    *(int *)(puVar15 + 6) = *(int *)(puVar15 + 6) + 1;
    UNLOCK();
    plVar14 = (longlong *)puVar15[7];
    puVar15[8] = lVar3;
    if (lVar3 == 0) {
      FUN_1415b5910();
      puVar15[7] = 0;
      FAsyncTask<FD3D12DeferredDeletionQueue::FD3D12AsyncDeletionWorker>::DoWork(puVar15);
    }
    else {
      if (plVar14 == (longlong *)0x0) {
        plVar14 = (longlong *)FUN_1415ab270(1);
        puVar15[7] = plVar14;
      }
      (**(code **)(*plVar14 + 0x18))();
      (**(code **)(*(longlong *)puVar15[8] + 0x10))((longlong *)puVar15[8],puVar15);
    }
    puVar10 = (undefined8 *)operator_new(0x10);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = 0;
      puVar10[1] = puVar15;
      puVar15 = (undefined8 *)param_1[0xc];
      param_1[0xc] = (longlong)puVar10;
      *puVar15 = puVar10;
    }
    return (ulonglong)puVar10 & 0xffffffffffffff00;
  }
  while (*(longlong *)param_1[0xd] != 0) {
    plVar14 = *(longlong **)(*(longlong *)param_1[0xd] + 8);
    lVar4 = *(longlong *)param_1[0xd];
    if (lVar4 != 0) {
      plVar14 = *(longlong **)(lVar4 + 8);
      lVar5 = param_1[0xd];
      param_1[0xd] = lVar4;
      *(undefined8 *)(lVar4 + 8) = 0;
      FMemory::operator_delete(lVar5,0x10);
    }
    plVar6 = (longlong *)plVar14[8];
    if (plVar6 == (longlong *)0x0) {
      LOCK();
      bVar16 = (int)plVar14[6] == 0;
      if (bVar16) {
        *(int *)(plVar14 + 6) = 0;
      }
      UNLOCK();
      if (!bVar16) {
        FAsyncTask<FD3D12DeferredDeletionQueue::FD3D12AsyncDeletionWorker>::DoWork(plVar14);
      }
code_r0x000141a7bda4:
      if (plVar14[8] != 0) {
        (**(code **)(*(longlong *)plVar14[7] + 0x20))((longlong *)plVar14[7],0xffffffff,0);
        goto LAB_141a7bdbc;
      }
    }
    else {
      cVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,plVar14);
      if (cVar7 == '\0') goto code_r0x000141a7bda4;
      FAsyncTask<FD3D12DeferredDeletionQueue::FD3D12AsyncDeletionWorker>::DoWork(plVar14);
      if ((longlong *)plVar14[7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar14[7] + 0x10))();
      }
LAB_141a7bdbc:
      plVar14[8] = 0;
    }
    (**(code **)(*plVar14 + 0x10))(plVar14,1);
  }
  lVar3 = *(longlong *)(lVar3 + 0x738);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 2);
  while( true ) {
    BVar8 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar8 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    if (*(longlong *)param_1[9] == 0) break;
    local_48 = *(undefined8 **)(*(longlong *)param_1[9] + 8);
    uVar12 = *(ulonglong *)(*(longlong *)param_1[9] + 0x10);
    if (*(ulonglong *)(lVar3 + 0x40) < uVar12) {
      uVar9 = (**(code **)(**(longlong **)(*(longlong *)(lVar3 + 0x78) + 0x10) + 0x40))();
      *(ulonglong *)(lVar3 + 0x70) = uVar9;
      *(ulonglong *)(lVar3 + 0x40) = uVar9;
      if (uVar9 < uVar12) break;
    }
    lVar4 = *(longlong *)param_1[9];
    if (lVar4 != 0) {
      local_48 = *(undefined8 **)(lVar4 + 8);
      lVar5 = param_1[9];
      param_1[9] = lVar4;
      *(undefined8 *)(lVar4 + 8) = 0;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      FMemory::operator_delete(lVar5,0x18);
    }
    *(int *)(param_1 + 10) = (int)param_1[10] + -1;
    LeaveCriticalSection(lpCriticalSection);
    LOCK();
    piVar1 = (int *)(local_48 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_48 != (undefined8 *)0x0)) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  BVar8 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar8 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  lVar3 = *(longlong *)param_1[9];
  LeaveCriticalSection(lpCriticalSection);
  return (ulonglong)(lVar3 == 0);
}



// FUNCTION 141a7c180 FUN_141a7c180 body=129 status=ok
// SIG undefined FUN_141a7c180(void)

void FUN_141a7c180(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar5 = DAT_1469fd220;
  if (DAT_1469fd220 != 0) {
    if (*(longlong *)(DAT_1469fd220 + 0x78) != 0) {
      plVar3 = *(longlong **)(*(longlong *)(DAT_1469fd220 + 0x70) + 0x18);
      (**(code **)(*plVar3 + 0x48))(plVar3,0,0);
      *(undefined8 *)(lVar5 + 0x78) = 0;
    }
    plVar3 = *(longlong **)(lVar5 + 0x68);
    *(undefined8 *)(lVar5 + 0x68) = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    puVar4 = *(undefined8 **)(lVar5 + 0x70);
    *(undefined8 *)(lVar5 + 0x70) = 0;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    DAT_1469fd220 = 0;
  }
  return;
}



// FUNCTION 141a7c210 FUN_141a7c210 body=432 status=ok
// SIG undefined FUN_141a7c210(void)

undefined8 FUN_141a7c210(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  ulonglong uVar10;
  longlong *plVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar10 = (longlong)(int)param_1[9] - 1;
  plVar11 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar11 = param_1 + 7;
  }
  iVar7 = *(int *)((longlong)plVar11 +
                  ((longlong)
                   ((int)((ulonglong)*(undefined8 *)(param_2 + 0x58) >> 0x20) * 0x17 +
                   (int)*(undefined8 *)(param_2 + 0x58)) & uVar10) * 4);
  if (iVar7 == -1) {
    return 0;
  }
  lVar3 = *param_1;
  while ((((((lVar5 = (longlong)iVar7 * 0x70 + lVar3,
             *(longlong *)(lVar5 + 0x18) != *(longlong *)(param_2 + 0x18) ||
             (*(int *)(lVar5 + 0x38) != *(int *)(param_2 + 0x38))) ||
            (*(longlong *)(lVar5 + 8) != *(longlong *)(param_2 + 8))) ||
           ((*(int *)(lVar5 + 0x20) != *(int *)(param_2 + 0x20) ||
            (*(int *)(lVar5 + 0x40) != *(int *)(param_2 + 0x40))))) ||
          ((*(int *)(lVar5 + 0x44) != *(int *)(param_2 + 0x44) ||
           ((*(int *)(lVar5 + 0x48) != *(int *)(param_2 + 0x48) ||
            (*(int *)(lVar5 + 0x4c) != *(int *)(param_2 + 0x4c))))))) ||
         (*(int *)(lVar5 + 0x50) != *(int *)(param_2 + 0x50)))) {
    iVar7 = *(int *)(lVar5 + 0x68);
    if (iVar7 == -1) {
      return 0;
    }
  }
  lVar5 = (longlong)iVar7 * 0x70;
  uVar10 = (longlong)*(int *)(lVar5 + 0x6c + lVar3) & uVar10;
  piVar9 = (int *)((longlong)plVar11 + uVar10 * 4);
  iVar2 = *(int *)((longlong)plVar11 + uVar10 * 4);
  do {
    if (iVar2 == -1) {
LAB_141a7c331:
      bVar4 = (byte)iVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x70 + *param_1) = iVar7;
      }
      uVar8 = 0xffffffff;
      puVar6 = (undefined4 *)((longlong)iVar7 * 0x70 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar8 = (undefined4)param_1[6];
      }
      puVar6[1] = uVar8;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar7;
      plVar11 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      return 1;
    }
    if (iVar2 == iVar7) {
      *piVar9 = *(int *)(lVar5 + 0x68 + lVar3);
      goto LAB_141a7c331;
    }
    piVar9 = (int *)((longlong)iVar2 * 0x70 + 0x68 + lVar3);
    iVar2 = *piVar9;
  } while( true );
}



// FUNCTION 141a7c3c0 FUN_141a7c3c0 body=438 status=ok
// SIG undefined FUN_141a7c3c0(void)

undefined8 FUN_141a7c3c0(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  int *piVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar8 = (longlong)(int)param_1[9] - 1;
  plVar11 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar11 = param_1 + 7;
  }
  iVar9 = *(int *)((longlong)plVar11 +
                  ((longlong)
                   ((int)((ulonglong)*(undefined8 *)(param_2 + 0x308) >> 0x20) * 0x17 +
                   (int)*(undefined8 *)(param_2 + 0x308)) & uVar8) * 4);
  if (iVar9 != -1) {
    lVar3 = *param_1;
    do {
      lVar10 = (longlong)iVar9 * 800 + lVar3;
      cVar5 = equality_pipeline_state_desc<FD3D12LowLevelGraphicsPipelineStateDesc>::operator()
                        (local_res8,lVar10,param_2);
      if (cVar5 != '\0') {
        lVar10 = (longlong)iVar9 * 800;
        uVar8 = (longlong)*(int *)(lVar10 + lVar3 + 0x31c) & uVar8;
        piVar7 = (int *)((longlong)plVar11 + uVar8 * 4);
        iVar2 = *(int *)((longlong)plVar11 + uVar8 * 4);
        goto joined_r0x000141a7c4c4;
      }
      iVar9 = *(int *)(lVar10 + 0x318);
    } while (iVar9 != -1);
  }
  return 0;
joined_r0x000141a7c4c4:
  if (iVar2 == -1) {
LAB_141a7c4ee:
    bVar4 = (byte)iVar9 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)((longlong)(int)param_1[6] * 800 + *param_1) = iVar9;
    }
    lVar3 = *param_1;
    uVar6 = 0xffffffff;
    *(undefined4 *)(lVar3 + lVar10) = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar6 = (undefined4)param_1[6];
    }
    *(undefined4 *)(lVar3 + 4 + lVar10) = uVar6;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar9;
    plVar11 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar11 = param_1 + 2;
    }
    puVar1 = (uint *)((longlong)plVar11 +
                     (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
    return 1;
  }
  if (iVar2 == iVar9) {
    *piVar7 = *(int *)(lVar10 + lVar3 + 0x318);
    goto LAB_141a7c4ee;
  }
  piVar7 = (int *)((longlong)iVar2 * 800 + 0x318 + lVar3);
  iVar2 = *piVar7;
  goto joined_r0x000141a7c4c4;
}



// FUNCTION 141a7c580 FUN_141a7c580 body=181 status=ok
// SIG undefined FUN_141a7c580(void)

void FUN_141a7c580(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar8 = uVar10 * 800;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 800 + *param_1) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar8) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      lVar8 = lVar8 + 800;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141a7c640 FUN_141a7c640 body=187 status=ok
// SIG undefined FUN_141a7c640(void)

void FUN_141a7c640(longlong param_1,void *param_2)

{
  undefined8 uVar1;
  
  FUN_141a7bb70((void *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x40),param_2,0x80);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined4 *)((longlong)param_2 + 8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  return;
}



// FUNCTION 141a7c700 FUN_141a7c700 body=151 status=ok
// SIG undefined FUN_141a7c700(void)

void FUN_141a7c700(longlong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar4 = FMemory::QuantizeSize(lVar3 * 800,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 9);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 800,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 141a7c7a0 FUN_141a7c7a0 body=130 status=ok
// SIG undefined FUN_141a7c7a0(void)

void FUN_141a7c7a0(longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 800,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 9);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 800,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 141a7c830 FUN_141a7c830 body=31 status=ok
// SIG undefined FUN_141a7c830(void)

void FUN_141a7c830(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x48) != *param_2) || (*(longlong *)(param_1 + 0x50) != param_2[1]))
  {
    lVar1 = param_2[1];
    *(longlong *)(param_1 + 0x48) = *param_2;
    *(longlong *)(param_1 + 0x50) = lVar1;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}



// FUNCTION 141a7c850 FUN_141a7c850 body=140 status=ok
// SIG undefined FUN_141a7c850(void)

void FUN_141a7c850(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  switch(param_2) {
  case 0:
    *(undefined1 *)(param_1 + 0x16) = param_3;
    *(undefined1 *)(param_1 + 0x5c) = 1;
    *(undefined1 *)(param_1 + 0x5e) = 1;
    return;
  case 1:
    *(undefined1 *)(param_1 + 0x1e) = param_3;
    *(undefined1 *)(param_1 + 0x5c) = 1;
    *(undefined1 *)(param_1 + 0x5e) = 1;
    return;
  case 2:
    *(undefined1 *)(param_1 + 0x22) = param_3;
    *(undefined1 *)(param_1 + 0x5c) = 1;
    *(undefined1 *)(param_1 + 0x5e) = 1;
    return;
  case 3:
    *(undefined1 *)(param_1 + 0x12) = param_3;
    *(undefined1 *)(param_1 + 0x5c) = 1;
    *(undefined1 *)(param_1 + 0x5e) = 1;
    return;
  case 4:
    *(undefined1 *)(param_1 + 0x1a) = param_3;
    *(undefined1 *)(param_1 + 0x5c) = 1;
    *(undefined1 *)(param_1 + 0x5e) = 1;
    return;
  case 5:
  case 6:
    *(undefined1 *)(param_1 + 0x26) = param_3;
    *(undefined1 *)(param_1 + 0x5c) = 1;
    *(undefined1 *)(param_1 + 0x5e) = 1;
  }
  return;
}



// FUNCTION 141a7c900 FUN_141a7c900 body=124 status=ok
// SIG undefined FUN_141a7c900(void)

void FUN_141a7c900(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  switch(param_2) {
  case 0:
    *(undefined1 *)(param_1 + 0x15) = param_3;
    *(undefined2 *)(param_1 + 0x5c) = 0x101;
    return;
  case 1:
    *(undefined1 *)(param_1 + 0x1d) = param_3;
    *(undefined2 *)(param_1 + 0x5c) = 0x101;
    return;
  case 2:
    *(undefined1 *)(param_1 + 0x21) = param_3;
    *(undefined2 *)(param_1 + 0x5c) = 0x101;
    return;
  case 3:
    *(undefined1 *)(param_1 + 0x11) = param_3;
    *(undefined2 *)(param_1 + 0x5c) = 0x101;
    return;
  case 4:
    *(undefined1 *)(param_1 + 0x19) = param_3;
    *(undefined2 *)(param_1 + 0x5c) = 0x101;
    return;
  case 5:
  case 6:
    *(undefined1 *)(param_1 + 0x25) = param_3;
    *(undefined2 *)(param_1 + 0x5c) = 0x101;
  }
  return;
}



// FUNCTION 141a7c9a0 FUN_141a7c9a0 body=287 status=ok
// SIG undefined FUN_141a7c9a0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_141a7c9a0(longlong param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong local_res8 [2];
  
  if (*(longlong *)(param_1 + 0x7e0) == 0) {
    lVar7 = 0;
    bVar1 = true;
    bVar2 = false;
    local_res8[1] = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x7e0) + 0x18);
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    bVar1 = false;
    bVar2 = true;
    local_res8[0] = lVar7;
  }
  uVar8 = 0;
  if (bVar1) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8 + 1);
  }
  if (bVar2) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  }
  if (lVar7 != param_2) {
    uVar6 = uVar8;
    if (lVar7 != 0) {
      uVar6 = *(ulonglong *)(lVar7 + 0xd0);
    }
    uVar5 = uVar8;
    if (param_2 != 0) {
      uVar5 = *(ulonglong *)(param_2 + 0xd0);
    }
    if (uVar6 != uVar5) {
      *(undefined1 *)(param_1 + 0x7e8) = 1;
    }
    uVar4 = 0;
    uVar3 = uVar4;
    if (param_2 != 0) {
      uVar3 = (uint)*(byte *)(param_2 + 0xc9);
    }
    *(uint *)(param_1 + 0x1dd0) = uVar3;
    uVar3 = uVar4;
    if (param_2 != 0) {
      uVar3 = (uint)*(byte *)(param_2 + 0xca);
    }
    *(uint *)(param_1 + 0x1de8) = uVar3;
    if (param_2 != 0) {
      uVar4 = (uint)*(byte *)(param_2 + 0xcb);
    }
    *(uint *)(param_1 + 0x1e00) = uVar4;
    if (param_2 != 0) {
      uVar8 = (ulonglong)*(byte *)(param_2 + 0xcc);
    }
    *(int *)(param_1 + 0x1e18) = (int)uVar8;
    *(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x2c3a) = 0xffff;
  }
  return;
}



// FUNCTION 141a7cac0 FUN_141a7cac0 body=408 status=ok
// SIG undefined FUN_141a7cac0(void)

void FUN_141a7cac0(longlong param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4,
                  short *param_5,undefined1 param_6,undefined1 param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  if (param_5 == (short *)0x0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x20);
    }
  }
  else {
    if (*(short **)(param_1 + 0x20) != param_5) {
      iVar9 = 0;
      iVar10 = iVar9;
      if (*param_5 != 0) {
        lVar11 = -1;
        do {
          lVar11 = lVar11 + 1;
        } while (param_5[lVar11] != 0);
        iVar10 = (int)lVar11 + 1;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      if (*(int *)(param_1 + 0x2c) != iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x20,iVar10);
        iVar9 = *(int *)(param_1 + 0x28);
      }
      *(int *)(param_1 + 0x28) = iVar9 + iVar10;
      if (*(int *)(param_1 + 0x2c) < iVar9 + iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x20);
      }
      if (iVar10 != 0) {
        _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x20),param_5,(longlong)iVar10 * 2);
      }
    }
    if (1 < *(int *)(param_1 + 0x28)) {
      if (*(int *)(param_1 + 0x28) == 0) {
        AK::MemoryMgr::StartProfileThreadUsage((long)*param_2);
      }
      else {
        AK::MemoryMgr::StartProfileThreadUsage((long)*param_2);
      }
    }
  }
  if ((*(int *)(param_3 + 1) == 1) || ((*(int *)(param_3 + 1) == 4 && (*(int *)(param_3 + 2) == 2)))
     ) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  *(undefined1 *)(param_1 + 0x6e) = uVar8;
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0x18);
  *(longlong **)(param_1 + 0x18) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  uVar7 = param_3[1];
  *(undefined8 *)(param_1 + 0x30) = *param_3;
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar4 = *(undefined4 *)(param_3 + 3);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  uVar3 = *(undefined4 *)(param_3 + 4);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar5 = *(undefined4 *)(param_3 + 5);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined1 *)(param_1 + 0x6c) = param_6;
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  *(undefined4 *)(param_1 + 0x5c) = uVar6;
  *(undefined1 *)(param_1 + 0x6d) = param_7;
  *(undefined4 *)(param_1 + 0x68) = param_4;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_3 + 2);
  FUN_141a4f8d0(*(undefined1 *)(param_1 + 0x6e),param_4,*(undefined8 *)(param_1 + 0x30));
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return;
}



// FUNCTION 141a7cc60 FUN_141a7cc60 body=19 status=ok
// SIG undefined FUN_141a7cc60(void)

void FUN_141a7cc60(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x538) != param_2) {
    *(int *)(param_1 + 0x538) = param_2;
    *(undefined1 *)(param_1 + 0x27) = 1;
  }
  return;
}



// FUNCTION 141a7cc80 FUN_141a7cc80 body=162 status=ok
// SIG undefined FUN_141a7cc80(void)

void FUN_141a7cc80(longlong param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(undefined8 *)(param_1 + 0x7c8) = param_4;
  *(undefined8 *)(param_1 + 0x780) = 0;
  *(undefined8 *)(param_1 + 0x788) = 0;
  *(undefined8 *)(param_1 + 0x790) = 0;
  *(undefined8 *)(param_1 + 0x798) = 0;
  *(undefined8 *)(param_1 + 0x7a0) = 0;
  *(undefined8 *)(param_1 + 0x7a8) = 0;
  *(undefined8 *)(param_1 + 0x7b0) = 0;
  *(undefined8 *)(param_1 + 0x7b8) = 0;
  _guard_xfg_dispatch_icall_nop((undefined8 *)(param_1 + 0x780),param_3,(ulonglong)param_2 << 3);
  uVar4 = 0;
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = uVar3 + 1;
      lVar1 = *param_3;
      param_3 = param_3 + 1;
      uVar2 = uVar3;
      if (lVar1 == 0) {
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
    } while (uVar3 < param_2);
    *(uint *)(param_1 + 0x7c0) = uVar4;
    return;
  }
  *(undefined4 *)(param_1 + 0x7c0) = 0;
  return;
}



// FUNCTION 141a7cd30 FUN_141a7cd30 body=112 status=ok
// SIG undefined FUN_141a7cd30(void)

void FUN_141a7cd30(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  switch(param_2) {
  case 0:
    *(undefined1 *)(param_1 + 0x14) = param_3;
    *(undefined1 *)(param_1 + 0x5b) = 1;
    return;
  case 1:
    *(undefined1 *)(param_1 + 0x1c) = param_3;
    *(undefined1 *)(param_1 + 0x5b) = 1;
    return;
  case 2:
    *(undefined1 *)(param_1 + 0x20) = param_3;
    *(undefined1 *)(param_1 + 0x5b) = 1;
    return;
  case 3:
    *(undefined1 *)(param_1 + 0x10) = param_3;
    *(undefined1 *)(param_1 + 0x5b) = 1;
    return;
  case 4:
    *(undefined1 *)(param_1 + 0x18) = param_3;
    *(undefined1 *)(param_1 + 0x5b) = 1;
    return;
  case 5:
  case 6:
    *(undefined1 *)(param_1 + 0x24) = param_3;
    *(undefined1 *)(param_1 + 0x5b) = 1;
  }
  return;
}



// FUNCTION 141a7cdc0 FUN_141a7cdc0 body=112 status=ok
// SIG undefined FUN_141a7cdc0(void)

void FUN_141a7cdc0(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  switch(param_2) {
  case 0:
    *(undefined1 *)(param_1 + 0x17) = param_3;
    *(undefined1 *)(param_1 + 0x5f) = 1;
    return;
  case 1:
    *(undefined1 *)(param_1 + 0x1f) = param_3;
    *(undefined1 *)(param_1 + 0x5f) = 1;
    return;
  case 2:
    *(undefined1 *)(param_1 + 0x23) = param_3;
    *(undefined1 *)(param_1 + 0x5f) = 1;
    return;
  case 3:
    *(undefined1 *)(param_1 + 0x13) = param_3;
    *(undefined1 *)(param_1 + 0x5f) = 1;
    return;
  case 4:
    *(undefined1 *)(param_1 + 0x1b) = param_3;
    *(undefined1 *)(param_1 + 0x5f) = 1;
    return;
  case 5:
  case 6:
    *(undefined1 *)(param_1 + 0x27) = param_3;
    *(undefined1 *)(param_1 + 0x5f) = 1;
  }
  return;
}



// FUNCTION 141a7ce50 FUN_141a7ce50 body=60 status=ok
// SIG undefined FUN_141a7ce50(void)

void FUN_141a7ce50(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (((*(int *)(param_1 + 0x73c) == 1) && (*(longlong *)(param_1 + 0x53c) == *param_2)) &&
     (*(longlong *)(param_1 + 0x544) == param_2[1])) {
    return;
  }
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  lVar3 = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(int *)(param_1 + 0x53c) = (int)*param_2;
  *(undefined4 *)(param_1 + 0x540) = uVar1;
  *(int *)(param_1 + 0x544) = (int)lVar3;
  *(undefined4 *)(param_1 + 0x548) = uVar2;
  *(undefined4 *)(param_1 + 0x73c) = 1;
  FUN_141a7d880();
  return;
}



// FUNCTION 141a7ce90 FUN_141a7ce90 body=13 status=ok
// SIG undefined FUN_141a7ce90(void)

void FUN_141a7ce90(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x44) != param_2) {
    *(int *)(param_1 + 0x44) = param_2;
    *(undefined1 *)(param_1 + 0x29) = 1;
  }
  return;
}



// FUNCTION 141a7cea0 FUN_141a7cea0 body=96 status=ok
// SIG undefined FUN_141a7cea0(void)

void FUN_141a7cea0(longlong param_1,uint param_2,void *param_3,void *param_4)

{
  *(uint *)(param_1 + 0x4e8) = param_2;
  if (param_2 != 0) {
    _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x4f0),param_3,(ulonglong)param_2 << 3);
    _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x510),param_4,(ulonglong)param_2 << 3);
    *(undefined1 *)(param_1 + 0x23) = 1;
  }
  return;
}



// FUNCTION 141a7cf00 FUN_141a7cf00 body=69 status=ok
// SIG undefined FUN_141a7cf00(void)

void FUN_141a7cf00(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if ((((*(int *)(param_1 + 0x58) == 1) && (*(longlong *)(param_1 + 0x5c) == *param_2)) &&
      (*(longlong *)(param_1 + 100) == param_2[1])) && (*(longlong *)(param_1 + 0x6c) == param_2[2])
     ) {
    return;
  }
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  lVar3 = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(int *)(param_1 + 0x5c) = (int)*param_2;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  *(int *)(param_1 + 100) = (int)lVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(longlong *)(param_1 + 0x6c) = param_2[2];
  *(undefined4 *)(param_1 + 0x58) = 1;
  *(undefined1 *)(param_1 + 0x25) = 1;
  FUN_141a7d880();
  return;
}



// FUNCTION 141a7cf50 FUN_141a7cf50 body=125 status=ok
// SIG undefined FUN_141a7cf50(void)

void FUN_141a7cf50(longlong param_1,uint param_2,void *param_3)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x58) == param_2) &&
     (iVar1 = _guard_xfg_dispatch_icall_nop
                        ((void *)(param_1 + 0x5c),param_3,(ulonglong)param_2 * 0x18), iVar1 == 0)) {
    return;
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x5c),param_3,(ulonglong)param_2 * 0x18);
  *(uint *)(param_1 + 0x58) = param_2;
  *(undefined1 *)(param_1 + 0x25) = 1;
  FUN_141a7d880(param_1);
  return;
}



// FUNCTION 141a7cfd0 FUN_141a7cfd0 body=297 status=ok
// SIG undefined FUN_141a7cfd0(void)

void FUN_141a7cfd0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_res8;
  
  if (DAT_1464c1140 != 0) {
    agsDriverExtensionsDX12_DestroyDevice
              (DAT_1464c1140,*(undefined8 *)(**(longlong **)(param_1 + 0x50) + 0x18),0);
    agsDeInit(DAT_1464c1140);
    DAT_1464c1140 = 0;
  }
  FUN_141ed11e0();
  plVar6 = *(longlong **)(param_1 + 0x50);
  plVar1 = plVar6 + *(int *)(param_1 + 0x58);
  for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
    lVar5 = *plVar6;
    plVar2 = *(longlong **)(lVar5 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2);
      lVar5 = *plVar6;
    }
    FUN_141a51990(lVar5);
    cVar3 = FUN_141a6f940();
    if (cVar3 != '\0') {
      local_res8 = (longlong *)0x0;
      iVar4 = (**(code **)*plVar2)(plVar2,&DAT_144daafd0,&local_res8);
      if (-1 < iVar4) {
        (**(code **)(*local_res8 + 0x28))(local_res8,2);
      }
      if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 0x10))();
      }
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x50,0);
  }
  FMemory::Free(*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 141a7d100 FUN_141a7d100 body=54 status=ok
// SIG undefined FUN_141a7d100(void)

undefined8 FUN_141a7d100(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_141a97610(param_1,param_2,*(undefined8 *)(param_1 + 0x30));
  uVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x78) + 0x10) + 0x40))();
  *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return *(undefined8 *)(param_1 + 0x38);
}



// FUNCTION 141a7d140 FUN_141a7d140 body=46 status=ok
// SIG undefined FUN_141a7d140(void)

undefined8 FUN_141a7d140(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_141a97610();
  uVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x78) + 0x10) + 0x40))();
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return *(undefined8 *)(param_1 + 0x38);
}



// FUNCTION 141a7d170 FUN_141a7d170 body=107 status=ok
// SIG undefined FUN_141a7d170(void)

void FUN_141a7d170(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (DAT_1469fd1c8 == '\0') {
    DAT_1469fd1c8 = '\x01';
  }
  if (*(char *)(param_1 + 0x14) == '\0') {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x24)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
    }
    uVar1 = *(int *)(param_1 + 0x4c) + 1;
    *(undefined1 *)(param_1 + 0x14) = 1;
    uVar2 = 0;
    if (uVar1 < *(uint *)(param_1 + 0x58)) {
      uVar2 = uVar1;
    }
    *(uint *)(param_1 + 8) = uVar2;
  }
  return;
}



// FUNCTION 141a7d1e0 FUN_141a7d1e0 body=414 status=ok
// SIG undefined FUN_141a7d1e0(void)

void FUN_141a7d1e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if ((DAT_146ab6339 != '\0') && (*(char *)(param_1 + 0x50) == '\0')) {
    bVar9 = DAT_1469fd068 != 0;
    uVar7 = 0;
    if ((bool)*(char *)(param_1 + 0x51) != bVar9) {
      iVar4 = (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x140))
                        (*(longlong **)(lVar2 + 0x18),bVar9);
      if (iVar4 < 0) {
        IConsoleVariable::Set(DAT_1469fd0d0,0,0x9000000);
      }
      else {
        plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(lVar2 + 0xd50) + 0x30) + 0x18);
        iVar4 = (**(code **)(*plVar3 + 0x80))(plVar3,&DAT_146ab6340);
        if (iVar4 < 0) {
          local_18 = 0;
          local_10 = 0;
          FUN_141a94000(iVar4,
                        "Adapter->GetDevice()->GetCommandListManager().GetTimestampFrequency(&GTimingFrequency)"
                        ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.cpp"
                        ,0x2ed,0,&local_18);
        }
        *(bool *)(param_1 + 0x51) = bVar9;
      }
    }
    iVar4 = (*(int *)(param_1 + 0x1c) + 1) % *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x1c) = iVar4;
    iVar4 = iVar4 * 2;
    lVar2 = **(longlong **)(*(longlong *)(lVar2 + 0xd50) + 0x5d8);
    *(int *)(lVar2 + 0x2c58) = *(int *)(lVar2 + 0x2c58) + 1;
    if (*(char *)(param_1 + 0x24) == '\0') {
      uVar8 = 2;
      uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8);
      iVar5 = iVar4;
    }
    else {
      iVar5 = FUN_141a6b7a0(DAT_1469fd220,lVar2);
      *(int *)(param_1 + 0x28) = iVar5;
      lVar1 = DAT_1469fd220;
      *(int *)(lVar2 + 0x2c58) = *(int *)(lVar2 + 0x2c58) + 1;
      uVar8 = *(undefined4 *)(lVar1 + 0x60);
      uVar6 = *(undefined8 *)(lVar1 + 0x68);
    }
    plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x468) + 0x28);
    (**(code **)(*plVar3 + 0x1a8))(plVar3,uVar6,uVar8,iVar5);
    lVar1 = *(longlong *)(param_1 + 0x38) + (longlong)iVar4 * 0x18;
    FUN_141a69050(lVar1,lVar2 + 0x460);
    if (*(longlong *)(lVar2 + 0x468) != 0) {
      uVar7 = *(undefined8 *)(*(longlong *)(lVar2 + 0x468) + 0x40);
    }
    *(undefined8 *)(lVar1 + 0x10) = uVar7;
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  return;
}



// FUNCTION 141a7d380 FUN_141a7d380 body=32 status=ok
// SIG undefined FUN_141a7d380(void)

void FUN_141a7d380(longlong param_1)

{
  if (*(char *)(param_1 + 0x79) == '\0') {
    FUN_141a6ae70(param_1,0);
    *(undefined1 *)(param_1 + 0x79) = 1;
  }
  return;
}



// FUNCTION 141a7d3a0 FUN_141a7d3a0 body=32 status=ok
// SIG undefined FUN_141a7d3a0(void)

void FUN_141a7d3a0(longlong param_1)

{
  if (*(char *)(param_1 + 0x79) != '\0') {
    FUN_141a6ae70(param_1,1);
    *(undefined1 *)(param_1 + 0x79) = 0;
  }
  return;
}



// FUNCTION 141a7d3c0 FUN_141a7d3c0 body=183 status=ok
// SIG undefined FUN_141a7d3c0(void)

void FUN_141a7d3c0(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  FUN_141a7bb70();
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  _guard_xfg_dispatch_icall_nop(param_1,param_2,0x80);
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(undefined4 *)((longlong)param_2 + 8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  return;
}



// FUNCTION 141a7d480 FUN_141a7d480 body=495 status=ok
// SIG undefined FUN_141a7d480(void)

void FUN_141a7d480(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar5 = *(int *)(param_1 + 0x50) + -1;
    lVar3 = (longlong)iVar5;
    iVar1 = -1;
    if (-1 < iVar5) {
      piVar4 = (int *)(param_1 + 0x54 + lVar3 * 4);
      do {
        iVar1 = iVar5;
        if (*piVar4 != 0) break;
        iVar5 = iVar5 + -1;
        piVar4 = piVar4 + -1;
        lVar3 = lVar3 + -1;
        iVar1 = -1;
      } while (-1 < lVar3);
    }
    iVar1 = iVar1 + 1;
  }
  uVar7 = 0;
  *(int *)(param_2 + 0x20) = iVar1;
  iVar1 = 0x57;
  if (*(int *)(param_1 + 0x50) != 0) {
    do {
      uVar6 = *(uint *)(param_1 + 0x74 + uVar7 * 4);
      iVar5 = iVar1;
      if ((uVar6 >> 0x18 & 1) == 0) {
        iVar5 = (&DAT_1464ca1cc)[(longlong)*(int *)(param_1 + 0x54 + uVar7 * 4) * 10];
      }
      if (iVar5 - 0x1bU < 0x47) {
        if ((uVar6 >> 4 & 1) == 0) {
          switch(iVar5) {
          case 0x1b:
            iVar2 = 0x1c;
            break;
          default:
            goto switchD_141a7d53e_caseD_1c;
          case 0x46:
            iVar2 = 0x47;
            break;
          case 0x49:
            iVar2 = 0x4a;
            break;
          case 0x4c:
            iVar2 = 0x4d;
            break;
          case 0x5a:
            iVar2 = iVar1;
            break;
          case 0x61:
            iVar2 = 0x62;
          }
        }
        else {
          switch(iVar5) {
          case 0x1b:
            iVar2 = 0x1d;
            break;
          default:
            goto switchD_141a7d53e_caseD_1c;
          case 0x46:
            iVar2 = 0x48;
            break;
          case 0x49:
            iVar2 = 0x4b;
            break;
          case 0x4c:
            iVar2 = 0x4e;
            break;
          case 0x5a:
            iVar2 = 0x5b;
            break;
          case 0x61:
            iVar2 = 99;
          }
        }
      }
      else {
switchD_141a7d53e_caseD_1c:
        if (iVar5 == 0x13) {
          iVar2 = 0x15;
        }
        else if (iVar5 == 0x27) {
          iVar2 = 0x29;
        }
        else if (iVar5 == 0x2c) {
          iVar2 = 0x2e;
        }
        else {
          iVar2 = 0x38;
          if (iVar5 != 0x35) {
            iVar2 = iVar5;
          }
        }
      }
      *(int *)(param_2 + uVar7 * 4) = iVar2;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x50));
  }
  if ((*(uint *)(param_1 + 0xa8) & 0x1000000) == 0) {
    iVar1 = (&DAT_1464ca1cc)[(longlong)*(int *)(param_1 + 0xa4) * 10];
    if (iVar1 == 0x13) {
      *param_3 = 0x14;
      return;
    }
    if (iVar1 == 0x27) {
      *param_3 = 0x28;
      return;
    }
    if (iVar1 == 0x2c) {
      *param_3 = 0x2d;
      return;
    }
    if (iVar1 == 0x35) {
      *param_3 = 0x37;
      return;
    }
  }
  *param_3 = iVar1;
  return;
}



// FUNCTION 141a7d760 FUN_141a7d760 body=231 status=ok
// SIG undefined FUN_141a7d760(void)

void FUN_141a7d760(undefined8 param_1,longlong param_2,undefined4 param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong in_stack_ffffffffffffffd8;
  
  uVar1 = *(undefined4 *)(param_2 + 0xa8);
  lVar2 = **(longlong **)(*(longlong *)(param_2 + 0x10) + 0x5d8);
  FUN_141a4f5b0(lVar2 + 0x460,param_2,uVar1,0x400,in_stack_ffffffffffffffd8 & 0xffffffff00000000);
  *(int *)(lVar2 + 0x2c54) = *(int *)(lVar2 + 0x2c54) + 1;
  lVar3 = *(longlong *)(lVar2 + 0x468);
  if (*(int *)(lVar3 + 0x100) != 0) {
    (**(code **)(**(longlong **)(lVar3 + 0x28) + 0xd0))
              (*(longlong **)(lVar3 + 0x28),*(int *)(lVar3 + 0x100),*(undefined8 *)(lVar3 + 0xf8));
    *(undefined4 *)(lVar3 + 0x100) = 0;
    lVar3 = *(longlong *)(lVar2 + 0x468);
  }
  (**(code **)(**(longlong **)(lVar3 + 0x28) + 0x78))
            (*(longlong **)(lVar3 + 0x28),*(undefined8 *)(param_2 + 0x18),param_3,
             *(undefined8 *)(param_4 + 0x18),param_5,param_6);
  FUN_141a4f5b0(lVar2 + 0x460,param_2,0x400,uVar1);
  return;
}



// FUNCTION 141a7d850 FUN_141a7d850 body=37 status=ok
// SIG undefined FUN_141a7d850(void)

void FUN_141a7d850(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x78) + 0x10) + 0x40))();
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}



// FUNCTION 141a7d880 FUN_141a7d880 body=210 status=ok
// SIG undefined FUN_141a7d880(void)

void FUN_141a7d880(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (*(int *)(param_1 + 0x73c) == 0) {
    *(undefined1 *)(param_1 + 0x26) = 1;
    return;
  }
  do {
    uVar5 = (ulonglong)uVar6;
    uVar2 = *(uint *)(param_1 + 0x58);
    if (uVar6 <= *(uint *)(param_1 + 0x58)) {
      uVar2 = uVar6;
    }
    uVar3 = (ulonglong)uVar2;
    iVar1 = *(int *)(param_1 + 0x540 + uVar5 * 0x10);
    iVar4 = (int)*(float *)(param_1 + 0x60 + uVar3 * 0x18);
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    *(int *)(param_1 + 0x640 + uVar5 * 0x10) = iVar4;
    iVar1 = *(int *)(param_1 + 0x53c + uVar5 * 0x10);
    iVar4 = (int)*(float *)(param_1 + 0x5c + uVar3 * 0x18);
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    *(int *)(param_1 + 0x63c + uVar5 * 0x10) = iVar4;
    iVar4 = (int)*(float *)(param_1 + 0x68 + uVar3 * 0x18) +
            (int)*(float *)(param_1 + 0x60 + uVar3 * 0x18);
    iVar1 = *(int *)(param_1 + 0x548 + uVar5 * 0x10);
    if (iVar1 <= iVar4) {
      iVar4 = iVar1;
    }
    *(int *)(param_1 + 0x648 + uVar5 * 0x10) = iVar4;
    iVar4 = (int)*(float *)(param_1 + 100 + uVar3 * 0x18) +
            (int)*(float *)(param_1 + 0x5c + uVar3 * 0x18);
    iVar1 = *(int *)(param_1 + 0x544 + uVar5 * 0x10);
    if (iVar1 <= iVar4) {
      iVar4 = iVar1;
    }
    uVar6 = uVar6 + 1;
    *(int *)(param_1 + 0x644 + uVar5 * 0x10) = iVar4;
  } while (uVar6 < *(uint *)(param_1 + 0x73c));
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}



// FUNCTION 141a7d960 FUN_141a7d960 body=99 status=ok
// SIG undefined FUN_141a7d960(void)

void FUN_141a7d960(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xd8);
    FUN_141a97610(lVar1,*(undefined4 *)(param_1 + 0xe4),*(undefined8 *)(lVar1 + 0x30));
    uVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x78) + 0x10) + 0x40))();
    *(longlong *)(lVar1 + 0x30) = *(longlong *)(lVar1 + 0x30) + 1;
    *(undefined8 *)(lVar1 + 0x70) = uVar2;
    *(undefined8 *)(lVar1 + 0x40) = uVar2;
    FUN_141a98990(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(lVar1 + 0x38));
  }
  return;
}



// FUNCTION 141a7d9d0 FUN_141a7d9d0 body=400 status=ok
// SIG undefined FUN_141a7d9d0(void)

void FUN_141a7d9d0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  BOOL BVar6;
  ulonglong local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  if ((uVar2 <= *(ulonglong *)(lVar1 + 0x48)) ||
     (FUN_141a52290(lVar1), uVar2 <= *(ulonglong *)(lVar1 + 0x48))) {
    return;
  }
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x70));
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x70));
  }
  uStack_30 = 0;
  uStack_28 = 0;
  while( true ) {
    if (**(longlong **)(lVar1 + 0x68) == 0) goto LAB_141a7db41;
    lVar3 = **(longlong **)(lVar1 + 0x68);
    local_38 = *(ulonglong *)(lVar3 + 8);
    uStack_30 = *(undefined8 *)(lVar3 + 0x10);
    uStack_28 = *(undefined8 *)(lVar3 + 0x18);
    if (uVar2 <= *(ulonglong *)(lVar1 + 0x48)) goto LAB_141a7db41;
    if (uVar2 < local_38) break;
    lVar3 = **(longlong **)(lVar1 + 0x68);
    if (lVar3 != 0) {
      local_38 = *(ulonglong *)(lVar3 + 8);
      uStack_30 = *(undefined8 *)(lVar3 + 0x10);
      uVar4 = *(undefined8 *)(lVar1 + 0x68);
      local_20 = 0;
      uStack_18 = 0;
      uStack_28 = *(undefined8 *)(lVar3 + 0x18);
      *(longlong *)(lVar1 + 0x68) = lVar3;
      *(undefined4 *)(lVar3 + 8) = 0;
      *(undefined4 *)(lVar3 + 0xc) = 0;
      *(undefined4 *)(lVar3 + 0x10) = 0;
      *(undefined4 *)(lVar3 + 0x14) = 0;
      local_10 = 0;
      *(undefined8 *)(lVar3 + 0x18) = 0;
      FMemory::operator_delete(uVar4,0x20);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x70));
    FUN_141a942a0(&uStack_30);
    BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x70));
    if (BVar6 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x70));
    }
    if (local_38 <= *(ulonglong *)(lVar1 + 0x48)) {
      local_38 = *(ulonglong *)(lVar1 + 0x48);
    }
    *(ulonglong *)(lVar1 + 0x48) = local_38;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x70));
  uVar5 = *(ulonglong *)(lVar1 + 0x48);
  while (uVar5 < uVar2) {
    Sleep(0);
    uVar5 = *(ulonglong *)(lVar1 + 0x48);
  }
LAB_141a7db41:
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x70));
  return;
}



// FUNCTION 141a7db60 IsSupported body=72 status=ok
// SIG undefined IsSupported(void)

ulonglong FD3D12DynamicRHIModule::IsSupported(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  bVar4 = false;
  if (uVar2 == 0) {
    FUN_141a86280();
    uVar2 = *(uint *)(param_1 + 0x18);
    bVar4 = uVar2 == 0;
  }
  plVar3 = (longlong *)(ulonglong)uVar2;
  if (!bVar4 && -1 < (int)uVar2) {
    plVar3 = *(longlong **)(param_1 + 0x10);
    lVar1 = *plVar3;
    if (((*(int *)(lVar1 + 0x4c) != 0) && (-1 < *(int *)(lVar1 + 0x48))) &&
       (0xafff < *(int *)(lVar1 + 0x4c))) {
      return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
    }
  }
  return (ulonglong)plVar3 & 0xffffffffffffff00;
}



// FUNCTION 141a7dbb0 FUN_141a7dbb0 body=305 status=ok
// SIG undefined FUN_141a7dbb0(void)

ulonglong FUN_141a7dbb0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int local_res8 [2];
  longlong local_28;
  uint local_20;
  uint local_1c;
  
  cVar2 = FUN_141ed07f0(local_res8);
  uVar4 = 0;
  if (cVar2 == '\0') {
    if (param_2 == 2) {
      DAT_146ab62cc = 5;
      DAT_1464c9c14 = 2;
    }
    else {
      DAT_1464c9c14 = 3;
      DAT_146ab62cc = 0;
    }
  }
  else {
    DAT_1464c9c14 = local_res8[0];
    if (local_res8[0] == 0) {
      DAT_146ab62cc = 7;
    }
    else if (local_res8[0] == 1) {
      DAT_146ab62cc = 0xe;
    }
  }
  local_28 = 0;
  local_1c = 0;
  local_20 = 0;
  uVar5 = uVar4;
  uVar6 = uVar4;
  uVar8 = uVar4;
  uVar9 = uVar4;
  if (0 < *(int *)(param_1 + 0x18)) {
    while( true ) {
      uVar1 = *(undefined8 *)(uVar9 + *(longlong *)(param_1 + 0x10));
      local_20 = (int)uVar6 + 1;
      if ((int)uVar5 < (int)local_20) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_28,uVar6);
      }
      uVar7 = (int)uVar8 + 1;
      *(undefined8 *)(local_28 + (longlong)(int)uVar6 * 8) = uVar1;
      if (*(int *)(param_1 + 0x18) <= (int)uVar7) break;
      uVar5 = (ulonglong)local_1c;
      uVar6 = (ulonglong)local_20;
      uVar8 = (ulonglong)uVar7;
      uVar9 = uVar9 + 0x10;
    }
  }
  lVar3 = operator_new(0x80);
  if (lVar3 != 0) {
    uVar4 = FUN_141a66700(lVar3,&local_28);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 141a7dcf0 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FD3D12DynamicRHIModule::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144db3e38;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 2);
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141a7dd40 FUN_141a7dd40 body=199 status=ok
// SIG undefined FUN_141a7dd40(void)

void * FUN_141a7dd40(undefined8 *param_1,void *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  _Src = (void *)*param_1;
  plVar2 = (longlong *)param_1[1];
  iVar1 = *(int *)((longlong)_Src + 0x400);
  *(int *)((longlong)param_2 + 0x400) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x404) = 0;
  }
  else {
    FUN_141a42a00(param_2,iVar1,0);
    _guard_xfg_dispatch_icall_nop(param_2,_Src,(longlong)iVar1 << 5);
  }
  *(undefined4 *)((longlong)param_2 + 0x408) = *(undefined4 *)((longlong)_Src + 0x408);
  uVar4 = *(undefined8 *)((longlong)_Src + 0x414);
  *(undefined8 *)((longlong)param_2 + 0x40c) = *(undefined8 *)((longlong)_Src + 0x40c);
  *(undefined8 *)((longlong)param_2 + 0x414) = uVar4;
  uVar4 = *(undefined8 *)((longlong)_Src + 0x424);
  *(undefined8 *)((longlong)param_2 + 0x41c) = *(undefined8 *)((longlong)_Src + 0x41c);
  *(undefined8 *)((longlong)param_2 + 0x424) = uVar4;
  uVar4 = *(undefined8 *)((longlong)_Src + 0x434);
  *(undefined8 *)((longlong)param_2 + 0x42c) = *(undefined8 *)((longlong)_Src + 0x42c);
  *(undefined8 *)((longlong)param_2 + 0x434) = uVar4;
  uVar4 = *(undefined8 *)((longlong)_Src + 0x444);
  *(undefined8 *)((longlong)param_2 + 0x43c) = *(undefined8 *)((longlong)_Src + 0x43c);
  *(undefined8 *)((longlong)param_2 + 0x444) = uVar4;
  lVar3 = *plVar2;
  *(longlong *)((longlong)param_2 + 0x450) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a7de10 FUN_141a7de10 body=539 status=ok
// SIG undefined FUN_141a7de10(void)

longlong * FUN_141a7de10(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  BOOL BVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  
  plVar8 = (longlong *)0x0;
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  }
  plVar7 = plVar8;
  if (0 < *(int *)(param_1 + 10)) {
    plVar7 = *(longlong **)(param_1[9] + -8 + (longlong)*(int *)(param_1 + 10) * 8);
    *(int *)(param_1 + 10) = *(int *)(param_1 + 10) + -1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  if (plVar7 == (longlong *)0x0) {
    lVar6 = operator_new(0x2a0);
    plVar7 = plVar8;
    if (lVar6 != 0) {
      plVar7 = (longlong *)FUN_141a4c410(lVar6,*(undefined8 *)(*param_2 + 0xd50),0x200000);
    }
    FUN_141a55ef0(plVar7);
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    }
    iVar5 = *(int *)(param_1 + 3);
    *(int *)(param_1 + 3) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar5);
    }
    *(longlong **)(param_1[2] + (longlong)iVar5 * 8) = plVar7;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  }
  puStack_30 = local_res8;
  local_res8[0] = 0;
  local_38 = 0x41a84540;
  uStack_34 = 1;
  lVar6 = FUN_1415d8310(&local_38,&DAT_1464c11e8);
  *(longlong **)(lVar6 + 0x18) = plVar7;
  plVar2 = (longlong *)param_1[1];
  plVar9 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar10 = iVar5 == 0;
    if (bVar10) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar9 = plVar8, !bVar10) {
      LOCK();
      bVar10 = iVar5 == (int)plVar2[1];
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar10) {
        plVar9 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar8 = (longlong *)*param_1;
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          LOCK();
          plVar9 = plVar2 + 1;
          lVar3 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          plVar9 = plVar2;
          if ((int)lVar3 == 1) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  *(longlong **)(lVar6 + 0x20) = plVar8;
  plVar8 = *(longlong **)(lVar6 + 0x28);
  if (plVar9 != plVar8) {
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(lVar6 + 0x28);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    *(longlong **)(lVar6 + 0x28) = plVar9;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 8)
       = plVar7;
  return plVar7;
}



// FUNCTION 141a7e030 FUN_141a7e030 body=3871 status=ok
// SIG undefined FUN_141a7e030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141a7e354) */
/* WARNING: Removing unreachable block (ram,0x000141a7e375) */

longlong FUN_141a7e030(longlong param_1,uint param_2,uint param_3,uint param_4,char param_5,
                      char param_6,byte param_7,uint param_8,uint param_9,uint param_10,
                      longlong *param_11)

{
  undefined1 auVar1 [16];
  uint3 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  int *piVar21;
  void *_Dst;
  uint uVar22;
  undefined2 uVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  bool bVar28;
  undefined1 auStack_318 [32];
  ulonglong local_2f8;
  uint local_2f0;
  void *local_2e8;
  uint local_2e0;
  char local_2d8;
  uint local_2d0;
  longlong *local_2c8;
  undefined8 local_2c0;
  char local_2b8;
  byte local_2b7;
  char local_2b6;
  char local_2b5;
  uint local_2b4;
  int local_2b0;
  uint local_2ac;
  undefined4 local_2a8;
  uint local_2a0;
  uint local_29c;
  uint local_298;
  uint local_294;
  int local_290;
  uint local_28c;
  longlong *local_288;
  undefined4 local_280;
  longlong local_278;
  undefined8 local_270;
  int local_268;
  undefined4 local_264;
  uint local_260;
  undefined4 local_25c;
  undefined4 uStack_258;
  uint uStack_254;
  int local_250;
  uint uStack_24c;
  uint uStack_248;
  uint uStack_244;
  undefined4 uStack_240;
  int local_238;
  undefined4 local_234;
  undefined8 local_230;
  undefined4 local_228;
  uint local_224;
  longlong local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  int local_208;
  undefined4 local_204;
  uint local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  ulonglong local_1d8;
  undefined8 uStack_1d0;
  int local_1c8;
  uint uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  uint local_1b8;
  void *local_1b0;
  int local_1a8;
  undefined4 local_1a4;
  int local_1a0 [3];
  uint local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  ulonglong local_178;
  uint uStack_170;
  undefined2 uStack_16c;
  undefined2 uStack_16a;
  int local_168;
  uint uStack_164;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  uint uStack_138;
  undefined4 uStack_134;
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  int local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined4 local_e8;
  undefined1 local_d8 [16];
  longlong local_c8;
  undefined8 local_90;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  local_2b8 = param_6;
  local_2b7 = param_7;
  local_2b4 = param_8;
  local_288 = param_11;
  if (DAT_1464c9c14 == 0) {
    param_10 = param_10 & 0xffffffef;
  }
  if ((param_10 & 0x1000000) == 0) {
    iVar9 = (&DAT_1464ca1cc)[(ulonglong)param_7 * 10];
  }
  else {
    iVar9 = 0x57;
  }
  local_2b0 = iVar9;
  local_2ac = param_10;
  local_29c = param_4;
  local_298 = param_2;
  local_294 = param_3;
  iVar8 = FUN_141a2ea30(iVar9,CONCAT31((uint3)(param_10 >> 0xc),(char)(param_10 >> 4)) & 0xffffff01)
  ;
  if (iVar9 == 0x13) {
    iVar18 = 0x14;
  }
  else if (iVar9 == 0x27) {
    iVar18 = 0x28;
  }
  else if (iVar9 == 0x2c) {
    iVar18 = 0x2d;
  }
  else {
    iVar18 = 0x37;
    if (iVar9 != 0x35) {
      iVar18 = iVar9;
    }
  }
  if ((8 < param_9) || ((param_10 & 0x1000000) != 0)) {
    param_9 = 1;
  }
  uStack_16a = (undefined2)param_8;
  local_280 = 6;
  if (param_9 < 2) {
    local_280 = 4;
  }
  local_188 = 3;
  local_210 = 5;
  if (param_9 < 2) {
    local_210 = 3;
  }
  uVar2 = (uint3)(local_2ac >> 0x1a);
  local_1d8 = (ulonglong)local_298;
  local_28c = CONCAT31(uVar2,~(byte)(local_2ac >> 0x12)) & 0xffffff01;
  bVar28 = false;
  bVar5 = false;
  uStack_170 = local_294;
  uStack_180 = 0;
  uStack_16c = (undefined2)local_29c;
  uStack_160 = 0;
  local_158 = 0;
  local_2b5 = '\0';
  local_1e8 = CONCAT44(uStack_184,3);
  uStack_1d0 = CONCAT26(uStack_16a,CONCAT24(uStack_16c,local_294));
  uStack_1e0 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  if ((local_2ac & 1) == 0) {
    if ((local_2ac & 4) == 0) {
      if ((local_2ac & 2) == 0) {
        local_1b8 = 0;
        uVar19 = local_1b8;
        local_1b8 = 0;
      }
      else {
        if (((local_2b7 - 0xb & 0xf6) == 0) && (local_2b7 != 0x13)) goto LAB_141a7e20f;
        local_1b8 = 1;
        bVar5 = true;
        uVar19 = 1;
      }
    }
    else {
LAB_141a7e20f:
      bVar28 = true;
      local_1b8 = 2;
      local_2b5 = '\x01';
      uVar19 = 2;
    }
  }
  else {
    local_1b8 = 1;
    uVar19 = 1;
    bVar5 = true;
  }
  if ((local_2ac >> 0x10 & 1) != 0) {
    uVar19 = uVar19 | 4;
    local_1b8 = uVar19;
  }
  if ((bVar28) && ((local_2ac & 8) == 0)) {
    uVar19 = uVar19 | 8;
    local_28c = (uint)uVar2 << 8;
    local_1b8 = uVar19;
  }
  local_2ac = local_2ac & 0xffbfffff;
  lVar27 = **(longlong **)(param_1 + 0x50);
  if ((bVar28) && ((int)local_288[2] == 2)) {
    uStack_24c = *(uint *)((longlong)local_288 + 0x14);
    uStack_248 = CONCAT31(uStack_248._1_3_,(char)local_288[3]);
    local_e8 = uStack_240;
    local_250 = iVar18;
LAB_141a7e2e7:
    local_f8 = local_250;
    uStack_f4 = uStack_24c;
    uStack_f0 = uStack_248;
    uStack_ec = uStack_244;
    piVar21 = &local_f8;
    uStack_240 = local_e8;
  }
  else {
    piVar21 = (int *)0x0;
    if ((bVar5) && (piVar21 = (int *)0x0, (int)local_288[2] == 1)) {
      auVar1 = *(undefined1 (*) [16])((longlong)local_288 + 0x14);
      local_e8 = auVar1._12_4_;
      uStack_24c = auVar1._0_4_;
      uStack_248 = auVar1._4_4_;
      uStack_244 = auVar1._8_4_;
      local_250 = iVar8;
      goto LAB_141a7e2e7;
    }
  }
  if ((-(((uVar19 & 1) != 0 || (uVar19 & 4) != 0) || (uVar19 & 2) != 0) & 0x10U |
      ~(byte)(uVar19 >> 3) & 1) == 1) {
    local_2a8 = 0xc0;
  }
  else {
    local_2a8 = 0;
  }
  local_278 = lVar27;
  local_1c8 = iVar9;
  uStack_1c4 = param_9;
  local_178 = local_1d8;
  local_168 = iVar9;
  uStack_164 = param_9;
  lVar12 = operator_new(0x278);
  if (lVar12 == 0) {
    lVar12 = 0;
  }
  else {
    local_2c8 = local_288 + 2;
    local_2c0 = 0;
    local_2d0 = local_2ac;
    local_2d8 = local_2b8;
    local_2e0 = (uint)local_2b7;
    local_2e8 = (void *)CONCAT44(local_2e8._4_4_,param_9);
    local_2f0 = param_8;
    local_2f8 = CONCAT44(local_2f8._4_4_,local_29c);
    lVar12 = FUN_141a81f60(lVar12,*(undefined8 *)(lVar27 + 0xd50),local_298,local_294);
  }
  uVar19 = local_2ac;
  local_2f8 = lVar12 + 0x80;
  local_2e0 = local_2a8;
  if (*local_288 != 0) {
    local_2e0 = 0x400;
  }
  local_2e8 = (void *)CONCAT44(local_2e8._4_4_,local_2ac);
  local_2f0 = CONCAT31(local_2f0._1_3_,local_2b7);
  local_1f0 = lVar12;
  FUN_141a918e0(*(undefined8 *)(lVar27 + 0xd50),lVar27,&local_1e8,piVar21);
  uVar26 = 0;
  if (bVar5) {
    if (((uVar19 >> 0x17 & 1) == 0) || ((param_5 == '\0' && (local_2b8 == '\0')))) {
      cVar6 = '\0';
      uVar19 = local_2b4;
    }
    else {
      cVar6 = '\x01';
      uVar19 = uStack_1d0._4_2_ * local_2b4;
    }
    local_2b6 = cVar6;
    FUN_141a91c60(lVar12 + 0x68,uVar19);
    local_2a0 = 0;
    uVar19 = local_2b4;
    if (local_2b4 != 0) {
      do {
        uVar10 = local_2a0;
        if (cVar6 == '\0') {
          puVar13 = (undefined8 *)0x0;
          local_1f8 = 0;
          local_208 = iVar8;
          local_200 = local_2a0;
          if ((param_5 == '\0') && (local_2b8 == '\0')) {
            local_204 = local_280;
            iVar9 = FUN_141a71f60(local_2b0);
            if (iVar9 == 0x13) {
              iVar9 = iVar8 + -0x15;
LAB_141a7e709:
              if ((iVar9 != 0) && (local_1fc = 1, iVar9 == 1)) goto LAB_141a7e765;
            }
            else if (iVar9 == 0x2c) {
              iVar9 = iVar8 + -0x2e;
              goto LAB_141a7e709;
            }
            local_1fc = 0;
          }
          else {
            local_1f8 = (ulonglong)uStack_1d0._4_2_;
            local_204 = 5;
            local_1fc = 0;
            iVar9 = FUN_141a71f60(local_2b0);
            if (iVar9 == 0x13) {
              iVar9 = iVar8 + -0x15;
LAB_141a7e753:
              if ((iVar9 == 0) || (uVar11 = 1, iVar9 != 1)) goto LAB_141a7e75f;
            }
            else {
              if (iVar9 == 0x2c) {
                iVar9 = iVar8 + -0x2e;
                goto LAB_141a7e753;
              }
LAB_141a7e75f:
              uVar11 = 0;
            }
            local_1f8 = CONCAT44(uVar11,(undefined4)local_1f8);
          }
LAB_141a7e765:
          puVar14 = (undefined8 *)operator_new(0x70);
          if (puVar14 != (undefined8 *)0x0) {
            lVar27 = *(longlong *)(local_278 + 0xd50);
            *puVar14 = &PTR_FUN_144daa6c0;
            puVar14[1] = lVar27;
            puVar13 = (undefined8 *)
                      FDescriptorHeapManager::AllocateHeapSlot(lVar27 + 0xb0,local_128,puVar14 + 3);
            puVar14[2] = *puVar13;
            *(undefined4 *)(puVar14 + 4) = 0;
            puVar14[0xb] = &PTR_FUN_143f3ece8;
            *(undefined4 *)(puVar14 + 0xc) = 0;
            *(undefined4 *)((longlong)puVar14 + 100) = 0;
            *(undefined2 *)(puVar14 + 0xd) = 0x100;
            *puVar14 = &PTR_FUN_144daa6c8;
            puVar14[0xb] = &PTR_LAB_144daa6d0;
            FUN_141a85460(puVar14,&local_208,lVar12 + 0x80);
            puVar13 = puVar14;
          }
          if (uVar26 < *(uint *)(lVar12 + 0x128)) {
            lVar27 = *(longlong *)(lVar12 + 0x120);
            if (*(longlong *)(lVar12 + 0x120) == 0) {
              lVar27 = lVar12 + 0x118;
            }
            lVar20 = *(longlong *)(lVar27 + (longlong)(int)uVar26 * 8);
            *(undefined8 **)(lVar27 + (longlong)(int)uVar26 * 8) = puVar13;
            if (puVar13 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar13 + 0xc) = *(int *)(puVar13 + 0xc) + 1;
              UNLOCK();
            }
            if (lVar20 != 0) {
              puVar13 = (undefined8 *)(lVar20 + 0x58);
              LOCK();
              piVar21 = (int *)(lVar20 + 0x60);
              iVar9 = *piVar21;
              *piVar21 = *piVar21 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                if ((*(char *)(lVar20 + 0x68) == '\0') &&
                   ((DAT_146ab62f5 != '\0' ||
                    (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
                  LOCK();
                  bVar28 = *(int *)(lVar20 + 100) == 0;
                  if (bVar28) {
                    *(int *)(lVar20 + 100) = 1;
                  }
                  UNLOCK();
                  if (bVar28) {
                    TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar13);
                    uVar26 = uVar26 + 1;
                    goto LAB_141a7e66d;
                  }
                }
                else {
                  (**(code **)*puVar13)(puVar13,1);
                }
              }
            }
          }
          uVar26 = uVar26 + 1;
        }
        else {
          uVar22 = 0;
          *(undefined1 *)(lVar12 + 0x130) = 1;
          *(uint *)(lVar12 + 0x134) = (uint)uStack_1d0._4_2_;
          uVar24 = (uint)uStack_1d0._4_2_;
          cVar6 = local_2b6;
          if (uStack_1d0._4_2_ != 0) {
            iVar9 = FUN_141a71f60(local_2b0);
            do {
              local_1a0[1] = 5;
              local_18c = 1;
              local_190 = 1;
              if (iVar9 == 0x13) {
                iVar18 = iVar8 + -0x15;
LAB_141a7e515:
                if ((iVar18 == 0) || (iVar18 != 1)) goto LAB_141a7e520;
              }
              else {
                if (iVar9 == 0x2c) {
                  iVar18 = iVar8 + -0x2e;
                  goto LAB_141a7e515;
                }
LAB_141a7e520:
                local_18c = 0;
              }
              local_1a0[0] = iVar8;
              local_1a0[2] = uVar10;
              local_194 = uVar22;
              puVar13 = (undefined8 *)operator_new(0x70);
              if (puVar13 == (undefined8 *)0x0) {
                puVar13 = (undefined8 *)0x0;
              }
              else {
                lVar27 = *(longlong *)(local_278 + 0xd50);
                *puVar13 = &PTR_FUN_144daa6c0;
                puVar13[1] = lVar27;
                puVar14 = (undefined8 *)
                          FDescriptorHeapManager::AllocateHeapSlot
                                    (lVar27 + 0xb0,local_130,puVar13 + 3);
                puVar13[2] = *puVar14;
                *(undefined4 *)(puVar13 + 4) = 0;
                puVar13[0xb] = &PTR_FUN_143f3ece8;
                *(undefined4 *)(puVar13 + 0xc) = 0;
                *(undefined4 *)((longlong)puVar13 + 100) = 0;
                *(undefined2 *)(puVar13 + 0xd) = 0x100;
                *puVar13 = &PTR_FUN_144daa6c8;
                puVar13[0xb] = &PTR_LAB_144daa6d0;
                FUN_141a85460(puVar13,local_1a0,lVar12 + 0x80);
              }
              if (uVar26 < *(uint *)(lVar12 + 0x128)) {
                lVar27 = *(longlong *)(lVar12 + 0x120);
                if (*(longlong *)(lVar12 + 0x120) == 0) {
                  lVar27 = lVar12 + 0x118;
                }
                lVar20 = *(longlong *)(lVar27 + (longlong)(int)uVar26 * 8);
                *(undefined8 **)(lVar27 + (longlong)(int)uVar26 * 8) = puVar13;
                if (puVar13 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar13 + 0xc) = *(int *)(puVar13 + 0xc) + 1;
                  UNLOCK();
                }
                if (lVar20 != 0) {
                  puVar13 = (undefined8 *)(lVar20 + 0x58);
                  LOCK();
                  piVar21 = (int *)(lVar20 + 0x60);
                  iVar18 = *piVar21;
                  *piVar21 = *piVar21 + -1;
                  UNLOCK();
                  if (iVar18 == 1) {
                    if ((*(char *)(lVar20 + 0x68) == '\0') &&
                       ((DAT_146ab62f5 != '\0' ||
                        (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))) {
                      LOCK();
                      bVar28 = *(int *)(lVar20 + 100) == 0;
                      if (bVar28) {
                        *(int *)(lVar20 + 100) = 1;
                      }
                      UNLOCK();
                      if (bVar28) {
                        TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar13);
                      }
                    }
                    else {
                      (**(code **)*puVar13)(puVar13,1);
                    }
                  }
                }
              }
              uVar26 = uVar26 + 1;
              uVar22 = uVar22 + 1;
              uVar19 = local_2b4;
              uVar10 = local_2a0;
              cVar6 = local_2b6;
            } while (uVar22 < uVar24);
          }
        }
LAB_141a7e66d:
        local_2a0 = local_2a0 + 1;
      } while (local_2a0 < uVar19);
    }
  }
  if (local_2b5 != '\0') {
    uVar19 = 0;
    uStack_254 = 0;
    if (local_2b0 == 0x13) {
      local_268 = 0x14;
    }
    else if (local_2b0 == 0x27) {
      local_268 = 0x28;
    }
    else if (local_2b0 == 0x2c) {
      local_268 = 0x2d;
    }
    else {
      local_268 = 0x37;
      if (local_2b0 != 0x35) {
        local_268 = local_2b0;
      }
    }
    if ((param_5 == '\0') && (local_2b8 == '\0')) {
      local_264 = local_210;
    }
    else {
      uStack_254 = (uint)uStack_1d0._4_2_;
      local_264 = 4;
    }
    uStack_258 = 0;
    local_25c = 0;
    if ((local_268 == 0x14) || (local_268 == 0x2d)) {
      cVar6 = '\x01';
    }
    else {
      cVar6 = '\0';
    }
    lVar27 = 0xd0;
    do {
      local_260 = (uint)((uVar19 & 0x21) != 0);
      if (cVar6 != '\0') {
        local_260 = -(uint)((uVar19 & 0x12) != 0) & 2 | local_260;
      }
      puVar14 = (undefined8 *)operator_new();
      puVar13 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        lVar20 = *(longlong *)(local_278 + 0xd50);
        *puVar14 = &PTR_FUN_144db3f58;
        puVar14[1] = lVar20;
        puVar13 = (undefined8 *)
                  FDescriptorHeapManager::AllocateHeapSlot(lVar20 + 0x128,local_120,puVar14 + 3);
        puVar14[2] = *puVar13;
        *(undefined4 *)(puVar14 + 4) = 3;
        puVar14[0xb] = &PTR_FUN_143f3ece8;
        *(undefined4 *)(puVar14 + 0xc) = 0;
        *(undefined4 *)((longlong)puVar14 + 100) = 0;
        *(undefined2 *)(puVar14 + 0xd) = 0x100;
        *puVar14 = &PTR_FUN_144db3f60;
        puVar14[0xb] = &PTR_LAB_144db3f68;
        *(undefined1 *)(puVar14 + 0xe) = 1;
        *(char *)((longlong)puVar14 + 0x71) = cVar6;
        FUN_141a853b0(puVar14,&local_268,lVar12 + 0x80);
        lVar20 = *(longlong *)(lVar12 + 0x90);
        if (*(char *)(puVar14 + 0xe) != '\0') {
          uVar23 = 1;
          if (*(int *)(lVar20 + 0x30) != 4) {
            uVar23 = *(undefined2 *)(lVar20 + 0x4c);
          }
          local_2f0 = 1;
          local_2f8 = CONCAT44(local_2f8._4_4_,*(undefined4 *)(lVar20 + 0x50));
          puVar15 = (undefined4 *)
                    FUN_141a82200(local_118,&local_268,*(undefined1 *)(lVar20 + 0x4e),uVar23);
          uVar11 = puVar15[1];
          uVar3 = puVar15[2];
          uVar4 = puVar15[3];
          *(undefined4 *)((longlong)puVar14 + 0x72) = *puVar15;
          *(undefined4 *)((longlong)puVar14 + 0x76) = uVar11;
          *(undefined4 *)((longlong)puVar14 + 0x7a) = uVar3;
          *(undefined4 *)((longlong)puVar14 + 0x7e) = uVar4;
        }
        puVar13 = puVar14;
        if (*(char *)((longlong)puVar14 + 0x71) != '\0') {
          if (*(int *)(lVar20 + 0x30) == 4) {
            uVar23 = 1;
          }
          else {
            uVar23 = *(undefined2 *)(lVar20 + 0x4c);
          }
          local_2f0 = 2;
          local_2f8 = CONCAT44(local_2f8._4_4_,*(undefined4 *)(lVar20 + 0x50));
          puVar15 = (undefined4 *)
                    FUN_141a82200(local_108,&local_268,*(undefined1 *)(lVar20 + 0x4e),uVar23);
          uVar11 = puVar15[1];
          uVar3 = puVar15[2];
          uVar4 = puVar15[3];
          *(undefined4 *)((longlong)puVar14 + 0x82) = *puVar15;
          *(undefined4 *)((longlong)puVar14 + 0x86) = uVar11;
          *(undefined4 *)((longlong)puVar14 + 0x8a) = uVar3;
          *(undefined4 *)((longlong)puVar14 + 0x8e) = uVar4;
        }
      }
      if (uVar19 < 4) {
        lVar20 = *(longlong *)(lVar27 + 0x68 + lVar12);
        *(undefined8 **)(lVar27 + 0x68 + lVar12) = puVar13;
        if (puVar13 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar13 + 0xc) = *(int *)(puVar13 + 0xc) + 1;
          UNLOCK();
        }
        if (lVar20 != 0) {
          puVar13 = (undefined8 *)(lVar20 + 0x58);
          LOCK();
          piVar21 = (int *)(lVar20 + 0x60);
          iVar9 = *piVar21;
          *piVar21 = *piVar21 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            if ((*(char *)(lVar20 + 0x68) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
              LOCK();
              bVar28 = *(int *)(lVar20 + 100) == 0;
              if (bVar28) {
                *(int *)(lVar20 + 100) = 1;
              }
              UNLOCK();
              if (bVar28) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar13);
              }
            }
            else {
              (**(code **)*puVar13)(puVar13,1);
            }
          }
        }
        uVar26 = *(uint *)(lVar12 + 0x1c8);
        if (*(uint *)(lVar12 + 0x1c8) <= uVar19 + 1) {
          uVar26 = uVar19 + 1;
        }
        *(uint *)(lVar12 + 0x1c8) = uVar26;
      }
      uVar19 = uVar19 + 1;
      lVar27 = lVar27 + 8;
    } while (uVar19 < 4);
  }
  uVar19 = local_29c;
  uVar25 = (ulonglong)local_29c;
  if ((local_2ac & 0x40000) != 0) {
    uStack_248 = local_294;
    uStack_244 = local_29c;
    uStack_24c = local_298;
    local_250 = local_2b0;
    uStack_148 = CONCAT44(local_298,local_2b0);
    uStack_140 = CONCAT44(local_29c,local_294);
    uStack_138 = (&DAT_1464ca1c4)[(ulonglong)local_2b7 * 10] * local_298 + 0xff & 0xffffff00;
    local_150 = 0;
    uStack_134 = 0;
    *(undefined4 *)(lVar12 + 0x228) = 0;
    *(undefined4 *)(lVar12 + 0x22c) = 0;
    *(int *)(lVar12 + 0x230) = local_2b0;
    *(uint *)(lVar12 + 0x234) = local_298;
    *(undefined8 *)(lVar12 + 0x238) = uStack_140;
    *(ulonglong *)(lVar12 + 0x240) = (ulonglong)uStack_138;
  }
  if ((char)local_28c == '\0') goto LAB_141a7ecca;
  local_220 = 0;
  uStack_218 = 0;
  local_230 = 0x1688;
  local_238 = iVar8;
  if (local_2b8 == '\0') {
    iVar9 = FUN_141a71f60(local_2b0);
    if (param_5 == '\0') {
      local_234 = local_280;
      local_224 = local_2b4;
      if (iVar9 == 0x13) {
        iVar8 = iVar8 + -0x15;
LAB_141a7ec51:
        if ((iVar8 == 0) || (uVar11 = 1, iVar8 != 1)) goto LAB_141a7ec5e;
      }
      else {
        if (iVar9 == 0x2c) {
          iVar8 = iVar8 + -0x2e;
          goto LAB_141a7ec51;
        }
LAB_141a7ec5e:
        uVar11 = 0;
      }
      local_220 = CONCAT44(local_220._4_4_,uVar11);
    }
    else {
      local_224 = local_2b4;
      local_234 = 5;
      local_220 = (uStack_1d0 >> 0x20 & 0xffff) << 0x20;
      if (iVar9 == 0x13) {
        iVar8 = iVar8 + -0x15;
LAB_141a7ec1c:
        if ((iVar8 == 0) || (uVar11 = 1, iVar8 != 1)) goto LAB_141a7ec29;
      }
      else {
        if (iVar9 == 0x2c) {
          iVar8 = iVar8 + -0x2e;
          goto LAB_141a7ec1c;
        }
LAB_141a7ec29:
        uVar11 = 0;
      }
      uStack_218 = CONCAT44(uStack_218._4_4_,uVar11);
    }
  }
  else {
    local_224 = local_2b4;
    if (param_5 == '\0') {
      local_234 = 9;
    }
    else {
      local_234 = 10;
      local_220 = (ulonglong)(local_29c / 6) << 0x20;
    }
  }
  local_228 = 0;
  local_2b4 = local_224;
  puVar13 = (undefined8 *)operator_new(0x88);
  if (puVar13 != (undefined8 *)0x0) {
    FUN_141a823c0(puVar13,*(undefined8 *)(local_278 + 0xd50));
    *puVar13 = &PTR_FUN_144db3f30;
    puVar13[3] = &PTR_LAB_144db3f38;
    FUN_141a75120(puVar13,&local_238,lVar12 + 0x80,0xffffffff);
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(lVar12 + 0x110);
LAB_141a7ecca:
  FUN_141a80f90(lVar12);
  if ((longlong *)*local_288 != (longlong *)0x0) {
    local_1b0 = (void *)0x0;
    local_1a4 = 0;
    lVar27 = (**(code **)(*(longlong *)*local_288 + 8))();
    uVar26 = local_2b4;
    iVar9 = local_2b4 * uVar19;
    _Dst = (void *)0x0;
    local_290 = iVar9;
    local_1a8 = iVar9;
    if (0 < iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_1b0);
      _Dst = local_1b0;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar9 * 0x18);
    lVar12 = local_1f0;
    iVar8 = 0;
    if (uVar19 != 0) {
      iVar9 = 0;
      do {
        iVar18 = 0;
        uVar19 = 0;
        if (uVar26 != 0) {
          uVar16 = (ulonglong)local_2b7;
          do {
            uVar26 = (local_298 >> ((byte)uVar19 & 0x1f)) / (uint)(&DAT_1464ca1b8)[uVar16 * 10];
            if (uVar26 < 2) {
              uVar26 = 1;
            }
            uVar10 = (local_294 >> ((byte)uVar19 & 0x1f)) / (uint)(&DAT_1464ca1bc)[uVar16 * 10];
            lVar20 = (longlong)(int)(iVar9 + uVar19);
            if (uVar10 < 2) {
              uVar10 = 1;
            }
            *(ulonglong *)((longlong)_Dst + lVar20 * 0x18) =
                 (ulonglong)(uint)(iVar18 + iVar8) + lVar27;
            *(ulonglong *)((longlong)_Dst + lVar20 * 0x18 + 8) =
                 (ulonglong)((&DAT_1464ca1c4)[uVar16 * 10] * uVar26);
            lVar17 = (longlong)(int)uVar19;
            uVar19 = uVar19 + 1;
            *(ulonglong *)((longlong)_Dst + lVar20 * 0x18 + 0x10) =
                 (ulonglong)(uVar10 * uVar26) * *(longlong *)((longlong)_Dst + lVar17 * 0x18 + 8);
            iVar18 = iVar18 + uVar10 * *(int *)((longlong)_Dst + lVar17 * 0x18 + 8);
            uVar26 = local_2b4;
          } while (uVar19 < local_2b4);
        }
        iVar8 = iVar8 + iVar18;
        iVar9 = iVar9 + uVar26;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
      local_270 = 0;
      iVar9 = local_290;
    }
    uVar11 = GetRequiredIntermediateSize
                       (*(undefined8 *)(*(longlong *)(local_1f0 + 0x90) + 0x18),0,iVar9);
    lVar27 = *(longlong *)(local_278 + 0xd50);
    FUN_141a67840(local_d8,*(undefined8 *)(lVar27 + 0x850));
    FUN_141a44bf0(lVar27 + 0x850,uVar11,0x200,local_d8);
    lVar27 = *(longlong *)(lVar12 + 0x90);
    local_2f8 = local_2f8 & 0xffffffff00000000;
    lVar20 = **(longlong **)(*(longlong *)(lVar12 + 0x78) + 0x5d8);
    piVar21 = (int *)(*(longlong *)(*(longlong *)(lVar20 + 0x468) + 0x18) + 0x2c54);
    *piVar21 = *piVar21 + 1;
    local_2f0 = iVar9;
    local_2e8 = _Dst;
    UpdateSubresources(*(undefined8 *)(*(longlong *)(lVar20 + 0x468) + 0x28),
                       *(undefined8 *)(lVar27 + 0x18),*(undefined8 *)(local_c8 + 0x18),local_90);
    local_2f8 = CONCAT44(local_2f8._4_4_,0xffffffff);
    FUN_141a4f5b0(lVar20 + 0x460,lVar27,0x400,local_2a8);
    thunk_FUN_141a7bb70(local_d8);
    if (_Dst != (void *)0x0) {
      FMemory::Free(_Dst);
    }
    if ((longlong *)*local_288 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*local_288 + 0x18))();
    }
  }
  return lVar12;
}



// FUNCTION 141a7ef50 FUN_141a7ef50 body=3874 status=ok
// SIG undefined FUN_141a7ef50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141a7f274) */
/* WARNING: Removing unreachable block (ram,0x000141a7f295) */

longlong FUN_141a7ef50(longlong param_1,uint param_2,uint param_3,uint param_4,char param_5,
                      char param_6,byte param_7,uint param_8,uint param_9,uint param_10,
                      longlong *param_11)

{
  undefined1 auVar1 [16];
  uint3 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  int *piVar21;
  void *_Dst;
  uint uVar22;
  undefined2 uVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  bool bVar28;
  undefined1 auStack_318 [32];
  ulonglong local_2f8;
  uint local_2f0;
  void *local_2e8;
  uint local_2e0;
  char local_2d8;
  uint local_2d0;
  longlong *local_2c8;
  undefined8 local_2c0;
  char local_2b8;
  byte local_2b7;
  char local_2b6;
  char local_2b5;
  uint local_2b4;
  int local_2b0;
  uint local_2ac;
  undefined4 local_2a8;
  uint local_2a0;
  uint local_29c;
  uint local_298;
  uint local_294;
  int local_290;
  uint local_28c;
  longlong *local_288;
  undefined4 local_280;
  longlong local_278;
  undefined8 local_270;
  int local_268;
  undefined4 local_264;
  uint local_260;
  undefined4 local_25c;
  undefined4 uStack_258;
  uint uStack_254;
  int local_250;
  uint uStack_24c;
  uint uStack_248;
  uint uStack_244;
  undefined4 uStack_240;
  int local_238;
  undefined4 local_234;
  undefined8 local_230;
  undefined4 local_228;
  uint local_224;
  longlong local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  int local_208;
  undefined4 local_204;
  uint local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  ulonglong local_1d8;
  undefined8 uStack_1d0;
  int local_1c8;
  uint uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  uint local_1b8;
  void *local_1b0;
  int local_1a8;
  undefined4 local_1a4;
  int local_1a0 [3];
  uint local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  ulonglong local_178;
  uint uStack_170;
  undefined2 uStack_16c;
  undefined2 uStack_16a;
  int local_168;
  uint uStack_164;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  uint uStack_138;
  undefined4 uStack_134;
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  int local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined4 local_e8;
  undefined1 local_d8 [16];
  longlong local_c8;
  undefined8 local_90;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  local_2b8 = param_6;
  local_2b7 = param_7;
  local_2b4 = param_8;
  local_288 = param_11;
  if (DAT_1464c9c14 == 0) {
    param_10 = param_10 & 0xffffffef;
  }
  if ((param_10 & 0x1000000) == 0) {
    iVar9 = (&DAT_1464ca1cc)[(ulonglong)param_7 * 10];
  }
  else {
    iVar9 = 0x57;
  }
  local_2b0 = iVar9;
  local_2ac = param_10;
  local_29c = param_4;
  local_298 = param_2;
  local_294 = param_3;
  iVar8 = FUN_141a2ea30(iVar9,CONCAT31((uint3)(param_10 >> 0xc),(char)(param_10 >> 4)) & 0xffffff01)
  ;
  if (iVar9 == 0x13) {
    iVar18 = 0x14;
  }
  else if (iVar9 == 0x27) {
    iVar18 = 0x28;
  }
  else if (iVar9 == 0x2c) {
    iVar18 = 0x2d;
  }
  else {
    iVar18 = 0x37;
    if (iVar9 != 0x35) {
      iVar18 = iVar9;
    }
  }
  if ((8 < param_9) || ((param_10 & 0x1000000) != 0)) {
    param_9 = 1;
  }
  uStack_16a = (undefined2)param_8;
  local_280 = 6;
  if (param_9 < 2) {
    local_280 = 4;
  }
  local_188 = 3;
  local_210 = 5;
  if (param_9 < 2) {
    local_210 = 3;
  }
  uVar2 = (uint3)(local_2ac >> 0x1a);
  local_1d8 = (ulonglong)local_298;
  local_28c = CONCAT31(uVar2,~(byte)(local_2ac >> 0x12)) & 0xffffff01;
  bVar28 = false;
  bVar5 = false;
  uStack_170 = local_294;
  uStack_180 = 0;
  uStack_16c = (undefined2)local_29c;
  uStack_160 = 0;
  local_158 = 0;
  local_2b5 = '\0';
  local_1e8 = CONCAT44(uStack_184,3);
  uStack_1d0 = CONCAT26(uStack_16a,CONCAT24(uStack_16c,local_294));
  uStack_1e0 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  if ((local_2ac & 1) == 0) {
    if ((local_2ac & 4) == 0) {
      if ((local_2ac & 2) == 0) {
        local_1b8 = 0;
        uVar19 = local_1b8;
        local_1b8 = 0;
      }
      else {
        if (((local_2b7 - 0xb & 0xf6) == 0) && (local_2b7 != 0x13)) goto LAB_141a7f12f;
        local_1b8 = 1;
        bVar5 = true;
        uVar19 = 1;
      }
    }
    else {
LAB_141a7f12f:
      bVar28 = true;
      local_1b8 = 2;
      local_2b5 = '\x01';
      uVar19 = 2;
    }
  }
  else {
    local_1b8 = 1;
    uVar19 = 1;
    bVar5 = true;
  }
  if ((local_2ac >> 0x10 & 1) != 0) {
    uVar19 = uVar19 | 4;
    local_1b8 = uVar19;
  }
  if ((bVar28) && ((local_2ac & 8) == 0)) {
    uVar19 = uVar19 | 8;
    local_28c = (uint)uVar2 << 8;
    local_1b8 = uVar19;
  }
  local_2ac = local_2ac & 0xffbfffff;
  lVar27 = **(longlong **)(param_1 + 0x50);
  if ((bVar28) && ((int)local_288[2] == 2)) {
    uStack_24c = *(uint *)((longlong)local_288 + 0x14);
    uStack_248 = CONCAT31(uStack_248._1_3_,(char)local_288[3]);
    local_e8 = uStack_240;
    local_250 = iVar18;
LAB_141a7f207:
    local_f8 = local_250;
    uStack_f4 = uStack_24c;
    uStack_f0 = uStack_248;
    uStack_ec = uStack_244;
    piVar21 = &local_f8;
    uStack_240 = local_e8;
  }
  else {
    piVar21 = (int *)0x0;
    if ((bVar5) && (piVar21 = (int *)0x0, (int)local_288[2] == 1)) {
      auVar1 = *(undefined1 (*) [16])((longlong)local_288 + 0x14);
      local_e8 = auVar1._12_4_;
      uStack_24c = auVar1._0_4_;
      uStack_248 = auVar1._4_4_;
      uStack_244 = auVar1._8_4_;
      local_250 = iVar8;
      goto LAB_141a7f207;
    }
  }
  if ((-(((uVar19 & 1) != 0 || (uVar19 & 4) != 0) || (uVar19 & 2) != 0) & 0x10U |
      ~(byte)(uVar19 >> 3) & 1) == 1) {
    local_2a8 = 0xc0;
  }
  else {
    local_2a8 = 0;
  }
  local_278 = lVar27;
  local_1c8 = iVar9;
  uStack_1c4 = param_9;
  local_178 = local_1d8;
  local_168 = iVar9;
  uStack_164 = param_9;
  lVar12 = operator_new(0x280);
  if (lVar12 == 0) {
    lVar12 = 0;
  }
  else {
    local_2c8 = local_288 + 2;
    local_2c0 = 0;
    local_2d0 = local_2ac;
    local_2d8 = local_2b8;
    local_2e0 = (uint)local_2b7;
    local_2e8 = (void *)CONCAT44(local_2e8._4_4_,param_9);
    local_2f0 = param_8;
    local_2f8 = CONCAT44(local_2f8._4_4_,local_29c);
    lVar12 = FUN_141a820b0(lVar12,*(undefined8 *)(lVar27 + 0xd50),local_298,local_294);
  }
  uVar19 = local_2ac;
  local_2f8 = lVar12 + 0x88;
  local_2e0 = local_2a8;
  if (*local_288 != 0) {
    local_2e0 = 0x400;
  }
  local_2e8 = (void *)CONCAT44(local_2e8._4_4_,local_2ac);
  local_2f0 = CONCAT31(local_2f0._1_3_,local_2b7);
  local_1f0 = lVar12;
  FUN_141a918e0(*(undefined8 *)(lVar27 + 0xd50),lVar27,&local_1e8,piVar21);
  uVar26 = 0;
  if (bVar5) {
    if (((uVar19 >> 0x17 & 1) == 0) || ((param_5 == '\0' && (local_2b8 == '\0')))) {
      cVar6 = '\0';
      uVar19 = local_2b4;
    }
    else {
      cVar6 = '\x01';
      uVar19 = uStack_1d0._4_2_ * local_2b4;
    }
    local_2b6 = cVar6;
    FUN_141a91c60(lVar12 + 0x70,uVar19);
    local_2a0 = 0;
    uVar19 = local_2b4;
    if (local_2b4 != 0) {
      do {
        uVar10 = local_2a0;
        if (cVar6 == '\0') {
          puVar13 = (undefined8 *)0x0;
          local_1f8 = 0;
          local_208 = iVar8;
          local_200 = local_2a0;
          if ((param_5 == '\0') && (local_2b8 == '\0')) {
            local_204 = local_280;
            iVar9 = FUN_141a71f60(local_2b0);
            if (iVar9 == 0x13) {
              iVar9 = iVar8 + -0x15;
LAB_141a7f629:
              if ((iVar9 != 0) && (local_1fc = 1, iVar9 == 1)) goto LAB_141a7f685;
            }
            else if (iVar9 == 0x2c) {
              iVar9 = iVar8 + -0x2e;
              goto LAB_141a7f629;
            }
            local_1fc = 0;
          }
          else {
            local_1f8 = (ulonglong)uStack_1d0._4_2_;
            local_204 = 5;
            local_1fc = 0;
            iVar9 = FUN_141a71f60(local_2b0);
            if (iVar9 == 0x13) {
              iVar9 = iVar8 + -0x15;
LAB_141a7f673:
              if ((iVar9 == 0) || (uVar11 = 1, iVar9 != 1)) goto LAB_141a7f67f;
            }
            else {
              if (iVar9 == 0x2c) {
                iVar9 = iVar8 + -0x2e;
                goto LAB_141a7f673;
              }
LAB_141a7f67f:
              uVar11 = 0;
            }
            local_1f8 = CONCAT44(uVar11,(undefined4)local_1f8);
          }
LAB_141a7f685:
          puVar14 = (undefined8 *)operator_new(0x70);
          if (puVar14 != (undefined8 *)0x0) {
            lVar27 = *(longlong *)(local_278 + 0xd50);
            *puVar14 = &PTR_FUN_144daa6c0;
            puVar14[1] = lVar27;
            puVar13 = (undefined8 *)
                      FDescriptorHeapManager::AllocateHeapSlot(lVar27 + 0xb0,local_128,puVar14 + 3);
            puVar14[2] = *puVar13;
            *(undefined4 *)(puVar14 + 4) = 0;
            puVar14[0xb] = &PTR_FUN_143f3ece8;
            *(undefined4 *)(puVar14 + 0xc) = 0;
            *(undefined4 *)((longlong)puVar14 + 100) = 0;
            *(undefined2 *)(puVar14 + 0xd) = 0x100;
            *puVar14 = &PTR_FUN_144daa6c8;
            puVar14[0xb] = &PTR_LAB_144daa6d0;
            FUN_141a85460(puVar14,&local_208,lVar12 + 0x88);
            puVar13 = puVar14;
          }
          if (uVar26 < *(uint *)(lVar12 + 0x130)) {
            lVar27 = *(longlong *)(lVar12 + 0x128);
            if (*(longlong *)(lVar12 + 0x128) == 0) {
              lVar27 = lVar12 + 0x120;
            }
            lVar20 = *(longlong *)(lVar27 + (longlong)(int)uVar26 * 8);
            *(undefined8 **)(lVar27 + (longlong)(int)uVar26 * 8) = puVar13;
            if (puVar13 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar13 + 0xc) = *(int *)(puVar13 + 0xc) + 1;
              UNLOCK();
            }
            if (lVar20 != 0) {
              puVar13 = (undefined8 *)(lVar20 + 0x58);
              LOCK();
              piVar21 = (int *)(lVar20 + 0x60);
              iVar9 = *piVar21;
              *piVar21 = *piVar21 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                if ((*(char *)(lVar20 + 0x68) == '\0') &&
                   ((DAT_146ab62f5 != '\0' ||
                    (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
                  LOCK();
                  bVar28 = *(int *)(lVar20 + 100) == 0;
                  if (bVar28) {
                    *(int *)(lVar20 + 100) = 1;
                  }
                  UNLOCK();
                  if (bVar28) {
                    TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar13);
                    uVar26 = uVar26 + 1;
                    goto LAB_141a7f58d;
                  }
                }
                else {
                  (**(code **)*puVar13)(puVar13,1);
                }
              }
            }
          }
          uVar26 = uVar26 + 1;
        }
        else {
          uVar22 = 0;
          *(undefined1 *)(lVar12 + 0x138) = 1;
          *(uint *)(lVar12 + 0x13c) = (uint)uStack_1d0._4_2_;
          uVar24 = (uint)uStack_1d0._4_2_;
          cVar6 = local_2b6;
          if (uStack_1d0._4_2_ != 0) {
            iVar9 = FUN_141a71f60(local_2b0);
            do {
              local_1a0[1] = 5;
              local_18c = 1;
              local_190 = 1;
              if (iVar9 == 0x13) {
                iVar18 = iVar8 + -0x15;
LAB_141a7f435:
                if ((iVar18 == 0) || (iVar18 != 1)) goto LAB_141a7f440;
              }
              else {
                if (iVar9 == 0x2c) {
                  iVar18 = iVar8 + -0x2e;
                  goto LAB_141a7f435;
                }
LAB_141a7f440:
                local_18c = 0;
              }
              local_1a0[0] = iVar8;
              local_1a0[2] = uVar10;
              local_194 = uVar22;
              puVar13 = (undefined8 *)operator_new(0x70);
              if (puVar13 == (undefined8 *)0x0) {
                puVar13 = (undefined8 *)0x0;
              }
              else {
                lVar27 = *(longlong *)(local_278 + 0xd50);
                *puVar13 = &PTR_FUN_144daa6c0;
                puVar13[1] = lVar27;
                puVar14 = (undefined8 *)
                          FDescriptorHeapManager::AllocateHeapSlot
                                    (lVar27 + 0xb0,local_130,puVar13 + 3);
                puVar13[2] = *puVar14;
                *(undefined4 *)(puVar13 + 4) = 0;
                puVar13[0xb] = &PTR_FUN_143f3ece8;
                *(undefined4 *)(puVar13 + 0xc) = 0;
                *(undefined4 *)((longlong)puVar13 + 100) = 0;
                *(undefined2 *)(puVar13 + 0xd) = 0x100;
                *puVar13 = &PTR_FUN_144daa6c8;
                puVar13[0xb] = &PTR_LAB_144daa6d0;
                FUN_141a85460(puVar13,local_1a0,lVar12 + 0x88);
              }
              if (uVar26 < *(uint *)(lVar12 + 0x130)) {
                lVar27 = *(longlong *)(lVar12 + 0x128);
                if (*(longlong *)(lVar12 + 0x128) == 0) {
                  lVar27 = lVar12 + 0x120;
                }
                lVar20 = *(longlong *)(lVar27 + (longlong)(int)uVar26 * 8);
                *(undefined8 **)(lVar27 + (longlong)(int)uVar26 * 8) = puVar13;
                if (puVar13 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar13 + 0xc) = *(int *)(puVar13 + 0xc) + 1;
                  UNLOCK();
                }
                if (lVar20 != 0) {
                  puVar13 = (undefined8 *)(lVar20 + 0x58);
                  LOCK();
                  piVar21 = (int *)(lVar20 + 0x60);
                  iVar18 = *piVar21;
                  *piVar21 = *piVar21 + -1;
                  UNLOCK();
                  if (iVar18 == 1) {
                    if ((*(char *)(lVar20 + 0x68) == '\0') &&
                       ((DAT_146ab62f5 != '\0' ||
                        (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))) {
                      LOCK();
                      bVar28 = *(int *)(lVar20 + 100) == 0;
                      if (bVar28) {
                        *(int *)(lVar20 + 100) = 1;
                      }
                      UNLOCK();
                      if (bVar28) {
                        TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar13);
                      }
                    }
                    else {
                      (**(code **)*puVar13)(puVar13,1);
                    }
                  }
                }
              }
              uVar26 = uVar26 + 1;
              uVar22 = uVar22 + 1;
              uVar19 = local_2b4;
              uVar10 = local_2a0;
              cVar6 = local_2b6;
            } while (uVar22 < uVar24);
          }
        }
LAB_141a7f58d:
        local_2a0 = local_2a0 + 1;
      } while (local_2a0 < uVar19);
    }
  }
  if (local_2b5 != '\0') {
    uVar19 = 0;
    uStack_254 = 0;
    if (local_2b0 == 0x13) {
      local_268 = 0x14;
    }
    else if (local_2b0 == 0x27) {
      local_268 = 0x28;
    }
    else if (local_2b0 == 0x2c) {
      local_268 = 0x2d;
    }
    else {
      local_268 = 0x37;
      if (local_2b0 != 0x35) {
        local_268 = local_2b0;
      }
    }
    if ((param_5 == '\0') && (local_2b8 == '\0')) {
      local_264 = local_210;
    }
    else {
      uStack_254 = (uint)uStack_1d0._4_2_;
      local_264 = 4;
    }
    uStack_258 = 0;
    local_25c = 0;
    if ((local_268 == 0x14) || (local_268 == 0x2d)) {
      cVar6 = '\x01';
    }
    else {
      cVar6 = '\0';
    }
    lVar27 = 0xd0;
    do {
      local_260 = (uint)((uVar19 & 0x21) != 0);
      if (cVar6 != '\0') {
        local_260 = -(uint)((uVar19 & 0x12) != 0) & 2 | local_260;
      }
      puVar14 = (undefined8 *)operator_new();
      puVar13 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        lVar20 = *(longlong *)(local_278 + 0xd50);
        *puVar14 = &PTR_FUN_144db3f58;
        puVar14[1] = lVar20;
        puVar13 = (undefined8 *)
                  FDescriptorHeapManager::AllocateHeapSlot(lVar20 + 0x128,local_120,puVar14 + 3);
        puVar14[2] = *puVar13;
        *(undefined4 *)(puVar14 + 4) = 3;
        puVar14[0xb] = &PTR_FUN_143f3ece8;
        *(undefined4 *)(puVar14 + 0xc) = 0;
        *(undefined4 *)((longlong)puVar14 + 100) = 0;
        *(undefined2 *)(puVar14 + 0xd) = 0x100;
        *puVar14 = &PTR_FUN_144db3f60;
        puVar14[0xb] = &PTR_LAB_144db3f68;
        *(undefined1 *)(puVar14 + 0xe) = 1;
        *(char *)((longlong)puVar14 + 0x71) = cVar6;
        FUN_141a853b0(puVar14,&local_268,lVar12 + 0x88);
        lVar20 = *(longlong *)(lVar12 + 0x98);
        if (*(char *)(puVar14 + 0xe) != '\0') {
          uVar23 = 1;
          if (*(int *)(lVar20 + 0x30) != 4) {
            uVar23 = *(undefined2 *)(lVar20 + 0x4c);
          }
          local_2f0 = 1;
          local_2f8 = CONCAT44(local_2f8._4_4_,*(undefined4 *)(lVar20 + 0x50));
          puVar15 = (undefined4 *)
                    FUN_141a82200(local_118,&local_268,*(undefined1 *)(lVar20 + 0x4e),uVar23);
          uVar11 = puVar15[1];
          uVar3 = puVar15[2];
          uVar4 = puVar15[3];
          *(undefined4 *)((longlong)puVar14 + 0x72) = *puVar15;
          *(undefined4 *)((longlong)puVar14 + 0x76) = uVar11;
          *(undefined4 *)((longlong)puVar14 + 0x7a) = uVar3;
          *(undefined4 *)((longlong)puVar14 + 0x7e) = uVar4;
        }
        puVar13 = puVar14;
        if (*(char *)((longlong)puVar14 + 0x71) != '\0') {
          if (*(int *)(lVar20 + 0x30) == 4) {
            uVar23 = 1;
          }
          else {
            uVar23 = *(undefined2 *)(lVar20 + 0x4c);
          }
          local_2f0 = 2;
          local_2f8 = CONCAT44(local_2f8._4_4_,*(undefined4 *)(lVar20 + 0x50));
          puVar15 = (undefined4 *)
                    FUN_141a82200(local_108,&local_268,*(undefined1 *)(lVar20 + 0x4e),uVar23);
          uVar11 = puVar15[1];
          uVar3 = puVar15[2];
          uVar4 = puVar15[3];
          *(undefined4 *)((longlong)puVar14 + 0x82) = *puVar15;
          *(undefined4 *)((longlong)puVar14 + 0x86) = uVar11;
          *(undefined4 *)((longlong)puVar14 + 0x8a) = uVar3;
          *(undefined4 *)((longlong)puVar14 + 0x8e) = uVar4;
        }
      }
      if (uVar19 < 4) {
        lVar20 = *(longlong *)(lVar27 + 0x70 + lVar12);
        *(undefined8 **)(lVar27 + 0x70 + lVar12) = puVar13;
        if (puVar13 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar13 + 0xc) = *(int *)(puVar13 + 0xc) + 1;
          UNLOCK();
        }
        if (lVar20 != 0) {
          puVar13 = (undefined8 *)(lVar20 + 0x58);
          LOCK();
          piVar21 = (int *)(lVar20 + 0x60);
          iVar9 = *piVar21;
          *piVar21 = *piVar21 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            if ((*(char *)(lVar20 + 0x68) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
              LOCK();
              bVar28 = *(int *)(lVar20 + 100) == 0;
              if (bVar28) {
                *(int *)(lVar20 + 100) = 1;
              }
              UNLOCK();
              if (bVar28) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar13);
              }
            }
            else {
              (**(code **)*puVar13)(puVar13,1);
            }
          }
        }
        uVar26 = *(uint *)(lVar12 + 0x1d0);
        if (*(uint *)(lVar12 + 0x1d0) <= uVar19 + 1) {
          uVar26 = uVar19 + 1;
        }
        *(uint *)(lVar12 + 0x1d0) = uVar26;
      }
      uVar19 = uVar19 + 1;
      lVar27 = lVar27 + 8;
    } while (uVar19 < 4);
  }
  uVar19 = local_29c;
  uVar25 = (ulonglong)local_29c;
  if ((local_2ac & 0x40000) != 0) {
    uStack_248 = local_294;
    uStack_244 = local_29c;
    uStack_24c = local_298;
    local_250 = local_2b0;
    uStack_148 = CONCAT44(local_298,local_2b0);
    uStack_140 = CONCAT44(local_29c,local_294);
    uStack_138 = (&DAT_1464ca1c4)[(ulonglong)local_2b7 * 10] * local_298 + 0xff & 0xffffff00;
    local_150 = 0;
    uStack_134 = 0;
    *(undefined4 *)(lVar12 + 0x230) = 0;
    *(undefined4 *)(lVar12 + 0x234) = 0;
    *(int *)(lVar12 + 0x238) = local_2b0;
    *(uint *)(lVar12 + 0x23c) = local_298;
    *(undefined8 *)(lVar12 + 0x240) = uStack_140;
    *(ulonglong *)(lVar12 + 0x248) = (ulonglong)uStack_138;
  }
  if ((char)local_28c == '\0') goto LAB_141a7fbea;
  local_220 = 0;
  uStack_218 = 0;
  local_230 = 0x1688;
  local_238 = iVar8;
  if (local_2b8 == '\0') {
    iVar9 = FUN_141a71f60(local_2b0);
    if (param_5 == '\0') {
      local_234 = local_280;
      local_224 = local_2b4;
      if (iVar9 == 0x13) {
        iVar8 = iVar8 + -0x15;
LAB_141a7fb71:
        if ((iVar8 == 0) || (uVar11 = 1, iVar8 != 1)) goto LAB_141a7fb7e;
      }
      else {
        if (iVar9 == 0x2c) {
          iVar8 = iVar8 + -0x2e;
          goto LAB_141a7fb71;
        }
LAB_141a7fb7e:
        uVar11 = 0;
      }
      local_220 = CONCAT44(local_220._4_4_,uVar11);
    }
    else {
      local_224 = local_2b4;
      local_234 = 5;
      local_220 = (uStack_1d0 >> 0x20 & 0xffff) << 0x20;
      if (iVar9 == 0x13) {
        iVar8 = iVar8 + -0x15;
LAB_141a7fb3c:
        if ((iVar8 == 0) || (uVar11 = 1, iVar8 != 1)) goto LAB_141a7fb49;
      }
      else {
        if (iVar9 == 0x2c) {
          iVar8 = iVar8 + -0x2e;
          goto LAB_141a7fb3c;
        }
LAB_141a7fb49:
        uVar11 = 0;
      }
      uStack_218 = CONCAT44(uStack_218._4_4_,uVar11);
    }
  }
  else {
    local_224 = local_2b4;
    if (param_5 == '\0') {
      local_234 = 9;
    }
    else {
      local_234 = 10;
      local_220 = (ulonglong)(local_29c / 6) << 0x20;
    }
  }
  local_228 = 0;
  local_2b4 = local_224;
  puVar13 = (undefined8 *)operator_new(0x88);
  if (puVar13 != (undefined8 *)0x0) {
    FUN_141a823c0(puVar13,*(undefined8 *)(local_278 + 0xd50));
    *puVar13 = &PTR_FUN_144db3f30;
    puVar13[3] = &PTR_LAB_144db3f38;
    FUN_141a75120(puVar13,&local_238,lVar12 + 0x88,0xffffffff);
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(lVar12 + 0x118);
LAB_141a7fbea:
  FUN_141a81050(lVar12);
  if ((longlong *)*local_288 != (longlong *)0x0) {
    local_1b0 = (void *)0x0;
    local_1a4 = 0;
    lVar27 = (**(code **)(*(longlong *)*local_288 + 8))();
    uVar26 = local_2b4;
    iVar9 = local_2b4 * uVar19;
    _Dst = (void *)0x0;
    local_290 = iVar9;
    local_1a8 = iVar9;
    if (0 < iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_1b0);
      _Dst = local_1b0;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar9 * 0x18);
    lVar12 = local_1f0;
    iVar8 = 0;
    if (uVar19 != 0) {
      iVar9 = 0;
      do {
        iVar18 = 0;
        uVar19 = 0;
        if (uVar26 != 0) {
          uVar16 = (ulonglong)local_2b7;
          do {
            uVar26 = (local_298 >> ((byte)uVar19 & 0x1f)) / (uint)(&DAT_1464ca1b8)[uVar16 * 10];
            if (uVar26 < 2) {
              uVar26 = 1;
            }
            uVar10 = (local_294 >> ((byte)uVar19 & 0x1f)) / (uint)(&DAT_1464ca1bc)[uVar16 * 10];
            lVar20 = (longlong)(int)(iVar9 + uVar19);
            if (uVar10 < 2) {
              uVar10 = 1;
            }
            *(ulonglong *)((longlong)_Dst + lVar20 * 0x18) =
                 (ulonglong)(uint)(iVar18 + iVar8) + lVar27;
            *(ulonglong *)((longlong)_Dst + lVar20 * 0x18 + 8) =
                 (ulonglong)((&DAT_1464ca1c4)[uVar16 * 10] * uVar26);
            lVar17 = (longlong)(int)uVar19;
            uVar19 = uVar19 + 1;
            *(ulonglong *)((longlong)_Dst + lVar20 * 0x18 + 0x10) =
                 (ulonglong)(uVar10 * uVar26) * *(longlong *)((longlong)_Dst + lVar17 * 0x18 + 8);
            iVar18 = iVar18 + uVar10 * *(int *)((longlong)_Dst + lVar17 * 0x18 + 8);
            uVar26 = local_2b4;
          } while (uVar19 < local_2b4);
        }
        iVar8 = iVar8 + iVar18;
        iVar9 = iVar9 + uVar26;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
      local_270 = 0;
      iVar9 = local_290;
    }
    uVar11 = GetRequiredIntermediateSize
                       (*(undefined8 *)(*(longlong *)(local_1f0 + 0x98) + 0x18),0,iVar9);
    lVar27 = *(longlong *)(local_278 + 0xd50);
    FUN_141a67840(local_d8,*(undefined8 *)(lVar27 + 0x850));
    FUN_141a44bf0(lVar27 + 0x850,uVar11,0x200,local_d8);
    lVar27 = *(longlong *)(lVar12 + 0x98);
    local_2f8 = local_2f8 & 0xffffffff00000000;
    lVar20 = **(longlong **)(*(longlong *)(lVar12 + 0x80) + 0x5d8);
    piVar21 = (int *)(*(longlong *)(*(longlong *)(lVar20 + 0x468) + 0x18) + 0x2c54);
    *piVar21 = *piVar21 + 1;
    local_2f0 = iVar9;
    local_2e8 = _Dst;
    UpdateSubresources(*(undefined8 *)(*(longlong *)(lVar20 + 0x468) + 0x28),
                       *(undefined8 *)(lVar27 + 0x18),*(undefined8 *)(local_c8 + 0x18),local_90);
    local_2f8 = CONCAT44(local_2f8._4_4_,0xffffffff);
    FUN_141a4f5b0(lVar20 + 0x460,lVar27,0x400,local_2a8);
    thunk_FUN_141a7bb70(local_d8);
    if (_Dst != (void *)0x0) {
      FMemory::Free(_Dst);
    }
    if ((longlong *)*local_288 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*local_288 + 0x18))();
    }
  }
  return lVar12;
}



// FUNCTION 141a7fe80 FUN_141a7fe80 body=4363 status=ok
// SIG undefined FUN_141a7fe80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141a801a4) */
/* WARNING: Removing unreachable block (ram,0x000141a801c5) */

undefined8 *
FUN_141a7fe80(longlong param_1,uint param_2,uint param_3,uint param_4,char param_5,byte param_6,
             byte param_7,uint param_8,uint param_9,uint param_10,longlong *param_11)

{
  undefined1 auVar1 [16];
  uint3 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  void *_Dst;
  uint uVar21;
  int *piVar22;
  undefined2 uVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  bool bVar29;
  undefined1 auStack_318 [32];
  undefined8 *local_2f8;
  int local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  byte local_2d8;
  char local_2d7;
  char local_2d6;
  uint local_2d4;
  int local_2d0;
  undefined4 local_2c8;
  uint local_2c0;
  uint local_2bc;
  int local_2b8;
  longlong local_2b0;
  uint local_2a8;
  uint local_2a4;
  longlong *local_2a0;
  uint local_298;
  uint local_294;
  undefined4 local_290;
  undefined8 local_288;
  int local_280;
  undefined4 local_27c;
  uint local_278;
  undefined4 local_274;
  undefined4 uStack_270;
  uint uStack_26c;
  int local_268;
  undefined4 local_264;
  undefined8 local_260;
  undefined4 local_258;
  uint local_254;
  longlong local_250;
  undefined8 uStack_248;
  undefined4 local_240;
  int local_238;
  undefined4 local_234;
  uint local_230;
  undefined4 local_22c;
  undefined8 local_228;
  int local_220;
  uint uStack_21c;
  uint uStack_218;
  uint uStack_214;
  undefined4 uStack_210;
  undefined8 *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  ulonglong local_1f0;
  undefined8 uStack_1e8;
  int local_1e0;
  uint uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  uint local_1d0;
  void *local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  int local_1b8 [3];
  uint local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  ulonglong local_190;
  uint uStack_188;
  undefined2 uStack_184;
  undefined2 uStack_182;
  int local_180;
  uint uStack_17c;
  undefined8 uStack_178;
  undefined4 local_170;
  int local_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  uint uStack_138;
  undefined4 uStack_134;
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  int local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined4 local_e8;
  void *local_e0 [3];
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined8 local_80;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  local_2d4 = param_8;
  local_2a0 = param_11;
  local_2d8 = param_7;
  if (DAT_1464c9c14 == 0) {
    param_10 = param_10 & 0xffffffef;
  }
  uVar2 = (uint3)(param_10 >> 8);
  if ((param_10 & 0x1000000) == 0) {
    iVar9 = (&DAT_1464ca1cc)[(ulonglong)param_7 * 10];
  }
  else {
    iVar9 = 0x57;
  }
  local_2d0 = iVar9;
  local_2bc = param_2;
  local_2a4 = param_3;
  local_294 = param_4;
  iVar8 = FUN_141a2ea30(iVar9,CONCAT31(uVar2 >> 4,(char)(param_10 >> 4)) & 0xffffff01);
  uVar27 = local_2d4;
  if (iVar9 == 0x13) {
    iVar20 = 0x14;
  }
  else if (iVar9 == 0x27) {
    iVar20 = 0x28;
  }
  else if (iVar9 == 0x2c) {
    iVar20 = 0x2d;
  }
  else {
    iVar20 = 0x37;
    if (iVar9 != 0x35) {
      iVar20 = iVar9;
    }
  }
  if ((8 < param_9) || (uStack_1dc = param_9, (param_10 & 0x1000000) != 0)) {
    uStack_1dc = 1;
  }
  local_290 = 6;
  if (uStack_1dc < 2) {
    local_290 = 4;
  }
  uStack_182 = (undefined2)local_2d4;
  local_1a0 = 3;
  local_240 = 5;
  if (uStack_1dc < 2) {
    local_240 = 3;
  }
  local_1f0 = (ulonglong)local_2bc;
  bVar29 = false;
  bVar5 = false;
  uVar2 = uVar2 >> 0x12;
  uStack_198 = 0;
  local_200 = CONCAT44(uStack_19c,3);
  local_2a8 = CONCAT31(uVar2,~(byte)(param_10 >> 0x12)) & 0xffffff01;
  uStack_188 = local_2a4;
  uStack_178 = 0;
  local_170 = 0;
  local_2d6 = '\0';
  uStack_1e8 = CONCAT26(uStack_182,CONCAT24((short)param_4,local_2a4));
  uStack_1f8 = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  if ((param_10 & 1) == 0) {
    if ((param_10 & 4) == 0) {
      if ((param_10 & 2) == 0) {
        local_1d0 = 0;
        uVar19 = local_1d0;
        local_1d0 = 0;
        goto LAB_141a80084;
      }
      if (((local_2d8 - 0xb & 0xf6) != 0) || (local_2d8 == 0x13)) goto LAB_141a80043;
    }
    local_2d6 = '\x01';
    local_1d0 = 2;
    bVar29 = true;
    uVar19 = 2;
    bVar5 = false;
  }
  else {
LAB_141a80043:
    local_1d0 = 1;
    uVar19 = 1;
    bVar5 = true;
  }
LAB_141a80084:
  if ((param_10 >> 0x10 & 1) != 0) {
    uVar19 = uVar19 | 4;
    local_1d0 = uVar19;
  }
  if ((bVar29) && ((param_10 & 8) == 0)) {
    uVar19 = uVar19 | 8;
    local_2a8 = (uint)uVar2 << 8;
    local_1d0 = uVar19;
  }
  uVar26 = param_10 & 0xffbfffff;
  local_2b0 = **(longlong **)(param_1 + 0x50);
  if ((bVar29) && ((int)local_2a0[2] == 2)) {
    uStack_164 = *(uint *)((longlong)local_2a0 + 0x14);
    uStack_160 = CONCAT31(uStack_160._1_3_,(char)local_2a0[3]);
    local_e8 = local_158;
    local_f8 = iVar20;
    uStack_f4 = uStack_164;
    uStack_f0 = uStack_160;
    local_168 = iVar20;
LAB_141a8013a:
    piVar22 = &local_f8;
    uStack_ec = uStack_15c;
  }
  else {
    piVar22 = (int *)0x0;
    if ((bVar5) && (piVar22 = (int *)0x0, (int)local_2a0[2] == 1)) {
      auVar1 = *(undefined1 (*) [16])((longlong)local_2a0 + 0x14);
      uStack_210 = auVar1._12_4_;
      uStack_21c = auVar1._0_4_;
      uStack_218 = auVar1._4_4_;
      uStack_214 = auVar1._8_4_;
      local_f8 = iVar8;
      uStack_f4 = uStack_21c;
      uStack_f0 = uStack_218;
      uStack_15c = uStack_214;
      local_220 = iVar8;
      local_e8 = uStack_210;
      goto LAB_141a8013a;
    }
  }
  if ((-(((uVar19 & 1) != 0 || (uVar19 & 4) != 0) || (uVar19 & 2) != 0) & 0x10U |
      ~(byte)(uVar19 >> 3) & 1) == 1) {
    local_2c8 = 0xc0;
  }
  else {
    local_2c8 = 0;
  }
  local_298 = uVar26;
  local_1e0 = iVar9;
  local_190 = local_1f0;
  uStack_184 = (short)param_4;
  local_180 = iVar9;
  uStack_17c = uStack_1dc;
  puVar11 = (undefined8 *)operator_new(0x278);
  if (puVar11 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    local_208 = (undefined8 *)0x0;
  }
  else {
    *puVar11 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar11 + 1) = 0;
    *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
    *(undefined2 *)(puVar11 + 2) = 0x100;
    *puVar11 = &PTR_FUN_144d838f0;
    puVar11[3] = 0;
    uVar10 = *(undefined4 *)((longlong)local_2a0 + 0x14);
    lVar16 = local_2a0[3];
    uVar3 = *(undefined4 *)((longlong)local_2a0 + 0x1c);
    *(int *)(puVar11 + 4) = (int)local_2a0[2];
    *(undefined4 *)((longlong)puVar11 + 0x24) = uVar10;
    *(int *)(puVar11 + 5) = (int)lVar16;
    *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar3;
    *(int *)(puVar11 + 6) = (int)local_2a0[4];
    *(undefined4 *)(puVar11 + 7) = 1;
    *(uint *)((longlong)puVar11 + 0x3c) = (uint)local_2d8;
    puVar11[9] = puVar11 + 10;
    *(uint *)((longlong)puVar11 + 0x34) = uVar27;
    *(uint *)(puVar11 + 8) = uVar26;
    puVar11[10] = 0xc7efffffe0000000;
    puVar11[0xb] = 0;
    *(uint *)(puVar11 + 0xc) = local_2bc;
    *puVar11 = &PTR_FUN_144d83a38;
    local_208 = puVar11;
    FUN_141a82450(puVar11 + 0xd);
    *puVar11 = &PTR_FUN_144db4268;
    *(uint *)(puVar11 + 0x44) = uVar26;
    puVar11[0xd] = &PTR_LAB_144db42b8;
    puVar11[0xe] = &PTR_LAB_144db42d8;
    puVar11[0x49] = &PTR_FUN_144da6378;
    puVar11[0x4a] = 0;
    puVar11[0x4b] = 0;
    *(uint *)(puVar11 + 0x4c) = *(uint *)(puVar11 + 0x4c) & 0xfffffffe;
    *(uint *)(puVar11 + 0x4c) = *(uint *)(puVar11 + 0x4c) | (uint)param_6;
    puVar11[0x45] = 0;
    puVar11[0x46] = 0;
    puVar11[0x47] = 0;
    puVar11[0x48] = 0;
    *(undefined1 *)(puVar11 + 0x4e) = 0;
    puVar11[0x4d] = 0;
  }
  lVar16 = local_2b0;
  local_2f8 = puVar11 + 0x10;
  local_2e0 = local_2c8;
  if (*local_2a0 != 0) {
    local_2e0 = 0x400;
  }
  local_2e8 = (void *)(CONCAT44(local_2e8._4_4_,param_10) & 0xffffffffffbfffff);
  local_2f0 = CONCAT31(local_2f0._1_3_,local_2d8);
  FUN_141a918e0(*(undefined8 *)(local_2b0 + 0xd50),local_2b0,&local_200,piVar22);
  uVar27 = 0;
  if (bVar5) {
    if (((local_298 & 0x800000) == 0) || ((param_5 == '\0' && (param_6 == 0)))) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    local_2d7 = cVar6;
    FUN_141a91c60(puVar11 + 0xd);
    local_2c0 = 0;
    lVar16 = local_2b0;
    uVar19 = local_2d4;
    if (local_2d4 != 0) {
      do {
        uVar26 = local_2c0;
        uVar21 = 0;
        if (cVar6 == '\0') {
          puVar12 = (undefined8 *)0x0;
          local_228 = 0;
          local_238 = iVar8;
          local_230 = local_2c0;
          if ((param_5 == '\0') && (param_6 == 0)) {
            local_234 = local_290;
            iVar9 = FUN_141a71f60(local_2d0);
            if (iVar9 == 0x13) {
              iVar9 = iVar8 + -0x15;
LAB_141a80640:
              if ((iVar9 != 0) && (local_22c = 1, iVar9 == 1)) goto LAB_141a8069c;
            }
            else if (iVar9 == 0x2c) {
              iVar9 = iVar8 + -0x2e;
              goto LAB_141a80640;
            }
            local_22c = 0;
          }
          else {
            local_228 = (ulonglong)uStack_1e8._4_2_;
            local_234 = 5;
            local_22c = 0;
            iVar9 = FUN_141a71f60(local_2d0);
            if (iVar9 == 0x13) {
              iVar9 = iVar8 + -0x15;
LAB_141a8068a:
              if ((iVar9 == 0) || (uVar10 = 1, iVar9 != 1)) goto LAB_141a80696;
            }
            else {
              if (iVar9 == 0x2c) {
                iVar9 = iVar8 + -0x2e;
                goto LAB_141a8068a;
              }
LAB_141a80696:
              uVar10 = 0;
            }
            local_228 = CONCAT44(uVar10,(undefined4)local_228);
          }
LAB_141a8069c:
          puVar13 = (undefined8 *)operator_new(0x70);
          if (puVar13 != (undefined8 *)0x0) {
            lVar16 = *(longlong *)(local_2b0 + 0xd50);
            *puVar13 = &PTR_FUN_144daa6c0;
            puVar13[1] = lVar16;
            puVar12 = (undefined8 *)
                      FDescriptorHeapManager::AllocateHeapSlot(lVar16 + 0xb0,local_128,puVar13 + 3);
            puVar13[2] = *puVar12;
            *(undefined4 *)(puVar13 + 4) = 0;
            puVar13[0xb] = &PTR_FUN_143f3ece8;
            *(undefined4 *)(puVar13 + 0xc) = 0;
            *(undefined4 *)((longlong)puVar13 + 100) = 0;
            *(undefined2 *)(puVar13 + 0xd) = 0x100;
            *puVar13 = &PTR_FUN_144daa6c8;
            puVar13[0xb] = &PTR_LAB_144daa6d0;
            FUN_141a85460(puVar13,&local_238,puVar11 + 0x10);
            puVar12 = puVar13;
          }
          if (uVar27 < *(uint *)(puVar11 + 0x25)) {
            puVar13 = (undefined8 *)puVar11[0x24];
            if ((undefined8 *)puVar11[0x24] == (undefined8 *)0x0) {
              puVar13 = puVar11 + 0x23;
            }
            lVar16 = puVar13[(int)uVar27];
            puVar13[(int)uVar27] = puVar12;
            if (puVar12 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar12 + 0xc) = *(int *)(puVar12 + 0xc) + 1;
              UNLOCK();
            }
            if (lVar16 != 0) {
              LOCK();
              piVar22 = (int *)(lVar16 + 0x60);
              iVar9 = *piVar22;
              *piVar22 = *piVar22 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                if ((*(char *)(lVar16 + 0x68) == '\0') &&
                   ((DAT_146ab62f5 != '\0' ||
                    (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
                  LOCK();
                  bVar29 = *(int *)(lVar16 + 100) == 0;
                  if (bVar29) {
                    *(int *)(lVar16 + 100) = 1;
                  }
                  UNLOCK();
                  if (bVar29) {
                    TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
                    uVar27 = uVar27 + 1;
                    goto LAB_141a8059f;
                  }
                }
                else {
                  (*(code *)**(undefined8 **)(lVar16 + 0x58))((undefined8 *)(lVar16 + 0x58));
                }
              }
            }
          }
          uVar27 = uVar27 + 1;
        }
        else {
          *(undefined1 *)(puVar11 + 0x26) = 1;
          *(uint *)((longlong)puVar11 + 0x134) = (uint)uStack_1e8._4_2_;
          uVar24 = (uint)uStack_1e8._4_2_;
          cVar6 = local_2d7;
          if (uStack_1e8._4_2_ != 0) {
            iVar9 = FUN_141a71f60(local_2d0);
            do {
              local_1a4 = 1;
              local_1b8[1] = 5;
              local_1a8 = 1;
              if (iVar9 == 0x13) {
                if ((iVar8 == 0x15) || (iVar8 != 0x16)) goto LAB_141a8044a;
              }
              else if ((iVar9 != 0x2c) || ((iVar8 == 0x2e || (iVar8 != 0x2f)))) {
LAB_141a8044a:
                local_1a4 = 0;
              }
              local_1b8[0] = iVar8;
              local_1b8[2] = uVar26;
              local_1ac = uVar21;
              puVar12 = (undefined8 *)operator_new(0x70);
              if (puVar12 == (undefined8 *)0x0) {
                puVar12 = (undefined8 *)0x0;
              }
              else {
                lVar16 = *(longlong *)(local_2b0 + 0xd50);
                *puVar12 = &PTR_FUN_144daa6c0;
                puVar12[1] = lVar16;
                puVar13 = (undefined8 *)
                          FDescriptorHeapManager::AllocateHeapSlot
                                    (lVar16 + 0xb0,local_130,puVar12 + 3);
                puVar12[2] = *puVar13;
                *(undefined4 *)(puVar12 + 4) = 0;
                puVar12[0xb] = &PTR_FUN_143f3ece8;
                *(undefined4 *)(puVar12 + 0xc) = 0;
                *(undefined4 *)((longlong)puVar12 + 100) = 0;
                *(undefined2 *)(puVar12 + 0xd) = 0x100;
                *puVar12 = &PTR_FUN_144daa6c8;
                puVar12[0xb] = &PTR_LAB_144daa6d0;
                FUN_141a85460(puVar12,local_1b8,puVar11 + 0x10);
              }
              if (uVar27 < *(uint *)(puVar11 + 0x25)) {
                puVar13 = (undefined8 *)puVar11[0x24];
                if ((undefined8 *)puVar11[0x24] == (undefined8 *)0x0) {
                  puVar13 = puVar11 + 0x23;
                }
                lVar16 = puVar13[(int)uVar27];
                puVar13[(int)uVar27] = puVar12;
                if (puVar12 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar12 + 0xc) = *(int *)(puVar12 + 0xc) + 1;
                  UNLOCK();
                }
                if (lVar16 != 0) {
                  puVar12 = (undefined8 *)(lVar16 + 0x58);
                  LOCK();
                  piVar22 = (int *)(lVar16 + 0x60);
                  iVar20 = *piVar22;
                  *piVar22 = *piVar22 + -1;
                  UNLOCK();
                  if (iVar20 == 1) {
                    if ((*(char *)(lVar16 + 0x68) == '\0') &&
                       ((DAT_146ab62f5 != '\0' ||
                        (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))) {
                      LOCK();
                      bVar29 = *(int *)(lVar16 + 100) == 0;
                      if (bVar29) {
                        *(int *)(lVar16 + 100) = 1;
                      }
                      UNLOCK();
                      if (bVar29) {
                        TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar12);
                      }
                    }
                    else {
                      (**(code **)*puVar12)(puVar12,1);
                    }
                  }
                }
              }
              uVar27 = uVar27 + 1;
              uVar21 = uVar21 + 1;
              cVar6 = local_2d7;
              uVar19 = local_2d4;
              uVar26 = local_2c0;
            } while (uVar21 < uVar24);
          }
        }
LAB_141a8059f:
        local_2c0 = local_2c0 + 1;
        lVar16 = local_2b0;
      } while (local_2c0 < uVar19);
    }
  }
  uVar27 = 0;
  if (local_2d6 != '\0') {
    uStack_26c = 0;
    if (local_2d0 == 0x13) {
      local_280 = 0x14;
    }
    else if (local_2d0 == 0x27) {
      local_280 = 0x28;
    }
    else if (local_2d0 == 0x2c) {
      local_280 = 0x2d;
    }
    else {
      local_280 = 0x37;
      if (local_2d0 != 0x35) {
        local_280 = local_2d0;
      }
    }
    if ((param_5 == '\0') && (param_6 == 0)) {
      local_27c = local_240;
    }
    else {
      uStack_26c = (uint)uStack_1e8._4_2_;
      local_27c = 4;
    }
    uStack_270 = 0;
    local_274 = 0;
    if ((local_280 == 0x14) || (local_280 == 0x2d)) {
      cVar6 = '\x01';
    }
    else {
      cVar6 = '\0';
    }
    lVar28 = 0xd0;
    do {
      local_278 = (uint)((uVar27 & 0x21) != 0);
      if (cVar6 != '\0') {
        local_278 = -(uint)((uVar27 & 0x12) != 0) & 2 | local_278;
      }
      puVar12 = (undefined8 *)operator_new();
      if (puVar12 == (undefined8 *)0x0) {
        puVar12 = (undefined8 *)0x0;
      }
      else {
        lVar16 = *(longlong *)(lVar16 + 0xd50);
        *puVar12 = &PTR_FUN_144db3f58;
        puVar12[1] = lVar16;
        puVar13 = (undefined8 *)
                  FDescriptorHeapManager::AllocateHeapSlot(lVar16 + 0x128,local_120,puVar12 + 3);
        puVar12[2] = *puVar13;
        *(undefined4 *)(puVar12 + 4) = 3;
        puVar12[0xb] = &PTR_FUN_143f3ece8;
        *(undefined4 *)(puVar12 + 0xc) = 0;
        *(undefined4 *)((longlong)puVar12 + 100) = 0;
        *(undefined2 *)(puVar12 + 0xd) = 0x100;
        *puVar12 = &PTR_FUN_144db3f60;
        puVar12[0xb] = &PTR_LAB_144db3f68;
        *(undefined1 *)(puVar12 + 0xe) = 1;
        *(char *)((longlong)puVar12 + 0x71) = cVar6;
        FUN_141a853b0(puVar12,&local_280,puVar11 + 0x10);
        lVar16 = puVar11[0x12];
        if (*(char *)(puVar12 + 0xe) != '\0') {
          uVar23 = 1;
          if (*(int *)(lVar16 + 0x30) != 4) {
            uVar23 = *(undefined2 *)(lVar16 + 0x4c);
          }
          local_2f0 = 1;
          local_2f8 = (undefined8 *)CONCAT44(local_2f8._4_4_,*(undefined4 *)(lVar16 + 0x50));
          puVar14 = (undefined4 *)
                    FUN_141a82200(local_118,&local_280,*(undefined1 *)(lVar16 + 0x4e),uVar23);
          uVar10 = puVar14[1];
          uVar3 = puVar14[2];
          uVar4 = puVar14[3];
          *(undefined4 *)((longlong)puVar12 + 0x72) = *puVar14;
          *(undefined4 *)((longlong)puVar12 + 0x76) = uVar10;
          *(undefined4 *)((longlong)puVar12 + 0x7a) = uVar3;
          *(undefined4 *)((longlong)puVar12 + 0x7e) = uVar4;
        }
        if (*(char *)((longlong)puVar12 + 0x71) != '\0') {
          if (*(int *)(lVar16 + 0x30) == 4) {
            uVar23 = 1;
          }
          else {
            uVar23 = *(undefined2 *)(lVar16 + 0x4c);
          }
          local_2f0 = 2;
          local_2f8 = (undefined8 *)CONCAT44(local_2f8._4_4_,*(undefined4 *)(lVar16 + 0x50));
          puVar14 = (undefined4 *)
                    FUN_141a82200(local_108,&local_280,*(undefined1 *)(lVar16 + 0x4e),uVar23);
          uVar10 = puVar14[1];
          uVar3 = puVar14[2];
          uVar4 = puVar14[3];
          *(undefined4 *)((longlong)puVar12 + 0x82) = *puVar14;
          *(undefined4 *)((longlong)puVar12 + 0x86) = uVar10;
          *(undefined4 *)((longlong)puVar12 + 0x8a) = uVar3;
          *(undefined4 *)((longlong)puVar12 + 0x8e) = uVar4;
        }
      }
      if (uVar27 < 4) {
        lVar16 = *(longlong *)(lVar28 + 0x68 + (longlong)puVar11);
        *(undefined8 **)(lVar28 + 0x68 + (longlong)puVar11) = puVar12;
        if (puVar12 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar12 + 0xc) = *(int *)(puVar12 + 0xc) + 1;
          UNLOCK();
        }
        if (lVar16 != 0) {
          puVar12 = (undefined8 *)(lVar16 + 0x58);
          LOCK();
          piVar22 = (int *)(lVar16 + 0x60);
          iVar9 = *piVar22;
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            if ((*(char *)(lVar16 + 0x68) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
              LOCK();
              bVar29 = *(int *)(lVar16 + 100) == 0;
              if (bVar29) {
                *(int *)(lVar16 + 100) = 1;
              }
              UNLOCK();
              if (bVar29) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar12);
              }
            }
            else {
              (**(code **)*puVar12)(puVar12,1);
            }
          }
        }
        uVar19 = *(uint *)(puVar11 + 0x39);
        if (*(uint *)(puVar11 + 0x39) <= uVar27 + 1) {
          uVar19 = uVar27 + 1;
        }
        *(uint *)(puVar11 + 0x39) = uVar19;
      }
      uVar27 = uVar27 + 1;
      lVar28 = lVar28 + 8;
      lVar16 = local_2b0;
    } while (uVar27 < 4);
  }
  uVar27 = local_294;
  uVar25 = (ulonglong)local_294;
  if ((local_298 & 0x40000) != 0) {
    uStack_218 = local_2a4;
    uStack_214 = local_294;
    uStack_21c = local_2bc;
    local_220 = local_2d0;
    uStack_148 = CONCAT44(local_2bc,local_2d0);
    uStack_140 = CONCAT44(local_294,local_2a4);
    uStack_138 = (&DAT_1464ca1c4)[(ulonglong)local_2d8 * 10] * local_2bc + 0xff & 0xffffff00;
    local_150 = 0;
    uStack_134 = 0;
    *(undefined4 *)(puVar11 + 0x45) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x22c) = 0;
    *(int *)(puVar11 + 0x46) = local_2d0;
    *(uint *)((longlong)puVar11 + 0x234) = local_2bc;
    puVar11[0x47] = uStack_140;
    puVar11[0x48] = (ulonglong)uStack_138;
  }
  if ((char)local_2a8 == '\0') goto LAB_141a80c22;
  local_250 = 0;
  uStack_248 = 0;
  local_260 = 0x1688;
  local_268 = iVar8;
  if (param_6 == 0) {
    iVar9 = FUN_141a71f60(local_2d0);
    if (param_5 == '\0') {
      local_264 = local_290;
      local_254 = local_2d4;
      if (iVar9 == 0x13) {
        iVar8 = iVar8 + -0x15;
LAB_141a80ba8:
        if ((iVar8 == 0) || (uVar10 = 1, iVar8 != 1)) goto LAB_141a80bb5;
      }
      else {
        if (iVar9 == 0x2c) {
          iVar8 = iVar8 + -0x2e;
          goto LAB_141a80ba8;
        }
LAB_141a80bb5:
        uVar10 = 0;
      }
      local_250 = CONCAT44(local_250._4_4_,uVar10);
    }
    else {
      local_254 = local_2d4;
      local_264 = 5;
      local_250 = (uStack_1e8 >> 0x20 & 0xffff) << 0x20;
      if (iVar9 == 0x13) {
        iVar8 = iVar8 + -0x15;
LAB_141a80b73:
        if ((iVar8 == 0) || (uVar10 = 1, iVar8 != 1)) goto LAB_141a80b80;
      }
      else {
        if (iVar9 == 0x2c) {
          iVar8 = iVar8 + -0x2e;
          goto LAB_141a80b73;
        }
LAB_141a80b80:
        uVar10 = 0;
      }
      uStack_248 = CONCAT44(uStack_248._4_4_,uVar10);
    }
  }
  else {
    local_254 = local_2d4;
    if (param_5 == '\0') {
      local_264 = 9;
    }
    else {
      local_264 = 10;
      local_250 = (ulonglong)(local_294 / 6) << 0x20;
    }
  }
  local_258 = 0;
  local_2d4 = local_254;
  puVar12 = (undefined8 *)operator_new(0x88);
  if (puVar12 != (undefined8 *)0x0) {
    FUN_141a823c0(puVar12,*(undefined8 *)(local_2b0 + 0xd50));
    *puVar12 = &PTR_FUN_144db3f30;
    puVar12[3] = &PTR_LAB_144db3f38;
    FUN_141a75120(puVar12,&local_268,puVar11 + 0x10,0xffffffff);
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(puVar11 + 0x22);
LAB_141a80c22:
  lVar16 = puVar11[0x12];
  if ((lVar16 != 0) && (*(longlong *)(lVar16 + 0x20) == 0)) {
    if ((*(uint *)(puVar11 + 0x44) & 0x400000) == 0) {
      plVar15 = (longlong *)mu::Mesh::GetFaceBuffers(puVar11[0xf]);
      local_2f8 = (undefined8 *)(lVar16 + 0x30);
      (**(code **)(*plVar15 + 200))(plVar15,local_e0,0,1);
      if ((*(uint *)(puVar11 + 0x44) & 0x100000) != 0) {
        local_e0[0] = (void *)0x0;
      }
      *(int *)(puVar11 + 0x20) = (int)local_e0[0];
      if (local_e0[0] != (void *)0x0) {
        if ((longlong)local_e0[0] < 1) {
          iVar9 = -(int)((longlong)
                         ((ulonglong)
                          ((uint)((longlong)(0x3ffU - (longlong)local_e0[0]) >> 0x3f) & 0x3ff) +
                         (0x3ffU - (longlong)local_e0[0] & 0xfffffffffffffc00)) >> 10);
        }
        else {
          iVar9 = (int)((longlong)
                        ((ulonglong)
                         ((uint)((longlong)((longlong)local_e0[0] + 0x3ffU) >> 0x3f) & 0x3ff) +
                        ((longlong)local_e0[0] + 0x3ffU & 0xfffffffffffffc00)) >> 10);
        }
        if ((*(uint *)(lVar16 + 0x60) & 7) == 0) {
          LOCK();
          DAT_146ab6300 = DAT_146ab6300 + iVar9;
          UNLOCK();
        }
        else {
          LOCK();
          DAT_146ab6304 = DAT_146ab6304 + iVar9;
          UNLOCK();
        }
      }
    }
    else {
      *(undefined4 *)(puVar11 + 0x20) = 0;
    }
  }
  if ((longlong *)*local_2a0 != (longlong *)0x0) {
    local_1c8 = (void *)0x0;
    local_1bc = 0;
    lVar16 = (**(code **)(*(longlong *)*local_2a0 + 8))();
    uVar19 = local_2d4;
    iVar9 = local_2d4 * uVar27;
    _Dst = (void *)0x0;
    local_2b8 = iVar9;
    local_1c0 = iVar9;
    if (0 < iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_1c8);
      _Dst = local_1c8;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar9 * 0x18);
    puVar11 = local_208;
    iVar8 = 0;
    if (uVar27 != 0) {
      iVar9 = 0;
      do {
        iVar20 = 0;
        uVar27 = 0;
        if (uVar19 != 0) {
          uVar17 = (ulonglong)local_2d8;
          do {
            uVar19 = (local_2bc >> ((byte)uVar27 & 0x1f)) / (uint)(&DAT_1464ca1b8)[uVar17 * 10];
            if (uVar19 < 2) {
              uVar19 = 1;
            }
            uVar26 = (local_2a4 >> ((byte)uVar27 & 0x1f)) / (uint)(&DAT_1464ca1bc)[uVar17 * 10];
            lVar28 = (longlong)(int)(iVar9 + uVar27);
            if (uVar26 < 2) {
              uVar26 = 1;
            }
            *(ulonglong *)((longlong)_Dst + lVar28 * 0x18) =
                 (ulonglong)(uint)(iVar20 + iVar8) + lVar16;
            *(ulonglong *)((longlong)_Dst + lVar28 * 0x18 + 8) =
                 (ulonglong)((&DAT_1464ca1c4)[uVar17 * 10] * uVar19);
            lVar18 = (longlong)(int)uVar27;
            uVar27 = uVar27 + 1;
            *(ulonglong *)((longlong)_Dst + lVar28 * 0x18 + 0x10) =
                 (ulonglong)(uVar26 * uVar19) * *(longlong *)((longlong)_Dst + lVar18 * 0x18 + 8);
            iVar20 = iVar20 + uVar26 * *(int *)((longlong)_Dst + lVar18 * 0x18 + 8);
            uVar19 = local_2d4;
          } while (uVar27 < local_2d4);
        }
        iVar8 = iVar8 + iVar20;
        iVar9 = iVar9 + uVar19;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
      local_288 = 0;
      iVar9 = local_2b8;
    }
    uVar10 = GetRequiredIntermediateSize(*(undefined8 *)(local_208[0x12] + 0x18),0,iVar9);
    lVar16 = *(longlong *)(local_2b0 + 0xd50);
    FUN_141a67840(local_c8,*(undefined8 *)(lVar16 + 0x850));
    FUN_141a44bf0(lVar16 + 0x850,uVar10,0x200,local_c8);
    lVar16 = puVar11[0x12];
    local_2f8 = (undefined8 *)((ulonglong)local_2f8 & 0xffffffff00000000);
    lVar28 = **(longlong **)(puVar11[0xf] + 0x5d8);
    piVar22 = (int *)(*(longlong *)(*(longlong *)(lVar28 + 0x468) + 0x18) + 0x2c54);
    *piVar22 = *piVar22 + 1;
    local_2f0 = iVar9;
    local_2e8 = _Dst;
    UpdateSubresources(*(undefined8 *)(*(longlong *)(lVar28 + 0x468) + 0x28),
                       *(undefined8 *)(lVar16 + 0x18),*(undefined8 *)(local_b8 + 0x18),local_80);
    local_2f8 = (undefined8 *)CONCAT44(local_2f8._4_4_,0xffffffff);
    FUN_141a4f5b0(lVar28 + 0x460,lVar16,0x400,local_2c8);
    thunk_FUN_141a7bb70(local_c8);
    if (_Dst != (void *)0x0) {
      FMemory::Free(_Dst);
    }
    if ((longlong *)*local_2a0 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*local_2a0 + 0x18))();
    }
  }
  return puVar11;
}



// FUNCTION 141a80f90 FUN_141a80f90 body=191 status=ok
// SIG undefined FUN_141a80f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a80f90(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x90);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x20) == 0)) {
    if ((*(uint *)(param_1 + 0x220) & 0x400000) == 0) {
      plVar2 = (longlong *)mu::Mesh::GetFaceBuffers(*(undefined8 *)(param_1 + 0x78));
      local_38 = lVar1 + 0x30;
      (**(code **)(*plVar2 + 200))(plVar2,local_28,0,1);
      if ((*(uint *)(param_1 + 0x220) & 0x100000) != 0) {
        local_28[0] = 0;
      }
      *(int *)(param_1 + 0x100) = (int)local_28[0];
      FD3D12TextureStats::UpdateD3D12TextureStats
                (lVar1 + 0x30,local_28[0],0,*(byte *)(param_1 + 0x260) & 1);
    }
    else {
      *(undefined4 *)(param_1 + 0x100) = 0;
    }
  }
  return;
}



// FUNCTION 141a81050 FUN_141a81050 body=198 status=ok
// SIG undefined FUN_141a81050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a81050(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x98);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x20) == 0)) {
    if ((*(uint *)(param_1 + 0x228) & 0x400000) == 0) {
      plVar2 = (longlong *)mu::Mesh::GetFaceBuffers(*(undefined8 *)(param_1 + 0x80));
      local_38 = lVar1 + 0x30;
      (**(code **)(*plVar2 + 200))(plVar2,local_28,0,1);
      if ((*(uint *)(param_1 + 0x228) & 0x100000) != 0) {
        local_28[0] = 0;
      }
      *(int *)(param_1 + 0x108) = (int)local_28[0];
      FD3D12TextureStats::UpdateD3D12TextureStats
                (lVar1 + 0x30,local_28[0],0,*(byte *)(param_1 + 0x268) & 1);
    }
    else {
      *(undefined4 *)(param_1 + 0x108) = 0;
    }
  }
  return;
}



// FUNCTION 141a81120 FUN_141a81120 body=688 status=ok
// SIG undefined FUN_141a81120(void)

int * FUN_141a81120(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  void *_Dst;
  bool local_res8;
  
  iVar10 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar8 * 0x20 + 4 + *param_1);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar13 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar13 = *puVar13 | 1 << ((byte)iVar8 & 0x1f);
  puVar4 = (undefined8 *)param_3[1];
  puVar13 = (uint *)((longlong)iVar8 * 0x20 + *param_1);
  *puVar13 = *(uint *)*param_3;
  *(undefined8 *)(puVar13 + 2) = *puVar4;
  lVar5 = puVar4[1];
  *(longlong *)(puVar13 + 4) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  puVar13[6] = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar12 != 1) {
    iVar8 = iVar14;
    if (uVar12 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar13) * 4);
      if (iVar9 != -1) {
        do {
          iVar8 = iVar9;
          if (*(uint *)((longlong)iVar9 * 0x20 + *param_1) == *puVar13) break;
          iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *param_1);
          iVar8 = iVar14;
        } while (iVar9 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x20 + *param_1);
      plVar7 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,puVar13,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar8;
      goto LAB_141a813ac;
    }
  }
  if (3 < uVar12) {
    uVar6 = (uVar12 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar14 = 0x20;
    if (uVar6 != 0) {
      iVar14 = 0x1f - iVar10;
    }
    uVar6 = (uVar12 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar6 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar14 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar12 = (int)param_1[9] - 1U & *puVar13;
    puVar13[7] = uVar12;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    puVar13[6] = *(uint *)((longlong)plVar7 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141a813ac:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 141a813d0 FUN_141a813d0 body=664 status=ok
// SIG undefined FUN_141a813d0(void)

uint * FUN_141a813d0(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  void *_Dst;
  char cVar11;
  void *_Src;
  undefined4 uVar12;
  bool bVar13;
  uint local_res8 [2];
  
  iVar9 = 1;
  uVar12 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<1120,8>_>,TSizedDefaultAllocator<32>_>
      ::ResizeGrow(param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)((longlong)(int)uVar10 * 0x460 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x460 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar10;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar10 & 0x1f);
  _Src = (void *)((longlong)(int)uVar10 * 0x460 + *param_1);
  FUN_141a7dd40(param_3,_Src);
  *(undefined4 *)((longlong)_Src + 0x458) = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (uVar10 != 1) {
    FUN_141a2e820(param_1,local_res8,_Src);
    uVar4 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      _Dst = (void *)(lVar8 * 0x460 + *param_1);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>((longlong)_Dst + 0x450);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x458);
      uVar10 = *param_2;
      bVar2 = (byte)uVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x460 + *param_1) = uVar10;
      }
      puVar5 = (undefined4 *)((longlong)(int)uVar10 * 0x460 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      puVar5[1] = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar10;
      plVar6 = (longlong *)param_1[4];
      *param_2 = uVar4;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_141a8163f;
    }
  }
  if (3 < uVar10) {
    uVar4 = (uVar10 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar11 = '\0';
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar9;
    }
    uVar4 = (uVar10 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar11 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar10 = (int)param_1[9] - 1U & *(uint *)((longlong)_Src + 0x408);
    *(uint *)((longlong)_Src + 0x45c) = uVar10;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x458) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    FUN_141a41c30(param_1);
  }
LAB_141a8163f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 141a81670 FUN_141a81670 body=1101 status=ok
// SIG undefined FUN_141a81670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141a81670(undefined8 *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined1 auStack_128 [32];
  undefined2 local_108;
  undefined2 *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined2 *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  void *local_b8;
  undefined8 local_b0;
  longlong local_a8 [4];
  longlong local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  puVar13 = (undefined2 *)0x0;
  local_d8 = 0;
  local_e0 = (longlong *)0x0;
  iVar4 = (**(code **)*param_1)(param_1,&DAT_144db4308,&local_e0);
  if ((-1 < iVar4) && (iVar4 = (**(code **)(*local_e0 + 0x18))(local_e0,&local_e8), -1 < iVar4)) {
    local_d8 = local_e8;
  }
  if (local_e0 == (longlong *)0x0) {
    uVar7 = 0;
  }
  else {
    local_c0 = local_d8;
    if (local_d8 != 0) {
      local_f8 = (undefined2 *)0x0;
      local_f0 = 0;
      local_88 = 0;
      local_80 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0xffffffff;
      local_54 = 0;
      local_48 = (undefined1 *)0x0;
      local_40 = 0;
      puVar17 = puVar13;
      do {
        if (*(int **)(local_c0 + 0x38) == (int *)0x0) break;
        iVar4 = **(int **)(local_c0 + 0x38);
        if ((iVar4 != *(int *)(local_c0 + 0x30)) && (iVar4 != 0)) {
          uVar15 = 0;
          if (-1 < (int)(iVar4 - 100U)) {
            uVar15 = iVar4 - 100U;
          }
          iVar9 = *(int *)(local_c0 + 0x30) + -1;
          if (iVar4 + 0x14 <= iVar9) {
            iVar9 = iVar4 + 0x14;
          }
          TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
          ::Reset(&local_88);
          if ((longlong)(int)uVar15 <= (longlong)iVar9) {
            local_e8 = ((longlong)iVar9 - (longlong)(int)uVar15) + 1;
            puVar16 = puVar17;
            do {
              puVar14 = (undefined8 *)0x0;
              puVar8 = puVar14;
              if ((int)local_80 != local_54) {
                puVar6 = local_50;
                if (local_48 != (undefined1 *)0x0) {
                  puVar6 = local_48;
                }
                iVar4 = *(int *)(puVar6 + (longlong)(int)(local_40 - 1U & uVar15) * 4);
                while (iVar4 != -1) {
                  lVar11 = (longlong)iVar4 * 0x18;
                  if (*(uint *)(lVar11 + local_88) == uVar15) {
                    if (iVar4 != -1) {
                      puVar8 = (undefined8 *)(local_88 + lVar11);
                    }
                    break;
                  }
                  iVar4 = *(int *)(lVar11 + 0x10 + local_88);
                }
              }
              puVar10 = puVar8 + 1;
              if (puVar8 == (undefined8 *)0x0) {
                puVar10 = puVar14;
              }
              if (puVar10 == (undefined8 *)0x0) {
                local_f0 = local_f0 & 0xffffffff00000000;
                puVar17 = puVar16;
                if (((int)puVar13 < 0) && ((int)puVar13 != 0)) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8,0);
                  puVar13 = (undefined2 *)(local_f0 >> 0x20);
                  puVar17 = local_f8;
                }
                if (puVar17 != (undefined2 *)0x0) {
                  *puVar17 = 0;
                }
              }
              else {
                local_d0 = (undefined2 *)0x0;
                local_c8 = 3;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d0,0);
                puVar17 = local_d0;
                local_108 = 0x3f;
                FGenericPlatformString::Convert<char,wchar_t>(local_d0,3,&DAT_144dab434);
                if (puVar16 != (undefined2 *)0x0) {
                  FMemory::Free(puVar16);
                }
                uVar2 = local_c8;
                uVar3 = local_c8._4_4_;
                puVar13 = (undefined2 *)(ulonglong)local_c8._4_4_;
                iVar4 = (int)local_c8;
                lVar12 = (longlong)(int)local_c8;
                pvVar1 = (void *)*puVar10;
                lVar11 = -1;
                local_f8 = puVar17;
                local_d0 = (undefined2 *)0x0;
                local_c8 = 0;
                local_f0 = CONCAT44(uVar3,(int)local_f0);
                do {
                  lVar11 = lVar11 + 1;
                } while (*(short *)((longlong)pvVar1 + lVar11 * 2) != 0);
                iVar5 = (int)lVar11;
                iVar9 = iVar4;
                if (iVar5 != 0) {
                  iVar9 = iVar4 + (uint)(iVar4 == 0) + iVar5;
                  local_f0 = CONCAT44(uVar3,iVar9);
                  if ((int)uVar3 < iVar9) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,uVar2 & 0xffffffff);
                    puVar13 = (undefined2 *)(local_f0 >> 0x20);
                    iVar9 = (int)local_f0;
                  }
                  puVar17 = local_f8;
                  puVar16 = local_f8 + (lVar12 - (ulonglong)(iVar4 != 0));
                  _guard_xfg_dispatch_icall_nop(puVar16,pvVar1,(longlong)iVar5 * 2);
                  puVar16[iVar5] = 0;
                }
                local_b8 = (void *)0x0;
                local_b0 = 2;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
                pvVar1 = local_b8;
                local_108 = 0x3f;
                FGenericPlatformString::Convert<char,wchar_t>(local_b8,2,&DAT_144dab504);
                if (((int)local_b0 != 0) && (iVar4 = (int)local_b0 + -1, iVar4 != 0)) {
                  iVar5 = (uint)(iVar9 == 0) + iVar9 + iVar4;
                  local_f0 = CONCAT44(local_f0._4_4_,iVar5);
                  if ((int)puVar13 < iVar5) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,iVar9);
                    puVar13 = (undefined2 *)(local_f0 >> 0x20);
                    puVar17 = local_f8;
                  }
                  _guard_xfg_dispatch_icall_nop
                            (puVar17 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)),pvVar1,
                             (longlong)iVar4 * 2);
                  (puVar17 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)))[iVar4] = 0;
                }
                if (pvVar1 != (void *)0x0) {
                  FMemory::Free(pvVar1);
                }
              }
              uVar15 = uVar15 + 1;
              local_e8 = local_e8 + -1;
              puVar16 = puVar17;
            } while (local_e8 != 0);
          }
        }
        local_c0 = *(longlong *)(local_c0 + 0x48);
      } while (local_c0 != 0);
      local_40 = 0;
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free(local_48);
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_88);
      if (puVar17 != (undefined2 *)0x0) {
        FMemory::Free(puVar17);
      }
    }
    (**(code **)(*local_e0 + 0x20))(local_e0,local_a8);
    if (local_e0 != (longlong *)0x0) {
      (**(code **)(*local_e0 + 0x10))();
    }
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 141a81ac0 FUN_141a81ac0 body=1179 status=ok
// SIG undefined FUN_141a81ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141a81ac0(undefined8 *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined2 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined1 auStack_138 [32];
  undefined2 local_118;
  undefined2 *local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined2 *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined4 *local_a8;
  longlong local_a0 [3];
  longlong local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  puVar13 = (undefined2 *)0x0;
  local_e8 = 0;
  local_f0 = (longlong *)0x0;
  iVar4 = (**(code **)*param_1)(param_1,&DAT_144db4318,&local_f0);
  if ((-1 < iVar4) && (iVar4 = (**(code **)(*local_f0 + 0x28))(local_f0,&local_f8), -1 < iVar4)) {
    local_e8 = local_f8;
  }
  if (local_f0 == (longlong *)0x0) {
    uVar7 = 0;
  }
  else {
    local_f8 = local_e8;
    if (local_e8 != 0) {
      local_108 = (undefined2 *)0x0;
      local_100 = 0;
      local_88 = 0;
      local_80 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0xffffffff;
      local_54 = 0;
      local_48 = (undefined1 *)0x0;
      local_40 = 0;
      puVar17 = puVar13;
      lVar10 = local_e8;
      do {
        local_f8 = lVar10;
        if (*(int **)(lVar10 + 0x38) == (int *)0x0) break;
        iVar4 = **(int **)(lVar10 + 0x38);
        if ((iVar4 != *(int *)(lVar10 + 0x30)) && (iVar4 != 0)) {
          iVar11 = *(int *)(lVar10 + 0x30) + -1;
          uVar15 = 0;
          if (-1 < (int)(iVar4 - 100U)) {
            uVar15 = iVar4 - 100U;
          }
          if (iVar4 + 0x14 <= iVar11) {
            iVar11 = iVar4 + 0x14;
          }
          TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
          ::Reset(&local_88);
          puVar8 = *(undefined4 **)(lVar10 + 0x58);
          puVar14 = puVar8 + (longlong)*(int *)(lVar10 + 0x50) * 4;
          if (puVar8 != puVar14) {
            local_b0 = &local_e0;
            do {
              local_e0 = CONCAT44(local_e0._4_4_,*puVar8);
              local_a8 = puVar8 + 2;
              FUN_141711280(&local_88,local_b8,&local_b0,0);
              puVar8 = puVar8 + 4;
            } while (puVar8 != puVar14);
          }
          if ((longlong)(int)uVar15 <= (longlong)iVar11) {
            local_e0 = ((longlong)iVar11 - (longlong)(int)uVar15) + 1;
            puVar16 = puVar17;
            do {
              if ((int)local_80 != local_54) {
                puVar6 = local_50;
                if (local_48 != (undefined1 *)0x0) {
                  puVar6 = local_48;
                }
                iVar4 = *(int *)(puVar6 + (longlong)(int)(local_40 - 1U & uVar15) * 4);
                while (iVar4 != -1) {
                  lVar10 = (longlong)iVar4 * 0x18;
                  if (*(uint *)(lVar10 + local_88) == uVar15) {
                    if (iVar4 != -1) {
                      lVar10 = local_88 + lVar10;
                      goto LAB_141a81cb7;
                    }
                    break;
                  }
                  iVar4 = *(int *)(lVar10 + 0x10 + local_88);
                }
              }
              lVar10 = 0;
LAB_141a81cb7:
              puVar9 = (undefined8 *)(lVar10 + 8);
              if (lVar10 == 0) {
                puVar9 = (undefined8 *)0x0;
              }
              if (puVar9 == (undefined8 *)0x0) {
                local_100 = local_100 & 0xffffffff00000000;
                puVar17 = puVar16;
                if (((int)puVar13 < 0) && ((int)puVar13 != 0)) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_108,0);
                  puVar13 = (undefined2 *)(local_100 >> 0x20);
                  puVar17 = local_108;
                }
                if (puVar17 != (undefined2 *)0x0) {
                  *puVar17 = 0;
                }
              }
              else {
                local_d8 = (undefined2 *)0x0;
                local_d0 = 3;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
                puVar17 = local_d8;
                local_118 = 0x3f;
                FGenericPlatformString::Convert<char,wchar_t>(local_d8,3,&DAT_144dab2b0);
                if (puVar16 != (undefined2 *)0x0) {
                  FMemory::Free(puVar16);
                }
                uVar2 = local_d0;
                uVar3 = local_d0._4_4_;
                puVar13 = (undefined2 *)(ulonglong)local_d0._4_4_;
                iVar4 = (int)local_d0;
                lVar12 = (longlong)(int)local_d0;
                pvVar1 = (void *)*puVar9;
                lVar10 = -1;
                local_108 = puVar17;
                local_d8 = (undefined2 *)0x0;
                local_d0 = 0;
                local_100 = CONCAT44(uVar3,(int)local_100);
                do {
                  lVar10 = lVar10 + 1;
                } while (*(short *)((longlong)pvVar1 + lVar10 * 2) != 0);
                iVar5 = (int)lVar10;
                iVar11 = iVar4;
                if (iVar5 != 0) {
                  iVar11 = iVar4 + (uint)(iVar4 == 0) + iVar5;
                  local_100 = CONCAT44(uVar3,iVar11);
                  if ((int)uVar3 < iVar11) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,uVar2 & 0xffffffff);
                    puVar13 = (undefined2 *)(local_100 >> 0x20);
                    iVar11 = (int)local_100;
                  }
                  puVar17 = local_108;
                  puVar16 = local_108 + (lVar12 - (ulonglong)(iVar4 != 0));
                  _guard_xfg_dispatch_icall_nop(puVar16,pvVar1,(longlong)iVar5 * 2);
                  puVar16[iVar5] = 0;
                }
                local_c8 = (void *)0x0;
                local_c0 = 2;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
                pvVar1 = local_c8;
                local_118 = 0x3f;
                FGenericPlatformString::Convert<char,wchar_t>(local_c8,2,&DAT_144dab2b4);
                if (((int)local_c0 != 0) && (iVar4 = (int)local_c0 + -1, iVar4 != 0)) {
                  iVar5 = (uint)(iVar11 == 0) + iVar4 + iVar11;
                  local_100 = CONCAT44(local_100._4_4_,iVar5);
                  if ((int)puVar13 < iVar5) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,iVar11);
                    puVar13 = (undefined2 *)(local_100 >> 0x20);
                    puVar17 = local_108;
                  }
                  _guard_xfg_dispatch_icall_nop
                            (puVar17 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)),pvVar1,
                             (longlong)iVar4 * 2);
                  (puVar17 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)))[iVar4] = 0;
                }
                if (pvVar1 != (void *)0x0) {
                  FMemory::Free(pvVar1);
                }
              }
              uVar15 = uVar15 + 1;
              local_e0 = local_e0 + -1;
              puVar16 = puVar17;
            } while (local_e0 != 0);
            local_e0 = 0;
            lVar10 = local_f8;
          }
        }
        lVar10 = *(longlong *)(lVar10 + 0x48);
        local_f8 = lVar10;
      } while (lVar10 != 0);
      local_40 = 0;
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free(local_48);
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_88);
      if (puVar17 != (undefined2 *)0x0) {
        FMemory::Free(puVar17);
      }
    }
    (**(code **)(*local_f0 + 0x20))(local_f0,local_a0);
    if (local_f0 != (longlong *)0x0) {
      (**(code **)(*local_f0 + 0x10))();
    }
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 141a81f60 FUN_141a81f60 body=323 status=ok
// SIG undefined FUN_141a81f60(void)

undefined8 *
FUN_141a81f60(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             byte param_9,undefined4 param_10,undefined4 *param_11,longlong param_12)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_144d838f0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = 0;
  uVar1 = param_11[1];
  uVar2 = param_11[2];
  uVar3 = param_11[3];
  *(undefined4 *)(param_1 + 4) = *param_11;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 6) = param_11[4];
  *(undefined4 *)((longlong)param_1 + 0x34) = param_6;
  *(undefined4 *)(param_1 + 7) = param_7;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_8;
  param_1[9] = param_1 + 10;
  *(undefined4 *)(param_1 + 8) = param_10;
  param_1[10] = 0xc7efffffe0000000;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_144d83940;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)((longlong)param_1 + 100) = param_4;
  FUN_141a82450(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0x44) = param_10;
  *param_1 = &PTR_FUN_144db40e8;
  param_1[0xd] = &PTR_LAB_144db4140;
  param_1[0xe] = &PTR_LAB_144db4160;
  param_1[0x49] = &PTR_FUN_144da6378;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffe;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | (uint)param_9;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  if (param_12 == 0) {
    *(undefined1 *)(param_1 + 0x4e) = 0;
  }
  param_1[0x4d] = 0;
  return param_1;
}



// FUNCTION 141a820b0 FUN_141a820b0 body=330 status=ok
// SIG undefined FUN_141a820b0(void)

undefined8 *
FUN_141a820b0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
             byte param_9,undefined4 param_10,undefined4 *param_11,longlong param_12)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_144d838f0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = 0;
  uVar1 = param_11[1];
  uVar2 = param_11[2];
  uVar3 = param_11[3];
  *(undefined4 *)(param_1 + 4) = *param_11;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 6) = param_11[4];
  *(undefined4 *)((longlong)param_1 + 0x34) = param_6;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_8;
  param_1[9] = param_1 + 10;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined4 *)(param_1 + 8) = param_10;
  param_1[10] = 0xc7efffffe0000000;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = param_5;
  *param_1 = &PTR_FUN_144d83998;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)((longlong)param_1 + 100) = param_4;
  FUN_141a82450(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0x45) = param_10;
  *param_1 = &PTR_FUN_144db41d8;
  param_1[0xe] = &PTR_LAB_144db4228;
  param_1[0xf] = &PTR_LAB_144db4248;
  param_1[0x4a] = &PTR_FUN_144da6378;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(uint *)(param_1 + 0x4d) = *(uint *)(param_1 + 0x4d) & 0xfffffffe;
  *(uint *)(param_1 + 0x4d) = *(uint *)(param_1 + 0x4d) | (uint)param_9;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  if (param_12 == 0) {
    *(undefined1 *)(param_1 + 0x4f) = 0;
  }
  param_1[0x4e] = 0;
  return param_1;
}



// FUNCTION 141a82200 FUN_141a82200 body=109 status=ok
// SIG undefined FUN_141a82200(void)

void FUN_141a82200(undefined4 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  *param_1 = 0x10000;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  iVar1 = FUN_141a71f60(param_5);
  if ((iVar1 == 0x13) || (uVar3 = 1, iVar1 == 0x2c)) {
    uVar3 = 2;
  }
  *(undefined1 *)((longlong)param_1 + 7) = uVar3;
  lVar2 = (longlong)(*(int *)(param_2 + 4) + -1);
                    /* WARNING: Could not recover jumptable at 0x000141a8226b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + *(uint *)(&DAT_141a8236c + lVar2 * 4)))
            (lVar2,uVar3,iVar1);
  return;
}



// FUNCTION 141a82390 FD3D12BoundRenderTargets body=42 status=ok
// SIG undefined FD3D12BoundRenderTargets(void)

undefined8 *
FD3D12BoundRenderTargets::FD3D12BoundRenderTargets
          (undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  param_1[8] = param_4;
  *(undefined4 *)(param_1 + 9) = param_3;
  return param_1;
}



// FUNCTION 141a823c0 FUN_141a823c0 body=129 status=ok
// SIG undefined FUN_141a823c0(void)

undefined8 * FUN_141a823c0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = &PTR_FUN_144db3f28;
  param_1[4] = param_2;
  puVar1 = (undefined8 *)
           FDescriptorHeapManager::AllocateHeapSlot(param_2 + 0x1a0,local_res8,param_1 + 6);
  param_1[5] = *puVar1;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_144db3f30;
  param_1[3] = &PTR_LAB_144db3f38;
  return param_1;
}



// FUNCTION 141a82450 FUN_141a82450 body=353 status=ok
// SIG undefined FUN_141a82450(void)

undefined8 * FUN_141a82450(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_144db3f70;
  param_1[1] = &PTR_LAB_144db3f90;
  FUN_141a67840(param_1 + 3);
  param_1[0x14] = param_1;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1e),4000);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x25),4000);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[7] = param_1 + 1;
  return param_1;
}



// FUNCTION 141a825c0 FUN_141a825c0 body=208 status=ok
// SIG undefined FUN_141a825c0(void)

undefined8 *
FUN_141a825c0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = &PTR_FUN_144db3f40;
  param_1[4] = param_2;
  puVar1 = (undefined8 *)
           FDescriptorHeapManager::AllocateHeapSlot(param_2 + 0x218,local_res8,param_1 + 6);
  param_1[5] = *puVar1;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_144db3f48;
  param_1[3] = &PTR_LAB_144db3f50;
  param_1[0x10] = param_5;
  if (param_5 != 0) {
    LOCK();
    *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  FUN_141a85510(param_1 + 3,param_3,param_4);
  return param_1;
}



// FUNCTION 141a82690 FUN_141a82690 body=210 status=ok
// SIG undefined FUN_141a82690(void)

void FUN_141a82690(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar5 = (longlong *)param_1[1];
  iVar6 = (int)param_1[2];
  plVar7 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    plVar7 = param_1;
  }
  if (iVar6 != 0) {
    do {
      lVar3 = *plVar7;
      if (lVar3 != 0) {
        LOCK();
        piVar1 = (int *)(lVar3 + 0x60);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if ((*(char *)(lVar3 + 0x68) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            LOCK();
            bVar8 = *(int *)(lVar3 + 100) == 0;
            if (bVar8) {
              *(int *)(lVar3 + 100) = 1;
            }
            UNLOCK();
            if (bVar8) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,lVar3 + 0x58);
            }
          }
          else {
            (*(code *)**(undefined8 **)(lVar3 + 0x58))(lVar3 + 0x58,1);
          }
        }
      }
      plVar7 = plVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar5 = (longlong *)param_1[1];
  }
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 141a82770 FUN_141a82770 body=206 status=ok
// SIG undefined FUN_141a82770(void)

void FUN_141a82770(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar5 = (longlong *)param_1[1];
  iVar6 = (int)param_1[2];
  plVar7 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    plVar7 = param_1;
  }
  if (iVar6 != 0) {
    do {
      puVar3 = (undefined8 *)*plVar7;
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if ((*(char *)(puVar3 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            LOCK();
            bVar8 = *(int *)((longlong)puVar3 + 0xc) == 0;
            if (bVar8) {
              *(int *)((longlong)puVar3 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar8) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
            }
          }
          else {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
      }
      plVar7 = plVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar5 = (longlong *)param_1[1];
  }
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 141a82840 FUN_141a82840 body=185 status=ok
// SIG undefined FUN_141a82840(void)

void FUN_141a82840(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar6 = (longlong *)*param_1;
  iVar5 = *(int *)(param_1 + 1);
  if (iVar5 != 0) {
    do {
      puVar3 = (undefined8 *)*plVar6;
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if ((*(char *)(puVar3 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            LOCK();
            bVar7 = *(int *)((longlong)puVar3 + 0xc) == 0;
            if (bVar7) {
              *(int *)((longlong)puVar3 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar7) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
            }
          }
          else {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
      }
      plVar6 = plVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar6 = (longlong *)*param_1;
  }
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar6);
  return;
}



// FUNCTION 141a82900 FUN_141a82900 body=150 status=ok
// SIG undefined FUN_141a82900(void)

void FUN_141a82900(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144da6298;
  param_1[1] = &PTR_LAB_144da62b8;
  param_1[6] = &PTR_LAB_144da62c0;
  FUN_141a82770(param_1 + 0x39);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x34));
  FUN_141a82770(param_1 + 0x31);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2c));
  thunk_FUN_141a7bb70(param_1 + 0x1a);
  thunk_FUN_141a7bb70(param_1 + 8);
  param_1[6] = &PTR_FUN_144da60b0;
  param_1[1] = &PTR_FUN_143f3ece8;
  *param_1 = &PTR_FUN_144024f50;
  return;
}



// FUNCTION 141a829a0 FUN_141a829a0 body=363 status=ok
// SIG undefined FUN_141a829a0(void)

void FUN_141a829a0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  ULONG_PTR UVar3;
  char cVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar5;
  bool bVar6;
  
  *param_1 = &PTR_FUN_144db3f70;
  param_1[1] = &PTR_LAB_144db3f90;
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x2d,0);
  if (param_1[0x31] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2d] != 0) {
    FMemory::Free();
  }
  FUN_141a82840(param_1 + 0x2a);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  FUN_141a82840(param_1 + 0x23);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1e);
  DeleteCriticalSection(lpCriticalSection);
  lVar5 = 4;
  do {
    UVar3 = lpCriticalSection[-1].SpinCount;
    lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[-1].SpinCount;
    lVar5 = lVar5 + -1;
    if (UVar3 != 0) {
      LOCK();
      piVar1 = (int *)(UVar3 + 0x60);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(UVar3 + 0x68) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar6 = *(int *)(UVar3 + 100) == 0;
          if (bVar6) {
            *(int *)(UVar3 + 100) = 1;
          }
          UNLOCK();
          if (bVar6) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,UVar3 + 0x58);
          }
        }
        else {
          (*(code *)**(undefined8 **)(UVar3 + 0x58))(UVar3 + 0x58,1);
        }
      }
    }
  } while (lVar5 != 0);
  FUN_141a82690(param_1 + 0x16);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x15);
  thunk_FUN_141a7bb70(param_1 + 3);
  param_1[1] = &PTR_FUN_144da60b0;
  *param_1 = &PTR_FUN_144024f50;
  return;
}



// FUNCTION 141a82b10 FUN_141a82b10 body=150 status=ok
// SIG undefined FUN_141a82b10(void)

void FUN_141a82b10(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144da62e0;
  param_1[1] = &DAT_144da6300;
  param_1[5] = &PTR_LAB_144da6308;
  FUN_141a82770(param_1 + 0x39);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x34));
  FUN_141a82770(param_1 + 0x31);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2c));
  thunk_FUN_141a7bb70(param_1 + 0x19);
  thunk_FUN_141a7bb70(param_1 + 7);
  param_1[5] = &PTR_FUN_144da60b0;
  param_1[1] = &PTR_FUN_143f3ece8;
  *param_1 = &PTR_FUN_144024f50;
  return;
}



// FUNCTION 141a82bb0 FUN_141a82bb0 body=651 status=ok
// SIG undefined FUN_141a82bb0(void)

void FUN_141a82bb0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  lVar2 = param_1[3];
  *param_1 = &PTR__scalar_deleting_destructor__144db40a8;
  lVar5 = (longlong)*(int *)(lVar2 + 0x718);
  if (*(int *)(lVar2 + 0x718) != 0) {
    iVar10 = 0;
    bVar11 = (undefined8 *)**(longlong **)(lVar2 + 0x710) != param_1;
    lVar7 = 0;
    iVar9 = 0;
    do {
      lVar7 = lVar7 + 1;
      iVar8 = iVar9 + 1;
      if (lVar7 < lVar5) {
        plVar6 = (longlong *)(*(longlong *)(lVar2 + 0x710) + lVar7 * 8);
        do {
          if (bVar11 != ((undefined8 *)*plVar6 != param_1)) break;
          iVar8 = iVar8 + 1;
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar7 < lVar5);
      }
      if (bVar11 != false) {
        if (iVar10 != iVar9) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar2 + 0x710) + (longlong)iVar10 * 8),
                     (void *)(*(longlong *)(lVar2 + 0x710) + (longlong)iVar9 * 8),
                     (longlong)(iVar8 - iVar9) << 3);
        }
        iVar10 = iVar10 + (iVar8 - iVar9);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar9 = iVar8;
    } while (lVar7 < lVar5);
    *(int *)(lVar2 + 0x718) = iVar10;
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  puVar3 = (undefined8 *)param_1[0x34];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))
         ) {
        LOCK();
        bVar11 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar11) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar11) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  FUN_141a68350(param_1 + 0x23);
  iVar9 = *(int *)(param_1 + 0x1f);
  plVar6 = (longlong *)param_1[0x1e];
  if (iVar9 != 0) {
    do {
      lVar2 = *plVar6;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + 0x68) + 0x10))(lVar2 + 0x68);
      }
      plVar6 = plVar6 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    plVar6 = (longlong *)param_1[0x1e];
  }
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
  }
  if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1d] + 0x10))();
  }
  iVar9 = *(int *)(param_1 + 0x19);
  plVar6 = (longlong *)param_1[0x18];
  if (iVar9 != 0) {
    do {
      lVar2 = *plVar6;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + 0x68) + 0x10))(lVar2 + 0x68);
      }
      plVar6 = plVar6 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    plVar6 = (longlong *)param_1[0x18];
  }
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
  }
  iVar9 = *(int *)(param_1 + 0x12);
  plVar6 = (longlong *)param_1[0x11];
  if (iVar9 != 0) {
    do {
      lVar2 = *plVar6;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + 0x68) + 0x10))(lVar2 + 0x68);
      }
      plVar6 = plVar6 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    plVar6 = (longlong *)param_1[0x11];
  }
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
  }
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 0x10))();
  }
  if ((longlong *)param_1[0xf] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xf] + 0x10))();
  }
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x10))();
  }
  *param_1 = &PTR_FUN_143f3ece8;
  return;
}



// FUNCTION 141a82e40 FUN_141a82e40 body=258 status=ok
// SIG undefined FUN_141a82e40(void)

void FUN_141a82e40(longlong *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  lVar4 = *param_1;
  lVar5 = *(longlong *)(param_1[1] + 0x90);
  uVar2 = *(undefined4 *)(lVar5 + 0xa8);
  uVar3 = *(undefined4 *)(param_1[2] + 0x10);
  FUN_141a4f5b0(lVar4,lVar5,uVar2,0x800,uVar3);
  piVar1 = (int *)(**(longlong **)(*(longlong *)param_1[3] + 0x5d8) + 0x2c54);
  *piVar1 = *piVar1 + 1;
  lVar8 = *param_1;
  lVar6 = *(longlong *)(lVar8 + 8);
  if (*(int *)(lVar6 + 0x100) != 0) {
    (**(code **)(**(longlong **)(lVar6 + 0x28) + 0xd0))
              (*(longlong **)(lVar6 + 0x28),*(int *)(lVar6 + 0x100),*(undefined8 *)(lVar6 + 0xf8));
    *(undefined4 *)(lVar6 + 0x100) = 0;
    lVar8 = *param_1;
  }
  plVar7 = *(longlong **)(*(longlong *)(lVar8 + 8) + 0x28);
  (**(code **)(*plVar7 + 0x80))(plVar7,param_1[4],0,0,0,param_1[2],0);
  FUN_141a4f5b0(lVar4,lVar5,0x800,uVar2,uVar3);
  return;
}



// FUNCTION 141a82f50 FUN_141a82f50 body=205 status=ok
// SIG undefined FUN_141a82f50(void)

void FUN_141a82f50(longlong *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar4 = *param_1;
  lVar5 = *(longlong *)(param_1[1] + 0x98);
  uVar2 = *(undefined4 *)(lVar5 + 0xa8);
  uVar3 = *(undefined4 *)(param_1[2] + 0x10);
  FUN_141a4f5b0(lVar4,lVar5,uVar2,0x800,uVar3);
  piVar1 = (int *)(**(longlong **)(*(longlong *)param_1[3] + 0x5d8) + 0x2c54);
  *piVar1 = *piVar1 + 1;
  plVar6 = *(longlong **)(*(longlong *)(*param_1 + 8) + 0x28);
  (**(code **)(*plVar6 + 0x80))(plVar6,param_1[4],0,0,0,param_1[2],0);
  FUN_141a4f5b0(lVar4,lVar5,0x800,uVar2,uVar3);
  return;
}



// FUNCTION 141a83020 FUN_141a83020 body=258 status=ok
// SIG undefined FUN_141a83020(void)

void FUN_141a83020(longlong *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  lVar4 = *param_1;
  lVar5 = *(longlong *)(param_1[1] + 0x98);
  uVar2 = *(undefined4 *)(lVar5 + 0xa8);
  uVar3 = *(undefined4 *)(param_1[2] + 0x10);
  FUN_141a4f5b0(lVar4,lVar5,uVar2,0x800,uVar3);
  piVar1 = (int *)(**(longlong **)(*(longlong *)param_1[3] + 0x5d8) + 0x2c54);
  *piVar1 = *piVar1 + 1;
  lVar8 = *param_1;
  lVar6 = *(longlong *)(lVar8 + 8);
  if (*(int *)(lVar6 + 0x100) != 0) {
    (**(code **)(**(longlong **)(lVar6 + 0x28) + 0xd0))
              (*(longlong **)(lVar6 + 0x28),*(int *)(lVar6 + 0x100),*(undefined8 *)(lVar6 + 0xf8));
    *(undefined4 *)(lVar6 + 0x100) = 0;
    lVar8 = *param_1;
  }
  plVar7 = *(longlong **)(*(longlong *)(lVar8 + 8) + 0x28);
  (**(code **)(*plVar7 + 0x80))(plVar7,param_1[4],0,0,0,param_1[2],0);
  FUN_141a4f5b0(lVar4,lVar5,0x800,uVar2,uVar3);
  return;
}



// FUNCTION 141a831c0 FUN_141a831c0 body=89 status=ok
// SIG undefined FUN_141a831c0(void)

undefined8 * FUN_141a831c0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144db3f58;
  FUN_141a55350(param_1[1] + 0x128,param_1[2],*(undefined4 *)(param_1 + 3));
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141a83220 FUN_141a83220 body=89 status=ok
// SIG undefined FUN_141a83220(void)

undefined8 * FUN_141a83220(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144db3f28;
  FUN_141a55350(param_1[1] + 0x1a0,param_1[2],*(undefined4 *)(param_1 + 3));
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 141a83280 FUN_141a83280 body=89 status=ok
// SIG undefined FUN_141a83280(void)

undefined8 * FUN_141a83280(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144db3f40;
  FUN_141a55350(param_1[1] + 0x218,param_1[2],*(undefined4 *)(param_1 + 3));
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 141a832e0 FUN_141a832e0 body=273 status=ok
// SIG undefined FUN_141a832e0(void)

undefined8 * FUN_141a832e0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_144db40e8;
  param_1[0xd] = &PTR_LAB_144db4140;
  param_1[0xe] = &PTR_LAB_144db4160;
  lVar3 = param_1[0x12];
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x20) == 0)) {
    FD3D12TextureStats::UpdateD3D12TextureStats
              (lVar3 + 0x30,-(longlong)*(int *)(param_1 + 0x20),0,*(byte *)(param_1 + 0x4c) & 1);
  }
  if ((LPVOID)param_1[0x4d] != (LPVOID)0x0) {
    VirtualFree((LPVOID)param_1[0x4d],0,0x8000);
  }
  param_1[0x49] = &PTR_FUN_144da6378;
  if (param_1[0x4a] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x4a] + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (lVar3 = param_1[0x4a], lVar3 != 0)) {
      FUN_141a4db60(lVar3);
      FMemory::operator_delete(lVar3,0x110);
    }
  }
  FUN_141a829a0(param_1 + 0xd);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x278);
  }
  return param_1;
}



// FUNCTION 141a83400 FUN_141a83400 body=273 status=ok
// SIG undefined FUN_141a83400(void)

undefined8 * FUN_141a83400(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_144db41d8;
  param_1[0xe] = &PTR_LAB_144db4228;
  param_1[0xf] = &PTR_LAB_144db4248;
  lVar3 = param_1[0x13];
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x20) == 0)) {
    FD3D12TextureStats::UpdateD3D12TextureStats
              (lVar3 + 0x30,-(longlong)*(int *)(param_1 + 0x21),0,*(byte *)(param_1 + 0x4d) & 1);
  }
  if ((LPVOID)param_1[0x4e] != (LPVOID)0x0) {
    VirtualFree((LPVOID)param_1[0x4e],0,0x8000);
  }
  param_1[0x4a] = &PTR_FUN_144da6378;
  if (param_1[0x4b] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x4b] + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (lVar3 = param_1[0x4b], lVar3 != 0)) {
      FUN_141a4db60(lVar3);
      FMemory::operator_delete(lVar3,0x110);
    }
  }
  FUN_141a829a0(param_1 + 0xe);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x280);
  }
  return param_1;
}



// FUNCTION 141a83520 FUN_141a83520 body=273 status=ok
// SIG undefined FUN_141a83520(void)

undefined8 * FUN_141a83520(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_144db4268;
  param_1[0xd] = &PTR_LAB_144db42b8;
  param_1[0xe] = &PTR_LAB_144db42d8;
  lVar3 = param_1[0x12];
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x20) == 0)) {
    FD3D12TextureStats::UpdateD3D12TextureStats
              (lVar3 + 0x30,-(longlong)*(int *)(param_1 + 0x20),0,*(byte *)(param_1 + 0x4c) & 1);
  }
  if ((LPVOID)param_1[0x4d] != (LPVOID)0x0) {
    VirtualFree((LPVOID)param_1[0x4d],0,0x8000);
  }
  param_1[0x49] = &PTR_FUN_144da6378;
  if (param_1[0x4a] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x4a] + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (lVar3 = param_1[0x4a], lVar3 != 0)) {
      FUN_141a4db60(lVar3);
      FMemory::operator_delete(lVar3,0x110);
    }
  }
  FUN_141a829a0(param_1 + 0xd);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x278);
  }
  return param_1;
}



// FUNCTION 141a83640 FUN_141a83640 body=100 status=ok
// SIG undefined FUN_141a83640(void)

undefined8 * FUN_141a83640(undefined8 *param_1,uint param_2)

{
  param_1[0xb] = &PTR_FUN_143f3ece8;
  *param_1 = &PTR_FUN_144db3f58;
  FUN_141a55350(param_1[1] + 0x128,param_1[2],*(undefined4 *)(param_1 + 3));
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 141a836b0 FUN_141a836b0 body=96 status=ok
// SIG undefined FUN_141a836b0(void)

undefined8 * FUN_141a836b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144da0c28;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 141a83710 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
Chaos::FPBDVolumeConstraintBase::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144da0c50;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141a83760 FUN_141a83760 body=100 status=ok
// SIG undefined FUN_141a83760(void)

undefined8 * FUN_141a83760(undefined8 *param_1,uint param_2)

{
  param_1[3] = &PTR_FUN_144db3f28;
  FUN_141a55350(param_1[4] + 0x1a0,param_1[5],*(undefined4 *)(param_1 + 6));
  param_1[5] = 0;
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 141a837d0 FUN_141a837d0 body=226 status=ok
// SIG undefined FUN_141a837d0(void)

undefined8 * FUN_141a837d0(undefined8 *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_144db3fb0;
  param_1[0xe] = &PTR_LAB_144db4000;
  param_1[0xf] = &PTR_LAB_144db4020;
  if (((param_1[0x13] != 0) && (lVar2 = (longlong)*(int *)(param_1 + 0x21), 0 < lVar2)) &&
     (lVar3 = -lVar2, lVar3 != 0)) {
    if (lVar3 < 1) {
      iVar1 = -(int)((longlong)
                     ((ulonglong)((uint)((longlong)(lVar2 + 0x3ffU) >> 0x3f) & 0x3ff) +
                     (lVar2 + 0x3ffU & 0xfffffffffffffc00)) >> 10);
    }
    else {
      iVar1 = (int)((longlong)
                    ((ulonglong)((uint)((longlong)(lVar3 + 0x3ffU) >> 0x3f) & 0x3ff) +
                    (lVar3 + 0x3ffU & 0xfffffffffffffc00)) >> 10);
    }
    if ((*(uint *)(param_1[0x13] + 0x60) & 7) == 0) {
      LOCK();
      DAT_146ab6300 = DAT_146ab6300 + iVar1;
      UNLOCK();
    }
    else {
      LOCK();
      DAT_146ab6304 = DAT_146ab6304 + iVar1;
      UNLOCK();
    }
  }
  FUN_141a829a0(param_1 + 0xe);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 141a838c0 FUN_141a838c0 body=52 status=ok
// SIG undefined FUN_141a838c0(void)

undefined8 FUN_141a838c0(undefined8 param_1,ulonglong param_2)

{
  FUN_141a829a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 141a83900 FUN_141a83900 body=146 status=ok
// SIG undefined FUN_141a83900(void)

undefined8 * FUN_141a83900(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144db3ef0;
  param_1[5] = &PTR_LAB_144db3ef8;
  TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>::
  ~TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>(param_1 + 0x17);
  thunk_FUN_141a7bb70(param_1 + 7);
  param_1[5] = &PTR_FUN_144da60b0;
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FUN_1415b1b00(&DAT_1469fd258,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 141a839a0 FUN_141a839a0 body=143 status=ok
// SIG undefined FUN_141a839a0(void)

undefined8 * FUN_141a839a0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[0x10];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  param_1[3] = &PTR_FUN_144db3f40;
  FUN_141a55350(param_1[4] + 0x218,param_1[5],*(undefined4 *)(param_1 + 6));
  param_1[5] = 0;
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 141a83a30 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SGameLayerManager>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x568);
  }
  return param_1;
}



// FUNCTION 141a83a60 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FWmfMediaTracks::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141a82bb0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 141a83aa0 FUN_141a83aa0 body=162 status=ok
// SIG undefined FUN_141a83aa0(void)

void FUN_141a83aa0(longlong param_1,longlong *param_2)

{
  int iVar1;
  BOOL BVar2;
  
  if (*param_2 != 0) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
    }
    iVar1 = *(int *)(param_1 + 0x120);
    *(int *)(param_1 + 0x120) = iVar1 + 1;
    if (*(int *)(param_1 + 0x124) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x118,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar1 * 8) = *param_2;
    *param_2 = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2);
  return;
}



// FUNCTION 141a83b50 FUN_141a83b50 body=595 status=ok
// SIG undefined FUN_141a83b50(void)

ulonglong FUN_141a83b50(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar3 = TLockFreePointerListLIFOPad<FGCArrayStruct,0>::Pop();
  if (uVar3 == 0) {
    uVar8 = 0;
    do {
      lVar4 = FMemory::Malloc(0x3f60,0);
      uVar3 = uVar8;
      do {
        uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
        uVar7 = uVar8;
        if (uVar2 != 0) {
          uVar7 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        *(ulonglong *)(uVar7 + 8) = (ulonglong)(uint)((int)uVar3 * 0xd0) + lVar4;
        do {
          LOCK();
          uVar7 = *(ulonglong *)(param_1 + 8);
          if (uVar7 == 0) {
            *(ulonglong *)(param_1 + 8) = 0;
            uVar7 = 0;
          }
          UNLOCK();
          uVar6 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
          if (uVar6 < (uVar7 & 0xfffffffffc000000)) {
            LockFreeTagCounterHasOverflowed();
          }
          uVar5 = uVar8;
          if (uVar2 != 0) {
            uVar5 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
          }
          *(uint *)(uVar5 + 0x10) = (uint)uVar7 & 0x3ffffff;
          LOCK();
          bVar9 = uVar7 == *(ulonglong *)(param_1 + 8);
          if (bVar9) {
            *(ulonglong *)(param_1 + 8) = uVar2 | uVar6;
          }
          UNLOCK();
        } while (!bVar9);
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < 0x4e);
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x4e;
      UNLOCK();
      LOCK();
      uVar3 = *(ulonglong *)(param_1 + 8);
      if (uVar3 == 0) {
        *(ulonglong *)(param_1 + 8) = 0;
        uVar3 = 0;
      }
      UNLOCK();
      uVar2 = (uint)uVar3;
      while (uVar1 = uVar2 & 0x3ffffff, (uVar3 & 0x3ffffff) != 0) {
        uVar7 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
        if (uVar7 < (uVar3 & 0xfffffffffc000000)) {
          LockFreeTagCounterHasOverflowed();
        }
        uVar6 = uVar8;
        if (uVar1 != 0) {
          uVar6 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar2 & 0x3fff) * 0x18;
        }
        LOCK();
        bVar9 = uVar3 == *(ulonglong *)(param_1 + 8);
        if (bVar9) {
          *(ulonglong *)(param_1 + 8) = *(uint *)(uVar6 + 0x10) | uVar7;
        }
        UNLOCK();
        if (bVar9) {
          *(undefined4 *)(uVar6 + 0x10) = 0;
          break;
        }
        LOCK();
        uVar3 = *(ulonglong *)(param_1 + 8);
        if (uVar3 == 0) {
          *(ulonglong *)(param_1 + 8) = 0;
          uVar3 = 0;
        }
        UNLOCK();
        uVar2 = (uint)uVar3;
      }
      uVar3 = uVar8;
      if (uVar1 != 0) {
        uVar3 = *(ulonglong *)
                 ((&DAT_1468a81f8)[uVar1 >> 0xe] + 8 + (ulonglong)(uVar2 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
      }
    } while (uVar3 == 0);
  }
  return uVar3;
}



// FUNCTION 141a83db0 FUN_141a83db0 body=326 status=ok
// SIG undefined FUN_141a83db0(void)

void FUN_141a83db0(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  void *_Dst;
  void *_Src;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_1[1];
  iVar5 = 0;
  if (1 < iVar6) {
    iVar2 = (3 - (uint)(iVar6 != 0)) + iVar6;
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
    }
    puVar1 = (undefined4 *)(*param_1 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
    *puVar1 = 0xa000d;
    *(undefined2 *)(puVar1 + 1) = 0;
  }
  if (0 < (int)param_1[2]) {
    do {
      iVar6 = (int)param_1[1];
      iVar2 = (5 - (uint)(iVar6 != 0)) + iVar6;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
      }
      iVar5 = iVar5 + 1;
      lVar4 = (longlong)iVar6 - (ulonglong)(iVar6 != 0);
      builtin_wcsncpy((wchar_t *)(*param_1 + lVar4 * 2),L"    ",4);
      *(undefined2 *)(*param_1 + 8 + lVar4 * 2) = 0;
    } while (iVar5 < (int)param_1[2]);
  }
  puVar3 = (undefined8 *)FText::ToString(param_2);
  _Src = (void *)*puVar3;
  iVar6 = *(int *)(puVar3 + 1) + -1;
  if (*(int *)(puVar3 + 1) == 0) {
    iVar6 = 0;
  }
  if (iVar6 != 0) {
    iVar5 = (int)param_1[1];
    iVar2 = (uint)(iVar5 == 0) + iVar6 + iVar5;
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar5);
    }
    _Dst = (void *)(*param_1 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
  }
  return;
}



// FUNCTION 141a83f00 AreAllSubresourcesSame body=23 status=ok
// SIG undefined AreAllSubresourcesSame(void)

ulonglong CResourceState::AreAllSubresourcesSame(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (((int)uVar1 < 0) && (uVar1 = uVar1 & 0x7fffffff, uVar1 != 0x7fffffff)) {
    return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  return (ulonglong)uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141a83f20 FUN_141a83f20 body=543 status=ok
// SIG undefined FUN_141a83f20(void)

void FUN_141a83f20(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  cVar2 = FUN_141ec9940();
  if (cVar2 == '\0') {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fd3d8) && (_Init_thread_header(&DAT_1469fd3d8), DAT_1469fd3d8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_1469fd3d0 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"D3D12.UseSharedQueryHeapForTimings");
    _Init_thread_footer(&DAT_1469fd3d8);
  }
  if ((DAT_1469fd3d0 == (longlong *)0x0) ||
     (iVar4 = (**(code **)(*DAT_1469fd3d0 + 0x68))(), iVar4 < 1)) {
    if (DAT_1469fd3cc != '\0') {
      DAT_1469fd3cc = '\0';
      FUN_141ebfa00(param_1);
      FUN_141a7c180();
    }
  }
  else if (DAT_1469fd3cc == '\0') {
    DAT_1469fd3cc = '\x01';
    FUN_141ebfa00(param_1);
    FUN_141a75040(param_1[0x19]);
  }
  plVar6 = (longlong *)0x0;
  param_1[7] = 0;
  (**(code **)(*param_1 + 0x30))(param_1);
  *(undefined1 *)((longlong)param_1 + 10) = DAT_146ab62fc;
  cVar2 = DAT_146ab62fd;
  *(char *)((longlong)param_1 + 0xb) = DAT_146ab62fd;
  if (cVar2 == '\0') {
    if (*(char *)((longlong)param_1 + 10) == '\0') goto LAB_141a83fee;
LAB_141a83ff8:
    uVar3 = FUN_14164b510();
    *(undefined1 *)((longlong)param_1 + 0xd) = uVar3;
    if (*(char *)((longlong)param_1 + 10) == '\0') goto LAB_141a84006;
    if (*(char *)((longlong)param_1 + 0xb) != '\0') goto LAB_141a84031;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 10) = 0;
LAB_141a83fee:
    if ((*(char *)((longlong)param_1 + 0xc) == '\0') && (cVar2 != '\0')) goto LAB_141a83ff8;
LAB_141a84006:
    if (*(char *)((longlong)param_1 + 0xb) == '\0') {
      if (*(char *)((longlong)param_1 + 0xc) != '\0') {
        FUN_141a856f0(param_1 + 0x2b,0);
        SetEmitDrawEvents(*(undefined1 *)((longlong)param_1 + 0xd));
      }
      goto LAB_141a8408b;
    }
LAB_141a84031:
    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
      *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + -1;
      goto LAB_141a8408b;
    }
  }
  SetEmitDrawEvents(1);
  *(undefined1 *)(param_1 + 1) = 1;
  plVar5 = (longlong *)operator_new(0x20);
  if (plVar5 != (longlong *)0x0) {
    lVar1 = param_1[0x19];
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar5[3] = lVar1;
    *plVar5 = (longlong)&PTR__scalar_deleting_destructor__144db41a8;
    plVar6 = plVar5;
  }
  param_1[6] = (longlong)plVar6;
  (**(code **)(*plVar6 + 8))(plVar6);
LAB_141a8408b:
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_1 + 0xb);
  (**(code **)(param_1[0x20] + 8))(param_1 + 0x20,0,0);
  cVar2 = FUN_14164b510();
  if (cVar2 == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141a840da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,L"FRAME",0xff00ff00);
  return;
}



// FUNCTION 141a84140 FUN_141a84140 body=406 status=ok
// SIG undefined FUN_141a84140(void)

longlong *
FUN_141a84140(longlong *param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  
  uVar8 = DAT_1464aaa90;
  lVar14 = 0;
  *param_2 = param_3;
  *(undefined4 *)(param_2 + 1) = param_4;
  uVar4 = param_5[1];
  uVar5 = param_5[2];
  uVar6 = param_5[3];
  *(undefined4 *)((longlong)param_2 + 0xc) = *param_5;
  *(undefined4 *)(param_2 + 2) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar5;
  *(undefined4 *)(param_2 + 3) = uVar6;
  uVar4 = param_5[4];
  uVar5 = param_5[5];
  uVar6 = param_5[6];
  uVar7 = param_5[7];
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar4;
  *(undefined4 *)(param_2 + 4) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar6;
  *(undefined4 *)(param_2 + 5) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0x2c) = param_5[8];
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar8;
  *(undefined1 *)(param_2 + 10) = 0;
  param_2[9] = 0;
  lVar13 = (longlong)*(int *)(param_3 + 0x3c);
  if ((((*(int *)(DAT_1469fd250 + 4) != 0) && ((&DAT_1464ca1b8)[lVar13 * 10] == 1)) &&
      ((&DAT_1464ca1bc)[lVar13 * 10] == 1)) &&
     (((*(longlong *)(*(longlong *)(param_3 + 0x98) + 0x20) != 0 &&
       ((*(uint *)(param_3 + 0x40) & 0x80000) == 0)) &&
      (cVar9 = (**(code **)(*param_1 + 0x780))(param_1,uVar4,param_2 + 9), cVar9 != '\0')))) {
    return param_2;
  }
  iVar12 = param_5[7];
  iVar1 = (&DAT_1464ca1bc)[lVar13 * 10];
  iVar2 = (&DAT_1464ca1bc)[lVar13 * 10];
  iVar10 = param_5[6] + -1 + (&DAT_1464ca1b8)[lVar13 * 10];
  iVar3 = (&DAT_1464ca1b8)[lVar13 * 10];
  uVar11 = (iVar10 / iVar3) * (&DAT_1464ca1c4)[lVar13 * 10] + 0xffU & 0xffffff00;
  *(uint *)(param_2 + 6) = uVar11;
  iVar12 = uVar11 * ((iVar12 + -1 + iVar1) / iVar2);
  *(int *)((longlong)param_2 + 0x34) = iVar12;
  uVar11 = param_5[8] * iVar12 + 0x1ffU & 0xfffffe00;
  *(uint *)(param_2 + 8) = uVar11;
  lVar13 = operator_new(0x80,(longlong)iVar10 % (longlong)iVar3 & 0xffffffff);
  if (lVar13 != 0) {
    lVar14 = FUN_141a67840(lVar13,*(undefined8 *)(*(longlong *)param_1[10] + 0xd50));
  }
  param_2[9] = lVar14;
  lVar13 = FUN_141a44bf0(*(longlong *)(*(longlong *)param_1[10] + 0xd50) + 0x850,uVar11,0x200,lVar14
                        );
  param_2[7] = lVar13;
  return param_2;
}



// FUNCTION 141a842e0 BeginUpdateTexture3D_RenderThread body=134 status=ok
// SIG undefined BeginUpdateTexture3D_RenderThread(void)

undefined8
FD3D12DynamicRHI::BeginUpdateTexture3D_RenderThread
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined4 param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_3);
    if (cVar1 != '\0') {
      lVar2 = param_3;
    }
  }
  FUN_141a84140(param_1,param_2,param_4,param_5,param_6);
  if (lVar2 != 0) {
    FRHICommandListImmediate::UnStallRHIThread(lVar2);
  }
  return param_2;
}



// FUNCTION 141a84370 FUN_141a84370 body=455 status=ok
// SIG undefined FUN_141a84370(void)

void FUN_141a84370(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = (longlong *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = param_2;
  plVar5 = (longlong *)*plVar1;
  for (iVar6 = *(int *)(param_1 + 0x90); iVar6 != 0; iVar6 = iVar6 + -1) {
    lVar2 = *plVar5;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)(lVar2 + 0x68) + 0x10))(lVar2 + 0x68);
    }
    plVar5 = plVar5 + 1;
  }
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  iVar6 = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
    iVar6 = *(int *)(param_1 + 0x90);
  }
  iVar4 = *(int *)(param_1 + 0x98);
  iVar3 = iVar6 + iVar4;
  *(int *)(param_1 + 0x90) = iVar3;
  if (*(int *)(param_1 + 0x94) < iVar3) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar6 * 8),0,(longlong)iVar4 << 3);
  plVar1 = (longlong *)(param_1 + 0xc0);
  plVar5 = (longlong *)*plVar1;
  for (iVar6 = *(int *)(param_1 + 200); iVar6 != 0; iVar6 = iVar6 + -1) {
    lVar2 = *plVar5;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)(lVar2 + 0x68) + 0x10))(lVar2 + 0x68);
    }
    plVar5 = plVar5 + 1;
  }
  *(undefined4 *)(param_1 + 200) = 0;
  iVar6 = 0;
  if (*(int *)(param_1 + 0xcc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
    iVar6 = *(int *)(param_1 + 200);
  }
  iVar4 = *(int *)(param_1 + 0x98);
  iVar3 = iVar6 + iVar4;
  *(int *)(param_1 + 200) = iVar3;
  if (*(int *)(param_1 + 0xcc) < iVar3) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar6 * 8),0,(longlong)iVar4 << 3);
  plVar1 = (longlong *)(param_1 + 0xf0);
  plVar5 = (longlong *)*plVar1;
  for (iVar6 = *(int *)(param_1 + 0xf8); iVar6 != 0; iVar6 = iVar6 + -1) {
    lVar2 = *plVar5;
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)(lVar2 + 0x68) + 0x10))(lVar2 + 0x68);
    }
    plVar5 = plVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xfc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
    iVar7 = *(int *)(param_1 + 0xf8);
  }
  iVar6 = *(int *)(param_1 + 0x98);
  iVar4 = iVar7 + iVar6;
  *(int *)(param_1 + 0xf8) = iVar4;
  if (*(int *)(param_1 + 0xfc) < iVar4) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar7 * 8),0,(longlong)iVar6 << 3);
  return;
}



// FUNCTION 141a84540 InitializeModule body=36 status=ok
// SIG undefined InitializeModule(void)

void FStaticallyLinkedModuleRegistrant<FSlateCoreModule>::InitializeModule(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x30);
  if (lVar1 != 0) {
    FUN_141a4c4c0(lVar1);
    return;
  }
  return;
}



// FUNCTION 141a84570 FUN_141a84570 body=8 status=ok
// SIG undefined FUN_141a84570(void)

bool FUN_141a84570(longlong param_1)

{
  return 0 < *(int *)(param_1 + 0x20);
}



// FUNCTION 141a84580 FUN_141a84580 body=294 status=ok
// SIG undefined FUN_141a84580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_141a84580(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 *param_7)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined1 local_b8 [56];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  puVar2 = (undefined8 *)FUN_141a851d0(local_b8,param_4,param_5);
  local_c8 = 0;
  local_d0 = param_6;
  local_d8 = param_5;
  local_80 = *puVar2;
  uStack_78 = puVar2[1];
  local_e8 = 0;
  local_70 = puVar2[2];
  uStack_68 = puVar2[3];
  local_60 = *(undefined4 *)(puVar2 + 4);
  uStack_5c = *(undefined4 *)((longlong)puVar2 + 0x24);
  uStack_58 = *(undefined4 *)(puVar2 + 5);
  uStack_54 = *(undefined4 *)((longlong)puVar2 + 0x2c);
  local_50 = puVar2[6];
  local_e0 = param_4;
  lVar3 = FUN_141a452c0(*(undefined8 *)param_1[10],0,&local_80,4);
  if (*(char *)(lVar3 + 0xb0) != '\0') {
    *(undefined1 *)(lVar3 + 0x19) = 0;
  }
  lVar1 = lVar3 + 8;
  local_e0 = 1;
  local_e8 = param_4;
  uVar4 = (**(code **)(*param_1 + 0x4b0))(param_1,param_3,lVar1,0);
  *param_7 = uVar4;
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a846b0 FUN_141a846b0 body=1900 status=ok
// SIG undefined FUN_141a846b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141a8486f) */
/* WARNING: Removing unreachable block (ram,0x000141a8488f) */

undefined8 *
FUN_141a846b0(longlong param_1,uint param_2,uint param_3,uint param_4,byte param_5,uint param_6,
             uint param_7,longlong *param_8)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  byte bVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  void *_Dst;
  undefined1 auStack_2a8 [32];
  undefined8 *local_288;
  uint local_280;
  void *local_278;
  byte local_268;
  uint local_264;
  undefined4 local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  uint local_250;
  uint local_24c;
  undefined4 *local_248;
  undefined8 *local_240;
  longlong local_238;
  void *local_230;
  uint local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined8 local_21c;
  undefined4 local_214;
  uint local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  ulonglong local_1f8;
  uint uStack_1f0;
  undefined2 uStack_1ec;
  undefined2 uStack_1ea;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  longlong local_1d0;
  longlong *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [56];
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  ulonglong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined1 local_e8 [16];
  longlong local_d8;
  undefined8 local_a0;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  local_268 = param_5;
  local_1d0 = (ulonglong)param_5 * 5;
  uVar10 = (&DAT_1464ca1cc)[(ulonglong)param_5 * 10];
  local_24c = param_7;
  local_1c8 = param_8;
  local_25c = param_4;
  local_258 = param_3;
  local_254 = param_2;
  local_238 = param_1;
  local_260 = FUN_141a2ea30(uVar10,param_7 >> 4 & 0xffffff01);
  uVar7 = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  local_208 = 4;
  local_160._0_4_ = 0;
  if ((param_7 >> 0x10 & 1) != 0) {
    local_160._0_4_ = 4;
  }
  uStack_200 = 0;
  local_250 = param_7 & 1;
  uStack_1ea = (undefined2)param_6;
  uVar6 = CONCAT26(uStack_1ea,CONCAT24((short)param_4,param_3));
  uStack_1e4 = 1;
  uStack_1e0 = 0;
  if (local_250 != 0) {
    local_160._0_4_ = (uint)local_160 | 1;
  }
  local_160 = CONCAT44(uStack_1d4,(uint)local_160);
  local_248 = (undefined4 *)0x0;
  if (((char)local_250 != '\0') && ((int)param_8[2] == 1)) {
    uStack_114 = *(undefined4 *)((longlong)param_8 + 0x14);
    uStack_110 = (undefined4)param_8[3];
    uStack_10c = *(undefined4 *)((longlong)param_8 + 0x1c);
    uStack_108 = (undefined4)param_8[4];
    local_248 = &local_100;
    local_118 = uVar10;
    local_100 = uVar10;
    uStack_fc = uStack_114;
    uStack_f8 = uStack_110;
    uStack_f4 = uStack_10c;
    local_f0 = uStack_108;
  }
  if ((-(((uint)local_160 & 1) != 0 || ((uint)local_160 & 4) != 0) & 0x10U | 1) == 1) {
    uVar7 = 0xc0;
  }
  lVar14 = **(longlong **)(local_238 + 0x50);
  local_264 = uVar7;
  local_1f8 = (ulonglong)param_2;
  uStack_1f0 = param_3;
  uStack_1ec = (short)param_4;
  local_1e8 = uVar10;
  puVar11 = (undefined8 *)operator_new(0x230);
  local_240 = puVar11;
  if (puVar11 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)(lVar14 + 0xd50);
    *puVar11 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar11 + 1) = 0;
    *puVar11 = &PTR_FUN_144d838f0;
    *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
    *(undefined2 *)(puVar11 + 2) = 0x100;
    puVar11[3] = 0;
    uVar4 = *(undefined4 *)((longlong)param_8 + 0x14);
    lVar15 = param_8[3];
    uVar5 = *(undefined4 *)((longlong)param_8 + 0x1c);
    *(int *)(puVar11 + 4) = (int)param_8[2];
    *(undefined4 *)((longlong)puVar11 + 0x24) = uVar4;
    *(int *)(puVar11 + 5) = (int)lVar15;
    *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar5;
    *(int *)(puVar11 + 6) = (int)param_8[4];
    *(undefined4 *)(puVar11 + 7) = 1;
    *(uint *)((longlong)puVar11 + 0x3c) = (uint)local_268;
    puVar11[9] = puVar11 + 10;
    *(uint *)((longlong)puVar11 + 0x34) = param_6;
    *(uint *)(puVar11 + 8) = param_7;
    puVar11[10] = 0xc7efffffe0000000;
    puVar11[0xb] = 0;
    *puVar11 = &PTR_FUN_144d839e8;
    *(uint *)(puVar11 + 0xc) = local_254;
    *(uint *)((longlong)puVar11 + 100) = local_258;
    *(uint *)(puVar11 + 0xd) = param_4;
    FUN_141a82450(puVar11 + 0xe,uVar3);
    *puVar11 = &PTR_FUN_144db3fb0;
    puVar11[0xe] = &PTR_LAB_144db4000;
    puVar11[0xf] = &PTR_LAB_144db4020;
    *(undefined1 *)(puVar11 + 0x45) = 0;
    param_4 = local_25c;
  }
  puVar1 = puVar11 + 0x11;
  local_280 = uVar7;
  if (*param_8 != 0) {
    local_280 = 0x400;
  }
  local_158 = 4;
  uStack_154 = uStack_204;
  uStack_150 = 0;
  uStack_14c = 0;
  local_128 = local_160;
  local_288 = puVar1;
  local_148 = (ulonglong)param_2;
  uStack_140 = uVar6;
  local_138 = CONCAT44(1,uVar10);
  uStack_130 = 0;
  FUN_141a50bc0(*(longlong *)(lVar14 + 0xd50) + 0x6c0,local_24c,&local_158,local_248);
  if ((char)local_250 != '\0') {
    local_20c = 0;
    local_214 = 0;
    local_220 = local_260;
    local_21c = 8;
    local_210 = param_4;
    puVar12 = (undefined8 *)operator_new(0x70);
    if (puVar12 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      lVar15 = *(longlong *)(lVar14 + 0xd50);
      *puVar12 = &PTR_FUN_144daa6c0;
      puVar12[1] = lVar15;
      puVar13 = (undefined8 *)
                FDescriptorHeapManager::AllocateHeapSlot(lVar15 + 0xb0,local_198,puVar12 + 3);
      puVar12[2] = *puVar13;
      *(undefined4 *)(puVar12 + 4) = 0;
      puVar12[0xb] = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar12 + 0xc) = 0;
      *(undefined4 *)((longlong)puVar12 + 100) = 0;
      *(undefined2 *)(puVar12 + 0xd) = 0x100;
      *puVar12 = &PTR_FUN_144daa6c8;
      puVar12[0xb] = &PTR_LAB_144daa6d0;
      FUN_141a85460(puVar12,&local_220,puVar1);
    }
    FUN_141a91cd0(puVar11 + 0xe,puVar12);
  }
  local_1b0 = 0;
  local_1b8 = 0x1688;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1c0 = local_260;
  local_1bc = 8;
  local_1ac = param_6;
  puVar12 = (undefined8 *)operator_new(0x88);
  if (puVar12 != (undefined8 *)0x0) {
    FUN_141a823c0(puVar12,*(undefined8 *)(lVar14 + 0xd50));
    *puVar12 = &PTR_FUN_144db3f30;
    puVar12[3] = &PTR_LAB_144db3f38;
    FUN_141a75120(puVar12,&local_1c0,puVar1,0xffffffff);
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(puVar11 + 0x23);
  if (puVar11 != (undefined8 *)0x0) {
    if ((longlong *)*param_8 != (longlong *)0x0) {
      local_230 = (void *)0x0;
      local_224 = 0;
      lVar14 = (**(code **)(*(longlong *)*param_8 + 8))();
      local_228 = param_6;
      _Dst = (void *)0x0;
      if (0 < (int)param_6) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_230);
        _Dst = local_230;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)(int)param_6 * 0x18);
      uVar21 = 0;
      uVar18 = 0;
      if (param_6 != 0) {
        do {
          lVar15 = (longlong)(int)uVar18;
          *(ulonglong *)((longlong)_Dst + lVar15 * 0x18) = (ulonglong)uVar21 + lVar14;
          bVar17 = (byte)uVar18;
          uVar7 = local_254 >> (bVar17 & 0x1f);
          if (uVar7 < 2) {
            uVar7 = 1;
          }
          iVar19 = (&DAT_1464ca1c4)[local_1d0 * 2];
          uVar8 = local_258 >> (bVar17 & 0x1f);
          *(ulonglong *)((longlong)_Dst + lVar15 * 0x18 + 8) = (ulonglong)(uVar7 * iVar19);
          if (uVar8 < 2) {
            uVar8 = 1;
          }
          uVar9 = local_25c >> (bVar17 & 0x1f);
          lVar20 = (ulonglong)uVar8 * (ulonglong)(uVar7 * iVar19);
          *(longlong *)((longlong)_Dst + lVar15 * 0x18 + 0x10) = lVar20;
          if (uVar9 < 2) {
            uVar9 = 1;
          }
          uVar18 = uVar18 + 1;
          uVar21 = uVar21 + uVar9 * (int)lVar20;
          puVar11 = local_240;
          param_8 = local_1c8;
          uVar7 = local_264;
        } while (uVar18 < param_6);
      }
      uVar10 = GetRequiredIntermediateSize(*(undefined8 *)(puVar11[0x13] + 0x18),0,param_6);
      lVar14 = local_238;
      FUN_141a67840(local_e8,*(undefined8 *)(**(longlong **)(local_238 + 0x50) + 0xd50));
      FUN_141a44bf0(*(longlong *)(**(longlong **)(lVar14 + 0x50) + 0xd50) + 0x850,uVar10,0x200,
                    local_e8);
      lVar14 = puVar11[0x13];
      local_280 = param_6;
      local_288 = (undefined8 *)((ulonglong)local_288 & 0xffffffff00000000);
      lVar15 = **(longlong **)(puVar11[0x10] + 0x5d8);
      piVar2 = (int *)(*(longlong *)(*(longlong *)(lVar15 + 0x468) + 0x18) + 0x2c54);
      *piVar2 = *piVar2 + 1;
      local_278 = _Dst;
      UpdateSubresources(*(undefined8 *)(*(longlong *)(lVar15 + 0x468) + 0x28),
                         *(undefined8 *)(lVar14 + 0x18),*(undefined8 *)(local_d8 + 0x18),local_a0);
      local_288 = (undefined8 *)CONCAT44(local_288._4_4_,0xffffffff);
      FUN_141a4f5b0(lVar15 + 0x460,lVar14,0x400,uVar7);
      thunk_FUN_141a7bb70(local_e8);
      if (_Dst != (void *)0x0) {
        FMemory::Free(_Dst);
      }
    }
    lVar14 = puVar11[0x13];
    if (lVar14 != 0) {
      plVar16 = (longlong *)mu::Mesh::GetFaceBuffers(puVar11[0x10]);
      local_288 = (undefined8 *)(lVar14 + 0x30);
      (**(code **)(*plVar16 + 200))(plVar16,&local_118,0,1);
      lVar15 = CONCAT44(uStack_114,local_118);
      *(undefined4 *)(puVar11 + 0x21) = local_118;
      if (lVar15 != 0) {
        if (lVar15 < 1) {
          iVar19 = -(int)((longlong)
                          ((ulonglong)((uint)((longlong)(0x3ffU - lVar15) >> 0x3f) & 0x3ff) +
                          (0x3ffU - lVar15 & 0xfffffffffffffc00)) >> 10);
        }
        else {
          iVar19 = (int)((longlong)
                         ((ulonglong)((uint)((longlong)(lVar15 + 0x3ffU) >> 0x3f) & 0x3ff) +
                         (lVar15 + 0x3ffU & 0xfffffffffffffc00)) >> 10);
        }
        if ((*(uint *)(lVar14 + 0x60) & 7) == 0) {
          LOCK();
          DAT_146ab6300 = DAT_146ab6300 + iVar19;
          UNLOCK();
        }
        else {
          LOCK();
          DAT_146ab6304 = DAT_146ab6304 + iVar19;
          UNLOCK();
        }
      }
    }
  }
  if ((longlong *)*param_8 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_8 + 0x18))();
  }
  return puVar11;
}



// FUNCTION 141a84e20 FUN_141a84e20 body=500 status=ok
// SIG undefined FUN_141a84e20(void)

longlong * FUN_141a84e20(longlong param_1,short *param_2,longlong param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  
  lVar5 = *(longlong *)(param_1 + 0x50);
  iVar8 = *(int *)(param_1 + 0xb8);
  puVar7 = (undefined8 *)0x0;
  iVar2 = *(int *)(param_1 + 0xbc);
  if (*(int *)(lVar5 + 8 + (longlong)iVar8 * 0x10) <= iVar2) {
    puVar3 = (undefined8 *)operator_new(0x68);
    puVar6 = puVar7;
    if (puVar3 != (undefined8 *)0x0) {
      uVar1 = *(undefined8 *)(param_1 + 200);
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = uVar1;
      *puVar3 = &PTR_FUN_144db4180;
      puVar3[0xc] = 0;
      puVar6 = puVar3;
    }
    plVar9 = (longlong *)((longlong)*(int *)(param_1 + 0xb8) * 0x10 + *(longlong *)(param_1 + 0x50))
    ;
    iVar8 = (int)plVar9[1];
    *(int *)(plVar9 + 1) = iVar8 + 1;
    if (*(int *)((longlong)plVar9 + 0xc) < iVar8 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar8);
    }
    *(undefined8 **)(*plVar9 + (longlong)iVar8 * 8) = puVar6;
    iVar2 = *(int *)(param_1 + 0xbc);
    iVar8 = *(int *)(param_1 + 0xb8);
    lVar5 = *(longlong *)(param_1 + 0x50);
  }
  *(int *)(param_1 + 0xbc) = iVar2 + 1;
  plVar9 = *(longlong **)(*(longlong *)(lVar5 + (longlong)iVar8 * 0x10) + (longlong)iVar2 * 8);
  plVar4 = (longlong *)(**(code **)(**(longlong **)(*(longlong *)(param_1 + 200) + 0x10) + 0x6d8))()
  ;
  lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,0);
  puVar6 = puVar7;
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)(lVar5 + -0x30);
  }
  plVar9[0xc] = (longlong)puVar6;
  (**(code **)(*plVar9 + 8))(plVar9);
  if ((short *)plVar9[6] != param_2) {
    puVar6 = puVar7;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (param_2[lVar5] != 0);
      puVar6 = (undefined8 *)(ulonglong)((int)lVar5 + 1);
    }
    *(undefined4 *)(plVar9 + 7) = 0;
    iVar8 = (int)puVar6;
    if (*(int *)((longlong)plVar9 + 0x3c) != iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar9 + 6,puVar6);
      puVar7 = (undefined8 *)(ulonglong)*(uint *)(plVar9 + 7);
    }
    iVar2 = iVar8 + (int)puVar7;
    *(int *)(plVar9 + 7) = iVar2;
    if (*(int *)((longlong)plVar9 + 0x3c) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar9 + 6);
    }
    if (iVar8 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)plVar9[6],param_2,(longlong)iVar8 * 2);
    }
  }
  plVar9[8] = param_3;
  *(undefined4 *)(plVar9 + 10) = 0;
  if (*(int *)((longlong)plVar9 + 0x54) != 4) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar9 + 9,4);
  }
  return plVar9;
}



// FUNCTION 141a85020 CreateSamplerInternal body=50 status=ok
// SIG undefined CreateSamplerInternal(void)

void FD3D12Device::CreateSamplerInternal(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)mu::Mesh::GetFaceBuffers();
                    /* WARNING: Could not recover jumptable at 0x000141a8504b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xb0))(plVar1,param_2,param_3);
  return;
}



// FUNCTION 141a85060 FUN_141a85060 body=45 status=ok
// SIG undefined FUN_141a85060(void)

undefined8 FUN_141a85060(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x630))();
  return param_2;
}



// FUNCTION 141a85090 FUN_141a85090 body=305 status=ok
// SIG undefined FUN_141a85090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_141a85090(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,uint param_5,
             uint param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  uint local_100;
  uint local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined4 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_c8 = (ulonglong)param_5;
  uStack_ac = 1;
  uStack_a8 = 0;
  local_70._0_4_ = 0;
  uStack_d0 = 0;
  uStack_bc = 0x10001;
  if ((param_6 >> 9 & 1) == 0) {
    local_70._0_4_ = 8;
  }
  local_d8 = 1;
  uStack_c0 = 1;
  uStack_b4 = 1;
  local_a0 = 1;
  uStack_98 = 0;
  uStack_94 = 0;
  local_90 = param_5;
  uStack_8c = 0;
  uStack_88 = 1;
  uStack_84 = 0x10001;
  local_80 = 0;
  uStack_7c = 1;
  uStack_78 = 0;
  uStack_74 = 1;
  if ((param_6 & 8) != 0) {
    local_70._0_4_ = (uint)local_70 | 4;
  }
  local_70 = CONCAT44(uStack_a4,(uint)local_70);
  local_e8 = 0;
  uVar2 = 4;
  if ((param_6 & 0x120) == 0) {
    uVar2 = param_4;
  }
  local_f0 = param_7;
  local_f8 = param_6;
  local_68[0] = 1;
  uStack_60 = 0;
  uStack_5c = 0;
  local_100 = param_5;
  local_58 = param_5;
  uStack_54 = 0;
  uStack_50 = 1;
  uStack_4c = 0x10001;
  local_48 = 0;
  uStack_44 = 1;
  uStack_40 = 0;
  uStack_3c = 1;
  local_38 = local_70;
  local_108 = param_4;
  lVar1 = FUN_141a45050(**(undefined8 **)(param_1 + 0x50),param_3,local_68,uVar2);
  if (*(char *)(lVar1 + 0xb8) != '\0') {
    *(undefined1 *)(lVar1 + 0x19) = 0;
  }
  *param_2 = lVar1 + 8;
  if (lVar1 + 8 != 0) {
    LOCK();
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a851d0 FUN_141a851d0 body=215 status=ok
// SIG undefined FUN_141a851d0(void)

undefined8 * FUN_141a851d0(undefined8 *param_1,ulonglong param_2,uint param_3)

{
  void *pvVar1;
  undefined4 uStack_44;
  uint uStack_14;
  
  *param_1 = CONCAT44(uStack_44,1);
  param_1[1] = 0;
  param_1[2] = param_2 & 0xffffffff;
  param_1[3] = 0x1000100000001;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 1;
  param_1[6] = (ulonglong)uStack_14 << 0x20;
  pvVar1 = ThreadLocalStoragePointer;
  if (((param_3 & 8) != 0) &&
     (*(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 4,
     *(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x38) < DAT_1469fd428))
  {
    _Init_thread_header(&DAT_1469fd428);
    if (DAT_1469fd428 == -1) {
      DAT_1469fd424 = DAT_1464c9c14 < 3;
      _Init_thread_footer(&DAT_1469fd428);
    }
  }
  if ((param_3 >> 9 & 1) == 0) {
    *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 8;
  }
  return param_1;
}



// FUNCTION 141a852b0 FUN_141a852b0 body=245 status=ok
// SIG undefined FUN_141a852b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_141a852b0(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined1 local_b8 [56];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  puVar1 = (undefined8 *)FUN_141a851d0(local_b8,param_4,param_5);
  local_c8 = 0;
  local_d0 = param_6;
  local_d8 = param_5;
  local_80 = *puVar1;
  uStack_78 = puVar1[1];
  local_e8 = 0;
  local_70 = puVar1[2];
  uStack_68 = puVar1[3];
  local_60 = *(undefined4 *)(puVar1 + 4);
  uStack_5c = *(undefined4 *)((longlong)puVar1 + 0x24);
  uStack_58 = *(undefined4 *)(puVar1 + 5);
  uStack_54 = *(undefined4 *)((longlong)puVar1 + 0x2c);
  local_50 = puVar1[6];
  local_e0 = param_4;
  lVar2 = FUN_141a452c0(**(undefined8 **)(param_1 + 0x50),param_3,&local_80,4);
  if (*(char *)(lVar2 + 0xb0) != '\0') {
    *(undefined1 *)(lVar2 + 0x19) = 0;
  }
  *param_2 = lVar2 + 8;
  if (lVar2 + 8 != 0) {
    LOCK();
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a853b0 FUN_141a853b0 body=174 status=ok
// SIG undefined FUN_141a853b0(void)

void FUN_141a853b0(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  undefined1 local_18 [16];
  
  *(longlong *)(param_1 + 0x28) = param_3;
  lVar1 = *(longlong *)(param_3 + 0x10);
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)(param_1 + 0x40) = *param_2;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 4);
  if (*(int *)(lVar1 + 0x30) == 4) {
    uVar9 = 1;
  }
  else {
    uVar9 = *(undefined2 *)(lVar1 + 0x4c);
  }
  puVar7 = (undefined4 *)
           FUN_141a82200(local_18,param_1 + 0x40,*(undefined1 *)(lVar1 + 0x4e),uVar9,
                         *(undefined4 *)(lVar1 + 0x50),*(undefined4 *)(param_1 + 0x20));
  uVar4 = puVar7[1];
  uVar5 = puVar7[2];
  uVar6 = puVar7[3];
  *(undefined4 *)(param_1 + 0x30) = *puVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  *(undefined4 *)(param_1 + 0x3c) = uVar6;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x18);
  uVar8 = mu::Mesh::GetFaceBuffers(*(undefined8 *)(param_1 + 8));
  FUN_1406aec20(uVar8,uVar3,param_1 + 0x40,uVar2);
  return;
}



// FUNCTION 141a85460 FUN_141a85460 body=174 status=ok
// SIG undefined FUN_141a85460(void)

void FUN_141a85460(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  undefined1 local_18 [16];
  
  *(longlong *)(param_1 + 0x28) = param_3;
  lVar1 = *(longlong *)(param_3 + 0x10);
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)(param_1 + 0x40) = *param_2;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 4);
  if (*(int *)(lVar1 + 0x30) == 4) {
    uVar9 = 1;
  }
  else {
    uVar9 = *(undefined2 *)(lVar1 + 0x4c);
  }
  puVar7 = (undefined4 *)
           FUN_141a65dc0(local_18,param_1 + 0x40,*(undefined1 *)(lVar1 + 0x4e),uVar9,
                         *(undefined4 *)(lVar1 + 0x50),*(undefined4 *)(param_1 + 0x20));
  uVar4 = puVar7[1];
  uVar5 = puVar7[2];
  uVar6 = puVar7[3];
  *(undefined4 *)(param_1 + 0x30) = *puVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  *(undefined4 *)(param_1 + 0x3c) = uVar6;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x18);
  uVar8 = mu::Mesh::GetFaceBuffers(*(undefined8 *)(param_1 + 8));
  FUN_141a4e9d0(uVar8,uVar3,param_1 + 0x40,uVar2);
  return;
}



// FUNCTION 141a85510 FUN_141a85510 body=209 status=ok
// SIG undefined FUN_141a85510(void)

void FUN_141a85510(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined1 local_18 [16];
  
  *(longlong *)(param_1 + 0x28) = param_3;
  uVar2 = param_2[1];
  lVar1 = *(longlong *)(param_3 + 0x10);
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 3);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  *(undefined4 *)(param_1 + 0x5c) = uVar6;
  *(undefined8 *)(param_1 + 0x60) = param_2[4];
  if (*(int *)(lVar1 + 0x30) == 4) {
    uVar9 = 1;
  }
  else {
    uVar9 = *(undefined2 *)(lVar1 + 0x4c);
  }
  puVar7 = (undefined4 *)
           FUN_141a65fc0(local_18,param_1 + 0x40,*(undefined1 *)(lVar1 + 0x4e),uVar9,
                         *(undefined4 *)(lVar1 + 0x50),*(undefined4 *)(param_1 + 0x20));
  uVar4 = puVar7[1];
  uVar5 = puVar7[2];
  uVar6 = puVar7[3];
  *(undefined4 *)(param_1 + 0x30) = *puVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  *(undefined4 *)(param_1 + 0x3c) = uVar6;
  uVar2 = *(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x18);
  uVar10 = 0;
  if (param_4 != 0) {
    uVar10 = *(undefined8 *)(param_4 + 0x18);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar8 = mu::Mesh::GetFaceBuffers(*(undefined8 *)(param_1 + 8));
  FUN_141a4e9c4(uVar8,uVar2,uVar10,param_1 + 0x40,uVar3);
  return;
}



// FUNCTION 141a855f0 FUN_141a855f0 body=9 status=ok
// SIG undefined FUN_141a855f0(void)

void FUN_141a855f0(longlong param_1)

{
  thunk_FUN_141a7bb70(param_1 + 0x18);
  return;
}



// FUNCTION 141a85600 FUN_141a85600 body=8 status=ok
// SIG undefined FUN_141a85600(void)

void FUN_141a85600(void)

{
  DAT_1469fd22d = 0;
  return;
}



// FUNCTION 141a85610 FUN_141a85610 body=220 status=ok
// SIG undefined FUN_141a85610(void)

longlong * FUN_141a85610(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  int iVar7;
  
  plVar6 = (longlong *)param_1[1];
  iVar7 = (int)param_1[2];
  plVar4 = plVar6;
  if (plVar6 == (longlong *)0x0) {
    plVar4 = param_1;
  }
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    lVar3 = *plVar4;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 0x60);
      uVar2 = *puVar1;
      plVar6 = (longlong *)(ulonglong)uVar2;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar2 == 1) {
        if ((*(char *)(lVar3 + 0x68) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')
            ))) {
          plVar6 = (longlong *)0x0;
          LOCK();
          uVar2 = *(uint *)(lVar3 + 100);
          if (uVar2 == 0) {
            *(uint *)(lVar3 + 100) = 1;
          }
          else {
            plVar6 = (longlong *)(ulonglong)uVar2;
          }
          UNLOCK();
          if (uVar2 == 0) {
            plVar6 = (longlong *)
                     TLockFreePointerListLIFOPad<FRHIResource,128>::Push
                               (&DAT_146ab6940,lVar3 + 0x58);
          }
        }
        else {
          plVar6 = (longlong *)(*(code *)**(undefined8 **)(lVar3 + 0x58))(lVar3 + 0x58,1);
        }
      }
    }
    plVar4 = plVar4 + 1;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x14) == param_2) {
    return plVar6;
  }
  plVar6 = (longlong *)FUN_1407eed70(param_1,param_2);
  return plVar6;
}



// FUNCTION 141a856f0 FUN_141a856f0 body=133 status=ok
// SIG undefined FUN_141a856f0(void)

void FUN_141a856f0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar2 = (longlong *)*param_1;
  for (iVar3 = *(int *)(param_1 + 1); iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = (undefined8 *)*plVar2;
    *puVar1 = &PTR_FUN_144da0c50;
    if (puVar1[1] != 0) {
      FMemory::Free();
    }
    FMemory::Free(*plVar2);
    plVar2 = plVar2 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 141a85780 FUN_141a85780 body=1772 status=ok
// SIG undefined FUN_141a85780(void)

void FUN_141a85780(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  bool bVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  LARGE_INTEGER local_res8;
  
  iVar6 = (int)param_1[4];
  if (1 < iVar6) {
    *(int *)(param_1 + 4) = iVar6 + -1;
    return;
  }
  if (iVar6 == 0) {
    AK::MemoryMgr::StartProfileThreadUsage(5);
    return;
  }
  uVar11 = 0;
  uVar13 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  cVar3 = FUN_14164b510();
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x20))(param_1);
    iVar6 = (int)param_1[8];
    while (0 < iVar6) {
      (**(code **)(*param_1 + 0x20))(param_1);
      iVar6 = (int)param_1[8];
    }
  }
  (**(code **)(param_1[0x20] + 0x10))(param_1 + 0x20,0,0);
  if (DAT_146ab6339 == '\0') {
    DAT_146b17160 = 0;
    iVar6 = 0;
  }
  else {
    lVar7 = FUN_141a74090(param_1 + 0x1a,0);
    dVar19 = (double)DAT_146ab6340;
    if (DAT_146ab6340 < 0) {
      dVar19 = dVar19 + 1.8446744073709552e+19;
    }
    dVar20 = (double)lVar7;
    if (lVar7 < 0) {
      dVar20 = dVar20 + 1.8446744073709552e+19;
    }
    local_res8.QuadPart = 0;
    DAT_146b17160 = (int)((dVar20 * (1.0 / dVar19)) / DAT_1468b02f8);
    cVar3 = (**(code **)(*param_2 + 0x750))(param_2,&local_res8);
    if (cVar3 == '\0') {
      iVar6 = DAT_146b17160;
      if (0 < (int)param_1[0x14]) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_1469fd3f0) &&
           (_Init_thread_header(&DAT_1469fd3f0), DAT_1469fd3f0 == -1)) {
          atexit((_func_5014 *)&LAB_143e86510);
          _Init_thread_footer(&DAT_1469fd3f0);
        }
        BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
        if (BVar4 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
        }
        uVar8 = uVar11;
        uVar9 = uVar11;
        if (0 < (int)param_1[0x14]) {
          do {
            plVar15 = *(longlong **)(uVar9 + param_1[0x13]);
            if (plVar15 == (longlong *)0x0) {
              plVar15 = (longlong *)&DAT_00000030;
            }
            cVar3 = (**(code **)(*plVar15 + 0x18))(plVar15);
            if (cVar3 == '\0') {
              (**(code **)(*plVar15 + 0x10))(plVar15,0,0);
            }
            uVar12 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar12;
            uVar9 = uVar9 + 8;
          } while ((int)uVar12 < (int)param_1[0x14]);
        }
        bVar17 = DAT_1469fd3ec != DAT_1469fd3e8;
        DAT_1469fd3e8 = 0;
        uVar8 = uVar11;
        if (bVar17) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_1469fd3e0);
          uVar8 = (ulonglong)DAT_1469fd3e8;
        }
        uVar9 = uVar11;
        uVar16 = uVar11;
        uVar12 = (uint)uVar8;
        if (0 < (int)param_1[0x16]) {
          do {
            uVar8 = *(longlong *)(uVar16 + param_1[0x15]) - 0x30;
            if (*(longlong *)(uVar16 + param_1[0x15]) == 0) {
              uVar8 = uVar11;
            }
            cVar3 = (**(code **)(*(longlong *)(uVar8 + 0x30) + 0x18))(uVar8 + 0x30);
            if (cVar3 != '\0') {
              uVar10 = FUN_141a74090(uVar8,1);
              uVar12 = DAT_1469fd3e8;
              lVar7 = (longlong)(int)DAT_1469fd3e8;
              DAT_1469fd3e8 = DAT_1469fd3e8 + 1;
              if ((int)DAT_1469fd3ec < (int)DAT_1469fd3e8) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (&DAT_1469fd3e0,uVar12);
              }
              *(undefined8 *)(DAT_1469fd3e0 + lVar7 * 8) = uVar10;
            }
            uVar14 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar14;
            uVar16 = uVar16 + 8;
            uVar12 = DAT_1469fd3e8;
          } while ((int)uVar14 < (int)param_1[0x16]);
        }
        uVar8 = uVar11;
        if (0 < (int)uVar12) {
          if (3 < uVar12) {
            lVar7 = 0;
            lVar22 = 0;
            lVar21 = 0;
            lVar23 = 0;
            uVar14 = uVar12 & 0x80000003;
            if ((int)uVar14 < 0) {
              uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
            }
            uVar9 = uVar11;
            do {
              plVar15 = (longlong *)(DAT_1469fd3e0 + uVar8 * 8);
              uVar13 = (int)uVar9 + 4;
              uVar9 = (ulonglong)uVar13;
              lVar7 = *plVar15 + lVar7;
              lVar22 = plVar15[1] + lVar22;
              plVar15 = (longlong *)(DAT_1469fd3e0 + 0x10 + uVar8 * 8);
              uVar8 = uVar8 + 4;
              lVar21 = *plVar15 + lVar21;
              lVar23 = plVar15[1] + lVar23;
            } while ((longlong)uVar8 < (longlong)(int)(uVar12 - uVar14));
            uVar8 = lVar7 + lVar21 + lVar22 + lVar23;
          }
          if ((int)uVar13 < (int)uVar12) {
            uVar9 = (ulonglong)(uVar12 - uVar13);
            plVar15 = (longlong *)(DAT_1469fd3e0 + (longlong)(int)uVar13 * 8);
            do {
              uVar8 = uVar8 + *plVar15;
              plVar15 = plVar15 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
        }
        plVar15 = param_1 + 0x15;
        *(undefined4 *)(param_1 + 0x16) = 0;
        if (*(int *)((longlong)param_1 + 0xb4) != (int)param_1[0x14]) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(plVar15);
        }
        iVar6 = (int)param_1[0x14];
        if (iVar6 != 0) {
          iVar5 = (int)param_1[0x16];
          if (*(int *)((longlong)param_1 + 0xb4) < iVar5 + iVar6) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(plVar15);
            iVar5 = (int)param_1[0x16];
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar15 + (longlong)iVar5 * 8),(void *)param_1[0x13],
                     (longlong)iVar6 << 3);
          *(int *)(param_1 + 0x16) = (int)param_1[0x16] + iVar6;
        }
        *(undefined4 *)(param_1 + 0x14) = 0;
        if (*(int *)((longlong)param_1 + 0xa4) != (int)param_1[0x16]) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x13);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
        dVar20 = (double)(longlong)uVar8;
        if ((longlong)uVar8 < 0) {
          dVar20 = dVar20 + 1.8446744073709552e+19;
        }
        iVar6 = (int)((dVar20 * (1.0 / dVar19)) / DAT_1468b02f8);
      }
    }
    else {
      iVar6 = (int)(longlong)(double)local_res8;
    }
  }
  DAT_146b17164 = iVar6;
  FUN_1415b2020(DAT_146b17160,iVar6,0);
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  (**(code **)(*param_1 + 0x30))(param_1);
  dVar19 = DAT_1464c11d8;
  if (*(char *)((longlong)param_1 + 10) == '\0') {
    if (*(char *)((longlong)param_1 + 0xb) != '\0') {
      QueryPerformanceCounter(&local_res8);
      dVar19 = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
      if ((char)param_1[1] != '\0') {
        fVar18 = (float)FUN_141ec77a0();
        if ((((float)(dVar19 - DAT_1464c11d8) <= fVar18) || (DAT_1464c11d8 <= 0.0)) ||
           (lVar7 = param_1[6], lVar7 == 0)) {
          lVar7 = param_1[6];
          if (lVar7 != 0) {
            if (3 < (int)param_1[0x2c]) {
              plVar15 = param_1 + 0x2b;
              plVar1 = (longlong *)*plVar15;
              puVar2 = (undefined8 *)*plVar1;
              *puVar2 = &PTR_FUN_144da0c50;
              if (puVar2[1] != 0) {
                FMemory::Free();
              }
              FMemory::Free(*plVar1);
              iVar6 = (int)param_1[0x2c];
              if (iVar6 + -1 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)*plVar15,(void *)(*plVar15 + 8),(longlong)(iVar6 + -1) << 3);
                iVar6 = (int)param_1[0x2c];
              }
              *(int *)(param_1 + 0x2c) = iVar6 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar15);
              lVar7 = param_1[6];
            }
            iVar6 = (int)param_1[0x2c];
            *(int *)(param_1 + 0x2c) = iVar6 + 1;
            if (*(int *)((longlong)param_1 + 0x164) < iVar6 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0x2b,iVar6);
            }
            *(longlong *)(param_1[0x2b] + (longlong)iVar6 * 8) = lVar7;
            param_1[6] = 0;
          }
        }
        else {
          uVar8 = uVar11;
          if (0 < (int)param_1[0x2c]) {
            do {
              FUN_141ec0990(*(undefined8 *)(param_1[0x2b] + uVar11));
              uVar13 = (int)uVar8 + 1;
              uVar11 = uVar11 + 8;
              uVar8 = (ulonglong)uVar13;
            } while ((int)uVar13 < (int)param_1[0x2c]);
            lVar7 = param_1[6];
          }
          FUN_141ec0990(lVar7);
          if (*(longlong *)(DAT_146b17150 + 0x7b0) != 0) {
            lVar7 = *(longlong *)(DAT_146b17150 + 0x7b0);
            lVar21 = *(longlong *)(lVar7 + 0x48);
            uVar10 = FUN_141672640();
            (**(code **)(lVar21 + 8))(lVar7 + 0x48,0,L"SCREENSHOT",uVar10);
          }
          *(undefined4 *)((longlong)param_1 + 0x1c) = 5;
          FUN_141a856f0(param_1 + 0x2b,0);
        }
      }
    }
  }
  else if ((char)param_1[1] != '\0') {
    SetEmitDrawEvents(*(undefined1 *)((longlong)param_1 + 0xd));
    FUN_141ec0990(param_1[6]);
    DAT_146ab62fc = 0;
    *(undefined1 *)((longlong)param_1 + 10) = 0;
    cVar3 = FUN_141ed7b80();
    dVar19 = DAT_1464c11d8;
    if ((cVar3 != '\0') && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) {
      lVar7 = *(longlong *)(DAT_146b17150 + 0x7b0);
      lVar21 = *(longlong *)(lVar7 + 0x48);
      uVar10 = FUN_141672640();
      (**(code **)(lVar21 + 8))(lVar7 + 0x48,0,L"SCREENSHOT",uVar10);
      dVar19 = DAT_1464c11d8;
    }
  }
  DAT_1464c11d8 = dVar19;
  FUN_1415b23e0(DAT_146ab632c,DAT_146ab632c,0);
  FUN_141ec2500(param_1);
  return;
}



// FUNCTION 141a85e70 FUN_141a85e70 body=552 status=ok
// SIG undefined FUN_141a85e70(void)

void FUN_141a85e70(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  
  lVar4 = *param_2;
  if ((char)param_2[10] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000141a85e96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x788))(param_1,param_2,param_2 + 9);
    return;
  }
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_70 = (undefined4)param_2[5];
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar7 = *(longlong *)(lVar4 + 0x80);
  uStack_78 = (&DAT_1464ca1cc)[(longlong)*(int *)(lVar4 + 0x3c) * 10];
  uStack_68 = (undefined4)param_2[6];
  uVar5 = *(undefined8 *)(param_2[9] + 0x48);
  lVar4 = *(longlong *)(lVar4 + 0x98);
  lVar6 = **(longlong **)(lVar7 + 0x5d8);
  local_b0 = (undefined4)uVar5;
  uStack_ac = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_60 = *(undefined8 *)(lVar4 + 0x18);
  local_58 = 0;
  local_88 = 1;
  local_80 = local_b0;
  uStack_7c = uStack_ac;
  local_90 = *(undefined8 *)(*(longlong *)(param_2[9] + 0x10) + 0x18);
  uStack_64 = 0;
  uVar2 = (undefined4)param_2[1];
  uVar3 = *(undefined4 *)(lVar4 + 0xa8);
  local_50 = uVar2;
  FUN_141a4f5b0(lVar6 + 0x460,lVar4,uVar3,0x400,uVar2);
  piVar1 = (int *)(**(longlong **)(lVar7 + 0x5d8) + 0x2c54);
  *piVar1 = *piVar1 + 1;
  lVar7 = *(longlong *)(lVar6 + 0x468);
  if (*(int *)(lVar7 + 0x100) != 0) {
    (**(code **)(**(longlong **)(lVar7 + 0x28) + 0xd0))
              (*(longlong **)(lVar7 + 0x28),*(int *)(lVar7 + 0x100),*(undefined8 *)(lVar7 + 0xf8));
    *(undefined4 *)(lVar7 + 0x100) = 0;
    lVar7 = *(longlong *)(lVar6 + 0x468);
  }
  (**(code **)(**(longlong **)(lVar7 + 0x28) + 0x80))
            (*(longlong **)(lVar7 + 0x28),&local_60,*(undefined4 *)((longlong)param_2 + 0xc),
             (int)param_2[2],*(undefined4 *)((longlong)param_2 + 0x14),&local_90,0);
  FUN_141a4f5b0(lVar6 + 0x460,lVar4,0x400,uVar3,uVar2);
  lVar4 = param_2[9];
  if (lVar4 != 0) {
    thunk_FUN_141a7bb70(lVar4);
    FMemory::operator_delete(lVar4,0x80);
  }
  return;
}



// FUNCTION 141a860a0 EndUpdateTexture3D_RenderThread body=98 status=ok
// SIG undefined EndUpdateTexture3D_RenderThread(void)

void FD3D12DynamicRHI::EndUpdateTexture3D_RenderThread
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_141ed7f80(param_2);
    if (cVar1 != '\0') {
      lVar2 = param_2;
    }
  }
  FUN_141a85e70(param_1,param_3);
  if (lVar2 != 0) {
    FRHICommandListImmediate::UnStallRHIThread(lVar2);
  }
  return;
}



// FUNCTION 141a86110 FUN_141a86110 body=198 status=ok
// SIG undefined FUN_141a86110(void)

void FUN_141a86110(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  uint local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x20);
  local_30 = 0x1688;
  local_18 = 0;
  uVar1 = *(uint *)(lVar2 + 0x20);
  local_34 = 1;
  if ((*(byte *)(lVar2 + 0x24) & 0x20) == 0) {
    local_38 = FUN_141a2ea30((&DAT_1464ca1cc)[(ulonglong)*(byte *)(param_1 + 0x24) * 10]);
    local_20 = uVar1 / uVar3;
  }
  else {
    local_20 = uVar1 >> 2;
    uVar3 = 4;
    local_38 = 0x27;
    local_18 = 1;
  }
  local_28 = *(ulonglong *)(lVar2 + 0x80) / (ulonglong)uVar3;
  local_1c = 0;
  FUN_141a75120(*(undefined8 *)(param_1 + 0x18),&local_38,lVar2 + 0x38,uVar3);
  return;
}



// FUNCTION 141a861f0 FUN_141a861f0 body=135 status=ok
// SIG undefined FUN_141a861f0(void)

void FUN_141a861f0(undefined8 *param_1)

{
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = *(undefined4 *)(param_1 + 0x1b);
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0xdc);
  uStack_20 = *(undefined4 *)(param_1 + 0x1c);
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0xe4);
  local_18 = *(undefined4 *)(param_1 + 0x1d);
  uStack_14 = *(undefined4 *)((longlong)param_1 + 0xec);
  uStack_10 = *(undefined4 *)(param_1 + 0x1e);
  uStack_c = *(undefined4 *)((longlong)param_1 + 0xf4);
  local_38 = *(undefined8 *)(param_1[0xd] + 0x18);
  local_30 = 1;
  FUN_141a93960(param_1[2],param_1 + 3,*(undefined4 *)(param_1 + 9),
                *(undefined4 *)((longlong)param_1 + 0x4c),*(undefined4 *)(param_1 + 10),&local_38);
  *param_1 = &PTR_FUN_144db42f8;
  (**(code **)(*(longlong *)param_1[3] + 0x10))();
  thunk_FUN_141a7bb70(param_1 + 0xb);
  return;
}



// FUNCTION 141a86280 FUN_141a86280 body=2902 status=ok
// SIG undefined FUN_141a86280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a86280(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  wint_t *pwVar14;
  char cVar15;
  wint_t wVar16;
  wint_t wVar17;
  int iVar18;
  int iVar19;
  longlong *plVar20;
  int *piVar21;
  longlong lVar22;
  undefined8 uVar23;
  int *piVar24;
  longlong *plVar25;
  wint_t *pwVar26;
  int *piVar27;
  int *piVar28;
  undefined8 *puVar29;
  uint uVar30;
  longlong *plVar31;
  int iVar32;
  undefined8 *puVar33;
  int iVar34;
  uint uVar35;
  undefined8 *puVar36;
  bool bVar37;
  bool bVar38;
  undefined1 auStack_5f8 [32];
  undefined8 local_5d8;
  undefined8 *local_5d0;
  char local_5c8;
  undefined1 local_5c7 [3];
  int local_5c4;
  longlong *local_5c0;
  longlong *local_5b8;
  uint local_5b0;
  uint local_5ac;
  longlong *local_5a8;
  undefined4 local_5a0;
  undefined4 local_59c;
  longlong *local_598;
  longlong *local_590;
  longlong local_588;
  undefined8 *local_580;
  undefined8 local_578;
  longlong *local_570;
  longlong *local_568;
  longlong *local_560;
  longlong *local_558;
  longlong *local_550;
  longlong *local_548;
  undefined8 local_540;
  undefined8 local_538;
  int *local_530;
  int local_528;
  undefined4 uStack_524;
  undefined8 auStack_520 [38];
  undefined4 local_3f0;
  int local_3e8;
  int iStack_3e4;
  undefined4 local_2b0;
  int local_2a8;
  int iStack_2a4;
  undefined4 local_170;
  wint_t local_168 [128];
  int local_68;
  int *local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_5f8;
  puVar29 = (undefined8 *)0x0;
  local_590 = (longlong *)0x0;
  local_588 = param_1;
  SafeCreateDXGIFactory(&local_590);
  if (local_590 != (longlong *)0x0) {
    plVar31 = (longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              );
    local_598 = plVar31;
    if ((*(int *)plVar31 < DAT_146850178) &&
       (_Init_thread_header(&DAT_146850178), DAT_146850178 == -1)) {
      FName::FName(&DAT_146850170,&DAT_143f3ef90,1);
      _Init_thread_footer(&DAT_146850178);
    }
    uVar23 = DAT_146850170;
    plVar20 = (longlong *)FUN_141593110();
    piVar21 = (int *)(**(code **)(*plVar20 + 8))(plVar20,uVar23);
    if ((int)piVar21 < 1) {
      local_5c0 = (longlong *)0x0;
    }
    else {
      if ((*(int *)plVar31 < DAT_146850178) &&
         (_Init_thread_header(&DAT_146850178), DAT_146850178 == -1)) {
        FName::FName(&DAT_146850170,&DAT_143f3ef90,1);
        _Init_thread_footer(&DAT_146850178);
      }
      uVar23 = DAT_146850170;
      plVar31 = (longlong *)FUN_141593110();
      local_580 = (undefined8 *)0x0;
      local_578 = 0;
      uVar30 = 0;
      local_5c4 = (**(code **)(*plVar31 + 8))(plVar31,uVar23);
      puVar33 = puVar29;
      puVar36 = puVar29;
      if (0 < local_5c4) {
        do {
          lVar22 = (**(code **)(*plVar31 + 0x10))(plVar31,uVar23,puVar36);
          if (lVar22 == 0) {
            lVar22 = 0;
          }
          else {
            lVar22 = lVar22 + -8;
          }
          iVar32 = (int)puVar29;
          uVar30 = iVar32 + 1;
          local_578 = CONCAT44(local_578._4_4_,uVar30);
          if (local_578._4_4_ < (int)uVar30) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_580,puVar29);
            puVar33 = local_580;
            uVar30 = (uint)local_578;
          }
          puVar29 = (undefined8 *)(ulonglong)uVar30;
          uVar35 = (int)puVar36 + 1;
          puVar33[iVar32] = lVar22;
          puVar36 = (undefined8 *)(ulonglong)uVar35;
        } while ((int)uVar35 < local_5c4);
      }
      AlgoImpl::
      IntroSortInternal<IHeadMountedDisplayModule_*,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_>
                (puVar33,(longlong)(int)uVar30,local_5c7[0],local_5c7);
      plVar31 = (longlong *)*puVar33;
      FMemory::Free(puVar33);
      piVar21 = (int *)(**(code **)(*plVar31 + 0x60))(plVar31);
      plVar31 = local_598;
      local_5c0 = (longlong *)piVar21;
    }
    iVar32 = 0;
    if (local_5c0 == (longlong *)0x0) {
      iVar19 = *DAT_1469fd398;
      piVar21 = DAT_1469fd398;
    }
    else {
      iVar19 = -2;
    }
    local_5b0 = (uint)piVar21 & 0xffffff00;
    local_5a8 = (longlong *)0x0;
    local_3e8 = -1;
    iStack_3e4 = 0;
    local_2b0 = 0;
    local_2a8 = -1;
    iStack_2a4 = 0;
    local_170 = 0;
    local_5c4 = iVar19;
    local_5ac = local_5b0;
    local_530 = (int *)local_5c0;
    if (((int)*plVar31 < DAT_1469fd3c0) &&
       (_Init_thread_header(&DAT_1469fd3c0), DAT_1469fd3c0 == -1)) {
      uVar23 = FCommandLine::Get();
      DAT_1469fd3bc = FParse::Param(uVar23,L"warp");
      _Init_thread_footer(&DAT_1469fd3c0);
    }
    local_5c8 = DAT_1469fd3bc;
    uVar23 = FCommandLine::Get();
    cVar15 = FParse::Param(uVar23,L"preferAMD");
    if (cVar15 == '\0') {
      uVar23 = FCommandLine::Get();
      cVar15 = FParse::Param(uVar23,L"preferIntel");
      if (cVar15 == '\0') {
        uVar23 = FCommandLine::Get();
        cVar15 = FParse::Param(uVar23,L"preferNvidia");
        iVar34 = -1;
        uVar30 = local_5ac;
        if (cVar15 != '\0') {
          iVar34 = 0x10de;
        }
      }
      else {
        iVar34 = 0x8086;
        uVar30 = local_5ac;
      }
    }
    else {
      iVar34 = 0x1002;
      uVar30 = local_5ac;
    }
LAB_141a86510:
    plVar20 = local_590;
    plVar31 = local_5a8;
    plVar25 = (longlong *)0x0;
    local_5a8 = (longlong *)0x0;
    if (plVar31 != (longlong *)0x0) {
      (**(code **)(*plVar31 + 0x10))();
    }
    iVar18 = (**(code **)(*plVar20 + 0x38))(plVar20,iVar32,&local_5a8);
    if (iVar18 != -0x7785fffe) {
      if (local_5a8 != (longlong *)0x0) {
        local_5a0 = 0;
        local_59c = 0;
        cVar15 = SafeTestD3D12CreateDevice(local_5a8,0xb000,&local_5a0,&local_59c);
        if (cVar15 != '\0') {
          iVar19 = (**(code **)(*local_5a8 + 0x40))(local_5a8,local_168);
          if (iVar19 < 0) {
            local_5d0 = &local_540;
            local_540 = 0;
            local_538 = 0;
            local_5d8 = 0;
            FUN_141a94000(iVar19,"TempAdapter->GetDesc(&AdapterDesc)",
                          "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
                          ,0x134);
          }
          while( true ) {
            local_598 = (longlong *)0x0;
            iVar19 = (**(code **)(*local_5a8 + 0x38))(local_5a8,plVar25);
            if (iVar19 < 0) break;
            plVar25 = (longlong *)(ulonglong)((int)plVar25 + 1);
            if (local_598 != (longlong *)0x0) {
              (**(code **)(*local_598 + 0x10))();
            }
          }
          if (local_598 != (longlong *)0x0) {
            (**(code **)(*local_598 + 0x10))();
          }
          bVar37 = local_68 == 0x8086;
          uVar30 = uVar30 & 0xff;
          bVar38 = local_68 == 0x1414;
          local_5b0 = local_5b0 & 0xff;
          if (local_68 == 0x1002) {
            local_5b0 = 1;
          }
          if (local_68 == 0x10de) {
            uVar30 = 1;
          }
          lVar22 = 0;
          do {
            wVar16 = *(wint_t *)((longlong)local_168 + lVar22);
            if ((wVar16 == 0) && (*(short *)((longlong)&DAT_144dafdf0 + lVar22) == 0)) {
              iVar18 = 0;
              goto LAB_141a866ab;
            }
            if (wVar16 != *(wint_t *)((longlong)&DAT_144dafdf0 + lVar22)) {
              wVar16 = towlower(wVar16);
              wVar17 = towlower(*(wint_t *)((longlong)&DAT_144dafdf0 + lVar22));
              if (wVar16 != wVar17) goto LAB_141a8669a;
            }
            lVar22 = lVar22 + 2;
          } while( true );
        }
      }
      goto LAB_141a86a04;
    }
    local_5b8 = (longlong *)0x0;
    local_5ac = uVar30;
    if ((iVar19 == -1) &&
       (((char)local_5b0 != '\0' || (local_5ac._0_1_ = (char)uVar30, (char)local_5ac != '\0')))) {
      if ((iStack_3e4 == 0) || (local_3e8 < 0)) {
        lVar22 = operator_new(0xe10);
        plVar31 = plVar25;
        if (lVar22 != 0) {
          plVar31 = (longlong *)FUN_141a4acb0(lVar22,&local_2a8);
        }
        local_560 = plVar31;
        plVar20 = (longlong *)operator_new(0x18);
        if (plVar20 != (longlong *)0x0) {
          *(undefined4 *)(plVar20 + 1) = 1;
          *plVar20 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plVar20 + 0xc) = 1;
          plVar20[2] = (longlong)plVar31;
          plVar25 = plVar20;
        }
        local_558 = plVar25;
        SharedPointerInternals::EnableSharedFromThis(&local_560,plVar31,plVar31);
        local_5c0 = local_560;
        local_560 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_5b8,&local_558);
        plVar31 = local_558;
      }
      else {
        lVar22 = operator_new(0xe10);
        plVar31 = plVar25;
        if (lVar22 != 0) {
          plVar31 = (longlong *)FUN_141a4acb0(lVar22,&local_3e8);
        }
        local_570 = plVar31;
        plVar20 = (longlong *)operator_new(0x18);
        if (plVar20 != (longlong *)0x0) {
          *(undefined4 *)(plVar20 + 1) = 1;
          *plVar20 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plVar20 + 0xc) = 1;
          plVar20[2] = (longlong)plVar31;
          plVar25 = plVar20;
        }
        local_568 = plVar25;
        SharedPointerInternals::EnableSharedFromThis(&local_570,plVar31,plVar31);
        local_5c0 = local_570;
        local_570 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_5b8,&local_568);
        plVar31 = local_568;
      }
    }
    else {
      lVar22 = operator_new(0xe10);
      plVar31 = plVar25;
      if (lVar22 != 0) {
        plVar31 = (longlong *)FUN_141a4acb0(lVar22,&local_2a8);
      }
      local_550 = plVar31;
      plVar20 = (longlong *)operator_new(0x18);
      if (plVar20 != (longlong *)0x0) {
        *(undefined4 *)(plVar20 + 1) = 1;
        *plVar20 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plVar20 + 0xc) = 1;
        plVar20[2] = (longlong)plVar31;
        plVar25 = plVar20;
      }
      local_548 = plVar25;
      SharedPointerInternals::EnableSharedFromThis(&local_550,plVar31,plVar31);
      local_5c0 = local_550;
      local_550 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_5b8,&local_548);
      plVar31 = local_548;
    }
    if (plVar31 != (longlong *)0x0) {
      LOCK();
      plVar20 = plVar31 + 1;
      lVar22 = *plVar20;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)lVar22 == 1) {
        (**(code **)*plVar31)(plVar31);
        LOCK();
        piVar21 = (int *)((longlong)plVar31 + 0xc);
        iVar32 = *piVar21;
        *piVar21 = *piVar21 + -1;
        UNLOCK();
        if (iVar32 == 1) {
          (**(code **)(*plVar31 + 8))(plVar31,1);
        }
      }
    }
    lVar22 = local_588;
    iVar32 = *(int *)(local_588 + 0x18);
    *(int *)(local_588 + 0x18) = iVar32 + 1;
    if (*(int *)(local_588 + 0x1c) < iVar32 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_588 + 0x10,iVar32);
    }
    plVar31 = local_5b8;
    puVar29 = (undefined8 *)((longlong)iVar32 * 0x10 + *(longlong *)(lVar22 + 0x10));
    *puVar29 = local_5c0;
    puVar29[1] = local_5b8;
    if (local_5b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_5b8 + 1) = (int)local_5b8[1] + 1;
      UNLOCK();
      LOCK();
      plVar20 = local_5b8 + 1;
      lVar22 = *plVar20;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)lVar22 == 1) {
        (**(code **)*local_5b8)(local_5b8);
        LOCK();
        piVar21 = (int *)((longlong)plVar31 + 0xc);
        iVar32 = *piVar21;
        *piVar21 = *piVar21 + -1;
        UNLOCK();
        if (iVar32 == 1) {
          (**(code **)(*plVar31 + 8))(plVar31,1);
        }
      }
    }
    if (local_5a8 != (longlong *)0x0) {
      (**(code **)(*local_5a8 + 0x10))();
    }
    if (local_590 != (longlong *)0x0) {
      (**(code **)(*local_590 + 0x10))();
    }
  }
  return;
LAB_141a8669a:
  iVar18 = (uint)wVar16 - (uint)wVar17;
LAB_141a866ab:
  uStack_524 = local_5a0;
  lVar22 = 2;
  local_528 = iVar32;
  puVar29 = auStack_520;
  pwVar14 = local_168;
  do {
    pwVar26 = pwVar14;
    puVar33 = puVar29;
    uVar23 = *(undefined8 *)(pwVar26 + 4);
    uVar9 = *(undefined8 *)(pwVar26 + 8);
    uVar10 = *(undefined8 *)(pwVar26 + 0xc);
    *puVar33 = *(undefined8 *)pwVar26;
    puVar33[1] = uVar23;
    uVar23 = *(undefined8 *)(pwVar26 + 0x10);
    uVar11 = *(undefined8 *)(pwVar26 + 0x14);
    puVar33[2] = uVar9;
    puVar33[3] = uVar10;
    uVar9 = *(undefined8 *)(pwVar26 + 0x18);
    uVar10 = *(undefined8 *)(pwVar26 + 0x1c);
    puVar33[4] = uVar23;
    puVar33[5] = uVar11;
    uVar23 = *(undefined8 *)(pwVar26 + 0x20);
    uVar11 = *(undefined8 *)(pwVar26 + 0x24);
    puVar33[6] = uVar9;
    puVar33[7] = uVar10;
    uVar9 = *(undefined8 *)(pwVar26 + 0x28);
    uVar10 = *(undefined8 *)(pwVar26 + 0x2c);
    puVar33[8] = uVar23;
    puVar33[9] = uVar11;
    uVar23 = *(undefined8 *)(pwVar26 + 0x30);
    uVar11 = *(undefined8 *)(pwVar26 + 0x34);
    puVar33[10] = uVar9;
    puVar33[0xb] = uVar10;
    uVar9 = *(undefined8 *)(pwVar26 + 0x38);
    uVar10 = *(undefined8 *)(pwVar26 + 0x3c);
    puVar33[0xc] = uVar23;
    puVar33[0xd] = uVar11;
    puVar33[0xe] = uVar9;
    puVar33[0xf] = uVar10;
    lVar22 = lVar22 + -1;
    puVar29 = puVar33 + 0x10;
    pwVar14 = pwVar26 + 0x40;
  } while (lVar22 != 0);
  uVar23 = *(undefined8 *)(pwVar26 + 0x44);
  uVar9 = *(undefined8 *)(pwVar26 + 0x48);
  uVar10 = *(undefined8 *)(pwVar26 + 0x4c);
  puVar33[0x10] = *(undefined8 *)(pwVar26 + 0x40);
  puVar33[0x11] = uVar23;
  uVar1 = *(undefined4 *)(pwVar26 + 0x50);
  uVar2 = *(undefined4 *)(pwVar26 + 0x52);
  uVar3 = *(undefined4 *)(pwVar26 + 0x54);
  uVar4 = *(undefined4 *)(pwVar26 + 0x56);
  puVar33[0x12] = uVar9;
  puVar33[0x13] = uVar10;
  *(undefined4 *)(puVar33 + 0x14) = uVar1;
  *(undefined4 *)((longlong)puVar33 + 0xa4) = uVar2;
  *(undefined4 *)(puVar33 + 0x15) = uVar3;
  *(undefined4 *)((longlong)puVar33 + 0xac) = uVar4;
  iVar8 = local_68;
  local_3f0 = local_59c;
  if ((local_5c8 == '\0') || (bVar38)) {
    bVar38 = false;
  }
  else {
    bVar38 = true;
  }
  if ((local_5c0 == (longlong *)0x0) || (local_5c0 == (longlong *)local_40)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if ((local_5c4 < 0) || (iVar32 == local_5c4)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  iVar19 = local_5c4;
  if ((((bVar38) || (iVar18 == 0)) || (bVar12)) || (bVar13)) goto LAB_141a86a04;
  if ((bVar37) || ((iStack_3e4 != 0 && (-1 < local_3e8)))) {
    if ((iVar34 == local_68) && ((iStack_3e4 != 0 && (-1 < local_3e8)))) {
      lVar22 = 2;
      piVar21 = &local_3e8;
      piVar27 = &local_528;
      do {
        piVar24 = piVar21 + 0x20;
        uVar23 = *(undefined8 *)(piVar27 + 2);
        uVar9 = *(undefined8 *)(piVar27 + 4);
        uVar10 = *(undefined8 *)(piVar27 + 6);
        piVar28 = piVar27 + 0x20;
        *(undefined8 *)piVar21 = *(undefined8 *)piVar27;
        *(undefined8 *)(piVar21 + 2) = uVar23;
        uVar23 = *(undefined8 *)(piVar27 + 8);
        uVar11 = *(undefined8 *)(piVar27 + 10);
        *(undefined8 *)(piVar21 + 4) = uVar9;
        *(undefined8 *)(piVar21 + 6) = uVar10;
        uVar9 = *(undefined8 *)(piVar27 + 0xc);
        uVar10 = *(undefined8 *)(piVar27 + 0xe);
        *(undefined8 *)(piVar21 + 8) = uVar23;
        *(undefined8 *)(piVar21 + 10) = uVar11;
        uVar23 = *(undefined8 *)(piVar27 + 0x10);
        uVar11 = *(undefined8 *)(piVar27 + 0x12);
        *(undefined8 *)(piVar21 + 0xc) = uVar9;
        *(undefined8 *)(piVar21 + 0xe) = uVar10;
        uVar9 = *(undefined8 *)(piVar27 + 0x14);
        uVar10 = *(undefined8 *)(piVar27 + 0x16);
        *(undefined8 *)(piVar21 + 0x10) = uVar23;
        *(undefined8 *)(piVar21 + 0x12) = uVar11;
        uVar23 = *(undefined8 *)(piVar27 + 0x18);
        uVar11 = *(undefined8 *)(piVar27 + 0x1a);
        *(undefined8 *)(piVar21 + 0x14) = uVar9;
        *(undefined8 *)(piVar21 + 0x16) = uVar10;
        uVar9 = *(undefined8 *)(piVar27 + 0x1c);
        uVar10 = *(undefined8 *)(piVar27 + 0x1e);
        *(undefined8 *)(piVar21 + 0x18) = uVar23;
        *(undefined8 *)(piVar21 + 0x1a) = uVar11;
        *(undefined8 *)(piVar21 + 0x1c) = uVar9;
        *(undefined8 *)(piVar21 + 0x1e) = uVar10;
        lVar22 = lVar22 + -1;
        piVar21 = piVar24;
        piVar27 = piVar28;
      } while (lVar22 != 0);
      goto LAB_141a868b3;
    }
  }
  else {
    lVar22 = 2;
    piVar21 = &local_3e8;
    piVar27 = &local_528;
    do {
      piVar24 = piVar21 + 0x20;
      uVar23 = *(undefined8 *)(piVar27 + 2);
      uVar9 = *(undefined8 *)(piVar27 + 4);
      uVar10 = *(undefined8 *)(piVar27 + 6);
      piVar28 = piVar27 + 0x20;
      *(undefined8 *)piVar21 = *(undefined8 *)piVar27;
      *(undefined8 *)(piVar21 + 2) = uVar23;
      uVar23 = *(undefined8 *)(piVar27 + 8);
      uVar11 = *(undefined8 *)(piVar27 + 10);
      *(undefined8 *)(piVar21 + 4) = uVar9;
      *(undefined8 *)(piVar21 + 6) = uVar10;
      uVar9 = *(undefined8 *)(piVar27 + 0xc);
      uVar10 = *(undefined8 *)(piVar27 + 0xe);
      *(undefined8 *)(piVar21 + 8) = uVar23;
      *(undefined8 *)(piVar21 + 10) = uVar11;
      uVar23 = *(undefined8 *)(piVar27 + 0x10);
      uVar11 = *(undefined8 *)(piVar27 + 0x12);
      *(undefined8 *)(piVar21 + 0xc) = uVar9;
      *(undefined8 *)(piVar21 + 0xe) = uVar10;
      uVar9 = *(undefined8 *)(piVar27 + 0x14);
      uVar10 = *(undefined8 *)(piVar27 + 0x16);
      *(undefined8 *)(piVar21 + 0x10) = uVar23;
      *(undefined8 *)(piVar21 + 0x12) = uVar11;
      uVar23 = *(undefined8 *)(piVar27 + 0x18);
      uVar11 = *(undefined8 *)(piVar27 + 0x1a);
      *(undefined8 *)(piVar21 + 0x14) = uVar9;
      *(undefined8 *)(piVar21 + 0x16) = uVar10;
      uVar9 = *(undefined8 *)(piVar27 + 0x1c);
      uVar10 = *(undefined8 *)(piVar27 + 0x1e);
      *(undefined8 *)(piVar21 + 0x18) = uVar23;
      *(undefined8 *)(piVar21 + 0x1a) = uVar11;
      *(undefined8 *)(piVar21 + 0x1c) = uVar9;
      *(undefined8 *)(piVar21 + 0x1e) = uVar10;
      lVar22 = lVar22 + -1;
      piVar21 = piVar24;
      piVar27 = piVar28;
    } while (lVar22 != 0);
LAB_141a868b3:
    uVar23 = *(undefined8 *)(piVar28 + 2);
    uVar9 = *(undefined8 *)(piVar28 + 4);
    uVar10 = *(undefined8 *)(piVar28 + 6);
    *(undefined8 *)piVar24 = *(undefined8 *)piVar28;
    *(undefined8 *)(piVar24 + 2) = uVar23;
    iVar18 = piVar28[8];
    iVar5 = piVar28[9];
    iVar6 = piVar28[10];
    iVar7 = piVar28[0xb];
    *(undefined8 *)(piVar24 + 4) = uVar9;
    *(undefined8 *)(piVar24 + 6) = uVar10;
    uVar23 = *(undefined8 *)(piVar28 + 0xc);
    uVar9 = *(undefined8 *)(piVar28 + 0xe);
    piVar24[8] = iVar18;
    piVar24[9] = iVar5;
    piVar24[10] = iVar6;
    piVar24[0xb] = iVar7;
    *(undefined8 *)(piVar24 + 0xc) = uVar23;
    *(undefined8 *)(piVar24 + 0xe) = uVar9;
  }
  if ((iStack_2a4 == 0) || (local_2a8 < 0)) {
    lVar22 = 2;
    piVar21 = &local_2a8;
    piVar27 = &local_528;
    do {
      piVar24 = piVar21 + 0x20;
      uVar23 = *(undefined8 *)(piVar27 + 2);
      uVar9 = *(undefined8 *)(piVar27 + 4);
      uVar10 = *(undefined8 *)(piVar27 + 6);
      piVar28 = piVar27 + 0x20;
      *(undefined8 *)piVar21 = *(undefined8 *)piVar27;
      *(undefined8 *)(piVar21 + 2) = uVar23;
      uVar23 = *(undefined8 *)(piVar27 + 8);
      uVar11 = *(undefined8 *)(piVar27 + 10);
      *(undefined8 *)(piVar21 + 4) = uVar9;
      *(undefined8 *)(piVar21 + 6) = uVar10;
      uVar9 = *(undefined8 *)(piVar27 + 0xc);
      uVar10 = *(undefined8 *)(piVar27 + 0xe);
      *(undefined8 *)(piVar21 + 8) = uVar23;
      *(undefined8 *)(piVar21 + 10) = uVar11;
      uVar23 = *(undefined8 *)(piVar27 + 0x10);
      uVar11 = *(undefined8 *)(piVar27 + 0x12);
      *(undefined8 *)(piVar21 + 0xc) = uVar9;
      *(undefined8 *)(piVar21 + 0xe) = uVar10;
      uVar9 = *(undefined8 *)(piVar27 + 0x14);
      uVar10 = *(undefined8 *)(piVar27 + 0x16);
      *(undefined8 *)(piVar21 + 0x10) = uVar23;
      *(undefined8 *)(piVar21 + 0x12) = uVar11;
      uVar23 = *(undefined8 *)(piVar27 + 0x18);
      uVar11 = *(undefined8 *)(piVar27 + 0x1a);
      *(undefined8 *)(piVar21 + 0x14) = uVar9;
      *(undefined8 *)(piVar21 + 0x16) = uVar10;
      uVar9 = *(undefined8 *)(piVar27 + 0x1c);
      uVar10 = *(undefined8 *)(piVar27 + 0x1e);
      *(undefined8 *)(piVar21 + 0x18) = uVar23;
      *(undefined8 *)(piVar21 + 0x1a) = uVar11;
      *(undefined8 *)(piVar21 + 0x1c) = uVar9;
      *(undefined8 *)(piVar21 + 0x1e) = uVar10;
      lVar22 = lVar22 + -1;
      piVar21 = piVar24;
      piVar27 = piVar28;
    } while (lVar22 != 0);
  }
  else {
    if ((iVar34 != iVar8) || (iStack_2a4 == 0)) goto LAB_141a86a04;
    lVar22 = 2;
    piVar21 = &local_2a8;
    piVar27 = &local_528;
    do {
      piVar24 = piVar21 + 0x20;
      uVar23 = *(undefined8 *)(piVar27 + 2);
      uVar9 = *(undefined8 *)(piVar27 + 4);
      uVar10 = *(undefined8 *)(piVar27 + 6);
      piVar28 = piVar27 + 0x20;
      *(undefined8 *)piVar21 = *(undefined8 *)piVar27;
      *(undefined8 *)(piVar21 + 2) = uVar23;
      uVar23 = *(undefined8 *)(piVar27 + 8);
      uVar11 = *(undefined8 *)(piVar27 + 10);
      *(undefined8 *)(piVar21 + 4) = uVar9;
      *(undefined8 *)(piVar21 + 6) = uVar10;
      uVar9 = *(undefined8 *)(piVar27 + 0xc);
      uVar10 = *(undefined8 *)(piVar27 + 0xe);
      *(undefined8 *)(piVar21 + 8) = uVar23;
      *(undefined8 *)(piVar21 + 10) = uVar11;
      uVar23 = *(undefined8 *)(piVar27 + 0x10);
      uVar11 = *(undefined8 *)(piVar27 + 0x12);
      *(undefined8 *)(piVar21 + 0xc) = uVar9;
      *(undefined8 *)(piVar21 + 0xe) = uVar10;
      uVar9 = *(undefined8 *)(piVar27 + 0x14);
      uVar10 = *(undefined8 *)(piVar27 + 0x16);
      *(undefined8 *)(piVar21 + 0x10) = uVar23;
      *(undefined8 *)(piVar21 + 0x12) = uVar11;
      uVar23 = *(undefined8 *)(piVar27 + 0x18);
      uVar11 = *(undefined8 *)(piVar27 + 0x1a);
      *(undefined8 *)(piVar21 + 0x14) = uVar9;
      *(undefined8 *)(piVar21 + 0x16) = uVar10;
      uVar9 = *(undefined8 *)(piVar27 + 0x1c);
      uVar10 = *(undefined8 *)(piVar27 + 0x1e);
      *(undefined8 *)(piVar21 + 0x18) = uVar23;
      *(undefined8 *)(piVar21 + 0x1a) = uVar11;
      *(undefined8 *)(piVar21 + 0x1c) = uVar9;
      *(undefined8 *)(piVar21 + 0x1e) = uVar10;
      lVar22 = lVar22 + -1;
      piVar21 = piVar24;
      piVar27 = piVar28;
    } while (lVar22 != 0);
  }
  uVar23 = *(undefined8 *)(piVar28 + 2);
  uVar9 = *(undefined8 *)(piVar28 + 4);
  uVar10 = *(undefined8 *)(piVar28 + 6);
  *(undefined8 *)piVar24 = *(undefined8 *)piVar28;
  *(undefined8 *)(piVar24 + 2) = uVar23;
  iVar18 = piVar28[8];
  iVar8 = piVar28[9];
  iVar5 = piVar28[10];
  iVar6 = piVar28[0xb];
  *(undefined8 *)(piVar24 + 4) = uVar9;
  *(undefined8 *)(piVar24 + 6) = uVar10;
  uVar23 = *(undefined8 *)(piVar28 + 0xc);
  uVar9 = *(undefined8 *)(piVar28 + 0xe);
  piVar24[8] = iVar18;
  piVar24[9] = iVar8;
  piVar24[10] = iVar5;
  piVar24[0xb] = iVar6;
  *(undefined8 *)(piVar24 + 0xc) = uVar23;
  *(undefined8 *)(piVar24 + 0xe) = uVar9;
LAB_141a86a04:
  iVar32 = iVar32 + 1;
  goto LAB_141a86510;
}



// FUNCTION 141a86e10 GetD3D11DeviceHungErrorString body=685 status=ok
// SIG undefined GetD3D11DeviceHungErrorString(void)

longlong * GetD3D11DeviceHungErrorString(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == -0x7785ffff) {
    if ((wchar_t *)*param_1 != L"DXGI_ERROR_INVALID_CALL") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x18);
      iVar2 = (int)param_1[1] + 0x18;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"DXGI_ERROR_INVALID_CALL",0x18);
    }
  }
  else if (param_2 == -0x7785fffb) {
    if ((wchar_t *)*param_1 != L"DXGI_ERROR_DEVICE_REMOVED") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x1a);
      iVar2 = (int)param_1[1] + 0x1a;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"DXGI_ERROR_DEVICE_REMOVED",0x1a);
      return param_1;
    }
  }
  else if (param_2 == -0x7785fffa) {
    if ((undefined *)*param_1 != &DAT_144daff40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x17);
      iVar2 = (int)param_1[1] + 0x17;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      puVar1 = (undefined8 *)*param_1;
      *puVar1 = 0x49004700580044;
      puVar1[1] = 0x5200520045005f;
      puVar1[2] = 0x44005f0052004f;
      puVar1[3] = 0x43004900560045;
      puVar1[4] = 0x550048005f0045;
      *(undefined4 *)(puVar1 + 5) = 0x47004e;
      *(undefined2 *)((longlong)puVar1 + 0x2c) = 0;
      return param_1;
    }
  }
  else if (param_2 == -0x7785fff9) {
    if ((wchar_t *)*param_1 != L"DXGI_ERROR_DEVICE_RESET") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x18);
      iVar2 = (int)param_1[1] + 0x18;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"DXGI_ERROR_DEVICE_RESET",0x18);
      return param_1;
    }
  }
  else if (param_2 == -0x7785ffe0) {
    if ((wchar_t *)*param_1 != L"DXGI_ERROR_DRIVER_INTERNAL_ERROR") {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x21);
      iVar2 = (int)param_1[1] + 0x21;
      *(int *)(param_1 + 1) = iVar2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy((wchar_t *)*param_1,L"DXGI_ERROR_DRIVER_INTERNAL_ERROR",0x21);
      return param_1;
    }
  }
  else {
    FString::PrintfImpl(&local_18,L"%08X",param_2);
    if (param_1 != &local_18) {
      if (*param_1 != 0) {
        FMemory::Free();
      }
      *param_1 = local_18;
      *(undefined4 *)(param_1 + 1) = local_10;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_c;
      return param_1;
    }
    if (local_18 != 0) {
      FMemory::Free();
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 141a870c0 GetD3D12ErrorString body=1893 status=ok
// SIG undefined GetD3D12ErrorString(void)

void ** GetD3D12ErrorString(void **param_1,int param_2,longlong *param_3)

{
  void *_Dst;
  void *pvVar1;
  size_t _Size;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  void *pvVar8;
  void *_Src;
  void *local_58;
  int local_50;
  int local_4c;
  void *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  *param_1 = (void *)0x0;
  param_1[1] = (void *)0x0;
  if (param_2 < -0x7789f793) {
    if (param_2 == -0x7789f794) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x13);
      iVar7 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar7 + 0x13;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 0x13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy(*param_1,L"D3DERR_INVALIDCALL",0x13);
      return param_1;
    }
    if (param_2 == -0x7fffbffe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xe);
      iVar7 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar7 + 0xe;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy(*param_1,L"E_NOINTERFACE",0xe);
      return param_1;
    }
    if (param_2 == -0x7fffbffb) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,7);
      iVar7 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar7 + 7;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      puVar5 = *param_1;
      *puVar5 = 0x410046005f0045;
      *(undefined4 *)(puVar5 + 1) = 0x4c0049;
      *(undefined2 *)((longlong)puVar5 + 0xc) = 0;
      return param_1;
    }
    if (param_2 == -0x7ff8fff2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xe);
      iVar7 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar7 + 0xe;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy(*param_1,L"E_OUTOFMEMORY",0xe);
      return param_1;
    }
    if (param_2 == -0x7ff8ffa9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0xd);
      iVar7 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar7 + 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy(*param_1,L"E_INVALIDARG",0xd);
      return param_1;
    }
    if (param_2 == -0x7789fde4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x17);
      iVar7 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar7 + 0x17;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 0x17) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy(*param_1,L"D3DERR_WASSTILLDRAWING",0x17);
      return param_1;
    }
  }
  else {
    if (param_2 == -0x7785ffff) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x18);
      iVar7 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar7 + 0x18;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 0x18) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy(*param_1,L"DXGI_ERROR_INVALID_CALL",0x18);
      return param_1;
    }
    if (param_2 == -0x7785fffb) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x1a);
      iVar7 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar7 + 0x1a;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 0x1a) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy(*param_1,L"DXGI_ERROR_DEVICE_REMOVED",0x1a);
      goto LAB_141a875cb;
    }
    if (param_2 == -0x7783ffff) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x2a);
      iVar7 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar7 + 0x2a;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 0x2a) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy(*param_1,L"D3D11_ERROR_TOO_MANY_UNIQUE_STATE_OBJECTS",0x2a);
      return param_1;
    }
    if (param_2 == -0x7783fffe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0x1b);
      iVar7 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar7 + 0x1b;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 0x1b) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      builtin_wcsncpy(*param_1,L"D3D11_ERROR_FILE_NOT_FOUND",0x1b);
      return param_1;
    }
    if (param_2 == 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,5);
      iVar7 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 1) = iVar7 + 5;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      puVar5 = *param_1;
      *puVar5 = 0x4b004f005f0053;
      *(undefined2 *)(puVar5 + 1) = 0;
      return param_1;
    }
  }
  FString::PrintfImpl(&local_48,L"%08X",param_2);
  if (param_1 == &local_48) {
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_1 != (void *)0x0) {
      FMemory::Free();
    }
    *param_1 = local_48;
    *(int *)(param_1 + 1) = (int)local_40;
    *(int *)((longlong)param_1 + 0xc) = local_40._4_4_;
  }
  if (param_2 != -0x7785fffb) {
    return param_1;
  }
LAB_141a875cb:
  if (param_3 != (longlong *)0x0) {
    uVar2 = (**(code **)(*param_3 + 0x128))(param_3);
    local_48 = (void *)0x0;
    local_40 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    pvVar8 = local_48;
    FGenericPlatformString::Memcpy(local_48,L" with Reason: ",0x1e);
    puVar5 = (undefined8 *)GetD3D11DeviceHungErrorString(local_38,uVar2);
    if ((int)local_40 < 2) {
      _Src = (void *)*puVar5;
      *puVar5 = 0;
      iVar3 = *(int *)(puVar5 + 1);
      puVar5[1] = 0;
    }
    else {
      iVar7 = *(int *)(puVar5 + 1) + -1;
      if (*(int *)(puVar5 + 1) == 0) {
        iVar7 = 0;
      }
      if (((int)local_40 != 0) || (iVar3 = 1, iVar7 == 0)) {
        iVar3 = 0;
      }
      local_58 = pvVar8;
      local_50 = (int)local_40;
      local_4c = local_40._4_4_;
      pvVar8 = (void *)0x0;
      if (local_40._4_4_ < iVar3 + (int)local_40 + iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
      }
      iVar4 = local_50;
      pvVar1 = (void *)*puVar5;
      _Src = local_58;
      iVar3 = local_50;
      if (iVar7 != 0) {
        lVar6 = (longlong)local_50;
        local_50 = iVar7 + (uint)(local_50 == 0) + local_50;
        if (local_4c < local_50) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar4);
        }
        iVar3 = local_50;
        _Src = local_58;
        _Dst = (void *)((longlong)local_58 + (lVar6 - (ulonglong)(iVar4 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,pvVar1,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)_Dst) = 0;
      }
    }
    if ((iVar3 != 0) && (iVar3 + -1 != 0)) {
      iVar7 = *(int *)(param_1 + 1);
      iVar4 = (uint)(iVar7 == 0) + iVar7 + iVar3 + -1;
      *(int *)(param_1 + 1) = iVar4;
      if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
      }
      pvVar1 = (void *)((longlong)*param_1 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      _Size = (longlong)iVar3 * 2 - 2;
      _guard_xfg_dispatch_icall_nop(pvVar1,_Src,_Size);
      *(undefined2 *)((longlong)pvVar1 + _Size) = 0;
    }
    if (_Src != (void *)0x0) {
      FMemory::Free(_Src);
    }
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    if (local_38[0] != 0) {
      FMemory::Free();
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 141a87830 GetD3D12TextureFlagString body=531 status=ok
// SIG undefined GetD3D12TextureFlagString(void)

longlong * GetD3D12TextureFlagString(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    *(undefined4 *)(param_1 + 1) = 0x29;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    builtin_wcsncpy((wchar_t *)*param_1,L"D3D12_RESOURCE_FLAG_ALLOW_RENDER_TARGET ",0x29);
  }
  if ((param_2 & 2) != 0) {
    iVar2 = (int)param_1[1];
    iVar4 = (0x29 - (uint)(iVar2 != 0)) + iVar2;
    *(int *)(param_1 + 1) = iVar4;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    lVar5 = (longlong)iVar2 - (ulonglong)(iVar2 != 0);
    lVar3 = *param_1;
    builtin_wcsncpy((wchar_t *)(lVar3 + lVar5 * 2),L"D3D12_RE",8);
    builtin_wcsncpy((wchar_t *)(lVar3 + 0x10 + lVar5 * 2),L"SOURCE_F",8);
    builtin_wcsncpy((wchar_t *)(lVar3 + 0x20 + lVar5 * 2),L"LAG_ALLO",8);
    builtin_wcsncpy((wchar_t *)(lVar3 + 0x30 + lVar5 * 2),L"W_DEPTH_",8);
    builtin_wcsncpy((wchar_t *)(lVar3 + 0x40 + lVar5 * 2),L"STENCIL ",8);
    *(undefined2 *)(lVar3 + 0x50 + lVar5 * 2) = 0;
  }
  if ((param_2 & 8) != 0) {
    iVar2 = (int)param_1[1];
    iVar4 = (0x2a - (uint)(iVar2 != 0)) + iVar2;
    *(int *)(param_1 + 1) = iVar4;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    lVar5 = (longlong)iVar2 - (ulonglong)(iVar2 != 0);
    lVar3 = *param_1;
    puVar1 = (undefined8 *)(lVar3 + lVar5 * 2);
    *puVar1 = 0x31004400330044;
    puVar1[1] = 0x450052005f0032;
    lVar3 = lVar3 + lVar5 * 2;
    *(undefined8 *)(lVar3 + 0x10) = 0x520055004f0053;
    *(undefined8 *)(lVar3 + 0x18) = 0x46005f00450043;
    *(undefined8 *)(lVar3 + 0x20) = 0x5f00470041004c;
    *(undefined8 *)(lVar3 + 0x28) = 0x59004e00450044;
    *(undefined4 *)(lVar3 + 0x30) = 0x53005f;
    *(undefined4 *)(lVar3 + 0x34) = 0x410048;
    *(undefined4 *)(lVar3 + 0x38) = 0x450044;
    *(undefined4 *)(lVar3 + 0x3c) = 0x5f0052;
    *(undefined4 *)(lVar3 + 0x40) = 0x450052;
    *(undefined4 *)(lVar3 + 0x44) = 0x4f0053;
    *(undefined4 *)(lVar3 + 0x48) = 0x520055;
    *(undefined4 *)(lVar3 + 0x4c) = 0x450043;
    *(undefined2 *)(lVar3 + 0x50) = 0x20;
    *(undefined2 *)(lVar3 + 0x52) = 0;
  }
  if ((param_2 & 4) != 0) {
    iVar2 = (int)param_1[1];
    iVar4 = (0x2c - (uint)(iVar2 != 0)) + iVar2;
    *(int *)(param_1 + 1) = iVar4;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    lVar5 = (longlong)iVar2 - (ulonglong)(iVar2 != 0);
    lVar3 = *param_1;
    puVar1 = (undefined8 *)(lVar3 + lVar5 * 2);
    *puVar1 = 0x31004400330044;
    puVar1[1] = 0x450052005f0032;
    lVar3 = lVar3 + lVar5 * 2;
    *(undefined8 *)(lVar3 + 0x10) = 0x520055004f0053;
    *(undefined8 *)(lVar3 + 0x18) = 0x46005f00450043;
    *(undefined8 *)(lVar3 + 0x20) = 0x5f00470041004c;
    *(undefined8 *)(lVar3 + 0x28) = 0x4f004c004c0041;
    *(undefined8 *)(lVar3 + 0x30) = 0x4e0055005f0057;
    *(undefined8 *)(lVar3 + 0x38) = 0x4500440052004f;
    *(undefined8 *)(lVar3 + 0x40) = 0x5f004400450052;
    *(undefined8 *)(lVar3 + 0x48) = 0x45004300430041;
    *(undefined4 *)(lVar3 + 0x50) = 0x530053;
    *(undefined2 *)(lVar3 + 0x54) = 0x20;
    *(undefined2 *)(lVar3 + 0x56) = 0;
  }
  return param_1;
}



// FUNCTION 141a87a50 FUN_141a87a50 body=163 status=ok
// SIG undefined FUN_141a87a50(void)

longlong FUN_141a87a50(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *(undefined8 *)(**(longlong **)(param_1 + 0x50) + 0xd50);
  plVar5 = (longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10);
  lVar4 = *plVar5;
  if (lVar4 == 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    lVar4 = operator_new(0x60);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_141a4c3b0(lVar4,uVar3,2,0x80000);
    }
    *plVar5 = lVar4;
    *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 8) = lVar4;
    lVar4 = *plVar5;
  }
  return lVar4;
}



// FUNCTION 141a87b90 GetRequiredIntermediateSize body=186 status=ok
// SIG undefined GetRequiredIntermediateSize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 GetRequiredIntermediateSize(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x50))(param_1,local_58);
  local_60 = 0;
  (**(code **)(*param_1 + 0x38))(param_1,&DAT_144da61b8,&local_68);
  local_78 = &local_60;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  (**(code **)(*local_68 + 0x130))(local_68,local_58,param_2,param_3);
  (**(code **)(*local_68 + 0x10))();
  return local_60;
}



// FUNCTION 141a87c50 GetSubresourceState body=40 status=ok
// SIG undefined GetSubresourceState(void)

int CResourceState::GetSubresourceState(int *param_1,int param_2)

{
  int *piVar1;
  
  if (*param_1 < 0) {
    return *param_1 * 2 >> 1;
  }
  piVar1 = *(int **)(param_1 + 6);
  if (*(int **)(param_1 + 6) == (int *)0x0) {
    piVar1 = param_1 + 2;
  }
  return piVar1[param_2];
}



// FUNCTION 141a87c80 FUN_141a87c80 body=1401 status=ok
// SIG undefined FUN_141a87c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141a87c80(longlong param_1,undefined4 param_2,longlong *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_1c8 [32];
  undefined1 *local_1a8;
  undefined8 *local_1a0;
  uint local_198;
  undefined8 *local_190;
  undefined1 local_188;
  undefined4 local_180;
  undefined4 *local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 local_104;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [16];
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar8 = (undefined8 *)0x0;
  local_168 = (longlong *)0x0;
  iVar3 = (**(code **)(*param_3 + 0x48))(param_3,param_4,&DAT_144da7250,&local_168);
  if (iVar3 < 0) {
    local_120 = 0;
    local_118 = 0;
    local_1a8 = (undefined1 *)mu::Mesh::GetFaceBuffers(param_1);
    local_1a0 = &local_120;
    FUN_141a94000(iVar3,
                  "SwapChain->GetBuffer(BackBufferIndex, IID_PPV_ARGS(BackBufferResource.GetInitReference()))"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Viewport.cpp",
                  0x137);
  }
  (**(code **)(*local_168 + 0x50))(local_168,local_a0);
  lVar4 = operator_new(0x278);
  puVar5 = puVar8;
  if (lVar4 != 0) {
    local_178 = &local_d0;
    local_170 = 0;
    local_180 = 0;
    local_188 = 0;
    local_190 = (undefined8 *)CONCAT44(local_190._4_4_,param_2);
    local_198 = 1;
    local_1a0 = (undefined8 *)CONCAT44(local_1a0._4_4_,1);
    local_1a8 = (undefined1 *)CONCAT44(local_1a8._4_4_,1);
    local_d0 = 1;
    local_cc = 0;
    uStack_c4 = 0;
    puVar5 = (undefined8 *)FUN_141a81f60(lVar4,*(undefined8 *)(lVar2 + 0xd50),local_90,local_88);
  }
  local_58 = 1;
  local_160 = 0;
  local_68 = 1;
  uStack_60 = 0;
  uStack_5c = 1;
  (**(code **)(*local_168 + 0x70))(local_168,&local_68);
  lVar4 = operator_new(0xe8);
  puVar6 = puVar8;
  if (lVar4 != 0) {
    local_190 = &local_68;
    local_1a0 = &local_128;
    local_198 = local_198 & 0xffffff00;
    local_1a8 = local_a0;
    local_128 = 0;
    puVar6 = (undefined8 *)FUN_141a67670(lVar4,*(undefined8 *)(lVar2 + 0xd50),local_168,0);
  }
  LOCK();
  *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
  UNLOCK();
  puVar1 = puVar5 + 0x10;
  *(undefined4 *)(puVar5 + 0x11) = 1;
  FStringTable::SetOwnerAsset(puVar1,puVar6);
  puVar5[0x1c] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x1e] = 0;
  if ((*(int *)(puVar6 + 0x17) != 1) && (*(int *)(puVar6 + 0x17) != 4)) {
    uVar7 = FUN_141a57830(puVar6);
    puVar5[0x17] = uVar7;
  }
  puVar5[0x18] = puVar6[0x1a];
  *(undefined1 *)(puVar5 + 0x1f) = 0;
  FNDIGpuComputePrePostStageContext::GetSystemInstanceID(param_1);
  if (DAT_1469fd22d == '\0') {
    local_104 = 0;
    local_fc = 0;
    local_110 = local_80;
    local_10c = 4;
    puVar6 = (undefined8 *)operator_new(0x70);
    if (puVar6 != (undefined8 *)0x0) {
      lVar4 = *(longlong *)(lVar2 + 0xd50);
      *puVar6 = &PTR_FUN_144daa6c0;
      puVar6[1] = lVar4;
      puVar8 = (undefined8 *)
               FDescriptorHeapManager::AllocateHeapSlot(lVar4 + 0xb0,local_a8,puVar6 + 3);
      puVar6[2] = *puVar8;
      *(undefined4 *)(puVar6 + 4) = 0;
      puVar6[0xb] = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar6 + 0xc) = 0;
      *(undefined4 *)((longlong)puVar6 + 100) = 0;
      *(undefined2 *)(puVar6 + 0xd) = 0x100;
      *puVar6 = &PTR_FUN_144daa6c8;
      puVar6[0xb] = &PTR_LAB_144daa6d0;
      FUN_141a85460(puVar6,&local_110,puVar1);
      puVar8 = puVar6;
    }
    FUN_141a91cd0(puVar5 + 0xd,puVar8);
  }
  else {
    local_148 = 1;
    local_154 = 5;
    local_158 = local_80;
    local_14c = 0;
    local_130 = 1;
    local_13c = 5;
    local_140 = local_80;
    local_134 = 1;
    puVar8 = (undefined8 *)operator_new(0x70);
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      lVar4 = *(longlong *)(lVar2 + 0xd50);
      *puVar8 = &PTR_FUN_144daa6c0;
      puVar8[1] = lVar4;
      puVar6 = (undefined8 *)
               FDescriptorHeapManager::AllocateHeapSlot(lVar4 + 0xb0,local_b8,puVar8 + 3);
      puVar8[2] = *puVar6;
      *(undefined4 *)(puVar8 + 4) = 0;
      puVar8[0xb] = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar8 + 0xc) = 0;
      *(undefined4 *)((longlong)puVar8 + 100) = 0;
      *(undefined2 *)(puVar8 + 0xd) = 0x100;
      puVar8[0xb] = &PTR_LAB_144daa6d0;
      *puVar8 = &PTR_FUN_144daa6c8;
      FUN_141a85460(puVar8,&local_158);
    }
    puVar6 = (undefined8 *)operator_new(0x70);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      lVar4 = *(longlong *)(lVar2 + 0xd50);
      *puVar6 = &PTR_FUN_144daa6c0;
      puVar6[1] = lVar4;
      puVar9 = (undefined8 *)
               FDescriptorHeapManager::AllocateHeapSlot(lVar4 + 0xb0,local_b0,puVar6 + 3);
      puVar6[2] = *puVar9;
      *(undefined4 *)(puVar6 + 4) = 0;
      puVar6[0xb] = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar6 + 0xc) = 0;
      *(undefined4 *)((longlong)puVar6 + 100) = 0;
      *(undefined2 *)(puVar6 + 0xd) = 0x100;
      *puVar6 = &PTR_FUN_144daa6c8;
      puVar6[0xb] = &PTR_LAB_144daa6d0;
      FUN_141a85460(puVar6,&local_140);
    }
    puVar9 = puVar5 + 0x23;
    FUN_141a85610(puVar9,2);
    iVar3 = *(int *)(puVar5 + 0x25);
    *(int *)(puVar5 + 0x25) = iVar3 + 2;
    if (*(int *)((longlong)puVar5 + 300) < iVar3 + 2) {
      FUN_1407eebb0(puVar9,iVar3);
    }
    puVar10 = (undefined8 *)puVar5[0x24];
    if ((undefined8 *)puVar5[0x24] == (undefined8 *)0x0) {
      puVar10 = puVar9;
    }
    puVar10[iVar3] = 0;
    puVar10[(longlong)iVar3 + 1] = 0;
    FUN_141a91d40(puVar5 + 0xd,puVar8,0);
    FUN_141a91d40(puVar5 + 0xd,puVar6,1);
  }
  local_f0 = 0x1688;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f8 = local_80;
  local_f4 = 4;
  local_e8 = 0;
  local_e4 = 1;
  puVar6 = (undefined8 *)operator_new(0x88);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    FUN_141a823c0(puVar6,*(undefined8 *)(lVar2 + 0xd50));
    *puVar6 = &PTR_FUN_144db3f30;
    puVar6[3] = &PTR_LAB_144db3f38;
    FUN_141a75120(puVar6,&local_f8,puVar1,0xffffffff);
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(puVar5 + 0x22,puVar6);
  *(undefined1 *)(puVar5 + 2) = 1;
  *(undefined1 *)(puVar8 + 0xd) = 1;
  *(undefined1 *)(puVar6 + 2) = 1;
  FUN_141a80f90(puVar5);
  if (local_168 != (longlong *)0x0) {
    (**(code **)(*local_168 + 0x10))();
  }
  return puVar5;
}



// FUNCTION 141a88220 FUN_141a88220 body=94 status=ok
// SIG undefined FUN_141a88220(void)

float FUN_141a88220(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  
  if (DAT_146ab6339 != '\0') {
    lVar1 = FUN_141a74090(*(undefined8 *)(param_1 + 0x60),1);
    dVar2 = (double)lVar1;
    if (lVar1 < 0) {
      dVar2 = dVar2 + 1.8446744073709552e+19;
    }
    dVar3 = (double)DAT_146ab6340;
    if (DAT_146ab6340 < 0) {
      dVar3 = dVar3 + 1.8446744073709552e+19;
    }
    return (float)(dVar2 / dVar3);
  }
  return 0.0;
}



// FUNCTION 141a88280 FUN_141a88280 body=2233 status=ok
// SIG undefined FUN_141a88280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a88280(longlong param_1)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ushort uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar14;
  short *_Src;
  ulonglong uVar15;
  float fVar16;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  longlong *local_170;
  longlong local_168;
  undefined8 local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  longlong local_f8 [2];
  longlong local_e8;
  undefined1 local_d8 [8];
  longlong local_d0;
  longlong local_c0;
  void *local_b0;
  ulonglong local_a8;
  void *local_a0;
  ulonglong local_98;
  void *local_90;
  ulonglong local_88;
  int local_74;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  uVar14 = 0;
  plVar9 = *(longlong **)(param_1 + 0x50);
  uVar15 = (longlong)*(int *)(param_1 + 0x58) & 0x1fffffffffffffff;
  if (plVar9 + *(int *)(param_1 + 0x58) < plVar9) {
    uVar15 = uVar14;
  }
  uVar11 = uVar14;
  if (uVar15 != 0) {
    do {
      FStringTable::SetOwnerAsset(*plVar9,param_1);
      uVar11 = uVar11 + 1;
      plVar9 = plVar9 + 1;
    } while (uVar11 != uVar15);
    plVar9 = *(longlong **)(param_1 + 0x50);
  }
  lVar12 = *plVar9;
  _Src = (short *)(lVar12 + 0x50);
  DAT_146ab62d8 = *(undefined4 *)(lVar12 + 0x150);
  DAT_1464c1140 = (longlong *)0x0;
  _DAT_1464c1148 = 0;
  _DAT_1464c1150 = 0;
  _DAT_1464c1158 = 0;
  _DAT_1464c1160 = 0;
  _DAT_1464c1168 = 0;
  DAT_1464c1170 = 0;
  _DAT_1464c1178 = 0;
  _DAT_1464c1180 = 0;
  cVar2 = IsRHIDeviceIntel();
  uVar13 = 0;
  if (cVar2 != '\0') {
    local_158 = (longlong *)0x0;
    iVar3 = agsInit(&local_158,0,&DAT_1464c1148);
    if (iVar3 == 0) {
      DAT_1464c1140 = local_158;
      if (0 < DAT_1464c1168) {
        cVar2 = DAT_1464c1178;
        do {
          if (cVar2 != '\0') break;
          uVar15 = 0;
          iVar3 = *(int *)((ulonglong)uVar13 * 0x70 + 0x40 + DAT_1464c1170);
          if (0 < iVar3) {
            do {
              if ((*(byte *)(uVar15 * 0x1d0 + 0x120 +
                            *(longlong *)((ulonglong)uVar13 * 0x70 + 0x48 + DAT_1464c1170)) & 0x10)
                  != 0) {
                cVar2 = '\x01';
                _DAT_1464c1178 = CONCAT71(DAT_1464c1178_1,1);
                break;
              }
              uVar6 = (short)uVar15 + 1;
              uVar15 = (ulonglong)uVar6;
            } while ((int)(uint)uVar6 < iVar3);
          }
          uVar13 = uVar13 + 1;
        } while ((int)(uint)uVar13 < DAT_1464c1168);
      }
    }
  }
  plVar9 = *(longlong **)(param_1 + 0x50);
  uVar15 = (longlong)*(int *)(param_1 + 0x58) & 0x1fffffffffffffff;
  if (plVar9 + *(int *)(param_1 + 0x58) < plVar9) {
    uVar15 = uVar14;
  }
  uVar11 = uVar14;
  if (uVar15 != 0) {
    do {
      FUN_141a56600(*plVar9);
      uVar11 = uVar11 + 1;
      plVar9 = plVar9 + 1;
    } while (uVar11 != uVar15);
    plVar9 = *(longlong **)(param_1 + 0x50);
  }
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_140 = 0;
  local_138 = 0;
  if (DAT_1464c1140 != (longlong *)0x0) {
    local_118 = *(longlong *)(*plVar9 + 0x188);
    local_100 = *(undefined4 *)(*plVar9 + 0x4c);
    local_110 = 0x4b571db6189819f1;
    uStack_108 = 0xf7859b33211854be;
    agsDriverExtensionsDX12_CreateDevice(DAT_1464c1140,&local_118,&local_130,&local_140);
  }
  if (DAT_1469fce70 != 0) {
    IsRHIDeviceIntel();
  }
  DAT_146ab6308 = 0;
  if (DAT_146ab6ae8 != _Src) {
    uVar15 = uVar14;
    if (*_Src != 0) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (_Src[lVar10] != 0);
      uVar15 = (ulonglong)((int)lVar10 + 1);
    }
    DAT_146ab6af0 = 0;
    iVar3 = (int)uVar15;
    uVar11 = uVar14;
    if (DAT_146ab6af4 != iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_146ab6ae8,uVar15);
      uVar11 = (ulonglong)DAT_146ab6af0;
    }
    DAT_146ab6af0 = iVar3 + (int)uVar11;
    if (DAT_146ab6af4 < (int)DAT_146ab6af0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146ab6ae8);
    }
    if (iVar3 != 0) {
      _guard_xfg_dispatch_icall_nop(DAT_146ab6ae8,_Src,(longlong)iVar3 * 2);
    }
  }
  _DAT_146ab62d0 = *(undefined4 *)(lVar12 + 0x154);
  _DAT_146ab62d4 = *(undefined4 *)(lVar12 + 0x15c);
  FUN_14169e170(local_d8,&DAT_146ab6ae8);
  pvVar1 = local_a0;
  iVar3 = (int)local_98;
  DAT_146ab6b10._0_4_ = iVar3;
  if ((iVar3 == 0) && (DAT_146ab6b10._4_4_ == 0)) {
    DAT_146ab6b10._4_4_ = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&DAT_146ab6b08,local_98 & 0xffffffff);
    _guard_xfg_dispatch_icall_nop(DAT_146ab6b08,pvVar1,(longlong)iVar3 * 2);
  }
  pvVar1 = local_b0;
  iVar3 = (int)local_a8;
  DAT_146ab6b00._0_4_ = iVar3;
  if ((iVar3 == 0) && (DAT_146ab6b00._4_4_ == 0)) {
    DAT_146ab6b00._4_4_ = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&DAT_146ab6af8,local_a8 & 0xffffffff);
    _guard_xfg_dispatch_icall_nop(DAT_146ab6af8,pvVar1,(longlong)iVar3 * 2);
  }
  pvVar1 = local_90;
  iVar3 = (int)local_88;
  DAT_146ab6b20 = iVar3;
  if ((iVar3 == 0) && (DAT_146ab6b24 == 0)) {
    DAT_146ab6b24 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&DAT_146ab6b18,local_88 & 0xffffffff);
    _guard_xfg_dispatch_icall_nop(DAT_146ab6b18,pvVar1,(longlong)iVar3 * 2);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_b0 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_c0 != 0) {
    FMemory::Free();
  }
  if (local_d0 != 0) {
    FMemory::Free();
  }
  DAT_1469fd200 = *(undefined8 *)(lVar12 + 0x160);
  DAT_1469fd208 = *(undefined8 *)(lVar12 + 0x168);
  DAT_1469fd210 = *(undefined8 *)(lVar12 + 0x170);
  FUN_14169dad0();
  local_148 = (longlong *)0x0;
  puVar4 = *(undefined8 **)(**(longlong **)(param_1 + 0x50) + 0x188);
  iVar3 = (**(code **)*puVar4)(puVar4,&DAT_144da71e0,&local_148);
  if (iVar3 < 0) {
    local_170 = &local_168;
    local_168 = 0;
    local_160 = 0;
    local_178 = 0;
    FUN_141a94000(iVar3,
                  "GetAdapter().GetAdapter()->QueryInterface(IID_PPV_ARGS(DxgiAdapter3.GetInitReference()))"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
                  ,0x259);
  }
  iVar3 = (**(code **)(*local_148 + 0x70))(local_148,0,0,local_f8);
  if (iVar3 < 0) {
    local_170 = &local_168;
    local_168 = 0;
    local_160 = 0;
    local_178 = 0;
    FUN_141a94000(iVar3,
                  "DxgiAdapter3->QueryVideoMemoryInfo(0, DXGI_MEMORY_SEGMENT_GROUP_LOCAL, &LocalVideoMemoryInfo)"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
                  ,0x25b);
  }
  fVar16 = (float)local_f8[0];
  if (local_f8[0] < 0) {
    fVar16 = fVar16 + 1.8446744e+19;
  }
  DAT_1469fd218 = (longlong)(fVar16 * 0.9);
  if (0 < DAT_146ab6310) {
    DAT_146ab6308 =
         (longlong)(float)(int)((float)DAT_146ab6310 * 9.536743e-09 * (float)DAT_1469fd218) << 0x14;
  }
  *(longlong *)(param_1 + 0x30) = DAT_146ab6308;
  lVar12 = DAT_1469fd218;
  if (local_e8 <= DAT_1469fd218) {
    lVar12 = local_e8;
  }
  iVar3 = (**(code **)(*local_148 + 0x78))(local_148,0,0,lVar12);
  if (iVar3 < 0) {
    local_170 = &local_168;
    local_168 = 0;
    local_160 = 0;
    local_178 = 0;
    FUN_141a94000(iVar3,
                  "DxgiAdapter3->SetVideoMemoryReservation(0, DXGI_MEMORY_SEGMENT_GROUP_LOCAL, FMath::Min((int64)LocalVideoMemoryInfo.AvailableForReservation, FD3D12GlobalStats::GTotalGraphicsMemory))"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
                  ,0x274);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469fd3c8) && (_Init_thread_header(&DAT_1469fd3c8), DAT_1469fd3c8 == -1))
  {
    uVar5 = FCommandLine::Get();
    cVar2 = FParse::Param(uVar5,L"nod3dasync");
    DAT_1469fd3c4 = cVar2 == '\0';
    _Init_thread_footer(&DAT_1469fd3c8);
  }
  DAT_146ab62e4 = DAT_1469fd3c4;
  _DAT_1464c9c48 = 0xe00000007;
  _DAT_1464c9c50 = 5;
  if ((DAT_146ab6328 == '\0') || (cVar2 = IsRHIDeviceIntel(), cVar2 == '\0')) {
    DAT_146ab62f0 = 0;
  }
  else {
    DAT_146ab62f0 = 1;
  }
  DAT_146ab62ec = *(undefined1 *)(**(longlong **)(param_1 + 0x50) + 0x3c);
  DAT_146ab6e98 = (**(code **)(*DAT_146ab6358 + 0x468))();
  _DAT_146ab7058 = (**(code **)(*DAT_146ab6358 + 0x470))();
  puVar4 = (undefined8 *)FRenderResource::GetResourceList();
  for (puVar4 = (undefined8 *)*puVar4; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4)
  {
    (**(code **)(*(longlong *)puVar4[2] + 0x18))();
  }
  puVar4 = (undefined8 *)FRenderResource::GetResourceList();
  for (puVar4 = (undefined8 *)*puVar4; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4)
  {
    (**(code **)(*(longlong *)puVar4[2] + 8))();
  }
  local_168 = (longlong)*(int *)(param_1 + 0x58);
  uVar7 = 0;
  uVar8 = 0;
  uVar15 = uVar14;
  if (0 < local_168) {
    do {
      plVar9 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x50) + uVar15 * 8) + 0x188);
      uVar11 = uVar14;
      while( true ) {
        local_150 = (longlong *)0x0;
        iVar3 = (**(code **)(*plVar9 + 0x38))(plVar9,uVar11,&local_150);
        lVar12 = local_168;
        if (iVar3 != 0) break;
        local_158 = (longlong *)0x0;
        iVar3 = (**(code **)*local_150)(local_150,&DAT_144da1fa0,&local_158);
        if (-1 < iVar3) {
          iVar3 = (**(code **)(*local_158 + 0xd8))(local_158,local_d8);
          if (iVar3 < 0) {
            local_170 = &local_118;
            local_118 = 0;
            local_110 = 0;
            local_178 = 0;
            FUN_141a94000(iVar3,"Output6->GetDesc1(&OutputDesc)",
                          "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
                          ,0xbb);
          }
          uVar8 = uVar7;
          if (local_74 == 0xc) {
            uVar7 = 1;
            uVar8 = 1;
          }
        }
        if (local_158 != (longlong *)0x0) {
          (**(code **)(*local_158 + 0x10))();
        }
        if (local_150 != (longlong *)0x0) {
          (**(code **)(*local_150 + 0x10))();
        }
        uVar11 = (ulonglong)((int)uVar11 + 1);
      }
      if (local_150 != (longlong *)0x0) {
        (**(code **)(*local_150 + 0x10))();
      }
      uVar15 = uVar15 + 1;
    } while ((longlong)uVar15 < lVar12);
  }
  DAT_1464c9c38 = 0x12;
  local_168 = 0;
  local_160 = 6;
  DAT_146ab632a = uVar8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
  FGenericPlatformString::Memcpy(local_168,L"D3D12",0xc);
  FHardwareInfo::RegisterHardwareInfo(DAT_1469fd278,&local_168);
  if (local_168 != 0) {
    FMemory::Free();
  }
  DAT_146ab62fe = 1;
  DAT_146ab6324 = 1;
  DAT_146ab62f5 = 1;
  DAT_146ab62cb = 1;
  DAT_146ab62c8 = 1;
  if (local_148 != (longlong *)0x0) {
    (**(code **)(*local_148 + 0x10))();
  }
  return;
}



// FUNCTION 141a88b40 FUN_141a88b40 body=144 status=ok
// SIG undefined FUN_141a88b40(void)

void FUN_141a88b40(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = operator_new(0x150);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_141a664a0(lVar1,param_1,0,0);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  lVar1 = operator_new(0x150);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_141a664a0(lVar1,param_1,3);
  }
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  lVar1 = operator_new(0x150);
  if (lVar1 != 0) {
    uVar2 = FUN_141a664a0(lVar1,param_1,2);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    return;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 141a88bd0 InitShaderRegisterCounts body=432 status=ok
// SIG undefined InitShaderRegisterCounts(void)

/* WARNING: Removing unreachable block (ram,0x000141a88d45) */

void FD3D12QuantizedBoundShaderState::InitShaderRegisterCounts
               (int *param_1,longlong param_2,undefined1 *param_3,char param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  
  iVar8 = 0x20;
  cVar7 = '\0';
  if (*param_1 < 2) {
    bVar2 = *(byte *)(param_2 + 1);
    uVar3 = (uint)bVar2;
    if (bVar2 == 0) {
      uVar6 = 0;
    }
    else {
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; bVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar4 = iVar8;
      if (uVar3 != 0) {
        iVar4 = 0x1f - iVar1;
      }
      uVar3 = uVar3 - 1;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      cVar5 = cVar7;
      if (uVar3 != 0) {
        cVar5 = '\x1f' - (char)iVar1;
      }
      uVar3 = 1 << (0x20U - cVar5 & ~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x1f);
      if (0xf < uVar3) {
        uVar3 = 0x10;
      }
      uVar6 = (undefined1)uVar3;
    }
    *param_3 = uVar6;
    bVar2 = *(byte *)(param_2 + 2);
    uVar6 = 0;
    if (bVar2 != 0) {
      iVar1 = 0x1f;
      if (bVar2 != 0) {
        for (; bVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar4 = iVar8;
      if (bVar2 != 0) {
        iVar4 = 0x1f - iVar1;
      }
      uVar3 = bVar2 - 1;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      cVar5 = cVar7;
      if (uVar3 != 0) {
        cVar5 = '\x1f' - (char)iVar1;
      }
      uVar3 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - cVar5 & 0x1f);
      if (0x3f < uVar3) {
        uVar3 = 0x40;
      }
      uVar6 = (undefined1)uVar3;
    }
  }
  else {
    *param_3 = 0x10;
    uVar6 = 0x40;
  }
  param_3[2] = uVar6;
  bVar2 = *(byte *)(param_2 + 3);
  if (*param_1 < 3) {
    uVar3 = (uint)bVar2;
    if (0x10 < bVar2) {
      iVar1 = 0x1f;
      if (bVar2 != 0) {
        for (; bVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar4 = iVar8;
      if (bVar2 != 0) {
        iVar4 = 0x1f - iVar1;
      }
      uVar3 = bVar2 - 1;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      if (uVar3 != 0) {
        cVar7 = '\x1f' - (char)iVar1;
      }
      uVar3 = 1 << (0x20U - cVar7 & ~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x1f);
      if (0xf < uVar3) {
        uVar3 = 0x10;
      }
    }
    param_3[1] = (char)uVar3;
    bVar2 = *(byte *)(param_2 + 4);
    if ((bVar2 == 0) || (param_4 == '\0')) {
      param_3[3] = 0;
    }
    else {
      iVar1 = 0x1f;
      if (bVar2 != 0) {
        for (; bVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      if (bVar2 != 0) {
        iVar8 = 0x1f - iVar1;
      }
      uVar3 = bVar2 - 1;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      if (uVar3 == 0) {
        param_3[3] = 1;
      }
      else {
        uVar3 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar1) & 0x1f);
        uVar6 = (char)uVar3;
        if (0xf < uVar3) {
          uVar6 = 0x10;
        }
        param_3[3] = uVar6;
      }
    }
  }
  else {
    if (0x10 < bVar2) {
      bVar2 = 0x10;
    }
    param_3[1] = bVar2;
    param_3[3] = param_4 << 4;
  }
  return;
}



// FUNCTION 141a88d80 Initialize body=71 status=ok
// SIG undefined Initialize(void)

void CResourceState::Initialize(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[8];
  if (iVar1 < param_2) {
    param_1[8] = param_2;
    if ((int)param_1[9] < param_2) {
      TArray<enum_D3D12_RESOURCE_STATES,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (param_1 + 2,iVar1);
      *param_1 = 0xffffffff;
      return;
    }
  }
  else if ((param_2 < iVar1) && (param_2 != iVar1)) {
    param_1[8] = param_2;
    TArray<enum_D3D12_RESOURCE_STATES,TInlineAllocator<4,FDefaultAllocator>_>::ResizeShrink();
  }
  *param_1 = 0xffffffff;
  return;
}



// FUNCTION 141a88dd0 thunk_FUN_141a602d0 body=5 status=ok
// SIG undefined thunk_FUN_141a602d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_141a602d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  HRESULT HVar5;
  int iVar6;
  undefined4 uVar7;
  DWORD DVar8;
  undefined8 uVar9;
  longlong lVar10;
  int *piVar11;
  bool bVar12;
  undefined1 auStack_68 [32];
  longlong *plStack_48;
  IID IStack_40;
  ulonglong uStack_28;
  
  uStack_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x18);
  FUN_141a57480();
  FUN_141a57180(param_1 + 0x6c0);
  bVar12 = false;
  HVar5 = IIDFromString(L"{A7AA6116-9C8D-4BBA-9083-B4D816B71B78}",&IStack_40);
  if (-1 < HVar5) {
    plStack_48 = (longlong *)0x0;
    iVar6 = (**(code **)*plVar1)(plVar1,&IStack_40,&plStack_48);
    bVar12 = -1 < iVar6;
    if (plStack_48 != (longlong *)0x0) {
      (**(code **)(*plStack_48 + 0x10))();
    }
  }
  if (((DAT_1469fce70 != 0) && (DAT_1464c1140 != 0)) || (bVar12)) {
    (**(code **)(*DAT_146ab6358 + 0x6e0))(DAT_146ab6358,1);
  }
  *(longlong **)(param_1 + 200) = plVar1;
  uVar7 = (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined4 *)(param_1 + 0xb0));
  *(undefined4 *)(param_1 + 0xc0) = uVar7;
  *(longlong **)(param_1 + 0x140) = plVar1;
  uVar7 = (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined4 *)(param_1 + 0x128));
  *(undefined4 *)(param_1 + 0x138) = uVar7;
  *(longlong **)(param_1 + 0x1b8) = plVar1;
  uVar7 = (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined4 *)(param_1 + 0x1a0));
  *(undefined4 *)(param_1 + 0x1b0) = uVar7;
  *(longlong **)(param_1 + 0x230) = plVar1;
  uVar7 = (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined4 *)(param_1 + 0x218));
  *(undefined4 *)(param_1 + 0x228) = uVar7;
  *(longlong **)(param_1 + 0x2a8) = plVar1;
  uVar7 = (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined4 *)(param_1 + 0x290));
  *(undefined4 *)(param_1 + 0x2a0) = uVar7;
  FUN_141a55f30(param_1 + 0x308,0x800,1);
  FUN_141a55f30(param_1 + 0x3f0,DAT_1464c1194,0);
  FUN_141a74910(param_1 + 0x4d8);
  FUN_141a74910(param_1 + 0x558);
  FUN_141a6dbc0(*(undefined8 *)(param_1 + 0x30),L"3D Queue",0,0);
  FUN_141a6dbc0(*(undefined8 *)(param_1 + 0x38),L"Copy Queue",0,0);
  FUN_141a6dbc0(*(undefined8 *)(param_1 + 0x40),L"Async Compute Queue",0,0);
  IStack_40.Data1 = 2;
  IStack_40.Data2 = 0;
  IStack_40.Data3 = 0;
  IStack_40.Data4[0] = '\0';
  IStack_40.Data4[1] = '\0';
  IStack_40.Data4[2] = '\0';
  IStack_40.Data4[3] = '\0';
  IStack_40.Data4[4] = '\x01';
  IStack_40.Data4[5] = '\0';
  IStack_40.Data4[6] = '\0';
  IStack_40.Data4[7] = '\0';
  *(undefined4 *)(param_1 + 0x6a8) = 2;
  *(undefined4 *)(param_1 + 0x6ac) = 0;
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  *(undefined4 *)(param_1 + 0x6b4) = 1;
  *(undefined4 *)(param_1 + 0x6b8) = 1;
  FUN_141a53240(param_1);
  *(undefined8 *)(param_1 + 0x684) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x68c) = 0;
  *(undefined4 *)(param_1 + 0x690) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x694) = 0;
  *(undefined8 *)(param_1 + 0x698) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x6a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6a4) = 0;
  if (DAT_1469fcf68 != 0) {
    uVar9 = FCommandLine::Get();
    cVar3 = FParse::Param(uVar9,L"dx12PSOCache");
    uVar9 = FCommandLine::Get();
    cVar4 = FParse::Param(uVar9,L"nodx12PSOCache");
    if (cVar3 == '\0') {
      if (cVar4 == '\0') goto LAB_141a60546;
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
    IConsoleVariable::SetWithCurrentPriority(DAT_1469fcf68,uVar9);
  }
LAB_141a60546:
  lVar2 = DAT_1469fcf70;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar8 = GetCurrentThreadId();
    lVar10 = 4;
    if (DVar8 != DAT_1468c21c0) goto LAB_141a60581;
  }
  lVar10 = 0;
LAB_141a60581:
  if (0 < *(int *)(lVar10 + lVar2)) {
    piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38);
    if ((*piVar11 < DAT_1469fd018) && (_Init_thread_header(&DAT_1469fd018), DAT_1469fd018 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469fd010 =
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ShaderPipelineCache.Enabled");
      _Init_thread_footer(&DAT_1469fd018);
    }
    if ((*piVar11 < DAT_1469fd028) && (_Init_thread_header(&DAT_1469fd028), DAT_1469fd028 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469fd020 =
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ShaderPipelineCache.LogPSO");
      _Init_thread_footer(&DAT_1469fd028);
    }
    if ((*piVar11 < DAT_1469fd038) && (_Init_thread_header(&DAT_1469fd038), DAT_1469fd038 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469fd030 =
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ShaderPipelineCache.ReportPSO");
      _Init_thread_footer(&DAT_1469fd038);
    }
    if ((*piVar11 < DAT_1469fd048) && (_Init_thread_header(&DAT_1469fd048), DAT_1469fd048 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469fd040 =
           (**(code **)(*DAT_1468b1f88 + 0x98))
                     (DAT_1468b1f88,L"r.ShaderPipelineCache.SaveUserCache");
      _Init_thread_footer(&DAT_1469fd048);
    }
    if ((*piVar11 < DAT_1469fd058) && (_Init_thread_header(&DAT_1469fd058), DAT_1469fd058 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469fd050 =
           (**(code **)(*DAT_1468b1f88 + 0x98))
                     (DAT_1468b1f88,L"r.ShaderPipelineCache.PrintNewPSODescriptors");
      _Init_thread_footer(&DAT_1469fd058);
    }
    if (DAT_1469fd010 != 0) {
      IConsoleVariable::SetWithCurrentPriority(DAT_1469fd010,1);
    }
    if (DAT_1469fd030 != 0) {
      IConsoleVariable::SetWithCurrentPriority(DAT_1469fd030,1);
    }
    if (DAT_1469fd040 != 0) {
      if ((*piVar11 < DAT_1469fd060) && (_Init_thread_header(&DAT_1469fd060), DAT_1469fd060 == -1))
      {
        uVar9 = FCommandLine::Get();
        DAT_1469fd05c = FParse::Param(uVar9,L"AllowDX12UserPSOCache");
        _Init_thread_footer(&DAT_1469fd060);
      }
      IConsoleVariable::SetWithCurrentPriority(DAT_1469fd040,DAT_1469fd05c != '\0');
      IConsoleVariable::SetWithCurrentPriority(DAT_1469fd020,DAT_1469fd05c != '\0');
    }
    if (DAT_1469fd050 != 0) {
      IConsoleVariable::SetWithCurrentPriority(DAT_1469fd050,0);
    }
  }
  return;
}



// FUNCTION 141a88de0 FUN_141a88de0 body=57 status=ok
// SIG undefined FUN_141a88de0(void)

undefined8 * FUN_141a88de0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR__scalar_deleting_destructor__144db3e38;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141a88e20 FUN_141a88e20 body=12 status=ok
// SIG undefined FUN_141a88e20(void)

void FUN_141a88e20(undefined8 *param_1)

{
  FUN_141a75550(*param_1,param_1[1]);
  return;
}



// FUNCTION 141a88e30 FUN_141a88e30 body=8 status=ok
// SIG undefined FUN_141a88e30(void)

undefined1 FUN_141a88e30(void)

{
  return DAT_1469fd22d;
}



// FUNCTION 141a88e40 FUN_141a88e40 body=36 status=ok
// SIG undefined FUN_141a88e40(void)

void FUN_141a88e40(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141a7d100(param_1 + 0x118,0);
  *(undefined8 *)(param_1 + 0x198) = uVar1;
  return;
}



// FUNCTION 141a88e70 FUN_141a88e70 body=1211 status=ok
// SIG undefined FUN_141a88e70(void)

longlong FUN_141a88e70(longlong param_1,longlong param_2,undefined4 param_3,int param_4,
                      uint *param_5,int *param_6)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 local_res18 [2];
  int local_res20;
  ulonglong in_stack_fffffffffffffe68;
  longlong *local_188;
  longlong *plStack_180;
  longlong local_178;
  uint local_170;
  uint local_16c;
  longlong local_168 [2];
  longlong *local_158;
  longlong *plStack_150;
  undefined1 local_148 [8];
  undefined8 local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined **local_118;
  longlong local_110;
  undefined4 local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  undefined4 *local_f0;
  longlong **local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  uint uStack_c8;
  undefined4 uStack_c4;
  longlong local_c0;
  longlong local_b8;
  undefined8 *local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  
  bVar4 = (byte)param_3;
  local_178 = *(longlong *)(param_1 + 0x80);
  local_140 = *(undefined8 *)(local_178 + 0x10);
  local_res18[0] = param_3;
  local_res20 = param_4;
  plStack_150 = (longlong *)operator_new(0xa8);
  if (plStack_150 == (longlong *)0x0) {
    plStack_150 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plStack_150 + 1) = 1;
    *(undefined4 *)((longlong)plStack_150 + 0xc) = 1;
    *plStack_150 = (longlong)&PTR_FUN_144db4348;
    plStack_150[2] = local_178;
    FUN_141a67840(plStack_150 + 3);
    *(uint *)(plStack_150 + 0x14) = *(uint *)(plStack_150 + 0x14) & 0xfffffffc;
    plStack_150[0x13] = 0;
  }
  lVar10 = 0;
  local_158 = plStack_150 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_158,local_158,local_158);
  plVar5 = plStack_150;
  local_188 = local_158;
  plStack_180 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
    UNLOCK();
    if (plStack_150 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_150 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_150)(plStack_150);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  lVar9 = (longlong)*(int *)(param_1 + 0x3c);
  uVar11 = (&DAT_1464ca1b8)[lVar9 * 10];
  uVar3 = (&DAT_1464ca1bc)[lVar9 * 10];
  uVar6 = *(uint *)(param_1 + 0x60) >> (bVar4 & 0x1f);
  local_16c = uVar11;
  if (uVar11 <= uVar6) {
    local_16c = uVar6;
  }
  uVar6 = *(uint *)(param_1 + 100) >> (bVar4 & 0x1f);
  local_170 = uVar3;
  if (uVar3 <= uVar6) {
    local_170 = uVar6;
  }
  uVar7 = *(uint *)(param_1 + 0x68) >> (bVar4 & 0x1f);
  uVar6 = 1;
  if (uVar7 != 0) {
    uVar6 = uVar7;
  }
  uVar11 = (((uVar11 - 1) + local_16c) / uVar11) * (&DAT_1464ca1c4)[lVar9 * 10] + 0xff & 0xffffff00;
  iVar12 = (((uVar3 - 1) + local_170) / uVar3) * uVar11;
  iVar13 = iVar12 * uVar6;
  local_130 = **(longlong **)(local_178 + 0x5d8) + 0x460;
  if (local_res20 == 1) {
    lVar9 = FUN_141a44bf0(local_178 + 0x850,iVar13 + 0x1ffU & 0xfffffe00,0x200,local_188 + 1);
    if (lVar9 == 0) goto LAB_141a892c7;
    *param_5 = uVar11;
    *param_6 = iVar12;
    *(uint *)((longlong)local_188 + 0x8c) = uVar11;
  }
  else {
    *(uint *)(local_188 + 0x12) = *(uint *)(local_188 + 0x12) | 2;
    local_138 = *(longlong *)(param_1 + 0x98);
    local_168[0] = 0;
    iVar8 = FUN_141a6e3f0(local_140,3,iVar13,local_168,
                          in_stack_fffffffffffffe68 & 0xffffffff00000000);
    if (iVar8 < 0) {
      local_128 = 0;
      local_120 = 0;
      FUN_141a94000(iVar8,
                    "Adapter->CreateBuffer(D3D12_HEAP_TYPE_READBACK, MipBytesAligned, &StagingTexture)"
                    ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp",
                    0x198,0,&local_128);
    }
    local_188[4] = 0;
    *(undefined4 *)(local_188 + 6) = 0xc;
    FUN_141a50de0(local_188 + 1,local_168[0],iVar13,0);
    FUN_141a7d380(local_188 + 1);
    uStack_100 = local_170;
    uStack_104 = local_16c;
    uStack_c4 = 0;
    local_e0 = 0;
    local_108 = *(undefined4 *)(local_138 + 0x50);
    uStack_d8 = CONCAT44(local_16c,local_108);
    uStack_d0 = CONCAT44(uVar6,local_170);
    local_98 = *(undefined8 *)(local_168[0] + 0x18);
    local_90 = 1;
    local_88 = 0;
    local_78 = local_170;
    uStack_6c = 0;
    local_68 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x18);
    local_58 = local_res18[0];
    local_c0 = local_130;
    local_b0 = &local_68;
    local_a8 = &local_178;
    local_a0 = &local_98;
    local_60 = 0;
    uStack_fc = uVar6;
    uStack_c8 = uVar11;
    local_b8 = param_1;
    uStack_80 = uStack_d8;
    uStack_74 = uVar6;
    uStack_70 = uVar11;
    if (param_2 != 0) {
      if (*(int *)(param_2 + 0x14) != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
      }
      FUN_141ed93a0(param_2);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(param_2);
      }
      FRHICommandListBase::WaitForTasks(param_2,1);
    }
    FUN_141a82f50(&local_c0);
    FUN_141a55210(**(undefined8 **)(local_178 + 0x5d8),&local_118,1);
    local_118 = &PTR_FUN_144da6378;
    if (local_110 != 0) {
      LOCK();
      piVar2 = (int *)(local_110 + 8);
      iVar13 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar13 == 1) && (local_110 != 0)) {
        FUN_141a4db60(local_110);
        FMemory::operator_delete(local_110,0x110);
      }
    }
    *(uint *)((longlong)local_188 + 0x8c) = uVar11;
    *param_5 = uVar11;
    *param_6 = iVar12;
  }
  lVar10 = local_188[8];
  local_f0 = local_res18;
  local_e8 = &local_188;
  FUN_141a81120(param_1 + 0x1d8,local_148,&local_f0,0);
LAB_141a892c7:
  plVar5 = plStack_180;
  if (plStack_180 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_180 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_180)(plStack_180);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return lVar10;
}



// FUNCTION 141a89330 FUN_141a89330 body=1258 status=ok
// SIG undefined FUN_141a89330(void)

longlong FUN_141a89330(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,
                      uint *param_6)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int local_res8 [2];
  undefined8 in_stack_fffffffffffffe38;
  undefined4 uVar14;
  ulonglong uVar13;
  undefined8 in_stack_fffffffffffffe40;
  undefined4 uVar15;
  longlong local_198 [2];
  longlong *local_188;
  longlong *plStack_180;
  longlong local_178;
  uint local_170;
  uint local_16c;
  longlong local_168 [2];
  longlong *local_158;
  longlong *plStack_150;
  undefined1 local_148 [8];
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined **local_120;
  longlong local_118;
  undefined4 local_110;
  uint uStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  int *local_f8;
  longlong **local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_80;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  int local_60;
  
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffe38 >> 0x20);
  uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffe40 >> 0x20);
  local_198[0] = *(longlong *)(param_1 + 0x78);
  local_140 = *(undefined8 *)(local_198[0] + 0x10);
  local_res8[0] = *(int *)(param_1 + 0x34) * param_4 + param_3;
  plStack_150 = (longlong *)operator_new(0xa8);
  if (plStack_150 == (longlong *)0x0) {
    plStack_150 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plStack_150 + 1) = 1;
    *(undefined4 *)((longlong)plStack_150 + 0xc) = 1;
    *plStack_150 = (longlong)&PTR_FUN_144db4348;
    plStack_150[2] = local_198[0];
    FUN_141a67840(plStack_150 + 3);
    *(uint *)(plStack_150 + 0x14) = *(uint *)(plStack_150 + 0x14) & 0xfffffffc;
    plStack_150[0x13] = 0;
  }
  local_158 = plStack_150 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_158,local_158,local_158);
  plVar9 = plStack_150;
  local_188 = local_158;
  plStack_180 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
    UNLOCK();
    if (plStack_150 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_150 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_150)(plStack_150);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  lVar8 = (longlong)*(int *)(param_1 + 0x3c);
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  uVar11 = (&DAT_1464ca1b8)[lVar8 * 10];
  uVar3 = (&DAT_1464ca1bc)[lVar8 * 10];
  uVar6 = *(uint *)(param_1 + 0x60) >> ((byte)param_3 & 0x1f);
  local_16c = uVar11;
  if (uVar11 <= uVar6) {
    local_16c = uVar6;
  }
  uVar6 = *(uint *)(param_1 + 100) >> ((byte)param_3 & 0x1f);
  local_170 = uVar3;
  if (uVar3 <= uVar6) {
    local_170 = uVar6;
  }
  uVar6 = (uVar3 - 1) + local_170;
  uVar11 = (((uVar11 - 1) + local_16c) / uVar11) * (&DAT_1464ca1c4)[lVar8 * 10] + 0xff & 0xffffff00;
  iVar12 = (uVar6 / uVar3) * uVar11;
  local_138 = **(longlong **)(local_198[0] + 0x5d8) + 0x460;
  local_178 = 0;
  plVar9 = (longlong *)
           FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                     (*(undefined8 *)(param_1 + 0x78),(ulonglong)uVar6 % (ulonglong)uVar3);
  uVar13 = CONCAT44(uVar14,*(undefined4 *)(param_1 + 0x40));
  cVar5 = (**(code **)(*plVar9 + 0x790))
                    (plVar9,&local_178,param_3,param_4,uVar13,CONCAT44(uVar15,param_5),
                     param_1 + 0x270,uVar4,param_6);
  if (cVar5 == '\0') {
    if (param_5 == 1) {
      lVar10 = FUN_141a44bf0(local_198[0] + 0x850,iVar12 + 0x1ffU & 0xfffffe00,0x200,local_188 + 1);
      lVar8 = 0;
      if (lVar10 == 0) goto LAB_141a897c7;
      *param_6 = uVar11;
      *(uint *)((longlong)local_188 + 0x8c) = uVar11;
    }
    else {
      *(uint *)(local_188 + 0x12) = *(uint *)(local_188 + 0x12) | 2;
      lVar8 = *(longlong *)(param_1 + 0x90);
      local_168[0] = 0;
      iVar7 = FUN_141a6e3f0(local_140,3,iVar12,local_168,uVar13 & 0xffffffff00000000);
      if (iVar7 < 0) {
        local_130 = 0;
        local_128 = 0;
        FUN_141a94000(iVar7,
                      "Adapter->CreateBuffer(D3D12_HEAP_TYPE_READBACK, MipBytesAligned, &StagingTexture)"
                      ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                      ,0x98b,0,&local_130);
      }
      local_188[4] = 0;
      *(undefined4 *)(local_188 + 6) = 0xc;
      FUN_141a50de0(local_188 + 1,local_168[0],iVar12,0);
      FUN_141a7d380(local_188 + 1);
      uStack_108 = local_170;
      uStack_10c = local_16c;
      local_110 = *(undefined4 *)(lVar8 + 0x50);
      uStack_104 = 1;
      uStack_cc = 0;
      local_e8 = 0;
      local_a0 = *(undefined8 *)(local_168[0] + 0x18);
      local_98 = 1;
      uStack_e0 = CONCAT44(local_16c,local_110);
      uStack_d8 = CONCAT44(1,local_170);
      local_90 = 0;
      local_80 = local_170;
      uStack_7c = 1;
      uStack_74 = 0;
      local_70 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x18);
      local_60 = local_res8[0];
      local_c8 = local_138;
      local_b8 = &local_70;
      local_b0 = local_198;
      local_a8 = &local_a0;
      local_68 = 0;
      uStack_d0 = uVar11;
      local_c0 = param_1;
      uStack_88 = uStack_e0;
      uStack_78 = uVar11;
      if (param_2 != 0) {
        if (*(int *)(param_2 + 0x14) != 0) {
          FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
        }
        FUN_141ed93a0(param_2);
        if (DAT_146ab6383 != '\0') {
          FRHICommandListBase::WaitForRHIThreadTasks(param_2);
        }
        FRHICommandListBase::WaitForTasks(param_2,1);
      }
      FUN_141a82e40(&local_c8);
      FUN_141a55210(**(undefined8 **)(local_198[0] + 0x5d8),&local_120,1);
      local_120 = &PTR_FUN_144da6378;
      if (local_118 != 0) {
        LOCK();
        piVar2 = (int *)(local_118 + 8);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar12 == 1) && (local_118 != 0)) {
          FUN_141a4db60(local_118);
          FMemory::operator_delete(local_118,0x110);
        }
      }
      *(uint *)((longlong)local_188 + 0x8c) = uVar11;
      *param_6 = uVar11;
    }
    local_178 = local_188[8];
  }
  local_f8 = local_res8;
  local_f0 = &local_188;
  FUN_141a81120(param_1 + 0x1d0,local_148,&local_f8,0);
  lVar8 = local_178;
LAB_141a897c7:
  plVar9 = plStack_180;
  if (plStack_180 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_180 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_180)(plStack_180);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return lVar8;
}



// FUNCTION 141a89820 FUN_141a89820 body=1264 status=ok
// SIG undefined FUN_141a89820(void)

longlong FUN_141a89820(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,
                      uint *param_6)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int local_res8 [2];
  undefined8 in_stack_fffffffffffffe38;
  undefined4 uVar14;
  ulonglong uVar13;
  undefined8 in_stack_fffffffffffffe40;
  undefined4 uVar15;
  longlong local_198 [2];
  longlong *local_188;
  longlong *plStack_180;
  longlong local_178;
  uint local_170;
  uint local_16c;
  longlong local_168 [2];
  longlong *local_158;
  longlong *plStack_150;
  undefined1 local_148 [8];
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined **local_120;
  longlong local_118;
  undefined4 local_110;
  uint uStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  int *local_f8;
  longlong **local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_80;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  int local_60;
  
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffe38 >> 0x20);
  uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffe40 >> 0x20);
  local_198[0] = *(longlong *)(param_1 + 0x80);
  local_140 = *(undefined8 *)(local_198[0] + 0x10);
  local_res8[0] = *(int *)(param_1 + 0x34) * param_4 + param_3;
  plStack_150 = (longlong *)operator_new(0xa8);
  if (plStack_150 == (longlong *)0x0) {
    plStack_150 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plStack_150 + 1) = 1;
    *(undefined4 *)((longlong)plStack_150 + 0xc) = 1;
    *plStack_150 = (longlong)&PTR_FUN_144db4348;
    plStack_150[2] = local_198[0];
    FUN_141a67840(plStack_150 + 3);
    *(uint *)(plStack_150 + 0x14) = *(uint *)(plStack_150 + 0x14) & 0xfffffffc;
    plStack_150[0x13] = 0;
  }
  local_158 = plStack_150 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_158,local_158,local_158);
  plVar9 = plStack_150;
  local_188 = local_158;
  plStack_180 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
    UNLOCK();
    if (plStack_150 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_150 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_150)(plStack_150);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  lVar8 = (longlong)*(int *)(param_1 + 0x3c);
  uVar4 = *(undefined8 *)(param_1 + 200);
  uVar11 = (&DAT_1464ca1b8)[lVar8 * 10];
  uVar3 = (&DAT_1464ca1bc)[lVar8 * 10];
  uVar6 = *(uint *)(param_1 + 0x60) >> ((byte)param_3 & 0x1f);
  local_16c = uVar11;
  if (uVar11 <= uVar6) {
    local_16c = uVar6;
  }
  uVar6 = *(uint *)(param_1 + 100) >> ((byte)param_3 & 0x1f);
  local_170 = uVar3;
  if (uVar3 <= uVar6) {
    local_170 = uVar6;
  }
  uVar6 = (uVar3 - 1) + local_170;
  uVar11 = (((uVar11 - 1) + local_16c) / uVar11) * (&DAT_1464ca1c4)[lVar8 * 10] + 0xff & 0xffffff00;
  iVar12 = (uVar6 / uVar3) * uVar11;
  local_138 = **(longlong **)(local_198[0] + 0x5d8) + 0x460;
  local_178 = 0;
  plVar9 = (longlong *)
           FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                     (*(undefined8 *)(param_1 + 0x80),(ulonglong)uVar6 % (ulonglong)uVar3);
  uVar13 = CONCAT44(uVar14,*(undefined4 *)(param_1 + 0x40));
  cVar5 = (**(code **)(*plVar9 + 0x790))
                    (plVar9,&local_178,param_3,param_4,uVar13,CONCAT44(uVar15,param_5),
                     param_1 + 0x278,uVar4,param_6);
  if (cVar5 == '\0') {
    if (param_5 == 1) {
      lVar10 = FUN_141a44bf0(local_198[0] + 0x850,iVar12 + 0x1ffU & 0xfffffe00,0x200,local_188 + 1);
      lVar8 = 0;
      if (lVar10 == 0) goto LAB_141a89cbd;
      *param_6 = uVar11;
      *(uint *)((longlong)local_188 + 0x8c) = uVar11;
    }
    else {
      *(uint *)(local_188 + 0x12) = *(uint *)(local_188 + 0x12) | 2;
      lVar8 = *(longlong *)(param_1 + 0x98);
      local_168[0] = 0;
      iVar7 = FUN_141a6e3f0(local_140,3,iVar12,local_168,uVar13 & 0xffffffff00000000);
      if (iVar7 < 0) {
        local_130 = 0;
        local_128 = 0;
        FUN_141a94000(iVar7,
                      "Adapter->CreateBuffer(D3D12_HEAP_TYPE_READBACK, MipBytesAligned, &StagingTexture)"
                      ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                      ,0x98b,0,&local_130);
      }
      local_188[4] = 0;
      *(undefined4 *)(local_188 + 6) = 0xc;
      FUN_141a50de0(local_188 + 1,local_168[0],iVar12,0);
      FUN_141a7d380(local_188 + 1);
      uStack_108 = local_170;
      uStack_10c = local_16c;
      local_110 = *(undefined4 *)(lVar8 + 0x50);
      uStack_104 = 1;
      uStack_cc = 0;
      local_e8 = 0;
      local_a0 = *(undefined8 *)(local_168[0] + 0x18);
      local_98 = 1;
      uStack_e0 = CONCAT44(local_16c,local_110);
      uStack_d8 = CONCAT44(1,local_170);
      local_90 = 0;
      local_80 = local_170;
      uStack_7c = 1;
      uStack_74 = 0;
      local_70 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x18);
      local_60 = local_res8[0];
      local_c8 = local_138;
      local_b8 = &local_70;
      local_b0 = local_198;
      local_a8 = &local_a0;
      local_68 = 0;
      uStack_d0 = uVar11;
      local_c0 = param_1;
      uStack_88 = uStack_e0;
      uStack_78 = uVar11;
      if (param_2 != 0) {
        if (*(int *)(param_2 + 0x14) != 0) {
          FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
        }
        FUN_141ed93a0(param_2);
        if (DAT_146ab6383 != '\0') {
          FRHICommandListBase::WaitForRHIThreadTasks(param_2);
        }
        FRHICommandListBase::WaitForTasks(param_2,1);
      }
      FUN_141a83020(&local_c8);
      FUN_141a55210(**(undefined8 **)(local_198[0] + 0x5d8),&local_120,1);
      local_120 = &PTR_FUN_144da6378;
      if (local_118 != 0) {
        LOCK();
        piVar2 = (int *)(local_118 + 8);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar12 == 1) && (local_118 != 0)) {
          FUN_141a4db60(local_118);
          FMemory::operator_delete(local_118,0x110);
        }
      }
      *(uint *)((longlong)local_188 + 0x8c) = uVar11;
      *param_6 = uVar11;
    }
    local_178 = local_188[8];
  }
  local_f8 = local_res8;
  local_f0 = &local_188;
  FUN_141a81120(param_1 + 0x1d8,local_148,&local_f8,0);
  lVar8 = local_178;
LAB_141a89cbd:
  plVar9 = plStack_180;
  if (plStack_180 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_180 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_180)(plStack_180);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return lVar8;
}



// FUNCTION 141a89d10 FUN_141a89d10 body=1255 status=ok
// SIG undefined FUN_141a89d10(void)

longlong FUN_141a89d10(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,
                      uint *param_6)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int local_res8 [2];
  undefined8 in_stack_fffffffffffffe38;
  undefined4 uVar14;
  ulonglong uVar13;
  undefined8 in_stack_fffffffffffffe40;
  undefined4 uVar15;
  longlong local_198 [2];
  longlong *local_188;
  longlong *plStack_180;
  longlong local_178;
  uint local_170;
  uint local_16c;
  longlong local_168 [2];
  longlong *local_158;
  longlong *plStack_150;
  undefined1 local_148 [8];
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined **local_120;
  longlong local_118;
  undefined4 local_110;
  uint uStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  int *local_f8;
  longlong **local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_80;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  int local_60;
  
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffe38 >> 0x20);
  uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffe40 >> 0x20);
  local_198[0] = *(longlong *)(param_1 + 0x78);
  local_140 = *(undefined8 *)(local_198[0] + 0x10);
  local_res8[0] = *(int *)(param_1 + 0x34) * param_4 + param_3;
  plStack_150 = (longlong *)operator_new(0xa8);
  if (plStack_150 == (longlong *)0x0) {
    plStack_150 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plStack_150 + 1) = 1;
    *(undefined4 *)((longlong)plStack_150 + 0xc) = 1;
    *plStack_150 = (longlong)&PTR_FUN_144db4348;
    plStack_150[2] = local_198[0];
    FUN_141a67840(plStack_150 + 3);
    *(uint *)(plStack_150 + 0x14) = *(uint *)(plStack_150 + 0x14) & 0xfffffffc;
    plStack_150[0x13] = 0;
  }
  local_158 = plStack_150 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_158,local_158,local_158);
  plVar9 = plStack_150;
  local_188 = local_158;
  plStack_180 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
    UNLOCK();
    if (plStack_150 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_150 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_150)(plStack_150);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
  }
  lVar8 = (longlong)*(int *)(param_1 + 0x3c);
  uVar11 = (&DAT_1464ca1b8)[lVar8 * 10];
  uVar3 = (&DAT_1464ca1bc)[lVar8 * 10];
  uVar6 = *(uint *)(param_1 + 0x60) >> ((byte)param_3 & 0x1f);
  local_16c = uVar11;
  if (uVar11 <= uVar6) {
    local_16c = uVar6;
  }
  local_170 = uVar3;
  if (uVar3 <= uVar6) {
    local_170 = uVar6;
  }
  uVar6 = (uVar3 - 1) + local_170;
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  uVar11 = (((uVar11 - 1) + local_16c) / uVar11) * (&DAT_1464ca1c4)[lVar8 * 10] + 0xff & 0xffffff00;
  iVar12 = (uVar6 / uVar3) * uVar11;
  local_138 = **(longlong **)(local_198[0] + 0x5d8) + 0x460;
  local_178 = 0;
  plVar9 = (longlong *)
           FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                     (*(undefined8 *)(param_1 + 0x78),(ulonglong)uVar6 % (ulonglong)uVar3);
  uVar13 = CONCAT44(uVar14,*(undefined4 *)(param_1 + 0x40));
  cVar5 = (**(code **)(*plVar9 + 0x790))
                    (plVar9,&local_178,param_3,param_4,uVar13,CONCAT44(uVar15,param_5),
                     param_1 + 0x270,uVar4,param_6);
  if (cVar5 == '\0') {
    if (param_5 == 1) {
      lVar10 = FUN_141a44bf0(local_198[0] + 0x850,iVar12 + 0x1ffU & 0xfffffe00,0x200,local_188 + 1);
      lVar8 = 0;
      if (lVar10 == 0) goto LAB_141a8a1a4;
      *param_6 = uVar11;
      *(uint *)((longlong)local_188 + 0x8c) = uVar11;
    }
    else {
      *(uint *)(local_188 + 0x12) = *(uint *)(local_188 + 0x12) | 2;
      lVar8 = *(longlong *)(param_1 + 0x90);
      local_168[0] = 0;
      iVar7 = FUN_141a6e3f0(local_140,3,iVar12,local_168,uVar13 & 0xffffffff00000000);
      if (iVar7 < 0) {
        local_130 = 0;
        local_128 = 0;
        FUN_141a94000(iVar7,
                      "Adapter->CreateBuffer(D3D12_HEAP_TYPE_READBACK, MipBytesAligned, &StagingTexture)"
                      ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                      ,0x98b,0,&local_130);
      }
      local_188[4] = 0;
      *(undefined4 *)(local_188 + 6) = 0xc;
      FUN_141a50de0(local_188 + 1,local_168[0],iVar12,0);
      FUN_141a7d380(local_188 + 1);
      uStack_108 = local_170;
      uStack_10c = local_16c;
      local_110 = *(undefined4 *)(lVar8 + 0x50);
      uStack_104 = 1;
      uStack_cc = 0;
      local_e8 = 0;
      local_a0 = *(undefined8 *)(local_168[0] + 0x18);
      local_98 = 1;
      uStack_e0 = CONCAT44(local_16c,local_110);
      uStack_d8 = CONCAT44(1,local_170);
      local_90 = 0;
      local_80 = local_170;
      uStack_7c = 1;
      uStack_74 = 0;
      local_70 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x18);
      local_60 = local_res8[0];
      local_c8 = local_138;
      local_b8 = &local_70;
      local_b0 = local_198;
      local_a8 = &local_a0;
      local_68 = 0;
      uStack_d0 = uVar11;
      local_c0 = param_1;
      uStack_88 = uStack_e0;
      uStack_78 = uVar11;
      if (param_2 != 0) {
        if (*(int *)(param_2 + 0x14) != 0) {
          FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
        }
        FUN_141ed93a0(param_2);
        if (DAT_146ab6383 != '\0') {
          FRHICommandListBase::WaitForRHIThreadTasks(param_2);
        }
        FRHICommandListBase::WaitForTasks(param_2,1);
      }
      FUN_141a82e40(&local_c8);
      FUN_141a55210(**(undefined8 **)(local_198[0] + 0x5d8),&local_120,1);
      local_120 = &PTR_FUN_144da6378;
      if (local_118 != 0) {
        LOCK();
        piVar2 = (int *)(local_118 + 8);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar12 == 1) && (local_118 != 0)) {
          FUN_141a4db60(local_118);
          FMemory::operator_delete(local_118,0x110);
        }
      }
      *(uint *)((longlong)local_188 + 0x8c) = uVar11;
      *param_6 = uVar11;
    }
    local_178 = local_188[8];
  }
  local_f8 = local_res8;
  local_f0 = &local_188;
  FUN_141a81120(param_1 + 0x1d0,local_148,&local_f8,0);
  lVar8 = local_178;
LAB_141a8a1a4:
  plVar9 = plStack_180;
  if (plStack_180 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_180 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_180)(plStack_180);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return lVar8;
}



// FUNCTION 141a8a220 LockTexture2D_RenderThread body=115 status=ok
// SIG undefined LockTexture2D_RenderThread(void)

void FD3D12DynamicRHI::LockTexture2D_RenderThread
               (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char in_stack_00000040;
  
  if (in_stack_00000040 != '\0') {
    if (*(int *)(param_2 + 0x14) != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68);
    }
    FUN_141ed93a0(param_2);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_2);
    }
    FRHICommandListBase::WaitForTasks(param_2,1);
    param_2 = 0;
  }
  FUN_141a89330(param_3,param_2,param_4,0);
  return;
}



// FUNCTION 141a8a2c0 FUN_141a8a2c0 body=901 status=ok
// SIG undefined FUN_141a8a2c0(void)

undefined8 FUN_141a8a2c0(longlong param_1,longlong param_2)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  uint *puVar6;
  wchar_t *pwVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  wchar_t *pwVar11;
  uint uVar12;
  int iVar14;
  longlong local_68;
  int local_60;
  int local_5c;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  wchar_t *pwVar13;
  
  puVar8 = *(uint **)(param_2 + 0x138);
  if (puVar8 == (uint *)0x0) {
    return 0;
  }
  uVar2 = *puVar8;
  if (uVar2 == 0) {
    pwVar7 = L"No Data";
  }
  else {
    pwVar7 = L"End: ";
    if (puVar8[1] != 0) {
      pwVar7 = L"Begin: ";
    }
  }
  iVar3 = *(int *)(param_2 + 0xe4);
  pwVar13 = (wchar_t *)0x0;
  if (iVar3 == 0) {
    pwVar11 = L"3D";
  }
  else if (iVar3 == 1) {
    pwVar11 = L"Copy";
  }
  else {
    pwVar11 = pwVar13;
    if (iVar3 == 2) {
      pwVar11 = L"Compute";
    }
  }
  FString::PrintfImpl(&local_68,L"[GPUBreadCrumb]\t%s Queue %d - %s",pwVar11,0,pwVar7);
  if (uVar2 != 0) {
    puVar8 = puVar8 + 2;
    do {
      if ((int)pwVar13 != 0) {
        local_58 = (void *)0x0;
        local_50 = 4;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
        pvVar4 = local_58;
        FGenericPlatformString::Memcpy(local_58,&DAT_144db09b8,8);
        iVar3 = local_60;
        if (((int)local_50 != 0) && (iVar14 = (int)local_50 + -1, iVar14 != 0)) {
          lVar9 = (longlong)local_60;
          local_60 = (uint)(local_60 == 0) + local_60 + iVar14;
          if (local_5c < local_60) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar3);
          }
          pvVar1 = (void *)(local_68 + (lVar9 - (ulonglong)(iVar3 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar14 * 2);
          *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar1) = 0;
        }
        if (pvVar4 != (void *)0x0) {
          FMemory::Free(pvVar4);
        }
      }
      uVar12 = *puVar8;
      AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x168));
      if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x1a4)) {
        lVar9 = *(longlong *)(param_1 + 0x1b0);
        if (*(longlong *)(param_1 + 0x1b0) == 0) {
          lVar9 = param_1 + 0x1a8;
        }
        uVar5 = *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x1b8) - 1U & (longlong)(int)uVar12)
                                  * 4);
        if (uVar5 != 0xffffffff) {
          do {
            puVar10 = (uint *)((longlong)(int)uVar5 * 0x20 + *(longlong *)(param_1 + 0x170));
            if (*puVar10 == uVar12) {
              if (uVar5 != 0xffffffff) goto LAB_141a8a4c0;
              break;
            }
            uVar5 = puVar10[6];
          } while (uVar5 != 0xffffffff);
        }
      }
      puVar10 = (uint *)0x0;
LAB_141a8a4c0:
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x168));
      iVar3 = local_60;
      puVar6 = puVar10 + 2;
      if (puVar10 == (uint *)0x0) {
        puVar6 = (uint *)0x0;
      }
      if (puVar6 == (uint *)0x0) {
        local_48 = (void *)0x0;
        local_40 = 0xe;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        pvVar4 = local_48;
        FGenericPlatformString::Memcpy(local_48,L"Unknown Event",0x1c);
        iVar3 = local_60;
        if (((int)local_40 != 0) && (iVar14 = (int)local_40 + -1, iVar14 != 0)) {
          lVar9 = (longlong)local_60;
          local_60 = (uint)(local_60 == 0) + local_60 + iVar14;
          if (local_5c < local_60) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar3);
          }
          pvVar1 = (void *)(local_68 + (lVar9 - (ulonglong)(iVar3 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar14 * 2);
          *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar1) = 0;
        }
        if (pvVar4 != (void *)0x0) {
          FMemory::Free(pvVar4);
        }
      }
      else {
        pvVar4 = *(void **)puVar6;
        iVar14 = puVar6[2] - 1;
        if (puVar6[2] == 0) {
          iVar14 = 0;
        }
        if (iVar14 != 0) {
          lVar9 = (longlong)local_60;
          local_60 = (uint)(local_60 == 0) + iVar14 + local_60;
          if (local_5c < local_60) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar3);
          }
          pvVar1 = (void *)(local_68 + (lVar9 - (ulonglong)(iVar3 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar14 * 2);
          *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar1) = 0;
        }
      }
      uVar12 = (int)pwVar13 + 1;
      pwVar13 = (wchar_t *)(ulonglong)uVar12;
      puVar8 = puVar8 + 1;
    } while (uVar12 < uVar2);
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 141a8a650 FUN_141a8a650 body=371 status=ok
// SIG undefined FUN_141a8a650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141a8a650(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined8 local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  lVar6 = *(longlong *)(param_1 + 0x20);
  iVar3 = *(int *)(lVar6 + 0xb8);
  uStack_3c = *(undefined4 *)(lVar6 + 0xc4);
  local_38 = *(undefined4 *)(lVar6 + 200);
  uVar5 = (ulonglong)(iVar3 - 2U);
  if (iVar3 - 2U < 2) {
LAB_141a8a6f3:
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    if ((iVar3 == 1) || ((iVar3 == 4 && (*(int *)(lVar6 + 0xc0) == 2)))) {
      uStack_40 = 1;
      local_48 = 0x100000004;
    }
    else {
      local_48 = 1;
      uStack_40 = 0;
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + 0x18);
      local_58 = lVar6 + 0x30;
      (**(code **)(*plVar2 + 200))(plVar2,local_30,0,1);
      uVar5 = FUN_141a576c0(9,local_30[0]);
      if ((char)uVar5 == '\0') goto LAB_141a8a6f3;
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    plVar2 = *(longlong **)(lVar6 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2);
      lVar6 = *(longlong *)(param_1 + 0x20);
    }
    bVar4 = FUN_141a57990(lVar1,param_1 + 0x10,lVar6,&local_48);
    if (bVar4 != 0) {
      iVar3 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
      }
      *(longlong **)(*param_2 + (longlong)iVar3 * 8) = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
      FUN_141a91110(param_1 + -8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    uVar5 = (ulonglong)bVar4;
  }
  return uVar5;
}



// FUNCTION 141a8a7d0 FUN_141a8a7d0 body=399 status=ok
// SIG undefined FUN_141a8a7d0(void)

void FUN_141a8a7d0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  BOOL BVar7;
  longlong *plVar8;
  longlong local_res8;
  
  local_res8 = *param_3;
  uVar4 = *(undefined8 *)(param_1 + 8);
  if (local_res8 != 0) {
    LOCK();
    *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    UNLOCK();
  }
  FUN_141a58010(uVar4,param_2,param_1 + 0x10,&local_res8);
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x130));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x130));
  }
  plVar8 = *(longlong **)(param_1 + 0x160);
  if (*(longlong **)(param_1 + 0x160) == (longlong *)0x0) {
    plVar8 = (longlong *)(param_1 + 0x158);
  }
  plVar2 = plVar8 + *(int *)(param_1 + 0x168);
  for (; plVar8 != plVar2; plVar8 = plVar8 + 1) {
    lVar5 = *plVar8;
    if (*(int *)(lVar5 + 0x5c) == 1) {
      *(ulonglong *)(lVar5 + 0x68) =
           *(ulonglong *)(param_1 + 0x58) / (ulonglong)*(uint *)(lVar5 + 0x84);
    }
    FUN_141a75120(lVar5,lVar5 + 0x58,param_1 + 0x10);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x130));
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x170));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x170));
  }
  plVar8 = *(longlong **)(param_1 + 0x1a0);
  if (*(longlong **)(param_1 + 0x1a0) == (longlong *)0x0) {
    plVar8 = (longlong *)(param_1 + 0x198);
  }
  plVar2 = plVar8 + *(int *)(param_1 + 0x1a8);
  for (; plVar8 != plVar2; plVar8 = plVar8 + 1) {
    lVar5 = *plVar8;
    FUN_141a85510(lVar5 + 0x18,lVar5 + 0x58,param_1 + 0x10,*(undefined8 *)(lVar5 + 0x80));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x170));
  puVar6 = (undefined8 *)*param_3;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  return;
}



// FUNCTION 141a8a960 FUN_141a8a960 body=109 status=ok
// SIG undefined FUN_141a8a960(void)

void FUN_141a8a960(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong local_res8;
  
  local_res8 = *param_3;
  uVar3 = *(undefined8 *)(param_1 + 8);
  if (local_res8 != 0) {
    LOCK();
    *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    UNLOCK();
  }
  FUN_141a58010(uVar3,param_2,param_1 + 0x10,&local_res8);
  FUN_141a91110(param_1 + -8);
  puVar4 = (undefined8 *)*param_3;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  return;
}



// FUNCTION 141a8a9d0 FUN_141a8a9d0 body=431 status=ok
// SIG undefined FUN_141a8a9d0(void)

void FUN_141a8a9d0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  BOOL BVar7;
  longlong *plVar8;
  longlong local_res8;
  
  local_res8 = *param_3;
  uVar4 = *(undefined8 *)(param_1 + 8);
  if (local_res8 != 0) {
    LOCK();
    *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    UNLOCK();
  }
  FUN_141a58010(uVar4,param_2,param_1 + 0x10,&local_res8);
  lVar5 = *(longlong *)(param_1 + 0x130);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x5c) == 1) {
      *(ulonglong *)(lVar5 + 0x68) =
           *(ulonglong *)(param_1 + 0x58) / (ulonglong)*(uint *)(lVar5 + 0x84);
    }
    FUN_141a75120(lVar5,lVar5 + 0x58,param_1 + 0x10);
  }
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138));
  }
  plVar8 = *(longlong **)(param_1 + 0x168);
  if (*(longlong **)(param_1 + 0x168) == (longlong *)0x0) {
    plVar8 = (longlong *)(param_1 + 0x160);
  }
  plVar2 = plVar8 + *(int *)(param_1 + 0x170);
  for (; plVar8 != plVar2; plVar8 = plVar8 + 1) {
    lVar5 = *plVar8;
    if (*(int *)(lVar5 + 0x5c) == 1) {
      *(ulonglong *)(lVar5 + 0x68) =
           *(ulonglong *)(param_1 + 0x58) / (ulonglong)*(uint *)(lVar5 + 0x84);
    }
    FUN_141a75120(lVar5,lVar5 + 0x58,param_1 + 0x10);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138));
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x178));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x178));
  }
  plVar8 = *(longlong **)(param_1 + 0x1a8);
  if (*(longlong **)(param_1 + 0x1a8) == (longlong *)0x0) {
    plVar8 = (longlong *)(param_1 + 0x1a0);
  }
  plVar2 = plVar8 + *(int *)(param_1 + 0x1b0);
  for (; plVar8 != plVar2; plVar8 = plVar8 + 1) {
    lVar5 = *plVar8;
    FUN_141a85510(lVar5 + 0x18,lVar5 + 0x58,param_1 + 0x10,*(undefined8 *)(lVar5 + 0x80));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x178));
  puVar6 = (undefined8 *)*param_3;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  return;
}



// FUNCTION 141a8aba0 FUN_141a8aba0 body=1037 status=ok
// SIG undefined FUN_141a8aba0(void)

char FUN_141a8aba0(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  int local_res8 [2];
  int local_res10 [2];
  undefined1 local_res18 [8];
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (DAT_1469fd1f4 == 0) {
    FUN_141a85780(lVar3 + 0xb30,*(undefined8 *)(lVar3 + 0x10));
  }
  lVar12 = 0;
  lVar4 = **(longlong **)(*(longlong *)(lVar3 + 0xd50) + 0x5d8);
  iVar9 = 0;
  lVar10 = lVar12;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    lVar10 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x48))();
  }
  if (*(int *)(param_1 + 0x60) == *(int *)(param_1 + 0xe0)) {
    plVar13 = *(longlong **)(param_1 + 0xb8);
  }
  else {
    plVar13 = *(longlong **)(param_1 + 0xd8);
  }
  lVar11 = lVar12;
  if (plVar13 != (longlong *)0x0) {
    lVar11 = (**(code **)(*plVar13 + 0x48))();
  }
  plVar13 = (longlong *)(lVar10 + 0xa8);
  if (lVar10 == 0) {
    plVar13 = (longlong *)&DAT_00000110;
  }
  lVar10 = *plVar13;
  lVar5 = *(longlong *)(*(longlong *)(lVar10 + 0x40) + 0x10);
  if (((lVar5 != 0) && (*(char *)(lVar5 + 0xb4) != '\0')) &&
     ((*(int *)(lVar10 + 0x5c) != 1 ||
      ((*(int *)(lVar5 + 0xb8) == 1 || (*(int *)(lVar5 + 0xb8) == 4)))))) {
    FUN_141a60ce0(lVar4 + 0x460,lVar5,0,lVar10 + 0x48);
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    plVar13 = (longlong *)(lVar11 + 0xa8);
    if (lVar11 == 0) {
      plVar13 = (longlong *)&DAT_00000110;
    }
    lVar10 = *plVar13;
    lVar11 = *(longlong *)(*(longlong *)(lVar10 + 0x40) + 0x10);
    if (((lVar11 != 0) && (*(char *)(lVar11 + 0xb4) != '\0')) &&
       ((*(int *)(lVar10 + 0x5c) != 1 ||
        ((*(int *)(lVar11 + 0xb8) == 1 || (*(int *)(lVar11 + 0xb8) == 4)))))) {
      FUN_141a60ce0(lVar4 + 0x460,lVar11,0,lVar10 + 0x48);
    }
  }
  cVar8 = FUN_141a90f50();
  if (cVar8 != '\0') {
    if (*(longlong **)(param_1 + 0x108) != (longlong *)0x0) {
      lVar12 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x48))();
    }
    plVar13 = (longlong *)(lVar12 + 0xa8);
    if (lVar12 == 0) {
      plVar13 = (longlong *)&DAT_00000110;
    }
    lVar10 = *plVar13;
    lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0x40) + 0x10);
    if (((lVar12 != 0) && (*(char *)(lVar12 + 0xb4) != '\0')) &&
       ((*(int *)(lVar10 + 0x5c) != 1 ||
        ((*(int *)(lVar12 + 0xb8) == 1 || (*(int *)(lVar12 + 0xb8) == 4)))))) {
      FUN_141a60ce0(lVar4 + 0x460,lVar12,0,lVar10 + 0x48);
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x468);
  if (*(int *)(lVar4 + 0x100) != 0) {
    (**(code **)(**(longlong **)(lVar4 + 0x28) + 0xd0))
              (*(longlong **)(lVar4 + 0x28),*(int *)(lVar4 + 0x100),*(undefined8 *)(lVar4 + 0xf8));
    *(undefined4 *)(lVar4 + 0x100) = 0;
  }
  lVar4 = *(longlong *)(lVar3 + 0xd50);
  uVar6 = **(undefined8 **)(lVar4 + 0x5d8);
  FUN_141a5e8b0(uVar6);
  FUN_141a524e0(uVar6);
  FUN_141a55210(uVar6,&local_58,0);
  local_58 = &PTR_FUN_144da6378;
  if (local_50 != 0) {
    LOCK();
    piVar1 = (int *)(local_50 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_50 != 0)) {
      FUN_141a4db60(local_50);
      FMemory::operator_delete(local_50,0x110);
    }
  }
  if (DAT_1464c9c58 != '\0') {
    uVar6 = **(undefined8 **)(lVar4 + 0x620);
    FUN_141a5e8b0(uVar6);
    FUN_141a524e0(uVar6);
  }
  local_res10[0] = iVar9;
  if (param_2 != '\0') {
    local_res10[0] = FUN_141ed0a30();
  }
  plVar13 = *(longlong **)(param_1 + 0x1a0);
  cVar8 = '\x01';
  if ((plVar13 == (longlong *)0x0) ||
     (cVar8 = (**(code **)(*plVar13 + 0x18))(plVar13,local_res10), cVar8 != '\0')) {
    iVar9 = FUN_141a977b0(param_1,local_res10[0]);
    if (*(longlong **)(param_1 + 0x1a0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x20))();
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x68) + 0x58))
            (*(longlong **)(param_1 + 0x68),local_res8,local_res18);
  if ((*(char *)(param_1 + 0x5c) == '\0') ||
     ((bool)*(char *)(param_1 + 0x5c) == (local_res8[0] != 0))) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((iVar9 + 0x7785fffbU < 0x1c) && ((0x8000005U >> (iVar9 + 0x7785fffbU & 0x1f) & 1) != 0)) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x44) = 1;
  }
  else if ((!bVar7) && (iVar9 < 0)) {
    local_48 = 0;
    local_40 = 0;
    FUN_141a94000(iVar9,"Result",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Viewport.cpp",
                  0x3df,0,&local_48);
  }
  if (cVar8 != '\0') {
    uVar14 = (*(int *)(param_1 + 0xb0) + 1U) % *(uint *)(param_1 + 0x98);
    *(uint *)(param_1 + 0xb0) = uVar14;
    lVar4 = (longlong)(int)uVar14 * 8;
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar4 + *(longlong *)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(lVar4 + *(longlong *)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(lVar4 + *(longlong *)(param_1 + 0xf0));
  }
  if ((DAT_1469fd1f4 == 1) && (0 < *(int *)(lVar3 + 0xb50))) {
    FUN_141a85780(lVar3 + 0xb30,*(undefined8 *)(lVar3 + 0x10));
  }
  return cVar8;
}



// FUNCTION 141a8afc0 FUN_141a8afc0 body=230 status=ok
// SIG undefined FUN_141a8afc0(void)

void FUN_141a8afc0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined1 *)(param_3 + 3) = 0;
  *(bool *)(param_3 + 3) = *(int *)(param_2 + 0x68) != 0;
  lVar1 = *(longlong *)(param_2 + 0x38);
  lVar2 = *(longlong *)(param_2 + 0x40);
  lVar3 = *(longlong *)(param_2 + 0x48);
  lVar4 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FD3D12QuantizedBoundShaderState::InitShaderRegisterCounts
              (param_1,*(longlong *)(param_2 + 0x30) + 0xc4,param_3,0);
  }
  if (lVar1 != 0) {
    FD3D12QuantizedBoundShaderState::InitShaderRegisterCounts
              (param_1,lVar1 + 0xc0,(longlong)param_3 + 4,1);
  }
  if (lVar2 != 0) {
    FD3D12QuantizedBoundShaderState::InitShaderRegisterCounts(param_1,lVar2 + 0xc0,param_3 + 1,0);
  }
  if (lVar3 != 0) {
    FD3D12QuantizedBoundShaderState::InitShaderRegisterCounts
              (param_1,lVar3 + 0xc0,(longlong)param_3 + 0xc,0);
  }
  if (lVar4 != 0) {
    FD3D12QuantizedBoundShaderState::InitShaderRegisterCounts(param_1,lVar4 + 0xf1,param_3 + 2,0);
  }
  return;
}



// FUNCTION 141a8b0b0 FUN_141a8b0b0 body=36 status=ok
// SIG undefined FUN_141a8b0b0(void)

void FUN_141a8b0b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined1 *)(param_3 + 3) = 0;
  FD3D12QuantizedBoundShaderState::InitShaderRegisterCounts
            (param_1,param_2 + 200,(longlong)param_3 + 0x14,1);
  return;
}



// FUNCTION 141a8b0e0 FUN_141a8b0e0 body=143 status=ok
// SIG undefined FUN_141a8b0e0(void)

void FUN_141a8b0e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  
  FUN_141a60a30(**(undefined8 **)(param_1 + 0x50));
  if ((*(longlong **)(param_2 + 0x1a0) != (longlong *)0x0) &&
     (cVar2 = (**(code **)(**(longlong **)(param_2 + 0x1a0) + 0x10))(), cVar2 == '\0')) {
    return;
  }
  uVar3 = (*(int *)(param_2 + 0xa0) + 1U) % *(uint *)(param_2 + 0x98);
  *(uint *)(param_2 + 0xa0) = uVar3;
  lVar1 = (longlong)(int)uVar3 * 8;
  *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(lVar1 + *(longlong *)(param_2 + 0x88));
  *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(lVar1 + *(longlong *)(param_2 + 0xc0));
  *(undefined8 *)(param_2 + 0x100) = *(undefined8 *)(lVar1 + *(longlong *)(param_2 + 0xf0));
  return;
}



// FUNCTION 141a8b170 FUN_141a8b170 body=1507 status=ok
// SIG undefined FUN_141a8b170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a8b170(longlong param_1,longlong *param_2,uint param_3,uint param_4,byte param_5,
                  uint param_6,uint param_7,ulonglong *param_8,uint param_9)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined **_Dst;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  uint uVar19;
  undefined1 auStack_398 [32];
  undefined8 local_378;
  longlong *local_370;
  undefined1 *local_368;
  uint local_360;
  undefined1 local_358;
  uint local_350;
  undefined4 *local_348;
  undefined8 local_340;
  byte local_338;
  uint local_334;
  uint local_330;
  int local_32c;
  uint local_328;
  uint local_324;
  undefined4 local_320;
  undefined **local_318;
  longlong local_310;
  longlong local_308 [2];
  uint local_2f8;
  longlong local_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined8 uStack_2e0;
  ulonglong local_2d8;
  uint uStack_2d0;
  undefined2 uStack_2cc;
  undefined2 uStack_2ca;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  uint uStack_2b4;
  longlong *local_2b0;
  int local_2a8 [6];
  undefined4 local_290;
  undefined8 local_28c;
  undefined4 local_284;
  undefined4 local_280;
  undefined8 local_27c;
  undefined8 uStack_274;
  undefined8 local_268;
  undefined8 uStack_260;
  ulonglong local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  longlong local_238;
  undefined1 local_228 [16];
  longlong local_218;
  undefined8 local_1e0;
  undefined1 local_1a8 [8];
  ulonglong local_1a0 [41];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_398;
  uVar17 = (ulonglong)param_3;
  local_338 = param_5;
  local_334 = param_7;
  local_2f8 = param_6;
  if (DAT_1464c9c14 == 0) {
    local_334 = param_7 & 0xffffffef;
  }
  uVar9 = (ulonglong)param_5;
  lVar14 = uVar9 * 5;
  uVar8 = (&DAT_1464ca1cc)[uVar9 * 10];
  local_328 = param_4;
  local_324 = param_3;
  local_320 = uVar8;
  local_308[0] = param_1;
  local_2f0 = lVar14;
  local_2b0 = param_2;
  iVar5 = FUN_141a2ea30();
  local_2e8 = 3;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2e0 = 0;
  local_268 = CONCAT44(uStack_2e4,3);
  uStack_260 = 0;
  uStack_2cc = 1;
  uStack_2ca = (undefined2)param_6;
  uStack_250 = CONCAT26(uStack_2ca,CONCAT24(1,param_4));
  uStack_2c4 = 1;
  uStack_2c0 = 0;
  local_248 = CONCAT44(1,uVar8);
  uStack_240 = 0;
  local_238 = (ulonglong)uStack_2b4 << 0x20;
  local_32c = iVar5;
  local_2d8 = uVar17;
  uStack_2d0 = param_4;
  local_2c8 = uVar8;
  local_258 = uVar17;
  _guard_xfg_dispatch_icall_nop(local_1a8,0,0x150);
  uVar16 = (ulonglong)param_9;
  uVar19 = 0;
  if (param_9 != 0) {
    puVar18 = local_1a0;
    do {
      uVar6 = (param_3 >> ((byte)uVar19 & 0x1f)) / (uint)(&DAT_1464ca1b8)[uVar9 * 10];
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      uVar12 = (param_4 >> ((byte)uVar19 & 0x1f)) / (uint)(&DAT_1464ca1bc)[uVar9 * 10];
      puVar18[-1] = *param_8;
      if (uVar12 < 2) {
        uVar12 = 1;
      }
      uVar19 = uVar19 + 1;
      iVar5 = (&DAT_1464ca1c4)[uVar9 * 10];
      *puVar18 = (ulonglong)((&DAT_1464ca1c4)[uVar9 * 10] * uVar6);
      puVar18[1] = (ulonglong)(uVar12 * iVar5 * uVar6);
      puVar18 = puVar18 + 3;
      param_8 = param_8 + 1;
      iVar5 = local_32c;
    } while (uVar19 < param_9);
  }
  _Dst = *(undefined ***)(local_308[0] + 0x68);
  local_330 = *(uint *)(local_308[0] + 0x70);
  if (param_9 < param_6) {
    iVar7 = (&DAT_1464ca1c4)[uVar9 * 10];
    puVar18 = local_1a0 + uVar16 * 3;
    local_318 = _Dst;
    uVar19 = local_330;
    do {
      uVar6 = ((uint)uVar17 >> ((byte)uVar16 & 0x1f)) / (uint)(&DAT_1464ca1b8)[lVar14 * 2];
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      uVar12 = (local_328 >> ((byte)uVar16 & 0x1f)) / (uint)(&DAT_1464ca1bc)[lVar14 * 2];
      if (uVar12 < 2) {
        uVar12 = 1;
      }
      uVar12 = uVar12 * iVar7 * uVar6;
      if (uVar19 < uVar12) {
        local_330 = uVar12;
        _Dst = (undefined **)FMemory::Malloc(uVar12);
        _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)uVar12);
        iVar7 = (&DAT_1464ca1c4)[local_2f0 * 2];
        lVar14 = local_2f0;
        uVar19 = uVar12;
      }
      puVar18[-1] = (ulonglong)_Dst;
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
      *puVar18 = (ulonglong)(iVar7 * uVar6);
      uVar17 = (ulonglong)local_324;
      puVar18[1] = (ulonglong)uVar12;
      puVar18 = puVar18 + 3;
      param_6 = local_2f8;
      iVar5 = local_32c;
    } while (uVar15 < local_2f8);
  }
  lVar14 = **(longlong **)(local_308[0] + 0x50);
  local_318 = _Dst;
  lVar10 = operator_new(0x278);
  uVar19 = local_334;
  if (lVar10 == 0) {
    lVar10 = 0;
  }
  else {
    local_348 = &local_280;
    local_340 = 0;
    local_350 = local_334;
    local_358 = 0;
    local_360 = (uint)local_338;
    local_368 = (undefined1 *)CONCAT44(local_368._4_4_,1);
    local_370 = (longlong *)CONCAT44(local_370._4_4_,param_6);
    local_378 = (ulonglong)local_378._4_4_ << 0x20;
    local_280 = 1;
    local_27c = 0;
    uStack_274 = 0;
    lVar10 = FUN_141a81f60(lVar10,*(undefined8 *)(lVar14 + 0xd50),local_324,local_328);
  }
  local_378 = lVar10 + 0x80;
  local_360 = 0;
  local_368 = (undefined1 *)CONCAT44(local_368._4_4_,uVar19);
  local_370 = (longlong *)CONCAT71(local_370._1_7_,local_338);
  FUN_141a918e0(*(undefined8 *)(lVar14 + 0xd50),lVar14,&local_268,0);
  local_28c = 0;
  local_284 = 0;
  local_2a8[4] = 0;
  local_2a8[2] = 0x1688;
  local_2a8[3] = 0;
  local_2a8[1] = 4;
  local_2a8[0] = iVar5;
  local_2a8[5] = param_6;
  iVar7 = FUN_141a71f60(local_320);
  local_290 = 1;
  if (iVar7 == 0x13) {
    if ((iVar5 != 0x15) && (iVar5 == 0x16)) goto LAB_141a8b4f5;
  }
  else if ((iVar7 == 0x2c) && ((iVar5 != 0x2e && (iVar5 == 0x2f)))) goto LAB_141a8b4f5;
  local_290 = 0;
LAB_141a8b4f5:
  puVar11 = (undefined8 *)operator_new(0x88);
  if (puVar11 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    FUN_141a823c0(puVar11,*(undefined8 *)(lVar14 + 0xd50));
    *puVar11 = &PTR_FUN_144db3f30;
    puVar11[3] = &PTR_LAB_144db3f38;
    FUN_141a75120(puVar11,local_2a8,lVar10 + 0x80,0xffffffff);
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(lVar10 + 0x110,puVar11);
  lVar14 = local_308[0];
  if (lVar10 != 0) {
    uVar8 = GetRequiredIntermediateSize
                      (*(undefined8 *)(*(longlong *)(lVar10 + 0x90) + 0x18),0,param_6);
    lVar14 = local_308[0];
    puVar11 = (undefined8 *)FUN_141a87a50(local_308[0]);
    FUN_141a67840(local_228,*puVar11);
    FUN_141a44bf0(puVar11,uVar8,0x200,local_228);
    lVar2 = *(longlong *)(lVar10 + 0x78);
    lVar3 = *(longlong *)(lVar10 + 0x90);
    local_2f0 = FUN_141a75680(lVar2 + 0x50);
    FUN_141a75810(*(undefined8 *)(lVar2 + 0x38),&local_318,local_2f0);
    lVar4 = **(longlong **)(lVar2 + 0x5d8);
    *(longlong *)(local_310 + 0x18) = lVar4;
    local_368 = local_1a8;
    piVar1 = (int *)(lVar4 + 0x2c54);
    *piVar1 = *piVar1 + 1;
    local_370 = (longlong *)CONCAT44(local_370._4_4_,param_6);
    local_378 = local_378 & 0xffffffff00000000;
    UpdateSubresources(*(undefined8 *)(local_310 + 0x28),*(undefined8 *)(lVar3 + 0x18),
                       *(undefined8 *)(local_218 + 0x18),local_1e0);
    lVar3 = local_310;
    if (*(char *)(local_310 + 0x50) == '\0') {
      plVar13 = *(longlong **)(local_310 + 0x28);
      if (*(int *)(local_310 + 0x100) != 0) {
        (**(code **)(*plVar13 + 0xd0))
                  (plVar13,*(int *)(local_310 + 0x100),*(undefined8 *)(local_310 + 0xf8));
        *(undefined4 *)(lVar3 + 0x100) = 0;
        plVar13 = *(longlong **)(lVar3 + 0x28);
      }
      iVar5 = (**(code **)(*plVar13 + 0x48))();
      if (iVar5 < 0) {
        local_370 = local_308;
        local_308[0] = 0;
        local_308[1] = 0;
        local_378 = 0;
        FUN_141a94000(iVar5,"CommandList->Close()",
                      "d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\D3D12CommandList.h"
                      ,0x46);
      }
      *(undefined1 *)(lVar3 + 0x50) = 1;
    }
    FUN_141a70ff0(*(undefined8 *)(lVar2 + 0x38),&local_318,1);
    FD3D12CommandAllocatorManager::ReleaseCommandAllocator(lVar2 + 0x50,local_2f0);
    local_318 = &PTR_FUN_144da6378;
    if (local_310 != 0) {
      LOCK();
      piVar1 = (int *)(local_310 + 8);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar5 == 1) && (local_310 != 0)) {
        FUN_141a4db60(local_310);
        FMemory::operator_delete(local_310,0x110);
      }
    }
    FUN_141a80f90(lVar10);
    thunk_FUN_141a7bb70(local_228);
  }
  if (local_330 != *(uint *)(lVar14 + 0x70)) {
    FMemory::Free(_Dst);
  }
  *local_2b0 = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141a8b760 FUN_141a8b760 body=1717 status=ok
// SIG undefined FUN_141a8b760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_141a8b760(longlong param_1,longlong *param_2,uint param_3,uint param_4,uint param_5,byte param_6
             ,uint param_7,uint param_8,longlong *param_9,uint param_10)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  void *_Dst;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  undefined1 auStack_268 [32];
  ulonglong local_248;
  undefined8 *local_240;
  longlong local_238;
  uint local_230;
  undefined1 local_228;
  uint local_220;
  undefined4 *local_218;
  undefined8 local_210;
  byte local_208;
  uint local_204;
  uint local_200;
  int local_1fc;
  uint local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  uint local_1e0;
  int local_1dc;
  undefined4 local_1d8;
  longlong local_1d0;
  undefined **local_1c8;
  longlong local_1c0;
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  int local_1a8 [6];
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  ulonglong local_170;
  uint uStack_168;
  undefined2 uStack_164;
  undefined2 uStack_162;
  undefined4 local_160;
  undefined8 uStack_15c;
  undefined4 uStack_154;
  undefined4 uStack_150;
  uint uStack_14c;
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined1 local_d8 [16];
  longlong local_c8;
  undefined8 local_90;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  uVar19 = (ulonglong)param_5;
  uVar15 = (ulonglong)param_3;
  local_1b0 = param_5;
  local_208 = param_6;
  local_200 = param_8;
  local_1b8 = param_7;
  if (DAT_1464c9c14 == 0) {
    local_200 = param_8 & 0xffffffef;
  }
  uVar7 = (ulonglong)param_6;
  uVar6 = (&DAT_1464ca1cc)[uVar7 * 10];
  local_204 = param_3;
  local_1e0 = param_4;
  local_1d8 = uVar6;
  local_1d0 = param_1;
  local_148 = param_2;
  local_1fc = FUN_141a2ea30();
  iVar20 = param_7 * param_5;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  local_180 = 3;
  local_118 = CONCAT44(uStack_17c,3);
  uStack_164 = (undefined2)param_5;
  uStack_162 = (undefined2)param_7;
  uStack_15c = 1;
  local_1f0 = 0;
  local_1e8 = 0;
  uStack_100 = CONCAT26(uStack_162,CONCAT24(uStack_164,param_4));
  uStack_110 = 0;
  local_e8 = (ulonglong)uStack_14c << 0x20;
  uStack_f4 = 1;
  uStack_f0 = 0;
  uStack_ec = 0;
  iVar18 = 0;
  iVar5 = 0;
  local_1dc = iVar20;
  local_170 = uVar15;
  uStack_168 = param_4;
  local_160 = uVar6;
  local_108 = uVar15;
  local_f8 = uVar6;
  if (0 < iVar20) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (&local_1f0);
    iVar18 = (int)local_1e8;
    iVar5 = local_1e8._4_4_;
  }
  local_1e8 = CONCAT44(local_1e8._4_4_,iVar18 + iVar20);
  if (iVar5 < iVar18 + iVar20) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_1f0);
  }
  lVar13 = local_1f0;
  _guard_xfg_dispatch_icall_nop
            ((void *)(local_1f0 + (longlong)iVar18 * 0x18),0,(longlong)iVar20 * 0x18);
  uVar14 = 0;
  if (param_10 != 0) {
    iVar18 = 0;
    do {
      uVar4 = (local_204 >> ((byte)uVar14 & 0x1f)) / (uint)(&DAT_1464ca1b8)[uVar7 * 10];
      if (uVar4 < 2) {
        uVar4 = 1;
      }
      uVar16 = 0;
      if (param_5 != 0) {
        lVar9 = *param_9;
        uVar17 = uVar14;
        do {
          lVar8 = (longlong)(int)uVar17;
          uVar17 = uVar17 + param_7;
          iVar5 = iVar18 + uVar16;
          uVar16 = uVar16 + 1;
          *(undefined8 *)(lVar13 + lVar8 * 0x18) = *(undefined8 *)(lVar9 + (longlong)iVar5 * 8);
          *(ulonglong *)(lVar13 + 8 + lVar8 * 0x18) =
               (ulonglong)((&DAT_1464ca1c4)[uVar7 * 10] * uVar4);
          *(undefined8 *)(lVar13 + 0x10 + lVar8 * 0x18) = 0;
        } while (uVar16 < param_5);
      }
      uVar14 = uVar14 + 1;
      iVar18 = iVar18 + param_5;
    } while (uVar14 < param_10);
  }
  local_1f8 = *(uint *)(local_1d0 + 0x70);
  _Dst = *(void **)(local_1d0 + 0x68);
  uVar14 = local_1f8;
  if (param_10 < param_7) {
    do {
      uVar15 = (ulonglong)(local_204 >> ((byte)param_10 & 0x1f)) /
               (ulonglong)(uint)(&DAT_1464ca1b8)[uVar7 * 10];
      if ((uint)uVar15 < 2) {
        uVar15 = 1;
      }
      local_1b4 = (uint)uVar15;
      uVar4 = (local_1e0 >> ((byte)param_10 & 0x1f)) / (uint)(&DAT_1464ca1bc)[uVar7 * 10];
      if (uVar4 < 2) {
        uVar4 = 1;
      }
      uVar4 = uVar4 * (&DAT_1464ca1c4)[uVar7 * 10] * local_1b4;
      uVar16 = (int)uVar19 * uVar4;
      if ((int)uVar19 != 0) {
        local_1c8 = (undefined **)(ulonglong)uVar4;
        uVar4 = param_10;
        do {
          if (uVar14 < uVar16) {
            local_1f8 = uVar16;
            _Dst = (void *)FMemory::Malloc(uVar16);
            _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)uVar16);
            uVar15 = (ulonglong)local_1b4;
            param_7 = local_1b8;
            uVar14 = uVar16;
          }
          lVar9 = (longlong)(int)uVar4;
          uVar4 = uVar4 + param_7;
          *(void **)(lVar13 + lVar9 * 0x18) = _Dst;
          *(ulonglong *)(lVar13 + 8 + lVar9 * 0x18) =
               (ulonglong)(uint)((&DAT_1464ca1c4)[uVar7 * 10] * (int)uVar15);
          *(undefined ***)(lVar13 + 0x10 + lVar9 * 0x18) = local_1c8;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
        uVar19 = (ulonglong)local_1b0;
      }
      param_10 = param_10 + 1;
    } while (param_10 < param_7);
  }
  lVar9 = **(longlong **)(local_1d0 + 0x50);
  lVar8 = operator_new(0x280);
  uVar6 = 1;
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    local_218 = &local_130;
    local_210 = 0;
    local_220 = local_200;
    local_228 = 0;
    local_230 = (uint)local_208;
    local_238 = CONCAT44(local_238._4_4_,1);
    local_240 = (undefined8 *)CONCAT44(local_240._4_4_,param_7);
    local_248 = CONCAT44(local_248._4_4_,(int)uVar19);
    local_130 = 1;
    local_12c = 0;
    uStack_124 = 0;
    lVar8 = FUN_141a820b0(lVar8,*(undefined8 *)(lVar9 + 0xd50),local_204,local_1e0);
  }
  local_248 = lVar8 + 0x88;
  local_230 = 0;
  local_238 = CONCAT44(local_238._4_4_,local_200);
  local_240 = (undefined8 *)CONCAT71(local_240._1_7_,local_208);
  FUN_141a918e0(*(undefined8 *)(lVar9 + 0xd50),lVar9,&local_118,0);
  local_190 = 0;
  local_184 = 0;
  local_1a8[4] = 0;
  local_1a8[2] = 0x1688;
  local_1a8[3] = 0;
  local_1a8[0] = local_1fc;
  local_1a8[1] = 5;
  local_1a8[5] = param_7;
  local_18c = (int)uVar19;
  iVar18 = FUN_141a71f60(local_1d8);
  if (iVar18 == 0x13) {
    if ((local_1fc != 0x15) && (local_1fc == 0x16)) goto LAB_141a8bb99;
  }
  else if ((iVar18 == 0x2c) && ((local_1fc != 0x2e && (local_1fc == 0x2f)))) goto LAB_141a8bb99;
  uVar6 = 0;
LAB_141a8bb99:
  local_188 = uVar6;
  puVar10 = (undefined8 *)operator_new(0x88);
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    FUN_141a823c0(puVar10,*(undefined8 *)(lVar9 + 0xd50));
    *puVar10 = &PTR_FUN_144db3f30;
    puVar10[3] = &PTR_LAB_144db3f38;
    FUN_141a75120(puVar10,local_1a8,lVar8 + 0x88,0xffffffff);
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(lVar8 + 0x118,puVar10);
  if (lVar8 != 0) {
    uVar6 = GetRequiredIntermediateSize
                      (*(undefined8 *)(*(longlong *)(lVar8 + 0x98) + 0x18),0,local_1dc);
    puVar10 = (undefined8 *)FUN_141a87a50(local_1d0);
    FUN_141a67840(local_d8,*puVar10);
    FUN_141a44bf0(puVar10,uVar6,0x200,local_d8);
    lVar9 = *(longlong *)(lVar8 + 0x80);
    lVar2 = *(longlong *)(lVar8 + 0x98);
    uVar11 = FUN_141a75680(lVar9 + 0x50);
    FUN_141a75810(*(undefined8 *)(lVar9 + 0x38),&local_1c8,uVar11);
    lVar3 = **(longlong **)(lVar9 + 0x5d8);
    *(longlong *)(local_1c0 + 0x18) = lVar3;
    piVar1 = (int *)(lVar3 + 0x2c54);
    *piVar1 = *piVar1 + 1;
    local_240 = (undefined8 *)CONCAT44(local_240._4_4_,local_1dc);
    local_248 = local_248 & 0xffffffff00000000;
    local_238 = lVar13;
    UpdateSubresources(*(undefined8 *)(local_1c0 + 0x28),*(undefined8 *)(lVar2 + 0x18),
                       *(undefined8 *)(local_c8 + 0x18),local_90);
    lVar2 = local_1c0;
    if (*(char *)(local_1c0 + 0x50) == '\0') {
      plVar12 = *(longlong **)(local_1c0 + 0x28);
      if (*(int *)(local_1c0 + 0x100) != 0) {
        (**(code **)(*plVar12 + 0xd0))
                  (plVar12,*(int *)(local_1c0 + 0x100),*(undefined8 *)(local_1c0 + 0xf8));
        *(undefined4 *)(lVar2 + 0x100) = 0;
        plVar12 = *(longlong **)(lVar2 + 0x28);
      }
      iVar18 = (**(code **)(*plVar12 + 0x48))();
      if (iVar18 < 0) {
        local_240 = &local_140;
        local_140 = 0;
        local_138 = 0;
        local_248 = 0;
        FUN_141a94000(iVar18,"CommandList->Close()",
                      "d:\\oak\\main\\engine\\source\\runtime\\d3d12rhi\\private\\D3D12CommandList.h"
                      ,0x46);
      }
      *(undefined1 *)(lVar2 + 0x50) = 1;
    }
    FUN_141a70ff0(*(undefined8 *)(lVar9 + 0x38),&local_1c8,1);
    FD3D12CommandAllocatorManager::ReleaseCommandAllocator(lVar9 + 0x50,uVar11);
    local_1c8 = &PTR_FUN_144da6378;
    if (local_1c0 != 0) {
      LOCK();
      piVar1 = (int *)(local_1c0 + 8);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar13 = local_1f0;
      if ((iVar18 == 1) && (local_1c0 != 0)) {
        FUN_141a4db60(local_1c0);
        FMemory::operator_delete(local_1c0,0x110);
        lVar13 = local_1f0;
      }
    }
    FUN_141a81050(lVar8);
    thunk_FUN_141a7bb70(local_d8);
  }
  if (local_1f8 != *(uint *)(local_1d0 + 0x70)) {
    FMemory::Free(_Dst);
  }
  plVar12 = local_148;
  *local_148 = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    lVar13 = local_1f0;
  }
  if (lVar13 != 0) {
    FMemory::Free(lVar13);
  }
  return plVar12;
}



// FUNCTION 141a8be20 FUN_141a8be20 body=680 status=ok
// SIG undefined FUN_141a8be20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a8be20(undefined8 param_1,longlong *param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int *param_7)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  uint in_stack_fffffffffffffec8;
  ulonglong in_stack_fffffffffffffed0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  int local_88;
  undefined8 local_68;
  undefined4 local_60;
  int local_58;
  
  local_c8 = 1;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c4 = _DAT_1468b5d78;
  uStack_c0 = uRam00000001468b5d7c;
  uStack_bc = uRam00000001468b5d80;
  uStack_b8 = uRam00000001468b5d84;
  local_b4 = 0;
  lVar13 = FUN_141a7e030(param_1,param_5,param_6,1,in_stack_fffffffffffffec8 & 0xffffff00,
                         in_stack_fffffffffffffed0 & 0xffffffffffffff00,
                         (char)*(undefined4 *)(param_3 + 0x3c),param_4,1,
                         *(undefined4 *)(param_3 + 0x40),&local_d8);
  uVar2 = *(uint *)(param_3 + 0x34);
  lVar6 = *(longlong *)(param_3 + 0x78);
  uVar3 = *(uint *)(lVar13 + 0x34);
  uVar12 = uVar3;
  if (uVar2 <= uVar3) {
    uVar12 = uVar2;
  }
  uVar16 = (ulonglong)uVar12;
  iVar14 = uVar2 - uVar12;
  lVar7 = **(longlong **)(lVar6 + 0x5d8);
  lVar8 = *(longlong *)(lVar13 + 0x90);
  lVar15 = lVar7 + 0x460;
  uVar4 = *(undefined4 *)(lVar8 + 0xa8);
  FUN_141a4f5b0(lVar15,lVar8,uVar4,0x400,0xffffffff);
  lVar9 = *(longlong *)(param_3 + 0x90);
  uVar5 = *(undefined4 *)(lVar9 + 0xa8);
  FUN_141a4f5b0(lVar15,lVar9,uVar5,0x800,0xffffffff);
  lVar10 = *(longlong *)(lVar7 + 0x468);
  if (*(int *)(lVar10 + 0x100) != 0) {
    (**(code **)(**(longlong **)(lVar10 + 0x28) + 0xd0))();
    *(undefined4 *)(lVar10 + 0x100) = 0;
  }
  if (uVar12 != 0) {
    iVar17 = (uVar3 - uVar12) - iVar14;
    do {
      local_68 = *(undefined8 *)(*(longlong *)(lVar13 + 0x90) + 0x18);
      local_58 = iVar17 + iVar14;
      local_60 = 0;
      local_98 = *(undefined8 *)(*(longlong *)(param_3 + 0x90) + 0x18);
      local_90 = 0;
      piVar1 = (int *)(**(longlong **)(lVar6 + 0x5d8) + 0x2c54);
      *piVar1 = *piVar1 + 1;
      plVar11 = *(longlong **)(*(longlong *)(lVar7 + 0x468) + 0x28);
      local_88 = iVar14;
      (**(code **)(*plVar11 + 0x80))(plVar11,&local_68,0,0,0,&local_98,0);
      iVar14 = iVar14 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  FUN_141a4f5b0(lVar15,lVar9,0x800,uVar5,0xffffffff);
  FUN_141a4f5b0(lVar15,lVar8,0x400,uVar4,0xffffffff);
  LOCK();
  *param_7 = *param_7 + -1;
  UNLOCK();
  *param_2 = lVar13;
  LOCK();
  *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
  UNLOCK();
  return;
}



// FUNCTION 141a8c0d0 FUN_141a8c0d0 body=695 status=ok
// SIG undefined FUN_141a8c0d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a8c0d0(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,int *param_8)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong in_stack_fffffffffffffec0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  int local_88;
  undefined8 local_68;
  undefined4 local_60;
  int local_58;
  
  local_c8 = 1;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c4 = _DAT_1468b5d78;
  uStack_c0 = uRam00000001468b5d7c;
  uStack_bc = uRam00000001468b5d80;
  uStack_b8 = uRam00000001468b5d84;
  local_b4 = 0;
  lVar13 = FUN_141a7ef50(param_1,param_6,param_7,param_4,1,
                         in_stack_fffffffffffffec0 & 0xffffffffffffff00,
                         (char)*(undefined4 *)(param_3 + 0x3c),param_5,1,
                         *(undefined4 *)(param_3 + 0x40),&local_d8);
  uVar2 = *(uint *)(param_3 + 0x34);
  uVar3 = *(uint *)(lVar13 + 0x34);
  uVar12 = *(uint *)(lVar13 + 0x68);
  if (*(uint *)(param_3 + 0x68) <= *(uint *)(lVar13 + 0x68)) {
    uVar12 = *(uint *)(param_3 + 0x68);
  }
  uVar14 = uVar3;
  if (uVar2 <= uVar3) {
    uVar14 = uVar2;
  }
  lVar6 = *(longlong *)(param_3 + 0x80);
  lVar7 = **(longlong **)(lVar6 + 0x5d8);
  lVar8 = *(longlong *)(lVar13 + 0x98);
  lVar17 = lVar7 + 0x460;
  uVar4 = *(undefined4 *)(lVar8 + 0xa8);
  FUN_141a4f5b0(lVar17,lVar8,uVar4,0x400,0xffffffff);
  lVar9 = *(longlong *)(param_3 + 0x98);
  uVar5 = *(undefined4 *)(lVar9 + 0xa8);
  FUN_141a4f5b0(lVar17,lVar9,uVar5,0x800,0xffffffff);
  lVar10 = *(longlong *)(lVar7 + 0x468);
  if (*(int *)(lVar10 + 0x100) != 0) {
    (**(code **)(**(longlong **)(lVar10 + 0x28) + 0xd0))();
    *(undefined4 *)(lVar10 + 0x100) = 0;
  }
  uVar16 = 0;
  if (uVar14 != 0) {
    do {
      uVar15 = 0;
      if (uVar12 != 0) {
        do {
          local_68 = *(undefined8 *)(*(longlong *)(lVar13 + 0x98) + 0x18);
          local_60 = 0;
          local_58 = *(int *)(lVar13 + 0x34) * uVar15 + uVar16 + (uVar3 - uVar14);
          local_98 = *(undefined8 *)(*(longlong *)(param_3 + 0x98) + 0x18);
          local_90 = 0;
          local_88 = *(int *)(param_3 + 0x34) * uVar15 + uVar16 + (uVar2 - uVar14);
          piVar1 = (int *)(**(longlong **)(lVar6 + 0x5d8) + 0x2c54);
          *piVar1 = *piVar1 + 1;
          plVar11 = *(longlong **)(*(longlong *)(lVar7 + 0x468) + 0x28);
          (**(code **)(*plVar11 + 0x80))(plVar11,&local_68,0,0,0,&local_98,0);
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar12);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar14);
  }
  FUN_141a4f5b0(lVar17,lVar9,0x800,uVar5,0xffffffff);
  FUN_141a4f5b0(lVar17,lVar8,0x400,uVar4,0xffffffff);
  LOCK();
  *param_8 = *param_8 + -1;
  UNLOCK();
  *param_2 = lVar13;
  LOCK();
  *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
  UNLOCK();
  return;
}



// FUNCTION 141a8c390 FUN_141a8c390 body=282 status=ok
// SIG undefined FUN_141a8c390(void)

void FUN_141a8c390(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  
  *(int *)(param_1 + 0x36) = (int)param_1[0x36] + 1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469fd468) {
    _Init_thread_header(&DAT_1469fd468);
    if (DAT_1469fd468 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_1469fd460 =
           (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.RHILogBeginEndScopes")
      ;
      _Init_thread_footer(&DAT_1469fd468);
    }
  }
  if (DAT_1469fd460 != (longlong *)0x0) {
    (**(code **)(*DAT_1469fd460 + 0x68))();
  }
  TRefCountPtr<FRHITexture>::operator=(param_1[0x2e] + 0x720,param_2);
  if (param_3 == 0) {
    param_3 = *(longlong *)(param_2 + 0xb8);
  }
  local_20 = 0;
  local_1c = 0xffffffff;
  local_18 = 0x101;
  local_28 = param_3;
  (**(code **)(*param_1 + 0x250))(param_1,1,&local_28,0,0,0);
  return;
}



// FUNCTION 141a8c4b0 FUN_141a8c4b0 body=223 status=ok
// SIG undefined FUN_141a8c4b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_141a8c4b0(longlong param_1,ulonglong param_2,undefined4 param_3,undefined2 param_4,byte param_5,
             undefined2 param_6,undefined4 param_7,undefined8 param_8,undefined4 *param_9)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  ulonglong local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_54 = 0;
  local_4c = 0;
  local_30 = 0;
  local_28 = 0;
  local_38 = (&DAT_1464ca1cc)[(ulonglong)param_5 * 10];
  local_3a = param_6;
  local_34 = param_7;
  local_48 = param_2 & 0xffffffff;
  local_58 = 3;
  local_40 = param_3;
  local_3c = param_4;
  plVar1 = (longlong *)
           mu::Mesh::GetFaceBuffers(*(undefined8 *)(**(longlong **)(param_1 + 0x50) + 0xd50));
  local_68 = &local_58;
  (**(code **)(*plVar1 + 200))(plVar1,&local_20,0,1);
  *param_9 = local_18;
  return local_20;
}



// FUNCTION 141a8c590 FUN_141a8c590 body=210 status=ok
// SIG undefined FUN_141a8c590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_141a8c590(longlong param_1,ulonglong param_2,undefined4 param_3,byte param_4,undefined2 param_5,
             undefined4 param_6,undefined8 param_7,undefined4 *param_8)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  ulonglong local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_64 = 0;
  local_5c = 0;
  local_40 = 0;
  local_38 = 0;
  local_4c = 1;
  local_48 = (&DAT_1464ca1cc)[(ulonglong)param_4 * 10];
  local_4a = param_5;
  local_44 = param_6;
  local_58 = param_2 & 0xffffffff;
  local_78 = &local_68;
  local_68 = 3;
  plVar1 = *(longlong **)(**(longlong **)(param_1 + 0x50) + 0x18);
  local_50 = param_3;
  (**(code **)(*plVar1 + 200))(plVar1,&local_30,0,1);
  *param_8 = local_28;
  return local_30;
}



// FUNCTION 141a8c670 FUN_141a8c670 body=206 status=ok
// SIG undefined FUN_141a8c670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_141a8c670(longlong param_1,ulonglong param_2,undefined4 param_3,undefined2 param_4,byte param_5,
             undefined2 param_6,undefined8 param_7,undefined4 *param_8)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  ulonglong local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_54 = 0;
  local_4c = 0;
  local_38 = (&DAT_1464ca1cc)[(ulonglong)param_5 * 10];
  local_3a = param_6;
  local_48 = param_2 & 0xffffffff;
  local_68 = &local_58;
  local_30 = 0;
  local_28 = 0;
  local_58 = 4;
  local_34 = 1;
  plVar1 = *(longlong **)(**(longlong **)(param_1 + 0x50) + 0x18);
  local_40 = param_3;
  local_3c = param_4;
  (**(code **)(*plVar1 + 200))(plVar1,&local_20,0,1);
  *param_8 = local_18;
  return local_20;
}



// FUNCTION 141a8c740 FUN_141a8c740 body=230 status=ok
// SIG undefined FUN_141a8c740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_141a8c740(longlong param_1,uint param_2,short param_3,ulonglong param_4,undefined2 param_5,
             undefined8 param_6,undefined4 *param_7)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  ulonglong local_48;
  uint local_40;
  short local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_58 = 3;
  local_34 = 1;
  local_54 = 0;
  local_3c = param_3 * 6;
  local_4c = 0;
  local_30 = 0;
  local_28 = 0;
  local_38 = (&DAT_1464ca1cc)[(param_4 & 0xff) * 10];
  local_48 = (ulonglong)param_2;
  local_3a = param_5;
  local_40 = param_2;
  plVar1 = (longlong *)
           mu::Mesh::GetFaceBuffers(*(undefined8 *)(**(longlong **)(param_1 + 0x50) + 0xd50));
  local_68 = &local_58;
  (**(code **)(*plVar1 + 200))(plVar1,&local_20,0,1);
  *param_7 = local_18;
  return local_20;
}



// FUNCTION 141a8c830 FUN_141a8c830 body=198 status=ok
// SIG undefined FUN_141a8c830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_141a8c830(longlong param_1,uint param_2,ulonglong param_3,undefined2 param_4,undefined8 param_5,
             undefined4 *param_6)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  ulonglong local_48;
  uint local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_3c = 6;
  local_54 = 0;
  local_4c = 0;
  local_30 = 0;
  local_28 = 0;
  local_58 = 3;
  local_38 = (&DAT_1464ca1cc)[(param_3 & 0xff) * 10];
  local_48 = (ulonglong)param_2;
  local_68 = &local_58;
  local_34 = 1;
  plVar1 = *(longlong **)(**(longlong **)(param_1 + 0x50) + 0x18);
  local_40 = param_2;
  local_3a = param_4;
  (**(code **)(*plVar1 + 200))(plVar1,&local_20,0,1);
  *param_6 = local_18;
  return local_20;
}



// FUNCTION 141a8c900 FUN_141a8c900 body=409 status=ok
// SIG undefined FUN_141a8c900(void)

void FUN_141a8c900(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined8 in_stack_ffffffffffffffc8;
  uint uVar11;
  
  uVar11 = (uint)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  cVar5 = FUN_141a512b0(*(undefined8 *)(param_1 + 0x2340),1);
  if (cVar5 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x2340) + 8))();
  }
  iVar6 = FUN_141a5f440(*(undefined8 *)(param_1 + 0x2340),1);
  lVar9 = *(longlong *)(param_1 + 0x2340);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  lVar2 = *(longlong *)(lVar9 + 0x30);
  lVar3 = *(longlong *)(lVar9 + 0x38);
  uVar8 = (ulonglong)(uint)(*(int *)(lVar9 + 0x28) * iVar6);
  plVar7 = (longlong *)mu::Mesh::GetFaceBuffers(*(undefined8 *)(param_1 + 0x1b8));
  (**(code **)(*plVar7 + 0xc0))(plVar7,1,lVar2 + uVar8,uVar1,(ulonglong)uVar11 << 0x20);
  iVar6 = *(int *)(param_2 + 0x5c);
  uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10);
  if (iVar6 == 1) {
    uVar10 = 0;
  }
  else {
    if (iVar6 != 4) {
      if ((iVar6 == 5) || (iVar6 == 8)) {
        FUN_141a60ce0(param_1 + 0x460,uVar4,8,param_2 + 0x48);
      }
      goto LAB_141a8c9f6;
    }
    uVar10 = *(undefined4 *)(param_2 + 0x60);
  }
  FUN_141a60fb0(param_1 + 0x460,uVar4,8,uVar10);
LAB_141a8c9f6:
  *(int *)(param_1 + 0x2c4c) = *(int *)(param_1 + 0x2c4c) + 1;
  lVar9 = *(longlong *)(param_1 + 0x468);
  if (*(int *)(lVar9 + 0x100) != 0) {
    (**(code **)(**(longlong **)(lVar9 + 0x28) + 0xd0))
              (*(longlong **)(lVar9 + 0x28),*(int *)(lVar9 + 0x100),*(undefined8 *)(lVar9 + 0xf8));
    *(undefined4 *)(lVar9 + 0x100) = 0;
    lVar9 = *(longlong *)(param_1 + 0x468);
  }
  (**(code **)(**(longlong **)(lVar9 + 0x28) + 0x188))
            (*(longlong **)(lVar9 + 0x28),lVar3 + uVar8,uVar1,
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x40) + 0x10) + 0x18),param_3,0,0
            );
  if (*(char *)(param_1 + 0x1a8) != '\0') {
    FUN_141a5e390(*(undefined8 *)(param_1 + 0x1b8),1);
  }
  return;
}



// FUNCTION 141a8caa0 FUN_141a8caa0 body=36 status=ok
// SIG undefined FUN_141a8caa0(void)

undefined4 FUN_141a8caa0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  lVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  return *(undefined4 *)(lVar1 + 0x98);
}



// FUNCTION 141a8cad0 FUN_141a8cad0 body=568 status=ok
// SIG undefined FUN_141a8cad0(void)

void FUN_141a8cad0(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 local_a8;
  undefined4 local_a0;
  int local_98;
  undefined8 local_78;
  undefined4 local_70;
  int local_68;
  
  uVar2 = *(uint *)(param_3 + 0x34);
  uVar3 = *(uint *)(param_2 + 0x34);
  lVar6 = *(longlong *)(param_2 + 0x80);
  uVar12 = *(uint *)(param_3 + 0x68);
  if (*(uint *)(param_2 + 0x68) <= *(uint *)(param_3 + 0x68)) {
    uVar12 = *(uint *)(param_2 + 0x68);
  }
  uVar13 = uVar2;
  if (uVar3 <= uVar2) {
    uVar13 = uVar3;
  }
  lVar7 = **(longlong **)(lVar6 + 0x5d8);
  lVar8 = *(longlong *)(param_2 + 0x98);
  lVar16 = lVar7 + 0x460;
  uVar4 = *(undefined4 *)(lVar8 + 0xa8);
  FUN_141a4f5b0(lVar16,lVar8,uVar4,0x400,0xffffffff);
  lVar9 = *(longlong *)(param_3 + 0x98);
  uVar5 = *(undefined4 *)(lVar9 + 0xa8);
  FUN_141a4f5b0(lVar16,lVar9,uVar5,0x800,0xffffffff);
  lVar10 = *(longlong *)(lVar7 + 0x468);
  if (*(int *)(lVar10 + 0x100) != 0) {
    (**(code **)(**(longlong **)(lVar10 + 0x28) + 0xd0))();
    *(undefined4 *)(lVar10 + 0x100) = 0;
  }
  uVar15 = 0;
  if (uVar13 != 0) {
    do {
      uVar14 = 0;
      if (uVar12 != 0) {
        do {
          local_78 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x18);
          local_70 = 0;
          local_68 = *(int *)(param_2 + 0x34) * uVar14 + uVar15 + (uVar3 - uVar13);
          local_a8 = *(undefined8 *)(*(longlong *)(param_3 + 0x98) + 0x18);
          local_a0 = 0;
          local_98 = uVar14 * *(int *)(param_3 + 0x34) + uVar15 + (uVar2 - uVar13);
          piVar1 = (int *)(**(longlong **)(lVar6 + 0x5d8) + 0x2c54);
          *piVar1 = *piVar1 + 1;
          plVar11 = *(longlong **)(*(longlong *)(lVar7 + 0x468) + 0x28);
          (**(code **)(*plVar11 + 0x80))(plVar11,&local_78,0,0,0,&local_a8,0);
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar12);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar13);
  }
  FUN_141a4f5b0(lVar16,lVar9,0x800,uVar5,0xffffffff);
  FUN_141a4f5b0(lVar16,lVar8,0x400,uVar4,0xffffffff);
  return;
}



// FUNCTION 141a8cd10 FUN_141a8cd10 body=491 status=ok
// SIG undefined FUN_141a8cd10(void)

void FUN_141a8cd10(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  undefined8 local_a8;
  undefined4 local_a0;
  int local_98;
  undefined8 local_78;
  undefined4 local_70;
  int local_68;
  
  uVar2 = *(uint *)(param_3 + 0x34);
  uVar3 = *(uint *)(param_2 + 0x34);
  lVar6 = *(longlong *)(param_2 + 0x78);
  uVar12 = uVar2;
  if (uVar3 <= uVar2) {
    uVar12 = uVar3;
  }
  uVar15 = (ulonglong)uVar12;
  iVar13 = uVar2 - uVar12;
  lVar7 = **(longlong **)(lVar6 + 0x5d8);
  lVar8 = *(longlong *)(param_2 + 0x90);
  lVar14 = lVar7 + 0x460;
  uVar4 = *(undefined4 *)(lVar8 + 0xa8);
  FUN_141a4f5b0(lVar14,lVar8,uVar4,0x400,0xffffffff);
  lVar9 = *(longlong *)(param_3 + 0x90);
  uVar5 = *(undefined4 *)(lVar9 + 0xa8);
  FUN_141a4f5b0(lVar14,lVar9,uVar5,0x800,0xffffffff);
  lVar10 = *(longlong *)(lVar7 + 0x468);
  if (*(int *)(lVar10 + 0x100) != 0) {
    (**(code **)(**(longlong **)(lVar10 + 0x28) + 0xd0))();
    *(undefined4 *)(lVar10 + 0x100) = 0;
  }
  if (uVar12 != 0) {
    iVar16 = (uVar3 - uVar12) - iVar13;
    do {
      local_78 = *(undefined8 *)(*(longlong *)(param_2 + 0x90) + 0x18);
      local_68 = iVar16 + iVar13;
      local_70 = 0;
      local_a8 = *(undefined8 *)(*(longlong *)(param_3 + 0x90) + 0x18);
      local_a0 = 0;
      piVar1 = (int *)(**(longlong **)(lVar6 + 0x5d8) + 0x2c54);
      *piVar1 = *piVar1 + 1;
      plVar11 = *(longlong **)(*(longlong *)(lVar7 + 0x468) + 0x28);
      local_98 = iVar13;
      (**(code **)(*plVar11 + 0x80))(plVar11,&local_78,0,0,0,&local_a8,0);
      iVar13 = iVar13 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  FUN_141a4f5b0(lVar14,lVar9,0x800,uVar5,0xffffffff);
  FUN_141a4f5b0(lVar14,lVar8,0x400,uVar4,0xffffffff);
  return;
}



// FUNCTION 141a8cf00 FUN_141a8cf00 body=122 status=ok
// SIG undefined FUN_141a8cf00(void)

void FUN_141a8cf00(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)(param_2 + 0x28);
  if (param_2 == 0) {
    plVar6 = (longlong *)&DAT_00000030;
  }
  lVar2 = *plVar6;
  plVar6 = (longlong *)(param_2 + 0x40);
  if (param_2 == 0) {
    plVar6 = (longlong *)&DAT_00000048;
  }
  lVar3 = *plVar6;
  plVar6 = (longlong *)(param_3 + 0x40);
  if (param_3 == 0) {
    plVar6 = (longlong *)&DAT_00000048;
  }
  lVar4 = *plVar6;
  lVar5 = **(longlong **)(lVar2 + 0x5d8);
  piVar1 = (int *)(lVar5 + 0x2c54);
  *piVar1 = *piVar1 + 1;
  plVar6 = *(longlong **)(*(longlong *)(lVar5 + 0x468) + 0x28);
  (**(code **)(*plVar6 + 0x88))(plVar6,*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar3 + 0x18));
  FUN_141a5e390(lVar2,1);
  return;
}



// FUNCTION 141a8cf80 FUN_141a8cf80 body=506 status=ok
// SIG undefined FUN_141a8cf80(void)

longlong * FUN_141a8cf80(undefined8 param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  uint *puVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong local_res10;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong uStack_38;
  uint local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  lVar12 = param_3 + 0x38;
  *param_2 = 0;
  local_3c = 0;
  uStack_38 = 0;
  if (param_3 == 0) {
    lVar12 = 0x40;
  }
  local_28 = 0;
  puVar6 = (uint *)(param_3 + 0x1c);
  local_40 = 0x1688;
  local_44 = 1;
  if (param_3 == 0) {
    puVar6 = (uint *)&DAT_00000024;
  }
  uVar1 = *puVar6;
  puVar6 = (uint *)(param_3 + 0x18);
  if (param_3 == 0) {
    puVar6 = (uint *)&DAT_00000020;
  }
  uVar2 = *puVar6;
  pbVar7 = (byte *)(param_3 + 0x20);
  if (param_3 == 0) {
    pbVar7 = &DAT_00000028;
  }
  if ((*pbVar7 & 0x20) == 0) {
    local_48 = 0x2a;
    if (uVar2 == 2) {
      local_48 = 0x39;
    }
    local_30 = uVar1 / uVar2;
    plVar9 = (longlong *)((ulonglong)uVar1 % (ulonglong)uVar2);
  }
  else {
    local_30 = uVar1 >> 2;
    local_48 = 0x27;
    local_28 = 1;
    plVar9 = param_2;
  }
  local_2c = 0;
  if (*(longlong *)(lVar12 + 0x10) != 0) {
    uStack_38 = *(ulonglong *)(lVar12 + 0x48) / (ulonglong)uVar2;
    plVar9 = (longlong *)(*(ulonglong *)(lVar12 + 0x48) % (ulonglong)uVar2);
  }
  puVar8 = (undefined8 *)operator_new(0x88,plVar9);
  if (puVar8 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)(param_3 + 0x30);
    if (param_3 == 0) {
      puVar10 = (undefined8 *)&DAT_00000038;
    }
    FUN_141a823c0(puVar8,*puVar10);
    *puVar8 = &PTR_FUN_144db3f30;
    puVar8[3] = &PTR_LAB_144db3f38;
    FUN_141a75120(puVar8,&local_48,lVar12,uVar2);
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_2);
  local_res10 = *param_2;
  if (local_res10 != 0) {
    LOCK();
    *(int *)(local_res10 + 8) = *(int *)(local_res10 + 8) + 1;
    UNLOCK();
    lpCriticalSection = (LPCRITICAL_SECTION)(param_3 + 0x158);
    if (param_3 == 0) {
      lpCriticalSection = (LPCRITICAL_SECTION)0x160;
    }
    BVar4 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar4 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    uVar11 = param_3 + 0x180;
    if (param_3 == 0) {
      uVar11 = 0x188;
    }
    iVar3 = *(int *)(uVar11 + 0x10);
    iVar5 = iVar3 + 1;
    *(int *)(uVar11 + 0x10) = iVar5;
    if (*(int *)(uVar11 + 0x14) < iVar5) {
      TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
      ::ResizeGrow(uVar11);
    }
    lVar12 = local_res10;
    local_res10 = 0;
    *(longlong *)
     (((ulonglong)(*(longlong *)(uVar11 + 8) != 0) - 1 & uVar11 | *(ulonglong *)(uVar11 + 8)) +
     (longlong)iVar3 * 8) = lVar12;
    LeaveCriticalSection(lpCriticalSection);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  return param_2;
}



// FUNCTION 141a8d180 FUN_141a8d180 body=501 status=ok
// SIG undefined FUN_141a8d180(void)

longlong * FUN_141a8d180(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong local_res10;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  ulonglong local_38;
  undefined4 local_30;
  ulonglong local_2c;
  undefined4 local_24;
  
  local_40 = 0x1688;
  *param_2 = 0;
  local_24 = 0;
  lVar9 = param_3 + 0x38;
  puVar4 = (uint *)(param_3 + 0x20);
  if (param_3 == 0) {
    lVar9 = 0x40;
    puVar4 = (uint *)&DAT_00000028;
  }
  puVar5 = (uint *)(param_3 + 0x18);
  if (param_3 == 0) {
    puVar5 = (uint *)&DAT_00000020;
  }
  uVar10 = *puVar5;
  if ((*puVar4 >> 5 & 1) == 0) {
    if ((*puVar4 >> 0xe & 1) == 0) {
      local_2c = (ulonglong)uVar10;
      local_48 = 0;
    }
    else {
      local_2c = 1;
      uVar10 = 1;
      local_48 = 0x3e;
    }
  }
  else {
    local_2c = 0x100000000;
    uVar10 = 4;
    local_48 = 0x27;
  }
  uVar8 = (ulonglong)uVar10;
  local_44 = 1;
  local_30 = (undefined4)(*(ulonglong *)(lVar9 + 0x60) / uVar8);
  local_38 = *(ulonglong *)(lVar9 + 0x48) / uVar8;
  puVar6 = (undefined8 *)operator_new(0x88,*(ulonglong *)(lVar9 + 0x48) % uVar8);
  if (puVar6 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)(param_3 + 0x30);
    if (param_3 == 0) {
      puVar7 = (undefined8 *)&DAT_00000038;
    }
    FUN_141a823c0(puVar6,*puVar7);
    *puVar6 = &PTR_FUN_144db3f30;
    puVar6[3] = &PTR_LAB_144db3f38;
    FUN_141a75120(puVar6,&local_48,lVar9,uVar10);
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_2);
  local_res10 = *param_2;
  if (local_res10 != 0) {
    LOCK();
    *(int *)(local_res10 + 8) = *(int *)(local_res10 + 8) + 1;
    UNLOCK();
    lpCriticalSection = (LPCRITICAL_SECTION)(param_3 + 0x158);
    if (param_3 == 0) {
      lpCriticalSection = (LPCRITICAL_SECTION)0x160;
    }
    BVar2 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar2 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    uVar8 = param_3 + 0x180;
    if (param_3 == 0) {
      uVar8 = 0x188;
    }
    iVar1 = *(int *)(uVar8 + 0x10);
    iVar3 = iVar1 + 1;
    *(int *)(uVar8 + 0x10) = iVar3;
    if (*(int *)(uVar8 + 0x14) < iVar3) {
      TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
      ::ResizeGrow(uVar8);
    }
    lVar9 = local_res10;
    local_res10 = 0;
    *(longlong *)
     (((ulonglong)(*(longlong *)(uVar8 + 8) != 0) - 1 & uVar8 | *(ulonglong *)(uVar8 + 8)) +
     (longlong)iVar1 * 8) = lVar9;
    LeaveCriticalSection(lpCriticalSection);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  return param_2;
}



// FUNCTION 141a8d380 FUN_141a8d380 body=296 status=ok
// SIG undefined FUN_141a8d380(void)

longlong * FUN_141a8d380(undefined8 param_1,longlong *param_2,longlong param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  longlong local_res10;
  int local_48 [5];
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  
  local_48[2] = 0x1688;
  local_48[3] = 0;
  uVar5 = 1;
  local_34 = 1;
  local_2c = 0;
  local_24 = 0;
  local_48[1] = 4;
  local_48[4] = param_4 & 0xff;
  uVar1 = *(undefined4 *)(*(longlong *)(param_3 + 0x90) + 0x50);
  iVar2 = FUN_141a2ea30(uVar1,CONCAT31((uint3)(*(uint *)(param_3 + 0x40) >> 0xc),
                                       (char)(*(uint *)(param_3 + 0x40) >> 4)) & 0xffffff01);
  local_48[0] = iVar2;
  iVar3 = FUN_141a71f60(uVar1);
  if (iVar3 == 0x13) {
    if ((iVar2 != 0x15) && (iVar2 == 0x16)) goto LAB_141a8d40f;
  }
  else if ((iVar3 == 0x2c) && ((iVar2 != 0x2e && (iVar2 == 0x2f)))) goto LAB_141a8d40f;
  uVar5 = 0;
LAB_141a8d40f:
  local_30 = uVar5;
  puVar4 = (undefined8 *)operator_new(0x88);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    FUN_141a823c0(puVar4,*(undefined8 *)(param_3 + 0x78));
    *puVar4 = &PTR_FUN_144db3f30;
    puVar4[3] = &PTR_LAB_144db3f38;
    FUN_141a75120(puVar4,local_48,param_3 + 0x80,0xffffffff);
  }
  *param_2 = (longlong)puVar4;
  local_res10 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
    local_res10 = *param_2;
  }
  if (local_res10 != 0) {
    LOCK();
    *(int *)(local_res10 + 8) = *(int *)(local_res10 + 8) + 1;
    UNLOCK();
  }
  FUN_141a83aa0(param_3 + 0x68,&local_res10);
  return param_2;
}



// FUNCTION 141a8d4b0 FUN_141a8d4b0 body=377 status=ok
// SIG undefined FUN_141a8d4b0(void)

longlong *
FUN_141a8d4b0(undefined8 param_1,longlong *param_2,longlong param_3,byte param_4,byte param_5,
             byte param_6)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  longlong local_res10;
  int local_48 [3];
  longlong local_3c;
  undefined8 uStack_34;
  undefined8 local_2c;
  undefined4 local_24;
  
  lVar1 = *(longlong *)(param_3 + 0x90);
  if ((*(uint *)(param_3 + 0x40) >> 0x18 & 1) == 0) {
    uVar4 = (&DAT_1464ca1cc)[(ulonglong)param_6 * 10];
  }
  else {
    uVar4 = 0x57;
  }
  local_48[0] = FUN_141a2ea30(uVar4,*(uint *)(param_3 + 0x40) >> 4 & 0xffffff01);
  local_3c = 0;
  uStack_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_48[2] = 0x1688;
  if (1 < *(uint *)(lVar1 + 0x54)) {
    local_48[1] = 6;
    goto LAB_141a8d58c;
  }
  local_3c = (ulonglong)param_4 << 0x20;
  uStack_34 = (ulonglong)param_5;
  local_48[1] = 4;
  iVar2 = FUN_141a71f60(uVar4);
  if (iVar2 == 0x13) {
    iVar2 = local_48[0] + -0x15;
LAB_141a8d57b:
    if ((iVar2 == 0) || (iVar2 != 1)) goto LAB_141a8d586;
    uVar4 = 1;
  }
  else {
    if (iVar2 == 0x2c) {
      iVar2 = local_48[0] + -0x2e;
      goto LAB_141a8d57b;
    }
LAB_141a8d586:
    uVar4 = 0;
  }
  uStack_34 = CONCAT44(uVar4,(undefined4)uStack_34);
LAB_141a8d58c:
  puVar3 = (undefined8 *)operator_new(0x88);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_141a823c0(puVar3,*(undefined8 *)(param_3 + 0x78));
    *puVar3 = &PTR_FUN_144db3f30;
    puVar3[3] = &PTR_LAB_144db3f38;
    FUN_141a75120(puVar3,local_48,param_3 + 0x80,0xffffffff);
  }
  *param_2 = (longlong)puVar3;
  local_res10 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    local_res10 = *param_2;
  }
  if (local_res10 != 0) {
    LOCK();
    *(int *)(local_res10 + 8) = *(int *)(local_res10 + 8) + 1;
    UNLOCK();
  }
  FUN_141a83aa0(param_3 + 0x68,&local_res10);
  return param_2;
}



// FUNCTION 141a8d630 FUN_141a8d630 body=307 status=ok
// SIG undefined FUN_141a8d630(void)

longlong * FUN_141a8d630(undefined8 param_1,longlong *param_2,longlong param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  longlong local_res10;
  int local_48 [5];
  undefined8 local_34;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar5 = 1;
  local_48[2] = 0x1688;
  local_48[3] = 0;
  uVar1 = *(undefined4 *)(*(longlong *)(param_3 + 0x98) + 0x50);
  local_2c = (uint)*(ushort *)(*(longlong *)(param_3 + 0x98) + 0x4c);
  local_48[4] = param_4 & 0xff;
  local_24 = 0;
  local_48[1] = 5;
  local_34 = 1;
  iVar2 = FUN_141a2ea30(uVar1,CONCAT31((uint3)(*(uint *)(param_3 + 0x40) >> 0xc),
                                       (char)(*(uint *)(param_3 + 0x40) >> 4)) & 0xffffff01);
  local_48[0] = iVar2;
  iVar3 = FUN_141a71f60(uVar1);
  if (iVar3 == 0x13) {
    if ((iVar2 != 0x15) && (iVar2 == 0x16)) goto LAB_141a8d6c7;
  }
  else if ((iVar3 == 0x2c) && ((iVar2 != 0x2e && (iVar2 == 0x2f)))) goto LAB_141a8d6c7;
  uVar5 = 0;
LAB_141a8d6c7:
  local_28 = uVar5;
  puVar4 = (undefined8 *)operator_new(0x88);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    FUN_141a823c0(puVar4,*(undefined8 *)(param_3 + 0x80));
    *puVar4 = &PTR_FUN_144db3f30;
    puVar4[3] = &PTR_LAB_144db3f38;
    FUN_141a75120(puVar4,local_48,param_3 + 0x88,0xffffffff);
  }
  *param_2 = (longlong)puVar4;
  local_res10 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
    local_res10 = *param_2;
  }
  if (local_res10 != 0) {
    LOCK();
    *(int *)(local_res10 + 8) = *(int *)(local_res10 + 8) + 1;
    UNLOCK();
  }
  FUN_141a83aa0(param_3 + 0x70,&local_res10);
  return param_2;
}



// FUNCTION 141a8d770 FUN_141a8d770 body=238 status=ok
// SIG undefined FUN_141a8d770(void)

longlong * FUN_141a8d770(undefined8 param_1,longlong *param_2,longlong param_3,uint param_4)

{
  undefined8 *puVar1;
  longlong local_res10;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  uint local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_28 = param_4 & 0xff;
  local_30 = 0x1688;
  local_20 = 0;
  uStack_18 = 0;
  local_34 = 8;
  local_24 = 1;
  local_38 = FUN_141a2ea30(*(undefined4 *)(*(longlong *)(param_3 + 0x98) + 0x50),
                           *(uint *)(param_3 + 0x40) >> 4 & 0xffffff01);
  puVar1 = (undefined8 *)operator_new(0x88);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_141a823c0(puVar1,*(undefined8 *)(param_3 + 0x80));
    *puVar1 = &PTR_FUN_144db3f30;
    puVar1[3] = &PTR_LAB_144db3f38;
    FUN_141a75120(puVar1,&local_38,param_3 + 0x88,0xffffffff);
  }
  *param_2 = (longlong)puVar1;
  local_res10 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
    local_res10 = *param_2;
  }
  if (local_res10 != 0) {
    LOCK();
    *(int *)(local_res10 + 8) = *(int *)(local_res10 + 8) + 1;
    UNLOCK();
  }
  FUN_141a83aa0(param_3 + 0x70,&local_res10);
  return param_2;
}



// FUNCTION 141a8d860 FUN_141a8d860 body=235 status=ok
// SIG undefined FUN_141a8d860(void)

longlong * FUN_141a8d860(undefined8 param_1,longlong *param_2,longlong param_3,uint param_4)

{
  undefined8 *puVar1;
  longlong local_res10;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  uint local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_28 = param_4 & 0xff;
  local_30 = 0x1688;
  local_20 = 0;
  uStack_18 = 0;
  local_34 = 9;
  local_24 = 1;
  local_38 = FUN_141a2ea30(*(undefined4 *)(*(longlong *)(param_3 + 0x90) + 0x50),
                           *(uint *)(param_3 + 0x40) >> 4 & 0xffffff01);
  puVar1 = (undefined8 *)operator_new(0x88);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_141a823c0(puVar1,*(undefined8 *)(param_3 + 0x78));
    *puVar1 = &PTR_FUN_144db3f30;
    puVar1[3] = &PTR_LAB_144db3f38;
    FUN_141a75120(puVar1,&local_38,param_3 + 0x80,0xffffffff);
  }
  *param_2 = (longlong)puVar1;
  local_res10 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
    local_res10 = *param_2;
  }
  if (local_res10 != 0) {
    LOCK();
    *(int *)(local_res10 + 8) = *(int *)(local_res10 + 8) + 1;
    UNLOCK();
  }
  FUN_141a83aa0(param_3 + 0x68,&local_res10);
  return param_2;
}



// FUNCTION 141a8d950 FUN_141a8d950 body=393 status=ok
// SIG undefined FUN_141a8d950(void)

undefined8 *
FUN_141a8d950(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined4 param_4,
             undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong local_res18;
  undefined **local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  lVar4 = 0;
  *param_2 = 0;
  lVar7 = param_3 + -8;
  if (param_3 == 0) {
    lVar7 = lVar4;
  }
  lVar3 = operator_new(0x88);
  if (lVar3 != 0) {
    lVar4 = FUN_141a823c0(lVar3,*(undefined8 *)(lVar7 + 0x30));
  }
  *(longlong *)(lVar7 + 0x158) = lVar4;
  if (((*(byte *)(lVar7 + 0x24) & 6) == 0) || (DAT_146ab6383 == '\0')) {
    local_40 = 0;
    local_48 = &PTR_LAB_144db4328;
    local_24 = param_5;
    local_38 = lVar7;
    local_30 = lVar4;
    local_28 = param_4;
    FUN_141a86110(&local_48,&DAT_146ab6e78);
  }
  else {
    puVar6 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (DAT_146ab6eb0 < puVar5) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x30);
      puVar6 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    DAT_146ab6e8c = DAT_146ab6e8c + 1;
    DAT_146ab6ea8 = puVar5;
    *DAT_146ab6e80 = puVar6;
    DAT_146ab6e80 = puVar6 + 1;
    *DAT_146ab6e80 = 0;
    *puVar6 = &PTR_LAB_144db4328;
    *(undefined1 *)((longlong)puVar6 + 0x24) = param_5;
    puVar6[2] = lVar7;
    puVar6[3] = lVar4;
    *(undefined4 *)(puVar6 + 4) = param_4;
    FRHICommandListImmediate::RHIThreadFence(&DAT_146ab6e78,&local_res18,1);
    if (local_res18 != 0) {
      LOCK();
      piVar1 = (int *)(local_res18 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,lVar4);
  return param_2;
}



// FUNCTION 141a8dae0 FUN_141a8dae0 body=153 status=ok
// SIG undefined FUN_141a8dae0(void)

undefined8 FUN_141a8dae0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  byte *pbVar2;
  longlong lVar3;
  
  pbVar2 = (byte *)(param_4 + 0x20);
  if (param_4 == 0) {
    pbVar2 = &DAT_00000028;
  }
  if ((*pbVar2 & 6) == 0) {
    FUN_141a8d180(param_1,param_2,param_4);
  }
  else {
    lVar3 = 0;
    if ((DAT_146ab6383 != '\0') && (cVar1 = FUN_141ed7f80(param_3), cVar1 != '\0')) {
      lVar3 = param_3;
    }
    FUN_141a8d180(param_1,param_2,param_4);
    if (lVar3 != 0) {
      FRHICommandListImmediate::UnStallRHIThread(lVar3);
    }
  }
  return param_2;
}



// FUNCTION 141a8db80 FUN_141a8db80 body=300 status=ok
// SIG undefined FUN_141a8db80(void)

longlong *
FUN_141a8db80(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4,byte param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  longlong local_res10;
  int local_48 [5];
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  
  local_48[2] = 0x1688;
  local_48[3] = 0;
  uVar5 = 1;
  local_34 = 1;
  local_2c = 0;
  local_24 = 0;
  local_48[1] = 4;
  local_48[4] = (int)param_5;
  uVar1 = *(undefined4 *)(*(longlong *)(param_4 + 0x90) + 0x50);
  iVar2 = FUN_141a2ea30(uVar1,CONCAT31((uint3)(*(uint *)(param_4 + 0x40) >> 0xc),
                                       (char)(*(uint *)(param_4 + 0x40) >> 4)) & 0xffffff01);
  local_48[0] = iVar2;
  iVar3 = FUN_141a71f60(uVar1);
  if (iVar3 == 0x13) {
    if ((iVar2 != 0x15) && (iVar2 == 0x16)) goto LAB_141a8dc13;
  }
  else if ((iVar3 == 0x2c) && ((iVar2 != 0x2e && (iVar2 == 0x2f)))) goto LAB_141a8dc13;
  uVar5 = 0;
LAB_141a8dc13:
  local_30 = uVar5;
  puVar4 = (undefined8 *)operator_new(0x88);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    FUN_141a823c0(puVar4,*(undefined8 *)(param_4 + 0x78));
    *puVar4 = &PTR_FUN_144db3f30;
    puVar4[3] = &PTR_LAB_144db3f38;
    FUN_141a75120(puVar4,local_48,param_4 + 0x80,0xffffffff);
  }
  *param_2 = (longlong)puVar4;
  local_res10 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
    local_res10 = *param_2;
  }
  if (local_res10 != 0) {
    LOCK();
    *(int *)(local_res10 + 8) = *(int *)(local_res10 + 8) + 1;
    UNLOCK();
  }
  FUN_141a83aa0(param_4 + 0x68,&local_res10);
  return param_2;
}



// FUNCTION 141a8dcb0 FUN_141a8dcb0 body=366 status=ok
// SIG undefined FUN_141a8dcb0(void)

longlong *
FUN_141a8dcb0(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4,byte param_5,
             byte param_6,byte param_7)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  longlong local_res10;
  int local_48 [3];
  longlong local_3c;
  undefined8 uStack_34;
  undefined8 local_2c;
  undefined4 local_24;
  
  lVar1 = *(longlong *)(param_4 + 0x90);
  if ((*(uint *)(param_4 + 0x40) >> 0x18 & 1) == 0) {
    uVar4 = (&DAT_1464ca1cc)[(ulonglong)param_7 * 10];
  }
  else {
    uVar4 = 0x57;
  }
  local_48[0] = FUN_141a2ea30(uVar4,*(uint *)(param_4 + 0x40) >> 4 & 0xffffff01);
  local_3c = 0;
  uStack_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_48[2] = 0x1688;
  if (1 < *(uint *)(lVar1 + 0x54)) {
    local_48[1] = 6;
    goto LAB_141a8dd85;
  }
  local_3c = (ulonglong)param_5 << 0x20;
  uStack_34 = (ulonglong)param_6;
  local_48[1] = 4;
  iVar2 = FUN_141a71f60(uVar4);
  if (iVar2 == 0x13) {
    iVar2 = local_48[0] + -0x15;
LAB_141a8dd74:
    if ((iVar2 == 0) || (iVar2 != 1)) goto LAB_141a8dd7f;
    uVar4 = 1;
  }
  else {
    if (iVar2 == 0x2c) {
      iVar2 = local_48[0] + -0x2e;
      goto LAB_141a8dd74;
    }
LAB_141a8dd7f:
    uVar4 = 0;
  }
  uStack_34 = CONCAT44(uVar4,(undefined4)uStack_34);
LAB_141a8dd85:
  puVar3 = (undefined8 *)operator_new(0x88);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_141a823c0(puVar3,*(undefined8 *)(param_4 + 0x78));
    *puVar3 = &PTR_FUN_144db3f30;
    puVar3[3] = &PTR_LAB_144db3f38;
    FUN_141a75120(puVar3,local_48,param_4 + 0x80,0xffffffff);
  }
  *param_2 = (longlong)puVar3;
  local_res10 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    local_res10 = *param_2;
  }
  if (local_res10 != 0) {
    LOCK();
    *(int *)(local_res10 + 8) = *(int *)(local_res10 + 8) + 1;
    UNLOCK();
  }
  FUN_141a83aa0(param_4 + 0x68,&local_res10);
  return param_2;
}



// FUNCTION 141a8de20 FUN_141a8de20 body=311 status=ok
// SIG undefined FUN_141a8de20(void)

longlong *
FUN_141a8de20(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4,byte param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  longlong local_res10;
  int local_48 [5];
  undefined8 local_34;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar5 = 1;
  local_48[2] = 0x1688;
  local_48[3] = 0;
  uVar1 = *(undefined4 *)(*(longlong *)(param_4 + 0x98) + 0x50);
  local_2c = (uint)*(ushort *)(*(longlong *)(param_4 + 0x98) + 0x4c);
  local_48[4] = (int)param_5;
  local_24 = 0;
  local_48[1] = 5;
  local_34 = 1;
  iVar2 = FUN_141a2ea30(uVar1,CONCAT31((uint3)(*(uint *)(param_4 + 0x40) >> 0xc),
                                       (char)(*(uint *)(param_4 + 0x40) >> 4)) & 0xffffff01);
  local_48[0] = iVar2;
  iVar3 = FUN_141a71f60(uVar1);
  if (iVar3 == 0x13) {
    if ((iVar2 != 0x15) && (iVar2 == 0x16)) goto LAB_141a8debb;
  }
  else if ((iVar3 == 0x2c) && ((iVar2 != 0x2e && (iVar2 == 0x2f)))) goto LAB_141a8debb;
  uVar5 = 0;
LAB_141a8debb:
  local_28 = uVar5;
  puVar4 = (undefined8 *)operator_new(0x88);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    FUN_141a823c0(puVar4,*(undefined8 *)(param_4 + 0x80));
    *puVar4 = &PTR_FUN_144db3f30;
    puVar4[3] = &PTR_LAB_144db3f38;
    FUN_141a75120(puVar4,local_48,param_4 + 0x88,0xffffffff);
  }
  *param_2 = (longlong)puVar4;
  local_res10 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
    local_res10 = *param_2;
  }
  if (local_res10 != 0) {
    LOCK();
    *(int *)(local_res10 + 8) = *(int *)(local_res10 + 8) + 1;
    UNLOCK();
  }
  FUN_141a83aa0(param_4 + 0x70,&local_res10);
  return param_2;
}



// FUNCTION 141a8df60 FUN_141a8df60 body=242 status=ok
// SIG undefined FUN_141a8df60(void)

longlong *
FUN_141a8df60(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4,byte param_5)

{
  undefined8 *puVar1;
  longlong local_res10;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  uint local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_28 = (uint)param_5;
  local_30 = 0x1688;
  local_20 = 0;
  uStack_18 = 0;
  local_34 = 8;
  local_24 = 1;
  local_38 = FUN_141a2ea30(*(undefined4 *)(*(longlong *)(param_4 + 0x98) + 0x50),
                           *(uint *)(param_4 + 0x40) >> 4 & 0xffffff01);
  puVar1 = (undefined8 *)operator_new(0x88);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_141a823c0(puVar1,*(undefined8 *)(param_4 + 0x80));
    *puVar1 = &PTR_FUN_144db3f30;
    puVar1[3] = &PTR_LAB_144db3f38;
    FUN_141a75120(puVar1,&local_38,param_4 + 0x88,0xffffffff);
  }
  *param_2 = (longlong)puVar1;
  local_res10 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
    local_res10 = *param_2;
  }
  if (local_res10 != 0) {
    LOCK();
    *(int *)(local_res10 + 8) = *(int *)(local_res10 + 8) + 1;
    UNLOCK();
  }
  FUN_141a83aa0(param_4 + 0x70,&local_res10);
  return param_2;
}



// FUNCTION 141a8e060 FUN_141a8e060 body=239 status=ok
// SIG undefined FUN_141a8e060(void)

longlong *
FUN_141a8e060(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4,byte param_5)

{
  undefined8 *puVar1;
  longlong local_res10;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  uint local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_28 = (uint)param_5;
  local_30 = 0x1688;
  local_20 = 0;
  uStack_18 = 0;
  local_34 = 9;
  local_24 = 1;
  local_38 = FUN_141a2ea30(*(undefined4 *)(*(longlong *)(param_4 + 0x90) + 0x50),
                           *(uint *)(param_4 + 0x40) >> 4 & 0xffffff01);
  puVar1 = (undefined8 *)operator_new(0x88);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_141a823c0(puVar1,*(undefined8 *)(param_4 + 0x78));
    *puVar1 = &PTR_FUN_144db3f30;
    puVar1[3] = &PTR_LAB_144db3f38;
    FUN_141a75120(puVar1,&local_38,param_4 + 0x80,0xffffffff);
  }
  *param_2 = (longlong)puVar1;
  local_res10 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
    local_res10 = *param_2;
  }
  if (local_res10 != 0) {
    LOCK();
    *(int *)(local_res10 + 8) = *(int *)(local_res10 + 8) + 1;
    UNLOCK();
  }
  FUN_141a83aa0(param_4 + 0x68,&local_res10);
  return param_2;
}



// FUNCTION 141a8e150 FUN_141a8e150 body=388 status=ok
// SIG undefined FUN_141a8e150(void)

undefined8 *
FUN_141a8e150(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             undefined4 param_5,undefined1 param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong local_res20;
  undefined **local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  lVar4 = 0;
  *param_2 = 0;
  lVar7 = param_4 + -8;
  if (param_4 == 0) {
    lVar7 = lVar4;
  }
  lVar3 = operator_new(0x88);
  if (lVar3 != 0) {
    lVar4 = FUN_141a823c0(lVar3,*(undefined8 *)(lVar7 + 0x30));
  }
  *(longlong *)(lVar7 + 0x158) = lVar4;
  if (((*(byte *)(lVar7 + 0x24) & 6) == 0) || (DAT_146ab6383 == '\0')) {
    local_40 = 0;
    local_48 = &PTR_LAB_144db4328;
    local_28 = param_5;
    local_24 = param_6;
    local_38 = lVar7;
    local_30 = lVar4;
    FUN_141a86110(&local_48,&DAT_146ab6e78);
  }
  else {
    puVar6 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (DAT_146ab6eb0 < puVar5) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x30);
      puVar6 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    DAT_146ab6e8c = DAT_146ab6e8c + 1;
    DAT_146ab6ea8 = puVar5;
    *DAT_146ab6e80 = puVar6;
    DAT_146ab6e80 = puVar6 + 1;
    *DAT_146ab6e80 = 0;
    *puVar6 = &PTR_LAB_144db4328;
    *(undefined4 *)(puVar6 + 4) = param_5;
    *(undefined1 *)((longlong)puVar6 + 0x24) = param_6;
    puVar6[2] = lVar7;
    puVar6[3] = lVar4;
    FRHICommandListImmediate::RHIThreadFence(&DAT_146ab6e78,&local_res20,1);
    if (local_res20 != 0) {
      LOCK();
      piVar1 = (int *)(local_res20 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,lVar4);
  return param_2;
}



// FUNCTION 141a8e2e0 FUN_141a8e2e0 body=281 status=ok
// SIG undefined FUN_141a8e2e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_141a8e2e0(longlong param_1,longlong *param_2,undefined4 param_3,uint param_4,uint param_5,
             undefined8 param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  uint local_f0;
  uint local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined4 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_b8 = (ulonglong)param_4;
  uStack_9c = 1;
  uStack_98 = 0;
  local_60._0_4_ = 0;
  uStack_c0 = 0;
  uStack_ac = 0x10001;
  if ((param_5 >> 9 & 1) == 0) {
    local_60._0_4_ = 8;
  }
  local_c8 = 1;
  uStack_b0 = 1;
  uStack_a4 = 1;
  local_90 = 1;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_7c = 0;
  uStack_78 = 1;
  uStack_74 = 0x10001;
  local_70 = 0;
  uStack_6c = 1;
  uStack_68 = 0;
  uStack_64 = 1;
  if ((param_5 & 8) != 0) {
    local_60._0_4_ = (uint)local_60 | 4;
  }
  local_60 = CONCAT44(uStack_94,(uint)local_60);
  local_d8 = 0;
  uVar2 = 4;
  if ((param_5 & 0x120) == 0) {
    uVar2 = param_3;
  }
  local_e0 = param_6;
  local_e8 = param_5;
  local_58[0] = 1;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_44 = 0;
  uStack_40 = 1;
  uStack_3c = 0x10001;
  local_38 = 0;
  uStack_34 = 1;
  uStack_30 = 0;
  uStack_2c = 1;
  local_28 = local_60;
  local_f8 = param_3;
  local_f0 = param_4;
  local_80 = param_4;
  local_48 = param_4;
  lVar1 = FUN_141a45050(**(undefined8 **)(param_1 + 0x50),0,local_58,uVar2);
  if (*(char *)(lVar1 + 0xb8) != '\0') {
    *(undefined1 *)(lVar1 + 0x19) = 0;
  }
  *param_2 = lVar1 + 8;
  if (lVar1 + 8 != 0) {
    LOCK();
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a8e400 FUN_141a8e400 body=121 status=ok
// SIG undefined FUN_141a8e400(void)

longlong *
FUN_141a8e400(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined8 param_9)

{
  longlong lVar1;
  
  lVar1 = FUN_141a7e030(param_1,param_3,param_4,1,0,0,param_5,param_6,param_7,param_8,param_9);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a8e480 FUN_141a8e480 body=120 status=ok
// SIG undefined FUN_141a8e480(void)

longlong *
FUN_141a8e480(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
             undefined8 param_9)

{
  longlong lVar1;
  
  lVar1 = FUN_141a7ef50(param_1,param_3,param_4,param_5,1,0,param_6,param_7,1,param_8,param_9);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141a8e500 FUN_141a8e500 body=269 status=ok
// SIG undefined FUN_141a8e500(void)

undefined8
FUN_141a8e500(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
             undefined4 param_9,longlong *param_10)

{
  char cVar1;
  longlong lVar2;
  
  if (*param_10 == 0) {
    (**(code **)(*param_1 + 0x240))
              (param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  }
  else {
    lVar2 = 0;
    if ((DAT_146ab6383 != '\0') && (cVar1 = FUN_141ed7f80(param_3), cVar1 != '\0')) {
      lVar2 = param_3;
    }
    (**(code **)(*param_1 + 0x240))
              (param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
    if (lVar2 != 0) {
      FRHICommandListImmediate::UnStallRHIThread(lVar2);
    }
  }
  return param_2;
}


